#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqopenglvertexarrayobject.hpp"
#include "libqopenglvertexarrayobject.h"

QOpenGLVertexArrayObject* q_openglvertexarrayobject_new() {
    return QOpenGLVertexArrayObject_new();
}

QOpenGLVertexArrayObject* q_openglvertexarrayobject_new2(void* parent) {
    return QOpenGLVertexArrayObject_new2((QObject*)parent);
}

const QMetaObject* q_openglvertexarrayobject_meta_object(void* self) {
    return QOpenGLVertexArrayObject_MetaObject((QOpenGLVertexArrayObject*)self);
}

void q_openglvertexarrayobject_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QOpenGLVertexArrayObject_OnMetaObject((QOpenGLVertexArrayObject*)self, (intptr_t)callback);
}

const QMetaObject* q_openglvertexarrayobject_qbase_meta_object(void* self) {
    return QOpenGLVertexArrayObject_QBaseMetaObject((QOpenGLVertexArrayObject*)self);
}

void* q_openglvertexarrayobject_metacast(void* self, const char* param1) {
    return QOpenGLVertexArrayObject_Metacast((QOpenGLVertexArrayObject*)self, param1);
}

void q_openglvertexarrayobject_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QOpenGLVertexArrayObject_OnMetacast((QOpenGLVertexArrayObject*)self, (intptr_t)callback);
}

void* q_openglvertexarrayobject_qbase_metacast(void* self, const char* param1) {
    return QOpenGLVertexArrayObject_QBaseMetacast((QOpenGLVertexArrayObject*)self, param1);
}

int32_t q_openglvertexarrayobject_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QOpenGLVertexArrayObject_Metacall((QOpenGLVertexArrayObject*)self, param1, param2, param3);
}

void q_openglvertexarrayobject_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QOpenGLVertexArrayObject_OnMetacall((QOpenGLVertexArrayObject*)self, (intptr_t)callback);
}

int32_t q_openglvertexarrayobject_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QOpenGLVertexArrayObject_QBaseMetacall((QOpenGLVertexArrayObject*)self, param1, param2, param3);
}

const char* q_openglvertexarrayobject_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_openglvertexarrayobject_create(void* self) {
    return QOpenGLVertexArrayObject_Create((QOpenGLVertexArrayObject*)self);
}

void q_openglvertexarrayobject_destroy(void* self) {
    QOpenGLVertexArrayObject_Destroy((QOpenGLVertexArrayObject*)self);
}

bool q_openglvertexarrayobject_is_created(void* self) {
    return QOpenGLVertexArrayObject_IsCreated((QOpenGLVertexArrayObject*)self);
}

uint32_t q_openglvertexarrayobject_object_id(void* self) {
    return QOpenGLVertexArrayObject_ObjectId((QOpenGLVertexArrayObject*)self);
}

void q_openglvertexarrayobject_bind(void* self) {
    QOpenGLVertexArrayObject_Bind((QOpenGLVertexArrayObject*)self);
}

void q_openglvertexarrayobject_release(void* self) {
    QOpenGLVertexArrayObject_Release((QOpenGLVertexArrayObject*)self);
}

const char* q_openglvertexarrayobject_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_openglvertexarrayobject_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_openglvertexarrayobject_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_openglvertexarrayobject_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_openglvertexarrayobject_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_openglvertexarrayobject_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_openglvertexarrayobject_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_openglvertexarrayobject_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_openglvertexarrayobject_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_openglvertexarrayobject_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_openglvertexarrayobject_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_openglvertexarrayobject_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_openglvertexarrayobject_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_openglvertexarrayobject_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_openglvertexarrayobject_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_openglvertexarrayobject_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_openglvertexarrayobject_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_openglvertexarrayobject_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_openglvertexarrayobject_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_openglvertexarrayobject_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_openglvertexarrayobject_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_openglvertexarrayobject_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_openglvertexarrayobject_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_openglvertexarrayobject_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_openglvertexarrayobject_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_openglvertexarrayobject_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_openglvertexarrayobject_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_openglvertexarrayobject_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_openglvertexarrayobject_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_openglvertexarrayobject_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_openglvertexarrayobject_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_openglvertexarrayobject_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_openglvertexarrayobject_dynamic_property_names\n");
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

