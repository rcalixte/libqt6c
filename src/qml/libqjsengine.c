#include "../libqcoreevent.hpp"
#include "libqjsvalue.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqjsengine.hpp"
#include "libqjsengine.h"

QJSEngine* q_jsengine_new() {
    return QJSEngine_New();
}

QJSEngine* q_jsengine_new2(void* parent) {
    return QJSEngine_New2((QObject*)parent);
}

const QMetaObject* q_jsengine_meta_object(void* self) {
    return QJSEngine_MetaObject((QJSEngine*)self);
}

void q_jsengine_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QJSEngine_OnMetaObject((QJSEngine*)self, (intptr_t)callback);
}

const QMetaObject* q_jsengine_super_meta_object(void* self) {
    return QJSEngine_SuperMetaObject((QJSEngine*)self);
}

void* q_jsengine_metacast(void* self, const char* param1) {
    return QJSEngine_Metacast((QJSEngine*)self, param1);
}

void q_jsengine_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QJSEngine_OnMetacast((QJSEngine*)self, (intptr_t)callback);
}

void* q_jsengine_super_metacast(void* self, const char* param1) {
    return QJSEngine_SuperMetacast((QJSEngine*)self, param1);
}

int32_t q_jsengine_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QJSEngine_Metacall((QJSEngine*)self, param1, param2, param3);
}

void q_jsengine_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QJSEngine_OnMetacall((QJSEngine*)self, (intptr_t)callback);
}

int32_t q_jsengine_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QJSEngine_SuperMetacall((QJSEngine*)self, param1, param2, param3);
}

const char* q_jsengine_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QJSValue* q_jsengine_global_object(void* self) {
    return QJSEngine_GlobalObject((QJSEngine*)self);
}

QJSValue* q_jsengine_evaluate(void* self, const char* program) {
    return QJSEngine_Evaluate((QJSEngine*)self, qstring(program));
}

QJSValue* q_jsengine_import_module(void* self, const char* fileName) {
    return QJSEngine_ImportModule((QJSEngine*)self, qstring(fileName));
}

bool q_jsengine_register_module(void* self, const char* moduleName, void* value) {
    return QJSEngine_RegisterModule((QJSEngine*)self, qstring(moduleName), (QJSValue*)value);
}

QJSValue* q_jsengine_new_object(void* self) {
    return QJSEngine_NewObject((QJSEngine*)self);
}

QJSValue* q_jsengine_new_symbol(void* self, const char* name) {
    return QJSEngine_NewSymbol((QJSEngine*)self, qstring(name));
}

QJSValue* q_jsengine_new_array(void* self) {
    return QJSEngine_NewArray((QJSEngine*)self);
}

QJSValue* q_jsengine_new_q_object(void* self, void* object) {
    return QJSEngine_NewQObject((QJSEngine*)self, (QObject*)object);
}

QJSValue* q_jsengine_new_q_meta_object(void* self, void* metaObject) {
    return QJSEngine_NewQMetaObject((QJSEngine*)self, (QMetaObject*)metaObject);
}

QJSValue* q_jsengine_new_error_object(void* self, int32_t errorType) {
    return QJSEngine_NewErrorObject((QJSEngine*)self, errorType);
}

void q_jsengine_collect_garbage(void* self) {
    QJSEngine_CollectGarbage((QJSEngine*)self);
}

void q_jsengine_set_object_ownership(void* param1, int32_t param2) {
    QJSEngine_SetObjectOwnership((QObject*)param1, param2);
}

int32_t q_jsengine_object_ownership(void* param1) {
    return QJSEngine_ObjectOwnership((QObject*)param1);
}

void q_jsengine_install_extensions(void* self, int32_t extensions) {
    QJSEngine_InstallExtensions((QJSEngine*)self, extensions);
}

void q_jsengine_set_interrupted(void* self, bool interrupted) {
    QJSEngine_SetInterrupted((QJSEngine*)self, interrupted);
}

bool q_jsengine_is_interrupted(void* self) {
    return QJSEngine_IsInterrupted((QJSEngine*)self);
}

void q_jsengine_throw_error(void* self, const char* message) {
    QJSEngine_ThrowError((QJSEngine*)self, qstring(message));
}

void q_jsengine_throw_error2(void* self, int32_t errorType) {
    QJSEngine_ThrowError2((QJSEngine*)self, errorType);
}

void q_jsengine_throw_error3(void* self, void* error) {
    QJSEngine_ThrowError3((QJSEngine*)self, (QJSValue*)error);
}

bool q_jsengine_has_error(void* self) {
    return QJSEngine_HasError((QJSEngine*)self);
}

