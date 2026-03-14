#include "../libqobjectdefs.hpp"
#include "libqbluetooth.hpp"
#include "libqbluetooth.h"

const QMetaObject* q_bluetooth_get_enum_meta_object(int32_t param1) {
    return QBluetooth_GetEnumMetaObject(param1);
}

const char* q_bluetooth_get_enum_name(int32_t param1) {
    return QBluetooth_GetEnumName(param1);
}

const QMetaObject* q_bluetooth_get_enum_meta_object2(int32_t param1) {
    return QBluetooth_GetEnumMetaObject2(param1);
}

const char* q_bluetooth_get_enum_name2(int32_t param1) {
    return QBluetooth_GetEnumName2(param1);
}
