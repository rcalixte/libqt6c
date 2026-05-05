#pragma once
#ifndef SRC_QT6C_LIBQSTRING_H
#define SRC_QT6C_LIBQSTRING_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qstring.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qstring.html#maxSize)
///
intptr_t q_string_max_size();

/// [Upstream resources](https://doc.qt.io/qt-6/qstring.html#fromLatin1)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param ba char*
///
const char* q_string_from_latin1(char* ba);

/// [Upstream resources](https://doc.qt.io/qt-6/qstring.html#fromLatin1)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param str const char*
/// @param size intptr_t
///
const char* q_string_from_latin12(const char* str, intptr_t size);

/// [Upstream resources](https://doc.qt.io/qt-6/qstring.html#fromUtf8)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param utf8 char*
///
const char* q_string_from_utf8(char* utf8);

/// [Upstream resources](https://doc.qt.io/qt-6/qstring.html#fromUtf8)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param utf8 const char*
/// @param size intptr_t
///
const char* q_string_from_utf82(const char* utf8, intptr_t size);

/// [Upstream resources](https://doc.qt.io/qt-6/qstring.html#fromLocal8Bit)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param ba char*
///
const char* q_string_from_local8_bit(char* ba);

/// [Upstream resources](https://doc.qt.io/qt-6/qstring.html#fromLocal8Bit)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param str const char*
/// @param size intptr_t
///
const char* q_string_from_local8_bit2(const char* str, intptr_t size);

/// [Upstream resources](https://doc.qt.io/qt-6/qstring.html#fromRawData)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 QChar*
/// @param size intptr_t
///
const char* q_string_from_raw_data(void* param1, intptr_t size);

/// [Upstream resources](https://doc.qt.io/qt-6/qstring.html#fromUtf16)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param str uint16_t*
///
const char* q_string_from_utf162(uint16_t* str);

/// [Upstream resources](https://doc.qt.io/qt-6/qstring.html#fromUcs4)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param str uint32_t*
///
const char* q_string_from_ucs42(uint32_t* str);

/// [Upstream resources](https://doc.qt.io/qt-6/qstring.html#compare)
///
/// @param s1 const char*
/// @param s2 const char*
///
int32_t q_string_compare5(const char* s1, const char* s2);

/// [Upstream resources](https://doc.qt.io/qt-6/qstring.html#compare)
///
/// @param s1 const char*
/// @param s2 const char*
///
int32_t q_string_compare6(const char* s1, const char* s2);

/// [Upstream resources](https://doc.qt.io/qt-6/qstring.html#compare)
///
/// @param s1 const char*
/// @param s2 const char*
///
int32_t q_string_compare7(const char* s1, const char* s2);

/// [Upstream resources](https://doc.qt.io/qt-6/qstring.html#localeAwareCompare)
///
/// @param s1 const char*
/// @param s2 const char*
///
int32_t q_string_locale_aware_compare3(const char* s1, const char* s2);

/// [Upstream resources](https://doc.qt.io/qt-6/qstring.html#number)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 int
///
const char* q_string_number(int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qstring.html#number)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 uint32_t
///
const char* q_string_number2(uint32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qstring.html#number)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 long
///
const char* q_string_number3(long param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qstring.html#number)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 uintptr_t
///
const char* q_string_number4(uintptr_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qstring.html#number)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 long long
///
const char* q_string_number5(long long param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qstring.html#number)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 uintptr_t
///
const char* q_string_number6(uintptr_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qstring.html#number)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 double
///
const char* q_string_number7(double param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qstring.html#fromUtf16)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param str uint16_t*
/// @param size intptr_t
///
const char* q_string_from_utf1623(uint16_t* str, intptr_t size);

/// [Upstream resources](https://doc.qt.io/qt-6/qstring.html#fromUcs4)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param str uint32_t*
/// @param size intptr_t
///
const char* q_string_from_ucs423(uint32_t* str, intptr_t size);

/// [Upstream resources](https://doc.qt.io/qt-6/qstring.html#compare)
///
/// @param s1 const char*
/// @param s2 const char*
/// @param cs enum Qt__CaseSensitivity
///
int32_t q_string_compare32(const char* s1, const char* s2, int32_t cs);

/// [Upstream resources](https://doc.qt.io/qt-6/qstring.html#compare)
///
/// @param s1 const char*
/// @param s2 const char*
/// @param cs enum Qt__CaseSensitivity
///
int32_t q_string_compare33(const char* s1, const char* s2, int32_t cs);

/// [Upstream resources](https://doc.qt.io/qt-6/qstring.html#compare)
///
/// @param s1 const char*
/// @param s2 const char*
/// @param cs enum Qt__CaseSensitivity
///
int32_t q_string_compare34(const char* s1, const char* s2, int32_t cs);

/// [Upstream resources](https://doc.qt.io/qt-6/qstring.html#number)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 int
/// @param base int
///
const char* q_string_number22(int param1, int base);

/// [Upstream resources](https://doc.qt.io/qt-6/qstring.html#number)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 uint32_t
/// @param base int
///
const char* q_string_number23(uint32_t param1, int base);

/// [Upstream resources](https://doc.qt.io/qt-6/qstring.html#number)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 long
/// @param base int
///
const char* q_string_number24(long param1, int base);

/// [Upstream resources](https://doc.qt.io/qt-6/qstring.html#number)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 uintptr_t
/// @param base int
///
const char* q_string_number25(uintptr_t param1, int base);

/// [Upstream resources](https://doc.qt.io/qt-6/qstring.html#number)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 long long
/// @param base int
///
const char* q_string_number26(long long param1, int base);

/// [Upstream resources](https://doc.qt.io/qt-6/qstring.html#number)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 uintptr_t
/// @param base int
///
const char* q_string_number27(uintptr_t param1, int base);

/// [Upstream resources](https://doc.qt.io/qt-6/qstring.html#number)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 double
/// @param format char
///
const char* q_string_number28(double param1, char format);

/// [Upstream resources](https://doc.qt.io/qt-6/qstring.html#number)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param param1 double
/// @param format char
/// @param precision int
///
const char* q_string_number32(double param1, char format, int precision);

/// [Upstream resources](https://doc.qt.io/qt-6/qstring.html#public-types)

typedef enum {
    QSTRING_SECTIONFLAG_SECTIONDEFAULT = 0,
    QSTRING_SECTIONFLAG_SECTIONSKIPEMPTY = 1,
    QSTRING_SECTIONFLAG_SECTIONINCLUDELEADINGSEP = 2,
    QSTRING_SECTIONFLAG_SECTIONINCLUDETRAILINGSEP = 4,
    QSTRING_SECTIONFLAG_SECTIONCASEINSENSITIVESEPS = 8
} QString__SectionFlag;

/// [Upstream resources](https://doc.qt.io/qt-6/qstring.html#public-types)

typedef enum {
    QSTRING_NORMALIZATIONFORM_NORMALIZATIONFORM_D = 0,
    QSTRING_NORMALIZATIONFORM_NORMALIZATIONFORM_C = 1,
    QSTRING_NORMALIZATIONFORM_NORMALIZATIONFORM_KD = 2,
    QSTRING_NORMALIZATIONFORM_NORMALIZATIONFORM_KC = 3
} QString__NormalizationForm;

/// [Upstream resources](https://doc.qt.io/qt-6/qstring.html#public-types)

typedef enum {
    QTPRIVATE_ARGBASE_TAG_L1 = 0,
    QTPRIVATE_ARGBASE_TAG_U8 = 1,
    QTPRIVATE_ARGBASE_TAG_U16 = 2
} QtPrivate__ArgBase__Tag;

#endif
