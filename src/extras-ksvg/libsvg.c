#include "libimageset.hpp"
#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqimage.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpainter.hpp"
#include "../libqpixmap.hpp"
#include "../libqpoint.hpp"
#include "../libqrect.hpp"
#include "../libqsize.hpp"
#include "libsvg.hpp"
#include "libsvg.h"

KSvg__Svg* k_svg__svg_new() {
    return KSvg__Svg_new();
}

KSvg__Svg* k_svg__svg_new2(void* parent) {
    return KSvg__Svg_new2((QObject*)parent);
}

const QMetaObject* k_svg__svg_meta_object(void* self) {
    return KSvg__Svg_MetaObject((KSvg__Svg*)self);
}

void k_svg__svg_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KSvg__Svg_OnMetaObject((KSvg__Svg*)self, (intptr_t)callback);
}

const QMetaObject* k_svg__svg_qbase_meta_object(void* self) {
    return KSvg__Svg_QBaseMetaObject((KSvg__Svg*)self);
}

void* k_svg__svg_metacast(void* self, const char* param1) {
    return KSvg__Svg_Metacast((KSvg__Svg*)self, param1);
}

void k_svg__svg_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KSvg__Svg_OnMetacast((KSvg__Svg*)self, (intptr_t)callback);
}

void* k_svg__svg_qbase_metacast(void* self, const char* param1) {
    return KSvg__Svg_QBaseMetacast((KSvg__Svg*)self, param1);
}

int32_t k_svg__svg_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KSvg__Svg_Metacall((KSvg__Svg*)self, param1, param2, param3);
}

void k_svg__svg_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KSvg__Svg_OnMetacall((KSvg__Svg*)self, (intptr_t)callback);
}

int32_t k_svg__svg_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KSvg__Svg_QBaseMetacall((KSvg__Svg*)self, param1, param2, param3);
}

const char* k_svg__svg_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_svg__svg_set_device_pixel_ratio(void* self, double factor) {
    KSvg__Svg_SetDevicePixelRatio((KSvg__Svg*)self, factor);
}

double k_svg__svg_device_pixel_ratio(void* self) {
    return KSvg__Svg_DevicePixelRatio((KSvg__Svg*)self);
}

QPixmap* k_svg__svg_pixmap(void* self) {
    return KSvg__Svg_Pixmap((KSvg__Svg*)self);
}

QImage* k_svg__svg_image(void* self, void* size) {
    return KSvg__Svg_Image((KSvg__Svg*)self, (QSize*)size);
}

void k_svg__svg_paint(void* self, void* painter, void* point) {
    KSvg__Svg_Paint((KSvg__Svg*)self, (QPainter*)painter, (QPointF*)point);
}

void k_svg__svg_paint2(void* self, void* painter, int x, int y) {
    KSvg__Svg_Paint2((KSvg__Svg*)self, (QPainter*)painter, x, y);
}

void k_svg__svg_paint3(void* self, void* painter, void* rect) {
    KSvg__Svg_Paint3((KSvg__Svg*)self, (QPainter*)painter, (QRectF*)rect);
}

void k_svg__svg_paint4(void* self, void* painter, int x, int y, int width, int height) {
    KSvg__Svg_Paint4((KSvg__Svg*)self, (QPainter*)painter, x, y, width, height);
}

QSizeF* k_svg__svg_size(void* self) {
    return KSvg__Svg_Size((KSvg__Svg*)self);
}

void k_svg__svg_resize(void* self, double width, double height) {
    KSvg__Svg_Resize((KSvg__Svg*)self, width, height);
}

void k_svg__svg_resize2(void* self, void* size) {
    KSvg__Svg_Resize2((KSvg__Svg*)self, (QSizeF*)size);
}

void k_svg__svg_resize3(void* self) {
    KSvg__Svg_Resize3((KSvg__Svg*)self);
}

QSizeF* k_svg__svg_element_size(void* self, const char* elementId) {
    return KSvg__Svg_ElementSize((KSvg__Svg*)self, qstring(elementId));
}

QRectF* k_svg__svg_element_rect(void* self, const char* elementId) {
    return KSvg__Svg_ElementRect((KSvg__Svg*)self, qstring(elementId));
}

bool k_svg__svg_has_element(void* self, const char* elementId) {
    return KSvg__Svg_HasElement((KSvg__Svg*)self, qstring(elementId));
}

bool k_svg__svg_is_valid(void* self) {
    return KSvg__Svg_IsValid((KSvg__Svg*)self);
}

