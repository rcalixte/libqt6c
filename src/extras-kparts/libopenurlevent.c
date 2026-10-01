#include "libopenurlarguments.hpp"
#include "libreadonlypart.hpp"
#include "../libqcoreevent.hpp"
#include "../libqurl.hpp"
#include "libopenurlevent.hpp"
#include "libopenurlevent.h"

KParts__OpenUrlEvent* k_parts__openurlevent_new(void* part, const void* url) {
    return KParts__OpenUrlEvent_New((KParts__ReadOnlyPart*)part, (QUrl*)url);
}

KParts__OpenUrlEvent* k_parts__openurlevent_new2(void* part, const void* url, const void* args) {
    return KParts__OpenUrlEvent_New2((KParts__ReadOnlyPart*)part, (QUrl*)url, (KParts__OpenUrlArguments*)args);
}

KParts__ReadOnlyPart* k_parts__openurlevent_part(const void* self) {
    return KParts__OpenUrlEvent_Part((KParts__OpenUrlEvent*)self);
}

QUrl* k_parts__openurlevent_url(const void* self) {
    return KParts__OpenUrlEvent_Url((KParts__OpenUrlEvent*)self);
}

KParts__OpenUrlArguments* k_parts__openurlevent_arguments(const void* self) {
    return KParts__OpenUrlEvent_Arguments((KParts__OpenUrlEvent*)self);
}

bool k_parts__openurlevent_test(const void* event) {
    return KParts__OpenUrlEvent_Test((QEvent*)event);
}

int32_t k_parts__openurlevent_type(const void* self) {
    return QEvent_Type((QEvent*)self);
}

bool k_parts__openurlevent_spontaneous(const void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool k_parts__openurlevent_is_accepted(const void* self) {
    return QEvent_IsAccepted((QEvent*)self);
}

void k_parts__openurlevent_accept(void* self) {
    QEvent_Accept((QEvent*)self);
}

void k_parts__openurlevent_ignore(void* self) {
    QEvent_Ignore((QEvent*)self);
}

bool k_parts__openurlevent_is_input_event(const void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool k_parts__openurlevent_is_pointer_event(const void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool k_parts__openurlevent_is_single_point_event(const void* self) {
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

QEvent* k_parts__openurlevent_clone(const void* self) {
    return KParts__OpenUrlEvent_Clone((KParts__OpenUrlEvent*)self);
}

QEvent* k_parts__openurlevent_super_clone(const void* self) {
    return KParts__OpenUrlEvent_SuperClone((KParts__OpenUrlEvent*)self);
}

void k_parts__openurlevent_on_clone(const void* self, QEvent* (*callback)(const void*)) {
    KParts__OpenUrlEvent_OnClone((const KParts__OpenUrlEvent*)self, (intptr_t)callback);
}

void k_parts__openurlevent_delete(void* self) {
    KParts__OpenUrlEvent_Delete((KParts__OpenUrlEvent*)(self));
}
