#include "libqchar.hpp"
#include "libqiodevice.hpp"
#include "libqiodevicebase.hpp"
#include "libqlocale.hpp"
#include <string.h>
#include "libqtextstream.hpp"
#include "libqtextstream.h"

QTextStream* q_textstream_new() {
    return QTextStream_new();
}

QTextStream* q_textstream_new2(void* device) {
    return QTextStream_new2((QIODevice*)device);
}

QTextStream* q_textstream_new3(const char* array) {
    return QTextStream_new3(qstring(array));
}

QTextStream* q_textstream_new4(const char* array, int64_t openMode) {
    return QTextStream_new4(qstring(array), openMode);
}

void q_textstream_set_encoding(void* self, int64_t encoding) {
    QTextStream_SetEncoding((QTextStream*)self, encoding);
}

int64_t q_textstream_encoding(void* self) {
    return QTextStream_Encoding((QTextStream*)self);
}

void q_textstream_set_auto_detect_unicode(void* self, bool enabled) {
    QTextStream_SetAutoDetectUnicode((QTextStream*)self, enabled);
}

bool q_textstream_auto_detect_unicode(void* self) {
    return QTextStream_AutoDetectUnicode((QTextStream*)self);
}

void q_textstream_set_generate_byte_order_mark(void* self, bool generate) {
    QTextStream_SetGenerateByteOrderMark((QTextStream*)self, generate);
}

bool q_textstream_generate_byte_order_mark(void* self) {
    return QTextStream_GenerateByteOrderMark((QTextStream*)self);
}

void q_textstream_set_locale(void* self, void* locale) {
    QTextStream_SetLocale((QTextStream*)self, (QLocale*)locale);
}

QLocale* q_textstream_locale(void* self) {
    return QTextStream_Locale((QTextStream*)self);
}

void q_textstream_set_device(void* self, void* device) {
    QTextStream_SetDevice((QTextStream*)self, (QIODevice*)device);
}

QIODevice* q_textstream_device(void* self) {
    return QTextStream_Device((QTextStream*)self);
}

