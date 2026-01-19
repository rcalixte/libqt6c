#pragma once
#ifndef SRC_QT6C_LIBQACCESSIBLE_BASE_H
#define SRC_QT6C_LIBQACCESSIBLE_BASE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

struct pair_int_int;

typedef struct pair_int_int pair_int_int;

#ifndef PAIR_INT_INT
#define PAIR_INT_INT
struct pair_int_int {
    int first;
    int second;
};
#endif

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible.html)

/// q_accessible_new constructs a new QAccessible object.
///
/// @param other QAccessible*
///
QAccessible* q_accessible_new(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible.html)

/// q_accessible_new2 constructs a new QAccessible object and invalidates the source QAccessible object.
///
/// @param other QAccessible*
///
QAccessible* q_accessible_new2(void* other);

/// q_accessible_copy_assign shallow copies `other` into `self`.
///
/// @param self QAccessible*
/// @param other QAccessible*
///
void q_accessible_copy_assign(void* self, void* other);

/// q_accessible_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QAccessible*
/// @param other QAccessible*
///
void q_accessible_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible.html#installActivationObserver)
///
/// @param param1 QAccessible__ActivationObserver*
///
void q_accessible_install_activation_observer(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible.html#removeActivationObserver)
///
/// @param param1 QAccessible__ActivationObserver*
///
void q_accessible_remove_activation_observer(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible.html#queryAccessibleInterface)
///
/// @param param1 QObject*
///
QAccessibleInterface* q_accessible_query_accessible_interface(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible.html#uniqueId)
///
/// @param iface QAccessibleInterface*
///
uint32_t q_accessible_unique_id(void* iface);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible.html#accessibleInterface)
///
/// @param uniqueId uint32_t
///
QAccessibleInterface* q_accessible_accessible_interface(uint32_t uniqueId);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible.html#registerAccessibleInterface)
///
/// @param iface QAccessibleInterface*
///
uint32_t q_accessible_register_accessible_interface(void* iface);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible.html#deleteAccessibleInterface)
///
/// @param uniqueId uint32_t
///
void q_accessible_delete_accessible_interface(uint32_t uniqueId);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible.html#updateAccessibility)
///
/// @param event QAccessibleEvent*
///
void q_accessible_update_accessibility(void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible.html#isActive)
///
bool q_accessible_is_active();

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible.html#setActive)
///
/// @param active bool
///
void q_accessible_set_active(bool active);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible.html#setRootObject)
///
/// @param object QObject*
///
void q_accessible_set_root_object(void* object);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible.html#cleanup)
///
void q_accessible_cleanup();

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible.html#qAccessibleTextBoundaryHelper)
///
/// @param cursor QTextCursor*
/// @param boundaryType enum QAccessible__TextBoundaryType
///
/// @return pair_int_int tuple of int and int
///
pair_int_int q_accessible_q_accessible_text_boundary_helper(void* cursor, int32_t boundaryType);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible.html#dtor.QAccessible)
///
/// Delete this object from C++ memory.
///
/// @param self QAccessible*
///
void q_accessible_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html)

/// q_accessible__state_new constructs a new QAccessible::State object.
///
/// @param other QAccessible__State*
///
QAccessible__State* q_accessible__state_new(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html)

/// q_accessible__state_new2 constructs a new QAccessible::State object and invalidates the source QAccessible::State object.
///
/// @param other QAccessible__State*
///
QAccessible__State* q_accessible__state_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html)

/// q_accessible__state_new3 constructs a new QAccessible::State object.
///
QAccessible__State* q_accessible__state_new3();

/// q_accessible__state_copy_assign shallow copies `other` into `self`.
///
/// @param self QAccessible__State*
/// @param other QAccessible__State*
///
void q_accessible__state_copy_assign(void* self, void* other);

/// q_accessible__state_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QAccessible__State*
/// @param other QAccessible__State*
///
void q_accessible__state_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#disabled-var)
///
/// @param self QAccessible__State*
///
uint64_t q_accessible__state_disabled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#disabled-var)
///
/// @param self QAccessible__State*
/// @param disabled uint64_t
///
void q_accessible__state_set_disabled(void* self, uint64_t disabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#selected-var)
///
/// @param self QAccessible__State*
///
uint64_t q_accessible__state_selected(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#selected-var)
///
/// @param self QAccessible__State*
/// @param selected uint64_t
///
void q_accessible__state_set_selected(void* self, uint64_t selected);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#focusable-var)
///
/// @param self QAccessible__State*
///
uint64_t q_accessible__state_focusable(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#focusable-var)
///
/// @param self QAccessible__State*
/// @param focusable uint64_t
///
void q_accessible__state_set_focusable(void* self, uint64_t focusable);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#focused-var)
///
/// @param self QAccessible__State*
///
uint64_t q_accessible__state_focused(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#focused-var)
///
/// @param self QAccessible__State*
/// @param focused uint64_t
///
void q_accessible__state_set_focused(void* self, uint64_t focused);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#pressed-var)
///
/// @param self QAccessible__State*
///
uint64_t q_accessible__state_pressed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#pressed-var)
///
/// @param self QAccessible__State*
/// @param pressed uint64_t
///
void q_accessible__state_set_pressed(void* self, uint64_t pressed);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#checkable-var)
///
/// @param self QAccessible__State*
///
uint64_t q_accessible__state_checkable(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#checkable-var)
///
/// @param self QAccessible__State*
/// @param checkable uint64_t
///
void q_accessible__state_set_checkable(void* self, uint64_t checkable);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#checked-var)
///
/// @param self QAccessible__State*
///
uint64_t q_accessible__state_checked(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#checked-var)
///
/// @param self QAccessible__State*
/// @param checked uint64_t
///
void q_accessible__state_set_checked(void* self, uint64_t checked);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#checkStateMixed-var)
///
/// @param self QAccessible__State*
///
uint64_t q_accessible__state_check_state_mixed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#checkStateMixed-var)
///
/// @param self QAccessible__State*
/// @param checkStateMixed uint64_t
///
void q_accessible__state_set_check_state_mixed(void* self, uint64_t checkStateMixed);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#readOnly-var)
///
/// @param self QAccessible__State*
///
uint64_t q_accessible__state_read_only(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#readOnly-var)
///
/// @param self QAccessible__State*
/// @param readOnly uint64_t
///
void q_accessible__state_set_read_only(void* self, uint64_t readOnly);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#hotTracked-var)
///
/// @param self QAccessible__State*
///
uint64_t q_accessible__state_hot_tracked(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#hotTracked-var)
///
/// @param self QAccessible__State*
/// @param hotTracked uint64_t
///
void q_accessible__state_set_hot_tracked(void* self, uint64_t hotTracked);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#defaultButton-var)
///
/// @param self QAccessible__State*
///
uint64_t q_accessible__state_default_button(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#defaultButton-var)
///
/// @param self QAccessible__State*
/// @param defaultButton uint64_t
///
void q_accessible__state_set_default_button(void* self, uint64_t defaultButton);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#expanded-var)
///
/// @param self QAccessible__State*
///
uint64_t q_accessible__state_expanded(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#expanded-var)
///
/// @param self QAccessible__State*
/// @param expanded uint64_t
///
void q_accessible__state_set_expanded(void* self, uint64_t expanded);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#collapsed-var)
///
/// @param self QAccessible__State*
///
uint64_t q_accessible__state_collapsed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#collapsed-var)
///
/// @param self QAccessible__State*
/// @param collapsed uint64_t
///
void q_accessible__state_set_collapsed(void* self, uint64_t collapsed);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#busy-var)
///
/// @param self QAccessible__State*
///
uint64_t q_accessible__state_busy(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#busy-var)
///
/// @param self QAccessible__State*
/// @param busy uint64_t
///
void q_accessible__state_set_busy(void* self, uint64_t busy);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#expandable-var)
///
/// @param self QAccessible__State*
///
uint64_t q_accessible__state_expandable(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#expandable-var)
///
/// @param self QAccessible__State*
/// @param expandable uint64_t
///
void q_accessible__state_set_expandable(void* self, uint64_t expandable);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#marqueed-var)
///
/// @param self QAccessible__State*
///
uint64_t q_accessible__state_marqueed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#marqueed-var)
///
/// @param self QAccessible__State*
/// @param marqueed uint64_t
///
void q_accessible__state_set_marqueed(void* self, uint64_t marqueed);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#animated-var)
///
/// @param self QAccessible__State*
///
uint64_t q_accessible__state_animated(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#animated-var)
///
/// @param self QAccessible__State*
/// @param animated uint64_t
///
void q_accessible__state_set_animated(void* self, uint64_t animated);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#invisible-var)
///
/// @param self QAccessible__State*
///
uint64_t q_accessible__state_invisible(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#invisible-var)
///
/// @param self QAccessible__State*
/// @param invisible uint64_t
///
void q_accessible__state_set_invisible(void* self, uint64_t invisible);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#offscreen-var)
///
/// @param self QAccessible__State*
///
uint64_t q_accessible__state_offscreen(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#offscreen-var)
///
/// @param self QAccessible__State*
/// @param offscreen uint64_t
///
void q_accessible__state_set_offscreen(void* self, uint64_t offscreen);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#sizeable-var)
///
/// @param self QAccessible__State*
///
uint64_t q_accessible__state_sizeable(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#sizeable-var)
///
/// @param self QAccessible__State*
/// @param sizeable uint64_t
///
void q_accessible__state_set_sizeable(void* self, uint64_t sizeable);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#movable-var)
///
/// @param self QAccessible__State*
///
uint64_t q_accessible__state_movable(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#movable-var)
///
/// @param self QAccessible__State*
/// @param movable uint64_t
///
void q_accessible__state_set_movable(void* self, uint64_t movable);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#selfVoicing-var)
///
/// @param self QAccessible__State*
///
uint64_t q_accessible__state_self_voicing(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#selfVoicing-var)
///
/// @param self QAccessible__State*
/// @param selfVoicing uint64_t
///
void q_accessible__state_set_self_voicing(void* self, uint64_t selfVoicing);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#selectable-var)
///
/// @param self QAccessible__State*
///
uint64_t q_accessible__state_selectable(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#selectable-var)
///
/// @param self QAccessible__State*
/// @param selectable uint64_t
///
void q_accessible__state_set_selectable(void* self, uint64_t selectable);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#linked-var)
///
/// @param self QAccessible__State*
///
uint64_t q_accessible__state_linked(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#linked-var)
///
/// @param self QAccessible__State*
/// @param linked uint64_t
///
void q_accessible__state_set_linked(void* self, uint64_t linked);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#traversed-var)
///
/// @param self QAccessible__State*
///
uint64_t q_accessible__state_traversed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#traversed-var)
///
/// @param self QAccessible__State*
/// @param traversed uint64_t
///
void q_accessible__state_set_traversed(void* self, uint64_t traversed);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#multiSelectable-var)
///
/// @param self QAccessible__State*
///
uint64_t q_accessible__state_multi_selectable(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#multiSelectable-var)
///
/// @param self QAccessible__State*
/// @param multiSelectable uint64_t
///
void q_accessible__state_set_multi_selectable(void* self, uint64_t multiSelectable);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#extSelectable-var)
///
/// @param self QAccessible__State*
///
uint64_t q_accessible__state_ext_selectable(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#extSelectable-var)
///
/// @param self QAccessible__State*
/// @param extSelectable uint64_t
///
void q_accessible__state_set_ext_selectable(void* self, uint64_t extSelectable);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#passwordEdit-var)
///
/// @param self QAccessible__State*
///
uint64_t q_accessible__state_password_edit(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#passwordEdit-var)
///
/// @param self QAccessible__State*
/// @param passwordEdit uint64_t
///
void q_accessible__state_set_password_edit(void* self, uint64_t passwordEdit);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#hasPopup-var)
///
/// @param self QAccessible__State*
///
uint64_t q_accessible__state_has_popup(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#hasPopup-var)
///
/// @param self QAccessible__State*
/// @param hasPopup uint64_t
///
void q_accessible__state_set_has_popup(void* self, uint64_t hasPopup);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#modal-var)
///
/// @param self QAccessible__State*
///
uint64_t q_accessible__state_modal(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#modal-var)
///
/// @param self QAccessible__State*
/// @param modal uint64_t
///
void q_accessible__state_set_modal(void* self, uint64_t modal);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#active-var)
///
/// @param self QAccessible__State*
///
uint64_t q_accessible__state_active(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#active-var)
///
/// @param self QAccessible__State*
/// @param active uint64_t
///
void q_accessible__state_set_active(void* self, uint64_t active);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#invalid-var)
///
/// @param self QAccessible__State*
///
uint64_t q_accessible__state_invalid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#invalid-var)
///
/// @param self QAccessible__State*
/// @param invalid uint64_t
///
void q_accessible__state_set_invalid(void* self, uint64_t invalid);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#editable-var)
///
/// @param self QAccessible__State*
///
uint64_t q_accessible__state_editable(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#editable-var)
///
/// @param self QAccessible__State*
/// @param editable uint64_t
///
void q_accessible__state_set_editable(void* self, uint64_t editable);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#multiLine-var)
///
/// @param self QAccessible__State*
///
uint64_t q_accessible__state_multi_line(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#multiLine-var)
///
/// @param self QAccessible__State*
/// @param multiLine uint64_t
///
void q_accessible__state_set_multi_line(void* self, uint64_t multiLine);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#selectableText-var)
///
/// @param self QAccessible__State*
///
uint64_t q_accessible__state_selectable_text(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#selectableText-var)
///
/// @param self QAccessible__State*
/// @param selectableText uint64_t
///
void q_accessible__state_set_selectable_text(void* self, uint64_t selectableText);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#supportsAutoCompletion-var)
///
/// @param self QAccessible__State*
///
uint64_t q_accessible__state_supports_auto_completion(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#supportsAutoCompletion-var)
///
/// @param self QAccessible__State*
/// @param supportsAutoCompletion uint64_t
///
void q_accessible__state_set_supports_auto_completion(void* self, uint64_t supportsAutoCompletion);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#searchEdit-var)
///
/// @param self QAccessible__State*
///
uint64_t q_accessible__state_search_edit(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-state.html#searchEdit-var)
///
/// @param self QAccessible__State*
/// @param searchEdit uint64_t
///
void q_accessible__state_set_search_edit(void* self, uint64_t searchEdit);

/// Delete this object from C++ memory.
///
/// @param self QAccessible__State*
///
void q_accessible__state_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-activationobserver.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-activationobserver.html#accessibilityActiveChanged)
///
/// @param self QAccessible__ActivationObserver*
/// @param active bool
///
void q_accessible__activationobserver_accessibility_active_changed(void* self, bool active);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-activationobserver.html#operator-eq)
///
/// @param self QAccessible__ActivationObserver*
/// @param param1 QAccessible__ActivationObserver*
///
void q_accessible__activationobserver_operator_assign(void* self, void* param1);

/// Delete this object from C++ memory.
///
/// @param self QAccessible__ActivationObserver*
///
void q_accessible__activationobserver_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-base.html#public-types)

typedef enum {
    QACCESSIBLE_EVENT_SOUNDPLAYED = 1,
    QACCESSIBLE_EVENT_ALERT = 2,
    QACCESSIBLE_EVENT_FOREGROUNDCHANGED = 3,
    QACCESSIBLE_EVENT_MENUSTART = 4,
    QACCESSIBLE_EVENT_MENUEND = 5,
    QACCESSIBLE_EVENT_POPUPMENUSTART = 6,
    QACCESSIBLE_EVENT_POPUPMENUEND = 7,
    QACCESSIBLE_EVENT_CONTEXTHELPSTART = 12,
    QACCESSIBLE_EVENT_CONTEXTHELPEND = 13,
    QACCESSIBLE_EVENT_DRAGDROPSTART = 14,
    QACCESSIBLE_EVENT_DRAGDROPEND = 15,
    QACCESSIBLE_EVENT_DIALOGSTART = 16,
    QACCESSIBLE_EVENT_DIALOGEND = 17,
    QACCESSIBLE_EVENT_SCROLLINGSTART = 18,
    QACCESSIBLE_EVENT_SCROLLINGEND = 19,
    QACCESSIBLE_EVENT_MENUCOMMAND = 24,
    QACCESSIBLE_EVENT_ACTIONCHANGED = 257,
    QACCESSIBLE_EVENT_ACTIVEDESCENDANTCHANGED = 258,
    QACCESSIBLE_EVENT_ATTRIBUTECHANGED = 259,
    QACCESSIBLE_EVENT_DOCUMENTCONTENTCHANGED = 260,
    QACCESSIBLE_EVENT_DOCUMENTLOADCOMPLETE = 261,
    QACCESSIBLE_EVENT_DOCUMENTLOADSTOPPED = 262,
    QACCESSIBLE_EVENT_DOCUMENTRELOAD = 263,
    QACCESSIBLE_EVENT_HYPERLINKENDINDEXCHANGED = 264,
    QACCESSIBLE_EVENT_HYPERLINKNUMBEROFANCHORSCHANGED = 265,
    QACCESSIBLE_EVENT_HYPERLINKSELECTEDLINKCHANGED = 266,
    QACCESSIBLE_EVENT_HYPERTEXTLINKACTIVATED = 267,
    QACCESSIBLE_EVENT_HYPERTEXTLINKSELECTED = 268,
    QACCESSIBLE_EVENT_HYPERLINKSTARTINDEXCHANGED = 269,
    QACCESSIBLE_EVENT_HYPERTEXTCHANGED = 270,
    QACCESSIBLE_EVENT_HYPERTEXTNLINKSCHANGED = 271,
    QACCESSIBLE_EVENT_OBJECTATTRIBUTECHANGED = 272,
    QACCESSIBLE_EVENT_PAGECHANGED = 273,
    QACCESSIBLE_EVENT_SECTIONCHANGED = 274,
    QACCESSIBLE_EVENT_TABLECAPTIONCHANGED = 275,
    QACCESSIBLE_EVENT_TABLECOLUMNDESCRIPTIONCHANGED = 276,
    QACCESSIBLE_EVENT_TABLECOLUMNHEADERCHANGED = 277,
    QACCESSIBLE_EVENT_TABLEMODELCHANGED = 278,
    QACCESSIBLE_EVENT_TABLEROWDESCRIPTIONCHANGED = 279,
    QACCESSIBLE_EVENT_TABLEROWHEADERCHANGED = 280,
    QACCESSIBLE_EVENT_TABLESUMMARYCHANGED = 281,
    QACCESSIBLE_EVENT_TEXTATTRIBUTECHANGED = 282,
    QACCESSIBLE_EVENT_TEXTCARETMOVED = 283,
    QACCESSIBLE_EVENT_TEXTCOLUMNCHANGED = 285,
    QACCESSIBLE_EVENT_TEXTINSERTED = 286,
    QACCESSIBLE_EVENT_TEXTREMOVED = 287,
    QACCESSIBLE_EVENT_TEXTUPDATED = 288,
    QACCESSIBLE_EVENT_TEXTSELECTIONCHANGED = 289,
    QACCESSIBLE_EVENT_VISIBLEDATACHANGED = 290,
    QACCESSIBLE_EVENT_OBJECTCREATED = 32768,
    QACCESSIBLE_EVENT_OBJECTDESTROYED = 32769,
    QACCESSIBLE_EVENT_OBJECTSHOW = 32770,
    QACCESSIBLE_EVENT_OBJECTHIDE = 32771,
    QACCESSIBLE_EVENT_OBJECTREORDER = 32772,
    QACCESSIBLE_EVENT_FOCUS = 32773,
    QACCESSIBLE_EVENT_SELECTION = 32774,
    QACCESSIBLE_EVENT_SELECTIONADD = 32775,
    QACCESSIBLE_EVENT_SELECTIONREMOVE = 32776,
    QACCESSIBLE_EVENT_SELECTIONWITHIN = 32777,
    QACCESSIBLE_EVENT_STATECHANGED = 32778,
    QACCESSIBLE_EVENT_LOCATIONCHANGED = 32779,
    QACCESSIBLE_EVENT_NAMECHANGED = 32780,
    QACCESSIBLE_EVENT_DESCRIPTIONCHANGED = 32781,
    QACCESSIBLE_EVENT_VALUECHANGED = 32782,
    QACCESSIBLE_EVENT_PARENTCHANGED = 32783,
    QACCESSIBLE_EVENT_HELPCHANGED = 32928,
    QACCESSIBLE_EVENT_DEFAULTACTIONCHANGED = 32944,
    QACCESSIBLE_EVENT_ACCELERATORCHANGED = 32960,
    QACCESSIBLE_EVENT_ANNOUNCEMENT = 32976,
    QACCESSIBLE_EVENT_IDENTIFIERCHANGED = 32992,
    QACCESSIBLE_EVENT_INVALIDEVENT = 32961
} QAccessible__Event;

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-base.html#public-types)

typedef enum {
    QACCESSIBLE_ROLE_NOROLE = 0,
    QACCESSIBLE_ROLE_TITLEBAR = 1,
    QACCESSIBLE_ROLE_MENUBAR = 2,
    QACCESSIBLE_ROLE_SCROLLBAR = 3,
    QACCESSIBLE_ROLE_GRIP = 4,
    QACCESSIBLE_ROLE_SOUND = 5,
    QACCESSIBLE_ROLE_CURSOR = 6,
    QACCESSIBLE_ROLE_CARET = 7,
    QACCESSIBLE_ROLE_ALERTMESSAGE = 8,
    QACCESSIBLE_ROLE_WINDOW = 9,
    QACCESSIBLE_ROLE_CLIENT = 10,
    QACCESSIBLE_ROLE_POPUPMENU = 11,
    QACCESSIBLE_ROLE_MENUITEM = 12,
    QACCESSIBLE_ROLE_TOOLTIP = 13,
    QACCESSIBLE_ROLE_APPLICATION = 14,
    QACCESSIBLE_ROLE_DOCUMENT = 15,
    QACCESSIBLE_ROLE_PANE = 16,
    QACCESSIBLE_ROLE_CHART = 17,
    QACCESSIBLE_ROLE_DIALOG = 18,
    QACCESSIBLE_ROLE_BORDER = 19,
    QACCESSIBLE_ROLE_GROUPING = 20,
    QACCESSIBLE_ROLE_SEPARATOR = 21,
    QACCESSIBLE_ROLE_TOOLBAR = 22,
    QACCESSIBLE_ROLE_STATUSBAR = 23,
    QACCESSIBLE_ROLE_TABLE = 24,
    QACCESSIBLE_ROLE_COLUMNHEADER = 25,
    QACCESSIBLE_ROLE_ROWHEADER = 26,
    QACCESSIBLE_ROLE_COLUMN = 27,
    QACCESSIBLE_ROLE_ROW = 28,
    QACCESSIBLE_ROLE_CELL = 29,
    QACCESSIBLE_ROLE_LINK = 30,
    QACCESSIBLE_ROLE_HELPBALLOON = 31,
    QACCESSIBLE_ROLE_ASSISTANT = 32,
    QACCESSIBLE_ROLE_LIST = 33,
    QACCESSIBLE_ROLE_LISTITEM = 34,
    QACCESSIBLE_ROLE_TREE = 35,
    QACCESSIBLE_ROLE_TREEITEM = 36,
    QACCESSIBLE_ROLE_PAGETAB = 37,
    QACCESSIBLE_ROLE_PROPERTYPAGE = 38,
    QACCESSIBLE_ROLE_INDICATOR = 39,
    QACCESSIBLE_ROLE_GRAPHIC = 40,
    QACCESSIBLE_ROLE_STATICTEXT = 41,
    QACCESSIBLE_ROLE_EDITABLETEXT = 42,
    QACCESSIBLE_ROLE_BUTTON = 43,
    QACCESSIBLE_ROLE_PUSHBUTTON = 43,
    QACCESSIBLE_ROLE_CHECKBOX = 44,
    QACCESSIBLE_ROLE_RADIOBUTTON = 45,
    QACCESSIBLE_ROLE_COMBOBOX = 46,
    QACCESSIBLE_ROLE_PROGRESSBAR = 48,
    QACCESSIBLE_ROLE_DIAL = 49,
    QACCESSIBLE_ROLE_HOTKEYFIELD = 50,
    QACCESSIBLE_ROLE_SLIDER = 51,
    QACCESSIBLE_ROLE_SPINBOX = 52,
    QACCESSIBLE_ROLE_CANVAS = 53,
    QACCESSIBLE_ROLE_ANIMATION = 54,
    QACCESSIBLE_ROLE_EQUATION = 55,
    QACCESSIBLE_ROLE_BUTTONDROPDOWN = 56,
    QACCESSIBLE_ROLE_BUTTONMENU = 57,
    QACCESSIBLE_ROLE_BUTTONDROPGRID = 58,
    QACCESSIBLE_ROLE_WHITESPACE = 59,
    QACCESSIBLE_ROLE_PAGETABLIST = 60,
    QACCESSIBLE_ROLE_CLOCK = 61,
    QACCESSIBLE_ROLE_SPLITTER = 62,
    QACCESSIBLE_ROLE_LAYEREDPANE = 128,
    QACCESSIBLE_ROLE_TERMINAL = 129,
    QACCESSIBLE_ROLE_DESKTOP = 130,
    QACCESSIBLE_ROLE_PARAGRAPH = 131,
    QACCESSIBLE_ROLE_WEBDOCUMENT = 132,
    QACCESSIBLE_ROLE_SECTION = 133,
    QACCESSIBLE_ROLE_NOTIFICATION = 134,
    QACCESSIBLE_ROLE_COLORCHOOSER = 1028,
    QACCESSIBLE_ROLE_FOOTER = 1038,
    QACCESSIBLE_ROLE_FORM = 1040,
    QACCESSIBLE_ROLE_HEADING = 1044,
    QACCESSIBLE_ROLE_NOTE = 1051,
    QACCESSIBLE_ROLE_COMPLEMENTARYCONTENT = 1068,
    QACCESSIBLE_ROLE_USERROLE = 65535
} QAccessible__Role;

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-base.html#public-types)

typedef enum {
    QACCESSIBLE_TEXT_NAME = 0,
    QACCESSIBLE_TEXT_DESCRIPTION = 1,
    QACCESSIBLE_TEXT_VALUE = 2,
    QACCESSIBLE_TEXT_HELP = 3,
    QACCESSIBLE_TEXT_ACCELERATOR = 4,
    QACCESSIBLE_TEXT_DEBUGDESCRIPTION = 5,
    QACCESSIBLE_TEXT_IDENTIFIER = 6,
    QACCESSIBLE_TEXT_USERTEXT = 65535
} QAccessible__Text;

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-base.html#public-types)

typedef enum {
    QACCESSIBLE_RELATIONFLAG_LABEL = 1,
    QACCESSIBLE_RELATIONFLAG_LABELLED = 2,
    QACCESSIBLE_RELATIONFLAG_CONTROLLER = 4,
    QACCESSIBLE_RELATIONFLAG_CONTROLLED = 8,
    QACCESSIBLE_RELATIONFLAG_DESCRIPTIONFOR = 16,
    QACCESSIBLE_RELATIONFLAG_DESCRIBED = 32,
    QACCESSIBLE_RELATIONFLAG_FLOWSFROM = 64,
    QACCESSIBLE_RELATIONFLAG_FLOWSTO = 128,
    QACCESSIBLE_RELATIONFLAG_ALLRELATIONS = -1
} QAccessible__RelationFlag;

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-base.html#public-types)

typedef enum {
    QACCESSIBLE_INTERFACETYPE_TEXTINTERFACE = 0,
    QACCESSIBLE_INTERFACETYPE_EDITABLETEXTINTERFACE = 1,
    QACCESSIBLE_INTERFACETYPE_VALUEINTERFACE = 2,
    QACCESSIBLE_INTERFACETYPE_ACTIONINTERFACE = 3,
    QACCESSIBLE_INTERFACETYPE_IMAGEINTERFACE = 4,
    QACCESSIBLE_INTERFACETYPE_TABLEINTERFACE = 5,
    QACCESSIBLE_INTERFACETYPE_TABLECELLINTERFACE = 6,
    QACCESSIBLE_INTERFACETYPE_HYPERLINKINTERFACE = 7,
    QACCESSIBLE_INTERFACETYPE_SELECTIONINTERFACE = 8,
    QACCESSIBLE_INTERFACETYPE_ATTRIBUTESINTERFACE = 9
} QAccessible__InterfaceType;

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-base.html#public-types)

typedef enum {
    QACCESSIBLE_TEXTBOUNDARYTYPE_CHARBOUNDARY = 0,
    QACCESSIBLE_TEXTBOUNDARYTYPE_WORDBOUNDARY = 1,
    QACCESSIBLE_TEXTBOUNDARYTYPE_SENTENCEBOUNDARY = 2,
    QACCESSIBLE_TEXTBOUNDARYTYPE_PARAGRAPHBOUNDARY = 3,
    QACCESSIBLE_TEXTBOUNDARYTYPE_LINEBOUNDARY = 4,
    QACCESSIBLE_TEXTBOUNDARYTYPE_NOBOUNDARY = 5
} QAccessible__TextBoundaryType;

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-base.html#public-types)

typedef enum {
    QACCESSIBLE_ATTRIBUTE_CUSTOM = 0,
    QACCESSIBLE_ATTRIBUTE_LEVEL = 1
} QAccessible__Attribute;

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessible-base.html#public-types)

typedef enum {
    QACCESSIBLE_ANNOUNCEMENTPOLITENESS_POLITE = 0,
    QACCESSIBLE_ANNOUNCEMENTPOLITENESS_ASSERTIVE = 1
} QAccessible__AnnouncementPoliteness;

#endif
