#include "libqabstractanimation.hpp"
#include "libqanimationgroup.hpp"
#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqpauseanimation.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqsequentialanimationgroup.hpp"
#include "libqsequentialanimationgroup.h"

/// https://doc.qt.io/qt-6/qsequentialanimationgroup.html

/// q_sequentialanimationgroup_new constructs a new QSequentialAnimationGroup object.
///
///
QSequentialAnimationGroup* q_sequentialanimationgroup_new() {
    return QSequentialAnimationGroup_new();
}

/// q_sequentialanimationgroup_new2 constructs a new QSequentialAnimationGroup object.
///
/// ``` QObject* parent ```
QSequentialAnimationGroup* q_sequentialanimationgroup_new2(void* parent) {
    return QSequentialAnimationGroup_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QSequentialAnimationGroup* self ```
QMetaObject* q_sequentialanimationgroup_meta_object(void* self) {
    return QSequentialAnimationGroup_MetaObject((QSequentialAnimationGroup*)self);
}

/// ``` QSequentialAnimationGroup* self, const char* param1 ```
void* q_sequentialanimationgroup_metacast(void* self, const char* param1) {
    return QSequentialAnimationGroup_Metacast((QSequentialAnimationGroup*)self, param1);
}

/// ``` QSequentialAnimationGroup* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_sequentialanimationgroup_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSequentialAnimationGroup_Metacall((QSequentialAnimationGroup*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QSequentialAnimationGroup* self, int32_t (*slot)(QSequentialAnimationGroup*, enum QMetaObject__Call, int, void*) ```
void q_sequentialanimationgroup_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QSequentialAnimationGroup_OnMetacall((QSequentialAnimationGroup*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSequentialAnimationGroup* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_sequentialanimationgroup_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSequentialAnimationGroup_QBaseMetacall((QSequentialAnimationGroup*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_sequentialanimationgroup_tr(const char* s) {
    libqt_string _str = QSequentialAnimationGroup_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#addPause)
///
/// ``` QSequentialAnimationGroup* self, int msecs ```
QPauseAnimation* q_sequentialanimationgroup_add_pause(void* self, int msecs) {
    return QSequentialAnimationGroup_AddPause((QSequentialAnimationGroup*)self, msecs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#insertPause)
///
/// ``` QSequentialAnimationGroup* self, int index, int msecs ```
QPauseAnimation* q_sequentialanimationgroup_insert_pause(void* self, int index, int msecs) {
    return QSequentialAnimationGroup_InsertPause((QSequentialAnimationGroup*)self, index, msecs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#currentAnimation)
///
/// ``` QSequentialAnimationGroup* self ```
QAbstractAnimation* q_sequentialanimationgroup_current_animation(void* self) {
    return QSequentialAnimationGroup_CurrentAnimation((QSequentialAnimationGroup*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#duration)
///
/// ``` QSequentialAnimationGroup* self ```
int32_t q_sequentialanimationgroup_duration(void* self) {
    return QSequentialAnimationGroup_Duration((QSequentialAnimationGroup*)self);
}

/// Allows for overriding the related default method
///
/// ``` QSequentialAnimationGroup* self, int32_t (*slot)() ```
void q_sequentialanimationgroup_on_duration(void* self, int32_t (*slot)()) {
    QSequentialAnimationGroup_OnDuration((QSequentialAnimationGroup*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSequentialAnimationGroup* self ```
int32_t q_sequentialanimationgroup_qbase_duration(void* self) {
    return QSequentialAnimationGroup_QBaseDuration((QSequentialAnimationGroup*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#currentAnimationChanged)
///
/// ``` QSequentialAnimationGroup* self, QAbstractAnimation* current ```
void q_sequentialanimationgroup_current_animation_changed(void* self, void* current) {
    QSequentialAnimationGroup_CurrentAnimationChanged((QSequentialAnimationGroup*)self, (QAbstractAnimation*)current);
}

/// ``` QSequentialAnimationGroup* self, void (*slot)(QSequentialAnimationGroup*, QAbstractAnimation*) ```
void q_sequentialanimationgroup_on_current_animation_changed(void* self, void (*slot)(void*, void*)) {
    QSequentialAnimationGroup_Connect_CurrentAnimationChanged((QSequentialAnimationGroup*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#event)
///
/// ``` QSequentialAnimationGroup* self, QEvent* event ```
bool q_sequentialanimationgroup_event(void* self, void* event) {
    return QSequentialAnimationGroup_Event((QSequentialAnimationGroup*)self, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QSequentialAnimationGroup* self, bool (*slot)(QSequentialAnimationGroup*, QEvent*) ```
void q_sequentialanimationgroup_on_event(void* self, bool (*slot)(void*, void*)) {
    QSequentialAnimationGroup_OnEvent((QSequentialAnimationGroup*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSequentialAnimationGroup* self, QEvent* event ```
bool q_sequentialanimationgroup_qbase_event(void* self, void* event) {
    return QSequentialAnimationGroup_QBaseEvent((QSequentialAnimationGroup*)self, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#updateCurrentTime)
///
/// ``` QSequentialAnimationGroup* self, int param1 ```
void q_sequentialanimationgroup_update_current_time(void* self, int param1) {
    QSequentialAnimationGroup_UpdateCurrentTime((QSequentialAnimationGroup*)self, param1);
}

/// Allows for overriding the related default method
///
/// ``` QSequentialAnimationGroup* self, void (*slot)(QSequentialAnimationGroup*, int) ```
void q_sequentialanimationgroup_on_update_current_time(void* self, void (*slot)(void*, int)) {
    QSequentialAnimationGroup_OnUpdateCurrentTime((QSequentialAnimationGroup*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSequentialAnimationGroup* self, int param1 ```
void q_sequentialanimationgroup_qbase_update_current_time(void* self, int param1) {
    QSequentialAnimationGroup_QBaseUpdateCurrentTime((QSequentialAnimationGroup*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#updateState)
///
/// ``` QSequentialAnimationGroup* self, enum QAbstractAnimation__State newState, enum QAbstractAnimation__State oldState ```
void q_sequentialanimationgroup_update_state(void* self, int64_t newState, int64_t oldState) {
    QSequentialAnimationGroup_UpdateState((QSequentialAnimationGroup*)self, newState, oldState);
}

/// Allows for overriding the related default method
///
/// ``` QSequentialAnimationGroup* self, void (*slot)(QSequentialAnimationGroup*, enum QAbstractAnimation__State, enum QAbstractAnimation__State) ```
void q_sequentialanimationgroup_on_update_state(void* self, void (*slot)(void*, int64_t, int64_t)) {
    QSequentialAnimationGroup_OnUpdateState((QSequentialAnimationGroup*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSequentialAnimationGroup* self, enum QAbstractAnimation__State newState, enum QAbstractAnimation__State oldState ```
void q_sequentialanimationgroup_qbase_update_state(void* self, int64_t newState, int64_t oldState) {
    QSequentialAnimationGroup_QBaseUpdateState((QSequentialAnimationGroup*)self, newState, oldState);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#updateDirection)
///
/// ``` QSequentialAnimationGroup* self, enum QAbstractAnimation__Direction direction ```
void q_sequentialanimationgroup_update_direction(void* self, int64_t direction) {
    QSequentialAnimationGroup_UpdateDirection((QSequentialAnimationGroup*)self, direction);
}

/// Allows for overriding the related default method
///
/// ``` QSequentialAnimationGroup* self, void (*slot)(QSequentialAnimationGroup*, enum QAbstractAnimation__Direction) ```
void q_sequentialanimationgroup_on_update_direction(void* self, void (*slot)(void*, int64_t)) {
    QSequentialAnimationGroup_OnUpdateDirection((QSequentialAnimationGroup*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSequentialAnimationGroup* self, enum QAbstractAnimation__Direction direction ```
void q_sequentialanimationgroup_qbase_update_direction(void* self, int64_t direction) {
    QSequentialAnimationGroup_QBaseUpdateDirection((QSequentialAnimationGroup*)self, direction);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_sequentialanimationgroup_tr2(const char* s, const char* c) {
    libqt_string _str = QSequentialAnimationGroup_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_sequentialanimationgroup_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QSequentialAnimationGroup_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAnimationGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#animationAt)
///
/// ``` QSequentialAnimationGroup* self, int index ```
QAbstractAnimation* q_sequentialanimationgroup_animation_at(void* self, int index) {
    return QAnimationGroup_AnimationAt((QAnimationGroup*)self, index);
}

/// Inherited from QAnimationGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#animationCount)
///
/// ``` QSequentialAnimationGroup* self ```
int32_t q_sequentialanimationgroup_animation_count(void* self) {
    return QAnimationGroup_AnimationCount((QAnimationGroup*)self);
}

/// Inherited from QAnimationGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#indexOfAnimation)
///
/// ``` QSequentialAnimationGroup* self, QAbstractAnimation* animation ```
int32_t q_sequentialanimationgroup_index_of_animation(void* self, void* animation) {
    return QAnimationGroup_IndexOfAnimation((QAnimationGroup*)self, (QAbstractAnimation*)animation);
}

/// Inherited from QAnimationGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#addAnimation)
///
/// ``` QSequentialAnimationGroup* self, QAbstractAnimation* animation ```
void q_sequentialanimationgroup_add_animation(void* self, void* animation) {
    QAnimationGroup_AddAnimation((QAnimationGroup*)self, (QAbstractAnimation*)animation);
}

/// Inherited from QAnimationGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#insertAnimation)
///
/// ``` QSequentialAnimationGroup* self, int index, QAbstractAnimation* animation ```
void q_sequentialanimationgroup_insert_animation(void* self, int index, void* animation) {
    QAnimationGroup_InsertAnimation((QAnimationGroup*)self, index, (QAbstractAnimation*)animation);
}

/// Inherited from QAnimationGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#removeAnimation)
///
/// ``` QSequentialAnimationGroup* self, QAbstractAnimation* animation ```
void q_sequentialanimationgroup_remove_animation(void* self, void* animation) {
    QAnimationGroup_RemoveAnimation((QAnimationGroup*)self, (QAbstractAnimation*)animation);
}

/// Inherited from QAnimationGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#takeAnimation)
///
/// ``` QSequentialAnimationGroup* self, int index ```
QAbstractAnimation* q_sequentialanimationgroup_take_animation(void* self, int index) {
    return QAnimationGroup_TakeAnimation((QAnimationGroup*)self, index);
}

/// Inherited from QAnimationGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#clear)
///
/// ``` QSequentialAnimationGroup* self ```
void q_sequentialanimationgroup_clear(void* self) {
    QAnimationGroup_Clear((QAnimationGroup*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#state)
///
/// ``` QSequentialAnimationGroup* self ```
int64_t q_sequentialanimationgroup_state(void* self) {
    return QAbstractAnimation_State((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#group)
///
/// ``` QSequentialAnimationGroup* self ```
QAnimationGroup* q_sequentialanimationgroup_group(void* self) {
    return QAbstractAnimation_Group((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#direction)
///
/// ``` QSequentialAnimationGroup* self ```
int64_t q_sequentialanimationgroup_direction(void* self) {
    return QAbstractAnimation_Direction((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setDirection)
///
/// ``` QSequentialAnimationGroup* self, enum QAbstractAnimation__Direction direction ```
void q_sequentialanimationgroup_set_direction(void* self, int64_t direction) {
    QAbstractAnimation_SetDirection((QAbstractAnimation*)self, direction);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentTime)
///
/// ``` QSequentialAnimationGroup* self ```
int32_t q_sequentialanimationgroup_current_time(void* self) {
    return QAbstractAnimation_CurrentTime((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopTime)
///
/// ``` QSequentialAnimationGroup* self ```
int32_t q_sequentialanimationgroup_current_loop_time(void* self) {
    return QAbstractAnimation_CurrentLoopTime((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#loopCount)
///
/// ``` QSequentialAnimationGroup* self ```
int32_t q_sequentialanimationgroup_loop_count(void* self) {
    return QAbstractAnimation_LoopCount((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setLoopCount)
///
/// ``` QSequentialAnimationGroup* self, int loopCount ```
void q_sequentialanimationgroup_set_loop_count(void* self, int loopCount) {
    QAbstractAnimation_SetLoopCount((QAbstractAnimation*)self, loopCount);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoop)
///
/// ``` QSequentialAnimationGroup* self ```
int32_t q_sequentialanimationgroup_current_loop(void* self) {
    return QAbstractAnimation_CurrentLoop((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#totalDuration)
///
/// ``` QSequentialAnimationGroup* self ```
int32_t q_sequentialanimationgroup_total_duration(void* self) {
    return QAbstractAnimation_TotalDuration((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#finished)
///
/// ``` QSequentialAnimationGroup* self ```
void q_sequentialanimationgroup_finished(void* self) {
    QAbstractAnimation_Finished((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// ``` QSequentialAnimationGroup* self, void (*slot)(QAbstractAnimation*) ```
void q_sequentialanimationgroup_on_finished(void* self, void (*slot)(void*)) {
    QAbstractAnimation_Connect_Finished((QAbstractAnimation*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#stateChanged)
///
/// ``` QSequentialAnimationGroup* self, enum QAbstractAnimation__State newState, enum QAbstractAnimation__State oldState ```
void q_sequentialanimationgroup_state_changed(void* self, int64_t newState, int64_t oldState) {
    QAbstractAnimation_StateChanged((QAbstractAnimation*)self, newState, oldState);
}

/// Inherited from QAbstractAnimation
///
/// ``` QSequentialAnimationGroup* self, void (*slot)(QAbstractAnimation*, enum QAbstractAnimation__State, enum QAbstractAnimation__State) ```
void q_sequentialanimationgroup_on_state_changed(void* self, void (*slot)(void*, int64_t, int64_t)) {
    QAbstractAnimation_Connect_StateChanged((QAbstractAnimation*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopChanged)
///
/// ``` QSequentialAnimationGroup* self, int currentLoop ```
void q_sequentialanimationgroup_current_loop_changed(void* self, int currentLoop) {
    QAbstractAnimation_CurrentLoopChanged((QAbstractAnimation*)self, currentLoop);
}

/// Inherited from QAbstractAnimation
///
/// ``` QSequentialAnimationGroup* self, void (*slot)(QAbstractAnimation*, int) ```
void q_sequentialanimationgroup_on_current_loop_changed(void* self, void (*slot)(void*, int)) {
    QAbstractAnimation_Connect_CurrentLoopChanged((QAbstractAnimation*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#directionChanged)
///
/// ``` QSequentialAnimationGroup* self, enum QAbstractAnimation__Direction param1 ```
void q_sequentialanimationgroup_direction_changed(void* self, int64_t param1) {
    QAbstractAnimation_DirectionChanged((QAbstractAnimation*)self, param1);
}

/// Inherited from QAbstractAnimation
///
/// ``` QSequentialAnimationGroup* self, void (*slot)(QAbstractAnimation*, enum QAbstractAnimation__Direction) ```
void q_sequentialanimationgroup_on_direction_changed(void* self, void (*slot)(void*, int64_t)) {
    QAbstractAnimation_Connect_DirectionChanged((QAbstractAnimation*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#start)
///
/// ``` QSequentialAnimationGroup* self ```
void q_sequentialanimationgroup_start(void* self) {
    QAbstractAnimation_Start((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#pause)
///
/// ``` QSequentialAnimationGroup* self ```
void q_sequentialanimationgroup_pause(void* self) {
    QAbstractAnimation_Pause((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#resume)
///
/// ``` QSequentialAnimationGroup* self ```
void q_sequentialanimationgroup_resume(void* self) {
    QAbstractAnimation_Resume((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setPaused)
///
/// ``` QSequentialAnimationGroup* self, bool paused ```
void q_sequentialanimationgroup_set_paused(void* self, bool paused) {
    QAbstractAnimation_SetPaused((QAbstractAnimation*)self, paused);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#stop)
///
/// ``` QSequentialAnimationGroup* self ```
void q_sequentialanimationgroup_stop(void* self) {
    QAbstractAnimation_Stop((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setCurrentTime)
///
/// ``` QSequentialAnimationGroup* self, int msecs ```
void q_sequentialanimationgroup_set_current_time(void* self, int msecs) {
    QAbstractAnimation_SetCurrentTime((QAbstractAnimation*)self, msecs);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#start)
///
/// ``` QSequentialAnimationGroup* self, enum QAbstractAnimation__DeletionPolicy policy ```
void q_sequentialanimationgroup_start1(void* self, int64_t policy) {
    QAbstractAnimation_Start1((QAbstractAnimation*)self, policy);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QSequentialAnimationGroup* self ```
const char* q_sequentialanimationgroup_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QSequentialAnimationGroup* self, const char* name ```
void q_sequentialanimationgroup_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QSequentialAnimationGroup* self ```
bool q_sequentialanimationgroup_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QSequentialAnimationGroup* self ```
bool q_sequentialanimationgroup_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QSequentialAnimationGroup* self ```
bool q_sequentialanimationgroup_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QSequentialAnimationGroup* self ```
bool q_sequentialanimationgroup_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QSequentialAnimationGroup* self, bool b ```
bool q_sequentialanimationgroup_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QSequentialAnimationGroup* self ```
QThread* q_sequentialanimationgroup_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QSequentialAnimationGroup* self, QThread* thread ```
void q_sequentialanimationgroup_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSequentialAnimationGroup* self, int interval ```
int32_t q_sequentialanimationgroup_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QSequentialAnimationGroup* self, int id ```
void q_sequentialanimationgroup_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QSequentialAnimationGroup* self ```
libqt_list /* of QObject* */ q_sequentialanimationgroup_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QSequentialAnimationGroup* self, QObject* parent ```
void q_sequentialanimationgroup_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QSequentialAnimationGroup* self, QObject* filterObj ```
void q_sequentialanimationgroup_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QSequentialAnimationGroup* self, QObject* obj ```
void q_sequentialanimationgroup_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_sequentialanimationgroup_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSequentialAnimationGroup* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_sequentialanimationgroup_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_sequentialanimationgroup_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_sequentialanimationgroup_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QSequentialAnimationGroup* self ```
void q_sequentialanimationgroup_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QSequentialAnimationGroup* self ```
void q_sequentialanimationgroup_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QSequentialAnimationGroup* self, const char* name, QVariant* value ```
bool q_sequentialanimationgroup_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QSequentialAnimationGroup* self, const char* name ```
QVariant* q_sequentialanimationgroup_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QSequentialAnimationGroup* self ```
const char** q_sequentialanimationgroup_dynamic_property_names(void* self) {
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
/// ``` QSequentialAnimationGroup* self ```
QBindingStorage* q_sequentialanimationgroup_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSequentialAnimationGroup* self ```
QBindingStorage* q_sequentialanimationgroup_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSequentialAnimationGroup* self ```
void q_sequentialanimationgroup_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QSequentialAnimationGroup* self, void (*slot)(QObject*) ```
void q_sequentialanimationgroup_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QSequentialAnimationGroup* self ```
QObject* q_sequentialanimationgroup_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QSequentialAnimationGroup* self, const char* classname ```
bool q_sequentialanimationgroup_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QSequentialAnimationGroup* self ```
void q_sequentialanimationgroup_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSequentialAnimationGroup* self, int interval, enum Qt__TimerType timerType ```
int32_t q_sequentialanimationgroup_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_sequentialanimationgroup_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSequentialAnimationGroup* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_sequentialanimationgroup_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSequentialAnimationGroup* self, QObject* param1 ```
void q_sequentialanimationgroup_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QSequentialAnimationGroup* self, void (*slot)(QObject*, QObject*) ```
void q_sequentialanimationgroup_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSequentialAnimationGroup* self, QObject* watched, QEvent* event ```
bool q_sequentialanimationgroup_event_filter(void* self, void* watched, void* event) {
    return QSequentialAnimationGroup_EventFilter((QSequentialAnimationGroup*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSequentialAnimationGroup* self, QObject* watched, QEvent* event ```
bool q_sequentialanimationgroup_qbase_event_filter(void* self, void* watched, void* event) {
    return QSequentialAnimationGroup_QBaseEventFilter((QSequentialAnimationGroup*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSequentialAnimationGroup* self, bool (*slot)(QSequentialAnimationGroup*, QObject*, QEvent*) ```
void q_sequentialanimationgroup_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QSequentialAnimationGroup_OnEventFilter((QSequentialAnimationGroup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSequentialAnimationGroup* self, QTimerEvent* event ```
void q_sequentialanimationgroup_timer_event(void* self, void* event) {
    QSequentialAnimationGroup_TimerEvent((QSequentialAnimationGroup*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSequentialAnimationGroup* self, QTimerEvent* event ```
void q_sequentialanimationgroup_qbase_timer_event(void* self, void* event) {
    QSequentialAnimationGroup_QBaseTimerEvent((QSequentialAnimationGroup*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSequentialAnimationGroup* self, void (*slot)(QSequentialAnimationGroup*, QTimerEvent*) ```
void q_sequentialanimationgroup_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QSequentialAnimationGroup_OnTimerEvent((QSequentialAnimationGroup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSequentialAnimationGroup* self, QChildEvent* event ```
void q_sequentialanimationgroup_child_event(void* self, void* event) {
    QSequentialAnimationGroup_ChildEvent((QSequentialAnimationGroup*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSequentialAnimationGroup* self, QChildEvent* event ```
void q_sequentialanimationgroup_qbase_child_event(void* self, void* event) {
    QSequentialAnimationGroup_QBaseChildEvent((QSequentialAnimationGroup*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSequentialAnimationGroup* self, void (*slot)(QSequentialAnimationGroup*, QChildEvent*) ```
void q_sequentialanimationgroup_on_child_event(void* self, void (*slot)(void*, void*)) {
    QSequentialAnimationGroup_OnChildEvent((QSequentialAnimationGroup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSequentialAnimationGroup* self, QEvent* event ```
void q_sequentialanimationgroup_custom_event(void* self, void* event) {
    QSequentialAnimationGroup_CustomEvent((QSequentialAnimationGroup*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSequentialAnimationGroup* self, QEvent* event ```
void q_sequentialanimationgroup_qbase_custom_event(void* self, void* event) {
    QSequentialAnimationGroup_QBaseCustomEvent((QSequentialAnimationGroup*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSequentialAnimationGroup* self, void (*slot)(QSequentialAnimationGroup*, QEvent*) ```
void q_sequentialanimationgroup_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QSequentialAnimationGroup_OnCustomEvent((QSequentialAnimationGroup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSequentialAnimationGroup* self, QMetaMethod* signal ```
void q_sequentialanimationgroup_connect_notify(void* self, void* signal) {
    QSequentialAnimationGroup_ConnectNotify((QSequentialAnimationGroup*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSequentialAnimationGroup* self, QMetaMethod* signal ```
void q_sequentialanimationgroup_qbase_connect_notify(void* self, void* signal) {
    QSequentialAnimationGroup_QBaseConnectNotify((QSequentialAnimationGroup*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSequentialAnimationGroup* self, void (*slot)(QSequentialAnimationGroup*, QMetaMethod*) ```
void q_sequentialanimationgroup_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QSequentialAnimationGroup_OnConnectNotify((QSequentialAnimationGroup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSequentialAnimationGroup* self, QMetaMethod* signal ```
void q_sequentialanimationgroup_disconnect_notify(void* self, void* signal) {
    QSequentialAnimationGroup_DisconnectNotify((QSequentialAnimationGroup*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSequentialAnimationGroup* self, QMetaMethod* signal ```
void q_sequentialanimationgroup_qbase_disconnect_notify(void* self, void* signal) {
    QSequentialAnimationGroup_QBaseDisconnectNotify((QSequentialAnimationGroup*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSequentialAnimationGroup* self, void (*slot)(QSequentialAnimationGroup*, QMetaMethod*) ```
void q_sequentialanimationgroup_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QSequentialAnimationGroup_OnDisconnectNotify((QSequentialAnimationGroup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSequentialAnimationGroup* self ```
QObject* q_sequentialanimationgroup_sender(void* self) {
    return QSequentialAnimationGroup_Sender((QSequentialAnimationGroup*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSequentialAnimationGroup* self ```
QObject* q_sequentialanimationgroup_qbase_sender(void* self) {
    return QSequentialAnimationGroup_QBaseSender((QSequentialAnimationGroup*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSequentialAnimationGroup* self, QObject* (*slot)() ```
void q_sequentialanimationgroup_on_sender(void* self, QObject* (*slot)()) {
    QSequentialAnimationGroup_OnSender((QSequentialAnimationGroup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSequentialAnimationGroup* self ```
int32_t q_sequentialanimationgroup_sender_signal_index(void* self) {
    return QSequentialAnimationGroup_SenderSignalIndex((QSequentialAnimationGroup*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSequentialAnimationGroup* self ```
int32_t q_sequentialanimationgroup_qbase_sender_signal_index(void* self) {
    return QSequentialAnimationGroup_QBaseSenderSignalIndex((QSequentialAnimationGroup*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSequentialAnimationGroup* self, int32_t (*slot)() ```
void q_sequentialanimationgroup_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QSequentialAnimationGroup_OnSenderSignalIndex((QSequentialAnimationGroup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSequentialAnimationGroup* self, const char* signal ```
int32_t q_sequentialanimationgroup_receivers(void* self, const char* signal) {
    return QSequentialAnimationGroup_Receivers((QSequentialAnimationGroup*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSequentialAnimationGroup* self, const char* signal ```
int32_t q_sequentialanimationgroup_qbase_receivers(void* self, const char* signal) {
    return QSequentialAnimationGroup_QBaseReceivers((QSequentialAnimationGroup*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSequentialAnimationGroup* self, int32_t (*slot)(QSequentialAnimationGroup*, const char*) ```
void q_sequentialanimationgroup_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QSequentialAnimationGroup_OnReceivers((QSequentialAnimationGroup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSequentialAnimationGroup* self, QMetaMethod* signal ```
bool q_sequentialanimationgroup_is_signal_connected(void* self, void* signal) {
    return QSequentialAnimationGroup_IsSignalConnected((QSequentialAnimationGroup*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSequentialAnimationGroup* self, QMetaMethod* signal ```
bool q_sequentialanimationgroup_qbase_is_signal_connected(void* self, void* signal) {
    return QSequentialAnimationGroup_QBaseIsSignalConnected((QSequentialAnimationGroup*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSequentialAnimationGroup* self, bool (*slot)(QSequentialAnimationGroup*, QMetaMethod*) ```
void q_sequentialanimationgroup_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QSequentialAnimationGroup_OnIsSignalConnected((QSequentialAnimationGroup*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QSequentialAnimationGroup* self ```
void q_sequentialanimationgroup_delete(void* self) {
    QSequentialAnimationGroup_Delete((QSequentialAnimationGroup*)(self));
}