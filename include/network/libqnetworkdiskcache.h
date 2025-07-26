#pragma once
#ifndef SRC_NETWORKQT6C_LIBQNETWORKDISKCACHE_H
#define SRC_NETWORKQT6C_LIBQNETWORKDISKCACHE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qnetworkdiskcache.html

/// q_networkdiskcache_new constructs a new QNetworkDiskCache object.
///
///
QNetworkDiskCache* q_networkdiskcache_new();

/// q_networkdiskcache_new2 constructs a new QNetworkDiskCache object.
///
/// ``` QObject* parent ```
QNetworkDiskCache* q_networkdiskcache_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QNetworkDiskCache* self ```
const QMetaObject* q_networkdiskcache_meta_object(void* self);

/// ``` QNetworkDiskCache* self, const char* param1 ```
void* q_networkdiskcache_metacast(void* self, const char* param1);

/// ``` QNetworkDiskCache* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_networkdiskcache_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QNetworkDiskCache* self, int32_t (*slot)(QNetworkDiskCache*, enum QMetaObject__Call, int, void*) ```
void q_networkdiskcache_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QNetworkDiskCache* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_networkdiskcache_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_networkdiskcache_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdiskcache.html#cacheDirectory)
///
/// ``` QNetworkDiskCache* self ```
const char* q_networkdiskcache_cache_directory(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdiskcache.html#setCacheDirectory)
///
/// ``` QNetworkDiskCache* self, const char* cacheDir ```
void q_networkdiskcache_set_cache_directory(void* self, const char* cacheDir);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdiskcache.html#maximumCacheSize)
///
/// ``` QNetworkDiskCache* self ```
long long q_networkdiskcache_maximum_cache_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdiskcache.html#setMaximumCacheSize)
///
/// ``` QNetworkDiskCache* self, long long size ```
void q_networkdiskcache_set_maximum_cache_size(void* self, long long size);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdiskcache.html#cacheSize)
///
/// ``` QNetworkDiskCache* self ```
long long q_networkdiskcache_cache_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdiskcache.html#cacheSize)
///
/// Allows for overriding the related default method
///
/// ``` QNetworkDiskCache* self, long long (*slot)() ```
void q_networkdiskcache_on_cache_size(void* self, long long (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdiskcache.html#cacheSize)
///
/// Base class method implementation
///
/// ``` QNetworkDiskCache* self ```
long long q_networkdiskcache_qbase_cache_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdiskcache.html#metaData)
///
/// ``` QNetworkDiskCache* self, QUrl* url ```
QNetworkCacheMetaData* q_networkdiskcache_meta_data(void* self, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdiskcache.html#metaData)
///
/// Allows for overriding the related default method
///
/// ``` QNetworkDiskCache* self, QNetworkCacheMetaData* (*slot)(QNetworkDiskCache*, QUrl*) ```
void q_networkdiskcache_on_meta_data(void* self, QNetworkCacheMetaData* (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdiskcache.html#metaData)
///
/// Base class method implementation
///
/// ``` QNetworkDiskCache* self, QUrl* url ```
QNetworkCacheMetaData* q_networkdiskcache_qbase_meta_data(void* self, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdiskcache.html#updateMetaData)
///
/// ``` QNetworkDiskCache* self, QNetworkCacheMetaData* metaData ```
void q_networkdiskcache_update_meta_data(void* self, void* metaData);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdiskcache.html#updateMetaData)
///
/// Allows for overriding the related default method
///
/// ``` QNetworkDiskCache* self, void (*slot)(QNetworkDiskCache*, QNetworkCacheMetaData*) ```
void q_networkdiskcache_on_update_meta_data(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdiskcache.html#updateMetaData)
///
/// Base class method implementation
///
/// ``` QNetworkDiskCache* self, QNetworkCacheMetaData* metaData ```
void q_networkdiskcache_qbase_update_meta_data(void* self, void* metaData);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdiskcache.html#data)
///
/// ``` QNetworkDiskCache* self, QUrl* url ```
QIODevice* q_networkdiskcache_data(void* self, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdiskcache.html#data)
///
/// Allows for overriding the related default method
///
/// ``` QNetworkDiskCache* self, QIODevice* (*slot)(QNetworkDiskCache*, QUrl*) ```
void q_networkdiskcache_on_data(void* self, QIODevice* (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdiskcache.html#data)
///
/// Base class method implementation
///
/// ``` QNetworkDiskCache* self, QUrl* url ```
QIODevice* q_networkdiskcache_qbase_data(void* self, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdiskcache.html#remove)
///
/// ``` QNetworkDiskCache* self, QUrl* url ```
bool q_networkdiskcache_remove(void* self, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdiskcache.html#remove)
///
/// Allows for overriding the related default method
///
/// ``` QNetworkDiskCache* self, bool (*slot)(QNetworkDiskCache*, QUrl*) ```
void q_networkdiskcache_on_remove(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdiskcache.html#remove)
///
/// Base class method implementation
///
/// ``` QNetworkDiskCache* self, QUrl* url ```
bool q_networkdiskcache_qbase_remove(void* self, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdiskcache.html#prepare)
///
/// ``` QNetworkDiskCache* self, QNetworkCacheMetaData* metaData ```
QIODevice* q_networkdiskcache_prepare(void* self, void* metaData);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdiskcache.html#prepare)
///
/// Allows for overriding the related default method
///
/// ``` QNetworkDiskCache* self, QIODevice* (*slot)(QNetworkDiskCache*, QNetworkCacheMetaData*) ```
void q_networkdiskcache_on_prepare(void* self, QIODevice* (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdiskcache.html#prepare)
///
/// Base class method implementation
///
/// ``` QNetworkDiskCache* self, QNetworkCacheMetaData* metaData ```
QIODevice* q_networkdiskcache_qbase_prepare(void* self, void* metaData);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdiskcache.html#insert)
///
/// ``` QNetworkDiskCache* self, QIODevice* device ```
void q_networkdiskcache_insert(void* self, void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdiskcache.html#insert)
///
/// Allows for overriding the related default method
///
/// ``` QNetworkDiskCache* self, void (*slot)(QNetworkDiskCache*, QIODevice*) ```
void q_networkdiskcache_on_insert(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdiskcache.html#insert)
///
/// Base class method implementation
///
/// ``` QNetworkDiskCache* self, QIODevice* device ```
void q_networkdiskcache_qbase_insert(void* self, void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdiskcache.html#fileMetaData)
///
/// ``` QNetworkDiskCache* self, const char* fileName ```
QNetworkCacheMetaData* q_networkdiskcache_file_meta_data(void* self, const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdiskcache.html#clear)
///
/// ``` QNetworkDiskCache* self ```
void q_networkdiskcache_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdiskcache.html#clear)
///
/// Allows for overriding the related default method
///
/// ``` QNetworkDiskCache* self, void (*slot)() ```
void q_networkdiskcache_on_clear(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdiskcache.html#clear)
///
/// Base class method implementation
///
/// ``` QNetworkDiskCache* self ```
void q_networkdiskcache_qbase_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdiskcache.html#expire)
///
/// ``` QNetworkDiskCache* self ```
long long q_networkdiskcache_expire(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdiskcache.html#expire)
///
/// Allows for overriding the related default method
///
/// ``` QNetworkDiskCache* self, long long (*slot)() ```
void q_networkdiskcache_on_expire(void* self, long long (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdiskcache.html#expire)
///
/// Base class method implementation
///
/// ``` QNetworkDiskCache* self ```
long long q_networkdiskcache_qbase_expire(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_networkdiskcache_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_networkdiskcache_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QNetworkDiskCache* self ```
const char* q_networkdiskcache_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QNetworkDiskCache* self, char* name ```
void q_networkdiskcache_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QNetworkDiskCache* self ```
bool q_networkdiskcache_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QNetworkDiskCache* self ```
bool q_networkdiskcache_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QNetworkDiskCache* self ```
bool q_networkdiskcache_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QNetworkDiskCache* self ```
bool q_networkdiskcache_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QNetworkDiskCache* self, bool b ```
bool q_networkdiskcache_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QNetworkDiskCache* self ```
QThread* q_networkdiskcache_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QNetworkDiskCache* self, QThread* thread ```
bool q_networkdiskcache_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QNetworkDiskCache* self, int interval ```
int32_t q_networkdiskcache_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QNetworkDiskCache* self, int id ```
void q_networkdiskcache_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QNetworkDiskCache* self, enum Qt__TimerId id ```
void q_networkdiskcache_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QNetworkDiskCache* self ```
libqt_list /* of QObject* */ q_networkdiskcache_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QNetworkDiskCache* self, QObject* parent ```
void q_networkdiskcache_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QNetworkDiskCache* self, QObject* filterObj ```
void q_networkdiskcache_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QNetworkDiskCache* self, QObject* obj ```
void q_networkdiskcache_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_networkdiskcache_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QNetworkDiskCache* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_networkdiskcache_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_networkdiskcache_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_networkdiskcache_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QNetworkDiskCache* self ```
void q_networkdiskcache_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QNetworkDiskCache* self ```
void q_networkdiskcache_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QNetworkDiskCache* self, const char* name, QVariant* value ```
bool q_networkdiskcache_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QNetworkDiskCache* self, const char* name ```
QVariant* q_networkdiskcache_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QNetworkDiskCache* self ```
const char** q_networkdiskcache_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QNetworkDiskCache* self ```
QBindingStorage* q_networkdiskcache_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QNetworkDiskCache* self ```
const QBindingStorage* q_networkdiskcache_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QNetworkDiskCache* self ```
void q_networkdiskcache_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QNetworkDiskCache* self, void (*slot)(QNetworkDiskCache*) ```
void q_networkdiskcache_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QNetworkDiskCache* self ```
QObject* q_networkdiskcache_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QNetworkDiskCache* self, const char* classname ```
bool q_networkdiskcache_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QNetworkDiskCache* self ```
void q_networkdiskcache_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QNetworkDiskCache* self, QThread* thread, Disambiguated_t* param2 ```
bool q_networkdiskcache_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QNetworkDiskCache* self, int interval, enum Qt__TimerType timerType ```
int32_t q_networkdiskcache_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_networkdiskcache_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QNetworkDiskCache* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_networkdiskcache_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QNetworkDiskCache* self, QObject* param1 ```
void q_networkdiskcache_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QNetworkDiskCache* self, void (*slot)(QNetworkDiskCache*, QObject*) ```
void q_networkdiskcache_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkDiskCache* self, QEvent* event ```
bool q_networkdiskcache_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkDiskCache* self, QEvent* event ```
bool q_networkdiskcache_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkDiskCache* self, bool (*slot)(QNetworkDiskCache*, QEvent*) ```
void q_networkdiskcache_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkDiskCache* self, QObject* watched, QEvent* event ```
bool q_networkdiskcache_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkDiskCache* self, QObject* watched, QEvent* event ```
bool q_networkdiskcache_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkDiskCache* self, bool (*slot)(QNetworkDiskCache*, QObject*, QEvent*) ```
void q_networkdiskcache_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkDiskCache* self, QTimerEvent* event ```
void q_networkdiskcache_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkDiskCache* self, QTimerEvent* event ```
void q_networkdiskcache_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkDiskCache* self, void (*slot)(QNetworkDiskCache*, QTimerEvent*) ```
void q_networkdiskcache_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkDiskCache* self, QChildEvent* event ```
void q_networkdiskcache_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkDiskCache* self, QChildEvent* event ```
void q_networkdiskcache_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkDiskCache* self, void (*slot)(QNetworkDiskCache*, QChildEvent*) ```
void q_networkdiskcache_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkDiskCache* self, QEvent* event ```
void q_networkdiskcache_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkDiskCache* self, QEvent* event ```
void q_networkdiskcache_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkDiskCache* self, void (*slot)(QNetworkDiskCache*, QEvent*) ```
void q_networkdiskcache_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkDiskCache* self, QMetaMethod* signal ```
void q_networkdiskcache_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkDiskCache* self, QMetaMethod* signal ```
void q_networkdiskcache_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkDiskCache* self, void (*slot)(QNetworkDiskCache*, QMetaMethod*) ```
void q_networkdiskcache_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkDiskCache* self, QMetaMethod* signal ```
void q_networkdiskcache_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkDiskCache* self, QMetaMethod* signal ```
void q_networkdiskcache_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkDiskCache* self, void (*slot)(QNetworkDiskCache*, QMetaMethod*) ```
void q_networkdiskcache_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkDiskCache* self ```
QObject* q_networkdiskcache_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkDiskCache* self ```
QObject* q_networkdiskcache_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkDiskCache* self, QObject* (*slot)() ```
void q_networkdiskcache_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkDiskCache* self ```
int32_t q_networkdiskcache_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkDiskCache* self ```
int32_t q_networkdiskcache_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkDiskCache* self, int32_t (*slot)() ```
void q_networkdiskcache_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkDiskCache* self, const char* signal ```
int32_t q_networkdiskcache_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkDiskCache* self, const char* signal ```
int32_t q_networkdiskcache_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkDiskCache* self, int32_t (*slot)(QNetworkDiskCache*, const char*) ```
void q_networkdiskcache_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkDiskCache* self, QMetaMethod* signal ```
bool q_networkdiskcache_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkDiskCache* self, QMetaMethod* signal ```
bool q_networkdiskcache_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkDiskCache* self, bool (*slot)(QNetworkDiskCache*, QMetaMethod*) ```
void q_networkdiskcache_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QNetworkDiskCache* self, void (*slot)(QNetworkDiskCache*, const char*) ```
void q_networkdiskcache_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdiskcache.html#dtor.QNetworkDiskCache)
///
/// Delete this object from C++ memory.
///
/// ``` QNetworkDiskCache* self ```
void q_networkdiskcache_delete(void* self);

#endif