QJSValue* q_jsengine_catch_error(void* self) {
    return QJSEngine_CatchError((QJSEngine*)self);
}

const char* q_jsengine_ui_language(void* self) {
    libqt_string _str = QJSEngine_UiLanguage((QJSEngine*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_jsengine_set_ui_language(void* self, const char* language) {
    QJSEngine_SetUiLanguage((QJSEngine*)self, qstring(language));
}

void q_jsengine_ui_language_changed(void* self) {
    QJSEngine_UiLanguageChanged((QJSEngine*)self);
}

void q_jsengine_on_ui_language_changed(void* self, void (*callback)(void*)) {
    QJSEngine_Connect_UiLanguageChanged((QJSEngine*)self, (intptr_t)callback);
}

const char* q_jsengine_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_jsengine_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QJSValue* q_jsengine_evaluate2(void* self, const char* program, const char* fileName) {
    return QJSEngine_Evaluate2((QJSEngine*)self, qstring(program), qstring(fileName));
}

QJSValue* q_jsengine_evaluate3(void* self, const char* program, const char* fileName, int lineNumber) {
    return QJSEngine_Evaluate3((QJSEngine*)self, qstring(program), qstring(fileName), lineNumber);
}

QJSValue* q_jsengine_evaluate4(void* self, const char* program, const char* fileName, int lineNumber, const char* exceptionStackTrace[static 1]) {
    size_t exceptionStackTrace_len = libqt_strv_length(exceptionStackTrace);
    libqt_string* exceptionStackTrace_qstr = (libqt_string*)malloc(exceptionStackTrace_len * sizeof(libqt_string));
    if (exceptionStackTrace_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_jsengine_evaluate4\n");
        abort();
    }
    for (size_t i = 0; i < exceptionStackTrace_len; ++i)
        exceptionStackTrace_qstr[i] = qstring(exceptionStackTrace[i]);
    libqt_list exceptionStackTrace_list = qlist(exceptionStackTrace_qstr, exceptionStackTrace_len);
    QJSValue* _out = QJSEngine_Evaluate4((QJSEngine*)self, qstring(program), qstring(fileName), lineNumber, exceptionStackTrace_list);
    free(exceptionStackTrace_qstr);
    return _out;
}

QJSValue* q_jsengine_new_array1(void* self, uint32_t length) {
    return QJSEngine_NewArray1((QJSEngine*)self, length);
}

QJSValue* q_jsengine_new_error_object2(void* self, int32_t errorType, const char* message) {
    return QJSEngine_NewErrorObject2((QJSEngine*)self, errorType, qstring(message));
}

void q_jsengine_install_extensions2(void* self, int32_t extensions, void* object) {
    QJSEngine_InstallExtensions2((QJSEngine*)self, extensions, (QJSValue*)object);
}

void q_jsengine_throw_error22(void* self, int32_t errorType, const char* message) {
    QJSEngine_ThrowError22((QJSEngine*)self, errorType, qstring(message));
}

const char* q_jsengine_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_jsengine_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_jsengine_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_jsengine_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_jsengine_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_jsengine_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_jsengine_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_jsengine_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_jsengine_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_jsengine_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_jsengine_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_jsengine_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_jsengine_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_jsengine_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_jsengine_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_jsengine_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_jsengine_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_jsengine_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_jsengine_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_jsengine_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_jsengine_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_jsengine_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_jsengine_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_jsengine_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_jsengine_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_jsengine_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_jsengine_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_jsengine_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_jsengine_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_jsengine_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_jsengine_dynamic_property_names\n");
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

QBindingStorage* q_jsengine_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_jsengine_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_jsengine_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_jsengine_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_jsengine_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_jsengine_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_jsengine_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_jsengine_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_jsengine_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_jsengine_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_jsengine_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_jsengine_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_jsengine_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_jsengine_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_jsengine_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_jsengine_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_jsengine_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_jsengine_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_jsengine_event(void* self, void* event) {
    return QJSEngine_Event((QJSEngine*)self, (QEvent*)event);
}

bool q_jsengine_super_event(void* self, void* event) {
    return QJSEngine_SuperEvent((QJSEngine*)self, (QEvent*)event);
}

void q_jsengine_on_event(void* self, bool (*callback)(void*, void*)) {
    QJSEngine_OnEvent((QJSEngine*)self, (intptr_t)callback);
}

bool q_jsengine_event_filter(void* self, void* watched, void* event) {
    return QJSEngine_EventFilter((QJSEngine*)self, (QObject*)watched, (QEvent*)event);
}

bool q_jsengine_super_event_filter(void* self, void* watched, void* event) {
    return QJSEngine_SuperEventFilter((QJSEngine*)self, (QObject*)watched, (QEvent*)event);
}

void q_jsengine_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QJSEngine_OnEventFilter((QJSEngine*)self, (intptr_t)callback);
}

void q_jsengine_timer_event(void* self, void* event) {
    QJSEngine_TimerEvent((QJSEngine*)self, (QTimerEvent*)event);
}

void q_jsengine_super_timer_event(void* self, void* event) {
    QJSEngine_SuperTimerEvent((QJSEngine*)self, (QTimerEvent*)event);
}

void q_jsengine_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QJSEngine_OnTimerEvent((QJSEngine*)self, (intptr_t)callback);
}

void q_jsengine_child_event(void* self, void* event) {
    QJSEngine_ChildEvent((QJSEngine*)self, (QChildEvent*)event);
}

void q_jsengine_super_child_event(void* self, void* event) {
    QJSEngine_SuperChildEvent((QJSEngine*)self, (QChildEvent*)event);
}

void q_jsengine_on_child_event(void* self, void (*callback)(void*, void*)) {
    QJSEngine_OnChildEvent((QJSEngine*)self, (intptr_t)callback);
}

void q_jsengine_custom_event(void* self, void* event) {
    QJSEngine_CustomEvent((QJSEngine*)self, (QEvent*)event);
}

void q_jsengine_super_custom_event(void* self, void* event) {
    QJSEngine_SuperCustomEvent((QJSEngine*)self, (QEvent*)event);
}

void q_jsengine_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QJSEngine_OnCustomEvent((QJSEngine*)self, (intptr_t)callback);
}

