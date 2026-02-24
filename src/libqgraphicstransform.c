#include "libqcoreevent.hpp"
#include "libqmatrix4x4.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqvectornd.hpp"
#include "libqgraphicstransform.hpp"
#include "libqgraphicstransform.h"

QGraphicsTransform* q_graphicstransform_new() {
    return QGraphicsTransform_new();
}

QGraphicsTransform* q_graphicstransform_new2(void* parent) {
    return QGraphicsTransform_new2((QObject*)parent);
}

const QMetaObject* q_graphicstransform_meta_object(void* self) {
    return QGraphicsTransform_MetaObject((QGraphicsTransform*)self);
}

void q_graphicstransform_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QGraphicsTransform_OnMetaObject((QGraphicsTransform*)self, (intptr_t)callback);
}

const QMetaObject* q_graphicstransform_super_meta_object(void* self) {
    return QGraphicsTransform_SuperMetaObject((QGraphicsTransform*)self);
}

void* q_graphicstransform_metacast(void* self, const char* param1) {
    return QGraphicsTransform_Metacast((QGraphicsTransform*)self, param1);
}

void q_graphicstransform_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QGraphicsTransform_OnMetacast((QGraphicsTransform*)self, (intptr_t)callback);
}

void* q_graphicstransform_super_metacast(void* self, const char* param1) {
    return QGraphicsTransform_SuperMetacast((QGraphicsTransform*)self, param1);
}

int32_t q_graphicstransform_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QGraphicsTransform_Metacall((QGraphicsTransform*)self, param1, param2, param3);
}

void q_graphicstransform_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QGraphicsTransform_OnMetacall((QGraphicsTransform*)self, (intptr_t)callback);
}

int32_t q_graphicstransform_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QGraphicsTransform_SuperMetacall((QGraphicsTransform*)self, param1, param2, param3);
}

const char* q_graphicstransform_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicstransform_apply_to(void* self, void* matrix) {
    QGraphicsTransform_ApplyTo((QGraphicsTransform*)self, (QMatrix4x4*)matrix);
}

void q_graphicstransform_on_apply_to(void* self, void (*callback)(void*, void*)) {
    QGraphicsTransform_OnApplyTo((QGraphicsTransform*)self, (intptr_t)callback);
}

void q_graphicstransform_super_apply_to(void* self, void* matrix) {
    QGraphicsTransform_SuperApplyTo((QGraphicsTransform*)self, (QMatrix4x4*)matrix);
}

void q_graphicstransform_update(void* self) {
    QGraphicsTransform_Update((QGraphicsTransform*)self);
}

void q_graphicstransform_on_update(void* self, void (*callback)()) {
    QGraphicsTransform_OnUpdate((QGraphicsTransform*)self, (intptr_t)callback);
}

void q_graphicstransform_super_update(void* self) {
    QGraphicsTransform_SuperUpdate((QGraphicsTransform*)self);
}

const char* q_graphicstransform_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_graphicstransform_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_graphicstransform_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicstransform_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_graphicstransform_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_graphicstransform_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_graphicstransform_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_graphicstransform_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_graphicstransform_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_graphicstransform_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_graphicstransform_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_graphicstransform_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_graphicstransform_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_graphicstransform_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_graphicstransform_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_graphicstransform_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_graphicstransform_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_graphicstransform_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_graphicstransform_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_graphicstransform_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_graphicstransform_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_graphicstransform_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_graphicstransform_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_graphicstransform_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_graphicstransform_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_graphicstransform_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_graphicstransform_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_graphicstransform_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_graphicstransform_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_graphicstransform_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_graphicstransform_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_graphicstransform_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_graphicstransform_dynamic_property_names\n");
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

QBindingStorage* q_graphicstransform_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_graphicstransform_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_graphicstransform_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_graphicstransform_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_graphicstransform_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_graphicstransform_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_graphicstransform_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_graphicstransform_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_graphicstransform_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_graphicstransform_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_graphicstransform_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_graphicstransform_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_graphicstransform_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_graphicstransform_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_graphicstransform_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_graphicstransform_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_graphicstransform_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_graphicstransform_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_graphicstransform_event(void* self, void* event) {
    return QGraphicsTransform_Event((QGraphicsTransform*)self, (QEvent*)event);
}

