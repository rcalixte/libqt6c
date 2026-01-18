#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqopengldebug.hpp"
#include "libqopengldebug.h"

QOpenGLDebugMessage* q_opengldebugmessage_new() {
    return QOpenGLDebugMessage_new();
}

QOpenGLDebugMessage* q_opengldebugmessage_new2(void* debugMessage) {
    return QOpenGLDebugMessage_new2((QOpenGLDebugMessage*)debugMessage);
}

void q_opengldebugmessage_operator_assign(void* self, void* debugMessage) {
    QOpenGLDebugMessage_OperatorAssign((QOpenGLDebugMessage*)self, (QOpenGLDebugMessage*)debugMessage);
}

void q_opengldebugmessage_swap(void* self, void* other) {
    QOpenGLDebugMessage_Swap((QOpenGLDebugMessage*)self, (QOpenGLDebugMessage*)other);
}

int32_t q_opengldebugmessage_source(void* self) {
    return QOpenGLDebugMessage_Source((QOpenGLDebugMessage*)self);
}

int32_t q_opengldebugmessage_type(void* self) {
    return QOpenGLDebugMessage_Type((QOpenGLDebugMessage*)self);
}

int32_t q_opengldebugmessage_severity(void* self) {
    return QOpenGLDebugMessage_Severity((QOpenGLDebugMessage*)self);
}

uint32_t q_opengldebugmessage_id(void* self) {
    return QOpenGLDebugMessage_Id((QOpenGLDebugMessage*)self);
}

const char* q_opengldebugmessage_message(void* self) {
    libqt_string _str = QOpenGLDebugMessage_Message((QOpenGLDebugMessage*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QOpenGLDebugMessage* q_opengldebugmessage_create_application_message(const char* text) {
    return QOpenGLDebugMessage_CreateApplicationMessage(qstring(text));
}

QOpenGLDebugMessage* q_opengldebugmessage_create_third_party_message(const char* text) {
    return QOpenGLDebugMessage_CreateThirdPartyMessage(qstring(text));
}

bool q_opengldebugmessage_operator_equal(void* self, void* debugMessage) {
    return QOpenGLDebugMessage_OperatorEqual((QOpenGLDebugMessage*)self, (QOpenGLDebugMessage*)debugMessage);
}

bool q_opengldebugmessage_operator_not_equal(void* self, void* debugMessage) {
    return QOpenGLDebugMessage_OperatorNotEqual((QOpenGLDebugMessage*)self, (QOpenGLDebugMessage*)debugMessage);
}

QOpenGLDebugMessage* q_opengldebugmessage_create_application_message2(const char* text, uint32_t id) {
    return QOpenGLDebugMessage_CreateApplicationMessage2(qstring(text), id);
}

QOpenGLDebugMessage* q_opengldebugmessage_create_application_message3(const char* text, uint32_t id, int32_t severity) {
    return QOpenGLDebugMessage_CreateApplicationMessage3(qstring(text), id, severity);
}

QOpenGLDebugMessage* q_opengldebugmessage_create_application_message4(const char* text, uint32_t id, int32_t severity, int32_t type) {
    return QOpenGLDebugMessage_CreateApplicationMessage4(qstring(text), id, severity, type);
}

QOpenGLDebugMessage* q_opengldebugmessage_create_third_party_message2(const char* text, uint32_t id) {
    return QOpenGLDebugMessage_CreateThirdPartyMessage2(qstring(text), id);
}

QOpenGLDebugMessage* q_opengldebugmessage_create_third_party_message3(const char* text, uint32_t id, int32_t severity) {
    return QOpenGLDebugMessage_CreateThirdPartyMessage3(qstring(text), id, severity);
}

QOpenGLDebugMessage* q_opengldebugmessage_create_third_party_message4(const char* text, uint32_t id, int32_t severity, int32_t type) {
    return QOpenGLDebugMessage_CreateThirdPartyMessage4(qstring(text), id, severity, type);
}

void q_opengldebugmessage_delete(void* self) {
    QOpenGLDebugMessage_Delete((QOpenGLDebugMessage*)(self));
}

QOpenGLDebugLogger* q_opengldebuglogger_new() {
    return QOpenGLDebugLogger_new();
}

QOpenGLDebugLogger* q_opengldebuglogger_new2(void* parent) {
    return QOpenGLDebugLogger_new2((QObject*)parent);
}

const QMetaObject* q_opengldebuglogger_meta_object(void* self) {
    return QOpenGLDebugLogger_MetaObject((QOpenGLDebugLogger*)self);
}

void* q_opengldebuglogger_metacast(void* self, const char* param1) {
    return QOpenGLDebugLogger_Metacast((QOpenGLDebugLogger*)self, param1);
}

int32_t q_opengldebuglogger_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QOpenGLDebugLogger_Metacall((QOpenGLDebugLogger*)self, param1, param2, param3);
}

void q_opengldebuglogger_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QOpenGLDebugLogger_OnMetacall((QOpenGLDebugLogger*)self, (intptr_t)callback);
}

int32_t q_opengldebuglogger_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QOpenGLDebugLogger_QBaseMetacall((QOpenGLDebugLogger*)self, param1, param2, param3);
}

