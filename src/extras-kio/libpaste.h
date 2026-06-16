#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBPASTE_H
#define SRC_EXTRAS_KIO_QT6C_LIBPASTE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kio.html)

/// [Upstream resources](https://api.kde.org/kio.html#canPasteMimeData)
///
/// @param data QMimeData*
///
bool k_io_can_paste_mime_data(void* data);

/// [Upstream resources](https://api.kde.org/kio.html#pasteActionText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param mimeData QMimeData*
/// @param enable bool*
/// @param destItem KFileItem*
///
const char* k_io_paste_action_text(void* mimeData, bool* enable, void* destItem);

/// [Upstream resources](https://api.kde.org/kio.html#setClipboardDataCut)
///
/// @param mimeData QMimeData*
/// @param cut bool
///
void k_io_set_clipboard_data_cut(void* mimeData, bool cut);

/// [Upstream resources](https://api.kde.org/kio.html#isClipboardDataCut)
///
/// @param mimeData QMimeData*
///
bool k_io_is_clipboard_data_cut(void* mimeData);
#endif
