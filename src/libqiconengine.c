#include "libqdatastream.hpp"
#include "libqpainter.hpp"
#include "libqpixmap.hpp"
#include "libqrect.hpp"
#include "libqsize.hpp"
#include "libqiconengine.hpp"
#include "libqiconengine.h"

QIconEngine* q_iconengine_new() {
    return QIconEngine_new();
}

void q_iconengine_paint(void* self, void* painter, void* rect, int32_t mode, int32_t state) {
    QIconEngine_Paint((QIconEngine*)self, (QPainter*)painter, (QRect*)rect, mode, state);
}

void q_iconengine_on_paint(void* self, void (*callback)(void*, void*, void*, int32_t, int32_t)) {
    QIconEngine_OnPaint((QIconEngine*)self, (intptr_t)callback);
}

void q_iconengine_qbase_paint(void* self, void* painter, void* rect, int32_t mode, int32_t state) {
    QIconEngine_QBasePaint((QIconEngine*)self, (QPainter*)painter, (QRect*)rect, mode, state);
}

QSize* q_iconengine_actual_size(void* self, void* size, int32_t mode, int32_t state) {
    return QIconEngine_ActualSize((QIconEngine*)self, (QSize*)size, mode, state);
}

void q_iconengine_on_actual_size(void* self, QSize* (*callback)(void*, void*, int32_t, int32_t)) {
    QIconEngine_OnActualSize((QIconEngine*)self, (intptr_t)callback);
}

QSize* q_iconengine_qbase_actual_size(void* self, void* size, int32_t mode, int32_t state) {
    return QIconEngine_QBaseActualSize((QIconEngine*)self, (QSize*)size, mode, state);
}

QPixmap* q_iconengine_pixmap(void* self, void* size, int32_t mode, int32_t state) {
    return QIconEngine_Pixmap((QIconEngine*)self, (QSize*)size, mode, state);
}

void q_iconengine_on_pixmap(void* self, QPixmap* (*callback)(void*, void*, int32_t, int32_t)) {
    QIconEngine_OnPixmap((QIconEngine*)self, (intptr_t)callback);
}

QPixmap* q_iconengine_qbase_pixmap(void* self, void* size, int32_t mode, int32_t state) {
    return QIconEngine_QBasePixmap((QIconEngine*)self, (QSize*)size, mode, state);
}

void q_iconengine_add_pixmap(void* self, void* pixmap, int32_t mode, int32_t state) {
    QIconEngine_AddPixmap((QIconEngine*)self, (QPixmap*)pixmap, mode, state);
}

void q_iconengine_on_add_pixmap(void* self, void (*callback)(void*, void*, int32_t, int32_t)) {
    QIconEngine_OnAddPixmap((QIconEngine*)self, (intptr_t)callback);
}

void q_iconengine_qbase_add_pixmap(void* self, void* pixmap, int32_t mode, int32_t state) {
    QIconEngine_QBaseAddPixmap((QIconEngine*)self, (QPixmap*)pixmap, mode, state);
}

void q_iconengine_add_file(void* self, const char* fileName, void* size, int32_t mode, int32_t state) {
    QIconEngine_AddFile((QIconEngine*)self, qstring(fileName), (QSize*)size, mode, state);
}

void q_iconengine_on_add_file(void* self, void (*callback)(void*, const char*, void*, int32_t, int32_t)) {
    QIconEngine_OnAddFile((QIconEngine*)self, (intptr_t)callback);
}

void q_iconengine_qbase_add_file(void* self, const char* fileName, void* size, int32_t mode, int32_t state) {
    QIconEngine_QBaseAddFile((QIconEngine*)self, qstring(fileName), (QSize*)size, mode, state);
}

