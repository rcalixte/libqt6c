#include "libqabstractnetworkcache.hpp"
#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqevent.hpp"
#include "../libqiodevice.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqnetworkdiskcache.hpp"
#include "libqnetworkdiskcache.h"

/// https://doc.qt.io/qt-6/qnetworkdiskcache.html

/// q_networkdiskcache_new constructs a new QNetworkDiskCache object.
///
///
QNetworkDiskCache* q_networkdiskcache_new() {
    return QNetworkDiskCache_new();
}

/// q_networkdiskcache_new2 constructs a new QNetworkDiskCache object.
///
/// ``` QObject* parent ```
QNetworkDiskCache* q_networkdiskcache_new2(void* parent) {
    return QNetworkDiskCache_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QNetworkDiskCache* self ```
QMetaObject* q_networkdiskcache_meta_object(void* self) {
    return QNetworkDiskCache_MetaObject((QNetworkDiskCache*)self);
}

/// ``` QNetworkDiskCache* self, const char* param1 ```
void* q_networkdiskcache_metacast(void* self, const char* param1) {
    return QNetworkDiskCache_Metacast((QNetworkDiskCache*)self, param1);
}

/// ``` QNetworkDiskCache* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_networkdiskcache_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QNetworkDiskCache_Metacall((QNetworkDiskCache*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QNetworkDiskCache* self, int32_t (*slot)(QNetworkDiskCache*, enum QMetaObject__Call, int, void*) ```
void q_networkdiskcache_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QNetworkDiskCache_OnMetacall((QNetworkDiskCache*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QNetworkDiskCache* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_networkdiskcache_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QNetworkDiskCache_QBaseMetacall((QNetworkDiskCache*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_networkdiskcache_tr(const char* s) {
    libqt_string _str = QNetworkDiskCache_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdiskcache.html#cacheDirectory)
///
/// ``` QNetworkDiskCache* self ```
const char* q_networkdiskcache_cache_directory(void* self) {
    libqt_string _str = QNetworkDiskCache_CacheDirectory((QNetworkDiskCache*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdiskcache.html#setCacheDirectory)
///
/// ``` QNetworkDiskCache* self, const char* cacheDir ```
void q_networkdiskcache_set_cache_directory(void* self, const char* cacheDir) {
    QNetworkDiskCache_SetCacheDirectory((QNetworkDiskCache*)self, qstring(cacheDir));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdiskcache.html#maximumCacheSize)
///
/// ``` QNetworkDiskCache* self ```
long long q_networkdiskcache_maximum_cache_size(void* self) {
    return QNetworkDiskCache_MaximumCacheSize((QNetworkDiskCache*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdiskcache.html#setMaximumCacheSize)
///
/// ``` QNetworkDiskCache* self, long long size ```
void q_networkdiskcache_set_maximum_cache_size(void* self, long long size) {
    QNetworkDiskCache_SetMaximumCacheSize((QNetworkDiskCache*)self, size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdiskcache.html#cacheSize)
///
/// ``` QNetworkDiskCache* self ```
long long q_networkdiskcache_cache_size(void* self) {
    return QNetworkDiskCache_CacheSize((QNetworkDiskCache*)self);
}

/// Allows for overriding the related default method
///
/// ``` QNetworkDiskCache* self, long long (*slot)() ```
void q_networkdiskcache_on_cache_size(void* self, long long (*slot)()) {
    QNetworkDiskCache_OnCacheSize((QNetworkDiskCache*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QNetworkDiskCache* self ```
long long q_networkdiskcache_qbase_cache_size(void* self) {
    return QNetworkDiskCache_QBaseCacheSize((QNetworkDiskCache*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdiskcache.html#metaData)
///
/// ``` QNetworkDiskCache* self, QUrl* url ```
QNetworkCacheMetaData* q_networkdiskcache_meta_data(void* self, void* url) {
    return QNetworkDiskCache_MetaData((QNetworkDiskCache*)self, (QUrl*)url);
}

/// Allows for overriding the related default method
///
/// ``` QNetworkDiskCache* self, QNetworkCacheMetaData* (*slot)(QNetworkDiskCache*, QUrl*) ```
void q_networkdiskcache_on_meta_data(void* self, QNetworkCacheMetaData* (*slot)(void*, void*)) {
    QNetworkDiskCache_OnMetaData((QNetworkDiskCache*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QNetworkDiskCache* self, QUrl* url ```
QNetworkCacheMetaData* q_networkdiskcache_qbase_meta_data(void* self, void* url) {
    return QNetworkDiskCache_QBaseMetaData((QNetworkDiskCache*)self, (QUrl*)url);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdiskcache.html#updateMetaData)
///
/// ``` QNetworkDiskCache* self, QNetworkCacheMetaData* metaData ```
void q_networkdiskcache_update_meta_data(void* self, void* metaData) {
    QNetworkDiskCache_UpdateMetaData((QNetworkDiskCache*)self, (QNetworkCacheMetaData*)metaData);
}

/// Allows for overriding the related default method
///
/// ``` QNetworkDiskCache* self, void (*slot)(QNetworkDiskCache*, QNetworkCacheMetaData*) ```
void q_networkdiskcache_on_update_meta_data(void* self, void (*slot)(void*, void*)) {
    QNetworkDiskCache_OnUpdateMetaData((QNetworkDiskCache*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QNetworkDiskCache* self, QNetworkCacheMetaData* metaData ```
void q_networkdiskcache_qbase_update_meta_data(void* self, void* metaData) {
    QNetworkDiskCache_QBaseUpdateMetaData((QNetworkDiskCache*)self, (QNetworkCacheMetaData*)metaData);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdiskcache.html#data)
///
/// ``` QNetworkDiskCache* self, QUrl* url ```
QIODevice* q_networkdiskcache_data(void* self, void* url) {
    return QNetworkDiskCache_Data((QNetworkDiskCache*)self, (QUrl*)url);
}

/// Allows for overriding the related default method
///
/// ``` QNetworkDiskCache* self, QIODevice* (*slot)(QNetworkDiskCache*, QUrl*) ```
void q_networkdiskcache_on_data(void* self, QIODevice* (*slot)(void*, void*)) {
    QNetworkDiskCache_OnData((QNetworkDiskCache*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QNetworkDiskCache* self, QUrl* url ```
QIODevice* q_networkdiskcache_qbase_data(void* self, void* url) {
    return QNetworkDiskCache_QBaseData((QNetworkDiskCache*)self, (QUrl*)url);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdiskcache.html#remove)
///
/// ``` QNetworkDiskCache* self, QUrl* url ```
bool q_networkdiskcache_remove(void* self, void* url) {
    return QNetworkDiskCache_Remove((QNetworkDiskCache*)self, (QUrl*)url);
}

/// Allows for overriding the related default method
///
/// ``` QNetworkDiskCache* self, bool (*slot)(QNetworkDiskCache*, QUrl*) ```
void q_networkdiskcache_on_remove(void* self, bool (*slot)(void*, void*)) {
    QNetworkDiskCache_OnRemove((QNetworkDiskCache*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QNetworkDiskCache* self, QUrl* url ```
bool q_networkdiskcache_qbase_remove(void* self, void* url) {
    return QNetworkDiskCache_QBaseRemove((QNetworkDiskCache*)self, (QUrl*)url);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdiskcache.html#prepare)
///
/// ``` QNetworkDiskCache* self, QNetworkCacheMetaData* metaData ```
QIODevice* q_networkdiskcache_prepare(void* self, void* metaData) {
    return QNetworkDiskCache_Prepare((QNetworkDiskCache*)self, (QNetworkCacheMetaData*)metaData);
}

/// Allows for overriding the related default method
///
/// ``` QNetworkDiskCache* self, QIODevice* (*slot)(QNetworkDiskCache*, QNetworkCacheMetaData*) ```
void q_networkdiskcache_on_prepare(void* self, QIODevice* (*slot)(void*, void*)) {
    QNetworkDiskCache_OnPrepare((QNetworkDiskCache*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QNetworkDiskCache* self, QNetworkCacheMetaData* metaData ```
QIODevice* q_networkdiskcache_qbase_prepare(void* self, void* metaData) {
    return QNetworkDiskCache_QBasePrepare((QNetworkDiskCache*)self, (QNetworkCacheMetaData*)metaData);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdiskcache.html#insert)
///
/// ``` QNetworkDiskCache* self, QIODevice* device ```
void q_networkdiskcache_insert(void* self, void* device) {
    QNetworkDiskCache_Insert((QNetworkDiskCache*)self, (QIODevice*)device);
}

/// Allows for overriding the related default method
///
/// ``` QNetworkDiskCache* self, void (*slot)(QNetworkDiskCache*, QIODevice*) ```
void q_networkdiskcache_on_insert(void* self, void (*slot)(void*, void*)) {
    QNetworkDiskCache_OnInsert((QNetworkDiskCache*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QNetworkDiskCache* self, QIODevice* device ```
void q_networkdiskcache_qbase_insert(void* self, void* device) {
    QNetworkDiskCache_QBaseInsert((QNetworkDiskCache*)self, (QIODevice*)device);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdiskcache.html#fileMetaData)
///
/// ``` QNetworkDiskCache* self, const char* fileName ```
QNetworkCacheMetaData* q_networkdiskcache_file_meta_data(void* self, const char* fileName) {
    return QNetworkDiskCache_FileMetaData((QNetworkDiskCache*)self, qstring(fileName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdiskcache.html#clear)
///
/// ``` QNetworkDiskCache* self ```
void q_networkdiskcache_clear(void* self) {
    QNetworkDiskCache_Clear((QNetworkDiskCache*)self);
}

/// Allows for overriding the related default method
///
/// ``` QNetworkDiskCache* self, void (*slot)() ```
void q_networkdiskcache_on_clear(void* self, void (*slot)()) {
    QNetworkDiskCache_OnClear((QNetworkDiskCache*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QNetworkDiskCache* self ```
void q_networkdiskcache_qbase_clear(void* self) {
    QNetworkDiskCache_QBaseClear((QNetworkDiskCache*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdiskcache.html#expire)
///
/// ``` QNetworkDiskCache* self ```
long long q_networkdiskcache_expire(void* self) {
    return QNetworkDiskCache_Expire((QNetworkDiskCache*)self);
}

/// Allows for overriding the related default method
///
/// ``` QNetworkDiskCache* self, long long (*slot)() ```
void q_networkdiskcache_on_expire(void* self, long long (*slot)()) {
    QNetworkDiskCache_OnExpire((QNetworkDiskCache*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QNetworkDiskCache* self ```
long long q_networkdiskcache_qbase_expire(void* self) {
    return QNetworkDiskCache_QBaseExpire((QNetworkDiskCache*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_networkdiskcache_tr2(const char* s, const char* c) {
    libqt_string _str = QNetworkDiskCache_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_networkdiskcache_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QNetworkDiskCache_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QNetworkDiskCache* self ```
const char* q_networkdiskcache_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QNetworkDiskCache* self, const char* name ```
void q_networkdiskcache_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QNetworkDiskCache* self ```
bool q_networkdiskcache_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QNetworkDiskCache* self ```
bool q_networkdiskcache_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QNetworkDiskCache* self ```
bool q_networkdiskcache_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QNetworkDiskCache* self ```
bool q_networkdiskcache_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QNetworkDiskCache* self, bool b ```
bool q_networkdiskcache_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QNetworkDiskCache* self ```
QThread* q_networkdiskcache_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QNetworkDiskCache* self, QThread* thread ```
void q_networkdiskcache_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QNetworkDiskCache* self, int interval ```
int32_t q_networkdiskcache_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QNetworkDiskCache* self, int id ```
void q_networkdiskcache_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QNetworkDiskCache* self ```
libqt_list /* of QObject* */ q_networkdiskcache_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QNetworkDiskCache* self, QObject* parent ```
void q_networkdiskcache_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QNetworkDiskCache* self, QObject* filterObj ```
void q_networkdiskcache_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QNetworkDiskCache* self, QObject* obj ```
void q_networkdiskcache_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_networkdiskcache_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QNetworkDiskCache* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_networkdiskcache_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_networkdiskcache_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_networkdiskcache_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QNetworkDiskCache* self ```
void q_networkdiskcache_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QNetworkDiskCache* self ```
void q_networkdiskcache_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QNetworkDiskCache* self, const char* name, QVariant* value ```
bool q_networkdiskcache_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QNetworkDiskCache* self, const char* name ```
QVariant* q_networkdiskcache_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QNetworkDiskCache* self ```
const char** q_networkdiskcache_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QNetworkDiskCache* self ```
QBindingStorage* q_networkdiskcache_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QNetworkDiskCache* self ```
QBindingStorage* q_networkdiskcache_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QNetworkDiskCache* self ```
void q_networkdiskcache_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QNetworkDiskCache* self, void (*slot)(QObject*) ```
void q_networkdiskcache_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QNetworkDiskCache* self ```
QObject* q_networkdiskcache_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QNetworkDiskCache* self, const char* classname ```
bool q_networkdiskcache_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QNetworkDiskCache* self ```
void q_networkdiskcache_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QNetworkDiskCache* self, int interval, enum Qt__TimerType timerType ```
int32_t q_networkdiskcache_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_networkdiskcache_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QNetworkDiskCache* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_networkdiskcache_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QNetworkDiskCache* self, QObject* param1 ```
void q_networkdiskcache_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QNetworkDiskCache* self, void (*slot)(QObject*, QObject*) ```
void q_networkdiskcache_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkDiskCache* self, QEvent* event ```
bool q_networkdiskcache_event(void* self, void* event) {
    return QNetworkDiskCache_Event((QNetworkDiskCache*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkDiskCache* self, QEvent* event ```
bool q_networkdiskcache_qbase_event(void* self, void* event) {
    return QNetworkDiskCache_QBaseEvent((QNetworkDiskCache*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkDiskCache* self, bool (*slot)(QNetworkDiskCache*, QEvent*) ```
void q_networkdiskcache_on_event(void* self, bool (*slot)(void*, void*)) {
    QNetworkDiskCache_OnEvent((QNetworkDiskCache*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkDiskCache* self, QObject* watched, QEvent* event ```
bool q_networkdiskcache_event_filter(void* self, void* watched, void* event) {
    return QNetworkDiskCache_EventFilter((QNetworkDiskCache*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkDiskCache* self, QObject* watched, QEvent* event ```
bool q_networkdiskcache_qbase_event_filter(void* self, void* watched, void* event) {
    return QNetworkDiskCache_QBaseEventFilter((QNetworkDiskCache*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkDiskCache* self, bool (*slot)(QNetworkDiskCache*, QObject*, QEvent*) ```
void q_networkdiskcache_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QNetworkDiskCache_OnEventFilter((QNetworkDiskCache*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkDiskCache* self, QTimerEvent* event ```
void q_networkdiskcache_timer_event(void* self, void* event) {
    QNetworkDiskCache_TimerEvent((QNetworkDiskCache*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkDiskCache* self, QTimerEvent* event ```
void q_networkdiskcache_qbase_timer_event(void* self, void* event) {
    QNetworkDiskCache_QBaseTimerEvent((QNetworkDiskCache*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkDiskCache* self, void (*slot)(QNetworkDiskCache*, QTimerEvent*) ```
void q_networkdiskcache_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QNetworkDiskCache_OnTimerEvent((QNetworkDiskCache*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkDiskCache* self, QChildEvent* event ```
void q_networkdiskcache_child_event(void* self, void* event) {
    QNetworkDiskCache_ChildEvent((QNetworkDiskCache*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkDiskCache* self, QChildEvent* event ```
void q_networkdiskcache_qbase_child_event(void* self, void* event) {
    QNetworkDiskCache_QBaseChildEvent((QNetworkDiskCache*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkDiskCache* self, void (*slot)(QNetworkDiskCache*, QChildEvent*) ```
void q_networkdiskcache_on_child_event(void* self, void (*slot)(void*, void*)) {
    QNetworkDiskCache_OnChildEvent((QNetworkDiskCache*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkDiskCache* self, QEvent* event ```
void q_networkdiskcache_custom_event(void* self, void* event) {
    QNetworkDiskCache_CustomEvent((QNetworkDiskCache*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkDiskCache* self, QEvent* event ```
void q_networkdiskcache_qbase_custom_event(void* self, void* event) {
    QNetworkDiskCache_QBaseCustomEvent((QNetworkDiskCache*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkDiskCache* self, void (*slot)(QNetworkDiskCache*, QEvent*) ```
void q_networkdiskcache_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QNetworkDiskCache_OnCustomEvent((QNetworkDiskCache*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkDiskCache* self, QMetaMethod* signal ```
void q_networkdiskcache_connect_notify(void* self, void* signal) {
    QNetworkDiskCache_ConnectNotify((QNetworkDiskCache*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkDiskCache* self, QMetaMethod* signal ```
void q_networkdiskcache_qbase_connect_notify(void* self, void* signal) {
    QNetworkDiskCache_QBaseConnectNotify((QNetworkDiskCache*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkDiskCache* self, void (*slot)(QNetworkDiskCache*, QMetaMethod*) ```
void q_networkdiskcache_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QNetworkDiskCache_OnConnectNotify((QNetworkDiskCache*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkDiskCache* self, QMetaMethod* signal ```
void q_networkdiskcache_disconnect_notify(void* self, void* signal) {
    QNetworkDiskCache_DisconnectNotify((QNetworkDiskCache*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkDiskCache* self, QMetaMethod* signal ```
void q_networkdiskcache_qbase_disconnect_notify(void* self, void* signal) {
    QNetworkDiskCache_QBaseDisconnectNotify((QNetworkDiskCache*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkDiskCache* self, void (*slot)(QNetworkDiskCache*, QMetaMethod*) ```
void q_networkdiskcache_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QNetworkDiskCache_OnDisconnectNotify((QNetworkDiskCache*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkDiskCache* self ```
QObject* q_networkdiskcache_sender(void* self) {
    return QNetworkDiskCache_Sender((QNetworkDiskCache*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkDiskCache* self ```
QObject* q_networkdiskcache_qbase_sender(void* self) {
    return QNetworkDiskCache_QBaseSender((QNetworkDiskCache*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkDiskCache* self, QObject* (*slot)() ```
void q_networkdiskcache_on_sender(void* self, QObject* (*slot)()) {
    QNetworkDiskCache_OnSender((QNetworkDiskCache*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkDiskCache* self ```
int32_t q_networkdiskcache_sender_signal_index(void* self) {
    return QNetworkDiskCache_SenderSignalIndex((QNetworkDiskCache*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkDiskCache* self ```
int32_t q_networkdiskcache_qbase_sender_signal_index(void* self) {
    return QNetworkDiskCache_QBaseSenderSignalIndex((QNetworkDiskCache*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkDiskCache* self, int32_t (*slot)() ```
void q_networkdiskcache_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QNetworkDiskCache_OnSenderSignalIndex((QNetworkDiskCache*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkDiskCache* self, const char* signal ```
int32_t q_networkdiskcache_receivers(void* self, const char* signal) {
    return QNetworkDiskCache_Receivers((QNetworkDiskCache*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkDiskCache* self, const char* signal ```
int32_t q_networkdiskcache_qbase_receivers(void* self, const char* signal) {
    return QNetworkDiskCache_QBaseReceivers((QNetworkDiskCache*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkDiskCache* self, int32_t (*slot)(QNetworkDiskCache*, const char*) ```
void q_networkdiskcache_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QNetworkDiskCache_OnReceivers((QNetworkDiskCache*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkDiskCache* self, QMetaMethod* signal ```
bool q_networkdiskcache_is_signal_connected(void* self, void* signal) {
    return QNetworkDiskCache_IsSignalConnected((QNetworkDiskCache*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkDiskCache* self, QMetaMethod* signal ```
bool q_networkdiskcache_qbase_is_signal_connected(void* self, void* signal) {
    return QNetworkDiskCache_QBaseIsSignalConnected((QNetworkDiskCache*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkDiskCache* self, bool (*slot)(QNetworkDiskCache*, QMetaMethod*) ```
void q_networkdiskcache_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QNetworkDiskCache_OnIsSignalConnected((QNetworkDiskCache*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QNetworkDiskCache* self ```
void q_networkdiskcache_delete(void* self) {
    QNetworkDiskCache_Delete((QNetworkDiskCache*)(self));
}