bool q_graphicstransform_super_event(void* self, void* event) {
    return QGraphicsTransform_SuperEvent((QGraphicsTransform*)self, (QEvent*)event);
}

void q_graphicstransform_on_event(void* self, bool (*callback)(void*, void*)) {
    QGraphicsTransform_OnEvent((QGraphicsTransform*)self, (intptr_t)callback);
}

bool q_graphicstransform_event_filter(void* self, void* watched, void* event) {
    return QGraphicsTransform_EventFilter((QGraphicsTransform*)self, (QObject*)watched, (QEvent*)event);
}

bool q_graphicstransform_super_event_filter(void* self, void* watched, void* event) {
    return QGraphicsTransform_SuperEventFilter((QGraphicsTransform*)self, (QObject*)watched, (QEvent*)event);
}

void q_graphicstransform_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QGraphicsTransform_OnEventFilter((QGraphicsTransform*)self, (intptr_t)callback);
}

void q_graphicstransform_timer_event(void* self, void* event) {
    QGraphicsTransform_TimerEvent((QGraphicsTransform*)self, (QTimerEvent*)event);
}

void q_graphicstransform_super_timer_event(void* self, void* event) {
    QGraphicsTransform_SuperTimerEvent((QGraphicsTransform*)self, (QTimerEvent*)event);
}

void q_graphicstransform_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsTransform_OnTimerEvent((QGraphicsTransform*)self, (intptr_t)callback);
}

void q_graphicstransform_child_event(void* self, void* event) {
    QGraphicsTransform_ChildEvent((QGraphicsTransform*)self, (QChildEvent*)event);
}

void q_graphicstransform_super_child_event(void* self, void* event) {
    QGraphicsTransform_SuperChildEvent((QGraphicsTransform*)self, (QChildEvent*)event);
}

void q_graphicstransform_on_child_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsTransform_OnChildEvent((QGraphicsTransform*)self, (intptr_t)callback);
}

void q_graphicstransform_custom_event(void* self, void* event) {
    QGraphicsTransform_CustomEvent((QGraphicsTransform*)self, (QEvent*)event);
}

void q_graphicstransform_super_custom_event(void* self, void* event) {
    QGraphicsTransform_SuperCustomEvent((QGraphicsTransform*)self, (QEvent*)event);
}

void q_graphicstransform_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsTransform_OnCustomEvent((QGraphicsTransform*)self, (intptr_t)callback);
}

void q_graphicstransform_connect_notify(void* self, void* signal) {
    QGraphicsTransform_ConnectNotify((QGraphicsTransform*)self, (QMetaMethod*)signal);
}

void q_graphicstransform_super_connect_notify(void* self, void* signal) {
    QGraphicsTransform_SuperConnectNotify((QGraphicsTransform*)self, (QMetaMethod*)signal);
}

void q_graphicstransform_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QGraphicsTransform_OnConnectNotify((QGraphicsTransform*)self, (intptr_t)callback);
}

void q_graphicstransform_disconnect_notify(void* self, void* signal) {
    QGraphicsTransform_DisconnectNotify((QGraphicsTransform*)self, (QMetaMethod*)signal);
}

void q_graphicstransform_super_disconnect_notify(void* self, void* signal) {
    QGraphicsTransform_SuperDisconnectNotify((QGraphicsTransform*)self, (QMetaMethod*)signal);
}

void q_graphicstransform_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QGraphicsTransform_OnDisconnectNotify((QGraphicsTransform*)self, (intptr_t)callback);
}

QObject* q_graphicstransform_sender(void* self) {
    return QGraphicsTransform_Sender((QGraphicsTransform*)self);
}

QObject* q_graphicstransform_super_sender(void* self) {
    return QGraphicsTransform_SuperSender((QGraphicsTransform*)self);
}

void q_graphicstransform_on_sender(void* self, QObject* (*callback)()) {
    QGraphicsTransform_OnSender((QGraphicsTransform*)self, (intptr_t)callback);
}

int32_t q_graphicstransform_sender_signal_index(void* self) {
    return QGraphicsTransform_SenderSignalIndex((QGraphicsTransform*)self);
}

int32_t q_graphicstransform_super_sender_signal_index(void* self) {
    return QGraphicsTransform_SuperSenderSignalIndex((QGraphicsTransform*)self);
}

