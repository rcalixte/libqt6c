#pragma once
#ifndef QML_LIBQQMLINFO_H
#define QML_LIBQQMLINFO_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo-h.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo-h.html#qmlDebug)
///
/// @param me QObject*
///
QQmlInfo* q_qqmlinfo_h_qml_debug(void* me);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo-h.html#qmlDebug)
///
/// @param me QObject*
/// @param error QQmlError*
///
QQmlInfo* q_qqmlinfo_h_qml_debug2(void* me, void* error);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo-h.html#qmlDebug)
///
/// @param me QObject*
/// @param errors libqt_list of QQmlError*
///
QQmlInfo* q_qqmlinfo_h_qml_debug3(void* me, libqt_list errors);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo-h.html#qmlInfo)
///
/// @param me QObject*
///
QQmlInfo* q_qqmlinfo_h_qml_info(void* me);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo-h.html#qmlInfo)
///
/// @param me QObject*
/// @param error QQmlError*
///
QQmlInfo* q_qqmlinfo_h_qml_info2(void* me, void* error);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo-h.html#qmlInfo)
///
/// @param me QObject*
/// @param errors libqt_list of QQmlError*
///
QQmlInfo* q_qqmlinfo_h_qml_info3(void* me, libqt_list errors);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo-h.html#qmlWarning)
///
/// @param me QObject*
///
QQmlInfo* q_qqmlinfo_h_qml_warning(void* me);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo-h.html#qmlWarning)
///
/// @param me QObject*
/// @param error QQmlError*
///
QQmlInfo* q_qqmlinfo_h_qml_warning2(void* me, void* error);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo-h.html#qmlWarning)
///
/// @param me QObject*
/// @param errors libqt_list of QQmlError*
///
QQmlInfo* q_qqmlinfo_h_qml_warning3(void* me, libqt_list errors);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo.html)

/// q_qmlinfo_new constructs a new QQmlInfo object.
///
/// @param param1 QQmlInfo*
///
QQmlInfo* q_qmlinfo_new(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo.html#operator-lt-lt)
///
/// @param self QQmlInfo*
/// @param t QChar*
///
QQmlInfo* q_qmlinfo_operator_shift_left(void* self, void* t);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo.html#operator-lt-lt)
///
/// @param self QQmlInfo*
/// @param t bool
///
QQmlInfo* q_qmlinfo_operator_shift_left2(void* self, bool t);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo.html#operator-lt-lt)
///
/// @param self QQmlInfo*
/// @param t char
///
QQmlInfo* q_qmlinfo_operator_shift_left3(void* self, char t);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo.html#operator-lt-lt)
///
/// @param self QQmlInfo*
/// @param t short
///
QQmlInfo* q_qmlinfo_operator_shift_left4(void* self, short t);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo.html#operator-lt-lt)
///
/// @param self QQmlInfo*
/// @param t uint16_t
///
QQmlInfo* q_qmlinfo_operator_shift_left5(void* self, uint16_t t);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo.html#operator-lt-lt)
///
/// @param self QQmlInfo*
/// @param t int
///
QQmlInfo* q_qmlinfo_operator_shift_left6(void* self, int t);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo.html#operator-lt-lt)
///
/// @param self QQmlInfo*
/// @param t uint32_t
///
QQmlInfo* q_qmlinfo_operator_shift_left7(void* self, uint32_t t);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo.html#operator-lt-lt)
///
/// @param self QQmlInfo*
/// @param t long
///
QQmlInfo* q_qmlinfo_operator_shift_left8(void* self, long t);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo.html#operator-lt-lt)
///
/// @param self QQmlInfo*
/// @param t uintptr_t
///
QQmlInfo* q_qmlinfo_operator_shift_left9(void* self, uintptr_t t);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo.html#operator-lt-lt)
///
/// @param self QQmlInfo*
/// @param t int64_t
///
QQmlInfo* q_qmlinfo_operator_shift_left10(void* self, int64_t t);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo.html#operator-lt-lt)
///
/// @param self QQmlInfo*
/// @param t uint64_t
///
QQmlInfo* q_qmlinfo_operator_shift_left11(void* self, uint64_t t);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo.html#operator-lt-lt)
///
/// @param self QQmlInfo*
/// @param t float
///
QQmlInfo* q_qmlinfo_operator_shift_left12(void* self, float t);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo.html#operator-lt-lt)
///
/// @param self QQmlInfo*
/// @param t double
///
QQmlInfo* q_qmlinfo_operator_shift_left13(void* self, double t);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo.html#operator-lt-lt)
///
/// @param self QQmlInfo*
/// @param t const char*
///
QQmlInfo* q_qmlinfo_operator_shift_left14(void* self, const char* t);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo.html#operator-lt-lt)
///
/// @param self QQmlInfo*
/// @param t const char*
///
QQmlInfo* q_qmlinfo_operator_shift_left15(void* self, const char* t);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo.html#operator-lt-lt)
///
/// @param self QQmlInfo*
/// @param t const char*
///
QQmlInfo* q_qmlinfo_operator_shift_left16(void* self, const char* t);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo.html#operator-lt-lt)
///
/// @param self QQmlInfo*
/// @param t char*
///
QQmlInfo* q_qmlinfo_operator_shift_left17(void* self, char* t);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo.html#operator-lt-lt)
///
/// @param self QQmlInfo*
/// @param t char*
///
QQmlInfo* q_qmlinfo_operator_shift_left18(void* self, char* t);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo.html#operator-lt-lt)
///
/// @param self QQmlInfo*
/// @param t void*
///
QQmlInfo* q_qmlinfo_operator_shift_left19(void* self, void* t);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo.html#operator-lt-lt)
///
/// @param self QQmlInfo*
/// @param f QTextStream* func(QTextStream* param1)
///
QQmlInfo* q_qmlinfo_operator_shift_left20(void* self, QTextStream* (*f)(void* funcparam1));

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo.html#operator-lt-lt)
///
/// @param self QQmlInfo*
/// @param t QUrl*
///
QQmlInfo* q_qmlinfo_operator_shift_left22(void* self, void* t);

/// Inherited from QDebug
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-eq)
///
/// @param self QQmlInfo*
/// @param other QDebug*
///
void q_qmlinfo_operator_assign(void* self, void* other);

