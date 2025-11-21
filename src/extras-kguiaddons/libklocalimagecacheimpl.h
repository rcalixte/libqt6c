#pragma once
#ifndef SRC_EXTRAS_KGUIADDONS_QT6C_LIBKLOCALIMAGECACHEIMPL_H
#define SRC_EXTRAS_KGUIADDONS_QT6C_LIBKLOCALIMAGECACHEIMPL_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/klocalimagecacheimplementation.html

/// [Qt documentation](https://api.kde.org/klocalimagecacheimplementation.html#lastModifiedTime)
///
/// @param self KLocalImageCacheImplementation*
QDateTime* k_localimagecacheimplementation_last_modified_time(void* self);

/// [Qt documentation](https://api.kde.org/klocalimagecacheimplementation.html#pixmapCaching)
///
/// @param self KLocalImageCacheImplementation*
bool k_localimagecacheimplementation_pixmap_caching(void* self);

/// [Qt documentation](https://api.kde.org/klocalimagecacheimplementation.html#setPixmapCaching)
///
/// @param self KLocalImageCacheImplementation*
/// @param enable bool
void k_localimagecacheimplementation_set_pixmap_caching(void* self, bool enable);

/// [Qt documentation](https://api.kde.org/klocalimagecacheimplementation.html#pixmapCacheLimit)
///
/// @param self KLocalImageCacheImplementation*
int32_t k_localimagecacheimplementation_pixmap_cache_limit(void* self);

/// [Qt documentation](https://api.kde.org/klocalimagecacheimplementation.html#setPixmapCacheLimit)
///
/// @param self KLocalImageCacheImplementation*
/// @param size int
void k_localimagecacheimplementation_set_pixmap_cache_limit(void* self, int size);

/// [Qt documentation](https://api.kde.org/klocalimagecacheimplementation.html#dtor.KLocalImageCacheImplementation)
///
/// Delete this object from C++ memory.
///
/// @param self KLocalImageCacheImplementation*
void k_localimagecacheimplementation_delete(void* self);

#endif