const char* q_opengldebuglogger_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_opengldebuglogger_initialize(void* self) {
    return QOpenGLDebugLogger_Initialize((QOpenGLDebugLogger*)self);
}

bool q_opengldebuglogger_is_logging(void* self) {
    return QOpenGLDebugLogger_IsLogging((QOpenGLDebugLogger*)self);
}

int32_t q_opengldebuglogger_logging_mode(void* self) {
    return QOpenGLDebugLogger_LoggingMode((QOpenGLDebugLogger*)self);
}

long long q_opengldebuglogger_maximum_message_length(void* self) {
    return QOpenGLDebugLogger_MaximumMessageLength((QOpenGLDebugLogger*)self);
}

void q_opengldebuglogger_push_group(void* self, const char* name) {
    QOpenGLDebugLogger_PushGroup((QOpenGLDebugLogger*)self, qstring(name));
}

void q_opengldebuglogger_pop_group(void* self) {
    QOpenGLDebugLogger_PopGroup((QOpenGLDebugLogger*)self);
}

void q_opengldebuglogger_enable_messages(void* self) {
    QOpenGLDebugLogger_EnableMessages((QOpenGLDebugLogger*)self);
}

void q_opengldebuglogger_enable_messages2(void* self, libqt_list /* of uint32_t */ ids) {
    QOpenGLDebugLogger_EnableMessages2((QOpenGLDebugLogger*)self, ids);
}

void q_opengldebuglogger_disable_messages(void* self) {
    QOpenGLDebugLogger_DisableMessages((QOpenGLDebugLogger*)self);
}

void q_opengldebuglogger_disable_messages2(void* self, libqt_list /* of uint32_t */ ids) {
    QOpenGLDebugLogger_DisableMessages2((QOpenGLDebugLogger*)self, ids);
}

libqt_list /* of QOpenGLDebugMessage* */ q_opengldebuglogger_logged_messages(void* self) {
    libqt_list _arr = QOpenGLDebugLogger_LoggedMessages((QOpenGLDebugLogger*)self);
    return _arr;
}

void q_opengldebuglogger_log_message(void* self, void* debugMessage) {
    QOpenGLDebugLogger_LogMessage((QOpenGLDebugLogger*)self, (QOpenGLDebugMessage*)debugMessage);
}

void q_opengldebuglogger_start_logging(void* self) {
    QOpenGLDebugLogger_StartLogging((QOpenGLDebugLogger*)self);
}

void q_opengldebuglogger_stop_logging(void* self) {
    QOpenGLDebugLogger_StopLogging((QOpenGLDebugLogger*)self);
}

void q_opengldebuglogger_message_logged(void* self, void* debugMessage) {
    QOpenGLDebugLogger_MessageLogged((QOpenGLDebugLogger*)self, (QOpenGLDebugMessage*)debugMessage);
}

void q_opengldebuglogger_on_message_logged(void* self, void (*callback)(void*, void*)) {
    QOpenGLDebugLogger_Connect_MessageLogged((QOpenGLDebugLogger*)self, (intptr_t)callback);
}

const char* q_opengldebuglogger_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_opengldebuglogger_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_opengldebuglogger_push_group2(void* self, const char* name, uint32_t id) {
    QOpenGLDebugLogger_PushGroup2((QOpenGLDebugLogger*)self, qstring(name), id);
}

void q_opengldebuglogger_push_group3(void* self, const char* name, uint32_t id, int32_t source) {
    QOpenGLDebugLogger_PushGroup3((QOpenGLDebugLogger*)self, qstring(name), id, source);
}

void q_opengldebuglogger_enable_messages1(void* self, int32_t sources) {
    QOpenGLDebugLogger_EnableMessages1((QOpenGLDebugLogger*)self, sources);
}

void q_opengldebuglogger_enable_messages22(void* self, int32_t sources, int32_t types) {
    QOpenGLDebugLogger_EnableMessages22((QOpenGLDebugLogger*)self, sources, types);
}

void q_opengldebuglogger_enable_messages3(void* self, int32_t sources, int32_t types, int32_t severities) {
    QOpenGLDebugLogger_EnableMessages3((QOpenGLDebugLogger*)self, sources, types, severities);
}

