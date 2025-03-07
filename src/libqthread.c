#include "libqabstracteventdispatcher.hpp"
#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqdeadlinetimer.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqthread.hpp"
#include "libqthread.h"

/// https://doc.qt.io/qt-6/qthread.html

/// q_thread_new constructs a new QThread object.
///
///
QThread* q_thread_new() {
    return QThread_new();
}

/// q_thread_new2 constructs a new QThread object.
///
/// ``` QObject* parent ```
QThread* q_thread_new2(void* parent) {
    return QThread_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QThread* self ```
QMetaObject* q_thread_meta_object(void* self) {
    return QThread_MetaObject((QThread*)self);
}

/// ``` QThread* self, const char* param1 ```
void* q_thread_metacast(void* self, const char* param1) {
    return QThread_Metacast((QThread*)self, param1);
}

/// ``` QThread* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_thread_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QThread_Metacall((QThread*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QThread* self, int32_t (*slot)(QThread*, enum QMetaObject__Call, int, void*) ```
void q_thread_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QThread_OnMetacall((QThread*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QThread* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_thread_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QThread_QBaseMetacall((QThread*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_thread_tr(const char* s) {
    libqt_string _str = QThread_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#currentThreadId)
///
///
void* q_thread_current_thread_id() {
    return QThread_CurrentThreadId();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#currentThread)
///
///
QThread* q_thread_current_thread() {
    return QThread_CurrentThread();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#idealThreadCount)
///
///
int32_t q_thread_ideal_thread_count() {
    return QThread_IdealThreadCount();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#yieldCurrentThread)
///
///
void q_thread_yield_current_thread() {
    QThread_YieldCurrentThread();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#setPriority)
///
/// ``` QThread* self, enum QThread__Priority priority ```
void q_thread_set_priority(void* self, int64_t priority) {
    QThread_SetPriority((QThread*)self, priority);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#priority)
///
/// ``` QThread* self ```
int64_t q_thread_priority(void* self) {
    return QThread_Priority((QThread*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#isFinished)
///
/// ``` QThread* self ```
bool q_thread_is_finished(void* self) {
    return QThread_IsFinished((QThread*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#isRunning)
///
/// ``` QThread* self ```
bool q_thread_is_running(void* self) {
    return QThread_IsRunning((QThread*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#requestInterruption)
///
/// ``` QThread* self ```
void q_thread_request_interruption(void* self) {
    QThread_RequestInterruption((QThread*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#isInterruptionRequested)
///
/// ``` QThread* self ```
bool q_thread_is_interruption_requested(void* self) {
    return QThread_IsInterruptionRequested((QThread*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#setStackSize)
///
/// ``` QThread* self, uint32_t stackSize ```
void q_thread_set_stack_size(void* self, uint32_t stackSize) {
    QThread_SetStackSize((QThread*)self, stackSize);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#stackSize)
///
/// ``` QThread* self ```
uint32_t q_thread_stack_size(void* self) {
    return QThread_StackSize((QThread*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#eventDispatcher)
///
/// ``` QThread* self ```
QAbstractEventDispatcher* q_thread_event_dispatcher(void* self) {
    return QThread_EventDispatcher((QThread*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#setEventDispatcher)
///
/// ``` QThread* self, QAbstractEventDispatcher* eventDispatcher ```
void q_thread_set_event_dispatcher(void* self, void* eventDispatcher) {
    QThread_SetEventDispatcher((QThread*)self, (QAbstractEventDispatcher*)eventDispatcher);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#event)
///
/// ``` QThread* self, QEvent* event ```
bool q_thread_event(void* self, void* event) {
    return QThread_Event((QThread*)self, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QThread* self, bool (*slot)(QThread*, QEvent*) ```
void q_thread_on_event(void* self, bool (*slot)(void*, void*)) {
    QThread_OnEvent((QThread*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QThread* self, QEvent* event ```
bool q_thread_qbase_event(void* self, void* event) {
    return QThread_QBaseEvent((QThread*)self, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#loopLevel)
///
/// ``` QThread* self ```
int32_t q_thread_loop_level(void* self) {
    return QThread_LoopLevel((QThread*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#start)
///
/// ``` QThread* self ```
void q_thread_start(void* self) {
    QThread_Start((QThread*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#terminate)
///
/// ``` QThread* self ```
void q_thread_terminate(void* self) {
    QThread_Terminate((QThread*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#exit)
///
/// ``` QThread* self ```
void q_thread_exit(void* self) {
    QThread_Exit((QThread*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#quit)
///
/// ``` QThread* self ```
void q_thread_quit(void* self) {
    QThread_Quit((QThread*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#wait)
///
/// ``` QThread* self ```
bool q_thread_wait(void* self) {
    return QThread_Wait((QThread*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#wait)
///
/// ``` QThread* self, uint64_t time ```
bool q_thread_wait_with_time(void* self, uint64_t time) {
    return QThread_WaitWithTime((QThread*)self, time);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#sleep)
///
/// ``` uint64_t param1 ```
void q_thread_sleep(uint64_t param1) {
    QThread_Sleep(param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#msleep)
///
/// ``` uint64_t param1 ```
void q_thread_msleep(uint64_t param1) {
    QThread_Msleep(param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#usleep)
///
/// ``` uint64_t param1 ```
void q_thread_usleep(uint64_t param1) {
    QThread_Usleep(param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#run)
///
/// ``` QThread* self ```
void q_thread_run(void* self) {
    QThread_Run((QThread*)self);
}

/// Allows for overriding the related default method
///
/// ``` QThread* self, void (*slot)() ```
void q_thread_on_run(void* self, void (*slot)()) {
    QThread_OnRun((QThread*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QThread* self ```
void q_thread_qbase_run(void* self) {
    QThread_QBaseRun((QThread*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#exec)
///
/// ``` QThread* self ```
int32_t q_thread_exec(void* self) {
    return QThread_Exec((QThread*)self);
}

/// Allows for overriding the related default method
///
/// ``` QThread* self, int32_t (*slot)() ```
void q_thread_on_exec(void* self, int32_t (*slot)()) {
    QThread_OnExec((QThread*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QThread* self ```
int32_t q_thread_qbase_exec(void* self) {
    return QThread_QBaseExec((QThread*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_thread_tr2(const char* s, const char* c) {
    libqt_string _str = QThread_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_thread_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QThread_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#start)
///
/// ``` QThread* self, enum QThread__Priority param1 ```
void q_thread_start1(void* self, int64_t param1) {
    QThread_Start1((QThread*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#exit)
///
/// ``` QThread* self, int retcode ```
void q_thread_exit1(void* self, int retcode) {
    QThread_Exit1((QThread*)self, retcode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#wait)
///
/// ``` QThread* self, QDeadlineTimer* deadline ```
bool q_thread_wait1(void* self, void* deadline) {
    return QThread_Wait1((QThread*)self, (QDeadlineTimer*)deadline);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QThread* self ```
const char* q_thread_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QThread* self, const char* name ```
void q_thread_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QThread* self ```
bool q_thread_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QThread* self ```
bool q_thread_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QThread* self ```
bool q_thread_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QThread* self ```
bool q_thread_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QThread* self, bool b ```
bool q_thread_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QThread* self ```
QThread* q_thread_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QThread* self, QThread* thread ```
void q_thread_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QThread* self, int interval ```
int32_t q_thread_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QThread* self, int id ```
void q_thread_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QThread* self ```
libqt_list /* of QObject* */ q_thread_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QThread* self, QObject* parent ```
void q_thread_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QThread* self, QObject* filterObj ```
void q_thread_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QThread* self, QObject* obj ```
void q_thread_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_thread_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QThread* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_thread_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_thread_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_thread_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QThread* self ```
void q_thread_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QThread* self ```
void q_thread_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QThread* self, const char* name, QVariant* value ```
bool q_thread_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QThread* self, const char* name ```
QVariant* q_thread_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QThread* self ```
const char** q_thread_dynamic_property_names(void* self) {
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
/// ``` QThread* self ```
QBindingStorage* q_thread_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QThread* self ```
QBindingStorage* q_thread_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QThread* self ```
void q_thread_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QThread* self, void (*slot)(QObject*) ```
void q_thread_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QThread* self ```
QObject* q_thread_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QThread* self, const char* classname ```
bool q_thread_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QThread* self ```
void q_thread_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QThread* self, int interval, enum Qt__TimerType timerType ```
int32_t q_thread_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_thread_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QThread* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_thread_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QThread* self, QObject* param1 ```
void q_thread_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QThread* self, void (*slot)(QObject*, QObject*) ```
void q_thread_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QThread* self, QObject* watched, QEvent* event ```
bool q_thread_event_filter(void* self, void* watched, void* event) {
    return QThread_EventFilter((QThread*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QThread* self, QObject* watched, QEvent* event ```
bool q_thread_qbase_event_filter(void* self, void* watched, void* event) {
    return QThread_QBaseEventFilter((QThread*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QThread* self, bool (*slot)(QThread*, QObject*, QEvent*) ```
void q_thread_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QThread_OnEventFilter((QThread*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QThread* self, QTimerEvent* event ```
void q_thread_timer_event(void* self, void* event) {
    QThread_TimerEvent((QThread*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QThread* self, QTimerEvent* event ```
void q_thread_qbase_timer_event(void* self, void* event) {
    QThread_QBaseTimerEvent((QThread*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QThread* self, void (*slot)(QThread*, QTimerEvent*) ```
void q_thread_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QThread_OnTimerEvent((QThread*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QThread* self, QChildEvent* event ```
void q_thread_child_event(void* self, void* event) {
    QThread_ChildEvent((QThread*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QThread* self, QChildEvent* event ```
void q_thread_qbase_child_event(void* self, void* event) {
    QThread_QBaseChildEvent((QThread*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QThread* self, void (*slot)(QThread*, QChildEvent*) ```
void q_thread_on_child_event(void* self, void (*slot)(void*, void*)) {
    QThread_OnChildEvent((QThread*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QThread* self, QEvent* event ```
void q_thread_custom_event(void* self, void* event) {
    QThread_CustomEvent((QThread*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QThread* self, QEvent* event ```
void q_thread_qbase_custom_event(void* self, void* event) {
    QThread_QBaseCustomEvent((QThread*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QThread* self, void (*slot)(QThread*, QEvent*) ```
void q_thread_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QThread_OnCustomEvent((QThread*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QThread* self, QMetaMethod* signal ```
void q_thread_connect_notify(void* self, void* signal) {
    QThread_ConnectNotify((QThread*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QThread* self, QMetaMethod* signal ```
void q_thread_qbase_connect_notify(void* self, void* signal) {
    QThread_QBaseConnectNotify((QThread*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QThread* self, void (*slot)(QThread*, QMetaMethod*) ```
void q_thread_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QThread_OnConnectNotify((QThread*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QThread* self, QMetaMethod* signal ```
void q_thread_disconnect_notify(void* self, void* signal) {
    QThread_DisconnectNotify((QThread*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QThread* self, QMetaMethod* signal ```
void q_thread_qbase_disconnect_notify(void* self, void* signal) {
    QThread_QBaseDisconnectNotify((QThread*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QThread* self, void (*slot)(QThread*, QMetaMethod*) ```
void q_thread_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QThread_OnDisconnectNotify((QThread*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QThread* self ```
QObject* q_thread_sender(void* self) {
    return QThread_Sender((QThread*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QThread* self ```
QObject* q_thread_qbase_sender(void* self) {
    return QThread_QBaseSender((QThread*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QThread* self, QObject* (*slot)() ```
void q_thread_on_sender(void* self, QObject* (*slot)()) {
    QThread_OnSender((QThread*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QThread* self ```
int32_t q_thread_sender_signal_index(void* self) {
    return QThread_SenderSignalIndex((QThread*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QThread* self ```
int32_t q_thread_qbase_sender_signal_index(void* self) {
    return QThread_QBaseSenderSignalIndex((QThread*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QThread* self, int32_t (*slot)() ```
void q_thread_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QThread_OnSenderSignalIndex((QThread*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QThread* self, const char* signal ```
int32_t q_thread_receivers(void* self, const char* signal) {
    return QThread_Receivers((QThread*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QThread* self, const char* signal ```
int32_t q_thread_qbase_receivers(void* self, const char* signal) {
    return QThread_QBaseReceivers((QThread*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QThread* self, int32_t (*slot)(QThread*, const char*) ```
void q_thread_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QThread_OnReceivers((QThread*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QThread* self, QMetaMethod* signal ```
bool q_thread_is_signal_connected(void* self, void* signal) {
    return QThread_IsSignalConnected((QThread*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QThread* self, QMetaMethod* signal ```
bool q_thread_qbase_is_signal_connected(void* self, void* signal) {
    return QThread_QBaseIsSignalConnected((QThread*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QThread* self, bool (*slot)(QThread*, QMetaMethod*) ```
void q_thread_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QThread_OnIsSignalConnected((QThread*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QThread* self ```
void q_thread_delete(void* self) {
    QThread_Delete((QThread*)(self));
}