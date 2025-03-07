#include "libqabstractanimation.hpp"
#include "libqanimationgroup.hpp"
#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqeasingcurve.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqvariantanimation.hpp"
#include "libqcoreevent.hpp"
#include "libqpropertyanimation.hpp"
#include "libqpropertyanimation.h"

/// https://doc.qt.io/qt-6/qpropertyanimation.html

/// q_propertyanimation_new constructs a new QPropertyAnimation object.
///
///
QPropertyAnimation* q_propertyanimation_new() {
    return QPropertyAnimation_new();
}

/// q_propertyanimation_new2 constructs a new QPropertyAnimation object.
///
/// ``` QObject* target, const char* propertyName ```
QPropertyAnimation* q_propertyanimation_new2(void* target, const char* propertyName) {
    return QPropertyAnimation_new2((QObject*)target, qstring(propertyName));
}

/// q_propertyanimation_new3 constructs a new QPropertyAnimation object.
///
/// ``` QObject* parent ```
QPropertyAnimation* q_propertyanimation_new3(void* parent) {
    return QPropertyAnimation_new3((QObject*)parent);
}

/// q_propertyanimation_new4 constructs a new QPropertyAnimation object.
///
/// ``` QObject* target, const char* propertyName, QObject* parent ```
QPropertyAnimation* q_propertyanimation_new4(void* target, const char* propertyName, void* parent) {
    return QPropertyAnimation_new4((QObject*)target, qstring(propertyName), (QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QPropertyAnimation* self ```
QMetaObject* q_propertyanimation_meta_object(void* self) {
    return QPropertyAnimation_MetaObject((QPropertyAnimation*)self);
}

/// ``` QPropertyAnimation* self, const char* param1 ```
void* q_propertyanimation_metacast(void* self, const char* param1) {
    return QPropertyAnimation_Metacast((QPropertyAnimation*)self, param1);
}

/// ``` QPropertyAnimation* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_propertyanimation_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QPropertyAnimation_Metacall((QPropertyAnimation*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QPropertyAnimation* self, int32_t (*slot)(QPropertyAnimation*, enum QMetaObject__Call, int, void*) ```
void q_propertyanimation_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QPropertyAnimation_OnMetacall((QPropertyAnimation*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPropertyAnimation* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_propertyanimation_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QPropertyAnimation_QBaseMetacall((QPropertyAnimation*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_propertyanimation_tr(const char* s) {
    libqt_string _str = QPropertyAnimation_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpropertyanimation.html#targetObject)
///
/// ``` QPropertyAnimation* self ```
QObject* q_propertyanimation_target_object(void* self) {
    return QPropertyAnimation_TargetObject((QPropertyAnimation*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpropertyanimation.html#setTargetObject)
///
/// ``` QPropertyAnimation* self, QObject* target ```
void q_propertyanimation_set_target_object(void* self, void* target) {
    QPropertyAnimation_SetTargetObject((QPropertyAnimation*)self, (QObject*)target);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpropertyanimation.html#propertyName)
///
/// ``` QPropertyAnimation* self ```
char* q_propertyanimation_property_name(void* self) {
    libqt_string _str = QPropertyAnimation_PropertyName((QPropertyAnimation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpropertyanimation.html#setPropertyName)
///
/// ``` QPropertyAnimation* self, const char* propertyName ```
void q_propertyanimation_set_property_name(void* self, const char* propertyName) {
    QPropertyAnimation_SetPropertyName((QPropertyAnimation*)self, qstring(propertyName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpropertyanimation.html#event)
///
/// ``` QPropertyAnimation* self, QEvent* event ```
bool q_propertyanimation_event(void* self, void* event) {
    return QPropertyAnimation_Event((QPropertyAnimation*)self, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QPropertyAnimation* self, bool (*slot)(QPropertyAnimation*, QEvent*) ```
void q_propertyanimation_on_event(void* self, bool (*slot)(void*, void*)) {
    QPropertyAnimation_OnEvent((QPropertyAnimation*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPropertyAnimation* self, QEvent* event ```
bool q_propertyanimation_qbase_event(void* self, void* event) {
    return QPropertyAnimation_QBaseEvent((QPropertyAnimation*)self, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpropertyanimation.html#updateCurrentValue)
///
/// ``` QPropertyAnimation* self, QVariant* value ```
void q_propertyanimation_update_current_value(void* self, void* value) {
    QPropertyAnimation_UpdateCurrentValue((QPropertyAnimation*)self, (QVariant*)value);
}

/// Allows for overriding the related default method
///
/// ``` QPropertyAnimation* self, void (*slot)(QPropertyAnimation*, QVariant*) ```
void q_propertyanimation_on_update_current_value(void* self, void (*slot)(void*, void*)) {
    QPropertyAnimation_OnUpdateCurrentValue((QPropertyAnimation*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPropertyAnimation* self, QVariant* value ```
void q_propertyanimation_qbase_update_current_value(void* self, void* value) {
    QPropertyAnimation_QBaseUpdateCurrentValue((QPropertyAnimation*)self, (QVariant*)value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpropertyanimation.html#updateState)
///
/// ``` QPropertyAnimation* self, enum QAbstractAnimation__State newState, enum QAbstractAnimation__State oldState ```
void q_propertyanimation_update_state(void* self, int64_t newState, int64_t oldState) {
    QPropertyAnimation_UpdateState((QPropertyAnimation*)self, newState, oldState);
}

/// Allows for overriding the related default method
///
/// ``` QPropertyAnimation* self, void (*slot)(QPropertyAnimation*, enum QAbstractAnimation__State, enum QAbstractAnimation__State) ```
void q_propertyanimation_on_update_state(void* self, void (*slot)(void*, int64_t, int64_t)) {
    QPropertyAnimation_OnUpdateState((QPropertyAnimation*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPropertyAnimation* self, enum QAbstractAnimation__State newState, enum QAbstractAnimation__State oldState ```
void q_propertyanimation_qbase_update_state(void* self, int64_t newState, int64_t oldState) {
    QPropertyAnimation_QBaseUpdateState((QPropertyAnimation*)self, newState, oldState);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_propertyanimation_tr2(const char* s, const char* c) {
    libqt_string _str = QPropertyAnimation_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_propertyanimation_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QPropertyAnimation_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QVariantAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#startValue)
///
/// ``` QPropertyAnimation* self ```
QVariant* q_propertyanimation_start_value(void* self) {
    return QVariantAnimation_StartValue((QVariantAnimation*)self);
}

/// Inherited from QVariantAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#setStartValue)
///
/// ``` QPropertyAnimation* self, QVariant* value ```
void q_propertyanimation_set_start_value(void* self, void* value) {
    QVariantAnimation_SetStartValue((QVariantAnimation*)self, (QVariant*)value);
}

/// Inherited from QVariantAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#endValue)
///
/// ``` QPropertyAnimation* self ```
QVariant* q_propertyanimation_end_value(void* self) {
    return QVariantAnimation_EndValue((QVariantAnimation*)self);
}

/// Inherited from QVariantAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#setEndValue)
///
/// ``` QPropertyAnimation* self, QVariant* value ```
void q_propertyanimation_set_end_value(void* self, void* value) {
    QVariantAnimation_SetEndValue((QVariantAnimation*)self, (QVariant*)value);
}

/// Inherited from QVariantAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#keyValueAt)
///
/// ``` QPropertyAnimation* self, double step ```
QVariant* q_propertyanimation_key_value_at(void* self, double step) {
    return QVariantAnimation_KeyValueAt((QVariantAnimation*)self, step);
}

/// Inherited from QVariantAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#setKeyValueAt)
///
/// ``` QPropertyAnimation* self, double step, QVariant* value ```
void q_propertyanimation_set_key_value_at(void* self, double step, void* value) {
    QVariantAnimation_SetKeyValueAt((QVariantAnimation*)self, step, (QVariant*)value);
}

/// Inherited from QVariantAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#keyValues)
///
/// ``` QPropertyAnimation* self ```
libqt_list /* of libqt_pair  tuple of double and QVariant*  */ q_propertyanimation_key_values(void* self) {
    libqt_list _arr = QVariantAnimation_KeyValues((QVariantAnimation*)self);
    return _arr;
}

/// Inherited from QVariantAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#setKeyValues)
///
/// ``` QPropertyAnimation* self, libqt_list /* of libqt_pair  tuple of double and QVariant*  */ values ```
void q_propertyanimation_set_key_values(void* self, libqt_list /* of libqt_pair  tuple of double and QVariant*  */ values) {
    QVariantAnimation_SetKeyValues((QVariantAnimation*)self, values);
}

/// Inherited from QVariantAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#currentValue)
///
/// ``` QPropertyAnimation* self ```
QVariant* q_propertyanimation_current_value(void* self) {
    return QVariantAnimation_CurrentValue((QVariantAnimation*)self);
}

/// Inherited from QVariantAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#setDuration)
///
/// ``` QPropertyAnimation* self, int msecs ```
void q_propertyanimation_set_duration(void* self, int msecs) {
    QVariantAnimation_SetDuration((QVariantAnimation*)self, msecs);
}

/// Inherited from QVariantAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#easingCurve)
///
/// ``` QPropertyAnimation* self ```
QEasingCurve* q_propertyanimation_easing_curve(void* self) {
    return QVariantAnimation_EasingCurve((QVariantAnimation*)self);
}

/// Inherited from QVariantAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#setEasingCurve)
///
/// ``` QPropertyAnimation* self, QEasingCurve* easing ```
void q_propertyanimation_set_easing_curve(void* self, void* easing) {
    QVariantAnimation_SetEasingCurve((QVariantAnimation*)self, (QEasingCurve*)easing);
}

/// Inherited from QVariantAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#valueChanged)
///
/// ``` QPropertyAnimation* self, QVariant* value ```
void q_propertyanimation_value_changed(void* self, void* value) {
    QVariantAnimation_ValueChanged((QVariantAnimation*)self, (QVariant*)value);
}

/// Inherited from QVariantAnimation
///
/// ``` QPropertyAnimation* self, void (*slot)(QVariantAnimation*, QVariant*) ```
void q_propertyanimation_on_value_changed(void* self, void (*slot)(void*, void*)) {
    QVariantAnimation_Connect_ValueChanged((QVariantAnimation*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#state)
///
/// ``` QPropertyAnimation* self ```
int64_t q_propertyanimation_state(void* self) {
    return QAbstractAnimation_State((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#group)
///
/// ``` QPropertyAnimation* self ```
QAnimationGroup* q_propertyanimation_group(void* self) {
    return QAbstractAnimation_Group((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#direction)
///
/// ``` QPropertyAnimation* self ```
int64_t q_propertyanimation_direction(void* self) {
    return QAbstractAnimation_Direction((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setDirection)
///
/// ``` QPropertyAnimation* self, enum QAbstractAnimation__Direction direction ```
void q_propertyanimation_set_direction(void* self, int64_t direction) {
    QAbstractAnimation_SetDirection((QAbstractAnimation*)self, direction);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentTime)
///
/// ``` QPropertyAnimation* self ```
int32_t q_propertyanimation_current_time(void* self) {
    return QAbstractAnimation_CurrentTime((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopTime)
///
/// ``` QPropertyAnimation* self ```
int32_t q_propertyanimation_current_loop_time(void* self) {
    return QAbstractAnimation_CurrentLoopTime((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#loopCount)
///
/// ``` QPropertyAnimation* self ```
int32_t q_propertyanimation_loop_count(void* self) {
    return QAbstractAnimation_LoopCount((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setLoopCount)
///
/// ``` QPropertyAnimation* self, int loopCount ```
void q_propertyanimation_set_loop_count(void* self, int loopCount) {
    QAbstractAnimation_SetLoopCount((QAbstractAnimation*)self, loopCount);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoop)
///
/// ``` QPropertyAnimation* self ```
int32_t q_propertyanimation_current_loop(void* self) {
    return QAbstractAnimation_CurrentLoop((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#totalDuration)
///
/// ``` QPropertyAnimation* self ```
int32_t q_propertyanimation_total_duration(void* self) {
    return QAbstractAnimation_TotalDuration((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#finished)
///
/// ``` QPropertyAnimation* self ```
void q_propertyanimation_finished(void* self) {
    QAbstractAnimation_Finished((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// ``` QPropertyAnimation* self, void (*slot)(QAbstractAnimation*) ```
void q_propertyanimation_on_finished(void* self, void (*slot)(void*)) {
    QAbstractAnimation_Connect_Finished((QAbstractAnimation*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#stateChanged)
///
/// ``` QPropertyAnimation* self, enum QAbstractAnimation__State newState, enum QAbstractAnimation__State oldState ```
void q_propertyanimation_state_changed(void* self, int64_t newState, int64_t oldState) {
    QAbstractAnimation_StateChanged((QAbstractAnimation*)self, newState, oldState);
}

/// Inherited from QAbstractAnimation
///
/// ``` QPropertyAnimation* self, void (*slot)(QAbstractAnimation*, enum QAbstractAnimation__State, enum QAbstractAnimation__State) ```
void q_propertyanimation_on_state_changed(void* self, void (*slot)(void*, int64_t, int64_t)) {
    QAbstractAnimation_Connect_StateChanged((QAbstractAnimation*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopChanged)
///
/// ``` QPropertyAnimation* self, int currentLoop ```
void q_propertyanimation_current_loop_changed(void* self, int currentLoop) {
    QAbstractAnimation_CurrentLoopChanged((QAbstractAnimation*)self, currentLoop);
}

/// Inherited from QAbstractAnimation
///
/// ``` QPropertyAnimation* self, void (*slot)(QAbstractAnimation*, int) ```
void q_propertyanimation_on_current_loop_changed(void* self, void (*slot)(void*, int)) {
    QAbstractAnimation_Connect_CurrentLoopChanged((QAbstractAnimation*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#directionChanged)
///
/// ``` QPropertyAnimation* self, enum QAbstractAnimation__Direction param1 ```
void q_propertyanimation_direction_changed(void* self, int64_t param1) {
    QAbstractAnimation_DirectionChanged((QAbstractAnimation*)self, param1);
}

/// Inherited from QAbstractAnimation
///
/// ``` QPropertyAnimation* self, void (*slot)(QAbstractAnimation*, enum QAbstractAnimation__Direction) ```
void q_propertyanimation_on_direction_changed(void* self, void (*slot)(void*, int64_t)) {
    QAbstractAnimation_Connect_DirectionChanged((QAbstractAnimation*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#start)
///
/// ``` QPropertyAnimation* self ```
void q_propertyanimation_start(void* self) {
    QAbstractAnimation_Start((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#pause)
///
/// ``` QPropertyAnimation* self ```
void q_propertyanimation_pause(void* self) {
    QAbstractAnimation_Pause((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#resume)
///
/// ``` QPropertyAnimation* self ```
void q_propertyanimation_resume(void* self) {
    QAbstractAnimation_Resume((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setPaused)
///
/// ``` QPropertyAnimation* self, bool paused ```
void q_propertyanimation_set_paused(void* self, bool paused) {
    QAbstractAnimation_SetPaused((QAbstractAnimation*)self, paused);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#stop)
///
/// ``` QPropertyAnimation* self ```
void q_propertyanimation_stop(void* self) {
    QAbstractAnimation_Stop((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setCurrentTime)
///
/// ``` QPropertyAnimation* self, int msecs ```
void q_propertyanimation_set_current_time(void* self, int msecs) {
    QAbstractAnimation_SetCurrentTime((QAbstractAnimation*)self, msecs);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#start)
///
/// ``` QPropertyAnimation* self, enum QAbstractAnimation__DeletionPolicy policy ```
void q_propertyanimation_start1(void* self, int64_t policy) {
    QAbstractAnimation_Start1((QAbstractAnimation*)self, policy);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QPropertyAnimation* self ```
const char* q_propertyanimation_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QPropertyAnimation* self, const char* name ```
void q_propertyanimation_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QPropertyAnimation* self ```
bool q_propertyanimation_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QPropertyAnimation* self ```
bool q_propertyanimation_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QPropertyAnimation* self ```
bool q_propertyanimation_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QPropertyAnimation* self ```
bool q_propertyanimation_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QPropertyAnimation* self, bool b ```
bool q_propertyanimation_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QPropertyAnimation* self ```
QThread* q_propertyanimation_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QPropertyAnimation* self, QThread* thread ```
void q_propertyanimation_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPropertyAnimation* self, int interval ```
int32_t q_propertyanimation_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QPropertyAnimation* self, int id ```
void q_propertyanimation_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QPropertyAnimation* self ```
libqt_list /* of QObject* */ q_propertyanimation_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QPropertyAnimation* self, QObject* parent ```
void q_propertyanimation_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QPropertyAnimation* self, QObject* filterObj ```
void q_propertyanimation_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QPropertyAnimation* self, QObject* obj ```
void q_propertyanimation_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_propertyanimation_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPropertyAnimation* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_propertyanimation_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_propertyanimation_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_propertyanimation_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QPropertyAnimation* self ```
void q_propertyanimation_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QPropertyAnimation* self ```
void q_propertyanimation_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QPropertyAnimation* self, const char* name, QVariant* value ```
bool q_propertyanimation_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QPropertyAnimation* self, const char* name ```
QVariant* q_propertyanimation_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QPropertyAnimation* self ```
const char** q_propertyanimation_dynamic_property_names(void* self) {
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
/// ``` QPropertyAnimation* self ```
QBindingStorage* q_propertyanimation_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPropertyAnimation* self ```
QBindingStorage* q_propertyanimation_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPropertyAnimation* self ```
void q_propertyanimation_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QPropertyAnimation* self, void (*slot)(QObject*) ```
void q_propertyanimation_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QPropertyAnimation* self ```
QObject* q_propertyanimation_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QPropertyAnimation* self, const char* classname ```
bool q_propertyanimation_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QPropertyAnimation* self ```
void q_propertyanimation_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPropertyAnimation* self, int interval, enum Qt__TimerType timerType ```
int32_t q_propertyanimation_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_propertyanimation_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPropertyAnimation* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_propertyanimation_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPropertyAnimation* self, QObject* param1 ```
void q_propertyanimation_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QPropertyAnimation* self, void (*slot)(QObject*, QObject*) ```
void q_propertyanimation_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QVariantAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#duration)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPropertyAnimation* self ```
int32_t q_propertyanimation_duration(void* self) {
    return QPropertyAnimation_Duration((QPropertyAnimation*)self);
}

/// Inherited from QVariantAnimation
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPropertyAnimation* self ```
int32_t q_propertyanimation_qbase_duration(void* self) {
    return QPropertyAnimation_QBaseDuration((QPropertyAnimation*)self);
}

/// Inherited from QVariantAnimation
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPropertyAnimation* self, int32_t (*slot)() ```
void q_propertyanimation_on_duration(void* self, int32_t (*slot)()) {
    QPropertyAnimation_OnDuration((QPropertyAnimation*)self, (intptr_t)slot);
}

/// Inherited from QVariantAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#updateCurrentTime)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPropertyAnimation* self, int param1 ```
void q_propertyanimation_update_current_time(void* self, int param1) {
    QPropertyAnimation_UpdateCurrentTime((QPropertyAnimation*)self, param1);
}

/// Inherited from QVariantAnimation
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPropertyAnimation* self, int param1 ```
void q_propertyanimation_qbase_update_current_time(void* self, int param1) {
    QPropertyAnimation_QBaseUpdateCurrentTime((QPropertyAnimation*)self, param1);
}

/// Inherited from QVariantAnimation
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPropertyAnimation* self, void (*slot)(QPropertyAnimation*, int) ```
void q_propertyanimation_on_update_current_time(void* self, void (*slot)(void*, int)) {
    QPropertyAnimation_OnUpdateCurrentTime((QPropertyAnimation*)self, (intptr_t)slot);
}

/// Inherited from QVariantAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#interpolated)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPropertyAnimation* self, QVariant* from, QVariant* to, double progress ```
QVariant* q_propertyanimation_interpolated(void* self, void* from, void* to, double progress) {
    return QPropertyAnimation_Interpolated((QPropertyAnimation*)self, (QVariant*)from, (QVariant*)to, progress);
}

/// Inherited from QVariantAnimation
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPropertyAnimation* self, QVariant* from, QVariant* to, double progress ```
QVariant* q_propertyanimation_qbase_interpolated(void* self, void* from, void* to, double progress) {
    return QPropertyAnimation_QBaseInterpolated((QPropertyAnimation*)self, (QVariant*)from, (QVariant*)to, progress);
}

/// Inherited from QVariantAnimation
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPropertyAnimation* self, QVariant* (*slot)(QPropertyAnimation*, QVariant*, QVariant*, double) ```
void q_propertyanimation_on_interpolated(void* self, QVariant* (*slot)(void*, void*, void*, double)) {
    QPropertyAnimation_OnInterpolated((QPropertyAnimation*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#updateDirection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPropertyAnimation* self, enum QAbstractAnimation__Direction direction ```
void q_propertyanimation_update_direction(void* self, int64_t direction) {
    QPropertyAnimation_UpdateDirection((QPropertyAnimation*)self, direction);
}

/// Inherited from QAbstractAnimation
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPropertyAnimation* self, enum QAbstractAnimation__Direction direction ```
void q_propertyanimation_qbase_update_direction(void* self, int64_t direction) {
    QPropertyAnimation_QBaseUpdateDirection((QPropertyAnimation*)self, direction);
}

/// Inherited from QAbstractAnimation
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPropertyAnimation* self, void (*slot)(QPropertyAnimation*, enum QAbstractAnimation__Direction) ```
void q_propertyanimation_on_update_direction(void* self, void (*slot)(void*, int64_t)) {
    QPropertyAnimation_OnUpdateDirection((QPropertyAnimation*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPropertyAnimation* self, QObject* watched, QEvent* event ```
bool q_propertyanimation_event_filter(void* self, void* watched, void* event) {
    return QPropertyAnimation_EventFilter((QPropertyAnimation*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPropertyAnimation* self, QObject* watched, QEvent* event ```
bool q_propertyanimation_qbase_event_filter(void* self, void* watched, void* event) {
    return QPropertyAnimation_QBaseEventFilter((QPropertyAnimation*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPropertyAnimation* self, bool (*slot)(QPropertyAnimation*, QObject*, QEvent*) ```
void q_propertyanimation_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QPropertyAnimation_OnEventFilter((QPropertyAnimation*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPropertyAnimation* self, QTimerEvent* event ```
void q_propertyanimation_timer_event(void* self, void* event) {
    QPropertyAnimation_TimerEvent((QPropertyAnimation*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPropertyAnimation* self, QTimerEvent* event ```
void q_propertyanimation_qbase_timer_event(void* self, void* event) {
    QPropertyAnimation_QBaseTimerEvent((QPropertyAnimation*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPropertyAnimation* self, void (*slot)(QPropertyAnimation*, QTimerEvent*) ```
void q_propertyanimation_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QPropertyAnimation_OnTimerEvent((QPropertyAnimation*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPropertyAnimation* self, QChildEvent* event ```
void q_propertyanimation_child_event(void* self, void* event) {
    QPropertyAnimation_ChildEvent((QPropertyAnimation*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPropertyAnimation* self, QChildEvent* event ```
void q_propertyanimation_qbase_child_event(void* self, void* event) {
    QPropertyAnimation_QBaseChildEvent((QPropertyAnimation*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPropertyAnimation* self, void (*slot)(QPropertyAnimation*, QChildEvent*) ```
void q_propertyanimation_on_child_event(void* self, void (*slot)(void*, void*)) {
    QPropertyAnimation_OnChildEvent((QPropertyAnimation*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPropertyAnimation* self, QEvent* event ```
void q_propertyanimation_custom_event(void* self, void* event) {
    QPropertyAnimation_CustomEvent((QPropertyAnimation*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPropertyAnimation* self, QEvent* event ```
void q_propertyanimation_qbase_custom_event(void* self, void* event) {
    QPropertyAnimation_QBaseCustomEvent((QPropertyAnimation*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPropertyAnimation* self, void (*slot)(QPropertyAnimation*, QEvent*) ```
void q_propertyanimation_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QPropertyAnimation_OnCustomEvent((QPropertyAnimation*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPropertyAnimation* self, QMetaMethod* signal ```
void q_propertyanimation_connect_notify(void* self, void* signal) {
    QPropertyAnimation_ConnectNotify((QPropertyAnimation*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPropertyAnimation* self, QMetaMethod* signal ```
void q_propertyanimation_qbase_connect_notify(void* self, void* signal) {
    QPropertyAnimation_QBaseConnectNotify((QPropertyAnimation*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPropertyAnimation* self, void (*slot)(QPropertyAnimation*, QMetaMethod*) ```
void q_propertyanimation_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QPropertyAnimation_OnConnectNotify((QPropertyAnimation*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPropertyAnimation* self, QMetaMethod* signal ```
void q_propertyanimation_disconnect_notify(void* self, void* signal) {
    QPropertyAnimation_DisconnectNotify((QPropertyAnimation*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPropertyAnimation* self, QMetaMethod* signal ```
void q_propertyanimation_qbase_disconnect_notify(void* self, void* signal) {
    QPropertyAnimation_QBaseDisconnectNotify((QPropertyAnimation*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPropertyAnimation* self, void (*slot)(QPropertyAnimation*, QMetaMethod*) ```
void q_propertyanimation_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QPropertyAnimation_OnDisconnectNotify((QPropertyAnimation*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPropertyAnimation* self ```
QObject* q_propertyanimation_sender(void* self) {
    return QPropertyAnimation_Sender((QPropertyAnimation*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPropertyAnimation* self ```
QObject* q_propertyanimation_qbase_sender(void* self) {
    return QPropertyAnimation_QBaseSender((QPropertyAnimation*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPropertyAnimation* self, QObject* (*slot)() ```
void q_propertyanimation_on_sender(void* self, QObject* (*slot)()) {
    QPropertyAnimation_OnSender((QPropertyAnimation*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPropertyAnimation* self ```
int32_t q_propertyanimation_sender_signal_index(void* self) {
    return QPropertyAnimation_SenderSignalIndex((QPropertyAnimation*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPropertyAnimation* self ```
int32_t q_propertyanimation_qbase_sender_signal_index(void* self) {
    return QPropertyAnimation_QBaseSenderSignalIndex((QPropertyAnimation*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPropertyAnimation* self, int32_t (*slot)() ```
void q_propertyanimation_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QPropertyAnimation_OnSenderSignalIndex((QPropertyAnimation*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPropertyAnimation* self, const char* signal ```
int32_t q_propertyanimation_receivers(void* self, const char* signal) {
    return QPropertyAnimation_Receivers((QPropertyAnimation*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPropertyAnimation* self, const char* signal ```
int32_t q_propertyanimation_qbase_receivers(void* self, const char* signal) {
    return QPropertyAnimation_QBaseReceivers((QPropertyAnimation*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPropertyAnimation* self, int32_t (*slot)(QPropertyAnimation*, const char*) ```
void q_propertyanimation_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QPropertyAnimation_OnReceivers((QPropertyAnimation*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPropertyAnimation* self, QMetaMethod* signal ```
bool q_propertyanimation_is_signal_connected(void* self, void* signal) {
    return QPropertyAnimation_IsSignalConnected((QPropertyAnimation*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPropertyAnimation* self, QMetaMethod* signal ```
bool q_propertyanimation_qbase_is_signal_connected(void* self, void* signal) {
    return QPropertyAnimation_QBaseIsSignalConnected((QPropertyAnimation*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPropertyAnimation* self, bool (*slot)(QPropertyAnimation*, QMetaMethod*) ```
void q_propertyanimation_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QPropertyAnimation_OnIsSignalConnected((QPropertyAnimation*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QPropertyAnimation* self ```
void q_propertyanimation_delete(void* self) {
    QPropertyAnimation_Delete((QPropertyAnimation*)(self));
}