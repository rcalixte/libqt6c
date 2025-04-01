#include "libqbytearrayview.hpp"
#include "libqchar.hpp"
#include "libqiodevice.hpp"
#include "libqiodevicebase.hpp"
#include <string.h>
#include "libqdebug.hpp"
#include "libqdebug.h"

QDebug* q_debug_new(void* device) {
    return QDebug_new((QIODevice*)device);
}

QDebug* q_debug_new2(void* o) {
    return QDebug_new2((QDebug*)o);
}

void q_debug_operator_assign(void* self, void* other) {
    QDebug_OperatorAssign((QDebug*)self, (QDebug*)other);
}

void q_debug_swap(void* self, void* other) {
    QDebug_Swap((QDebug*)self, (QDebug*)other);
}

QDebug* q_debug_reset_format(void* self) {
    return QDebug_ResetFormat((QDebug*)self);
}

QDebug* q_debug_space(void* self) {
    return QDebug_Space((QDebug*)self);
}

QDebug* q_debug_nospace(void* self) {
    return QDebug_Nospace((QDebug*)self);
}

QDebug* q_debug_maybe_space(void* self) {
    return QDebug_MaybeSpace((QDebug*)self);
}

QDebug* q_debug_verbosity(void* self, int verbosityLevel) {
    return QDebug_Verbosity((QDebug*)self, verbosityLevel);
}

int32_t q_debug_verbosity2(void* self) {
    return QDebug_Verbosity2((QDebug*)self);
}

void q_debug_set_verbosity(void* self, int verbosityLevel) {
    QDebug_SetVerbosity((QDebug*)self, verbosityLevel);
}

bool q_debug_auto_insert_spaces(void* self) {
    return QDebug_AutoInsertSpaces((QDebug*)self);
}

void q_debug_set_auto_insert_spaces(void* self, bool b) {
    QDebug_SetAutoInsertSpaces((QDebug*)self, b);
}

QDebug* q_debug_quote(void* self) {
    return QDebug_Quote((QDebug*)self);
}

QDebug* q_debug_noquote(void* self) {
    return QDebug_Noquote((QDebug*)self);
}

QDebug* q_debug_maybe_quote(void* self) {
    return QDebug_MaybeQuote((QDebug*)self);
}

QDebug* q_debug_operator_shift_left(void* self, void* t) {
    return QDebug_OperatorShiftLeft((QDebug*)self, (QChar*)t);
}

QDebug* q_debug_operator_shift_left_with_bool(void* self, bool t) {
    return QDebug_OperatorShiftLeftWithBool((QDebug*)self, t);
}

QDebug* q_debug_operator_shift_left_with_char(void* self, char t) {
    return QDebug_OperatorShiftLeftWithChar((QDebug*)self, t);
}

QDebug* q_debug_operator_shift_left_with_short(void* self, short t) {
    return QDebug_OperatorShiftLeftWithShort((QDebug*)self, t);
}

QDebug* q_debug_operator_shift_left_with_unsignedshort(void* self, unsigned short t) {
    return QDebug_OperatorShiftLeftWithUnsignedshort((QDebug*)self, t);
}

QDebug* q_debug_operator_shift_left_with_int(void* self, int t) {
    return QDebug_OperatorShiftLeftWithInt((QDebug*)self, t);
}

QDebug* q_debug_operator_shift_left_with_unsignedint(void* self, uint32_t t) {
    return QDebug_OperatorShiftLeftWithUnsignedint((QDebug*)self, t);
}

QDebug* q_debug_operator_shift_left_with_long(void* self, int64_t t) {
    return QDebug_OperatorShiftLeftWithLong((QDebug*)self, t);
}

QDebug* q_debug_operator_shift_left_with_unsignedlong(void* self, uint64_t t) {
    return QDebug_OperatorShiftLeftWithUnsignedlong((QDebug*)self, t);
}

