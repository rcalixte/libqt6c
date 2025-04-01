#include "libqevent.hpp"
#include "libqobject.hpp"
#include "libqcoreevent.hpp"
#include "libqcoreevent.h"

QEvent* q_event_new(int64_t typeVal) {
    return QEvent_new(typeVal);
}

int64_t q_event_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_event_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

void q_event_set_accepted(void* self, bool accepted) {
    QEvent_SetAccepted((QEvent*)self, accepted);
}

void q_event_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QEvent_OnSetAccepted((QEvent*)self, (intptr_t)slot);
}

void q_event_qbase_set_accepted(void* self, bool accepted) {
    QEvent_QBaseSetAccepted((QEvent*)self, accepted);
}

bool q_event_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void q_event_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void q_event_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool q_event_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_event_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_event_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_event_register_event_type() {
    return QEvent_RegisterEventType();
}

QEvent* q_event_clone(void* self) {
    return QEvent_Clone((QEvent*)self);
}

void q_event_on_clone(void* self, QEvent* (*slot)()) {
    QEvent_OnClone((QEvent*)self, (intptr_t)slot);
}

QEvent* q_event_qbase_clone(void* self) {
    return QEvent_QBaseClone((QEvent*)self);
}

int32_t q_event_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void q_event_delete(void* self) {
    QEvent_Delete((QEvent*)(self));
}

QTimerEvent* q_timerevent_new(int timerId) {
    return QTimerEvent_new(timerId);
}

QTimerEvent* q_timerevent_clone(void* self) {
    return QTimerEvent_Clone((QTimerEvent*)self);
}

void q_timerevent_on_clone(void* self, QTimerEvent* (*slot)()) {
    QTimerEvent_OnClone((QTimerEvent*)self, (intptr_t)slot);
}

QTimerEvent* q_timerevent_qbase_clone(void* self) {
    return QTimerEvent_QBaseClone((QTimerEvent*)self);
}

int32_t q_timerevent_timer_id(void* self) {
    return QTimerEvent_TimerId((QTimerEvent*)self);
}

int64_t q_timerevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_timerevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_timerevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void q_timerevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void q_timerevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool q_timerevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_timerevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_timerevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_timerevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_timerevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void q_timerevent_set_accepted(void* self, bool accepted) {
    QTimerEvent_SetAccepted((QTimerEvent*)self, accepted);
}

void q_timerevent_qbase_set_accepted(void* self, bool accepted) {
    QTimerEvent_QBaseSetAccepted((QTimerEvent*)self, accepted);
}

void q_timerevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QTimerEvent_OnSetAccepted((QTimerEvent*)self, (intptr_t)slot);
}

void q_timerevent_delete(void* self) {
    QTimerEvent_Delete((QTimerEvent*)(self));
}

QChildEvent* q_childevent_new(int64_t typeVal, void* child) {
    return QChildEvent_new(typeVal, (QObject*)child);
}

QChildEvent* q_childevent_clone(void* self) {
    return QChildEvent_Clone((QChildEvent*)self);
}

void q_childevent_on_clone(void* self, QChildEvent* (*slot)()) {
    QChildEvent_OnClone((QChildEvent*)self, (intptr_t)slot);
}

QChildEvent* q_childevent_qbase_clone(void* self) {
    return QChildEvent_QBaseClone((QChildEvent*)self);
}

QObject* q_childevent_child(void* self) {
    return QChildEvent_Child((QChildEvent*)self);
}

bool q_childevent_added(void* self) {
    return QChildEvent_Added((QChildEvent*)self);
}

bool q_childevent_polished(void* self) {
    return QChildEvent_Polished((QChildEvent*)self);
}

bool q_childevent_removed(void* self) {
    return QChildEvent_Removed((QChildEvent*)self);
}

int64_t q_childevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_childevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_childevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void q_childevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void q_childevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool q_childevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_childevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_childevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_childevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_childevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void q_childevent_set_accepted(void* self, bool accepted) {
    QChildEvent_SetAccepted((QChildEvent*)self, accepted);
}

void q_childevent_qbase_set_accepted(void* self, bool accepted) {
    QChildEvent_QBaseSetAccepted((QChildEvent*)self, accepted);
}

void q_childevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QChildEvent_OnSetAccepted((QChildEvent*)self, (intptr_t)slot);
}

void q_childevent_delete(void* self) {
    QChildEvent_Delete((QChildEvent*)(self));
}

QDynamicPropertyChangeEvent* q_dynamicpropertychangeevent_new(const char* name) {
    return QDynamicPropertyChangeEvent_new(qstring(name));
}

QDynamicPropertyChangeEvent* q_dynamicpropertychangeevent_clone(void* self) {
    return QDynamicPropertyChangeEvent_Clone((QDynamicPropertyChangeEvent*)self);
}

void q_dynamicpropertychangeevent_on_clone(void* self, QDynamicPropertyChangeEvent* (*slot)()) {
    QDynamicPropertyChangeEvent_OnClone((QDynamicPropertyChangeEvent*)self, (intptr_t)slot);
}

QDynamicPropertyChangeEvent* q_dynamicpropertychangeevent_qbase_clone(void* self) {
    return QDynamicPropertyChangeEvent_QBaseClone((QDynamicPropertyChangeEvent*)self);
}

char* q_dynamicpropertychangeevent_property_name(void* self) {
    libqt_string _str = QDynamicPropertyChangeEvent_PropertyName((QDynamicPropertyChangeEvent*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_dynamicpropertychangeevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_dynamicpropertychangeevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_dynamicpropertychangeevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void q_dynamicpropertychangeevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void q_dynamicpropertychangeevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool q_dynamicpropertychangeevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_dynamicpropertychangeevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_dynamicpropertychangeevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_dynamicpropertychangeevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_dynamicpropertychangeevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void q_dynamicpropertychangeevent_set_accepted(void* self, bool accepted) {
    QDynamicPropertyChangeEvent_SetAccepted((QDynamicPropertyChangeEvent*)self, accepted);
}

void q_dynamicpropertychangeevent_qbase_set_accepted(void* self, bool accepted) {
    QDynamicPropertyChangeEvent_QBaseSetAccepted((QDynamicPropertyChangeEvent*)self, accepted);
}

void q_dynamicpropertychangeevent_on_set_accepted(void* self, void (*slot)(void*, bool)) {
    QDynamicPropertyChangeEvent_OnSetAccepted((QDynamicPropertyChangeEvent*)self, (intptr_t)slot);
}

void q_dynamicpropertychangeevent_delete(void* self) {
    QDynamicPropertyChangeEvent_Delete((QDynamicPropertyChangeEvent*)(self));
}
