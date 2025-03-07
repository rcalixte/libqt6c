#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqsharedmemory.hpp"
#include "libqsharedmemory.h"

/// https://doc.qt.io/qt-6/qsharedmemory.html

/// q_sharedmemory_new constructs a new QSharedMemory object.
///
///
QSharedMemory* q_sharedmemory_new() {
    return QSharedMemory_new();
}

/// q_sharedmemory_new2 constructs a new QSharedMemory object.
///
/// ``` const char* key ```
QSharedMemory* q_sharedmemory_new2(const char* key) {
    return QSharedMemory_new2(qstring(key));
}

/// q_sharedmemory_new3 constructs a new QSharedMemory object.
///
/// ``` QObject* parent ```
QSharedMemory* q_sharedmemory_new3(void* parent) {
    return QSharedMemory_new3((QObject*)parent);
}

/// q_sharedmemory_new4 constructs a new QSharedMemory object.
///
/// ``` const char* key, QObject* parent ```
QSharedMemory* q_sharedmemory_new4(const char* key, void* parent) {
    return QSharedMemory_new4(qstring(key), (QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QSharedMemory* self ```
QMetaObject* q_sharedmemory_meta_object(void* self) {
    return QSharedMemory_MetaObject((QSharedMemory*)self);
}

/// ``` QSharedMemory* self, const char* param1 ```
void* q_sharedmemory_metacast(void* self, const char* param1) {
    return QSharedMemory_Metacast((QSharedMemory*)self, param1);
}

/// ``` QSharedMemory* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_sharedmemory_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSharedMemory_Metacall((QSharedMemory*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QSharedMemory* self, int32_t (*slot)(QSharedMemory*, enum QMetaObject__Call, int, void*) ```
void q_sharedmemory_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QSharedMemory_OnMetacall((QSharedMemory*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSharedMemory* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_sharedmemory_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSharedMemory_QBaseMetacall((QSharedMemory*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_sharedmemory_tr(const char* s) {
    libqt_string _str = QSharedMemory_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsharedmemory.html#setKey)
///
/// ``` QSharedMemory* self, const char* key ```
void q_sharedmemory_set_key(void* self, const char* key) {
    QSharedMemory_SetKey((QSharedMemory*)self, qstring(key));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsharedmemory.html#key)
///
/// ``` QSharedMemory* self ```
const char* q_sharedmemory_key(void* self) {
    libqt_string _str = QSharedMemory_Key((QSharedMemory*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsharedmemory.html#setNativeKey)
///
/// ``` QSharedMemory* self, const char* key ```
void q_sharedmemory_set_native_key(void* self, const char* key) {
    QSharedMemory_SetNativeKey((QSharedMemory*)self, qstring(key));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsharedmemory.html#nativeKey)
///
/// ``` QSharedMemory* self ```
const char* q_sharedmemory_native_key(void* self) {
    libqt_string _str = QSharedMemory_NativeKey((QSharedMemory*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsharedmemory.html#create)
///
/// ``` QSharedMemory* self, int64_t size ```
bool q_sharedmemory_create(void* self, int64_t size) {
    return QSharedMemory_Create((QSharedMemory*)self, size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsharedmemory.html#size)
///
/// ``` QSharedMemory* self ```
int64_t q_sharedmemory_size(void* self) {
    return QSharedMemory_Size((QSharedMemory*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsharedmemory.html#attach)
///
/// ``` QSharedMemory* self ```
bool q_sharedmemory_attach(void* self) {
    return QSharedMemory_Attach((QSharedMemory*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsharedmemory.html#isAttached)
///
/// ``` QSharedMemory* self ```
bool q_sharedmemory_is_attached(void* self) {
    return QSharedMemory_IsAttached((QSharedMemory*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsharedmemory.html#detach)
///
/// ``` QSharedMemory* self ```
bool q_sharedmemory_detach(void* self) {
    return QSharedMemory_Detach((QSharedMemory*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsharedmemory.html#data)
///
/// ``` QSharedMemory* self ```
void* q_sharedmemory_data(void* self) {
    return QSharedMemory_Data((QSharedMemory*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsharedmemory.html#constData)
///
/// ``` QSharedMemory* self ```
void* q_sharedmemory_const_data(void* self) {
    return QSharedMemory_ConstData((QSharedMemory*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsharedmemory.html#data)
///
/// ``` QSharedMemory* self ```
void* q_sharedmemory_data2(void* self) {
    return QSharedMemory_Data2((QSharedMemory*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsharedmemory.html#lock)
///
/// ``` QSharedMemory* self ```
bool q_sharedmemory_lock(void* self) {
    return QSharedMemory_Lock((QSharedMemory*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsharedmemory.html#unlock)
///
/// ``` QSharedMemory* self ```
bool q_sharedmemory_unlock(void* self) {
    return QSharedMemory_Unlock((QSharedMemory*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsharedmemory.html#error)
///
/// ``` QSharedMemory* self ```
int64_t q_sharedmemory_error(void* self) {
    return QSharedMemory_Error((QSharedMemory*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsharedmemory.html#errorString)
///
/// ``` QSharedMemory* self ```
const char* q_sharedmemory_error_string(void* self) {
    libqt_string _str = QSharedMemory_ErrorString((QSharedMemory*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_sharedmemory_tr2(const char* s, const char* c) {
    libqt_string _str = QSharedMemory_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_sharedmemory_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QSharedMemory_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsharedmemory.html#create)
///
/// ``` QSharedMemory* self, int64_t size, enum QSharedMemory__AccessMode mode ```
bool q_sharedmemory_create2(void* self, int64_t size, int64_t mode) {
    return QSharedMemory_Create2((QSharedMemory*)self, size, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsharedmemory.html#attach)
///
/// ``` QSharedMemory* self, enum QSharedMemory__AccessMode mode ```
bool q_sharedmemory_attach1(void* self, int64_t mode) {
    return QSharedMemory_Attach1((QSharedMemory*)self, mode);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QSharedMemory* self ```
const char* q_sharedmemory_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QSharedMemory* self, const char* name ```
void q_sharedmemory_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QSharedMemory* self ```
bool q_sharedmemory_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QSharedMemory* self ```
bool q_sharedmemory_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QSharedMemory* self ```
bool q_sharedmemory_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QSharedMemory* self ```
bool q_sharedmemory_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QSharedMemory* self, bool b ```
bool q_sharedmemory_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QSharedMemory* self ```
QThread* q_sharedmemory_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QSharedMemory* self, QThread* thread ```
void q_sharedmemory_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSharedMemory* self, int interval ```
int32_t q_sharedmemory_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QSharedMemory* self, int id ```
void q_sharedmemory_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QSharedMemory* self ```
libqt_list /* of QObject* */ q_sharedmemory_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QSharedMemory* self, QObject* parent ```
void q_sharedmemory_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QSharedMemory* self, QObject* filterObj ```
void q_sharedmemory_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QSharedMemory* self, QObject* obj ```
void q_sharedmemory_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_sharedmemory_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSharedMemory* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_sharedmemory_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_sharedmemory_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_sharedmemory_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QSharedMemory* self ```
void q_sharedmemory_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QSharedMemory* self ```
void q_sharedmemory_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QSharedMemory* self, const char* name, QVariant* value ```
bool q_sharedmemory_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QSharedMemory* self, const char* name ```
QVariant* q_sharedmemory_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QSharedMemory* self ```
const char** q_sharedmemory_dynamic_property_names(void* self) {
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
/// ``` QSharedMemory* self ```
QBindingStorage* q_sharedmemory_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSharedMemory* self ```
QBindingStorage* q_sharedmemory_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSharedMemory* self ```
void q_sharedmemory_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QSharedMemory* self, void (*slot)(QObject*) ```
void q_sharedmemory_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QSharedMemory* self ```
QObject* q_sharedmemory_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QSharedMemory* self, const char* classname ```
bool q_sharedmemory_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QSharedMemory* self ```
void q_sharedmemory_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSharedMemory* self, int interval, enum Qt__TimerType timerType ```
int32_t q_sharedmemory_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_sharedmemory_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSharedMemory* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_sharedmemory_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSharedMemory* self, QObject* param1 ```
void q_sharedmemory_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QSharedMemory* self, void (*slot)(QObject*, QObject*) ```
void q_sharedmemory_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSharedMemory* self, QEvent* event ```
bool q_sharedmemory_event(void* self, void* event) {
    return QSharedMemory_Event((QSharedMemory*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSharedMemory* self, QEvent* event ```
bool q_sharedmemory_qbase_event(void* self, void* event) {
    return QSharedMemory_QBaseEvent((QSharedMemory*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSharedMemory* self, bool (*slot)(QSharedMemory*, QEvent*) ```
void q_sharedmemory_on_event(void* self, bool (*slot)(void*, void*)) {
    QSharedMemory_OnEvent((QSharedMemory*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSharedMemory* self, QObject* watched, QEvent* event ```
bool q_sharedmemory_event_filter(void* self, void* watched, void* event) {
    return QSharedMemory_EventFilter((QSharedMemory*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSharedMemory* self, QObject* watched, QEvent* event ```
bool q_sharedmemory_qbase_event_filter(void* self, void* watched, void* event) {
    return QSharedMemory_QBaseEventFilter((QSharedMemory*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSharedMemory* self, bool (*slot)(QSharedMemory*, QObject*, QEvent*) ```
void q_sharedmemory_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QSharedMemory_OnEventFilter((QSharedMemory*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSharedMemory* self, QTimerEvent* event ```
void q_sharedmemory_timer_event(void* self, void* event) {
    QSharedMemory_TimerEvent((QSharedMemory*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSharedMemory* self, QTimerEvent* event ```
void q_sharedmemory_qbase_timer_event(void* self, void* event) {
    QSharedMemory_QBaseTimerEvent((QSharedMemory*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSharedMemory* self, void (*slot)(QSharedMemory*, QTimerEvent*) ```
void q_sharedmemory_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QSharedMemory_OnTimerEvent((QSharedMemory*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSharedMemory* self, QChildEvent* event ```
void q_sharedmemory_child_event(void* self, void* event) {
    QSharedMemory_ChildEvent((QSharedMemory*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSharedMemory* self, QChildEvent* event ```
void q_sharedmemory_qbase_child_event(void* self, void* event) {
    QSharedMemory_QBaseChildEvent((QSharedMemory*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSharedMemory* self, void (*slot)(QSharedMemory*, QChildEvent*) ```
void q_sharedmemory_on_child_event(void* self, void (*slot)(void*, void*)) {
    QSharedMemory_OnChildEvent((QSharedMemory*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSharedMemory* self, QEvent* event ```
void q_sharedmemory_custom_event(void* self, void* event) {
    QSharedMemory_CustomEvent((QSharedMemory*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSharedMemory* self, QEvent* event ```
void q_sharedmemory_qbase_custom_event(void* self, void* event) {
    QSharedMemory_QBaseCustomEvent((QSharedMemory*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSharedMemory* self, void (*slot)(QSharedMemory*, QEvent*) ```
void q_sharedmemory_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QSharedMemory_OnCustomEvent((QSharedMemory*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSharedMemory* self, QMetaMethod* signal ```
void q_sharedmemory_connect_notify(void* self, void* signal) {
    QSharedMemory_ConnectNotify((QSharedMemory*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSharedMemory* self, QMetaMethod* signal ```
void q_sharedmemory_qbase_connect_notify(void* self, void* signal) {
    QSharedMemory_QBaseConnectNotify((QSharedMemory*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSharedMemory* self, void (*slot)(QSharedMemory*, QMetaMethod*) ```
void q_sharedmemory_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QSharedMemory_OnConnectNotify((QSharedMemory*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSharedMemory* self, QMetaMethod* signal ```
void q_sharedmemory_disconnect_notify(void* self, void* signal) {
    QSharedMemory_DisconnectNotify((QSharedMemory*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSharedMemory* self, QMetaMethod* signal ```
void q_sharedmemory_qbase_disconnect_notify(void* self, void* signal) {
    QSharedMemory_QBaseDisconnectNotify((QSharedMemory*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSharedMemory* self, void (*slot)(QSharedMemory*, QMetaMethod*) ```
void q_sharedmemory_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QSharedMemory_OnDisconnectNotify((QSharedMemory*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSharedMemory* self ```
QObject* q_sharedmemory_sender(void* self) {
    return QSharedMemory_Sender((QSharedMemory*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSharedMemory* self ```
QObject* q_sharedmemory_qbase_sender(void* self) {
    return QSharedMemory_QBaseSender((QSharedMemory*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSharedMemory* self, QObject* (*slot)() ```
void q_sharedmemory_on_sender(void* self, QObject* (*slot)()) {
    QSharedMemory_OnSender((QSharedMemory*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSharedMemory* self ```
int32_t q_sharedmemory_sender_signal_index(void* self) {
    return QSharedMemory_SenderSignalIndex((QSharedMemory*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSharedMemory* self ```
int32_t q_sharedmemory_qbase_sender_signal_index(void* self) {
    return QSharedMemory_QBaseSenderSignalIndex((QSharedMemory*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSharedMemory* self, int32_t (*slot)() ```
void q_sharedmemory_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QSharedMemory_OnSenderSignalIndex((QSharedMemory*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSharedMemory* self, const char* signal ```
int32_t q_sharedmemory_receivers(void* self, const char* signal) {
    return QSharedMemory_Receivers((QSharedMemory*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSharedMemory* self, const char* signal ```
int32_t q_sharedmemory_qbase_receivers(void* self, const char* signal) {
    return QSharedMemory_QBaseReceivers((QSharedMemory*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSharedMemory* self, int32_t (*slot)(QSharedMemory*, const char*) ```
void q_sharedmemory_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QSharedMemory_OnReceivers((QSharedMemory*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSharedMemory* self, QMetaMethod* signal ```
bool q_sharedmemory_is_signal_connected(void* self, void* signal) {
    return QSharedMemory_IsSignalConnected((QSharedMemory*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSharedMemory* self, QMetaMethod* signal ```
bool q_sharedmemory_qbase_is_signal_connected(void* self, void* signal) {
    return QSharedMemory_QBaseIsSignalConnected((QSharedMemory*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSharedMemory* self, bool (*slot)(QSharedMemory*, QMetaMethod*) ```
void q_sharedmemory_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QSharedMemory_OnIsSignalConnected((QSharedMemory*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QSharedMemory* self ```
void q_sharedmemory_delete(void* self) {
    QSharedMemory_Delete((QSharedMemory*)(self));
}