void q_graphicstransform_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QGraphicsTransform_OnSenderSignalIndex((QGraphicsTransform*)self, (intptr_t)callback);
}

int32_t q_graphicstransform_receivers(void* self, const char* signal) {
    return QGraphicsTransform_Receivers((QGraphicsTransform*)self, signal);
}

int32_t q_graphicstransform_super_receivers(void* self, const char* signal) {
    return QGraphicsTransform_SuperReceivers((QGraphicsTransform*)self, signal);
}

void q_graphicstransform_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QGraphicsTransform_OnReceivers((QGraphicsTransform*)self, (intptr_t)callback);
}

bool q_graphicstransform_is_signal_connected(void* self, void* signal) {
    return QGraphicsTransform_IsSignalConnected((QGraphicsTransform*)self, (QMetaMethod*)signal);
}

bool q_graphicstransform_super_is_signal_connected(void* self, void* signal) {
    return QGraphicsTransform_SuperIsSignalConnected((QGraphicsTransform*)self, (QMetaMethod*)signal);
}

void q_graphicstransform_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QGraphicsTransform_OnIsSignalConnected((QGraphicsTransform*)self, (intptr_t)callback);
}

void q_graphicstransform_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_graphicstransform_delete(void* self) {
    QGraphicsTransform_Delete((QGraphicsTransform*)(self));
}

QGraphicsScale* q_graphicsscale_new() {
    return QGraphicsScale_new();
}

QGraphicsScale* q_graphicsscale_new2(void* parent) {
    return QGraphicsScale_new2((QObject*)parent);
}

const QMetaObject* q_graphicsscale_meta_object(void* self) {
    return QGraphicsScale_MetaObject((QGraphicsScale*)self);
}

void q_graphicsscale_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QGraphicsScale_OnMetaObject((QGraphicsScale*)self, (intptr_t)callback);
}

const QMetaObject* q_graphicsscale_super_meta_object(void* self) {
    return QGraphicsScale_SuperMetaObject((QGraphicsScale*)self);
}

void* q_graphicsscale_metacast(void* self, const char* param1) {
    return QGraphicsScale_Metacast((QGraphicsScale*)self, param1);
}

void q_graphicsscale_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QGraphicsScale_OnMetacast((QGraphicsScale*)self, (intptr_t)callback);
}

void* q_graphicsscale_super_metacast(void* self, const char* param1) {
    return QGraphicsScale_SuperMetacast((QGraphicsScale*)self, param1);
}

int32_t q_graphicsscale_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QGraphicsScale_Metacall((QGraphicsScale*)self, param1, param2, param3);
}

void q_graphicsscale_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QGraphicsScale_OnMetacall((QGraphicsScale*)self, (intptr_t)callback);
}

int32_t q_graphicsscale_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QGraphicsScale_SuperMetacall((QGraphicsScale*)self, param1, param2, param3);
}

const char* q_graphicsscale_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QVector3D* q_graphicsscale_origin(void* self) {
    return QGraphicsScale_Origin((QGraphicsScale*)self);
}

void q_graphicsscale_set_origin(void* self, void* point) {
    QGraphicsScale_SetOrigin((QGraphicsScale*)self, (QVector3D*)point);
}

double q_graphicsscale_x_scale(void* self) {
    return QGraphicsScale_XScale((QGraphicsScale*)self);
}

void q_graphicsscale_set_x_scale(void* self, double xScale) {
    QGraphicsScale_SetXScale((QGraphicsScale*)self, xScale);
}

double q_graphicsscale_y_scale(void* self) {
    return QGraphicsScale_YScale((QGraphicsScale*)self);
}

void q_graphicsscale_set_y_scale(void* self, double yScale) {
    QGraphicsScale_SetYScale((QGraphicsScale*)self, yScale);
}

double q_graphicsscale_z_scale(void* self) {
    return QGraphicsScale_ZScale((QGraphicsScale*)self);
}

void q_graphicsscale_set_z_scale(void* self, double zScale) {
    QGraphicsScale_SetZScale((QGraphicsScale*)self, zScale);
}

void q_graphicsscale_apply_to(void* self, void* matrix) {
    QGraphicsScale_ApplyTo((QGraphicsScale*)self, (QMatrix4x4*)matrix);
}

