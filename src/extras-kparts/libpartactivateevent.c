#include "libpart.hpp"
#include "../libqcoreevent.hpp"
#include "../libqwidget.hpp"
#include "libpartactivateevent.hpp"
#include "libpartactivateevent.h"

KParts__PartActivateEvent* k_parts__partactivateevent_new(bool activated, void* part, void* widget) {
    return KParts__PartActivateEvent_new(activated, (KParts__Part*)part, (QWidget*)widget);
}

bool k_parts__partactivateevent_activated(void* self) {
    return KParts__PartActivateEvent_Activated((KParts__PartActivateEvent*)self);
}

KParts__Part* k_parts__partactivateevent_part(void* self) {
    return KParts__PartActivateEvent_Part((KParts__PartActivateEvent*)self);
}

QWidget* k_parts__partactivateevent_widget(void* self) {
    return KParts__PartActivateEvent_Widget((KParts__PartActivateEvent*)self);
}

bool k_parts__partactivateevent_test(void* event) {
    return KParts__PartActivateEvent_Test((QEvent*)event);
}

int32_t k_parts__partactivateevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool k_parts__partactivateevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool k_parts__partactivateevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void k_parts__partactivateevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void k_parts__partactivateevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool k_parts__partactivateevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool k_parts__partactivateevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool k_parts__partactivateevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t k_parts__partactivateevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t k_parts__partactivateevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void k_parts__partactivateevent_set_accepted(void* self, bool accepted) {
    KParts__PartActivateEvent_SetAccepted((KParts__PartActivateEvent*)self, accepted);
}

void k_parts__partactivateevent_super_set_accepted(void* self, bool accepted) {
    KParts__PartActivateEvent_SuperSetAccepted((KParts__PartActivateEvent*)self, accepted);
}

void k_parts__partactivateevent_on_set_accepted(void* self, void (*callback)(void*, bool)) {
    KParts__PartActivateEvent_OnSetAccepted((KParts__PartActivateEvent*)self, (intptr_t)callback);
}

QEvent* k_parts__partactivateevent_clone(void* self) {
    return KParts__PartActivateEvent_Clone((KParts__PartActivateEvent*)self);
}

QEvent* k_parts__partactivateevent_super_clone(void* self) {
    return KParts__PartActivateEvent_SuperClone((KParts__PartActivateEvent*)self);
}

void k_parts__partactivateevent_on_clone(void* self, QEvent* (*callback)()) {
    KParts__PartActivateEvent_OnClone((KParts__PartActivateEvent*)self, (intptr_t)callback);
}

void k_parts__partactivateevent_delete(void* self) {
    KParts__PartActivateEvent_Delete((KParts__PartActivateEvent*)(self));
}
