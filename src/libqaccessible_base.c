#include "libqaccessible.hpp"
#include "libqobject.hpp"
#include "libqtextcursor.hpp"
#include "libqaccessible_base.hpp"
#include "libqaccessible_base.h"

QAccessible* q_accessible_new(void* other) {
    return QAccessible_new((QAccessible*)other);
}

QAccessible* q_accessible_new2(void* other) {
    return QAccessible_new2((QAccessible*)other);
}

void q_accessible_copy_assign(void* self, void* other) {
    QAccessible_CopyAssign((QAccessible*)self, (QAccessible*)other);
}

void q_accessible_move_assign(void* self, void* other) {
    QAccessible_MoveAssign((QAccessible*)self, (QAccessible*)other);
}

void q_accessible_install_activation_observer(void* param1) {
    QAccessible_InstallActivationObserver((QAccessible__ActivationObserver*)param1);
}

void q_accessible_remove_activation_observer(void* param1) {
    QAccessible_RemoveActivationObserver((QAccessible__ActivationObserver*)param1);
}

QAccessibleInterface* q_accessible_query_accessible_interface(void* param1) {
    return QAccessible_QueryAccessibleInterface((QObject*)param1);
}

uint32_t q_accessible_unique_id(void* iface) {
    return QAccessible_UniqueId((QAccessibleInterface*)iface);
}

QAccessibleInterface* q_accessible_accessible_interface(uint32_t uniqueId) {
    return QAccessible_AccessibleInterface(uniqueId);
}

uint32_t q_accessible_register_accessible_interface(void* iface) {
    return QAccessible_RegisterAccessibleInterface((QAccessibleInterface*)iface);
}

void q_accessible_delete_accessible_interface(uint32_t uniqueId) {
    QAccessible_DeleteAccessibleInterface(uniqueId);
}

void q_accessible_update_accessibility(void* event) {
    QAccessible_UpdateAccessibility((QAccessibleEvent*)event);
}

bool q_accessible_is_active() {
    return QAccessible_IsActive();
}

void q_accessible_set_active(bool active) {
    QAccessible_SetActive(active);
}

void q_accessible_set_root_object(void* object) {
    QAccessible_SetRootObject((QObject*)object);
}

void q_accessible_cleanup() {
    QAccessible_Cleanup();
}

libqt_pair /* tuple of int and int */ q_accessible_q_accessible_text_boundary_helper(void* cursor, int32_t boundaryType) {
    return QAccessible_QAccessibleTextBoundaryHelper((QTextCursor*)cursor, boundaryType);
}

void q_accessible_delete(void* self) {
    QAccessible_Delete((QAccessible*)(self));
}

QAccessible__State* q_accessible__state_new(void* other) {
    return QAccessible__State_new((QAccessible__State*)other);
}

QAccessible__State* q_accessible__state_new2(void* other) {
    return QAccessible__State_new2((QAccessible__State*)other);
}

QAccessible__State* q_accessible__state_new3() {
    return QAccessible__State_new3();
}

void q_accessible__state_copy_assign(void* self, void* other) {
    QAccessible__State_CopyAssign((QAccessible__State*)self, (QAccessible__State*)other);
}

void q_accessible__state_move_assign(void* self, void* other) {
    QAccessible__State_MoveAssign((QAccessible__State*)self, (QAccessible__State*)other);
}

void q_accessible__state_delete(void* self) {
    QAccessible__State_Delete((QAccessible__State*)(self));
}

void q_accessible__activationobserver_accessibility_active_changed(void* self, bool active) {
    QAccessible__ActivationObserver_AccessibilityActiveChanged((QAccessible__ActivationObserver*)self, active);
}

void q_accessible__activationobserver_operator_assign(void* self, void* param1) {
    QAccessible__ActivationObserver_OperatorAssign((QAccessible__ActivationObserver*)self, (QAccessible__ActivationObserver*)param1);
}

void q_accessible__activationobserver_delete(void* self) {
    QAccessible__ActivationObserver_Delete((QAccessible__ActivationObserver*)(self));
}