void k_svg__svg_set_contains_multiple_images(void* self, bool multiple) {
    KSvg__Svg_SetContainsMultipleImages((KSvg__Svg*)self, multiple);
}

bool k_svg__svg_contains_multiple_images(void* self) {
    return KSvg__Svg_ContainsMultipleImages((KSvg__Svg*)self);
}

void k_svg__svg_set_image_path(void* self, const char* svgFilePath) {
    KSvg__Svg_SetImagePath((KSvg__Svg*)self, qstring(svgFilePath));
}

void k_svg__svg_on_set_image_path(void* self, void (*callback)(void*, const char*)) {
    KSvg__Svg_OnSetImagePath((KSvg__Svg*)self, (intptr_t)callback);
}

void k_svg__svg_qbase_set_image_path(void* self, const char* svgFilePath) {
    KSvg__Svg_QBaseSetImagePath((KSvg__Svg*)self, qstring(svgFilePath));
}

const char* k_svg__svg_image_path(void* self) {
    libqt_string _str = KSvg__Svg_ImagePath((KSvg__Svg*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_svg__svg_set_using_rendering_cache(void* self, bool useCache) {
    KSvg__Svg_SetUsingRenderingCache((KSvg__Svg*)self, useCache);
}

bool k_svg__svg_is_using_rendering_cache(void* self) {
    return KSvg__Svg_IsUsingRenderingCache((KSvg__Svg*)self);
}

bool k_svg__svg_from_current_image_set(void* self) {
    return KSvg__Svg_FromCurrentImageSet((KSvg__Svg*)self);
}

void k_svg__svg_set_image_set(void* self, void* theme) {
    KSvg__Svg_SetImageSet((KSvg__Svg*)self, (KSvg__ImageSet*)theme);
}

KSvg__ImageSet* k_svg__svg_image_set(void* self) {
    return KSvg__Svg_ImageSet((KSvg__Svg*)self);
}

void k_svg__svg_set_status(void* self, int32_t status) {
    KSvg__Svg_SetStatus((KSvg__Svg*)self, status);
}

int32_t k_svg__svg_status(void* self) {
    return KSvg__Svg_Status((KSvg__Svg*)self);
}

void k_svg__svg_set_color_set(void* self, int32_t colorSet) {
    KSvg__Svg_SetColorSet((KSvg__Svg*)self, colorSet);
}

int32_t k_svg__svg_color_set(void* self) {
    return KSvg__Svg_ColorSet((KSvg__Svg*)self);
}

QColor* k_svg__svg_color(void* self, int32_t colorName) {
    return KSvg__Svg_Color((KSvg__Svg*)self, colorName);
}

void k_svg__svg_set_color(void* self, int32_t colorName, void* color) {
    KSvg__Svg_SetColor((KSvg__Svg*)self, colorName, (QColor*)color);
}

void k_svg__svg_clear_color_overrides(void* self) {
    KSvg__Svg_ClearColorOverrides((KSvg__Svg*)self);
}

void k_svg__svg_repaint_needed(void* self) {
    KSvg__Svg_RepaintNeeded((KSvg__Svg*)self);
}

void k_svg__svg_on_repaint_needed(void* self, void (*callback)(void*)) {
    KSvg__Svg_Connect_RepaintNeeded((KSvg__Svg*)self, (intptr_t)callback);
}

void k_svg__svg_size_changed(void* self) {
    KSvg__Svg_SizeChanged((KSvg__Svg*)self);
}

void k_svg__svg_on_size_changed(void* self, void (*callback)(void*)) {
    KSvg__Svg_Connect_SizeChanged((KSvg__Svg*)self, (intptr_t)callback);
}

void k_svg__svg_image_path_changed(void* self) {
    KSvg__Svg_ImagePathChanged((KSvg__Svg*)self);
}

void k_svg__svg_on_image_path_changed(void* self, void (*callback)(void*)) {
    KSvg__Svg_Connect_ImagePathChanged((KSvg__Svg*)self, (intptr_t)callback);
}

void k_svg__svg_color_hint_changed(void* self) {
    KSvg__Svg_ColorHintChanged((KSvg__Svg*)self);
}

void k_svg__svg_on_color_hint_changed(void* self, void (*callback)(void*)) {
    KSvg__Svg_Connect_ColorHintChanged((KSvg__Svg*)self, (intptr_t)callback);
}

void k_svg__svg_from_current_image_set_changed(void* self, bool fromCurrentImageSet) {
    KSvg__Svg_FromCurrentImageSetChanged((KSvg__Svg*)self, fromCurrentImageSet);
}

void k_svg__svg_on_from_current_image_set_changed(void* self, void (*callback)(void*, bool)) {
    KSvg__Svg_Connect_FromCurrentImageSetChanged((KSvg__Svg*)self, (intptr_t)callback);
}

void k_svg__svg_status_changed(void* self, int32_t status) {
    KSvg__Svg_StatusChanged((KSvg__Svg*)self, status);
}

void k_svg__svg_on_status_changed(void* self, void (*callback)(void*, int32_t)) {
    KSvg__Svg_Connect_StatusChanged((KSvg__Svg*)self, (intptr_t)callback);
}

void k_svg__svg_color_set_changed(void* self, int32_t colorSet) {
    KSvg__Svg_ColorSetChanged((KSvg__Svg*)self, colorSet);
}

void k_svg__svg_on_color_set_changed(void* self, void (*callback)(void*, int32_t)) {
    KSvg__Svg_Connect_ColorSetChanged((KSvg__Svg*)self, (intptr_t)callback);
}

void k_svg__svg_image_set_changed(void* self, void* imageSet) {
    KSvg__Svg_ImageSetChanged((KSvg__Svg*)self, (KSvg__ImageSet*)imageSet);
}

void k_svg__svg_on_image_set_changed(void* self, void (*callback)(void*, void*)) {
    KSvg__Svg_Connect_ImageSetChanged((KSvg__Svg*)self, (intptr_t)callback);
}

const char* k_svg__svg_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_svg__svg_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QPixmap* k_svg__svg_pixmap1(void* self, const char* elementID) {
    return KSvg__Svg_Pixmap1((KSvg__Svg*)self, qstring(elementID));
}

QImage* k_svg__svg_image2(void* self, void* size, const char* elementID) {
    return KSvg__Svg_Image2((KSvg__Svg*)self, (QSize*)size, qstring(elementID));
}

void k_svg__svg_paint32(void* self, void* painter, void* point, const char* elementID) {
    KSvg__Svg_Paint32((KSvg__Svg*)self, (QPainter*)painter, (QPointF*)point, qstring(elementID));
}

void k_svg__svg_paint42(void* self, void* painter, int x, int y, const char* elementID) {
    KSvg__Svg_Paint42((KSvg__Svg*)self, (QPainter*)painter, x, y, qstring(elementID));
}

void k_svg__svg_paint33(void* self, void* painter, void* rect, const char* elementID) {
    KSvg__Svg_Paint33((KSvg__Svg*)self, (QPainter*)painter, (QRectF*)rect, qstring(elementID));
}

void k_svg__svg_paint6(void* self, void* painter, int x, int y, int width, int height, const char* elementID) {
    KSvg__Svg_Paint6((KSvg__Svg*)self, (QPainter*)painter, x, y, width, height, qstring(elementID));
}

bool k_svg__svg_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

void k_svg__svg_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QObject_OnEventFilter((QObject*)self, (intptr_t)callback);
}

bool k_svg__svg_qbase_event_filter(void* self, void* watched, void* event) {
    return QObject_QBaseEventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* k_svg__svg_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_svg__svg_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_svg__svg_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_svg__svg_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_svg__svg_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_svg__svg_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_svg__svg_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_svg__svg_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_svg__svg_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_svg__svg_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_svg__svg_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_svg__svg_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_svg__svg_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_svg__svg_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_svg__svg_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_svg__svg_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_svg__svg_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_svg__svg_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_svg__svg_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_svg__svg_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_svg__svg_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_svg__svg_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_svg__svg_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_svg__svg_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_svg__svg_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_svg__svg_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_svg__svg_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_svg__svg_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_svg__svg_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_svg__svg_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_svg__svg_dynamic_property_names\n");
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

QBindingStorage* k_svg__svg_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_svg__svg_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_svg__svg_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_svg__svg_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_svg__svg_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_svg__svg_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_svg__svg_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_svg__svg_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_svg__svg_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_svg__svg_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_svg__svg_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_svg__svg_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_svg__svg_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_svg__svg_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_svg__svg_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_svg__svg_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_svg__svg_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_svg__svg_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_svg__svg_event(void* self, void* event) {
    return KSvg__Svg_Event((KSvg__Svg*)self, (QEvent*)event);
}

bool k_svg__svg_qbase_event(void* self, void* event) {
    return KSvg__Svg_QBaseEvent((KSvg__Svg*)self, (QEvent*)event);
}

void k_svg__svg_on_event(void* self, bool (*callback)(void*, void*)) {
    KSvg__Svg_OnEvent((KSvg__Svg*)self, (intptr_t)callback);
}

void k_svg__svg_timer_event(void* self, void* event) {
    KSvg__Svg_TimerEvent((KSvg__Svg*)self, (QTimerEvent*)event);
}

void k_svg__svg_qbase_timer_event(void* self, void* event) {
    KSvg__Svg_QBaseTimerEvent((KSvg__Svg*)self, (QTimerEvent*)event);
}

void k_svg__svg_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KSvg__Svg_OnTimerEvent((KSvg__Svg*)self, (intptr_t)callback);
}

void k_svg__svg_child_event(void* self, void* event) {
    KSvg__Svg_ChildEvent((KSvg__Svg*)self, (QChildEvent*)event);
}

void k_svg__svg_qbase_child_event(void* self, void* event) {
    KSvg__Svg_QBaseChildEvent((KSvg__Svg*)self, (QChildEvent*)event);
}

void k_svg__svg_on_child_event(void* self, void (*callback)(void*, void*)) {
    KSvg__Svg_OnChildEvent((KSvg__Svg*)self, (intptr_t)callback);
}

void k_svg__svg_custom_event(void* self, void* event) {
    KSvg__Svg_CustomEvent((KSvg__Svg*)self, (QEvent*)event);
}

void k_svg__svg_qbase_custom_event(void* self, void* event) {
    KSvg__Svg_QBaseCustomEvent((KSvg__Svg*)self, (QEvent*)event);
}

void k_svg__svg_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KSvg__Svg_OnCustomEvent((KSvg__Svg*)self, (intptr_t)callback);
}

void k_svg__svg_connect_notify(void* self, void* signal) {
    KSvg__Svg_ConnectNotify((KSvg__Svg*)self, (QMetaMethod*)signal);
}

void k_svg__svg_qbase_connect_notify(void* self, void* signal) {
    KSvg__Svg_QBaseConnectNotify((KSvg__Svg*)self, (QMetaMethod*)signal);
}

void k_svg__svg_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KSvg__Svg_OnConnectNotify((KSvg__Svg*)self, (intptr_t)callback);
}

