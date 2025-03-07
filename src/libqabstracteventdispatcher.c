#include "libqabstractnativeeventfilter.hpp"
#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqsocketnotifier.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqabstracteventdispatcher.hpp"
#include "libqabstracteventdispatcher.h"

/// https://doc.qt.io/qt-6/qabstracteventdispatcher.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAbstractEventDispatcher* self ```
QMetaObject* q_abstracteventdispatcher_meta_object(void* self) {
    return QAbstractEventDispatcher_MetaObject((QAbstractEventDispatcher*)self);
}

/// ``` QAbstractEventDispatcher* self, const char* param1 ```
void* q_abstracteventdispatcher_metacast(void* self, const char* param1) {
    return QAbstractEventDispatcher_Metacast((QAbstractEventDispatcher*)self, param1);
}

/// ``` QAbstractEventDispatcher* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_abstracteventdispatcher_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAbstractEventDispatcher_Metacall((QAbstractEventDispatcher*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_abstracteventdispatcher_tr(const char* s) {
    libqt_string _str = QAbstractEventDispatcher_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#instance)
///
///
QAbstractEventDispatcher* q_abstracteventdispatcher_instance() {
    return QAbstractEventDispatcher_Instance();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#processEvents)
///
/// ``` QAbstractEventDispatcher* self, int flags ```
bool q_abstracteventdispatcher_process_events(void* self, int64_t flags) {
    return QAbstractEventDispatcher_ProcessEvents((QAbstractEventDispatcher*)self, flags);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#registerSocketNotifier)
///
/// ``` QAbstractEventDispatcher* self, QSocketNotifier* notifier ```
void q_abstracteventdispatcher_register_socket_notifier(void* self, void* notifier) {
    QAbstractEventDispatcher_RegisterSocketNotifier((QAbstractEventDispatcher*)self, (QSocketNotifier*)notifier);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#unregisterSocketNotifier)
///
/// ``` QAbstractEventDispatcher* self, QSocketNotifier* notifier ```
void q_abstracteventdispatcher_unregister_socket_notifier(void* self, void* notifier) {
    QAbstractEventDispatcher_UnregisterSocketNotifier((QAbstractEventDispatcher*)self, (QSocketNotifier*)notifier);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#registerTimer)
///
/// ``` QAbstractEventDispatcher* self, long long interval, enum Qt__TimerType timerType, QObject* object ```
int32_t q_abstracteventdispatcher_register_timer(void* self, long long interval, int64_t timerType, void* object) {
    return QAbstractEventDispatcher_RegisterTimer((QAbstractEventDispatcher*)self, interval, timerType, (QObject*)object);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#registerTimer)
///
/// ``` QAbstractEventDispatcher* self, int timerId, long long interval, enum Qt__TimerType timerType, QObject* object ```
void q_abstracteventdispatcher_register_timer2(void* self, int timerId, long long interval, int64_t timerType, void* object) {
    QAbstractEventDispatcher_RegisterTimer2((QAbstractEventDispatcher*)self, timerId, interval, timerType, (QObject*)object);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#unregisterTimer)
///
/// ``` QAbstractEventDispatcher* self, int timerId ```
bool q_abstracteventdispatcher_unregister_timer(void* self, int timerId) {
    return QAbstractEventDispatcher_UnregisterTimer((QAbstractEventDispatcher*)self, timerId);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#unregisterTimers)
///
/// ``` QAbstractEventDispatcher* self, QObject* object ```
bool q_abstracteventdispatcher_unregister_timers(void* self, void* object) {
    return QAbstractEventDispatcher_UnregisterTimers((QAbstractEventDispatcher*)self, (QObject*)object);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#registeredTimers)
///
/// ``` QAbstractEventDispatcher* self, QObject* object ```
libqt_list /* of QAbstractEventDispatcher__TimerInfo* */ q_abstracteventdispatcher_registered_timers(void* self, void* object) {
    libqt_list _arr = QAbstractEventDispatcher_RegisteredTimers((QAbstractEventDispatcher*)self, (QObject*)object);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#remainingTime)
///
/// ``` QAbstractEventDispatcher* self, int timerId ```
int32_t q_abstracteventdispatcher_remaining_time(void* self, int timerId) {
    return QAbstractEventDispatcher_RemainingTime((QAbstractEventDispatcher*)self, timerId);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#wakeUp)
///
/// ``` QAbstractEventDispatcher* self ```
void q_abstracteventdispatcher_wake_up(void* self) {
    QAbstractEventDispatcher_WakeUp((QAbstractEventDispatcher*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#interrupt)
///
/// ``` QAbstractEventDispatcher* self ```
void q_abstracteventdispatcher_interrupt(void* self) {
    QAbstractEventDispatcher_Interrupt((QAbstractEventDispatcher*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#startingUp)
///
/// ``` QAbstractEventDispatcher* self ```
void q_abstracteventdispatcher_starting_up(void* self) {
    QAbstractEventDispatcher_StartingUp((QAbstractEventDispatcher*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#closingDown)
///
/// ``` QAbstractEventDispatcher* self ```
void q_abstracteventdispatcher_closing_down(void* self) {
    QAbstractEventDispatcher_ClosingDown((QAbstractEventDispatcher*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#installNativeEventFilter)
///
/// ``` QAbstractEventDispatcher* self, QAbstractNativeEventFilter* filterObj ```
void q_abstracteventdispatcher_install_native_event_filter(void* self, void* filterObj) {
    QAbstractEventDispatcher_InstallNativeEventFilter((QAbstractEventDispatcher*)self, (QAbstractNativeEventFilter*)filterObj);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#removeNativeEventFilter)
///
/// ``` QAbstractEventDispatcher* self, QAbstractNativeEventFilter* filterObj ```
void q_abstracteventdispatcher_remove_native_event_filter(void* self, void* filterObj) {
    QAbstractEventDispatcher_RemoveNativeEventFilter((QAbstractEventDispatcher*)self, (QAbstractNativeEventFilter*)filterObj);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#filterNativeEvent)
///
/// ``` QAbstractEventDispatcher* self, const char* eventType, void* message, intptr_t* result ```
bool q_abstracteventdispatcher_filter_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QAbstractEventDispatcher_FilterNativeEvent((QAbstractEventDispatcher*)self, qstring(eventType), message, result);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#aboutToBlock)
///
/// ``` QAbstractEventDispatcher* self ```
void q_abstracteventdispatcher_about_to_block(void* self) {
    QAbstractEventDispatcher_AboutToBlock((QAbstractEventDispatcher*)self);
}

/// ``` QAbstractEventDispatcher* self, void (*slot)(QAbstractEventDispatcher*) ```
void q_abstracteventdispatcher_on_about_to_block(void* self, void (*slot)(void*)) {
    QAbstractEventDispatcher_Connect_AboutToBlock((QAbstractEventDispatcher*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#awake)
///
/// ``` QAbstractEventDispatcher* self ```
void q_abstracteventdispatcher_awake(void* self) {
    QAbstractEventDispatcher_Awake((QAbstractEventDispatcher*)self);
}

/// ``` QAbstractEventDispatcher* self, void (*slot)(QAbstractEventDispatcher*) ```
void q_abstracteventdispatcher_on_awake(void* self, void (*slot)(void*)) {
    QAbstractEventDispatcher_Connect_Awake((QAbstractEventDispatcher*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_abstracteventdispatcher_tr2(const char* s, const char* c) {
    libqt_string _str = QAbstractEventDispatcher_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_abstracteventdispatcher_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QAbstractEventDispatcher_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#instance)
///
/// ``` QThread* thread ```
QAbstractEventDispatcher* q_abstracteventdispatcher_instance1(void* thread) {
    return QAbstractEventDispatcher_Instance1((QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// ``` QAbstractEventDispatcher* self, QEvent* event ```
bool q_abstracteventdispatcher_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// ``` QAbstractEventDispatcher* self, QObject* watched, QEvent* event ```
bool q_abstracteventdispatcher_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAbstractEventDispatcher* self ```
const char* q_abstracteventdispatcher_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAbstractEventDispatcher* self, const char* name ```
void q_abstracteventdispatcher_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAbstractEventDispatcher* self ```
bool q_abstracteventdispatcher_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAbstractEventDispatcher* self ```
bool q_abstracteventdispatcher_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAbstractEventDispatcher* self ```
bool q_abstracteventdispatcher_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAbstractEventDispatcher* self ```
bool q_abstracteventdispatcher_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAbstractEventDispatcher* self, bool b ```
bool q_abstracteventdispatcher_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAbstractEventDispatcher* self ```
QThread* q_abstracteventdispatcher_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAbstractEventDispatcher* self, QThread* thread ```
void q_abstracteventdispatcher_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAbstractEventDispatcher* self, int interval ```
int32_t q_abstracteventdispatcher_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAbstractEventDispatcher* self, int id ```
void q_abstracteventdispatcher_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAbstractEventDispatcher* self ```
libqt_list /* of QObject* */ q_abstracteventdispatcher_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QAbstractEventDispatcher* self, QObject* parent ```
void q_abstracteventdispatcher_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAbstractEventDispatcher* self, QObject* filterObj ```
void q_abstracteventdispatcher_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAbstractEventDispatcher* self, QObject* obj ```
void q_abstracteventdispatcher_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_abstracteventdispatcher_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAbstractEventDispatcher* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_abstracteventdispatcher_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_abstracteventdispatcher_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_abstracteventdispatcher_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAbstractEventDispatcher* self ```
void q_abstracteventdispatcher_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAbstractEventDispatcher* self ```
void q_abstracteventdispatcher_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAbstractEventDispatcher* self, const char* name, QVariant* value ```
bool q_abstracteventdispatcher_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAbstractEventDispatcher* self, const char* name ```
QVariant* q_abstracteventdispatcher_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAbstractEventDispatcher* self ```
const char** q_abstracteventdispatcher_dynamic_property_names(void* self) {
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
/// ``` QAbstractEventDispatcher* self ```
QBindingStorage* q_abstracteventdispatcher_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAbstractEventDispatcher* self ```
QBindingStorage* q_abstracteventdispatcher_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractEventDispatcher* self ```
void q_abstracteventdispatcher_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QAbstractEventDispatcher* self, void (*slot)(QObject*) ```
void q_abstracteventdispatcher_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QAbstractEventDispatcher* self ```
QObject* q_abstracteventdispatcher_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAbstractEventDispatcher* self, const char* classname ```
bool q_abstracteventdispatcher_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAbstractEventDispatcher* self ```
void q_abstracteventdispatcher_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAbstractEventDispatcher* self, int interval, enum Qt__TimerType timerType ```
int32_t q_abstracteventdispatcher_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_abstracteventdispatcher_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAbstractEventDispatcher* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_abstracteventdispatcher_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractEventDispatcher* self, QObject* param1 ```
void q_abstracteventdispatcher_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QAbstractEventDispatcher* self, void (*slot)(QObject*, QObject*) ```
void q_abstracteventdispatcher_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QAbstractEventDispatcher* self ```
void q_abstracteventdispatcher_delete(void* self) {
    QAbstractEventDispatcher_Delete((QAbstractEventDispatcher*)(self));
}

/// https://doc.qt.io/qt-6/qabstracteventdispatcher-timerinfo.html

/// q_abstracteventdispatcher__timerinfo_new constructs a new QAbstractEventDispatcher::TimerInfo object.
///
/// ``` QAbstractEventDispatcher__TimerInfo* other ```
QAbstractEventDispatcher__TimerInfo* q_abstracteventdispatcher__timerinfo_new(void* other) {
    return QAbstractEventDispatcher__TimerInfo_new((QAbstractEventDispatcher__TimerInfo*)other);
}

/// q_abstracteventdispatcher__timerinfo_new2 constructs a new QAbstractEventDispatcher::TimerInfo object and invalidates the source QAbstractEventDispatcher::TimerInfo object.
///
/// ``` QAbstractEventDispatcher__TimerInfo* other ```
QAbstractEventDispatcher__TimerInfo* q_abstracteventdispatcher__timerinfo_new2(void* other) {
    return QAbstractEventDispatcher__TimerInfo_new2((QAbstractEventDispatcher__TimerInfo*)other);
}

/// q_abstracteventdispatcher__timerinfo_new3 constructs a new QAbstractEventDispatcher::TimerInfo object.
///
/// ``` int id, int i, enum Qt__TimerType t ```
QAbstractEventDispatcher__TimerInfo* q_abstracteventdispatcher__timerinfo_new3(int id, int i, int64_t t) {
    return QAbstractEventDispatcher__TimerInfo_new3(id, i, t);
}

/// q_abstracteventdispatcher__timerinfo_copy_assign shallow copies `other` into `self`.
///
/// ``` QAbstractEventDispatcher__TimerInfo* self, QAbstractEventDispatcher__TimerInfo* other ```
void q_abstracteventdispatcher__timerinfo_copy_assign(void* self, void* other) {
    QAbstractEventDispatcher__TimerInfo_CopyAssign((QAbstractEventDispatcher__TimerInfo*)self, (QAbstractEventDispatcher__TimerInfo*)other);
}

/// q_abstracteventdispatcher__timerinfo_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QAbstractEventDispatcher__TimerInfo* self, QAbstractEventDispatcher__TimerInfo* other ```
void q_abstracteventdispatcher__timerinfo_move_assign(void* self, void* other) {
    QAbstractEventDispatcher__TimerInfo_MoveAssign((QAbstractEventDispatcher__TimerInfo*)self, (QAbstractEventDispatcher__TimerInfo*)other);
}

/// Delete this object from C++ memory.
///
/// ``` QAbstractEventDispatcher__TimerInfo* self ```
void q_abstracteventdispatcher__timerinfo_delete(void* self) {
    QAbstractEventDispatcher__TimerInfo_Delete((QAbstractEventDispatcher__TimerInfo*)(self));
}