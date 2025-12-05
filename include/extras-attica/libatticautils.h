#pragma once
#ifndef SRC_EXTRAS_ATTICA_QT6C_LIBATTICAUTILS_H
#define SRC_EXTRAS_ATTICA_QT6C_LIBATTICAUTILS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/attica-utils.html)

/// k_attica__utils_new constructs a new Attica::Utils object.
///
/// @param other Attica__Utils*
///
Attica__Utils* k_attica__utils_new(void* other);

/// [Upstream resources](https://api.kde.org/attica-utils.html)

/// k_attica__utils_new2 constructs a new Attica::Utils object and invalidates the source Attica::Utils object.
///
/// @param other Attica__Utils*
///
Attica__Utils* k_attica__utils_new2(void* other);

/// k_attica__utils_copy_assign shallow copies `other` into `self`.
///
/// @param self Attica__Utils*
/// @param other Attica__Utils*
///
void k_attica__utils_copy_assign(void* self, void* other);

/// k_attica__utils_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self Attica__Utils*
/// @param other Attica__Utils*
///
void k_attica__utils_move_assign(void* self, void* other);

/// [Upstream resources](https://api.kde.org/attica-utils.html#parseQtDateTimeIso8601)
///
/// @param str const char*
///
QDateTime* k_attica__utils_parse_qt_date_time_iso8601(const char* str);

/// [Upstream resources](https://api.kde.org/attica-utils.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param operation enum QNetworkAccessManager__Operation
///
const char* k_attica__utils_to_string(int32_t operation);

/// Delete this object from C++ memory.
///
/// @param self Attica__Utils*
///
void k_attica__utils_delete(void* self);

#endif
