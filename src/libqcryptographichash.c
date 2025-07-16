#include "libqbytearrayview.hpp"
#include "libqiodevice.hpp"
#include "libqcryptographichash.hpp"
#include "libqcryptographichash.h"

QCryptographicHash* q_cryptographichash_new(int64_t method) {
    return QCryptographicHash_new(method);
}

void q_cryptographichash_swap(void* self, void* other) {
    QCryptographicHash_Swap((QCryptographicHash*)self, (QCryptographicHash*)other);
}

void q_cryptographichash_reset(void* self) {
    QCryptographicHash_Reset((QCryptographicHash*)self);
}

int64_t q_cryptographichash_algorithm(void* self) {
    return QCryptographicHash_Algorithm((QCryptographicHash*)self);
}

void q_cryptographichash_add_data(void* self, const char* data, int64_t length) {
    QCryptographicHash_AddData((QCryptographicHash*)self, data, length);
}

void q_cryptographichash_add_data2(void* self, const char* data) {
    libqt_string data_string = qstring(data);
    QCryptographicHash_AddData2((QCryptographicHash*)self, (QByteArrayView*)&data_string);
}

bool q_cryptographichash_add_data3(void* self, void* device) {
    return QCryptographicHash_AddData3((QCryptographicHash*)self, (QIODevice*)device);
}

char* q_cryptographichash_result(void* self) {
    libqt_string _str = QCryptographicHash_Result((QCryptographicHash*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_cryptographichash_result_view(void* self) {
    QByteArrayView* _str = QCryptographicHash_ResultView((QCryptographicHash*)self);
    const char* _ret = QByteArrayView_Data(_str);
    return _ret;
}

char* q_cryptographichash_hash(const char* data, int64_t method) {
    libqt_string data_string = qstring(data);
    libqt_string _str = QCryptographicHash_Hash((QByteArrayView*)&data_string, method);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_cryptographichash_hash_into(libqt_list buffer, const char* data, int64_t method) {
    libqt_string data_string = qstring(data);
    QByteArrayView* _str = QCryptographicHash_HashInto(buffer, (QByteArrayView*)&data_string, method);
    const char* _ret = QByteArrayView_Data(_str);
    return _ret;
}

const char* q_cryptographichash_hash_into2(libqt_list buffer, const char* data, int64_t method) {
    libqt_string data_string = qstring(data);
    QByteArrayView* _str = QCryptographicHash_HashInto2(buffer, (QByteArrayView*)&data_string, method);
    const char* _ret = QByteArrayView_Data(_str);
    return _ret;
}

const char* q_cryptographichash_hash_into4(libqt_list buffer, libqt_list data, int64_t method) {
    QByteArrayView* _str = QCryptographicHash_HashInto4(buffer, data, method);
    const char* _ret = QByteArrayView_Data(_str);
    return _ret;
}

const char* q_cryptographichash_hash_into5(libqt_list buffer, libqt_list data, int64_t method) {
    QByteArrayView* _str = QCryptographicHash_HashInto5(buffer, data, method);
    const char* _ret = QByteArrayView_Data(_str);
    return _ret;
}

int32_t q_cryptographichash_hash_length(int64_t method) {
    return QCryptographicHash_HashLength(method);
}

bool q_cryptographichash_supports_algorithm(int64_t method) {
    return QCryptographicHash_SupportsAlgorithm(method);
}

void q_cryptographichash_delete(void* self) {
    QCryptographicHash_Delete((QCryptographicHash*)(self));
}
