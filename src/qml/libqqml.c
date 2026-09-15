#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqqmlcontext.hpp"
#include "libqqmlengine.hpp"
#include "../libqurl.hpp"
#include "libqqml.hpp"
#include "libqqml.h"

void q_qqml_h_qml_clear_type_registrations() {
    qqml_h_QmlClearTypeRegistrations();
}

int32_t q_qqml_h_qml_register_type_not_available(const char* uri, int versionMajor, int versionMinor, const char* qmlName, const char* message) {
    return qqml_h_QmlRegisterTypeNotAvailable(uri, versionMajor, versionMinor, qmlName, qstring(message));
}

int32_t q_qqml_h_qml_register_uncreatable_meta_object(void* staticMetaObject, const char* uri, int versionMajor, int versionMinor, const char* qmlName, const char* reason) {
    return qqml_h_QmlRegisterUncreatableMetaObject((QMetaObject*)staticMetaObject, uri, versionMajor, versionMinor, qmlName, qstring(reason));
}

void q_qqml_h_qml_execute_deferred(void* param1) {
    qqml_h_QmlExecuteDeferred((QObject*)param1);
}

QQmlContext* q_qqml_h_qml_context(void* param1) {
    return qqml_h_QmlContext((QObject*)param1);
}

QQmlEngine* q_qqml_h_qml_engine(void* param1) {
    return qqml_h_QmlEngine((QObject*)param1);
}

QQmlAttachedPropertiesFunc q_qqml_h_qml_attached_properties_function(void* param1, void* param2) {
    return (QQmlAttachedPropertiesFunc)qqml_h_QmlAttachedPropertiesFunction((QObject*)param1, (QMetaObject*)param2);
}

QObject* q_qqml_h_qml_attached_properties_object(void* param1, QObject* (*func)(void* funcparam1), bool create) {
    return qqml_h_QmlAttachedPropertiesObject((QObject*)param1, (intptr_t)func, create);
}

QObject* q_qqml_h_qml_extended_object(void* param1) {
    return qqml_h_QmlExtendedObject((QObject*)param1);
}

bool q_qqml_h_qml_protect_module(const char* uri, int majVersion) {
    return qqml_h_QmlProtectModule(uri, majVersion);
}

void q_qqml_h_qml_register_module(const char* uri, int versionMajor, int versionMinor) {
    qqml_h_QmlRegisterModule(uri, versionMajor, versionMinor);
}

void q_qqml_h_qml_register_module_import(const char* uri, int moduleMajor, const char* import, int importMajor, int importMinor) {
    qqml_h_QmlRegisterModuleImport(uri, moduleMajor, import, importMajor, importMinor);
}

void q_qqml_h_qml_unregister_module_import(const char* uri, int moduleMajor, const char* import, int importMajor, int importMinor) {
    qqml_h_QmlUnregisterModuleImport(uri, moduleMajor, import, importMajor, importMinor);
}

int32_t q_qqml_h_qml_register_singleton_type(void* url, const char* uri, int versionMajor, int versionMinor, const char* qmlName) {
    return qqml_h_QmlRegisterSingletonType((QUrl*)url, uri, versionMajor, versionMinor, qmlName);
}

int32_t q_qqml_h_qml_register_type(void* url, const char* uri, int versionMajor, int versionMinor, const char* qmlName) {
    return qqml_h_QmlRegisterType((QUrl*)url, uri, versionMajor, versionMinor, qmlName);
}

void q_qqml_h_qml_register_namespace_and_revisions(void* metaObject, const char* uri, int versionMajor, libqt_list /* of int */ qmlTypeIds, void* classInfoMetaObject, void* extensionMetaObject) {
    qqml_h_QmlRegisterNamespaceAndRevisions((QMetaObject*)metaObject, uri, versionMajor, qmlTypeIds, (QMetaObject*)classInfoMetaObject, (QMetaObject*)extensionMetaObject);
}

void q_qqml_h_qml_register_namespace_and_revisions2(void* metaObject, const char* uri, int versionMajor, libqt_list /* of int */ qmlTypeIds, void* classInfoMetaObject) {
    qqml_h_QmlRegisterNamespaceAndRevisions2((QMetaObject*)metaObject, uri, versionMajor, qmlTypeIds, (QMetaObject*)classInfoMetaObject);
}

int32_t q_qqml_h_qml_type_id(const char* uri, int versionMajor, int versionMinor, const char* qmlName) {
    return qqml_h_QmlTypeId(uri, versionMajor, versionMinor, qmlName);
}

QQmlTypeNotAvailable* q_qmltypenotavailable_new() {
    return QQmlTypeNotAvailable_New();
}

const QMetaObject* q_qmltypenotavailable_meta_object(void* self) {
    return QQmlTypeNotAvailable_MetaObject((QQmlTypeNotAvailable*)self);
}

