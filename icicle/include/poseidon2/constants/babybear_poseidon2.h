#pragma once
#ifndef BABYBEAR_POSEIDON2_H
#define BABYBEAR_POSEIDON2_H

namespace poseidon2_constants_babybear {

  namespace t2 {
    int internal_rounds = 24;

    int alpha = 7;

    unsigned char mat_diag_m_1[] = {
      0x01, 0x00, 0x00, 0x00,
      0x02, 0x00, 0x00, 0x00,
    };

    unsigned char round_constants[] = {
      0x2a, 0x93, 0xa8, 0x76,
      0x43, 0x25, 0xb3, 0x0b,
      0x80, 0x1a, 0xa1, 0x54,
      0x89, 0x93, 0xf0, 0x29,
      0xc1, 0x8e, 0x8a, 0x4b,
      0xa2, 0xf7, 0xa2, 0x3f,
      0x0c, 0xfd, 0xe3, 0x2b,
      0x3d, 0x0c, 0xb7, 0x6a,
      0xf1, 0xe8, 0xd8, 0x0c,
      0xf0, 0xc8, 0x34, 0x3a,
      0x77, 0xbf, 0x11, 0x3c,
      0xf3, 0x37, 0xeb, 0x27,
      0xcd, 0xaf, 0xdc, 0x06,
      0x2a, 0x4b, 0xfd, 0x19,
      0xc3, 0x65, 0xcd, 0x1c,
      0xc2, 0xa0, 0x33, 0x37,
      0x54, 0x37, 0xb4, 0x18,
      0x76, 0x40, 0xd7, 0x2e,
      0xa6, 0x93, 0x8f, 0x36,
      0xcd, 0x24, 0x80, 0x0e,
      0x9a, 0x28, 0x8f, 0x3b,
      0x7b, 0xfa, 0x5a, 0x4f,
      0x68, 0x2b, 0xc8, 0x64,
      0x80, 0x56, 0x24, 0x76,
      0x2f, 0xac, 0xb4, 0x1a,
      0x8e, 0xf6, 0xa5, 0x3c,
      0xb1, 0x49, 0xbd, 0x14,
      0x15, 0x3b, 0xd0, 0x52,
      0xb3, 0x74, 0xcd, 0x08,
      0x2a, 0x15, 0xdb, 0x1e,
      0x7a, 0x49, 0x37, 0x30,
      0xec, 0x68, 0x8a, 0x49,
      0x28, 0xf2, 0x11, 0x6b,
      0x94, 0x41, 0x21, 0x21,
      0xba, 0xe0, 0x0b, 0x64,
      0x41, 0x82, 0xd1, 0x4b,
      0x34, 0x46, 0x09, 0x20,
      0xd8, 0x22, 0x6e, 0x12,
      0xd1, 0x13, 0xd2, 0x42,
      0x27, 0xb6, 0x7d, 0x66,
      0xa8, 0x5e, 0x34, 0x29,
      0xfa, 0xed, 0x79, 0x4e,
      0x20, 0xbc, 0x2a, 0x02,
      0xca, 0xe6, 0xa8, 0x36,
      0x45, 0x1d, 0xf1, 0x05,
      0x22, 0x46, 0x1d, 0x31,
      0x98, 0x75, 0x6d, 0x34,
      0xf3, 0x8e, 0xb1, 0x61,
    };
  }


  namespace t3 {
    int internal_rounds = 17;

    int alpha = 7;

    unsigned char mat_diag_m_1[] = {
      0x01, 0x00, 0x00, 0x00,
      0x01, 0x00, 0x00, 0x00,
      0x02, 0x00, 0x00, 0x00,
    };

    unsigned char round_constants[] = {
      0x97, 0x6c, 0x0c, 0x46,
      0x45, 0x13, 0x3f, 0x76,
      0x69, 0xb9, 0x4f, 0x35,
      0x4d, 0x24, 0x50, 0x06,
      0xad, 0x7b, 0x2c, 0x74,
      0xe6, 0xe4, 0x0a, 0x42,
      0x2f, 0x92, 0xb1, 0x24,
      0x87, 0x84, 0xb3, 0x54,
      0x25, 0xa5, 0xd8, 0x67,
      0xd8, 0x21, 0x37, 0x0e,
      0x61, 0xf2, 0xb8, 0x4b,
      0x12, 0x0d, 0x83, 0x67,
      0x6c, 0x9a, 0x12, 0x70,
      0xe0, 0x69, 0xba, 0x11,
      0x41, 0xf8, 0x3b, 0x46,
      0x2f, 0xa6, 0xd4, 0x32,
      0x81, 0x89, 0x27, 0x67,
      0x1f, 0x5c, 0x95, 0x13,
      0x20, 0x90, 0x60, 0x26,
      0x76, 0x77, 0xf5, 0x38,
      0x0d, 0x14, 0x84, 0x46,
      0x72, 0xfa, 0x37, 0x09,
      0xd0, 0x9e, 0x9c, 0x03,
      0x4e, 0x4f, 0x8c, 0x0a,
      0x4d, 0x32, 0x53, 0x43,
      0x28, 0xac, 0x70, 0x00,
      0x9b, 0xe9, 0xb3, 0x1b,
      0xd0, 0x72, 0xbe, 0x4e,
      0xd3, 0xc2, 0x5d, 0x26,
      0xf7, 0x49, 0x77, 0x01,
      0x86, 0x5d, 0x26, 0x69,
      0x42, 0x98, 0x8c, 0x0e,
      0x82, 0xd7, 0x0c, 0x4c,
      0x61, 0x43, 0x37, 0x64,
      0x74, 0x51, 0x8e, 0x15,
      0x75, 0x65, 0x5c, 0x0b,
      0xc2, 0x66, 0x7a, 0x08,
      0x98, 0xa4, 0xaf, 0x67,
      0x22, 0x09, 0x7f, 0x1b,
      0xdd, 0x8c, 0xb4, 0x25,
      0xfc, 0x9a, 0x91, 0x01,
      0x57, 0xff, 0x3a, 0x52,
      0xf8, 0x0c, 0x00, 0x3c,
      0x9a, 0x7c, 0x00, 0x21,
      0xa1, 0x14, 0xf6, 0x3d,
      0x29, 0xa3, 0x9c, 0x6f,
      0xcf, 0x10, 0xfe, 0x17,
      0xa1, 0xc1, 0x58, 0x18,
      0xfe, 0xc6, 0x79, 0x67,
      0x2c, 0xa1, 0x4c, 0x0a,
      0x4d, 0x0c, 0x18, 0x36,
      0x59, 0x7e, 0xd1, 0x54,
      0xd8, 0xab, 0xbc, 0x23,
    };
  }


  namespace t4 {
    int internal_rounds = 21;

    int alpha = 7;

    unsigned char mat_diag_m_1[] = {
      0x47, 0x6f, 0xbf, 0x35,
      0x9f, 0x66, 0x82, 0x69,
      0xb2, 0x52, 0xf8, 0x41,
      0xb8, 0xda, 0x5c, 0x37,
    };

