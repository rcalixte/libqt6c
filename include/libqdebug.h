#pragma once
#ifndef SRCQT6C_LIBQDEBUG_H
#define SRCQT6C_LIBQDEBUG_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qdebug.html

/// q_debug_new constructs a new QDebug object.
///
/// ``` QIODevice* device ```
QDebug* q_debug_new(void* device);

/// q_debug_new2 constructs a new QDebug object.
///
/// ``` QDebug* o ```
QDebug* q_debug_new2(void* o);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator=)
///
/// ``` QDebug* self, QDebug* other ```
void q_debug_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#swap)
///
/// ``` QDebug* self, QDebug* other ```
void q_debug_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#resetFormat)
///
/// ``` QDebug* self ```
QDebug* q_debug_reset_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#space)
///
/// ``` QDebug* self ```
QDebug* q_debug_space(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#nospace)
///
/// ``` QDebug* self ```
QDebug* q_debug_nospace(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#maybeSpace)
///
/// ``` QDebug* self ```
QDebug* q_debug_maybe_space(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#verbosity)
///
/// ``` QDebug* self, int verbosityLevel ```
QDebug* q_debug_verbosity(void* self, int verbosityLevel);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#verbosity)
///
/// ``` QDebug* self ```
int32_t q_debug_verbosity2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#setVerbosity)
///
/// ``` QDebug* self, int verbosityLevel ```
void q_debug_set_verbosity(void* self, int verbosityLevel);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#autoInsertSpaces)
///
/// ``` QDebug* self ```
bool q_debug_auto_insert_spaces(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#setAutoInsertSpaces)
///
/// ``` QDebug* self, bool b ```
void q_debug_set_auto_insert_spaces(void* self, bool b);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#quoteStrings)
///
/// ``` QDebug* self ```
bool q_debug_quote_strings(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#setQuoteStrings)
///
/// ``` QDebug* self, bool b ```
void q_debug_set_quote_strings(void* self, bool b);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#quote)
///
/// ``` QDebug* self ```
QDebug* q_debug_quote(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#noquote)
///
/// ``` QDebug* self ```
QDebug* q_debug_noquote(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#maybeQuote)
///
/// ``` QDebug* self ```
QDebug* q_debug_maybe_quote(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator<<)
///
/// ``` QDebug* self, QChar* t ```
QDebug* q_debug_operator_shift_left(void* self, void* t);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator<<)
///
/// ``` QDebug* self, bool t ```
QDebug* q_debug_operator_shift_left2(void* self, bool t);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator<<)
///
/// ``` QDebug* self, char t ```
QDebug* q_debug_operator_shift_left3(void* self, char t);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator<<)
///
/// ``` QDebug* self, short t ```
QDebug* q_debug_operator_shift_left4(void* self, short t);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator<<)
///
/// ``` QDebug* self, unsigned short t ```
QDebug* q_debug_operator_shift_left5(void* self, unsigned short t);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator<<)
///
/// ``` QDebug* self, int t ```
QDebug* q_debug_operator_shift_left8(void* self, int t);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator<<)
///
/// ``` QDebug* self, uint32_t t ```
QDebug* q_debug_operator_shift_left9(void* self, uint32_t t);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator<<)
///
/// ``` QDebug* self, int64_t t ```
QDebug* q_debug_operator_shift_left10(void* self, int64_t t);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator<<)
///
/// ``` QDebug* self, uint64_t t ```
QDebug* q_debug_operator_shift_left11(void* self, uint64_t t);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator<<)
///
/// ``` QDebug* self, long long t ```
QDebug* q_debug_operator_shift_left12(void* self, long long t);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator<<)
///
/// ``` QDebug* self, uint64_t t ```
QDebug* q_debug_operator_shift_left13(void* self, uint64_t t);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator<<)
///
/// ``` QDebug* self, float t ```
QDebug* q_debug_operator_shift_left15(void* self, float t);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator<<)
///
/// ``` QDebug* self, double t ```
QDebug* q_debug_operator_shift_left16(void* self, double t);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator<<)
///
/// ``` QDebug* self, const char* t ```
QDebug* q_debug_operator_shift_left17(void* self, const char* t);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator<<)
///
/// ``` QDebug* self, const char* t ```
QDebug* q_debug_operator_shift_left19(void* self, const char* t);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator<<)
///
/// ``` QDebug* self, const char* t ```
QDebug* q_debug_operator_shift_left23(void* self, const char* t);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator<<)
///
/// ``` QDebug* self, const char* t ```
QDebug* q_debug_operator_shift_left24(void* self, const char* t);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator<<)
///
/// ``` QDebug* self, void* t ```
QDebug* q_debug_operator_shift_left25(void* self, void* t);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#maybeQuote)
///
/// ``` QDebug* self, char c ```
QDebug* q_debug_maybe_quote1(void* self, char c);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#dtor.QDebug)
///
/// Delete this object from C++ memory.
///
/// ``` QDebug* self ```
void q_debug_delete(void* self);