void q_jsengine_connect_notify(void* self, void* signal) {
    QJSEngine_ConnectNotify((QJSEngine*)self, (QMetaMethod*)signal);
}

void q_jsengine_super_connect_notify(void* self, void* signal) {
    QJSEngine_SuperConnectNotify((QJSEngine*)self, (QMetaMethod*)signal);
}

void q_jsengine_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QJSEngine_OnConnectNotify((QJSEngine*)self, (intptr_t)callback);
}

void q_jsengine_disconnect_notify(void* self, void* signal) {
    QJSEngine_DisconnectNotify((QJSEngine*)self, (QMetaMethod*)signal);
}

void q_jsengine_super_disconnect_notify(void* self, void* signal) {
    QJSEngine_SuperDisconnectNotify((QJSEngine*)self, (QMetaMethod*)signal);
}

void q_jsengine_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QJSEngine_OnDisconnectNotify((QJSEngine*)self, (intptr_t)callback);
}

QObject* q_jsengine_sender(void* self) {
    return QJSEngine_Sender((QJSEngine*)self);
}

QObject* q_jsengine_super_sender(void* self) {
    return QJSEngine_SuperSender((QJSEngine*)self);
}

void q_jsengine_on_sender(void* self, QObject* (*callback)()) {
    QJSEngine_OnSender((QJSEngine*)self, (intptr_t)callback);
}

int32_t q_jsengine_sender_signal_index(void* self) {
    return QJSEngine_SenderSignalIndex((QJSEngine*)self);
}

int32_t q_jsengine_super_sender_signal_index(void* self) {
    return QJSEngine_SuperSenderSignalIndex((QJSEngine*)self);
}

void q_jsengine_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QJSEngine_OnSenderSignalIndex((QJSEngine*)self, (intptr_t)callback);
}

int32_t q_jsengine_receivers(void* self, const char* signal) {
    return QJSEngine_Receivers((QJSEngine*)self, signal);
}

int32_t q_jsengine_super_receivers(void* self, const char* signal) {
    return QJSEngine_SuperReceivers((QJSEngine*)self, signal);
}

void q_jsengine_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QJSEngine_OnReceivers((QJSEngine*)self, (intptr_t)callback);
}

bool q_jsengine_is_signal_connected(void* self, void* signal) {
    return QJSEngine_IsSignalConnected((QJSEngine*)self, (QMetaMethod*)signal);
}

bool q_jsengine_super_is_signal_connected(void* self, void* signal) {
    return QJSEngine_SuperIsSignalConnected((QJSEngine*)self, (QMetaMethod*)signal);
}

void q_jsengine_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QJSEngine_OnIsSignalConnected((QJSEngine*)self, (intptr_t)callback);
}

void q_jsengine_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_jsengine_delete(void* self) {
    QJSEngine_Delete((QJSEngine*)(self));
}

QJSEngine* q_qjsengine_h_qjs_engine(void* param1) {
    return qjsengine_h_QjsEngine((QObject*)param1);
}