    unsigned char round_constants[] = {
      0x6a, 0x9b, 0x14, 0x1b,
      0x3b, 0xda, 0x0a, 0x55,
      0x72, 0x0f, 0x88, 0x22,
      0xde, 0x76, 0x29, 0x16,
      0x5b, 0x03, 0x59, 0x14,
      0x51, 0xb8, 0x23, 0x5b,
      0x50, 0x6c, 0xcb, 0x0e,
      0x6e, 0x90, 0x25, 0x5e,
      0x64, 0x79, 0x62, 0x2e,
      0x43, 0xaf, 0xed, 0x13,
      0x1a, 0xa9, 0x39, 0x0f,
      0xb2, 0x36, 0x10, 0x4d,
      0x71, 0x1a, 0x15, 0x07,
      0x2c, 0xd3, 0x88, 0x06,
      0x08, 0x23, 0x0c, 0x64,
      0xc0, 0x3a, 0x82, 0x4a,
      0x1a, 0x06, 0x4a, 0x66,
      0x76, 0x92, 0x5f, 0x73,
      0x59, 0xaa, 0x33, 0x1d,
      0xad, 0x66, 0x42, 0x44,
      0xc1, 0x8d, 0xa9, 0x65,
      0x1c, 0x7e, 0x0f, 0x21,
      0xeb, 0x29, 0xc4, 0x05,
      0xd5, 0xf1, 0xc9, 0x12,
      0x08, 0x69, 0xe1, 0x56,
      0x0f, 0x00, 0xc4, 0x2c,
      0x5d, 0x17, 0xc1, 0x4c,
      0x0c, 0x83, 0x96, 0x46,
      0x5e, 0xab, 0x76, 0x72,
      0x80, 0xe5, 0x29, 0x04,
      0x35, 0xdf, 0xad, 0x1e,
      0x4b, 0x81, 0x04, 0x3d,
      0x0c, 0xd1, 0xe9, 0x0c,
      0xb2, 0xd2, 0x1b, 0x0c,
      0x62, 0xfe, 0x0a, 0x5c,
      0x5c, 0xd0, 0xd3, 0x41,
      0xa8, 0xfb, 0xa8, 0x4e,
      0x73, 0x59, 0x41, 0x36,
      0x2b, 0x2a, 0x6c, 0x1f,
      0xc9, 0x47, 0xc4, 0x0f,
      0x31, 0xec, 0x06, 0x0e,
      0x3b, 0x0d, 0x9e, 0x75,
      0x9d, 0x8b, 0x92, 0x53,
      0x41, 0x1a, 0x03, 0x1f,
      0xdc, 0x57, 0x43, 0x08,
      0x08, 0x4a, 0xa4, 0x18,
      0x22, 0x99, 0x97, 0x4e,
      0x7e, 0x77, 0x1b, 0x59,
      0x28, 0xaa, 0x98, 0x16,
      0xe2, 0xed, 0x89, 0x6c,
      0xeb, 0x1e, 0x94, 0x49,
      0x66, 0x14, 0xd7, 0x23,
      0x20, 0xef, 0xa1, 0x4c,
    };
  }


  namespace t8 {
    int internal_rounds = 12;

    int alpha = 7;

    unsigned char mat_diag_m_1[] = {
      0x1b, 0x69, 0xa3, 0x17,
      0x79, 0x98, 0x84, 0x00,
      0xe3, 0x62, 0x7b, 0x1f,
      0x10, 0x7b, 0x96, 0x05,
      0x5a, 0x86, 0x7c, 0x42,
      0xae, 0x41, 0x33, 0x3f,
      0x5b, 0x0f, 0x49, 0x52,
      0xc5, 0x46, 0x88, 0x46,
    };

    unsigned char round_constants[] = {
      0xde, 0x8c, 0x97, 0x11,
      0xcd, 0xaa, 0x1b, 0x53,
      0x61, 0x3e, 0xfc, 0x62,
      0xd7, 0x43, 0x54, 0x6c,
      0xea, 0x7b, 0x3f, 0x21,
      0x50, 0xaf, 0x1d, 0x44,
      0xca, 0xb0, 0x73, 0x5b,
      0x8a, 0x45, 0xac, 0x37,
      0x2a, 0x45, 0x8d, 0x57,
      0x69, 0xd8, 0x05, 0x11,
      0x21, 0x25, 0x97, 0x5f,
      0x88, 0xc6, 0x8a, 0x63,
      0x6c, 0x20, 0xbb, 0x22,
      0x4b, 0xb7, 0x2b, 0x3d,
      0x9e, 0x65, 0xb3, 0x08,
      0x35, 0x40, 0x99, 0x5c,
      0xb5, 0x23, 0xf8, 0x0b,
      0x71, 0x6f, 0x12, 0x0f,
      0x22, 0x0e, 0x3f, 0x4b,
      0x79, 0xc9, 0x74, 0x32,
      0xde, 0x2f, 0x7e, 0x2a,
      0x43, 0xfc, 0x5e, 0x4c,
      0x78, 0x0a, 0xc1, 0x51,
      0x9b, 0x54, 0x63, 0x1b,
      0x23, 0x48, 0x6b, 0x3f,
      0xa4, 0x9d, 0x3d, 0x4e,
      0x1c, 0xe9, 0x9f, 0x66,
      0x31, 0x72, 0xf2, 0x51,
      0x6c, 0x6c, 0xeb, 0x47,
      0xdb, 0x68, 0xbe, 0x2c,
      0x0d, 0xb2, 0x09, 0x3a,
      0x02, 0x3c, 0xcd, 0x19,
      0x5e, 0xb9, 0x69, 0x3d,
      0x02, 0x8f, 0xe0, 0x47,
      0x24, 0x1f, 0xd5, 0x73,
      0x99, 0x9a, 0x68, 0x18,
      0x9d, 0x8b, 0x7d, 0x2d,
      0x71, 0xc9, 0x19, 0x2a,
      0x15, 0xbd, 0xfe, 0x0a,
      0xff, 0xa7, 0xb8, 0x69,
      0x3b, 0x0d, 0xb2, 0x1b,
      0x59, 0x27, 0xfa, 0x24,
      0x1d, 0xf7, 0x34, 0x73,
      0xb1, 0x30, 0xe2, 0x09,
      0x0d, 0xf5, 0x94, 0x07,
      0x12, 0x22, 0x4d, 0x07,
      0x20, 0x8f, 0x6c, 0x1a,
      0xf5, 0xe8, 0xab, 0x1b,
      0x2e, 0x5c, 0xd1, 0x16,
      0xfc, 0xb5, 0xfb, 0x49,
      0x83, 0xf3, 0xcd, 0x1e,
      0xbc, 0xc7, 0x3d, 0x06,
      0x85, 0x4a, 0x5d, 0x54,
      0x4c, 0x50, 0x49, 0x6a,
      0x0c, 0x67, 0x43, 0x38,
      0x69, 0x05, 0x6e, 0x58,
      0xdd, 0x01, 0xa8, 0x2a,
      0x42, 0xaf, 0xb4, 0x38,
      0xae, 0xcc, 0x37, 0x59,
      0xa6, 0x72, 0x7d, 0x2d,
      0xd1, 0x5b, 0x1a, 0x51,
      0x54, 0xf5, 0xc9, 0x0d,
      0x6e, 0x28, 0x3e, 0x2c,
      0xbe, 0x45, 0x2b, 0x30,
      0xcc, 0x5f, 0xe0, 0x6e,
      0x46, 0x86, 0x63, 0x27,
      0xa2, 0xc4, 0x6f, 0x2b,
      0x13, 0xb9, 0x10, 0x4c,
      0xd2, 0x71, 0x04, 0x42,
      0xd2, 0x08, 0xb9, 0x29,
      0xd5, 0x7f, 0xf9, 0x33,
      0xc5, 0x4f, 0x83, 0x06,
      0xed, 0xe4, 0xbe, 0x70,
      0x41, 0x75, 0xe5, 0x4f,
      0x99, 0x9e, 0x0e, 0x62,
      0xe6, 0xad, 0x55, 0x63,
    };
  }


