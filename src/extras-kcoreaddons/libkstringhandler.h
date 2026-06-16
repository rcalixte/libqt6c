#pragma once
#ifndef SRC_EXTRAS_KCOREADDONS_QT6C_LIBKSTRINGHANDLER_H
#define SRC_EXTRAS_KCOREADDONS_QT6C_LIBKSTRINGHANDLER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kstringhandler.html)

/// [Upstream resources](https://api.kde.org/kstringhandler.html#capwords)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param text const char*
///
const char* k_stringhandler_capwords(const char* text);

/// [Upstream resources](https://api.kde.org/kstringhandler.html#capwords)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param list const char**
///
const char** k_stringhandler_capwords2(const char* list[static 1]);

/// [Upstream resources](https://api.kde.org/kstringhandler.html#lsqueeze)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param str const char*
/// @param maxlen int
///
const char* k_stringhandler_lsqueeze(const char* str, int maxlen);

/// [Upstream resources](https://api.kde.org/kstringhandler.html#csqueeze)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param str const char*
/// @param maxlen int
///
const char* k_stringhandler_csqueeze(const char* str, int maxlen);

/// [Upstream resources](https://api.kde.org/kstringhandler.html#rsqueeze)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param str const char*
/// @param maxlen int
///
const char* k_stringhandler_rsqueeze(const char* str, int maxlen);

/// [Upstream resources](https://api.kde.org/kstringhandler.html#perlSplit)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param sep const char*
/// @param str const char*
/// @param max int
///
const char** k_stringhandler_perl_split(const char* sep, const char* str, int max);

/// [Upstream resources](https://api.kde.org/kstringhandler.html#perlSplit)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param sep const char*
/// @param s const char*
/// @param max int
///
const char** k_stringhandler_perl_split2(const char* sep, const char* s, int max);

/// [Upstream resources](https://api.kde.org/kstringhandler.html#perlSplit)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param sep QChar*
/// @param s const char*
/// @param max int
///
const char** k_stringhandler_perl_split3(void* sep, const char* s, int max);

/// [Upstream resources](https://api.kde.org/kstringhandler.html#perlSplit)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param sep QRegularExpression*
/// @param s const char*
/// @param max int
///
const char** k_stringhandler_perl_split4(void* sep, const char* s, int max);

/// [Upstream resources](https://api.kde.org/kstringhandler.html#tagUrls)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param text const char*
///
const char* k_stringhandler_tag_urls(const char* text);

/// [Upstream resources](https://api.kde.org/kstringhandler.html#obscure)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param str const char*
///
const char* k_stringhandler_obscure(const char* str);

/// [Upstream resources](https://api.kde.org/kstringhandler.html#preProcessWrap)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param text const char*
///
const char* k_stringhandler_pre_process_wrap(const char* text);

/// [Upstream resources](https://api.kde.org/kstringhandler.html#logicalLength)
///
/// @param text const char*
///
int32_t k_stringhandler_logical_length(const char* text);
#endif
