#pragma once
#ifndef SRC_NETWORK_QT6C_LIBQNETWORKDISKCACHE_H
#define SRC_NETWORK_QT6C_LIBQNETWORKDISKCACHE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html)

/// q_networkdiskcache_new constructs a new QNetworkDiskCache object.
///
QNetworkDiskCache* q_networkdiskcache_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html)

/// q_networkdiskcache_new2 constructs a new QNetworkDiskCache object.
///
/// @param parent QObject*
///
QNetworkDiskCache* q_networkdiskcache_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QNetworkDiskCache*
///
const QMetaObject* q_networkdiskcache_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QNetworkDiskCache*
/// @param callback const QMetaObject* func()
///
void q_networkdiskcache_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QNetworkDiskCache*
///
const QMetaObject* q_networkdiskcache_qbase_meta_object(void* self);

/// @param self QNetworkDiskCache*
/// @param param1 const char*
///
void* q_networkdiskcache_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QNetworkDiskCache*
/// @param callback void* func(QNetworkDiskCache* self, const char* param1)
///
void q_networkdiskcache_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QNetworkDiskCache*
/// @param param1 const char*
///
void* q_networkdiskcache_qbase_metacast(void* self, const char* param1);

/// @param self QNetworkDiskCache*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_networkdiskcache_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QNetworkDiskCache*
/// @param callback int32_t func(QNetworkDiskCache* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_networkdiskcache_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QNetworkDiskCache*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_networkdiskcache_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_networkdiskcache_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#cacheDirectory)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QNetworkDiskCache*
///
const char* q_networkdiskcache_cache_directory(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#setCacheDirectory)
///
/// @param self QNetworkDiskCache*
/// @param cacheDir const char*
///
void q_networkdiskcache_set_cache_directory(void* self, const char* cacheDir);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#maximumCacheSize)
///
/// @param self QNetworkDiskCache*
///
long long q_networkdiskcache_maximum_cache_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#setMaximumCacheSize)
///
/// @param self QNetworkDiskCache*
/// @param size long long
///
void q_networkdiskcache_set_maximum_cache_size(void* self, long long size);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#cacheSize)
///
/// @param self QNetworkDiskCache*
///
long long q_networkdiskcache_cache_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#cacheSize)
///
/// Allows for overriding the related default method
///
/// @param self QNetworkDiskCache*
/// @param callback long long func()
///
void q_networkdiskcache_on_cache_size(void* self, long long (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#cacheSize)
///
/// Base class method implementation
///
/// @param self QNetworkDiskCache*
///
long long q_networkdiskcache_qbase_cache_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#metaData)
///
/// @param self QNetworkDiskCache*
/// @param url QUrl*
///
QNetworkCacheMetaData* q_networkdiskcache_meta_data(void* self, void* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#metaData)
///
/// Allows for overriding the related default method
///
/// @param self QNetworkDiskCache*
/// @param callback QNetworkCacheMetaData* func(QNetworkDiskCache* self, QUrl* url)
///
void q_networkdiskcache_on_meta_data(void* self, QNetworkCacheMetaData* (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#metaData)
///
/// Base class method implementation
///
/// @param self QNetworkDiskCache*
/// @param url QUrl*
///
QNetworkCacheMetaData* q_networkdiskcache_qbase_meta_data(void* self, void* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#updateMetaData)
///
/// @param self QNetworkDiskCache*
/// @param metaData QNetworkCacheMetaData*
///
void q_networkdiskcache_update_meta_data(void* self, void* metaData);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#updateMetaData)
///
/// Allows for overriding the related default method
///
/// @param self QNetworkDiskCache*
/// @param callback void func(QNetworkDiskCache* self, QNetworkCacheMetaData* metaData)
///
void q_networkdiskcache_on_update_meta_data(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#updateMetaData)
///
/// Base class method implementation
///
/// @param self QNetworkDiskCache*
/// @param metaData QNetworkCacheMetaData*
///
void q_networkdiskcache_qbase_update_meta_data(void* self, void* metaData);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#data)
///
/// @param self QNetworkDiskCache*
/// @param url QUrl*
///
QIODevice* q_networkdiskcache_data(void* self, void* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#data)
///
/// Allows for overriding the related default method
///
/// @param self QNetworkDiskCache*
/// @param callback QIODevice* func(QNetworkDiskCache* self, QUrl* url)
///
void q_networkdiskcache_on_data(void* self, QIODevice* (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#data)
///
/// Base class method implementation
///
/// @param self QNetworkDiskCache*
/// @param url QUrl*
///
QIODevice* q_networkdiskcache_qbase_data(void* self, void* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#remove)
///
/// @param self QNetworkDiskCache*
/// @param url QUrl*
///
bool q_networkdiskcache_remove(void* self, void* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#remove)
///
/// Allows for overriding the related default method
///
/// @param self QNetworkDiskCache*
/// @param callback bool func(QNetworkDiskCache* self, QUrl* url)
///
void q_networkdiskcache_on_remove(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#remove)
///
/// Base class method implementation
///
/// @param self QNetworkDiskCache*
/// @param url QUrl*
///
bool q_networkdiskcache_qbase_remove(void* self, void* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#prepare)
///
/// @param self QNetworkDiskCache*
/// @param metaData QNetworkCacheMetaData*
///
QIODevice* q_networkdiskcache_prepare(void* self, void* metaData);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#prepare)
///
/// Allows for overriding the related default method
///
/// @param self QNetworkDiskCache*
/// @param callback QIODevice* func(QNetworkDiskCache* self, QNetworkCacheMetaData* metaData)
///
void q_networkdiskcache_on_prepare(void* self, QIODevice* (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#prepare)
///
/// Base class method implementation
///
/// @param self QNetworkDiskCache*
/// @param metaData QNetworkCacheMetaData*
///
QIODevice* q_networkdiskcache_qbase_prepare(void* self, void* metaData);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#insert)
///
/// @param self QNetworkDiskCache*
/// @param device QIODevice*
///
void q_networkdiskcache_insert(void* self, void* device);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#insert)
///
/// Allows for overriding the related default method
///
/// @param self QNetworkDiskCache*
/// @param callback void func(QNetworkDiskCache* self, QIODevice* device)
///
void q_networkdiskcache_on_insert(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#insert)
///
/// Base class method implementation
///
/// @param self QNetworkDiskCache*
/// @param device QIODevice*
///
void q_networkdiskcache_qbase_insert(void* self, void* device);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#fileMetaData)
///
/// @param self QNetworkDiskCache*
/// @param fileName const char*
///
QNetworkCacheMetaData* q_networkdiskcache_file_meta_data(void* self, const char* fileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#clear)
///
/// @param self QNetworkDiskCache*
///
void q_networkdiskcache_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#clear)
///
/// Allows for overriding the related default method
///
/// @param self QNetworkDiskCache*
/// @param callback void func()
///
void q_networkdiskcache_on_clear(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#clear)
///
/// Base class method implementation
///
/// @param self QNetworkDiskCache*
///
void q_networkdiskcache_qbase_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#expire)
///
/// @param self QNetworkDiskCache*
///
long long q_networkdiskcache_expire(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#expire)
///
/// Allows for overriding the related default method
///
/// @param self QNetworkDiskCache*
/// @param callback long long func()
///
void q_networkdiskcache_on_expire(void* self, long long (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#expire)
///
/// Base class method implementation
///
/// @param self QNetworkDiskCache*
///
long long q_networkdiskcache_qbase_expire(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_networkdiskcache_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_networkdiskcache_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QNetworkDiskCache*
///
const char* q_networkdiskcache_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QNetworkDiskCache*
/// @param name char*
///
void q_networkdiskcache_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QNetworkDiskCache*
///
bool q_networkdiskcache_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QNetworkDiskCache*
///
bool q_networkdiskcache_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QNetworkDiskCache*
///
bool q_networkdiskcache_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QNetworkDiskCache*
///
bool q_networkdiskcache_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QNetworkDiskCache*
/// @param b bool
///
bool q_networkdiskcache_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QNetworkDiskCache*
///
QThread* q_networkdiskcache_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QNetworkDiskCache*
/// @param thread QThread*
///
bool q_networkdiskcache_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QNetworkDiskCache*
/// @param interval int
///
int32_t q_networkdiskcache_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QNetworkDiskCache*
/// @param time int64_t of nanoseconds
///
int32_t q_networkdiskcache_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QNetworkDiskCache*
/// @param id int
///
void q_networkdiskcache_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QNetworkDiskCache*
/// @param id enum Qt__TimerId
///
void q_networkdiskcache_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QNetworkDiskCache*
///
/// @return libqt_list of QObject*
///
libqt_list q_networkdiskcache_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QNetworkDiskCache*
/// @param parent QObject*
///
void q_networkdiskcache_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QNetworkDiskCache*
/// @param filterObj QObject*
///
void q_networkdiskcache_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QNetworkDiskCache*
/// @param obj QObject*
///
void q_networkdiskcache_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_networkdiskcache_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QNetworkDiskCache*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_networkdiskcache_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_networkdiskcache_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_networkdiskcache_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QNetworkDiskCache*
///
void q_networkdiskcache_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QNetworkDiskCache*
///
void q_networkdiskcache_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QNetworkDiskCache*
/// @param name const char*
/// @param value QVariant*
///
bool q_networkdiskcache_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QNetworkDiskCache*
/// @param name const char*
///
QVariant* q_networkdiskcache_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QNetworkDiskCache*
///
const char** q_networkdiskcache_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QNetworkDiskCache*
///
QBindingStorage* q_networkdiskcache_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QNetworkDiskCache*
///
const QBindingStorage* q_networkdiskcache_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QNetworkDiskCache*
///
void q_networkdiskcache_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QNetworkDiskCache*
/// @param callback void func(QNetworkDiskCache* self)
///
void q_networkdiskcache_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QNetworkDiskCache*
///
QObject* q_networkdiskcache_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QNetworkDiskCache*
/// @param classname const char*
///
bool q_networkdiskcache_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QNetworkDiskCache*
///
void q_networkdiskcache_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QNetworkDiskCache*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_networkdiskcache_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QNetworkDiskCache*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_networkdiskcache_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QNetworkDiskCache*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_networkdiskcache_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_networkdiskcache_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QNetworkDiskCache*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_networkdiskcache_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QNetworkDiskCache*
/// @param param1 QObject*
///
void q_networkdiskcache_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QNetworkDiskCache*
/// @param callback void func(QNetworkDiskCache* self, QObject* param1)
///
void q_networkdiskcache_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNetworkDiskCache*
/// @param event QEvent*
///
bool q_networkdiskcache_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNetworkDiskCache*
/// @param event QEvent*
///
bool q_networkdiskcache_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNetworkDiskCache*
/// @param callback bool func(QNetworkDiskCache* self, QEvent* event)
///
void q_networkdiskcache_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNetworkDiskCache*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_networkdiskcache_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNetworkDiskCache*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_networkdiskcache_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNetworkDiskCache*
/// @param callback bool func(QNetworkDiskCache* self, QObject* watched, QEvent* event)
///
void q_networkdiskcache_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNetworkDiskCache*
/// @param event QTimerEvent*
///
void q_networkdiskcache_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNetworkDiskCache*
/// @param event QTimerEvent*
///
void q_networkdiskcache_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNetworkDiskCache*
/// @param callback void func(QNetworkDiskCache* self, QTimerEvent* event)
///
void q_networkdiskcache_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNetworkDiskCache*
/// @param event QChildEvent*
///
void q_networkdiskcache_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNetworkDiskCache*
/// @param event QChildEvent*
///
void q_networkdiskcache_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNetworkDiskCache*
/// @param callback void func(QNetworkDiskCache* self, QChildEvent* event)
///
void q_networkdiskcache_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNetworkDiskCache*
/// @param event QEvent*
///
void q_networkdiskcache_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNetworkDiskCache*
/// @param event QEvent*
///
void q_networkdiskcache_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNetworkDiskCache*
/// @param callback void func(QNetworkDiskCache* self, QEvent* event)
///
void q_networkdiskcache_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNetworkDiskCache*
/// @param signal QMetaMethod*
///
void q_networkdiskcache_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNetworkDiskCache*
/// @param signal QMetaMethod*
///
void q_networkdiskcache_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNetworkDiskCache*
/// @param callback void func(QNetworkDiskCache* self, QMetaMethod* signal)
///
void q_networkdiskcache_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNetworkDiskCache*
/// @param signal QMetaMethod*
///
void q_networkdiskcache_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNetworkDiskCache*
/// @param signal QMetaMethod*
///
void q_networkdiskcache_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNetworkDiskCache*
/// @param callback void func(QNetworkDiskCache* self, QMetaMethod* signal)
///
void q_networkdiskcache_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNetworkDiskCache*
///
QObject* q_networkdiskcache_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNetworkDiskCache*
///
QObject* q_networkdiskcache_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNetworkDiskCache*
/// @param callback QObject* func()
///
void q_networkdiskcache_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNetworkDiskCache*
///
int32_t q_networkdiskcache_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNetworkDiskCache*
///
int32_t q_networkdiskcache_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNetworkDiskCache*
/// @param callback int32_t func()
///
void q_networkdiskcache_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNetworkDiskCache*
/// @param signal const char*
///
int32_t q_networkdiskcache_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNetworkDiskCache*
/// @param signal const char*
///
int32_t q_networkdiskcache_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNetworkDiskCache*
/// @param callback int32_t func(QNetworkDiskCache* self, const char* signal)
///
void q_networkdiskcache_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNetworkDiskCache*
/// @param signal QMetaMethod*
///
bool q_networkdiskcache_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNetworkDiskCache*
/// @param signal QMetaMethod*
///
bool q_networkdiskcache_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNetworkDiskCache*
/// @param callback bool func(QNetworkDiskCache* self, QMetaMethod* signal)
///
void q_networkdiskcache_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QNetworkDiskCache*
/// @param callback void func(QNetworkDiskCache* self, const char* objectName)
///
void q_networkdiskcache_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#dtor.QNetworkDiskCache)
///
/// Delete this object from C++ memory.
///
/// @param self QNetworkDiskCache*
///
void q_networkdiskcache_delete(void* self);

#endif
