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
#include "libqcoreevent.hpp"
#include "libqvariantanimation.hpp"
#include "libqvariantanimation.h"

/// https://doc.qt.io/qt-6/qvariantanimation.html

/// q_variantanimation_new constructs a new QVariantAnimation object.
///
///
QVariantAnimation* q_variantanimation_new() {
    return QVariantAnimation_new();
}

/// q_variantanimation_new2 constructs a new QVariantAnimation object.
///
/// ``` QObject* parent ```
QVariantAnimation* q_variantanimation_new2(void* parent) {
    return QVariantAnimation_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QVariantAnimation* self ```
QMetaObject* q_variantanimation_meta_object(void* self) {
    return QVariantAnimation_MetaObject((QVariantAnimation*)self);
}

/// ``` QVariantAnimation* self, const char* param1 ```
void* q_variantanimation_metacast(void* self, const char* param1) {
    return QVariantAnimation_Metacast((QVariantAnimation*)self, param1);
}

/// ``` QVariantAnimation* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_variantanimation_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QVariantAnimation_Metacall((QVariantAnimation*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QVariantAnimation* self, int32_t (*slot)(QVariantAnimation*, enum QMetaObject__Call, int, void*) ```
void q_variantanimation_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QVariantAnimation_OnMetacall((QVariantAnimation*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QVariantAnimation* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_variantanimation_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QVariantAnimation_QBaseMetacall((QVariantAnimation*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_variantanimation_tr(const char* s) {
    libqt_string _str = QVariantAnimation_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#startValue)
///
/// ``` QVariantAnimation* self ```
QVariant* q_variantanimation_start_value(void* self) {
    return QVariantAnimation_StartValue((QVariantAnimation*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#setStartValue)
///
/// ``` QVariantAnimation* self, QVariant* value ```
void q_variantanimation_set_start_value(void* self, void* value) {
    QVariantAnimation_SetStartValue((QVariantAnimation*)self, (QVariant*)value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#endValue)
///
/// ``` QVariantAnimation* self ```
QVariant* q_variantanimation_end_value(void* self) {
    return QVariantAnimation_EndValue((QVariantAnimation*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#setEndValue)
///
/// ``` QVariantAnimation* self, QVariant* value ```
void q_variantanimation_set_end_value(void* self, void* value) {
    QVariantAnimation_SetEndValue((QVariantAnimation*)self, (QVariant*)value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#keyValueAt)
///
/// ``` QVariantAnimation* self, double step ```
QVariant* q_variantanimation_key_value_at(void* self, double step) {
    return QVariantAnimation_KeyValueAt((QVariantAnimation*)self, step);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#setKeyValueAt)
///
/// ``` QVariantAnimation* self, double step, QVariant* value ```
void q_variantanimation_set_key_value_at(void* self, double step, void* value) {
    QVariantAnimation_SetKeyValueAt((QVariantAnimation*)self, step, (QVariant*)value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#keyValues)
///
/// ``` QVariantAnimation* self ```
libqt_list /* of libqt_pair  tuple of double and QVariant*  */ q_variantanimation_key_values(void* self) {
    libqt_list _arr = QVariantAnimation_KeyValues((QVariantAnimation*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#setKeyValues)
///
/// ``` QVariantAnimation* self, libqt_list /* of libqt_pair  tuple of double and QVariant*  */ values ```
void q_variantanimation_set_key_values(void* self, libqt_list /* of libqt_pair  tuple of double and QVariant*  */ values) {
    QVariantAnimation_SetKeyValues((QVariantAnimation*)self, values);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#currentValue)
///
/// ``` QVariantAnimation* self ```
QVariant* q_variantanimation_current_value(void* self) {
    return QVariantAnimation_CurrentValue((QVariantAnimation*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#duration)
///
/// ``` QVariantAnimation* self ```
int32_t q_variantanimation_duration(void* self) {
    return QVariantAnimation_Duration((QVariantAnimation*)self);
}

/// Allows for overriding the related default method
///
/// ``` QVariantAnimation* self, int32_t (*slot)() ```
void q_variantanimation_on_duration(void* self, int32_t (*slot)()) {
    QVariantAnimation_OnDuration((QVariantAnimation*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QVariantAnimation* self ```
int32_t q_variantanimation_qbase_duration(void* self) {
    return QVariantAnimation_QBaseDuration((QVariantAnimation*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#setDuration)
///
/// ``` QVariantAnimation* self, int msecs ```
void q_variantanimation_set_duration(void* self, int msecs) {
    QVariantAnimation_SetDuration((QVariantAnimation*)self, msecs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#easingCurve)
///
/// ``` QVariantAnimation* self ```
QEasingCurve* q_variantanimation_easing_curve(void* self) {
    return QVariantAnimation_EasingCurve((QVariantAnimation*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#setEasingCurve)
///
/// ``` QVariantAnimation* self, QEasingCurve* easing ```
void q_variantanimation_set_easing_curve(void* self, void* easing) {
    QVariantAnimation_SetEasingCurve((QVariantAnimation*)self, (QEasingCurve*)easing);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#valueChanged)
///
/// ``` QVariantAnimation* self, QVariant* value ```
void q_variantanimation_value_changed(void* self, void* value) {
    QVariantAnimation_ValueChanged((QVariantAnimation*)self, (QVariant*)value);
}

/// ``` QVariantAnimation* self, void (*slot)(QVariantAnimation*, QVariant*) ```
void q_variantanimation_on_value_changed(void* self, void (*slot)(void*, void*)) {
    QVariantAnimation_Connect_ValueChanged((QVariantAnimation*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#event)
///
/// ``` QVariantAnimation* self, QEvent* event ```
bool q_variantanimation_event(void* self, void* event) {
    return QVariantAnimation_Event((QVariantAnimation*)self, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QVariantAnimation* self, bool (*slot)(QVariantAnimation*, QEvent*) ```
void q_variantanimation_on_event(void* self, bool (*slot)(void*, void*)) {
    QVariantAnimation_OnEvent((QVariantAnimation*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QVariantAnimation* self, QEvent* event ```
bool q_variantanimation_qbase_event(void* self, void* event) {
    return QVariantAnimation_QBaseEvent((QVariantAnimation*)self, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#updateCurrentTime)
///
/// ``` QVariantAnimation* self, int param1 ```
void q_variantanimation_update_current_time(void* self, int param1) {
    QVariantAnimation_UpdateCurrentTime((QVariantAnimation*)self, param1);
}

/// Allows for overriding the related default method
///
/// ``` QVariantAnimation* self, void (*slot)(QVariantAnimation*, int) ```
void q_variantanimation_on_update_current_time(void* self, void (*slot)(void*, int)) {
    QVariantAnimation_OnUpdateCurrentTime((QVariantAnimation*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QVariantAnimation* self, int param1 ```
void q_variantanimation_qbase_update_current_time(void* self, int param1) {
    QVariantAnimation_QBaseUpdateCurrentTime((QVariantAnimation*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#updateState)
///
/// ``` QVariantAnimation* self, enum QAbstractAnimation__State newState, enum QAbstractAnimation__State oldState ```
void q_variantanimation_update_state(void* self, int64_t newState, int64_t oldState) {
    QVariantAnimation_UpdateState((QVariantAnimation*)self, newState, oldState);
}

/// Allows for overriding the related default method
///
/// ``` QVariantAnimation* self, void (*slot)(QVariantAnimation*, enum QAbstractAnimation__State, enum QAbstractAnimation__State) ```
void q_variantanimation_on_update_state(void* self, void (*slot)(void*, int64_t, int64_t)) {
    QVariantAnimation_OnUpdateState((QVariantAnimation*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QVariantAnimation* self, enum QAbstractAnimation__State newState, enum QAbstractAnimation__State oldState ```
void q_variantanimation_qbase_update_state(void* self, int64_t newState, int64_t oldState) {
    QVariantAnimation_QBaseUpdateState((QVariantAnimation*)self, newState, oldState);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#updateCurrentValue)
///
/// ``` QVariantAnimation* self, QVariant* value ```
void q_variantanimation_update_current_value(void* self, void* value) {
    QVariantAnimation_UpdateCurrentValue((QVariantAnimation*)self, (QVariant*)value);
}

/// Allows for overriding the related default method
///
/// ``` QVariantAnimation* self, void (*slot)(QVariantAnimation*, QVariant*) ```
void q_variantanimation_on_update_current_value(void* self, void (*slot)(void*, void*)) {
    QVariantAnimation_OnUpdateCurrentValue((QVariantAnimation*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QVariantAnimation* self, QVariant* value ```
void q_variantanimation_qbase_update_current_value(void* self, void* value) {
    QVariantAnimation_QBaseUpdateCurrentValue((QVariantAnimation*)self, (QVariant*)value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#interpolated)
///
/// ``` QVariantAnimation* self, QVariant* from, QVariant* to, double progress ```
QVariant* q_variantanimation_interpolated(void* self, void* from, void* to, double progress) {
    return QVariantAnimation_Interpolated((QVariantAnimation*)self, (QVariant*)from, (QVariant*)to, progress);
}

/// Allows for overriding the related default method
///
/// ``` QVariantAnimation* self, QVariant* (*slot)(QVariantAnimation*, QVariant*, QVariant*, double) ```
void q_variantanimation_on_interpolated(void* self, QVariant* (*slot)(void*, void*, void*, double)) {
    QVariantAnimation_OnInterpolated((QVariantAnimation*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QVariantAnimation* self, QVariant* from, QVariant* to, double progress ```
QVariant* q_variantanimation_qbase_interpolated(void* self, void* from, void* to, double progress) {
    return QVariantAnimation_QBaseInterpolated((QVariantAnimation*)self, (QVariant*)from, (QVariant*)to, progress);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_variantanimation_tr2(const char* s, const char* c) {
    libqt_string _str = QVariantAnimation_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_variantanimation_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QVariantAnimation_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#state)
///
/// ``` QVariantAnimation* self ```
int64_t q_variantanimation_state(void* self) {
    return QAbstractAnimation_State((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#group)
///
/// ``` QVariantAnimation* self ```
QAnimationGroup* q_variantanimation_group(void* self) {
    return QAbstractAnimation_Group((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#direction)
///
/// ``` QVariantAnimation* self ```
int64_t q_variantanimation_direction(void* self) {
    return QAbstractAnimation_Direction((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setDirection)
///
/// ``` QVariantAnimation* self, enum QAbstractAnimation__Direction direction ```
void q_variantanimation_set_direction(void* self, int64_t direction) {
    QAbstractAnimation_SetDirection((QAbstractAnimation*)self, direction);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentTime)
///
/// ``` QVariantAnimation* self ```
int32_t q_variantanimation_current_time(void* self) {
    return QAbstractAnimation_CurrentTime((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopTime)
///
/// ``` QVariantAnimation* self ```
int32_t q_variantanimation_current_loop_time(void* self) {
    return QAbstractAnimation_CurrentLoopTime((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#loopCount)
///
/// ``` QVariantAnimation* self ```
int32_t q_variantanimation_loop_count(void* self) {
    return QAbstractAnimation_LoopCount((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setLoopCount)
///
/// ``` QVariantAnimation* self, int loopCount ```
void q_variantanimation_set_loop_count(void* self, int loopCount) {
    QAbstractAnimation_SetLoopCount((QAbstractAnimation*)self, loopCount);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoop)
///
/// ``` QVariantAnimation* self ```
int32_t q_variantanimation_current_loop(void* self) {
    return QAbstractAnimation_CurrentLoop((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#totalDuration)
///
/// ``` QVariantAnimation* self ```
int32_t q_variantanimation_total_duration(void* self) {
    return QAbstractAnimation_TotalDuration((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#finished)
///
/// ``` QVariantAnimation* self ```
void q_variantanimation_finished(void* self) {
    QAbstractAnimation_Finished((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// ``` QVariantAnimation* self, void (*slot)(QAbstractAnimation*) ```
void q_variantanimation_on_finished(void* self, void (*slot)(void*)) {
    QAbstractAnimation_Connect_Finished((QAbstractAnimation*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#stateChanged)
///
/// ``` QVariantAnimation* self, enum QAbstractAnimation__State newState, enum QAbstractAnimation__State oldState ```
void q_variantanimation_state_changed(void* self, int64_t newState, int64_t oldState) {
    QAbstractAnimation_StateChanged((QAbstractAnimation*)self, newState, oldState);
}

/// Inherited from QAbstractAnimation
///
/// ``` QVariantAnimation* self, void (*slot)(QAbstractAnimation*, enum QAbstractAnimation__State, enum QAbstractAnimation__State) ```
void q_variantanimation_on_state_changed(void* self, void (*slot)(void*, int64_t, int64_t)) {
    QAbstractAnimation_Connect_StateChanged((QAbstractAnimation*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopChanged)
///
/// ``` QVariantAnimation* self, int currentLoop ```
void q_variantanimation_current_loop_changed(void* self, int currentLoop) {
    QAbstractAnimation_CurrentLoopChanged((QAbstractAnimation*)self, currentLoop);
}

/// Inherited from QAbstractAnimation
///
/// ``` QVariantAnimation* self, void (*slot)(QAbstractAnimation*, int) ```
void q_variantanimation_on_current_loop_changed(void* self, void (*slot)(void*, int)) {
    QAbstractAnimation_Connect_CurrentLoopChanged((QAbstractAnimation*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#directionChanged)
///
/// ``` QVariantAnimation* self, enum QAbstractAnimation__Direction param1 ```
void q_variantanimation_direction_changed(void* self, int64_t param1) {
    QAbstractAnimation_DirectionChanged((QAbstractAnimation*)self, param1);
}

/// Inherited from QAbstractAnimation
///
/// ``` QVariantAnimation* self, void (*slot)(QAbstractAnimation*, enum QAbstractAnimation__Direction) ```
void q_variantanimation_on_direction_changed(void* self, void (*slot)(void*, int64_t)) {
    QAbstractAnimation_Connect_DirectionChanged((QAbstractAnimation*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#start)
///
/// ``` QVariantAnimation* self ```
void q_variantanimation_start(void* self) {
    QAbstractAnimation_Start((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#pause)
///
/// ``` QVariantAnimation* self ```
void q_variantanimation_pause(void* self) {
    QAbstractAnimation_Pause((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#resume)
///
/// ``` QVariantAnimation* self ```
void q_variantanimation_resume(void* self) {
    QAbstractAnimation_Resume((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setPaused)
///
/// ``` QVariantAnimation* self, bool paused ```
void q_variantanimation_set_paused(void* self, bool paused) {
    QAbstractAnimation_SetPaused((QAbstractAnimation*)self, paused);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#stop)
///
/// ``` QVariantAnimation* self ```
void q_variantanimation_stop(void* self) {
    QAbstractAnimation_Stop((QAbstractAnimation*)self);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setCurrentTime)
///
/// ``` QVariantAnimation* self, int msecs ```
void q_variantanimation_set_current_time(void* self, int msecs) {
    QAbstractAnimation_SetCurrentTime((QAbstractAnimation*)self, msecs);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#start)
///
/// ``` QVariantAnimation* self, enum QAbstractAnimation__DeletionPolicy policy ```
void q_variantanimation_start1(void* self, int64_t policy) {
    QAbstractAnimation_Start1((QAbstractAnimation*)self, policy);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QVariantAnimation* self ```
const char* q_variantanimation_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QVariantAnimation* self, const char* name ```
void q_variantanimation_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QVariantAnimation* self ```
bool q_variantanimation_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QVariantAnimation* self ```
bool q_variantanimation_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QVariantAnimation* self ```
bool q_variantanimation_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QVariantAnimation* self ```
bool q_variantanimation_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QVariantAnimation* self, bool b ```
bool q_variantanimation_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QVariantAnimation* self ```
QThread* q_variantanimation_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QVariantAnimation* self, QThread* thread ```
void q_variantanimation_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QVariantAnimation* self, int interval ```
int32_t q_variantanimation_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QVariantAnimation* self, int id ```
void q_variantanimation_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QVariantAnimation* self ```
libqt_list /* of QObject* */ q_variantanimation_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QVariantAnimation* self, QObject* parent ```
void q_variantanimation_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QVariantAnimation* self, QObject* filterObj ```
void q_variantanimation_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QVariantAnimation* self, QObject* obj ```
void q_variantanimation_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_variantanimation_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QVariantAnimation* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_variantanimation_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_variantanimation_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_variantanimation_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QVariantAnimation* self ```
void q_variantanimation_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QVariantAnimation* self ```
void q_variantanimation_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QVariantAnimation* self, const char* name, QVariant* value ```
bool q_variantanimation_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QVariantAnimation* self, const char* name ```
QVariant* q_variantanimation_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QVariantAnimation* self ```
const char** q_variantanimation_dynamic_property_names(void* self) {
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
/// ``` QVariantAnimation* self ```
QBindingStorage* q_variantanimation_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QVariantAnimation* self ```
QBindingStorage* q_variantanimation_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QVariantAnimation* self ```
void q_variantanimation_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QVariantAnimation* self, void (*slot)(QObject*) ```
void q_variantanimation_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QVariantAnimation* self ```
QObject* q_variantanimation_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QVariantAnimation* self, const char* classname ```
bool q_variantanimation_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QVariantAnimation* self ```
void q_variantanimation_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QVariantAnimation* self, int interval, enum Qt__TimerType timerType ```
int32_t q_variantanimation_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_variantanimation_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QVariantAnimation* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_variantanimation_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QVariantAnimation* self, QObject* param1 ```
void q_variantanimation_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QVariantAnimation* self, void (*slot)(QObject*, QObject*) ```
void q_variantanimation_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#updateDirection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVariantAnimation* self, enum QAbstractAnimation__Direction direction ```
void q_variantanimation_update_direction(void* self, int64_t direction) {
    QVariantAnimation_UpdateDirection((QVariantAnimation*)self, direction);
}

/// Inherited from QAbstractAnimation
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVariantAnimation* self, enum QAbstractAnimation__Direction direction ```
void q_variantanimation_qbase_update_direction(void* self, int64_t direction) {
    QVariantAnimation_QBaseUpdateDirection((QVariantAnimation*)self, direction);
}

/// Inherited from QAbstractAnimation
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVariantAnimation* self, void (*slot)(QVariantAnimation*, enum QAbstractAnimation__Direction) ```
void q_variantanimation_on_update_direction(void* self, void (*slot)(void*, int64_t)) {
    QVariantAnimation_OnUpdateDirection((QVariantAnimation*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVariantAnimation* self, QObject* watched, QEvent* event ```
bool q_variantanimation_event_filter(void* self, void* watched, void* event) {
    return QVariantAnimation_EventFilter((QVariantAnimation*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVariantAnimation* self, QObject* watched, QEvent* event ```
bool q_variantanimation_qbase_event_filter(void* self, void* watched, void* event) {
    return QVariantAnimation_QBaseEventFilter((QVariantAnimation*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVariantAnimation* self, bool (*slot)(QVariantAnimation*, QObject*, QEvent*) ```
void q_variantanimation_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QVariantAnimation_OnEventFilter((QVariantAnimation*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVariantAnimation* self, QTimerEvent* event ```
void q_variantanimation_timer_event(void* self, void* event) {
    QVariantAnimation_TimerEvent((QVariantAnimation*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVariantAnimation* self, QTimerEvent* event ```
void q_variantanimation_qbase_timer_event(void* self, void* event) {
    QVariantAnimation_QBaseTimerEvent((QVariantAnimation*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVariantAnimation* self, void (*slot)(QVariantAnimation*, QTimerEvent*) ```
void q_variantanimation_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QVariantAnimation_OnTimerEvent((QVariantAnimation*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVariantAnimation* self, QChildEvent* event ```
void q_variantanimation_child_event(void* self, void* event) {
    QVariantAnimation_ChildEvent((QVariantAnimation*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVariantAnimation* self, QChildEvent* event ```
void q_variantanimation_qbase_child_event(void* self, void* event) {
    QVariantAnimation_QBaseChildEvent((QVariantAnimation*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVariantAnimation* self, void (*slot)(QVariantAnimation*, QChildEvent*) ```
void q_variantanimation_on_child_event(void* self, void (*slot)(void*, void*)) {
    QVariantAnimation_OnChildEvent((QVariantAnimation*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVariantAnimation* self, QEvent* event ```
void q_variantanimation_custom_event(void* self, void* event) {
    QVariantAnimation_CustomEvent((QVariantAnimation*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVariantAnimation* self, QEvent* event ```
void q_variantanimation_qbase_custom_event(void* self, void* event) {
    QVariantAnimation_QBaseCustomEvent((QVariantAnimation*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVariantAnimation* self, void (*slot)(QVariantAnimation*, QEvent*) ```
void q_variantanimation_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QVariantAnimation_OnCustomEvent((QVariantAnimation*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVariantAnimation* self, QMetaMethod* signal ```
void q_variantanimation_connect_notify(void* self, void* signal) {
    QVariantAnimation_ConnectNotify((QVariantAnimation*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVariantAnimation* self, QMetaMethod* signal ```
void q_variantanimation_qbase_connect_notify(void* self, void* signal) {
    QVariantAnimation_QBaseConnectNotify((QVariantAnimation*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVariantAnimation* self, void (*slot)(QVariantAnimation*, QMetaMethod*) ```
void q_variantanimation_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QVariantAnimation_OnConnectNotify((QVariantAnimation*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVariantAnimation* self, QMetaMethod* signal ```
void q_variantanimation_disconnect_notify(void* self, void* signal) {
    QVariantAnimation_DisconnectNotify((QVariantAnimation*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVariantAnimation* self, QMetaMethod* signal ```
void q_variantanimation_qbase_disconnect_notify(void* self, void* signal) {
    QVariantAnimation_QBaseDisconnectNotify((QVariantAnimation*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVariantAnimation* self, void (*slot)(QVariantAnimation*, QMetaMethod*) ```
void q_variantanimation_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QVariantAnimation_OnDisconnectNotify((QVariantAnimation*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVariantAnimation* self ```
QObject* q_variantanimation_sender(void* self) {
    return QVariantAnimation_Sender((QVariantAnimation*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVariantAnimation* self ```
QObject* q_variantanimation_qbase_sender(void* self) {
    return QVariantAnimation_QBaseSender((QVariantAnimation*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVariantAnimation* self, QObject* (*slot)() ```
void q_variantanimation_on_sender(void* self, QObject* (*slot)()) {
    QVariantAnimation_OnSender((QVariantAnimation*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVariantAnimation* self ```
int32_t q_variantanimation_sender_signal_index(void* self) {
    return QVariantAnimation_SenderSignalIndex((QVariantAnimation*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVariantAnimation* self ```
int32_t q_variantanimation_qbase_sender_signal_index(void* self) {
    return QVariantAnimation_QBaseSenderSignalIndex((QVariantAnimation*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVariantAnimation* self, int32_t (*slot)() ```
void q_variantanimation_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QVariantAnimation_OnSenderSignalIndex((QVariantAnimation*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVariantAnimation* self, const char* signal ```
int32_t q_variantanimation_receivers(void* self, const char* signal) {
    return QVariantAnimation_Receivers((QVariantAnimation*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVariantAnimation* self, const char* signal ```
int32_t q_variantanimation_qbase_receivers(void* self, const char* signal) {
    return QVariantAnimation_QBaseReceivers((QVariantAnimation*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVariantAnimation* self, int32_t (*slot)(QVariantAnimation*, const char*) ```
void q_variantanimation_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QVariantAnimation_OnReceivers((QVariantAnimation*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVariantAnimation* self, QMetaMethod* signal ```
bool q_variantanimation_is_signal_connected(void* self, void* signal) {
    return QVariantAnimation_IsSignalConnected((QVariantAnimation*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVariantAnimation* self, QMetaMethod* signal ```
bool q_variantanimation_qbase_is_signal_connected(void* self, void* signal) {
    return QVariantAnimation_QBaseIsSignalConnected((QVariantAnimation*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVariantAnimation* self, bool (*slot)(QVariantAnimation*, QMetaMethod*) ```
void q_variantanimation_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QVariantAnimation_OnIsSignalConnected((QVariantAnimation*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QVariantAnimation* self ```
void q_variantanimation_delete(void* self) {
    QVariantAnimation_Delete((QVariantAnimation*)(self));
}