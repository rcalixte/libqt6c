#pragma once
#ifndef SRCQT6C_LIBQGLYPHRUN_H
#define SRCQT6C_LIBQGLYPHRUN_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqpoint.h"
#include "libqrawfont.h"
#include "libqrect.h"

/// https://doc.qt.io/qt-6/qglyphrun.html

/// q_glyphrun_new constructs a new QGlyphRun object.
///
///
QGlyphRun* q_glyphrun_new();

/// q_glyphrun_new2 constructs a new QGlyphRun object.
///
/// ``` QGlyphRun* other ```
QGlyphRun* q_glyphrun_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#operator=)
///
/// ``` QGlyphRun* self, QGlyphRun* other ```
void q_glyphrun_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#swap)
///
/// ``` QGlyphRun* self, QGlyphRun* other ```
void q_glyphrun_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#rawFont)
///
/// ``` QGlyphRun* self ```
QRawFont* q_glyphrun_raw_font(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#setRawFont)
///
/// ``` QGlyphRun* self, QRawFont* rawFont ```
void q_glyphrun_set_raw_font(void* self, void* rawFont);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#setRawData)
///
/// ``` QGlyphRun* self, uint32_t* glyphIndexArray, QPointF* glyphPositionArray, int size ```
void q_glyphrun_set_raw_data(void* self, uint32_t* glyphIndexArray, void* glyphPositionArray, int size);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#glyphIndexes)
///
/// ``` QGlyphRun* self ```
libqt_list /* of uint32_t */ q_glyphrun_glyph_indexes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#setGlyphIndexes)
///
/// ``` QGlyphRun* self, unsigned int* glyphIndexes[] ```
void q_glyphrun_set_glyph_indexes(void* self, unsigned int* glyphIndexes[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#positions)
///
/// ``` QGlyphRun* self ```
libqt_list /* of QPointF* */ q_glyphrun_positions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#setPositions)
///
/// ``` QGlyphRun* self, QPointF* positions[] ```
void q_glyphrun_set_positions(void* self, void* positions[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#clear)
///
/// ``` QGlyphRun* self ```
void q_glyphrun_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#operator==)
///
/// ``` QGlyphRun* self, QGlyphRun* other ```
bool q_glyphrun_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#operator!=)
///
/// ``` QGlyphRun* self, QGlyphRun* other ```
bool q_glyphrun_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#setOverline)
///
/// ``` QGlyphRun* self, bool overline ```
void q_glyphrun_set_overline(void* self, bool overline);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#overline)
///
/// ``` QGlyphRun* self ```
bool q_glyphrun_overline(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#setUnderline)
///
/// ``` QGlyphRun* self, bool underline ```
void q_glyphrun_set_underline(void* self, bool underline);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#underline)
///
/// ``` QGlyphRun* self ```
bool q_glyphrun_underline(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#setStrikeOut)
///
/// ``` QGlyphRun* self, bool strikeOut ```
void q_glyphrun_set_strike_out(void* self, bool strikeOut);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#strikeOut)
///
/// ``` QGlyphRun* self ```
bool q_glyphrun_strike_out(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#setRightToLeft)
///
/// ``` QGlyphRun* self, bool on ```
void q_glyphrun_set_right_to_left(void* self, bool on);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#isRightToLeft)
///
/// ``` QGlyphRun* self ```
bool q_glyphrun_is_right_to_left(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#setFlag)
///
/// ``` QGlyphRun* self, enum QGlyphRun__GlyphRunFlag flag ```
void q_glyphrun_set_flag(void* self, int64_t flag);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#setFlags)
///
/// ``` QGlyphRun* self, int flags ```
void q_glyphrun_set_flags(void* self, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#flags)
///
/// ``` QGlyphRun* self ```
int64_t q_glyphrun_flags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#setBoundingRect)
///
/// ``` QGlyphRun* self, QRectF* boundingRect ```
void q_glyphrun_set_bounding_rect(void* self, void* boundingRect);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#boundingRect)
///
/// ``` QGlyphRun* self ```
QRectF* q_glyphrun_bounding_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#isEmpty)
///
/// ``` QGlyphRun* self ```
bool q_glyphrun_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#setFlag)
///
/// ``` QGlyphRun* self, enum QGlyphRun__GlyphRunFlag flag, bool enabled ```
void q_glyphrun_set_flag2(void* self, int64_t flag, bool enabled);

/// Delete this object from C++ memory.
///
/// ``` QGlyphRun* self ```
void q_glyphrun_delete(void* self);

/// https://doc.qt.io/qt-6/qglyphrun.html#types

typedef enum {
    QGLYPHRUN_GLYPHRUNFLAG_OVERLINE = 1,
    QGLYPHRUN_GLYPHRUNFLAG_UNDERLINE = 2,
    QGLYPHRUN_GLYPHRUNFLAG_STRIKEOUT = 4,
    QGLYPHRUN_GLYPHRUNFLAG_RIGHTTOLEFT = 8,
    QGLYPHRUN_GLYPHRUNFLAG_SPLITLIGATURE = 16
} QGlyphRun__GlyphRunFlag;

#endif
