#include "libqchar.hpp"
#include "libqtextboundaryfinder.hpp"
#include "libqtextboundaryfinder.h"

QTextBoundaryFinder* q_textboundaryfinder_new() {
    return QTextBoundaryFinder_new();
}

QTextBoundaryFinder* q_textboundaryfinder_new2(void* other) {
    return QTextBoundaryFinder_new2((QTextBoundaryFinder*)other);
}

QTextBoundaryFinder* q_textboundaryfinder_new3(int64_t typeVal, const char* stringVal) {
    return QTextBoundaryFinder_new3(typeVal, qstring(stringVal));
}

QTextBoundaryFinder* q_textboundaryfinder_new4(int64_t typeVal, void* chars, int64_t length) {
    return QTextBoundaryFinder_new4(typeVal, (QChar*)chars, length);
}

QTextBoundaryFinder* q_textboundaryfinder_new5(int64_t typeVal, void* chars, int64_t length, unsigned char* buffer) {
    return QTextBoundaryFinder_new5(typeVal, (QChar*)chars, length, buffer);
}

QTextBoundaryFinder* q_textboundaryfinder_new6(int64_t typeVal, void* chars, int64_t length, unsigned char* buffer, int64_t bufferSize) {
    return QTextBoundaryFinder_new6(typeVal, (QChar*)chars, length, buffer, bufferSize);
}

void q_textboundaryfinder_operator_assign(void* self, void* other) {
    QTextBoundaryFinder_OperatorAssign((QTextBoundaryFinder*)self, (QTextBoundaryFinder*)other);
}

bool q_textboundaryfinder_is_valid(void* self) {
    return QTextBoundaryFinder_IsValid((QTextBoundaryFinder*)self);
}

int64_t q_textboundaryfinder_type(void* self) {
    return QTextBoundaryFinder_Type((QTextBoundaryFinder*)self);
}

const char* q_textboundaryfinder_string(void* self) {
    libqt_string _str = QTextBoundaryFinder_String((QTextBoundaryFinder*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_textboundaryfinder_to_start(void* self) {
    QTextBoundaryFinder_ToStart((QTextBoundaryFinder*)self);
}

void q_textboundaryfinder_to_end(void* self) {
    QTextBoundaryFinder_ToEnd((QTextBoundaryFinder*)self);
}

int64_t q_textboundaryfinder_position(void* self) {
    return QTextBoundaryFinder_Position((QTextBoundaryFinder*)self);
}

void q_textboundaryfinder_set_position(void* self, int64_t position) {
    QTextBoundaryFinder_SetPosition((QTextBoundaryFinder*)self, position);
}

int64_t q_textboundaryfinder_to_next_boundary(void* self) {
    return QTextBoundaryFinder_ToNextBoundary((QTextBoundaryFinder*)self);
}

int64_t q_textboundaryfinder_to_previous_boundary(void* self) {
    return QTextBoundaryFinder_ToPreviousBoundary((QTextBoundaryFinder*)self);
}

bool q_textboundaryfinder_is_at_boundary(void* self) {
    return QTextBoundaryFinder_IsAtBoundary((QTextBoundaryFinder*)self);
}

int64_t q_textboundaryfinder_boundary_reasons(void* self) {
    return QTextBoundaryFinder_BoundaryReasons((QTextBoundaryFinder*)self);
}

void q_textboundaryfinder_delete(void* self) {
    QTextBoundaryFinder_Delete((QTextBoundaryFinder*)(self));
}
