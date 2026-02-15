#pragma once
#ifndef SRC_EXTRAS_ATTICA_QT6C_LIBPLATFORMDEPENDENT_V3_H
#define SRC_EXTRAS_ATTICA_QT6C_LIBPLATFORMDEPENDENT_V3_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/attica-platformdependentv3.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self Attica__PlatformDependentV3*
///
const QMetaObject* k_attica__platformdependentv3_meta_object(void* self);

/// @param self Attica__PlatformDependentV3*
/// @param param1 const char*
///
void* k_attica__platformdependentv3_metacast(void* self, const char* param1);

/// @param self Attica__PlatformDependentV3*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_attica__platformdependentv3_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_attica__platformdependentv3_tr(const char* s);

/// [Upstream resources](https://api.kde.org/attica-platformdependentv3.html#isReady)
///
/// @param self Attica__PlatformDependentV3*
///
bool k_attica__platformdependentv3_is_ready(void* self);

/// [Upstream resources](https://api.kde.org/attica-platformdependentv3.html#readyChanged)
///
/// @param self Attica__PlatformDependentV3*
///
void k_attica__platformdependentv3_ready_changed(void* self);

/// [Upstream resources](https://api.kde.org/attica-platformdependentv3.html#readyChanged)
///
/// @param self Attica__PlatformDependentV3*
/// @param callback void func(Attica__PlatformDependentV3* self)
///
void k_attica__platformdependentv3_on_ready_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_attica__platformdependentv3_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_attica__platformdependentv3_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self Attica__PlatformDependentV3*
/// @param event QEvent*
///
bool k_attica__platformdependentv3_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self Attica__PlatformDependentV3*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_attica__platformdependentv3_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Attica__PlatformDependentV3*
///
const char* k_attica__platformdependentv3_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self Attica__PlatformDependentV3*
/// @param name const char*
///
void k_attica__platformdependentv3_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self Attica__PlatformDependentV3*
///
bool k_attica__platformdependentv3_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self Attica__PlatformDependentV3*
///
bool k_attica__platformdependentv3_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self Attica__PlatformDependentV3*
///
bool k_attica__platformdependentv3_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self Attica__PlatformDependentV3*
///
bool k_attica__platformdependentv3_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self Attica__PlatformDependentV3*
/// @param b bool
///
bool k_attica__platformdependentv3_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self Attica__PlatformDependentV3*
///
QThread* k_attica__platformdependentv3_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Attica__PlatformDependentV3*
/// @param thread QThread*
///
bool k_attica__platformdependentv3_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Attica__PlatformDependentV3*
/// @param interval int
///
int32_t k_attica__platformdependentv3_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Attica__PlatformDependentV3*
/// @param time int64_t of nanoseconds
///
int32_t k_attica__platformdependentv3_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Attica__PlatformDependentV3*
/// @param id int
///
void k_attica__platformdependentv3_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Attica__PlatformDependentV3*
/// @param id enum Qt__TimerId
///
void k_attica__platformdependentv3_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self Attica__PlatformDependentV3*
///
/// @return libqt_list of QObject*
///
libqt_list k_attica__platformdependentv3_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self Attica__PlatformDependentV3*
/// @param parent QObject*
///
void k_attica__platformdependentv3_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self Attica__PlatformDependentV3*
/// @param filterObj QObject*
///
void k_attica__platformdependentv3_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self Attica__PlatformDependentV3*
/// @param obj QObject*
///
void k_attica__platformdependentv3_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_attica__platformdependentv3_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_attica__platformdependentv3_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Attica__PlatformDependentV3*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_attica__platformdependentv3_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_attica__platformdependentv3_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_attica__platformdependentv3_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Attica__PlatformDependentV3*
///
bool k_attica__platformdependentv3_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Attica__PlatformDependentV3*
/// @param receiver QObject*
///
bool k_attica__platformdependentv3_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_attica__platformdependentv3_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self Attica__PlatformDependentV3*
///
void k_attica__platformdependentv3_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self Attica__PlatformDependentV3*
///
void k_attica__platformdependentv3_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self Attica__PlatformDependentV3*
/// @param name const char*
/// @param value QVariant*
///
bool k_attica__platformdependentv3_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self Attica__PlatformDependentV3*
/// @param name const char*
///
QVariant* k_attica__platformdependentv3_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self Attica__PlatformDependentV3*
///
const char** k_attica__platformdependentv3_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Attica__PlatformDependentV3*
///
QBindingStorage* k_attica__platformdependentv3_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Attica__PlatformDependentV3*
///
const QBindingStorage* k_attica__platformdependentv3_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Attica__PlatformDependentV3*
///
void k_attica__platformdependentv3_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Attica__PlatformDependentV3*
/// @param callback void func(Attica__PlatformDependentV3* self)
///
void k_attica__platformdependentv3_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self Attica__PlatformDependentV3*
///
QObject* k_attica__platformdependentv3_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self Attica__PlatformDependentV3*
/// @param classname const char*
///
bool k_attica__platformdependentv3_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self Attica__PlatformDependentV3*
///
void k_attica__platformdependentv3_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Attica__PlatformDependentV3*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_attica__platformdependentv3_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Attica__PlatformDependentV3*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_attica__platformdependentv3_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_attica__platformdependentv3_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_attica__platformdependentv3_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Attica__PlatformDependentV3*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_attica__platformdependentv3_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Attica__PlatformDependentV3*
/// @param signal const char*
///
bool k_attica__platformdependentv3_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Attica__PlatformDependentV3*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_attica__platformdependentv3_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Attica__PlatformDependentV3*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_attica__platformdependentv3_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self Attica__PlatformDependentV3*
/// @param receiver QObject*
/// @param member const char*
///
bool k_attica__platformdependentv3_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Attica__PlatformDependentV3*
/// @param param1 QObject*
///
void k_attica__platformdependentv3_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Attica__PlatformDependentV3*
/// @param callback void func(Attica__PlatformDependentV3* self, QObject* param1)
///
void k_attica__platformdependentv3_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from Attica::PlatformDependentV2
///
/// [Upstream resources](https://api.kde.org/attica-platformdependentv2.html#deleteResource)
///
/// @param self Attica__PlatformDependentV3*
/// @param request QNetworkRequest*
///
QNetworkReply* k_attica__platformdependentv3_delete_resource(void* self, void* request);

