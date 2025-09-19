#include "libqtipccommon.hpp"
#include "libqsystemsemaphore.hpp"
#include "libqsystemsemaphore.h"

QSystemSemaphore* q_systemsemaphore_new(void* key) {
    return QSystemSemaphore_new((QNativeIpcKey*)key);
}

QSystemSemaphore* q_systemsemaphore_new2(const char* key) {
    return QSystemSemaphore_new2(qstring(key));
}

QSystemSemaphore* q_systemsemaphore_new3(void* key, int initialValue) {
    return QSystemSemaphore_new3((QNativeIpcKey*)key, initialValue);
}

QSystemSemaphore* q_systemsemaphore_new4(void* key, int initialValue, int32_t param3) {
    return QSystemSemaphore_new4((QNativeIpcKey*)key, initialValue, param3);
}

QSystemSemaphore* q_systemsemaphore_new5(const char* key, int initialValue) {
    return QSystemSemaphore_new5(qstring(key), initialValue);
}

QSystemSemaphore* q_systemsemaphore_new6(const char* key, int initialValue, int32_t mode) {
    return QSystemSemaphore_new6(qstring(key), initialValue, mode);
}

const char* q_systemsemaphore_tr(const char* sourceText) {
    libqt_string _str = QSystemSemaphore_Tr(sourceText);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_systemsemaphore_set_native_key(void* self, void* key) {
    QSystemSemaphore_SetNativeKey((QSystemSemaphore*)self, (QNativeIpcKey*)key);
}

void q_systemsemaphore_set_native_key2(void* self, const char* key) {
    QSystemSemaphore_SetNativeKey2((QSystemSemaphore*)self, qstring(key));
}

QNativeIpcKey* q_systemsemaphore_native_ipc_key(void* self) {
    return QSystemSemaphore_NativeIpcKey((QSystemSemaphore*)self);
}

void q_systemsemaphore_set_key(void* self, const char* key) {
    QSystemSemaphore_SetKey((QSystemSemaphore*)self, qstring(key));
}

const char* q_systemsemaphore_key(void* self) {
    libqt_string _str = QSystemSemaphore_Key((QSystemSemaphore*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_systemsemaphore_acquire(void* self) {
    return QSystemSemaphore_Acquire((QSystemSemaphore*)self);
}

bool q_systemsemaphore_release(void* self) {
    return QSystemSemaphore_Release((QSystemSemaphore*)self);
}

int32_t q_systemsemaphore_error(void* self) {
    return QSystemSemaphore_Error((QSystemSemaphore*)self);
}

const char* q_systemsemaphore_error_string(void* self) {
    libqt_string _str = QSystemSemaphore_ErrorString((QSystemSemaphore*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_systemsemaphore_is_key_type_supported(uint16_t type) {
    return QSystemSemaphore_IsKeyTypeSupported(type);
}

QNativeIpcKey* q_systemsemaphore_platform_safe_key(const char* key) {
    return QSystemSemaphore_PlatformSafeKey(qstring(key));
}

QNativeIpcKey* q_systemsemaphore_legacy_native_key(const char* key) {
    return QSystemSemaphore_LegacyNativeKey(qstring(key));
}

const char* q_systemsemaphore_tr2(const char* sourceText, const char* disambiguation) {
    libqt_string _str = QSystemSemaphore_Tr2(sourceText, disambiguation);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_systemsemaphore_tr3(const char* sourceText, const char* disambiguation, int n) {
    libqt_string _str = QSystemSemaphore_Tr3(sourceText, disambiguation, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_systemsemaphore_set_native_key22(void* self, void* key, int initialValue) {
    QSystemSemaphore_SetNativeKey22((QSystemSemaphore*)self, (QNativeIpcKey*)key, initialValue);
}

void q_systemsemaphore_set_native_key3(void* self, void* key, int initialValue, int32_t param3) {
    QSystemSemaphore_SetNativeKey3((QSystemSemaphore*)self, (QNativeIpcKey*)key, initialValue, param3);
}

void q_systemsemaphore_set_native_key23(void* self, const char* key, int initialValue) {
    QSystemSemaphore_SetNativeKey23((QSystemSemaphore*)self, qstring(key), initialValue);
}

void q_systemsemaphore_set_native_key32(void* self, const char* key, int initialValue, int32_t mode) {
    QSystemSemaphore_SetNativeKey32((QSystemSemaphore*)self, qstring(key), initialValue, mode);
}

void q_systemsemaphore_set_native_key4(void* self, const char* key, int initialValue, int32_t mode, uint16_t type) {
    QSystemSemaphore_SetNativeKey4((QSystemSemaphore*)self, qstring(key), initialValue, mode, type);
}

void q_systemsemaphore_set_key2(void* self, const char* key, int initialValue) {
    QSystemSemaphore_SetKey2((QSystemSemaphore*)self, qstring(key), initialValue);
}

void q_systemsemaphore_set_key3(void* self, const char* key, int initialValue, int32_t mode) {
    QSystemSemaphore_SetKey3((QSystemSemaphore*)self, qstring(key), initialValue, mode);
}

bool q_systemsemaphore_release1(void* self, int n) {
    return QSystemSemaphore_Release1((QSystemSemaphore*)self, n);
}

QNativeIpcKey* q_systemsemaphore_platform_safe_key2(const char* key, uint16_t type) {
    return QSystemSemaphore_PlatformSafeKey2(qstring(key), type);
}

QNativeIpcKey* q_systemsemaphore_legacy_native_key2(const char* key, uint16_t type) {
    return QSystemSemaphore_LegacyNativeKey2(qstring(key), type);
}

void q_systemsemaphore_delete(void* self) {
    QSystemSemaphore_Delete((QSystemSemaphore*)(self));
}
