#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBRUNNINGANIMATEDIMAGE_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBRUNNINGANIMATEDIMAGE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1RunningAnimatedImage.html)

/// k_textemoticonscore__runninganimatedimage_new constructs a new TextEmoticonsCore::RunningAnimatedImage object.
///
/// @param idx QModelIndex*
///
TextEmoticonsCore__RunningAnimatedImage* k_textemoticonscore__runninganimatedimage_new(void* idx);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1RunningAnimatedImage.html)
///
/// @param self TextEmoticonsCore__RunningAnimatedImage*
///
QPersistentModelIndex* k_textemoticonscore__runninganimatedimage_index(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1RunningAnimatedImage.html)
///
/// @param self TextEmoticonsCore__RunningAnimatedImage*
/// @param index QPersistentModelIndex*
///
void k_textemoticonscore__runninganimatedimage_set_index(void* self, void* index);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1RunningAnimatedImage.html)
///
/// @param self TextEmoticonsCore__RunningAnimatedImage*
///
QMovie* k_textemoticonscore__runninganimatedimage_movie(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1RunningAnimatedImage.html)
///
/// @param self TextEmoticonsCore__RunningAnimatedImage*
/// @param movie QMovie*
///
void k_textemoticonscore__runninganimatedimage_set_movie(void* self, void* movie);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1RunningAnimatedImage.html)
///
/// Delete this object from C++ memory.
///
/// @param self TextEmoticonsCore__RunningAnimatedImage*
///
void k_textemoticonscore__runninganimatedimage_delete(void* self);

#endif
