#pragma once
#ifndef QML_LIBQQMLENGINE_H
#define QML_LIBQQMLENGINE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlimageproviderbase.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QQmlImageProviderBase*
///
const QMetaObject* q_qmlimageproviderbase_meta_object(void* self);

/// @param self QQmlImageProviderBase*
/// @param param1 const char*
///
void* q_qmlimageproviderbase_metacast(void* self, const char* param1);

/// @param self QQmlImageProviderBase*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_qmlimageproviderbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_qmlimageproviderbase_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlimageproviderbase.html#imageType)
///
/// @param self QQmlImageProviderBase*
///
/// @return enum QQmlImageProviderBase__ImageType
///
int32_t q_qmlimageproviderbase_image_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlimageproviderbase.html#flags)
///
/// @param self QQmlImageProviderBase*
///
/// @return flag of enum QQmlImageProviderBase__Flag
///
int32_t q_qmlimageproviderbase_flags(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_qmlimageproviderbase_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_qmlimageproviderbase_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QQmlImageProviderBase*
/// @param event QEvent*
///
bool q_qmlimageproviderbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QQmlImageProviderBase*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_qmlimageproviderbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QQmlImageProviderBase*
///
const char* q_qmlimageproviderbase_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QQmlImageProviderBase*
/// @param name const char*
///
void q_qmlimageproviderbase_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QQmlImageProviderBase*
///
bool q_qmlimageproviderbase_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QQmlImageProviderBase*
///
bool q_qmlimageproviderbase_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QQmlImageProviderBase*
///
bool q_qmlimageproviderbase_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QQmlImageProviderBase*
///
bool q_qmlimageproviderbase_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QQmlImageProviderBase*
/// @param b bool
///
bool q_qmlimageproviderbase_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QQmlImageProviderBase*
///
QThread* q_qmlimageproviderbase_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QQmlImageProviderBase*
/// @param thread QThread*
///
bool q_qmlimageproviderbase_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQmlImageProviderBase*
/// @param interval int
///
int32_t q_qmlimageproviderbase_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQmlImageProviderBase*
/// @param time int64_t of nanoseconds
///
int32_t q_qmlimageproviderbase_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQmlImageProviderBase*
/// @param id int
///
void q_qmlimageproviderbase_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQmlImageProviderBase*
/// @param id enum Qt__TimerId
///
void q_qmlimageproviderbase_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QQmlImageProviderBase*
///
/// @return libqt_list of QObject*
///
libqt_list q_qmlimageproviderbase_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QQmlImageProviderBase*
/// @param parent QObject*
///
void q_qmlimageproviderbase_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QQmlImageProviderBase*
/// @param filterObj QObject*
///
void q_qmlimageproviderbase_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QQmlImageProviderBase*
/// @param obj QObject*
///
void q_qmlimageproviderbase_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_qmlimageproviderbase_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_qmlimageproviderbase_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QQmlImageProviderBase*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_qmlimageproviderbase_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_qmlimageproviderbase_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_qmlimageproviderbase_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQmlImageProviderBase*
///
bool q_qmlimageproviderbase_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQmlImageProviderBase*
/// @param receiver QObject*
///
bool q_qmlimageproviderbase_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_qmlimageproviderbase_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QQmlImageProviderBase*
///
void q_qmlimageproviderbase_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QQmlImageProviderBase*
///
void q_qmlimageproviderbase_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QQmlImageProviderBase*
/// @param name const char*
/// @param value QVariant*
///
bool q_qmlimageproviderbase_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QQmlImageProviderBase*
/// @param name const char*
///
QVariant* q_qmlimageproviderbase_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QQmlImageProviderBase*
///
const char** q_qmlimageproviderbase_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQmlImageProviderBase*
///
QBindingStorage* q_qmlimageproviderbase_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQmlImageProviderBase*
///
const QBindingStorage* q_qmlimageproviderbase_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQmlImageProviderBase*
///
void q_qmlimageproviderbase_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQmlImageProviderBase*
/// @param callback void func(QQmlImageProviderBase* self)
///
void q_qmlimageproviderbase_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QQmlImageProviderBase*
///
QObject* q_qmlimageproviderbase_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QQmlImageProviderBase*
/// @param classname const char*
///
bool q_qmlimageproviderbase_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QQmlImageProviderBase*
///
void q_qmlimageproviderbase_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQmlImageProviderBase*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_qmlimageproviderbase_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQmlImageProviderBase*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_qmlimageproviderbase_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_qmlimageproviderbase_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_qmlimageproviderbase_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QQmlImageProviderBase*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_qmlimageproviderbase_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQmlImageProviderBase*
/// @param signal const char*
///
bool q_qmlimageproviderbase_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQmlImageProviderBase*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_qmlimageproviderbase_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQmlImageProviderBase*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_qmlimageproviderbase_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQmlImageProviderBase*
/// @param receiver QObject*
/// @param member const char*
///
bool q_qmlimageproviderbase_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQmlImageProviderBase*
/// @param param1 QObject*
///
void q_qmlimageproviderbase_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQmlImageProviderBase*
/// @param callback void func(QQmlImageProviderBase* self, QObject* param1)
///
void q_qmlimageproviderbase_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QQmlImageProviderBase*
/// @param callback void func(QQmlImageProviderBase* self, const char* objectName)
///
void q_qmlimageproviderbase_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlimageproviderbase.html#dtor.QQmlImageProviderBase)
///
/// Delete this object from C++ memory.
///
/// @param self QQmlImageProviderBase*
///
void q_qmlimageproviderbase_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html)

