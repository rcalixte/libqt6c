#include "../libqevent.hpp"
#include "libqlegend.hpp"
#include "libqlegendmarker.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "libqpieseries.hpp"
#include "libqpieslice.hpp"
#include <string.h>
#include "../libqcoreevent.hpp"
#include "libqpielegendmarker.hpp"
#include "libqpielegendmarker.h"

QPieLegendMarker* q_pielegendmarker_new(void* series, void* slice, void* legend) {
    return QPieLegendMarker_new((QPieSeries*)series, (QPieSlice*)slice, (QLegend*)legend);
}

QPieLegendMarker* q_pielegendmarker_new2(void* series, void* slice, void* legend, void* parent) {
    return QPieLegendMarker_new2((QPieSeries*)series, (QPieSlice*)slice, (QLegend*)legend, (QObject*)parent);
}

const QMetaObject* q_pielegendmarker_meta_object(void* self) {
    return QPieLegendMarker_MetaObject((QPieLegendMarker*)self);
}

void* q_pielegendmarker_metacast(void* self, const char* param1) {
    return QPieLegendMarker_Metacast((QPieLegendMarker*)self, param1);
}

int32_t q_pielegendmarker_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QPieLegendMarker_Metacall((QPieLegendMarker*)self, param1, param2, param3);
}

void q_pielegendmarker_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QPieLegendMarker_OnMetacall((QPieLegendMarker*)self, (intptr_t)slot);
}

int32_t q_pielegendmarker_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QPieLegendMarker_QBaseMetacall((QPieLegendMarker*)self, param1, param2, param3);
}

const char* q_pielegendmarker_tr(const char* s) {
    libqt_string _str = QPieLegendMarker_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_pielegendmarker_type(void* self) {
    return QPieLegendMarker_Type((QPieLegendMarker*)self);
}

void q_pielegendmarker_on_type(void* self, int64_t (*slot)()) {
    QPieLegendMarker_OnType((QPieLegendMarker*)self, (intptr_t)slot);
}

int64_t q_pielegendmarker_qbase_type(void* self) {
    return QPieLegendMarker_QBaseType((QPieLegendMarker*)self);
}

QPieSeries* q_pielegendmarker_series(void* self) {
    return QPieLegendMarker_Series((QPieLegendMarker*)self);
}

void q_pielegendmarker_on_series(void* self, QPieSeries* (*slot)()) {
    QPieLegendMarker_OnSeries((QPieLegendMarker*)self, (intptr_t)slot);
}

QPieSeries* q_pielegendmarker_qbase_series(void* self) {
    return QPieLegendMarker_QBaseSeries((QPieLegendMarker*)self);
}

QPieSlice* q_pielegendmarker_slice(void* self) {
    return QPieLegendMarker_Slice((QPieLegendMarker*)self);
}

const char* q_pielegendmarker_tr2(const char* s, const char* c) {
    libqt_string _str = QPieLegendMarker_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_pielegendmarker_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QPieLegendMarker_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_pielegendmarker_label(void* self) {
    libqt_string _str = QLegendMarker_Label((QLegendMarker*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pielegendmarker_set_label(void* self, const char* label) {
    QLegendMarker_SetLabel((QLegendMarker*)self, qstring(label));
}

QBrush* q_pielegendmarker_label_brush(void* self) {
    return QLegendMarker_LabelBrush((QLegendMarker*)self);
}

void q_pielegendmarker_set_label_brush(void* self, void* brush) {
    QLegendMarker_SetLabelBrush((QLegendMarker*)self, (QBrush*)brush);
}

QFont* q_pielegendmarker_font(void* self) {
    return QLegendMarker_Font((QLegendMarker*)self);
}

void q_pielegendmarker_set_font(void* self, void* font) {
    QLegendMarker_SetFont((QLegendMarker*)self, (QFont*)font);
}

QPen* q_pielegendmarker_pen(void* self) {
    return QLegendMarker_Pen((QLegendMarker*)self);
}

void q_pielegendmarker_set_pen(void* self, void* pen) {
    QLegendMarker_SetPen((QLegendMarker*)self, (QPen*)pen);
}

QBrush* q_pielegendmarker_brush(void* self) {
    return QLegendMarker_Brush((QLegendMarker*)self);
}

void q_pielegendmarker_set_brush(void* self, void* brush) {
    QLegendMarker_SetBrush((QLegendMarker*)self, (QBrush*)brush);
}

bool q_pielegendmarker_is_visible(void* self) {
    return QLegendMarker_IsVisible((QLegendMarker*)self);
}

void q_pielegendmarker_set_visible(void* self, bool visible) {
    QLegendMarker_SetVisible((QLegendMarker*)self, visible);
}

int64_t q_pielegendmarker_shape(void* self) {
    return QLegendMarker_Shape((QLegendMarker*)self);
}

void q_pielegendmarker_set_shape(void* self, int64_t shape) {
    QLegendMarker_SetShape((QLegendMarker*)self, shape);
}

void q_pielegendmarker_clicked(void* self) {
    QLegendMarker_Clicked((QLegendMarker*)self);
}

void q_pielegendmarker_on_clicked(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_Clicked((QLegendMarker*)self, (intptr_t)slot);
}

void q_pielegendmarker_hovered(void* self, bool status) {
    QLegendMarker_Hovered((QLegendMarker*)self, status);
}

void q_pielegendmarker_on_hovered(void* self, void (*slot)(void*, bool)) {
    QLegendMarker_Connect_Hovered((QLegendMarker*)self, (intptr_t)slot);
}

void q_pielegendmarker_label_changed(void* self) {
    QLegendMarker_LabelChanged((QLegendMarker*)self);
}

void q_pielegendmarker_on_label_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_LabelChanged((QLegendMarker*)self, (intptr_t)slot);
}

void q_pielegendmarker_label_brush_changed(void* self) {
    QLegendMarker_LabelBrushChanged((QLegendMarker*)self);
}

void q_pielegendmarker_on_label_brush_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_LabelBrushChanged((QLegendMarker*)self, (intptr_t)slot);
}

void q_pielegendmarker_font_changed(void* self) {
    QLegendMarker_FontChanged((QLegendMarker*)self);
}

void q_pielegendmarker_on_font_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_FontChanged((QLegendMarker*)self, (intptr_t)slot);
}

void q_pielegendmarker_pen_changed(void* self) {
    QLegendMarker_PenChanged((QLegendMarker*)self);
}

void q_pielegendmarker_on_pen_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_PenChanged((QLegendMarker*)self, (intptr_t)slot);
}

void q_pielegendmarker_brush_changed(void* self) {
    QLegendMarker_BrushChanged((QLegendMarker*)self);
}

void q_pielegendmarker_on_brush_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_BrushChanged((QLegendMarker*)self, (intptr_t)slot);
}

