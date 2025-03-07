#pragma once
#ifndef SRCQT6C_LIBQTEXTSTREAM_H
#define SRCQT6C_LIBQTEXTSTREAM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqchar.h"
#include "libqiodevice.h"
#include "libqiodevicebase.h"
#include "libqlocale.h"
#include <string.h>

QTextStream* q_textstream_new();
QTextStream* q_textstream_new2(void* device);
QTextStream* q_textstream_new3(const char* array);
QTextStream* q_textstream_new4(const char* array, int64_t openMode);
void q_textstream_set_encoding(void* self, int64_t encoding);
int64_t q_textstream_encoding(void* self);
void q_textstream_set_auto_detect_unicode(void* self, bool enabled);
bool q_textstream_auto_detect_unicode(void* self);
void q_textstream_set_generate_byte_order_mark(void* self, bool generate);
bool q_textstream_generate_byte_order_mark(void* self);
void q_textstream_set_locale(void* self, void* locale);
QLocale* q_textstream_locale(void* self);
void q_textstream_set_device(void* self, void* device);
QIODevice* q_textstream_device(void* self);
const char* q_textstream_string(void* self);
int64_t q_textstream_status(void* self);
void q_textstream_set_status(void* self, int64_t status);
void q_textstream_reset_status(void* self);
bool q_textstream_at_end(void* self);
void q_textstream_reset(void* self);
void q_textstream_flush(void* self);
bool q_textstream_seek(void* self, long long pos);
long long q_textstream_pos(void* self);
void q_textstream_skip_white_space(void* self);
const char* q_textstream_read_line(void* self);
const char* q_textstream_read_all(void* self);
const char* q_textstream_read(void* self, long long maxlen);
void q_textstream_set_field_alignment(void* self, int64_t alignment);
int64_t q_textstream_field_alignment(void* self);
void q_textstream_set_pad_char(void* self, void* ch);
QChar* q_textstream_pad_char(void* self);
void q_textstream_set_field_width(void* self, int width);
int32_t q_textstream_field_width(void* self);
void q_textstream_set_number_flags(void* self, int64_t flags);
int64_t q_textstream_number_flags(void* self);
void q_textstream_set_integer_base(void* self, int base);
int32_t q_textstream_integer_base(void* self);
void q_textstream_set_real_number_notation(void* self, int64_t notation);
int64_t q_textstream_real_number_notation(void* self);
void q_textstream_set_real_number_precision(void* self, int precision);
int32_t q_textstream_real_number_precision(void* self);
QTextStream* q_textstream_operator_shift_right(void* self, void* ch);
QTextStream* q_textstream_operator_shift_right_with_ch(void* self, char* ch);
QTextStream* q_textstream_operator_shift_right_with_short(void* self, short* i);
QTextStream* q_textstream_operator_shift_right_with_unsignedshort(void* self, unsigned short* i);
QTextStream* q_textstream_operator_shift_right_with_int(void* self, int* i);
QTextStream* q_textstream_operator_shift_right_with_unsignedint(void* self, uint32_t* i);
QTextStream* q_textstream_operator_shift_right_with_long(void* self, int64_t* i);
QTextStream* q_textstream_operator_shift_right_with_unsignedlong(void* self, uint64_t* i);
QTextStream* q_textstream_operator_shift_right_with_qlonglong(void* self, long long* i);
QTextStream* q_textstream_operator_shift_right_with_qulonglong(void* self, uint64_t* i);
QTextStream* q_textstream_operator_shift_right_with_float(void* self, float* f);
QTextStream* q_textstream_operator_shift_right_with_double(void* self, double* f);
QTextStream* q_textstream_operator_shift_right_with_q_string(void* self, const char* s);
QTextStream* q_textstream_operator_shift_right_with_array(void* self, char* array);
QTextStream* q_textstream_operator_shift_right_with_char(void* self, char* c);
QTextStream* q_textstream_operator_shift_left(void* self, void* ch);
QTextStream* q_textstream_operator_shift_left_with_ch(void* self, char ch);
QTextStream* q_textstream_operator_shift_left_with_short(void* self, short i);
QTextStream* q_textstream_operator_shift_left_with_unsignedshort(void* self, unsigned short i);
QTextStream* q_textstream_operator_shift_left_with_int(void* self, int i);
QTextStream* q_textstream_operator_shift_left_with_unsignedint(void* self, uint32_t i);
QTextStream* q_textstream_operator_shift_left_with_long(void* self, int64_t i);
QTextStream* q_textstream_operator_shift_left_with_unsignedlong(void* self, uint64_t i);
QTextStream* q_textstream_operator_shift_left_with_qlonglong(void* self, long long i);
QTextStream* q_textstream_operator_shift_left_with_qulonglong(void* self, uint64_t i);
QTextStream* q_textstream_operator_shift_left_with_float(void* self, float f);
QTextStream* q_textstream_operator_shift_left_with_double(void* self, double f);
QTextStream* q_textstream_operator_shift_left_with_q_string(void* self, const char* s);
QTextStream* q_textstream_operator_shift_left_with_array(void* self, const char* array);
QTextStream* q_textstream_operator_shift_left_with_char(void* self, const char* c);
QTextStream* q_textstream_operator_shift_left_with_ptr(void* self, void* ptr);
const char* q_textstream_read_line1(void* self, long long maxlen);
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
