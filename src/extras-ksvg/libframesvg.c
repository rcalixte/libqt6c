#include "libsvg.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpainter.hpp"
#include "../libqpixmap.hpp"
#include "../libqpoint.hpp"
#include "../libqrect.hpp"
#include "../libqregion.hpp"
#include "../libqsize.hpp"
#include "libframesvg.hpp"
#include "libframesvg.h"

KSvg__FrameSvg* k_svg__framesvg_new() {
    return KSvg__FrameSvg_new();
}

KSvg__FrameSvg* k_svg__framesvg_new2(void* parent) {
    return KSvg__FrameSvg_new2((QObject*)parent);
}

const QMetaObject* k_svg__framesvg_meta_object(void* self) {
    return KSvg__FrameSvg_MetaObject((KSvg__FrameSvg*)self);
}

void* k_svg__framesvg_metacast(void* self, const char* param1) {
    return KSvg__FrameSvg_Metacast((KSvg__FrameSvg*)self, param1);
}

int32_t k_svg__framesvg_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KSvg__FrameSvg_Metacall((KSvg__FrameSvg*)self, param1, param2, param3);
}

void k_svg__framesvg_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KSvg__FrameSvg_OnMetacall((KSvg__FrameSvg*)self, (intptr_t)callback);
}

int32_t k_svg__framesvg_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KSvg__FrameSvg_QBaseMetacall((KSvg__FrameSvg*)self, param1, param2, param3);
}

const char* k_svg__framesvg_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_svg__framesvg_set_image_path(void* self, const char* path) {
    KSvg__FrameSvg_SetImagePath((KSvg__FrameSvg*)self, qstring(path));
}

void k_svg__framesvg_on_set_image_path(void* self, void (*callback)(void*, const char*)) {
    KSvg__FrameSvg_OnSetImagePath((KSvg__FrameSvg*)self, (intptr_t)callback);
}

void k_svg__framesvg_qbase_set_image_path(void* self, const char* path) {
    KSvg__FrameSvg_QBaseSetImagePath((KSvg__FrameSvg*)self, qstring(path));
}

void k_svg__framesvg_set_enabled_borders(void* self, const int32_t borders) {
    KSvg__FrameSvg_SetEnabledBorders((KSvg__FrameSvg*)self, borders);
}

int32_t k_svg__framesvg_enabled_borders(void* self) {
    return KSvg__FrameSvg_EnabledBorders((KSvg__FrameSvg*)self);
}

void k_svg__framesvg_resize_frame(void* self, void* size) {
    KSvg__FrameSvg_ResizeFrame((KSvg__FrameSvg*)self, (QSizeF*)size);
}

QSizeF* k_svg__framesvg_frame_size(void* self) {
    return KSvg__FrameSvg_FrameSize((KSvg__FrameSvg*)self);
}

double k_svg__framesvg_margin_size(void* self, int32_t edge) {
    return KSvg__FrameSvg_MarginSize((KSvg__FrameSvg*)self, edge);
}

void k_svg__framesvg_get_margins(void* self, double* left, double* top, double* right, double* bottom) {
    KSvg__FrameSvg_GetMargins((KSvg__FrameSvg*)self, left, top, right, bottom);
}

double k_svg__framesvg_fixed_margin_size(void* self, int32_t edge) {
    return KSvg__FrameSvg_FixedMarginSize((KSvg__FrameSvg*)self, edge);
}

void k_svg__framesvg_get_fixed_margins(void* self, double* left, double* top, double* right, double* bottom) {
    KSvg__FrameSvg_GetFixedMargins((KSvg__FrameSvg*)self, left, top, right, bottom);
}

double k_svg__framesvg_inset_size(void* self, int32_t edge) {
    return KSvg__FrameSvg_InsetSize((KSvg__FrameSvg*)self, edge);
}

void k_svg__framesvg_get_inset(void* self, double* left, double* top, double* right, double* bottom) {
    KSvg__FrameSvg_GetInset((KSvg__FrameSvg*)self, left, top, right, bottom);
}

QRectF* k_svg__framesvg_contents_rect(void* self) {
    return KSvg__FrameSvg_ContentsRect((KSvg__FrameSvg*)self);
}

