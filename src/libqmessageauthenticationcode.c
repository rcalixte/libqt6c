#include "libqbytearrayview.hpp"
#include "libqiodevice.hpp"
#include "libqmessageauthenticationcode.hpp"
#include "libqmessageauthenticationcode.h"

QMessageAuthenticationCode* q_messageauthenticationcode_new(int32_t method) {
    return QMessageAuthenticationCode_new(method);
}

QMessageAuthenticationCode* q_messageauthenticationcode_new2(int32_t method, char* key) {
    return QMessageAuthenticationCode_new2(method, qstring(key));
}

void q_messageauthenticationcode_swap(void* self, void* other) {
    QMessageAuthenticationCode_Swap((QMessageAuthenticationCode*)self, (QMessageAuthenticationCode*)other);
}

void q_messageauthenticationcode_reset(void* self) {
    QMessageAuthenticationCode_Reset((QMessageAuthenticationCode*)self);
}

void q_messageauthenticationcode_set_key(void* self, char* key) {
    QMessageAuthenticationCode_SetKey((QMessageAuthenticationCode*)self, qstring(key));
}

void q_messageauthenticationcode_add_data(void* self, const char* data, int64_t length) {
    QMessageAuthenticationCode_AddData((QMessageAuthenticationCode*)self, data, length);
}

void q_messageauthenticationcode_add_data2(void* self, char* data) {
    QMessageAuthenticationCode_AddData2((QMessageAuthenticationCode*)self, qstring(data));
}

bool q_messageauthenticationcode_add_data3(void* self, void* device) {
    return QMessageAuthenticationCode_AddData3((QMessageAuthenticationCode*)self, (QIODevice*)device);
}

char* q_messageauthenticationcode_result_view(void* self) {
    libqt_string _str = QMessageAuthenticationCode_ResultView((QMessageAuthenticationCode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_messageauthenticationcode_result(void* self) {
    libqt_string _str = QMessageAuthenticationCode_Result((QMessageAuthenticationCode*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_messageauthenticationcode_hash(char* message, char* key, int32_t method) {
    libqt_string _str = QMessageAuthenticationCode_Hash(qstring(message), qstring(key), method);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_messageauthenticationcode_hash_into(libqt_list /* of char */ buffer, char* message, char* key, int32_t method) {
    libqt_string _str = QMessageAuthenticationCode_HashInto(buffer, qstring(message), qstring(key), method);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_messageauthenticationcode_hash_into2(libqt_list /* of unsigned char */ buffer, char* message, char* key, int32_t method) {
    libqt_string _str = QMessageAuthenticationCode_HashInto2(buffer, qstring(message), qstring(key), method);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_messageauthenticationcode_hash_into4(libqt_list /* of char */ buffer, libqt_list /* of char* */ messageParts, char* key, int32_t method) {
    libqt_string _str = QMessageAuthenticationCode_HashInto4(buffer, messageParts, qstring(key), method);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_messageauthenticationcode_hash_into5(libqt_list /* of unsigned char */ buffer, libqt_list /* of char* */ messageParts, char* key, int32_t method) {
    libqt_string _str = QMessageAuthenticationCode_HashInto5(buffer, messageParts, qstring(key), method);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_messageauthenticationcode_delete(void* self) {
    QMessageAuthenticationCode_Delete((QMessageAuthenticationCode*)(self));
}
