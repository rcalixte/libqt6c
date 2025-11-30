#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONS_QT6C_LIBKPIXMAPSEQUENCE_H
#define SRC_EXTRAS_KWIDGETSADDONS_QT6C_LIBKPIXMAPSEQUENCE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kpixmapsequence.html

/// k_pixmapsequence_new constructs a new KPixmapSequence object.
///
KPixmapSequence* k_pixmapsequence_new();

/// k_pixmapsequence_new2 constructs a new KPixmapSequence object.
///
/// @param other KPixmapSequence*
KPixmapSequence* k_pixmapsequence_new2(void* other);

/// k_pixmapsequence_new3 constructs a new KPixmapSequence object.
///
/// @param pixmap QPixmap*
KPixmapSequence* k_pixmapsequence_new3(void* pixmap);

/// k_pixmapsequence_new4 constructs a new KPixmapSequence object.
///
/// @param fullPath const char*
/// @param size int
KPixmapSequence* k_pixmapsequence_new4(const char* fullPath, int size);

/// k_pixmapsequence_new5 constructs a new KPixmapSequence object.
///
/// @param pixmap QPixmap*
/// @param frameSize QSize*
KPixmapSequence* k_pixmapsequence_new5(void* pixmap, void* frameSize);

/// [Upstream resources](https://api.kde.org/kpixmapsequence.html#operator-eq)
///
/// @param self KPixmapSequence*
/// @param other KPixmapSequence*
void k_pixmapsequence_operator_assign(void* self, void* other);

/// [Upstream resources](https://api.kde.org/kpixmapsequence.html#isValid)
///
/// @param self KPixmapSequence*
bool k_pixmapsequence_is_valid(void* self);

/// [Upstream resources](https://api.kde.org/kpixmapsequence.html#isEmpty)
///
/// @param self KPixmapSequence*
bool k_pixmapsequence_is_empty(void* self);

/// [Upstream resources](https://api.kde.org/kpixmapsequence.html#frameSize)
///
/// @param self KPixmapSequence*
QSize* k_pixmapsequence_frame_size(void* self);

/// [Upstream resources](https://api.kde.org/kpixmapsequence.html#frameCount)
///
/// @param self KPixmapSequence*
int32_t k_pixmapsequence_frame_count(void* self);

/// [Upstream resources](https://api.kde.org/kpixmapsequence.html#frameAt)
///
/// @param self KPixmapSequence*
/// @param index int
QPixmap* k_pixmapsequence_frame_at(void* self, int index);

/// [Upstream resources](https://api.kde.org/kpixmapsequence.html#dtor.KPixmapSequence)
///
/// Delete this object from C++ memory.
///
/// @param self KPixmapSequence*
void k_pixmapsequence_delete(void* self);

#endif
