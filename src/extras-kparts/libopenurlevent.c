#include "libopenurlarguments.hpp"
#include "libreadonlypart.hpp"
#include "../libqcoreevent.hpp"
#include "../libqurl.hpp"
#include "libopenurlevent.hpp"
#include "libopenurlevent.h"

KParts__OpenUrlEvent* k_parts__openurlevent_new(void* part, void* url) {
    return KParts__OpenUrlEvent_new((KParts__ReadOnlyPart*)part, (QUrl*)url);
}

KParts__OpenUrlEvent* k_parts__openurlevent_new2(void* part, void* url, void* args) {
    return KParts__OpenUrlEvent_new2((KParts__ReadOnlyPart*)part, (QUrl*)url, (KParts__OpenUrlArguments*)args);
}

KParts__ReadOnlyPart* k_parts__openurlevent_part(void* self) {
    return KParts__OpenUrlEvent_Part((KParts__OpenUrlEvent*)self);
}

QUrl* k_parts__openurlevent_url(void* self) {
    return KParts__OpenUrlEvent_Url((KParts__OpenUrlEvent*)self);
}

KParts__OpenUrlArguments* k_parts__openurlevent_arguments(void* self) {
    return KParts__OpenUrlEvent_Arguments((KParts__OpenUrlEvent*)self);
}

bool k_parts__openurlevent_test(void* event) {
    return KParts__OpenUrlEvent_Test((QEvent*)event);
}

int32_t k_parts__openurlevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool k_parts__openurlevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool k_parts__openurlevent_is_accepted(void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void k_parts__openurlevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void k_parts__openurlevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool k_parts__openurlevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool k_parts__openurlevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool k_parts__openurlevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t k_parts__openurlevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t k_parts__openurlevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

void k_parts__openurlevent_set_accepted(void* self, bool accepted) {
    KParts__OpenUrlEvent_SetAccepted((KParts__OpenUrlEvent*)self, accepted);
}

void k_parts__openurlevent_super_set_accepted(void* self, bool accepted) {
    KParts__OpenUrlEvent_SuperSetAccepted((KParts__OpenUrlEvent*)self, accepted);
}

void k_parts__openurlevent_on_set_accepted(void* self, void (*callback)(void*, bool)) {
    KParts__OpenUrlEvent_OnSetAccepted((KParts__OpenUrlEvent*)self, (intptr_t)callback);
}

QEvent* k_parts__openurlevent_clone(void* self) {
    return KParts__OpenUrlEvent_Clone((KParts__OpenUrlEvent*)self);
}

QEvent* k_parts__openurlevent_super_clone(void* self) {
    return KParts__OpenUrlEvent_SuperClone((KParts__OpenUrlEvent*)self);
}

void k_parts__openurlevent_on_clone(void* self, QEvent* (*callback)()) {
    KParts__OpenUrlEvent_OnClone((KParts__OpenUrlEvent*)self, (intptr_t)callback);
}

void k_parts__openurlevent_delete(void* self) {
    KParts__OpenUrlEvent_Delete((KParts__OpenUrlEvent*)(self));
}
