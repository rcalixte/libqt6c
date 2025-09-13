#include "libqabstractseries.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqpieslice.hpp"
#include "libqpieseries.hpp"
#include "libqpieseries.h"

QPieSeries* q_pieseries_new() {
    return QPieSeries_new();
}

QPieSeries* q_pieseries_new2(void* parent) {
    return QPieSeries_new2((QObject*)parent);
}

const QMetaObject* q_pieseries_meta_object(void* self) {
    return QPieSeries_MetaObject((QPieSeries*)self);
}

void* q_pieseries_metacast(void* self, const char* param1) {
    return QPieSeries_Metacast((QPieSeries*)self, param1);
}

int32_t q_pieseries_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPieSeries_Metacall((QPieSeries*)self, param1, param2, param3);
}

void q_pieseries_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QPieSeries_OnMetacall((QPieSeries*)self, (intptr_t)callback);
}

int32_t q_pieseries_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPieSeries_QBaseMetacall((QPieSeries*)self, param1, param2, param3);
}

const char* q_pieseries_tr(const char* s) {
    libqt_string _str = QPieSeries_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_pieseries_type(void* self) {
    return QPieSeries_Type((QPieSeries*)self);
}

void q_pieseries_on_type(void* self, int32_t (*callback)()) {
    QPieSeries_OnType((QPieSeries*)self, (intptr_t)callback);
}

int32_t q_pieseries_qbase_type(void* self) {
    return QPieSeries_QBaseType((QPieSeries*)self);
}

bool q_pieseries_append(void* self, void* slice) {
    return QPieSeries_Append((QPieSeries*)self, (QPieSlice*)slice);
}

bool q_pieseries_append2(void* self, libqt_list slices) {
    return QPieSeries_Append2((QPieSeries*)self, slices);
}

QPieSeries* q_pieseries_operator_shift_left(void* self, void* slice) {
    return QPieSeries_OperatorShiftLeft((QPieSeries*)self, (QPieSlice*)slice);
}

QPieSlice* q_pieseries_append3(void* self, const char* label, double value) {
    return QPieSeries_Append3((QPieSeries*)self, qstring(label), value);
}

bool q_pieseries_insert(void* self, int index, void* slice) {
    return QPieSeries_Insert((QPieSeries*)self, index, (QPieSlice*)slice);
}

bool q_pieseries_remove(void* self, void* slice) {
    return QPieSeries_Remove((QPieSeries*)self, (QPieSlice*)slice);
}

bool q_pieseries_take(void* self, void* slice) {
    return QPieSeries_Take((QPieSeries*)self, (QPieSlice*)slice);
}

void q_pieseries_clear(void* self) {
    QPieSeries_Clear((QPieSeries*)self);
}

libqt_list /* of QPieSlice* */ q_pieseries_slices(void* self) {
    libqt_list _arr = QPieSeries_Slices((QPieSeries*)self);
    return _arr;
}

int32_t q_pieseries_count(void* self) {
    return QPieSeries_Count((QPieSeries*)self);
}

bool q_pieseries_is_empty(void* self) {
    return QPieSeries_IsEmpty((QPieSeries*)self);
}

double q_pieseries_sum(void* self) {
    return QPieSeries_Sum((QPieSeries*)self);
}

void q_pieseries_set_hole_size(void* self, double holeSize) {
    QPieSeries_SetHoleSize((QPieSeries*)self, holeSize);
}

double q_pieseries_hole_size(void* self) {
    return QPieSeries_HoleSize((QPieSeries*)self);
}

void q_pieseries_set_horizontal_position(void* self, double relativePosition) {
    QPieSeries_SetHorizontalPosition((QPieSeries*)self, relativePosition);
}

double q_pieseries_horizontal_position(void* self) {
    return QPieSeries_HorizontalPosition((QPieSeries*)self);
}

void q_pieseries_set_vertical_position(void* self, double relativePosition) {
    QPieSeries_SetVerticalPosition((QPieSeries*)self, relativePosition);
}

double q_pieseries_vertical_position(void* self) {
    return QPieSeries_VerticalPosition((QPieSeries*)self);
}

void q_pieseries_set_pie_size(void* self, double relativeSize) {
    QPieSeries_SetPieSize((QPieSeries*)self, relativeSize);
}

double q_pieseries_pie_size(void* self) {
    return QPieSeries_PieSize((QPieSeries*)self);
}

void q_pieseries_set_pie_start_angle(void* self, double startAngle) {
    QPieSeries_SetPieStartAngle((QPieSeries*)self, startAngle);
}

double q_pieseries_pie_start_angle(void* self) {
    return QPieSeries_PieStartAngle((QPieSeries*)self);
}

void q_pieseries_set_pie_end_angle(void* self, double endAngle) {
    QPieSeries_SetPieEndAngle((QPieSeries*)self, endAngle);
}

double q_pieseries_pie_end_angle(void* self) {
    return QPieSeries_PieEndAngle((QPieSeries*)self);
}

void q_pieseries_set_labels_visible(void* self) {
    QPieSeries_SetLabelsVisible((QPieSeries*)self);
}

void q_pieseries_set_labels_position(void* self, int32_t position) {
    QPieSeries_SetLabelsPosition((QPieSeries*)self, position);
}

void q_pieseries_added(void* self, libqt_list slices) {
    QPieSeries_Added((QPieSeries*)self, slices);
}

void q_pieseries_on_added(void* self, void (*callback)(void*, QPieSlice**)) {
    QPieSeries_Connect_Added((QPieSeries*)self, (intptr_t)callback);
}

void q_pieseries_removed(void* self, libqt_list slices) {
    QPieSeries_Removed((QPieSeries*)self, slices);
}

void q_pieseries_on_removed(void* self, void (*callback)(void*, QPieSlice**)) {
    QPieSeries_Connect_Removed((QPieSeries*)self, (intptr_t)callback);
}

void q_pieseries_clicked(void* self, void* slice) {
    QPieSeries_Clicked((QPieSeries*)self, (QPieSlice*)slice);
}

void q_pieseries_on_clicked(void* self, void (*callback)(void*, void*)) {
    QPieSeries_Connect_Clicked((QPieSeries*)self, (intptr_t)callback);
}

void q_pieseries_hovered(void* self, void* slice, bool state) {
    QPieSeries_Hovered((QPieSeries*)self, (QPieSlice*)slice, state);
}

void q_pieseries_on_hovered(void* self, void (*callback)(void*, void*, bool)) {
    QPieSeries_Connect_Hovered((QPieSeries*)self, (intptr_t)callback);
}

void q_pieseries_pressed(void* self, void* slice) {
    QPieSeries_Pressed((QPieSeries*)self, (QPieSlice*)slice);
}

void q_pieseries_on_pressed(void* self, void (*callback)(void*, void*)) {
    QPieSeries_Connect_Pressed((QPieSeries*)self, (intptr_t)callback);
}

void q_pieseries_released(void* self, void* slice) {
    QPieSeries_Released((QPieSeries*)self, (QPieSlice*)slice);
}

void q_pieseries_on_released(void* self, void (*callback)(void*, void*)) {
    QPieSeries_Connect_Released((QPieSeries*)self, (intptr_t)callback);
}

void q_pieseries_double_clicked(void* self, void* slice) {
    QPieSeries_DoubleClicked((QPieSeries*)self, (QPieSlice*)slice);
}

void q_pieseries_on_double_clicked(void* self, void (*callback)(void*, void*)) {
    QPieSeries_Connect_DoubleClicked((QPieSeries*)self, (intptr_t)callback);
}

void q_pieseries_count_changed(void* self) {
    QPieSeries_CountChanged((QPieSeries*)self);
}

void q_pieseries_on_count_changed(void* self, void (*callback)(void*)) {
    QPieSeries_Connect_CountChanged((QPieSeries*)self, (intptr_t)callback);
}

void q_pieseries_sum_changed(void* self) {
    QPieSeries_SumChanged((QPieSeries*)self);
}

void q_pieseries_on_sum_changed(void* self, void (*callback)(void*)) {
    QPieSeries_Connect_SumChanged((QPieSeries*)self, (intptr_t)callback);
}

const char* q_pieseries_tr2(const char* s, const char* c) {
    libqt_string _str = QPieSeries_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_pieseries_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QPieSeries_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pieseries_set_labels_visible1(void* self, bool visible) {
    QPieSeries_SetLabelsVisible1((QPieSeries*)self, visible);
}

void q_pieseries_set_name(void* self, const char* name) {
    QAbstractSeries_SetName((QAbstractSeries*)self, qstring(name));
}

const char* q_pieseries_name(void* self) {
    libqt_string _str = QAbstractSeries_Name((QAbstractSeries*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pieseries_set_visible(void* self) {
    QAbstractSeries_SetVisible((QAbstractSeries*)self);
}

bool q_pieseries_is_visible(void* self) {
    return QAbstractSeries_IsVisible((QAbstractSeries*)self);
}

double q_pieseries_opacity(void* self) {
    return QAbstractSeries_Opacity((QAbstractSeries*)self);
}

void q_pieseries_set_opacity(void* self, double opacity) {
    QAbstractSeries_SetOpacity((QAbstractSeries*)self, opacity);
}

void q_pieseries_set_use_open_g_l(void* self) {
    QAbstractSeries_SetUseOpenGL((QAbstractSeries*)self);
}

bool q_pieseries_use_open_g_l(void* self) {
    return QAbstractSeries_UseOpenGL((QAbstractSeries*)self);
}

QChart* q_pieseries_chart(void* self) {
    return QAbstractSeries_Chart((QAbstractSeries*)self);
}

bool q_pieseries_attach_axis(void* self, void* axis) {
    return QAbstractSeries_AttachAxis((QAbstractSeries*)self, (QAbstractAxis*)axis);
}

bool q_pieseries_detach_axis(void* self, void* axis) {
    return QAbstractSeries_DetachAxis((QAbstractSeries*)self, (QAbstractAxis*)axis);
}

libqt_list /* of QAbstractAxis* */ q_pieseries_attached_axes(void* self) {
    libqt_list _arr = QAbstractSeries_AttachedAxes((QAbstractSeries*)self);
    return _arr;
}

void q_pieseries_show(void* self) {
    QAbstractSeries_Show((QAbstractSeries*)self);
}

void q_pieseries_hide(void* self) {
    QAbstractSeries_Hide((QAbstractSeries*)self);
}

void q_pieseries_name_changed(void* self) {
    QAbstractSeries_NameChanged((QAbstractSeries*)self);
}

void q_pieseries_on_name_changed(void* self, void (*callback)(void*)) {
    QAbstractSeries_Connect_NameChanged((QAbstractSeries*)self, (intptr_t)callback);
}

void q_pieseries_visible_changed(void* self) {
    QAbstractSeries_VisibleChanged((QAbstractSeries*)self);
}

void q_pieseries_on_visible_changed(void* self, void (*callback)(void*)) {
    QAbstractSeries_Connect_VisibleChanged((QAbstractSeries*)self, (intptr_t)callback);
}

void q_pieseries_opacity_changed(void* self) {
    QAbstractSeries_OpacityChanged((QAbstractSeries*)self);
}

void q_pieseries_on_opacity_changed(void* self, void (*callback)(void*)) {
    QAbstractSeries_Connect_OpacityChanged((QAbstractSeries*)self, (intptr_t)callback);
}

void q_pieseries_use_open_g_l_changed(void* self) {
    QAbstractSeries_UseOpenGLChanged((QAbstractSeries*)self);
}

void q_pieseries_on_use_open_g_l_changed(void* self, void (*callback)(void*)) {
    QAbstractSeries_Connect_UseOpenGLChanged((QAbstractSeries*)self, (intptr_t)callback);
}

void q_pieseries_set_visible1(void* self, bool visible) {
    QAbstractSeries_SetVisible1((QAbstractSeries*)self, visible);
}

void q_pieseries_set_use_open_g_l1(void* self, bool enable) {
    QAbstractSeries_SetUseOpenGL1((QAbstractSeries*)self, enable);
}

const char* q_pieseries_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pieseries_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_pieseries_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_pieseries_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_pieseries_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_pieseries_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_pieseries_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_pieseries_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_pieseries_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_pieseries_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_pieseries_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_pieseries_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_pieseries_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_pieseries_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_pieseries_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_pieseries_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_pieseries_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_pieseries_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_pieseries_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_pieseries_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_pieseries_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_pieseries_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_pieseries_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_pieseries_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_pieseries_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_pieseries_dynamic_property_names");
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

QBindingStorage* q_pieseries_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_pieseries_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_pieseries_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_pieseries_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_pieseries_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_pieseries_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_pieseries_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_pieseries_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_pieseries_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_pieseries_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_pieseries_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_pieseries_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_pieseries_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_pieseries_event(void* self, void* event) {
    return QPieSeries_Event((QPieSeries*)self, (QEvent*)event);
}

bool q_pieseries_qbase_event(void* self, void* event) {
    return QPieSeries_QBaseEvent((QPieSeries*)self, (QEvent*)event);
}

void q_pieseries_on_event(void* self, bool (*callback)(void*, void*)) {
    QPieSeries_OnEvent((QPieSeries*)self, (intptr_t)callback);
}

bool q_pieseries_event_filter(void* self, void* watched, void* event) {
    return QPieSeries_EventFilter((QPieSeries*)self, (QObject*)watched, (QEvent*)event);
}

bool q_pieseries_qbase_event_filter(void* self, void* watched, void* event) {
    return QPieSeries_QBaseEventFilter((QPieSeries*)self, (QObject*)watched, (QEvent*)event);
}

void q_pieseries_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QPieSeries_OnEventFilter((QPieSeries*)self, (intptr_t)callback);
}

void q_pieseries_timer_event(void* self, void* event) {
    QPieSeries_TimerEvent((QPieSeries*)self, (QTimerEvent*)event);
}

void q_pieseries_qbase_timer_event(void* self, void* event) {
    QPieSeries_QBaseTimerEvent((QPieSeries*)self, (QTimerEvent*)event);
}

void q_pieseries_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QPieSeries_OnTimerEvent((QPieSeries*)self, (intptr_t)callback);
}

void q_pieseries_child_event(void* self, void* event) {
    QPieSeries_ChildEvent((QPieSeries*)self, (QChildEvent*)event);
}

void q_pieseries_qbase_child_event(void* self, void* event) {
    QPieSeries_QBaseChildEvent((QPieSeries*)self, (QChildEvent*)event);
}

void q_pieseries_on_child_event(void* self, void (*callback)(void*, void*)) {
    QPieSeries_OnChildEvent((QPieSeries*)self, (intptr_t)callback);
}

void q_pieseries_custom_event(void* self, void* event) {
    QPieSeries_CustomEvent((QPieSeries*)self, (QEvent*)event);
}

void q_pieseries_qbase_custom_event(void* self, void* event) {
    QPieSeries_QBaseCustomEvent((QPieSeries*)self, (QEvent*)event);
}

void q_pieseries_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QPieSeries_OnCustomEvent((QPieSeries*)self, (intptr_t)callback);
}

void q_pieseries_connect_notify(void* self, void* signal) {
    QPieSeries_ConnectNotify((QPieSeries*)self, (QMetaMethod*)signal);
}

void q_pieseries_qbase_connect_notify(void* self, void* signal) {
    QPieSeries_QBaseConnectNotify((QPieSeries*)self, (QMetaMethod*)signal);
}

void q_pieseries_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QPieSeries_OnConnectNotify((QPieSeries*)self, (intptr_t)callback);
}

void q_pieseries_disconnect_notify(void* self, void* signal) {
    QPieSeries_DisconnectNotify((QPieSeries*)self, (QMetaMethod*)signal);
}

void q_pieseries_qbase_disconnect_notify(void* self, void* signal) {
    QPieSeries_QBaseDisconnectNotify((QPieSeries*)self, (QMetaMethod*)signal);
}

void q_pieseries_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QPieSeries_OnDisconnectNotify((QPieSeries*)self, (intptr_t)callback);
}

