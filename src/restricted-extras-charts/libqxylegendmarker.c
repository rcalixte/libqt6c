#include "../libqevent.hpp"
#include "libqlegend.hpp"
#include "libqlegendmarker.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include <string.h>
#include "libqxyseries.hpp"
#include "../libqcoreevent.hpp"
#include "libqxylegendmarker.hpp"
#include "libqxylegendmarker.h"

QXYLegendMarker* q_xylegendmarker_new(void* series, void* legend) {
    return QXYLegendMarker_new((QXYSeries*)series, (QLegend*)legend);
}

QXYLegendMarker* q_xylegendmarker_new2(void* series, void* legend, void* parent) {
    return QXYLegendMarker_new2((QXYSeries*)series, (QLegend*)legend, (QObject*)parent);
}

const QMetaObject* q_xylegendmarker_meta_object(void* self) {
    return QXYLegendMarker_MetaObject((QXYLegendMarker*)self);
}

void* q_xylegendmarker_metacast(void* self, const char* param1) {
    return QXYLegendMarker_Metacast((QXYLegendMarker*)self, param1);
}

int32_t q_xylegendmarker_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QXYLegendMarker_Metacall((QXYLegendMarker*)self, param1, param2, param3);
}

void q_xylegendmarker_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QXYLegendMarker_OnMetacall((QXYLegendMarker*)self, (intptr_t)slot);
}

int32_t q_xylegendmarker_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QXYLegendMarker_QBaseMetacall((QXYLegendMarker*)self, param1, param2, param3);
}

const char* q_xylegendmarker_tr(const char* s) {
    libqt_string _str = QXYLegendMarker_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_xylegendmarker_type(void* self) {
    return QXYLegendMarker_Type((QXYLegendMarker*)self);
}

void q_xylegendmarker_on_type(void* self, int64_t (*slot)()) {
    QXYLegendMarker_OnType((QXYLegendMarker*)self, (intptr_t)slot);
}

int64_t q_xylegendmarker_qbase_type(void* self) {
    return QXYLegendMarker_QBaseType((QXYLegendMarker*)self);
}

QXYSeries* q_xylegendmarker_series(void* self) {
    return QXYLegendMarker_Series((QXYLegendMarker*)self);
}

void q_xylegendmarker_on_series(void* self, QXYSeries* (*slot)()) {
    QXYLegendMarker_OnSeries((QXYLegendMarker*)self, (intptr_t)slot);
}

QXYSeries* q_xylegendmarker_qbase_series(void* self) {
    return QXYLegendMarker_QBaseSeries((QXYLegendMarker*)self);
}

const char* q_xylegendmarker_tr2(const char* s, const char* c) {
    libqt_string _str = QXYLegendMarker_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_xylegendmarker_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QXYLegendMarker_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_xylegendmarker_label(void* self) {
    libqt_string _str = QLegendMarker_Label((QLegendMarker*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_xylegendmarker_set_label(void* self, const char* label) {
    QLegendMarker_SetLabel((QLegendMarker*)self, qstring(label));
}

QBrush* q_xylegendmarker_label_brush(void* self) {
    return QLegendMarker_LabelBrush((QLegendMarker*)self);
}

void q_xylegendmarker_set_label_brush(void* self, void* brush) {
    QLegendMarker_SetLabelBrush((QLegendMarker*)self, (QBrush*)brush);
}

QFont* q_xylegendmarker_font(void* self) {
    return QLegendMarker_Font((QLegendMarker*)self);
}

void q_xylegendmarker_set_font(void* self, void* font) {
    QLegendMarker_SetFont((QLegendMarker*)self, (QFont*)font);
}

QPen* q_xylegendmarker_pen(void* self) {
    return QLegendMarker_Pen((QLegendMarker*)self);
}

void q_xylegendmarker_set_pen(void* self, void* pen) {
    QLegendMarker_SetPen((QLegendMarker*)self, (QPen*)pen);
}

QBrush* q_xylegendmarker_brush(void* self) {
    return QLegendMarker_Brush((QLegendMarker*)self);
}

void q_xylegendmarker_set_brush(void* self, void* brush) {
    QLegendMarker_SetBrush((QLegendMarker*)self, (QBrush*)brush);
}

bool q_xylegendmarker_is_visible(void* self) {
    return QLegendMarker_IsVisible((QLegendMarker*)self);
}

void q_xylegendmarker_set_visible(void* self, bool visible) {
    QLegendMarker_SetVisible((QLegendMarker*)self, visible);
}

int64_t q_xylegendmarker_shape(void* self) {
    return QLegendMarker_Shape((QLegendMarker*)self);
}

void q_xylegendmarker_set_shape(void* self, int64_t shape) {
    QLegendMarker_SetShape((QLegendMarker*)self, shape);
}

void q_xylegendmarker_clicked(void* self) {
    QLegendMarker_Clicked((QLegendMarker*)self);
}

void q_xylegendmarker_on_clicked(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_Clicked((QLegendMarker*)self, (intptr_t)slot);
}

void q_xylegendmarker_hovered(void* self, bool status) {
    QLegendMarker_Hovered((QLegendMarker*)self, status);
}

void q_xylegendmarker_on_hovered(void* self, void (*slot)(void*, bool)) {
    QLegendMarker_Connect_Hovered((QLegendMarker*)self, (intptr_t)slot);
}

void q_xylegendmarker_label_changed(void* self) {
    QLegendMarker_LabelChanged((QLegendMarker*)self);
}

void q_xylegendmarker_on_label_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_LabelChanged((QLegendMarker*)self, (intptr_t)slot);
}

void q_xylegendmarker_label_brush_changed(void* self) {
    QLegendMarker_LabelBrushChanged((QLegendMarker*)self);
}

void q_xylegendmarker_on_label_brush_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_LabelBrushChanged((QLegendMarker*)self, (intptr_t)slot);
}

void q_xylegendmarker_font_changed(void* self) {
    QLegendMarker_FontChanged((QLegendMarker*)self);
}

void q_xylegendmarker_on_font_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_FontChanged((QLegendMarker*)self, (intptr_t)slot);
}

void q_xylegendmarker_pen_changed(void* self) {
    QLegendMarker_PenChanged((QLegendMarker*)self);
}

void q_xylegendmarker_on_pen_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_PenChanged((QLegendMarker*)self, (intptr_t)slot);
}

void q_xylegendmarker_brush_changed(void* self) {
    QLegendMarker_BrushChanged((QLegendMarker*)self);
}

void q_xylegendmarker_on_brush_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_BrushChanged((QLegendMarker*)self, (intptr_t)slot);
}

