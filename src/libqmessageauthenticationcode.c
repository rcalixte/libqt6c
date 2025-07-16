#include "libqbytearrayview.hpp"
#include "libqiodevice.hpp"
#include "libqmessageauthenticationcode.hpp"
#include "libqmessageauthenticationcode.h"

QMessageAuthenticationCode* q_messageauthenticationcode_new(int64_t method) {
    return QMessageAuthenticationCode_new(method);
}

QMessageAuthenticationCode* q_messageauthenticationcode_new2(int64_t method, const char* key) {
    libqt_string key_string = qstring(key);

    return QMessageAuthenticationCode_new2(method, (QByteArrayView*)&key_string);
}

void q_messageauthenticationcode_swap(void* self, void* other) {
    QMessageAuthenticationCode_Swap((QMessageAuthenticationCode*)self, (QMessageAuthenticationCode*)other);
}

void q_messageauthenticationcode_reset(void* self) {
    QMessageAuthenticationCode_Reset((QMessageAuthenticationCode*)self);
}

void q_messageauthenticationcode_set_key(void* self, const char* key) {
    libqt_string key_string = qstring(key);
    QMessageAuthenticationCode_SetKey((QMessageAuthenticationCode*)self, (QByteArrayView*)&key_string);
}

void q_messageauthenticationcode_add_data(void* self, const char* data, int64_t length) {
    QMessageAuthenticationCode_AddData((QMessageAuthenticationCode*)self, data, length);
}

void q_messageauthenticationcode_add_data2(void* self, const char* data) {
    libqt_string data_string = qstring(data);
    QMessageAuthenticationCode_AddData2((QMessageAuthenticationCode*)self, (QByteArrayView*)&data_string);
}

bool q_messageauthenticationcode_add_data3(void* self, void* device) {
    return QMessageAuthenticationCode_AddData3((QMessageAuthenticationCode*)self, (QIODevice*)device);
}

const char* q_messageauthenticationcode_result_view(void* self) {
    QByteArrayView* _str = QMessageAuthenticationCode_ResultView((QMessageAuthenticationCode*)self);
    const char* _ret = QByteArrayView_Data(_str);
    return _ret;
}

char* q_messageauthenticationcode_result(void* self) {
    libqt_string _str = QMessageAuthenticationCode_Result((QMessageAuthenticationCode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_messageauthenticationcode_hash(const char* message, const char* key, int64_t method) {
    libqt_string message_string = qstring(message);
    libqt_string key_string = qstring(key);
    libqt_string _str = QMessageAuthenticationCode_Hash((QByteArrayView*)&message_string, (QByteArrayView*)&key_string, method);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_messageauthenticationcode_hash_into(libqt_list buffer, const char* message, const char* key, int64_t method) {
    libqt_string message_string = qstring(message);
    libqt_string key_string = qstring(key);
    QByteArrayView* _str = QMessageAuthenticationCode_HashInto(buffer, (QByteArrayView*)&message_string, (QByteArrayView*)&key_string, method);
    const char* _ret = QByteArrayView_Data(_str);
    return _ret;
}

const char* q_messageauthenticationcode_hash_into2(libqt_list buffer, const char* message, const char* key, int64_t method) {
    libqt_string message_string = qstring(message);
    libqt_string key_string = qstring(key);
    QByteArrayView* _str = QMessageAuthenticationCode_HashInto2(buffer, (QByteArrayView*)&message_string, (QByteArrayView*)&key_string, method);
    const char* _ret = QByteArrayView_Data(_str);
    return _ret;
}

const char* q_messageauthenticationcode_hash_into4(libqt_list buffer, libqt_list messageParts, const char* key, int64_t method) {
    libqt_string key_string = qstring(key);
    QByteArrayView* _str = QMessageAuthenticationCode_HashInto4(buffer, messageParts, (QByteArrayView*)&key_string, method);
    const char* _ret = QByteArrayView_Data(_str);
    return _ret;
}

const char* q_messageauthenticationcode_hash_into5(libqt_list buffer, libqt_list messageParts, const char* key, int64_t method) {
    libqt_string key_string = qstring(key);
    QByteArrayView* _str = QMessageAuthenticationCode_HashInto5(buffer, messageParts, (QByteArrayView*)&key_string, method);
    const char* _ret = QByteArrayView_Data(_str);
    return _ret;
}

void q_messageauthenticationcode_delete(void* self) {
    QMessageAuthenticationCode_Delete((QMessageAuthenticationCode*)(self));
}
