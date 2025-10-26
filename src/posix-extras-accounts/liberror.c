#include "liberror.hpp"
#include "liberror.h"

Accounts__Error* q_accounts__error_new() {
    return Accounts__Error_new();
}

Accounts__Error* q_accounts__error_new2(void* src) {
    return Accounts__Error_new2((Accounts__Error*)src);
}

Accounts__Error* q_accounts__error_new3(int32_t type) {
    return Accounts__Error_new3(type);
}

Accounts__Error* q_accounts__error_new4(int32_t type, const char* message) {
    return Accounts__Error_new4(type, qstring(message));
}

void q_accounts__error_operator_assign(void* self, void* src) {
    Accounts__Error_OperatorAssign((Accounts__Error*)self, (Accounts__Error*)src);
}

int32_t q_accounts__error_type(void* self) {
    return Accounts__Error_Type((Accounts__Error*)self);
}

const char* q_accounts__error_message(void* self) {
    libqt_string _str = Accounts__Error_Message((Accounts__Error*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_accounts__error_delete(void* self) {
    Accounts__Error_Delete((Accounts__Error*)(self));
}
