#include "../libqchar.hpp"
#include "../libqdebug.hpp"
#include "../libqiodevicebase.hpp"
#include "../libqobject.hpp"
#include "libqqmlerror.hpp"
#include "../libqurl.hpp"
#include "libqqmlinfo.hpp"
#include "libqqmlinfo.h"

QQmlInfo* q_qqmlinfo_h_qml_debug(void* me) {
    return qqmlinfo_h_QmlDebug((QObject*)me);
}

QQmlInfo* q_qqmlinfo_h_qml_debug2(void* me, void* error) {
    return qqmlinfo_h_QmlDebug2((QObject*)me, (QQmlError*)error);
}

QQmlInfo* q_qqmlinfo_h_qml_debug3(void* me, libqt_list /* of QQmlError* */ errors) {
    return qqmlinfo_h_QmlDebug3((QObject*)me, errors);
}

QQmlInfo* q_qqmlinfo_h_qml_info(void* me) {
    return qqmlinfo_h_QmlInfo((QObject*)me);
}

QQmlInfo* q_qqmlinfo_h_qml_info2(void* me, void* error) {
    return qqmlinfo_h_QmlInfo2((QObject*)me, (QQmlError*)error);
}

QQmlInfo* q_qqmlinfo_h_qml_info3(void* me, libqt_list /* of QQmlError* */ errors) {
    return qqmlinfo_h_QmlInfo3((QObject*)me, errors);
}

QQmlInfo* q_qqmlinfo_h_qml_warning(void* me) {
    return qqmlinfo_h_QmlWarning((QObject*)me);
}

QQmlInfo* q_qqmlinfo_h_qml_warning2(void* me, void* error) {
    return qqmlinfo_h_QmlWarning2((QObject*)me, (QQmlError*)error);
}

QQmlInfo* q_qqmlinfo_h_qml_warning3(void* me, libqt_list /* of QQmlError* */ errors) {
    return qqmlinfo_h_QmlWarning3((QObject*)me, errors);
}

QQmlInfo* q_qmlinfo_new(void* param1) {
    return QQmlInfo_New((QQmlInfo*)param1);
}

QQmlInfo* q_qmlinfo_operator_shift_left(void* self, void* t) {
    return QQmlInfo_OperatorShiftLeft((QQmlInfo*)self, (QChar*)t);
}

QQmlInfo* q_qmlinfo_operator_shift_left2(void* self, bool t) {
    return QQmlInfo_OperatorShiftLeft2((QQmlInfo*)self, t);
}

QQmlInfo* q_qmlinfo_operator_shift_left3(void* self, char t) {
    return QQmlInfo_OperatorShiftLeft3((QQmlInfo*)self, t);
}

QQmlInfo* q_qmlinfo_operator_shift_left4(void* self, short t) {
    return QQmlInfo_OperatorShiftLeft4((QQmlInfo*)self, t);
}

QQmlInfo* q_qmlinfo_operator_shift_left5(void* self, uint16_t t) {
    return QQmlInfo_OperatorShiftLeft5((QQmlInfo*)self, t);
}

QQmlInfo* q_qmlinfo_operator_shift_left6(void* self, int t) {
    return QQmlInfo_OperatorShiftLeft6((QQmlInfo*)self, t);
}

QQmlInfo* q_qmlinfo_operator_shift_left7(void* self, uint32_t t) {
    return QQmlInfo_OperatorShiftLeft7((QQmlInfo*)self, t);
}

QQmlInfo* q_qmlinfo_operator_shift_left8(void* self, long t) {
    return QQmlInfo_OperatorShiftLeft8((QQmlInfo*)self, t);
}

QQmlInfo* q_qmlinfo_operator_shift_left9(void* self, uintptr_t t) {
    return QQmlInfo_OperatorShiftLeft9((QQmlInfo*)self, t);
}

QQmlInfo* q_qmlinfo_operator_shift_left10(void* self, int64_t t) {
    return QQmlInfo_OperatorShiftLeft10((QQmlInfo*)self, t);
}

QQmlInfo* q_qmlinfo_operator_shift_left11(void* self, uint64_t t) {
    return QQmlInfo_OperatorShiftLeft11((QQmlInfo*)self, t);
}

QQmlInfo* q_qmlinfo_operator_shift_left12(void* self, float t) {
    return QQmlInfo_OperatorShiftLeft12((QQmlInfo*)self, t);
}

QQmlInfo* q_qmlinfo_operator_shift_left13(void* self, double t) {
    return QQmlInfo_OperatorShiftLeft13((QQmlInfo*)self, t);
}

QQmlInfo* q_qmlinfo_operator_shift_left14(void* self, const char* t) {
    return QQmlInfo_OperatorShiftLeft14((QQmlInfo*)self, t);
}

