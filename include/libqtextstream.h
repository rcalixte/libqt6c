#pragma once
#ifndef SRCQT6C_LIBQTEXTSTREAM_H
#define SRCQT6C_LIBQTEXTSTREAM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qtextstream.html

/// q_textstream_new constructs a new QTextStream object.
///
///
QTextStream* q_textstream_new();

/// q_textstream_new2 constructs a new QTextStream object.
///
/// ``` QIODevice* device ```
QTextStream* q_textstream_new2(void* device);

/// q_textstream_new3 constructs a new QTextStream object.
///
/// ``` const char* array ```
QTextStream* q_textstream_new3(const char* array);

/// q_textstream_new4 constructs a new QTextStream object.
///
/// ``` const char* array, int openMode ```
QTextStream* q_textstream_new4(const char* array, int64_t openMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#setEncoding)
///
/// ``` QTextStream* self, enum QStringConverter__Encoding encoding ```
void q_textstream_set_encoding(void* self, int64_t encoding);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#encoding)
///
/// ``` QTextStream* self ```
int64_t q_textstream_encoding(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#setAutoDetectUnicode)
///
/// ``` QTextStream* self, bool enabled ```
void q_textstream_set_auto_detect_unicode(void* self, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#autoDetectUnicode)
///
/// ``` QTextStream* self ```
bool q_textstream_auto_detect_unicode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#setGenerateByteOrderMark)
///
/// ``` QTextStream* self, bool generate ```
void q_textstream_set_generate_byte_order_mark(void* self, bool generate);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#generateByteOrderMark)
///
/// ``` QTextStream* self ```
bool q_textstream_generate_byte_order_mark(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#setLocale)
///
/// ``` QTextStream* self, QLocale* locale ```
void q_textstream_set_locale(void* self, void* locale);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#locale)
///
/// ``` QTextStream* self ```
QLocale* q_textstream_locale(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#setDevice)
///
/// ``` QTextStream* self, QIODevice* device ```
void q_textstream_set_device(void* self, void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#device)
///
/// ``` QTextStream* self ```
QIODevice* q_textstream_device(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#string)
///
/// ``` QTextStream* self ```
const char* q_textstream_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#status)
///
/// ``` QTextStream* self ```
int64_t q_textstream_status(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#setStatus)
///
/// ``` QTextStream* self, enum QTextStream__Status status ```
void q_textstream_set_status(void* self, int64_t status);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#resetStatus)
///
/// ``` QTextStream* self ```
void q_textstream_reset_status(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#atEnd)
///
/// ``` QTextStream* self ```
bool q_textstream_at_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#reset)
///
/// ``` QTextStream* self ```
void q_textstream_reset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#flush)
///
/// ``` QTextStream* self ```
void q_textstream_flush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#seek)
///
/// ``` QTextStream* self, long long pos ```
bool q_textstream_seek(void* self, long long pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#pos)
///
/// ``` QTextStream* self ```
long long q_textstream_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#skipWhiteSpace)
///
/// ``` QTextStream* self ```
void q_textstream_skip_white_space(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#readLine)
///
/// ``` QTextStream* self ```
const char* q_textstream_read_line(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#readAll)
///
/// ``` QTextStream* self ```
const char* q_textstream_read_all(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#read)
///
/// ``` QTextStream* self, long long maxlen ```
const char* q_textstream_read(void* self, long long maxlen);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#setFieldAlignment)
///
/// ``` QTextStream* self, enum QTextStream__FieldAlignment alignment ```
void q_textstream_set_field_alignment(void* self, int64_t alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#fieldAlignment)
///
/// ``` QTextStream* self ```
int64_t q_textstream_field_alignment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#setPadChar)
///
/// ``` QTextStream* self, QChar* ch ```
void q_textstream_set_pad_char(void* self, void* ch);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#padChar)
///
/// ``` QTextStream* self ```
QChar* q_textstream_pad_char(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#setFieldWidth)
///
/// ``` QTextStream* self, int width ```
void q_textstream_set_field_width(void* self, int width);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#fieldWidth)
///
/// ``` QTextStream* self ```
int32_t q_textstream_field_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#setNumberFlags)
///
/// ``` QTextStream* self, int flags ```
void q_textstream_set_number_flags(void* self, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#numberFlags)
///
/// ``` QTextStream* self ```
int64_t q_textstream_number_flags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#setIntegerBase)
///
/// ``` QTextStream* self, int base ```
void q_textstream_set_integer_base(void* self, int base);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#integerBase)
///
/// ``` QTextStream* self ```
int32_t q_textstream_integer_base(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#setRealNumberNotation)
///
/// ``` QTextStream* self, enum QTextStream__RealNumberNotation notation ```
void q_textstream_set_real_number_notation(void* self, int64_t notation);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#realNumberNotation)
///
/// ``` QTextStream* self ```
int64_t q_textstream_real_number_notation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#setRealNumberPrecision)
///
/// ``` QTextStream* self, int precision ```
void q_textstream_set_real_number_precision(void* self, int precision);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#realNumberPrecision)
///
/// ``` QTextStream* self ```
int32_t q_textstream_real_number_precision(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
///
/// ``` QTextStream* self, QChar* ch ```
QTextStream* q_textstream_operator_shift_right(void* self, void* ch);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
///
/// ``` QTextStream* self, char* ch ```
QTextStream* q_textstream_operator_shift_right2(void* self, char* ch);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
///
/// ``` QTextStream* self, short* i ```
QTextStream* q_textstream_operator_shift_right4(void* self, short* i);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
///
/// ``` QTextStream* self, unsigned short* i ```
QTextStream* q_textstream_operator_shift_right5(void* self, unsigned short* i);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
///
/// ``` QTextStream* self, int* i ```
QTextStream* q_textstream_operator_shift_right6(void* self, int* i);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
///
/// ``` QTextStream* self, uint32_t* i ```
QTextStream* q_textstream_operator_shift_right7(void* self, uint32_t* i);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
///
/// ``` QTextStream* self, int64_t* i ```
QTextStream* q_textstream_operator_shift_right8(void* self, int64_t* i);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
///
/// ``` QTextStream* self, uint64_t* i ```
QTextStream* q_textstream_operator_shift_right9(void* self, uint64_t* i);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
///
/// ``` QTextStream* self, long long* i ```
QTextStream* q_textstream_operator_shift_right10(void* self, long long* i);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
///
/// ``` QTextStream* self, uint64_t* i ```
QTextStream* q_textstream_operator_shift_right11(void* self, uint64_t* i);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
///
/// ``` QTextStream* self, float* f ```
QTextStream* q_textstream_operator_shift_right12(void* self, float* f);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
///
/// ``` QTextStream* self, double* f ```
QTextStream* q_textstream_operator_shift_right13(void* self, double* f);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
///
/// ``` QTextStream* self, const char* s ```
QTextStream* q_textstream_operator_shift_right14(void* self, const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
///
/// ``` QTextStream* self, char* array ```
QTextStream* q_textstream_operator_shift_right15(void* self, char* array);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
///
/// ``` QTextStream* self, char* c ```
QTextStream* q_textstream_operator_shift_right16(void* self, char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
///
/// ``` QTextStream* self, QChar* ch ```
QTextStream* q_textstream_operator_shift_left(void* self, void* ch);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
///
/// ``` QTextStream* self, char ch ```
QTextStream* q_textstream_operator_shift_left2(void* self, char ch);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
///
/// ``` QTextStream* self, short i ```
QTextStream* q_textstream_operator_shift_left4(void* self, short i);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
///
/// ``` QTextStream* self, unsigned short i ```
QTextStream* q_textstream_operator_shift_left5(void* self, unsigned short i);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
///
/// ``` QTextStream* self, int i ```
QTextStream* q_textstream_operator_shift_left6(void* self, int i);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
///
/// ``` QTextStream* self, uint32_t i ```
QTextStream* q_textstream_operator_shift_left7(void* self, uint32_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
///
/// ``` QTextStream* self, int64_t i ```
QTextStream* q_textstream_operator_shift_left8(void* self, int64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
///
/// ``` QTextStream* self, uint64_t i ```
QTextStream* q_textstream_operator_shift_left9(void* self, uint64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
///
/// ``` QTextStream* self, long long i ```
QTextStream* q_textstream_operator_shift_left10(void* self, long long i);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
///
/// ``` QTextStream* self, uint64_t i ```
QTextStream* q_textstream_operator_shift_left11(void* self, uint64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
///
/// ``` QTextStream* self, float f ```
QTextStream* q_textstream_operator_shift_left12(void* self, float f);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
///
/// ``` QTextStream* self, double f ```
QTextStream* q_textstream_operator_shift_left13(void* self, double f);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
///
/// ``` QTextStream* self, const char* s ```
QTextStream* q_textstream_operator_shift_left14(void* self, const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
///
/// ``` QTextStream* self, const char* array ```
QTextStream* q_textstream_operator_shift_left17(void* self, const char* array);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
///
/// ``` QTextStream* self, const char* c ```
QTextStream* q_textstream_operator_shift_left18(void* self, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
///
/// ``` QTextStream* self, void* ptr ```
QTextStream* q_textstream_operator_shift_left19(void* self, void* ptr);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#readLine)
///
/// ``` QTextStream* self, long long maxlen ```
const char* q_textstream_read_line1(void* self, long long maxlen);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#dtor.QTextStream)
///
/// Delete this object from C++ memory.
///
/// ``` QTextStream* self ```
void q_textstream_delete(void* self);

/// https://doc.qt.io/qt-6/qtextstream.html#types

typedef enum {
    QTEXTSTREAM_REALNUMBERNOTATION_SMARTNOTATION = 0,
    QTEXTSTREAM_REALNUMBERNOTATION_FIXEDNOTATION = 1,
    QTEXTSTREAM_REALNUMBERNOTATION_SCIENTIFICNOTATION = 2
} QTextStream__RealNumberNotation;

typedef enum {
    QTEXTSTREAM_FIELDALIGNMENT_ALIGNLEFT = 0,
    QTEXTSTREAM_FIELDALIGNMENT_ALIGNRIGHT = 1,
    QTEXTSTREAM_FIELDALIGNMENT_ALIGNCENTER = 2,
    QTEXTSTREAM_FIELDALIGNMENT_ALIGNACCOUNTINGSTYLE = 3
} QTextStream__FieldAlignment;

typedef enum {
    QTEXTSTREAM_STATUS_OK = 0,
    QTEXTSTREAM_STATUS_READPASTEND = 1,
    QTEXTSTREAM_STATUS_READCORRUPTDATA = 2,
    QTEXTSTREAM_STATUS_WRITEFAILED = 3
} QTextStream__Status;

typedef enum {
    QTEXTSTREAM_NUMBERFLAG_SHOWBASE = 1,
    QTEXTSTREAM_NUMBERFLAG_FORCEPOINT = 2,
    QTEXTSTREAM_NUMBERFLAG_FORCESIGN = 4,
    QTEXTSTREAM_NUMBERFLAG_UPPERCASEBASE = 8,
    QTEXTSTREAM_NUMBERFLAG_UPPERCASEDIGITS = 16
} QTextStream__NumberFlag;

#endif