/// q_qmlengine_new constructs a new QQmlEngine object.
///
QQmlEngine* q_qmlengine_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html)

/// q_qmlengine_new2 constructs a new QQmlEngine object.
///
/// @param p QObject*
///
QQmlEngine* q_qmlengine_new2(void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QQmlEngine*
///
const QMetaObject* q_qmlengine_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QQmlEngine*
/// @param callback const QMetaObject* func()
///
void q_qmlengine_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QQmlEngine*
///
const QMetaObject* q_qmlengine_super_meta_object(void* self);

/// @param self QQmlEngine*
/// @param param1 const char*
///
void* q_qmlengine_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QQmlEngine*
/// @param callback void* func(QQmlEngine* self, const char* param1)
///
void q_qmlengine_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QQmlEngine*
/// @param param1 const char*
///
void* q_qmlengine_super_metacast(void* self, const char* param1);

/// @param self QQmlEngine*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_qmlengine_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QQmlEngine*
/// @param callback int32_t func(QQmlEngine* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_qmlengine_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QQmlEngine*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_qmlengine_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_qmlengine_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#rootContext)
///
/// @param self QQmlEngine*
///
QQmlContext* q_qmlengine_root_context(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#clearComponentCache)
///
/// @param self QQmlEngine*
///
void q_qmlengine_clear_component_cache(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#trimComponentCache)
///
/// @param self QQmlEngine*
///
void q_qmlengine_trim_component_cache(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#clearSingletons)
///
/// @param self QQmlEngine*
///
void q_qmlengine_clear_singletons(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#importPathList)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QQmlEngine*
///
const char** q_qmlengine_import_path_list(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#setImportPathList)
///
/// @param self QQmlEngine*
/// @param paths const char**
///
void q_qmlengine_set_import_path_list(void* self, const char* paths[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#addImportPath)
///
/// @param self QQmlEngine*
/// @param dir const char*
///
void q_qmlengine_add_import_path(void* self, const char* dir);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#pluginPathList)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QQmlEngine*
///
const char** q_qmlengine_plugin_path_list(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#setPluginPathList)
///
/// @param self QQmlEngine*
/// @param paths const char**
///
void q_qmlengine_set_plugin_path_list(void* self, const char* paths[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#addPluginPath)
///
/// @param self QQmlEngine*
/// @param dir const char*
///
void q_qmlengine_add_plugin_path(void* self, const char* dir);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#addNamedBundle)
///
/// @param self QQmlEngine*
/// @param param1 const char*
/// @param param2 const char*
///
bool q_qmlengine_add_named_bundle(void* self, const char* param1, const char* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#importPlugin)
///
/// @param self QQmlEngine*
/// @param filePath const char*
/// @param uri const char*
/// @param errors libqt_list of QQmlError*
///
bool q_qmlengine_import_plugin(void* self, const char* filePath, const char* uri, libqt_list errors);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#setNetworkAccessManagerFactory)
///
/// @param self QQmlEngine*
/// @param networkAccessManagerFactory QQmlNetworkAccessManagerFactory*
///
void q_qmlengine_set_network_access_manager_factory(void* self, void* networkAccessManagerFactory);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#networkAccessManagerFactory)
///
/// @param self QQmlEngine*
///
QQmlNetworkAccessManagerFactory* q_qmlengine_network_access_manager_factory(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#networkAccessManager)
///
/// @param self QQmlEngine*
///
QNetworkAccessManager* q_qmlengine_network_access_manager(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#setUrlInterceptor)
///
/// @param self QQmlEngine*
/// @param urlInterceptor QQmlAbstractUrlInterceptor*
///
void q_qmlengine_set_url_interceptor(void* self, void* urlInterceptor);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#urlInterceptor)
///
/// @param self QQmlEngine*
///
QQmlAbstractUrlInterceptor* q_qmlengine_url_interceptor(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#addUrlInterceptor)
///
/// @param self QQmlEngine*
/// @param urlInterceptor QQmlAbstractUrlInterceptor*
///
void q_qmlengine_add_url_interceptor(void* self, void* urlInterceptor);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#removeUrlInterceptor)
///
/// @param self QQmlEngine*
/// @param urlInterceptor QQmlAbstractUrlInterceptor*
///
void q_qmlengine_remove_url_interceptor(void* self, void* urlInterceptor);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#urlInterceptors)
///
/// @param self QQmlEngine*
///
/// @return libqt_list of QQmlAbstractUrlInterceptor*
///
libqt_list q_qmlengine_url_interceptors(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#interceptUrl)
///
/// @param self QQmlEngine*
/// @param url QUrl*
/// @param type enum QQmlAbstractUrlInterceptor__DataType
///
QUrl* q_qmlengine_intercept_url(void* self, void* url, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#addImageProvider)
///
/// @param self QQmlEngine*
/// @param id const char*
/// @param param2 QQmlImageProviderBase*
///
void q_qmlengine_add_image_provider(void* self, const char* id, void* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#imageProvider)
///
/// @param self QQmlEngine*
/// @param id const char*
///
QQmlImageProviderBase* q_qmlengine_image_provider(void* self, const char* id);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#removeImageProvider)
///
/// @param self QQmlEngine*
/// @param id const char*
///
void q_qmlengine_remove_image_provider(void* self, const char* id);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#setIncubationController)
///
/// @param self QQmlEngine*
/// @param incubationController QQmlIncubationController*
///
void q_qmlengine_set_incubation_controller(void* self, void* incubationController);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#incubationController)
///
/// @param self QQmlEngine*
///
QQmlIncubationController* q_qmlengine_incubation_controller(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#setOfflineStoragePath)
///
/// @param self QQmlEngine*
/// @param dir const char*
///
void q_qmlengine_set_offline_storage_path(void* self, const char* dir);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#offlineStoragePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QQmlEngine*
///
const char* q_qmlengine_offline_storage_path(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#offlineStorageDatabaseFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QQmlEngine*
/// @param databaseName const char*
///
const char* q_qmlengine_offline_storage_database_file_path(void* self, const char* databaseName);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#baseUrl)
///
/// @param self QQmlEngine*
///
QUrl* q_qmlengine_base_url(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#setBaseUrl)
///
/// @param self QQmlEngine*
/// @param baseUrl QUrl*
///
void q_qmlengine_set_base_url(void* self, void* baseUrl);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#outputWarningsToStandardError)
///
/// @param self QQmlEngine*
///
bool q_qmlengine_output_warnings_to_standard_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#setOutputWarningsToStandardError)
///
/// @param self QQmlEngine*
/// @param outputWarningsToStandardError bool
///
void q_qmlengine_set_output_warnings_to_standard_error(void* self, bool outputWarningsToStandardError);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#markCurrentFunctionAsTranslationBinding)
///
/// @param self QQmlEngine*
///
void q_qmlengine_mark_current_function_as_translation_binding(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#captureProperty)
///
/// @param self QQmlEngine*
/// @param object QObject*
/// @param property QMetaProperty*
///
void q_qmlengine_capture_property(void* self, void* object, void* property);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#retranslate)
///
/// @param self QQmlEngine*
///
void q_qmlengine_retranslate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#offlineStoragePathChanged)
///
/// @param self QQmlEngine*
///
void q_qmlengine_offline_storage_path_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#offlineStoragePathChanged)
///
/// @param self QQmlEngine*
/// @param callback void func(QQmlEngine* self)
///
void q_qmlengine_on_offline_storage_path_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#contextForObject)
///
/// @param param1 QObject*
///
QQmlContext* q_qmlengine_context_for_object(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#setContextForObject)
///
/// @param param1 QObject*
/// @param param2 QQmlContext*
///
void q_qmlengine_set_context_for_object(void* param1, void* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#event)
///
/// @param self QQmlEngine*
/// @param param1 QEvent*
///
bool q_qmlengine_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QQmlEngine*
/// @param callback bool func(QQmlEngine* self, QEvent* param1)
///
void q_qmlengine_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#event)
///
/// Base class method implementation
///
/// @param self QQmlEngine*
/// @param param1 QEvent*
///
bool q_qmlengine_super_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#quit)
///
/// @param self QQmlEngine*
///
void q_qmlengine_quit(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#quit)
///
/// @param self QQmlEngine*
/// @param callback void func(QQmlEngine* self)
///
void q_qmlengine_on_quit(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#exit)
///
/// @param self QQmlEngine*
/// @param retCode int
///
void q_qmlengine_exit(void* self, int retCode);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#exit)
///
/// @param self QQmlEngine*
/// @param callback void func(QQmlEngine* self, int retCode)
///
void q_qmlengine_on_exit(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#warnings)
///
/// @param self QQmlEngine*
/// @param warnings libqt_list of QQmlError*
///
void q_qmlengine_warnings(void* self, libqt_list warnings);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#warnings)
///
/// @param self QQmlEngine*
/// @param callback void func(QQmlEngine* self, libqt_list of QQmlError* warnings)
///
void q_qmlengine_on_warnings(void* self, void (*callback)(void*, libqt_list));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_qmlengine_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_qmlengine_tr3(const char* s, const char* c, int n);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#globalObject)
///
/// @param self QQmlEngine*
///
QJSValue* q_qmlengine_global_object(void* self);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#evaluate)
///
/// @param self QQmlEngine*
/// @param program const char*
///
QJSValue* q_qmlengine_evaluate(void* self, const char* program);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#importModule)
///
/// @param self QQmlEngine*
/// @param fileName const char*
///
QJSValue* q_qmlengine_import_module(void* self, const char* fileName);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#registerModule)
///
/// @param self QQmlEngine*
/// @param moduleName const char*
/// @param value QJSValue*
///
bool q_qmlengine_register_module(void* self, const char* moduleName, void* value);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#newObject)
///
/// @param self QQmlEngine*
///
QJSValue* q_qmlengine_new_object(void* self);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#newSymbol)
///
/// @param self QQmlEngine*
/// @param name const char*
///
QJSValue* q_qmlengine_new_symbol(void* self, const char* name);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#newArray)
///
/// @param self QQmlEngine*
///
QJSValue* q_qmlengine_new_array(void* self);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#newQObject)
///
/// @param self QQmlEngine*
/// @param object QObject*
///
QJSValue* q_qmlengine_new_q_object(void* self, void* object);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#newQMetaObject)
///
/// @param self QQmlEngine*
/// @param metaObject QMetaObject*
///
QJSValue* q_qmlengine_new_q_meta_object(void* self, void* metaObject);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#newErrorObject)
///
/// @param self QQmlEngine*
/// @param errorType enum QJSValue__ErrorType
///
QJSValue* q_qmlengine_new_error_object(void* self, int32_t errorType);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#collectGarbage)
///
/// @param self QQmlEngine*
///
void q_qmlengine_collect_garbage(void* self);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#setObjectOwnership)
///
/// @param param1 QObject*
/// @param param2 enum QJSEngine__ObjectOwnership
///
void q_qmlengine_set_object_ownership(void* param1, int32_t param2);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#objectOwnership)
///
/// @param param1 QObject*
///
/// @return enum QJSEngine__ObjectOwnership
///
int32_t q_qmlengine_object_ownership(void* param1);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#installExtensions)
///
/// @param self QQmlEngine*
/// @param extensions flag of enum QJSEngine__Extension
///
void q_qmlengine_install_extensions(void* self, int32_t extensions);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#setInterrupted)
///
/// @param self QQmlEngine*
/// @param interrupted bool
///
void q_qmlengine_set_interrupted(void* self, bool interrupted);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#isInterrupted)
///
/// @param self QQmlEngine*
///
bool q_qmlengine_is_interrupted(void* self);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#throwError)
///
/// @param self QQmlEngine*
/// @param message const char*
///
void q_qmlengine_throw_error(void* self, const char* message);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#throwError)
///
/// @param self QQmlEngine*
/// @param errorType enum QJSValue__ErrorType
///
void q_qmlengine_throw_error2(void* self, int32_t errorType);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#throwError)
///
/// @param self QQmlEngine*
/// @param error QJSValue*
///
void q_qmlengine_throw_error3(void* self, void* error);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#hasError)
///
/// @param self QQmlEngine*
///
bool q_qmlengine_has_error(void* self);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#catchError)
///
/// @param self QQmlEngine*
///
QJSValue* q_qmlengine_catch_error(void* self);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#uiLanguage)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QQmlEngine*
///
const char* q_qmlengine_ui_language(void* self);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#setUiLanguage)
///
/// @param self QQmlEngine*
/// @param language const char*
///
void q_qmlengine_set_ui_language(void* self, const char* language);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#uiLanguageChanged)
///
/// @param self QQmlEngine*
///
void q_qmlengine_ui_language_changed(void* self);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#uiLanguageChanged)
///
/// @param self QQmlEngine*
/// @param callback void func(QQmlEngine* self)
///
void q_qmlengine_on_ui_language_changed(void* self, void (*callback)(void*));

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#evaluate)
///
/// @param self QQmlEngine*
/// @param program const char*
/// @param fileName const char*
///
QJSValue* q_qmlengine_evaluate2(void* self, const char* program, const char* fileName);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#evaluate)
///
/// @param self QQmlEngine*
/// @param program const char*
/// @param fileName const char*
/// @param lineNumber int
///
QJSValue* q_qmlengine_evaluate3(void* self, const char* program, const char* fileName, int lineNumber);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#evaluate)
///
/// @param self QQmlEngine*
/// @param program const char*
/// @param fileName const char*
/// @param lineNumber int
/// @param exceptionStackTrace const char**
///
QJSValue* q_qmlengine_evaluate4(void* self, const char* program, const char* fileName, int lineNumber, const char* exceptionStackTrace[static 1]);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#newArray)
///
/// @param self QQmlEngine*
/// @param length uint32_t
///
QJSValue* q_qmlengine_new_array1(void* self, uint32_t length);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#newErrorObject)
///
/// @param self QQmlEngine*
/// @param errorType enum QJSValue__ErrorType
/// @param message const char*
///
QJSValue* q_qmlengine_new_error_object2(void* self, int32_t errorType, const char* message);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#installExtensions)
///
/// @param self QQmlEngine*
/// @param extensions flag of enum QJSEngine__Extension
/// @param object QJSValue*
///
void q_qmlengine_install_extensions2(void* self, int32_t extensions, void* object);

/// Inherited from QJSEngine
///
/// [Upstream resources](https://doc.qt.io/qt-6/qjsengine.html#throwError)
///
/// @param self QQmlEngine*
/// @param errorType enum QJSValue__ErrorType
/// @param message const char*
///
void q_qmlengine_throw_error22(void* self, int32_t errorType, const char* message);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QQmlEngine*
///
const char* q_qmlengine_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QQmlEngine*
/// @param name const char*
///
void q_qmlengine_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QQmlEngine*
///
bool q_qmlengine_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QQmlEngine*
///
bool q_qmlengine_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QQmlEngine*
///
bool q_qmlengine_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QQmlEngine*
///
bool q_qmlengine_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QQmlEngine*
/// @param b bool
///
bool q_qmlengine_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QQmlEngine*
///
QThread* q_qmlengine_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QQmlEngine*
/// @param thread QThread*
///
bool q_qmlengine_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQmlEngine*
/// @param interval int
///
int32_t q_qmlengine_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQmlEngine*
/// @param time int64_t of nanoseconds
///
int32_t q_qmlengine_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQmlEngine*
/// @param id int
///
void q_qmlengine_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQmlEngine*
/// @param id enum Qt__TimerId
///
void q_qmlengine_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QQmlEngine*
///
/// @return libqt_list of QObject*
///
libqt_list q_qmlengine_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QQmlEngine*
/// @param parent QObject*
///
void q_qmlengine_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QQmlEngine*
/// @param filterObj QObject*
///
void q_qmlengine_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QQmlEngine*
/// @param obj QObject*
///
void q_qmlengine_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_qmlengine_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_qmlengine_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QQmlEngine*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_qmlengine_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_qmlengine_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_qmlengine_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQmlEngine*
///
bool q_qmlengine_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQmlEngine*
/// @param receiver QObject*
///
bool q_qmlengine_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_qmlengine_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QQmlEngine*
///
void q_qmlengine_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QQmlEngine*
///
void q_qmlengine_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QQmlEngine*
/// @param name const char*
/// @param value QVariant*
///
bool q_qmlengine_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QQmlEngine*
/// @param name const char*
///
QVariant* q_qmlengine_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QQmlEngine*
///
const char** q_qmlengine_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQmlEngine*
///
QBindingStorage* q_qmlengine_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQmlEngine*
///
const QBindingStorage* q_qmlengine_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQmlEngine*
///
void q_qmlengine_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQmlEngine*
/// @param callback void func(QQmlEngine* self)
///
void q_qmlengine_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QQmlEngine*
///
QObject* q_qmlengine_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QQmlEngine*
/// @param classname const char*
///
bool q_qmlengine_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QQmlEngine*
///
void q_qmlengine_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQmlEngine*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_qmlengine_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQmlEngine*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_qmlengine_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_qmlengine_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_qmlengine_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QQmlEngine*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_qmlengine_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQmlEngine*
/// @param signal const char*
///
bool q_qmlengine_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQmlEngine*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_qmlengine_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQmlEngine*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_qmlengine_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQmlEngine*
/// @param receiver QObject*
/// @param member const char*
///
bool q_qmlengine_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQmlEngine*
/// @param param1 QObject*
///
void q_qmlengine_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQmlEngine*
/// @param callback void func(QQmlEngine* self, QObject* param1)
///
void q_qmlengine_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlEngine*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_qmlengine_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlEngine*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_qmlengine_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlEngine*
/// @param callback bool func(QQmlEngine* self, QObject* watched, QEvent* event)
///
void q_qmlengine_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlEngine*
/// @param event QTimerEvent*
///
void q_qmlengine_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlEngine*
/// @param event QTimerEvent*
///
void q_qmlengine_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlEngine*
/// @param callback void func(QQmlEngine* self, QTimerEvent* event)
///
void q_qmlengine_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlEngine*
/// @param event QChildEvent*
///
void q_qmlengine_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlEngine*
/// @param event QChildEvent*
///
void q_qmlengine_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlEngine*
/// @param callback void func(QQmlEngine* self, QChildEvent* event)
///
void q_qmlengine_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlEngine*
/// @param event QEvent*
///
void q_qmlengine_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlEngine*
/// @param event QEvent*
///
void q_qmlengine_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlEngine*
/// @param callback void func(QQmlEngine* self, QEvent* event)
///
void q_qmlengine_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlEngine*
/// @param signal QMetaMethod*
///
void q_qmlengine_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlEngine*
/// @param signal QMetaMethod*
///
void q_qmlengine_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlEngine*
/// @param callback void func(QQmlEngine* self, QMetaMethod* signal)
///
void q_qmlengine_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlEngine*
/// @param signal QMetaMethod*
///
void q_qmlengine_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlEngine*
/// @param signal QMetaMethod*
///
void q_qmlengine_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlEngine*
/// @param callback void func(QQmlEngine* self, QMetaMethod* signal)
///
void q_qmlengine_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlEngine*
///
QObject* q_qmlengine_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlEngine*
///
QObject* q_qmlengine_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlEngine*
/// @param callback QObject* func()
///
void q_qmlengine_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlEngine*
///
int32_t q_qmlengine_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlEngine*
///
int32_t q_qmlengine_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlEngine*
/// @param callback int32_t func()
///
void q_qmlengine_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlEngine*
/// @param signal const char*
///
int32_t q_qmlengine_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlEngine*
/// @param signal const char*
///
int32_t q_qmlengine_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlEngine*
/// @param callback int32_t func(QQmlEngine* self, const char* signal)
///
void q_qmlengine_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlEngine*
/// @param signal QMetaMethod*
///
bool q_qmlengine_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlEngine*
/// @param signal QMetaMethod*
///
bool q_qmlengine_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlEngine*
/// @param callback bool func(QQmlEngine* self, QMetaMethod* signal)
///
void q_qmlengine_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QQmlEngine*
/// @param callback void func(QQmlEngine* self, const char* objectName)
///
void q_qmlengine_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#dtor.QQmlEngine)
///
/// Delete this object from C++ memory.
///
/// @param self QQmlEngine*
///
void q_qmlengine_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#public-types)

typedef enum {
    QQMLIMAGEPROVIDERBASE_IMAGETYPE_INVALID = 0,
    QQMLIMAGEPROVIDERBASE_IMAGETYPE_IMAGE = 1,
    QQMLIMAGEPROVIDERBASE_IMAGETYPE_PIXMAP = 2,
    QQMLIMAGEPROVIDERBASE_IMAGETYPE_TEXTURE = 3,
    QQMLIMAGEPROVIDERBASE_IMAGETYPE_IMAGERESPONSE = 4
} QQmlImageProviderBase__ImageType;

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengine.html#public-types)

typedef enum {
    QQMLIMAGEPROVIDERBASE_FLAG_FORCEASYNCHRONOUSIMAGELOADING = 1
} QQmlImageProviderBase__Flag;

#endif
