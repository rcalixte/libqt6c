#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqrunnable.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqthreadpool.hpp"
#include "libqthreadpool.h"

/// https://doc.qt.io/qt-6/qthreadpool.html

/// q_threadpool_new constructs a new QThreadPool object.
///
///
QThreadPool* q_threadpool_new() {
    return QThreadPool_new();
}

/// q_threadpool_new2 constructs a new QThreadPool object.
///
/// ``` QObject* parent ```
QThreadPool* q_threadpool_new2(void* parent) {
    return QThreadPool_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QThreadPool* self ```
QMetaObject* q_threadpool_meta_object(void* self) {
    return QThreadPool_MetaObject((QThreadPool*)self);
}

/// ``` QThreadPool* self, const char* param1 ```
void* q_threadpool_metacast(void* self, const char* param1) {
    return QThreadPool_Metacast((QThreadPool*)self, param1);
}

/// ``` QThreadPool* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_threadpool_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QThreadPool_Metacall((QThreadPool*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QThreadPool* self, int32_t (*slot)(QThreadPool*, enum QMetaObject__Call, int, void*) ```
void q_threadpool_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QThreadPool_OnMetacall((QThreadPool*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QThreadPool* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_threadpool_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QThreadPool_QBaseMetacall((QThreadPool*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_threadpool_tr(const char* s) {
    libqt_string _str = QThreadPool_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#globalInstance)
///
///
QThreadPool* q_threadpool_global_instance() {
    return QThreadPool_GlobalInstance();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#start)
///
/// ``` QThreadPool* self, QRunnable* runnable ```
void q_threadpool_start(void* self, void* runnable) {
    QThreadPool_Start((QThreadPool*)self, (QRunnable*)runnable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#tryStart)
///
/// ``` QThreadPool* self, QRunnable* runnable ```
bool q_threadpool_try_start(void* self, void* runnable) {
    return QThreadPool_TryStart((QThreadPool*)self, (QRunnable*)runnable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#startOnReservedThread)
///
/// ``` QThreadPool* self, QRunnable* runnable ```
void q_threadpool_start_on_reserved_thread(void* self, void* runnable) {
    QThreadPool_StartOnReservedThread((QThreadPool*)self, (QRunnable*)runnable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#expiryTimeout)
///
/// ``` QThreadPool* self ```
int32_t q_threadpool_expiry_timeout(void* self) {
    return QThreadPool_ExpiryTimeout((QThreadPool*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#setExpiryTimeout)
///
/// ``` QThreadPool* self, int expiryTimeout ```
void q_threadpool_set_expiry_timeout(void* self, int expiryTimeout) {
    QThreadPool_SetExpiryTimeout((QThreadPool*)self, expiryTimeout);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#maxThreadCount)
///
/// ``` QThreadPool* self ```
int32_t q_threadpool_max_thread_count(void* self) {
    return QThreadPool_MaxThreadCount((QThreadPool*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#setMaxThreadCount)
///
/// ``` QThreadPool* self, int maxThreadCount ```
void q_threadpool_set_max_thread_count(void* self, int maxThreadCount) {
    QThreadPool_SetMaxThreadCount((QThreadPool*)self, maxThreadCount);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#activeThreadCount)
///
/// ``` QThreadPool* self ```
int32_t q_threadpool_active_thread_count(void* self) {
    return QThreadPool_ActiveThreadCount((QThreadPool*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#setStackSize)
///
/// ``` QThreadPool* self, uint32_t stackSize ```
void q_threadpool_set_stack_size(void* self, uint32_t stackSize) {
    QThreadPool_SetStackSize((QThreadPool*)self, stackSize);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#stackSize)
///
/// ``` QThreadPool* self ```
uint32_t q_threadpool_stack_size(void* self) {
    return QThreadPool_StackSize((QThreadPool*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#setThreadPriority)
///
/// ``` QThreadPool* self, enum QThread__Priority priority ```
void q_threadpool_set_thread_priority(void* self, int64_t priority) {
    QThreadPool_SetThreadPriority((QThreadPool*)self, priority);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#threadPriority)
///
/// ``` QThreadPool* self ```
int64_t q_threadpool_thread_priority(void* self) {
    return QThreadPool_ThreadPriority((QThreadPool*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#reserveThread)
///
/// ``` QThreadPool* self ```
void q_threadpool_reserve_thread(void* self) {
    QThreadPool_ReserveThread((QThreadPool*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#releaseThread)
///
/// ``` QThreadPool* self ```
void q_threadpool_release_thread(void* self) {
    QThreadPool_ReleaseThread((QThreadPool*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#waitForDone)
///
/// ``` QThreadPool* self ```
bool q_threadpool_wait_for_done(void* self) {
    return QThreadPool_WaitForDone((QThreadPool*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#clear)
///
/// ``` QThreadPool* self ```
void q_threadpool_clear(void* self) {
    QThreadPool_Clear((QThreadPool*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#contains)
///
/// ``` QThreadPool* self, QThread* thread ```
bool q_threadpool_contains(void* self, void* thread) {
    return QThreadPool_Contains((QThreadPool*)self, (QThread*)thread);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#tryTake)
///
/// ``` QThreadPool* self, QRunnable* runnable ```
bool q_threadpool_try_take(void* self, void* runnable) {
    return QThreadPool_TryTake((QThreadPool*)self, (QRunnable*)runnable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_threadpool_tr2(const char* s, const char* c) {
    libqt_string _str = QThreadPool_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_threadpool_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QThreadPool_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#start)
///
/// ``` QThreadPool* self, QRunnable* runnable, int priority ```
void q_threadpool_start2(void* self, void* runnable, int priority) {
    QThreadPool_Start2((QThreadPool*)self, (QRunnable*)runnable, priority);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#waitForDone)
///
/// ``` QThreadPool* self, int msecs ```
bool q_threadpool_wait_for_done1(void* self, int msecs) {
    return QThreadPool_WaitForDone1((QThreadPool*)self, msecs);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QThreadPool* self ```
const char* q_threadpool_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QThreadPool* self, const char* name ```
void q_threadpool_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QThreadPool* self ```
bool q_threadpool_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QThreadPool* self ```
bool q_threadpool_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QThreadPool* self ```
bool q_threadpool_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QThreadPool* self ```
bool q_threadpool_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QThreadPool* self, bool b ```
bool q_threadpool_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QThreadPool* self ```
QThread* q_threadpool_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QThreadPool* self, QThread* thread ```
void q_threadpool_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QThreadPool* self, int interval ```
int32_t q_threadpool_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QThreadPool* self, int id ```
void q_threadpool_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QThreadPool* self ```
libqt_list /* of QObject* */ q_threadpool_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QThreadPool* self, QObject* parent ```
void q_threadpool_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QThreadPool* self, QObject* filterObj ```
void q_threadpool_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QThreadPool* self, QObject* obj ```
void q_threadpool_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_threadpool_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QThreadPool* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_threadpool_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_threadpool_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_threadpool_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QThreadPool* self ```
void q_threadpool_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QThreadPool* self ```
void q_threadpool_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QThreadPool* self, const char* name, QVariant* value ```
bool q_threadpool_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QThreadPool* self, const char* name ```
QVariant* q_threadpool_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QThreadPool* self ```
const char** q_threadpool_dynamic_property_names(void* self) {
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
/// ``` QThreadPool* self ```
QBindingStorage* q_threadpool_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QThreadPool* self ```
QBindingStorage* q_threadpool_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QThreadPool* self ```
void q_threadpool_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QThreadPool* self, void (*slot)(QObject*) ```
void q_threadpool_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QThreadPool* self ```
QObject* q_threadpool_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QThreadPool* self, const char* classname ```
bool q_threadpool_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QThreadPool* self ```
void q_threadpool_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QThreadPool* self, int interval, enum Qt__TimerType timerType ```
int32_t q_threadpool_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_threadpool_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QThreadPool* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_threadpool_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QThreadPool* self, QObject* param1 ```
void q_threadpool_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QThreadPool* self, void (*slot)(QObject*, QObject*) ```
void q_threadpool_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QThreadPool* self, QEvent* event ```
bool q_threadpool_event(void* self, void* event) {
    return QThreadPool_Event((QThreadPool*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QThreadPool* self, QEvent* event ```
bool q_threadpool_qbase_event(void* self, void* event) {
    return QThreadPool_QBaseEvent((QThreadPool*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QThreadPool* self, bool (*slot)(QThreadPool*, QEvent*) ```
void q_threadpool_on_event(void* self, bool (*slot)(void*, void*)) {
    QThreadPool_OnEvent((QThreadPool*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QThreadPool* self, QObject* watched, QEvent* event ```
bool q_threadpool_event_filter(void* self, void* watched, void* event) {
    return QThreadPool_EventFilter((QThreadPool*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QThreadPool* self, QObject* watched, QEvent* event ```
bool q_threadpool_qbase_event_filter(void* self, void* watched, void* event) {
    return QThreadPool_QBaseEventFilter((QThreadPool*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QThreadPool* self, bool (*slot)(QThreadPool*, QObject*, QEvent*) ```
void q_threadpool_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QThreadPool_OnEventFilter((QThreadPool*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QThreadPool* self, QTimerEvent* event ```
void q_threadpool_timer_event(void* self, void* event) {
    QThreadPool_TimerEvent((QThreadPool*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QThreadPool* self, QTimerEvent* event ```
void q_threadpool_qbase_timer_event(void* self, void* event) {
    QThreadPool_QBaseTimerEvent((QThreadPool*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QThreadPool* self, void (*slot)(QThreadPool*, QTimerEvent*) ```
void q_threadpool_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QThreadPool_OnTimerEvent((QThreadPool*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QThreadPool* self, QChildEvent* event ```
void q_threadpool_child_event(void* self, void* event) {
    QThreadPool_ChildEvent((QThreadPool*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QThreadPool* self, QChildEvent* event ```
void q_threadpool_qbase_child_event(void* self, void* event) {
    QThreadPool_QBaseChildEvent((QThreadPool*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QThreadPool* self, void (*slot)(QThreadPool*, QChildEvent*) ```
void q_threadpool_on_child_event(void* self, void (*slot)(void*, void*)) {
    QThreadPool_OnChildEvent((QThreadPool*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QThreadPool* self, QEvent* event ```
void q_threadpool_custom_event(void* self, void* event) {
    QThreadPool_CustomEvent((QThreadPool*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QThreadPool* self, QEvent* event ```
void q_threadpool_qbase_custom_event(void* self, void* event) {
    QThreadPool_QBaseCustomEvent((QThreadPool*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QThreadPool* self, void (*slot)(QThreadPool*, QEvent*) ```
void q_threadpool_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QThreadPool_OnCustomEvent((QThreadPool*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QThreadPool* self, QMetaMethod* signal ```
void q_threadpool_connect_notify(void* self, void* signal) {
    QThreadPool_ConnectNotify((QThreadPool*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QThreadPool* self, QMetaMethod* signal ```
void q_threadpool_qbase_connect_notify(void* self, void* signal) {
    QThreadPool_QBaseConnectNotify((QThreadPool*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QThreadPool* self, void (*slot)(QThreadPool*, QMetaMethod*) ```
void q_threadpool_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QThreadPool_OnConnectNotify((QThreadPool*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QThreadPool* self, QMetaMethod* signal ```
void q_threadpool_disconnect_notify(void* self, void* signal) {
    QThreadPool_DisconnectNotify((QThreadPool*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QThreadPool* self, QMetaMethod* signal ```
void q_threadpool_qbase_disconnect_notify(void* self, void* signal) {
    QThreadPool_QBaseDisconnectNotify((QThreadPool*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QThreadPool* self, void (*slot)(QThreadPool*, QMetaMethod*) ```
void q_threadpool_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QThreadPool_OnDisconnectNotify((QThreadPool*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QThreadPool* self ```
QObject* q_threadpool_sender(void* self) {
    return QThreadPool_Sender((QThreadPool*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QThreadPool* self ```
QObject* q_threadpool_qbase_sender(void* self) {
    return QThreadPool_QBaseSender((QThreadPool*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QThreadPool* self, QObject* (*slot)() ```
void q_threadpool_on_sender(void* self, QObject* (*slot)()) {
    QThreadPool_OnSender((QThreadPool*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QThreadPool* self ```
int32_t q_threadpool_sender_signal_index(void* self) {
    return QThreadPool_SenderSignalIndex((QThreadPool*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QThreadPool* self ```
int32_t q_threadpool_qbase_sender_signal_index(void* self) {
    return QThreadPool_QBaseSenderSignalIndex((QThreadPool*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QThreadPool* self, int32_t (*slot)() ```
void q_threadpool_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QThreadPool_OnSenderSignalIndex((QThreadPool*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QThreadPool* self, const char* signal ```
int32_t q_threadpool_receivers(void* self, const char* signal) {
    return QThreadPool_Receivers((QThreadPool*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QThreadPool* self, const char* signal ```
int32_t q_threadpool_qbase_receivers(void* self, const char* signal) {
    return QThreadPool_QBaseReceivers((QThreadPool*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QThreadPool* self, int32_t (*slot)(QThreadPool*, const char*) ```
void q_threadpool_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QThreadPool_OnReceivers((QThreadPool*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QThreadPool* self, QMetaMethod* signal ```
bool q_threadpool_is_signal_connected(void* self, void* signal) {
    return QThreadPool_IsSignalConnected((QThreadPool*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QThreadPool* self, QMetaMethod* signal ```
bool q_threadpool_qbase_is_signal_connected(void* self, void* signal) {
    return QThreadPool_QBaseIsSignalConnected((QThreadPool*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QThreadPool* self, bool (*slot)(QThreadPool*, QMetaMethod*) ```
void q_threadpool_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QThreadPool_OnIsSignalConnected((QThreadPool*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QThreadPool* self ```
void q_threadpool_delete(void* self) {
    QThreadPool_Delete((QThreadPool*)(self));
}