#pragma once
#ifndef SRC_QT6C_LIBQSTRINGCONVERTER_H
#define SRC_QT6C_LIBQSTRINGCONVERTER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qstringencoder.html)

/// q_stringencoder_new constructs a new QStringEncoder object.
///
QStringEncoder* q_stringencoder_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qstringencoder.html)

/// q_stringencoder_new2 constructs a new QStringEncoder object.
///
/// @param encoding enum QStringConverter__Encoding
///
QStringEncoder* q_stringencoder_new2(int32_t encoding);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringencoder.html)

/// q_stringencoder_new3 constructs a new QStringEncoder object.
///
/// @param name char*
///
QStringEncoder* q_stringencoder_new3(char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringencoder.html)

/// q_stringencoder_new4 constructs a new QStringEncoder object.
///
/// @param encoding enum QStringConverter__Encoding
/// @param flags flag of enum QStringConverterBase__Flag
///
QStringEncoder* q_stringencoder_new4(int32_t encoding, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringencoder.html)

/// q_stringencoder_new5 constructs a new QStringEncoder object.
///
/// @param name char*
/// @param flags flag of enum QStringConverterBase__Flag
///
QStringEncoder* q_stringencoder_new5(char* name, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringencoder.html#requiredSpace)
///
/// @param self QStringEncoder*
/// @param inputLength int64_t
///
int64_t q_stringencoder_required_space(void* self, int64_t inputLength);

/// Inherited from QStringConverter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#isValid)
///
/// @param self QStringEncoder*
///
bool q_stringencoder_is_valid(void* self);

/// Inherited from QStringConverter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#resetState)
///
/// @param self QStringEncoder*
///
void q_stringencoder_reset_state(void* self);

/// Inherited from QStringConverter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#hasError)
///
/// @param self QStringEncoder*
///
bool q_stringencoder_has_error(void* self);

/// Inherited from QStringConverter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QStringEncoder*
///
const char* q_stringencoder_name(void* self);

/// Inherited from QStringConverter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#nameForEncoding)
///
/// Caller is responsible for freeing the returned memory
///
/// @param e enum QStringConverter__Encoding
///
const char* q_stringencoder_name_for_encoding(int32_t e);

/// Inherited from QStringConverter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#availableCodecs)
///
/// Caller is responsible for freeing the returned memory
///
const char** q_stringencoder_available_codecs();

/// [Upstream resources](https://doc.qt.io/qt-6/qstringencoder.html#dtor.QStringEncoder)
///
/// Delete this object from C++ memory.
///
/// @param self QStringEncoder*
///
void q_stringencoder_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringdecoder.html)

/// q_stringdecoder_new constructs a new QStringDecoder object.
///
/// @param encoding enum QStringConverter__Encoding
///
QStringDecoder* q_stringdecoder_new(int32_t encoding);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringdecoder.html)

/// q_stringdecoder_new2 constructs a new QStringDecoder object.
///
QStringDecoder* q_stringdecoder_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qstringdecoder.html)

/// q_stringdecoder_new3 constructs a new QStringDecoder object.
///
/// @param name char*
///
QStringDecoder* q_stringdecoder_new3(char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringdecoder.html)

/// q_stringdecoder_new4 constructs a new QStringDecoder object.
///
/// @param encoding enum QStringConverter__Encoding
/// @param flags flag of enum QStringConverterBase__Flag
///
QStringDecoder* q_stringdecoder_new4(int32_t encoding, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringdecoder.html)

/// q_stringdecoder_new5 constructs a new QStringDecoder object.
///
/// @param name char*
/// @param f flag of enum QStringConverterBase__Flag
///
QStringDecoder* q_stringdecoder_new5(char* name, int32_t f);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringdecoder.html#requiredSpace)
///
/// @param self QStringDecoder*
/// @param inputLength int64_t
///
int64_t q_stringdecoder_required_space(void* self, int64_t inputLength);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringdecoder.html#appendToBuffer)
///
/// @param self QStringDecoder*
/// @param out QChar*
/// @param ba const char*
///
QChar* q_stringdecoder_append_to_buffer(void* self, void* out, const char* ba);

/// [Upstream resources](https://doc.qt.io/qt-6/qstringdecoder.html#decoderForHtml)
///
/// @param data const char*
///
QStringDecoder* q_stringdecoder_decoder_for_html(const char* data);

/// Inherited from QStringConverter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#isValid)
///
/// @param self QStringDecoder*
///
bool q_stringdecoder_is_valid(void* self);

/// Inherited from QStringConverter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#resetState)
///
/// @param self QStringDecoder*
///
void q_stringdecoder_reset_state(void* self);

/// Inherited from QStringConverter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#hasError)
///
/// @param self QStringDecoder*
///
bool q_stringdecoder_has_error(void* self);

/// Inherited from QStringConverter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QStringDecoder*
///
const char* q_stringdecoder_name(void* self);

/// Inherited from QStringConverter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#nameForEncoding)
///
/// Caller is responsible for freeing the returned memory
///
/// @param e enum QStringConverter__Encoding
///
const char* q_stringdecoder_name_for_encoding(int32_t e);

/// Inherited from QStringConverter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstringconverter.html#availableCodecs)
///
/// Caller is responsible for freeing the returned memory
///
const char** q_stringdecoder_available_codecs();

/// [Upstream resources](https://doc.qt.io/qt-6/qstringdecoder.html#dtor.QStringDecoder)
///
/// Delete this object from C++ memory.
///
/// @param self QStringDecoder*
///
void q_stringdecoder_delete(void* self);

#endif