void q_qmltypenotavailable_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QQmlTypeNotAvailable_OnMetaObject((QQmlTypeNotAvailable*)self, (intptr_t)callback);
}

const QMetaObject* q_qmltypenotavailable_super_meta_object(void* self) {
    return QQmlTypeNotAvailable_SuperMetaObject((QQmlTypeNotAvailable*)self);
}

void* q_qmltypenotavailable_metacast(void* self, const char* param1) {
    return QQmlTypeNotAvailable_Metacast((QQmlTypeNotAvailable*)self, param1);
}

void q_qmltypenotavailable_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QQmlTypeNotAvailable_OnMetacast((QQmlTypeNotAvailable*)self, (intptr_t)callback);
}

void* q_qmltypenotavailable_super_metacast(void* self, const char* param1) {
    return QQmlTypeNotAvailable_SuperMetacast((QQmlTypeNotAvailable*)self, param1);
}

int32_t q_qmltypenotavailable_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQmlTypeNotAvailable_Metacall((QQmlTypeNotAvailable*)self, param1, param2, param3);
}

void q_qmltypenotavailable_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QQmlTypeNotAvailable_OnMetacall((QQmlTypeNotAvailable*)self, (intptr_t)callback);
}

int32_t q_qmltypenotavailable_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQmlTypeNotAvailable_SuperMetacall((QQmlTypeNotAvailable*)self, param1, param2, param3);
}

const char* q_qmltypenotavailable_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_qmltypenotavailable_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_qmltypenotavailable_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_qmltypenotavailable_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_qmltypenotavailable_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_qmltypenotavailable_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_qmltypenotavailable_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_qmltypenotavailable_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_qmltypenotavailable_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_qmltypenotavailable_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_qmltypenotavailable_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_qmltypenotavailable_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_qmltypenotavailable_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_qmltypenotavailable_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_qmltypenotavailable_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_qmltypenotavailable_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_qmltypenotavailable_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_qmltypenotavailable_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_qmltypenotavailable_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_qmltypenotavailable_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_qmltypenotavailable_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_qmltypenotavailable_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_qmltypenotavailable_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_qmltypenotavailable_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_qmltypenotavailable_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_qmltypenotavailable_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_qmltypenotavailable_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_qmltypenotavailable_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_qmltypenotavailable_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_qmltypenotavailable_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_qmltypenotavailable_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_qmltypenotavailable_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_qmltypenotavailable_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_qmltypenotavailable_dynamic_property_names\n");
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

QBindingStorage* q_qmltypenotavailable_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_qmltypenotavailable_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_qmltypenotavailable_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_qmltypenotavailable_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_qmltypenotavailable_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_qmltypenotavailable_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_qmltypenotavailable_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_qmltypenotavailable_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_qmltypenotavailable_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_qmltypenotavailable_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_qmltypenotavailable_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_qmltypenotavailable_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_qmltypenotavailable_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_qmltypenotavailable_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_qmltypenotavailable_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_qmltypenotavailable_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_qmltypenotavailable_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_qmltypenotavailable_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_qmltypenotavailable_event(void* self, void* event) {
    return QQmlTypeNotAvailable_Event((QQmlTypeNotAvailable*)self, (QEvent*)event);
}

bool q_qmltypenotavailable_super_event(void* self, void* event) {
    return QQmlTypeNotAvailable_SuperEvent((QQmlTypeNotAvailable*)self, (QEvent*)event);
}

void q_qmltypenotavailable_on_event(void* self, bool (*callback)(void*, void*)) {
    QQmlTypeNotAvailable_OnEvent((QQmlTypeNotAvailable*)self, (intptr_t)callback);
}

bool q_qmltypenotavailable_event_filter(void* self, void* watched, void* event) {
    return QQmlTypeNotAvailable_EventFilter((QQmlTypeNotAvailable*)self, (QObject*)watched, (QEvent*)event);
}

bool q_qmltypenotavailable_super_event_filter(void* self, void* watched, void* event) {
    return QQmlTypeNotAvailable_SuperEventFilter((QQmlTypeNotAvailable*)self, (QObject*)watched, (QEvent*)event);
}

void q_qmltypenotavailable_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QQmlTypeNotAvailable_OnEventFilter((QQmlTypeNotAvailable*)self, (intptr_t)callback);
}

void q_qmltypenotavailable_timer_event(void* self, void* event) {
    QQmlTypeNotAvailable_TimerEvent((QQmlTypeNotAvailable*)self, (QTimerEvent*)event);
}

void q_qmltypenotavailable_super_timer_event(void* self, void* event) {
    QQmlTypeNotAvailable_SuperTimerEvent((QQmlTypeNotAvailable*)self, (QTimerEvent*)event);
}

void q_qmltypenotavailable_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QQmlTypeNotAvailable_OnTimerEvent((QQmlTypeNotAvailable*)self, (intptr_t)callback);
}

