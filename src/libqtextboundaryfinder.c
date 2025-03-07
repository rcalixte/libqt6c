#include "libqchar.hpp"
#include <string.h>
#include "libqtextboundaryfinder.hpp"
#include "libqtextboundaryfinder.h"

/// https://doc.qt.io/qt-6/qtextboundaryfinder.html

/// q_textboundaryfinder_new constructs a new QTextBoundaryFinder object.
///
///
QTextBoundaryFinder* q_textboundaryfinder_new() {
    return QTextBoundaryFinder_new();
}

/// q_textboundaryfinder_new2 constructs a new QTextBoundaryFinder object.
///
/// ``` QTextBoundaryFinder* other ```
QTextBoundaryFinder* q_textboundaryfinder_new2(void* other) {
    return QTextBoundaryFinder_new2((QTextBoundaryFinder*)other);
}

/// q_textboundaryfinder_new3 constructs a new QTextBoundaryFinder object.
///
/// ``` enum QTextBoundaryFinder__BoundaryType typeVal, const char* stringVal ```
QTextBoundaryFinder* q_textboundaryfinder_new3(int64_t typeVal, const char* stringVal) {
    return QTextBoundaryFinder_new3(typeVal, qstring(stringVal));
}

/// q_textboundaryfinder_new4 constructs a new QTextBoundaryFinder object.
///
/// ``` enum QTextBoundaryFinder__BoundaryType typeVal, QChar* chars, int64_t length ```
QTextBoundaryFinder* q_textboundaryfinder_new4(int64_t typeVal, void* chars, int64_t length) {
    return QTextBoundaryFinder_new4(typeVal, (QChar*)chars, length);
}

/// q_textboundaryfinder_new5 constructs a new QTextBoundaryFinder object.
///
/// ``` enum QTextBoundaryFinder__BoundaryType typeVal, QChar* chars, int64_t length, unsigned char* buffer ```
QTextBoundaryFinder* q_textboundaryfinder_new5(int64_t typeVal, void* chars, int64_t length, unsigned char* buffer) {
    return QTextBoundaryFinder_new5(typeVal, (QChar*)chars, length, buffer);
}

/// q_textboundaryfinder_new6 constructs a new QTextBoundaryFinder object.
///
/// ``` enum QTextBoundaryFinder__BoundaryType typeVal, QChar* chars, int64_t length, unsigned char* buffer, int64_t bufferSize ```
QTextBoundaryFinder* q_textboundaryfinder_new6(int64_t typeVal, void* chars, int64_t length, unsigned char* buffer, int64_t bufferSize) {
    return QTextBoundaryFinder_new6(typeVal, (QChar*)chars, length, buffer, bufferSize);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextboundaryfinder.html#operator=)
///
/// ``` QTextBoundaryFinder* self, QTextBoundaryFinder* other ```
void q_textboundaryfinder_operator_assign(void* self, void* other) {
    QTextBoundaryFinder_OperatorAssign((QTextBoundaryFinder*)self, (QTextBoundaryFinder*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextboundaryfinder.html#isValid)
///
/// ``` QTextBoundaryFinder* self ```
bool q_textboundaryfinder_is_valid(void* self) {
    return QTextBoundaryFinder_IsValid((QTextBoundaryFinder*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextboundaryfinder.html#type)
///
/// ``` QTextBoundaryFinder* self ```
int64_t q_textboundaryfinder_type(void* self) {
    return QTextBoundaryFinder_Type((QTextBoundaryFinder*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextboundaryfinder.html#string)
///
/// ``` QTextBoundaryFinder* self ```
const char* q_textboundaryfinder_string(void* self) {
    libqt_string _str = QTextBoundaryFinder_String((QTextBoundaryFinder*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextboundaryfinder.html#toStart)
///
/// ``` QTextBoundaryFinder* self ```
void q_textboundaryfinder_to_start(void* self) {
    QTextBoundaryFinder_ToStart((QTextBoundaryFinder*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextboundaryfinder.html#toEnd)
///
/// ``` QTextBoundaryFinder* self ```
void q_textboundaryfinder_to_end(void* self) {
    QTextBoundaryFinder_ToEnd((QTextBoundaryFinder*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextboundaryfinder.html#position)
///
/// ``` QTextBoundaryFinder* self ```
int64_t q_textboundaryfinder_position(void* self) {
    return QTextBoundaryFinder_Position((QTextBoundaryFinder*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextboundaryfinder.html#setPosition)
///
/// ``` QTextBoundaryFinder* self, int64_t position ```
void q_textboundaryfinder_set_position(void* self, int64_t position) {
    QTextBoundaryFinder_SetPosition((QTextBoundaryFinder*)self, position);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextboundaryfinder.html#toNextBoundary)
///
/// ``` QTextBoundaryFinder* self ```
int64_t q_textboundaryfinder_to_next_boundary(void* self) {
    return QTextBoundaryFinder_ToNextBoundary((QTextBoundaryFinder*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextboundaryfinder.html#toPreviousBoundary)
///
/// ``` QTextBoundaryFinder* self ```
int64_t q_textboundaryfinder_to_previous_boundary(void* self) {
    return QTextBoundaryFinder_ToPreviousBoundary((QTextBoundaryFinder*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextboundaryfinder.html#isAtBoundary)
///
/// ``` QTextBoundaryFinder* self ```
bool q_textboundaryfinder_is_at_boundary(void* self) {
    return QTextBoundaryFinder_IsAtBoundary((QTextBoundaryFinder*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextboundaryfinder.html#boundaryReasons)
///
/// ``` QTextBoundaryFinder* self ```
int64_t q_textboundaryfinder_boundary_reasons(void* self) {
    return QTextBoundaryFinder_BoundaryReasons((QTextBoundaryFinder*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QTextBoundaryFinder* self ```
void q_textboundaryfinder_delete(void* self) {
    QTextBoundaryFinder_Delete((QTextBoundaryFinder*)(self));
}