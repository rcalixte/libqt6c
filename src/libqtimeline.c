#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqeasingcurve.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqtimeline.hpp"
#include "libqtimeline.h"

/// https://doc.qt.io/qt-6/qtimeline.html

/// q_timeline_new constructs a new QTimeLine object.
///
///
QTimeLine* q_timeline_new() {
    return QTimeLine_new();
}

/// q_timeline_new2 constructs a new QTimeLine object.
///
/// ``` int duration ```
QTimeLine* q_timeline_new2(int duration) {
    return QTimeLine_new2(duration);
}

/// q_timeline_new3 constructs a new QTimeLine object.
///
/// ``` int duration, QObject* parent ```
QTimeLine* q_timeline_new3(int duration, void* parent) {
    return QTimeLine_new3(duration, (QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QTimeLine* self ```
QMetaObject* q_timeline_meta_object(void* self) {
    return QTimeLine_MetaObject((QTimeLine*)self);
}

/// ``` QTimeLine* self, const char* param1 ```
void* q_timeline_metacast(void* self, const char* param1) {
    return QTimeLine_Metacast((QTimeLine*)self, param1);
}

/// ``` QTimeLine* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_timeline_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTimeLine_Metacall((QTimeLine*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QTimeLine* self, int32_t (*slot)(QTimeLine*, enum QMetaObject__Call, int, void*) ```
void q_timeline_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QTimeLine_OnMetacall((QTimeLine*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTimeLine* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_timeline_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTimeLine_QBaseMetacall((QTimeLine*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_timeline_tr(const char* s) {
    libqt_string _str = QTimeLine_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#state)
///
/// ``` QTimeLine* self ```
int64_t q_timeline_state(void* self) {
    return QTimeLine_State((QTimeLine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#loopCount)
///
/// ``` QTimeLine* self ```
int32_t q_timeline_loop_count(void* self) {
    return QTimeLine_LoopCount((QTimeLine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#setLoopCount)
///
/// ``` QTimeLine* self, int count ```
void q_timeline_set_loop_count(void* self, int count) {
    QTimeLine_SetLoopCount((QTimeLine*)self, count);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#direction)
///
/// ``` QTimeLine* self ```
int64_t q_timeline_direction(void* self) {
    return QTimeLine_Direction((QTimeLine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#setDirection)
///
/// ``` QTimeLine* self, enum QTimeLine__Direction direction ```
void q_timeline_set_direction(void* self, int64_t direction) {
    QTimeLine_SetDirection((QTimeLine*)self, direction);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#duration)
///
/// ``` QTimeLine* self ```
int32_t q_timeline_duration(void* self) {
    return QTimeLine_Duration((QTimeLine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#setDuration)
///
/// ``` QTimeLine* self, int duration ```
void q_timeline_set_duration(void* self, int duration) {
    QTimeLine_SetDuration((QTimeLine*)self, duration);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#startFrame)
///
/// ``` QTimeLine* self ```
int32_t q_timeline_start_frame(void* self) {
    return QTimeLine_StartFrame((QTimeLine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#setStartFrame)
///
/// ``` QTimeLine* self, int frame ```
void q_timeline_set_start_frame(void* self, int frame) {
    QTimeLine_SetStartFrame((QTimeLine*)self, frame);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#endFrame)
///
/// ``` QTimeLine* self ```
int32_t q_timeline_end_frame(void* self) {
    return QTimeLine_EndFrame((QTimeLine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#setEndFrame)
///
/// ``` QTimeLine* self, int frame ```
void q_timeline_set_end_frame(void* self, int frame) {
    QTimeLine_SetEndFrame((QTimeLine*)self, frame);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#setFrameRange)
///
/// ``` QTimeLine* self, int startFrame, int endFrame ```
void q_timeline_set_frame_range(void* self, int startFrame, int endFrame) {
    QTimeLine_SetFrameRange((QTimeLine*)self, startFrame, endFrame);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#updateInterval)
///
/// ``` QTimeLine* self ```
int32_t q_timeline_update_interval(void* self) {
    return QTimeLine_UpdateInterval((QTimeLine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#setUpdateInterval)
///
/// ``` QTimeLine* self, int interval ```
void q_timeline_set_update_interval(void* self, int interval) {
    QTimeLine_SetUpdateInterval((QTimeLine*)self, interval);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#easingCurve)
///
/// ``` QTimeLine* self ```
QEasingCurve* q_timeline_easing_curve(void* self) {
    return QTimeLine_EasingCurve((QTimeLine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#setEasingCurve)
///
/// ``` QTimeLine* self, QEasingCurve* curve ```
void q_timeline_set_easing_curve(void* self, void* curve) {
    QTimeLine_SetEasingCurve((QTimeLine*)self, (QEasingCurve*)curve);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#currentTime)
///
/// ``` QTimeLine* self ```
int32_t q_timeline_current_time(void* self) {
    return QTimeLine_CurrentTime((QTimeLine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#currentFrame)
///
/// ``` QTimeLine* self ```
int32_t q_timeline_current_frame(void* self) {
    return QTimeLine_CurrentFrame((QTimeLine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#currentValue)
///
/// ``` QTimeLine* self ```
double q_timeline_current_value(void* self) {
    return QTimeLine_CurrentValue((QTimeLine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#frameForTime)
///
/// ``` QTimeLine* self, int msec ```
int32_t q_timeline_frame_for_time(void* self, int msec) {
    return QTimeLine_FrameForTime((QTimeLine*)self, msec);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#valueForTime)
///
/// ``` QTimeLine* self, int msec ```
double q_timeline_value_for_time(void* self, int msec) {
    return QTimeLine_ValueForTime((QTimeLine*)self, msec);
}

/// Allows for overriding the related default method
///
/// ``` QTimeLine* self, double (*slot)(QTimeLine*, int) ```
void q_timeline_on_value_for_time(void* self, double (*slot)(void*, int)) {
    QTimeLine_OnValueForTime((QTimeLine*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTimeLine* self, int msec ```
double q_timeline_qbase_value_for_time(void* self, int msec) {
    return QTimeLine_QBaseValueForTime((QTimeLine*)self, msec);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#start)
///
/// ``` QTimeLine* self ```
void q_timeline_start(void* self) {
    QTimeLine_Start((QTimeLine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#resume)
///
/// ``` QTimeLine* self ```
void q_timeline_resume(void* self) {
    QTimeLine_Resume((QTimeLine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#stop)
///
/// ``` QTimeLine* self ```
void q_timeline_stop(void* self) {
    QTimeLine_Stop((QTimeLine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#setPaused)
///
/// ``` QTimeLine* self, bool paused ```
void q_timeline_set_paused(void* self, bool paused) {
    QTimeLine_SetPaused((QTimeLine*)self, paused);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#setCurrentTime)
///
/// ``` QTimeLine* self, int msec ```
void q_timeline_set_current_time(void* self, int msec) {
    QTimeLine_SetCurrentTime((QTimeLine*)self, msec);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#toggleDirection)
///
/// ``` QTimeLine* self ```
void q_timeline_toggle_direction(void* self) {
    QTimeLine_ToggleDirection((QTimeLine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtimeline.html#timerEvent)
///
/// ``` QTimeLine* self, QTimerEvent* event ```
void q_timeline_timer_event(void* self, void* event) {
    QTimeLine_TimerEvent((QTimeLine*)self, (QTimerEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QTimeLine* self, void (*slot)(QTimeLine*, QTimerEvent*) ```
void q_timeline_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QTimeLine_OnTimerEvent((QTimeLine*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTimeLine* self, QTimerEvent* event ```
void q_timeline_qbase_timer_event(void* self, void* event) {
    QTimeLine_QBaseTimerEvent((QTimeLine*)self, (QTimerEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_timeline_tr2(const char* s, const char* c) {
    libqt_string _str = QTimeLine_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_timeline_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QTimeLine_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QTimeLine* self ```
const char* q_timeline_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QTimeLine* self, const char* name ```
void q_timeline_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QTimeLine* self ```
bool q_timeline_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QTimeLine* self ```
bool q_timeline_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QTimeLine* self ```
bool q_timeline_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QTimeLine* self ```
bool q_timeline_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QTimeLine* self, bool b ```
bool q_timeline_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QTimeLine* self ```
QThread* q_timeline_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QTimeLine* self, QThread* thread ```
void q_timeline_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTimeLine* self, int interval ```
int32_t q_timeline_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QTimeLine* self, int id ```
void q_timeline_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QTimeLine* self ```
libqt_list /* of QObject* */ q_timeline_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QTimeLine* self, QObject* parent ```
void q_timeline_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QTimeLine* self, QObject* filterObj ```
void q_timeline_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QTimeLine* self, QObject* obj ```
void q_timeline_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_timeline_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTimeLine* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_timeline_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_timeline_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_timeline_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QTimeLine* self ```
void q_timeline_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QTimeLine* self ```
void q_timeline_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QTimeLine* self, const char* name, QVariant* value ```
bool q_timeline_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QTimeLine* self, const char* name ```
QVariant* q_timeline_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QTimeLine* self ```
const char** q_timeline_dynamic_property_names(void* self) {
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
/// ``` QTimeLine* self ```
QBindingStorage* q_timeline_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTimeLine* self ```
QBindingStorage* q_timeline_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTimeLine* self ```
void q_timeline_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QTimeLine* self, void (*slot)(QObject*) ```
void q_timeline_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QTimeLine* self ```
QObject* q_timeline_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QTimeLine* self, const char* classname ```
bool q_timeline_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QTimeLine* self ```
void q_timeline_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTimeLine* self, int interval, enum Qt__TimerType timerType ```
int32_t q_timeline_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_timeline_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTimeLine* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_timeline_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTimeLine* self, QObject* param1 ```
void q_timeline_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QTimeLine* self, void (*slot)(QObject*, QObject*) ```
void q_timeline_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeLine* self, QEvent* event ```
bool q_timeline_event(void* self, void* event) {
    return QTimeLine_Event((QTimeLine*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeLine* self, QEvent* event ```
bool q_timeline_qbase_event(void* self, void* event) {
    return QTimeLine_QBaseEvent((QTimeLine*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeLine* self, bool (*slot)(QTimeLine*, QEvent*) ```
void q_timeline_on_event(void* self, bool (*slot)(void*, void*)) {
    QTimeLine_OnEvent((QTimeLine*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeLine* self, QObject* watched, QEvent* event ```
bool q_timeline_event_filter(void* self, void* watched, void* event) {
    return QTimeLine_EventFilter((QTimeLine*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeLine* self, QObject* watched, QEvent* event ```
bool q_timeline_qbase_event_filter(void* self, void* watched, void* event) {
    return QTimeLine_QBaseEventFilter((QTimeLine*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeLine* self, bool (*slot)(QTimeLine*, QObject*, QEvent*) ```
void q_timeline_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QTimeLine_OnEventFilter((QTimeLine*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeLine* self, QChildEvent* event ```
void q_timeline_child_event(void* self, void* event) {
    QTimeLine_ChildEvent((QTimeLine*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeLine* self, QChildEvent* event ```
void q_timeline_qbase_child_event(void* self, void* event) {
    QTimeLine_QBaseChildEvent((QTimeLine*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeLine* self, void (*slot)(QTimeLine*, QChildEvent*) ```
void q_timeline_on_child_event(void* self, void (*slot)(void*, void*)) {
    QTimeLine_OnChildEvent((QTimeLine*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeLine* self, QEvent* event ```
void q_timeline_custom_event(void* self, void* event) {
    QTimeLine_CustomEvent((QTimeLine*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeLine* self, QEvent* event ```
void q_timeline_qbase_custom_event(void* self, void* event) {
    QTimeLine_QBaseCustomEvent((QTimeLine*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeLine* self, void (*slot)(QTimeLine*, QEvent*) ```
void q_timeline_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QTimeLine_OnCustomEvent((QTimeLine*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeLine* self, QMetaMethod* signal ```
void q_timeline_connect_notify(void* self, void* signal) {
    QTimeLine_ConnectNotify((QTimeLine*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeLine* self, QMetaMethod* signal ```
void q_timeline_qbase_connect_notify(void* self, void* signal) {
    QTimeLine_QBaseConnectNotify((QTimeLine*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeLine* self, void (*slot)(QTimeLine*, QMetaMethod*) ```
void q_timeline_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QTimeLine_OnConnectNotify((QTimeLine*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeLine* self, QMetaMethod* signal ```
void q_timeline_disconnect_notify(void* self, void* signal) {
    QTimeLine_DisconnectNotify((QTimeLine*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeLine* self, QMetaMethod* signal ```
void q_timeline_qbase_disconnect_notify(void* self, void* signal) {
    QTimeLine_QBaseDisconnectNotify((QTimeLine*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeLine* self, void (*slot)(QTimeLine*, QMetaMethod*) ```
void q_timeline_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QTimeLine_OnDisconnectNotify((QTimeLine*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeLine* self ```
QObject* q_timeline_sender(void* self) {
    return QTimeLine_Sender((QTimeLine*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeLine* self ```
QObject* q_timeline_qbase_sender(void* self) {
    return QTimeLine_QBaseSender((QTimeLine*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeLine* self, QObject* (*slot)() ```
void q_timeline_on_sender(void* self, QObject* (*slot)()) {
    QTimeLine_OnSender((QTimeLine*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeLine* self ```
int32_t q_timeline_sender_signal_index(void* self) {
    return QTimeLine_SenderSignalIndex((QTimeLine*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeLine* self ```
int32_t q_timeline_qbase_sender_signal_index(void* self) {
    return QTimeLine_QBaseSenderSignalIndex((QTimeLine*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeLine* self, int32_t (*slot)() ```
void q_timeline_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QTimeLine_OnSenderSignalIndex((QTimeLine*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeLine* self, const char* signal ```
int32_t q_timeline_receivers(void* self, const char* signal) {
    return QTimeLine_Receivers((QTimeLine*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeLine* self, const char* signal ```
int32_t q_timeline_qbase_receivers(void* self, const char* signal) {
    return QTimeLine_QBaseReceivers((QTimeLine*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeLine* self, int32_t (*slot)(QTimeLine*, const char*) ```
void q_timeline_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QTimeLine_OnReceivers((QTimeLine*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimeLine* self, QMetaMethod* signal ```
bool q_timeline_is_signal_connected(void* self, void* signal) {
    return QTimeLine_IsSignalConnected((QTimeLine*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimeLine* self, QMetaMethod* signal ```
bool q_timeline_qbase_is_signal_connected(void* self, void* signal) {
    return QTimeLine_QBaseIsSignalConnected((QTimeLine*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimeLine* self, bool (*slot)(QTimeLine*, QMetaMethod*) ```
void q_timeline_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QTimeLine_OnIsSignalConnected((QTimeLine*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QTimeLine* self ```
void q_timeline_delete(void* self) {
    QTimeLine_Delete((QTimeLine*)(self));
}