void q_xylegendmarker_visible_changed(void* self) {
    QLegendMarker_VisibleChanged((QLegendMarker*)self);
}

void q_xylegendmarker_on_visible_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_VisibleChanged((QLegendMarker*)self, (intptr_t)slot);
}

void q_xylegendmarker_shape_changed(void* self) {
    QLegendMarker_ShapeChanged((QLegendMarker*)self);
}

void q_xylegendmarker_on_shape_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_ShapeChanged((QLegendMarker*)self, (intptr_t)slot);
}

const char* q_xylegendmarker_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_xylegendmarker_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_xylegendmarker_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_xylegendmarker_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_xylegendmarker_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_xylegendmarker_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_xylegendmarker_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_xylegendmarker_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_xylegendmarker_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_xylegendmarker_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_xylegendmarker_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

libqt_list /* of QObject* */ q_xylegendmarker_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_xylegendmarker_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_xylegendmarker_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_xylegendmarker_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_xylegendmarker_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_xylegendmarker_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_xylegendmarker_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_xylegendmarker_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_xylegendmarker_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_xylegendmarker_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_xylegendmarker_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_xylegendmarker_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_xylegendmarker_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_xylegendmarker_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_xylegendmarker_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_xylegendmarker_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_xylegendmarker_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_xylegendmarker_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_xylegendmarker_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_xylegendmarker_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_xylegendmarker_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_xylegendmarker_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_xylegendmarker_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_xylegendmarker_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_xylegendmarker_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_xylegendmarker_event(void* self, void* event) {
    return QXYLegendMarker_Event((QXYLegendMarker*)self, (QEvent*)event);
}

bool q_xylegendmarker_qbase_event(void* self, void* event) {
    return QXYLegendMarker_QBaseEvent((QXYLegendMarker*)self, (QEvent*)event);
}

void q_xylegendmarker_on_event(void* self, bool (*slot)(void*, void*)) {
    QXYLegendMarker_OnEvent((QXYLegendMarker*)self, (intptr_t)slot);
}

bool q_xylegendmarker_event_filter(void* self, void* watched, void* event) {
    return QXYLegendMarker_EventFilter((QXYLegendMarker*)self, (QObject*)watched, (QEvent*)event);
}

bool q_xylegendmarker_qbase_event_filter(void* self, void* watched, void* event) {
    return QXYLegendMarker_QBaseEventFilter((QXYLegendMarker*)self, (QObject*)watched, (QEvent*)event);
}

void q_xylegendmarker_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QXYLegendMarker_OnEventFilter((QXYLegendMarker*)self, (intptr_t)slot);
}

void q_xylegendmarker_timer_event(void* self, void* event) {
    QXYLegendMarker_TimerEvent((QXYLegendMarker*)self, (QTimerEvent*)event);
}

