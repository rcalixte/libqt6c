#pragma once
#ifndef SRC_EXTRAS_KPARTS_QT6C_LIBOPENURLEVENT_H
#define SRC_EXTRAS_KPARTS_QT6C_LIBOPENURLEVENT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kparts-openurlevent.html)

/// k_parts__openurlevent_new constructs a new KParts::OpenUrlEvent object.
///
/// @param part KParts__ReadOnlyPart*
/// @param url QUrl*
///
KParts__OpenUrlEvent* k_parts__openurlevent_new(void* part, void* url);

/// [Upstream resources](https://api.kde.org/kparts-openurlevent.html)

/// k_parts__openurlevent_new2 constructs a new KParts::OpenUrlEvent object.
///
/// @param part KParts__ReadOnlyPart*
/// @param url QUrl*
/// @param args KParts__OpenUrlArguments*
///
KParts__OpenUrlEvent* k_parts__openurlevent_new2(void* part, void* url, void* args);

/// [Upstream resources](https://api.kde.org/kparts-openurlevent.html#part)
///
/// @param self KParts__OpenUrlEvent*
///
KParts__ReadOnlyPart* k_parts__openurlevent_part(void* self);

/// [Upstream resources](https://api.kde.org/kparts-openurlevent.html#url)
///
/// @param self KParts__OpenUrlEvent*
///
QUrl* k_parts__openurlevent_url(void* self);

/// [Upstream resources](https://api.kde.org/kparts-openurlevent.html#arguments)
///
/// @param self KParts__OpenUrlEvent*
///
KParts__OpenUrlArguments* k_parts__openurlevent_arguments(void* self);

/// [Upstream resources](https://api.kde.org/kparts-openurlevent.html#test)
///
/// @param event QEvent*
///
bool k_parts__openurlevent_test(void* event);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self KParts__OpenUrlEvent*
///
/// @return enum QEvent__Type
///
int32_t k_parts__openurlevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self KParts__OpenUrlEvent*
///
bool k_parts__openurlevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self KParts__OpenUrlEvent*
///
bool k_parts__openurlevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self KParts__OpenUrlEvent*
///
void k_parts__openurlevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self KParts__OpenUrlEvent*
///
void k_parts__openurlevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self KParts__OpenUrlEvent*
///
bool k_parts__openurlevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self KParts__OpenUrlEvent*
///
bool k_parts__openurlevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self KParts__OpenUrlEvent*
///
bool k_parts__openurlevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t k_parts__openurlevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
///
int32_t k_parts__openurlevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__OpenUrlEvent*
/// @param accepted bool
///
void k_parts__openurlevent_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__OpenUrlEvent*
/// @param accepted bool
///
void k_parts__openurlevent_qbase_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__OpenUrlEvent*
/// @param callback void func(KParts__OpenUrlEvent* self, bool accepted)
///
void k_parts__openurlevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__OpenUrlEvent*
///
QEvent* k_parts__openurlevent_clone(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__OpenUrlEvent*
///
QEvent* k_parts__openurlevent_qbase_clone(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__OpenUrlEvent*
/// @param callback QEvent* func()
///
void k_parts__openurlevent_on_clone(void* self, QEvent* (*callback)());

/// Delete this object from C++ memory.
///
/// @param self KParts__OpenUrlEvent*
///
void k_parts__openurlevent_delete(void* self);

#endif
