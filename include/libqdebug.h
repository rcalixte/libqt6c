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

QDebug* q_debug_new(void* device);
QDebug* q_debug_new2(void* o);
void q_debug_operator_assign(void* self, void* other);
void q_debug_swap(void* self, void* other);
QDebug* q_debug_reset_format(void* self);
QDebug* q_debug_space(void* self);
QDebug* q_debug_nospace(void* self);
QDebug* q_debug_maybe_space(void* self);
QDebug* q_debug_verbosity(void* self, int verbosityLevel);
int32_t q_debug_verbosity2(void* self);
void q_debug_set_verbosity(void* self, int verbosityLevel);
bool q_debug_auto_insert_spaces(void* self);
void q_debug_set_auto_insert_spaces(void* self, bool b);
QDebug* q_debug_quote(void* self);
QDebug* q_debug_noquote(void* self);
QDebug* q_debug_maybe_quote(void* self);
QDebug* q_debug_operator_shift_left(void* self, void* t);
QDebug* q_debug_operator_shift_left_with_bool(void* self, bool t);
QDebug* q_debug_operator_shift_left_with_char(void* self, char t);
QDebug* q_debug_operator_shift_left_with_short(void* self, short t);
QDebug* q_debug_operator_shift_left_with_unsignedshort(void* self, unsigned short t);
QDebug* q_debug_operator_shift_left_with_int(void* self, int t);
QDebug* q_debug_operator_shift_left_with_unsignedint(void* self, uint32_t t);
QDebug* q_debug_operator_shift_left_with_long(void* self, int64_t t);
QDebug* q_debug_operator_shift_left_with_unsignedlong(void* self, uint64_t t);
QDebug* q_debug_operator_shift_left_with_qint64(void* self, long long t);
QDebug* q_debug_operator_shift_left_with_quint64(void* self, uint64_t t);
QDebug* q_debug_operator_shift_left_with_float(void* self, float t);
QDebug* q_debug_operator_shift_left_with_double(void* self, double t);
QDebug* q_debug_operator_shift_left2(void* self, const char* t);
QDebug* q_debug_operator_shift_left_with_q_string(void* self, const char* t);
QDebug* q_debug_operator_shift_left_with_q_byte_array(void* self, const char* t);
QDebug* q_debug_operator_shift_left_with_q_byte_array_view(void* self, const char* t);
QDebug* q_debug_operator_shift_left_with_void(void* self, void* t);
QDebug* q_debug_maybe_quote1(void* self, char c);
void q_debug_delete(void* self);

QDebugStateSaver* q_debugstatesaver_new(void* dbg);
void q_debugstatesaver_delete(void* self);

QNoDebug* q_nodebug_new(void* other);
QNoDebug* q_nodebug_new2(void* other);
void q_nodebug_copy_assign(void* self, void* other);
void q_nodebug_move_assign(void* self, void* other);
QNoDebug* q_nodebug_space(void* self);
QNoDebug* q_nodebug_nospace(void* self);
QNoDebug* q_nodebug_maybe_space(void* self);
QNoDebug* q_nodebug_quote(void* self);
QNoDebug* q_nodebug_noquote(void* self);
QNoDebug* q_nodebug_maybe_quote(void* self);
QNoDebug* q_nodebug_verbosity(void* self, int param1);
QNoDebug* q_nodebug_maybe_quote1(void* self, char param1);
void q_nodebug_delete(void* self);

/// https://doc.qt.io/qt-6/qdebug.html#types

typedef enum {
    QDEBUG_VERBOSITYLEVEL_MINIMUMVERBOSITY = 0,
    QDEBUG_VERBOSITYLEVEL_DEFAULTVERBOSITY = 2,
    QDEBUG_VERBOSITYLEVEL_MAXIMUMVERBOSITY = 7
} QDebug__VerbosityLevel;

#endif
