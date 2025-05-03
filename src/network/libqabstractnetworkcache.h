#pragma once
#ifndef SRC_NETWORKQT6C_LIBQABSTRACTNETWORKCACHE_H
#define SRC_NETWORKQT6C_LIBQABSTRACTNETWORKCACHE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "../libqdatetime.h"
#include "../libqiodevice.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqurl.h"
#include "../libqvariant.h"

/// https://doc.qt.io/qt-6/qnetworkcachemetadata.html

/// q_networkcachemetadata_new constructs a new QNetworkCacheMetaData object.
///
///
QNetworkCacheMetaData* q_networkcachemetadata_new();

/// q_networkcachemetadata_new2 constructs a new QNetworkCacheMetaData object.
///
/// ``` QNetworkCacheMetaData* other ```
QNetworkCacheMetaData* q_networkcachemetadata_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#operator=)
///
/// ``` QNetworkCacheMetaData* self, QNetworkCacheMetaData* other ```
void q_networkcachemetadata_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#swap)
///
/// ``` QNetworkCacheMetaData* self, QNetworkCacheMetaData* other ```
void q_networkcachemetadata_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#operator==)
///
/// ``` QNetworkCacheMetaData* self, QNetworkCacheMetaData* other ```
bool q_networkcachemetadata_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#operator!=)
///
/// ``` QNetworkCacheMetaData* self, QNetworkCacheMetaData* other ```
bool q_networkcachemetadata_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#isValid)
///
/// ``` QNetworkCacheMetaData* self ```
bool q_networkcachemetadata_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#url)
///
/// ``` QNetworkCacheMetaData* self ```
QUrl* q_networkcachemetadata_url(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#setUrl)
///
/// ``` QNetworkCacheMetaData* self, QUrl* url ```
void q_networkcachemetadata_set_url(void* self, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#rawHeaders)
///
/// ``` QNetworkCacheMetaData* self ```
libqt_list /* of libqt_pair  tuple of char* and char*  */ q_networkcachemetadata_raw_headers(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#setRawHeaders)
///
/// ``` QNetworkCacheMetaData* self, libqt_list /* of libqt_pair  tuple of char* and char*  */ headers ```
void q_networkcachemetadata_set_raw_headers(void* self, libqt_list /* of libqt_pair  tuple of char* and char*  */ headers);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#lastModified)
///
/// ``` QNetworkCacheMetaData* self ```
QDateTime* q_networkcachemetadata_last_modified(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#setLastModified)
///
/// ``` QNetworkCacheMetaData* self, QDateTime* dateTime ```
void q_networkcachemetadata_set_last_modified(void* self, void* dateTime);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#expirationDate)
///
/// ``` QNetworkCacheMetaData* self ```
QDateTime* q_networkcachemetadata_expiration_date(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#setExpirationDate)
///
/// ``` QNetworkCacheMetaData* self, QDateTime* dateTime ```
void q_networkcachemetadata_set_expiration_date(void* self, void* dateTime);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#saveToDisk)
///
/// ``` QNetworkCacheMetaData* self ```
bool q_networkcachemetadata_save_to_disk(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#setSaveToDisk)
///
/// ``` QNetworkCacheMetaData* self, bool allow ```
void q_networkcachemetadata_set_save_to_disk(void* self, bool allow);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#attributes)
///
/// ``` QNetworkCacheMetaData* self ```
libqt_map /* of int64_t to QVariant* */ q_networkcachemetadata_attributes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcachemetadata.html#setAttributes)
///
/// ``` QNetworkCacheMetaData* self, libqt_map /* of enum QNetworkRequest__Attribute to QVariant* */ attributes ```
void q_networkcachemetadata_set_attributes(void* self, libqt_map /* of int64_t to QVariant* */ attributes);

/// Delete this object from C++ memory.
///
/// ``` QNetworkCacheMetaData* self ```
void q_networkcachemetadata_delete(void* self);

/// https://doc.qt.io/qt-6/qabstractnetworkcache.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAbstractNetworkCache* self ```
QMetaObject* q_abstractnetworkcache_meta_object(void* self);

/// ``` QAbstractNetworkCache* self, const char* param1 ```
void* q_abstractnetworkcache_metacast(void* self, const char* param1);

/// ``` QAbstractNetworkCache* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_abstractnetworkcache_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_abstractnetworkcache_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractnetworkcache.html#metaData)
///
/// ``` QAbstractNetworkCache* self, QUrl* url ```
QNetworkCacheMetaData* q_abstractnetworkcache_meta_data(void* self, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractnetworkcache.html#updateMetaData)
///
/// ``` QAbstractNetworkCache* self, QNetworkCacheMetaData* metaData ```
void q_abstractnetworkcache_update_meta_data(void* self, void* metaData);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractnetworkcache.html#data)
///
/// ``` QAbstractNetworkCache* self, QUrl* url ```
QIODevice* q_abstractnetworkcache_data(void* self, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractnetworkcache.html#remove)
///
/// ``` QAbstractNetworkCache* self, QUrl* url ```
bool q_abstractnetworkcache_remove(void* self, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractnetworkcache.html#cacheSize)
///
/// ``` QAbstractNetworkCache* self ```
long long q_abstractnetworkcache_cache_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractnetworkcache.html#prepare)
///
/// ``` QAbstractNetworkCache* self, QNetworkCacheMetaData* metaData ```
QIODevice* q_abstractnetworkcache_prepare(void* self, void* metaData);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractnetworkcache.html#insert)
///
/// ``` QAbstractNetworkCache* self, QIODevice* device ```
void q_abstractnetworkcache_insert(void* self, void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractnetworkcache.html#clear)
///
/// ``` QAbstractNetworkCache* self ```
void q_abstractnetworkcache_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_abstractnetworkcache_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_abstractnetworkcache_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// ``` QAbstractNetworkCache* self, QEvent* event ```
bool q_abstractnetworkcache_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// ``` QAbstractNetworkCache* self, QObject* watched, QEvent* event ```
bool q_abstractnetworkcache_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAbstractNetworkCache* self ```
const char* q_abstractnetworkcache_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAbstractNetworkCache* self, char* name ```
void q_abstractnetworkcache_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAbstractNetworkCache* self ```
bool q_abstractnetworkcache_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAbstractNetworkCache* self ```
bool q_abstractnetworkcache_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAbstractNetworkCache* self ```
bool q_abstractnetworkcache_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAbstractNetworkCache* self ```
bool q_abstractnetworkcache_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAbstractNetworkCache* self, bool b ```
bool q_abstractnetworkcache_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAbstractNetworkCache* self ```
QThread* q_abstractnetworkcache_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAbstractNetworkCache* self, QThread* thread ```
void q_abstractnetworkcache_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAbstractNetworkCache* self, int interval ```
int32_t q_abstractnetworkcache_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAbstractNetworkCache* self, int id ```
void q_abstractnetworkcache_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAbstractNetworkCache* self ```
libqt_list /* of QObject* */ q_abstractnetworkcache_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QAbstractNetworkCache* self, QObject* parent ```
void q_abstractnetworkcache_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAbstractNetworkCache* self, QObject* filterObj ```
void q_abstractnetworkcache_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAbstractNetworkCache* self, QObject* obj ```
void q_abstractnetworkcache_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_abstractnetworkcache_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAbstractNetworkCache* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_abstractnetworkcache_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_abstractnetworkcache_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_abstractnetworkcache_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAbstractNetworkCache* self ```
void q_abstractnetworkcache_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAbstractNetworkCache* self ```
void q_abstractnetworkcache_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAbstractNetworkCache* self, const char* name, QVariant* value ```
bool q_abstractnetworkcache_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAbstractNetworkCache* self, const char* name ```
QVariant* q_abstractnetworkcache_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAbstractNetworkCache* self ```
const char** q_abstractnetworkcache_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAbstractNetworkCache* self ```
QBindingStorage* q_abstractnetworkcache_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAbstractNetworkCache* self ```
QBindingStorage* q_abstractnetworkcache_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractNetworkCache* self ```
void q_abstractnetworkcache_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QAbstractNetworkCache* self, void (*slot)(QObject*) ```
void q_abstractnetworkcache_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QAbstractNetworkCache* self ```
QObject* q_abstractnetworkcache_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAbstractNetworkCache* self, const char* classname ```
bool q_abstractnetworkcache_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAbstractNetworkCache* self ```
void q_abstractnetworkcache_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAbstractNetworkCache* self, int interval, enum Qt__TimerType timerType ```
int32_t q_abstractnetworkcache_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_abstractnetworkcache_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAbstractNetworkCache* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_abstractnetworkcache_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractNetworkCache* self, QObject* param1 ```
void q_abstractnetworkcache_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QAbstractNetworkCache* self, void (*slot)(QObject*, QObject*) ```
void q_abstractnetworkcache_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QAbstractNetworkCache* self ```
void q_abstractnetworkcache_delete(void* self);

#endif
