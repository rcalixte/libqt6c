#include "libqfileinfo.hpp"
#include "libqicon.hpp"
#include "libqabstractfileiconprovider.hpp"
#include "libqabstractfileiconprovider.h"

QAbstractFileIconProvider* q_abstractfileiconprovider_new() {
    return QAbstractFileIconProvider_new();
}

QIcon* q_abstractfileiconprovider_icon(void* self, int32_t param1) {
    return QAbstractFileIconProvider_Icon((QAbstractFileIconProvider*)self, param1);
}

void q_abstractfileiconprovider_on_icon(void* self, QIcon* (*callback)(void*, int32_t)) {
    QAbstractFileIconProvider_OnIcon((QAbstractFileIconProvider*)self, (intptr_t)callback);
}

QIcon* q_abstractfileiconprovider_super_icon(void* self, int32_t param1) {
    return QAbstractFileIconProvider_SuperIcon((QAbstractFileIconProvider*)self, param1);
}

QIcon* q_abstractfileiconprovider_icon2(void* self, void* param1) {
    return QAbstractFileIconProvider_Icon2((QAbstractFileIconProvider*)self, (QFileInfo*)param1);
}

void q_abstractfileiconprovider_on_icon2(void* self, QIcon* (*callback)(void*, void*)) {
    QAbstractFileIconProvider_OnIcon2((QAbstractFileIconProvider*)self, (intptr_t)callback);
}

QIcon* q_abstractfileiconprovider_super_icon2(void* self, void* param1) {
    return QAbstractFileIconProvider_SuperIcon2((QAbstractFileIconProvider*)self, (QFileInfo*)param1);
}

const char* q_abstractfileiconprovider_type(void* self, void* param1) {
    libqt_string _str = QAbstractFileIconProvider_Type((QAbstractFileIconProvider*)self, (QFileInfo*)param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractfileiconprovider_on_type(void* self, const char* (*callback)(void*, void*)) {
    QAbstractFileIconProvider_OnType((QAbstractFileIconProvider*)self, (intptr_t)callback);
}

const char* q_abstractfileiconprovider_super_type(void* self, void* param1) {
    libqt_string _str = QAbstractFileIconProvider_SuperType((QAbstractFileIconProvider*)self, (QFileInfo*)param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractfileiconprovider_set_options(void* self, int32_t options) {
    QAbstractFileIconProvider_SetOptions((QAbstractFileIconProvider*)self, options);
}

void q_abstractfileiconprovider_on_set_options(void* self, void (*callback)(void*, int32_t)) {
    QAbstractFileIconProvider_OnSetOptions((QAbstractFileIconProvider*)self, (intptr_t)callback);
}

void q_abstractfileiconprovider_super_set_options(void* self, int32_t options) {
    QAbstractFileIconProvider_SuperSetOptions((QAbstractFileIconProvider*)self, options);
}

int32_t q_abstractfileiconprovider_options(void* self) {
    return QAbstractFileIconProvider_Options((QAbstractFileIconProvider*)self);
}

void q_abstractfileiconprovider_on_options(void* self, int32_t (*callback)()) {
    QAbstractFileIconProvider_OnOptions((QAbstractFileIconProvider*)self, (intptr_t)callback);
}

int32_t q_abstractfileiconprovider_super_options(void* self) {
    return QAbstractFileIconProvider_SuperOptions((QAbstractFileIconProvider*)self);
}

void q_abstractfileiconprovider_delete(void* self) {
    QAbstractFileIconProvider_Delete((QAbstractFileIconProvider*)(self));
}