void q_opengldebuglogger_enable_messages23(void* self, libqt_list /* of uint32_t */ ids, int32_t sources) {
    QOpenGLDebugLogger_EnableMessages23((QOpenGLDebugLogger*)self, ids, sources);
}

void q_opengldebuglogger_enable_messages32(void* self, libqt_list /* of uint32_t */ ids, int32_t sources, int32_t types) {
    QOpenGLDebugLogger_EnableMessages32((QOpenGLDebugLogger*)self, ids, sources, types);
}

void q_opengldebuglogger_disable_messages1(void* self, int32_t sources) {
    QOpenGLDebugLogger_DisableMessages1((QOpenGLDebugLogger*)self, sources);
}

void q_opengldebuglogger_disable_messages22(void* self, int32_t sources, int32_t types) {
    QOpenGLDebugLogger_DisableMessages22((QOpenGLDebugLogger*)self, sources, types);
}

void q_opengldebuglogger_disable_messages3(void* self, int32_t sources, int32_t types, int32_t severities) {
    QOpenGLDebugLogger_DisableMessages3((QOpenGLDebugLogger*)self, sources, types, severities);
}

void q_opengldebuglogger_disable_messages23(void* self, libqt_list /* of uint32_t */ ids, int32_t sources) {
    QOpenGLDebugLogger_DisableMessages23((QOpenGLDebugLogger*)self, ids, sources);
}

void q_opengldebuglogger_disable_messages32(void* self, libqt_list /* of uint32_t */ ids, int32_t sources, int32_t types) {
    QOpenGLDebugLogger_DisableMessages32((QOpenGLDebugLogger*)self, ids, sources, types);
}

void q_opengldebuglogger_start_logging1(void* self, int32_t loggingMode) {
    QOpenGLDebugLogger_StartLogging1((QOpenGLDebugLogger*)self, loggingMode);
}

const char* q_opengldebuglogger_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_opengldebuglogger_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_opengldebuglogger_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_opengldebuglogger_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_opengldebuglogger_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_opengldebuglogger_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_opengldebuglogger_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_opengldebuglogger_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_opengldebuglogger_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_opengldebuglogger_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_opengldebuglogger_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_opengldebuglogger_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_opengldebuglogger_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_opengldebuglogger_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_opengldebuglogger_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_opengldebuglogger_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_opengldebuglogger_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_opengldebuglogger_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_opengldebuglogger_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_opengldebuglogger_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_opengldebuglogger_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_opengldebuglogger_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_opengldebuglogger_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_opengldebuglogger_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_opengldebuglogger_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_opengldebuglogger_dynamic_property_names\n");
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

QBindingStorage* q_opengldebuglogger_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_opengldebuglogger_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_opengldebuglogger_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_opengldebuglogger_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_opengldebuglogger_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_opengldebuglogger_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_opengldebuglogger_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_opengldebuglogger_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_opengldebuglogger_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_opengldebuglogger_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_opengldebuglogger_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_opengldebuglogger_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_opengldebuglogger_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_opengldebuglogger_event(void* self, void* event) {
    return QOpenGLDebugLogger_Event((QOpenGLDebugLogger*)self, (QEvent*)event);
}

bool q_opengldebuglogger_qbase_event(void* self, void* event) {
    return QOpenGLDebugLogger_QBaseEvent((QOpenGLDebugLogger*)self, (QEvent*)event);
}

void q_opengldebuglogger_on_event(void* self, bool (*callback)(void*, void*)) {
    QOpenGLDebugLogger_OnEvent((QOpenGLDebugLogger*)self, (intptr_t)callback);
}

bool q_opengldebuglogger_event_filter(void* self, void* watched, void* event) {
    return QOpenGLDebugLogger_EventFilter((QOpenGLDebugLogger*)self, (QObject*)watched, (QEvent*)event);
}

bool q_opengldebuglogger_qbase_event_filter(void* self, void* watched, void* event) {
    return QOpenGLDebugLogger_QBaseEventFilter((QOpenGLDebugLogger*)self, (QObject*)watched, (QEvent*)event);
}

void q_opengldebuglogger_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QOpenGLDebugLogger_OnEventFilter((QOpenGLDebugLogger*)self, (intptr_t)callback);
}

void q_opengldebuglogger_timer_event(void* self, void* event) {
    QOpenGLDebugLogger_TimerEvent((QOpenGLDebugLogger*)self, (QTimerEvent*)event);
}

void q_opengldebuglogger_qbase_timer_event(void* self, void* event) {
    QOpenGLDebugLogger_QBaseTimerEvent((QOpenGLDebugLogger*)self, (QTimerEvent*)event);
}

void q_opengldebuglogger_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLDebugLogger_OnTimerEvent((QOpenGLDebugLogger*)self, (intptr_t)callback);
}

