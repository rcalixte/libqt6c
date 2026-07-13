#pragma once
#ifndef SRCC_LIBQCOMPARE_HPP
#define SRCC_LIBQCOMPARE_HPP

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_partial_ordering)
typedef Qt::partial_ordering partial_ordering;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_strong_ordering)
typedef Qt::strong_ordering strong_ordering;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_weak_ordering)
typedef Qt::weak_ordering weak_ordering;
#endif
#else
typedef struct QPartialOrdering QPartialOrdering;
typedef struct partial_ordering partial_ordering;
typedef struct strong_ordering strong_ordering;
typedef struct weak_ordering weak_ordering;
#endif

partial_ordering* partial_ordering_New(const partial_ordering* other);
partial_ordering* partial_ordering_New2(partial_ordering* other);
partial_ordering* partial_ordering_New3(const partial_ordering* param1);
void partial_ordering_CopyAssign(partial_ordering* self, partial_ordering* other);
void partial_ordering_MoveAssign(partial_ordering* self, partial_ordering* other);
void partial_ordering_Delete(partial_ordering* self);

weak_ordering* weak_ordering_New(const weak_ordering* other);
weak_ordering* weak_ordering_New2(weak_ordering* other);
weak_ordering* weak_ordering_New3(const weak_ordering* param1);
void weak_ordering_CopyAssign(weak_ordering* self, weak_ordering* other);
void weak_ordering_MoveAssign(weak_ordering* self, weak_ordering* other);
partial_ordering* weak_ordering_ToPartialOrdering(const weak_ordering* self);
void weak_ordering_Delete(weak_ordering* self);

strong_ordering* strong_ordering_New(const strong_ordering* other);
strong_ordering* strong_ordering_New2(strong_ordering* other);
strong_ordering* strong_ordering_New3(const strong_ordering* param1);
void strong_ordering_CopyAssign(strong_ordering* self, strong_ordering* other);
void strong_ordering_MoveAssign(strong_ordering* self, strong_ordering* other);
partial_ordering* strong_ordering_ToPartialOrdering(const strong_ordering* self);
weak_ordering* strong_ordering_ToWeakOrdering(const strong_ordering* self);
void strong_ordering_Delete(strong_ordering* self);

QPartialOrdering* QPartialOrdering_New(const QPartialOrdering* other);
QPartialOrdering* QPartialOrdering_New2(QPartialOrdering* other);
QPartialOrdering* QPartialOrdering_New3(partial_ordering* order);
QPartialOrdering* QPartialOrdering_New4(weak_ordering* stdorder);
QPartialOrdering* QPartialOrdering_New5(strong_ordering* stdorder);
QPartialOrdering* QPartialOrdering_New6(const QPartialOrdering* param1);
void QPartialOrdering_CopyAssign(QPartialOrdering* self, QPartialOrdering* other);
void QPartialOrdering_MoveAssign(QPartialOrdering* self, QPartialOrdering* other);
partial_ordering* QPartialOrdering_ToPartialOrdering(const QPartialOrdering* self);
void QPartialOrdering_Delete(QPartialOrdering* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
