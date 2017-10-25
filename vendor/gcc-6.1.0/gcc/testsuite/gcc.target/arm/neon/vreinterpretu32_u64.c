/* Test the `vreinterpretu32_u64' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0" } */
/* { dg-add-options arm_neon } */

#include "arm_neon.h"

void test_vreinterpretu32_u64 (void)
{
  uint32x2_t out_uint32x2_t;
  uint64x1_t arg0_uint64x1_t;

  out_uint32x2_t = vreinterpret_u32_u64 (arg0_uint64x1_t);
}
