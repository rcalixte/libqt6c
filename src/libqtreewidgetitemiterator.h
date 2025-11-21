#pragma once
#ifndef SRC_QT6C_LIBQTREEWIDGETITEMITERATOR_H
#define SRC_QT6C_LIBQTREEWIDGETITEMITERATOR_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qtreewidgetitemiterator.html

/// q_treewidgetitemiterator_new constructs a new QTreeWidgetItemIterator object.
///
/// @param it QTreeWidgetItemIterator*
QTreeWidgetItemIterator* q_treewidgetitemiterator_new(void* it);

/// q_treewidgetitemiterator_new2 constructs a new QTreeWidgetItemIterator object.
///
/// @param widget QTreeWidget*
QTreeWidgetItemIterator* q_treewidgetitemiterator_new2(void* widget);

/// q_treewidgetitemiterator_new3 constructs a new QTreeWidgetItemIterator object.
///
/// @param item QTreeWidgetItem*
QTreeWidgetItemIterator* q_treewidgetitemiterator_new3(void* item);

/// q_treewidgetitemiterator_new4 constructs a new QTreeWidgetItemIterator object.
///
/// @param widget QTreeWidget*
/// @param flags flag of enum QTreeWidgetItemIterator__IteratorFlag
QTreeWidgetItemIterator* q_treewidgetitemiterator_new4(void* widget, int32_t flags);

/// q_treewidgetitemiterator_new5 constructs a new QTreeWidgetItemIterator object.
///
/// @param item QTreeWidgetItem*
/// @param flags flag of enum QTreeWidgetItemIterator__IteratorFlag
QTreeWidgetItemIterator* q_treewidgetitemiterator_new5(void* item, int32_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitemiterator.html#operator-eq)
///
/// @param self QTreeWidgetItemIterator*
/// @param it QTreeWidgetItemIterator*
void q_treewidgetitemiterator_operator_assign(void* self, void* it);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitemiterator.html#operator-2b-2b)
///
/// @param self QTreeWidgetItemIterator*
QTreeWidgetItemIterator* q_treewidgetitemiterator_operator_plus_plus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitemiterator.html#operator-2b-2b)
///
/// @param self QTreeWidgetItemIterator*
/// @param param1 int
const QTreeWidgetItemIterator* q_treewidgetitemiterator_operator_plus_plus2(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitemiterator.html#operator-2b-eq)
///
/// @param self QTreeWidgetItemIterator*
/// @param n int
QTreeWidgetItemIterator* q_treewidgetitemiterator_operator_plus_assign(void* self, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitemiterator.html#operator--)
///
/// @param self QTreeWidgetItemIterator*
QTreeWidgetItemIterator* q_treewidgetitemiterator_operator_minus_minus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitemiterator.html#operator--)
///
/// @param self QTreeWidgetItemIterator*
/// @param param1 int
const QTreeWidgetItemIterator* q_treewidgetitemiterator_operator_minus_minus2(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitemiterator.html#operator--eq)
///
/// @param self QTreeWidgetItemIterator*
/// @param n int
QTreeWidgetItemIterator* q_treewidgetitemiterator_operator_minus_assign(void* self, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitemiterator.html#operator-2a)
///
/// @param self QTreeWidgetItemIterator*
QTreeWidgetItem* q_treewidgetitemiterator_operator_multiply(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitemiterator.html#dtor.QTreeWidgetItemIterator)
///
/// Delete this object from C++ memory.
///
/// @param self QTreeWidgetItemIterator*
void q_treewidgetitemiterator_delete(void* self);

/// https://doc.qt.io/qt-6/qtreewidgetitemiterator.html#types

typedef enum {
    QTREEWIDGETITEMITERATOR_ITERATORFLAG_ALL = 0,
    QTREEWIDGETITEMITERATOR_ITERATORFLAG_HIDDEN = 1,
    QTREEWIDGETITEMITERATOR_ITERATORFLAG_NOTHIDDEN = 2,
    QTREEWIDGETITEMITERATOR_ITERATORFLAG_SELECTED = 4,
    QTREEWIDGETITEMITERATOR_ITERATORFLAG_UNSELECTED = 8,
    QTREEWIDGETITEMITERATOR_ITERATORFLAG_SELECTABLE = 16,
    QTREEWIDGETITEMITERATOR_ITERATORFLAG_NOTSELECTABLE = 32,
    QTREEWIDGETITEMITERATOR_ITERATORFLAG_DRAGENABLED = 64,
    QTREEWIDGETITEMITERATOR_ITERATORFLAG_DRAGDISABLED = 128,
    QTREEWIDGETITEMITERATOR_ITERATORFLAG_DROPENABLED = 256,
    QTREEWIDGETITEMITERATOR_ITERATORFLAG_DROPDISABLED = 512,
    QTREEWIDGETITEMITERATOR_ITERATORFLAG_HASCHILDREN = 1024,
    QTREEWIDGETITEMITERATOR_ITERATORFLAG_NOCHILDREN = 2048,
    QTREEWIDGETITEMITERATOR_ITERATORFLAG_CHECKED = 4096,
    QTREEWIDGETITEMITERATOR_ITERATORFLAG_NOTCHECKED = 8192,
    QTREEWIDGETITEMITERATOR_ITERATORFLAG_ENABLED = 16384,
    QTREEWIDGETITEMITERATOR_ITERATORFLAG_DISABLED = 32768,
    QTREEWIDGETITEMITERATOR_ITERATORFLAG_EDITABLE = 65536,
    QTREEWIDGETITEMITERATOR_ITERATORFLAG_NOTEDITABLE = 131072,
    QTREEWIDGETITEMITERATOR_ITERATORFLAG_USERFLAG = 16777216
} QTreeWidgetItemIterator__IteratorFlag;

#endif
