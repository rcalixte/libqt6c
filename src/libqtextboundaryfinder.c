#include "libqchar.hpp"
#include "libqtextboundaryfinder.hpp"
#include "libqtextboundaryfinder.h"

QTextBoundaryFinder* q_textboundaryfinder_new() {
    return QTextBoundaryFinder_New();
}

QTextBoundaryFinder* q_textboundaryfinder_new2(void* other) {
    return QTextBoundaryFinder_New2((QTextBoundaryFinder*)other);
}

QTextBoundaryFinder* q_textboundaryfinder_new3(int32_t type, const char* string) {
    return QTextBoundaryFinder_New3(type, qstring(string));
}

QTextBoundaryFinder* q_textboundaryfinder_new4(int32_t type, void* chars, intptr_t length) {
    return QTextBoundaryFinder_New4(type, (QChar*)chars, length);
}

QTextBoundaryFinder* q_textboundaryfinder_new5(int32_t type, const char* str) {
    return QTextBoundaryFinder_New5(type, qstring(str));
}

QTextBoundaryFinder* q_textboundaryfinder_new6(int32_t type, void* chars, intptr_t length, unsigned char* buffer) {
    return QTextBoundaryFinder_New6(type, (QChar*)chars, length, buffer);
}

QTextBoundaryFinder* q_textboundaryfinder_new7(int32_t type, void* chars, intptr_t length, unsigned char* buffer, intptr_t bufferSize) {
    return QTextBoundaryFinder_New7(type, (QChar*)chars, length, buffer, bufferSize);
}

QTextBoundaryFinder* q_textboundaryfinder_new8(int32_t type, const char* str, unsigned char* buffer) {
    return QTextBoundaryFinder_New8(type, qstring(str), buffer);
}

QTextBoundaryFinder* q_textboundaryfinder_new9(int32_t type, const char* str, unsigned char* buffer, intptr_t bufferSize) {
    return QTextBoundaryFinder_New9(type, qstring(str), buffer, bufferSize);
}

void q_textboundaryfinder_operator_assign(void* self, void* other) {
    QTextBoundaryFinder_OperatorAssign((QTextBoundaryFinder*)self, (QTextBoundaryFinder*)other);
}

bool q_textboundaryfinder_is_valid(void* self) {
    return QTextBoundaryFinder_IsValid((QTextBoundaryFinder*)self);
}

int32_t q_textboundaryfinder_type(void* self) {
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

intptr_t q_textboundaryfinder_position(void* self) {
    return QTextBoundaryFinder_Position((QTextBoundaryFinder*)self);
}

void q_textboundaryfinder_set_position(void* self, intptr_t position) {
    QTextBoundaryFinder_SetPosition((QTextBoundaryFinder*)self, position);
}

intptr_t q_textboundaryfinder_to_next_boundary(void* self) {
    return QTextBoundaryFinder_ToNextBoundary((QTextBoundaryFinder*)self);
}

intptr_t q_textboundaryfinder_to_previous_boundary(void* self) {
    return QTextBoundaryFinder_ToPreviousBoundary((QTextBoundaryFinder*)self);
}

bool q_textboundaryfinder_is_at_boundary(void* self) {
    return QTextBoundaryFinder_IsAtBoundary((QTextBoundaryFinder*)self);
}

int32_t q_textboundaryfinder_boundary_reasons(void* self) {
    return QTextBoundaryFinder_BoundaryReasons((QTextBoundaryFinder*)self);
}

void q_textboundaryfinder_delete(void* self) {
    QTextBoundaryFinder_Delete((QTextBoundaryFinder*)(self));
}
