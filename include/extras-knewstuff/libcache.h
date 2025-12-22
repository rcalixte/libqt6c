#pragma once
#ifndef SRC_EXTRAS_KNEWSTUFF_QT6C_LIBCACHE_H
#define SRC_EXTRAS_KNEWSTUFF_QT6C_LIBCACHE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/knscore-cache.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KNSCore__Cache*
///
const QMetaObject* k_nscore__cache_meta_object(void* self);

/// @param self KNSCore__Cache*
/// @param param1 const char*
///
void* k_nscore__cache_metacast(void* self, const char* param1);

/// @param self KNSCore__Cache*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_nscore__cache_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_nscore__cache_tr(const char* s);

/// [Upstream resources](https://api.kde.org/knscore-cache.html#readRegistry)
///
/// @param self KNSCore__Cache*
///
void k_nscore__cache_read_registry(void* self);

/// [Upstream resources](https://api.kde.org/knscore-cache.html#registryForProvider)
///
/// @param self KNSCore__Cache*
/// @param providerId const char*
///
libqt_list /* of KNSCore__Entry* */ k_nscore__cache_registry_for_provider(void* self, const char* providerId);

/// [Upstream resources](https://api.kde.org/knscore-cache.html#registry)
///
/// @param self KNSCore__Cache*
///
libqt_list /* of KNSCore__Entry* */ k_nscore__cache_registry(void* self);

/// [Upstream resources](https://api.kde.org/knscore-cache.html#writeRegistry)
///
/// @param self KNSCore__Cache*
///
void k_nscore__cache_write_registry(void* self);

/// [Upstream resources](https://api.kde.org/knscore-cache.html#insertRequest)
///
/// @param self KNSCore__Cache*
/// @param param1 KNSCore__Provider__SearchRequest*
/// @param entries libqt_list /* of KNSCore__Entry* */
///
void k_nscore__cache_insert_request(void* self, void* param1, libqt_list entries);

/// [Upstream resources](https://api.kde.org/knscore-cache.html#requestFromCache)
///
/// @param self KNSCore__Cache*
/// @param param1 KNSCore__Provider__SearchRequest*
///
libqt_list /* of KNSCore__Entry* */ k_nscore__cache_request_from_cache(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/knscore-cache.html#removeDeletedEntries)
///
/// @param self KNSCore__Cache*
///
void k_nscore__cache_remove_deleted_entries(void* self);

/// [Upstream resources](https://api.kde.org/knscore-cache.html#entryFromInstalledFile)
///
/// @param self KNSCore__Cache*
/// @param installedFile const char*
///
KNSCore__Entry* k_nscore__cache_entry_from_installed_file(void* self, const char* installedFile);

/// [Upstream resources](https://api.kde.org/knscore-cache.html#entryChanged)
///
/// @param self KNSCore__Cache*
/// @param entry KNSCore__Entry*
///
void k_nscore__cache_entry_changed(void* self, void* entry);

/// [Upstream resources](https://api.kde.org/knscore-cache.html#registerChangedEntry)
///
/// @param self KNSCore__Cache*
/// @param entry KNSCore__Entry*
///
void k_nscore__cache_register_changed_entry(void* self, void* entry);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_nscore__cache_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_nscore__cache_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self KNSCore__Cache*
/// @param event QEvent*
///
bool k_nscore__cache_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self KNSCore__Cache*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_nscore__cache_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KNSCore__Cache*
///
const char* k_nscore__cache_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KNSCore__Cache*
/// @param name char*
///
void k_nscore__cache_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KNSCore__Cache*
///
bool k_nscore__cache_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KNSCore__Cache*
///
bool k_nscore__cache_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KNSCore__Cache*
///
bool k_nscore__cache_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KNSCore__Cache*
///
bool k_nscore__cache_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KNSCore__Cache*
/// @param b bool
///
bool k_nscore__cache_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KNSCore__Cache*
///
QThread* k_nscore__cache_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KNSCore__Cache*
/// @param thread QThread*
///
bool k_nscore__cache_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KNSCore__Cache*
/// @param interval int
///
int32_t k_nscore__cache_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KNSCore__Cache*
/// @param id int
///
void k_nscore__cache_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KNSCore__Cache*
/// @param id enum Qt__TimerId
///
void k_nscore__cache_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KNSCore__Cache*
///
libqt_list /* of QObject* */ k_nscore__cache_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KNSCore__Cache*
/// @param parent QObject*
///
void k_nscore__cache_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KNSCore__Cache*
/// @param filterObj QObject*
///
void k_nscore__cache_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KNSCore__Cache*
/// @param obj QObject*
///
void k_nscore__cache_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_nscore__cache_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KNSCore__Cache*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_nscore__cache_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_nscore__cache_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_nscore__cache_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KNSCore__Cache*
///
void k_nscore__cache_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KNSCore__Cache*
///
void k_nscore__cache_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KNSCore__Cache*
/// @param name const char*
/// @param value QVariant*
///
bool k_nscore__cache_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KNSCore__Cache*
/// @param name const char*
///
QVariant* k_nscore__cache_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KNSCore__Cache*
///
const char** k_nscore__cache_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KNSCore__Cache*
///
QBindingStorage* k_nscore__cache_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KNSCore__Cache*
///
const QBindingStorage* k_nscore__cache_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNSCore__Cache*
///
void k_nscore__cache_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNSCore__Cache*
/// @param callback void func(KNSCore__Cache* self)
///
void k_nscore__cache_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KNSCore__Cache*
///
QObject* k_nscore__cache_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KNSCore__Cache*
/// @param classname const char*
///
bool k_nscore__cache_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KNSCore__Cache*
///
void k_nscore__cache_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KNSCore__Cache*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_nscore__cache_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KNSCore__Cache*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_nscore__cache_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* k_nscore__cache_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KNSCore__Cache*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_nscore__cache_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNSCore__Cache*
/// @param param1 QObject*
///
void k_nscore__cache_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNSCore__Cache*
/// @param callback void func(KNSCore__Cache* self, QObject* param1)
///
void k_nscore__cache_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KNSCore__Cache*
/// @param callback void func(KNSCore__Cache* self, const char* objectName)
///
void k_nscore__cache_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KNSCore__Cache*
///
void k_nscore__cache_delete(void* self);

#endif