void q_xylegendmarker_qbase_timer_event(void* self, void* event) {
    QXYLegendMarker_QBaseTimerEvent((QXYLegendMarker*)self, (QTimerEvent*)event);
}

void q_xylegendmarker_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QXYLegendMarker_OnTimerEvent((QXYLegendMarker*)self, (intptr_t)slot);
}

void q_xylegendmarker_child_event(void* self, void* event) {
    QXYLegendMarker_ChildEvent((QXYLegendMarker*)self, (QChildEvent*)event);
}

void q_xylegendmarker_qbase_child_event(void* self, void* event) {
    QXYLegendMarker_QBaseChildEvent((QXYLegendMarker*)self, (QChildEvent*)event);
}

void q_xylegendmarker_on_child_event(void* self, void (*slot)(void*, void*)) {
    QXYLegendMarker_OnChildEvent((QXYLegendMarker*)self, (intptr_t)slot);
}

void q_xylegendmarker_custom_event(void* self, void* event) {
    QXYLegendMarker_CustomEvent((QXYLegendMarker*)self, (QEvent*)event);
}

void q_xylegendmarker_qbase_custom_event(void* self, void* event) {
    QXYLegendMarker_QBaseCustomEvent((QXYLegendMarker*)self, (QEvent*)event);
}

void q_xylegendmarker_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QXYLegendMarker_OnCustomEvent((QXYLegendMarker*)self, (intptr_t)slot);
}

void q_xylegendmarker_connect_notify(void* self, void* signal) {
    QXYLegendMarker_ConnectNotify((QXYLegendMarker*)self, (QMetaMethod*)signal);
}

void q_xylegendmarker_qbase_connect_notify(void* self, void* signal) {
    QXYLegendMarker_QBaseConnectNotify((QXYLegendMarker*)self, (QMetaMethod*)signal);
}

void q_xylegendmarker_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QXYLegendMarker_OnConnectNotify((QXYLegendMarker*)self, (intptr_t)slot);
}

void q_xylegendmarker_disconnect_notify(void* self, void* signal) {
    QXYLegendMarker_DisconnectNotify((QXYLegendMarker*)self, (QMetaMethod*)signal);
}

void q_xylegendmarker_qbase_disconnect_notify(void* self, void* signal) {
    QXYLegendMarker_QBaseDisconnectNotify((QXYLegendMarker*)self, (QMetaMethod*)signal);
}

void q_xylegendmarker_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QXYLegendMarker_OnDisconnectNotify((QXYLegendMarker*)self, (intptr_t)slot);
}

QObject* q_xylegendmarker_sender(void* self) {
    return QXYLegendMarker_Sender((QXYLegendMarker*)self);
}

QObject* q_xylegendmarker_qbase_sender(void* self) {
    return QXYLegendMarker_QBaseSender((QXYLegendMarker*)self);
}

void q_xylegendmarker_on_sender(void* self, QObject* (*slot)()) {
    QXYLegendMarker_OnSender((QXYLegendMarker*)self, (intptr_t)slot);
}

int32_t q_xylegendmarker_sender_signal_index(void* self) {
    return QXYLegendMarker_SenderSignalIndex((QXYLegendMarker*)self);
}

int32_t q_xylegendmarker_qbase_sender_signal_index(void* self) {
    return QXYLegendMarker_QBaseSenderSignalIndex((QXYLegendMarker*)self);
}

void q_xylegendmarker_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QXYLegendMarker_OnSenderSignalIndex((QXYLegendMarker*)self, (intptr_t)slot);
}

int32_t q_xylegendmarker_receivers(void* self, const char* signal) {
    return QXYLegendMarker_Receivers((QXYLegendMarker*)self, signal);
}

int32_t q_xylegendmarker_qbase_receivers(void* self, const char* signal) {
    return QXYLegendMarker_QBaseReceivers((QXYLegendMarker*)self, signal);
}

void q_xylegendmarker_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QXYLegendMarker_OnReceivers((QXYLegendMarker*)self, (intptr_t)slot);
}

bool q_xylegendmarker_is_signal_connected(void* self, void* signal) {
    return QXYLegendMarker_IsSignalConnected((QXYLegendMarker*)self, (QMetaMethod*)signal);
}

bool q_xylegendmarker_qbase_is_signal_connected(void* self, void* signal) {
    return QXYLegendMarker_QBaseIsSignalConnected((QXYLegendMarker*)self, (QMetaMethod*)signal);
}

void q_xylegendmarker_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QXYLegendMarker_OnIsSignalConnected((QXYLegendMarker*)self, (intptr_t)slot);
}

void q_xylegendmarker_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_xylegendmarker_delete(void* self) {
    QXYLegendMarker_Delete((QXYLegendMarker*)(self));
}
