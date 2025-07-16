#include "libqtreewidget.hpp"
#include "libqtreewidgetitemiterator.hpp"
#include "libqtreewidgetitemiterator.h"

QTreeWidgetItemIterator* q_treewidgetitemiterator_new(void* it) {
    return QTreeWidgetItemIterator_new((QTreeWidgetItemIterator*)it);
}

QTreeWidgetItemIterator* q_treewidgetitemiterator_new2(void* widget) {
    return QTreeWidgetItemIterator_new2((QTreeWidget*)widget);
}

QTreeWidgetItemIterator* q_treewidgetitemiterator_new3(void* item) {
    return QTreeWidgetItemIterator_new3((QTreeWidgetItem*)item);
}

QTreeWidgetItemIterator* q_treewidgetitemiterator_new4(void* widget, int64_t flags) {
    return QTreeWidgetItemIterator_new4((QTreeWidget*)widget, flags);
}

QTreeWidgetItemIterator* q_treewidgetitemiterator_new5(void* item, int64_t flags) {
    return QTreeWidgetItemIterator_new5((QTreeWidgetItem*)item, flags);
}

void q_treewidgetitemiterator_operator_assign(void* self, void* it) {
    QTreeWidgetItemIterator_OperatorAssign((QTreeWidgetItemIterator*)self, (QTreeWidgetItemIterator*)it);
}

QTreeWidgetItemIterator* q_treewidgetitemiterator_operator_plus_plus(void* self) {
    return QTreeWidgetItemIterator_OperatorPlusPlus((QTreeWidgetItemIterator*)self);
}

const QTreeWidgetItemIterator* q_treewidgetitemiterator_operator_plus_plus2(void* self, int param1) {
    return QTreeWidgetItemIterator_OperatorPlusPlus2((QTreeWidgetItemIterator*)self, param1);
}

QTreeWidgetItemIterator* q_treewidgetitemiterator_operator_plus_assign(void* self, int n) {
    return QTreeWidgetItemIterator_OperatorPlusAssign((QTreeWidgetItemIterator*)self, n);
}

QTreeWidgetItemIterator* q_treewidgetitemiterator_operator_minus_minus(void* self) {
    return QTreeWidgetItemIterator_OperatorMinusMinus((QTreeWidgetItemIterator*)self);
}

const QTreeWidgetItemIterator* q_treewidgetitemiterator_operator_minus_minus2(void* self, int param1) {
    return QTreeWidgetItemIterator_OperatorMinusMinus2((QTreeWidgetItemIterator*)self, param1);
}

QTreeWidgetItemIterator* q_treewidgetitemiterator_operator_minus_assign(void* self, int n) {
    return QTreeWidgetItemIterator_OperatorMinusAssign((QTreeWidgetItemIterator*)self, n);
}

QTreeWidgetItem* q_treewidgetitemiterator_operator_multiply(void* self) {
    return QTreeWidgetItemIterator_OperatorMultiply((QTreeWidgetItemIterator*)self);
}

void q_treewidgetitemiterator_delete(void* self) {
    QTreeWidgetItemIterator_Delete((QTreeWidgetItemIterator*)(self));
}