void q_graphicsscale_on_apply_to(void* self, void (*callback)(void*, void*)) {
    QGraphicsScale_OnApplyTo((QGraphicsScale*)self, (intptr_t)callback);
}

void q_graphicsscale_super_apply_to(void* self, void* matrix) {
    QGraphicsScale_SuperApplyTo((QGraphicsScale*)self, (QMatrix4x4*)matrix);
}

void q_graphicsscale_origin_changed(void* self) {
    QGraphicsScale_OriginChanged((QGraphicsScale*)self);
}

void q_graphicsscale_on_origin_changed(void* self, void (*callback)(void*)) {
    QGraphicsScale_Connect_OriginChanged((QGraphicsScale*)self, (intptr_t)callback);
}

void q_graphicsscale_x_scale_changed(void* self) {
    QGraphicsScale_XScaleChanged((QGraphicsScale*)self);
}

void q_graphicsscale_on_x_scale_changed(void* self, void (*callback)(void*)) {
    QGraphicsScale_Connect_XScaleChanged((QGraphicsScale*)self, (intptr_t)callback);
}

void q_graphicsscale_y_scale_changed(void* self) {
    QGraphicsScale_YScaleChanged((QGraphicsScale*)self);
}

void q_graphicsscale_on_y_scale_changed(void* self, void (*callback)(void*)) {
    QGraphicsScale_Connect_YScaleChanged((QGraphicsScale*)self, (intptr_t)callback);
}

void q_graphicsscale_z_scale_changed(void* self) {
    QGraphicsScale_ZScaleChanged((QGraphicsScale*)self);
}

void q_graphicsscale_on_z_scale_changed(void* self, void (*callback)(void*)) {
    QGraphicsScale_Connect_ZScaleChanged((QGraphicsScale*)self, (intptr_t)callback);
}

void q_graphicsscale_scale_changed(void* self) {
    QGraphicsScale_ScaleChanged((QGraphicsScale*)self);
}

void q_graphicsscale_on_scale_changed(void* self, void (*callback)(void*)) {
    QGraphicsScale_Connect_ScaleChanged((QGraphicsScale*)self, (intptr_t)callback);
}

const char* q_graphicsscale_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_graphicsscale_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_graphicsscale_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicsscale_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_graphicsscale_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_graphicsscale_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_graphicsscale_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_graphicsscale_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_graphicsscale_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_graphicsscale_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_graphicsscale_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_graphicsscale_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_graphicsscale_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_graphicsscale_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_graphicsscale_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_graphicsscale_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_graphicsscale_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_graphicsscale_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_graphicsscale_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_graphicsscale_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_graphicsscale_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_graphicsscale_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_graphicsscale_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_graphicsscale_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_graphicsscale_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_graphicsscale_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_graphicsscale_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_graphicsscale_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_graphicsscale_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_graphicsscale_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_graphicsscale_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_graphicsscale_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_graphicsscale_dynamic_property_names\n");
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

QBindingStorage* q_graphicsscale_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_graphicsscale_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_graphicsscale_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_graphicsscale_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_graphicsscale_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_graphicsscale_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_graphicsscale_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_graphicsscale_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_graphicsscale_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_graphicsscale_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_graphicsscale_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_graphicsscale_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_graphicsscale_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_graphicsscale_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_graphicsscale_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_graphicsscale_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_graphicsscale_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_graphicsscale_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_graphicsscale_event(void* self, void* event) {
    return QGraphicsScale_Event((QGraphicsScale*)self, (QEvent*)event);
}

bool q_graphicsscale_super_event(void* self, void* event) {
    return QGraphicsScale_SuperEvent((QGraphicsScale*)self, (QEvent*)event);
}

void q_graphicsscale_on_event(void* self, bool (*callback)(void*, void*)) {
    QGraphicsScale_OnEvent((QGraphicsScale*)self, (intptr_t)callback);
}

bool q_graphicsscale_event_filter(void* self, void* watched, void* event) {
    return QGraphicsScale_EventFilter((QGraphicsScale*)self, (QObject*)watched, (QEvent*)event);
}

bool q_graphicsscale_super_event_filter(void* self, void* watched, void* event) {
    return QGraphicsScale_SuperEventFilter((QGraphicsScale*)self, (QObject*)watched, (QEvent*)event);
}

