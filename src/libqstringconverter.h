#pragma once
#ifndef SRCQT6C_LIBQSTRINGCONVERTER_H
#define SRCQT6C_LIBQSTRINGCONVERTER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqbytearrayview.h"
#include "libqchar.h"
#include "libqstringconverter_base.h"

/// https://doc.qt.io/qt-6/qstringencoder.html

/// q_stringencoder_new constructs a new QStringEncoder object.
///
///
QStringEncoder* q_stringencoder_new();

/// q_stringencoder_new2 constructs a new QStringEncoder object.
///
/// ``` enum QStringConverter__Encoding encoding ```
QStringEncoder* q_stringencoder_new2(int64_t encoding);

/// q_stringencoder_new3 constructs a new QStringEncoder object.
///
/// ``` const char* name ```
QStringEncoder* q_stringencoder_new3(const char* name);

/// q_stringencoder_new4 constructs a new QStringEncoder object.
///
/// ``` enum QStringConverter__Encoding encoding, int flags ```
QStringEncoder* q_stringencoder_new4(int64_t encoding, int64_t flags);

/// q_stringencoder_new5 constructs a new QStringEncoder object.
///
/// ``` const char* name, int flags ```
QStringEncoder* q_stringencoder_new5(const char* name, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringencoder.html#requiredSpace)
///
/// ``` QStringEncoder* self, int64_t inputLength ```
int64_t q_stringencoder_required_space(void* self, int64_t inputLength);

/// Inherited from QStringConverter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstringconverter.html#isValid)
///
/// ``` QStringEncoder* self ```
bool q_stringencoder_is_valid(void* self);

/// Inherited from QStringConverter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstringconverter.html#resetState)
///
/// ``` QStringEncoder* self ```
void q_stringencoder_reset_state(void* self);

/// Inherited from QStringConverter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstringconverter.html#hasError)
///
/// ``` QStringEncoder* self ```
bool q_stringencoder_has_error(void* self);

/// Inherited from QStringConverter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstringconverter.html#name)
///
/// ``` QStringEncoder* self ```
const char* q_stringencoder_name(void* self);

/// Inherited from QStringConverter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstringconverter.html#nameForEncoding)
///
/// ``` enum QStringConverter__Encoding e ```
const char* q_stringencoder_name_for_encoding(int64_t e);

/// Delete this object from C++ memory.
///
/// ``` QStringEncoder* self ```
void q_stringencoder_delete(void* self);

/// https://doc.qt.io/qt-6/qstringdecoder.html

/// q_stringdecoder_new constructs a new QStringDecoder object.
///
/// ``` enum QStringConverter__Encoding encoding ```
QStringDecoder* q_stringdecoder_new(int64_t encoding);

/// q_stringdecoder_new2 constructs a new QStringDecoder object.
///
///
QStringDecoder* q_stringdecoder_new2();

/// q_stringdecoder_new3 constructs a new QStringDecoder object.
///
/// ``` const char* name ```
QStringDecoder* q_stringdecoder_new3(const char* name);

/// q_stringdecoder_new4 constructs a new QStringDecoder object.
///
/// ``` enum QStringConverter__Encoding encoding, int flags ```
QStringDecoder* q_stringdecoder_new4(int64_t encoding, int64_t flags);

/// q_stringdecoder_new5 constructs a new QStringDecoder object.
///
/// ``` const char* name, int f ```
QStringDecoder* q_stringdecoder_new5(const char* name, int64_t f);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringdecoder.html#requiredSpace)
///
/// ``` QStringDecoder* self, int64_t inputLength ```
int64_t q_stringdecoder_required_space(void* self, int64_t inputLength);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringdecoder.html#appendToBuffer)
///
/// ``` QStringDecoder* self, QChar* out, const char* ba ```
QChar* q_stringdecoder_append_to_buffer(void* self, void* out, const char* ba);

/// [Qt documentation](https://doc.qt.io/qt-6/qstringdecoder.html#decoderForHtml)
///
/// ``` const char* data ```
QStringDecoder* q_stringdecoder_decoder_for_html(const char* data);

/// Inherited from QStringConverter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstringconverter.html#isValid)
///
/// ``` QStringDecoder* self ```
bool q_stringdecoder_is_valid(void* self);

/// Inherited from QStringConverter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstringconverter.html#resetState)
///
/// ``` QStringDecoder* self ```
void q_stringdecoder_reset_state(void* self);

/// Inherited from QStringConverter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstringconverter.html#hasError)
///
/// ``` QStringDecoder* self ```
bool q_stringdecoder_has_error(void* self);

/// Inherited from QStringConverter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstringconverter.html#name)
///
/// ``` QStringDecoder* self ```
const char* q_stringdecoder_name(void* self);

/// Inherited from QStringConverter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstringconverter.html#nameForEncoding)
///
/// ``` enum QStringConverter__Encoding e ```
const char* q_stringdecoder_name_for_encoding(int64_t e);

/// Delete this object from C++ memory.
///
/// ``` QStringDecoder* self ```
void q_stringdecoder_delete(void* self);

#endif
