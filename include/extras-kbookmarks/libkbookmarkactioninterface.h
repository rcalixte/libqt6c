#pragma once
#ifndef SRC_EXTRAS_KBOOKMARKSQT6C_LIBKBOOKMARKACTIONINTERFACE_H
#define SRC_EXTRAS_KBOOKMARKSQT6C_LIBKBOOKMARKACTIONINTERFACE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kbookmarkactioninterface.html

/// k_bookmarkactioninterface_new constructs a new KBookmarkActionInterface object.
///
/// @param bk KBookmark*
KBookmarkActionInterface* k_bookmarkactioninterface_new(void* bk);

/// k_bookmarkactioninterface_new2 constructs a new KBookmarkActionInterface object.
///
/// @param param1 KBookmarkActionInterface*
KBookmarkActionInterface* k_bookmarkactioninterface_new2(void* param1);

/// [Qt documentation](https://api.kde.org/kbookmarkactioninterface.html#bookmark)
///
/// @param self KBookmarkActionInterface*
const KBookmark* k_bookmarkactioninterface_bookmark(void* self);

/// [Qt documentation](https://api.kde.org/kbookmarkactioninterface.html#dtor.KBookmarkActionInterface)
///
/// Delete this object from C++ memory.
///
/// @param self KBookmarkActionInterface*
void k_bookmarkactioninterface_delete(void* self);

#endif
