#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSQT6C_LIBKMIMETYPEEDITOR_H
#define SRC_EXTRAS_KWIDGETSADDONSQT6C_LIBKMIMETYPEEDITOR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kmimetypeeditor.html

/// [Qt documentation](https://api.kde.org/kmimetypeeditor.html#editMimeType)
///
/// @param param1 const char*
/// @param param2 QWidget*
void k_mimetypeeditor_edit_mime_type(const char* param1, void* param2);
#endif
