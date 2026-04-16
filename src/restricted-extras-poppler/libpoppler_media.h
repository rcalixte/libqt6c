#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_POPPLER_QT6C_LIBPOPPLER_MEDIA_H
#define SRC_RESTRICTED_EXTRAS_POPPLER_QT6C_LIBPOPPLER_MEDIA_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MediaRendition.html)

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MediaRendition.html)
///
/// @param self Poppler__MediaRendition*
///
bool q_poppler__mediarendition_is_valid(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MediaRendition.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__MediaRendition*
///
const char* q_poppler__mediarendition_content_type(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MediaRendition.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__MediaRendition*
///
const char* q_poppler__mediarendition_file_name(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MediaRendition.html)
///
/// @param self Poppler__MediaRendition*
///
bool q_poppler__mediarendition_is_embedded(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MediaRendition.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self Poppler__MediaRendition*
///
char* q_poppler__mediarendition_data(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MediaRendition.html)
///
/// @param self Poppler__MediaRendition*
///
bool q_poppler__mediarendition_auto_play(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MediaRendition.html)
///
/// @param self Poppler__MediaRendition*
///
bool q_poppler__mediarendition_show_controls(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MediaRendition.html)
///
/// @param self Poppler__MediaRendition*
///
float q_poppler__mediarendition_repeat_count(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MediaRendition.html)
///
/// @param self Poppler__MediaRendition*
///
QSize* q_poppler__mediarendition_size(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MediaRendition.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__MediaRendition*
///
void q_poppler__mediarendition_delete(void* self);

#endif