void k_svg__svg_disconnect_notify(void* self, void* signal) {
    KSvg__Svg_DisconnectNotify((KSvg__Svg*)self, (QMetaMethod*)signal);
}

void k_svg__svg_qbase_disconnect_notify(void* self, void* signal) {
    KSvg__Svg_QBaseDisconnectNotify((KSvg__Svg*)self, (QMetaMethod*)signal);
}

void k_svg__svg_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KSvg__Svg_OnDisconnectNotify((KSvg__Svg*)self, (intptr_t)callback);
}

QObject* k_svg__svg_sender(void* self) {
    return KSvg__Svg_Sender((KSvg__Svg*)self);
}

QObject* k_svg__svg_qbase_sender(void* self) {
    return KSvg__Svg_QBaseSender((KSvg__Svg*)self);
}

void k_svg__svg_on_sender(void* self, QObject* (*callback)()) {
    KSvg__Svg_OnSender((KSvg__Svg*)self, (intptr_t)callback);
}

int32_t k_svg__svg_sender_signal_index(void* self) {
    return KSvg__Svg_SenderSignalIndex((KSvg__Svg*)self);
}

int32_t k_svg__svg_qbase_sender_signal_index(void* self) {
    return KSvg__Svg_QBaseSenderSignalIndex((KSvg__Svg*)self);
}

