#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqqmlcontext.hpp"
#include "libqqmlengine.hpp"
#include "libqqmlerror.hpp"
#include "libqqmlscriptstring.hpp"
#include "../libqvariant.hpp"
#include "libqqmlexpression.hpp"
#include "libqqmlexpression.h"

QQmlExpression* q_qmlexpression_new() {
    return QQmlExpression_New();
}

QQmlExpression* q_qmlexpression_new2(void* param1, void* param2, const char* param3) {
    return QQmlExpression_New2((QQmlContext*)param1, (QObject*)param2, qstring(param3));
}

QQmlExpression* q_qmlexpression_new3(void* param1) {
    return QQmlExpression_New3((QQmlScriptString*)param1);
}

QQmlExpression* q_qmlexpression_new4(void* param1, void* param2, const char* param3, void* param4) {
    return QQmlExpression_New4((QQmlContext*)param1, (QObject*)param2, qstring(param3), (QObject*)param4);
}

QQmlExpression* q_qmlexpression_new5(void* param1, void* param2) {
    return QQmlExpression_New5((QQmlScriptString*)param1, (QQmlContext*)param2);
}

QQmlExpression* q_qmlexpression_new6(void* param1, void* param2, void* param3) {
    return QQmlExpression_New6((QQmlScriptString*)param1, (QQmlContext*)param2, (QObject*)param3);
}

QQmlExpression* q_qmlexpression_new7(void* param1, void* param2, void* param3, void* param4) {
    return QQmlExpression_New7((QQmlScriptString*)param1, (QQmlContext*)param2, (QObject*)param3, (QObject*)param4);
}

const QMetaObject* q_qmlexpression_meta_object(void* self) {
    return QQmlExpression_MetaObject((QQmlExpression*)self);
}

void q_qmlexpression_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QQmlExpression_OnMetaObject((QQmlExpression*)self, (intptr_t)callback);
}

const QMetaObject* q_qmlexpression_super_meta_object(void* self) {
    return QQmlExpression_SuperMetaObject((QQmlExpression*)self);
}

void* q_qmlexpression_metacast(void* self, const char* param1) {
    return QQmlExpression_Metacast((QQmlExpression*)self, param1);
}

void q_qmlexpression_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QQmlExpression_OnMetacast((QQmlExpression*)self, (intptr_t)callback);
}

void* q_qmlexpression_super_metacast(void* self, const char* param1) {
    return QQmlExpression_SuperMetacast((QQmlExpression*)self, param1);
}

int32_t q_qmlexpression_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQmlExpression_Metacall((QQmlExpression*)self, param1, param2, param3);
}

void q_qmlexpression_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QQmlExpression_OnMetacall((QQmlExpression*)self, (intptr_t)callback);
}

int32_t q_qmlexpression_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQmlExpression_SuperMetacall((QQmlExpression*)self, param1, param2, param3);
}

const char* q_qmlexpression_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QQmlEngine* q_qmlexpression_engine(void* self) {
    return QQmlExpression_Engine((QQmlExpression*)self);
}

QQmlContext* q_qmlexpression_context(void* self) {
    return QQmlExpression_Context((QQmlExpression*)self);
}

