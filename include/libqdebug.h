#pragma once
#ifndef SRC_QT6C_LIBQDEBUG_H
#define SRC_QT6C_LIBQDEBUG_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qdebug.html

/// q_debug_new constructs a new QDebug object.
///
/// @param device QIODevice*
QDebug* q_debug_new(void* device);

/// q_debug_new2 constructs a new QDebug object.
///
/// @param o QDebug*
QDebug* q_debug_new2(void* o);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator-eq)
///
/// @param self QDebug*
/// @param other QDebug*
void q_debug_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#swap)
///
/// @param self QDebug*
/// @param other QDebug*
void q_debug_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#resetFormat)
///
/// @param self QDebug*
QDebug* q_debug_reset_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#space)
///
/// @param self QDebug*
QDebug* q_debug_space(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#nospace)
///
/// @param self QDebug*
QDebug* q_debug_nospace(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#maybeSpace)
///
/// @param self QDebug*
QDebug* q_debug_maybe_space(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#verbosity)
///
/// @param self QDebug*
/// @param verbosityLevel int
QDebug* q_debug_verbosity(void* self, int verbosityLevel);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#verbosity)
///
/// @param self QDebug*
int32_t q_debug_verbosity2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#setVerbosity)
///
/// @param self QDebug*
/// @param verbosityLevel int
void q_debug_set_verbosity(void* self, int verbosityLevel);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#autoInsertSpaces)
///
/// @param self QDebug*
bool q_debug_auto_insert_spaces(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#setAutoInsertSpaces)
///
/// @param self QDebug*
/// @param b bool
void q_debug_set_auto_insert_spaces(void* self, bool b);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#quoteStrings)
///
/// @param self QDebug*
bool q_debug_quote_strings(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#setQuoteStrings)
///
/// @param self QDebug*
/// @param b bool
void q_debug_set_quote_strings(void* self, bool b);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#quote)
///
/// @param self QDebug*
QDebug* q_debug_quote(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#noquote)
///
/// @param self QDebug*
QDebug* q_debug_noquote(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#maybeQuote)
///
/// @param self QDebug*
QDebug* q_debug_maybe_quote(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
///
/// @param self QDebug*
/// @param t QChar*
QDebug* q_debug_operator_shift_left(void* self, void* t);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
///
/// @param self QDebug*
/// @param t bool
QDebug* q_debug_operator_shift_left2(void* self, bool t);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
///
/// @param self QDebug*
/// @param t char
QDebug* q_debug_operator_shift_left3(void* self, char t);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
///
/// @param self QDebug*
/// @param t short
QDebug* q_debug_operator_shift_left4(void* self, short t);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
///
/// @param self QDebug*
/// @param t unsigned short
QDebug* q_debug_operator_shift_left5(void* self, unsigned short t);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
///
/// @param self QDebug*
/// @param t int
QDebug* q_debug_operator_shift_left8(void* self, int t);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
///
/// @param self QDebug*
/// @param t uint32_t
QDebug* q_debug_operator_shift_left9(void* self, uint32_t t);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
///
/// @param self QDebug*
/// @param t int64_t
QDebug* q_debug_operator_shift_left10(void* self, int64_t t);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
///
/// @param self QDebug*
/// @param t uint64_t
QDebug* q_debug_operator_shift_left11(void* self, uint64_t t);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
///
/// @param self QDebug*
/// @param t long long
QDebug* q_debug_operator_shift_left12(void* self, long long t);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
///
/// @param self QDebug*
/// @param t uint64_t
QDebug* q_debug_operator_shift_left13(void* self, uint64_t t);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
///
/// @param self QDebug*
/// @param t float
QDebug* q_debug_operator_shift_left15(void* self, float t);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
///
/// @param self QDebug*
/// @param t double
QDebug* q_debug_operator_shift_left16(void* self, double t);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
///
/// @param self QDebug*
/// @param t const char*
QDebug* q_debug_operator_shift_left17(void* self, const char* t);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
///
/// @param self QDebug*
/// @param t const char*
QDebug* q_debug_operator_shift_left19(void* self, const char* t);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
///
/// @param self QDebug*
/// @param t const char*
QDebug* q_debug_operator_shift_left23(void* self, const char* t);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
///
/// @param self QDebug*
/// @param t const char*
QDebug* q_debug_operator_shift_left24(void* self, const char* t);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
///
/// @param self QDebug*
/// @param t void*
QDebug* q_debug_operator_shift_left25(void* self, void* t);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#maybeQuote)
///
/// @param self QDebug*
/// @param c char
QDebug* q_debug_maybe_quote1(void* self, char c);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#dtor.QDebug)
///
/// Delete this object from C++ memory.
///
/// @param self QDebug*
void q_debug_delete(void* self);

/// https://doc.qt.io/qt-6/qdebugstatesaver.html

/// q_debugstatesaver_new constructs a new QDebugStateSaver object.
///
/// @param dbg QDebug*
QDebugStateSaver* q_debugstatesaver_new(void* dbg);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebugstatesaver.html#dtor.QDebugStateSaver)
///
/// Delete this object from C++ memory.
///
/// @param self QDebugStateSaver*
void q_debugstatesaver_delete(void* self);

/// https://doc.qt.io/qt-6/qnodebug.html

/// q_nodebug_new constructs a new QNoDebug object.
///
/// @param other QNoDebug*
QNoDebug* q_nodebug_new(void* other);

/// q_nodebug_new2 constructs a new QNoDebug object and invalidates the source QNoDebug object.
///
/// @param other QNoDebug*
QNoDebug* q_nodebug_new2(void* other);

/// q_nodebug_copy_assign shallow copies `other` into `self`.
///
/// @param self QNoDebug*
/// @param other QNoDebug*
void q_nodebug_copy_assign(void* self, void* other);

/// q_nodebug_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QNoDebug*
/// @param other QNoDebug*
void q_nodebug_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qnodebug.html#space)
///
/// @param self QNoDebug*
QNoDebug* q_nodebug_space(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnodebug.html#nospace)
///
/// @param self QNoDebug*
QNoDebug* q_nodebug_nospace(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnodebug.html#maybeSpace)
///
/// @param self QNoDebug*
QNoDebug* q_nodebug_maybe_space(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnodebug.html#quote)
///
/// @param self QNoDebug*
QNoDebug* q_nodebug_quote(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnodebug.html#noquote)
///
/// @param self QNoDebug*
QNoDebug* q_nodebug_noquote(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnodebug.html#maybeQuote)
///
/// @param self QNoDebug*
QNoDebug* q_nodebug_maybe_quote(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnodebug.html#verbosity)
///
/// @param self QNoDebug*
/// @param param1 int
QNoDebug* q_nodebug_verbosity(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qnodebug.html#maybeQuote)
///
/// @param self QNoDebug*
/// @param param1 char
QNoDebug* q_nodebug_maybe_quote1(void* self, char param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qnodebug.html#dtor.QNoDebug)
///
/// Delete this object from C++ memory.
///
/// @param self QNoDebug*
void q_nodebug_delete(void* self);

/// https://doc.qt.io/qt-6/qdebug.html#types

typedef enum {
    QDEBUG_VERBOSITYLEVEL_MINIMUMVERBOSITY = 0,
    QDEBUG_VERBOSITYLEVEL_DEFAULTVERBOSITY = 2,
    QDEBUG_VERBOSITYLEVEL_MAXIMUMVERBOSITY = 7
} QDebug__VerbosityLevel;

#endif
