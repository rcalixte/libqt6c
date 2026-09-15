#include "../libqcoreevent.hpp"
#include "libqjsvalue.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqqmlengine.hpp"
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "libqqmlcontext.hpp"
#include "libqqmlcontext.h"

QQmlContext* q_qmlcontext_new(void* parent) {
    return QQmlContext_New((QQmlEngine*)parent);
}

QQmlContext* q_qmlcontext_new2(void* parent) {
    return QQmlContext_New2((QQmlContext*)parent);
}

QQmlContext* q_qmlcontext_new3(void* parent, void* objParent) {
    return QQmlContext_New3((QQmlEngine*)parent, (QObject*)objParent);
}

QQmlContext* q_qmlcontext_new4(void* parent, void* objParent) {
    return QQmlContext_New4((QQmlContext*)parent, (QObject*)objParent);
}

const QMetaObject* q_qmlcontext_meta_object(void* self) {
    return QQmlContext_MetaObject((QQmlContext*)self);
}

void q_qmlcontext_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QQmlContext_OnMetaObject((QQmlContext*)self, (intptr_t)callback);
}

const QMetaObject* q_qmlcontext_super_meta_object(void* self) {
    return QQmlContext_SuperMetaObject((QQmlContext*)self);
}

void* q_qmlcontext_metacast(void* self, const char* param1) {
    return QQmlContext_Metacast((QQmlContext*)self, param1);
}

void q_qmlcontext_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QQmlContext_OnMetacast((QQmlContext*)self, (intptr_t)callback);
}

void* q_qmlcontext_super_metacast(void* self, const char* param1) {
    return QQmlContext_SuperMetacast((QQmlContext*)self, param1);
}

int32_t q_qmlcontext_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQmlContext_Metacall((QQmlContext*)self, param1, param2, param3);
}

void q_qmlcontext_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QQmlContext_OnMetacall((QQmlContext*)self, (intptr_t)callback);
}

int32_t q_qmlcontext_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQmlContext_SuperMetacall((QQmlContext*)self, param1, param2, param3);
}

const char* q_qmlcontext_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_qmlcontext_is_valid(void* self) {
    return QQmlContext_IsValid((QQmlContext*)self);
}

QQmlEngine* q_qmlcontext_engine(void* self) {
    return QQmlContext_Engine((QQmlContext*)self);
}

QQmlContext* q_qmlcontext_parent_context(void* self) {
    return QQmlContext_ParentContext((QQmlContext*)self);
}

QObject* q_qmlcontext_context_object(void* self) {
    return QQmlContext_ContextObject((QQmlContext*)self);
}

void q_qmlcontext_set_context_object(void* self, void* contextObject) {
    QQmlContext_SetContextObject((QQmlContext*)self, (QObject*)contextObject);
}

QVariant* q_qmlcontext_context_property(void* self, const char* param1) {
    return QQmlContext_ContextProperty((QQmlContext*)self, qstring(param1));
}

void q_qmlcontext_set_context_property(void* self, const char* param1, void* param2) {
    QQmlContext_SetContextProperty((QQmlContext*)self, qstring(param1), (QObject*)param2);
}

void q_qmlcontext_set_context_property2(void* self, const char* param1, void* param2) {
    QQmlContext_SetContextProperty2((QQmlContext*)self, qstring(param1), (QVariant*)param2);
}

void q_qmlcontext_set_context_properties(void* self, libqt_list /* of QQmlContext__PropertyPair* */ properties) {
    QQmlContext_SetContextProperties((QQmlContext*)self, properties);
}

