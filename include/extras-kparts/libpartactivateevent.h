#pragma once
#ifndef SRC_EXTRAS_KPARTSQT6C_LIBPARTACTIVATEEVENT_H
#define SRC_EXTRAS_KPARTSQT6C_LIBPARTACTIVATEEVENT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kparts-partactivateevent.html

/// k_parts__partactivateevent_new constructs a new KParts::PartActivateEvent object.
///
/// @param activated bool
/// @param part KParts__Part*
/// @param widget QWidget*
KParts__PartActivateEvent* k_parts__partactivateevent_new(bool activated, void* part, void* widget);

/// [Qt documentation](https://api.kde.org/kparts-partactivateevent.html#activated)
///
/// @param self KParts__PartActivateEvent*
bool k_parts__partactivateevent_activated(void* self);

/// [Qt documentation](https://api.kde.org/kparts-partactivateevent.html#part)
///
/// @param self KParts__PartActivateEvent*
KParts__Part* k_parts__partactivateevent_part(void* self);

/// [Qt documentation](https://api.kde.org/kparts-partactivateevent.html#widget)
///
/// @param self KParts__PartActivateEvent*
QWidget* k_parts__partactivateevent_widget(void* self);

/// [Qt documentation](https://api.kde.org/kparts-partactivateevent.html#test)
///
/// @param event QEvent*
bool k_parts__partactivateevent_test(void* event);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self KParts__PartActivateEvent*
///
/// @return enum QEvent__Type
int32_t k_parts__partactivateevent_type(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self KParts__PartActivateEvent*
bool k_parts__partactivateevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self KParts__PartActivateEvent*
bool k_parts__partactivateevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self KParts__PartActivateEvent*
void k_parts__partactivateevent_accept(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self KParts__PartActivateEvent*
void k_parts__partactivateevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self KParts__PartActivateEvent*
bool k_parts__partactivateevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self KParts__PartActivateEvent*
bool k_parts__partactivateevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self KParts__PartActivateEvent*
bool k_parts__partactivateevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t k_parts__partactivateevent_register_event_type();

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
int32_t k_parts__partactivateevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__PartActivateEvent*
/// @param accepted bool
void k_parts__partactivateevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__PartActivateEvent*
/// @param accepted bool
void k_parts__partactivateevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__PartActivateEvent*
/// @param callback void func(KParts__PartActivateEvent* self, bool accepted)
void k_parts__partactivateevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__PartActivateEvent*
QEvent* k_parts__partactivateevent_clone(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__PartActivateEvent*
QEvent* k_parts__partactivateevent_qbase_clone(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__PartActivateEvent*
/// @param callback QEvent* func()
void k_parts__partactivateevent_on_clone(void* self, QEvent* (*callback)());

/// Delete this object from C++ memory.
///
/// @param self KParts__PartActivateEvent*
void k_parts__partactivateevent_delete(void* self);

#endif