  namespace t12 {
    int internal_rounds = 10;

    int alpha = 7;

    unsigned char mat_diag_m_1[] = {
      0x7f, 0xd1, 0xe6, 0x5c,
      0x07, 0x01, 0x2b, 0x39,
      0x4c, 0x12, 0xbd, 0x0c,
      0xb6, 0x99, 0xf0, 0x06,
      0xb4, 0xeb, 0xb3, 0x6c,
      0xb1, 0x69, 0x30, 0x36,
      0x37, 0x7c, 0xe4, 0x4d,
      0x0b, 0x5a, 0xaf, 0x06,
      0x5e, 0x04, 0xa0, 0x52,
      0x0d, 0x38, 0x9f, 0x3e,
      0x1e, 0xc1, 0xf8, 0x0d,
      0x85, 0x29, 0xa3, 0x63,
    };

    unsigned char round_constants[] = {
      0x88, 0xbb, 0xd3, 0x44,
      0xc9, 0x48, 0x41, 0x77,
      0x5e, 0x42, 0x62, 0x15,
      0x8b, 0x62, 0x70, 0x50,
      0x90, 0x94, 0x79, 0x68,
      0x2e, 0x43, 0x6f, 0x04,
      0x58, 0x43, 0x2e, 0x0f,
      0x49, 0x90, 0xc9, 0x53,
      0x51, 0x60, 0x1c, 0x75,
      0x5a, 0xbc, 0x9e, 0x5b,
      0xf0, 0x93, 0x88, 0x05,
      0x7d, 0xdd, 0xd5, 0x0d,
      0xac, 0x4e, 0x2b, 0x4c,
      0xe0, 0x8b, 0x52, 0x5a,
      0xc3, 0xbc, 0x5f, 0x67,
      0x60, 0x9d, 0x0c, 0x74,
      0xc2, 0xde, 0xc6, 0x4b,
      0xe4, 0xa8, 0xc5, 0x23,
      0x8c, 0xbd, 0x89, 0x31,
      0x5c, 0x18, 0xce, 0x11,
      0x90, 0xbb, 0xb9, 0x68,
      0x8f, 0x9d, 0x0e, 0x67,
      0xbc, 0xad, 0x3e, 0x70,
      0xf0, 0xfa, 0x02, 0x71,
      0xaa, 0x38, 0x68, 0x57,
      0xc6, 0x76, 0x6c, 0x1b,
      0xb4, 0x00, 0xf5, 0x51,
      0xb6, 0x39, 0xd6, 0x15,
      0xc9, 0x45, 0x02, 0x5c,
      0xbb, 0xf3, 0x8d, 0x6f,
      0x2b, 0xc3, 0x0c, 0x4d,
      0x8b, 0xc0, 0xb3, 0x47,
      0x3c, 0x2b, 0x29, 0x19,
      0xbe, 0x30, 0x62, 0x09,
      0x43, 0x9b, 0x3c, 0x17,
      0xfa, 0x58, 0x35, 0x25,
      0xae, 0x7b, 0x78, 0x72,
      0xb3, 0x9d, 0xca, 0x47,
      0x4b, 0x4b, 0x23, 0x44,
      0x93, 0xde, 0x47, 0x4f,
      0x57, 0xf5, 0x09, 0x73,
      0xf8, 0x13, 0x71, 0x0e,
      0x02, 0xa8, 0xcf, 0x5c,
      0x30, 0x4e, 0xf8, 0x45,
      0x5f, 0x06, 0x8a, 0x51,
      0x59, 0xf5, 0x6d, 0x2f,
      0x68, 0x5d, 0x81, 0x69,
      0xa1, 0xe8, 0x3f, 0x27,
      0x63, 0x77, 0x31, 0x43,
      0x9e, 0xc8, 0xe4, 0x74,
      0x7e, 0x2b, 0x16, 0x42,
      0xa5, 0xf9, 0xa3, 0x2e,
      0x04, 0x0c, 0xb3, 0x2b,
      0x74, 0x44, 0x74, 0x24,
      0x0b, 0xa4, 0xe8, 0x69,
      0x70, 0x1c, 0x95, 0x50,
      0xbf, 0x91, 0xff, 0x47,
      0xc6, 0x98, 0x7f, 0x5d,
      0xc0, 0xac, 0xce, 0x2b,
      0x3b, 0x2f, 0xa2, 0x32,
      0x64, 0x46, 0x4b, 0x6e,
      0x7c, 0x90, 0xd5, 0x45,
      0x10, 0x3f, 0xa6, 0x2a,
      0x6d, 0xb3, 0xed, 0x48,
      0xf9, 0xa0, 0xe8, 0x4c,
      0xfe, 0x73, 0x06, 0x19,
      0x23, 0x83, 0x87, 0x74,
      0x5b, 0x3e, 0x95, 0x0c,
      0xb8, 0x1b, 0x25, 0x6c,
      0x31, 0x00, 0x1b, 0x6a,
      0x44, 0x31, 0xc8, 0x66,
      0x9a, 0x7c, 0xe5, 0x29,
      0xbc, 0xd4, 0xc4, 0x70,
      0x94, 0x5f, 0xef, 0x4a,
      0x14, 0x70, 0x8a, 0x35,
      0xae, 0x8e, 0x8d, 0x07,
      0x10, 0xe8, 0x6b, 0x41,
      0x86, 0xcb, 0xda, 0x77,
      0xc3, 0x8c, 0x95, 0x36,
      0xbd, 0x5d, 0x12, 0x3d,
      0xf2, 0x3b, 0xe4, 0x6c,
      0xe0, 0xb7, 0xe0, 0x16,
      0x32, 0x32, 0xde, 0x50,
      0xa8, 0xfe, 0x66, 0x34,
      0x6d, 0xba, 0xab, 0x1d,
      0xb6, 0xe2, 0xef, 0x5c,
      0xe4, 0x3d, 0xcb, 0x0f,
      0x6a, 0xa8, 0xd0, 0x16,
      0x47, 0xda, 0xb9, 0x2b,
      0x29, 0x3a, 0xab, 0x1a,
      0x0b, 0xda, 0x0a, 0x2e,
      0xb6, 0xe3, 0x3e, 0x3c,
      0xe3, 0x8b, 0x67, 0x3a,
      0x90, 0xe5, 0xfe, 0x19,
      0x04, 0xff, 0x84, 0x00,
      0x25, 0x6b, 0xae, 0x35,
      0x7d, 0xaf, 0x1e, 0x76,
      0xa7, 0xfc, 0xd3, 0x0e,
      0xc4, 0x59, 0x6b, 0x15,
      0xf5, 0x73, 0xe2, 0x55,
      0xf5, 0x07, 0x19, 0x2f,
      0x1d, 0xdd, 0x30, 0x34,
      0xc6, 0x00, 0x16, 0x10,
      0x47, 0x89, 0xb3, 0x66,
      0xe0, 0x50, 0x22, 0x21,
      0x2c, 0xfa, 0xbe, 0x62,
    };
  }


