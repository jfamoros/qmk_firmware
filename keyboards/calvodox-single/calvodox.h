#pragma once

#include "quantum.h"

#define LAYOUT_ortho_5x7( \
  k00, k01, k02, k03, k04, k05,          \
  k14, k15, k16, k17, k18, k19, k06,     \
  k28, k29, k30, k31, k32, k33, k20,     \
  k42, k43, k44, k45, k46, k47, k34, k48,\
  k56, k57, k58, k59,    k60,   k61, k62 \
) \
{ \
    { k00, k01, k02, k03, k04, k05, k06 }, \
    { k14, k15, k16, k17, k18, k19, k20 }, \
    { k28, k29, k30, k31, k32, k33, k34 }, \
    { k42, k43, k44, k45, k46, k47, k48 }, \
    { k56, k57, k58, k59, k60, k61, k62 }  \
}
