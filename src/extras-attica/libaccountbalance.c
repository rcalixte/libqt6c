#include "libaccountbalance.hpp"
#include "libaccountbalance.h"

Attica__AccountBalance* k_attica__accountbalance_new() {
    return Attica__AccountBalance_new();
}

Attica__AccountBalance* k_attica__accountbalance_new2(void* other) {
    return Attica__AccountBalance_new2((Attica__AccountBalance*)other);
}

void k_attica__accountbalance_operator_assign(void* self, void* other) {
    Attica__AccountBalance_OperatorAssign((Attica__AccountBalance*)self, (Attica__AccountBalance*)other);
}

void k_attica__accountbalance_set_currency(void* self, const char* currency) {
    Attica__AccountBalance_SetCurrency((Attica__AccountBalance*)self, qstring(currency));
}

const char* k_attica__accountbalance_currency(void* self) {
    libqt_string _str = Attica__AccountBalance_Currency((Attica__AccountBalance*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__accountbalance_set_balance(void* self, const char* name) {
    Attica__AccountBalance_SetBalance((Attica__AccountBalance*)self, qstring(name));
}

const char* k_attica__accountbalance_balance(void* self) {
    libqt_string _str = Attica__AccountBalance_Balance((Attica__AccountBalance*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__accountbalance_delete(void* self) {
    Attica__AccountBalance_Delete((Attica__AccountBalance*)(self));
}
