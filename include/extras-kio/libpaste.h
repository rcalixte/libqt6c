#pragma once
#ifndef SRC_EXTRAS_KIOQT6C_LIBPASTE_H
#define SRC_EXTRAS_KIOQT6C_LIBPASTE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kio.html

/// [Qt documentation](https://api.kde.org/kio.html#canPasteMimeData)
///
/// @param param1 QMimeData*
bool k_io_can_paste_mime_data(void* param1);

/// [Qt documentation](https://api.kde.org/kio.html#pasteActionText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 QMimeData*
/// @param param2 bool*
/// @param param3 KFileItem*
const char* k_io_paste_action_text(void* param1, bool* param2, void* param3);

/// [Qt documentation](https://api.kde.org/kio.html#setClipboardDataCut)
///
/// @param param1 QMimeData*
/// @param param2 bool
void k_io_set_clipboard_data_cut(void* param1, bool param2);

/// [Qt documentation](https://api.kde.org/kio.html#isClipboardDataCut)
///
/// @param param1 QMimeData*
bool k_io_is_clipboard_data_cut(void* param1);
#endif
