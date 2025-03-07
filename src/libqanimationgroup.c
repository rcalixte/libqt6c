#include "libqabstractanimation.hpp"
#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqanimationgroup.hpp"
#include "libqanimationgroup.h"

/// https://doc.qt.io/qt-6/qanimationgroup.html

/// q_animationgroup_new constructs a new QAnimationGroup object.
///
///
QAnimationGroup* q_animationgroup_new() {
    return QAnimationGroup_new();
}

/// q_animationgroup_new2 constructs a new QAnimationGroup object.
///
/// ``` QObject* parent ```
QAnimationGroup* q_animationgroup_new2(void* parent) {
    return QAnimationGroup_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAnimationGroup* self ```
QMetaObject* q_animationgroup_meta_object(void* self) {
    return QAnimationGroup_MetaObject((QAnimationGroup*)self);
}

/// ``` QAnimationGroup* self, const char* param1 ```
void* q_animationgroup_metacast(void* self, const char* param1) {
    return QAnimationGroup_Metacast((QAnimationGroup*)self, param1);
}

/// ``` QAnimationGroup* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_animationgroup_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAnimationGroup_Metacall((QAnimationGroup*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QAnimationGroup* self, int32_t (*slot)(QAnimationGroup*, enum QMetaObject__Call, int, void*) ```
void q_animationgroup_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QAnimationGroup_OnMetacall((QAnimationGroup*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAnimationGroup* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_animationgroup_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAnimationGroup_QBaseMetacall((QAnimationGroup*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_animationgroup_tr(const char* s) {
    libqt_string _str = QAnimationGroup_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#animationAt)
///
/// ``` QAnimationGroup* self, int index ```
QAbstractAnimation* q_animationgroup_animation_at(void* self, int index) {
    return QAnimationGroup_AnimationAt((QAnimationGroup*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#animationCount)
///
/// ``` QAnimationGroup* self ```
int32_t q_animationgroup_animation_count(void* self) {
    return QAnimationGroup_AnimationCount((QAnimationGroup*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#indexOfAnimation)
///
/// ``` QAnimationGroup* self, QAbstractAnimation* animation ```
int32_t q_animationgroup_index_of_animation(void* self, void* animation) {
    return QAnimationGroup_IndexOfAnimation((QAnimationGroup*)self, (QAbstractAnimation*)animation);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#addAnimation)
///
/// ``` QAnimationGroup* self, QAbstractAnimation* animation ```
void q_animationgroup_add_animation(void* self, void* animation) {
    QAnimationGroup_AddAnimation((QAnimationGroup*)self, (QAbstractAnimation*)animation);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#insertAnimation)
///
/// ``` QAnimationGroup* self, int index, QAbstractAnimation* animation ```
void q_animationgroup_insert_animation(void* self, int index, void* animation) {
    QAnimationGroup_InsertAnimation((QAnimationGroup*)self, index, (QAbstractAnimation*)animation);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#removeAnimation)
///
/// ``` QAnimationGroup* self, QAbstractAnimation* animation ```
void q_animationgroup_remove_animation(void* self, void* animation) {
    QAnimationGroup_RemoveAnimation((QAnimationGroup*)self, (QAbstractAnimation*)animation);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#takeAnimation)
///
/// ``` QAnimationGroup* self, int index ```
QAbstractAnimation* q_animationgroup_take_animation(void* self, int index) {
    return QAnimationGroup_TakeAnimation((QAnimationGroup*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#clear)
///
/// ``` QAnimationGroup* self ```
void q_animationgroup_clear(void* self) {
    QAnimationGroup_Clear((QAnimationGroup*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#event)
///
/// ``` QAnimationGroup* self, QEvent* event ```
bool q_animationgroup_event(void* self, void* event) {
    return QAnimationGroup_Event((QAnimationGroup*)self, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QAnimationGroup* self, bool (*slot)(QAnimationGroup*, QEvent*) ```
void q_animationgroup_on_event(void* self, bool (*slot)(void*, void*)) {
    QAnimationGroup_OnEvent((QAnimationGroup*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAnimationGroup* self, QEvent* event ```
bool q_animationgroup_qbase_event(void* self, void* event) {
    return QAnimationGroup_QBaseEvent((QAnimationGroup*)self, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_animationgroup_tr2(const char* s, const char* c) {
    libqt_string _str = QAnimationGroup_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_animationgroup_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QAnimationGroup_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#state)
///
/// ``` QAnimationGroup* self ```
int64_t q_animationgroup_state(void* self) {
    return QAbstractAnimation_State((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#group)
///
/// ``` QAnimationGroup* self ```
QAnimationGroup* q_animationgroup_group(void* self) {
    return QAbstractAnimation_Group((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#direction)
///
/// ``` QAnimationGroup* self ```
int64_t q_animationgroup_direction(void* self) {
    return QAbstractAnimation_Direction((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setDirection)
///
/// ``` QAnimationGroup* self, enum QAbstractAnimation__Direction direction ```
void q_animationgroup_set_direction(void* self, int64_t direction) {
    QAbstractAnimation_SetDirection((QAbstractAnimation*)self, direction);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentTime)
///
/// ``` QAnimationGroup* self ```
int32_t q_animationgroup_current_time(void* self) {
    return QAbstractAnimation_CurrentTime((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopTime)
///
/// ``` QAnimationGroup* self ```
int32_t q_animationgroup_current_loop_time(void* self) {
    return QAbstractAnimation_CurrentLoopTime((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#loopCount)
///
/// ``` QAnimationGroup* self ```
int32_t q_animationgroup_loop_count(void* self) {
    return QAbstractAnimation_LoopCount((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setLoopCount)
///
/// ``` QAnimationGroup* self, int loopCount ```
void q_animationgroup_set_loop_count(void* self, int loopCount) {
    QAbstractAnimation_SetLoopCount((QAbstractAnimation*)self, loopCount);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoop)
///
/// ``` QAnimationGroup* self ```
int32_t q_animationgroup_current_loop(void* self) {
    return QAbstractAnimation_CurrentLoop((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#totalDuration)
///
/// ``` QAnimationGroup* self ```
int32_t q_animationgroup_total_duration(void* self) {
    return QAbstractAnimation_TotalDuration((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#finished)
///
/// ``` QAnimationGroup* self ```
void q_animationgroup_finished(void* self) {
    QAbstractAnimation_Finished((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// ``` QAnimationGroup* self, void (*slot)(QAbstractAnimation*) ```
void q_animationgroup_on_finished(void* self, void (*slot)(void*)) {
    QAbstractAnimation_Connect_Finished((QAbstractAnimation*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#stateChanged)
///
/// ``` QAnimationGroup* self, enum QAbstractAnimation__State newState, enum QAbstractAnimation__State oldState ```
void q_animationgroup_state_changed(void* self, int64_t newState, int64_t oldState) {
    QAbstractAnimation_StateChanged((QAbstractAnimation*)self, newState, oldState);
}

/// Inherited from QAbstractAnimation
///
/// ``` QAnimationGroup* self, void (*slot)(QAbstractAnimation*, enum QAbstractAnimation__State, enum QAbstractAnimation__State) ```
void q_animationgroup_on_state_changed(void* self, void (*slot)(void*, int64_t, int64_t)) {
    QAbstractAnimation_Connect_StateChanged((QAbstractAnimation*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopChanged)
///
/// ``` QAnimationGroup* self, int currentLoop ```
void q_animationgroup_current_loop_changed(void* self, int currentLoop) {
    QAbstractAnimation_CurrentLoopChanged((QAbstractAnimation*)self, currentLoop);
}

/// Inherited from QAbstractAnimation
///
/// ``` QAnimationGroup* self, void (*slot)(QAbstractAnimation*, int) ```
void q_animationgroup_on_current_loop_changed(void* self, void (*slot)(void*, int)) {
    QAbstractAnimation_Connect_CurrentLoopChanged((QAbstractAnimation*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#directionChanged)
///
/// ``` QAnimationGroup* self, enum QAbstractAnimation__Direction param1 ```
void q_animationgroup_direction_changed(void* self, int64_t param1) {
    QAbstractAnimation_DirectionChanged((QAbstractAnimation*)self, param1);
}

/// Inherited from QAbstractAnimation
///
/// ``` QAnimationGroup* self, void (*slot)(QAbstractAnimation*, enum QAbstractAnimation__Direction) ```
void q_animationgroup_on_direction_changed(void* self, void (*slot)(void*, int64_t)) {
    QAbstractAnimation_Connect_DirectionChanged((QAbstractAnimation*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#start)
///
/// ``` QAnimationGroup* self ```
void q_animationgroup_start(void* self) {
    QAbstractAnimation_Start((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#pause)
///
/// ``` QAnimationGroup* self ```
void q_animationgroup_pause(void* self) {
    QAbstractAnimation_Pause((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#resume)
///
/// ``` QAnimationGroup* self ```
void q_animationgroup_resume(void* self) {
    QAbstractAnimation_Resume((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setPaused)
///
/// ``` QAnimationGroup* self, bool paused ```
void q_animationgroup_set_paused(void* self, bool paused) {
    QAbstractAnimation_SetPaused((QAbstractAnimation*)self, paused);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#stop)
///
/// ``` QAnimationGroup* self ```
void q_animationgroup_stop(void* self) {
    QAbstractAnimation_Stop((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setCurrentTime)
///
/// ``` QAnimationGroup* self, int msecs ```
void q_animationgroup_set_current_time(void* self, int msecs) {
    QAbstractAnimation_SetCurrentTime((QAbstractAnimation*)self, msecs);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#start)
///
/// ``` QAnimationGroup* self, enum QAbstractAnimation__DeletionPolicy policy ```
void q_animationgroup_start1(void* self, int64_t policy) {
    QAbstractAnimation_Start1((QAbstractAnimation*)self, policy);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAnimationGroup* self ```
const char* q_animationgroup_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAnimationGroup* self, const char* name ```
void q_animationgroup_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAnimationGroup* self ```
bool q_animationgroup_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAnimationGroup* self ```
bool q_animationgroup_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAnimationGroup* self ```
bool q_animationgroup_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAnimationGroup* self ```
bool q_animationgroup_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAnimationGroup* self, bool b ```
bool q_animationgroup_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAnimationGroup* self ```
QThread* q_animationgroup_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAnimationGroup* self, QThread* thread ```
void q_animationgroup_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAnimationGroup* self, int interval ```
int32_t q_animationgroup_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAnimationGroup* self, int id ```
void q_animationgroup_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAnimationGroup* self ```
libqt_list /* of QObject* */ q_animationgroup_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QAnimationGroup* self, QObject* parent ```
void q_animationgroup_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAnimationGroup* self, QObject* filterObj ```
void q_animationgroup_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAnimationGroup* self, QObject* obj ```
void q_animationgroup_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_animationgroup_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAnimationGroup* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_animationgroup_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_animationgroup_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_animationgroup_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAnimationGroup* self ```
void q_animationgroup_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAnimationGroup* self ```
void q_animationgroup_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAnimationGroup* self, const char* name, QVariant* value ```
bool q_animationgroup_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAnimationGroup* self, const char* name ```
QVariant* q_animationgroup_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAnimationGroup* self ```
const char** q_animationgroup_dynamic_property_names(void* self) {
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
/// ``` QAnimationGroup* self ```
QBindingStorage* q_animationgroup_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAnimationGroup* self ```
QBindingStorage* q_animationgroup_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAnimationGroup* self ```
void q_animationgroup_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QAnimationGroup* self, void (*slot)(QObject*) ```
void q_animationgroup_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QAnimationGroup* self ```
QObject* q_animationgroup_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAnimationGroup* self, const char* classname ```
bool q_animationgroup_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAnimationGroup* self ```
void q_animationgroup_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAnimationGroup* self, int interval, enum Qt__TimerType timerType ```
int32_t q_animationgroup_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_animationgroup_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAnimationGroup* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_animationgroup_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAnimationGroup* self, QObject* param1 ```
void q_animationgroup_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QAnimationGroup* self, void (*slot)(QObject*, QObject*) ```
void q_animationgroup_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#duration)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAnimationGroup* self ```
int32_t q_animationgroup_duration(void* self) {
    return QAnimationGroup_Duration((QAnimationGroup*)self);
}

/// Inherited from QAbstractAnimation
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAnimationGroup* self ```
int32_t q_animationgroup_qbase_duration(void* self) {
    return QAnimationGroup_QBaseDuration((QAnimationGroup*)self);
}

/// Inherited from QAbstractAnimation
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAnimationGroup* self, int32_t (*slot)() ```
void q_animationgroup_on_duration(void* self, int32_t (*slot)()) {
    QAnimationGroup_OnDuration((QAnimationGroup*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#updateCurrentTime)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAnimationGroup* self, int currentTime ```
void q_animationgroup_update_current_time(void* self, int currentTime) {
    QAnimationGroup_UpdateCurrentTime((QAnimationGroup*)self, currentTime);
}

/// Inherited from QAbstractAnimation
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAnimationGroup* self, int currentTime ```
void q_animationgroup_qbase_update_current_time(void* self, int currentTime) {
    QAnimationGroup_QBaseUpdateCurrentTime((QAnimationGroup*)self, currentTime);
}

/// Inherited from QAbstractAnimation
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAnimationGroup* self, void (*slot)(QAnimationGroup*, int) ```
void q_animationgroup_on_update_current_time(void* self, void (*slot)(void*, int)) {
    QAnimationGroup_OnUpdateCurrentTime((QAnimationGroup*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#updateState)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAnimationGroup* self, enum QAbstractAnimation__State newState, enum QAbstractAnimation__State oldState ```
void q_animationgroup_update_state(void* self, int64_t newState, int64_t oldState) {
    QAnimationGroup_UpdateState((QAnimationGroup*)self, newState, oldState);
}

/// Inherited from QAbstractAnimation
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAnimationGroup* self, enum QAbstractAnimation__State newState, enum QAbstractAnimation__State oldState ```
void q_animationgroup_qbase_update_state(void* self, int64_t newState, int64_t oldState) {
    QAnimationGroup_QBaseUpdateState((QAnimationGroup*)self, newState, oldState);
}

/// Inherited from QAbstractAnimation
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAnimationGroup* self, void (*slot)(QAnimationGroup*, enum QAbstractAnimation__State, enum QAbstractAnimation__State) ```
void q_animationgroup_on_update_state(void* self, void (*slot)(void*, int64_t, int64_t)) {
    QAnimationGroup_OnUpdateState((QAnimationGroup*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#updateDirection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAnimationGroup* self, enum QAbstractAnimation__Direction direction ```
void q_animationgroup_update_direction(void* self, int64_t direction) {
    QAnimationGroup_UpdateDirection((QAnimationGroup*)self, direction);
}

/// Inherited from QAbstractAnimation
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAnimationGroup* self, enum QAbstractAnimation__Direction direction ```
void q_animationgroup_qbase_update_direction(void* self, int64_t direction) {
    QAnimationGroup_QBaseUpdateDirection((QAnimationGroup*)self, direction);
}

/// Inherited from QAbstractAnimation
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAnimationGroup* self, void (*slot)(QAnimationGroup*, enum QAbstractAnimation__Direction) ```
void q_animationgroup_on_update_direction(void* self, void (*slot)(void*, int64_t)) {
    QAnimationGroup_OnUpdateDirection((QAnimationGroup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAnimationGroup* self, QObject* watched, QEvent* event ```
bool q_animationgroup_event_filter(void* self, void* watched, void* event) {
    return QAnimationGroup_EventFilter((QAnimationGroup*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAnimationGroup* self, QObject* watched, QEvent* event ```
bool q_animationgroup_qbase_event_filter(void* self, void* watched, void* event) {
    return QAnimationGroup_QBaseEventFilter((QAnimationGroup*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAnimationGroup* self, bool (*slot)(QAnimationGroup*, QObject*, QEvent*) ```
void q_animationgroup_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QAnimationGroup_OnEventFilter((QAnimationGroup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAnimationGroup* self, QTimerEvent* event ```
void q_animationgroup_timer_event(void* self, void* event) {
    QAnimationGroup_TimerEvent((QAnimationGroup*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAnimationGroup* self, QTimerEvent* event ```
void q_animationgroup_qbase_timer_event(void* self, void* event) {
    QAnimationGroup_QBaseTimerEvent((QAnimationGroup*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAnimationGroup* self, void (*slot)(QAnimationGroup*, QTimerEvent*) ```
void q_animationgroup_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QAnimationGroup_OnTimerEvent((QAnimationGroup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAnimationGroup* self, QChildEvent* event ```
void q_animationgroup_child_event(void* self, void* event) {
    QAnimationGroup_ChildEvent((QAnimationGroup*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAnimationGroup* self, QChildEvent* event ```
void q_animationgroup_qbase_child_event(void* self, void* event) {
    QAnimationGroup_QBaseChildEvent((QAnimationGroup*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAnimationGroup* self, void (*slot)(QAnimationGroup*, QChildEvent*) ```
void q_animationgroup_on_child_event(void* self, void (*slot)(void*, void*)) {
    QAnimationGroup_OnChildEvent((QAnimationGroup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAnimationGroup* self, QEvent* event ```
void q_animationgroup_custom_event(void* self, void* event) {
    QAnimationGroup_CustomEvent((QAnimationGroup*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAnimationGroup* self, QEvent* event ```
void q_animationgroup_qbase_custom_event(void* self, void* event) {
    QAnimationGroup_QBaseCustomEvent((QAnimationGroup*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAnimationGroup* self, void (*slot)(QAnimationGroup*, QEvent*) ```
void q_animationgroup_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QAnimationGroup_OnCustomEvent((QAnimationGroup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAnimationGroup* self, QMetaMethod* signal ```
void q_animationgroup_connect_notify(void* self, void* signal) {
    QAnimationGroup_ConnectNotify((QAnimationGroup*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAnimationGroup* self, QMetaMethod* signal ```
void q_animationgroup_qbase_connect_notify(void* self, void* signal) {
    QAnimationGroup_QBaseConnectNotify((QAnimationGroup*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAnimationGroup* self, void (*slot)(QAnimationGroup*, QMetaMethod*) ```
void q_animationgroup_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QAnimationGroup_OnConnectNotify((QAnimationGroup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAnimationGroup* self, QMetaMethod* signal ```
void q_animationgroup_disconnect_notify(void* self, void* signal) {
    QAnimationGroup_DisconnectNotify((QAnimationGroup*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAnimationGroup* self, QMetaMethod* signal ```
void q_animationgroup_qbase_disconnect_notify(void* self, void* signal) {
    QAnimationGroup_QBaseDisconnectNotify((QAnimationGroup*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAnimationGroup* self, void (*slot)(QAnimationGroup*, QMetaMethod*) ```
void q_animationgroup_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QAnimationGroup_OnDisconnectNotify((QAnimationGroup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAnimationGroup* self ```
QObject* q_animationgroup_sender(void* self) {
    return QAnimationGroup_Sender((QAnimationGroup*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAnimationGroup* self ```
QObject* q_animationgroup_qbase_sender(void* self) {
    return QAnimationGroup_QBaseSender((QAnimationGroup*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAnimationGroup* self, QObject* (*slot)() ```
void q_animationgroup_on_sender(void* self, QObject* (*slot)()) {
    QAnimationGroup_OnSender((QAnimationGroup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAnimationGroup* self ```
int32_t q_animationgroup_sender_signal_index(void* self) {
    return QAnimationGroup_SenderSignalIndex((QAnimationGroup*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAnimationGroup* self ```
int32_t q_animationgroup_qbase_sender_signal_index(void* self) {
    return QAnimationGroup_QBaseSenderSignalIndex((QAnimationGroup*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAnimationGroup* self, int32_t (*slot)() ```
void q_animationgroup_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QAnimationGroup_OnSenderSignalIndex((QAnimationGroup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAnimationGroup* self, const char* signal ```
int32_t q_animationgroup_receivers(void* self, const char* signal) {
    return QAnimationGroup_Receivers((QAnimationGroup*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAnimationGroup* self, const char* signal ```
int32_t q_animationgroup_qbase_receivers(void* self, const char* signal) {
    return QAnimationGroup_QBaseReceivers((QAnimationGroup*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAnimationGroup* self, int32_t (*slot)(QAnimationGroup*, const char*) ```
void q_animationgroup_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QAnimationGroup_OnReceivers((QAnimationGroup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAnimationGroup* self, QMetaMethod* signal ```
bool q_animationgroup_is_signal_connected(void* self, void* signal) {
    return QAnimationGroup_IsSignalConnected((QAnimationGroup*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAnimationGroup* self, QMetaMethod* signal ```
bool q_animationgroup_qbase_is_signal_connected(void* self, void* signal) {
    return QAnimationGroup_QBaseIsSignalConnected((QAnimationGroup*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAnimationGroup* self, bool (*slot)(QAnimationGroup*, QMetaMethod*) ```
void q_animationgroup_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QAnimationGroup_OnIsSignalConnected((QAnimationGroup*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QAnimationGroup* self ```
void q_animationgroup_delete(void* self) {
    QAnimationGroup_Delete((QAnimationGroup*)(self));
}