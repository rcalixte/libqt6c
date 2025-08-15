#include "libqfileinfo.hpp"
#include "libqicon.hpp"
#include "libqabstractfileiconprovider.hpp"
#include "libqabstractfileiconprovider.h"

QAbstractFileIconProvider* q_abstractfileiconprovider_new() {
    return QAbstractFileIconProvider_new();
}

QIcon* q_abstractfileiconprovider_icon(void* self, int64_t param1) {
    return QAbstractFileIconProvider_Icon((QAbstractFileIconProvider*)self, param1);
}

void q_abstractfileiconprovider_on_icon(void* self, QIcon* (*callback)(void*, int64_t)) {
    QAbstractFileIconProvider_OnIcon((QAbstractFileIconProvider*)self, (intptr_t)callback);
}

QIcon* q_abstractfileiconprovider_qbase_icon(void* self, int64_t param1) {
    return QAbstractFileIconProvider_QBaseIcon((QAbstractFileIconProvider*)self, param1);
}

QIcon* q_abstractfileiconprovider_icon2(void* self, void* param1) {
    return QAbstractFileIconProvider_Icon2((QAbstractFileIconProvider*)self, (QFileInfo*)param1);
}

void q_abstractfileiconprovider_on_icon2(void* self, QIcon* (*callback)(void*, void*)) {
    QAbstractFileIconProvider_OnIcon2((QAbstractFileIconProvider*)self, (intptr_t)callback);
}

QIcon* q_abstractfileiconprovider_qbase_icon2(void* self, void* param1) {
    return QAbstractFileIconProvider_QBaseIcon2((QAbstractFileIconProvider*)self, (QFileInfo*)param1);
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

const char* q_abstractfileiconprovider_qbase_type(void* self, void* param1) {
    libqt_string _str = QAbstractFileIconProvider_QBaseType((QAbstractFileIconProvider*)self, (QFileInfo*)param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractfileiconprovider_set_options(void* self, int64_t options) {
    QAbstractFileIconProvider_SetOptions((QAbstractFileIconProvider*)self, options);
}

void q_abstractfileiconprovider_on_set_options(void* self, void (*callback)(void*, int64_t)) {
    QAbstractFileIconProvider_OnSetOptions((QAbstractFileIconProvider*)self, (intptr_t)callback);
}

void q_abstractfileiconprovider_qbase_set_options(void* self, int64_t options) {
    QAbstractFileIconProvider_QBaseSetOptions((QAbstractFileIconProvider*)self, options);
}

int64_t q_abstractfileiconprovider_options(void* self) {
    return QAbstractFileIconProvider_Options((QAbstractFileIconProvider*)self);
}

void q_abstractfileiconprovider_on_options(void* self, int64_t (*callback)()) {
    QAbstractFileIconProvider_OnOptions((QAbstractFileIconProvider*)self, (intptr_t)callback);
}

int64_t q_abstractfileiconprovider_qbase_options(void* self) {
    return QAbstractFileIconProvider_QBaseOptions((QAbstractFileIconProvider*)self);
}

void q_abstractfileiconprovider_delete(void* self) {
    QAbstractFileIconProvider_Delete((QAbstractFileIconProvider*)(self));
}
