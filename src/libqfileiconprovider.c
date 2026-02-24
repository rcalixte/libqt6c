#include "libqabstractfileiconprovider.hpp"
#include "libqfileinfo.hpp"
#include "libqicon.hpp"
#include "libqfileiconprovider.hpp"
#include "libqfileiconprovider.h"

QFileIconProvider* q_fileiconprovider_new() {
    return QFileIconProvider_new();
}

QIcon* q_fileiconprovider_icon(void* self, int32_t type) {
    return QFileIconProvider_Icon((QFileIconProvider*)self, type);
}

void q_fileiconprovider_on_icon(void* self, QIcon* (*callback)(void*, int32_t)) {
    QFileIconProvider_OnIcon((QFileIconProvider*)self, (intptr_t)callback);
}

QIcon* q_fileiconprovider_super_icon(void* self, int32_t type) {
    return QFileIconProvider_SuperIcon((QFileIconProvider*)self, type);
}

QIcon* q_fileiconprovider_icon2(void* self, void* info) {
    return QFileIconProvider_Icon2((QFileIconProvider*)self, (QFileInfo*)info);
}

void q_fileiconprovider_on_icon2(void* self, QIcon* (*callback)(void*, void*)) {
    QFileIconProvider_OnIcon2((QFileIconProvider*)self, (intptr_t)callback);
}

QIcon* q_fileiconprovider_super_icon2(void* self, void* info) {
    return QFileIconProvider_SuperIcon2((QFileIconProvider*)self, (QFileInfo*)info);
}

const char* q_fileiconprovider_type(void* self, void* param1) {
    libqt_string _str = QFileIconProvider_Type((QFileIconProvider*)self, (QFileInfo*)param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_fileiconprovider_super_type(void* self, void* param1) {
    libqt_string _str = QFileIconProvider_SuperType((QFileIconProvider*)self, (QFileInfo*)param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_fileiconprovider_on_type(void* self, const char* (*callback)(void*, void*)) {
    QFileIconProvider_OnType((QFileIconProvider*)self, (intptr_t)callback);
}

void q_fileiconprovider_set_options(void* self, int32_t options) {
    QFileIconProvider_SetOptions((QFileIconProvider*)self, options);
}

void q_fileiconprovider_super_set_options(void* self, int32_t options) {
    QFileIconProvider_SuperSetOptions((QFileIconProvider*)self, options);
}

void q_fileiconprovider_on_set_options(void* self, void (*callback)(void*, int32_t)) {
    QFileIconProvider_OnSetOptions((QFileIconProvider*)self, (intptr_t)callback);
}

int32_t q_fileiconprovider_options(void* self) {
    return QFileIconProvider_Options((QFileIconProvider*)self);
}

int32_t q_fileiconprovider_super_options(void* self) {
    return QFileIconProvider_SuperOptions((QFileIconProvider*)self);
}

void q_fileiconprovider_on_options(void* self, int32_t (*callback)()) {
    QFileIconProvider_OnOptions((QFileIconProvider*)self, (intptr_t)callback);
}

void q_fileiconprovider_delete(void* self) {
    QFileIconProvider_Delete((QFileIconProvider*)(self));
}
