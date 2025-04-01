#include "libqbytearrayview.hpp"
#include "libqiodevice.hpp"
#include "libqcryptographichash.hpp"
#include "libqcryptographichash.h"

QCryptographicHash* q_cryptographichash_new(int64_t method) {
    return QCryptographicHash_new(method);
}

void q_cryptographichash_reset(void* self) {
    QCryptographicHash_Reset((QCryptographicHash*)self);
}

void q_cryptographichash_add_data(void* self, const char* data, int64_t length) {
    QCryptographicHash_AddData((QCryptographicHash*)self, data, length);
}

void q_cryptographichash_add_data_with_data(void* self, const char* data) {
    libqt_strview data_strview = qstrview(data);
    QCryptographicHash_AddDataWithData((QCryptographicHash*)self, (QByteArrayView*)&data_strview);
}

bool q_cryptographichash_add_data_with_device(void* self, void* device) {
    return QCryptographicHash_AddDataWithDevice((QCryptographicHash*)self, (QIODevice*)device);
}

char* q_cryptographichash_result(void* self) {
    libqt_string _str = QCryptographicHash_Result((QCryptographicHash*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_cryptographichash_result_view(void* self) {
    QByteArrayView* _view = QCryptographicHash_ResultView((QCryptographicHash*)self);
    libqt_strview _ret = {
        .ptr = QByteArrayView_Data(_view),
        .len = QByteArrayView_Size(_view),
    };
    return _ret.ptr;
}

char* q_cryptographichash_hash(const char* data, int64_t method) {
    libqt_strview data_strview = qstrview(data);
    libqt_string _str = QCryptographicHash_Hash((QByteArrayView*)&data_strview, method);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_cryptographichash_hash_length(int64_t method) {
    return QCryptographicHash_HashLength(method);
}

void q_cryptographichash_delete(void* self) {
    QCryptographicHash_Delete((QCryptographicHash*)(self));
}