/// https://doc.qt.io/qt-6/qdebugstatesaver.html

/// q_debugstatesaver_new constructs a new QDebugStateSaver object.
///
/// ``` QDebug* dbg ```
QDebugStateSaver* q_debugstatesaver_new(void* dbg);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebugstatesaver.html#dtor.QDebugStateSaver)
///
/// Delete this object from C++ memory.
///
/// ``` QDebugStateSaver* self ```
void q_debugstatesaver_delete(void* self);

/// https://doc.qt.io/qt-6/qnodebug.html

/// q_nodebug_new constructs a new QNoDebug object.
///
/// ``` QNoDebug* other ```
QNoDebug* q_nodebug_new(void* other);

/// q_nodebug_new2 constructs a new QNoDebug object and invalidates the source QNoDebug object.
///
/// ``` QNoDebug* other ```
QNoDebug* q_nodebug_new2(void* other);

/// q_nodebug_copy_assign shallow copies `other` into `self`.
///
/// ``` QNoDebug* self, QNoDebug* other ```
void q_nodebug_copy_assign(void* self, void* other);

/// q_nodebug_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QNoDebug* self, QNoDebug* other ```
void q_nodebug_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qnodebug.html#space)
///
/// ``` QNoDebug* self ```
QNoDebug* q_nodebug_space(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnodebug.html#nospace)
///
/// ``` QNoDebug* self ```
QNoDebug* q_nodebug_nospace(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnodebug.html#maybeSpace)
///
/// ``` QNoDebug* self ```
QNoDebug* q_nodebug_maybe_space(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnodebug.html#quote)
///
/// ``` QNoDebug* self ```
QNoDebug* q_nodebug_quote(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnodebug.html#noquote)
///
/// ``` QNoDebug* self ```
QNoDebug* q_nodebug_noquote(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnodebug.html#maybeQuote)
///
/// ``` QNoDebug* self ```
QNoDebug* q_nodebug_maybe_quote(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnodebug.html#verbosity)
///
/// ``` QNoDebug* self, int param1 ```
QNoDebug* q_nodebug_verbosity(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qnodebug.html#maybeQuote)
///
/// ``` QNoDebug* self, char param1 ```
QNoDebug* q_nodebug_maybe_quote1(void* self, char param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qnodebug.html#dtor.QNoDebug)
///
/// Delete this object from C++ memory.
///
/// ``` QNoDebug* self ```
void q_nodebug_delete(void* self);

/// https://doc.qt.io/qt-6/qdebug.html#types

typedef enum {
    QDEBUG_VERBOSITYLEVEL_MINIMUMVERBOSITY = 0,
    QDEBUG_VERBOSITYLEVEL_DEFAULTVERBOSITY = 2,
    QDEBUG_VERBOSITYLEVEL_MAXIMUMVERBOSITY = 7
} QDebug__VerbosityLevel;

#endif