void q_qmltypenotavailable_child_event(void* self, void* event) {
    QQmlTypeNotAvailable_ChildEvent((QQmlTypeNotAvailable*)self, (QChildEvent*)event);
}

void q_qmltypenotavailable_super_child_event(void* self, void* event) {
    QQmlTypeNotAvailable_SuperChildEvent((QQmlTypeNotAvailable*)self, (QChildEvent*)event);
}

void q_qmltypenotavailable_on_child_event(void* self, void (*callback)(void*, void*)) {
    QQmlTypeNotAvailable_OnChildEvent((QQmlTypeNotAvailable*)self, (intptr_t)callback);
}

void q_qmltypenotavailable_custom_event(void* self, void* event) {
    QQmlTypeNotAvailable_CustomEvent((QQmlTypeNotAvailable*)self, (QEvent*)event);
}

void q_qmltypenotavailable_super_custom_event(void* self, void* event) {
    QQmlTypeNotAvailable_SuperCustomEvent((QQmlTypeNotAvailable*)self, (QEvent*)event);
}

void q_qmltypenotavailable_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QQmlTypeNotAvailable_OnCustomEvent((QQmlTypeNotAvailable*)self, (intptr_t)callback);
}

void q_qmltypenotavailable_connect_notify(void* self, void* signal) {
    QQmlTypeNotAvailable_ConnectNotify((QQmlTypeNotAvailable*)self, (QMetaMethod*)signal);
}

void q_qmltypenotavailable_super_connect_notify(void* self, void* signal) {
    QQmlTypeNotAvailable_SuperConnectNotify((QQmlTypeNotAvailable*)self, (QMetaMethod*)signal);
}

void q_qmltypenotavailable_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QQmlTypeNotAvailable_OnConnectNotify((QQmlTypeNotAvailable*)self, (intptr_t)callback);
}

void q_qmltypenotavailable_disconnect_notify(void* self, void* signal) {
    QQmlTypeNotAvailable_DisconnectNotify((QQmlTypeNotAvailable*)self, (QMetaMethod*)signal);
}

void q_qmltypenotavailable_super_disconnect_notify(void* self, void* signal) {
    QQmlTypeNotAvailable_SuperDisconnectNotify((QQmlTypeNotAvailable*)self, (QMetaMethod*)signal);
}

void q_qmltypenotavailable_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QQmlTypeNotAvailable_OnDisconnectNotify((QQmlTypeNotAvailable*)self, (intptr_t)callback);
}

QObject* q_qmltypenotavailable_sender(void* self) {
    return QQmlTypeNotAvailable_Sender((QQmlTypeNotAvailable*)self);
}

QObject* q_qmltypenotavailable_super_sender(void* self) {
    return QQmlTypeNotAvailable_SuperSender((QQmlTypeNotAvailable*)self);
}

void q_qmltypenotavailable_on_sender(void* self, QObject* (*callback)()) {
    QQmlTypeNotAvailable_OnSender((QQmlTypeNotAvailable*)self, (intptr_t)callback);
}

int32_t q_qmltypenotavailable_sender_signal_index(void* self) {
    return QQmlTypeNotAvailable_SenderSignalIndex((QQmlTypeNotAvailable*)self);
}

int32_t q_qmltypenotavailable_super_sender_signal_index(void* self) {
    return QQmlTypeNotAvailable_SuperSenderSignalIndex((QQmlTypeNotAvailable*)self);
}

void q_qmltypenotavailable_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QQmlTypeNotAvailable_OnSenderSignalIndex((QQmlTypeNotAvailable*)self, (intptr_t)callback);
}

int32_t q_qmltypenotavailable_receivers(void* self, const char* signal) {
    return QQmlTypeNotAvailable_Receivers((QQmlTypeNotAvailable*)self, signal);
}

int32_t q_qmltypenotavailable_super_receivers(void* self, const char* signal) {
    return QQmlTypeNotAvailable_SuperReceivers((QQmlTypeNotAvailable*)self, signal);
}

void q_qmltypenotavailable_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QQmlTypeNotAvailable_OnReceivers((QQmlTypeNotAvailable*)self, (intptr_t)callback);
}

bool q_qmltypenotavailable_is_signal_connected(void* self, void* signal) {
    return QQmlTypeNotAvailable_IsSignalConnected((QQmlTypeNotAvailable*)self, (QMetaMethod*)signal);
}

bool q_qmltypenotavailable_super_is_signal_connected(void* self, void* signal) {
    return QQmlTypeNotAvailable_SuperIsSignalConnected((QQmlTypeNotAvailable*)self, (QMetaMethod*)signal);
}

void q_qmltypenotavailable_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QQmlTypeNotAvailable_OnIsSignalConnected((QQmlTypeNotAvailable*)self, (intptr_t)callback);
}

void q_qmltypenotavailable_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_qmltypenotavailable_delete(void* self) {
    QQmlTypeNotAvailable_Delete((QQmlTypeNotAvailable*)(self));
}