QDebug* q_debug_operator_shift_left_with_qint64(void* self, long long t) {
    return QDebug_OperatorShiftLeftWithQint64((QDebug*)self, t);
}

QDebug* q_debug_operator_shift_left_with_quint64(void* self, uint64_t t) {
    return QDebug_OperatorShiftLeftWithQuint64((QDebug*)self, t);
}

QDebug* q_debug_operator_shift_left_with_float(void* self, float t) {
    return QDebug_OperatorShiftLeftWithFloat((QDebug*)self, t);
}

QDebug* q_debug_operator_shift_left_with_double(void* self, double t) {
    return QDebug_OperatorShiftLeftWithDouble((QDebug*)self, t);
}

QDebug* q_debug_operator_shift_left2(void* self, const char* t) {
    return QDebug_OperatorShiftLeft2((QDebug*)self, t);
}

QDebug* q_debug_operator_shift_left_with_q_string(void* self, const char* t) {
    return QDebug_OperatorShiftLeftWithQString((QDebug*)self, qstring(t));
}

QDebug* q_debug_operator_shift_left_with_q_byte_array(void* self, const char* t) {
    return QDebug_OperatorShiftLeftWithQByteArray((QDebug*)self, qstring(t));
}

QDebug* q_debug_operator_shift_left_with_q_byte_array_view(void* self, const char* t) {
    libqt_strview t_strview = qstrview(t);
    return QDebug_OperatorShiftLeftWithQByteArrayView((QDebug*)self, (QByteArrayView*)&t_strview);
}

QDebug* q_debug_operator_shift_left_with_void(void* self, void* t) {
    return QDebug_OperatorShiftLeftWithVoid((QDebug*)self, t);
}

QDebug* q_debug_maybe_quote1(void* self, char c) {
    return QDebug_MaybeQuote1((QDebug*)self, c);
}

void q_debug_delete(void* self) {
    QDebug_Delete((QDebug*)(self));
}

QDebugStateSaver* q_debugstatesaver_new(void* dbg) {
    return QDebugStateSaver_new((QDebug*)dbg);
}

void q_debugstatesaver_delete(void* self) {
    QDebugStateSaver_Delete((QDebugStateSaver*)(self));
}

QNoDebug* q_nodebug_new(void* other) {
    return QNoDebug_new((QNoDebug*)other);
}

QNoDebug* q_nodebug_new2(void* other) {
    return QNoDebug_new2((QNoDebug*)other);
}

void q_nodebug_copy_assign(void* self, void* other) {
    QNoDebug_CopyAssign((QNoDebug*)self, (QNoDebug*)other);
}

void q_nodebug_move_assign(void* self, void* other) {
    QNoDebug_MoveAssign((QNoDebug*)self, (QNoDebug*)other);
}

QNoDebug* q_nodebug_space(void* self) {
    return QNoDebug_Space((QNoDebug*)self);
}

QNoDebug* q_nodebug_nospace(void* self) {
    return QNoDebug_Nospace((QNoDebug*)self);
}

QNoDebug* q_nodebug_maybe_space(void* self) {
    return QNoDebug_MaybeSpace((QNoDebug*)self);
}

QNoDebug* q_nodebug_quote(void* self) {
    return QNoDebug_Quote((QNoDebug*)self);
}

QNoDebug* q_nodebug_noquote(void* self) {
    return QNoDebug_Noquote((QNoDebug*)self);
}

QNoDebug* q_nodebug_maybe_quote(void* self) {
    return QNoDebug_MaybeQuote((QNoDebug*)self);
}

QNoDebug* q_nodebug_verbosity(void* self, int param1) {
    return QNoDebug_Verbosity((QNoDebug*)self, param1);
}

QNoDebug* q_nodebug_maybe_quote1(void* self, char param1) {
    return QNoDebug_MaybeQuote1((QNoDebug*)self, param1);
}

void q_nodebug_delete(void* self) {
    QNoDebug_Delete((QNoDebug*)(self));
}
