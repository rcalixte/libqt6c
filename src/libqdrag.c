#include "libqcoreevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqmimedata.hpp"
#include "libqobject.hpp"
#include "libqpixmap.hpp"
#include "libqpoint.hpp"
#include "libqdrag.hpp"
#include "libqdrag.h"

QDrag* q_drag_new(void* dragSource) {
    return QDrag_new((QObject*)dragSource);
}

const QMetaObject* q_drag_meta_object(void* self) {
    return QDrag_MetaObject((QDrag*)self);
}

void q_drag_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QDrag_OnMetaObject((QDrag*)self, (intptr_t)callback);
}

const QMetaObject* q_drag_qbase_meta_object(void* self) {
    return QDrag_QBaseMetaObject((QDrag*)self);
}

void* q_drag_metacast(void* self, const char* param1) {
    return QDrag_Metacast((QDrag*)self, param1);
}

void q_drag_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QDrag_OnMetacast((QDrag*)self, (intptr_t)callback);
}

void* q_drag_qbase_metacast(void* self, const char* param1) {
    return QDrag_QBaseMetacast((QDrag*)self, param1);
}

int32_t q_drag_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDrag_Metacall((QDrag*)self, param1, param2, param3);
}

void q_drag_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QDrag_OnMetacall((QDrag*)self, (intptr_t)callback);
}

int32_t q_drag_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDrag_QBaseMetacall((QDrag*)self, param1, param2, param3);
}

const char* q_drag_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_drag_set_mime_data(void* self, void* data) {
    QDrag_SetMimeData((QDrag*)self, (QMimeData*)data);
}

QMimeData* q_drag_mime_data(void* self) {
    return QDrag_MimeData((QDrag*)self);
}

void q_drag_set_pixmap(void* self, void* pixmap) {
    QDrag_SetPixmap((QDrag*)self, (QPixmap*)pixmap);
}

QPixmap* q_drag_pixmap(void* self) {
    return QDrag_Pixmap((QDrag*)self);
}

void q_drag_set_hot_spot(void* self, void* hotspot) {
    QDrag_SetHotSpot((QDrag*)self, (QPoint*)hotspot);
}

QPoint* q_drag_hot_spot(void* self) {
    return QDrag_HotSpot((QDrag*)self);
}

QObject* q_drag_source(void* self) {
    return QDrag_Source((QDrag*)self);
}

QObject* q_drag_target(void* self) {
    return QDrag_Target((QDrag*)self);
}

int32_t q_drag_exec(void* self) {
    return QDrag_Exec((QDrag*)self);
}

int32_t q_drag_exec2(void* self, int32_t supportedActions, int32_t defaultAction) {
    return QDrag_Exec2((QDrag*)self, supportedActions, defaultAction);
}

void q_drag_set_drag_cursor(void* self, void* cursor, int32_t action) {
    QDrag_SetDragCursor((QDrag*)self, (QPixmap*)cursor, action);
}

QPixmap* q_drag_drag_cursor(void* self, int32_t action) {
    return QDrag_DragCursor((QDrag*)self, action);
}

int32_t q_drag_supported_actions(void* self) {
    return QDrag_SupportedActions((QDrag*)self);
}

int32_t q_drag_default_action(void* self) {
    return QDrag_DefaultAction((QDrag*)self);
}

void q_drag_cancel() {
    QDrag_Cancel();
}

void q_drag_action_changed(void* self, int32_t action) {
    QDrag_ActionChanged((QDrag*)self, action);
}

void q_drag_on_action_changed(void* self, void (*callback)(void*, int32_t)) {
    QDrag_Connect_ActionChanged((QDrag*)self, (intptr_t)callback);
}

void q_drag_target_changed(void* self, void* newTarget) {
    QDrag_TargetChanged((QDrag*)self, (QObject*)newTarget);
}

void q_drag_on_target_changed(void* self, void (*callback)(void*, void*)) {
    QDrag_Connect_TargetChanged((QDrag*)self, (intptr_t)callback);
}

const char* q_drag_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_drag_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_drag_exec1(void* self, int32_t supportedActions) {
    return QDrag_Exec1((QDrag*)self, supportedActions);
}

const char* q_drag_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_drag_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_drag_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_drag_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_drag_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_drag_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_drag_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_drag_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_drag_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_drag_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_drag_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_drag_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_drag_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_drag_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_drag_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_drag_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_drag_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_drag_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_drag_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_drag_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_drag_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_drag_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_drag_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_drag_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_drag_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_drag_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_drag_dynamic_property_names\n");
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

QBindingStorage* q_drag_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_drag_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_drag_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_drag_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_drag_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_drag_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_drag_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_drag_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_drag_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_drag_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_drag_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_drag_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_drag_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_drag_event(void* self, void* event) {
    return QDrag_Event((QDrag*)self, (QEvent*)event);
}

