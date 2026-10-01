#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKPIXMAPSEQUENCE_H
#define EXTRAS_KWIDGETSADDONS_LIBKPIXMAPSEQUENCE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kpixmapsequence.html)

/// k_pixmapsequence_new constructs a new KPixmapSequence object.
///
KPixmapSequence* k_pixmapsequence_new();

/// [Upstream resources](https://api.kde.org/kpixmapsequence.html)

/// k_pixmapsequence_new2 constructs a new KPixmapSequence object.
///
/// @param other KPixmapSequence*
///
KPixmapSequence* k_pixmapsequence_new2(const void* other);

/// [Upstream resources](https://api.kde.org/kpixmapsequence.html)

/// k_pixmapsequence_new3 constructs a new KPixmapSequence object.
///
/// @param pixmap QPixmap*
///
KPixmapSequence* k_pixmapsequence_new3(const void* pixmap);

/// [Upstream resources](https://api.kde.org/kpixmapsequence.html)

/// k_pixmapsequence_new4 constructs a new KPixmapSequence object.
///
/// @param fullPath const char*
/// @param size int
///
KPixmapSequence* k_pixmapsequence_new4(const char* fullPath, int size);

/// [Upstream resources](https://api.kde.org/kpixmapsequence.html)

/// k_pixmapsequence_new5 constructs a new KPixmapSequence object.
///
/// @param pixmap QPixmap*
/// @param frameSize QSize*
///
KPixmapSequence* k_pixmapsequence_new5(const void* pixmap, const void* frameSize);

/// [Upstream resources](https://api.kde.org/kpixmapsequence.html#operator-eq)
///
/// @param self KPixmapSequence*
/// @param other KPixmapSequence*
///
void k_pixmapsequence_operator_assign(void* self, const void* other);

/// [Upstream resources](https://api.kde.org/kpixmapsequence.html#isValid)
///
/// @param self const KPixmapSequence*
///
bool k_pixmapsequence_is_valid(const void* self);

/// [Upstream resources](https://api.kde.org/kpixmapsequence.html#isEmpty)
///
/// @param self const KPixmapSequence*
///
bool k_pixmapsequence_is_empty(const void* self);

/// [Upstream resources](https://api.kde.org/kpixmapsequence.html#frameSize)
///
/// @param self const KPixmapSequence*
///
QSize* k_pixmapsequence_frame_size(const void* self);

/// [Upstream resources](https://api.kde.org/kpixmapsequence.html#frameCount)
///
/// @param self const KPixmapSequence*
///
int32_t k_pixmapsequence_frame_count(const void* self);

/// [Upstream resources](https://api.kde.org/kpixmapsequence.html#frameAt)
///
/// @param self const KPixmapSequence*
/// @param index int
///
QPixmap* k_pixmapsequence_frame_at(const void* self, int index);

/// [Upstream resources](https://api.kde.org/kpixmapsequence.html#dtor.KPixmapSequence)
///
/// Delete this object from C++ memory.
///
/// @param self KPixmapSequence*
///
void k_pixmapsequence_delete(void* self);

#endif
