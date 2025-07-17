#pragma once
#ifndef SRCQT6C_LIBQFONTINFO_H
#define SRCQT6C_LIBQFONTINFO_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qfontinfo.html

/// q_fontinfo_new constructs a new QFontInfo object.
///
/// ``` QFont* param1 ```
QFontInfo* q_fontinfo_new(void* param1);

/// q_fontinfo_new2 constructs a new QFontInfo object.
///
/// ``` QFontInfo* param1 ```
QFontInfo* q_fontinfo_new2(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#operator-eq)
///
/// ``` QFontInfo* self, QFontInfo* param1 ```
void q_fontinfo_operator_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#swap)
///
/// ``` QFontInfo* self, QFontInfo* other ```
void q_fontinfo_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#family)
///
/// ``` QFontInfo* self ```
const char* q_fontinfo_family(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#styleName)
///
/// ``` QFontInfo* self ```
const char* q_fontinfo_style_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#pixelSize)
///
/// ``` QFontInfo* self ```
int32_t q_fontinfo_pixel_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#pointSize)
///
/// ``` QFontInfo* self ```
int32_t q_fontinfo_point_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#pointSizeF)
///
/// ``` QFontInfo* self ```
double q_fontinfo_point_size_f(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#italic)
///
/// ``` QFontInfo* self ```
bool q_fontinfo_italic(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#style)
///
/// ``` QFontInfo* self ```
int64_t q_fontinfo_style(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#weight)
///
/// ``` QFontInfo* self ```
int32_t q_fontinfo_weight(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#bold)
///
/// ``` QFontInfo* self ```
bool q_fontinfo_bold(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#underline)
///
/// ``` QFontInfo* self ```
bool q_fontinfo_underline(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#overline)
///
/// ``` QFontInfo* self ```
bool q_fontinfo_overline(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#strikeOut)
///
/// ``` QFontInfo* self ```
bool q_fontinfo_strike_out(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#fixedPitch)
///
/// ``` QFontInfo* self ```
bool q_fontinfo_fixed_pitch(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#styleHint)
///
/// ``` QFontInfo* self ```
int64_t q_fontinfo_style_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#legacyWeight)
///
/// ``` QFontInfo* self ```
int32_t q_fontinfo_legacy_weight(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#exactMatch)
///
/// ``` QFontInfo* self ```
bool q_fontinfo_exact_match(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#dtor.QFontInfo)
///
/// Delete this object from C++ memory.
///
/// ``` QFontInfo* self ```
void q_fontinfo_delete(void* self);

#endif
