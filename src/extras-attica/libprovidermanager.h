#pragma once
#ifndef SRC_EXTRAS_ATTICA_QT6C_LIBPROVIDERMANAGER_H
#define SRC_EXTRAS_ATTICA_QT6C_LIBPROVIDERMANAGER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/attica-providermanager.html)

/// k_attica__providermanager_new constructs a new Attica::ProviderManager object.
///
Attica__ProviderManager* k_attica__providermanager_new();

/// [Upstream resources](https://api.kde.org/attica-providermanager.html)

/// k_attica__providermanager_new2 constructs a new Attica::ProviderManager object.
///
/// @param flags flag of enum Attica__ProviderManager__ProviderFlag
///
Attica__ProviderManager* k_attica__providermanager_new2(const int32_t* flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self Attica__ProviderManager*
///
const QMetaObject* k_attica__providermanager_meta_object(void* self);

/// @param self Attica__ProviderManager*
/// @param param1 const char*
///
void* k_attica__providermanager_metacast(void* self, const char* param1);

/// @param self Attica__ProviderManager*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_attica__providermanager_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self Attica__ProviderManager*
/// @param callback int32_t func(Attica__ProviderManager* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_attica__providermanager_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self Attica__ProviderManager*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_attica__providermanager_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_attica__providermanager_tr(const char* s);

/// [Upstream resources](https://api.kde.org/attica-providermanager.html#loadDefaultProviders)
///
/// @param self Attica__ProviderManager*
///
void k_attica__providermanager_load_default_providers(void* self);

/// [Upstream resources](https://api.kde.org/attica-providermanager.html#defaultProviderFiles)
///
/// @param self Attica__ProviderManager*
///
/// @return libqt_list of QUrl*
///
libqt_list k_attica__providermanager_default_provider_files(void* self);

/// [Upstream resources](https://api.kde.org/attica-providermanager.html#addProviderFileToDefaultProviders)
///
/// @param self Attica__ProviderManager*
/// @param url QUrl*
///
void k_attica__providermanager_add_provider_file_to_default_providers(void* self, void* url);

/// [Upstream resources](https://api.kde.org/attica-providermanager.html#removeProviderFileFromDefaultProviders)
///
/// @param self Attica__ProviderManager*
/// @param url QUrl*
///
void k_attica__providermanager_remove_provider_file_from_default_providers(void* self, void* url);

/// [Upstream resources](https://api.kde.org/attica-providermanager.html#setAuthenticationSuppressed)
///
/// @param self Attica__ProviderManager*
/// @param suppressed bool
///
void k_attica__providermanager_set_authentication_suppressed(void* self, bool suppressed);

/// [Upstream resources](https://api.kde.org/attica-providermanager.html#clear)
///
/// @param self Attica__ProviderManager*
///
void k_attica__providermanager_clear(void* self);

/// [Upstream resources](https://api.kde.org/attica-providermanager.html#addProviderFromXml)
///
/// @param self Attica__ProviderManager*
/// @param providerXml const char*
///
void k_attica__providermanager_add_provider_from_xml(void* self, const char* providerXml);

/// [Upstream resources](https://api.kde.org/attica-providermanager.html#addProviderFile)
///
/// @param self Attica__ProviderManager*
/// @param file QUrl*
///
void k_attica__providermanager_add_provider_file(void* self, void* file);

/// [Upstream resources](https://api.kde.org/attica-providermanager.html#providerFiles)
///
/// @param self Attica__ProviderManager*
///
/// @return libqt_list of QUrl*
///
libqt_list k_attica__providermanager_provider_files(void* self);

/// [Upstream resources](https://api.kde.org/attica-providermanager.html#providers)
///
/// @param self Attica__ProviderManager*
///
/// @return libqt_list of Attica__Provider*
///
libqt_list k_attica__providermanager_providers(void* self);

/// [Upstream resources](https://api.kde.org/attica-providermanager.html#contains)
///
/// @param self Attica__ProviderManager*
/// @param provider QUrl*
///
bool k_attica__providermanager_contains(void* self, void* provider);

/// [Upstream resources](https://api.kde.org/attica-providermanager.html#providerByUrl)
///
/// @param self Attica__ProviderManager*
/// @param url QUrl*
///
Attica__Provider* k_attica__providermanager_provider_by_url(void* self, void* url);

/// [Upstream resources](https://api.kde.org/attica-providermanager.html#providerFor)
///
/// @param self Attica__ProviderManager*
/// @param url QUrl*
///
Attica__Provider* k_attica__providermanager_provider_for(void* self, void* url);

/// [Upstream resources](https://api.kde.org/attica-providermanager.html#providerAdded)
///
/// @param self Attica__ProviderManager*
/// @param provider Attica__Provider*
///
void k_attica__providermanager_provider_added(void* self, void* provider);

/// [Upstream resources](https://api.kde.org/attica-providermanager.html#providerAdded)
///
/// @param self Attica__ProviderManager*
/// @param callback void func(Attica__ProviderManager* self, Attica__Provider* provider)
///
void k_attica__providermanager_on_provider_added(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/attica-providermanager.html#defaultProvidersLoaded)
///
/// @param self Attica__ProviderManager*
///
void k_attica__providermanager_default_providers_loaded(void* self);

/// [Upstream resources](https://api.kde.org/attica-providermanager.html#defaultProvidersLoaded)
///
/// @param self Attica__ProviderManager*
/// @param callback void func(Attica__ProviderManager* self)
///
void k_attica__providermanager_on_default_providers_loaded(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/attica-providermanager.html#authenticationCredentialsMissing)
///
/// @param self Attica__ProviderManager*
/// @param provider Attica__Provider*
///
void k_attica__providermanager_authentication_credentials_missing(void* self, void* provider);

/// [Upstream resources](https://api.kde.org/attica-providermanager.html#authenticationCredentialsMissing)
///
/// @param self Attica__ProviderManager*
/// @param callback void func(Attica__ProviderManager* self, Attica__Provider* provider)
///
void k_attica__providermanager_on_authentication_credentials_missing(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/attica-providermanager.html#failedToLoad)
///
/// @param self Attica__ProviderManager*
/// @param provider QUrl*
/// @param error enum QNetworkReply__NetworkError
///
void k_attica__providermanager_failed_to_load(void* self, void* provider, int32_t error);

/// [Upstream resources](https://api.kde.org/attica-providermanager.html#failedToLoad)
///
/// @param self Attica__ProviderManager*
/// @param callback void func(Attica__ProviderManager* self, QUrl* provider, enum QNetworkReply__NetworkError error)
///
void k_attica__providermanager_on_failed_to_load(void* self, void (*callback)(void*, void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_attica__providermanager_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_attica__providermanager_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Attica__ProviderManager*
///
const char* k_attica__providermanager_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self Attica__ProviderManager*
/// @param name char*
///
void k_attica__providermanager_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self Attica__ProviderManager*
///
bool k_attica__providermanager_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self Attica__ProviderManager*
///
bool k_attica__providermanager_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self Attica__ProviderManager*
///
bool k_attica__providermanager_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self Attica__ProviderManager*
///
bool k_attica__providermanager_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self Attica__ProviderManager*
/// @param b bool
///
bool k_attica__providermanager_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self Attica__ProviderManager*
///
QThread* k_attica__providermanager_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Attica__ProviderManager*
/// @param thread QThread*
///
bool k_attica__providermanager_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Attica__ProviderManager*
/// @param interval int
///
int32_t k_attica__providermanager_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Attica__ProviderManager*
/// @param id int
///
void k_attica__providermanager_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Attica__ProviderManager*
/// @param id enum Qt__TimerId
///
void k_attica__providermanager_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self Attica__ProviderManager*
///
/// @return libqt_list of QObject*
///
libqt_list k_attica__providermanager_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self Attica__ProviderManager*
/// @param parent QObject*
///
void k_attica__providermanager_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self Attica__ProviderManager*
/// @param filterObj QObject*
///
void k_attica__providermanager_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self Attica__ProviderManager*
/// @param obj QObject*
///
void k_attica__providermanager_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_attica__providermanager_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Attica__ProviderManager*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_attica__providermanager_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_attica__providermanager_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_attica__providermanager_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self Attica__ProviderManager*
///
void k_attica__providermanager_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self Attica__ProviderManager*
///
void k_attica__providermanager_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self Attica__ProviderManager*
/// @param name const char*
/// @param value QVariant*
///
bool k_attica__providermanager_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self Attica__ProviderManager*
/// @param name const char*
///
QVariant* k_attica__providermanager_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self Attica__ProviderManager*
///
const char** k_attica__providermanager_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Attica__ProviderManager*
///
QBindingStorage* k_attica__providermanager_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Attica__ProviderManager*
///
const QBindingStorage* k_attica__providermanager_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Attica__ProviderManager*
///
void k_attica__providermanager_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Attica__ProviderManager*
/// @param callback void func(Attica__ProviderManager* self)
///
void k_attica__providermanager_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self Attica__ProviderManager*
///
QObject* k_attica__providermanager_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self Attica__ProviderManager*
/// @param classname const char*
///
bool k_attica__providermanager_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self Attica__ProviderManager*
///
void k_attica__providermanager_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Attica__ProviderManager*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_attica__providermanager_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Attica__ProviderManager*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_attica__providermanager_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* k_attica__providermanager_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Attica__ProviderManager*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_attica__providermanager_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Attica__ProviderManager*
/// @param param1 QObject*
///
void k_attica__providermanager_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Attica__ProviderManager*
/// @param callback void func(Attica__ProviderManager* self, QObject* param1)
///
void k_attica__providermanager_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Attica__ProviderManager*
/// @param event QEvent*
///
bool k_attica__providermanager_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Attica__ProviderManager*
/// @param event QEvent*
///
bool k_attica__providermanager_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Attica__ProviderManager*
/// @param callback bool func(Attica__ProviderManager* self, QEvent* event)
///
void k_attica__providermanager_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Attica__ProviderManager*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_attica__providermanager_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Attica__ProviderManager*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_attica__providermanager_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Attica__ProviderManager*
/// @param callback bool func(Attica__ProviderManager* self, QObject* watched, QEvent* event)
///
void k_attica__providermanager_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Attica__ProviderManager*
/// @param event QTimerEvent*
///
void k_attica__providermanager_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Attica__ProviderManager*
/// @param event QTimerEvent*
///
void k_attica__providermanager_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Attica__ProviderManager*
/// @param callback void func(Attica__ProviderManager* self, QTimerEvent* event)
///
void k_attica__providermanager_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Attica__ProviderManager*
/// @param event QChildEvent*
///
void k_attica__providermanager_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Attica__ProviderManager*
/// @param event QChildEvent*
///
void k_attica__providermanager_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Attica__ProviderManager*
/// @param callback void func(Attica__ProviderManager* self, QChildEvent* event)
///
void k_attica__providermanager_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Attica__ProviderManager*
/// @param event QEvent*
///
void k_attica__providermanager_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Attica__ProviderManager*
/// @param event QEvent*
///
void k_attica__providermanager_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Attica__ProviderManager*
/// @param callback void func(Attica__ProviderManager* self, QEvent* event)
///
void k_attica__providermanager_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Attica__ProviderManager*
/// @param signal QMetaMethod*
///
void k_attica__providermanager_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Attica__ProviderManager*
/// @param signal QMetaMethod*
///
void k_attica__providermanager_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Attica__ProviderManager*
/// @param callback void func(Attica__ProviderManager* self, QMetaMethod* signal)
///
void k_attica__providermanager_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Attica__ProviderManager*
/// @param signal QMetaMethod*
///
void k_attica__providermanager_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Attica__ProviderManager*
/// @param signal QMetaMethod*
///
void k_attica__providermanager_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Attica__ProviderManager*
/// @param callback void func(Attica__ProviderManager* self, QMetaMethod* signal)
///
void k_attica__providermanager_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Attica__ProviderManager*
///
QObject* k_attica__providermanager_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Attica__ProviderManager*
///
QObject* k_attica__providermanager_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Attica__ProviderManager*
/// @param callback QObject* func()
///
void k_attica__providermanager_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Attica__ProviderManager*
///
int32_t k_attica__providermanager_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Attica__ProviderManager*
///
int32_t k_attica__providermanager_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Attica__ProviderManager*
/// @param callback int32_t func()
///
void k_attica__providermanager_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Attica__ProviderManager*
/// @param signal const char*
///
int32_t k_attica__providermanager_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Attica__ProviderManager*
/// @param signal const char*
///
int32_t k_attica__providermanager_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Attica__ProviderManager*
/// @param callback int32_t func(Attica__ProviderManager* self, const char* signal)
///
void k_attica__providermanager_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Attica__ProviderManager*
/// @param signal QMetaMethod*
///
bool k_attica__providermanager_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Attica__ProviderManager*
/// @param signal QMetaMethod*
///
bool k_attica__providermanager_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Attica__ProviderManager*
/// @param callback bool func(Attica__ProviderManager* self, QMetaMethod* signal)
///
void k_attica__providermanager_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self Attica__ProviderManager*
/// @param callback void func(Attica__ProviderManager* self, const char* objectName)
///
void k_attica__providermanager_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self Attica__ProviderManager*
///
void k_attica__providermanager_delete(void* self);

/// [Upstream resources](https://api.kde.org/attica-providermanager.html#public-types)

typedef enum {
    ATTICA_PROVIDERMANAGER_PROVIDERFLAG_NOFLAGS = 0,
    ATTICA_PROVIDERMANAGER_PROVIDERFLAG_DISABLEPLUGINS = 1
} Attica__ProviderManager__ProviderFlag;

#endif
