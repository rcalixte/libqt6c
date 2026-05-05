#include "libqbytearrayview.hpp"
#include "libqbytearray.hpp"
#include "libqbytearray.h"

char* q_bytearray_number(int param1) {
    libqt_string _str = QByteArray_Number(param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_bytearray_number2(uint32_t param1) {
    libqt_string _str = QByteArray_Number2(param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_bytearray_number3(long param1) {
    libqt_string _str = QByteArray_Number3(param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_bytearray_number4(uintptr_t param1) {
    libqt_string _str = QByteArray_Number4(param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_bytearray_number5(long long param1) {
    libqt_string _str = QByteArray_Number5(param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_bytearray_number6(uintptr_t param1) {
    libqt_string _str = QByteArray_Number6(param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_bytearray_number7(double param1) {
    libqt_string _str = QByteArray_Number7(param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_bytearray_from_raw_data(const char* data, intptr_t size) {
    libqt_string _str = QByteArray_FromRawData(data, size);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QByteArray__FromBase64Result* q_bytearray_from_base64_encoding(char* base64) {
    return QByteArray_FromBase64Encoding(qstring(base64));
}

char* q_bytearray_from_base64(char* base64) {
    libqt_string _str = QByteArray_FromBase64(qstring(base64));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_bytearray_from_hex(char* hexEncoded) {
    libqt_string _str = QByteArray_FromHex(qstring(hexEncoded));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_bytearray_from_percent_encoding(char* pctEncoded) {
    libqt_string _str = QByteArray_FromPercentEncoding(qstring(pctEncoded));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

intptr_t q_bytearray_max_size2() {
    return QByteArray_MaxSize2();
}

char* q_bytearray_number22(int param1, int base) {
    libqt_string _str = QByteArray_Number22(param1, base);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_bytearray_number23(uint32_t param1, int base) {
    libqt_string _str = QByteArray_Number23(param1, base);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_bytearray_number24(long param1, int base) {
    libqt_string _str = QByteArray_Number24(param1, base);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_bytearray_number25(uintptr_t param1, int base) {
    libqt_string _str = QByteArray_Number25(param1, base);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_bytearray_number26(long long param1, int base) {
    libqt_string _str = QByteArray_Number26(param1, base);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_bytearray_number27(uintptr_t param1, int base) {
    libqt_string _str = QByteArray_Number27(param1, base);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_bytearray_number28(double param1, char format) {
    libqt_string _str = QByteArray_Number28(param1, format);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_bytearray_number32(double param1, char format, int precision) {
    libqt_string _str = QByteArray_Number32(param1, format, precision);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QByteArray__FromBase64Result* q_bytearray_from_base64_encoding2(char* base64, int32_t options) {
    return QByteArray_FromBase64Encoding2(qstring(base64), options);
}

char* q_bytearray_from_base642(char* base64, int32_t options) {
    libqt_string _str = QByteArray_FromBase642(qstring(base64), options);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_bytearray_from_percent_encoding2(char* pctEncoded, char percent) {
    libqt_string _str = QByteArray_FromPercentEncoding2(qstring(pctEncoded), percent);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QByteArray__FromBase64Result* q_bytearray__frombase64result_new(void* param1) {
    return QByteArray__FromBase64Result_new((QByteArray__FromBase64Result*)param1);
}

QByteArray__FromBase64Result* q_bytearray__frombase64result_new2() {
    return QByteArray__FromBase64Result_new2();
}

char* q_bytearray__frombase64result_decoded(void* self) {
    libqt_string decoded_str = QByteArray__FromBase64Result_Decoded((QByteArray__FromBase64Result*)self);
    char* decoded_ret = qstring_to_char(decoded_str);
    libqt_string_free(&decoded_str);
    return decoded_ret;
}

void q_bytearray__frombase64result_set_decoded(void* self, char* decoded) {
    QByteArray__FromBase64Result_SetDecoded((QByteArray__FromBase64Result*)self, qstring(decoded));
}

int32_t q_bytearray__frombase64result_decoding_status(void* self) {
    return QByteArray__FromBase64Result_DecodingStatus((QByteArray__FromBase64Result*)self);
}

void q_bytearray__frombase64result_set_decoding_status(void* self, int32_t decodingStatus) {
    QByteArray__FromBase64Result_SetDecodingStatus((QByteArray__FromBase64Result*)self, decodingStatus);
}

void q_bytearray__frombase64result_swap(void* self, void* other) {
    QByteArray__FromBase64Result_Swap((QByteArray__FromBase64Result*)self, (QByteArray__FromBase64Result*)other);
}

bool q_bytearray__frombase64result_to_bool(void* self) {
    return QByteArray__FromBase64Result_ToBool((QByteArray__FromBase64Result*)self);
}

char* q_bytearray__frombase64result_operator_multiply(void* self) {
    libqt_string _str = QByteArray__FromBase64Result_OperatorMultiply((QByteArray__FromBase64Result*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_bytearray__frombase64result_operator_multiply2(void* self) {
    libqt_string _str = QByteArray__FromBase64Result_OperatorMultiply2((QByteArray__FromBase64Result*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_bytearray__frombase64result_operator_assign(void* self, void* param1) {
    QByteArray__FromBase64Result_OperatorAssign((QByteArray__FromBase64Result*)self, (QByteArray__FromBase64Result*)param1);
}

void q_bytearray__frombase64result_delete(void* self) {
    QByteArray__FromBase64Result_Delete((QByteArray__FromBase64Result*)(self));
}
