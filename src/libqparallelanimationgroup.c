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
#include "libqparallelanimationgroup.hpp"
#include "libqparallelanimationgroup.h"

/// https://doc.qt.io/qt-6/qparallelanimationgroup.html

/// q_parallelanimationgroup_new constructs a new QParallelAnimationGroup object.
///
///
QParallelAnimationGroup* q_parallelanimationgroup_new() {
    return QParallelAnimationGroup_new();
}

/// q_parallelanimationgroup_new2 constructs a new QParallelAnimationGroup object.
///
/// ``` QObject* parent ```
QParallelAnimationGroup* q_parallelanimationgroup_new2(void* parent) {
    return QParallelAnimationGroup_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QParallelAnimationGroup* self ```
QMetaObject* q_parallelanimationgroup_meta_object(void* self) {
    return QParallelAnimationGroup_MetaObject((QParallelAnimationGroup*)self);
}

/// ``` QParallelAnimationGroup* self, const char* param1 ```
void* q_parallelanimationgroup_metacast(void* self, const char* param1) {
    return QParallelAnimationGroup_Metacast((QParallelAnimationGroup*)self, param1);
}

/// ``` QParallelAnimationGroup* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_parallelanimationgroup_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QParallelAnimationGroup_Metacall((QParallelAnimationGroup*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QParallelAnimationGroup* self, int32_t (*slot)(QParallelAnimationGroup*, enum QMetaObject__Call, int, void*) ```
void q_parallelanimationgroup_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QParallelAnimationGroup_OnMetacall((QParallelAnimationGroup*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QParallelAnimationGroup* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_parallelanimationgroup_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QParallelAnimationGroup_QBaseMetacall((QParallelAnimationGroup*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_parallelanimationgroup_tr(const char* s) {
    libqt_string _str = QParallelAnimationGroup_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qparallelanimationgroup.html#duration)
///
/// ``` QParallelAnimationGroup* self ```
int32_t q_parallelanimationgroup_duration(void* self) {
    return QParallelAnimationGroup_Duration((QParallelAnimationGroup*)self);
}

/// Allows for overriding the related default method
///
/// ``` QParallelAnimationGroup* self, int32_t (*slot)() ```
void q_parallelanimationgroup_on_duration(void* self, int32_t (*slot)()) {
    QParallelAnimationGroup_OnDuration((QParallelAnimationGroup*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QParallelAnimationGroup* self ```
int32_t q_parallelanimationgroup_qbase_duration(void* self) {
    return QParallelAnimationGroup_QBaseDuration((QParallelAnimationGroup*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qparallelanimationgroup.html#event)
///
/// ``` QParallelAnimationGroup* self, QEvent* event ```
bool q_parallelanimationgroup_event(void* self, void* event) {
    return QParallelAnimationGroup_Event((QParallelAnimationGroup*)self, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QParallelAnimationGroup* self, bool (*slot)(QParallelAnimationGroup*, QEvent*) ```
void q_parallelanimationgroup_on_event(void* self, bool (*slot)(void*, void*)) {
    QParallelAnimationGroup_OnEvent((QParallelAnimationGroup*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QParallelAnimationGroup* self, QEvent* event ```
bool q_parallelanimationgroup_qbase_event(void* self, void* event) {
    return QParallelAnimationGroup_QBaseEvent((QParallelAnimationGroup*)self, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qparallelanimationgroup.html#updateCurrentTime)
///
/// ``` QParallelAnimationGroup* self, int currentTime ```
void q_parallelanimationgroup_update_current_time(void* self, int currentTime) {
    QParallelAnimationGroup_UpdateCurrentTime((QParallelAnimationGroup*)self, currentTime);
}

/// Allows for overriding the related default method
///
/// ``` QParallelAnimationGroup* self, void (*slot)(QParallelAnimationGroup*, int) ```
void q_parallelanimationgroup_on_update_current_time(void* self, void (*slot)(void*, int)) {
    QParallelAnimationGroup_OnUpdateCurrentTime((QParallelAnimationGroup*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QParallelAnimationGroup* self, int currentTime ```
void q_parallelanimationgroup_qbase_update_current_time(void* self, int currentTime) {
    QParallelAnimationGroup_QBaseUpdateCurrentTime((QParallelAnimationGroup*)self, currentTime);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qparallelanimationgroup.html#updateState)
///
/// ``` QParallelAnimationGroup* self, enum QAbstractAnimation__State newState, enum QAbstractAnimation__State oldState ```
void q_parallelanimationgroup_update_state(void* self, int64_t newState, int64_t oldState) {
    QParallelAnimationGroup_UpdateState((QParallelAnimationGroup*)self, newState, oldState);
}

/// Allows for overriding the related default method
///
/// ``` QParallelAnimationGroup* self, void (*slot)(QParallelAnimationGroup*, enum QAbstractAnimation__State, enum QAbstractAnimation__State) ```
void q_parallelanimationgroup_on_update_state(void* self, void (*slot)(void*, int64_t, int64_t)) {
    QParallelAnimationGroup_OnUpdateState((QParallelAnimationGroup*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QParallelAnimationGroup* self, enum QAbstractAnimation__State newState, enum QAbstractAnimation__State oldState ```
void q_parallelanimationgroup_qbase_update_state(void* self, int64_t newState, int64_t oldState) {
    QParallelAnimationGroup_QBaseUpdateState((QParallelAnimationGroup*)self, newState, oldState);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qparallelanimationgroup.html#updateDirection)
///
/// ``` QParallelAnimationGroup* self, enum QAbstractAnimation__Direction direction ```
void q_parallelanimationgroup_update_direction(void* self, int64_t direction) {
    QParallelAnimationGroup_UpdateDirection((QParallelAnimationGroup*)self, direction);
}

/// Allows for overriding the related default method
///
/// ``` QParallelAnimationGroup* self, void (*slot)(QParallelAnimationGroup*, enum QAbstractAnimation__Direction) ```
void q_parallelanimationgroup_on_update_direction(void* self, void (*slot)(void*, int64_t)) {
    QParallelAnimationGroup_OnUpdateDirection((QParallelAnimationGroup*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QParallelAnimationGroup* self, enum QAbstractAnimation__Direction direction ```
void q_parallelanimationgroup_qbase_update_direction(void* self, int64_t direction) {
    QParallelAnimationGroup_QBaseUpdateDirection((QParallelAnimationGroup*)self, direction);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_parallelanimationgroup_tr2(const char* s, const char* c) {
    libqt_string _str = QParallelAnimationGroup_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_parallelanimationgroup_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QParallelAnimationGroup_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAnimationGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#animationAt)
///
/// ``` QParallelAnimationGroup* self, int index ```
QAbstractAnimation* q_parallelanimationgroup_animation_at(void* self, int index) {
    return QAnimationGroup_AnimationAt((QAnimationGroup*)self, index);
}

/// Inherited from QAnimationGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#animationCount)
///
/// ``` QParallelAnimationGroup* self ```
int32_t q_parallelanimationgroup_animation_count(void* self) {
    return QAnimationGroup_AnimationCount((QAnimationGroup*)self);
}

/// Inherited from QAnimationGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#indexOfAnimation)
///
/// ``` QParallelAnimationGroup* self, QAbstractAnimation* animation ```
int32_t q_parallelanimationgroup_index_of_animation(void* self, void* animation) {
    return QAnimationGroup_IndexOfAnimation((QAnimationGroup*)self, (QAbstractAnimation*)animation);
}

/// Inherited from QAnimationGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#addAnimation)
///
/// ``` QParallelAnimationGroup* self, QAbstractAnimation* animation ```
void q_parallelanimationgroup_add_animation(void* self, void* animation) {
    QAnimationGroup_AddAnimation((QAnimationGroup*)self, (QAbstractAnimation*)animation);
}

/// Inherited from QAnimationGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#insertAnimation)
///
/// ``` QParallelAnimationGroup* self, int index, QAbstractAnimation* animation ```
void q_parallelanimationgroup_insert_animation(void* self, int index, void* animation) {
    QAnimationGroup_InsertAnimation((QAnimationGroup*)self, index, (QAbstractAnimation*)animation);
}

/// Inherited from QAnimationGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#removeAnimation)
///
/// ``` QParallelAnimationGroup* self, QAbstractAnimation* animation ```
void q_parallelanimationgroup_remove_animation(void* self, void* animation) {
    QAnimationGroup_RemoveAnimation((QAnimationGroup*)self, (QAbstractAnimation*)animation);
}

/// Inherited from QAnimationGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#takeAnimation)
///
/// ``` QParallelAnimationGroup* self, int index ```
QAbstractAnimation* q_parallelanimationgroup_take_animation(void* self, int index) {
    return QAnimationGroup_TakeAnimation((QAnimationGroup*)self, index);
}

/// Inherited from QAnimationGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#clear)
///
/// ``` QParallelAnimationGroup* self ```
void q_parallelanimationgroup_clear(void* self) {
    QAnimationGroup_Clear((QAnimationGroup*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#state)
///
/// ``` QParallelAnimationGroup* self ```
int64_t q_parallelanimationgroup_state(void* self) {
    return QAbstractAnimation_State((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#group)
///
/// ``` QParallelAnimationGroup* self ```
QAnimationGroup* q_parallelanimationgroup_group(void* self) {
    return QAbstractAnimation_Group((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#direction)
///
/// ``` QParallelAnimationGroup* self ```
int64_t q_parallelanimationgroup_direction(void* self) {
    return QAbstractAnimation_Direction((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setDirection)
///
/// ``` QParallelAnimationGroup* self, enum QAbstractAnimation__Direction direction ```
void q_parallelanimationgroup_set_direction(void* self, int64_t direction) {
    QAbstractAnimation_SetDirection((QAbstractAnimation*)self, direction);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentTime)
///
/// ``` QParallelAnimationGroup* self ```
int32_t q_parallelanimationgroup_current_time(void* self) {
    return QAbstractAnimation_CurrentTime((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopTime)
///
/// ``` QParallelAnimationGroup* self ```
int32_t q_parallelanimationgroup_current_loop_time(void* self) {
    return QAbstractAnimation_CurrentLoopTime((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#loopCount)
///
/// ``` QParallelAnimationGroup* self ```
int32_t q_parallelanimationgroup_loop_count(void* self) {
    return QAbstractAnimation_LoopCount((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setLoopCount)
///
/// ``` QParallelAnimationGroup* self, int loopCount ```
void q_parallelanimationgroup_set_loop_count(void* self, int loopCount) {
    QAbstractAnimation_SetLoopCount((QAbstractAnimation*)self, loopCount);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoop)
///
/// ``` QParallelAnimationGroup* self ```
int32_t q_parallelanimationgroup_current_loop(void* self) {
    return QAbstractAnimation_CurrentLoop((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#totalDuration)
///
/// ``` QParallelAnimationGroup* self ```
int32_t q_parallelanimationgroup_total_duration(void* self) {
    return QAbstractAnimation_TotalDuration((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#finished)
///
/// ``` QParallelAnimationGroup* self ```
void q_parallelanimationgroup_finished(void* self) {
    QAbstractAnimation_Finished((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// ``` QParallelAnimationGroup* self, void (*slot)(QAbstractAnimation*) ```
void q_parallelanimationgroup_on_finished(void* self, void (*slot)(void*)) {
    QAbstractAnimation_Connect_Finished((QAbstractAnimation*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#stateChanged)
///
/// ``` QParallelAnimationGroup* self, enum QAbstractAnimation__State newState, enum QAbstractAnimation__State oldState ```
void q_parallelanimationgroup_state_changed(void* self, int64_t newState, int64_t oldState) {
    QAbstractAnimation_StateChanged((QAbstractAnimation*)self, newState, oldState);
}

/// Inherited from QAbstractAnimation
///
/// ``` QParallelAnimationGroup* self, void (*slot)(QAbstractAnimation*, enum QAbstractAnimation__State, enum QAbstractAnimation__State) ```
void q_parallelanimationgroup_on_state_changed(void* self, void (*slot)(void*, int64_t, int64_t)) {
    QAbstractAnimation_Connect_StateChanged((QAbstractAnimation*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopChanged)
///
/// ``` QParallelAnimationGroup* self, int currentLoop ```
void q_parallelanimationgroup_current_loop_changed(void* self, int currentLoop) {
    QAbstractAnimation_CurrentLoopChanged((QAbstractAnimation*)self, currentLoop);
}

/// Inherited from QAbstractAnimation
///
/// ``` QParallelAnimationGroup* self, void (*slot)(QAbstractAnimation*, int) ```
void q_parallelanimationgroup_on_current_loop_changed(void* self, void (*slot)(void*, int)) {
    QAbstractAnimation_Connect_CurrentLoopChanged((QAbstractAnimation*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#directionChanged)
///
/// ``` QParallelAnimationGroup* self, enum QAbstractAnimation__Direction param1 ```
void q_parallelanimationgroup_direction_changed(void* self, int64_t param1) {
    QAbstractAnimation_DirectionChanged((QAbstractAnimation*)self, param1);
}

/// Inherited from QAbstractAnimation
///
/// ``` QParallelAnimationGroup* self, void (*slot)(QAbstractAnimation*, enum QAbstractAnimation__Direction) ```
void q_parallelanimationgroup_on_direction_changed(void* self, void (*slot)(void*, int64_t)) {
    QAbstractAnimation_Connect_DirectionChanged((QAbstractAnimation*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#start)
///
/// ``` QParallelAnimationGroup* self ```
void q_parallelanimationgroup_start(void* self) {
    QAbstractAnimation_Start((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#pause)
///
/// ``` QParallelAnimationGroup* self ```
void q_parallelanimationgroup_pause(void* self) {
    QAbstractAnimation_Pause((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#resume)
///
/// ``` QParallelAnimationGroup* self ```
void q_parallelanimationgroup_resume(void* self) {
    QAbstractAnimation_Resume((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setPaused)
///
/// ``` QParallelAnimationGroup* self, bool paused ```
void q_parallelanimationgroup_set_paused(void* self, bool paused) {
    QAbstractAnimation_SetPaused((QAbstractAnimation*)self, paused);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#stop)
///
/// ``` QParallelAnimationGroup* self ```
void q_parallelanimationgroup_stop(void* self) {
    QAbstractAnimation_Stop((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setCurrentTime)
///
/// ``` QParallelAnimationGroup* self, int msecs ```
void q_parallelanimationgroup_set_current_time(void* self, int msecs) {
    QAbstractAnimation_SetCurrentTime((QAbstractAnimation*)self, msecs);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#start)
///
/// ``` QParallelAnimationGroup* self, enum QAbstractAnimation__DeletionPolicy policy ```
void q_parallelanimationgroup_start1(void* self, int64_t policy) {
    QAbstractAnimation_Start1((QAbstractAnimation*)self, policy);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QParallelAnimationGroup* self ```
const char* q_parallelanimationgroup_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QParallelAnimationGroup* self, const char* name ```
void q_parallelanimationgroup_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QParallelAnimationGroup* self ```
bool q_parallelanimationgroup_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QParallelAnimationGroup* self ```
bool q_parallelanimationgroup_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QParallelAnimationGroup* self ```
bool q_parallelanimationgroup_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QParallelAnimationGroup* self ```
bool q_parallelanimationgroup_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QParallelAnimationGroup* self, bool b ```
bool q_parallelanimationgroup_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QParallelAnimationGroup* self ```
QThread* q_parallelanimationgroup_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QParallelAnimationGroup* self, QThread* thread ```
void q_parallelanimationgroup_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QParallelAnimationGroup* self, int interval ```
int32_t q_parallelanimationgroup_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QParallelAnimationGroup* self, int id ```
void q_parallelanimationgroup_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QParallelAnimationGroup* self ```
libqt_list /* of QObject* */ q_parallelanimationgroup_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QParallelAnimationGroup* self, QObject* parent ```
void q_parallelanimationgroup_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QParallelAnimationGroup* self, QObject* filterObj ```
void q_parallelanimationgroup_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QParallelAnimationGroup* self, QObject* obj ```
void q_parallelanimationgroup_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_parallelanimationgroup_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QParallelAnimationGroup* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_parallelanimationgroup_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_parallelanimationgroup_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_parallelanimationgroup_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QParallelAnimationGroup* self ```
void q_parallelanimationgroup_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QParallelAnimationGroup* self ```
void q_parallelanimationgroup_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QParallelAnimationGroup* self, const char* name, QVariant* value ```
bool q_parallelanimationgroup_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QParallelAnimationGroup* self, const char* name ```
QVariant* q_parallelanimationgroup_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QParallelAnimationGroup* self ```
const char** q_parallelanimationgroup_dynamic_property_names(void* self) {
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
/// ``` QParallelAnimationGroup* self ```
QBindingStorage* q_parallelanimationgroup_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QParallelAnimationGroup* self ```
QBindingStorage* q_parallelanimationgroup_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QParallelAnimationGroup* self ```
void q_parallelanimationgroup_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QParallelAnimationGroup* self, void (*slot)(QObject*) ```
void q_parallelanimationgroup_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QParallelAnimationGroup* self ```
QObject* q_parallelanimationgroup_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QParallelAnimationGroup* self, const char* classname ```
bool q_parallelanimationgroup_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QParallelAnimationGroup* self ```
void q_parallelanimationgroup_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QParallelAnimationGroup* self, int interval, enum Qt__TimerType timerType ```
int32_t q_parallelanimationgroup_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_parallelanimationgroup_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QParallelAnimationGroup* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_parallelanimationgroup_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QParallelAnimationGroup* self, QObject* param1 ```
void q_parallelanimationgroup_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QParallelAnimationGroup* self, void (*slot)(QObject*, QObject*) ```
void q_parallelanimationgroup_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QParallelAnimationGroup* self, QObject* watched, QEvent* event ```
bool q_parallelanimationgroup_event_filter(void* self, void* watched, void* event) {
    return QParallelAnimationGroup_EventFilter((QParallelAnimationGroup*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QParallelAnimationGroup* self, QObject* watched, QEvent* event ```
bool q_parallelanimationgroup_qbase_event_filter(void* self, void* watched, void* event) {
    return QParallelAnimationGroup_QBaseEventFilter((QParallelAnimationGroup*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QParallelAnimationGroup* self, bool (*slot)(QParallelAnimationGroup*, QObject*, QEvent*) ```
void q_parallelanimationgroup_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QParallelAnimationGroup_OnEventFilter((QParallelAnimationGroup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QParallelAnimationGroup* self, QTimerEvent* event ```
void q_parallelanimationgroup_timer_event(void* self, void* event) {
    QParallelAnimationGroup_TimerEvent((QParallelAnimationGroup*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QParallelAnimationGroup* self, QTimerEvent* event ```
void q_parallelanimationgroup_qbase_timer_event(void* self, void* event) {
    QParallelAnimationGroup_QBaseTimerEvent((QParallelAnimationGroup*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QParallelAnimationGroup* self, void (*slot)(QParallelAnimationGroup*, QTimerEvent*) ```
void q_parallelanimationgroup_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QParallelAnimationGroup_OnTimerEvent((QParallelAnimationGroup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QParallelAnimationGroup* self, QChildEvent* event ```
void q_parallelanimationgroup_child_event(void* self, void* event) {
    QParallelAnimationGroup_ChildEvent((QParallelAnimationGroup*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QParallelAnimationGroup* self, QChildEvent* event ```
void q_parallelanimationgroup_qbase_child_event(void* self, void* event) {
    QParallelAnimationGroup_QBaseChildEvent((QParallelAnimationGroup*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QParallelAnimationGroup* self, void (*slot)(QParallelAnimationGroup*, QChildEvent*) ```
void q_parallelanimationgroup_on_child_event(void* self, void (*slot)(void*, void*)) {
    QParallelAnimationGroup_OnChildEvent((QParallelAnimationGroup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QParallelAnimationGroup* self, QEvent* event ```
void q_parallelanimationgroup_custom_event(void* self, void* event) {
    QParallelAnimationGroup_CustomEvent((QParallelAnimationGroup*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QParallelAnimationGroup* self, QEvent* event ```
void q_parallelanimationgroup_qbase_custom_event(void* self, void* event) {
    QParallelAnimationGroup_QBaseCustomEvent((QParallelAnimationGroup*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QParallelAnimationGroup* self, void (*slot)(QParallelAnimationGroup*, QEvent*) ```
void q_parallelanimationgroup_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QParallelAnimationGroup_OnCustomEvent((QParallelAnimationGroup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QParallelAnimationGroup* self, QMetaMethod* signal ```
void q_parallelanimationgroup_connect_notify(void* self, void* signal) {
    QParallelAnimationGroup_ConnectNotify((QParallelAnimationGroup*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QParallelAnimationGroup* self, QMetaMethod* signal ```
void q_parallelanimationgroup_qbase_connect_notify(void* self, void* signal) {
    QParallelAnimationGroup_QBaseConnectNotify((QParallelAnimationGroup*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QParallelAnimationGroup* self, void (*slot)(QParallelAnimationGroup*, QMetaMethod*) ```
void q_parallelanimationgroup_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QParallelAnimationGroup_OnConnectNotify((QParallelAnimationGroup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QParallelAnimationGroup* self, QMetaMethod* signal ```
void q_parallelanimationgroup_disconnect_notify(void* self, void* signal) {
    QParallelAnimationGroup_DisconnectNotify((QParallelAnimationGroup*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QParallelAnimationGroup* self, QMetaMethod* signal ```
void q_parallelanimationgroup_qbase_disconnect_notify(void* self, void* signal) {
    QParallelAnimationGroup_QBaseDisconnectNotify((QParallelAnimationGroup*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QParallelAnimationGroup* self, void (*slot)(QParallelAnimationGroup*, QMetaMethod*) ```
void q_parallelanimationgroup_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QParallelAnimationGroup_OnDisconnectNotify((QParallelAnimationGroup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QParallelAnimationGroup* self ```
QObject* q_parallelanimationgroup_sender(void* self) {
    return QParallelAnimationGroup_Sender((QParallelAnimationGroup*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QParallelAnimationGroup* self ```
QObject* q_parallelanimationgroup_qbase_sender(void* self) {
    return QParallelAnimationGroup_QBaseSender((QParallelAnimationGroup*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QParallelAnimationGroup* self, QObject* (*slot)() ```
void q_parallelanimationgroup_on_sender(void* self, QObject* (*slot)()) {
    QParallelAnimationGroup_OnSender((QParallelAnimationGroup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QParallelAnimationGroup* self ```
int32_t q_parallelanimationgroup_sender_signal_index(void* self) {
    return QParallelAnimationGroup_SenderSignalIndex((QParallelAnimationGroup*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QParallelAnimationGroup* self ```
int32_t q_parallelanimationgroup_qbase_sender_signal_index(void* self) {
    return QParallelAnimationGroup_QBaseSenderSignalIndex((QParallelAnimationGroup*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QParallelAnimationGroup* self, int32_t (*slot)() ```
void q_parallelanimationgroup_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QParallelAnimationGroup_OnSenderSignalIndex((QParallelAnimationGroup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QParallelAnimationGroup* self, const char* signal ```
int32_t q_parallelanimationgroup_receivers(void* self, const char* signal) {
    return QParallelAnimationGroup_Receivers((QParallelAnimationGroup*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QParallelAnimationGroup* self, const char* signal ```
int32_t q_parallelanimationgroup_qbase_receivers(void* self, const char* signal) {
    return QParallelAnimationGroup_QBaseReceivers((QParallelAnimationGroup*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QParallelAnimationGroup* self, int32_t (*slot)(QParallelAnimationGroup*, const char*) ```
void q_parallelanimationgroup_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QParallelAnimationGroup_OnReceivers((QParallelAnimationGroup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QParallelAnimationGroup* self, QMetaMethod* signal ```
bool q_parallelanimationgroup_is_signal_connected(void* self, void* signal) {
    return QParallelAnimationGroup_IsSignalConnected((QParallelAnimationGroup*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QParallelAnimationGroup* self, QMetaMethod* signal ```
bool q_parallelanimationgroup_qbase_is_signal_connected(void* self, void* signal) {
    return QParallelAnimationGroup_QBaseIsSignalConnected((QParallelAnimationGroup*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QParallelAnimationGroup* self, bool (*slot)(QParallelAnimationGroup*, QMetaMethod*) ```
void q_parallelanimationgroup_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QParallelAnimationGroup_OnIsSignalConnected((QParallelAnimationGroup*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QParallelAnimationGroup* self ```
void q_parallelanimationgroup_delete(void* self) {
    QParallelAnimationGroup_Delete((QParallelAnimationGroup*)(self));
}