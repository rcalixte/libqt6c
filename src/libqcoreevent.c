#include "libqevent.hpp"
#include "libqobject.hpp"
#include "libqcoreevent.hpp"
#include "libqcoreevent.h"

/// https://doc.qt.io/qt-6/qevent.html

/// q_event_new constructs a new QEvent object.
///
/// ``` enum QEvent__Type typeVal ```
QEvent* q_event_new(int64_t typeVal) {
    return QEvent_new(typeVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QEvent* self ```
int64_t q_event_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QEvent* self ```
bool q_event_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// ``` QEvent* self, bool accepted ```
void q_event_set_accepted(void* self, bool accepted) {
    QEvent_SetAccepted((QEvent*)self, accepted);
}

/// Allows for overriding the related default method
///
/// ``` QEvent* self, void (*slot)(QEvent*, bool) ```
void q_event_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QEvent_OnSetAccepted((QEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QEvent* self, bool accepted ```
void q_event_qbase_set_accepted(void* self, bool accepted) {
    QEvent_QBaseSetAccepted((QEvent*)self, accepted);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QEvent* self ```
bool q_event_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QEvent* self ```
void q_event_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QEvent* self ```
void q_event_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QEvent* self ```
bool q_event_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QEvent* self ```
bool q_event_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QEvent* self ```
bool q_event_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_event_register_event_type() {
    return QEvent_RegisterEventType();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// ``` QEvent* self ```
QEvent* q_event_clone(void* self) {
    return QEvent_Clone((QEvent*)self);
}

/// Allows for overriding the related default method
///
/// ``` QEvent* self, QEvent* (*slot)() ```
void q_event_on_clone(void* self, QEvent* (*slot)()) {
    QEvent_OnClone((QEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QEvent* self ```
QEvent* q_event_qbase_clone(void* self) {
    return QEvent_QBaseClone((QEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_event_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

/// Delete this object from C++ memory.
///
/// ``` QEvent* self ```
void q_event_delete(void* self) {
    QEvent_Delete((QEvent*)(self));
}

/// https://doc.qt.io/qt-6/qtimerevent.html

/// q_timerevent_new constructs a new QTimerEvent object.
///
/// ``` int timerId ```
QTimerEvent* q_timerevent_new(int timerId) {
    return QTimerEvent_new(timerId);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtimerevent.html#clone)
///
/// ``` QTimerEvent* self ```
QTimerEvent* q_timerevent_clone(void* self) {
    return QTimerEvent_Clone((QTimerEvent*)self);
}

/// Allows for overriding the related default method
///
/// ``` QTimerEvent* self, QTimerEvent* (*slot)() ```
void q_timerevent_on_clone(void* self, QTimerEvent* (*slot)()) {
    QTimerEvent_OnClone((QTimerEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTimerEvent* self ```
QTimerEvent* q_timerevent_qbase_clone(void* self) {
    return QTimerEvent_QBaseClone((QTimerEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtimerevent.html#timerId)
///
/// ``` QTimerEvent* self ```
int32_t q_timerevent_timer_id(void* self) {
    return QTimerEvent_TimerId((QTimerEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QTimerEvent* self ```
int64_t q_timerevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QTimerEvent* self ```
bool q_timerevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QTimerEvent* self ```
bool q_timerevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QTimerEvent* self ```
void q_timerevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QTimerEvent* self ```
void q_timerevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QTimerEvent* self ```
bool q_timerevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QTimerEvent* self ```
bool q_timerevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QTimerEvent* self ```
bool q_timerevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_timerevent_register_event_type() {
    return QEvent_RegisterEventType();
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_timerevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTimerEvent* self, bool accepted ```
void q_timerevent_set_accepted(void* self, bool accepted) {
    QTimerEvent_SetAccepted((QTimerEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTimerEvent* self, bool accepted ```
void q_timerevent_qbase_set_accepted(void* self, bool accepted) {
    QTimerEvent_QBaseSetAccepted((QTimerEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTimerEvent* self, void (*slot)(QTimerEvent*, bool) ```
void q_timerevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QTimerEvent_OnSetAccepted((QTimerEvent*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QTimerEvent* self ```
void q_timerevent_delete(void* self) {
    QTimerEvent_Delete((QTimerEvent*)(self));
}

/// https://doc.qt.io/qt-6/qchildevent.html

/// q_childevent_new constructs a new QChildEvent object.
///
/// ``` enum QEvent__Type typeVal, QObject* child ```
QChildEvent* q_childevent_new(int64_t typeVal, void* child) {
    return QChildEvent_new(typeVal, (QObject*)child);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchildevent.html#clone)
///
/// ``` QChildEvent* self ```
QChildEvent* q_childevent_clone(void* self) {
    return QChildEvent_Clone((QChildEvent*)self);
}

/// Allows for overriding the related default method
///
/// ``` QChildEvent* self, QChildEvent* (*slot)() ```
void q_childevent_on_clone(void* self, QChildEvent* (*slot)()) {
    QChildEvent_OnClone((QChildEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QChildEvent* self ```
QChildEvent* q_childevent_qbase_clone(void* self) {
    return QChildEvent_QBaseClone((QChildEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchildevent.html#child)
///
/// ``` QChildEvent* self ```
QObject* q_childevent_child(void* self) {
    return QChildEvent_Child((QChildEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchildevent.html#added)
///
/// ``` QChildEvent* self ```
bool q_childevent_added(void* self) {
    return QChildEvent_Added((QChildEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchildevent.html#polished)
///
/// ``` QChildEvent* self ```
bool q_childevent_polished(void* self) {
    return QChildEvent_Polished((QChildEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qchildevent.html#removed)
///
/// ``` QChildEvent* self ```
bool q_childevent_removed(void* self) {
    return QChildEvent_Removed((QChildEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QChildEvent* self ```
int64_t q_childevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QChildEvent* self ```
bool q_childevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QChildEvent* self ```
bool q_childevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QChildEvent* self ```
void q_childevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QChildEvent* self ```
void q_childevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QChildEvent* self ```
bool q_childevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QChildEvent* self ```
bool q_childevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QChildEvent* self ```
bool q_childevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_childevent_register_event_type() {
    return QEvent_RegisterEventType();
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_childevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChildEvent* self, bool accepted ```
void q_childevent_set_accepted(void* self, bool accepted) {
    QChildEvent_SetAccepted((QChildEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChildEvent* self, bool accepted ```
void q_childevent_qbase_set_accepted(void* self, bool accepted) {
    QChildEvent_QBaseSetAccepted((QChildEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChildEvent* self, void (*slot)(QChildEvent*, bool) ```
void q_childevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QChildEvent_OnSetAccepted((QChildEvent*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QChildEvent* self ```
void q_childevent_delete(void* self) {
    QChildEvent_Delete((QChildEvent*)(self));
}

/// https://doc.qt.io/qt-6/qdynamicpropertychangeevent.html

/// q_dynamicpropertychangeevent_new constructs a new QDynamicPropertyChangeEvent object.
///
/// ``` const char* name ```
QDynamicPropertyChangeEvent* q_dynamicpropertychangeevent_new(const char* name) {
    return QDynamicPropertyChangeEvent_new(qstring(name));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdynamicpropertychangeevent.html#clone)
///
/// ``` QDynamicPropertyChangeEvent* self ```
QDynamicPropertyChangeEvent* q_dynamicpropertychangeevent_clone(void* self) {
    return QDynamicPropertyChangeEvent_Clone((QDynamicPropertyChangeEvent*)self);
}

/// Allows for overriding the related default method
///
/// ``` QDynamicPropertyChangeEvent* self, QDynamicPropertyChangeEvent* (*slot)() ```
void q_dynamicpropertychangeevent_on_clone(void* self, QDynamicPropertyChangeEvent* (*slot)()) {
    QDynamicPropertyChangeEvent_OnClone((QDynamicPropertyChangeEvent*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QDynamicPropertyChangeEvent* self ```
QDynamicPropertyChangeEvent* q_dynamicpropertychangeevent_qbase_clone(void* self) {
    return QDynamicPropertyChangeEvent_QBaseClone((QDynamicPropertyChangeEvent*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdynamicpropertychangeevent.html#propertyName)
///
/// ``` QDynamicPropertyChangeEvent* self ```
char* q_dynamicpropertychangeevent_property_name(void* self) {
    libqt_string _str = QDynamicPropertyChangeEvent_PropertyName((QDynamicPropertyChangeEvent*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// ``` QDynamicPropertyChangeEvent* self ```
int64_t q_dynamicpropertychangeevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// ``` QDynamicPropertyChangeEvent* self ```
bool q_dynamicpropertychangeevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// ``` QDynamicPropertyChangeEvent* self ```
bool q_dynamicpropertychangeevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// ``` QDynamicPropertyChangeEvent* self ```
void q_dynamicpropertychangeevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// ``` QDynamicPropertyChangeEvent* self ```
void q_dynamicpropertychangeevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// ``` QDynamicPropertyChangeEvent* self ```
bool q_dynamicpropertychangeevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// ``` QDynamicPropertyChangeEvent* self ```
bool q_dynamicpropertychangeevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// ``` QDynamicPropertyChangeEvent* self ```
bool q_dynamicpropertychangeevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
///
int32_t q_dynamicpropertychangeevent_register_event_type() {
    return QEvent_RegisterEventType();
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// ``` int hint ```
int32_t q_dynamicpropertychangeevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDynamicPropertyChangeEvent* self, bool accepted ```
void q_dynamicpropertychangeevent_set_accepted(void* self, bool accepted) {
    QDynamicPropertyChangeEvent_SetAccepted((QDynamicPropertyChangeEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDynamicPropertyChangeEvent* self, bool accepted ```
void q_dynamicpropertychangeevent_qbase_set_accepted(void* self, bool accepted) {
    QDynamicPropertyChangeEvent_QBaseSetAccepted((QDynamicPropertyChangeEvent*)self, accepted);
}

/// Inherited from QEvent
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDynamicPropertyChangeEvent* self, void (*slot)(QDynamicPropertyChangeEvent*, bool) ```
void q_dynamicpropertychangeevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QDynamicPropertyChangeEvent_OnSetAccepted((QDynamicPropertyChangeEvent*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QDynamicPropertyChangeEvent* self ```
void q_dynamicpropertychangeevent_delete(void* self) {
    QDynamicPropertyChangeEvent_Delete((QDynamicPropertyChangeEvent*)(self));
}