#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONS_QT6C_LIBKMIMETYPEEDITOR_H
#define SRC_EXTRAS_KWIDGETSADDONS_QT6C_LIBKMIMETYPEEDITOR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kmimetypeeditor.html)

/// [Upstream resources](https://api.kde.org/kmimetypeeditor.html#editMimeType)
///
/// @param mimeType const char*
/// @param widget QWidget*
///
void k_mimetypeeditor_edit_mime_type(const char* mimeType, void* widget);
#endif
