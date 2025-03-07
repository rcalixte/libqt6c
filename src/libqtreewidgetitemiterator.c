#include "libqtreewidget.hpp"
#include "libqtreewidgetitemiterator.hpp"
#include "libqtreewidgetitemiterator.h"

/// https://doc.qt.io/qt-6/qtreewidgetitemiterator.html

/// q_treewidgetitemiterator_new constructs a new QTreeWidgetItemIterator object.
///
/// ``` QTreeWidgetItemIterator* it ```
QTreeWidgetItemIterator* q_treewidgetitemiterator_new(void* it) {
    return QTreeWidgetItemIterator_new((QTreeWidgetItemIterator*)it);
}

/// q_treewidgetitemiterator_new2 constructs a new QTreeWidgetItemIterator object.
///
/// ``` QTreeWidget* widget ```
QTreeWidgetItemIterator* q_treewidgetitemiterator_new2(void* widget) {
    return QTreeWidgetItemIterator_new2((QTreeWidget*)widget);
}

/// q_treewidgetitemiterator_new3 constructs a new QTreeWidgetItemIterator object.
///
/// ``` QTreeWidgetItem* item ```
QTreeWidgetItemIterator* q_treewidgetitemiterator_new3(void* item) {
    return QTreeWidgetItemIterator_new3((QTreeWidgetItem*)item);
}

/// q_treewidgetitemiterator_new4 constructs a new QTreeWidgetItemIterator object.
///
/// ``` QTreeWidget* widget, int flags ```
QTreeWidgetItemIterator* q_treewidgetitemiterator_new4(void* widget, int64_t flags) {
    return QTreeWidgetItemIterator_new4((QTreeWidget*)widget, flags);
}

/// q_treewidgetitemiterator_new5 constructs a new QTreeWidgetItemIterator object.
///
/// ``` QTreeWidgetItem* item, int flags ```
QTreeWidgetItemIterator* q_treewidgetitemiterator_new5(void* item, int64_t flags) {
    return QTreeWidgetItemIterator_new5((QTreeWidgetItem*)item, flags);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitemiterator.html#operator=)
///
/// ``` QTreeWidgetItemIterator* self, QTreeWidgetItemIterator* it ```
void q_treewidgetitemiterator_operator_assign(void* self, void* it) {
    QTreeWidgetItemIterator_OperatorAssign((QTreeWidgetItemIterator*)self, (QTreeWidgetItemIterator*)it);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitemiterator.html#operator++)
///
/// ``` QTreeWidgetItemIterator* self ```
QTreeWidgetItemIterator* q_treewidgetitemiterator_operator_plus_plus(void* self) {
    return QTreeWidgetItemIterator_OperatorPlusPlus((QTreeWidgetItemIterator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitemiterator.html#operator++)
///
/// ``` QTreeWidgetItemIterator* self, int param1 ```
QTreeWidgetItemIterator* q_treewidgetitemiterator_operator_plus_plus_with_int(void* self, int param1) {
    return QTreeWidgetItemIterator_OperatorPlusPlusWithInt((QTreeWidgetItemIterator*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitemiterator.html#operator+=)
///
/// ``` QTreeWidgetItemIterator* self, int n ```
QTreeWidgetItemIterator* q_treewidgetitemiterator_operator_plus_assign(void* self, int n) {
    return QTreeWidgetItemIterator_OperatorPlusAssign((QTreeWidgetItemIterator*)self, n);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitemiterator.html#operator--)
///
/// ``` QTreeWidgetItemIterator* self ```
QTreeWidgetItemIterator* q_treewidgetitemiterator_operator_minus_minus(void* self) {
    return QTreeWidgetItemIterator_OperatorMinusMinus((QTreeWidgetItemIterator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitemiterator.html#operator--)
///
/// ``` QTreeWidgetItemIterator* self, int param1 ```
QTreeWidgetItemIterator* q_treewidgetitemiterator_operator_minus_minus_with_int(void* self, int param1) {
    return QTreeWidgetItemIterator_OperatorMinusMinusWithInt((QTreeWidgetItemIterator*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitemiterator.html#operator-=)
///
/// ``` QTreeWidgetItemIterator* self, int n ```
QTreeWidgetItemIterator* q_treewidgetitemiterator_operator_minus_assign(void* self, int n) {
    return QTreeWidgetItemIterator_OperatorMinusAssign((QTreeWidgetItemIterator*)self, n);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtreewidgetitemiterator.html#operator*)
///
/// ``` QTreeWidgetItemIterator* self ```
QTreeWidgetItem* q_treewidgetitemiterator_operator_multiply(void* self) {
    return QTreeWidgetItemIterator_OperatorMultiply((QTreeWidgetItemIterator*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QTreeWidgetItemIterator* self ```
void q_treewidgetitemiterator_delete(void* self) {
    QTreeWidgetItemIterator_Delete((QTreeWidgetItemIterator*)(self));
}