/// Inherited from Attica::PlatformDependentV2
///
/// [Upstream resources](https://api.kde.org/attica-platformdependentv2.html#put)
///
/// @param self Attica__PlatformDependentV3*
/// @param request QNetworkRequest*
/// @param data QIODevice*
///
QNetworkReply* k_attica__platformdependentv3_put(void* self, void* request, void* data);

/// Inherited from Attica::PlatformDependentV2
///
/// [Upstream resources](https://api.kde.org/attica-platformdependentv2.html#put)
///
/// @param self Attica__PlatformDependentV3*
/// @param request QNetworkRequest*
/// @param data char*
///
QNetworkReply* k_attica__platformdependentv3_put2(void* self, void* request, char* data);

/// Inherited from Attica::PlatformDependentV2
///
/// [Upstream resources](https://api.kde.org/attica-platformdependentv2.html#operator-eq)
///
/// @param self Attica__PlatformDependentV3*
/// @param param1 Attica__PlatformDependentV2*
///
void k_attica__platformdependentv3_operator_assign(void* self, void* param1);

/// Inherited from Attica::PlatformDependent
///
/// [Upstream resources](https://api.kde.org/attica-platformdependent.html#getDefaultProviderFiles)
///
/// @param self Attica__PlatformDependentV3*
///
/// @return libqt_list of QUrl*
///
libqt_list k_attica__platformdependentv3_get_default_provider_files(void* self);

/// Inherited from Attica::PlatformDependent
///
/// [Upstream resources](https://api.kde.org/attica-platformdependent.html#addDefaultProviderFile)
///
/// @param self Attica__PlatformDependentV3*
/// @param url QUrl*
///
void k_attica__platformdependentv3_add_default_provider_file(void* self, void* url);

/// Inherited from Attica::PlatformDependent
///
/// [Upstream resources](https://api.kde.org/attica-platformdependent.html#removeDefaultProviderFile)
///
/// @param self Attica__PlatformDependentV3*
/// @param url QUrl*
///
void k_attica__platformdependentv3_remove_default_provider_file(void* self, void* url);