QObject* q_pieseries_sender(void* self) {
    return QPieSeries_Sender((QPieSeries*)self);
}

QObject* q_pieseries_qbase_sender(void* self) {
    return QPieSeries_QBaseSender((QPieSeries*)self);
}

void q_pieseries_on_sender(void* self, QObject* (*callback)()) {
    QPieSeries_OnSender((QPieSeries*)self, (intptr_t)callback);
}

int32_t q_pieseries_sender_signal_index(void* self) {
    return QPieSeries_SenderSignalIndex((QPieSeries*)self);
}

int32_t q_pieseries_qbase_sender_signal_index(void* self) {
    return QPieSeries_QBaseSenderSignalIndex((QPieSeries*)self);
}

void q_pieseries_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QPieSeries_OnSenderSignalIndex((QPieSeries*)self, (intptr_t)callback);
}

int32_t q_pieseries_receivers(void* self, const char* signal) {
    return QPieSeries_Receivers((QPieSeries*)self, signal);
}

int32_t q_pieseries_qbase_receivers(void* self, const char* signal) {
    return QPieSeries_QBaseReceivers((QPieSeries*)self, signal);
}

void q_pieseries_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QPieSeries_OnReceivers((QPieSeries*)self, (intptr_t)callback);
}

bool q_pieseries_is_signal_connected(void* self, void* signal) {
    return QPieSeries_IsSignalConnected((QPieSeries*)self, (QMetaMethod*)signal);
}

bool q_pieseries_qbase_is_signal_connected(void* self, void* signal) {
    return QPieSeries_QBaseIsSignalConnected((QPieSeries*)self, (QMetaMethod*)signal);
}

void q_pieseries_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QPieSeries_OnIsSignalConnected((QPieSeries*)self, (intptr_t)callback);
}

void q_pieseries_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_pieseries_delete(void* self) {
    QPieSeries_Delete((QPieSeries*)(self));
}
