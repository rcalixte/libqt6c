#include "libsignonerror.hpp"
#include "libsignonerror.h"

SignOn__Error* q_signon__error_new() {
    return SignOn__Error_new();
}

SignOn__Error* q_signon__error_new2(void* src) {
    return SignOn__Error_new2((SignOn__Error*)src);
}

SignOn__Error* q_signon__error_new3(int type) {
    return SignOn__Error_new3(type);
}

SignOn__Error* q_signon__error_new4(int type, const char* message) {
    return SignOn__Error_new4(type, qstring(message));
}

void q_signon__error_operator_assign(void* self, void* src) {
    SignOn__Error_OperatorAssign((SignOn__Error*)self, (SignOn__Error*)src);
}

void q_signon__error_set_type(void* self, int type) {
    SignOn__Error_SetType((SignOn__Error*)self, type);
}

void q_signon__error_set_message(void* self, const char* message) {
    SignOn__Error_SetMessage((SignOn__Error*)self, qstring(message));
}

int32_t q_signon__error_type(void* self) {
    return SignOn__Error_Type((SignOn__Error*)self);
}

const char* q_signon__error_message(void* self) {
    libqt_string _str = SignOn__Error_Message((SignOn__Error*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_signon__error_delete(void* self) {
    SignOn__Error_Delete((SignOn__Error*)(self));
}