void q_graphicsscale_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QGraphicsScale_OnEventFilter((QGraphicsScale*)self, (intptr_t)callback);
}

void q_graphicsscale_timer_event(void* self, void* event) {
    QGraphicsScale_TimerEvent((QGraphicsScale*)self, (QTimerEvent*)event);
}

void q_graphicsscale_super_timer_event(void* self, void* event) {
    QGraphicsScale_SuperTimerEvent((QGraphicsScale*)self, (QTimerEvent*)event);
}

void q_graphicsscale_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsScale_OnTimerEvent((QGraphicsScale*)self, (intptr_t)callback);
}

void q_graphicsscale_child_event(void* self, void* event) {
    QGraphicsScale_ChildEvent((QGraphicsScale*)self, (QChildEvent*)event);
}

void q_graphicsscale_super_child_event(void* self, void* event) {
    QGraphicsScale_SuperChildEvent((QGraphicsScale*)self, (QChildEvent*)event);
}

void q_graphicsscale_on_child_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsScale_OnChildEvent((QGraphicsScale*)self, (intptr_t)callback);
}

void q_graphicsscale_custom_event(void* self, void* event) {
    QGraphicsScale_CustomEvent((QGraphicsScale*)self, (QEvent*)event);
}

void q_graphicsscale_super_custom_event(void* self, void* event) {
    QGraphicsScale_SuperCustomEvent((QGraphicsScale*)self, (QEvent*)event);
}

void q_graphicsscale_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsScale_OnCustomEvent((QGraphicsScale*)self, (intptr_t)callback);
}

void q_graphicsscale_connect_notify(void* self, void* signal) {
    QGraphicsScale_ConnectNotify((QGraphicsScale*)self, (QMetaMethod*)signal);
}

void q_graphicsscale_super_connect_notify(void* self, void* signal) {
    QGraphicsScale_SuperConnectNotify((QGraphicsScale*)self, (QMetaMethod*)signal);
}

void q_graphicsscale_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QGraphicsScale_OnConnectNotify((QGraphicsScale*)self, (intptr_t)callback);
}

void q_graphicsscale_disconnect_notify(void* self, void* signal) {
    QGraphicsScale_DisconnectNotify((QGraphicsScale*)self, (QMetaMethod*)signal);
}

void q_graphicsscale_super_disconnect_notify(void* self, void* signal) {
    QGraphicsScale_SuperDisconnectNotify((QGraphicsScale*)self, (QMetaMethod*)signal);
}

void q_graphicsscale_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QGraphicsScale_OnDisconnectNotify((QGraphicsScale*)self, (intptr_t)callback);
}

void q_graphicsscale_update(void* self) {
    QGraphicsScale_Update((QGraphicsScale*)self);
}

void q_graphicsscale_super_update(void* self) {
    QGraphicsScale_SuperUpdate((QGraphicsScale*)self);
}

void q_graphicsscale_on_update(void* self, void (*callback)()) {
    QGraphicsScale_OnUpdate((QGraphicsScale*)self, (intptr_t)callback);
}

QObject* q_graphicsscale_sender(void* self) {
    return QGraphicsScale_Sender((QGraphicsScale*)self);
}

QObject* q_graphicsscale_super_sender(void* self) {
    return QGraphicsScale_SuperSender((QGraphicsScale*)self);
}

void q_graphicsscale_on_sender(void* self, QObject* (*callback)()) {
    QGraphicsScale_OnSender((QGraphicsScale*)self, (intptr_t)callback);
}

int32_t q_graphicsscale_sender_signal_index(void* self) {
    return QGraphicsScale_SenderSignalIndex((QGraphicsScale*)self);
}

int32_t q_graphicsscale_super_sender_signal_index(void* self) {
    return QGraphicsScale_SuperSenderSignalIndex((QGraphicsScale*)self);
}

void q_graphicsscale_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QGraphicsScale_OnSenderSignalIndex((QGraphicsScale*)self, (intptr_t)callback);
}

int32_t q_graphicsscale_receivers(void* self, const char* signal) {
    return QGraphicsScale_Receivers((QGraphicsScale*)self, signal);
}

int32_t q_graphicsscale_super_receivers(void* self, const char* signal) {
    return QGraphicsScale_SuperReceivers((QGraphicsScale*)self, signal);
}

