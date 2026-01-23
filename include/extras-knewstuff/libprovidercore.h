#pragma once
#ifndef SRC_EXTRAS_KNEWSTUFF_QT6C_LIBPROVIDERCORE_H
#define SRC_EXTRAS_KNEWSTUFF_QT6C_LIBPROVIDERCORE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/knscore-providercore.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KNSCore__ProviderCore*
///
const QMetaObject* k_nscore__providercore_meta_object(void* self);

/// @param self KNSCore__ProviderCore*
/// @param param1 const char*
///
void* k_nscore__providercore_metacast(void* self, const char* param1);

/// @param self KNSCore__ProviderCore*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_nscore__providercore_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_nscore__providercore_tr(const char* s);

/// [Upstream resources](https://api.kde.org/knscore-providercore.html#version)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KNSCore__ProviderCore*
///
const char* k_nscore__providercore_version(void* self);

/// [Upstream resources](https://api.kde.org/knscore-providercore.html#website)
///
/// @param self KNSCore__ProviderCore*
///
QUrl* k_nscore__providercore_website(void* self);

/// [Upstream resources](https://api.kde.org/knscore-providercore.html#host)
///
/// @param self KNSCore__ProviderCore*
///
QUrl* k_nscore__providercore_host(void* self);

/// [Upstream resources](https://api.kde.org/knscore-providercore.html#contactEmail)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KNSCore__ProviderCore*
///
const char* k_nscore__providercore_contact_email(void* self);

/// [Upstream resources](https://api.kde.org/knscore-providercore.html#supportsSsl)
///
/// @param self KNSCore__ProviderCore*
///
bool k_nscore__providercore_supports_ssl(void* self);

/// [Upstream resources](https://api.kde.org/knscore-providercore.html#basicsLoaded)
///
/// @param self KNSCore__ProviderCore*
///
void k_nscore__providercore_basics_loaded(void* self);

/// [Upstream resources](https://api.kde.org/knscore-providercore.html#basicsLoaded)
///
/// @param self KNSCore__ProviderCore*
/// @param callback void func(KNSCore__ProviderCore* self)
///
void k_nscore__providercore_on_basics_loaded(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_nscore__providercore_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_nscore__providercore_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self KNSCore__ProviderCore*
/// @param event QEvent*
///
bool k_nscore__providercore_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self KNSCore__ProviderCore*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_nscore__providercore_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KNSCore__ProviderCore*
///
const char* k_nscore__providercore_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KNSCore__ProviderCore*
/// @param name char*
///
void k_nscore__providercore_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KNSCore__ProviderCore*
///
bool k_nscore__providercore_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KNSCore__ProviderCore*
///
bool k_nscore__providercore_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KNSCore__ProviderCore*
///
bool k_nscore__providercore_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KNSCore__ProviderCore*
///
bool k_nscore__providercore_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KNSCore__ProviderCore*
/// @param b bool
///
bool k_nscore__providercore_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KNSCore__ProviderCore*
///
QThread* k_nscore__providercore_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KNSCore__ProviderCore*
/// @param thread QThread*
///
bool k_nscore__providercore_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KNSCore__ProviderCore*
/// @param interval int
///
int32_t k_nscore__providercore_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KNSCore__ProviderCore*
/// @param time int64_t of nanoseconds
///
int32_t k_nscore__providercore_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KNSCore__ProviderCore*
/// @param id int
///
void k_nscore__providercore_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KNSCore__ProviderCore*
/// @param id enum Qt__TimerId
///
void k_nscore__providercore_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KNSCore__ProviderCore*
///
/// @return libqt_list of QObject*
///
libqt_list k_nscore__providercore_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KNSCore__ProviderCore*
/// @param parent QObject*
///
void k_nscore__providercore_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KNSCore__ProviderCore*
/// @param filterObj QObject*
///
void k_nscore__providercore_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KNSCore__ProviderCore*
/// @param obj QObject*
///
void k_nscore__providercore_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_nscore__providercore_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KNSCore__ProviderCore*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_nscore__providercore_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_nscore__providercore_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_nscore__providercore_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KNSCore__ProviderCore*
///
void k_nscore__providercore_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KNSCore__ProviderCore*
///
void k_nscore__providercore_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KNSCore__ProviderCore*
/// @param name const char*
/// @param value QVariant*
///
bool k_nscore__providercore_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KNSCore__ProviderCore*
/// @param name const char*
///
QVariant* k_nscore__providercore_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KNSCore__ProviderCore*
///
const char** k_nscore__providercore_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KNSCore__ProviderCore*
///
QBindingStorage* k_nscore__providercore_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KNSCore__ProviderCore*
///
const QBindingStorage* k_nscore__providercore_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNSCore__ProviderCore*
///
void k_nscore__providercore_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNSCore__ProviderCore*
/// @param callback void func(KNSCore__ProviderCore* self)
///
void k_nscore__providercore_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KNSCore__ProviderCore*
///
QObject* k_nscore__providercore_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KNSCore__ProviderCore*
/// @param classname const char*
///
bool k_nscore__providercore_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KNSCore__ProviderCore*
///
void k_nscore__providercore_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KNSCore__ProviderCore*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_nscore__providercore_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KNSCore__ProviderCore*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_nscore__providercore_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KNSCore__ProviderCore*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_nscore__providercore_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_nscore__providercore_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KNSCore__ProviderCore*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_nscore__providercore_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNSCore__ProviderCore*
/// @param param1 QObject*
///
void k_nscore__providercore_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNSCore__ProviderCore*
/// @param callback void func(KNSCore__ProviderCore* self, QObject* param1)
///
void k_nscore__providercore_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KNSCore__ProviderCore*
/// @param callback void func(KNSCore__ProviderCore* self, const char* objectName)
///
void k_nscore__providercore_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KNSCore__ProviderCore*
///
void k_nscore__providercore_delete(void* self);

#endif
