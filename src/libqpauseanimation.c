#include "libqabstractanimation.hpp"
#include "libqanimationgroup.hpp"
#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqpauseanimation.hpp"
#include "libqpauseanimation.h"

/// https://doc.qt.io/qt-6/qpauseanimation.html

/// q_pauseanimation_new constructs a new QPauseAnimation object.
///
///
QPauseAnimation* q_pauseanimation_new() {
    return QPauseAnimation_new();
}

/// q_pauseanimation_new2 constructs a new QPauseAnimation object.
///
/// ``` int msecs ```
QPauseAnimation* q_pauseanimation_new2(int msecs) {
    return QPauseAnimation_new2(msecs);
}

/// q_pauseanimation_new3 constructs a new QPauseAnimation object.
///
/// ``` QObject* parent ```
QPauseAnimation* q_pauseanimation_new3(void* parent) {
    return QPauseAnimation_new3((QObject*)parent);
}

/// q_pauseanimation_new4 constructs a new QPauseAnimation object.
///
/// ``` int msecs, QObject* parent ```
QPauseAnimation* q_pauseanimation_new4(int msecs, void* parent) {
    return QPauseAnimation_new4(msecs, (QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QPauseAnimation* self ```
QMetaObject* q_pauseanimation_meta_object(void* self) {
    return QPauseAnimation_MetaObject((QPauseAnimation*)self);
}

/// ``` QPauseAnimation* self, const char* param1 ```
void* q_pauseanimation_metacast(void* self, const char* param1) {
    return QPauseAnimation_Metacast((QPauseAnimation*)self, param1);
}

/// ``` QPauseAnimation* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_pauseanimation_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QPauseAnimation_Metacall((QPauseAnimation*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QPauseAnimation* self, int32_t (*slot)(QPauseAnimation*, enum QMetaObject__Call, int, void*) ```
void q_pauseanimation_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QPauseAnimation_OnMetacall((QPauseAnimation*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPauseAnimation* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_pauseanimation_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QPauseAnimation_QBaseMetacall((QPauseAnimation*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_pauseanimation_tr(const char* s) {
    libqt_string _str = QPauseAnimation_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpauseanimation.html#duration)
///
/// ``` QPauseAnimation* self ```
int32_t q_pauseanimation_duration(void* self) {
    return QPauseAnimation_Duration((QPauseAnimation*)self);
}

/// Allows for overriding the related default method
///
/// ``` QPauseAnimation* self, int32_t (*slot)() ```
void q_pauseanimation_on_duration(void* self, int32_t (*slot)()) {
    QPauseAnimation_OnDuration((QPauseAnimation*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPauseAnimation* self ```
int32_t q_pauseanimation_qbase_duration(void* self) {
    return QPauseAnimation_QBaseDuration((QPauseAnimation*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpauseanimation.html#setDuration)
///
/// ``` QPauseAnimation* self, int msecs ```
void q_pauseanimation_set_duration(void* self, int msecs) {
    QPauseAnimation_SetDuration((QPauseAnimation*)self, msecs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpauseanimation.html#event)
///
/// ``` QPauseAnimation* self, QEvent* e ```
bool q_pauseanimation_event(void* self, void* e) {
    return QPauseAnimation_Event((QPauseAnimation*)self, (QEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QPauseAnimation* self, bool (*slot)(QPauseAnimation*, QEvent*) ```
void q_pauseanimation_on_event(void* self, bool (*slot)(void*, void*)) {
    QPauseAnimation_OnEvent((QPauseAnimation*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPauseAnimation* self, QEvent* e ```
bool q_pauseanimation_qbase_event(void* self, void* e) {
    return QPauseAnimation_QBaseEvent((QPauseAnimation*)self, (QEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpauseanimation.html#updateCurrentTime)
///
/// ``` QPauseAnimation* self, int param1 ```
void q_pauseanimation_update_current_time(void* self, int param1) {
    QPauseAnimation_UpdateCurrentTime((QPauseAnimation*)self, param1);
}

/// Allows for overriding the related default method
///
/// ``` QPauseAnimation* self, void (*slot)(QPauseAnimation*, int) ```
void q_pauseanimation_on_update_current_time(void* self, void (*slot)(void*, int)) {
    QPauseAnimation_OnUpdateCurrentTime((QPauseAnimation*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPauseAnimation* self, int param1 ```
void q_pauseanimation_qbase_update_current_time(void* self, int param1) {
    QPauseAnimation_QBaseUpdateCurrentTime((QPauseAnimation*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_pauseanimation_tr2(const char* s, const char* c) {
    libqt_string _str = QPauseAnimation_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_pauseanimation_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QPauseAnimation_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#state)
///
/// ``` QPauseAnimation* self ```
int64_t q_pauseanimation_state(void* self) {
    return QAbstractAnimation_State((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#group)
///
/// ``` QPauseAnimation* self ```
QAnimationGroup* q_pauseanimation_group(void* self) {
    return QAbstractAnimation_Group((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#direction)
///
/// ``` QPauseAnimation* self ```
int64_t q_pauseanimation_direction(void* self) {
    return QAbstractAnimation_Direction((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setDirection)
///
/// ``` QPauseAnimation* self, enum QAbstractAnimation__Direction direction ```
void q_pauseanimation_set_direction(void* self, int64_t direction) {
    QAbstractAnimation_SetDirection((QAbstractAnimation*)self, direction);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentTime)
///
/// ``` QPauseAnimation* self ```
int32_t q_pauseanimation_current_time(void* self) {
    return QAbstractAnimation_CurrentTime((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopTime)
///
/// ``` QPauseAnimation* self ```
int32_t q_pauseanimation_current_loop_time(void* self) {
    return QAbstractAnimation_CurrentLoopTime((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#loopCount)
///
/// ``` QPauseAnimation* self ```
int32_t q_pauseanimation_loop_count(void* self) {
    return QAbstractAnimation_LoopCount((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setLoopCount)
///
/// ``` QPauseAnimation* self, int loopCount ```
void q_pauseanimation_set_loop_count(void* self, int loopCount) {
    QAbstractAnimation_SetLoopCount((QAbstractAnimation*)self, loopCount);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoop)
///
/// ``` QPauseAnimation* self ```
int32_t q_pauseanimation_current_loop(void* self) {
    return QAbstractAnimation_CurrentLoop((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#totalDuration)
///
/// ``` QPauseAnimation* self ```
int32_t q_pauseanimation_total_duration(void* self) {
    return QAbstractAnimation_TotalDuration((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#finished)
///
/// ``` QPauseAnimation* self ```
void q_pauseanimation_finished(void* self) {
    QAbstractAnimation_Finished((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// ``` QPauseAnimation* self, void (*slot)(QAbstractAnimation*) ```
void q_pauseanimation_on_finished(void* self, void (*slot)(void*)) {
    QAbstractAnimation_Connect_Finished((QAbstractAnimation*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#stateChanged)
///
/// ``` QPauseAnimation* self, enum QAbstractAnimation__State newState, enum QAbstractAnimation__State oldState ```
void q_pauseanimation_state_changed(void* self, int64_t newState, int64_t oldState) {
    QAbstractAnimation_StateChanged((QAbstractAnimation*)self, newState, oldState);
}

/// Inherited from QAbstractAnimation
///
/// ``` QPauseAnimation* self, void (*slot)(QAbstractAnimation*, enum QAbstractAnimation__State, enum QAbstractAnimation__State) ```
void q_pauseanimation_on_state_changed(void* self, void (*slot)(void*, int64_t, int64_t)) {
    QAbstractAnimation_Connect_StateChanged((QAbstractAnimation*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopChanged)
///
/// ``` QPauseAnimation* self, int currentLoop ```
void q_pauseanimation_current_loop_changed(void* self, int currentLoop) {
    QAbstractAnimation_CurrentLoopChanged((QAbstractAnimation*)self, currentLoop);
}

/// Inherited from QAbstractAnimation
///
/// ``` QPauseAnimation* self, void (*slot)(QAbstractAnimation*, int) ```
void q_pauseanimation_on_current_loop_changed(void* self, void (*slot)(void*, int)) {
    QAbstractAnimation_Connect_CurrentLoopChanged((QAbstractAnimation*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#directionChanged)
///
/// ``` QPauseAnimation* self, enum QAbstractAnimation__Direction param1 ```
void q_pauseanimation_direction_changed(void* self, int64_t param1) {
    QAbstractAnimation_DirectionChanged((QAbstractAnimation*)self, param1);
}

/// Inherited from QAbstractAnimation
///
/// ``` QPauseAnimation* self, void (*slot)(QAbstractAnimation*, enum QAbstractAnimation__Direction) ```
void q_pauseanimation_on_direction_changed(void* self, void (*slot)(void*, int64_t)) {
    QAbstractAnimation_Connect_DirectionChanged((QAbstractAnimation*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#start)
///
/// ``` QPauseAnimation* self ```
void q_pauseanimation_start(void* self) {
    QAbstractAnimation_Start((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#pause)
///
/// ``` QPauseAnimation* self ```
void q_pauseanimation_pause(void* self) {
    QAbstractAnimation_Pause((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#resume)
///
/// ``` QPauseAnimation* self ```
void q_pauseanimation_resume(void* self) {
    QAbstractAnimation_Resume((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setPaused)
///
/// ``` QPauseAnimation* self, bool paused ```
void q_pauseanimation_set_paused(void* self, bool paused) {
    QAbstractAnimation_SetPaused((QAbstractAnimation*)self, paused);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#stop)
///
/// ``` QPauseAnimation* self ```
void q_pauseanimation_stop(void* self) {
    QAbstractAnimation_Stop((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setCurrentTime)
///
/// ``` QPauseAnimation* self, int msecs ```
void q_pauseanimation_set_current_time(void* self, int msecs) {
    QAbstractAnimation_SetCurrentTime((QAbstractAnimation*)self, msecs);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#start)
///
/// ``` QPauseAnimation* self, enum QAbstractAnimation__DeletionPolicy policy ```
void q_pauseanimation_start1(void* self, int64_t policy) {
    QAbstractAnimation_Start1((QAbstractAnimation*)self, policy);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QPauseAnimation* self ```
const char* q_pauseanimation_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QPauseAnimation* self, const char* name ```
void q_pauseanimation_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QPauseAnimation* self ```
bool q_pauseanimation_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QPauseAnimation* self ```
bool q_pauseanimation_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QPauseAnimation* self ```
bool q_pauseanimation_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QPauseAnimation* self ```
bool q_pauseanimation_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QPauseAnimation* self, bool b ```
bool q_pauseanimation_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QPauseAnimation* self ```
QThread* q_pauseanimation_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QPauseAnimation* self, QThread* thread ```
void q_pauseanimation_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPauseAnimation* self, int interval ```
int32_t q_pauseanimation_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QPauseAnimation* self, int id ```
void q_pauseanimation_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QPauseAnimation* self ```
libqt_list /* of QObject* */ q_pauseanimation_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QPauseAnimation* self, QObject* parent ```
void q_pauseanimation_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QPauseAnimation* self, QObject* filterObj ```
void q_pauseanimation_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QPauseAnimation* self, QObject* obj ```
void q_pauseanimation_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_pauseanimation_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPauseAnimation* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_pauseanimation_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_pauseanimation_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_pauseanimation_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QPauseAnimation* self ```
void q_pauseanimation_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QPauseAnimation* self ```
void q_pauseanimation_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QPauseAnimation* self, const char* name, QVariant* value ```
bool q_pauseanimation_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QPauseAnimation* self, const char* name ```
QVariant* q_pauseanimation_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QPauseAnimation* self ```
const char** q_pauseanimation_dynamic_property_names(void* self) {
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
/// ``` QPauseAnimation* self ```
QBindingStorage* q_pauseanimation_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPauseAnimation* self ```
QBindingStorage* q_pauseanimation_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPauseAnimation* self ```
void q_pauseanimation_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QPauseAnimation* self, void (*slot)(QObject*) ```
void q_pauseanimation_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QPauseAnimation* self ```
QObject* q_pauseanimation_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QPauseAnimation* self, const char* classname ```
bool q_pauseanimation_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QPauseAnimation* self ```
void q_pauseanimation_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPauseAnimation* self, int interval, enum Qt__TimerType timerType ```
int32_t q_pauseanimation_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_pauseanimation_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPauseAnimation* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_pauseanimation_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPauseAnimation* self, QObject* param1 ```
void q_pauseanimation_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QPauseAnimation* self, void (*slot)(QObject*, QObject*) ```
void q_pauseanimation_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#updateState)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPauseAnimation* self, enum QAbstractAnimation__State newState, enum QAbstractAnimation__State oldState ```
void q_pauseanimation_update_state(void* self, int64_t newState, int64_t oldState) {
    QPauseAnimation_UpdateState((QPauseAnimation*)self, newState, oldState);
}

/// Inherited from QAbstractAnimation
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPauseAnimation* self, enum QAbstractAnimation__State newState, enum QAbstractAnimation__State oldState ```
void q_pauseanimation_qbase_update_state(void* self, int64_t newState, int64_t oldState) {
    QPauseAnimation_QBaseUpdateState((QPauseAnimation*)self, newState, oldState);
}

/// Inherited from QAbstractAnimation
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPauseAnimation* self, void (*slot)(QPauseAnimation*, enum QAbstractAnimation__State, enum QAbstractAnimation__State) ```
void q_pauseanimation_on_update_state(void* self, void (*slot)(void*, int64_t, int64_t)) {
    QPauseAnimation_OnUpdateState((QPauseAnimation*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#updateDirection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPauseAnimation* self, enum QAbstractAnimation__Direction direction ```
void q_pauseanimation_update_direction(void* self, int64_t direction) {
    QPauseAnimation_UpdateDirection((QPauseAnimation*)self, direction);
}

/// Inherited from QAbstractAnimation
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPauseAnimation* self, enum QAbstractAnimation__Direction direction ```
void q_pauseanimation_qbase_update_direction(void* self, int64_t direction) {
    QPauseAnimation_QBaseUpdateDirection((QPauseAnimation*)self, direction);
}

/// Inherited from QAbstractAnimation
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPauseAnimation* self, void (*slot)(QPauseAnimation*, enum QAbstractAnimation__Direction) ```
void q_pauseanimation_on_update_direction(void* self, void (*slot)(void*, int64_t)) {
    QPauseAnimation_OnUpdateDirection((QPauseAnimation*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPauseAnimation* self, QObject* watched, QEvent* event ```
bool q_pauseanimation_event_filter(void* self, void* watched, void* event) {
    return QPauseAnimation_EventFilter((QPauseAnimation*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPauseAnimation* self, QObject* watched, QEvent* event ```
bool q_pauseanimation_qbase_event_filter(void* self, void* watched, void* event) {
    return QPauseAnimation_QBaseEventFilter((QPauseAnimation*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPauseAnimation* self, bool (*slot)(QPauseAnimation*, QObject*, QEvent*) ```
void q_pauseanimation_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QPauseAnimation_OnEventFilter((QPauseAnimation*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPauseAnimation* self, QTimerEvent* event ```
void q_pauseanimation_timer_event(void* self, void* event) {
    QPauseAnimation_TimerEvent((QPauseAnimation*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPauseAnimation* self, QTimerEvent* event ```
void q_pauseanimation_qbase_timer_event(void* self, void* event) {
    QPauseAnimation_QBaseTimerEvent((QPauseAnimation*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPauseAnimation* self, void (*slot)(QPauseAnimation*, QTimerEvent*) ```
void q_pauseanimation_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QPauseAnimation_OnTimerEvent((QPauseAnimation*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPauseAnimation* self, QChildEvent* event ```
void q_pauseanimation_child_event(void* self, void* event) {
    QPauseAnimation_ChildEvent((QPauseAnimation*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPauseAnimation* self, QChildEvent* event ```
void q_pauseanimation_qbase_child_event(void* self, void* event) {
    QPauseAnimation_QBaseChildEvent((QPauseAnimation*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPauseAnimation* self, void (*slot)(QPauseAnimation*, QChildEvent*) ```
void q_pauseanimation_on_child_event(void* self, void (*slot)(void*, void*)) {
    QPauseAnimation_OnChildEvent((QPauseAnimation*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPauseAnimation* self, QEvent* event ```
void q_pauseanimation_custom_event(void* self, void* event) {
    QPauseAnimation_CustomEvent((QPauseAnimation*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPauseAnimation* self, QEvent* event ```
void q_pauseanimation_qbase_custom_event(void* self, void* event) {
    QPauseAnimation_QBaseCustomEvent((QPauseAnimation*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPauseAnimation* self, void (*slot)(QPauseAnimation*, QEvent*) ```
void q_pauseanimation_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QPauseAnimation_OnCustomEvent((QPauseAnimation*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPauseAnimation* self, QMetaMethod* signal ```
void q_pauseanimation_connect_notify(void* self, void* signal) {
    QPauseAnimation_ConnectNotify((QPauseAnimation*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPauseAnimation* self, QMetaMethod* signal ```
void q_pauseanimation_qbase_connect_notify(void* self, void* signal) {
    QPauseAnimation_QBaseConnectNotify((QPauseAnimation*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPauseAnimation* self, void (*slot)(QPauseAnimation*, QMetaMethod*) ```
void q_pauseanimation_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QPauseAnimation_OnConnectNotify((QPauseAnimation*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPauseAnimation* self, QMetaMethod* signal ```
void q_pauseanimation_disconnect_notify(void* self, void* signal) {
    QPauseAnimation_DisconnectNotify((QPauseAnimation*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPauseAnimation* self, QMetaMethod* signal ```
void q_pauseanimation_qbase_disconnect_notify(void* self, void* signal) {
    QPauseAnimation_QBaseDisconnectNotify((QPauseAnimation*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPauseAnimation* self, void (*slot)(QPauseAnimation*, QMetaMethod*) ```
void q_pauseanimation_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QPauseAnimation_OnDisconnectNotify((QPauseAnimation*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPauseAnimation* self ```
QObject* q_pauseanimation_sender(void* self) {
    return QPauseAnimation_Sender((QPauseAnimation*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPauseAnimation* self ```
QObject* q_pauseanimation_qbase_sender(void* self) {
    return QPauseAnimation_QBaseSender((QPauseAnimation*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPauseAnimation* self, QObject* (*slot)() ```
void q_pauseanimation_on_sender(void* self, QObject* (*slot)()) {
    QPauseAnimation_OnSender((QPauseAnimation*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPauseAnimation* self ```
int32_t q_pauseanimation_sender_signal_index(void* self) {
    return QPauseAnimation_SenderSignalIndex((QPauseAnimation*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPauseAnimation* self ```
int32_t q_pauseanimation_qbase_sender_signal_index(void* self) {
    return QPauseAnimation_QBaseSenderSignalIndex((QPauseAnimation*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPauseAnimation* self, int32_t (*slot)() ```
void q_pauseanimation_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QPauseAnimation_OnSenderSignalIndex((QPauseAnimation*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPauseAnimation* self, const char* signal ```
int32_t q_pauseanimation_receivers(void* self, const char* signal) {
    return QPauseAnimation_Receivers((QPauseAnimation*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPauseAnimation* self, const char* signal ```
int32_t q_pauseanimation_qbase_receivers(void* self, const char* signal) {
    return QPauseAnimation_QBaseReceivers((QPauseAnimation*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPauseAnimation* self, int32_t (*slot)(QPauseAnimation*, const char*) ```
void q_pauseanimation_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QPauseAnimation_OnReceivers((QPauseAnimation*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPauseAnimation* self, QMetaMethod* signal ```
bool q_pauseanimation_is_signal_connected(void* self, void* signal) {
    return QPauseAnimation_IsSignalConnected((QPauseAnimation*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPauseAnimation* self, QMetaMethod* signal ```
bool q_pauseanimation_qbase_is_signal_connected(void* self, void* signal) {
    return QPauseAnimation_QBaseIsSignalConnected((QPauseAnimation*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPauseAnimation* self, bool (*slot)(QPauseAnimation*, QMetaMethod*) ```
void q_pauseanimation_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QPauseAnimation_OnIsSignalConnected((QPauseAnimation*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QPauseAnimation* self ```
void q_pauseanimation_delete(void* self) {
    QPauseAnimation_Delete((QPauseAnimation*)(self));
}