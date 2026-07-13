#pragma once
#ifndef SRCC_LIBQSTRINGMATCHER_HPP
#define SRCC_LIBQSTRINGMATCHER_HPP

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QChar QChar;
typedef struct QStringMatcher QStringMatcher;
#endif

QStringMatcher* QStringMatcher_New();
QStringMatcher* QStringMatcher_New2(const libqt_string pattern);
QStringMatcher* QStringMatcher_New3(const QChar* uc, ptrdiff_t lenVal);
QStringMatcher* QStringMatcher_New4(libqt_string pattern);
QStringMatcher* QStringMatcher_New5(const QStringMatcher* other);
QStringMatcher* QStringMatcher_New6(const libqt_string pattern, int cs);
QStringMatcher* QStringMatcher_New7(const QChar* uc, ptrdiff_t lenVal, int cs);
QStringMatcher* QStringMatcher_New8(libqt_string pattern, int cs);
void QStringMatcher_OperatorAssign(QStringMatcher* self, const QStringMatcher* other);
void QStringMatcher_SetPattern(QStringMatcher* self, const libqt_string pattern);
void QStringMatcher_SetCaseSensitivity(QStringMatcher* self, int cs);
ptrdiff_t QStringMatcher_IndexIn(const QStringMatcher* self, const libqt_string str);
ptrdiff_t QStringMatcher_IndexIn2(const QStringMatcher* self, const QChar* str, ptrdiff_t length);
ptrdiff_t QStringMatcher_IndexIn3(const QStringMatcher* self, libqt_string str);
libqt_string QStringMatcher_Pattern(const QStringMatcher* self);
libqt_string QStringMatcher_PatternView(const QStringMatcher* self);
int QStringMatcher_CaseSensitivity(const QStringMatcher* self);
ptrdiff_t QStringMatcher_IndexIn22(const QStringMatcher* self, const libqt_string str, ptrdiff_t from);
ptrdiff_t QStringMatcher_IndexIn32(const QStringMatcher* self, const QChar* str, ptrdiff_t length, ptrdiff_t from);
ptrdiff_t QStringMatcher_IndexIn23(const QStringMatcher* self, libqt_string str, ptrdiff_t from);
void QStringMatcher_Delete(QStringMatcher* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
