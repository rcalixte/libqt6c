#pragma once
#ifndef SRCQT6C_LIBQDEBUG_H
#define SRCQT6C_LIBQDEBUG_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqbytearrayview.h"
#include "libqchar.h"
#include "libqiodevice.h"
#include "libqiodevicebase.h"
#include <string.h>

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
QDebug* q_debug_operator_shift_left_with_bool(void* self, bool t);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator<<)
///
/// ``` QDebug* self, char t ```
QDebug* q_debug_operator_shift_left_with_char(void* self, char t);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator<<)
///
/// ``` QDebug* self, short t ```
QDebug* q_debug_operator_shift_left_with_short(void* self, short t);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator<<)
///
/// ``` QDebug* self, unsigned short t ```
QDebug* q_debug_operator_shift_left_with_unsignedshort(void* self, unsigned short t);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator<<)
///
/// ``` QDebug* self, int t ```
QDebug* q_debug_operator_shift_left_with_int(void* self, int t);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator<<)
///
/// ``` QDebug* self, uint32_t t ```
QDebug* q_debug_operator_shift_left_with_unsignedint(void* self, uint32_t t);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator<<)
///
/// ``` QDebug* self, int64_t t ```
QDebug* q_debug_operator_shift_left_with_long(void* self, int64_t t);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator<<)
///
/// ``` QDebug* self, uint64_t t ```
QDebug* q_debug_operator_shift_left_with_unsignedlong(void* self, uint64_t t);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator<<)
///
/// ``` QDebug* self, long long t ```
QDebug* q_debug_operator_shift_left_with_qint64(void* self, long long t);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator<<)
///
/// ``` QDebug* self, uint64_t t ```
QDebug* q_debug_operator_shift_left_with_quint64(void* self, uint64_t t);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator<<)
///
/// ``` QDebug* self, float t ```
QDebug* q_debug_operator_shift_left_with_float(void* self, float t);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator<<)
///
/// ``` QDebug* self, double t ```
QDebug* q_debug_operator_shift_left_with_double(void* self, double t);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator<<)
///
/// ``` QDebug* self, const char* t ```
QDebug* q_debug_operator_shift_left2(void* self, const char* t);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator<<)
///
/// ``` QDebug* self, const char* t ```
QDebug* q_debug_operator_shift_left_with_q_string(void* self, const char* t);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator<<)
///
/// ``` QDebug* self, const char* t ```
QDebug* q_debug_operator_shift_left_with_q_byte_array(void* self, const char* t);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator<<)
///
/// ``` QDebug* self, const char* t ```
QDebug* q_debug_operator_shift_left_with_q_byte_array_view(void* self, const char* t);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#operator<<)
///
/// ``` QDebug* self, void* t ```
QDebug* q_debug_operator_shift_left_with_void(void* self, void* t);

/// [Qt documentation](https://doc.qt.io/qt-6/qdebug.html#maybeQuote)
///
/// ``` QDebug* self, char c ```
QDebug* q_debug_maybe_quote1(void* self, char c);

/// Delete this object from C++ memory.
///
/// ``` QDebug* self ```
void q_debug_delete(void* self);

/// https://doc.qt.io/qt-6/qdebugstatesaver.html

/// q_debugstatesaver_new constructs a new QDebugStateSaver object.
///
/// ``` QDebug* dbg ```
QDebugStateSaver* q_debugstatesaver_new(void* dbg);

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
