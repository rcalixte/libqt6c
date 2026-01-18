#include "libqpoint.hpp"
#include "libqrawfont.hpp"
#include "libqrect.hpp"
#include "libqglyphrun.hpp"
#include "libqglyphrun.h"

QGlyphRun* q_glyphrun_new() {
    return QGlyphRun_new();
}

QGlyphRun* q_glyphrun_new2(void* other) {
    return QGlyphRun_new2((QGlyphRun*)other);
}

void q_glyphrun_operator_assign(void* self, void* other) {
    QGlyphRun_OperatorAssign((QGlyphRun*)self, (QGlyphRun*)other);
}

void q_glyphrun_swap(void* self, void* other) {
    QGlyphRun_Swap((QGlyphRun*)self, (QGlyphRun*)other);
}

QRawFont* q_glyphrun_raw_font(void* self) {
    return QGlyphRun_RawFont((QGlyphRun*)self);
}

void q_glyphrun_set_raw_font(void* self, void* rawFont) {
    QGlyphRun_SetRawFont((QGlyphRun*)self, (QRawFont*)rawFont);
}

void q_glyphrun_set_raw_data(void* self, uint32_t* glyphIndexArray, void* glyphPositionArray, int size) {
    QGlyphRun_SetRawData((QGlyphRun*)self, glyphIndexArray, (QPointF*)glyphPositionArray, size);
}

libqt_list /* of uint32_t */ q_glyphrun_glyph_indexes(void* self) {
    libqt_list _arr = QGlyphRun_GlyphIndexes((QGlyphRun*)self);
    return _arr;
}

void q_glyphrun_set_glyph_indexes(void* self, libqt_list /* of uint32_t */ glyphIndexes) {
    QGlyphRun_SetGlyphIndexes((QGlyphRun*)self, glyphIndexes);
}

libqt_list /* of QPointF* */ q_glyphrun_positions(void* self) {
    libqt_list _arr = QGlyphRun_Positions((QGlyphRun*)self);
    return _arr;
}

void q_glyphrun_set_positions(void* self, libqt_list /* of QPointF* */ positions) {
    QGlyphRun_SetPositions((QGlyphRun*)self, positions);
}

void q_glyphrun_clear(void* self) {
    QGlyphRun_Clear((QGlyphRun*)self);
}

bool q_glyphrun_operator_equal(void* self, void* other) {
    return QGlyphRun_OperatorEqual((QGlyphRun*)self, (QGlyphRun*)other);
}

bool q_glyphrun_operator_not_equal(void* self, void* other) {
    return QGlyphRun_OperatorNotEqual((QGlyphRun*)self, (QGlyphRun*)other);
}

void q_glyphrun_set_overline(void* self, bool overline) {
    QGlyphRun_SetOverline((QGlyphRun*)self, overline);
}

bool q_glyphrun_overline(void* self) {
    return QGlyphRun_Overline((QGlyphRun*)self);
}

void q_glyphrun_set_underline(void* self, bool underline) {
    QGlyphRun_SetUnderline((QGlyphRun*)self, underline);
}

bool q_glyphrun_underline(void* self) {
    return QGlyphRun_Underline((QGlyphRun*)self);
}

void q_glyphrun_set_strike_out(void* self, bool strikeOut) {
    QGlyphRun_SetStrikeOut((QGlyphRun*)self, strikeOut);
}

bool q_glyphrun_strike_out(void* self) {
    return QGlyphRun_StrikeOut((QGlyphRun*)self);
}

void q_glyphrun_set_right_to_left(void* self, bool on) {
    QGlyphRun_SetRightToLeft((QGlyphRun*)self, on);
}

bool q_glyphrun_is_right_to_left(void* self) {
    return QGlyphRun_IsRightToLeft((QGlyphRun*)self);
}

void q_glyphrun_set_flag(void* self, int32_t flag) {
    QGlyphRun_SetFlag((QGlyphRun*)self, flag);
}

void q_glyphrun_set_flags(void* self, int32_t flags) {
    QGlyphRun_SetFlags((QGlyphRun*)self, flags);
}

int32_t q_glyphrun_flags(void* self) {
    return QGlyphRun_Flags((QGlyphRun*)self);
}

void q_glyphrun_set_bounding_rect(void* self, void* boundingRect) {
    QGlyphRun_SetBoundingRect((QGlyphRun*)self, (QRectF*)boundingRect);
}

QRectF* q_glyphrun_bounding_rect(void* self) {
    return QGlyphRun_BoundingRect((QGlyphRun*)self);
}

libqt_list /* of int64_t */ q_glyphrun_string_indexes(void* self) {
    libqt_list _arr = QGlyphRun_StringIndexes((QGlyphRun*)self);
    return _arr;
}

void q_glyphrun_set_string_indexes(void* self, libqt_list /* of int64_t */ stringIndexes) {
    QGlyphRun_SetStringIndexes((QGlyphRun*)self, stringIndexes);
}

void q_glyphrun_set_source_string(void* self, const char* sourceString) {
    QGlyphRun_SetSourceString((QGlyphRun*)self, qstring(sourceString));
}

const char* q_glyphrun_source_string(void* self) {
    libqt_string _str = QGlyphRun_SourceString((QGlyphRun*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_glyphrun_is_empty(void* self) {
    return QGlyphRun_IsEmpty((QGlyphRun*)self);
}

void q_glyphrun_set_flag2(void* self, int32_t flag, bool enabled) {
    QGlyphRun_SetFlag2((QGlyphRun*)self, flag, enabled);
}

void q_glyphrun_delete(void* self) {
    QGlyphRun_Delete((QGlyphRun*)(self));
}
