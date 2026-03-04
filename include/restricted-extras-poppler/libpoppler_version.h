#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_POPPLER_QT6C_LIBPOPPLER_VERSION_H
#define SRC_RESTRICTED_EXTRAS_POPPLER_QT6C_LIBPOPPLER_VERSION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Version.html)

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Version.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_poppler__version_string();

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Version.html)
///
uint32_t q_poppler__version_major();

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Version.html)
///
uint32_t q_poppler__version_minor();

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Version.html)
///
uint32_t q_poppler__version_micro();
#endif
