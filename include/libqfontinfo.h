#pragma once
#ifndef LIBQFONTINFO_H
#define LIBQFONTINFO_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html)

/// q_fontinfo_new constructs a new QFontInfo object.
///
/// @param param1 QFont*
///
QFontInfo* q_fontinfo_new(const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html)

/// q_fontinfo_new2 constructs a new QFontInfo object.
///
/// @param param1 QFontInfo*
///
QFontInfo* q_fontinfo_new2(const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#operator-eq)
///
/// @param self QFontInfo*
/// @param param1 QFontInfo*
///
void q_fontinfo_operator_assign(void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#swap)
///
/// @param self QFontInfo*
/// @param other QFontInfo*
///
void q_fontinfo_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#family)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QFontInfo*
///
const char* q_fontinfo_family(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#styleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QFontInfo*
///
const char* q_fontinfo_style_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#pixelSize)
///
/// @param self const QFontInfo*
///
int32_t q_fontinfo_pixel_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#pointSize)
///
/// @param self const QFontInfo*
///
int32_t q_fontinfo_point_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#pointSizeF)
///
/// @param self const QFontInfo*
///
double q_fontinfo_point_size_f(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#italic)
///
/// @param self const QFontInfo*
///
bool q_fontinfo_italic(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#style)
///
/// @param self const QFontInfo*
///
/// @return enum QFont__Style
///
int32_t q_fontinfo_style(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#weight)
///
/// @param self const QFontInfo*
///
int32_t q_fontinfo_weight(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#bold)
///
/// @param self const QFontInfo*
///
bool q_fontinfo_bold(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#underline)
///
/// @param self const QFontInfo*
///
bool q_fontinfo_underline(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#overline)
///
/// @param self const QFontInfo*
///
bool q_fontinfo_overline(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#strikeOut)
///
/// @param self const QFontInfo*
///
bool q_fontinfo_strike_out(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#fixedPitch)
///
/// @param self const QFontInfo*
///
bool q_fontinfo_fixed_pitch(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#styleHint)
///
/// @param self const QFontInfo*
///
/// @return enum QFont__StyleHint
///
int32_t q_fontinfo_style_hint(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#legacyWeight)
///
/// @param self const QFontInfo*
///
int32_t q_fontinfo_legacy_weight(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#exactMatch)
///
/// @param self const QFontInfo*
///
bool q_fontinfo_exact_match(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfontinfo.html#dtor.QFontInfo)
///
/// Delete this object from C++ memory.
///
/// @param self QFontInfo*
///
void q_fontinfo_delete(void* self);

#endif
