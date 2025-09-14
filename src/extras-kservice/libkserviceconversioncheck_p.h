#pragma once
#ifndef SRC_EXTRAS_KSERVICEQT6C_LIBKSERVICECONVERSIONCHECK_P_H
#define SRC_EXTRAS_KSERVICEQT6C_LIBKSERVICECONVERSIONCHECK_P_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kserviceconversioncheck-supported.html

/// k_serviceconversioncheck__supported_new constructs a new KServiceConversionCheck::supported object.
///
/// @param other KServiceConversionCheck__supported*
KServiceConversionCheck__supported* k_serviceconversioncheck__supported_new(void* other);

/// k_serviceconversioncheck__supported_new2 constructs a new KServiceConversionCheck::supported object and invalidates the source KServiceConversionCheck::supported object.
///
/// @param other KServiceConversionCheck__supported*
KServiceConversionCheck__supported* k_serviceconversioncheck__supported_new2(void* other);

/// k_serviceconversioncheck__supported_copy_assign shallow copies `other` into `self`.
///
/// @param self KServiceConversionCheck__supported*
/// @param other KServiceConversionCheck__supported*
void k_serviceconversioncheck__supported_copy_assign(void* self, void* other);

/// k_serviceconversioncheck__supported_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self KServiceConversionCheck__supported*
/// @param other KServiceConversionCheck__supported*
void k_serviceconversioncheck__supported_move_assign(void* self, void* other);

/// Delete this object from C++ memory.
///
/// @param self KServiceConversionCheck__supported*
void k_serviceconversioncheck__supported_delete(void* self);

/// https://api.kde.org/kserviceconversioncheck-unsupported.html

/// k_serviceconversioncheck__unsupported_new constructs a new KServiceConversionCheck::unsupported object.
///
/// @param other KServiceConversionCheck__unsupported*
KServiceConversionCheck__unsupported* k_serviceconversioncheck__unsupported_new(void* other);

/// k_serviceconversioncheck__unsupported_new2 constructs a new KServiceConversionCheck::unsupported object and invalidates the source KServiceConversionCheck::unsupported object.
///
/// @param other KServiceConversionCheck__unsupported*
KServiceConversionCheck__unsupported* k_serviceconversioncheck__unsupported_new2(void* other);

/// k_serviceconversioncheck__unsupported_copy_assign shallow copies `other` into `self`.
///
/// @param self KServiceConversionCheck__unsupported*
/// @param other KServiceConversionCheck__unsupported*
void k_serviceconversioncheck__unsupported_copy_assign(void* self, void* other);

/// k_serviceconversioncheck__unsupported_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self KServiceConversionCheck__unsupported*
/// @param other KServiceConversionCheck__unsupported*
void k_serviceconversioncheck__unsupported_move_assign(void* self, void* other);

/// Delete this object from C++ memory.
///
/// @param self KServiceConversionCheck__unsupported*
void k_serviceconversioncheck__unsupported_delete(void* self);

#endif
