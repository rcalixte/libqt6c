#include "../libqobjectdefs.hpp"
#include "libkpassword.hpp"
#include "libkpassword.h"

const QMetaObject* k_password_get_enum_meta_object(int32_t param1) {
    return KPassword_GetEnumMetaObject(param1);
}

const char* k_password_get_enum_name(int32_t param1) {
    return KPassword_GetEnumName(param1);
}
