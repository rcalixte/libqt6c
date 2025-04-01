#include "libqiodevice.hpp"
#include "libqmessageauthenticationcode.hpp"
#include "libqmessageauthenticationcode.h"

QMessageAuthenticationCode* q_messageauthenticationcode_new(int64_t method) {
    return QMessageAuthenticationCode_new(method);
}

QMessageAuthenticationCode* q_messageauthenticationcode_new2(int64_t method, const char* key) {
    return QMessageAuthenticationCode_new2(method, qstring(key));
}

void q_messageauthenticationcode_reset(void* self) {
    QMessageAuthenticationCode_Reset((QMessageAuthenticationCode*)self);
}

void q_messageauthenticationcode_set_key(void* self, const char* key) {
    QMessageAuthenticationCode_SetKey((QMessageAuthenticationCode*)self, qstring(key));
}

void q_messageauthenticationcode_add_data(void* self, const char* data, int64_t length) {
    QMessageAuthenticationCode_AddData((QMessageAuthenticationCode*)self, data, length);
}

void q_messageauthenticationcode_add_data_with_data(void* self, const char* data) {
    QMessageAuthenticationCode_AddDataWithData((QMessageAuthenticationCode*)self, qstring(data));
}

bool q_messageauthenticationcode_add_data_with_device(void* self, void* device) {
    return QMessageAuthenticationCode_AddDataWithDevice((QMessageAuthenticationCode*)self, (QIODevice*)device);
}

char* q_messageauthenticationcode_result(void* self) {
    libqt_string _str = QMessageAuthenticationCode_Result((QMessageAuthenticationCode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_messageauthenticationcode_hash(const char* message, const char* key, int64_t method) {
    libqt_string _str = QMessageAuthenticationCode_Hash(qstring(message), qstring(key), method);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_messageauthenticationcode_delete(void* self) {
    QMessageAuthenticationCode_Delete((QMessageAuthenticationCode*)(self));
}
