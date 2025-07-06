#include "../libqbrush.hpp"
#include "../libqevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqpen.hpp"
#include <string.h>
#include "../libqcoreevent.hpp"
#include "libqboxset.hpp"
#include "libqboxset.h"

QBoxSet* q_boxset_new() {
    return QBoxSet_new();
}

QBoxSet* q_boxset_new2(double le, double lq, double m, double uq, double ue) {
    return QBoxSet_new2(le, lq, m, uq, ue);
}

QBoxSet* q_boxset_new3(const char* label) {
    return QBoxSet_new3(qstring(label));
}

QBoxSet* q_boxset_new4(const char* label, void* parent) {
    return QBoxSet_new4(qstring(label), (QObject*)parent);
}

QBoxSet* q_boxset_new5(double le, double lq, double m, double uq, double ue, const char* label) {
    return QBoxSet_new5(le, lq, m, uq, ue, qstring(label));
}

QBoxSet* q_boxset_new6(double le, double lq, double m, double uq, double ue, const char* label, void* parent) {
    return QBoxSet_new6(le, lq, m, uq, ue, qstring(label), (QObject*)parent);
}

const QMetaObject* q_boxset_meta_object(void* self) {
    return QBoxSet_MetaObject((QBoxSet*)self);
}

void* q_boxset_metacast(void* self, const char* param1) {
    return QBoxSet_Metacast((QBoxSet*)self, param1);
}

int32_t q_boxset_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QBoxSet_Metacall((QBoxSet*)self, param1, param2, param3);
}

void q_boxset_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QBoxSet_OnMetacall((QBoxSet*)self, (intptr_t)slot);
}

int32_t q_boxset_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QBoxSet_QBaseMetacall((QBoxSet*)self, param1, param2, param3);
}