void k_svg__framesvg_set_element_prefix(void* self, int32_t location) {
    KSvg__FrameSvg_SetElementPrefix((KSvg__FrameSvg*)self, location);
}

void k_svg__framesvg_set_element_prefix2(void* self, const char* prefix) {
    KSvg__FrameSvg_SetElementPrefix2((KSvg__FrameSvg*)self, qstring(prefix));
}

bool k_svg__framesvg_has_element_prefix(void* self, const char* prefix) {
    return KSvg__FrameSvg_HasElementPrefix((KSvg__FrameSvg*)self, qstring(prefix));
}

bool k_svg__framesvg_has_element_prefix2(void* self, int32_t location) {
    return KSvg__FrameSvg_HasElementPrefix2((KSvg__FrameSvg*)self, location);
}

const char* k_svg__framesvg_prefix(void* self) {
    libqt_string _str = KSvg__FrameSvg_Prefix((KSvg__FrameSvg*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QRegion* k_svg__framesvg_mask(void* self) {
    return KSvg__FrameSvg_Mask((KSvg__FrameSvg*)self);
}

QPixmap* k_svg__framesvg_alpha_mask(void* self) {
    return KSvg__FrameSvg_AlphaMask((KSvg__FrameSvg*)self);
}

void k_svg__framesvg_set_cache_all_rendered_frames(void* self, bool cache) {
    KSvg__FrameSvg_SetCacheAllRenderedFrames((KSvg__FrameSvg*)self, cache);
}

bool k_svg__framesvg_cache_all_rendered_frames(void* self) {
    return KSvg__FrameSvg_CacheAllRenderedFrames((KSvg__FrameSvg*)self);
}

void k_svg__framesvg_clear_cache(void* self) {
    KSvg__FrameSvg_ClearCache((KSvg__FrameSvg*)self);
}

QPixmap* k_svg__framesvg_frame_pixmap(void* self) {
    return KSvg__FrameSvg_FramePixmap((KSvg__FrameSvg*)self);
}

void k_svg__framesvg_paint_frame(void* self, void* painter, void* target) {
    KSvg__FrameSvg_PaintFrame((KSvg__FrameSvg*)self, (QPainter*)painter, (QRectF*)target);
}

void k_svg__framesvg_paint_frame2(void* self, void* painter) {
    KSvg__FrameSvg_PaintFrame2((KSvg__FrameSvg*)self, (QPainter*)painter);
}

const char* k_svg__framesvg_actual_prefix(void* self) {
    libqt_string _str = KSvg__FrameSvg_ActualPrefix((KSvg__FrameSvg*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_svg__framesvg_is_repaint_blocked(void* self) {
    return KSvg__FrameSvg_IsRepaintBlocked((KSvg__FrameSvg*)self);
}

void k_svg__framesvg_set_repaint_blocked(void* self, bool blocked) {
    KSvg__FrameSvg_SetRepaintBlocked((KSvg__FrameSvg*)self, blocked);
}

int32_t k_svg__framesvg_minimum_drawing_height(void* self) {
    return KSvg__FrameSvg_MinimumDrawingHeight((KSvg__FrameSvg*)self);
}

int32_t k_svg__framesvg_minimum_drawing_width(void* self) {
    return KSvg__FrameSvg_MinimumDrawingWidth((KSvg__FrameSvg*)self);
}

const char* k_svg__framesvg_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_svg__framesvg_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_svg__framesvg_paint_frame3(void* self, void* painter, void* target, void* source) {
    KSvg__FrameSvg_PaintFrame3((KSvg__FrameSvg*)self, (QPainter*)painter, (QRectF*)target, (QRectF*)source);
}

void k_svg__framesvg_paint_frame22(void* self, void* painter, void* pos) {
    KSvg__FrameSvg_PaintFrame22((KSvg__FrameSvg*)self, (QPainter*)painter, (QPointF*)pos);
}

void k_svg__framesvg_set_device_pixel_ratio(void* self, double factor) {
    KSvg__Svg_SetDevicePixelRatio((KSvg__Svg*)self, factor);
}

double k_svg__framesvg_device_pixel_ratio(void* self) {
    return KSvg__Svg_DevicePixelRatio((KSvg__Svg*)self);
}

QPixmap* k_svg__framesvg_pixmap(void* self) {
    return KSvg__Svg_Pixmap((KSvg__Svg*)self);
}

QImage* k_svg__framesvg_image(void* self, void* size) {
    return KSvg__Svg_Image((KSvg__Svg*)self, (QSize*)size);
}

void k_svg__framesvg_paint(void* self, void* painter, void* point) {
    KSvg__Svg_Paint((KSvg__Svg*)self, (QPainter*)painter, (QPointF*)point);
}

void k_svg__framesvg_paint2(void* self, void* painter, int x, int y) {
    KSvg__Svg_Paint2((KSvg__Svg*)self, (QPainter*)painter, x, y);
}

void k_svg__framesvg_paint3(void* self, void* painter, void* rect) {
    KSvg__Svg_Paint3((KSvg__Svg*)self, (QPainter*)painter, (QRectF*)rect);
}

void k_svg__framesvg_paint4(void* self, void* painter, int x, int y, int width, int height) {
    KSvg__Svg_Paint4((KSvg__Svg*)self, (QPainter*)painter, x, y, width, height);
}

QSizeF* k_svg__framesvg_size(void* self) {
    return KSvg__Svg_Size((KSvg__Svg*)self);
}

void k_svg__framesvg_resize(void* self, double width, double height) {
    KSvg__Svg_Resize((KSvg__Svg*)self, width, height);
}

void k_svg__framesvg_resize2(void* self, void* size) {
    KSvg__Svg_Resize2((KSvg__Svg*)self, (QSizeF*)size);
}

void k_svg__framesvg_resize3(void* self) {
    KSvg__Svg_Resize3((KSvg__Svg*)self);
}

QSizeF* k_svg__framesvg_element_size(void* self, const char* elementId) {
    return KSvg__Svg_ElementSize((KSvg__Svg*)self, qstring(elementId));
}

QRectF* k_svg__framesvg_element_rect(void* self, const char* elementId) {
    return KSvg__Svg_ElementRect((KSvg__Svg*)self, qstring(elementId));
}

bool k_svg__framesvg_has_element(void* self, const char* elementId) {
    return KSvg__Svg_HasElement((KSvg__Svg*)self, qstring(elementId));
}

bool k_svg__framesvg_is_valid(void* self) {
    return KSvg__Svg_IsValid((KSvg__Svg*)self);
}

void k_svg__framesvg_set_contains_multiple_images(void* self, bool multiple) {
    KSvg__Svg_SetContainsMultipleImages((KSvg__Svg*)self, multiple);
}

bool k_svg__framesvg_contains_multiple_images(void* self) {
    return KSvg__Svg_ContainsMultipleImages((KSvg__Svg*)self);
}

const char* k_svg__framesvg_image_path(void* self) {
    libqt_string _str = KSvg__Svg_ImagePath((KSvg__Svg*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_svg__framesvg_set_using_rendering_cache(void* self, bool useCache) {
    KSvg__Svg_SetUsingRenderingCache((KSvg__Svg*)self, useCache);
}

bool k_svg__framesvg_is_using_rendering_cache(void* self) {
    return KSvg__Svg_IsUsingRenderingCache((KSvg__Svg*)self);
}

bool k_svg__framesvg_from_current_image_set(void* self) {
    return KSvg__Svg_FromCurrentImageSet((KSvg__Svg*)self);
}

void k_svg__framesvg_set_image_set(void* self, void* theme) {
    KSvg__Svg_SetImageSet((KSvg__Svg*)self, (KSvg__ImageSet*)theme);
}

KSvg__ImageSet* k_svg__framesvg_image_set(void* self) {
    return KSvg__Svg_ImageSet((KSvg__Svg*)self);
}

void k_svg__framesvg_set_status(void* self, int32_t status) {
    KSvg__Svg_SetStatus((KSvg__Svg*)self, status);
}

int32_t k_svg__framesvg_status(void* self) {
    return KSvg__Svg_Status((KSvg__Svg*)self);
}

void k_svg__framesvg_set_color_set(void* self, int32_t colorSet) {
    KSvg__Svg_SetColorSet((KSvg__Svg*)self, colorSet);
}

int32_t k_svg__framesvg_color_set(void* self) {
    return KSvg__Svg_ColorSet((KSvg__Svg*)self);
}

QColor* k_svg__framesvg_color(void* self, int32_t colorName) {
    return KSvg__Svg_Color((KSvg__Svg*)self, colorName);
}

void k_svg__framesvg_set_color(void* self, int32_t colorName, void* color) {
    KSvg__Svg_SetColor((KSvg__Svg*)self, colorName, (QColor*)color);
}

void k_svg__framesvg_clear_color_overrides(void* self) {
    KSvg__Svg_ClearColorOverrides((KSvg__Svg*)self);
}

void k_svg__framesvg_repaint_needed(void* self) {
    KSvg__Svg_RepaintNeeded((KSvg__Svg*)self);
}

void k_svg__framesvg_on_repaint_needed(void* self, void (*callback)(void*)) {
    KSvg__Svg_Connect_RepaintNeeded((KSvg__Svg*)self, (intptr_t)callback);
}

void k_svg__framesvg_size_changed(void* self) {
    KSvg__Svg_SizeChanged((KSvg__Svg*)self);
}

void k_svg__framesvg_on_size_changed(void* self, void (*callback)(void*)) {
    KSvg__Svg_Connect_SizeChanged((KSvg__Svg*)self, (intptr_t)callback);
}

void k_svg__framesvg_image_path_changed(void* self) {
    KSvg__Svg_ImagePathChanged((KSvg__Svg*)self);
}

void k_svg__framesvg_on_image_path_changed(void* self, void (*callback)(void*)) {
    KSvg__Svg_Connect_ImagePathChanged((KSvg__Svg*)self, (intptr_t)callback);
}

void k_svg__framesvg_color_hint_changed(void* self) {
    KSvg__Svg_ColorHintChanged((KSvg__Svg*)self);
}

void k_svg__framesvg_on_color_hint_changed(void* self, void (*callback)(void*)) {
    KSvg__Svg_Connect_ColorHintChanged((KSvg__Svg*)self, (intptr_t)callback);
}

void k_svg__framesvg_from_current_image_set_changed(void* self, bool fromCurrentImageSet) {
    KSvg__Svg_FromCurrentImageSetChanged((KSvg__Svg*)self, fromCurrentImageSet);
}

void k_svg__framesvg_on_from_current_image_set_changed(void* self, void (*callback)(void*, bool)) {
    KSvg__Svg_Connect_FromCurrentImageSetChanged((KSvg__Svg*)self, (intptr_t)callback);
}

void k_svg__framesvg_status_changed(void* self, int32_t status) {
    KSvg__Svg_StatusChanged((KSvg__Svg*)self, status);
}

void k_svg__framesvg_on_status_changed(void* self, void (*callback)(void*, int32_t)) {
    KSvg__Svg_Connect_StatusChanged((KSvg__Svg*)self, (intptr_t)callback);
}

void k_svg__framesvg_color_set_changed(void* self, int32_t colorSet) {
    KSvg__Svg_ColorSetChanged((KSvg__Svg*)self, colorSet);
}

void k_svg__framesvg_on_color_set_changed(void* self, void (*callback)(void*, int32_t)) {
    KSvg__Svg_Connect_ColorSetChanged((KSvg__Svg*)self, (intptr_t)callback);
}

void k_svg__framesvg_image_set_changed(void* self, void* imageSet) {
    KSvg__Svg_ImageSetChanged((KSvg__Svg*)self, (KSvg__ImageSet*)imageSet);
}

void k_svg__framesvg_on_image_set_changed(void* self, void (*callback)(void*, void*)) {
    KSvg__Svg_Connect_ImageSetChanged((KSvg__Svg*)self, (intptr_t)callback);
}

QPixmap* k_svg__framesvg_pixmap1(void* self, const char* elementID) {
    return KSvg__Svg_Pixmap1((KSvg__Svg*)self, qstring(elementID));
}

QImage* k_svg__framesvg_image2(void* self, void* size, const char* elementID) {
    return KSvg__Svg_Image2((KSvg__Svg*)self, (QSize*)size, qstring(elementID));
}

void k_svg__framesvg_paint32(void* self, void* painter, void* point, const char* elementID) {
    KSvg__Svg_Paint32((KSvg__Svg*)self, (QPainter*)painter, (QPointF*)point, qstring(elementID));
}

void k_svg__framesvg_paint42(void* self, void* painter, int x, int y, const char* elementID) {
    KSvg__Svg_Paint42((KSvg__Svg*)self, (QPainter*)painter, x, y, qstring(elementID));
}

void k_svg__framesvg_paint33(void* self, void* painter, void* rect, const char* elementID) {
    KSvg__Svg_Paint33((KSvg__Svg*)self, (QPainter*)painter, (QRectF*)rect, qstring(elementID));
}

void k_svg__framesvg_paint6(void* self, void* painter, int x, int y, int width, int height, const char* elementID) {
    KSvg__Svg_Paint6((KSvg__Svg*)self, (QPainter*)painter, x, y, width, height, qstring(elementID));
}

bool k_svg__framesvg_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

void k_svg__framesvg_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QObject_OnEventFilter((QObject*)self, (intptr_t)callback);
}

bool k_svg__framesvg_qbase_event_filter(void* self, void* watched, void* event) {
    return QObject_QBaseEventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* k_svg__framesvg_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_svg__framesvg_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_svg__framesvg_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_svg__framesvg_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_svg__framesvg_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_svg__framesvg_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_svg__framesvg_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_svg__framesvg_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_svg__framesvg_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_svg__framesvg_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_svg__framesvg_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_svg__framesvg_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_svg__framesvg_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_svg__framesvg_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_svg__framesvg_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_svg__framesvg_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_svg__framesvg_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_svg__framesvg_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_svg__framesvg_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_svg__framesvg_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_svg__framesvg_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_svg__framesvg_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_svg__framesvg_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_svg__framesvg_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_svg__framesvg_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_svg__framesvg_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_svg__framesvg_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* k_svg__framesvg_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_svg__framesvg_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_svg__framesvg_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_svg__framesvg_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_svg__framesvg_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_svg__framesvg_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_svg__framesvg_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_svg__framesvg_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_svg__framesvg_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_svg__framesvg_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_svg__framesvg_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_svg__framesvg_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_svg__framesvg_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_svg__framesvg_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_svg__framesvg_event(void* self, void* event) {
    return KSvg__FrameSvg_Event((KSvg__FrameSvg*)self, (QEvent*)event);
}

bool k_svg__framesvg_qbase_event(void* self, void* event) {
    return KSvg__FrameSvg_QBaseEvent((KSvg__FrameSvg*)self, (QEvent*)event);
}

void k_svg__framesvg_on_event(void* self, bool (*callback)(void*, void*)) {
    KSvg__FrameSvg_OnEvent((KSvg__FrameSvg*)self, (intptr_t)callback);
}

void k_svg__framesvg_timer_event(void* self, void* event) {
    KSvg__FrameSvg_TimerEvent((KSvg__FrameSvg*)self, (QTimerEvent*)event);
}

void k_svg__framesvg_qbase_timer_event(void* self, void* event) {
    KSvg__FrameSvg_QBaseTimerEvent((KSvg__FrameSvg*)self, (QTimerEvent*)event);
}

void k_svg__framesvg_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KSvg__FrameSvg_OnTimerEvent((KSvg__FrameSvg*)self, (intptr_t)callback);
}

void k_svg__framesvg_child_event(void* self, void* event) {
    KSvg__FrameSvg_ChildEvent((KSvg__FrameSvg*)self, (QChildEvent*)event);
}

void k_svg__framesvg_qbase_child_event(void* self, void* event) {
    KSvg__FrameSvg_QBaseChildEvent((KSvg__FrameSvg*)self, (QChildEvent*)event);
}

void k_svg__framesvg_on_child_event(void* self, void (*callback)(void*, void*)) {
    KSvg__FrameSvg_OnChildEvent((KSvg__FrameSvg*)self, (intptr_t)callback);
}

void k_svg__framesvg_custom_event(void* self, void* event) {
    KSvg__FrameSvg_CustomEvent((KSvg__FrameSvg*)self, (QEvent*)event);
}

void k_svg__framesvg_qbase_custom_event(void* self, void* event) {
    KSvg__FrameSvg_QBaseCustomEvent((KSvg__FrameSvg*)self, (QEvent*)event);
}

void k_svg__framesvg_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KSvg__FrameSvg_OnCustomEvent((KSvg__FrameSvg*)self, (intptr_t)callback);
}

void k_svg__framesvg_connect_notify(void* self, void* signal) {
    KSvg__FrameSvg_ConnectNotify((KSvg__FrameSvg*)self, (QMetaMethod*)signal);
}

void k_svg__framesvg_qbase_connect_notify(void* self, void* signal) {
    KSvg__FrameSvg_QBaseConnectNotify((KSvg__FrameSvg*)self, (QMetaMethod*)signal);
}

void k_svg__framesvg_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KSvg__FrameSvg_OnConnectNotify((KSvg__FrameSvg*)self, (intptr_t)callback);
}

void k_svg__framesvg_disconnect_notify(void* self, void* signal) {
    KSvg__FrameSvg_DisconnectNotify((KSvg__FrameSvg*)self, (QMetaMethod*)signal);
}

void k_svg__framesvg_qbase_disconnect_notify(void* self, void* signal) {
    KSvg__FrameSvg_QBaseDisconnectNotify((KSvg__FrameSvg*)self, (QMetaMethod*)signal);
}

void k_svg__framesvg_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KSvg__FrameSvg_OnDisconnectNotify((KSvg__FrameSvg*)self, (intptr_t)callback);
}

QObject* k_svg__framesvg_sender(void* self) {
    return KSvg__FrameSvg_Sender((KSvg__FrameSvg*)self);
}

QObject* k_svg__framesvg_qbase_sender(void* self) {
    return KSvg__FrameSvg_QBaseSender((KSvg__FrameSvg*)self);
}

void k_svg__framesvg_on_sender(void* self, QObject* (*callback)()) {
    KSvg__FrameSvg_OnSender((KSvg__FrameSvg*)self, (intptr_t)callback);
}

int32_t k_svg__framesvg_sender_signal_index(void* self) {
    return KSvg__FrameSvg_SenderSignalIndex((KSvg__FrameSvg*)self);
}

int32_t k_svg__framesvg_qbase_sender_signal_index(void* self) {
    return KSvg__FrameSvg_QBaseSenderSignalIndex((KSvg__FrameSvg*)self);
}

void k_svg__framesvg_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KSvg__FrameSvg_OnSenderSignalIndex((KSvg__FrameSvg*)self, (intptr_t)callback);
}

int32_t k_svg__framesvg_receivers(void* self, const char* signal) {
    return KSvg__FrameSvg_Receivers((KSvg__FrameSvg*)self, signal);
}

int32_t k_svg__framesvg_qbase_receivers(void* self, const char* signal) {
    return KSvg__FrameSvg_QBaseReceivers((KSvg__FrameSvg*)self, signal);
}

void k_svg__framesvg_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KSvg__FrameSvg_OnReceivers((KSvg__FrameSvg*)self, (intptr_t)callback);
}

bool k_svg__framesvg_is_signal_connected(void* self, void* signal) {
    return KSvg__FrameSvg_IsSignalConnected((KSvg__FrameSvg*)self, (QMetaMethod*)signal);
}

bool k_svg__framesvg_qbase_is_signal_connected(void* self, void* signal) {
    return KSvg__FrameSvg_QBaseIsSignalConnected((KSvg__FrameSvg*)self, (QMetaMethod*)signal);
}

void k_svg__framesvg_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KSvg__FrameSvg_OnIsSignalConnected((KSvg__FrameSvg*)self, (intptr_t)callback);
}

void k_svg__framesvg_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_svg__framesvg_delete(void* self) {
    KSvg__FrameSvg_Delete((KSvg__FrameSvg*)(self));
}
