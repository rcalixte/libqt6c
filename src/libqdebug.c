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

bool q_debug_quote_strings(void* self) {
    return QDebug_QuoteStrings((QDebug*)self);
}

void q_debug_set_quote_strings(void* self, bool b) {
    QDebug_SetQuoteStrings((QDebug*)self, b);
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

QDebug* q_debug_operator_shift_left2(void* self, bool t) {
    return QDebug_OperatorShiftLeft2((QDebug*)self, t);
}

QDebug* q_debug_operator_shift_left3(void* self, char t) {
    return QDebug_OperatorShiftLeft3((QDebug*)self, t);
}

QDebug* q_debug_operator_shift_left4(void* self, short t) {
    return QDebug_OperatorShiftLeft4((QDebug*)self, t);
}

QDebug* q_debug_operator_shift_left5(void* self, unsigned short t) {
    return QDebug_OperatorShiftLeft5((QDebug*)self, t);
}

QDebug* q_debug_operator_shift_left8(void* self, int t) {
    return QDebug_OperatorShiftLeft8((QDebug*)self, t);
}

QDebug* q_debug_operator_shift_left9(void* self, uint32_t t) {
    return QDebug_OperatorShiftLeft9((QDebug*)self, t);
}

QDebug* q_debug_operator_shift_left10(void* self, int64_t t) {
    return QDebug_OperatorShiftLeft10((QDebug*)self, t);
}

QDebug* q_debug_operator_shift_left11(void* self, uint64_t t) {
    return QDebug_OperatorShiftLeft11((QDebug*)self, t);
}

QDebug* q_debug_operator_shift_left12(void* self, long long t) {
    return QDebug_OperatorShiftLeft12((QDebug*)self, t);
}

QDebug* q_debug_operator_shift_left13(void* self, uint64_t t) {
    return QDebug_OperatorShiftLeft13((QDebug*)self, t);
}

QDebug* q_debug_operator_shift_left15(void* self, float t) {
    return QDebug_OperatorShiftLeft15((QDebug*)self, t);
}

QDebug* q_debug_operator_shift_left16(void* self, double t) {
    return QDebug_OperatorShiftLeft16((QDebug*)self, t);
}

QDebug* q_debug_operator_shift_left17(void* self, const char* t) {
    return QDebug_OperatorShiftLeft17((QDebug*)self, t);
}

QDebug* q_debug_operator_shift_left19(void* self, const char* t) {
    return QDebug_OperatorShiftLeft19((QDebug*)self, qstring(t));
}

QDebug* q_debug_operator_shift_left23(void* self, const char* t) {
    return QDebug_OperatorShiftLeft23((QDebug*)self, qstring(t));
}

QDebug* q_debug_operator_shift_left24(void* self, const char* t) {
    libqt_strview t_strview = qstrview(t);
    return QDebug_OperatorShiftLeft24((QDebug*)self, (QByteArrayView*)&t_strview);
}

QDebug* q_debug_operator_shift_left25(void* self, void* t) {
    return QDebug_OperatorShiftLeft25((QDebug*)self, t);
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