const char* q_boxset_tr(const char* s) {
    libqt_string _str = QBoxSet_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_boxset_append(void* self, double value) {
    QBoxSet_Append((QBoxSet*)self, value);
}

void q_boxset_append_with_values(void* self, libqt_list values) {
    QBoxSet_AppendWithValues((QBoxSet*)self, values);
}

void q_boxset_clear(void* self) {
    QBoxSet_Clear((QBoxSet*)self);
}

void q_boxset_set_label(void* self, const char* label) {
    QBoxSet_SetLabel((QBoxSet*)self, qstring(label));
}

const char* q_boxset_label(void* self) {
    libqt_string _str = QBoxSet_Label((QBoxSet*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QBoxSet* q_boxset_operator_shift_left(void* self, double* value) {
    return QBoxSet_OperatorShiftLeft((QBoxSet*)self, value);
}

void q_boxset_set_value(void* self, int index, double value) {
    QBoxSet_SetValue((QBoxSet*)self, index, value);
}

double q_boxset_at(void* self, int index) {
    return QBoxSet_At((QBoxSet*)self, index);
}

double q_boxset_operator_subscript(void* self, int index) {
    return QBoxSet_OperatorSubscript((QBoxSet*)self, index);
}

int32_t q_boxset_count(void* self) {
    return QBoxSet_Count((QBoxSet*)self);
}

void q_boxset_set_pen(void* self, void* pen) {
    QBoxSet_SetPen((QBoxSet*)self, (QPen*)pen);
}

QPen* q_boxset_pen(void* self) {
    return QBoxSet_Pen((QBoxSet*)self);
}

void q_boxset_set_brush(void* self, void* brush) {
    QBoxSet_SetBrush((QBoxSet*)self, (QBrush*)brush);
}

QBrush* q_boxset_brush(void* self) {
    return QBoxSet_Brush((QBoxSet*)self);
}

void q_boxset_clicked(void* self) {
    QBoxSet_Clicked((QBoxSet*)self);
}

void q_boxset_on_clicked(void* self, void (*slot)(void*)) {
    QBoxSet_Connect_Clicked((QBoxSet*)self, (intptr_t)slot);
}

void q_boxset_hovered(void* self, bool status) {
    QBoxSet_Hovered((QBoxSet*)self, status);
}

void q_boxset_on_hovered(void* self, void (*slot)(void*, bool)) {
    QBoxSet_Connect_Hovered((QBoxSet*)self, (intptr_t)slot);
}

void q_boxset_pressed(void* self) {
    QBoxSet_Pressed((QBoxSet*)self);
}

void q_boxset_on_pressed(void* self, void (*slot)(void*)) {
    QBoxSet_Connect_Pressed((QBoxSet*)self, (intptr_t)slot);
}

void q_boxset_released(void* self) {
    QBoxSet_Released((QBoxSet*)self);
}

void q_boxset_on_released(void* self, void (*slot)(void*)) {
    QBoxSet_Connect_Released((QBoxSet*)self, (intptr_t)slot);
}

void q_boxset_double_clicked(void* self) {
    QBoxSet_DoubleClicked((QBoxSet*)self);
}

void q_boxset_on_double_clicked(void* self, void (*slot)(void*)) {
    QBoxSet_Connect_DoubleClicked((QBoxSet*)self, (intptr_t)slot);
}

void q_boxset_pen_changed(void* self) {
    QBoxSet_PenChanged((QBoxSet*)self);
}

void q_boxset_on_pen_changed(void* self, void (*slot)(void*)) {
    QBoxSet_Connect_PenChanged((QBoxSet*)self, (intptr_t)slot);
}

void q_boxset_brush_changed(void* self) {
    QBoxSet_BrushChanged((QBoxSet*)self);
}

void q_boxset_on_brush_changed(void* self, void (*slot)(void*)) {
    QBoxSet_Connect_BrushChanged((QBoxSet*)self, (intptr_t)slot);
}

void q_boxset_values_changed(void* self) {
    QBoxSet_ValuesChanged((QBoxSet*)self);
}

void q_boxset_on_values_changed(void* self, void (*slot)(void*)) {
    QBoxSet_Connect_ValuesChanged((QBoxSet*)self, (intptr_t)slot);
}

void q_boxset_value_changed(void* self, int index) {
    QBoxSet_ValueChanged((QBoxSet*)self, index);
}

void q_boxset_on_value_changed(void* self, void (*slot)(void*, int)) {
    QBoxSet_Connect_ValueChanged((QBoxSet*)self, (intptr_t)slot);
}

void q_boxset_cleared(void* self) {
    QBoxSet_Cleared((QBoxSet*)self);
}

void q_boxset_on_cleared(void* self, void (*slot)(void*)) {
    QBoxSet_Connect_Cleared((QBoxSet*)self, (intptr_t)slot);
}

const char* q_boxset_tr2(const char* s, const char* c) {
    libqt_string _str = QBoxSet_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_boxset_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QBoxSet_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_boxset_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_boxset_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_boxset_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_boxset_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_boxset_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_boxset_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_boxset_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_boxset_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_boxset_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_boxset_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_boxset_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_boxset_kill_timer_with_id(void* self, int64_t id) {
    QObject_KillTimerWithId((QObject*)self, id);
}

libqt_list /* of QObject* */ q_boxset_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_boxset_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_boxset_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_boxset_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_boxset_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_boxset_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_boxset_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_boxset_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_boxset_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_boxset_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_boxset_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_boxset_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_boxset_dynamic_property_names(void* self) {
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

QBindingStorage* q_boxset_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_boxset_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_boxset_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_boxset_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_boxset_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_boxset_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_boxset_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_boxset_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_boxset_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_boxset_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_boxset_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_boxset_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_boxset_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_boxset_event(void* self, void* event) {
    return QBoxSet_Event((QBoxSet*)self, (QEvent*)event);
}

bool q_boxset_qbase_event(void* self, void* event) {
    return QBoxSet_QBaseEvent((QBoxSet*)self, (QEvent*)event);
}

void q_boxset_on_event(void* self, bool (*slot)(void*, void*)) {
    QBoxSet_OnEvent((QBoxSet*)self, (intptr_t)slot);
}

bool q_boxset_event_filter(void* self, void* watched, void* event) {
    return QBoxSet_EventFilter((QBoxSet*)self, (QObject*)watched, (QEvent*)event);
}

bool q_boxset_qbase_event_filter(void* self, void* watched, void* event) {
    return QBoxSet_QBaseEventFilter((QBoxSet*)self, (QObject*)watched, (QEvent*)event);
}

void q_boxset_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QBoxSet_OnEventFilter((QBoxSet*)self, (intptr_t)slot);
}

void q_boxset_timer_event(void* self, void* event) {
    QBoxSet_TimerEvent((QBoxSet*)self, (QTimerEvent*)event);
}

void q_boxset_qbase_timer_event(void* self, void* event) {
    QBoxSet_QBaseTimerEvent((QBoxSet*)self, (QTimerEvent*)event);
}

void q_boxset_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QBoxSet_OnTimerEvent((QBoxSet*)self, (intptr_t)slot);
}

void q_boxset_child_event(void* self, void* event) {
    QBoxSet_ChildEvent((QBoxSet*)self, (QChildEvent*)event);
}

void q_boxset_qbase_child_event(void* self, void* event) {
    QBoxSet_QBaseChildEvent((QBoxSet*)self, (QChildEvent*)event);
}

void q_boxset_on_child_event(void* self, void (*slot)(void*, void*)) {
    QBoxSet_OnChildEvent((QBoxSet*)self, (intptr_t)slot);
}

void q_boxset_custom_event(void* self, void* event) {
    QBoxSet_CustomEvent((QBoxSet*)self, (QEvent*)event);
}

void q_boxset_qbase_custom_event(void* self, void* event) {
    QBoxSet_QBaseCustomEvent((QBoxSet*)self, (QEvent*)event);
}

void q_boxset_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QBoxSet_OnCustomEvent((QBoxSet*)self, (intptr_t)slot);
}

void q_boxset_connect_notify(void* self, void* signal) {
    QBoxSet_ConnectNotify((QBoxSet*)self, (QMetaMethod*)signal);
}

void q_boxset_qbase_connect_notify(void* self, void* signal) {
    QBoxSet_QBaseConnectNotify((QBoxSet*)self, (QMetaMethod*)signal);
}

void q_boxset_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QBoxSet_OnConnectNotify((QBoxSet*)self, (intptr_t)slot);
}

void q_boxset_disconnect_notify(void* self, void* signal) {
    QBoxSet_DisconnectNotify((QBoxSet*)self, (QMetaMethod*)signal);
}

void q_boxset_qbase_disconnect_notify(void* self, void* signal) {
    QBoxSet_QBaseDisconnectNotify((QBoxSet*)self, (QMetaMethod*)signal);
}

void q_boxset_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QBoxSet_OnDisconnectNotify((QBoxSet*)self, (intptr_t)slot);
}

QObject* q_boxset_sender(void* self) {
    return QBoxSet_Sender((QBoxSet*)self);
}

QObject* q_boxset_qbase_sender(void* self) {
    return QBoxSet_QBaseSender((QBoxSet*)self);
}

void q_boxset_on_sender(void* self, QObject* (*slot)()) {
    QBoxSet_OnSender((QBoxSet*)self, (intptr_t)slot);
}

int32_t q_boxset_sender_signal_index(void* self) {
    return QBoxSet_SenderSignalIndex((QBoxSet*)self);
}

int32_t q_boxset_qbase_sender_signal_index(void* self) {
    return QBoxSet_QBaseSenderSignalIndex((QBoxSet*)self);
}

void q_boxset_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QBoxSet_OnSenderSignalIndex((QBoxSet*)self, (intptr_t)slot);
}

int32_t q_boxset_receivers(void* self, const char* signal) {
    return QBoxSet_Receivers((QBoxSet*)self, signal);
}

int32_t q_boxset_qbase_receivers(void* self, const char* signal) {
    return QBoxSet_QBaseReceivers((QBoxSet*)self, signal);
}

void q_boxset_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QBoxSet_OnReceivers((QBoxSet*)self, (intptr_t)slot);
}

bool q_boxset_is_signal_connected(void* self, void* signal) {
    return QBoxSet_IsSignalConnected((QBoxSet*)self, (QMetaMethod*)signal);
}

bool q_boxset_qbase_is_signal_connected(void* self, void* signal) {
    return QBoxSet_QBaseIsSignalConnected((QBoxSet*)self, (QMetaMethod*)signal);
}

void q_boxset_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QBoxSet_OnIsSignalConnected((QBoxSet*)self, (intptr_t)slot);
}

void q_boxset_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_boxset_delete(void* self) {
    QBoxSet_Delete((QBoxSet*)(self));
}
