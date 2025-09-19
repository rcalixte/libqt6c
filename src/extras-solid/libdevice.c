#include "libdeviceinterface.hpp"
#include "libpredicate.hpp"
#include "libdevice.hpp"
#include "libdevice.h"

Solid__Device* k_solid__device_new() {
    return Solid__Device_new();
}

Solid__Device* k_solid__device_new2(void* device) {
    return Solid__Device_new2((Solid__Device*)device);
}

Solid__Device* k_solid__device_new3(const char* udi) {
    return Solid__Device_new3(qstring(udi));
}

libqt_list /* of Solid__Device* */ k_solid__device_all_devices() {
    libqt_list _arr = Solid__Device_AllDevices();
    return _arr;
}

libqt_list /* of Solid__Device* */ k_solid__device_list_from_type(int32_t* type) {
    libqt_list _arr = Solid__Device_ListFromType(type);
    return _arr;
}

libqt_list /* of Solid__Device* */ k_solid__device_list_from_query(void* predicate) {
    libqt_list _arr = Solid__Device_ListFromQuery((Solid__Predicate*)predicate);
    return _arr;
}

libqt_list /* of Solid__Device* */ k_solid__device_list_from_query2(const char* predicate) {
    libqt_list _arr = Solid__Device_ListFromQuery2(qstring(predicate));
    return _arr;
}

Solid__Device* k_solid__device_storage_access_from_path(const char* path) {
    return Solid__Device_StorageAccessFromPath(qstring(path));
}

void k_solid__device_operator_assign(void* self, void* device) {
    Solid__Device_OperatorAssign((Solid__Device*)self, (Solid__Device*)device);
}

bool k_solid__device_is_valid(void* self) {
    return Solid__Device_IsValid((Solid__Device*)self);
}

const char* k_solid__device_udi(void* self) {
    libqt_string _str = Solid__Device_Udi((Solid__Device*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_solid__device_parent_udi(void* self) {
    libqt_string _str = Solid__Device_ParentUdi((Solid__Device*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

Solid__Device* k_solid__device_parent(void* self) {
    return Solid__Device_Parent((Solid__Device*)self);
}

const char* k_solid__device_vendor(void* self) {
    libqt_string _str = Solid__Device_Vendor((Solid__Device*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_solid__device_product(void* self) {
    libqt_string _str = Solid__Device_Product((Solid__Device*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_solid__device_icon(void* self) {
    libqt_string _str = Solid__Device_Icon((Solid__Device*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_solid__device_emblems(void* self) {
    libqt_list _arr = Solid__Device_Emblems((Solid__Device*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_solid__device_emblems");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

const char* k_solid__device_display_name(void* self) {
    libqt_string _str = Solid__Device_DisplayName((Solid__Device*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_solid__device_description(void* self) {
    libqt_string _str = Solid__Device_Description((Solid__Device*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_solid__device_is_device_interface(void* self, int32_t* type) {
    return Solid__Device_IsDeviceInterface((Solid__Device*)self, type);
}

Solid__DeviceInterface* k_solid__device_as_device_interface(void* self, int32_t* type) {
    return Solid__Device_AsDeviceInterface((Solid__Device*)self, type);
}

const Solid__DeviceInterface* k_solid__device_as_device_interface2(void* self, int32_t* type) {
    return Solid__Device_AsDeviceInterface2((Solid__Device*)self, type);
}

libqt_list /* of Solid__Device* */ k_solid__device_list_from_type2(int32_t* type, const char* parentUdi) {
    libqt_list _arr = Solid__Device_ListFromType2(type, qstring(parentUdi));
    return _arr;
}

libqt_list /* of Solid__Device* */ k_solid__device_list_from_query22(void* predicate, const char* parentUdi) {
    libqt_list _arr = Solid__Device_ListFromQuery22((Solid__Predicate*)predicate, qstring(parentUdi));
    return _arr;
}

libqt_list /* of Solid__Device* */ k_solid__device_list_from_query23(const char* predicate, const char* parentUdi) {
    libqt_list _arr = Solid__Device_ListFromQuery23(qstring(predicate), qstring(parentUdi));
    return _arr;
}

void k_solid__device_delete(void* self) {
    Solid__Device_Delete((Solid__Device*)(self));
}
