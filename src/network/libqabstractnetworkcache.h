#pragma once
#ifndef SRC_NETWORK_QT6C_LIBQABSTRACTNETWORKCACHE_H
#define SRC_NETWORK_QT6C_LIBQABSTRACTNETWORKCACHE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html)

/// q_networkcachemetadata_new constructs a new QNetworkCacheMetaData object.
///
QNetworkCacheMetaData* q_networkcachemetadata_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html)

/// q_networkcachemetadata_new2 constructs a new QNetworkCacheMetaData object.
///
/// @param other QNetworkCacheMetaData*
///
QNetworkCacheMetaData* q_networkcachemetadata_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#operator-eq)
///
/// @param self QNetworkCacheMetaData*
/// @param other QNetworkCacheMetaData*
///
void q_networkcachemetadata_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#swap)
///
/// @param self QNetworkCacheMetaData*
/// @param other QNetworkCacheMetaData*
///
void q_networkcachemetadata_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#operator-eq-eq)
///
/// @param self QNetworkCacheMetaData*
/// @param other QNetworkCacheMetaData*
///
bool q_networkcachemetadata_operator_equal(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#operator-not-eq)
///
/// @param self QNetworkCacheMetaData*
/// @param other QNetworkCacheMetaData*
///
bool q_networkcachemetadata_operator_not_equal(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#isValid)
///
/// @param self QNetworkCacheMetaData*
///
bool q_networkcachemetadata_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#url)
///
/// @param self QNetworkCacheMetaData*
///
QUrl* q_networkcachemetadata_url(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#setUrl)
///
/// @param self QNetworkCacheMetaData*
/// @param url QUrl*
///
void q_networkcachemetadata_set_url(void* self, void* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#rawHeaders)
///
/// @param self QNetworkCacheMetaData*
///
/// @return libqt_list of libqt_pair tuple of char* and char*
///
libqt_list q_networkcachemetadata_raw_headers(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#setRawHeaders)
///
/// @param self QNetworkCacheMetaData*
/// @param headers libqt_list of libqt_pair tuple of char* and char*
///
void q_networkcachemetadata_set_raw_headers(void* self, libqt_list headers);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#headers)
///
/// @param self QNetworkCacheMetaData*
///
QHttpHeaders* q_networkcachemetadata_headers(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#setHeaders)
///
/// @param self QNetworkCacheMetaData*
/// @param headers QHttpHeaders*
///
void q_networkcachemetadata_set_headers(void* self, void* headers);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#lastModified)
///
/// @param self QNetworkCacheMetaData*
///
QDateTime* q_networkcachemetadata_last_modified(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#setLastModified)
///
/// @param self QNetworkCacheMetaData*
/// @param dateTime QDateTime*
///
void q_networkcachemetadata_set_last_modified(void* self, void* dateTime);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#expirationDate)
///
/// @param self QNetworkCacheMetaData*
///
QDateTime* q_networkcachemetadata_expiration_date(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#setExpirationDate)
///
/// @param self QNetworkCacheMetaData*
/// @param dateTime QDateTime*
///
void q_networkcachemetadata_set_expiration_date(void* self, void* dateTime);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#saveToDisk)
///
/// @param self QNetworkCacheMetaData*
///
bool q_networkcachemetadata_save_to_disk(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#setSaveToDisk)
///
/// @param self QNetworkCacheMetaData*
/// @param allow bool
///
void q_networkcachemetadata_set_save_to_disk(void* self, bool allow);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#attributes)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of enum QNetworkRequest__Attribute to QVariant*
/// for (size_t i = 0; i < map.len; ++i) {
///     free(((QVariant*)map.values)[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// @param self QNetworkCacheMetaData*
///
/// @return libqt_map of enum QNetworkRequest__Attribute to QVariant*
///
libqt_map q_networkcachemetadata_attributes(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#setAttributes)
///
/// @param self QNetworkCacheMetaData*
/// @param attributes libqt_map of enum QNetworkRequest__Attribute to QVariant*
///
void q_networkcachemetadata_set_attributes(void* self, libqt_map attributes);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#dtor.QNetworkCacheMetaData)
///
/// Delete this object from C++ memory.
///
/// @param self QNetworkCacheMetaData*
///
void q_networkcachemetadata_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractnetworkcache.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QAbstractNetworkCache*
///
const QMetaObject* q_abstractnetworkcache_meta_object(void* self);

/// @param self QAbstractNetworkCache*
/// @param param1 const char*
///
void* q_abstractnetworkcache_metacast(void* self, const char* param1);

/// @param self QAbstractNetworkCache*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_abstractnetworkcache_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_abstractnetworkcache_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractnetworkcache.html#metaData)
///
/// @param self QAbstractNetworkCache*
/// @param url QUrl*
///
QNetworkCacheMetaData* q_abstractnetworkcache_meta_data(void* self, void* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractnetworkcache.html#updateMetaData)
///
/// @param self QAbstractNetworkCache*
/// @param metaData QNetworkCacheMetaData*
///
void q_abstractnetworkcache_update_meta_data(void* self, void* metaData);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractnetworkcache.html#data)
///
/// @param self QAbstractNetworkCache*
/// @param url QUrl*
///
QIODevice* q_abstractnetworkcache_data(void* self, void* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractnetworkcache.html#remove)
///
/// @param self QAbstractNetworkCache*
/// @param url QUrl*
///
bool q_abstractnetworkcache_remove(void* self, void* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractnetworkcache.html#cacheSize)
///
/// @param self QAbstractNetworkCache*
///
long long q_abstractnetworkcache_cache_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractnetworkcache.html#prepare)
///
/// @param self QAbstractNetworkCache*
/// @param metaData QNetworkCacheMetaData*
///
QIODevice* q_abstractnetworkcache_prepare(void* self, void* metaData);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractnetworkcache.html#insert)
///
/// @param self QAbstractNetworkCache*
/// @param device QIODevice*
///
void q_abstractnetworkcache_insert(void* self, void* device);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractnetworkcache.html#clear)
///
/// @param self QAbstractNetworkCache*
///
void q_abstractnetworkcache_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_abstractnetworkcache_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_abstractnetworkcache_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QAbstractNetworkCache*
/// @param event QEvent*
///
bool q_abstractnetworkcache_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QAbstractNetworkCache*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_abstractnetworkcache_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAbstractNetworkCache*
///
const char* q_abstractnetworkcache_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QAbstractNetworkCache*
/// @param name const char*
///
void q_abstractnetworkcache_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QAbstractNetworkCache*
///
bool q_abstractnetworkcache_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QAbstractNetworkCache*
///
bool q_abstractnetworkcache_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QAbstractNetworkCache*
///
bool q_abstractnetworkcache_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QAbstractNetworkCache*
///
bool q_abstractnetworkcache_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QAbstractNetworkCache*
/// @param b bool
///
bool q_abstractnetworkcache_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QAbstractNetworkCache*
///
QThread* q_abstractnetworkcache_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QAbstractNetworkCache*
/// @param thread QThread*
///
bool q_abstractnetworkcache_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractNetworkCache*
/// @param interval int
///
int32_t q_abstractnetworkcache_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractNetworkCache*
/// @param time int64_t of nanoseconds
///
int32_t q_abstractnetworkcache_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAbstractNetworkCache*
/// @param id int
///
void q_abstractnetworkcache_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAbstractNetworkCache*
/// @param id enum Qt__TimerId
///
void q_abstractnetworkcache_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QAbstractNetworkCache*
///
/// @return libqt_list of QObject*
///
libqt_list q_abstractnetworkcache_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QAbstractNetworkCache*
/// @param parent QObject*
///
void q_abstractnetworkcache_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QAbstractNetworkCache*
/// @param filterObj QObject*
///
void q_abstractnetworkcache_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QAbstractNetworkCache*
/// @param obj QObject*
///
void q_abstractnetworkcache_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_abstractnetworkcache_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_abstractnetworkcache_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QAbstractNetworkCache*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_abstractnetworkcache_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstractnetworkcache_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_abstractnetworkcache_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QAbstractNetworkCache*
///
bool q_abstractnetworkcache_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QAbstractNetworkCache*
/// @param receiver QObject*
///
bool q_abstractnetworkcache_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_abstractnetworkcache_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QAbstractNetworkCache*
///
void q_abstractnetworkcache_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QAbstractNetworkCache*
///
void q_abstractnetworkcache_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QAbstractNetworkCache*
/// @param name const char*
/// @param value QVariant*
///
bool q_abstractnetworkcache_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QAbstractNetworkCache*
/// @param name const char*
///
QVariant* q_abstractnetworkcache_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QAbstractNetworkCache*
///
const char** q_abstractnetworkcache_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAbstractNetworkCache*
///
QBindingStorage* q_abstractnetworkcache_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAbstractNetworkCache*
///
const QBindingStorage* q_abstractnetworkcache_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractNetworkCache*
///
void q_abstractnetworkcache_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractNetworkCache*
/// @param callback void func(QAbstractNetworkCache* self)
///
void q_abstractnetworkcache_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QAbstractNetworkCache*
///
QObject* q_abstractnetworkcache_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QAbstractNetworkCache*
/// @param classname const char*
///
bool q_abstractnetworkcache_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QAbstractNetworkCache*
///
void q_abstractnetworkcache_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractNetworkCache*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_abstractnetworkcache_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractNetworkCache*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_abstractnetworkcache_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_abstractnetworkcache_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_abstractnetworkcache_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QAbstractNetworkCache*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_abstractnetworkcache_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QAbstractNetworkCache*
/// @param signal const char*
///
bool q_abstractnetworkcache_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QAbstractNetworkCache*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_abstractnetworkcache_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QAbstractNetworkCache*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstractnetworkcache_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QAbstractNetworkCache*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstractnetworkcache_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractNetworkCache*
/// @param param1 QObject*
///
void q_abstractnetworkcache_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractNetworkCache*
/// @param callback void func(QAbstractNetworkCache* self, QObject* param1)
///
void q_abstractnetworkcache_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractNetworkCache*
/// @param callback void func(QAbstractNetworkCache* self, const char* objectName)
///
void q_abstractnetworkcache_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractnetworkcache.html#dtor.QAbstractNetworkCache)
///
/// Delete this object from C++ memory.
///
/// @param self QAbstractNetworkCache*
///
void q_abstractnetworkcache_delete(void* self);

#endif