void q_graphicsscale_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QGraphicsScale_OnReceivers((QGraphicsScale*)self, (intptr_t)callback);
}

bool q_graphicsscale_is_signal_connected(void* self, void* signal) {
    return QGraphicsScale_IsSignalConnected((QGraphicsScale*)self, (QMetaMethod*)signal);
}

bool q_graphicsscale_super_is_signal_connected(void* self, void* signal) {
    return QGraphicsScale_SuperIsSignalConnected((QGraphicsScale*)self, (QMetaMethod*)signal);
}

void q_graphicsscale_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QGraphicsScale_OnIsSignalConnected((QGraphicsScale*)self, (intptr_t)callback);
}

void q_graphicsscale_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_graphicsscale_delete(void* self) {
    QGraphicsScale_Delete((QGraphicsScale*)(self));
}

QGraphicsRotation* q_graphicsrotation_new() {
    return QGraphicsRotation_new();
}

QGraphicsRotation* q_graphicsrotation_new2(void* parent) {
    return QGraphicsRotation_new2((QObject*)parent);
}

const QMetaObject* q_graphicsrotation_meta_object(void* self) {
    return QGraphicsRotation_MetaObject((QGraphicsRotation*)self);
}

void q_graphicsrotation_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QGraphicsRotation_OnMetaObject((QGraphicsRotation*)self, (intptr_t)callback);
}

const QMetaObject* q_graphicsrotation_super_meta_object(void* self) {
    return QGraphicsRotation_SuperMetaObject((QGraphicsRotation*)self);
}

void* q_graphicsrotation_metacast(void* self, const char* param1) {
    return QGraphicsRotation_Metacast((QGraphicsRotation*)self, param1);
}

void q_graphicsrotation_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QGraphicsRotation_OnMetacast((QGraphicsRotation*)self, (intptr_t)callback);
}

void* q_graphicsrotation_super_metacast(void* self, const char* param1) {
    return QGraphicsRotation_SuperMetacast((QGraphicsRotation*)self, param1);
}

int32_t q_graphicsrotation_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QGraphicsRotation_Metacall((QGraphicsRotation*)self, param1, param2, param3);
}

void q_graphicsrotation_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QGraphicsRotation_OnMetacall((QGraphicsRotation*)self, (intptr_t)callback);
}

int32_t q_graphicsrotation_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QGraphicsRotation_SuperMetacall((QGraphicsRotation*)self, param1, param2, param3);
}

const char* q_graphicsrotation_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QVector3D* q_graphicsrotation_origin(void* self) {
    return QGraphicsRotation_Origin((QGraphicsRotation*)self);
}

void q_graphicsrotation_set_origin(void* self, void* point) {
    QGraphicsRotation_SetOrigin((QGraphicsRotation*)self, (QVector3D*)point);
}

double q_graphicsrotation_angle(void* self) {
    return QGraphicsRotation_Angle((QGraphicsRotation*)self);
}

void q_graphicsrotation_set_angle(void* self, double angle) {
    QGraphicsRotation_SetAngle((QGraphicsRotation*)self, angle);
}

QVector3D* q_graphicsrotation_axis(void* self) {
    return QGraphicsRotation_Axis((QGraphicsRotation*)self);
}

void q_graphicsrotation_set_axis(void* self, void* axis) {
    QGraphicsRotation_SetAxis((QGraphicsRotation*)self, (QVector3D*)axis);
}

void q_graphicsrotation_set_axis2(void* self, int32_t axis) {
    QGraphicsRotation_SetAxis2((QGraphicsRotation*)self, axis);
}

void q_graphicsrotation_apply_to(void* self, void* matrix) {
    QGraphicsRotation_ApplyTo((QGraphicsRotation*)self, (QMatrix4x4*)matrix);
}

void q_graphicsrotation_on_apply_to(void* self, void (*callback)(void*, void*)) {
    QGraphicsRotation_OnApplyTo((QGraphicsRotation*)self, (intptr_t)callback);
}

void q_graphicsrotation_super_apply_to(void* self, void* matrix) {
    QGraphicsRotation_SuperApplyTo((QGraphicsRotation*)self, (QMatrix4x4*)matrix);
}

void q_graphicsrotation_origin_changed(void* self) {
    QGraphicsRotation_OriginChanged((QGraphicsRotation*)self);
}

