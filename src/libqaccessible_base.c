#include "libqaccessible.hpp"
#include "libqevent.hpp"
#include "libqobject.hpp"
#include "libqtextcursor.hpp"
#include "libqcoreevent.hpp"
#include "libqaccessible_base.hpp"
#include "libqaccessible_base.h"

/// https://doc.qt.io/qt-6/qaccessible.html

/// q_accessible_new constructs a new QAccessible object.
///
/// ``` QAccessible* other ```
QAccessible* q_accessible_new(void* other) {
    return QAccessible_new((QAccessible*)other);
}

/// q_accessible_new2 constructs a new QAccessible object and invalidates the source QAccessible object.
///
/// ``` QAccessible* other ```
QAccessible* q_accessible_new2(void* other) {
    return QAccessible_new2((QAccessible*)other);
}

/// q_accessible_copy_assign shallow copies `other` into `self`.
///
/// ``` QAccessible* self, QAccessible* other ```
void q_accessible_copy_assign(void* self, void* other) {
    QAccessible_CopyAssign((QAccessible*)self, (QAccessible*)other);
}

/// q_accessible_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QAccessible* self, QAccessible* other ```
void q_accessible_move_assign(void* self, void* other) {
    QAccessible_MoveAssign((QAccessible*)self, (QAccessible*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessible.html#installActivationObserver)
///
/// ``` QAccessible__ActivationObserver* param1 ```
void q_accessible_install_activation_observer(void* param1) {
    QAccessible_InstallActivationObserver((QAccessible__ActivationObserver*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessible.html#removeActivationObserver)
///
/// ``` QAccessible__ActivationObserver* param1 ```
void q_accessible_remove_activation_observer(void* param1) {
    QAccessible_RemoveActivationObserver((QAccessible__ActivationObserver*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessible.html#queryAccessibleInterface)
///
/// ``` QObject* param1 ```
QAccessibleInterface* q_accessible_query_accessible_interface(void* param1) {
    return QAccessible_QueryAccessibleInterface((QObject*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessible.html#uniqueId)
///
/// ``` QAccessibleInterface* iface ```
uint32_t q_accessible_unique_id(void* iface) {
    return QAccessible_UniqueId((QAccessibleInterface*)iface);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessible.html#accessibleInterface)
///
/// ``` uint32_t uniqueId ```
QAccessibleInterface* q_accessible_accessible_interface(uint32_t uniqueId) {
    return QAccessible_AccessibleInterface(uniqueId);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessible.html#registerAccessibleInterface)
///
/// ``` QAccessibleInterface* iface ```
uint32_t q_accessible_register_accessible_interface(void* iface) {
    return QAccessible_RegisterAccessibleInterface((QAccessibleInterface*)iface);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessible.html#deleteAccessibleInterface)
///
/// ``` uint32_t uniqueId ```
void q_accessible_delete_accessible_interface(uint32_t uniqueId) {
    QAccessible_DeleteAccessibleInterface(uniqueId);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessible.html#updateAccessibility)
///
/// ``` QAccessibleEvent* event ```
void q_accessible_update_accessibility(void* event) {
    QAccessible_UpdateAccessibility((QAccessibleEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessible.html#isActive)
///
///
bool q_accessible_is_active() {
    return QAccessible_IsActive();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessible.html#setActive)
///
/// ``` bool active ```
void q_accessible_set_active(bool active) {
    QAccessible_SetActive(active);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessible.html#setRootObject)
///
/// ``` QObject* object ```
void q_accessible_set_root_object(void* object) {
    QAccessible_SetRootObject((QObject*)object);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessible.html#cleanup)
///
///
void q_accessible_cleanup() {
    QAccessible_Cleanup();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessible.html#qAccessibleTextBoundaryHelper)
///
/// ``` QTextCursor* cursor, enum QAccessible__TextBoundaryType boundaryType ```
libqt_pair /* tuple of int and int */ q_accessible_q_accessible_text_boundary_helper(void* cursor, int64_t boundaryType) {
    return QAccessible_QAccessibleTextBoundaryHelper((QTextCursor*)cursor, boundaryType);
}

/// Delete this object from C++ memory.
///
/// ``` QAccessible* self ```
void q_accessible_delete(void* self) {
    QAccessible_Delete((QAccessible*)(self));
}

/// https://doc.qt.io/qt-6/qaccessible-state.html

/// q_accessible__state_new constructs a new QAccessible::State object.
///
/// ``` QAccessible__State* other ```
QAccessible__State* q_accessible__state_new(void* other) {
    return QAccessible__State_new((QAccessible__State*)other);
}

/// q_accessible__state_new2 constructs a new QAccessible::State object and invalidates the source QAccessible::State object.
///
/// ``` QAccessible__State* other ```
QAccessible__State* q_accessible__state_new2(void* other) {
    return QAccessible__State_new2((QAccessible__State*)other);
}

/// q_accessible__state_new3 constructs a new QAccessible::State object.
///
///
QAccessible__State* q_accessible__state_new3() {
    return QAccessible__State_new3();
}

/// q_accessible__state_copy_assign shallow copies `other` into `self`.
///
/// ``` QAccessible__State* self, QAccessible__State* other ```
void q_accessible__state_copy_assign(void* self, void* other) {
    QAccessible__State_CopyAssign((QAccessible__State*)self, (QAccessible__State*)other);
}

/// q_accessible__state_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QAccessible__State* self, QAccessible__State* other ```
void q_accessible__state_move_assign(void* self, void* other) {
    QAccessible__State_MoveAssign((QAccessible__State*)self, (QAccessible__State*)other);
}

/// Delete this object from C++ memory.
///
/// ``` QAccessible__State* self ```
void q_accessible__state_delete(void* self) {
    QAccessible__State_Delete((QAccessible__State*)(self));
}

/// https://doc.qt.io/qt-6/qaccessible-activationobserver.html

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessible__activationobserver.html#accessibilityActiveChanged)
///
/// ``` QAccessible__ActivationObserver* self, bool active ```
void q_accessible__activationobserver_accessibility_active_changed(void* self, bool active) {
    QAccessible__ActivationObserver_AccessibilityActiveChanged((QAccessible__ActivationObserver*)self, active);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaccessible__activationobserver.html#operator=)
///
/// ``` QAccessible__ActivationObserver* self, QAccessible__ActivationObserver* param1 ```
void q_accessible__activationobserver_operator_assign(void* self, void* param1) {
    QAccessible__ActivationObserver_OperatorAssign((QAccessible__ActivationObserver*)self, (QAccessible__ActivationObserver*)param1);
}

/// Delete this object from C++ memory.
///
/// ``` QAccessible__ActivationObserver* self ```
void q_accessible__activationobserver_delete(void* self) {
    QAccessible__ActivationObserver_Delete((QAccessible__ActivationObserver*)(self));
}