#pragma once
#ifndef SRC_EXTRAS_KCOREADDONS_QT6C_LIBKSTRINGHANDLER_H
#define SRC_EXTRAS_KCOREADDONS_QT6C_LIBKSTRINGHANDLER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kstringhandler.html)

/// [Upstream resources](https://api.kde.org/kstringhandler.html#capwords)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 const char*
///
const char* k_stringhandler_capwords(const char* param1);

/// [Upstream resources](https://api.kde.org/kstringhandler.html#capwords)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param param1 const char**
///
const char** k_stringhandler_capwords2(const char* param1[static 1]);

/// [Upstream resources](https://api.kde.org/kstringhandler.html#lsqueeze)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 const char*
/// @param param2 int
///
const char* k_stringhandler_lsqueeze(const char* param1, int param2);

/// [Upstream resources](https://api.kde.org/kstringhandler.html#csqueeze)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 const char*
/// @param param2 int
///
const char* k_stringhandler_csqueeze(const char* param1, int param2);

/// [Upstream resources](https://api.kde.org/kstringhandler.html#rsqueeze)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 const char*
/// @param param2 int
///
const char* k_stringhandler_rsqueeze(const char* param1, int param2);

/// [Upstream resources](https://api.kde.org/kstringhandler.html#perlSplit)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param param1 const char*
/// @param param2 const char*
/// @param param3 int
///
const char** k_stringhandler_perl_split2(const char* param1, const char* param2, int param3);

/// [Upstream resources](https://api.kde.org/kstringhandler.html#perlSplit)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param param1 QChar*
/// @param param2 const char*
/// @param param3 int
///
const char** k_stringhandler_perl_split3(void* param1, const char* param2, int param3);

/// [Upstream resources](https://api.kde.org/kstringhandler.html#perlSplit)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param param1 QRegularExpression*
/// @param param2 const char*
/// @param param3 int
///
const char** k_stringhandler_perl_split4(void* param1, const char* param2, int param3);

/// [Upstream resources](https://api.kde.org/kstringhandler.html#tagUrls)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 const char*
///
const char* k_stringhandler_tag_urls(const char* param1);

/// [Upstream resources](https://api.kde.org/kstringhandler.html#obscure)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 const char*
///
const char* k_stringhandler_obscure(const char* param1);

/// [Upstream resources](https://api.kde.org/kstringhandler.html#preProcessWrap)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 const char*
///
const char* k_stringhandler_pre_process_wrap(const char* param1);

/// [Upstream resources](https://api.kde.org/kstringhandler.html#logicalLength)
///
/// @param param1 const char*
///
int32_t k_stringhandler_logical_length(const char* param1);
#endif