/// Inherited from Attica::PlatformDependent
///
/// [Upstream resources](https://api.kde.org/attica-platformdependent.html#enableProvider)
///
/// @param self Attica__PlatformDependentV3*
/// @param baseUrl QUrl*
/// @param enabled bool
///
void k_attica__platformdependentv3_enable_provider(void* self, void* baseUrl, bool enabled);

/// Inherited from Attica::PlatformDependent
///
/// [Upstream resources](https://api.kde.org/attica-platformdependent.html#isEnabled)
///
/// @param self Attica__PlatformDependentV3*
/// @param baseUrl QUrl*
///
bool k_attica__platformdependentv3_is_enabled(void* self, void* baseUrl);

/// Inherited from Attica::PlatformDependent
///
/// [Upstream resources](https://api.kde.org/attica-platformdependent.html#hasCredentials)
///
/// @param self Attica__PlatformDependentV3*
/// @param baseUrl QUrl*
///
bool k_attica__platformdependentv3_has_credentials(void* self, void* baseUrl);

/// Inherited from Attica::PlatformDependent
///
/// [Upstream resources](https://api.kde.org/attica-platformdependent.html#loadCredentials)
///
/// @param self Attica__PlatformDependentV3*
/// @param baseUrl QUrl*
/// @param user const char*
/// @param password const char*
///
bool k_attica__platformdependentv3_load_credentials(void* self, void* baseUrl, const char* user, const char* password);

/// Inherited from Attica::PlatformDependent
///
/// [Upstream resources](https://api.kde.org/attica-platformdependent.html#askForCredentials)
///
/// @param self Attica__PlatformDependentV3*
/// @param baseUrl QUrl*
/// @param user const char*
/// @param password const char*
///
bool k_attica__platformdependentv3_ask_for_credentials(void* self, void* baseUrl, const char* user, const char* password);

/// Inherited from Attica::PlatformDependent
///
/// [Upstream resources](https://api.kde.org/attica-platformdependent.html#saveCredentials)
///
/// @param self Attica__PlatformDependentV3*
/// @param baseUrl QUrl*
/// @param user const char*
/// @param password const char*
///
bool k_attica__platformdependentv3_save_credentials(void* self, void* baseUrl, const char* user, const char* password);

/// Inherited from Attica::PlatformDependent
///
/// [Upstream resources](https://api.kde.org/attica-platformdependent.html#get)
///
/// @param self Attica__PlatformDependentV3*
/// @param request QNetworkRequest*
///
QNetworkReply* k_attica__platformdependentv3_get(void* self, void* request);

/// Inherited from Attica::PlatformDependent
///
/// [Upstream resources](https://api.kde.org/attica-platformdependent.html#post)
///
/// @param self Attica__PlatformDependentV3*
/// @param request QNetworkRequest*
/// @param data QIODevice*
///
QNetworkReply* k_attica__platformdependentv3_post(void* self, void* request, void* data);

/// Inherited from Attica::PlatformDependent
///
/// [Upstream resources](https://api.kde.org/attica-platformdependent.html#post)
///
/// @param self Attica__PlatformDependentV3*
/// @param request QNetworkRequest*
/// @param data char*
///
QNetworkReply* k_attica__platformdependentv3_post2(void* self, void* request, char* data);

/// Inherited from Attica::PlatformDependent
///
/// [Upstream resources](https://api.kde.org/attica-platformdependent.html#setNam)
///
/// @param self Attica__PlatformDependentV3*
/// @param nam QNetworkAccessManager*
///
void k_attica__platformdependentv3_set_nam(void* self, void* nam);

/// Inherited from Attica::PlatformDependent
///
/// [Upstream resources](https://api.kde.org/attica-platformdependent.html#nam)
///
/// @param self Attica__PlatformDependentV3*
///
QNetworkAccessManager* k_attica__platformdependentv3_nam(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self Attica__PlatformDependentV3*
/// @param callback void func(Attica__PlatformDependentV3* self, const char* objectName)
///
void k_attica__platformdependentv3_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self Attica__PlatformDependentV3*
///
void k_attica__platformdependentv3_delete(void* self);

#endif