const char* q_qmlexpression_expression(void* self) {
    libqt_string _str = QQmlExpression_Expression((QQmlExpression*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_qmlexpression_set_expression(void* self, const char* expression) {
    QQmlExpression_SetExpression((QQmlExpression*)self, qstring(expression));
}

bool q_qmlexpression_notify_on_value_changed(void* self) {
    return QQmlExpression_NotifyOnValueChanged((QQmlExpression*)self);
}

void q_qmlexpression_set_notify_on_value_changed(void* self, bool notifyOnValueChanged) {
    QQmlExpression_SetNotifyOnValueChanged((QQmlExpression*)self, notifyOnValueChanged);
}

const char* q_qmlexpression_source_file(void* self) {
    libqt_string _str = QQmlExpression_SourceFile((QQmlExpression*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_qmlexpression_line_number(void* self) {
    return QQmlExpression_LineNumber((QQmlExpression*)self);
}

int32_t q_qmlexpression_column_number(void* self) {
    return QQmlExpression_ColumnNumber((QQmlExpression*)self);
}

void q_qmlexpression_set_source_location(void* self, const char* fileName, int line) {
    QQmlExpression_SetSourceLocation((QQmlExpression*)self, qstring(fileName), line);
}

QObject* q_qmlexpression_scope_object(void* self) {
    return QQmlExpression_ScopeObject((QQmlExpression*)self);
}

bool q_qmlexpression_has_error(void* self) {
    return QQmlExpression_HasError((QQmlExpression*)self);
}

void q_qmlexpression_clear_error(void* self) {
    QQmlExpression_ClearError((QQmlExpression*)self);
}

QQmlError* q_qmlexpression_error(void* self) {
    return QQmlExpression_Error((QQmlExpression*)self);
}

QVariant* q_qmlexpression_evaluate(void* self) {
    return QQmlExpression_Evaluate((QQmlExpression*)self);
}

void q_qmlexpression_value_changed(void* self) {
    QQmlExpression_ValueChanged((QQmlExpression*)self);
}

void q_qmlexpression_on_value_changed(void* self, void (*callback)(void*)) {
    QQmlExpression_Connect_ValueChanged((QQmlExpression*)self, (intptr_t)callback);
}

const char* q_qmlexpression_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_qmlexpression_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_qmlexpression_set_source_location3(void* self, const char* fileName, int line, int column) {
    QQmlExpression_SetSourceLocation3((QQmlExpression*)self, qstring(fileName), line, column);
}

QVariant* q_qmlexpression_evaluate1(void* self, bool* valueIsUndefined) {
    return QQmlExpression_Evaluate1((QQmlExpression*)self, (bool*)valueIsUndefined);
}

const char* q_qmlexpression_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_qmlexpression_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_qmlexpression_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_qmlexpression_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_qmlexpression_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_qmlexpression_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_qmlexpression_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_qmlexpression_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_qmlexpression_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_qmlexpression_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_qmlexpression_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_qmlexpression_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_qmlexpression_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_qmlexpression_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_qmlexpression_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_qmlexpression_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_qmlexpression_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_qmlexpression_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_qmlexpression_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_qmlexpression_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_qmlexpression_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_qmlexpression_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_qmlexpression_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_qmlexpression_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_qmlexpression_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_qmlexpression_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_qmlexpression_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_qmlexpression_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_qmlexpression_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_qmlexpression_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_qmlexpression_dynamic_property_names\n");
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

QBindingStorage* q_qmlexpression_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_qmlexpression_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_qmlexpression_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_qmlexpression_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_qmlexpression_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_qmlexpression_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_qmlexpression_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_qmlexpression_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_qmlexpression_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_qmlexpression_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_qmlexpression_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_qmlexpression_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_qmlexpression_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_qmlexpression_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_qmlexpression_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_qmlexpression_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_qmlexpression_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_qmlexpression_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_qmlexpression_event(void* self, void* event) {
    return QQmlExpression_Event((QQmlExpression*)self, (QEvent*)event);
}

bool q_qmlexpression_super_event(void* self, void* event) {
    return QQmlExpression_SuperEvent((QQmlExpression*)self, (QEvent*)event);
}

void q_qmlexpression_on_event(void* self, bool (*callback)(void*, void*)) {
    QQmlExpression_OnEvent((QQmlExpression*)self, (intptr_t)callback);
}

bool q_qmlexpression_event_filter(void* self, void* watched, void* event) {
    return QQmlExpression_EventFilter((QQmlExpression*)self, (QObject*)watched, (QEvent*)event);
}

bool q_qmlexpression_super_event_filter(void* self, void* watched, void* event) {
    return QQmlExpression_SuperEventFilter((QQmlExpression*)self, (QObject*)watched, (QEvent*)event);
}

void q_qmlexpression_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QQmlExpression_OnEventFilter((QQmlExpression*)self, (intptr_t)callback);
}

void q_qmlexpression_timer_event(void* self, void* event) {
    QQmlExpression_TimerEvent((QQmlExpression*)self, (QTimerEvent*)event);
}

void q_qmlexpression_super_timer_event(void* self, void* event) {
    QQmlExpression_SuperTimerEvent((QQmlExpression*)self, (QTimerEvent*)event);
}

void q_qmlexpression_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QQmlExpression_OnTimerEvent((QQmlExpression*)self, (intptr_t)callback);
}

void q_qmlexpression_child_event(void* self, void* event) {
    QQmlExpression_ChildEvent((QQmlExpression*)self, (QChildEvent*)event);
}

void q_qmlexpression_super_child_event(void* self, void* event) {
    QQmlExpression_SuperChildEvent((QQmlExpression*)self, (QChildEvent*)event);
}

void q_qmlexpression_on_child_event(void* self, void (*callback)(void*, void*)) {
    QQmlExpression_OnChildEvent((QQmlExpression*)self, (intptr_t)callback);
}

void q_qmlexpression_custom_event(void* self, void* event) {
    QQmlExpression_CustomEvent((QQmlExpression*)self, (QEvent*)event);
}

void q_qmlexpression_super_custom_event(void* self, void* event) {
    QQmlExpression_SuperCustomEvent((QQmlExpression*)self, (QEvent*)event);
}

void q_qmlexpression_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QQmlExpression_OnCustomEvent((QQmlExpression*)self, (intptr_t)callback);
}

void q_qmlexpression_connect_notify(void* self, void* signal) {
    QQmlExpression_ConnectNotify((QQmlExpression*)self, (QMetaMethod*)signal);
}

void q_qmlexpression_super_connect_notify(void* self, void* signal) {
    QQmlExpression_SuperConnectNotify((QQmlExpression*)self, (QMetaMethod*)signal);
}

void q_qmlexpression_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QQmlExpression_OnConnectNotify((QQmlExpression*)self, (intptr_t)callback);
}

void q_qmlexpression_disconnect_notify(void* self, void* signal) {
    QQmlExpression_DisconnectNotify((QQmlExpression*)self, (QMetaMethod*)signal);
}

void q_qmlexpression_super_disconnect_notify(void* self, void* signal) {
    QQmlExpression_SuperDisconnectNotify((QQmlExpression*)self, (QMetaMethod*)signal);
}

void q_qmlexpression_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QQmlExpression_OnDisconnectNotify((QQmlExpression*)self, (intptr_t)callback);
}

QObject* q_qmlexpression_sender(void* self) {
    return QQmlExpression_Sender((QQmlExpression*)self);
}

QObject* q_qmlexpression_super_sender(void* self) {
    return QQmlExpression_SuperSender((QQmlExpression*)self);
}

void q_qmlexpression_on_sender(void* self, QObject* (*callback)()) {
    QQmlExpression_OnSender((QQmlExpression*)self, (intptr_t)callback);
}

int32_t q_qmlexpression_sender_signal_index(void* self) {
    return QQmlExpression_SenderSignalIndex((QQmlExpression*)self);
}

int32_t q_qmlexpression_super_sender_signal_index(void* self) {
    return QQmlExpression_SuperSenderSignalIndex((QQmlExpression*)self);
}

void q_qmlexpression_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QQmlExpression_OnSenderSignalIndex((QQmlExpression*)self, (intptr_t)callback);
}

int32_t q_qmlexpression_receivers(void* self, const char* signal) {
    return QQmlExpression_Receivers((QQmlExpression*)self, signal);
}

int32_t q_qmlexpression_super_receivers(void* self, const char* signal) {
    return QQmlExpression_SuperReceivers((QQmlExpression*)self, signal);
}

void q_qmlexpression_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QQmlExpression_OnReceivers((QQmlExpression*)self, (intptr_t)callback);
}

bool q_qmlexpression_is_signal_connected(void* self, void* signal) {
    return QQmlExpression_IsSignalConnected((QQmlExpression*)self, (QMetaMethod*)signal);
}

bool q_qmlexpression_super_is_signal_connected(void* self, void* signal) {
    return QQmlExpression_SuperIsSignalConnected((QQmlExpression*)self, (QMetaMethod*)signal);
}

void q_qmlexpression_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QQmlExpression_OnIsSignalConnected((QQmlExpression*)self, (intptr_t)callback);
}

void q_qmlexpression_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_qmlexpression_delete(void* self) {
    QQmlExpression_Delete((QQmlExpression*)(self));
}
