#pragma once
#ifndef SRCQT6C_LIBQSTRINGCONVERTER_BASE_H
#define SRCQT6C_LIBQSTRINGCONVERTER_BASE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qstringconverter.html

/// [Qt documentation](https://doc.qt.io/qt-6/qstringconverter.html#isValid)
///
/// @param self QStringConverter*
bool q_stringconverter_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringconverter.html#resetState)
///
/// @param self QStringConverter*
void q_stringconverter_reset_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringconverter.html#hasError)
///
/// @param self QStringConverter*
bool q_stringconverter_has_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringconverter.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QStringConverter*
const char* q_stringconverter_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringconverter.html#nameForEncoding)
///
/// Caller is responsible for freeing the returned memory
///
/// @param e enum QStringConverter__Encoding
const char* q_stringconverter_name_for_encoding(int32_t e);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringconverter.html#availableCodecs)
///
/// Caller is responsible for freeing the returned memory
///
const char** q_stringconverter_available_codecs();

/// https://doc.qt.io/qt-6/qstringconverterbase-state.html

/// q_stringconverterbase__state_new constructs a new QStringConverterBase::State object.
///
QStringConverterBase__State* q_stringconverterbase__state_new();

/// q_stringconverterbase__state_new2 constructs a new QStringConverterBase::State object.
///
/// @param f flag of enum QStringConverterBase__Flag
QStringConverterBase__State* q_stringconverterbase__state_new2(int64_t f);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringconverterbase-state.html#clear)
///
/// @param self QStringConverterBase__State*
void q_stringconverterbase__state_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringconverterbase-state.html#reset)
///
/// @param self QStringConverterBase__State*
void q_stringconverterbase__state_reset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringconverterbase-state.html#flags-var)
///
/// @param self QStringConverterBase__State*
///
/// @return flag of enum QStringConverterBase__Flag
int64_t q_stringconverterbase__state_flags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringconverterbase-state.html#flags-var)
///
/// @param self QStringConverterBase__State*
/// @param flags flag of enum QStringConverterBase__Flag
void q_stringconverterbase__state_set_flags(void* self, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringconverterbase-state.html#internalState-var)
///
/// @param self QStringConverterBase__State*
int32_t q_stringconverterbase__state_internal_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringconverterbase-state.html#internalState-var)
///
/// @param self QStringConverterBase__State*
/// @param internalState int
void q_stringconverterbase__state_set_internal_state(void* self, int internalState);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringconverterbase-state.html#remainingChars-var)
///
/// @param self QStringConverterBase__State*
int64_t q_stringconverterbase__state_remaining_chars(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringconverterbase-state.html#remainingChars-var)
///
/// @param self QStringConverterBase__State*
/// @param remainingChars int64_t
void q_stringconverterbase__state_set_remaining_chars(void* self, int64_t remainingChars);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringconverterbase-state.html#invalidChars-var)
///
/// @param self QStringConverterBase__State*
int64_t q_stringconverterbase__state_invalid_chars(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringconverterbase-state.html#invalidChars-var)
///
/// @param self QStringConverterBase__State*
/// @param invalidChars int64_t
void q_stringconverterbase__state_set_invalid_chars(void* self, int64_t invalidChars);

/// Delete this object from C++ memory.
///
/// @param self QStringConverterBase__State*
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
