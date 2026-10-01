#pragma once
#ifndef EXTRAS_KPARTS_LIBGUIACTIVATEEVENT_H
#define EXTRAS_KPARTS_LIBGUIACTIVATEEVENT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kparts-guiactivateevent.html)

/// k_parts__guiactivateevent_new constructs a new KParts::GUIActivateEvent object.
///
/// @param activated bool
///
KParts__GUIActivateEvent* k_parts__guiactivateevent_new(bool activated);

/// [Upstream resources](https://api.kde.org/kparts-guiactivateevent.html#activated)
///
/// @param self const KParts__GUIActivateEvent*
///
bool k_parts__guiactivateevent_activated(const void* self);

/// [Upstream resources](https://api.kde.org/kparts-guiactivateevent.html#test)
///
/// @param event QEvent*
///
bool k_parts__guiactivateevent_test(const void* event);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self const KParts__GUIActivateEvent*
///
/// @return enum QEvent__Type
///
int32_t k_parts__guiactivateevent_type(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self const KParts__GUIActivateEvent*
///
bool k_parts__guiactivateevent_spontaneous(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self const KParts__GUIActivateEvent*
///
bool k_parts__guiactivateevent_is_accepted(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self KParts__GUIActivateEvent*
///
void k_parts__guiactivateevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self KParts__GUIActivateEvent*
///
void k_parts__guiactivateevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self const KParts__GUIActivateEvent*
///
bool k_parts__guiactivateevent_is_input_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self const KParts__GUIActivateEvent*
///
bool k_parts__guiactivateevent_is_pointer_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self const KParts__GUIActivateEvent*
///
bool k_parts__guiactivateevent_is_single_point_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t k_parts__guiactivateevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
///
int32_t k_parts__guiactivateevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__GUIActivateEvent*
/// @param accepted bool
///
void k_parts__guiactivateevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__GUIActivateEvent*
/// @param accepted bool
///
void k_parts__guiactivateevent_super_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__GUIActivateEvent*
/// @param callback void func(KParts__GUIActivateEvent* self, bool accepted)
///
void k_parts__guiactivateevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KParts__GUIActivateEvent*
///
QEvent* k_parts__guiactivateevent_clone(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KParts__GUIActivateEvent*
///
QEvent* k_parts__guiactivateevent_super_clone(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KParts__GUIActivateEvent*
/// @param callback QEvent* func(KParts__GUIActivateEvent* self)
///
void k_parts__guiactivateevent_on_clone(const void* self, QEvent* (*callback)(const void*));

/// Delete this object from C++ memory.
///
/// @param self KParts__GUIActivateEvent*
///
void k_parts__guiactivateevent_delete(void* self);

#endif
