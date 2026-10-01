#pragma once
#ifndef NETWORK_LIBQABSTRACTNETWORKCACHE_H
#define NETWORK_LIBQABSTRACTNETWORKCACHE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
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
QNetworkCacheMetaData* q_networkcachemetadata_new2(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#operator-eq)
///
/// @param self QNetworkCacheMetaData*
/// @param other QNetworkCacheMetaData*
///
void q_networkcachemetadata_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#swap)
///
/// @param self QNetworkCacheMetaData*
/// @param other QNetworkCacheMetaData*
///
void q_networkcachemetadata_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#operator-eq-eq)
///
/// @param self const QNetworkCacheMetaData*
/// @param other QNetworkCacheMetaData*
///
bool q_networkcachemetadata_operator_equal(const void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#operator-not-eq)
///
/// @param self const QNetworkCacheMetaData*
/// @param other QNetworkCacheMetaData*
///
bool q_networkcachemetadata_operator_not_equal(const void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#isValid)
///
/// @param self const QNetworkCacheMetaData*
///
bool q_networkcachemetadata_is_valid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#url)
///
/// @param self const QNetworkCacheMetaData*
///
QUrl* q_networkcachemetadata_url(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#setUrl)
///
/// @param self QNetworkCacheMetaData*
/// @param url QUrl*
///
void q_networkcachemetadata_set_url(void* self, const void* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#rawHeaders)
///
/// @param self const QNetworkCacheMetaData*
///
/// @return libqt_list of libqt_pair tuple of char* and char*
///
libqt_list q_networkcachemetadata_raw_headers(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#setRawHeaders)
///
/// @param self QNetworkCacheMetaData*
/// @param headers libqt_list of libqt_pair tuple of char* and char*
///
void q_networkcachemetadata_set_raw_headers(void* self, libqt_list headers);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#headers)
///
/// @param self const QNetworkCacheMetaData*
///
QHttpHeaders* q_networkcachemetadata_headers(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#setHeaders)
///
/// @param self QNetworkCacheMetaData*
/// @param headers QHttpHeaders*
///
void q_networkcachemetadata_set_headers(void* self, const void* headers);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#lastModified)
///
/// @param self const QNetworkCacheMetaData*
///
QDateTime* q_networkcachemetadata_last_modified(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#setLastModified)
///
/// @param self QNetworkCacheMetaData*
/// @param dateTime QDateTime*
///
void q_networkcachemetadata_set_last_modified(void* self, const void* dateTime);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#expirationDate)
///
/// @param self const QNetworkCacheMetaData*
///
QDateTime* q_networkcachemetadata_expiration_date(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#setExpirationDate)
///
/// @param self QNetworkCacheMetaData*
/// @param dateTime QDateTime*
///
void q_networkcachemetadata_set_expiration_date(void* self, const void* dateTime);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#saveToDisk)
///
/// @param self const QNetworkCacheMetaData*
///
bool q_networkcachemetadata_save_to_disk(const void* self);

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
/// @param self const QNetworkCacheMetaData*
///
/// @return libqt_map of enum QNetworkRequest__Attribute to QVariant*
///
libqt_map q_networkcachemetadata_attributes(const void* self);

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
/// @param self const QAbstractNetworkCache*
///
const QMetaObject* q_abstractnetworkcache_meta_object(const void* self);

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
/// @param self const QAbstractNetworkCache*
///
const char* q_abstractnetworkcache_object_name(const void* self);

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
/// @param self const QAbstractNetworkCache*
///
bool q_abstractnetworkcache_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QAbstractNetworkCache*
///
bool q_abstractnetworkcache_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QAbstractNetworkCache*
///
bool q_abstractnetworkcache_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QAbstractNetworkCache*
///
bool q_abstractnetworkcache_signals_blocked(const void* self);

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
/// @param self const QAbstractNetworkCache*
///
QThread* q_abstractnetworkcache_thread(const void* self);

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
/// @param self const QAbstractNetworkCache*
///
/// @return libqt_list of QObject*
///
libqt_list q_abstractnetworkcache_children(const void* self);

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
QMetaObject__Connection* q_abstractnetworkcache_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_abstractnetworkcache_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QAbstractNetworkCache*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_abstractnetworkcache_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstractnetworkcache_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_abstractnetworkcache_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstractNetworkCache*
///
bool q_abstractnetworkcache_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstractNetworkCache*
/// @param receiver QObject*
///
bool q_abstractnetworkcache_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_abstractnetworkcache_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QAbstractNetworkCache*
///
void q_abstractnetworkcache_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QAbstractNetworkCache*
///
void q_abstractnetworkcache_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QAbstractNetworkCache*
/// @param name const char*
/// @param value QVariant*
///
bool q_abstractnetworkcache_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QAbstractNetworkCache*
/// @param name const char*
///
QVariant* q_abstractnetworkcache_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QAbstractNetworkCache*
///
const char** q_abstractnetworkcache_dynamic_property_names(const void* self);

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
/// @param self const QAbstractNetworkCache*
///
const QBindingStorage* q_abstractnetworkcache_binding_storage2(const void* self);

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
/// @param self const QAbstractNetworkCache*
///
QObject* q_abstractnetworkcache_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QAbstractNetworkCache*
/// @param classname const char*
///
bool q_abstractnetworkcache_inherits(const void* self, const char* classname);

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
QMetaObject__Connection* q_abstractnetworkcache_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_abstractnetworkcache_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QAbstractNetworkCache*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_abstractnetworkcache_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstractNetworkCache*
/// @param signal const char*
///
bool q_abstractnetworkcache_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstractNetworkCache*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_abstractnetworkcache_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstractNetworkCache*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstractnetworkcache_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QAbstractNetworkCache*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstractnetworkcache_disconnect23(const void* self, const void* receiver, const char* member);

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
