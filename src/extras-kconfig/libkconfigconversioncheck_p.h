#pragma once
#ifndef SRC_EXTRAS_KCONFIGQT6C_LIBKCONFIGCONVERSIONCHECK_P_H
#define SRC_EXTRAS_KCONFIGQT6C_LIBKCONFIGCONVERSIONCHECK_P_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api-staging.kde.org/kconfigconversioncheck-supported.html

/// k_configconversioncheck__supported_new constructs a new KConfigConversionCheck::supported object.
///
/// @param other KConfigConversionCheck__supported*
KConfigConversionCheck__supported* k_configconversioncheck__supported_new(void* other);

/// k_configconversioncheck__supported_new2 constructs a new KConfigConversionCheck::supported object and invalidates the source KConfigConversionCheck::supported object.
///
/// @param other KConfigConversionCheck__supported*
KConfigConversionCheck__supported* k_configconversioncheck__supported_new2(void* other);

/// k_configconversioncheck__supported_copy_assign shallow copies `other` into `self`.
///
/// @param self KConfigConversionCheck__supported*
/// @param other KConfigConversionCheck__supported*
void k_configconversioncheck__supported_copy_assign(void* self, void* other);

/// k_configconversioncheck__supported_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self KConfigConversionCheck__supported*
/// @param other KConfigConversionCheck__supported*
void k_configconversioncheck__supported_move_assign(void* self, void* other);

/// Delete this object from C++ memory.
///
/// @param self KConfigConversionCheck__supported*
void k_configconversioncheck__supported_delete(void* self);

/// https://api-staging.kde.org/kconfigconversioncheck-unsupported.html

/// k_configconversioncheck__unsupported_new constructs a new KConfigConversionCheck::unsupported object.
///
/// @param other KConfigConversionCheck__unsupported*
KConfigConversionCheck__unsupported* k_configconversioncheck__unsupported_new(void* other);

/// k_configconversioncheck__unsupported_new2 constructs a new KConfigConversionCheck::unsupported object and invalidates the source KConfigConversionCheck::unsupported object.
///
/// @param other KConfigConversionCheck__unsupported*
KConfigConversionCheck__unsupported* k_configconversioncheck__unsupported_new2(void* other);

/// k_configconversioncheck__unsupported_copy_assign shallow copies `other` into `self`.
///
/// @param self KConfigConversionCheck__unsupported*
/// @param other KConfigConversionCheck__unsupported*
void k_configconversioncheck__unsupported_copy_assign(void* self, void* other);

/// k_configconversioncheck__unsupported_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self KConfigConversionCheck__unsupported*
/// @param other KConfigConversionCheck__unsupported*
void k_configconversioncheck__unsupported_move_assign(void* self, void* other);

/// Delete this object from C++ memory.
///
/// @param self KConfigConversionCheck__unsupported*
void k_configconversioncheck__unsupported_delete(void* self);

#endif
