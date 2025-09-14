#include "libudsentry.hpp"
#include "libudsentry.h"

KIO__UDSEntry* k_io__udsentry_new() {
    return KIO__UDSEntry_new();
}

KIO__UDSEntry* k_io__udsentry_new2(void* param1) {
    return KIO__UDSEntry_new2((KIO__UDSEntry*)param1);
}

void k_io__udsentry_operator_assign(void* self, void* param1) {
    KIO__UDSEntry_OperatorAssign((KIO__UDSEntry*)self, (KIO__UDSEntry*)param1);
}

const char* k_io__udsentry_string_value(void* self, uint32_t field) {
    libqt_string _str = KIO__UDSEntry_StringValue((KIO__UDSEntry*)self, field);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

long long k_io__udsentry_number_value(void* self, uint32_t field) {
    return KIO__UDSEntry_NumberValue((KIO__UDSEntry*)self, field);
}

bool k_io__udsentry_is_dir(void* self) {
    return KIO__UDSEntry_IsDir((KIO__UDSEntry*)self);
}

bool k_io__udsentry_is_link(void* self) {
    return KIO__UDSEntry_IsLink((KIO__UDSEntry*)self);
}

void k_io__udsentry_reserve(void* self, int size) {
    KIO__UDSEntry_Reserve((KIO__UDSEntry*)self, size);
}

void k_io__udsentry_fast_insert(void* self, uint32_t field, const char* value) {
    KIO__UDSEntry_FastInsert((KIO__UDSEntry*)self, field, qstring(value));
}

void k_io__udsentry_fast_insert2(void* self, uint32_t field, long long l) {
    KIO__UDSEntry_FastInsert2((KIO__UDSEntry*)self, field, l);
}

int32_t k_io__udsentry_count(void* self) {
    return KIO__UDSEntry_Count((KIO__UDSEntry*)self);
}

bool k_io__udsentry_contains(void* self, uint32_t field) {
    return KIO__UDSEntry_Contains((KIO__UDSEntry*)self, field);
}

libqt_list /* of uint32_t */ k_io__udsentry_fields(void* self) {
    libqt_list _arr = KIO__UDSEntry_Fields((KIO__UDSEntry*)self);
    return _arr;
}

void k_io__udsentry_clear(void* self) {
    KIO__UDSEntry_Clear((KIO__UDSEntry*)self);
}

void k_io__udsentry_replace(void* self, uint32_t field, const char* value) {
    KIO__UDSEntry_Replace((KIO__UDSEntry*)self, field, qstring(value));
}

void k_io__udsentry_replace2(void* self, uint32_t field, long long l) {
    KIO__UDSEntry_Replace2((KIO__UDSEntry*)self, field, l);
}

long long k_io__udsentry_number_value2(void* self, uint32_t field, long long defaultValue) {
    return KIO__UDSEntry_NumberValue2((KIO__UDSEntry*)self, field, defaultValue);
}

void k_io__udsentry_delete(void* self) {
    KIO__UDSEntry_Delete((KIO__UDSEntry*)(self));
}
