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

QAccessible__UpdateHandler q_accessible_install_update_handler(void (*param1)(void* funcparam1)) {
    return (QAccessible__UpdateHandler)QAccessible_InstallUpdateHandler((intptr_t)param1);
}

QAccessible__RootObjectHandler q_accessible_install_root_object_handler(void (*param1)(void* funcparam1)) {
    return (QAccessible__RootObjectHandler)QAccessible_InstallRootObjectHandler((intptr_t)param1);
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

pair_int_int /* tuple of int and int */ q_accessible_q_accessible_text_boundary_helper(void* cursor, int32_t boundaryType) {
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

uint64_t q_accessible__state_disabled(void* self) {
    return QAccessible__State_Disabled((QAccessible__State*)self);
}

void q_accessible__state_set_disabled(void* self, uint64_t disabled) {
    QAccessible__State_SetDisabled((QAccessible__State*)self, disabled);
}

uint64_t q_accessible__state_selected(void* self) {
    return QAccessible__State_Selected((QAccessible__State*)self);
}

void q_accessible__state_set_selected(void* self, uint64_t selected) {
    QAccessible__State_SetSelected((QAccessible__State*)self, selected);
}

uint64_t q_accessible__state_focusable(void* self) {
    return QAccessible__State_Focusable((QAccessible__State*)self);
}

void q_accessible__state_set_focusable(void* self, uint64_t focusable) {
    QAccessible__State_SetFocusable((QAccessible__State*)self, focusable);
}

uint64_t q_accessible__state_focused(void* self) {
    return QAccessible__State_Focused((QAccessible__State*)self);
}

void q_accessible__state_set_focused(void* self, uint64_t focused) {
    QAccessible__State_SetFocused((QAccessible__State*)self, focused);
}

uint64_t q_accessible__state_pressed(void* self) {
    return QAccessible__State_Pressed((QAccessible__State*)self);
}

void q_accessible__state_set_pressed(void* self, uint64_t pressed) {
    QAccessible__State_SetPressed((QAccessible__State*)self, pressed);
}

uint64_t q_accessible__state_checkable(void* self) {
    return QAccessible__State_Checkable((QAccessible__State*)self);
}

void q_accessible__state_set_checkable(void* self, uint64_t checkable) {
    QAccessible__State_SetCheckable((QAccessible__State*)self, checkable);
}

uint64_t q_accessible__state_checked(void* self) {
    return QAccessible__State_Checked((QAccessible__State*)self);
}

void q_accessible__state_set_checked(void* self, uint64_t checked) {
    QAccessible__State_SetChecked((QAccessible__State*)self, checked);
}

uint64_t q_accessible__state_check_state_mixed(void* self) {
    return QAccessible__State_CheckStateMixed((QAccessible__State*)self);
}

void q_accessible__state_set_check_state_mixed(void* self, uint64_t checkStateMixed) {
    QAccessible__State_SetCheckStateMixed((QAccessible__State*)self, checkStateMixed);
}

uint64_t q_accessible__state_read_only(void* self) {
    return QAccessible__State_ReadOnly((QAccessible__State*)self);
}

void q_accessible__state_set_read_only(void* self, uint64_t readOnly) {
    QAccessible__State_SetReadOnly((QAccessible__State*)self, readOnly);
}

uint64_t q_accessible__state_hot_tracked(void* self) {
    return QAccessible__State_HotTracked((QAccessible__State*)self);
}

void q_accessible__state_set_hot_tracked(void* self, uint64_t hotTracked) {
    QAccessible__State_SetHotTracked((QAccessible__State*)self, hotTracked);
}

uint64_t q_accessible__state_default_button(void* self) {
    return QAccessible__State_DefaultButton((QAccessible__State*)self);
}

void q_accessible__state_set_default_button(void* self, uint64_t defaultButton) {
    QAccessible__State_SetDefaultButton((QAccessible__State*)self, defaultButton);
}

uint64_t q_accessible__state_expanded(void* self) {
    return QAccessible__State_Expanded((QAccessible__State*)self);
}

void q_accessible__state_set_expanded(void* self, uint64_t expanded) {
    QAccessible__State_SetExpanded((QAccessible__State*)self, expanded);
}

uint64_t q_accessible__state_collapsed(void* self) {
    return QAccessible__State_Collapsed((QAccessible__State*)self);
}

void q_accessible__state_set_collapsed(void* self, uint64_t collapsed) {
    QAccessible__State_SetCollapsed((QAccessible__State*)self, collapsed);
}

uint64_t q_accessible__state_busy(void* self) {
    return QAccessible__State_Busy((QAccessible__State*)self);
}

void q_accessible__state_set_busy(void* self, uint64_t busy) {
    QAccessible__State_SetBusy((QAccessible__State*)self, busy);
}

uint64_t q_accessible__state_expandable(void* self) {
    return QAccessible__State_Expandable((QAccessible__State*)self);
}

void q_accessible__state_set_expandable(void* self, uint64_t expandable) {
    QAccessible__State_SetExpandable((QAccessible__State*)self, expandable);
}

uint64_t q_accessible__state_marqueed(void* self) {
    return QAccessible__State_Marqueed((QAccessible__State*)self);
}

void q_accessible__state_set_marqueed(void* self, uint64_t marqueed) {
    QAccessible__State_SetMarqueed((QAccessible__State*)self, marqueed);
}

uint64_t q_accessible__state_animated(void* self) {
    return QAccessible__State_Animated((QAccessible__State*)self);
}

void q_accessible__state_set_animated(void* self, uint64_t animated) {
    QAccessible__State_SetAnimated((QAccessible__State*)self, animated);
}

uint64_t q_accessible__state_invisible(void* self) {
    return QAccessible__State_Invisible((QAccessible__State*)self);
}

void q_accessible__state_set_invisible(void* self, uint64_t invisible) {
    QAccessible__State_SetInvisible((QAccessible__State*)self, invisible);
}

uint64_t q_accessible__state_offscreen(void* self) {
    return QAccessible__State_Offscreen((QAccessible__State*)self);
}

void q_accessible__state_set_offscreen(void* self, uint64_t offscreen) {
    QAccessible__State_SetOffscreen((QAccessible__State*)self, offscreen);
}

uint64_t q_accessible__state_sizeable(void* self) {
    return QAccessible__State_Sizeable((QAccessible__State*)self);
}

void q_accessible__state_set_sizeable(void* self, uint64_t sizeable) {
    QAccessible__State_SetSizeable((QAccessible__State*)self, sizeable);
}

uint64_t q_accessible__state_movable(void* self) {
    return QAccessible__State_Movable((QAccessible__State*)self);
}

void q_accessible__state_set_movable(void* self, uint64_t movable) {
    QAccessible__State_SetMovable((QAccessible__State*)self, movable);
}

uint64_t q_accessible__state_self_voicing(void* self) {
    return QAccessible__State_SelfVoicing((QAccessible__State*)self);
}

void q_accessible__state_set_self_voicing(void* self, uint64_t selfVoicing) {
    QAccessible__State_SetSelfVoicing((QAccessible__State*)self, selfVoicing);
}

uint64_t q_accessible__state_selectable(void* self) {
    return QAccessible__State_Selectable((QAccessible__State*)self);
}

void q_accessible__state_set_selectable(void* self, uint64_t selectable) {
    QAccessible__State_SetSelectable((QAccessible__State*)self, selectable);
}

uint64_t q_accessible__state_linked(void* self) {
    return QAccessible__State_Linked((QAccessible__State*)self);
}

void q_accessible__state_set_linked(void* self, uint64_t linked) {
    QAccessible__State_SetLinked((QAccessible__State*)self, linked);
}

uint64_t q_accessible__state_traversed(void* self) {
    return QAccessible__State_Traversed((QAccessible__State*)self);
}

void q_accessible__state_set_traversed(void* self, uint64_t traversed) {
    QAccessible__State_SetTraversed((QAccessible__State*)self, traversed);
}

uint64_t q_accessible__state_multi_selectable(void* self) {
    return QAccessible__State_MultiSelectable((QAccessible__State*)self);
}

void q_accessible__state_set_multi_selectable(void* self, uint64_t multiSelectable) {
    QAccessible__State_SetMultiSelectable((QAccessible__State*)self, multiSelectable);
}

uint64_t q_accessible__state_ext_selectable(void* self) {
    return QAccessible__State_ExtSelectable((QAccessible__State*)self);
}

void q_accessible__state_set_ext_selectable(void* self, uint64_t extSelectable) {
    QAccessible__State_SetExtSelectable((QAccessible__State*)self, extSelectable);
}

uint64_t q_accessible__state_password_edit(void* self) {
    return QAccessible__State_PasswordEdit((QAccessible__State*)self);
}

void q_accessible__state_set_password_edit(void* self, uint64_t passwordEdit) {
    QAccessible__State_SetPasswordEdit((QAccessible__State*)self, passwordEdit);
}

uint64_t q_accessible__state_has_popup(void* self) {
    return QAccessible__State_HasPopup((QAccessible__State*)self);
}

void q_accessible__state_set_has_popup(void* self, uint64_t hasPopup) {
    QAccessible__State_SetHasPopup((QAccessible__State*)self, hasPopup);
}

uint64_t q_accessible__state_modal(void* self) {
    return QAccessible__State_Modal((QAccessible__State*)self);
}

void q_accessible__state_set_modal(void* self, uint64_t modal) {
    QAccessible__State_SetModal((QAccessible__State*)self, modal);
}

uint64_t q_accessible__state_active(void* self) {
    return QAccessible__State_Active((QAccessible__State*)self);
}

void q_accessible__state_set_active(void* self, uint64_t active) {
    QAccessible__State_SetActive((QAccessible__State*)self, active);
}

uint64_t q_accessible__state_invalid(void* self) {
    return QAccessible__State_Invalid((QAccessible__State*)self);
}

void q_accessible__state_set_invalid(void* self, uint64_t invalid) {
    QAccessible__State_SetInvalid((QAccessible__State*)self, invalid);
}

uint64_t q_accessible__state_editable(void* self) {
    return QAccessible__State_Editable((QAccessible__State*)self);
}

void q_accessible__state_set_editable(void* self, uint64_t editable) {
    QAccessible__State_SetEditable((QAccessible__State*)self, editable);
}

uint64_t q_accessible__state_multi_line(void* self) {
    return QAccessible__State_MultiLine((QAccessible__State*)self);
}

void q_accessible__state_set_multi_line(void* self, uint64_t multiLine) {
    QAccessible__State_SetMultiLine((QAccessible__State*)self, multiLine);
}

uint64_t q_accessible__state_selectable_text(void* self) {
    return QAccessible__State_SelectableText((QAccessible__State*)self);
}

void q_accessible__state_set_selectable_text(void* self, uint64_t selectableText) {
    QAccessible__State_SetSelectableText((QAccessible__State*)self, selectableText);
}

uint64_t q_accessible__state_supports_auto_completion(void* self) {
    return QAccessible__State_SupportsAutoCompletion((QAccessible__State*)self);
}

void q_accessible__state_set_supports_auto_completion(void* self, uint64_t supportsAutoCompletion) {
    QAccessible__State_SetSupportsAutoCompletion((QAccessible__State*)self, supportsAutoCompletion);
}

uint64_t q_accessible__state_search_edit(void* self) {
    return QAccessible__State_SearchEdit((QAccessible__State*)self);
}

void q_accessible__state_set_search_edit(void* self, uint64_t searchEdit) {
    QAccessible__State_SetSearchEdit((QAccessible__State*)self, searchEdit);
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