void k_svg__svg_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KSvg__Svg_OnSenderSignalIndex((KSvg__Svg*)self, (intptr_t)callback);
}

int32_t k_svg__svg_receivers(void* self, const char* signal) {
    return KSvg__Svg_Receivers((KSvg__Svg*)self, signal);
}

int32_t k_svg__svg_qbase_receivers(void* self, const char* signal) {
    return KSvg__Svg_QBaseReceivers((KSvg__Svg*)self, signal);
}

void k_svg__svg_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KSvg__Svg_OnReceivers((KSvg__Svg*)self, (intptr_t)callback);
}

bool k_svg__svg_is_signal_connected(void* self, void* signal) {
    return KSvg__Svg_IsSignalConnected((KSvg__Svg*)self, (QMetaMethod*)signal);
}

bool k_svg__svg_qbase_is_signal_connected(void* self, void* signal) {
    return KSvg__Svg_QBaseIsSignalConnected((KSvg__Svg*)self, (QMetaMethod*)signal);
}

void k_svg__svg_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KSvg__Svg_OnIsSignalConnected((KSvg__Svg*)self, (intptr_t)callback);
}

void k_svg__svg_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_svg__svg_delete(void* self) {
    KSvg__Svg_Delete((KSvg__Svg*)(self));
}