const char* q_qmlcontext_name_for_object(void* self, void* param1) {
    libqt_string _str = QQmlContext_NameForObject((QQmlContext*)self, (QObject*)param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QObject* q_qmlcontext_object_for_name(void* self, const char* param1) {
    return QQmlContext_ObjectForName((QQmlContext*)self, qstring(param1));
}

QUrl* q_qmlcontext_resolved_url(void* self, void* param1) {
    return QQmlContext_ResolvedUrl((QQmlContext*)self, (QUrl*)param1);
}

void q_qmlcontext_set_base_url(void* self, void* baseUrl) {
    QQmlContext_SetBaseUrl((QQmlContext*)self, (QUrl*)baseUrl);
}

QUrl* q_qmlcontext_base_url(void* self) {
    return QQmlContext_BaseUrl((QQmlContext*)self);
}

QJSValue* q_qmlcontext_imported_script(void* self, const char* name) {
    return QQmlContext_ImportedScript((QQmlContext*)self, qstring(name));
}

const char* q_qmlcontext_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_qmlcontext_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_qmlcontext_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_qmlcontext_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_qmlcontext_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_qmlcontext_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_qmlcontext_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_qmlcontext_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_qmlcontext_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_qmlcontext_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_qmlcontext_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_qmlcontext_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_qmlcontext_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_qmlcontext_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_qmlcontext_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_qmlcontext_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_qmlcontext_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_qmlcontext_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_qmlcontext_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_qmlcontext_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_qmlcontext_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_qmlcontext_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_qmlcontext_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_qmlcontext_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_qmlcontext_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_qmlcontext_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_qmlcontext_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_qmlcontext_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_qmlcontext_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_qmlcontext_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_qmlcontext_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_qmlcontext_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_qmlcontext_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_qmlcontext_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_qmlcontext_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_qmlcontext_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_qmlcontext_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_qmlcontext_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_qmlcontext_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_qmlcontext_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_qmlcontext_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_qmlcontext_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_qmlcontext_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_qmlcontext_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_qmlcontext_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_qmlcontext_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_qmlcontext_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_qmlcontext_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_qmlcontext_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_qmlcontext_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_qmlcontext_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_qmlcontext_event(void* self, void* event) {
    return QQmlContext_Event((QQmlContext*)self, (QEvent*)event);
}

bool q_qmlcontext_super_event(void* self, void* event) {
    return QQmlContext_SuperEvent((QQmlContext*)self, (QEvent*)event);
}

void q_qmlcontext_on_event(void* self, bool (*callback)(void*, void*)) {
    QQmlContext_OnEvent((QQmlContext*)self, (intptr_t)callback);
}

bool q_qmlcontext_event_filter(void* self, void* watched, void* event) {
    return QQmlContext_EventFilter((QQmlContext*)self, (QObject*)watched, (QEvent*)event);
}

bool q_qmlcontext_super_event_filter(void* self, void* watched, void* event) {
    return QQmlContext_SuperEventFilter((QQmlContext*)self, (QObject*)watched, (QEvent*)event);
}

void q_qmlcontext_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QQmlContext_OnEventFilter((QQmlContext*)self, (intptr_t)callback);
}

void q_qmlcontext_timer_event(void* self, void* event) {
    QQmlContext_TimerEvent((QQmlContext*)self, (QTimerEvent*)event);
}

void q_qmlcontext_super_timer_event(void* self, void* event) {
    QQmlContext_SuperTimerEvent((QQmlContext*)self, (QTimerEvent*)event);
}

void q_qmlcontext_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QQmlContext_OnTimerEvent((QQmlContext*)self, (intptr_t)callback);
}

void q_qmlcontext_child_event(void* self, void* event) {
    QQmlContext_ChildEvent((QQmlContext*)self, (QChildEvent*)event);
}

void q_qmlcontext_super_child_event(void* self, void* event) {
    QQmlContext_SuperChildEvent((QQmlContext*)self, (QChildEvent*)event);
}

void q_qmlcontext_on_child_event(void* self, void (*callback)(void*, void*)) {
    QQmlContext_OnChildEvent((QQmlContext*)self, (intptr_t)callback);
}

void q_qmlcontext_custom_event(void* self, void* event) {
    QQmlContext_CustomEvent((QQmlContext*)self, (QEvent*)event);
}

void q_qmlcontext_super_custom_event(void* self, void* event) {
    QQmlContext_SuperCustomEvent((QQmlContext*)self, (QEvent*)event);
}

void q_qmlcontext_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QQmlContext_OnCustomEvent((QQmlContext*)self, (intptr_t)callback);
}

void q_qmlcontext_connect_notify(void* self, void* signal) {
    QQmlContext_ConnectNotify((QQmlContext*)self, (QMetaMethod*)signal);
}

void q_qmlcontext_super_connect_notify(void* self, void* signal) {
    QQmlContext_SuperConnectNotify((QQmlContext*)self, (QMetaMethod*)signal);
}

