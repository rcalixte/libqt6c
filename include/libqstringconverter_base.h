#pragma once
#ifndef SRCQT6C_LIBQSTRINGCONVERTER_BASE_H
#define SRCQT6C_LIBQSTRINGCONVERTER_BASE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqstringconverter.h"

/// https://doc.qt.io/qt-6/qstringconverter.html

/// [Qt documentation](https://doc.qt.io/qt-6/qstringconverter.html#isValid)
///
/// ``` QStringConverter* self ```
bool q_stringconverter_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringconverter.html#resetState)
///
/// ``` QStringConverter* self ```
void q_stringconverter_reset_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringconverter.html#hasError)
///
/// ``` QStringConverter* self ```
bool q_stringconverter_has_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringconverter.html#name)
///
/// ``` QStringConverter* self ```
const char* q_stringconverter_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringconverter.html#nameForEncoding)
///
/// ``` enum QStringConverter__Encoding e ```
const char* q_stringconverter_name_for_encoding(int64_t e);

/// https://doc.qt.io/qt-6/qstringconverterbase-state.html

/// q_stringconverterbase__state_new constructs a new QStringConverterBase::State object.
///
///
QStringConverterBase__State* q_stringconverterbase__state_new();

/// q_stringconverterbase__state_new2 constructs a new QStringConverterBase::State object.
///
/// ``` int f ```
QStringConverterBase__State* q_stringconverterbase__state_new2(int64_t f);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringconverterbase__state.html#clear)
///
/// ``` QStringConverterBase__State* self ```
void q_stringconverterbase__state_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringconverterbase__state.html#reset)
///
/// ``` QStringConverterBase__State* self ```
void q_stringconverterbase__state_reset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringconverterbase::state.html#dtor.QStringConverterBase::State)
///
/// Delete this object from C++ memory.
///
/// ``` QStringConverterBase__State* self ```
void q_stringconverterbase__state_delete(void* self);

/// https://doc.qt.io/qt-6/qstringconverter_base.html#types

typedef enum {
    QSTRINGCONVERTERBASE_FLAG_DEFAULT = 0,
    QSTRINGCONVERTERBASE_FLAG_STATELESS = 1,
    QSTRINGCONVERTERBASE_FLAG_CONVERTINVALIDTONULL = 2,
    QSTRINGCONVERTERBASE_FLAG_WRITEBOM = 4,
    QSTRINGCONVERTERBASE_FLAG_CONVERTINITIALBOM = 8,
    QSTRINGCONVERTERBASE_FLAG_USESICU = 16
} QStringConverterBase__Flag;

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
