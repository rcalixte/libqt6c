#include "../extras-kcoreaddons/libkpluginmetadata.hpp"
#include "../libqobjectdefs.hpp"
#include "libpartloader.hpp"
#include "libpartloader.h"

const QMetaObject* k_parts_get_enum_meta_object(int32_t param1) {
    return KParts_GetEnumMetaObject(param1);
}

const char* k_parts_get_enum_name(int32_t param1) {
    return KParts_GetEnumName(param1);
}

const QMetaObject* k_parts_get_enum_meta_object2(int32_t param1) {
    return KParts_GetEnumMetaObject2(param1);
}

const char* k_parts_get_enum_name2(int32_t param1) {
    return KParts_GetEnumName2(param1);
}

int32_t k_parts__partloader_part_capabilities(void* param1) {
    return KParts__PartLoader_PartCapabilities((KPluginMetaData*)param1);
}

libqt_list /* of KPluginMetaData* */ k_parts__partloader_parts_for_mime_type(const char* param1) {
    libqt_list _arr = KParts__PartLoader_PartsForMimeType(qstring(param1));
    return _arr;
}