void q_qmlcontext_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QQmlContext_OnConnectNotify((QQmlContext*)self, (intptr_t)callback);
}

void q_qmlcontext_disconnect_notify(void* self, void* signal) {
    QQmlContext_DisconnectNotify((QQmlContext*)self, (QMetaMethod*)signal);
}

void q_qmlcontext_super_disconnect_notify(void* self, void* signal) {
    QQmlContext_SuperDisconnectNotify((QQmlContext*)self, (QMetaMethod*)signal);
}

void q_qmlcontext_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QQmlContext_OnDisconnectNotify((QQmlContext*)self, (intptr_t)callback);
}

QObject* q_qmlcontext_sender(void* self) {
    return QQmlContext_Sender((QQmlContext*)self);
}

QObject* q_qmlcontext_super_sender(void* self) {
    return QQmlContext_SuperSender((QQmlContext*)self);
}

void q_qmlcontext_on_sender(void* self, QObject* (*callback)()) {
    QQmlContext_OnSender((QQmlContext*)self, (intptr_t)callback);
}

int32_t q_qmlcontext_sender_signal_index(void* self) {
    return QQmlContext_SenderSignalIndex((QQmlContext*)self);
}

int32_t q_qmlcontext_super_sender_signal_index(void* self) {
    return QQmlContext_SuperSenderSignalIndex((QQmlContext*)self);
}

void q_qmlcontext_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QQmlContext_OnSenderSignalIndex((QQmlContext*)self, (intptr_t)callback);
}

int32_t q_qmlcontext_receivers(void* self, const char* signal) {
    return QQmlContext_Receivers((QQmlContext*)self, signal);
}

int32_t q_qmlcontext_super_receivers(void* self, const char* signal) {
    return QQmlContext_SuperReceivers((QQmlContext*)self, signal);
}

void q_qmlcontext_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QQmlContext_OnReceivers((QQmlContext*)self, (intptr_t)callback);
}

bool q_qmlcontext_is_signal_connected(void* self, void* signal) {
    return QQmlContext_IsSignalConnected((QQmlContext*)self, (QMetaMethod*)signal);
}

bool q_qmlcontext_super_is_signal_connected(void* self, void* signal) {
    return QQmlContext_SuperIsSignalConnected((QQmlContext*)self, (QMetaMethod*)signal);
}

void q_qmlcontext_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QQmlContext_OnIsSignalConnected((QQmlContext*)self, (intptr_t)callback);
}

void q_qmlcontext_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_qmlcontext_delete(void* self) {
    QQmlContext_Delete((QQmlContext*)(self));
}

QQmlContext__PropertyPair* q_qmlcontext__propertypair_new() {
    return QQmlContext__PropertyPair_New();
}

QQmlContext__PropertyPair* q_qmlcontext__propertypair_new2(void* param1) {
    return QQmlContext__PropertyPair_New2((QQmlContext__PropertyPair*)param1);
}

const char* q_qmlcontext__propertypair_name(void* self) {
    libqt_string name_str = QQmlContext__PropertyPair_Name((QQmlContext__PropertyPair*)self);
    char* name_ret = qstring_to_char(name_str);
    libqt_string_free(&name_str);
    return name_ret;
}

void q_qmlcontext__propertypair_set_name(void* self, const char* name) {
    QQmlContext__PropertyPair_SetName((QQmlContext__PropertyPair*)self, qstring(name));
}

QVariant* q_qmlcontext__propertypair_value(void* self) {
    return QQmlContext__PropertyPair_Value((QQmlContext__PropertyPair*)self);
}

void q_qmlcontext__propertypair_set_value(void* self, void* value) {
    QQmlContext__PropertyPair_SetValue((QQmlContext__PropertyPair*)self, (QVariant*)value);
}

void q_qmlcontext__propertypair_operator_assign(void* self, void* param1) {
    QQmlContext__PropertyPair_OperatorAssign((QQmlContext__PropertyPair*)self, (QQmlContext__PropertyPair*)param1);
}

void q_qmlcontext__propertypair_delete(void* self) {
    QQmlContext__PropertyPair_Delete((QQmlContext__PropertyPair*)(self));
}
