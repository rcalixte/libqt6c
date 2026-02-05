#pragma once
#ifndef SRC_EXTRAS_KFILEMETADATA_QT6C_LIBWRITERCOLLECTION_H
#define SRC_EXTRAS_KFILEMETADATA_QT6C_LIBWRITERCOLLECTION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kfilemetadata-writercollection.html)

/// k_filemetadata__writercollection_new constructs a new KFileMetaData::WriterCollection object.
///
KFileMetaData__WriterCollection* k_filemetadata__writercollection_new();

/// [Upstream resources](https://api.kde.org/kfilemetadata-writercollection.html#fetchWriters)
///
/// @param self KFileMetaData__WriterCollection*
/// @param mimetype const char*
///
/// @return libqt_list of KFileMetaData__Writer*
///
libqt_list k_filemetadata__writercollection_fetch_writers(void* self, const char* mimetype);

/// Delete this object from C++ memory.
///
/// @param self KFileMetaData__WriterCollection*
///
void k_filemetadata__writercollection_delete(void* self);

#endif
