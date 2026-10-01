#pragma once
#ifndef RESTRICTED_EXTRAS_POPPLER_LIBPOPPLER_MEDIA_H
#define RESTRICTED_EXTRAS_POPPLER_LIBPOPPLER_MEDIA_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MediaRendition.html)

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MediaRendition.html)
///
/// @param self const Poppler__MediaRendition*
///
bool q_poppler__mediarendition_is_valid(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MediaRendition.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Poppler__MediaRendition*
///
const char* q_poppler__mediarendition_content_type(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MediaRendition.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const Poppler__MediaRendition*
///
const char* q_poppler__mediarendition_file_name(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MediaRendition.html)
///
/// @param self const Poppler__MediaRendition*
///
bool q_poppler__mediarendition_is_embedded(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MediaRendition.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const Poppler__MediaRendition*
///
char* q_poppler__mediarendition_data(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MediaRendition.html)
///
/// @param self const Poppler__MediaRendition*
///
bool q_poppler__mediarendition_auto_play(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MediaRendition.html)
///
/// @param self const Poppler__MediaRendition*
///
bool q_poppler__mediarendition_show_controls(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MediaRendition.html)
///
/// @param self const Poppler__MediaRendition*
///
float q_poppler__mediarendition_repeat_count(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MediaRendition.html)
///
/// @param self const Poppler__MediaRendition*
///
QSize* q_poppler__mediarendition_size(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MediaRendition.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__MediaRendition*
///
void q_poppler__mediarendition_delete(void* self);

#endif