QQmlInfo* q_qmlinfo_operator_shift_left15(void* self, const char* t) {
    return QQmlInfo_OperatorShiftLeft15((QQmlInfo*)self, qstring(t));
}

QQmlInfo* q_qmlinfo_operator_shift_left16(void* self, const char* t) {
    return QQmlInfo_OperatorShiftLeft16((QQmlInfo*)self, qstring(t));
}

QQmlInfo* q_qmlinfo_operator_shift_left17(void* self, char* t) {
    return QQmlInfo_OperatorShiftLeft17((QQmlInfo*)self, qstring(t));
}

QQmlInfo* q_qmlinfo_operator_shift_left18(void* self, char* t) {
    return QQmlInfo_OperatorShiftLeft18((QQmlInfo*)self, qstring(t));
}

QQmlInfo* q_qmlinfo_operator_shift_left19(void* self, void* t) {
    return QQmlInfo_OperatorShiftLeft19((QQmlInfo*)self, t);
}

QQmlInfo* q_qmlinfo_operator_shift_left20(void* self, QTextStream* (*f)(void* funcparam1)) {
    return QQmlInfo_OperatorShiftLeft20((QQmlInfo*)self, (intptr_t)f);
}

QQmlInfo* q_qmlinfo_operator_shift_left22(void* self, void* t) {
    return QQmlInfo_OperatorShiftLeft22((QQmlInfo*)self, (QUrl*)t);
}

void q_qmlinfo_operator_assign(void* self, void* other) {
    QDebug_OperatorAssign((QDebug*)self, (QDebug*)other);
}

void q_qmlinfo_swap(void* self, void* other) {
    QDebug_Swap((QDebug*)self, (QDebug*)other);
}

QDebug* q_qmlinfo_reset_format(void* self) {
    return QDebug_ResetFormat((QDebug*)self);
}

QDebug* q_qmlinfo_space(void* self) {
    return QDebug_Space((QDebug*)self);
}

QDebug* q_qmlinfo_nospace(void* self) {
    return QDebug_Nospace((QDebug*)self);
}

QDebug* q_qmlinfo_maybe_space(void* self) {
    return QDebug_MaybeSpace((QDebug*)self);
}

QDebug* q_qmlinfo_verbosity(void* self, int verbosityLevel) {
    return QDebug_Verbosity((QDebug*)self, verbosityLevel);
}

int32_t q_qmlinfo_verbosity2(void* self) {
    return QDebug_Verbosity2((QDebug*)self);
}

void q_qmlinfo_set_verbosity(void* self, int verbosityLevel) {
    QDebug_SetVerbosity((QDebug*)self, verbosityLevel);
}

bool q_qmlinfo_auto_insert_spaces(void* self) {
    return QDebug_AutoInsertSpaces((QDebug*)self);
}

void q_qmlinfo_set_auto_insert_spaces(void* self, bool b) {
    QDebug_SetAutoInsertSpaces((QDebug*)self, b);
}

bool q_qmlinfo_quote_strings(void* self) {
    return QDebug_QuoteStrings((QDebug*)self);
}

void q_qmlinfo_set_quote_strings(void* self, bool b) {
    QDebug_SetQuoteStrings((QDebug*)self, b);
}

QDebug* q_qmlinfo_quote(void* self) {
    return QDebug_Quote((QDebug*)self);
}

QDebug* q_qmlinfo_noquote(void* self) {
    return QDebug_Noquote((QDebug*)self);
}

QDebug* q_qmlinfo_maybe_quote(void* self) {
    return QDebug_MaybeQuote((QDebug*)self);
}

QDebug* q_qmlinfo_operator_shift_left23(void* self, char* t) {
    return QDebug_OperatorShiftLeft23((QDebug*)self, qstring(t));
}

QDebug* q_qmlinfo_operator_shift_left24(void* self, char* t) {
    return QDebug_OperatorShiftLeft24((QDebug*)self, qstring(t));
}

QDebug* q_qmlinfo_operator_shift_left25(void* self, void* t) {
    return QDebug_OperatorShiftLeft25((QDebug*)self, t);
}

QDebug* q_qmlinfo_operator_shift_left28(void* self, QTextStream* (*f)(void* funcparam1)) {
    return QDebug_OperatorShiftLeft28((QDebug*)self, (intptr_t)f);
}

QDebug* q_qmlinfo_maybe_quote1(void* self, char c) {
    return QDebug_MaybeQuote1((QDebug*)self, c);
}

void q_qmlinfo_delete(void* self) {
    QQmlInfo_Delete((QQmlInfo*)(self));
}
