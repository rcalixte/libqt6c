#include "libqtipccommon.hpp"
#include "libqtipccommon.h"

QNativeIpcKey* q_nativeipckey_new() {
    return QNativeIpcKey_new();
}

QNativeIpcKey* q_nativeipckey_new2(uint16_t type) {
    return QNativeIpcKey_new2(type);
}

QNativeIpcKey* q_nativeipckey_new3(const char* k) {
    return QNativeIpcKey_new3(qstring(k));
}

QNativeIpcKey* q_nativeipckey_new4(void* other) {
    return QNativeIpcKey_new4((QNativeIpcKey*)other);
}

QNativeIpcKey* q_nativeipckey_new5(const char* k, uint16_t type) {
    return QNativeIpcKey_new5(qstring(k), type);
}

uint16_t q_nativeipckey_legacy_default_type_for_os() {
    return QNativeIpcKey_LegacyDefaultTypeForOs();
}

void q_nativeipckey_operator_assign(void* self, void* other) {
    QNativeIpcKey_OperatorAssign((QNativeIpcKey*)self, (QNativeIpcKey*)other);
}

void q_nativeipckey_swap(void* self, void* other) {
    QNativeIpcKey_Swap((QNativeIpcKey*)self, (QNativeIpcKey*)other);
}

bool q_nativeipckey_is_empty(void* self) {
    return QNativeIpcKey_IsEmpty((QNativeIpcKey*)self);
}

bool q_nativeipckey_is_valid(void* self) {
    return QNativeIpcKey_IsValid((QNativeIpcKey*)self);
}

uint16_t q_nativeipckey_type(void* self) {
    return QNativeIpcKey_Type((QNativeIpcKey*)self);
}

void q_nativeipckey_set_type(void* self, uint16_t type) {
    QNativeIpcKey_SetType((QNativeIpcKey*)self, type);
}

const char* q_nativeipckey_native_key(void* self) {
    libqt_string _str = QNativeIpcKey_NativeKey((QNativeIpcKey*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_nativeipckey_set_native_key(void* self, const char* newKey) {
    QNativeIpcKey_SetNativeKey((QNativeIpcKey*)self, qstring(newKey));
}

const char* q_nativeipckey_to_string(void* self) {
    libqt_string _str = QNativeIpcKey_ToString((QNativeIpcKey*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QNativeIpcKey* q_nativeipckey_from_string(const char* stringVal) {
    return QNativeIpcKey_FromString(qstring(stringVal));
}

void q_nativeipckey_delete(void* self) {
    QNativeIpcKey_Delete((QNativeIpcKey*)(self));
}
