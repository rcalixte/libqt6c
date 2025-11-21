#pragma once
#ifndef SRC_QT6C_LIBQTEXTBOUNDARYFINDER_H
#define SRC_QT6C_LIBQTEXTBOUNDARYFINDER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qtextboundaryfinder.html

/// q_textboundaryfinder_new constructs a new QTextBoundaryFinder object.
///
QTextBoundaryFinder* q_textboundaryfinder_new();

/// q_textboundaryfinder_new2 constructs a new QTextBoundaryFinder object.
///
/// @param other QTextBoundaryFinder*
QTextBoundaryFinder* q_textboundaryfinder_new2(void* other);

/// q_textboundaryfinder_new3 constructs a new QTextBoundaryFinder object.
///
/// @param type enum QTextBoundaryFinder__BoundaryType
/// @param stringVal const char*
QTextBoundaryFinder* q_textboundaryfinder_new3(int32_t type, const char* stringVal);

/// q_textboundaryfinder_new4 constructs a new QTextBoundaryFinder object.
///
/// @param type enum QTextBoundaryFinder__BoundaryType
/// @param chars QChar*
/// @param length int64_t
QTextBoundaryFinder* q_textboundaryfinder_new4(int32_t type, void* chars, int64_t length);

/// q_textboundaryfinder_new5 constructs a new QTextBoundaryFinder object.
///
/// @param type enum QTextBoundaryFinder__BoundaryType
/// @param chars QChar*
/// @param length int64_t
/// @param buffer unsigned char*
QTextBoundaryFinder* q_textboundaryfinder_new5(int32_t type, void* chars, int64_t length, unsigned char* buffer);

/// q_textboundaryfinder_new6 constructs a new QTextBoundaryFinder object.
///
/// @param type enum QTextBoundaryFinder__BoundaryType
/// @param chars QChar*
/// @param length int64_t
/// @param buffer unsigned char*
/// @param bufferSize int64_t
QTextBoundaryFinder* q_textboundaryfinder_new6(int32_t type, void* chars, int64_t length, unsigned char* buffer, int64_t bufferSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextboundaryfinder.html#operator-eq)
///
/// @param self QTextBoundaryFinder*
/// @param other QTextBoundaryFinder*
void q_textboundaryfinder_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextboundaryfinder.html#isValid)
///
/// @param self QTextBoundaryFinder*
bool q_textboundaryfinder_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextboundaryfinder.html#type)
///
/// @param self QTextBoundaryFinder*
///
/// @return enum QTextBoundaryFinder__BoundaryType
int32_t q_textboundaryfinder_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextboundaryfinder.html#string)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTextBoundaryFinder*
const char* q_textboundaryfinder_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextboundaryfinder.html#toStart)
///
/// @param self QTextBoundaryFinder*
void q_textboundaryfinder_to_start(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextboundaryfinder.html#toEnd)
///
/// @param self QTextBoundaryFinder*
void q_textboundaryfinder_to_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextboundaryfinder.html#position)
///
/// @param self QTextBoundaryFinder*
int64_t q_textboundaryfinder_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextboundaryfinder.html#setPosition)
///
/// @param self QTextBoundaryFinder*
/// @param position int64_t
void q_textboundaryfinder_set_position(void* self, int64_t position);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextboundaryfinder.html#toNextBoundary)
///
/// @param self QTextBoundaryFinder*
int64_t q_textboundaryfinder_to_next_boundary(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextboundaryfinder.html#toPreviousBoundary)
///
/// @param self QTextBoundaryFinder*
int64_t q_textboundaryfinder_to_previous_boundary(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextboundaryfinder.html#isAtBoundary)
///
/// @param self QTextBoundaryFinder*
bool q_textboundaryfinder_is_at_boundary(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextboundaryfinder.html#boundaryReasons)
///
/// @param self QTextBoundaryFinder*
///
/// @return flag of enum QTextBoundaryFinder__BoundaryReason
int32_t q_textboundaryfinder_boundary_reasons(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextboundaryfinder.html#dtor.QTextBoundaryFinder)
///
/// Delete this object from C++ memory.
///
/// @param self QTextBoundaryFinder*
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
