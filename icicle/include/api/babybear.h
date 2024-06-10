// WARNING: This file is auto-generated by a script.
// Any changes made to this file may be overwritten.
// Please modify the code generation script instead.
// Path to the code generation script: scripts/gen_c_api.py

#pragma once
#ifndef BABYBEAR_API_H
#define BABYBEAR_API_H

#include <cuda_runtime.h>
#include "gpu-utils/device_context.cuh"
#include "fields/stark_fields/babybear.cuh"
#include "ntt/ntt.cuh"
#include "vec_ops/vec_ops.cuh"
#include "poseidon/poseidon.cuh"
#include "poseidon/tree/merkle.cuh"
#include "poseidon2/poseidon2.cuh"

extern "C" cudaError_t babybear_extension_ntt_cuda(
  const babybear::extension_t* input, int size, ntt::NTTDir dir, ntt::NTTConfig<babybear::scalar_t>& config, babybear::extension_t* output);

extern "C" cudaError_t babybear_create_poseidon2_constants_cuda(
  int width,
  int alpha,
  int internal_rounds,
  int external_rounds,
  const babybear::scalar_t* round_constants,
  const babybear::scalar_t* internal_matrix_diag,
  poseidon2::MdsType mds_type,
  poseidon2::DiffusionStrategy diffusion,
  device_context::DeviceContext& ctx,
  poseidon2::Poseidon2Constants<babybear::scalar_t>* poseidon_constants);

extern "C" cudaError_t babybear_init_poseidon2_constants_cuda(
  int width,
  poseidon2::MdsType mds_type,
  poseidon2::DiffusionStrategy diffusion,
  device_context::DeviceContext& ctx,
  poseidon2::Poseidon2Constants<babybear::scalar_t>* poseidon_constants);

extern "C" cudaError_t babybear_poseidon2_hash_cuda(
  const babybear::scalar_t* input,
  babybear::scalar_t* output,
  int number_of_states,
  int width,
  const poseidon2::Poseidon2Constants<babybear::scalar_t>& constants,
  poseidon2::Poseidon2Config& config);

extern "C" cudaError_t babybear_release_poseidon2_constants_cuda(
  poseidon2::Poseidon2Constants<babybear::scalar_t>* constants,
  device_context::DeviceContext& ctx);

extern "C" cudaError_t babybear_mul_cuda(
  babybear::scalar_t* vec_a, babybear::scalar_t* vec_b, int n, vec_ops::VecOpsConfig& config, babybear::scalar_t* result);

extern "C" cudaError_t babybear_add_cuda(
  babybear::scalar_t* vec_a, babybear::scalar_t* vec_b, int n, vec_ops::VecOpsConfig& config, babybear::scalar_t* result);

extern "C" cudaError_t babybear_accumulate_cuda(
  babybear::scalar_t* vec_a, babybear::scalar_t* vec_b, int n, vec_ops::VecOpsConfig& config);

extern "C" cudaError_t babybear_sub_cuda(
  babybear::scalar_t* vec_a, babybear::scalar_t* vec_b, int n, vec_ops::VecOpsConfig& config, babybear::scalar_t* result);

extern "C" cudaError_t babybear_transpose_matrix_cuda(
  const babybear::scalar_t* input,
  uint32_t row_size,
  uint32_t column_size,
  babybear::scalar_t* output,
  device_context::DeviceContext& ctx,
  bool on_device,
  bool is_async);

extern "C" cudaError_t babybear_bit_reverse_cuda(
  const babybear::scalar_t* input,
  uint64_t n,
  vec_ops::BitReverseConfig& config,
  babybear::scalar_t* output);

extern "C" void babybear_generate_scalars(babybear::scalar_t* scalars, int size);

extern "C" cudaError_t babybear_scalar_convert_montgomery(
  babybear::scalar_t* d_inout, size_t n, bool is_into, device_context::DeviceContext& ctx);

extern "C" cudaError_t babybear_initialize_domain(
  babybear::scalar_t* primitive_root, device_context::DeviceContext& ctx, bool fast_twiddles_mode);

extern "C" cudaError_t babybear_ntt_cuda(
  const babybear::scalar_t* input, int size, ntt::NTTDir dir, ntt::NTTConfig<babybear::scalar_t>& config, babybear::scalar_t* output);

extern "C" cudaError_t babybear_release_domain(device_context::DeviceContext& ctx);

extern "C" void babybear_extension_generate_scalars(babybear::extension_t* scalars, int size);

extern "C" cudaError_t babybear_extension_scalar_convert_montgomery(
  babybear::extension_t* d_inout, size_t n, bool is_into, device_context::DeviceContext& ctx);

extern "C" cudaError_t babybear_extension_mul_cuda(
  babybear::extension_t* vec_a, babybear::extension_t* vec_b, int n, vec_ops::VecOpsConfig& config, babybear::extension_t* result);

extern "C" cudaError_t babybear_extension_add_cuda(
  babybear::extension_t* vec_a, babybear::extension_t* vec_b, int n, vec_ops::VecOpsConfig& config, babybear::extension_t* result);

extern "C" cudaError_t babybear_extension_sub_cuda(
  babybear::extension_t* vec_a, babybear::extension_t* vec_b, int n, vec_ops::VecOpsConfig& config, babybear::extension_t* result);

extern "C" cudaError_t babybear_extension_transpose_matrix_cuda(
  const babybear::extension_t* input,
  uint32_t row_size,
  uint32_t column_size,
  babybear::extension_t* output,
  device_context::DeviceContext& ctx,
  bool on_device,
  bool is_async);

#endif