  namespace t16 {
    int internal_rounds = 13;

    int alpha = 7;

    unsigned char mat_diag_m_1[] = {
      0x94, 0x2d, 0x63, 0x0a,
      0xb7, 0x57, 0xb6, 0x6d,
      0x9e, 0xdc, 0xfb, 0x56,
      0x8a, 0x3d, 0x2b, 0x05,
      0x01, 0x52, 0x74, 0x33,
      0x8c, 0x10, 0x03, 0x5c,
      0x7b, 0xa3, 0xeb, 0x0b,
      0x8b, 0x2e, 0x8c, 0x25,
      0x39, 0x9f, 0x02, 0x12,
      0xce, 0x09, 0x49, 0x69,
      0x24, 0x17, 0x23, 0x6d,
      0x22, 0xb2, 0xc3, 0x21,
      0xa5, 0x04, 0x09, 0x3c,
      0xda, 0xac, 0xd6, 0x01,
      0x83, 0x5c, 0x70, 0x27,
      0x02, 0xc8, 0x31, 0x52,
    };

    unsigned char round_constants[] = {
      0xaf, 0xb6, 0xcb, 0x69,
      0xf9, 0x93, 0xad, 0x46,
      0x4e, 0x0f, 0xa0, 0x60,
      0xcd, 0x97, 0x12, 0x6b,
      0xfe, 0x9a, 0x18, 0x23,
      0xef, 0x7b, 0x2e, 0x73,
      0xde, 0x46, 0xc2, 0x72,
      0x00, 0x19, 0x94, 0x2c,
      0xde, 0xee, 0x57, 0x05,
      0x6f, 0x49, 0x80, 0x15,
      0x7b, 0xa7, 0x3e, 0x3a,
      0x71, 0xf2, 0xf3, 0x54,
      0x29, 0xb0, 0x49, 0x0f,
      0xe1, 0x2f, 0x87, 0x47,
      0x36, 0x2e, 0x1e, 0x22,
      0x2e, 0x20, 0xb7, 0x1a,
      0xa6, 0x79, 0x77, 0x48,
      0xd8, 0xc9, 0x51, 0x38,
      0xc0, 0x17, 0xdc, 0x38,
      0x49, 0x88, 0x9f, 0x20,
      0xe8, 0xce, 0x8d, 0x26,
      0xda, 0x48, 0x0c, 0x35,
      0x2e, 0xd3, 0x9a, 0x5b,
      0x2b, 0x27, 0x23, 0x05,
      0x5b, 0x05, 0x89, 0x3f,
      0xb2, 0x94, 0xe8, 0x01,
      0xde, 0xed, 0xdd, 0x13,
      0x34, 0xf3, 0x2e, 0x1b,
      0xb4, 0xd8, 0x07, 0x75,
      0x4e, 0xb9, 0xee, 0x6c,
      0xa2, 0x6b, 0xeb, 0x52,
      0x05, 0x29, 0x64, 0x50,
      0x3f, 0x3f, 0x45, 0x05,
      0xfc, 0x9e, 0x34, 0x06,
      0x7c, 0x78, 0x22, 0x69,
      0x9c, 0xff, 0xbf, 0x04,
      0x4a, 0x71, 0x8c, 0x76,
      0x1a, 0xf2, 0x9f, 0x3e,
      0x9c, 0x7c, 0x73, 0x15,
      0x07, 0xc8, 0x29, 0x22,
      0x8c, 0xf8, 0x47, 0x0d,
      0xcc, 0x0e, 0x7e, 0x09,
      0xa0, 0xdb, 0xea, 0x27,
      0xe4, 0x29, 0x7d, 0x2d,
      0xa0, 0xaa, 0x02, 0x35,
      0xd7, 0x5f, 0x47, 0x0f,
      0x49, 0xda, 0xfb, 0x29,
      0xfd, 0xff, 0x8a, 0x01,
      0x18, 0xb6, 0x15, 0x03,
      0xd1, 0x97, 0x44, 0x6d,
      0x9e, 0x1d, 0x17, 0x1b,
      0xbd, 0x1a, 0x86, 0x52,
      0x01, 0x05, 0x5d, 0x2e,
      0x6c, 0x64, 0xc8, 0x3e,
      0x0a, 0x25, 0x5f, 0x6e,
      0xe6, 0xe8, 0x8a, 0x14,
      0x4a, 0xfa, 0xf5, 0x17,
      0x84, 0xd2, 0x66, 0x3e,
      0x3b, 0xaa, 0x51, 0x00,
      0x13, 0x79, 0x3f, 0x48,
      0x15, 0x5f, 0xfe, 0x2c,
      0xca, 0x27, 0x34, 0x02,
      0x15, 0x83, 0xc7, 0x2c,
      0x47, 0xea, 0x36, 0x1e,
      0xc0, 0x53, 0x80, 0x5a,
      0x39, 0xe6, 0x3b, 0x69,
      0x7d, 0x86, 0x58, 0x38,
      0x6b, 0x4f, 0x33, 0x19,
      0xd8, 0x0f, 0x8f, 0x12,
      0xcb, 0x1c, 0x2b, 0x4e,
      0xe0, 0x0c, 0x21, 0x61,
      0x39, 0x89, 0x31, 0x3c,
      0x22, 0x2f, 0x5b, 0x0b,
      0xd5, 0x11, 0xdb, 0x2e,
      0xdf, 0xff, 0x3e, 0x21,
      0x06, 0x46, 0xac, 0x0c,
      0x6d, 0xf1, 0x1a, 0x24,
      0x0d, 0xa8, 0x90, 0x72,
      0x29, 0x53, 0x7e, 0x6f,
      0xa8, 0xc8, 0x8e, 0x59,
      0xa0, 0x59, 0xa8, 0x76,
      0x68, 0xe8, 0x59, 0x65,
      0xaf, 0x83, 0x7b, 0x65,
      0x3f, 0x1d, 0x27, 0x13,
      0x63, 0x60, 0x87, 0x1f,
      0x37, 0xae, 0xee, 0x0a,
      0xa6, 0x9c, 0x6e, 0x70,
      0xee, 0x0c, 0x40, 0x46,
      0x26, 0x5c, 0xa0, 0x72,
      0x9e, 0x9c, 0x58, 0x2c,
      0xa7, 0x37, 0xbd, 0x20,
      0x10, 0x3d, 0x2d, 0x6a,
      0x67, 0x37, 0x52, 0x20,
      0xc4, 0xe9, 0x8f, 0x5b,
      0xd6, 0x01, 0xa5, 0x2a,
      0x3e, 0xac, 0x01, 0x1e,
      0x54, 0xbc, 0x48, 0x14,
      0x1c, 0xad, 0xe5, 0x5c,
      0x4d, 0xa1, 0x18, 0x49,
      0x3f, 0xa8, 0x46, 0x2c,
      0x76, 0x68, 0xcf, 0x4f,
      0xc8, 0xd5, 0xd8, 0x61,
      0xf9, 0x4f, 0xdf, 0x6d,
      0xd3, 0xa4, 0xfd, 0x11,
      0x8f, 0x3a, 0x93, 0x02,
      0x81, 0xaf, 0x0e, 0x17,
      0x4f, 0x31, 0x9c, 0x5a,
      0x90, 0x25, 0xa1, 0x49,
      0xa1, 0x52, 0xec, 0x35,
      0x11, 0x16, 0xeb, 0x58,
      0x65, 0x1e, 0x48, 0x5e,
      0xc9, 0x25, 0x71, 0x36,
      0xba, 0x33, 0xba, 0x0e,
      0xed, 0x8d, 0xc2, 0x1f,
      0xad, 0x99, 0x63, 0x06,
      0xea, 0xc0, 0xbe, 0x0c,
      0xf0, 0x1a, 0xfd, 0x75,
      0x4e, 0xbf, 0xf5, 0x50,
      0x41, 0x5f, 0x3d, 0x64,
      0x18, 0xe7, 0x4f, 0x6f,
      0xde, 0xbb, 0x3c, 0x5b,
      0x3e, 0xfb, 0x3a, 0x1e,
      0x27, 0xb0, 0x6f, 0x29,
      0x7b, 0x54, 0xe1, 0x45,
      0xab, 0xb2, 0x8d, 0x4a,
      0x19, 0x6d, 0x98, 0x59,
      0xa3, 0xdf, 0xbc, 0x30,
      0x32, 0x39, 0xb6, 0x1d,
      0x24, 0x28, 0x7c, 0x1d,
      0x81, 0x36, 0xb3, 0x53,
      0x47, 0xb7, 0x73, 0x06,
      0xa3, 0x98, 0x8a, 0x03,
      0x60, 0xce, 0x5b, 0x2c,
      0xcd, 0x79, 0x19, 0x35,
      0x73, 0xfb, 0x08, 0x50,
      0x78, 0xca, 0x7b, 0x54,
      0x81, 0xf4, 0x1a, 0x71,
      0x64, 0xbf, 0x93, 0x3f,
      0x7b, 0x98, 0x4d, 0x64,
      0x87, 0xcd, 0x8b, 0x3c,
      0xb8, 0x58, 0x87, 0x60,
    };
  }


