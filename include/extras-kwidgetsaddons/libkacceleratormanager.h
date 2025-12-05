#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONS_QT6C_LIBKACCELERATORMANAGER_H
#define SRC_EXTRAS_KWIDGETSADDONS_QT6C_LIBKACCELERATORMANAGER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kacceleratormanager.html)

/// k_acceleratormanager_new constructs a new KAcceleratorManager object.
///
/// @param other KAcceleratorManager*
///
KAcceleratorManager* k_acceleratormanager_new(void* other);

/// [Upstream resources](https://api.kde.org/kacceleratormanager.html)

/// k_acceleratormanager_new2 constructs a new KAcceleratorManager object and invalidates the source KAcceleratorManager object.
///
/// @param other KAcceleratorManager*
///
KAcceleratorManager* k_acceleratormanager_new2(void* other);

/// k_acceleratormanager_copy_assign shallow copies `other` into `self`.
///
/// @param self KAcceleratorManager*
/// @param other KAcceleratorManager*
///
void k_acceleratormanager_copy_assign(void* self, void* other);

/// k_acceleratormanager_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self KAcceleratorManager*
/// @param other KAcceleratorManager*
///
void k_acceleratormanager_move_assign(void* self, void* other);

/// [Upstream resources](https://api.kde.org/kacceleratormanager.html#manage)
///
/// @param widget QWidget*
///
void k_acceleratormanager_manage(void* widget);

/// [Upstream resources](https://api.kde.org/kacceleratormanager.html#last_manage)
///
/// @param added const char*
/// @param changed const char*
/// @param removed const char*
///
void k_acceleratormanager_last_manage(const char* added, const char* changed, const char* removed);

/// [Upstream resources](https://api.kde.org/kacceleratormanager.html#setNoAccel)
///
/// @param widget QWidget*
///
void k_acceleratormanager_set_no_accel(void* widget);

/// [Upstream resources](https://api.kde.org/kacceleratormanager.html#addStandardActionNames)
///
/// @param names const char**
///
void k_acceleratormanager_add_standard_action_names(const char* names[static 1]);

/// [Upstream resources](https://api.kde.org/kacceleratormanager.html#manage)
///
/// @param widget QWidget*
/// @param programmers_mode bool
///
void k_acceleratormanager_manage2(void* widget, bool programmers_mode);

/// [Upstream resources](https://api.kde.org/kacceleratormanager.html#dtor.KAcceleratorManager)
///
/// Delete this object from C++ memory.
///
/// @param self KAcceleratorManager*
///
void k_acceleratormanager_delete(void* self);

#endif
