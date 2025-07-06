#include "libqbytearrayview.hpp"
#include "libqiodevice.hpp"
#include "libqmessageauthenticationcode.hpp"
#include "libqmessageauthenticationcode.h"

QMessageAuthenticationCode* q_messageauthenticationcode_new(int64_t method) {
    return QMessageAuthenticationCode_new(method);
}

QMessageAuthenticationCode* q_messageauthenticationcode_new2(int64_t method, const char* key) {
    libqt_strview key_strview = qstrview(key);

    return QMessageAuthenticationCode_new2(method, (QByteArrayView*)&key_strview);
}

void q_messageauthenticationcode_swap(void* self, void* other) {
    QMessageAuthenticationCode_Swap((QMessageAuthenticationCode*)self, (QMessageAuthenticationCode*)other);
}

void q_messageauthenticationcode_reset(void* self) {
    QMessageAuthenticationCode_Reset((QMessageAuthenticationCode*)self);
}

void q_messageauthenticationcode_set_key(void* self, const char* key) {
    libqt_strview key_strview = qstrview(key);
    QMessageAuthenticationCode_SetKey((QMessageAuthenticationCode*)self, (QByteArrayView*)&key_strview);
}

void q_messageauthenticationcode_add_data(void* self, const char* data, int64_t length) {
    QMessageAuthenticationCode_AddData((QMessageAuthenticationCode*)self, data, length);
}

void q_messageauthenticationcode_add_data_with_data(void* self, const char* data) {
    libqt_strview data_strview = qstrview(data);
    QMessageAuthenticationCode_AddDataWithData((QMessageAuthenticationCode*)self, (QByteArrayView*)&data_strview);
}

bool q_messageauthenticationcode_add_data_with_device(void* self, void* device) {
    return QMessageAuthenticationCode_AddDataWithDevice((QMessageAuthenticationCode*)self, (QIODevice*)device);
}

const char* q_messageauthenticationcode_result_view(void* self) {
    QByteArrayView* _view = QMessageAuthenticationCode_ResultView((QMessageAuthenticationCode*)self);
    libqt_strview _ret = {
        .ptr = QByteArrayView_Data(_view),
        .len = QByteArrayView_Size(_view),
    };
    return _ret.ptr;
}

char* q_messageauthenticationcode_result(void* self) {
    libqt_string _str = QMessageAuthenticationCode_Result((QMessageAuthenticationCode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_messageauthenticationcode_hash(const char* message, const char* key, int64_t method) {
    libqt_strview message_strview = qstrview(message);
    libqt_strview key_strview = qstrview(key);
    libqt_string _str = QMessageAuthenticationCode_Hash((QByteArrayView*)&message_strview, (QByteArrayView*)&key_strview, method);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_messageauthenticationcode_hash_into(libqt_list buffer, const char* message, const char* key, int64_t method) {
    libqt_strview message_strview = qstrview(message);
    libqt_strview key_strview = qstrview(key);
    QByteArrayView* _view = QMessageAuthenticationCode_HashInto(buffer, (QByteArrayView*)&message_strview, (QByteArrayView*)&key_strview, method);
    libqt_strview _ret = {
        .ptr = QByteArrayView_Data(_view),
        .len = QByteArrayView_Size(_view),
    };
    return _ret.ptr;
}

const char* q_messageauthenticationcode_hash_into2(libqt_list buffer, const char* message, const char* key, int64_t method) {
    libqt_strview message_strview = qstrview(message);
    libqt_strview key_strview = qstrview(key);
    QByteArrayView* _view = QMessageAuthenticationCode_HashInto2(buffer, (QByteArrayView*)&message_strview, (QByteArrayView*)&key_strview, method);
    libqt_strview _ret = {
        .ptr = QByteArrayView_Data(_view),
        .len = QByteArrayView_Size(_view),
    };
    return _ret.ptr;
}

const char* q_messageauthenticationcode_hash_into4(libqt_list buffer, libqt_list messageParts, const char* key, int64_t method) {
    libqt_strview key_strview = qstrview(key);
    QByteArrayView* _view = QMessageAuthenticationCode_HashInto4(buffer, messageParts, (QByteArrayView*)&key_strview, method);
    libqt_strview _ret = {
        .ptr = QByteArrayView_Data(_view),
        .len = QByteArrayView_Size(_view),
    };
    return _ret.ptr;
}

const char* q_messageauthenticationcode_hash_into5(libqt_list buffer, libqt_list messageParts, const char* key, int64_t method) {
    libqt_strview key_strview = qstrview(key);
    QByteArrayView* _view = QMessageAuthenticationCode_HashInto5(buffer, messageParts, (QByteArrayView*)&key_strview, method);
    libqt_strview _ret = {
        .ptr = QByteArrayView_Data(_view),
        .len = QByteArrayView_Size(_view),
    };
    return _ret.ptr;
}

void q_messageauthenticationcode_delete(void* self) {
    QMessageAuthenticationCode_Delete((QMessageAuthenticationCode*)(self));
}
