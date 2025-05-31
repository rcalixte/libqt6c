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

/// https://doc.qt.io/qt-6/qtextboundaryfinder.html

/// q_textboundaryfinder_new constructs a new QTextBoundaryFinder object.
///
///
QTextBoundaryFinder* q_textboundaryfinder_new();

/// q_textboundaryfinder_new2 constructs a new QTextBoundaryFinder object.
///
/// ``` QTextBoundaryFinder* other ```
QTextBoundaryFinder* q_textboundaryfinder_new2(void* other);

/// q_textboundaryfinder_new3 constructs a new QTextBoundaryFinder object.
///
/// ``` enum QTextBoundaryFinder__BoundaryType typeVal, const char* stringVal ```
QTextBoundaryFinder* q_textboundaryfinder_new3(int64_t typeVal, const char* stringVal);

/// q_textboundaryfinder_new4 constructs a new QTextBoundaryFinder object.
///
/// ``` enum QTextBoundaryFinder__BoundaryType typeVal, QChar* chars, int64_t length ```
QTextBoundaryFinder* q_textboundaryfinder_new4(int64_t typeVal, void* chars, int64_t length);

/// q_textboundaryfinder_new5 constructs a new QTextBoundaryFinder object.
///
/// ``` enum QTextBoundaryFinder__BoundaryType typeVal, QChar* chars, int64_t length, unsigned char* buffer ```
QTextBoundaryFinder* q_textboundaryfinder_new5(int64_t typeVal, void* chars, int64_t length, unsigned char* buffer);

/// q_textboundaryfinder_new6 constructs a new QTextBoundaryFinder object.
///
/// ``` enum QTextBoundaryFinder__BoundaryType typeVal, QChar* chars, int64_t length, unsigned char* buffer, int64_t bufferSize ```
QTextBoundaryFinder* q_textboundaryfinder_new6(int64_t typeVal, void* chars, int64_t length, unsigned char* buffer, int64_t bufferSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextboundaryfinder.html#operator=)
///
/// ``` QTextBoundaryFinder* self, QTextBoundaryFinder* other ```
void q_textboundaryfinder_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextboundaryfinder.html#isValid)
///
/// ``` QTextBoundaryFinder* self ```
bool q_textboundaryfinder_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextboundaryfinder.html#type)
///
/// ``` QTextBoundaryFinder* self ```
int64_t q_textboundaryfinder_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextboundaryfinder.html#string)
///
/// ``` QTextBoundaryFinder* self ```
const char* q_textboundaryfinder_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextboundaryfinder.html#toStart)
///
/// ``` QTextBoundaryFinder* self ```
void q_textboundaryfinder_to_start(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextboundaryfinder.html#toEnd)
///
/// ``` QTextBoundaryFinder* self ```
void q_textboundaryfinder_to_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextboundaryfinder.html#position)
///
/// ``` QTextBoundaryFinder* self ```
int64_t q_textboundaryfinder_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextboundaryfinder.html#setPosition)
///
/// ``` QTextBoundaryFinder* self, int64_t position ```
void q_textboundaryfinder_set_position(void* self, int64_t position);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextboundaryfinder.html#toNextBoundary)
///
/// ``` QTextBoundaryFinder* self ```
int64_t q_textboundaryfinder_to_next_boundary(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextboundaryfinder.html#toPreviousBoundary)
///
/// ``` QTextBoundaryFinder* self ```
int64_t q_textboundaryfinder_to_previous_boundary(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextboundaryfinder.html#isAtBoundary)
///
/// ``` QTextBoundaryFinder* self ```
bool q_textboundaryfinder_is_at_boundary(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextboundaryfinder.html#boundaryReasons)
///
/// ``` QTextBoundaryFinder* self ```
int64_t q_textboundaryfinder_boundary_reasons(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextboundaryfinder.html#dtor.QTextBoundaryFinder)
///
/// Delete this object from C++ memory.
///
/// ``` QTextBoundaryFinder* self ```
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