const char* q_iconengine_key(void* self) {
    libqt_string _str = QIconEngine_Key((QIconEngine*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_iconengine_on_key(void* self, const char* (*callback)()) {
    QIconEngine_OnKey((QIconEngine*)self, (intptr_t)callback);
}

const char* q_iconengine_qbase_key(void* self) {
    libqt_string _str = QIconEngine_QBaseKey((QIconEngine*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QIconEngine* q_iconengine_clone(void* self) {
    return QIconEngine_Clone((QIconEngine*)self);
}

void q_iconengine_on_clone(void* self, QIconEngine* (*callback)()) {
    QIconEngine_OnClone((QIconEngine*)self, (intptr_t)callback);
}

QIconEngine* q_iconengine_qbase_clone(void* self) {
    return QIconEngine_QBaseClone((QIconEngine*)self);
}

bool q_iconengine_read(void* self, void* in) {
    return QIconEngine_Read((QIconEngine*)self, (QDataStream*)in);
}

void q_iconengine_on_read(void* self, bool (*callback)(void*, void*)) {
    QIconEngine_OnRead((QIconEngine*)self, (intptr_t)callback);
}

bool q_iconengine_qbase_read(void* self, void* in) {
    return QIconEngine_QBaseRead((QIconEngine*)self, (QDataStream*)in);
}

bool q_iconengine_write(void* self, void* out) {
    return QIconEngine_Write((QIconEngine*)self, (QDataStream*)out);
}

void q_iconengine_on_write(void* self, bool (*callback)(void*, void*)) {
    QIconEngine_OnWrite((QIconEngine*)self, (intptr_t)callback);
}

bool q_iconengine_qbase_write(void* self, void* out) {
    return QIconEngine_QBaseWrite((QIconEngine*)self, (QDataStream*)out);
}

libqt_list /* of QSize* */ q_iconengine_available_sizes(void* self, int32_t mode, int32_t state) {
    libqt_list _arr = QIconEngine_AvailableSizes((QIconEngine*)self, mode, state);
    return _arr;
}

void q_iconengine_on_available_sizes(void* self, QSize** (*callback)(void*, int32_t, int32_t)) {
    QIconEngine_OnAvailableSizes((QIconEngine*)self, (intptr_t)callback);
}

libqt_list /* of QSize* */ q_iconengine_qbase_available_sizes(void* self, int32_t mode, int32_t state) {
    libqt_list _arr = QIconEngine_QBaseAvailableSizes((QIconEngine*)self, mode, state);
    return _arr;
}

const char* q_iconengine_icon_name(void* self) {
    libqt_string _str = QIconEngine_IconName((QIconEngine*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_iconengine_on_icon_name(void* self, const char* (*callback)()) {
    QIconEngine_OnIconName((QIconEngine*)self, (intptr_t)callback);
}

const char* q_iconengine_qbase_icon_name(void* self) {
    libqt_string _str = QIconEngine_QBaseIconName((QIconEngine*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_iconengine_is_null(void* self) {
    return QIconEngine_IsNull((QIconEngine*)self);
}

void q_iconengine_on_is_null(void* self, bool (*callback)()) {
    QIconEngine_OnIsNull((QIconEngine*)self, (intptr_t)callback);
}

bool q_iconengine_qbase_is_null(void* self) {
    return QIconEngine_QBaseIsNull((QIconEngine*)self);
}

QPixmap* q_iconengine_scaled_pixmap(void* self, void* size, int32_t mode, int32_t state, double scale) {
    return QIconEngine_ScaledPixmap((QIconEngine*)self, (QSize*)size, mode, state, scale);
}

void q_iconengine_on_scaled_pixmap(void* self, QPixmap* (*callback)(void*, void*, int32_t, int32_t, double)) {
    QIconEngine_OnScaledPixmap((QIconEngine*)self, (intptr_t)callback);
}

QPixmap* q_iconengine_qbase_scaled_pixmap(void* self, void* size, int32_t mode, int32_t state, double scale) {
    return QIconEngine_QBaseScaledPixmap((QIconEngine*)self, (QSize*)size, mode, state, scale);
}

void q_iconengine_virtual_hook(void* self, int id, void* data) {
    QIconEngine_VirtualHook((QIconEngine*)self, id, data);
}

void q_iconengine_on_virtual_hook(void* self, void (*callback)(void*, int, void*)) {
    QIconEngine_OnVirtualHook((QIconEngine*)self, (intptr_t)callback);
}

void q_iconengine_qbase_virtual_hook(void* self, int id, void* data) {
    QIconEngine_QBaseVirtualHook((QIconEngine*)self, id, data);
}

void q_iconengine_delete(void* self) {
    QIconEngine_Delete((QIconEngine*)(self));
}

QIconEngine__ScaledPixmapArgument* q_iconengine__scaledpixmapargument_new(void* param1) {
    return QIconEngine__ScaledPixmapArgument_new((QIconEngine__ScaledPixmapArgument*)param1);
}

QSize* q_iconengine__scaledpixmapargument_size(void* self) {
    return QIconEngine__ScaledPixmapArgument_Size((QIconEngine__ScaledPixmapArgument*)self);
}

void q_iconengine__scaledpixmapargument_set_size(void* self, void* size) {
    QIconEngine__ScaledPixmapArgument_SetSize((QIconEngine__ScaledPixmapArgument*)self, (QSize*)size);
}

int32_t q_iconengine__scaledpixmapargument_mode(void* self) {
    return QIconEngine__ScaledPixmapArgument_Mode((QIconEngine__ScaledPixmapArgument*)self);
}

void q_iconengine__scaledpixmapargument_set_mode(void* self, int32_t mode) {
    QIconEngine__ScaledPixmapArgument_SetMode((QIconEngine__ScaledPixmapArgument*)self, mode);
}

int32_t q_iconengine__scaledpixmapargument_state(void* self) {
    return QIconEngine__ScaledPixmapArgument_State((QIconEngine__ScaledPixmapArgument*)self);
}

void q_iconengine__scaledpixmapargument_set_state(void* self, int32_t state) {
    QIconEngine__ScaledPixmapArgument_SetState((QIconEngine__ScaledPixmapArgument*)self, state);
}

double q_iconengine__scaledpixmapargument_scale(void* self) {
    return QIconEngine__ScaledPixmapArgument_Scale((QIconEngine__ScaledPixmapArgument*)self);
}

void q_iconengine__scaledpixmapargument_set_scale(void* self, double scale) {
    QIconEngine__ScaledPixmapArgument_SetScale((QIconEngine__ScaledPixmapArgument*)self, scale);
}

QPixmap* q_iconengine__scaledpixmapargument_pixmap(void* self) {
    return QIconEngine__ScaledPixmapArgument_Pixmap((QIconEngine__ScaledPixmapArgument*)self);
}

void q_iconengine__scaledpixmapargument_set_pixmap(void* self, void* pixmap) {
    QIconEngine__ScaledPixmapArgument_SetPixmap((QIconEngine__ScaledPixmapArgument*)self, (QPixmap*)pixmap);
}

void q_iconengine__scaledpixmapargument_operator_assign(void* self, void* param1) {
    QIconEngine__ScaledPixmapArgument_OperatorAssign((QIconEngine__ScaledPixmapArgument*)self, (QIconEngine__ScaledPixmapArgument*)param1);
}

void q_iconengine__scaledpixmapargument_delete(void* self) {
    QIconEngine__ScaledPixmapArgument_Delete((QIconEngine__ScaledPixmapArgument*)(self));
}