  namespace t20 {
    int internal_rounds = 18;

    int alpha = 7;

    unsigned char mat_diag_m_1[] = {
      0xa3, 0x1d, 0x53, 0x60,
      0xdb, 0x32, 0x29, 0x33,
      0x57, 0x5e, 0xf0, 0x61,
      0xf8, 0x50, 0x40, 0x61,
      0xdd, 0xc6, 0x23, 0x43,
      0x47, 0x35, 0xb3, 0x10,
      0xd8, 0xe1, 0x5c, 0x5e,
      0x85, 0x40, 0xa2, 0x19,
      0x93, 0x7e, 0x69, 0x3c,
      0xb9, 0xe6, 0x5d, 0x36,
      0x68, 0x50, 0xf9, 0x71,
      0x28, 0x92, 0x0c, 0x35,
      0x25, 0xd1, 0x83, 0x38,
      0x2e, 0x2e, 0x50, 0x51,
      0x74, 0x81, 0x4a, 0x1a,
      0xb2, 0x81, 0xe0, 0x01,
      0x6a, 0x08, 0xc1, 0x54,
      0x2a, 0xbc, 0x53, 0x12,
      0x34, 0x9b, 0x59, 0x50,
      0xc3, 0x97, 0x5b, 0x02,
    };

    unsigned char round_constants[] = {
      0x97, 0x44, 0xcd, 0x30,
      0x92, 0x7d, 0xcf, 0x67,
      0x86, 0xa7, 0x3c, 0x11,
      0xf7, 0x11, 0xf5, 0x28,
      0x11, 0x03, 0x85, 0x4c,
      0xe8, 0x7b, 0xc0, 0x3d,
      0xb9, 0x14, 0x82, 0x0c,
      0x97, 0x0d, 0x09, 0x18,
      0xfb, 0x35, 0x4f, 0x68,
      0x68, 0xba, 0xee, 0x11,
      0xa7, 0x0c, 0x7d, 0x56,
      0xbc, 0xbe, 0x3f, 0x6d,
      0x60, 0x84, 0x02, 0x47,
      0x33, 0xd4, 0xa8, 0x09,
      0x5c, 0x5d, 0xbc, 0x46,
      0xb2, 0x05, 0x08, 0x11,
      0x82, 0xdc, 0xdd, 0x50,
      0xfa, 0xe4, 0x1e, 0x00,
      0x19, 0x47, 0xed, 0x55,
      0xce, 0xbd, 0x08, 0x47,
      0x2b, 0x0b, 0x53, 0x1a,
      0x00, 0x24, 0x37, 0x6d,
      0x42, 0x1d, 0x10, 0x32,
      0xd0, 0xd7, 0xb0, 0x02,
      0x12, 0xf5, 0x64, 0x30,
      0x64, 0x3c, 0x0f, 0x67,
      0x31, 0x5e, 0x73, 0x35,
      0x44, 0x61, 0x2b, 0x5a,
      0xa6, 0x6b, 0x0d, 0x21,
      0x6a, 0xe6, 0x74, 0x12,
      0x09, 0x3e, 0x2e, 0x21,
      0xf0, 0x2f, 0xe6, 0x57,
      0x74, 0x18, 0x63, 0x6b,
      0x1b, 0x7a, 0x57, 0x6b,
      0xaa, 0xfd, 0x17, 0x0d,
      0x1b, 0xe8, 0xeb, 0x24,
      0xfe, 0xc9, 0xf6, 0x34,
      0x55, 0x5a, 0x1d, 0x59,
      0x42, 0xa9, 0x45, 0x5f,
      0x3f, 0x4f, 0x45, 0x5e,
      0x33, 0x56, 0xb7, 0x23,
      0x70, 0x61, 0x07, 0x55,
      0x82, 0x94, 0xaa, 0x3c,
      0x00, 0xbf, 0x2c, 0x6a,
      0x1b, 0x80, 0x24, 0x72,
      0x64, 0x2d, 0xbb, 0x74,
      0x90, 0x09, 0x6d, 0x2e,
      0x21, 0xb9, 0xea, 0x23,
      0xa8, 0x03, 0x36, 0x66,
      0x7f, 0xe9, 0xe8, 0x03,
      0x3d, 0x5d, 0xdb, 0x04,
      0x27, 0xe8, 0xc1, 0x64,
      0xfe, 0x78, 0xc4, 0x37,
      0x05, 0xc8, 0xef, 0x35,
      0xf9, 0xae, 0x5a, 0x55,
      0x0c, 0xad, 0x63, 0x65,
      0xac, 0xae, 0xc9, 0x14,
      0x72, 0xe1, 0xd6, 0x16,
      0xe9, 0xcb, 0x4f, 0x42,
      0x55, 0x08, 0x38, 0x30,
      0xbf, 0xe5, 0xd4, 0x74,
      0x83, 0xba, 0x75, 0x12,
      0x2d, 0x2a, 0xf3, 0x56,
      0x89, 0x7f, 0xf9, 0x3c,
      0x11, 0x57, 0x0c, 0x44,
      0x8a, 0x7e, 0x68, 0x48,
      0xf8, 0x00, 0x66, 0x49,
      0x9f, 0x42, 0x0e, 0x0b,
      0x26, 0x1e, 0x4b, 0x15,
      0xce, 0xb8, 0x9b, 0x37,
      0xe5, 0x83, 0x76, 0x27,
      0x94, 0xe0, 0x03, 0x44,
      0x40, 0x32, 0x03, 0x12,
      0xd7, 0x06, 0xd0, 0x3b,
      0x1b, 0xee, 0xe6, 0x4e,
      0x4c, 0x76, 0xc6, 0x62,
      0x2f, 0x55, 0x30, 0x72,
      0xe7, 0x1d, 0x34, 0x4f,
      0x49, 0x8c, 0x8f, 0x3c,
      0xe2, 0xbe, 0xc6, 0x6f,
      0x4d, 0xf7, 0x3e, 0x0a,
      0x07, 0x01, 0x71, 0x23,
      0x82, 0x0c, 0x65, 0x24,
      0xd4, 0xeb, 0xba, 0x12,
      0xce, 0xf3, 0xc2, 0x46,
      0xd9, 0x6f, 0x81, 0x57,
      0x1c, 0xe5, 0x3f, 0x44,
      0xab, 0x05, 0x78, 0x2a,
      0xf1, 0x8e, 0x50, 0x3f,
      0x6c, 0x83, 0x0b, 0x15,
      0xfa, 0x4f, 0x01, 0x1c,
      0xbe, 0x86, 0x07, 0x1c,
      0x90, 0x51, 0x64, 0x10,
      0x0a, 0x9c, 0x7b, 0x60,
      0x05, 0x15, 0x96, 0x48,
      0xbb, 0xb7, 0x20, 0x6f,
      0x23, 0xea, 0x5a, 0x5b,
      0x5c, 0x35, 0xe5, 0x1f,
      0xaa, 0x98, 0xef, 0x27,
      0x0b, 0x12, 0x3e, 0x04,
      0xcd, 0x5c, 0x7d, 0x64,
      0xb2, 0x81, 0x5c, 0x45,
      0x3f, 0x7d, 0xc2, 0x6a,
      0x26, 0x61, 0x9f, 0x27,
      0x58, 0x57, 0xa1, 0x76,
      0xa6, 0xb0, 0xc1, 0x58,
      0x01, 0x39, 0xf8, 0x4a,
      0x4f, 0x1d, 0x64, 0x45,
      0x33, 0x8c, 0xfe, 0x1d,
      0x88, 0x0c, 0x72, 0x03,
      0x0d, 0xd4, 0x82, 0x34,
      0x60, 0x89, 0x0d, 0x77,
      0x30, 0xb7, 0x08, 0x61,
      0x84, 0xc0, 0x3f, 0x06,
      0x34, 0x2a, 0x6e, 0x09,
      0xa0, 0x14, 0x05, 0x13,
      0xff, 0x3e, 0xbc, 0x42,
      0x48, 0x58, 0x77, 0x43,
      0xe4, 0x60, 0x29, 0x70,
      0x79, 0x9c, 0xf1, 0x6c,
      0xdd, 0x30, 0x30, 0x4c,
      0x32, 0x79, 0xd2, 0x6d,
      0xe9, 0x0d, 0x35, 0x64,
      0x11, 0x83, 0x0e, 0x48,
      0x2c, 0x63, 0x22, 0x6a,
      0xf6, 0xbc, 0x14, 0x28,
      0xe3, 0x97, 0x71, 0x11,
      0x19, 0xd4, 0x44, 0x48,
      0xa6, 0x81, 0xe1, 0x76,
      0xb4, 0xd7, 0x55, 0x61,
      0x26, 0xed, 0xdb, 0x42,
      0x7b, 0xc2, 0xe9, 0x62,
      0x11, 0x4f, 0x5b, 0x10,
      0x58, 0x58, 0xd4, 0x51,
      0x98, 0x02, 0xfa, 0x33,
      0x28, 0x82, 0xa0, 0x26,
      0x1f, 0x58, 0x14, 0x5f,
      0x37, 0x97, 0xd8, 0x3b,
      0x8f, 0x96, 0x25, 0x23,
      0xba, 0x12, 0x85, 0x41,
      0x2f, 0x44, 0x47, 0x2f,
      0xf5, 0x0a, 0x68, 0x0e,
      0xba, 0x4c, 0x42, 0x0c,
      0xae, 0x85, 0x38, 0x6d,
      0xbe, 0x8c, 0x9c, 0x0a,
      0xa9, 0xf2, 0x85, 0x24,
      0x7f, 0x35, 0x99, 0x1f,
      0x31, 0xd5, 0x58, 0x0f,
      0xb1, 0xf6, 0xd6, 0x32,
      0x6d, 0x87, 0x26, 0x2c,
      0x8e, 0xd3, 0xe3, 0x2d,
      0xc9, 0x6c, 0x7b, 0x5a,
      0xf0, 0xc7, 0xae, 0x1c,
      0x75, 0xf5, 0xa1, 0x4a,
      0xcd, 0x0c, 0xaf, 0x77,
      0x5c, 0xbe, 0xd3, 0x19,
      0xd8, 0x19, 0xa6, 0x0a,
      0x78, 0xea, 0xcf, 0x04,
      0x76, 0xab, 0xb3, 0x0d,
      0xa3, 0xfa, 0xdf, 0x2d,
      0x67, 0x67, 0x24, 0x52,
      0x18, 0xf0, 0xd7, 0x50,
      0x9f, 0xeb, 0x8c, 0x31,
      0x06, 0xa5, 0x69, 0x2e,
      0xfa, 0xd1, 0xd9, 0x4b,
      0x9a, 0x57, 0x0b, 0x2a,
      0xc2, 0x38, 0x12, 0x56,
      0x9a, 0xbb, 0x77, 0x28,
      0x79, 0x2c, 0xed, 0x06,
      0xba, 0x98, 0x99, 0x22,
      0x85, 0x01, 0x7f, 0x73,
      0x31, 0xad, 0x9a, 0x60,
      0x51, 0x35, 0xee, 0x2c,
      0x17, 0xbd, 0x34, 0x44,
      0x6f, 0x54, 0xa8, 0x1d,
      0xe6, 0xfb, 0x32, 0x35,
      0x6d, 0xb9, 0x37, 0x26,
      0x84, 0x40, 0xb0, 0x02,
    };
  }


