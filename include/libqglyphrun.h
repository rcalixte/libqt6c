#pragma once
#ifndef SRCQT6C_LIBQGLYPHRUN_H
#define SRCQT6C_LIBQGLYPHRUN_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qglyphrun.html

/// q_glyphrun_new constructs a new QGlyphRun object.
///
QGlyphRun* q_glyphrun_new();

/// q_glyphrun_new2 constructs a new QGlyphRun object.
///
/// @param other QGlyphRun*
QGlyphRun* q_glyphrun_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#operator-eq)
///
/// @param self QGlyphRun*
/// @param other QGlyphRun*
void q_glyphrun_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#swap)
///
/// @param self QGlyphRun*
/// @param other QGlyphRun*
void q_glyphrun_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#rawFont)
///
/// @param self QGlyphRun*
QRawFont* q_glyphrun_raw_font(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#setRawFont)
///
/// @param self QGlyphRun*
/// @param rawFont QRawFont*
void q_glyphrun_set_raw_font(void* self, void* rawFont);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#setRawData)
///
/// @param self QGlyphRun*
/// @param glyphIndexArray uint32_t*
/// @param glyphPositionArray QPointF*
/// @param size int
void q_glyphrun_set_raw_data(void* self, uint32_t* glyphIndexArray, void* glyphPositionArray, int size);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#glyphIndexes)
///
/// @param self QGlyphRun*
libqt_list /* of uint32_t */ q_glyphrun_glyph_indexes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#setGlyphIndexes)
///
/// @param self QGlyphRun*
/// @param glyphIndexes libqt_list /* of uint32_t */
void q_glyphrun_set_glyph_indexes(void* self, libqt_list glyphIndexes);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#positions)
///
/// @param self QGlyphRun*
libqt_list /* of QPointF* */ q_glyphrun_positions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#setPositions)
///
/// @param self QGlyphRun*
/// @param positions libqt_list /* of QPointF* */
void q_glyphrun_set_positions(void* self, libqt_list positions);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#clear)
///
/// @param self QGlyphRun*
void q_glyphrun_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#operator-eq-eq)
///
/// @param self QGlyphRun*
/// @param other QGlyphRun*
bool q_glyphrun_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#operator-not-eq)
///
/// @param self QGlyphRun*
/// @param other QGlyphRun*
bool q_glyphrun_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#setOverline)
///
/// @param self QGlyphRun*
/// @param overline bool
void q_glyphrun_set_overline(void* self, bool overline);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#overline)
///
/// @param self QGlyphRun*
bool q_glyphrun_overline(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#setUnderline)
///
/// @param self QGlyphRun*
/// @param underline bool
void q_glyphrun_set_underline(void* self, bool underline);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#underline)
///
/// @param self QGlyphRun*
bool q_glyphrun_underline(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#setStrikeOut)
///
/// @param self QGlyphRun*
/// @param strikeOut bool
void q_glyphrun_set_strike_out(void* self, bool strikeOut);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#strikeOut)
///
/// @param self QGlyphRun*
bool q_glyphrun_strike_out(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#setRightToLeft)
///
/// @param self QGlyphRun*
/// @param on bool
void q_glyphrun_set_right_to_left(void* self, bool on);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#isRightToLeft)
///
/// @param self QGlyphRun*
bool q_glyphrun_is_right_to_left(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#setFlag)
///
/// @param self QGlyphRun*
/// @param flag enum QGlyphRun__GlyphRunFlag
void q_glyphrun_set_flag(void* self, int32_t flag);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#setFlags)
///
/// @param self QGlyphRun*
/// @param flags flag of enum QGlyphRun__GlyphRunFlag
void q_glyphrun_set_flags(void* self, int32_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#flags)
///
/// @param self QGlyphRun*
///
/// @return flag of enum QGlyphRun__GlyphRunFlag
int32_t q_glyphrun_flags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#setBoundingRect)
///
/// @param self QGlyphRun*
/// @param boundingRect QRectF*
void q_glyphrun_set_bounding_rect(void* self, void* boundingRect);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#boundingRect)
///
/// @param self QGlyphRun*
QRectF* q_glyphrun_bounding_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#stringIndexes)
///
/// @param self QGlyphRun*
libqt_list /* of int64_t */ q_glyphrun_string_indexes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#setStringIndexes)
///
/// @param self QGlyphRun*
/// @param stringIndexes libqt_list /* of int64_t */
void q_glyphrun_set_string_indexes(void* self, libqt_list stringIndexes);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#setSourceString)
///
/// @param self QGlyphRun*
/// @param sourceString const char*
void q_glyphrun_set_source_string(void* self, const char* sourceString);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#sourceString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QGlyphRun*
const char* q_glyphrun_source_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#isEmpty)
///
/// @param self QGlyphRun*
bool q_glyphrun_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#setFlag)
///
/// @param self QGlyphRun*
/// @param flag enum QGlyphRun__GlyphRunFlag
/// @param enabled bool
void q_glyphrun_set_flag2(void* self, int32_t flag, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#dtor.QGlyphRun)
///
/// Delete this object from C++ memory.
///
/// @param self QGlyphRun*
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
