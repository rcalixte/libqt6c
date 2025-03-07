#pragma once
#ifndef SRCQT6C_LIBQTEXTBOUNDARYFINDER_H
#define SRCQT6C_LIBQTEXTBOUNDARYFINDER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqchar.h"
#include <string.h>

QTextBoundaryFinder* q_textboundaryfinder_new();
QTextBoundaryFinder* q_textboundaryfinder_new2(void* other);
QTextBoundaryFinder* q_textboundaryfinder_new3(int64_t typeVal, const char* stringVal);
QTextBoundaryFinder* q_textboundaryfinder_new4(int64_t typeVal, void* chars, int64_t length);
QTextBoundaryFinder* q_textboundaryfinder_new5(int64_t typeVal, void* chars, int64_t length, unsigned char* buffer);
QTextBoundaryFinder* q_textboundaryfinder_new6(int64_t typeVal, void* chars, int64_t length, unsigned char* buffer, int64_t bufferSize);
void q_textboundaryfinder_operator_assign(void* self, void* other);
bool q_textboundaryfinder_is_valid(void* self);
int64_t q_textboundaryfinder_type(void* self);
const char* q_textboundaryfinder_string(void* self);
void q_textboundaryfinder_to_start(void* self);
void q_textboundaryfinder_to_end(void* self);
int64_t q_textboundaryfinder_position(void* self);
void q_textboundaryfinder_set_position(void* self, int64_t position);
int64_t q_textboundaryfinder_to_next_boundary(void* self);
int64_t q_textboundaryfinder_to_previous_boundary(void* self);
bool q_textboundaryfinder_is_at_boundary(void* self);
int64_t q_textboundaryfinder_boundary_reasons(void* self);
void q_textboundaryfinder_delete(void* self);

/// https://doc.qt.io/qt-6/qtextboundaryfinder.html#types

typedef enum {
    QTEXTBOUNDARYFINDER_BOUNDARYTYPE_GRAPHEME = 0,
    QTEXTBOUNDARYFINDER_BOUNDARYTYPE_WORD = 1,
    QTEXTBOUNDARYFINDER_BOUNDARYTYPE_SENTENCE = 2,
    QTEXTBOUNDARYFINDER_BOUNDARYTYPE_LINE = 3
} QTextBoundaryFinder__BoundaryType;

typedef enum {
    QTEXTBOUNDARYFINDER_BOUNDARYREASON_NOTATBOUNDARY = 0,
    QTEXTBOUNDARYFINDER_BOUNDARYREASON_BREAKOPPORTUNITY = 31,
    QTEXTBOUNDARYFINDER_BOUNDARYREASON_STARTOFITEM = 32,
    QTEXTBOUNDARYFINDER_BOUNDARYREASON_ENDOFITEM = 64,
    QTEXTBOUNDARYFINDER_BOUNDARYREASON_MANDATORYBREAK = 128,
    QTEXTBOUNDARYFINDER_BOUNDARYREASON_SOFTHYPHEN = 256
} QTextBoundaryFinder__BoundaryReason;

#endif
