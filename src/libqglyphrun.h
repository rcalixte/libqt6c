#pragma once
#ifndef LIBQGLYPHRUN_H
#define LIBQGLYPHRUN_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html)

/// q_glyphrun_new constructs a new QGlyphRun object.
///
QGlyphRun* q_glyphrun_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html)

/// q_glyphrun_new2 constructs a new QGlyphRun object.
///
/// @param other QGlyphRun*
///
QGlyphRun* q_glyphrun_new2(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#operator-eq)
///
/// @param self QGlyphRun*
/// @param other QGlyphRun*
///
void q_glyphrun_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#swap)
///
/// @param self QGlyphRun*
/// @param other QGlyphRun*
///
void q_glyphrun_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#rawFont)
///
/// @param self const QGlyphRun*
///
QRawFont* q_glyphrun_raw_font(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#setRawFont)
///
/// @param self QGlyphRun*
/// @param rawFont QRawFont*
///
void q_glyphrun_set_raw_font(void* self, const void* rawFont);

/// [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#setRawData)
///
/// @param self QGlyphRun*
/// @param glyphIndexArray uint32_t*
/// @param glyphPositionArray QPointF*
/// @param size int
///
void q_glyphrun_set_raw_data(void* self, uint32_t* glyphIndexArray, const void* glyphPositionArray, int size);

/// [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#glyphIndexes)
///
/// @param self const QGlyphRun*
///
/// @return libqt_list of uint32_t
///
libqt_list q_glyphrun_glyph_indexes(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#setGlyphIndexes)
///
/// @param self QGlyphRun*
/// @param glyphIndexes libqt_list of uint32_t
///
void q_glyphrun_set_glyph_indexes(void* self, libqt_list glyphIndexes);

/// [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#positions)
///
/// @param self const QGlyphRun*
///
/// @return libqt_list of QPointF*
///
libqt_list q_glyphrun_positions(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#setPositions)
///
/// @param self QGlyphRun*
/// @param positions libqt_list of QPointF*
///
void q_glyphrun_set_positions(void* self, libqt_list positions);

/// [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#clear)
///
/// @param self QGlyphRun*
///
void q_glyphrun_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#operator-eq-eq)
///
/// @param self const QGlyphRun*
/// @param other QGlyphRun*
///
bool q_glyphrun_operator_equal(const void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#operator-not-eq)
///
/// @param self const QGlyphRun*
/// @param other QGlyphRun*
///
bool q_glyphrun_operator_not_equal(const void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#setOverline)
///
/// @param self QGlyphRun*
/// @param overline bool
///
void q_glyphrun_set_overline(void* self, bool overline);

/// [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#overline)
///
/// @param self const QGlyphRun*
///
bool q_glyphrun_overline(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#setUnderline)
///
/// @param self QGlyphRun*
/// @param underline bool
///
void q_glyphrun_set_underline(void* self, bool underline);

/// [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#underline)
///
/// @param self const QGlyphRun*
///
bool q_glyphrun_underline(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#setStrikeOut)
///
/// @param self QGlyphRun*
/// @param strikeOut bool
///
void q_glyphrun_set_strike_out(void* self, bool strikeOut);

/// [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#strikeOut)
///
/// @param self const QGlyphRun*
///
bool q_glyphrun_strike_out(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#setRightToLeft)
///
/// @param self QGlyphRun*
/// @param on bool
///
void q_glyphrun_set_right_to_left(void* self, bool on);

/// [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#isRightToLeft)
///
/// @param self const QGlyphRun*
///
bool q_glyphrun_is_right_to_left(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#setFlag)
///
/// @param self QGlyphRun*
/// @param flag enum QGlyphRun__GlyphRunFlag
///
void q_glyphrun_set_flag(void* self, int32_t flag);

/// [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#setFlags)
///
/// @param self QGlyphRun*
/// @param flags flag of enum QGlyphRun__GlyphRunFlag
///
void q_glyphrun_set_flags(void* self, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#flags)
///
/// @param self const QGlyphRun*
///
/// @return flag of enum QGlyphRun__GlyphRunFlag
///
int32_t q_glyphrun_flags(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#setBoundingRect)
///
/// @param self QGlyphRun*
/// @param boundingRect QRectF*
///
void q_glyphrun_set_bounding_rect(void* self, const void* boundingRect);

/// [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#boundingRect)
///
/// @param self const QGlyphRun*
///
QRectF* q_glyphrun_bounding_rect(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#stringIndexes)
///
/// @param self const QGlyphRun*
///
/// @return libqt_list of intptr_t
///
libqt_list q_glyphrun_string_indexes(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#setStringIndexes)
///
/// @param self QGlyphRun*
/// @param stringIndexes libqt_list of intptr_t
///
void q_glyphrun_set_string_indexes(void* self, libqt_list stringIndexes);

/// [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#setSourceString)
///
/// @param self QGlyphRun*
/// @param sourceString const char*
///
void q_glyphrun_set_source_string(void* self, const char* sourceString);

/// [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#sourceString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QGlyphRun*
///
const char* q_glyphrun_source_string(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#isEmpty)
///
/// @param self const QGlyphRun*
///
bool q_glyphrun_is_empty(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#setFlag)
///
/// @param self QGlyphRun*
/// @param flag enum QGlyphRun__GlyphRunFlag
/// @param enabled bool
///
void q_glyphrun_set_flag2(void* self, int32_t flag, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#dtor.QGlyphRun)
///
/// Delete this object from C++ memory.
///
/// @param self QGlyphRun*
///
void q_glyphrun_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qglyphrun.html#public-types)

typedef enum {
    QGLYPHRUN_GLYPHRUNFLAG_OVERLINE = 1,
    QGLYPHRUN_GLYPHRUNFLAG_UNDERLINE = 2,
    QGLYPHRUN_GLYPHRUNFLAG_STRIKEOUT = 4,
    QGLYPHRUN_GLYPHRUNFLAG_RIGHTTOLEFT = 8,
    QGLYPHRUN_GLYPHRUNFLAG_SPLITLIGATURE = 16
} QGlyphRun__GlyphRunFlag;

#endif
