#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSC_LIBKRANDOM_HPP
#define SRC_EXTRAS_KCOREADDONSC_LIBKRANDOM_HPP

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KRandom KRandom;
#endif

libqt_string KRandom_RandomString(int param1);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
