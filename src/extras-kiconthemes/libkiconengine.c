#include "libkiconcolors.hpp"
#include "libkiconloader.hpp"
#include "../libqdatastream.hpp"
#include "../libqiconengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpixmap.hpp"
#include "../libqrect.hpp"
#include "../libqsize.hpp"
#include "libkiconengine.hpp"
#include "libkiconengine.h"

KIconEngine* k_iconengine_new(const char* iconName, void* iconLoader, const char* overlays[static 1]) {
    size_t overlays_len = libqt_strv_length(overlays);
    libqt_string* overlays_qstr = (libqt_string*)malloc(overlays_len * sizeof(libqt_string));
    if (overlays_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_iconengine_new\n");
        abort();
    }
    for (size_t i = 0; i < overlays_len; ++i) {
        overlays_qstr[i] = qstring(overlays[i]);
    }
    libqt_list overlays_list = qlist(overlays_qstr, overlays_len);

    KIconEngine* _out = KIconEngine_new(qstring(iconName), (KIconLoader*)iconLoader, overlays_list);
    free(overlays_qstr);
    return _out;
}

KIconEngine* k_iconengine_new2(const char* iconName, void* iconLoader) {
    return KIconEngine_new2(qstring(iconName), (KIconLoader*)iconLoader);
}

KIconEngine* k_iconengine_new3(const char* iconName, void* colors, void* iconLoader) {
    return KIconEngine_new3(qstring(iconName), (KIconColors*)colors, (KIconLoader*)iconLoader);
}

KIconEngine* k_iconengine_new4(const char* iconName, void* colors, void* iconLoader, const char* overlays[static 1]) {
    size_t overlays_len = libqt_strv_length(overlays);
    libqt_string* overlays_qstr = (libqt_string*)malloc(overlays_len * sizeof(libqt_string));
    if (overlays_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_iconengine_new4\n");
        abort();
    }
    for (size_t i = 0; i < overlays_len; ++i) {
        overlays_qstr[i] = qstring(overlays[i]);
    }
    libqt_list overlays_list = qlist(overlays_qstr, overlays_len);

    KIconEngine* _out = KIconEngine_new4(qstring(iconName), (KIconColors*)colors, (KIconLoader*)iconLoader, overlays_list);
    free(overlays_qstr);
    return _out;
}

KIconEngine* k_iconengine_new5(void* param1) {
    return KIconEngine_new5((KIconEngine*)param1);
}

QSize* k_iconengine_actual_size(void* self, void* size, int32_t mode, int32_t state) {
    return KIconEngine_ActualSize((KIconEngine*)self, (QSize*)size, mode, state);
}

void k_iconengine_on_actual_size(void* self, QSize* (*callback)(void*, void*, int32_t, int32_t)) {
    KIconEngine_OnActualSize((KIconEngine*)self, (intptr_t)callback);
}

QSize* k_iconengine_super_actual_size(void* self, void* size, int32_t mode, int32_t state) {
    return KIconEngine_SuperActualSize((KIconEngine*)self, (QSize*)size, mode, state);
}

void k_iconengine_paint(void* self, void* painter, void* rect, int32_t mode, int32_t state) {
    KIconEngine_Paint((KIconEngine*)self, (QPainter*)painter, (QRect*)rect, mode, state);
}

void k_iconengine_on_paint(void* self, void (*callback)(void*, void*, void*, int32_t, int32_t)) {
    KIconEngine_OnPaint((KIconEngine*)self, (intptr_t)callback);
}

void k_iconengine_super_paint(void* self, void* painter, void* rect, int32_t mode, int32_t state) {
    KIconEngine_SuperPaint((KIconEngine*)self, (QPainter*)painter, (QRect*)rect, mode, state);
}

QPixmap* k_iconengine_pixmap(void* self, void* size, int32_t mode, int32_t state) {
    return KIconEngine_Pixmap((KIconEngine*)self, (QSize*)size, mode, state);
}

void k_iconengine_on_pixmap(void* self, QPixmap* (*callback)(void*, void*, int32_t, int32_t)) {
    KIconEngine_OnPixmap((KIconEngine*)self, (intptr_t)callback);
}

QPixmap* k_iconengine_super_pixmap(void* self, void* size, int32_t mode, int32_t state) {
    return KIconEngine_SuperPixmap((KIconEngine*)self, (QSize*)size, mode, state);
}

QPixmap* k_iconengine_scaled_pixmap(void* self, void* size, int32_t mode, int32_t state, double scale) {
    return KIconEngine_ScaledPixmap((KIconEngine*)self, (QSize*)size, mode, state, scale);
}

void k_iconengine_on_scaled_pixmap(void* self, QPixmap* (*callback)(void*, void*, int32_t, int32_t, double)) {
    KIconEngine_OnScaledPixmap((KIconEngine*)self, (intptr_t)callback);
}

QPixmap* k_iconengine_super_scaled_pixmap(void* self, void* size, int32_t mode, int32_t state, double scale) {
    return KIconEngine_SuperScaledPixmap((KIconEngine*)self, (QSize*)size, mode, state, scale);
}

