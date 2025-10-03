#include "../libqcoreevent.hpp"
#include "libguiactivateevent.hpp"
#include "libguiactivateevent.h"

KParts__GUIActivateEvent* k_parts__guiactivateevent_new(bool activated) {
    return KParts__GUIActivateEvent_new(activated);
}

bool k_parts__guiactivateevent_activated(void* self) {
    return KParts__GUIActivateEvent_Activated((KParts__GUIActivateEvent*)self);
}

bool k_parts__guiactivateevent_test(void* event) {
    return KParts__GUIActivateEvent_Test((QEvent*)event);
}

int32_t k_parts__guiactivateevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool k_parts__guiactivateevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool k_parts__guiactivateevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void k_parts__guiactivateevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void k_parts__guiactivateevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool k_parts__guiactivateevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool k_parts__guiactivateevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool k_parts__guiactivateevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t k_parts__guiactivateevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t k_parts__guiactivateevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void k_parts__guiactivateevent_set_accepted(void* self, bool accepted) {
    KParts__GUIActivateEvent_SetAccepted((KParts__GUIActivateEvent*)self, accepted);
}

void k_parts__guiactivateevent_qbase_set_accepted(void* self, bool accepted) {
    KParts__GUIActivateEvent_QBaseSetAccepted((KParts__GUIActivateEvent*)self, accepted);
}

void k_parts__guiactivateevent_on_set_accepted(void* self, void (*callback)(void*, bool)) {
    KParts__GUIActivateEvent_OnSetAccepted((KParts__GUIActivateEvent*)self, (intptr_t)callback);
}

QEvent* k_parts__guiactivateevent_clone(void* self) {
    return KParts__GUIActivateEvent_Clone((KParts__GUIActivateEvent*)self);
}

QEvent* k_parts__guiactivateevent_qbase_clone(void* self) {
    return KParts__GUIActivateEvent_QBaseClone((KParts__GUIActivateEvent*)self);
}

void k_parts__guiactivateevent_on_clone(void* self, QEvent* (*callback)()) {
    KParts__GUIActivateEvent_OnClone((KParts__GUIActivateEvent*)self, (intptr_t)callback);
}

void k_parts__guiactivateevent_delete(void* self) {
    KParts__GUIActivateEvent_Delete((KParts__GUIActivateEvent*)(self));
}