QBindingStorage* q_openglvertexarrayobject_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_openglvertexarrayobject_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_openglvertexarrayobject_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_openglvertexarrayobject_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_openglvertexarrayobject_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_openglvertexarrayobject_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_openglvertexarrayobject_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_openglvertexarrayobject_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_openglvertexarrayobject_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_openglvertexarrayobject_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_openglvertexarrayobject_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_openglvertexarrayobject_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_openglvertexarrayobject_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_openglvertexarrayobject_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_openglvertexarrayobject_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_openglvertexarrayobject_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_openglvertexarrayobject_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_openglvertexarrayobject_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_openglvertexarrayobject_event(void* self, void* event) {
    return QOpenGLVertexArrayObject_Event((QOpenGLVertexArrayObject*)self, (QEvent*)event);
}

bool q_openglvertexarrayobject_qbase_event(void* self, void* event) {
    return QOpenGLVertexArrayObject_QBaseEvent((QOpenGLVertexArrayObject*)self, (QEvent*)event);
}

void q_openglvertexarrayobject_on_event(void* self, bool (*callback)(void*, void*)) {
    QOpenGLVertexArrayObject_OnEvent((QOpenGLVertexArrayObject*)self, (intptr_t)callback);
}

bool q_openglvertexarrayobject_event_filter(void* self, void* watched, void* event) {
    return QOpenGLVertexArrayObject_EventFilter((QOpenGLVertexArrayObject*)self, (QObject*)watched, (QEvent*)event);
}

bool q_openglvertexarrayobject_qbase_event_filter(void* self, void* watched, void* event) {
    return QOpenGLVertexArrayObject_QBaseEventFilter((QOpenGLVertexArrayObject*)self, (QObject*)watched, (QEvent*)event);
}

void q_openglvertexarrayobject_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QOpenGLVertexArrayObject_OnEventFilter((QOpenGLVertexArrayObject*)self, (intptr_t)callback);
}

void q_openglvertexarrayobject_timer_event(void* self, void* event) {
    QOpenGLVertexArrayObject_TimerEvent((QOpenGLVertexArrayObject*)self, (QTimerEvent*)event);
}

void q_openglvertexarrayobject_qbase_timer_event(void* self, void* event) {
    QOpenGLVertexArrayObject_QBaseTimerEvent((QOpenGLVertexArrayObject*)self, (QTimerEvent*)event);
}

void q_openglvertexarrayobject_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLVertexArrayObject_OnTimerEvent((QOpenGLVertexArrayObject*)self, (intptr_t)callback);
}

void q_openglvertexarrayobject_child_event(void* self, void* event) {
    QOpenGLVertexArrayObject_ChildEvent((QOpenGLVertexArrayObject*)self, (QChildEvent*)event);
}

void q_openglvertexarrayobject_qbase_child_event(void* self, void* event) {
    QOpenGLVertexArrayObject_QBaseChildEvent((QOpenGLVertexArrayObject*)self, (QChildEvent*)event);
}

void q_openglvertexarrayobject_on_child_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLVertexArrayObject_OnChildEvent((QOpenGLVertexArrayObject*)self, (intptr_t)callback);
}

void q_openglvertexarrayobject_custom_event(void* self, void* event) {
    QOpenGLVertexArrayObject_CustomEvent((QOpenGLVertexArrayObject*)self, (QEvent*)event);
}

void q_openglvertexarrayobject_qbase_custom_event(void* self, void* event) {
    QOpenGLVertexArrayObject_QBaseCustomEvent((QOpenGLVertexArrayObject*)self, (QEvent*)event);
}

void q_openglvertexarrayobject_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLVertexArrayObject_OnCustomEvent((QOpenGLVertexArrayObject*)self, (intptr_t)callback);
}

void q_openglvertexarrayobject_connect_notify(void* self, void* signal) {
    QOpenGLVertexArrayObject_ConnectNotify((QOpenGLVertexArrayObject*)self, (QMetaMethod*)signal);
}

void q_openglvertexarrayobject_qbase_connect_notify(void* self, void* signal) {
    QOpenGLVertexArrayObject_QBaseConnectNotify((QOpenGLVertexArrayObject*)self, (QMetaMethod*)signal);
}

