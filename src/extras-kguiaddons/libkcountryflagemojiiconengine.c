#include "../libqdatastream.hpp"
#include "../libqfont.hpp"
#include "../libqiconengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpixmap.hpp"
#include "../libqrect.hpp"
#include "../libqsize.hpp"
#include "libkcountryflagemojiiconengine.hpp"
#include "libkcountryflagemojiiconengine.h"

KCountryFlagEmojiIconEngine* k_countryflagemojiiconengine_new(const char* regionOrCountry) {
    return KCountryFlagEmojiIconEngine_new(qstring(regionOrCountry));
}

QIconEngine* k_countryflagemojiiconengine_clone(void* self) {
    return KCountryFlagEmojiIconEngine_Clone((KCountryFlagEmojiIconEngine*)self);
}

void k_countryflagemojiiconengine_on_clone(void* self, QIconEngine* (*callback)()) {
    KCountryFlagEmojiIconEngine_OnClone((KCountryFlagEmojiIconEngine*)self, (intptr_t)callback);
}

QIconEngine* k_countryflagemojiiconengine_qbase_clone(void* self) {
    return KCountryFlagEmojiIconEngine_QBaseClone((KCountryFlagEmojiIconEngine*)self);
}

const char* k_countryflagemojiiconengine_key(void* self) {
    libqt_string _str = KCountryFlagEmojiIconEngine_Key((KCountryFlagEmojiIconEngine*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_countryflagemojiiconengine_on_key(void* self, const char* (*callback)()) {
    KCountryFlagEmojiIconEngine_OnKey((KCountryFlagEmojiIconEngine*)self, (intptr_t)callback);
}

const char* k_countryflagemojiiconengine_qbase_key(void* self) {
    libqt_string _str = KCountryFlagEmojiIconEngine_QBaseKey((KCountryFlagEmojiIconEngine*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_countryflagemojiiconengine_paint(void* self, void* painter, void* rect, int32_t mode, int32_t state) {
    KCountryFlagEmojiIconEngine_Paint((KCountryFlagEmojiIconEngine*)self, (QPainter*)painter, (QRect*)rect, mode, state);
}

void k_countryflagemojiiconengine_on_paint(void* self, void (*callback)(void*, void*, void*, int32_t, int32_t)) {
    KCountryFlagEmojiIconEngine_OnPaint((KCountryFlagEmojiIconEngine*)self, (intptr_t)callback);
}

void k_countryflagemojiiconengine_qbase_paint(void* self, void* painter, void* rect, int32_t mode, int32_t state) {
    KCountryFlagEmojiIconEngine_QBasePaint((KCountryFlagEmojiIconEngine*)self, (QPainter*)painter, (QRect*)rect, mode, state);
}

QPixmap* k_countryflagemojiiconengine_pixmap(void* self, void* size, int32_t mode, int32_t state) {
    return KCountryFlagEmojiIconEngine_Pixmap((KCountryFlagEmojiIconEngine*)self, (QSize*)size, mode, state);
}

void k_countryflagemojiiconengine_on_pixmap(void* self, QPixmap* (*callback)(void*, void*, int32_t, int32_t)) {
    KCountryFlagEmojiIconEngine_OnPixmap((KCountryFlagEmojiIconEngine*)self, (intptr_t)callback);
}

QPixmap* k_countryflagemojiiconengine_qbase_pixmap(void* self, void* size, int32_t mode, int32_t state) {
    return KCountryFlagEmojiIconEngine_QBasePixmap((KCountryFlagEmojiIconEngine*)self, (QSize*)size, mode, state);
}

QPixmap* k_countryflagemojiiconengine_scaled_pixmap(void* self, void* size, int32_t mode, int32_t state, double scale) {
    return KCountryFlagEmojiIconEngine_ScaledPixmap((KCountryFlagEmojiIconEngine*)self, (QSize*)size, mode, state, scale);
}

void k_countryflagemojiiconengine_on_scaled_pixmap(void* self, QPixmap* (*callback)(void*, void*, int32_t, int32_t, double)) {
    KCountryFlagEmojiIconEngine_OnScaledPixmap((KCountryFlagEmojiIconEngine*)self, (intptr_t)callback);
}

QPixmap* k_countryflagemojiiconengine_qbase_scaled_pixmap(void* self, void* size, int32_t mode, int32_t state, double scale) {
    return KCountryFlagEmojiIconEngine_QBaseScaledPixmap((KCountryFlagEmojiIconEngine*)self, (QSize*)size, mode, state, scale);
}

bool k_countryflagemojiiconengine_is_null(void* self) {
    return KCountryFlagEmojiIconEngine_IsNull((KCountryFlagEmojiIconEngine*)self);
}

void k_countryflagemojiiconengine_on_is_null(void* self, bool (*callback)()) {
    KCountryFlagEmojiIconEngine_OnIsNull((KCountryFlagEmojiIconEngine*)self, (intptr_t)callback);
}

bool k_countryflagemojiiconengine_qbase_is_null(void* self) {
    return KCountryFlagEmojiIconEngine_QBaseIsNull((KCountryFlagEmojiIconEngine*)self);
}

void k_countryflagemojiiconengine_set_global_default_font(void* font) {
    KCountryFlagEmojiIconEngine_SetGlobalDefaultFont((QFont*)font);
}

QSize* k_countryflagemojiiconengine_actual_size(void* self, void* size, int32_t mode, int32_t state) {
    return KCountryFlagEmojiIconEngine_ActualSize((KCountryFlagEmojiIconEngine*)self, (QSize*)size, mode, state);
}

QSize* k_countryflagemojiiconengine_qbase_actual_size(void* self, void* size, int32_t mode, int32_t state) {
    return KCountryFlagEmojiIconEngine_QBaseActualSize((KCountryFlagEmojiIconEngine*)self, (QSize*)size, mode, state);
}

void k_countryflagemojiiconengine_on_actual_size(void* self, QSize* (*callback)(void*, void*, int32_t, int32_t)) {
    KCountryFlagEmojiIconEngine_OnActualSize((KCountryFlagEmojiIconEngine*)self, (intptr_t)callback);
}

void k_countryflagemojiiconengine_add_pixmap(void* self, void* pixmap, int32_t mode, int32_t state) {
    KCountryFlagEmojiIconEngine_AddPixmap((KCountryFlagEmojiIconEngine*)self, (QPixmap*)pixmap, mode, state);
}

void k_countryflagemojiiconengine_qbase_add_pixmap(void* self, void* pixmap, int32_t mode, int32_t state) {
    KCountryFlagEmojiIconEngine_QBaseAddPixmap((KCountryFlagEmojiIconEngine*)self, (QPixmap*)pixmap, mode, state);
}

void k_countryflagemojiiconengine_on_add_pixmap(void* self, void (*callback)(void*, void*, int32_t, int32_t)) {
    KCountryFlagEmojiIconEngine_OnAddPixmap((KCountryFlagEmojiIconEngine*)self, (intptr_t)callback);
}

void k_countryflagemojiiconengine_add_file(void* self, const char* fileName, void* size, int32_t mode, int32_t state) {
    KCountryFlagEmojiIconEngine_AddFile((KCountryFlagEmojiIconEngine*)self, qstring(fileName), (QSize*)size, mode, state);
}

void k_countryflagemojiiconengine_qbase_add_file(void* self, const char* fileName, void* size, int32_t mode, int32_t state) {
    KCountryFlagEmojiIconEngine_QBaseAddFile((KCountryFlagEmojiIconEngine*)self, qstring(fileName), (QSize*)size, mode, state);
}

void k_countryflagemojiiconengine_on_add_file(void* self, void (*callback)(void*, const char*, void*, int32_t, int32_t)) {
    KCountryFlagEmojiIconEngine_OnAddFile((KCountryFlagEmojiIconEngine*)self, (intptr_t)callback);
}

bool k_countryflagemojiiconengine_read(void* self, void* in) {
    return KCountryFlagEmojiIconEngine_Read((KCountryFlagEmojiIconEngine*)self, (QDataStream*)in);
}

bool k_countryflagemojiiconengine_qbase_read(void* self, void* in) {
    return KCountryFlagEmojiIconEngine_QBaseRead((KCountryFlagEmojiIconEngine*)self, (QDataStream*)in);
}

void k_countryflagemojiiconengine_on_read(void* self, bool (*callback)(void*, void*)) {
    KCountryFlagEmojiIconEngine_OnRead((KCountryFlagEmojiIconEngine*)self, (intptr_t)callback);
}

bool k_countryflagemojiiconengine_write(void* self, void* out) {
    return KCountryFlagEmojiIconEngine_Write((KCountryFlagEmojiIconEngine*)self, (QDataStream*)out);
}

bool k_countryflagemojiiconengine_qbase_write(void* self, void* out) {
    return KCountryFlagEmojiIconEngine_QBaseWrite((KCountryFlagEmojiIconEngine*)self, (QDataStream*)out);
}

void k_countryflagemojiiconengine_on_write(void* self, bool (*callback)(void*, void*)) {
    KCountryFlagEmojiIconEngine_OnWrite((KCountryFlagEmojiIconEngine*)self, (intptr_t)callback);
}

libqt_list /* of QSize* */ k_countryflagemojiiconengine_available_sizes(void* self, int32_t mode, int32_t state) {
    libqt_list _arr = KCountryFlagEmojiIconEngine_AvailableSizes((KCountryFlagEmojiIconEngine*)self, mode, state);
    return _arr;
}

libqt_list /* of QSize* */ k_countryflagemojiiconengine_qbase_available_sizes(void* self, int32_t mode, int32_t state) {
    libqt_list _arr = KCountryFlagEmojiIconEngine_QBaseAvailableSizes((KCountryFlagEmojiIconEngine*)self, mode, state);
    return _arr;
}

void k_countryflagemojiiconengine_on_available_sizes(void* self, libqt_list /* of QSize* */ (*callback)(void*, int32_t, int32_t)) {
    KCountryFlagEmojiIconEngine_OnAvailableSizes((KCountryFlagEmojiIconEngine*)self, (intptr_t)callback);
}

const char* k_countryflagemojiiconengine_icon_name(void* self) {
    libqt_string _str = KCountryFlagEmojiIconEngine_IconName((KCountryFlagEmojiIconEngine*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_countryflagemojiiconengine_qbase_icon_name(void* self) {
    libqt_string _str = KCountryFlagEmojiIconEngine_QBaseIconName((KCountryFlagEmojiIconEngine*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_countryflagemojiiconengine_on_icon_name(void* self, const char* (*callback)()) {
    KCountryFlagEmojiIconEngine_OnIconName((KCountryFlagEmojiIconEngine*)self, (intptr_t)callback);
}

void k_countryflagemojiiconengine_virtual_hook(void* self, int id, void* data) {
    KCountryFlagEmojiIconEngine_VirtualHook((KCountryFlagEmojiIconEngine*)self, id, data);
}

void k_countryflagemojiiconengine_qbase_virtual_hook(void* self, int id, void* data) {
    KCountryFlagEmojiIconEngine_QBaseVirtualHook((KCountryFlagEmojiIconEngine*)self, id, data);
}

void k_countryflagemojiiconengine_on_virtual_hook(void* self, void (*callback)(void*, int, void*)) {
    KCountryFlagEmojiIconEngine_OnVirtualHook((KCountryFlagEmojiIconEngine*)self, (intptr_t)callback);
}

void k_countryflagemojiiconengine_delete(void* self) {
    KCountryFlagEmojiIconEngine_Delete((KCountryFlagEmojiIconEngine*)(self));
}
