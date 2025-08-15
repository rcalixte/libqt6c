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

void q_iconengine_paint(void* self, void* painter, void* rect, int64_t mode, int64_t state) {
    QIconEngine_Paint((QIconEngine*)self, (QPainter*)painter, (QRect*)rect, mode, state);
}

void q_iconengine_on_paint(void* self, void (*callback)(void*, void*, void*, int64_t, int64_t)) {
    QIconEngine_OnPaint((QIconEngine*)self, (intptr_t)callback);
}

void q_iconengine_qbase_paint(void* self, void* painter, void* rect, int64_t mode, int64_t state) {
    QIconEngine_QBasePaint((QIconEngine*)self, (QPainter*)painter, (QRect*)rect, mode, state);
}

QSize* q_iconengine_actual_size(void* self, void* size, int64_t mode, int64_t state) {
    return QIconEngine_ActualSize((QIconEngine*)self, (QSize*)size, mode, state);
}

void q_iconengine_on_actual_size(void* self, QSize* (*callback)(void*, void*, int64_t, int64_t)) {
    QIconEngine_OnActualSize((QIconEngine*)self, (intptr_t)callback);
}

QSize* q_iconengine_qbase_actual_size(void* self, void* size, int64_t mode, int64_t state) {
    return QIconEngine_QBaseActualSize((QIconEngine*)self, (QSize*)size, mode, state);
}

QPixmap* q_iconengine_pixmap(void* self, void* size, int64_t mode, int64_t state) {
    return QIconEngine_Pixmap((QIconEngine*)self, (QSize*)size, mode, state);
}

void q_iconengine_on_pixmap(void* self, QPixmap* (*callback)(void*, void*, int64_t, int64_t)) {
    QIconEngine_OnPixmap((QIconEngine*)self, (intptr_t)callback);
}

QPixmap* q_iconengine_qbase_pixmap(void* self, void* size, int64_t mode, int64_t state) {
    return QIconEngine_QBasePixmap((QIconEngine*)self, (QSize*)size, mode, state);
}

void q_iconengine_add_pixmap(void* self, void* pixmap, int64_t mode, int64_t state) {
    QIconEngine_AddPixmap((QIconEngine*)self, (QPixmap*)pixmap, mode, state);
}

void q_iconengine_on_add_pixmap(void* self, void (*callback)(void*, void*, int64_t, int64_t)) {
    QIconEngine_OnAddPixmap((QIconEngine*)self, (intptr_t)callback);
}

void q_iconengine_qbase_add_pixmap(void* self, void* pixmap, int64_t mode, int64_t state) {
    QIconEngine_QBaseAddPixmap((QIconEngine*)self, (QPixmap*)pixmap, mode, state);
}

void q_iconengine_add_file(void* self, const char* fileName, void* size, int64_t mode, int64_t state) {
    QIconEngine_AddFile((QIconEngine*)self, qstring(fileName), (QSize*)size, mode, state);
}

void q_iconengine_on_add_file(void* self, void (*callback)(void*, const char*, void*, int64_t, int64_t)) {
    QIconEngine_OnAddFile((QIconEngine*)self, (intptr_t)callback);
}

void q_iconengine_qbase_add_file(void* self, const char* fileName, void* size, int64_t mode, int64_t state) {
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

libqt_list /* of QSize* */ q_iconengine_available_sizes(void* self, int64_t mode, int64_t state) {
    libqt_list _arr = QIconEngine_AvailableSizes((QIconEngine*)self, mode, state);
    return _arr;
}

void q_iconengine_on_available_sizes(void* self, libqt_list /* of QSize* */ (*callback)(void*, int64_t, int64_t)) {
    QIconEngine_OnAvailableSizes((QIconEngine*)self, (intptr_t)callback);
}

libqt_list /* of QSize* */ q_iconengine_qbase_available_sizes(void* self, int64_t mode, int64_t state) {
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

QPixmap* q_iconengine_scaled_pixmap(void* self, void* size, int64_t mode, int64_t state, double scale) {
    return QIconEngine_ScaledPixmap((QIconEngine*)self, (QSize*)size, mode, state, scale);
}

void q_iconengine_on_scaled_pixmap(void* self, QPixmap* (*callback)(void*, void*, int64_t, int64_t, double)) {
    QIconEngine_OnScaledPixmap((QIconEngine*)self, (intptr_t)callback);
}

QPixmap* q_iconengine_qbase_scaled_pixmap(void* self, void* size, int64_t mode, int64_t state, double scale) {
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

void q_iconengine__scaledpixmapargument_operator_assign(void* self, void* param1) {
    QIconEngine__ScaledPixmapArgument_OperatorAssign((QIconEngine__ScaledPixmapArgument*)self, (QIconEngine__ScaledPixmapArgument*)param1);
}

void q_iconengine__scaledpixmapargument_delete(void* self) {
    QIconEngine__ScaledPixmapArgument_Delete((QIconEngine__ScaledPixmapArgument*)(self));
}
