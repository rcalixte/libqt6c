#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBKFILEITEMLISTPROPERTIES_H
#define SRC_EXTRAS_KIO_QT6C_LIBKFILEITEMLISTPROPERTIES_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kfileitemlistproperties.html)

/// k_fileitemlistproperties_new constructs a new KFileItemListProperties object.
///
KFileItemListProperties* k_fileitemlistproperties_new();

/// [Upstream resources](https://api.kde.org/kfileitemlistproperties.html)

/// k_fileitemlistproperties_new2 constructs a new KFileItemListProperties object.
///
/// @param items KFileItemList*
///
KFileItemListProperties* k_fileitemlistproperties_new2(void* items);

/// [Upstream resources](https://api.kde.org/kfileitemlistproperties.html)

/// k_fileitemlistproperties_new3 constructs a new KFileItemListProperties object.
///
/// @param param1 KFileItemListProperties*
///
KFileItemListProperties* k_fileitemlistproperties_new3(void* param1);

/// [Upstream resources](https://api.kde.org/kfileitemlistproperties.html#operator-eq)
///
/// @param self KFileItemListProperties*
/// @param other KFileItemListProperties*
///
void k_fileitemlistproperties_operator_assign(void* self, void* other);

/// [Upstream resources](https://api.kde.org/kfileitemlistproperties.html#setItems)
///
/// @param self KFileItemListProperties*
/// @param items KFileItemList*
///
void k_fileitemlistproperties_set_items(void* self, void* items);

/// [Upstream resources](https://api.kde.org/kfileitemlistproperties.html#supportsReading)
///
/// @param self KFileItemListProperties*
///
bool k_fileitemlistproperties_supports_reading(void* self);

/// [Upstream resources](https://api.kde.org/kfileitemlistproperties.html#supportsDeleting)
///
/// @param self KFileItemListProperties*
///
bool k_fileitemlistproperties_supports_deleting(void* self);

/// [Upstream resources](https://api.kde.org/kfileitemlistproperties.html#supportsWriting)
///
/// @param self KFileItemListProperties*
///
bool k_fileitemlistproperties_supports_writing(void* self);

/// [Upstream resources](https://api.kde.org/kfileitemlistproperties.html#supportsMoving)
///
/// @param self KFileItemListProperties*
///
bool k_fileitemlistproperties_supports_moving(void* self);

/// [Upstream resources](https://api.kde.org/kfileitemlistproperties.html#isLocal)
///
/// @param self KFileItemListProperties*
///
bool k_fileitemlistproperties_is_local(void* self);

/// [Upstream resources](https://api.kde.org/kfileitemlistproperties.html#urlList)
///
/// @param self KFileItemListProperties*
///
libqt_list /* of QUrl* */ k_fileitemlistproperties_url_list(void* self);

/// [Upstream resources](https://api.kde.org/kfileitemlistproperties.html#isDirectory)
///
/// @param self KFileItemListProperties*
///
bool k_fileitemlistproperties_is_directory(void* self);

/// [Upstream resources](https://api.kde.org/kfileitemlistproperties.html#isFile)
///
/// @param self KFileItemListProperties*
///
bool k_fileitemlistproperties_is_file(void* self);

/// [Upstream resources](https://api.kde.org/kfileitemlistproperties.html#mimeType)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KFileItemListProperties*
///
const char* k_fileitemlistproperties_mime_type(void* self);

/// [Upstream resources](https://api.kde.org/kfileitemlistproperties.html#mimeGroup)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KFileItemListProperties*
///
const char* k_fileitemlistproperties_mime_group(void* self);

/// [Upstream resources](https://api.kde.org/kfileitemlistproperties.html#dtor.KFileItemListProperties)
///
/// Delete this object from C++ memory.
///
/// @param self KFileItemListProperties*
///
void k_fileitemlistproperties_delete(void* self);

#endif
