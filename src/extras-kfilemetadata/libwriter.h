#pragma once
#ifndef SRC_EXTRAS_KFILEMETADATA_QT6C_LIBWRITER_H
#define SRC_EXTRAS_KFILEMETADATA_QT6C_LIBWRITER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kfilemetadata-writer.html)

/// [Upstream resources](https://api.kde.org/kfilemetadata-writer.html#write)
///
/// @param self KFileMetaData__Writer*
/// @param data KFileMetaData__WriteData*
///
void k_filemetadata__writer_write(void* self, void* data);

/// [Upstream resources](https://api.kde.org/kfilemetadata-writer.html#mimetypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KFileMetaData__Writer*
///
const char** k_filemetadata__writer_mimetypes(void* self);

/// Delete this object from C++ memory.
///
/// @param self KFileMetaData__Writer*
///
void k_filemetadata__writer_delete(void* self);

#endif