void q_openglvertexarrayobject_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QOpenGLVertexArrayObject_OnConnectNotify((QOpenGLVertexArrayObject*)self, (intptr_t)callback);
}

void q_openglvertexarrayobject_disconnect_notify(void* self, void* signal) {
    QOpenGLVertexArrayObject_DisconnectNotify((QOpenGLVertexArrayObject*)self, (QMetaMethod*)signal);
}

void q_openglvertexarrayobject_qbase_disconnect_notify(void* self, void* signal) {
    QOpenGLVertexArrayObject_QBaseDisconnectNotify((QOpenGLVertexArrayObject*)self, (QMetaMethod*)signal);
}

void q_openglvertexarrayobject_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QOpenGLVertexArrayObject_OnDisconnectNotify((QOpenGLVertexArrayObject*)self, (intptr_t)callback);
}

QObject* q_openglvertexarrayobject_sender(void* self) {
    return QOpenGLVertexArrayObject_Sender((QOpenGLVertexArrayObject*)self);
}

QObject* q_openglvertexarrayobject_qbase_sender(void* self) {
    return QOpenGLVertexArrayObject_QBaseSender((QOpenGLVertexArrayObject*)self);
}

void q_openglvertexarrayobject_on_sender(void* self, QObject* (*callback)()) {
    QOpenGLVertexArrayObject_OnSender((QOpenGLVertexArrayObject*)self, (intptr_t)callback);
}

int32_t q_openglvertexarrayobject_sender_signal_index(void* self) {
    return QOpenGLVertexArrayObject_SenderSignalIndex((QOpenGLVertexArrayObject*)self);
}

int32_t q_openglvertexarrayobject_qbase_sender_signal_index(void* self) {
    return QOpenGLVertexArrayObject_QBaseSenderSignalIndex((QOpenGLVertexArrayObject*)self);
}

void q_openglvertexarrayobject_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QOpenGLVertexArrayObject_OnSenderSignalIndex((QOpenGLVertexArrayObject*)self, (intptr_t)callback);
}

int32_t q_openglvertexarrayobject_receivers(void* self, const char* signal) {
    return QOpenGLVertexArrayObject_Receivers((QOpenGLVertexArrayObject*)self, signal);
}

int32_t q_openglvertexarrayobject_qbase_receivers(void* self, const char* signal) {
    return QOpenGLVertexArrayObject_QBaseReceivers((QOpenGLVertexArrayObject*)self, signal);
}

void q_openglvertexarrayobject_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QOpenGLVertexArrayObject_OnReceivers((QOpenGLVertexArrayObject*)self, (intptr_t)callback);
}

bool q_openglvertexarrayobject_is_signal_connected(void* self, void* signal) {
    return QOpenGLVertexArrayObject_IsSignalConnected((QOpenGLVertexArrayObject*)self, (QMetaMethod*)signal);
}

bool q_openglvertexarrayobject_qbase_is_signal_connected(void* self, void* signal) {
    return QOpenGLVertexArrayObject_QBaseIsSignalConnected((QOpenGLVertexArrayObject*)self, (QMetaMethod*)signal);
}

void q_openglvertexarrayobject_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QOpenGLVertexArrayObject_OnIsSignalConnected((QOpenGLVertexArrayObject*)self, (intptr_t)callback);
}

void q_openglvertexarrayobject_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_openglvertexarrayobject_delete(void* self) {
    QOpenGLVertexArrayObject_Delete((QOpenGLVertexArrayObject*)(self));
}

QOpenGLVertexArrayObject__Binder* q_openglvertexarrayobject__binder_new(void* v) {
    return QOpenGLVertexArrayObject__Binder_new((QOpenGLVertexArrayObject*)v);
}

void q_openglvertexarrayobject__binder_release(void* self) {
    QOpenGLVertexArrayObject__Binder_Release((QOpenGLVertexArrayObject__Binder*)self);
}

void q_openglvertexarrayobject__binder_rebind(void* self) {
    QOpenGLVertexArrayObject__Binder_Rebind((QOpenGLVertexArrayObject__Binder*)self);
}

void q_openglvertexarrayobject__binder_delete(void* self) {
    QOpenGLVertexArrayObject__Binder_Delete((QOpenGLVertexArrayObject__Binder*)(self));
}
