#include "../libqvariant.hpp"
#include "libauth-data.hpp"
#include "libauth-data.h"

Accounts__AuthData* q_accounts__authdata_new(void* other) {
    return Accounts__AuthData_new((Accounts__AuthData*)other);
}

uint32_t q_accounts__authdata_credentials_id(void* self) {
    return Accounts__AuthData_CredentialsId((Accounts__AuthData*)self);
}

const char* q_accounts__authdata_method(void* self) {
    libqt_string _str = Accounts__AuthData_Method((Accounts__AuthData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_accounts__authdata_mechanism(void* self) {
    libqt_string _str = Accounts__AuthData_Mechanism((Accounts__AuthData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_map /* of const char* to QVariant* */ q_accounts__authdata_parameters(void* self) {
    return Accounts__AuthData_Parameters((Accounts__AuthData*)self);
}

void q_accounts__authdata_delete(void* self) {
    Accounts__AuthData_Delete((Accounts__AuthData*)(self));
}
