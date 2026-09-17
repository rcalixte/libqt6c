#pragma once
#ifndef LIBQBYTEARRAYALGORITHMS_H
#define LIBQBYTEARRAYALGORITHMS_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayalgorithms.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayalgorithms.html#qmemrchr)
///
/// @param s void*
/// @param needle int
/// @param n uintptr_t
///
const void* q_qbytearrayalgorithms_qmemrchr(void* s, int needle, uintptr_t n);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayalgorithms.html#qstrdup)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param param1 const char*
///
char* q_qbytearrayalgorithms_qstrdup(const char* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayalgorithms.html#qstrlen)
///
/// @param str const char*
///
uintptr_t q_qbytearrayalgorithms_qstrlen(const char* str);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayalgorithms.html#qstrnlen)
///
/// @param str const char*
/// @param maxlen uintptr_t
///
uintptr_t q_qbytearrayalgorithms_qstrnlen(const char* str, uintptr_t maxlen);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayalgorithms.html#qstrcpy)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param dst char*
/// @param src const char*
///
char* q_qbytearrayalgorithms_qstrcpy(char* dst, const char* src);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayalgorithms.html#qstrncpy)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param dst char*
/// @param src const char*
/// @param len uintptr_t
///
char* q_qbytearrayalgorithms_qstrncpy(char* dst, const char* src, uintptr_t _len);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayalgorithms.html#qstrcmp)
///
/// @param str1 const char*
/// @param str2 const char*
///
int32_t q_qbytearrayalgorithms_qstrcmp(const char* str1, const char* str2);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayalgorithms.html#qstrncmp)
///
/// @param str1 const char*
/// @param str2 const char*
/// @param len uintptr_t
///
int32_t q_qbytearrayalgorithms_qstrncmp(const char* str1, const char* str2, uintptr_t _len);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayalgorithms.html#qstricmp)
///
/// @param param1 const char*
/// @param param2 const char*
///
int32_t q_qbytearrayalgorithms_qstricmp(const char* param1, const char* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayalgorithms.html#qstrnicmp)
///
/// @param param1 const char*
/// @param param2 const char*
/// @param len uintptr_t
///
int32_t q_qbytearrayalgorithms_qstrnicmp(const char* param1, const char* param2, uintptr_t _len);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayalgorithms.html#qstrnicmp)
///
/// @param param1 const char*
/// @param param2 intptr_t
/// @param param3 const char*
/// @param param4 intptr_t
///
int32_t q_qbytearrayalgorithms_qstrnicmp2(const char* param1, intptr_t param2, const char* param3, intptr_t param4);

/// [Upstream resources](https://doc.qt.io/qt-6/qbytearrayalgorithms.html#qChecksum)
///
/// @param data char*
/// @param standard enum Qt__ChecksumType
///
uint16_t q_qbytearrayalgorithms_q_checksum(char* data, int32_t standard);
#endif
