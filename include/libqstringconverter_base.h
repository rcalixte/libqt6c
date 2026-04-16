#pragma once
#ifndef SRC_QT6C_LIBQSTRINGCONVERTER_BASE_H
#define SRC_QT6C_LIBQSTRINGCONVERTER_BASE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#isValid)
///
/// @param self QStringConverter*
///
bool q_stringconverter_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#resetState)
///
/// @param self QStringConverter*
///
void q_stringconverter_reset_state(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#hasError)
///
/// @param self QStringConverter*
///
bool q_stringconverter_has_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QStringConverter*
///
const char* q_stringconverter_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#nameForEncoding)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param e enum QStringConverter__Encoding
///
const char* q_stringconverter_name_for_encoding(int32_t e);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#availableCodecs)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
const char** q_stringconverter_available_codecs();

/// [Upstream resources](https://doc.qt.io/qt-6/qstringconverter-base.html#public-types)

typedef enum {
    QSTRINGCONVERTERBASE_FLAG_DEFAULT = 0,
    QSTRINGCONVERTERBASE_FLAG_STATELESS = 1,
    QSTRINGCONVERTERBASE_FLAG_CONVERTINVALIDTONULL = 2,
    QSTRINGCONVERTERBASE_FLAG_WRITEBOM = 4,
    QSTRINGCONVERTERBASE_FLAG_CONVERTINITIALBOM = 8,
    QSTRINGCONVERTERBASE_FLAG_USESICU = 16
} QStringConverterBase__Flag;

/// [Upstream resources](https://doc.qt.io/qt-6/qstringconverter-base.html#public-types)

typedef enum {
    QSTRINGCONVERTER_ENCODING_UTF8 = 0,
    QSTRINGCONVERTER_ENCODING_UTF16 = 1,
    QSTRINGCONVERTER_ENCODING_UTF16LE = 2,
    QSTRINGCONVERTER_ENCODING_UTF16BE = 3,
    QSTRINGCONVERTER_ENCODING_UTF32 = 4,
    QSTRINGCONVERTER_ENCODING_UTF32LE = 5,
    QSTRINGCONVERTER_ENCODING_UTF32BE = 6,
    QSTRINGCONVERTER_ENCODING_LATIN1 = 7,
    QSTRINGCONVERTER_ENCODING_SYSTEM = 8,
    QSTRINGCONVERTER_ENCODING_LASTENCODING = 8
} QStringConverter__Encoding;

#endif