bool q_drag_qbase_event(void* self, void* event) {
    return QDrag_QBaseEvent((QDrag*)self, (QEvent*)event);
}

void q_drag_on_event(void* self, bool (*callback)(void*, void*)) {
    QDrag_OnEvent((QDrag*)self, (intptr_t)callback);
}

bool q_drag_event_filter(void* self, void* watched, void* event) {
    return QDrag_EventFilter((QDrag*)self, (QObject*)watched, (QEvent*)event);
}

bool q_drag_qbase_event_filter(void* self, void* watched, void* event) {
    return QDrag_QBaseEventFilter((QDrag*)self, (QObject*)watched, (QEvent*)event);
}

void q_drag_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QDrag_OnEventFilter((QDrag*)self, (intptr_t)callback);
}

void q_drag_timer_event(void* self, void* event) {
    QDrag_TimerEvent((QDrag*)self, (QTimerEvent*)event);
}

void q_drag_qbase_timer_event(void* self, void* event) {
    QDrag_QBaseTimerEvent((QDrag*)self, (QTimerEvent*)event);
}

void q_drag_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QDrag_OnTimerEvent((QDrag*)self, (intptr_t)callback);
}

void q_drag_child_event(void* self, void* event) {
    QDrag_ChildEvent((QDrag*)self, (QChildEvent*)event);
}

void q_drag_qbase_child_event(void* self, void* event) {
    QDrag_QBaseChildEvent((QDrag*)self, (QChildEvent*)event);
}

void q_drag_on_child_event(void* self, void (*callback)(void*, void*)) {
    QDrag_OnChildEvent((QDrag*)self, (intptr_t)callback);
}

void q_drag_custom_event(void* self, void* event) {
    QDrag_CustomEvent((QDrag*)self, (QEvent*)event);
}

void q_drag_qbase_custom_event(void* self, void* event) {
    QDrag_QBaseCustomEvent((QDrag*)self, (QEvent*)event);
}

void q_drag_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QDrag_OnCustomEvent((QDrag*)self, (intptr_t)callback);
}

void q_drag_connect_notify(void* self, void* signal) {
    QDrag_ConnectNotify((QDrag*)self, (QMetaMethod*)signal);
}

void q_drag_qbase_connect_notify(void* self, void* signal) {
    QDrag_QBaseConnectNotify((QDrag*)self, (QMetaMethod*)signal);
}

void q_drag_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QDrag_OnConnectNotify((QDrag*)self, (intptr_t)callback);
}

void q_drag_disconnect_notify(void* self, void* signal) {
    QDrag_DisconnectNotify((QDrag*)self, (QMetaMethod*)signal);
}

void q_drag_qbase_disconnect_notify(void* self, void* signal) {
    QDrag_QBaseDisconnectNotify((QDrag*)self, (QMetaMethod*)signal);
}

void q_drag_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QDrag_OnDisconnectNotify((QDrag*)self, (intptr_t)callback);
}

QObject* q_drag_sender(void* self) {
    return QDrag_Sender((QDrag*)self);
}

QObject* q_drag_qbase_sender(void* self) {
    return QDrag_QBaseSender((QDrag*)self);
}

void q_drag_on_sender(void* self, QObject* (*callback)()) {
    QDrag_OnSender((QDrag*)self, (intptr_t)callback);
}

int32_t q_drag_sender_signal_index(void* self) {
    return QDrag_SenderSignalIndex((QDrag*)self);
}

int32_t q_drag_qbase_sender_signal_index(void* self) {
    return QDrag_QBaseSenderSignalIndex((QDrag*)self);
}

void q_drag_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QDrag_OnSenderSignalIndex((QDrag*)self, (intptr_t)callback);
}

int32_t q_drag_receivers(void* self, const char* signal) {
    return QDrag_Receivers((QDrag*)self, signal);
}

int32_t q_drag_qbase_receivers(void* self, const char* signal) {
    return QDrag_QBaseReceivers((QDrag*)self, signal);
}

void q_drag_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QDrag_OnReceivers((QDrag*)self, (intptr_t)callback);
}

bool q_drag_is_signal_connected(void* self, void* signal) {
    return QDrag_IsSignalConnected((QDrag*)self, (QMetaMethod*)signal);
}

bool q_drag_qbase_is_signal_connected(void* self, void* signal) {
    return QDrag_QBaseIsSignalConnected((QDrag*)self, (QMetaMethod*)signal);
}

void q_drag_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QDrag_OnIsSignalConnected((QDrag*)self, (intptr_t)callback);
}

void q_drag_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_drag_delete(void* self) {
    QDrag_Delete((QDrag*)(self));
}