  namespace t24 {
    int internal_rounds = 21;

    int alpha = 7;

    unsigned char mat_diag_m_1[] = {
      0xf0, 0x33, 0x91, 0x40,
      0xa1, 0xa8, 0x67, 0x16,
      0xb6, 0xc7, 0xa6, 0x06,
      0x0e, 0x16, 0x53, 0x6f,
      0xd1, 0x11, 0x3b, 0x27,
      0x5d, 0x6c, 0x17, 0x03,
      0xf9, 0xbb, 0xf9, 0x72,
      0x91, 0xba, 0xce, 0x73,
      0x1d, 0xf8, 0xde, 0x5c,
      0x85, 0x32, 0x39, 0x01,
      0x06, 0xee, 0xda, 0x46,
      0xa6, 0x7b, 0x5d, 0x06,
      0x6f, 0x2d, 0xd7, 0x52,
      0xe0, 0x05, 0xdd, 0x05,
      0x63, 0x4b, 0xab, 0x3b,
      0x42, 0x38, 0xda, 0x6a,
      0xec, 0xfb, 0xc5, 0x2f,
      0xb0, 0x61, 0x0d, 0x77,
      0xe9, 0xaa, 0x15, 0x57,
      0x90, 0x0e, 0xef, 0x03,
      0x70, 0xc7, 0xb6, 0x75,
      0x5f, 0xdf, 0x2a, 0x24,
      0x4c, 0xca, 0xd0, 0x00,
      0x88, 0xe3, 0xc0, 0x36,
    };

