#pragma once
#ifndef SRCC_LIBQTREEWIDGETITEMITERATOR_HPP
#define SRCC_LIBQTREEWIDGETITEMITERATOR_HPP

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QTreeWidget QTreeWidget;
typedef struct QTreeWidgetItem QTreeWidgetItem;
typedef struct QTreeWidgetItemIterator QTreeWidgetItemIterator;
#endif

QTreeWidgetItemIterator* QTreeWidgetItemIterator_New(const QTreeWidgetItemIterator* it);
QTreeWidgetItemIterator* QTreeWidgetItemIterator_New2(QTreeWidget* widget);
QTreeWidgetItemIterator* QTreeWidgetItemIterator_New3(QTreeWidgetItem* item);
QTreeWidgetItemIterator* QTreeWidgetItemIterator_New4(QTreeWidget* widget, int flags);
QTreeWidgetItemIterator* QTreeWidgetItemIterator_New5(QTreeWidgetItem* item, int flags);
void QTreeWidgetItemIterator_OperatorAssign(QTreeWidgetItemIterator* self, const QTreeWidgetItemIterator* it);
QTreeWidgetItemIterator* QTreeWidgetItemIterator_OperatorPlusPlus(QTreeWidgetItemIterator* self);
QTreeWidgetItemIterator* QTreeWidgetItemIterator_OperatorPlusPlus2(QTreeWidgetItemIterator* self, int param1);
QTreeWidgetItemIterator* QTreeWidgetItemIterator_OperatorPlusAssign(QTreeWidgetItemIterator* self, int n);
QTreeWidgetItemIterator* QTreeWidgetItemIterator_OperatorMinusMinus(QTreeWidgetItemIterator* self);
QTreeWidgetItemIterator* QTreeWidgetItemIterator_OperatorMinusMinus2(QTreeWidgetItemIterator* self, int param1);
QTreeWidgetItemIterator* QTreeWidgetItemIterator_OperatorMinusAssign(QTreeWidgetItemIterator* self, int n);
QTreeWidgetItem* QTreeWidgetItemIterator_OperatorMultiply(const QTreeWidgetItemIterator* self);
void QTreeWidgetItemIterator_Delete(QTreeWidgetItemIterator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