const char* q_textstream_string(void* self) {
    libqt_string _str = QTextStream_String((QTextStream*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_textstream_status(void* self) {
    return QTextStream_Status((QTextStream*)self);
}

void q_textstream_set_status(void* self, int64_t status) {
    QTextStream_SetStatus((QTextStream*)self, status);
}

void q_textstream_reset_status(void* self) {
    QTextStream_ResetStatus((QTextStream*)self);
}

bool q_textstream_at_end(void* self) {
    return QTextStream_AtEnd((QTextStream*)self);
}

void q_textstream_reset(void* self) {
    QTextStream_Reset((QTextStream*)self);
}

void q_textstream_flush(void* self) {
    QTextStream_Flush((QTextStream*)self);
}

bool q_textstream_seek(void* self, long long pos) {
    return QTextStream_Seek((QTextStream*)self, pos);
}

long long q_textstream_pos(void* self) {
    return QTextStream_Pos((QTextStream*)self);
}

void q_textstream_skip_white_space(void* self) {
    QTextStream_SkipWhiteSpace((QTextStream*)self);
}

const char* q_textstream_read_line(void* self) {
    libqt_string _str = QTextStream_ReadLine((QTextStream*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_textstream_read_all(void* self) {
    libqt_string _str = QTextStream_ReadAll((QTextStream*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_textstream_read(void* self, long long maxlen) {
    libqt_string _str = QTextStream_Read((QTextStream*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_textstream_set_field_alignment(void* self, int64_t alignment) {
    QTextStream_SetFieldAlignment((QTextStream*)self, alignment);
}

int64_t q_textstream_field_alignment(void* self) {
    return QTextStream_FieldAlignment((QTextStream*)self);
}

void q_textstream_set_pad_char(void* self, void* ch) {
    QTextStream_SetPadChar((QTextStream*)self, (QChar*)ch);
}

QChar* q_textstream_pad_char(void* self) {
    return QTextStream_PadChar((QTextStream*)self);
}

void q_textstream_set_field_width(void* self, int width) {
    QTextStream_SetFieldWidth((QTextStream*)self, width);
}

int32_t q_textstream_field_width(void* self) {
    return QTextStream_FieldWidth((QTextStream*)self);
}

void q_textstream_set_number_flags(void* self, int64_t flags) {
    QTextStream_SetNumberFlags((QTextStream*)self, flags);
}

int64_t q_textstream_number_flags(void* self) {
    return QTextStream_NumberFlags((QTextStream*)self);
}

void q_textstream_set_integer_base(void* self, int base) {
    QTextStream_SetIntegerBase((QTextStream*)self, base);
}

int32_t q_textstream_integer_base(void* self) {
    return QTextStream_IntegerBase((QTextStream*)self);
}

void q_textstream_set_real_number_notation(void* self, int64_t notation) {
    QTextStream_SetRealNumberNotation((QTextStream*)self, notation);
}

int64_t q_textstream_real_number_notation(void* self) {
    return QTextStream_RealNumberNotation((QTextStream*)self);
}

void q_textstream_set_real_number_precision(void* self, int precision) {
    QTextStream_SetRealNumberPrecision((QTextStream*)self, precision);
}

int32_t q_textstream_real_number_precision(void* self) {
    return QTextStream_RealNumberPrecision((QTextStream*)self);
}

QTextStream* q_textstream_operator_shift_right(void* self, void* ch) {
    return QTextStream_OperatorShiftRight((QTextStream*)self, (QChar*)ch);
}

QTextStream* q_textstream_operator_shift_right_with_ch(void* self, char* ch) {
    return QTextStream_OperatorShiftRightWithCh((QTextStream*)self, ch);
}

QTextStream* q_textstream_operator_shift_right_with_short(void* self, short* i) {
    return QTextStream_OperatorShiftRightWithShort((QTextStream*)self, i);
}

QTextStream* q_textstream_operator_shift_right_with_unsignedshort(void* self, unsigned short* i) {
    return QTextStream_OperatorShiftRightWithUnsignedshort((QTextStream*)self, i);
}

QTextStream* q_textstream_operator_shift_right_with_int(void* self, int* i) {
    return QTextStream_OperatorShiftRightWithInt((QTextStream*)self, i);
}

QTextStream* q_textstream_operator_shift_right_with_unsignedint(void* self, uint32_t* i) {
    return QTextStream_OperatorShiftRightWithUnsignedint((QTextStream*)self, i);
}

QTextStream* q_textstream_operator_shift_right_with_long(void* self, int64_t* i) {
    return QTextStream_OperatorShiftRightWithLong((QTextStream*)self, i);
}

QTextStream* q_textstream_operator_shift_right_with_unsignedlong(void* self, uint64_t* i) {
    return QTextStream_OperatorShiftRightWithUnsignedlong((QTextStream*)self, i);
}

QTextStream* q_textstream_operator_shift_right_with_qlonglong(void* self, long long* i) {
    return QTextStream_OperatorShiftRightWithQlonglong((QTextStream*)self, i);
}

QTextStream* q_textstream_operator_shift_right_with_qulonglong(void* self, uint64_t* i) {
    return QTextStream_OperatorShiftRightWithQulonglong((QTextStream*)self, i);
}

QTextStream* q_textstream_operator_shift_right_with_float(void* self, float* f) {
    return QTextStream_OperatorShiftRightWithFloat((QTextStream*)self, f);
}

QTextStream* q_textstream_operator_shift_right_with_double(void* self, double* f) {
    return QTextStream_OperatorShiftRightWithDouble((QTextStream*)self, f);
}

QTextStream* q_textstream_operator_shift_right_with_q_string(void* self, const char* s) {
    return QTextStream_OperatorShiftRightWithQString((QTextStream*)self, qstring(s));
}

QTextStream* q_textstream_operator_shift_right_with_array(void* self, char* array) {
    return QTextStream_OperatorShiftRightWithArray((QTextStream*)self, qstring(array));
}

QTextStream* q_textstream_operator_shift_right_with_char(void* self, char* c) {
    return QTextStream_OperatorShiftRightWithChar((QTextStream*)self, c);
}

QTextStream* q_textstream_operator_shift_left(void* self, void* ch) {
    return QTextStream_OperatorShiftLeft((QTextStream*)self, (QChar*)ch);
}

QTextStream* q_textstream_operator_shift_left_with_ch(void* self, char ch) {
    return QTextStream_OperatorShiftLeftWithCh((QTextStream*)self, ch);
}

QTextStream* q_textstream_operator_shift_left_with_short(void* self, short i) {
    return QTextStream_OperatorShiftLeftWithShort((QTextStream*)self, i);
}

QTextStream* q_textstream_operator_shift_left_with_unsignedshort(void* self, unsigned short i) {
    return QTextStream_OperatorShiftLeftWithUnsignedshort((QTextStream*)self, i);
}

QTextStream* q_textstream_operator_shift_left_with_int(void* self, int i) {
    return QTextStream_OperatorShiftLeftWithInt((QTextStream*)self, i);
}

QTextStream* q_textstream_operator_shift_left_with_unsignedint(void* self, uint32_t i) {
    return QTextStream_OperatorShiftLeftWithUnsignedint((QTextStream*)self, i);
}

QTextStream* q_textstream_operator_shift_left_with_long(void* self, int64_t i) {
    return QTextStream_OperatorShiftLeftWithLong((QTextStream*)self, i);
}

QTextStream* q_textstream_operator_shift_left_with_unsignedlong(void* self, uint64_t i) {
    return QTextStream_OperatorShiftLeftWithUnsignedlong((QTextStream*)self, i);
}

QTextStream* q_textstream_operator_shift_left_with_qlonglong(void* self, long long i) {
    return QTextStream_OperatorShiftLeftWithQlonglong((QTextStream*)self, i);
}

QTextStream* q_textstream_operator_shift_left_with_qulonglong(void* self, uint64_t i) {
    return QTextStream_OperatorShiftLeftWithQulonglong((QTextStream*)self, i);
}

QTextStream* q_textstream_operator_shift_left_with_float(void* self, float f) {
    return QTextStream_OperatorShiftLeftWithFloat((QTextStream*)self, f);
}

QTextStream* q_textstream_operator_shift_left_with_double(void* self, double f) {
    return QTextStream_OperatorShiftLeftWithDouble((QTextStream*)self, f);
}

QTextStream* q_textstream_operator_shift_left_with_q_string(void* self, const char* s) {
    return QTextStream_OperatorShiftLeftWithQString((QTextStream*)self, qstring(s));
}

QTextStream* q_textstream_operator_shift_left_with_array(void* self, const char* array) {
    return QTextStream_OperatorShiftLeftWithArray((QTextStream*)self, qstring(array));
}

QTextStream* q_textstream_operator_shift_left_with_char(void* self, const char* c) {
    return QTextStream_OperatorShiftLeftWithChar((QTextStream*)self, c);
}

QTextStream* q_textstream_operator_shift_left_with_ptr(void* self, void* ptr) {
    return QTextStream_OperatorShiftLeftWithPtr((QTextStream*)self, ptr);
}

const char* q_textstream_read_line1(void* self, long long maxlen) {
    libqt_string _str = QTextStream_ReadLine1((QTextStream*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_textstream_delete(void* self) {
    QTextStream_Delete((QTextStream*)(self));
}