void q_graphicsrotation_on_origin_changed(void* self, void (*callback)(void*)) {
    QGraphicsRotation_Connect_OriginChanged((QGraphicsRotation*)self, (intptr_t)callback);
}

void q_graphicsrotation_angle_changed(void* self) {
    QGraphicsRotation_AngleChanged((QGraphicsRotation*)self);
}

void q_graphicsrotation_on_angle_changed(void* self, void (*callback)(void*)) {
    QGraphicsRotation_Connect_AngleChanged((QGraphicsRotation*)self, (intptr_t)callback);
}

void q_graphicsrotation_axis_changed(void* self) {
    QGraphicsRotation_AxisChanged((QGraphicsRotation*)self);
}

void q_graphicsrotation_on_axis_changed(void* self, void (*callback)(void*)) {
    QGraphicsRotation_Connect_AxisChanged((QGraphicsRotation*)self, (intptr_t)callback);
}

const char* q_graphicsrotation_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_graphicsrotation_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_graphicsrotation_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_graphicsrotation_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_graphicsrotation_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_graphicsrotation_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_graphicsrotation_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_graphicsrotation_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_graphicsrotation_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_graphicsrotation_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_graphicsrotation_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_graphicsrotation_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_graphicsrotation_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_graphicsrotation_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_graphicsrotation_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_graphicsrotation_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_graphicsrotation_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_graphicsrotation_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_graphicsrotation_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_graphicsrotation_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_graphicsrotation_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_graphicsrotation_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_graphicsrotation_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_graphicsrotation_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_graphicsrotation_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_graphicsrotation_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_graphicsrotation_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_graphicsrotation_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_graphicsrotation_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_graphicsrotation_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_graphicsrotation_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_graphicsrotation_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_graphicsrotation_dynamic_property_names\n");
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

QBindingStorage* q_graphicsrotation_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_graphicsrotation_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_graphicsrotation_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_graphicsrotation_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_graphicsrotation_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_graphicsrotation_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_graphicsrotation_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_graphicsrotation_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_graphicsrotation_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_graphicsrotation_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_graphicsrotation_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_graphicsrotation_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_graphicsrotation_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_graphicsrotation_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_graphicsrotation_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_graphicsrotation_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_graphicsrotation_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_graphicsrotation_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_graphicsrotation_event(void* self, void* event) {
    return QGraphicsRotation_Event((QGraphicsRotation*)self, (QEvent*)event);
}

bool q_graphicsrotation_super_event(void* self, void* event) {
    return QGraphicsRotation_SuperEvent((QGraphicsRotation*)self, (QEvent*)event);
}

void q_graphicsrotation_on_event(void* self, bool (*callback)(void*, void*)) {
    QGraphicsRotation_OnEvent((QGraphicsRotation*)self, (intptr_t)callback);
}

bool q_graphicsrotation_event_filter(void* self, void* watched, void* event) {
    return QGraphicsRotation_EventFilter((QGraphicsRotation*)self, (QObject*)watched, (QEvent*)event);
}

bool q_graphicsrotation_super_event_filter(void* self, void* watched, void* event) {
    return QGraphicsRotation_SuperEventFilter((QGraphicsRotation*)self, (QObject*)watched, (QEvent*)event);
}

void q_graphicsrotation_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QGraphicsRotation_OnEventFilter((QGraphicsRotation*)self, (intptr_t)callback);
}

void q_graphicsrotation_timer_event(void* self, void* event) {
    QGraphicsRotation_TimerEvent((QGraphicsRotation*)self, (QTimerEvent*)event);
}

void q_graphicsrotation_super_timer_event(void* self, void* event) {
    QGraphicsRotation_SuperTimerEvent((QGraphicsRotation*)self, (QTimerEvent*)event);
}

void q_graphicsrotation_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsRotation_OnTimerEvent((QGraphicsRotation*)self, (intptr_t)callback);
}

void q_graphicsrotation_child_event(void* self, void* event) {
    QGraphicsRotation_ChildEvent((QGraphicsRotation*)self, (QChildEvent*)event);
}

void q_graphicsrotation_super_child_event(void* self, void* event) {
    QGraphicsRotation_SuperChildEvent((QGraphicsRotation*)self, (QChildEvent*)event);
}

void q_graphicsrotation_on_child_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsRotation_OnChildEvent((QGraphicsRotation*)self, (intptr_t)callback);
}

