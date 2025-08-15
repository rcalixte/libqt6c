#pragma once
#ifndef SRCQT6C_LIBQFONTINFO_H
#define SRCQT6C_LIBQFONTINFO_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qfontinfo.html

/// q_fontinfo_new constructs a new QFontInfo object.
///
/// @param param1 QFont*
QFontInfo* q_fontinfo_new(void* param1);

/// q_fontinfo_new2 constructs a new QFontInfo object.
///
/// @param param1 QFontInfo*
QFontInfo* q_fontinfo_new2(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#operator-eq)
///
/// @param self QFontInfo*
/// @param param1 QFontInfo*
void q_fontinfo_operator_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#swap)
///
/// @param self QFontInfo*
/// @param other QFontInfo*
void q_fontinfo_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#family)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFontInfo*
const char* q_fontinfo_family(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#styleName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QFontInfo*
const char* q_fontinfo_style_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#pixelSize)
///
/// @param self QFontInfo*
int32_t q_fontinfo_pixel_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#pointSize)
///
/// @param self QFontInfo*
int32_t q_fontinfo_point_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#pointSizeF)
///
/// @param self QFontInfo*
double q_fontinfo_point_size_f(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#italic)
///
/// @param self QFontInfo*
bool q_fontinfo_italic(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#style)
///
/// @param self QFontInfo*
///
/// @return enum QFont__Style
int64_t q_fontinfo_style(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#weight)
///
/// @param self QFontInfo*
int32_t q_fontinfo_weight(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#bold)
///
/// @param self QFontInfo*
bool q_fontinfo_bold(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#underline)
///
/// @param self QFontInfo*
bool q_fontinfo_underline(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#overline)
///
/// @param self QFontInfo*
bool q_fontinfo_overline(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#strikeOut)
///
/// @param self QFontInfo*
bool q_fontinfo_strike_out(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#fixedPitch)
///
/// @param self QFontInfo*
bool q_fontinfo_fixed_pitch(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#styleHint)
///
/// @param self QFontInfo*
///
/// @return enum QFont__StyleHint
int64_t q_fontinfo_style_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#legacyWeight)
///
/// @param self QFontInfo*
int32_t q_fontinfo_legacy_weight(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#exactMatch)
///
/// @param self QFontInfo*
bool q_fontinfo_exact_match(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#dtor.QFontInfo)
///
/// Delete this object from C++ memory.
///
/// @param self QFontInfo*
void q_fontinfo_delete(void* self);

#endif
