#pragma once
#ifndef LIBQBYTEARRAYALGORITHMS_H
#define LIBQBYTEARRAYALGORITHMS_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayalgorithms-h.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayalgorithms-h.html#qmemrchr)
///
/// @param s void*
/// @param needle int
/// @param n uintptr_t
///
const void* q_qbytearrayalgorithms_h_qmemrchr(void* s, int needle, uintptr_t n);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayalgorithms-h.html#qstrdup)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param param1 const char*
///
char* q_qbytearrayalgorithms_h_qstrdup(const char* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayalgorithms-h.html#qstrlen)
///
/// @param str const char*
///
uintptr_t q_qbytearrayalgorithms_h_qstrlen(const char* str);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayalgorithms-h.html#qstrnlen)
///
/// @param str const char*
/// @param maxlen uintptr_t
///
uintptr_t q_qbytearrayalgorithms_h_qstrnlen(const char* str, uintptr_t maxlen);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayalgorithms-h.html#qstrcpy)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param dst char*
/// @param src const char*
///
char* q_qbytearrayalgorithms_h_qstrcpy(char* dst, const char* src);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayalgorithms-h.html#qstrncpy)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param dst char*
/// @param src const char*
/// @param len uintptr_t
///
char* q_qbytearrayalgorithms_h_qstrncpy(char* dst, const char* src, uintptr_t _len);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayalgorithms-h.html#qstrcmp)
///
/// @param str1 const char*
/// @param str2 const char*
///
int32_t q_qbytearrayalgorithms_h_qstrcmp(const char* str1, const char* str2);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayalgorithms-h.html#qstrncmp)
///
/// @param str1 const char*
/// @param str2 const char*
/// @param len uintptr_t
///
int32_t q_qbytearrayalgorithms_h_qstrncmp(const char* str1, const char* str2, uintptr_t _len);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayalgorithms-h.html#qstricmp)
///
/// @param param1 const char*
/// @param param2 const char*
///
int32_t q_qbytearrayalgorithms_h_qstricmp(const char* param1, const char* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayalgorithms-h.html#qstrnicmp)
///
/// @param param1 const char*
/// @param param2 const char*
/// @param len uintptr_t
///
int32_t q_qbytearrayalgorithms_h_qstrnicmp(const char* param1, const char* param2, uintptr_t _len);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayalgorithms-h.html#qstrnicmp)
///
/// @param param1 const char*
/// @param param2 intptr_t
/// @param param3 const char*
/// @param param4 intptr_t
///
int32_t q_qbytearrayalgorithms_h_qstrnicmp2(const char* param1, intptr_t param2, const char* param3, intptr_t param4);
#endif