void q_pielegendmarker_visible_changed(void* self) {
    QLegendMarker_VisibleChanged((QLegendMarker*)self);
}

void q_pielegendmarker_on_visible_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_VisibleChanged((QLegendMarker*)self, (intptr_t)slot);
}

void q_pielegendmarker_shape_changed(void* self) {
    QLegendMarker_ShapeChanged((QLegendMarker*)self);
}

void q_pielegendmarker_on_shape_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_ShapeChanged((QLegendMarker*)self, (intptr_t)slot);
}

const char* q_pielegendmarker_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pielegendmarker_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_pielegendmarker_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_pielegendmarker_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_pielegendmarker_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_pielegendmarker_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_pielegendmarker_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_pielegendmarker_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_pielegendmarker_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_pielegendmarker_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_pielegendmarker_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_pielegendmarker_kill_timer_with_id(void* self, int64_t id) {
    QObject_KillTimerWithId((QObject*)self, id);
}

libqt_list /* of QObject* */ q_pielegendmarker_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_pielegendmarker_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_pielegendmarker_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_pielegendmarker_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_pielegendmarker_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_pielegendmarker_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_pielegendmarker_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_pielegendmarker_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_pielegendmarker_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_pielegendmarker_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_pielegendmarker_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_pielegendmarker_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_pielegendmarker_dynamic_property_names(void* self) {
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

QBindingStorage* q_pielegendmarker_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_pielegendmarker_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_pielegendmarker_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_pielegendmarker_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_pielegendmarker_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_pielegendmarker_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_pielegendmarker_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_pielegendmarker_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_pielegendmarker_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_pielegendmarker_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_pielegendmarker_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_pielegendmarker_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_pielegendmarker_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_pielegendmarker_event(void* self, void* event) {
    return QPieLegendMarker_Event((QPieLegendMarker*)self, (QEvent*)event);
}

bool q_pielegendmarker_qbase_event(void* self, void* event) {
    return QPieLegendMarker_QBaseEvent((QPieLegendMarker*)self, (QEvent*)event);
}

void q_pielegendmarker_on_event(void* self, bool (*slot)(void*, void*)) {
    QPieLegendMarker_OnEvent((QPieLegendMarker*)self, (intptr_t)slot);
}

bool q_pielegendmarker_event_filter(void* self, void* watched, void* event) {
    return QPieLegendMarker_EventFilter((QPieLegendMarker*)self, (QObject*)watched, (QEvent*)event);
}

bool q_pielegendmarker_qbase_event_filter(void* self, void* watched, void* event) {
    return QPieLegendMarker_QBaseEventFilter((QPieLegendMarker*)self, (QObject*)watched, (QEvent*)event);
}

void q_pielegendmarker_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QPieLegendMarker_OnEventFilter((QPieLegendMarker*)self, (intptr_t)slot);
}