void q_opengldebuglogger_child_event(void* self, void* event) {
    QOpenGLDebugLogger_ChildEvent((QOpenGLDebugLogger*)self, (QChildEvent*)event);
}

void q_opengldebuglogger_qbase_child_event(void* self, void* event) {
    QOpenGLDebugLogger_QBaseChildEvent((QOpenGLDebugLogger*)self, (QChildEvent*)event);
}

void q_opengldebuglogger_on_child_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLDebugLogger_OnChildEvent((QOpenGLDebugLogger*)self, (intptr_t)callback);
}

void q_opengldebuglogger_custom_event(void* self, void* event) {
    QOpenGLDebugLogger_CustomEvent((QOpenGLDebugLogger*)self, (QEvent*)event);
}

void q_opengldebuglogger_qbase_custom_event(void* self, void* event) {
    QOpenGLDebugLogger_QBaseCustomEvent((QOpenGLDebugLogger*)self, (QEvent*)event);
}

void q_opengldebuglogger_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLDebugLogger_OnCustomEvent((QOpenGLDebugLogger*)self, (intptr_t)callback);
}

void q_opengldebuglogger_connect_notify(void* self, void* signal) {
    QOpenGLDebugLogger_ConnectNotify((QOpenGLDebugLogger*)self, (QMetaMethod*)signal);
}

void q_opengldebuglogger_qbase_connect_notify(void* self, void* signal) {
    QOpenGLDebugLogger_QBaseConnectNotify((QOpenGLDebugLogger*)self, (QMetaMethod*)signal);
}

void q_opengldebuglogger_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QOpenGLDebugLogger_OnConnectNotify((QOpenGLDebugLogger*)self, (intptr_t)callback);
}

void q_opengldebuglogger_disconnect_notify(void* self, void* signal) {
    QOpenGLDebugLogger_DisconnectNotify((QOpenGLDebugLogger*)self, (QMetaMethod*)signal);
}

void q_opengldebuglogger_qbase_disconnect_notify(void* self, void* signal) {
    QOpenGLDebugLogger_QBaseDisconnectNotify((QOpenGLDebugLogger*)self, (QMetaMethod*)signal);
}

void q_opengldebuglogger_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QOpenGLDebugLogger_OnDisconnectNotify((QOpenGLDebugLogger*)self, (intptr_t)callback);
}

QObject* q_opengldebuglogger_sender(void* self) {
    return QOpenGLDebugLogger_Sender((QOpenGLDebugLogger*)self);
}

QObject* q_opengldebuglogger_qbase_sender(void* self) {
    return QOpenGLDebugLogger_QBaseSender((QOpenGLDebugLogger*)self);
}

void q_opengldebuglogger_on_sender(void* self, QObject* (*callback)()) {
    QOpenGLDebugLogger_OnSender((QOpenGLDebugLogger*)self, (intptr_t)callback);
}

int32_t q_opengldebuglogger_sender_signal_index(void* self) {
    return QOpenGLDebugLogger_SenderSignalIndex((QOpenGLDebugLogger*)self);
}

int32_t q_opengldebuglogger_qbase_sender_signal_index(void* self) {
    return QOpenGLDebugLogger_QBaseSenderSignalIndex((QOpenGLDebugLogger*)self);
}

void q_opengldebuglogger_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QOpenGLDebugLogger_OnSenderSignalIndex((QOpenGLDebugLogger*)self, (intptr_t)callback);
}

int32_t q_opengldebuglogger_receivers(void* self, const char* signal) {
    return QOpenGLDebugLogger_Receivers((QOpenGLDebugLogger*)self, signal);
}

int32_t q_opengldebuglogger_qbase_receivers(void* self, const char* signal) {
    return QOpenGLDebugLogger_QBaseReceivers((QOpenGLDebugLogger*)self, signal);
}

void q_opengldebuglogger_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QOpenGLDebugLogger_OnReceivers((QOpenGLDebugLogger*)self, (intptr_t)callback);
}

bool q_opengldebuglogger_is_signal_connected(void* self, void* signal) {
    return QOpenGLDebugLogger_IsSignalConnected((QOpenGLDebugLogger*)self, (QMetaMethod*)signal);
}

bool q_opengldebuglogger_qbase_is_signal_connected(void* self, void* signal) {
    return QOpenGLDebugLogger_QBaseIsSignalConnected((QOpenGLDebugLogger*)self, (QMetaMethod*)signal);
}

void q_opengldebuglogger_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QOpenGLDebugLogger_OnIsSignalConnected((QOpenGLDebugLogger*)self, (intptr_t)callback);
}

void q_opengldebuglogger_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_opengldebuglogger_delete(void* self) {
    QOpenGLDebugLogger_Delete((QOpenGLDebugLogger*)(self));
}
