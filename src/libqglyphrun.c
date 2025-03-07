#include "libqpoint.hpp"
#include "libqrawfont.hpp"
#include "libqrect.hpp"
#include "libqglyphrun.hpp"
#include "libqglyphrun.h"

/// https://doc.qt.io/qt-6/qglyphrun.html

/// q_glyphrun_new constructs a new QGlyphRun object.
///
///
QGlyphRun* q_glyphrun_new() {
    return QGlyphRun_new();
}

/// q_glyphrun_new2 constructs a new QGlyphRun object.
///
/// ``` QGlyphRun* other ```
QGlyphRun* q_glyphrun_new2(void* other) {
    return QGlyphRun_new2((QGlyphRun*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#operator=)
///
/// ``` QGlyphRun* self, QGlyphRun* other ```
void q_glyphrun_operator_assign(void* self, void* other) {
    QGlyphRun_OperatorAssign((QGlyphRun*)self, (QGlyphRun*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#swap)
///
/// ``` QGlyphRun* self, QGlyphRun* other ```
void q_glyphrun_swap(void* self, void* other) {
    QGlyphRun_Swap((QGlyphRun*)self, (QGlyphRun*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#rawFont)
///
/// ``` QGlyphRun* self ```
QRawFont* q_glyphrun_raw_font(void* self) {
    return QGlyphRun_RawFont((QGlyphRun*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#setRawFont)
///
/// ``` QGlyphRun* self, QRawFont* rawFont ```
void q_glyphrun_set_raw_font(void* self, void* rawFont) {
    QGlyphRun_SetRawFont((QGlyphRun*)self, (QRawFont*)rawFont);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#setRawData)
///
/// ``` QGlyphRun* self, uint32_t* glyphIndexArray, QPointF* glyphPositionArray, int size ```
void q_glyphrun_set_raw_data(void* self, uint32_t* glyphIndexArray, void* glyphPositionArray, int size) {
    QGlyphRun_SetRawData((QGlyphRun*)self, glyphIndexArray, (QPointF*)glyphPositionArray, size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#glyphIndexes)
///
/// ``` QGlyphRun* self ```
libqt_list /* of uint32_t */ q_glyphrun_glyph_indexes(void* self) {
    libqt_list _arr = QGlyphRun_GlyphIndexes((QGlyphRun*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#setGlyphIndexes)
///
/// ``` QGlyphRun* self, unsigned int* glyphIndexes[] ```
void q_glyphrun_set_glyph_indexes(void* self, unsigned int* glyphIndexes[]) {
    size_t glyphIndexes_len = 0;
    while (glyphIndexes[glyphIndexes_len] != NULL) {
        glyphIndexes_len++;
    }
    libqt_list glyphIndexes_list = {
        .len = glyphIndexes_len,
        .data = {(unsigned int*)glyphIndexes},
    };
    QGlyphRun_SetGlyphIndexes((QGlyphRun*)self, glyphIndexes_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#positions)
///
/// ``` QGlyphRun* self ```
libqt_list /* of QPointF* */ q_glyphrun_positions(void* self) {
    libqt_list _arr = QGlyphRun_Positions((QGlyphRun*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#setPositions)
///
/// ``` QGlyphRun* self, QPointF* positions[] ```
void q_glyphrun_set_positions(void* self, void* positions[]) {
    QPointF** positions_arr = (QPointF**)positions;
    size_t positions_len = 0;
    while (positions_arr[positions_len] != NULL) {
        positions_len++;
    }
    libqt_list positions_list = {
        .len = positions_len,
        .data = {(QPointF*)positions},
    };
    QGlyphRun_SetPositions((QGlyphRun*)self, positions_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#clear)
///
/// ``` QGlyphRun* self ```
void q_glyphrun_clear(void* self) {
    QGlyphRun_Clear((QGlyphRun*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#operator==)
///
/// ``` QGlyphRun* self, QGlyphRun* other ```
bool q_glyphrun_operator_equal(void* self, void* other) {
    return QGlyphRun_OperatorEqual((QGlyphRun*)self, (QGlyphRun*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#operator!=)
///
/// ``` QGlyphRun* self, QGlyphRun* other ```
bool q_glyphrun_operator_not_equal(void* self, void* other) {
    return QGlyphRun_OperatorNotEqual((QGlyphRun*)self, (QGlyphRun*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#setOverline)
///
/// ``` QGlyphRun* self, bool overline ```
void q_glyphrun_set_overline(void* self, bool overline) {
    QGlyphRun_SetOverline((QGlyphRun*)self, overline);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#overline)
///
/// ``` QGlyphRun* self ```
bool q_glyphrun_overline(void* self) {
    return QGlyphRun_Overline((QGlyphRun*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#setUnderline)
///
/// ``` QGlyphRun* self, bool underline ```
void q_glyphrun_set_underline(void* self, bool underline) {
    QGlyphRun_SetUnderline((QGlyphRun*)self, underline);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#underline)
///
/// ``` QGlyphRun* self ```
bool q_glyphrun_underline(void* self) {
    return QGlyphRun_Underline((QGlyphRun*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#setStrikeOut)
///
/// ``` QGlyphRun* self, bool strikeOut ```
void q_glyphrun_set_strike_out(void* self, bool strikeOut) {
    QGlyphRun_SetStrikeOut((QGlyphRun*)self, strikeOut);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#strikeOut)
///
/// ``` QGlyphRun* self ```
bool q_glyphrun_strike_out(void* self) {
    return QGlyphRun_StrikeOut((QGlyphRun*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#setRightToLeft)
///
/// ``` QGlyphRun* self, bool on ```
void q_glyphrun_set_right_to_left(void* self, bool on) {
    QGlyphRun_SetRightToLeft((QGlyphRun*)self, on);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#isRightToLeft)
///
/// ``` QGlyphRun* self ```
bool q_glyphrun_is_right_to_left(void* self) {
    return QGlyphRun_IsRightToLeft((QGlyphRun*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#setFlag)
///
/// ``` QGlyphRun* self, enum QGlyphRun__GlyphRunFlag flag ```
void q_glyphrun_set_flag(void* self, int64_t flag) {
    QGlyphRun_SetFlag((QGlyphRun*)self, flag);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#setFlags)
///
/// ``` QGlyphRun* self, int flags ```
void q_glyphrun_set_flags(void* self, int64_t flags) {
    QGlyphRun_SetFlags((QGlyphRun*)self, flags);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#flags)
///
/// ``` QGlyphRun* self ```
int64_t q_glyphrun_flags(void* self) {
    return QGlyphRun_Flags((QGlyphRun*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#setBoundingRect)
///
/// ``` QGlyphRun* self, QRectF* boundingRect ```
void q_glyphrun_set_bounding_rect(void* self, void* boundingRect) {
    QGlyphRun_SetBoundingRect((QGlyphRun*)self, (QRectF*)boundingRect);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#boundingRect)
///
/// ``` QGlyphRun* self ```
QRectF* q_glyphrun_bounding_rect(void* self) {
    return QGlyphRun_BoundingRect((QGlyphRun*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#isEmpty)
///
/// ``` QGlyphRun* self ```
bool q_glyphrun_is_empty(void* self) {
    return QGlyphRun_IsEmpty((QGlyphRun*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qglyphrun.html#setFlag)
///
/// ``` QGlyphRun* self, enum QGlyphRun__GlyphRunFlag flag, bool enabled ```
void q_glyphrun_set_flag2(void* self, int64_t flag, bool enabled) {
    QGlyphRun_SetFlag2((QGlyphRun*)self, flag, enabled);
}

/// Delete this object from C++ memory.
///
/// ``` QGlyphRun* self ```
void q_glyphrun_delete(void* self) {
    QGlyphRun_Delete((QGlyphRun*)(self));
}