/// Inherited from QDebug
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#swap)
///
/// @param self QQmlInfo*
/// @param other QDebug*
///
void q_qmlinfo_swap(void* self, void* other);

/// Inherited from QDebug
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#resetFormat)
///
/// @param self QQmlInfo*
///
QDebug* q_qmlinfo_reset_format(void* self);

/// Inherited from QDebug
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#space)
///
/// @param self QQmlInfo*
///
QDebug* q_qmlinfo_space(void* self);

/// Inherited from QDebug
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#nospace)
///
/// @param self QQmlInfo*
///
QDebug* q_qmlinfo_nospace(void* self);

/// Inherited from QDebug
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#maybeSpace)
///
/// @param self QQmlInfo*
///
QDebug* q_qmlinfo_maybe_space(void* self);

/// Inherited from QDebug
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#verbosity)
///
/// @param self QQmlInfo*
/// @param verbosityLevel int
///
QDebug* q_qmlinfo_verbosity(void* self, int verbosityLevel);

/// Inherited from QDebug
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#verbosity)
///
/// @param self QQmlInfo*
///
int32_t q_qmlinfo_verbosity2(void* self);

/// Inherited from QDebug
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#setVerbosity)
///
/// @param self QQmlInfo*
/// @param verbosityLevel int
///
void q_qmlinfo_set_verbosity(void* self, int verbosityLevel);

/// Inherited from QDebug
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#autoInsertSpaces)
///
/// @param self QQmlInfo*
///
bool q_qmlinfo_auto_insert_spaces(void* self);

/// Inherited from QDebug
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#setAutoInsertSpaces)
///
/// @param self QQmlInfo*
/// @param b bool
///
void q_qmlinfo_set_auto_insert_spaces(void* self, bool b);

/// Inherited from QDebug
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#quoteStrings)
///
/// @param self QQmlInfo*
///
bool q_qmlinfo_quote_strings(void* self);

/// Inherited from QDebug
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#setQuoteStrings)
///
/// @param self QQmlInfo*
/// @param b bool
///
void q_qmlinfo_set_quote_strings(void* self, bool b);

/// Inherited from QDebug
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#quote)
///
/// @param self QQmlInfo*
///
QDebug* q_qmlinfo_quote(void* self);

/// Inherited from QDebug
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#noquote)
///
/// @param self QQmlInfo*
///
QDebug* q_qmlinfo_noquote(void* self);

/// Inherited from QDebug
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#maybeQuote)
///
/// @param self QQmlInfo*
///
QDebug* q_qmlinfo_maybe_quote(void* self);

/// Inherited from QDebug
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
///
/// @param self QQmlInfo*
/// @param t char*
///
QDebug* q_qmlinfo_operator_shift_left23(void* self, char* t);

/// Inherited from QDebug
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
///
/// @param self QQmlInfo*
/// @param t char*
///
QDebug* q_qmlinfo_operator_shift_left24(void* self, char* t);

/// Inherited from QDebug
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
///
/// @param self QQmlInfo*
/// @param t void*
///
QDebug* q_qmlinfo_operator_shift_left25(void* self, void* t);

/// Inherited from QDebug
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#operator-lt-lt)
///
/// @param self QQmlInfo*
/// @param f QTextStream* func(QTextStream* param1)
///
QDebug* q_qmlinfo_operator_shift_left28(void* self, QTextStream* (*f)(void* funcparam1));

/// Inherited from QDebug
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdebug.html#maybeQuote)
///
/// @param self QQmlInfo*
/// @param c char
///
QDebug* q_qmlinfo_maybe_quote1(void* self, char c);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlinfo.html#dtor.QQmlInfo)
///
/// Delete this object from C++ memory.
///
/// @param self QQmlInfo*
///
void q_qmlinfo_delete(void* self);

#endif