    unsigned char round_constants[] = {
      0x37, 0x0c, 0xa2, 0x0f,
      0x97, 0xbb, 0x95, 0x07,
      0x9c, 0x0b, 0xc6, 0x12,
      0x8e, 0xd8, 0xab, 0x0e,
      0xca, 0x85, 0x64, 0x09,
      0x27, 0x35, 0x09, 0x07,
      0x50, 0x4e, 0x1d, 0x1b,
      0xce, 0x1a, 0xa0, 0x30,
      0x5a, 0x6f, 0xd8, 0x3b,
      0x28, 0x7c, 0xaf, 0x69,
      0x5f, 0x77, 0x94, 0x3f,
      0xe8, 0x60, 0x15, 0x73,
      0xcd, 0x0e, 0x5a, 0x46,
      0x07, 0xf8, 0x4e, 0x57,
      0x70, 0x48, 0xfd, 0x62,
      0x44, 0xfe, 0xcc, 0x52,
      0x14, 0x2b, 0x77, 0x14,
      0x71, 0xf3, 0xed, 0x4d,
      0x7c, 0xcd, 0x0a, 0x26,
      0x58, 0xdc, 0x51, 0x1f,
      0x32, 0x55, 0x12, 0x75,
      0x7b, 0x4d, 0x6a, 0x68,
      0x79, 0xc1, 0xba, 0x54,
      0x06, 0x77, 0x94, 0x31,
      0x3b, 0x9d, 0x79, 0x29,
      0x90, 0xae, 0x01, 0x6e,
      0x64, 0x7a, 0x3a, 0x20,
      0xbe, 0x25, 0x7e, 0x4f,
      0x77, 0x3f, 0x50, 0x72,
      0x69, 0x3b, 0xbd, 0x45,
      0xb4, 0xd6, 0x9b, 0x76,
      0x08, 0x7f, 0x86, 0x5a,
      0x82, 0xa0, 0xdb, 0x4f,
      0x18, 0x43, 0x1c, 0x25,
      0x01, 0x62, 0xf0, 0x28,
      0x3a, 0xc4, 0x88, 0x67,
      0x99, 0x6a, 0x6d, 0x4c,
      0xa8, 0x84, 0x77, 0x35,
      0x51, 0xf0, 0xba, 0x2a,
      0xe6, 0x7d, 0x0f, 0x77,
      0x84, 0xb7, 0x94, 0x17,
      0x7a, 0xc5, 0x96, 0x47,
      0x10, 0x7a, 0x4b, 0x72,
      0xa7, 0x89, 0x99, 0x44,
      0xf1, 0x5c, 0x93, 0x64,
      0xac, 0x4a, 0xe1, 0x59,
      0xb8, 0x0b, 0x62, 0x0e,
      0x3b, 0xa3, 0xf5, 0x3a,
      0x0e, 0xcc, 0x65, 0x44,
      0x8f, 0xf6, 0x9d, 0x01,
      0x68, 0xd0, 0xf8, 0x4a,
      0x82, 0x4f, 0x78, 0x08,
      0xae, 0xde, 0xef, 0x0c,
      0x67, 0xa4, 0x37, 0x63,
      0x16, 0x7a, 0xfa, 0x32,
      0xd6, 0x62, 0x6f, 0x48,
      0x80, 0x74, 0x6a, 0x38,
      0x4a, 0x7c, 0xf1, 0x20,
      0xa8, 0x0d, 0xe5, 0x54,
      0x03, 0xcf, 0x12, 0x20,
      0x50, 0x29, 0xe5, 0x5f,
      0xcd, 0xb6, 0xaf, 0x09,
      0x4e, 0x04, 0x23, 0x25,
      0xef, 0xd0, 0x54, 0x5c,
      0x3c, 0x1f, 0xc0, 0x71,
      0xfb, 0xc4, 0xb2, 0x60,
      0x79, 0xb3, 0x50, 0x40,
      0xa5, 0x70, 0x6a, 0x5e,
      0xf5, 0x43, 0x85, 0x41,
      0x56, 0xbe, 0xde, 0x71,
      0x94, 0x29, 0xad, 0x1a,
      0x83, 0xa4, 0x68, 0x33,
      0x3a, 0x6f, 0xa8, 0x07,
      0xf1, 0x3f, 0xa4, 0x5e,
      0x0e, 0x78, 0x43, 0x24,
      0xf7, 0x44, 0xe4, 0x4c,
      0x82, 0x98, 0x6f, 0x14,
      0x89, 0xb0, 0x32, 0x31,
      0x56, 0xa8, 0x7e, 0x19,
      0xc3, 0x30, 0x70, 0x66,
      0xdc, 0xd5, 0x17, 0x23,
      0xa7, 0x48, 0x2c, 0x0c,
      0x66, 0xdf, 0xb2, 0x56,
      0xe9, 0x81, 0xbd, 0x67,
      0x19, 0xfb, 0xcd, 0x4f,
      0x32, 0xef, 0xaa, 0x4b,
      0x0a, 0xd3, 0x28, 0x03,
      0x0d, 0x76, 0x35, 0x62,
      0x12, 0x29, 0x43, 0x12,
      0x58, 0xe2, 0x49, 0x0a,
      0x70, 0x1b, 0x0e, 0x03,
      0x03, 0xeb, 0xca, 0x48,
      0xe9, 0xd9, 0xe4, 0x49,
      0xc6, 0xb5, 0x51, 0x10,
      0xbe, 0xdb, 0x36, 0x6a,
      0xa5, 0x27, 0xff, 0x4c,
      0xc2, 0x8e, 0xa7, 0x1d,
      0x24, 0x09, 0x0b, 0x73,
      0xf3, 0x6c, 0xb5, 0x3e,
      0x73, 0x30, 0xd9, 0x5b,
      0x97, 0x4c, 0x20, 0x37,
      0x89, 0x2d, 0x64, 0x51,
      0xe8, 0x43, 0xe9, 0x66,
      0xde, 0x72, 0x3e, 0x1a,
      0xe9, 0xb1, 0xbe, 0x70,
      0x3f, 0x3b, 0xff, 0x30,
      0xc4, 0xd1, 0x40, 0x42,
      0x8d, 0x7b, 0x64, 0x12,
      0x65, 0x69, 0xd8, 0x65,
      0x7c, 0x4d, 0xef, 0x49,
      0x97, 0x56, 0x78, 0x47,
      0x9f, 0x96, 0xb3, 0x46,
      0x0e, 0x7a, 0x7b, 0x5c,
      0x60, 0xfc, 0x78, 0x70,
      0x82, 0xd4, 0x22, 0x4f,
      0xee, 0x9a, 0x2a, 0x48,
      0x9d, 0x83, 0xeb, 0x6b,
      0xad, 0x59, 0x29, 0x03,
      0x6a, 0xaf, 0x18, 0x2b,
      0x8c, 0xdc, 0xd3, 0x55,
      0xc8, 0x26, 0xbd, 0x43,
      0x5f, 0x59, 0x41, 0x0c,
      0xe2, 0xd2, 0x48, 0x70,
      0x83, 0x89, 0xdb, 0x00,
      0xd7, 0x63, 0xf5, 0x2a,
      0x8f, 0x75, 0x84, 0x6e,
      0xe1, 0x64, 0x1d, 0x61,
      0xe2, 0x77, 0x99, 0x1f,
      0x0a, 0x3a, 0x16, 0x64,
      0x7b, 0xc2, 0x5f, 0x5c,
      0x61, 0x25, 0xe2, 0x02,
      0xdb, 0x75, 0x2d, 0x3a,
      0x1a, 0xb7, 0xa7, 0x1b,
      0x64, 0x3f, 0x34, 0x34,
      0x5d, 0xb3, 0x06, 0x74,
      0x99, 0x82, 0xdf, 0x19,
      0x0a, 0x48, 0xf4, 0x6f,
      0xc8, 0x81, 0x4a, 0x51,
      0xce, 0x52, 0xab, 0x57,
      0x52, 0x9f, 0xd6, 0x6a,
      0x0d, 0x0e, 0x0c, 0x3e,
      0x14, 0x61, 0x12, 0x48,
      0xcc, 0x62, 0x9d, 0x2a,
      0x23, 0x1f, 0x44, 0x17,
      0xbb, 0x62, 0x57, 0x48,
      0x74, 0x86, 0x21, 0x2f,
      0x4a, 0xc6, 0xfd, 0x06,
      0xf2, 0xb7, 0x61, 0x08,
      0xe6, 0xee, 0x36, 0x3b,
      0x40, 0x10, 0xa1, 0x70,
      0x37, 0x17, 0xb3, 0x04,
      0x72, 0xa8, 0x22, 0x37,
      0x63, 0x1c, 0x35, 0x2a,
      0xdc, 0x60, 0x35, 0x62,
      0xb2, 0x4a, 0x58, 0x62,
      0x04, 0x7c, 0x2c, 0x38,
      0xc7, 0xed, 0xf9, 0x3b,
      0x51, 0xfe, 0x38, 0x0e,
      0x10, 0x3b, 0x6f, 0x37,
      0x78, 0xe1, 0x81, 0x53,
      0xc7, 0x61, 0xfc, 0x3a,
      0x4d, 0xcb, 0x1b, 0x5c,
      0x1f, 0xce, 0x43, 0x66,
      0xc1, 0xf1, 0x0a, 0x2d,
      0xcc, 0x83, 0xf5, 0x08,
      0x0f, 0xf6, 0x6f, 0x5d,
      0xe5, 0xc1, 0x24, 0x63,
      0xb7, 0x2f, 0x41, 0x74,
      0x2e, 0x19, 0xc0, 0x70,
      0x41, 0xf1, 0x72, 0x0b,
      0x11, 0xa1, 0x67, 0x40,
      0x4f, 0x8c, 0x38, 0x57,
      0xec, 0x09, 0x10, 0x35,
      0x59, 0xc1, 0x74, 0x09,
      0xb3, 0x58, 0x9a, 0x53,
      0xff, 0x0c, 0x8c, 0x03,
      0x92, 0x03, 0x6c, 0x47,
      0x5f, 0xc1, 0x7b, 0x3f,
      0x2c, 0xdd, 0x91, 0x44,
      0x55, 0xef, 0x1f, 0x4d,
      0xe3, 0x6a, 0x93, 0x04,
      0xd4, 0x4d, 0x21, 0x58,
      0xad, 0x6a, 0x3c, 0x68,
      0x6b, 0xf1, 0x42, 0x1b,
      0x35, 0x91, 0xc7, 0x6d,
      0xec, 0x71, 0x4e, 0x2d,
      0xea, 0x46, 0x29, 0x3e,
      0xdb, 0xe8, 0xdc, 0x59,
      0x2a, 0x89, 0xee, 0x6c,
      0x50, 0x73, 0xf0, 0x47,
      0x93, 0xce, 0x06, 0x71,
      0xa9, 0xa7, 0xd4, 0x3b,
      0x6a, 0x63, 0xfe, 0x2b,
      0xe9, 0x11, 0x00, 0x43,
      0x6a, 0xd6, 0x1c, 0x00,
      0x5b, 0xaf, 0x7f, 0x30,
      0xfe, 0xf3, 0x9e, 0x0d,
      0x3a, 0x04, 0x40, 0x6d,
      0x0c, 0x47, 0x8f, 0x2e,
      0xe8, 0x65, 0x68, 0x1b,
      0x01, 0x6c, 0x0e, 0x0c,
      0x1f, 0x98, 0x41, 0x4d,
      0x3d, 0x9d, 0x3b, 0x42,
      0xcc, 0x08, 0x04, 0x41,
      0x84, 0x08, 0x3f, 0x26,
      0xd0, 0xbb, 0x11, 0x53,
      0xd8, 0x58, 0xae, 0x4d,
      0xea, 0x1c, 0x40, 0x30,
      0x75, 0xa5, 0xaf, 0x09,
      0x42, 0x5b, 0x3d, 0x4b,
      0x37, 0x0b, 0xac, 0x63,
      0x14, 0xbb, 0xe5, 0x5f,
      0xd4, 0xe9, 0x44, 0x52,
    };
  }

}
#endif