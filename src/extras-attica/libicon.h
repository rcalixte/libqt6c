#pragma once
#ifndef SRC_EXTRAS_ATTICA_QT6C_LIBICON_H
#define SRC_EXTRAS_ATTICA_QT6C_LIBICON_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/attica-icon.html

/// k_attica__icon_new constructs a new Attica::Icon object.
///
Attica__Icon* k_attica__icon_new();

/// k_attica__icon_new2 constructs a new Attica::Icon object.
///
/// @param other Attica__Icon*
Attica__Icon* k_attica__icon_new2(void* other);

/// [Qt documentation](https://api.kde.org/attica-icon.html#operator-eq)
///
/// @param self Attica__Icon*
/// @param other Attica__Icon*
void k_attica__icon_operator_assign(void* self, void* other);

/// [Qt documentation](https://api.kde.org/attica-icon.html#url)
///
/// @param self Attica__Icon*
QUrl* k_attica__icon_url(void* self);

/// [Qt documentation](https://api.kde.org/attica-icon.html#setUrl)
///
/// @param self Attica__Icon*
/// @param url QUrl*
void k_attica__icon_set_url(void* self, void* url);

/// [Qt documentation](https://api.kde.org/attica-icon.html#width)
///
/// @param self Attica__Icon*
uint32_t k_attica__icon_width(void* self);

/// [Qt documentation](https://api.kde.org/attica-icon.html#setWidth)
///
/// @param self Attica__Icon*
/// @param width uint32_t
void k_attica__icon_set_width(void* self, uint32_t width);

/// [Qt documentation](https://api.kde.org/attica-icon.html#height)
///
/// @param self Attica__Icon*
uint32_t k_attica__icon_height(void* self);

/// [Qt documentation](https://api.kde.org/attica-icon.html#setHeight)
///
/// @param self Attica__Icon*
/// @param height uint32_t
void k_attica__icon_set_height(void* self, uint32_t height);

/// Delete this object from C++ memory.
///
/// @param self Attica__Icon*
void k_attica__icon_delete(void* self);

#endif
