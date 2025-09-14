#pragma once
#ifndef SRC_EXTRAS_KIOQT6C_LIBKFILEITEMLISTPROPERTIES_H
#define SRC_EXTRAS_KIOQT6C_LIBKFILEITEMLISTPROPERTIES_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kfileitemlistproperties.html

/// k_fileitemlistproperties_new constructs a new KFileItemListProperties object.
///
KFileItemListProperties* k_fileitemlistproperties_new();

/// k_fileitemlistproperties_new2 constructs a new KFileItemListProperties object.
///
/// @param items KFileItemList*
KFileItemListProperties* k_fileitemlistproperties_new2(void* items);

/// k_fileitemlistproperties_new3 constructs a new KFileItemListProperties object.
///
/// @param param1 KFileItemListProperties*
KFileItemListProperties* k_fileitemlistproperties_new3(void* param1);

/// [Qt documentation](https://api.kde.org/kfileitemlistproperties.html#operator-eq)
///
/// @param self KFileItemListProperties*
/// @param other KFileItemListProperties*
void k_fileitemlistproperties_operator_assign(void* self, void* other);

/// [Qt documentation](https://api.kde.org/kfileitemlistproperties.html#setItems)
///
/// @param self KFileItemListProperties*
/// @param items KFileItemList*
void k_fileitemlistproperties_set_items(void* self, void* items);

/// [Qt documentation](https://api.kde.org/kfileitemlistproperties.html#supportsReading)
///
/// @param self KFileItemListProperties*
bool k_fileitemlistproperties_supports_reading(void* self);

/// [Qt documentation](https://api.kde.org/kfileitemlistproperties.html#supportsDeleting)
///
/// @param self KFileItemListProperties*
bool k_fileitemlistproperties_supports_deleting(void* self);

/// [Qt documentation](https://api.kde.org/kfileitemlistproperties.html#supportsWriting)
///
/// @param self KFileItemListProperties*
bool k_fileitemlistproperties_supports_writing(void* self);

/// [Qt documentation](https://api.kde.org/kfileitemlistproperties.html#supportsMoving)
///
/// @param self KFileItemListProperties*
bool k_fileitemlistproperties_supports_moving(void* self);

/// [Qt documentation](https://api.kde.org/kfileitemlistproperties.html#isLocal)
///
/// @param self KFileItemListProperties*
bool k_fileitemlistproperties_is_local(void* self);

/// [Qt documentation](https://api.kde.org/kfileitemlistproperties.html#urlList)
///
/// @param self KFileItemListProperties*
libqt_list /* of QUrl* */ k_fileitemlistproperties_url_list(void* self);

/// [Qt documentation](https://api.kde.org/kfileitemlistproperties.html#isDirectory)
///
/// @param self KFileItemListProperties*
bool k_fileitemlistproperties_is_directory(void* self);

/// [Qt documentation](https://api.kde.org/kfileitemlistproperties.html#isFile)
///
/// @param self KFileItemListProperties*
bool k_fileitemlistproperties_is_file(void* self);

/// [Qt documentation](https://api.kde.org/kfileitemlistproperties.html#mimeType)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFileItemListProperties*
const char* k_fileitemlistproperties_mime_type(void* self);

/// [Qt documentation](https://api.kde.org/kfileitemlistproperties.html#mimeGroup)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFileItemListProperties*
const char* k_fileitemlistproperties_mime_group(void* self);

/// [Qt documentation](https://api.kde.org/kfileitemlistproperties.html#dtor.KFileItemListProperties)
///
/// Delete this object from C++ memory.
///
/// @param self KFileItemListProperties*
void k_fileitemlistproperties_delete(void* self);

#endif
