#pragma once
#ifndef QML_LIBQQML_H
#define QML_LIBQQML_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html#qmlClearTypeRegistrations)
///
void q_qqml_h_qml_clear_type_registrations();

/// [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html#qmlRegisterTypeNotAvailable)
///
/// @param uri const char*
/// @param versionMajor int
/// @param versionMinor int
/// @param qmlName const char*
/// @param message const char*
///
int32_t q_qqml_h_qml_register_type_not_available(const char* uri, int versionMajor, int versionMinor, const char* qmlName, const char* message);

/// [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html#qmlRegisterUncreatableMetaObject)
///
/// @param staticMetaObject QMetaObject*
/// @param uri const char*
/// @param versionMajor int
/// @param versionMinor int
/// @param qmlName const char*
/// @param reason const char*
///
int32_t q_qqml_h_qml_register_uncreatable_meta_object(void* staticMetaObject, const char* uri, int versionMajor, int versionMinor, const char* qmlName, const char* reason);

/// [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html#qmlExecuteDeferred)
///
/// @param param1 QObject*
///
void q_qqml_h_qml_execute_deferred(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html#qmlContext)
///
/// @param param1 QObject*
///
QQmlContext* q_qqml_h_qml_context(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html#qmlEngine)
///
/// @param param1 QObject*
///
QQmlEngine* q_qqml_h_qml_engine(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html#qmlAttachedPropertiesFunction)
///
/// @param param1 QObject*
/// @param param2 QMetaObject*
///
/// @return QObject* (*QQmlAttachedPropertiesFunc)(void* funcparam1)
///
QQmlAttachedPropertiesFunc q_qqml_h_qml_attached_properties_function(void* param1, void* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html#qmlAttachedPropertiesObject)
///
/// @param param1 QObject*
/// @param func QObject* func(QObject* param1)
/// @param create bool
///
QObject* q_qqml_h_qml_attached_properties_object(void* param1, QObject* (*func)(void* funcparam1), bool create);

/// [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html#qmlExtendedObject)
///
/// @param param1 QObject*
///
QObject* q_qqml_h_qml_extended_object(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html#qmlProtectModule)
///
/// @param uri const char*
/// @param majVersion int
///
bool q_qqml_h_qml_protect_module(const char* uri, int majVersion);

/// [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html#qmlRegisterModule)
///
/// @param uri const char*
/// @param versionMajor int
/// @param versionMinor int
///
void q_qqml_h_qml_register_module(const char* uri, int versionMajor, int versionMinor);

/// [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html#qmlRegisterModuleImport)
///
/// @param uri const char*
/// @param moduleMajor int
/// @param import const char*
/// @param importMajor int
/// @param importMinor int
///
void q_qqml_h_qml_register_module_import(const char* uri, int moduleMajor, const char* import, int importMajor, int importMinor);

/// [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html#qmlUnregisterModuleImport)
///
/// @param uri const char*
/// @param moduleMajor int
/// @param import const char*
/// @param importMajor int
/// @param importMinor int
///
void q_qqml_h_qml_unregister_module_import(const char* uri, int moduleMajor, const char* import, int importMajor, int importMinor);

/// [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html#qmlRegisterSingletonType)
///
/// @param url QUrl*
/// @param uri const char*
/// @param versionMajor int
/// @param versionMinor int
/// @param qmlName const char*
///
int32_t q_qqml_h_qml_register_singleton_type(void* url, const char* uri, int versionMajor, int versionMinor, const char* qmlName);

/// [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html#qmlRegisterType)
///
/// @param url QUrl*
/// @param uri const char*
/// @param versionMajor int
/// @param versionMinor int
/// @param qmlName const char*
///
int32_t q_qqml_h_qml_register_type(void* url, const char* uri, int versionMajor, int versionMinor, const char* qmlName);

/// [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html#qmlRegisterNamespaceAndRevisions)
///
/// @param metaObject QMetaObject*
/// @param uri const char*
/// @param versionMajor int
/// @param qmlTypeIds libqt_list of int
/// @param classInfoMetaObject QMetaObject*
/// @param extensionMetaObject QMetaObject*
///
void q_qqml_h_qml_register_namespace_and_revisions(void* metaObject, const char* uri, int versionMajor, libqt_list qmlTypeIds, void* classInfoMetaObject, void* extensionMetaObject);

/// [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html#qmlRegisterNamespaceAndRevisions)
///
/// @param metaObject QMetaObject*
/// @param uri const char*
/// @param versionMajor int
/// @param qmlTypeIds libqt_list of int
/// @param classInfoMetaObject QMetaObject*
///
void q_qqml_h_qml_register_namespace_and_revisions2(void* metaObject, const char* uri, int versionMajor, libqt_list qmlTypeIds, void* classInfoMetaObject);

/// [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html#qmlTypeId)
///
/// @param uri const char*
/// @param versionMajor int
/// @param versionMinor int
/// @param qmlName const char*
///
int32_t q_qqml_h_qml_type_id(const char* uri, int versionMajor, int versionMinor, const char* qmlName);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmltypenotavailable.html)

/// q_qmltypenotavailable_new constructs a new QQmlTypeNotAvailable object.
///
QQmlTypeNotAvailable* q_qmltypenotavailable_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QQmlTypeNotAvailable*
///
const QMetaObject* q_qmltypenotavailable_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QQmlTypeNotAvailable*
/// @param callback const QMetaObject* func()
///
void q_qmltypenotavailable_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QQmlTypeNotAvailable*
///
const QMetaObject* q_qmltypenotavailable_super_meta_object(void* self);

/// @param self QQmlTypeNotAvailable*
/// @param param1 const char*
///
void* q_qmltypenotavailable_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QQmlTypeNotAvailable*
/// @param callback void* func(QQmlTypeNotAvailable* self, const char* param1)
///
void q_qmltypenotavailable_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QQmlTypeNotAvailable*
/// @param param1 const char*
///
void* q_qmltypenotavailable_super_metacast(void* self, const char* param1);

/// @param self QQmlTypeNotAvailable*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_qmltypenotavailable_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QQmlTypeNotAvailable*
/// @param callback int32_t func(QQmlTypeNotAvailable* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_qmltypenotavailable_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QQmlTypeNotAvailable*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_qmltypenotavailable_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_qmltypenotavailable_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_qmltypenotavailable_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_qmltypenotavailable_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QQmlTypeNotAvailable*
///
const char* q_qmltypenotavailable_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QQmlTypeNotAvailable*
/// @param name const char*
///
void q_qmltypenotavailable_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QQmlTypeNotAvailable*
///
bool q_qmltypenotavailable_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QQmlTypeNotAvailable*
///
bool q_qmltypenotavailable_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QQmlTypeNotAvailable*
///
bool q_qmltypenotavailable_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QQmlTypeNotAvailable*
///
bool q_qmltypenotavailable_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QQmlTypeNotAvailable*
/// @param b bool
///
bool q_qmltypenotavailable_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QQmlTypeNotAvailable*
///
QThread* q_qmltypenotavailable_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QQmlTypeNotAvailable*
/// @param thread QThread*
///
bool q_qmltypenotavailable_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQmlTypeNotAvailable*
/// @param interval int
///
int32_t q_qmltypenotavailable_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQmlTypeNotAvailable*
/// @param time int64_t of nanoseconds
///
int32_t q_qmltypenotavailable_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQmlTypeNotAvailable*
/// @param id int
///
void q_qmltypenotavailable_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQmlTypeNotAvailable*
/// @param id enum Qt__TimerId
///
void q_qmltypenotavailable_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QQmlTypeNotAvailable*
///
/// @return libqt_list of QObject*
///
libqt_list q_qmltypenotavailable_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QQmlTypeNotAvailable*
/// @param parent QObject*
///
void q_qmltypenotavailable_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QQmlTypeNotAvailable*
/// @param filterObj QObject*
///
void q_qmltypenotavailable_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QQmlTypeNotAvailable*
/// @param obj QObject*
///
void q_qmltypenotavailable_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_qmltypenotavailable_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_qmltypenotavailable_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QQmlTypeNotAvailable*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_qmltypenotavailable_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_qmltypenotavailable_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_qmltypenotavailable_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQmlTypeNotAvailable*
///
bool q_qmltypenotavailable_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQmlTypeNotAvailable*
/// @param receiver QObject*
///
bool q_qmltypenotavailable_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_qmltypenotavailable_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QQmlTypeNotAvailable*
///
void q_qmltypenotavailable_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QQmlTypeNotAvailable*
///
void q_qmltypenotavailable_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QQmlTypeNotAvailable*
/// @param name const char*
/// @param value QVariant*
///
bool q_qmltypenotavailable_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QQmlTypeNotAvailable*
/// @param name const char*
///
QVariant* q_qmltypenotavailable_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QQmlTypeNotAvailable*
///
const char** q_qmltypenotavailable_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQmlTypeNotAvailable*
///
QBindingStorage* q_qmltypenotavailable_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQmlTypeNotAvailable*
///
const QBindingStorage* q_qmltypenotavailable_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQmlTypeNotAvailable*
///
void q_qmltypenotavailable_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQmlTypeNotAvailable*
/// @param callback void func(QQmlTypeNotAvailable* self)
///
void q_qmltypenotavailable_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QQmlTypeNotAvailable*
///
QObject* q_qmltypenotavailable_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QQmlTypeNotAvailable*
/// @param classname const char*
///
bool q_qmltypenotavailable_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QQmlTypeNotAvailable*
///
void q_qmltypenotavailable_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQmlTypeNotAvailable*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_qmltypenotavailable_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQmlTypeNotAvailable*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_qmltypenotavailable_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* q_qmltypenotavailable_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_qmltypenotavailable_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QQmlTypeNotAvailable*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_qmltypenotavailable_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQmlTypeNotAvailable*
/// @param signal const char*
///
bool q_qmltypenotavailable_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQmlTypeNotAvailable*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_qmltypenotavailable_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQmlTypeNotAvailable*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_qmltypenotavailable_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQmlTypeNotAvailable*
/// @param receiver QObject*
/// @param member const char*
///
bool q_qmltypenotavailable_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQmlTypeNotAvailable*
/// @param param1 QObject*
///
void q_qmltypenotavailable_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQmlTypeNotAvailable*
/// @param callback void func(QQmlTypeNotAvailable* self, QObject* param1)
///
void q_qmltypenotavailable_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlTypeNotAvailable*
/// @param event QEvent*
///
bool q_qmltypenotavailable_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlTypeNotAvailable*
/// @param event QEvent*
///
bool q_qmltypenotavailable_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlTypeNotAvailable*
/// @param callback bool func(QQmlTypeNotAvailable* self, QEvent* event)
///
void q_qmltypenotavailable_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlTypeNotAvailable*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_qmltypenotavailable_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlTypeNotAvailable*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_qmltypenotavailable_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlTypeNotAvailable*
/// @param callback bool func(QQmlTypeNotAvailable* self, QObject* watched, QEvent* event)
///
void q_qmltypenotavailable_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlTypeNotAvailable*
/// @param event QTimerEvent*
///
void q_qmltypenotavailable_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlTypeNotAvailable*
/// @param event QTimerEvent*
///
void q_qmltypenotavailable_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlTypeNotAvailable*
/// @param callback void func(QQmlTypeNotAvailable* self, QTimerEvent* event)
///
void q_qmltypenotavailable_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlTypeNotAvailable*
/// @param event QChildEvent*
///
void q_qmltypenotavailable_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlTypeNotAvailable*
/// @param event QChildEvent*
///
void q_qmltypenotavailable_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlTypeNotAvailable*
/// @param callback void func(QQmlTypeNotAvailable* self, QChildEvent* event)
///
void q_qmltypenotavailable_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlTypeNotAvailable*
/// @param event QEvent*
///
void q_qmltypenotavailable_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlTypeNotAvailable*
/// @param event QEvent*
///
void q_qmltypenotavailable_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlTypeNotAvailable*
/// @param callback void func(QQmlTypeNotAvailable* self, QEvent* event)
///
void q_qmltypenotavailable_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlTypeNotAvailable*
/// @param signal QMetaMethod*
///
void q_qmltypenotavailable_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlTypeNotAvailable*
/// @param signal QMetaMethod*
///
void q_qmltypenotavailable_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlTypeNotAvailable*
/// @param callback void func(QQmlTypeNotAvailable* self, QMetaMethod* signal)
///
void q_qmltypenotavailable_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlTypeNotAvailable*
/// @param signal QMetaMethod*
///
void q_qmltypenotavailable_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlTypeNotAvailable*
/// @param signal QMetaMethod*
///
void q_qmltypenotavailable_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlTypeNotAvailable*
/// @param callback void func(QQmlTypeNotAvailable* self, QMetaMethod* signal)
///
void q_qmltypenotavailable_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlTypeNotAvailable*
///
QObject* q_qmltypenotavailable_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlTypeNotAvailable*
///
QObject* q_qmltypenotavailable_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlTypeNotAvailable*
/// @param callback QObject* func()
///
void q_qmltypenotavailable_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlTypeNotAvailable*
///
int32_t q_qmltypenotavailable_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlTypeNotAvailable*
///
int32_t q_qmltypenotavailable_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlTypeNotAvailable*
/// @param callback int32_t func()
///
void q_qmltypenotavailable_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlTypeNotAvailable*
/// @param signal const char*
///
int32_t q_qmltypenotavailable_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlTypeNotAvailable*
/// @param signal const char*
///
int32_t q_qmltypenotavailable_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlTypeNotAvailable*
/// @param callback int32_t func(QQmlTypeNotAvailable* self, const char* signal)
///
void q_qmltypenotavailable_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlTypeNotAvailable*
/// @param signal QMetaMethod*
///
bool q_qmltypenotavailable_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlTypeNotAvailable*
/// @param signal QMetaMethod*
///
bool q_qmltypenotavailable_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlTypeNotAvailable*
/// @param callback bool func(QQmlTypeNotAvailable* self, QMetaMethod* signal)
///
void q_qmltypenotavailable_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QQmlTypeNotAvailable*
/// @param callback void func(QQmlTypeNotAvailable* self, const char* objectName)
///
void q_qmltypenotavailable_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qqmltypenotavailable.html#dtor.QQmlTypeNotAvailable)
///
/// Delete this object from C++ memory.
///
/// @param self QQmlTypeNotAvailable*
///
void q_qmltypenotavailable_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqml.html#public-types)

typedef enum {
    QQMLMODULEIMPORTSPECIALVERSIONS_QQMLMODULEIMPORTMODULEANY = -1,
    QQMLMODULEIMPORTSPECIALVERSIONS_QQMLMODULEIMPORTLATEST = -1,
    QQMLMODULEIMPORTSPECIALVERSIONS_QQMLMODULEIMPORTAUTO = -2
} QQmlModuleImportSpecialVersions__;

#endif
