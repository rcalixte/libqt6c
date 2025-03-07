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

QGlyphRun* q_glyphrun_new();
QGlyphRun* q_glyphrun_new2(void* other);
void q_glyphrun_operator_assign(void* self, void* other);
void q_glyphrun_swap(void* self, void* other);
QRawFont* q_glyphrun_raw_font(void* self);
void q_glyphrun_set_raw_font(void* self, void* rawFont);
void q_glyphrun_set_raw_data(void* self, uint32_t* glyphIndexArray, void* glyphPositionArray, int size);
libqt_list /* of uint32_t */ q_glyphrun_glyph_indexes(void* self);
void q_glyphrun_set_glyph_indexes(void* self, unsigned int* glyphIndexes[]);
libqt_list /* of QPointF* */ q_glyphrun_positions(void* self);
void q_glyphrun_set_positions(void* self, void* positions[]);
void q_glyphrun_clear(void* self);
bool q_glyphrun_operator_equal(void* self, void* other);
bool q_glyphrun_operator_not_equal(void* self, void* other);
void q_glyphrun_set_overline(void* self, bool overline);
bool q_glyphrun_overline(void* self);
void q_glyphrun_set_underline(void* self, bool underline);
bool q_glyphrun_underline(void* self);
void q_glyphrun_set_strike_out(void* self, bool strikeOut);
bool q_glyphrun_strike_out(void* self);
void q_glyphrun_set_right_to_left(void* self, bool on);
bool q_glyphrun_is_right_to_left(void* self);
void q_glyphrun_set_flag(void* self, int64_t flag);
void q_glyphrun_set_flags(void* self, int64_t flags);
int64_t q_glyphrun_flags(void* self);
void q_glyphrun_set_bounding_rect(void* self, void* boundingRect);
QRectF* q_glyphrun_bounding_rect(void* self);
bool q_glyphrun_is_empty(void* self);
void q_glyphrun_set_flag2(void* self, int64_t flag, bool enabled);
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
