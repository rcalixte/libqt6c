#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSQT6C_LIBKSTRINGHANDLER_H
#define SRC_EXTRAS_KCOREADDONSQT6C_LIBKSTRINGHANDLER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api-staging.kde.org/kstringhandler.html

/// [Qt documentation](https://api-staging.kde.org/kstringhandler.html#capwords)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 const char*
const char* k_stringhandler_capwords(const char* param1);

/// [Qt documentation](https://api-staging.kde.org/kstringhandler.html#capwords)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 const char**
const char** k_stringhandler_capwords2(const char* param1[]);

/// [Qt documentation](https://api-staging.kde.org/kstringhandler.html#lsqueeze)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 const char*
/// @param param2 int
const char* k_stringhandler_lsqueeze(const char* param1, int param2);

/// [Qt documentation](https://api-staging.kde.org/kstringhandler.html#csqueeze)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 const char*
/// @param param2 int
const char* k_stringhandler_csqueeze(const char* param1, int param2);

/// [Qt documentation](https://api-staging.kde.org/kstringhandler.html#rsqueeze)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 const char*
/// @param param2 int
const char* k_stringhandler_rsqueeze(const char* param1, int param2);

/// [Qt documentation](https://api-staging.kde.org/kstringhandler.html#perlSplit)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 const char*
/// @param param2 const char*
/// @param param3 int
const char** k_stringhandler_perl_split2(const char* param1, const char* param2, int param3);

/// [Qt documentation](https://api-staging.kde.org/kstringhandler.html#perlSplit)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 QChar*
/// @param param2 const char*
/// @param param3 int
const char** k_stringhandler_perl_split3(void* param1, const char* param2, int param3);

/// [Qt documentation](https://api-staging.kde.org/kstringhandler.html#perlSplit)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 QRegularExpression*
/// @param param2 const char*
/// @param param3 int
const char** k_stringhandler_perl_split4(void* param1, const char* param2, int param3);

/// [Qt documentation](https://api-staging.kde.org/kstringhandler.html#tagUrls)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 const char*
const char* k_stringhandler_tag_urls(const char* param1);

/// [Qt documentation](https://api-staging.kde.org/kstringhandler.html#obscure)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 const char*
const char* k_stringhandler_obscure(const char* param1);

/// [Qt documentation](https://api-staging.kde.org/kstringhandler.html#preProcessWrap)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 const char*
const char* k_stringhandler_pre_process_wrap(const char* param1);

/// [Qt documentation](https://api-staging.kde.org/kstringhandler.html#logicalLength)
///
/// @param param1 const char*
int32_t k_stringhandler_logical_length(const char* param1);
#endif