const char* k_iconengine_icon_name(void* self) {
    libqt_string _str = KIconEngine_IconName((KIconEngine*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_iconengine_on_icon_name(void* self, const char* (*callback)()) {
    KIconEngine_OnIconName((KIconEngine*)self, (intptr_t)callback);
}

const char* k_iconengine_super_icon_name(void* self) {
    libqt_string _str = KIconEngine_SuperIconName((KIconEngine*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of QSize* */ k_iconengine_available_sizes(void* self, int32_t mode, int32_t state) {
    libqt_list _arr = KIconEngine_AvailableSizes((KIconEngine*)self, mode, state);
    return _arr;
}

void k_iconengine_on_available_sizes(void* self, libqt_list /* of QSize* */ (*callback)(void*, int32_t, int32_t)) {
    KIconEngine_OnAvailableSizes((KIconEngine*)self, (intptr_t)callback);
}

libqt_list /* of QSize* */ k_iconengine_super_available_sizes(void* self, int32_t mode, int32_t state) {
    libqt_list _arr = KIconEngine_SuperAvailableSizes((KIconEngine*)self, mode, state);
    return _arr;
}

bool k_iconengine_is_null(void* self) {
    return KIconEngine_IsNull((KIconEngine*)self);
}

void k_iconengine_on_is_null(void* self, bool (*callback)()) {
    KIconEngine_OnIsNull((KIconEngine*)self, (intptr_t)callback);
}

bool k_iconengine_super_is_null(void* self) {
    return KIconEngine_SuperIsNull((KIconEngine*)self);
}

const char* k_iconengine_key(void* self) {
    libqt_string _str = KIconEngine_Key((KIconEngine*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_iconengine_on_key(void* self, const char* (*callback)()) {
    KIconEngine_OnKey((KIconEngine*)self, (intptr_t)callback);
}

const char* k_iconengine_super_key(void* self) {
    libqt_string _str = KIconEngine_SuperKey((KIconEngine*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QIconEngine* k_iconengine_clone(void* self) {
    return KIconEngine_Clone((KIconEngine*)self);
}

void k_iconengine_on_clone(void* self, QIconEngine* (*callback)()) {
    KIconEngine_OnClone((KIconEngine*)self, (intptr_t)callback);
}

QIconEngine* k_iconengine_super_clone(void* self) {
    return KIconEngine_SuperClone((KIconEngine*)self);
}

bool k_iconengine_read(void* self, void* in) {
    return KIconEngine_Read((KIconEngine*)self, (QDataStream*)in);
}

void k_iconengine_on_read(void* self, bool (*callback)(void*, void*)) {
    KIconEngine_OnRead((KIconEngine*)self, (intptr_t)callback);
}

bool k_iconengine_super_read(void* self, void* in) {
    return KIconEngine_SuperRead((KIconEngine*)self, (QDataStream*)in);
}

bool k_iconengine_write(void* self, void* out) {
    return KIconEngine_Write((KIconEngine*)self, (QDataStream*)out);
}

void k_iconengine_on_write(void* self, bool (*callback)(void*, void*)) {
    KIconEngine_OnWrite((KIconEngine*)self, (intptr_t)callback);
}

bool k_iconengine_super_write(void* self, void* out) {
    return KIconEngine_SuperWrite((KIconEngine*)self, (QDataStream*)out);
}

void k_iconengine_add_pixmap(void* self, void* pixmap, int32_t mode, int32_t state) {
    KIconEngine_AddPixmap((KIconEngine*)self, (QPixmap*)pixmap, mode, state);
}

void k_iconengine_super_add_pixmap(void* self, void* pixmap, int32_t mode, int32_t state) {
    KIconEngine_SuperAddPixmap((KIconEngine*)self, (QPixmap*)pixmap, mode, state);
}

void k_iconengine_on_add_pixmap(void* self, void (*callback)(void*, void*, int32_t, int32_t)) {
    KIconEngine_OnAddPixmap((KIconEngine*)self, (intptr_t)callback);
}

void k_iconengine_add_file(void* self, const char* fileName, void* size, int32_t mode, int32_t state) {
    KIconEngine_AddFile((KIconEngine*)self, qstring(fileName), (QSize*)size, mode, state);
}

void k_iconengine_super_add_file(void* self, const char* fileName, void* size, int32_t mode, int32_t state) {
    KIconEngine_SuperAddFile((KIconEngine*)self, qstring(fileName), (QSize*)size, mode, state);
}

void k_iconengine_on_add_file(void* self, void (*callback)(void*, const char*, void*, int32_t, int32_t)) {
    KIconEngine_OnAddFile((KIconEngine*)self, (intptr_t)callback);
}

void k_iconengine_virtual_hook(void* self, int id, void* data) {
    KIconEngine_VirtualHook((KIconEngine*)self, id, data);
}

void k_iconengine_super_virtual_hook(void* self, int id, void* data) {
    KIconEngine_SuperVirtualHook((KIconEngine*)self, id, data);
}

void k_iconengine_on_virtual_hook(void* self, void (*callback)(void*, int, void*)) {
    KIconEngine_OnVirtualHook((KIconEngine*)self, (intptr_t)callback);
}

void k_iconengine_delete(void* self) {
    KIconEngine_Delete((KIconEngine*)(self));
}
