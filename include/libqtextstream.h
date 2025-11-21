#pragma once
#ifndef SRC_QT6C_LIBQTEXTSTREAM_H
#define SRC_QT6C_LIBQTEXTSTREAM_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qtextstream.html

/// q_textstream_new constructs a new QTextStream object.
///
QTextStream* q_textstream_new();

/// q_textstream_new2 constructs a new QTextStream object.
///
/// @param device QIODevice*
QTextStream* q_textstream_new2(void* device);

/// q_textstream_new3 constructs a new QTextStream object.
///
/// @param array const char*
QTextStream* q_textstream_new3(const char* array);

/// q_textstream_new4 constructs a new QTextStream object.
///
/// @param array const char*
/// @param openMode flag of enum QIODeviceBase__OpenModeFlag
QTextStream* q_textstream_new4(const char* array, int32_t openMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#setEncoding)
///
/// @param self QTextStream*
/// @param encoding enum QStringConverter__Encoding
void q_textstream_set_encoding(void* self, int32_t encoding);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#encoding)
///
/// @param self QTextStream*
///
/// @return enum QStringConverter__Encoding
int32_t q_textstream_encoding(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#setAutoDetectUnicode)
///
/// @param self QTextStream*
/// @param enabled bool
void q_textstream_set_auto_detect_unicode(void* self, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#autoDetectUnicode)
///
/// @param self QTextStream*
bool q_textstream_auto_detect_unicode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#setGenerateByteOrderMark)
///
/// @param self QTextStream*
/// @param generate bool
void q_textstream_set_generate_byte_order_mark(void* self, bool generate);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#generateByteOrderMark)
///
/// @param self QTextStream*
bool q_textstream_generate_byte_order_mark(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#setLocale)
///
/// @param self QTextStream*
/// @param locale QLocale*
void q_textstream_set_locale(void* self, void* locale);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#locale)
///
/// @param self QTextStream*
QLocale* q_textstream_locale(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#setDevice)
///
/// @param self QTextStream*
/// @param device QIODevice*
void q_textstream_set_device(void* self, void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#device)
///
/// @param self QTextStream*
QIODevice* q_textstream_device(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#string)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTextStream*
const char* q_textstream_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#status)
///
/// @param self QTextStream*
///
/// @return enum QTextStream__Status
int32_t q_textstream_status(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#setStatus)
///
/// @param self QTextStream*
/// @param status enum QTextStream__Status
void q_textstream_set_status(void* self, int32_t status);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#resetStatus)
///
/// @param self QTextStream*
void q_textstream_reset_status(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#atEnd)
///
/// @param self QTextStream*
bool q_textstream_at_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#reset)
///
/// @param self QTextStream*
void q_textstream_reset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#flush)
///
/// @param self QTextStream*
void q_textstream_flush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#seek)
///
/// @param self QTextStream*
/// @param pos long long
bool q_textstream_seek(void* self, long long pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#pos)
///
/// @param self QTextStream*
long long q_textstream_pos(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#skipWhiteSpace)
///
/// @param self QTextStream*
void q_textstream_skip_white_space(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#readLine)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTextStream*
const char* q_textstream_read_line(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#readAll)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTextStream*
const char* q_textstream_read_all(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#read)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTextStream*
/// @param maxlen long long
const char* q_textstream_read(void* self, long long maxlen);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#setFieldAlignment)
///
/// @param self QTextStream*
/// @param alignment enum QTextStream__FieldAlignment
void q_textstream_set_field_alignment(void* self, int32_t alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#fieldAlignment)
///
/// @param self QTextStream*
///
/// @return enum QTextStream__FieldAlignment
int32_t q_textstream_field_alignment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#setPadChar)
///
/// @param self QTextStream*
/// @param ch QChar*
void q_textstream_set_pad_char(void* self, void* ch);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#padChar)
///
/// @param self QTextStream*
QChar* q_textstream_pad_char(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#setFieldWidth)
///
/// @param self QTextStream*
/// @param width int
void q_textstream_set_field_width(void* self, int width);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#fieldWidth)
///
/// @param self QTextStream*
int32_t q_textstream_field_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#setNumberFlags)
///
/// @param self QTextStream*
/// @param flags flag of enum QTextStream__NumberFlag
void q_textstream_set_number_flags(void* self, int32_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#numberFlags)
///
/// @param self QTextStream*
///
/// @return flag of enum QTextStream__NumberFlag
int32_t q_textstream_number_flags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#setIntegerBase)
///
/// @param self QTextStream*
/// @param base int
void q_textstream_set_integer_base(void* self, int base);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#integerBase)
///
/// @param self QTextStream*
int32_t q_textstream_integer_base(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#setRealNumberNotation)
///
/// @param self QTextStream*
/// @param notation enum QTextStream__RealNumberNotation
void q_textstream_set_real_number_notation(void* self, int32_t notation);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#realNumberNotation)
///
/// @param self QTextStream*
///
/// @return enum QTextStream__RealNumberNotation
int32_t q_textstream_real_number_notation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#setRealNumberPrecision)
///
/// @param self QTextStream*
/// @param precision int
void q_textstream_set_real_number_precision(void* self, int precision);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#realNumberPrecision)
///
/// @param self QTextStream*
int32_t q_textstream_real_number_precision(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
///
/// @param self QTextStream*
/// @param ch QChar*
QTextStream* q_textstream_operator_shift_right(void* self, void* ch);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
///
/// @param self QTextStream*
/// @param ch char*
QTextStream* q_textstream_operator_shift_right2(void* self, char* ch);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
///
/// @param self QTextStream*
/// @param i short*
QTextStream* q_textstream_operator_shift_right4(void* self, short* i);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
///
/// @param self QTextStream*
/// @param i unsigned short*
QTextStream* q_textstream_operator_shift_right5(void* self, unsigned short* i);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
///
/// @param self QTextStream*
/// @param i int*
QTextStream* q_textstream_operator_shift_right6(void* self, int* i);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
///
/// @param self QTextStream*
/// @param i uint32_t*
QTextStream* q_textstream_operator_shift_right7(void* self, uint32_t* i);

#if defined(__linux__) || defined(__FreeBSD__)
/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
///
/// @param self QTextStream*
/// @param i int64_t*
QTextStream* q_textstream_operator_shift_right8(void* self, int64_t* i);
#endif

#if defined(__linux__) || defined(__FreeBSD__)
/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
///
/// @param self QTextStream*
/// @param i uint64_t*
QTextStream* q_textstream_operator_shift_right9(void* self, uint64_t* i);
#endif

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
///
/// @param self QTextStream*
/// @param i long long*
QTextStream* q_textstream_operator_shift_right10(void* self, long long* i);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
///
/// @param self QTextStream*
/// @param i uint64_t*
QTextStream* q_textstream_operator_shift_right11(void* self, uint64_t* i);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
///
/// @param self QTextStream*
/// @param f float*
QTextStream* q_textstream_operator_shift_right12(void* self, float* f);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
///
/// @param self QTextStream*
/// @param f double*
QTextStream* q_textstream_operator_shift_right13(void* self, double* f);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
///
/// @param self QTextStream*
/// @param s const char*
QTextStream* q_textstream_operator_shift_right14(void* self, const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
///
/// @param self QTextStream*
/// @param array char*
QTextStream* q_textstream_operator_shift_right15(void* self, char* array);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-gt-gt)
///
/// @param self QTextStream*
/// @param c char*
QTextStream* q_textstream_operator_shift_right16(void* self, char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
///
/// @param self QTextStream*
/// @param ch QChar*
QTextStream* q_textstream_operator_shift_left(void* self, void* ch);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
///
/// @param self QTextStream*
/// @param ch char
QTextStream* q_textstream_operator_shift_left2(void* self, char ch);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
///
/// @param self QTextStream*
/// @param i short
QTextStream* q_textstream_operator_shift_left4(void* self, short i);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
///
/// @param self QTextStream*
/// @param i unsigned short
QTextStream* q_textstream_operator_shift_left5(void* self, unsigned short i);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
///
/// @param self QTextStream*
/// @param i int
QTextStream* q_textstream_operator_shift_left6(void* self, int i);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
///
/// @param self QTextStream*
/// @param i uint32_t
QTextStream* q_textstream_operator_shift_left7(void* self, uint32_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
///
/// @param self QTextStream*
/// @param i int64_t
QTextStream* q_textstream_operator_shift_left8(void* self, int64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
///
/// @param self QTextStream*
/// @param i uint64_t
QTextStream* q_textstream_operator_shift_left9(void* self, uint64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
///
/// @param self QTextStream*
/// @param i long long
QTextStream* q_textstream_operator_shift_left10(void* self, long long i);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
///
/// @param self QTextStream*
/// @param i uint64_t
QTextStream* q_textstream_operator_shift_left11(void* self, uint64_t i);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
///
/// @param self QTextStream*
/// @param f float
QTextStream* q_textstream_operator_shift_left12(void* self, float f);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
///
/// @param self QTextStream*
/// @param f double
QTextStream* q_textstream_operator_shift_left13(void* self, double f);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
///
/// @param self QTextStream*
/// @param s const char*
QTextStream* q_textstream_operator_shift_left14(void* self, const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
///
/// @param self QTextStream*
/// @param array const char*
QTextStream* q_textstream_operator_shift_left17(void* self, const char* array);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
///
/// @param self QTextStream*
/// @param c const char*
QTextStream* q_textstream_operator_shift_left18(void* self, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#operator-lt-lt)
///
/// @param self QTextStream*
/// @param ptr void*
QTextStream* q_textstream_operator_shift_left19(void* self, void* ptr);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#readLine)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTextStream*
/// @param maxlen long long
const char* q_textstream_read_line1(void* self, long long maxlen);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextstream.html#dtor.QTextStream)
///
/// Delete this object from C++ memory.
///
/// @param self QTextStream*
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