void q_graphicsrotation_custom_event(void* self, void* event) {
    QGraphicsRotation_CustomEvent((QGraphicsRotation*)self, (QEvent*)event);
}

void q_graphicsrotation_super_custom_event(void* self, void* event) {
    QGraphicsRotation_SuperCustomEvent((QGraphicsRotation*)self, (QEvent*)event);
}

void q_graphicsrotation_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QGraphicsRotation_OnCustomEvent((QGraphicsRotation*)self, (intptr_t)callback);
}

void q_graphicsrotation_connect_notify(void* self, void* signal) {
    QGraphicsRotation_ConnectNotify((QGraphicsRotation*)self, (QMetaMethod*)signal);
}

void q_graphicsrotation_super_connect_notify(void* self, void* signal) {
    QGraphicsRotation_SuperConnectNotify((QGraphicsRotation*)self, (QMetaMethod*)signal);
}

void q_graphicsrotation_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QGraphicsRotation_OnConnectNotify((QGraphicsRotation*)self, (intptr_t)callback);
}

void q_graphicsrotation_disconnect_notify(void* self, void* signal) {
    QGraphicsRotation_DisconnectNotify((QGraphicsRotation*)self, (QMetaMethod*)signal);
}

void q_graphicsrotation_super_disconnect_notify(void* self, void* signal) {
    QGraphicsRotation_SuperDisconnectNotify((QGraphicsRotation*)self, (QMetaMethod*)signal);
}

void q_graphicsrotation_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QGraphicsRotation_OnDisconnectNotify((QGraphicsRotation*)self, (intptr_t)callback);
}

void q_graphicsrotation_update(void* self) {
    QGraphicsRotation_Update((QGraphicsRotation*)self);
}

void q_graphicsrotation_super_update(void* self) {
    QGraphicsRotation_SuperUpdate((QGraphicsRotation*)self);
}

void q_graphicsrotation_on_update(void* self, void (*callback)()) {
    QGraphicsRotation_OnUpdate((QGraphicsRotation*)self, (intptr_t)callback);
}

QObject* q_graphicsrotation_sender(void* self) {
    return QGraphicsRotation_Sender((QGraphicsRotation*)self);
}

QObject* q_graphicsrotation_super_sender(void* self) {
    return QGraphicsRotation_SuperSender((QGraphicsRotation*)self);
}

void q_graphicsrotation_on_sender(void* self, QObject* (*callback)()) {
    QGraphicsRotation_OnSender((QGraphicsRotation*)self, (intptr_t)callback);
}

int32_t q_graphicsrotation_sender_signal_index(void* self) {
    return QGraphicsRotation_SenderSignalIndex((QGraphicsRotation*)self);
}

int32_t q_graphicsrotation_super_sender_signal_index(void* self) {
    return QGraphicsRotation_SuperSenderSignalIndex((QGraphicsRotation*)self);
}

void q_graphicsrotation_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QGraphicsRotation_OnSenderSignalIndex((QGraphicsRotation*)self, (intptr_t)callback);
}

int32_t q_graphicsrotation_receivers(void* self, const char* signal) {
    return QGraphicsRotation_Receivers((QGraphicsRotation*)self, signal);
}

int32_t q_graphicsrotation_super_receivers(void* self, const char* signal) {
    return QGraphicsRotation_SuperReceivers((QGraphicsRotation*)self, signal);
}

void q_graphicsrotation_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QGraphicsRotation_OnReceivers((QGraphicsRotation*)self, (intptr_t)callback);
}

bool q_graphicsrotation_is_signal_connected(void* self, void* signal) {
    return QGraphicsRotation_IsSignalConnected((QGraphicsRotation*)self, (QMetaMethod*)signal);
}

bool q_graphicsrotation_super_is_signal_connected(void* self, void* signal) {
    return QGraphicsRotation_SuperIsSignalConnected((QGraphicsRotation*)self, (QMetaMethod*)signal);
}

void q_graphicsrotation_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QGraphicsRotation_OnIsSignalConnected((QGraphicsRotation*)self, (intptr_t)callback);
}

void q_graphicsrotation_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_graphicsrotation_delete(void* self) {
    QGraphicsRotation_Delete((QGraphicsRotation*)(self));
}