void q_pielegendmarker_timer_event(void* self, void* event) {
    QPieLegendMarker_TimerEvent((QPieLegendMarker*)self, (QTimerEvent*)event);
}

void q_pielegendmarker_qbase_timer_event(void* self, void* event) {
    QPieLegendMarker_QBaseTimerEvent((QPieLegendMarker*)self, (QTimerEvent*)event);
}

void q_pielegendmarker_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QPieLegendMarker_OnTimerEvent((QPieLegendMarker*)self, (intptr_t)slot);
}

void q_pielegendmarker_child_event(void* self, void* event) {
    QPieLegendMarker_ChildEvent((QPieLegendMarker*)self, (QChildEvent*)event);
}

void q_pielegendmarker_qbase_child_event(void* self, void* event) {
    QPieLegendMarker_QBaseChildEvent((QPieLegendMarker*)self, (QChildEvent*)event);
}

void q_pielegendmarker_on_child_event(void* self, void (*slot)(void*, void*)) {
    QPieLegendMarker_OnChildEvent((QPieLegendMarker*)self, (intptr_t)slot);
}

void q_pielegendmarker_custom_event(void* self, void* event) {
    QPieLegendMarker_CustomEvent((QPieLegendMarker*)self, (QEvent*)event);
}

void q_pielegendmarker_qbase_custom_event(void* self, void* event) {
    QPieLegendMarker_QBaseCustomEvent((QPieLegendMarker*)self, (QEvent*)event);
}

void q_pielegendmarker_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QPieLegendMarker_OnCustomEvent((QPieLegendMarker*)self, (intptr_t)slot);
}

void q_pielegendmarker_connect_notify(void* self, void* signal) {
    QPieLegendMarker_ConnectNotify((QPieLegendMarker*)self, (QMetaMethod*)signal);
}

void q_pielegendmarker_qbase_connect_notify(void* self, void* signal) {
    QPieLegendMarker_QBaseConnectNotify((QPieLegendMarker*)self, (QMetaMethod*)signal);
}

void q_pielegendmarker_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QPieLegendMarker_OnConnectNotify((QPieLegendMarker*)self, (intptr_t)slot);
}

void q_pielegendmarker_disconnect_notify(void* self, void* signal) {
    QPieLegendMarker_DisconnectNotify((QPieLegendMarker*)self, (QMetaMethod*)signal);
}

void q_pielegendmarker_qbase_disconnect_notify(void* self, void* signal) {
    QPieLegendMarker_QBaseDisconnectNotify((QPieLegendMarker*)self, (QMetaMethod*)signal);
}

void q_pielegendmarker_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QPieLegendMarker_OnDisconnectNotify((QPieLegendMarker*)self, (intptr_t)slot);
}

QObject* q_pielegendmarker_sender(void* self) {
    return QPieLegendMarker_Sender((QPieLegendMarker*)self);
}

QObject* q_pielegendmarker_qbase_sender(void* self) {
    return QPieLegendMarker_QBaseSender((QPieLegendMarker*)self);
}

void q_pielegendmarker_on_sender(void* self, QObject* (*slot)()) {
    QPieLegendMarker_OnSender((QPieLegendMarker*)self, (intptr_t)slot);
}

int32_t q_pielegendmarker_sender_signal_index(void* self) {
    return QPieLegendMarker_SenderSignalIndex((QPieLegendMarker*)self);
}

int32_t q_pielegendmarker_qbase_sender_signal_index(void* self) {
    return QPieLegendMarker_QBaseSenderSignalIndex((QPieLegendMarker*)self);
}

void q_pielegendmarker_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QPieLegendMarker_OnSenderSignalIndex((QPieLegendMarker*)self, (intptr_t)slot);
}

int32_t q_pielegendmarker_receivers(void* self, const char* signal) {
    return QPieLegendMarker_Receivers((QPieLegendMarker*)self, signal);
}

int32_t q_pielegendmarker_qbase_receivers(void* self, const char* signal) {
    return QPieLegendMarker_QBaseReceivers((QPieLegendMarker*)self, signal);
}

void q_pielegendmarker_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QPieLegendMarker_OnReceivers((QPieLegendMarker*)self, (intptr_t)slot);
}

bool q_pielegendmarker_is_signal_connected(void* self, void* signal) {
    return QPieLegendMarker_IsSignalConnected((QPieLegendMarker*)self, (QMetaMethod*)signal);
}

bool q_pielegendmarker_qbase_is_signal_connected(void* self, void* signal) {
    return QPieLegendMarker_QBaseIsSignalConnected((QPieLegendMarker*)self, (QMetaMethod*)signal);
}

void q_pielegendmarker_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QPieLegendMarker_OnIsSignalConnected((QPieLegendMarker*)self, (intptr_t)slot);
}

void q_pielegendmarker_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_pielegendmarker_delete(void* self) {
    QPieLegendMarker_Delete((QPieLegendMarker*)(self));
}
