
#include <gtest/gtest.h>
#include <iostream>

#include "icicle/runtime.h"
#include "icicle/vec_ops/vec_ops.h"
#include "icicle/ntt/ntt.h"

#include "icicle/fields/field_config.h"

using namespace field_config;
using namespace icicle;

using FpMicroseconds = std::chrono::duration<float, std::chrono::microseconds::period>;
#define START_TIMER(timer) auto timer##_start = std::chrono::high_resolution_clock::now();
#define END_TIMER(timer, msg, enable)                                                                                  \
  if (enable)                                                                                                          \
    printf(                                                                                                            \
      "%s: %.3f ms\n", msg, FpMicroseconds(std::chrono::high_resolution_clock::now() - timer##_start).count() / 1000);

class FieldApiTest : public ::testing::Test
{
public:
  static inline bool VERBOSE = true;
  static inline std::list<std::string> s_regsitered_devices;

  // SetUpTestSuite/TearDownTestSuite are called once for the entire test suite
  static void SetUpTestSuite()
  {
    s_regsitered_devices = get_registered_devices();
    ASSERT_GT(s_regsitered_devices.size(), 0);
  }
  static void TearDownTestSuite() {}

  // SetUp/TearDown are called before and after each test
  void SetUp() override {}
  void TearDown() override {}
};

TEST_F(FieldApiTest, vectorAddSync)
{
  const int N = 1 << 15;
  auto in_a = std::make_unique<scalar_t[]>(N);
  auto in_b = std::make_unique<scalar_t[]>(N);
  scalar_t::rand_host_many(in_a.get(), N);
  scalar_t::rand_host_many(in_b.get(), N);

  auto out_cpu = std::make_unique<scalar_t[]>(N);
  auto out_cuda = std::make_unique<scalar_t[]>(N);

  auto run = [&](const char* dev_type, scalar_t* out, const char* msg, bool measure, int iters) {
    Device dev = {dev_type, 0};
    icicle_set_device(dev);
    auto config = default_vec_ops_config();

    START_TIMER(VECADD_sync)
    for (int i = 0; i < iters; ++i)
      vector_add(in_a.get(), in_b.get(), N, config, out);
    END_TIMER(VECADD_sync, msg, measure);
  };

  run("CUDA", out_cuda.get(), "CUDA vector add", false /*=measure*/, 1 /*=iters*/); // warmup

  run("CPU", out_cpu.get(), "CPU vector add", VERBOSE /*=measure*/, 16 /*=iters*/);
  run("CUDA", out_cuda.get(), "CUDA vector add (host mem)", VERBOSE /*=measure*/, 16 /*=iters*/);

  ASSERT_EQ(0, memcmp(out_cpu.get(), out_cuda.get(), N * sizeof(scalar_t)));
}

TEST_F(FieldApiTest, vectorAddAsync)
{
  const int N = 1 << 15;
  auto in_a = std::make_unique<scalar_t[]>(N);
  auto in_b = std::make_unique<scalar_t[]>(N);
  scalar_t::rand_host_many(in_a.get(), N);
  scalar_t::rand_host_many(in_b.get(), N);

  auto out_cpu = std::make_unique<scalar_t[]>(N);
  auto out_cuda = std::make_unique<scalar_t[]>(N);

  auto run = [&](const char* dev_type, scalar_t* out, const char* msg, bool measure, int iters) {
    Device dev = {dev_type, 0};
    icicle_set_device(dev);
    // const bool is_cpu = std::string("CPU") == dev.type;

    scalar_t *d_in_a, *d_in_b, *d_out;
    icicleStreamHandle stream;
    icicle_create_stream(&stream);
    icicle_malloc_async((void**)&d_in_a, N * sizeof(scalar_t), stream);
    icicle_malloc_async((void**)&d_in_b, N * sizeof(scalar_t), stream);
    icicle_malloc_async((void**)&d_out, N * sizeof(scalar_t), stream);
    icicle_copy_to_device_async(d_in_a, in_a.get(), N * sizeof(scalar_t), stream);

    auto config = default_vec_ops_config();
    config.is_a_on_device = true;
    config.is_b_on_device = true;
    config.is_result_on_device = true;
    config.is_async = true;
    config.stream = stream;

    START_TIMER(VECADD_async);
    for (int i = 0; i < iters; ++i) {
      vector_add(d_in_a, d_in_b, N, config, d_out);
    }
    END_TIMER(VECADD_async, msg, measure);

    icicle_copy_to_host_async(out, d_out, N * sizeof(scalar_t), stream);
    icicle_stream_synchronize(stream);

    icicle_free_async(d_in_a, stream);
    icicle_free_async(d_in_b, stream);
    icicle_free_async(d_out, stream);
  };

  run("CPU", out_cpu.get(), "CPU vector add", VERBOSE /*=measure*/, 16 /*=iters*/);
  run("CUDA", out_cuda.get(), "CUDA vector add (device mem)", VERBOSE /*=measure*/, 16 /*=iters*/);

  ASSERT_EQ(0, memcmp(out_cpu.get(), out_cuda.get(), N * sizeof(scalar_t)));
}

TEST_F(FieldApiTest, Ntt)
{
  const int N = 1 << 15;
  auto scalars = std::make_unique<scalar_t[]>(N);
  scalar_t::rand_host_many(scalars.get(), N);

  auto out_cpu = std::make_unique<scalar_t[]>(N);
  auto out_cuda = std::make_unique<scalar_t[]>(N);

  auto run = [&](const char* dev_type, scalar_t* out, const char* msg, bool measure, int iters) {
    Device dev = {dev_type, 0};
    icicle_set_device(dev);
    auto config = default_ntt_config<scalar_t>();

    START_TIMER(NTT_sync)
    for (int i = 0; i < iters; ++i)
      ntt(scalars.get(), N, NTTDir::kForward, config, out);
    END_TIMER(NTT_sync, msg, measure);
  };

  run("CPU", out_cpu.get(), "CPU ntt", VERBOSE /*=measure*/, 1 /*=iters*/);
  // run("CUDA", out_cuda.get(), "CUDA ntt (host mem)", VERBOSE /*=measure*/, 1 /*=iters*/);

  // ASSERT_EQ(0, memcmp(out_cpu.get(), out_cuda.get(), N * sizeof(scalar_t)));
}

TEST_F(FieldApiTest, CpuVecAPIs)
{
  const int N = 1 << 15;
  auto in_a = std::make_unique<scalar_t[]>(N);
  auto in_b = std::make_unique<scalar_t[]>(N);
  scalar_t::rand_host_many(in_a.get(), N);
  scalar_t::rand_host_many(in_b.get(), N);

  auto out_cpu_add = std::make_unique<scalar_t[]>(N);
  auto out_cpu_sub = std::make_unique<scalar_t[]>(N);
  auto out_cpu_mul = std::make_unique<scalar_t[]>(N);

  Device dev = {"CPU", 0};
  icicle_set_device(dev);
  auto config = default_vec_ops_config();

  START_TIMER(VEC_OPS)
  vector_add(in_a.get(), in_b.get(), N, config, out_cpu_add.get());
  vector_sub(in_a.get(), in_b.get(), N, config, out_cpu_sub.get());
  vector_mul(in_a.get(), in_b.get(), N, config, out_cpu_mul.get());
  END_TIMER(VEC_OPS, "CPU vec ops took", VERBOSE);

  // TODO real test
  const int test_idx = N >> 1;
  ASSERT_EQ(out_cpu_add[test_idx], in_a[test_idx] + in_b[test_idx]);
  ASSERT_EQ(out_cpu_sub[test_idx], in_a[test_idx] - in_b[test_idx]);
  ASSERT_EQ(out_cpu_mul[test_idx], in_a[test_idx] * in_b[test_idx]);
}

int main(int argc, char** argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}