#include <QAbstractItemDelegate>
#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QAbstractScrollArea>
#include <QAction>
#include <QActionEvent>
#include <QAnyStringView>
#include <QBackingStore>
#include <QBindingStorage>
#include <QBitmap>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QCursor>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFont>
#include <QFontInfo>
#include <QFontMetrics>
#include <QFrame>
#include <QGraphicsEffect>
#include <QGraphicsProxyWidget>
#include <QHideEvent>
#include <QIcon>
#include <QInputMethodEvent>
#include <QItemSelection>
#include <QItemSelectionModel>
#include <QKeyEvent>
#include <QKeySequence>
#include <QLayout>
#include <QList>
#include <QListView>
#include <QLocale>
#include <QMargins>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QModelIndex>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPalette>
#include <QPixmap>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QRegion>
#include <QResizeEvent>
#include <QScreen>
#include <QScrollBar>
#include <QShowEvent>
#include <QSize>
#include <QSizePolicy>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyle>
#include <QStyleOptionFrame>
#include <QStyleOptionViewItem>
#include <QTabletEvent>
#include <QThread>
#include <QTimerEvent>
#include <QUndoGroup>
#include <QUndoStack>
#include <QUndoView>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <QWindow>
#include <qundoview.h>
#include "libqundoview.hpp"
#include "libqundoview.hxx"

QUndoView* QUndoView_new(QWidget* parent) {
    return new VirtualQUndoView(parent);
}

QUndoView* QUndoView_new2() {
    return new VirtualQUndoView();
}

QUndoView* QUndoView_new3(QUndoStack* stack) {
    return new VirtualQUndoView(stack);
}

QUndoView* QUndoView_new4(QUndoGroup* group) {
    return new VirtualQUndoView(group);
}

QUndoView* QUndoView_new5(QUndoStack* stack, QWidget* parent) {
    return new VirtualQUndoView(stack, parent);
}

QUndoView* QUndoView_new6(QUndoGroup* group, QWidget* parent) {
    return new VirtualQUndoView(group, parent);
}

QMetaObject* QUndoView_MetaObject(const QUndoView* self) {
    return (QMetaObject*)self->metaObject();
}

void* QUndoView_Metacast(QUndoView* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QUndoView_Metacall(QUndoView* self, int param1, int param2, void** param3) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QUndoView_OnMetacall(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_Metacall_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QUndoView_QBaseMetacall(QUndoView* self, int param1, int param2, void** param3) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_Metacall_IsBase(true);
        return vqundoview->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QUndoView_Tr(const char* s) {
    QString _ret = QUndoView::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QUndoStack* QUndoView_Stack(const QUndoView* self) {
    return self->stack();
}

QUndoGroup* QUndoView_Group(const QUndoView* self) {
    return self->group();
}

void QUndoView_SetEmptyLabel(QUndoView* self, libqt_string label) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    self->setEmptyLabel(label_QString);
}

libqt_string QUndoView_EmptyLabel(const QUndoView* self) {
    QString _ret = self->emptyLabel();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QUndoView_SetCleanIcon(QUndoView* self, QIcon* icon) {
    self->setCleanIcon(*icon);
}

QIcon* QUndoView_CleanIcon(const QUndoView* self) {
    return new QIcon(self->cleanIcon());
}

void QUndoView_SetStack(QUndoView* self, QUndoStack* stack) {
    self->setStack(stack);
}

void QUndoView_SetGroup(QUndoView* self, QUndoGroup* group) {
    self->setGroup(group);
}

libqt_string QUndoView_Tr2(const char* s, const char* c) {
    QString _ret = QUndoView::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QUndoView_Tr3(const char* s, const char* c, int n) {
    QString _ret = QUndoView::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
QRect* QUndoView_VisualRect(const QUndoView* self, QModelIndex* index) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        return new QRect(vqundoview->visualRect(*index));
    } else {
        return new QRect(self->visualRect(*index));
    }
}

// Base class handler implementation
QRect* QUndoView_QBaseVisualRect(const QUndoView* self, QModelIndex* index) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_VisualRect_IsBase(true);
        return new QRect(vqundoview->visualRect(*index));
    } else {
        return new QRect(self->visualRect(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnVisualRect(const QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_VisualRect_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_VisualRect_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_ScrollTo(QUndoView* self, QModelIndex* index, int hint) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    } else {
        vqundoview->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    }
}

// Base class handler implementation
void QUndoView_QBaseScrollTo(QUndoView* self, QModelIndex* index, int hint) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_ScrollTo_IsBase(true);
        vqundoview->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    } else {
        vqundoview->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnScrollTo(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_ScrollTo_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_ScrollTo_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QUndoView_IndexAt(const QUndoView* self, QPoint* p) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        return new QModelIndex(vqundoview->indexAt(*p));
    } else {
        return new QModelIndex(self->indexAt(*p));
    }
}

// Base class handler implementation
QModelIndex* QUndoView_QBaseIndexAt(const QUndoView* self, QPoint* p) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_IndexAt_IsBase(true);
        return new QModelIndex(vqundoview->indexAt(*p));
    } else {
        return new QModelIndex(self->indexAt(*p));
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnIndexAt(const QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_IndexAt_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_IndexAt_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_DoItemsLayout(QUndoView* self) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->doItemsLayout();
    } else {
        vqundoview->doItemsLayout();
    }
}

// Base class handler implementation
void QUndoView_QBaseDoItemsLayout(QUndoView* self) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_DoItemsLayout_IsBase(true);
        vqundoview->doItemsLayout();
    } else {
        vqundoview->doItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnDoItemsLayout(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_DoItemsLayout_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_DoItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_Reset(QUndoView* self) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->reset();
    } else {
        vqundoview->reset();
    }
}

// Base class handler implementation
void QUndoView_QBaseReset(QUndoView* self) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_Reset_IsBase(true);
        vqundoview->reset();
    } else {
        vqundoview->reset();
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnReset(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_Reset_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_Reset_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_SetRootIndex(QUndoView* self, QModelIndex* index) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setRootIndex(*index);
    } else {
        vqundoview->setRootIndex(*index);
    }
}

// Base class handler implementation
void QUndoView_QBaseSetRootIndex(QUndoView* self, QModelIndex* index) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_SetRootIndex_IsBase(true);
        vqundoview->setRootIndex(*index);
    } else {
        vqundoview->setRootIndex(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnSetRootIndex(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_SetRootIndex_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_SetRootIndex_Callback>(slot));
    }
}

// Derived class handler implementation
bool QUndoView_Event(QUndoView* self, QEvent* e) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        return vqundoview->event(e);
    } else {
        return vqundoview->event(e);
    }
}

// Base class handler implementation
bool QUndoView_QBaseEvent(QUndoView* self, QEvent* e) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_Event_IsBase(true);
        return vqundoview->event(e);
    } else {
        return vqundoview->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_Event_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_ScrollContentsBy(QUndoView* self, int dx, int dy) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqundoview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void QUndoView_QBaseScrollContentsBy(QUndoView* self, int dx, int dy) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_ScrollContentsBy_IsBase(true);
        vqundoview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqundoview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnScrollContentsBy(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_ScrollContentsBy_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_ScrollContentsBy_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_DataChanged(QUndoView* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list /* of int */ roles) {
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data.ints);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->dataChanged(*topLeft, *bottomRight, roles_QList);
    } else {
        vqundoview->dataChanged(*topLeft, *bottomRight, roles_QList);
    }
}

// Base class handler implementation
void QUndoView_QBaseDataChanged(QUndoView* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list /* of int */ roles) {
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data.ints);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_DataChanged_IsBase(true);
        vqundoview->dataChanged(*topLeft, *bottomRight, roles_QList);
    } else {
        vqundoview->dataChanged(*topLeft, *bottomRight, roles_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnDataChanged(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_DataChanged_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_DataChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_RowsInserted(QUndoView* self, QModelIndex* parent, int start, int end) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        vqundoview->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Base class handler implementation
void QUndoView_QBaseRowsInserted(QUndoView* self, QModelIndex* parent, int start, int end) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_RowsInserted_IsBase(true);
        vqundoview->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        vqundoview->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnRowsInserted(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_RowsInserted_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_RowsInserted_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_RowsAboutToBeRemoved(QUndoView* self, QModelIndex* parent, int start, int end) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        vqundoview->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Base class handler implementation
void QUndoView_QBaseRowsAboutToBeRemoved(QUndoView* self, QModelIndex* parent, int start, int end) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_RowsAboutToBeRemoved_IsBase(true);
        vqundoview->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        vqundoview->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnRowsAboutToBeRemoved(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_RowsAboutToBeRemoved_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_RowsAboutToBeRemoved_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_MouseMoveEvent(QUndoView* self, QMouseEvent* e) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->mouseMoveEvent(e);
    } else {
        vqundoview->mouseMoveEvent(e);
    }
}

// Base class handler implementation
void QUndoView_QBaseMouseMoveEvent(QUndoView* self, QMouseEvent* e) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_MouseMoveEvent_IsBase(true);
        vqundoview->mouseMoveEvent(e);
    } else {
        vqundoview->mouseMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnMouseMoveEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_MouseMoveEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_MouseReleaseEvent(QUndoView* self, QMouseEvent* e) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->mouseReleaseEvent(e);
    } else {
        vqundoview->mouseReleaseEvent(e);
    }
}

// Base class handler implementation
void QUndoView_QBaseMouseReleaseEvent(QUndoView* self, QMouseEvent* e) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_MouseReleaseEvent_IsBase(true);
        vqundoview->mouseReleaseEvent(e);
    } else {
        vqundoview->mouseReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnMouseReleaseEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_WheelEvent(QUndoView* self, QWheelEvent* e) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->wheelEvent(e);
    } else {
        vqundoview->wheelEvent(e);
    }
}

// Base class handler implementation
void QUndoView_QBaseWheelEvent(QUndoView* self, QWheelEvent* e) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_WheelEvent_IsBase(true);
        vqundoview->wheelEvent(e);
    } else {
        vqundoview->wheelEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnWheelEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_WheelEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_TimerEvent(QUndoView* self, QTimerEvent* e) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->timerEvent(e);
    } else {
        vqundoview->timerEvent(e);
    }
}

// Base class handler implementation
void QUndoView_QBaseTimerEvent(QUndoView* self, QTimerEvent* e) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_TimerEvent_IsBase(true);
        vqundoview->timerEvent(e);
    } else {
        vqundoview->timerEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnTimerEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_TimerEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_ResizeEvent(QUndoView* self, QResizeEvent* e) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->resizeEvent(e);
    } else {
        vqundoview->resizeEvent(e);
    }
}

// Base class handler implementation
void QUndoView_QBaseResizeEvent(QUndoView* self, QResizeEvent* e) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_ResizeEvent_IsBase(true);
        vqundoview->resizeEvent(e);
    } else {
        vqundoview->resizeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnResizeEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_ResizeEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_DragMoveEvent(QUndoView* self, QDragMoveEvent* e) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->dragMoveEvent(e);
    } else {
        vqundoview->dragMoveEvent(e);
    }
}

// Base class handler implementation
void QUndoView_QBaseDragMoveEvent(QUndoView* self, QDragMoveEvent* e) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_DragMoveEvent_IsBase(true);
        vqundoview->dragMoveEvent(e);
    } else {
        vqundoview->dragMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnDragMoveEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_DragMoveEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_DragLeaveEvent(QUndoView* self, QDragLeaveEvent* e) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->dragLeaveEvent(e);
    } else {
        vqundoview->dragLeaveEvent(e);
    }
}

// Base class handler implementation
void QUndoView_QBaseDragLeaveEvent(QUndoView* self, QDragLeaveEvent* e) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_DragLeaveEvent_IsBase(true);
        vqundoview->dragLeaveEvent(e);
    } else {
        vqundoview->dragLeaveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnDragLeaveEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_DragLeaveEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_DropEvent(QUndoView* self, QDropEvent* e) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->dropEvent(e);
    } else {
        vqundoview->dropEvent(e);
    }
}

// Base class handler implementation
void QUndoView_QBaseDropEvent(QUndoView* self, QDropEvent* e) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_DropEvent_IsBase(true);
        vqundoview->dropEvent(e);
    } else {
        vqundoview->dropEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnDropEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_DropEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_StartDrag(QUndoView* self, int supportedActions) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else {
        vqundoview->startDrag(static_cast<Qt::DropActions>(supportedActions));
    }
}

// Base class handler implementation
void QUndoView_QBaseStartDrag(QUndoView* self, int supportedActions) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_StartDrag_IsBase(true);
        vqundoview->startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else {
        vqundoview->startDrag(static_cast<Qt::DropActions>(supportedActions));
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnStartDrag(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_StartDrag_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_StartDrag_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_InitViewItemOption(const QUndoView* self, QStyleOptionViewItem* option) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->initViewItemOption(option);
    } else {
        vqundoview->initViewItemOption(option);
    }
}

// Base class handler implementation
void QUndoView_QBaseInitViewItemOption(const QUndoView* self, QStyleOptionViewItem* option) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_InitViewItemOption_IsBase(true);
        vqundoview->initViewItemOption(option);
    } else {
        vqundoview->initViewItemOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnInitViewItemOption(const QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_InitViewItemOption_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_InitViewItemOption_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_PaintEvent(QUndoView* self, QPaintEvent* e) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->paintEvent(e);
    } else {
        vqundoview->paintEvent(e);
    }
}

// Base class handler implementation
void QUndoView_QBasePaintEvent(QUndoView* self, QPaintEvent* e) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_PaintEvent_IsBase(true);
        vqundoview->paintEvent(e);
    } else {
        vqundoview->paintEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnPaintEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_PaintEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QUndoView_HorizontalOffset(const QUndoView* self) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        return vqundoview->horizontalOffset();
    } else {
        return vqundoview->horizontalOffset();
    }
}

// Base class handler implementation
int QUndoView_QBaseHorizontalOffset(const QUndoView* self) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_HorizontalOffset_IsBase(true);
        return vqundoview->horizontalOffset();
    } else {
        return vqundoview->horizontalOffset();
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnHorizontalOffset(const QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_HorizontalOffset_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_HorizontalOffset_Callback>(slot));
    }
}

// Derived class handler implementation
int QUndoView_VerticalOffset(const QUndoView* self) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        return vqundoview->verticalOffset();
    } else {
        return vqundoview->verticalOffset();
    }
}

// Base class handler implementation
int QUndoView_QBaseVerticalOffset(const QUndoView* self) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_VerticalOffset_IsBase(true);
        return vqundoview->verticalOffset();
    } else {
        return vqundoview->verticalOffset();
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnVerticalOffset(const QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_VerticalOffset_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_VerticalOffset_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QUndoView_MoveCursor(QUndoView* self, int cursorAction, int modifiers) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        return new QModelIndex(vqundoview->moveCursor(static_cast<VirtualQUndoView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* QUndoView_QBaseMoveCursor(QUndoView* self, int cursorAction, int modifiers) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_MoveCursor_IsBase(true);
        return new QModelIndex(vqundoview->moveCursor(static_cast<VirtualQUndoView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnMoveCursor(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_MoveCursor_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_MoveCursor_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_SetSelection(QUndoView* self, QRect* rect, int command) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        vqundoview->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

// Base class handler implementation
void QUndoView_QBaseSetSelection(QUndoView* self, QRect* rect, int command) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_SetSelection_IsBase(true);
        vqundoview->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        vqundoview->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnSetSelection(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_SetSelection_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_SetSelection_Callback>(slot));
    }
}

// Derived class handler implementation
QRegion* QUndoView_VisualRegionForSelection(const QUndoView* self, QItemSelection* selection) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        return new QRegion(vqundoview->visualRegionForSelection(*selection));
    }
    return {};
}

// Base class handler implementation
QRegion* QUndoView_QBaseVisualRegionForSelection(const QUndoView* self, QItemSelection* selection) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_VisualRegionForSelection_IsBase(true);
        return new QRegion(vqundoview->visualRegionForSelection(*selection));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnVisualRegionForSelection(const QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_VisualRegionForSelection_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_VisualRegionForSelection_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QUndoView_SelectedIndexes(const QUndoView* self) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        QModelIndexList _ret = vqundoview->selectedIndexes();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data.ptr = static_cast<void*>(_arr);
        return _out;
    } else {
        QModelIndexList _ret = vqundoview->selectedIndexes();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data.ptr = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ QUndoView_QBaseSelectedIndexes(const QUndoView* self) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_SelectedIndexes_IsBase(true);
        QModelIndexList _ret = vqundoview->selectedIndexes();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data.ptr = static_cast<void*>(_arr);
        return _out;
    } else {
        QModelIndexList _ret = vqundoview->selectedIndexes();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data.ptr = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnSelectedIndexes(const QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_SelectedIndexes_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_SelectedIndexes_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_UpdateGeometries(QUndoView* self) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->updateGeometries();
    } else {
        vqundoview->updateGeometries();
    }
}

// Base class handler implementation
void QUndoView_QBaseUpdateGeometries(QUndoView* self) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_UpdateGeometries_IsBase(true);
        vqundoview->updateGeometries();
    } else {
        vqundoview->updateGeometries();
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnUpdateGeometries(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_UpdateGeometries_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_UpdateGeometries_Callback>(slot));
    }
}

// Derived class handler implementation
bool QUndoView_IsIndexHidden(const QUndoView* self, QModelIndex* index) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        return vqundoview->isIndexHidden(*index);
    } else {
        return vqundoview->isIndexHidden(*index);
    }
}

// Base class handler implementation
bool QUndoView_QBaseIsIndexHidden(const QUndoView* self, QModelIndex* index) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_IsIndexHidden_IsBase(true);
        return vqundoview->isIndexHidden(*index);
    } else {
        return vqundoview->isIndexHidden(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnIsIndexHidden(const QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_IsIndexHidden_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_IsIndexHidden_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_SelectionChanged(QUndoView* self, QItemSelection* selected, QItemSelection* deselected) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->selectionChanged(*selected, *deselected);
    } else {
        vqundoview->selectionChanged(*selected, *deselected);
    }
}

// Base class handler implementation
void QUndoView_QBaseSelectionChanged(QUndoView* self, QItemSelection* selected, QItemSelection* deselected) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_SelectionChanged_IsBase(true);
        vqundoview->selectionChanged(*selected, *deselected);
    } else {
        vqundoview->selectionChanged(*selected, *deselected);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnSelectionChanged(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_SelectionChanged_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_SelectionChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_CurrentChanged(QUndoView* self, QModelIndex* current, QModelIndex* previous) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->currentChanged(*current, *previous);
    } else {
        vqundoview->currentChanged(*current, *previous);
    }
}

// Base class handler implementation
void QUndoView_QBaseCurrentChanged(QUndoView* self, QModelIndex* current, QModelIndex* previous) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_CurrentChanged_IsBase(true);
        vqundoview->currentChanged(*current, *previous);
    } else {
        vqundoview->currentChanged(*current, *previous);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnCurrentChanged(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_CurrentChanged_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_CurrentChanged_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QUndoView_ViewportSizeHint(const QUndoView* self) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        return new QSize(vqundoview->viewportSizeHint());
    }
    return {};
}

// Base class handler implementation
QSize* QUndoView_QBaseViewportSizeHint(const QUndoView* self) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_ViewportSizeHint_IsBase(true);
        return new QSize(vqundoview->viewportSizeHint());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnViewportSizeHint(const QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_ViewportSizeHint_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_ViewportSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_SetModel(QUndoView* self, QAbstractItemModel* model) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setModel(model);
    } else {
        vqundoview->setModel(model);
    }
}

// Base class handler implementation
void QUndoView_QBaseSetModel(QUndoView* self, QAbstractItemModel* model) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_SetModel_IsBase(true);
        vqundoview->setModel(model);
    } else {
        vqundoview->setModel(model);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnSetModel(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_SetModel_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_SetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_SetSelectionModel(QUndoView* self, QItemSelectionModel* selectionModel) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setSelectionModel(selectionModel);
    } else {
        vqundoview->setSelectionModel(selectionModel);
    }
}

// Base class handler implementation
void QUndoView_QBaseSetSelectionModel(QUndoView* self, QItemSelectionModel* selectionModel) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_SetSelectionModel_IsBase(true);
        vqundoview->setSelectionModel(selectionModel);
    } else {
        vqundoview->setSelectionModel(selectionModel);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnSetSelectionModel(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_SetSelectionModel_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_SetSelectionModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_KeyboardSearch(QUndoView* self, libqt_string search) {
    QString search_QString = QString::fromUtf8(search.data, search.len);
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->keyboardSearch(search_QString);
    } else {
        vqundoview->keyboardSearch(search_QString);
    }
}

// Base class handler implementation
void QUndoView_QBaseKeyboardSearch(QUndoView* self, libqt_string search) {
    QString search_QString = QString::fromUtf8(search.data, search.len);
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_KeyboardSearch_IsBase(true);
        vqundoview->keyboardSearch(search_QString);
    } else {
        vqundoview->keyboardSearch(search_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnKeyboardSearch(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_KeyboardSearch_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_KeyboardSearch_Callback>(slot));
    }
}

// Derived class handler implementation
int QUndoView_SizeHintForRow(const QUndoView* self, int row) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        return vqundoview->sizeHintForRow(static_cast<int>(row));
    } else {
        return vqundoview->sizeHintForRow(static_cast<int>(row));
    }
}

// Base class handler implementation
int QUndoView_QBaseSizeHintForRow(const QUndoView* self, int row) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_SizeHintForRow_IsBase(true);
        return vqundoview->sizeHintForRow(static_cast<int>(row));
    } else {
        return vqundoview->sizeHintForRow(static_cast<int>(row));
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnSizeHintForRow(const QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_SizeHintForRow_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_SizeHintForRow_Callback>(slot));
    }
}

// Derived class handler implementation
int QUndoView_SizeHintForColumn(const QUndoView* self, int column) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        return vqundoview->sizeHintForColumn(static_cast<int>(column));
    } else {
        return vqundoview->sizeHintForColumn(static_cast<int>(column));
    }
}

// Base class handler implementation
int QUndoView_QBaseSizeHintForColumn(const QUndoView* self, int column) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_SizeHintForColumn_IsBase(true);
        return vqundoview->sizeHintForColumn(static_cast<int>(column));
    } else {
        return vqundoview->sizeHintForColumn(static_cast<int>(column));
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnSizeHintForColumn(const QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_SizeHintForColumn_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_SizeHintForColumn_Callback>(slot));
    }
}

// Derived class handler implementation
QAbstractItemDelegate* QUndoView_ItemDelegateForIndex(const QUndoView* self, QModelIndex* index) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        return vqundoview->itemDelegateForIndex(*index);
    } else {
        return vqundoview->itemDelegateForIndex(*index);
    }
}

// Base class handler implementation
QAbstractItemDelegate* QUndoView_QBaseItemDelegateForIndex(const QUndoView* self, QModelIndex* index) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_ItemDelegateForIndex_IsBase(true);
        return vqundoview->itemDelegateForIndex(*index);
    } else {
        return vqundoview->itemDelegateForIndex(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnItemDelegateForIndex(const QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_ItemDelegateForIndex_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_ItemDelegateForIndex_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QUndoView_InputMethodQuery(const QUndoView* self, int query) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        return new QVariant(vqundoview->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

// Base class handler implementation
QVariant* QUndoView_QBaseInputMethodQuery(const QUndoView* self, int query) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_InputMethodQuery_IsBase(true);
        return new QVariant(vqundoview->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnInputMethodQuery(const QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_InputMethodQuery_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_SelectAll(QUndoView* self) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->selectAll();
    } else {
        vqundoview->selectAll();
    }
}

// Base class handler implementation
void QUndoView_QBaseSelectAll(QUndoView* self) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_SelectAll_IsBase(true);
        vqundoview->selectAll();
    } else {
        vqundoview->selectAll();
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnSelectAll(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_SelectAll_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_SelectAll_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_UpdateEditorData(QUndoView* self) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->updateEditorData();
    } else {
        vqundoview->updateEditorData();
    }
}

// Base class handler implementation
void QUndoView_QBaseUpdateEditorData(QUndoView* self) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_UpdateEditorData_IsBase(true);
        vqundoview->updateEditorData();
    } else {
        vqundoview->updateEditorData();
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnUpdateEditorData(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_UpdateEditorData_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_UpdateEditorData_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_UpdateEditorGeometries(QUndoView* self) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->updateEditorGeometries();
    } else {
        vqundoview->updateEditorGeometries();
    }
}

// Base class handler implementation
void QUndoView_QBaseUpdateEditorGeometries(QUndoView* self) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_UpdateEditorGeometries_IsBase(true);
        vqundoview->updateEditorGeometries();
    } else {
        vqundoview->updateEditorGeometries();
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnUpdateEditorGeometries(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_UpdateEditorGeometries_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_UpdateEditorGeometries_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_VerticalScrollbarAction(QUndoView* self, int action) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->verticalScrollbarAction(static_cast<int>(action));
    } else {
        vqundoview->verticalScrollbarAction(static_cast<int>(action));
    }
}

// Base class handler implementation
void QUndoView_QBaseVerticalScrollbarAction(QUndoView* self, int action) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_VerticalScrollbarAction_IsBase(true);
        vqundoview->verticalScrollbarAction(static_cast<int>(action));
    } else {
        vqundoview->verticalScrollbarAction(static_cast<int>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnVerticalScrollbarAction(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_VerticalScrollbarAction_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_VerticalScrollbarAction_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_HorizontalScrollbarAction(QUndoView* self, int action) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->horizontalScrollbarAction(static_cast<int>(action));
    } else {
        vqundoview->horizontalScrollbarAction(static_cast<int>(action));
    }
}

// Base class handler implementation
void QUndoView_QBaseHorizontalScrollbarAction(QUndoView* self, int action) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_HorizontalScrollbarAction_IsBase(true);
        vqundoview->horizontalScrollbarAction(static_cast<int>(action));
    } else {
        vqundoview->horizontalScrollbarAction(static_cast<int>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnHorizontalScrollbarAction(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_HorizontalScrollbarAction_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_HorizontalScrollbarAction_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_VerticalScrollbarValueChanged(QUndoView* self, int value) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->verticalScrollbarValueChanged(static_cast<int>(value));
    } else {
        vqundoview->verticalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Base class handler implementation
void QUndoView_QBaseVerticalScrollbarValueChanged(QUndoView* self, int value) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_VerticalScrollbarValueChanged_IsBase(true);
        vqundoview->verticalScrollbarValueChanged(static_cast<int>(value));
    } else {
        vqundoview->verticalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnVerticalScrollbarValueChanged(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_VerticalScrollbarValueChanged_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_VerticalScrollbarValueChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_HorizontalScrollbarValueChanged(QUndoView* self, int value) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->horizontalScrollbarValueChanged(static_cast<int>(value));
    } else {
        vqundoview->horizontalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Base class handler implementation
void QUndoView_QBaseHorizontalScrollbarValueChanged(QUndoView* self, int value) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_HorizontalScrollbarValueChanged_IsBase(true);
        vqundoview->horizontalScrollbarValueChanged(static_cast<int>(value));
    } else {
        vqundoview->horizontalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnHorizontalScrollbarValueChanged(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_HorizontalScrollbarValueChanged_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_HorizontalScrollbarValueChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_CloseEditor(QUndoView* self, QWidget* editor, int hint) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else {
        vqundoview->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    }
}

// Base class handler implementation
void QUndoView_QBaseCloseEditor(QUndoView* self, QWidget* editor, int hint) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_CloseEditor_IsBase(true);
        vqundoview->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else {
        vqundoview->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnCloseEditor(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_CloseEditor_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_CloseEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_CommitData(QUndoView* self, QWidget* editor) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->commitData(editor);
    } else {
        vqundoview->commitData(editor);
    }
}

// Base class handler implementation
void QUndoView_QBaseCommitData(QUndoView* self, QWidget* editor) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_CommitData_IsBase(true);
        vqundoview->commitData(editor);
    } else {
        vqundoview->commitData(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnCommitData(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_CommitData_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_CommitData_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_EditorDestroyed(QUndoView* self, QObject* editor) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->editorDestroyed(editor);
    } else {
        vqundoview->editorDestroyed(editor);
    }
}

// Base class handler implementation
void QUndoView_QBaseEditorDestroyed(QUndoView* self, QObject* editor) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_EditorDestroyed_IsBase(true);
        vqundoview->editorDestroyed(editor);
    } else {
        vqundoview->editorDestroyed(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnEditorDestroyed(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_EditorDestroyed_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_EditorDestroyed_Callback>(slot));
    }
}

// Derived class handler implementation
bool QUndoView_Edit2(QUndoView* self, QModelIndex* index, int trigger, QEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        return vqundoview->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else {
        return vqundoview->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    }
}

// Base class handler implementation
bool QUndoView_QBaseEdit2(QUndoView* self, QModelIndex* index, int trigger, QEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_Edit2_IsBase(true);
        return vqundoview->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else {
        return vqundoview->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnEdit2(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_Edit2_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_Edit2_Callback>(slot));
    }
}

// Derived class handler implementation
int QUndoView_SelectionCommand(const QUndoView* self, QModelIndex* index, QEvent* event) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        return static_cast<int>(vqundoview->selectionCommand(*index, event));
    } else {
        return static_cast<int>(vqundoview->selectionCommand(*index, event));
    }
}

// Base class handler implementation
int QUndoView_QBaseSelectionCommand(const QUndoView* self, QModelIndex* index, QEvent* event) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_SelectionCommand_IsBase(true);
        return static_cast<int>(vqundoview->selectionCommand(*index, event));
    } else {
        return static_cast<int>(vqundoview->selectionCommand(*index, event));
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnSelectionCommand(const QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_SelectionCommand_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_SelectionCommand_Callback>(slot));
    }
}

// Derived class handler implementation
bool QUndoView_FocusNextPrevChild(QUndoView* self, bool next) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        return vqundoview->focusNextPrevChild(next);
    } else {
        return vqundoview->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QUndoView_QBaseFocusNextPrevChild(QUndoView* self, bool next) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_FocusNextPrevChild_IsBase(true);
        return vqundoview->focusNextPrevChild(next);
    } else {
        return vqundoview->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnFocusNextPrevChild(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QUndoView_ViewportEvent(QUndoView* self, QEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        return vqundoview->viewportEvent(event);
    } else {
        return vqundoview->viewportEvent(event);
    }
}

// Base class handler implementation
bool QUndoView_QBaseViewportEvent(QUndoView* self, QEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_ViewportEvent_IsBase(true);
        return vqundoview->viewportEvent(event);
    } else {
        return vqundoview->viewportEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnViewportEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_ViewportEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_ViewportEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_MousePressEvent(QUndoView* self, QMouseEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->mousePressEvent(event);
    } else {
        vqundoview->mousePressEvent(event);
    }
}

// Base class handler implementation
void QUndoView_QBaseMousePressEvent(QUndoView* self, QMouseEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_MousePressEvent_IsBase(true);
        vqundoview->mousePressEvent(event);
    } else {
        vqundoview->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnMousePressEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_MousePressEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_MouseDoubleClickEvent(QUndoView* self, QMouseEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->mouseDoubleClickEvent(event);
    } else {
        vqundoview->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QUndoView_QBaseMouseDoubleClickEvent(QUndoView* self, QMouseEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_MouseDoubleClickEvent_IsBase(true);
        vqundoview->mouseDoubleClickEvent(event);
    } else {
        vqundoview->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnMouseDoubleClickEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_DragEnterEvent(QUndoView* self, QDragEnterEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->dragEnterEvent(event);
    } else {
        vqundoview->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QUndoView_QBaseDragEnterEvent(QUndoView* self, QDragEnterEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_DragEnterEvent_IsBase(true);
        vqundoview->dragEnterEvent(event);
    } else {
        vqundoview->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnDragEnterEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_DragEnterEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_FocusInEvent(QUndoView* self, QFocusEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->focusInEvent(event);
    } else {
        vqundoview->focusInEvent(event);
    }
}

// Base class handler implementation
void QUndoView_QBaseFocusInEvent(QUndoView* self, QFocusEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_FocusInEvent_IsBase(true);
        vqundoview->focusInEvent(event);
    } else {
        vqundoview->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnFocusInEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_FocusInEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_FocusOutEvent(QUndoView* self, QFocusEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->focusOutEvent(event);
    } else {
        vqundoview->focusOutEvent(event);
    }
}

// Base class handler implementation
void QUndoView_QBaseFocusOutEvent(QUndoView* self, QFocusEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_FocusOutEvent_IsBase(true);
        vqundoview->focusOutEvent(event);
    } else {
        vqundoview->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnFocusOutEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_FocusOutEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_KeyPressEvent(QUndoView* self, QKeyEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->keyPressEvent(event);
    } else {
        vqundoview->keyPressEvent(event);
    }
}

// Base class handler implementation
void QUndoView_QBaseKeyPressEvent(QUndoView* self, QKeyEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_KeyPressEvent_IsBase(true);
        vqundoview->keyPressEvent(event);
    } else {
        vqundoview->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnKeyPressEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_KeyPressEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_InputMethodEvent(QUndoView* self, QInputMethodEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->inputMethodEvent(event);
    } else {
        vqundoview->inputMethodEvent(event);
    }
}

// Base class handler implementation
void QUndoView_QBaseInputMethodEvent(QUndoView* self, QInputMethodEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_InputMethodEvent_IsBase(true);
        vqundoview->inputMethodEvent(event);
    } else {
        vqundoview->inputMethodEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnInputMethodEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_InputMethodEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QUndoView_EventFilter(QUndoView* self, QObject* object, QEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        return vqundoview->eventFilter(object, event);
    } else {
        return vqundoview->eventFilter(object, event);
    }
}

// Base class handler implementation
bool QUndoView_QBaseEventFilter(QUndoView* self, QObject* object, QEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_EventFilter_IsBase(true);
        return vqundoview->eventFilter(object, event);
    } else {
        return vqundoview->eventFilter(object, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnEventFilter(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_EventFilter_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QUndoView_MinimumSizeHint(const QUndoView* self) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        return new QSize(vqundoview->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QUndoView_QBaseMinimumSizeHint(const QUndoView* self) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_MinimumSizeHint_IsBase(true);
        return new QSize(vqundoview->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnMinimumSizeHint(const QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_MinimumSizeHint_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QUndoView_SizeHint(const QUndoView* self) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        return new QSize(vqundoview->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QUndoView_QBaseSizeHint(const QUndoView* self) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_SizeHint_IsBase(true);
        return new QSize(vqundoview->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnSizeHint(const QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_SizeHint_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_SetupViewport(QUndoView* self, QWidget* viewport) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setupViewport(viewport);
    } else {
        vqundoview->setupViewport(viewport);
    }
}

// Base class handler implementation
void QUndoView_QBaseSetupViewport(QUndoView* self, QWidget* viewport) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_SetupViewport_IsBase(true);
        vqundoview->setupViewport(viewport);
    } else {
        vqundoview->setupViewport(viewport);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnSetupViewport(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_SetupViewport_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_SetupViewport_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_ContextMenuEvent(QUndoView* self, QContextMenuEvent* param1) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->contextMenuEvent(param1);
    } else {
        vqundoview->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void QUndoView_QBaseContextMenuEvent(QUndoView* self, QContextMenuEvent* param1) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_ContextMenuEvent_IsBase(true);
        vqundoview->contextMenuEvent(param1);
    } else {
        vqundoview->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnContextMenuEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_ContextMenuEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_ChangeEvent(QUndoView* self, QEvent* param1) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->changeEvent(param1);
    } else {
        vqundoview->changeEvent(param1);
    }
}

// Base class handler implementation
void QUndoView_QBaseChangeEvent(QUndoView* self, QEvent* param1) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_ChangeEvent_IsBase(true);
        vqundoview->changeEvent(param1);
    } else {
        vqundoview->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnChangeEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_ChangeEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_InitStyleOption(const QUndoView* self, QStyleOptionFrame* option) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->initStyleOption(option);
    } else {
        vqundoview->initStyleOption(option);
    }
}

// Base class handler implementation
void QUndoView_QBaseInitStyleOption(const QUndoView* self, QStyleOptionFrame* option) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_InitStyleOption_IsBase(true);
        vqundoview->initStyleOption(option);
    } else {
        vqundoview->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnInitStyleOption(const QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_InitStyleOption_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QUndoView_DevType(const QUndoView* self) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        return vqundoview->devType();
    } else {
        return vqundoview->devType();
    }
}

// Base class handler implementation
int QUndoView_QBaseDevType(const QUndoView* self) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_DevType_IsBase(true);
        return vqundoview->devType();
    } else {
        return vqundoview->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnDevType(const QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_DevType_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_SetVisible(QUndoView* self, bool visible) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setVisible(visible);
    } else {
        vqundoview->setVisible(visible);
    }
}

// Base class handler implementation
void QUndoView_QBaseSetVisible(QUndoView* self, bool visible) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_SetVisible_IsBase(true);
        vqundoview->setVisible(visible);
    } else {
        vqundoview->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnSetVisible(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_SetVisible_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QUndoView_HeightForWidth(const QUndoView* self, int param1) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        return vqundoview->heightForWidth(static_cast<int>(param1));
    } else {
        return vqundoview->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QUndoView_QBaseHeightForWidth(const QUndoView* self, int param1) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_HeightForWidth_IsBase(true);
        return vqundoview->heightForWidth(static_cast<int>(param1));
    } else {
        return vqundoview->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnHeightForWidth(const QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_HeightForWidth_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QUndoView_HasHeightForWidth(const QUndoView* self) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        return vqundoview->hasHeightForWidth();
    } else {
        return vqundoview->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QUndoView_QBaseHasHeightForWidth(const QUndoView* self) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_HasHeightForWidth_IsBase(true);
        return vqundoview->hasHeightForWidth();
    } else {
        return vqundoview->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnHasHeightForWidth(const QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_HasHeightForWidth_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QUndoView_PaintEngine(const QUndoView* self) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        return vqundoview->paintEngine();
    } else {
        return vqundoview->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QUndoView_QBasePaintEngine(const QUndoView* self) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_PaintEngine_IsBase(true);
        return vqundoview->paintEngine();
    } else {
        return vqundoview->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnPaintEngine(const QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_PaintEngine_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_KeyReleaseEvent(QUndoView* self, QKeyEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->keyReleaseEvent(event);
    } else {
        vqundoview->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QUndoView_QBaseKeyReleaseEvent(QUndoView* self, QKeyEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_KeyReleaseEvent_IsBase(true);
        vqundoview->keyReleaseEvent(event);
    } else {
        vqundoview->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnKeyReleaseEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_EnterEvent(QUndoView* self, QEnterEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->enterEvent(event);
    } else {
        vqundoview->enterEvent(event);
    }
}

// Base class handler implementation
void QUndoView_QBaseEnterEvent(QUndoView* self, QEnterEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_EnterEvent_IsBase(true);
        vqundoview->enterEvent(event);
    } else {
        vqundoview->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnEnterEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_EnterEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_LeaveEvent(QUndoView* self, QEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->leaveEvent(event);
    } else {
        vqundoview->leaveEvent(event);
    }
}

// Base class handler implementation
void QUndoView_QBaseLeaveEvent(QUndoView* self, QEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_LeaveEvent_IsBase(true);
        vqundoview->leaveEvent(event);
    } else {
        vqundoview->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnLeaveEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_LeaveEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_MoveEvent(QUndoView* self, QMoveEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->moveEvent(event);
    } else {
        vqundoview->moveEvent(event);
    }
}

// Base class handler implementation
void QUndoView_QBaseMoveEvent(QUndoView* self, QMoveEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_MoveEvent_IsBase(true);
        vqundoview->moveEvent(event);
    } else {
        vqundoview->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnMoveEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_MoveEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_CloseEvent(QUndoView* self, QCloseEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->closeEvent(event);
    } else {
        vqundoview->closeEvent(event);
    }
}

// Base class handler implementation
void QUndoView_QBaseCloseEvent(QUndoView* self, QCloseEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_CloseEvent_IsBase(true);
        vqundoview->closeEvent(event);
    } else {
        vqundoview->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnCloseEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_CloseEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_TabletEvent(QUndoView* self, QTabletEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->tabletEvent(event);
    } else {
        vqundoview->tabletEvent(event);
    }
}

// Base class handler implementation
void QUndoView_QBaseTabletEvent(QUndoView* self, QTabletEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_TabletEvent_IsBase(true);
        vqundoview->tabletEvent(event);
    } else {
        vqundoview->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnTabletEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_TabletEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_ActionEvent(QUndoView* self, QActionEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->actionEvent(event);
    } else {
        vqundoview->actionEvent(event);
    }
}

// Base class handler implementation
void QUndoView_QBaseActionEvent(QUndoView* self, QActionEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_ActionEvent_IsBase(true);
        vqundoview->actionEvent(event);
    } else {
        vqundoview->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnActionEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_ActionEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_ShowEvent(QUndoView* self, QShowEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->showEvent(event);
    } else {
        vqundoview->showEvent(event);
    }
}

// Base class handler implementation
void QUndoView_QBaseShowEvent(QUndoView* self, QShowEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_ShowEvent_IsBase(true);
        vqundoview->showEvent(event);
    } else {
        vqundoview->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnShowEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_ShowEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_HideEvent(QUndoView* self, QHideEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->hideEvent(event);
    } else {
        vqundoview->hideEvent(event);
    }
}

// Base class handler implementation
void QUndoView_QBaseHideEvent(QUndoView* self, QHideEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_HideEvent_IsBase(true);
        vqundoview->hideEvent(event);
    } else {
        vqundoview->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnHideEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_HideEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QUndoView_NativeEvent(QUndoView* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        return vqundoview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqundoview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QUndoView_QBaseNativeEvent(QUndoView* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_NativeEvent_IsBase(true);
        return vqundoview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqundoview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnNativeEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_NativeEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QUndoView_Metric(const QUndoView* self, int param1) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        return vqundoview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqundoview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QUndoView_QBaseMetric(const QUndoView* self, int param1) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_Metric_IsBase(true);
        return vqundoview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqundoview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnMetric(const QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_Metric_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_InitPainter(const QUndoView* self, QPainter* painter) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->initPainter(painter);
    } else {
        vqundoview->initPainter(painter);
    }
}

// Base class handler implementation
void QUndoView_QBaseInitPainter(const QUndoView* self, QPainter* painter) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_InitPainter_IsBase(true);
        vqundoview->initPainter(painter);
    } else {
        vqundoview->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnInitPainter(const QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_InitPainter_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QUndoView_Redirected(const QUndoView* self, QPoint* offset) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        return vqundoview->redirected(offset);
    } else {
        return vqundoview->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QUndoView_QBaseRedirected(const QUndoView* self, QPoint* offset) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_Redirected_IsBase(true);
        return vqundoview->redirected(offset);
    } else {
        return vqundoview->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnRedirected(const QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_Redirected_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QUndoView_SharedPainter(const QUndoView* self) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        return vqundoview->sharedPainter();
    } else {
        return vqundoview->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QUndoView_QBaseSharedPainter(const QUndoView* self) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_SharedPainter_IsBase(true);
        return vqundoview->sharedPainter();
    } else {
        return vqundoview->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnSharedPainter(const QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_SharedPainter_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_ChildEvent(QUndoView* self, QChildEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->childEvent(event);
    } else {
        vqundoview->childEvent(event);
    }
}

// Base class handler implementation
void QUndoView_QBaseChildEvent(QUndoView* self, QChildEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_ChildEvent_IsBase(true);
        vqundoview->childEvent(event);
    } else {
        vqundoview->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnChildEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_ChildEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_CustomEvent(QUndoView* self, QEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->customEvent(event);
    } else {
        vqundoview->customEvent(event);
    }
}

// Base class handler implementation
void QUndoView_QBaseCustomEvent(QUndoView* self, QEvent* event) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_CustomEvent_IsBase(true);
        vqundoview->customEvent(event);
    } else {
        vqundoview->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnCustomEvent(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_CustomEvent_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_ConnectNotify(QUndoView* self, QMetaMethod* signal) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->connectNotify(*signal);
    } else {
        vqundoview->connectNotify(*signal);
    }
}

// Base class handler implementation
void QUndoView_QBaseConnectNotify(QUndoView* self, QMetaMethod* signal) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_ConnectNotify_IsBase(true);
        vqundoview->connectNotify(*signal);
    } else {
        vqundoview->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnConnectNotify(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_ConnectNotify_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_DisconnectNotify(QUndoView* self, QMetaMethod* signal) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->disconnectNotify(*signal);
    } else {
        vqundoview->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QUndoView_QBaseDisconnectNotify(QUndoView* self, QMetaMethod* signal) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_DisconnectNotify_IsBase(true);
        vqundoview->disconnectNotify(*signal);
    } else {
        vqundoview->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnDisconnectNotify(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_DisconnectNotify_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_ResizeContents(QUndoView* self, int width, int height) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->resizeContents(static_cast<int>(width), static_cast<int>(height));
    } else {
        vqundoview->resizeContents(static_cast<int>(width), static_cast<int>(height));
    }
}

// Base class handler implementation
void QUndoView_QBaseResizeContents(QUndoView* self, int width, int height) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_ResizeContents_IsBase(true);
        vqundoview->resizeContents(static_cast<int>(width), static_cast<int>(height));
    } else {
        vqundoview->resizeContents(static_cast<int>(width), static_cast<int>(height));
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnResizeContents(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_ResizeContents_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_ResizeContents_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QUndoView_ContentsSize(const QUndoView* self) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        return new QSize(vqundoview->contentsSize());
    }
    return {};
}

// Base class handler implementation
QSize* QUndoView_QBaseContentsSize(const QUndoView* self) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_ContentsSize_IsBase(true);
        return new QSize(vqundoview->contentsSize());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnContentsSize(const QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_ContentsSize_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_ContentsSize_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QUndoView_RectForIndex(const QUndoView* self, QModelIndex* index) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        return new QRect(vqundoview->rectForIndex(*index));
    }
    return {};
}

// Base class handler implementation
QRect* QUndoView_QBaseRectForIndex(const QUndoView* self, QModelIndex* index) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_RectForIndex_IsBase(true);
        return new QRect(vqundoview->rectForIndex(*index));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnRectForIndex(const QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_RectForIndex_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_RectForIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_SetPositionForIndex(QUndoView* self, QPoint* position, QModelIndex* index) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setPositionForIndex(*position, *index);
    } else {
        vqundoview->setPositionForIndex(*position, *index);
    }
}

// Base class handler implementation
void QUndoView_QBaseSetPositionForIndex(QUndoView* self, QPoint* position, QModelIndex* index) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_SetPositionForIndex_IsBase(true);
        vqundoview->setPositionForIndex(*position, *index);
    } else {
        vqundoview->setPositionForIndex(*position, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnSetPositionForIndex(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_SetPositionForIndex_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_SetPositionForIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QUndoView_State(const QUndoView* self) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        return static_cast<int>(vqundoview->state());
    } else {
        return static_cast<int>(vqundoview->state());
    }
}

// Base class handler implementation
int QUndoView_QBaseState(const QUndoView* self) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_State_IsBase(true);
        return static_cast<int>(vqundoview->state());
    } else {
        return static_cast<int>(vqundoview->state());
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnState(const QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_State_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_State_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_SetState(QUndoView* self, int state) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setState(static_cast<VirtualQUndoView::State>(state));
    } else {
        vqundoview->setState(static_cast<VirtualQUndoView::State>(state));
    }
}

// Base class handler implementation
void QUndoView_QBaseSetState(QUndoView* self, int state) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_SetState_IsBase(true);
        vqundoview->setState(static_cast<VirtualQUndoView::State>(state));
    } else {
        vqundoview->setState(static_cast<VirtualQUndoView::State>(state));
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnSetState(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_SetState_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_SetState_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_ScheduleDelayedItemsLayout(QUndoView* self) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->scheduleDelayedItemsLayout();
    } else {
        vqundoview->scheduleDelayedItemsLayout();
    }
}

// Base class handler implementation
void QUndoView_QBaseScheduleDelayedItemsLayout(QUndoView* self) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_ScheduleDelayedItemsLayout_IsBase(true);
        vqundoview->scheduleDelayedItemsLayout();
    } else {
        vqundoview->scheduleDelayedItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnScheduleDelayedItemsLayout(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_ScheduleDelayedItemsLayout_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_ScheduleDelayedItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_ExecuteDelayedItemsLayout(QUndoView* self) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->executeDelayedItemsLayout();
    } else {
        vqundoview->executeDelayedItemsLayout();
    }
}

// Base class handler implementation
void QUndoView_QBaseExecuteDelayedItemsLayout(QUndoView* self) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_ExecuteDelayedItemsLayout_IsBase(true);
        vqundoview->executeDelayedItemsLayout();
    } else {
        vqundoview->executeDelayedItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnExecuteDelayedItemsLayout(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_ExecuteDelayedItemsLayout_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_ExecuteDelayedItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_SetDirtyRegion(QUndoView* self, QRegion* region) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setDirtyRegion(*region);
    } else {
        vqundoview->setDirtyRegion(*region);
    }
}

// Base class handler implementation
void QUndoView_QBaseSetDirtyRegion(QUndoView* self, QRegion* region) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_SetDirtyRegion_IsBase(true);
        vqundoview->setDirtyRegion(*region);
    } else {
        vqundoview->setDirtyRegion(*region);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnSetDirtyRegion(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_SetDirtyRegion_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_SetDirtyRegion_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_ScrollDirtyRegion(QUndoView* self, int dx, int dy) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqundoview->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void QUndoView_QBaseScrollDirtyRegion(QUndoView* self, int dx, int dy) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_ScrollDirtyRegion_IsBase(true);
        vqundoview->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqundoview->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnScrollDirtyRegion(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_ScrollDirtyRegion_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_ScrollDirtyRegion_Callback>(slot));
    }
}

// Derived class handler implementation
QPoint* QUndoView_DirtyRegionOffset(const QUndoView* self) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        return new QPoint(vqundoview->dirtyRegionOffset());
    }
    return {};
}

// Base class handler implementation
QPoint* QUndoView_QBaseDirtyRegionOffset(const QUndoView* self) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_DirtyRegionOffset_IsBase(true);
        return new QPoint(vqundoview->dirtyRegionOffset());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnDirtyRegionOffset(const QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_DirtyRegionOffset_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_DirtyRegionOffset_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_StartAutoScroll(QUndoView* self) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->startAutoScroll();
    } else {
        vqundoview->startAutoScroll();
    }
}

// Base class handler implementation
void QUndoView_QBaseStartAutoScroll(QUndoView* self) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_StartAutoScroll_IsBase(true);
        vqundoview->startAutoScroll();
    } else {
        vqundoview->startAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnStartAutoScroll(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_StartAutoScroll_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_StartAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_StopAutoScroll(QUndoView* self) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->stopAutoScroll();
    } else {
        vqundoview->stopAutoScroll();
    }
}

// Base class handler implementation
void QUndoView_QBaseStopAutoScroll(QUndoView* self) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_StopAutoScroll_IsBase(true);
        vqundoview->stopAutoScroll();
    } else {
        vqundoview->stopAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnStopAutoScroll(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_StopAutoScroll_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_StopAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_DoAutoScroll(QUndoView* self) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->doAutoScroll();
    } else {
        vqundoview->doAutoScroll();
    }
}

// Base class handler implementation
void QUndoView_QBaseDoAutoScroll(QUndoView* self) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_DoAutoScroll_IsBase(true);
        vqundoview->doAutoScroll();
    } else {
        vqundoview->doAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnDoAutoScroll(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_DoAutoScroll_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_DoAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
int QUndoView_DropIndicatorPosition(const QUndoView* self) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        return static_cast<int>(vqundoview->dropIndicatorPosition());
    } else {
        return static_cast<int>(vqundoview->dropIndicatorPosition());
    }
}

// Base class handler implementation
int QUndoView_QBaseDropIndicatorPosition(const QUndoView* self) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_DropIndicatorPosition_IsBase(true);
        return static_cast<int>(vqundoview->dropIndicatorPosition());
    } else {
        return static_cast<int>(vqundoview->dropIndicatorPosition());
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnDropIndicatorPosition(const QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_DropIndicatorPosition_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_DropIndicatorPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_SetViewportMargins(QUndoView* self, int left, int top, int right, int bottom) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        vqundoview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Base class handler implementation
void QUndoView_QBaseSetViewportMargins(QUndoView* self, int left, int top, int right, int bottom) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_SetViewportMargins_IsBase(true);
        vqundoview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        vqundoview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnSetViewportMargins(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_SetViewportMargins_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_SetViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
QMargins* QUndoView_ViewportMargins(const QUndoView* self) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        return new QMargins(vqundoview->viewportMargins());
    }
    return {};
}

// Base class handler implementation
QMargins* QUndoView_QBaseViewportMargins(const QUndoView* self) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_ViewportMargins_IsBase(true);
        return new QMargins(vqundoview->viewportMargins());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnViewportMargins(const QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_ViewportMargins_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_ViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_DrawFrame(QUndoView* self, QPainter* param1) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->drawFrame(param1);
    } else {
        vqundoview->drawFrame(param1);
    }
}

// Base class handler implementation
void QUndoView_QBaseDrawFrame(QUndoView* self, QPainter* param1) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_DrawFrame_IsBase(true);
        vqundoview->drawFrame(param1);
    } else {
        vqundoview->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnDrawFrame(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_DrawFrame_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_UpdateMicroFocus(QUndoView* self) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->updateMicroFocus();
    } else {
        vqundoview->updateMicroFocus();
    }
}

// Base class handler implementation
void QUndoView_QBaseUpdateMicroFocus(QUndoView* self) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_UpdateMicroFocus_IsBase(true);
        vqundoview->updateMicroFocus();
    } else {
        vqundoview->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnUpdateMicroFocus(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_Create(QUndoView* self) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->create();
    } else {
        vqundoview->create();
    }
}

// Base class handler implementation
void QUndoView_QBaseCreate(QUndoView* self) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_Create_IsBase(true);
        vqundoview->create();
    } else {
        vqundoview->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnCreate(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_Create_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QUndoView_Destroy(QUndoView* self) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->destroy();
    } else {
        vqundoview->destroy();
    }
}

// Base class handler implementation
void QUndoView_QBaseDestroy(QUndoView* self) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_Destroy_IsBase(true);
        vqundoview->destroy();
    } else {
        vqundoview->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnDestroy(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_Destroy_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QUndoView_FocusNextChild(QUndoView* self) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        return vqundoview->focusNextChild();
    } else {
        return vqundoview->focusNextChild();
    }
}

// Base class handler implementation
bool QUndoView_QBaseFocusNextChild(QUndoView* self) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_FocusNextChild_IsBase(true);
        return vqundoview->focusNextChild();
    } else {
        return vqundoview->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnFocusNextChild(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_FocusNextChild_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QUndoView_FocusPreviousChild(QUndoView* self) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        return vqundoview->focusPreviousChild();
    } else {
        return vqundoview->focusPreviousChild();
    }
}

// Base class handler implementation
bool QUndoView_QBaseFocusPreviousChild(QUndoView* self) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_FocusPreviousChild_IsBase(true);
        return vqundoview->focusPreviousChild();
    } else {
        return vqundoview->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnFocusPreviousChild(QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = dynamic_cast<VirtualQUndoView*>(self)) {
        vqundoview->setQUndoView_FocusPreviousChild_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QUndoView_Sender(const QUndoView* self) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        return vqundoview->sender();
    } else {
        return vqundoview->sender();
    }
}

// Base class handler implementation
QObject* QUndoView_QBaseSender(const QUndoView* self) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_Sender_IsBase(true);
        return vqundoview->sender();
    } else {
        return vqundoview->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnSender(const QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_Sender_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QUndoView_SenderSignalIndex(const QUndoView* self) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        return vqundoview->senderSignalIndex();
    } else {
        return vqundoview->senderSignalIndex();
    }
}

// Base class handler implementation
int QUndoView_QBaseSenderSignalIndex(const QUndoView* self) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_SenderSignalIndex_IsBase(true);
        return vqundoview->senderSignalIndex();
    } else {
        return vqundoview->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnSenderSignalIndex(const QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_SenderSignalIndex_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QUndoView_Receivers(const QUndoView* self, const char* signal) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        return vqundoview->receivers(signal);
    } else {
        return vqundoview->receivers(signal);
    }
}

// Base class handler implementation
int QUndoView_QBaseReceivers(const QUndoView* self, const char* signal) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_Receivers_IsBase(true);
        return vqundoview->receivers(signal);
    } else {
        return vqundoview->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnReceivers(const QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_Receivers_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QUndoView_IsSignalConnected(const QUndoView* self, QMetaMethod* signal) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        return vqundoview->isSignalConnected(*signal);
    } else {
        return vqundoview->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QUndoView_QBaseIsSignalConnected(const QUndoView* self, QMetaMethod* signal) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_IsSignalConnected_IsBase(true);
        return vqundoview->isSignalConnected(*signal);
    } else {
        return vqundoview->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QUndoView_OnIsSignalConnected(const QUndoView* self, intptr_t slot) {
    if (auto* vqundoview = const_cast<VirtualQUndoView*>(dynamic_cast<const VirtualQUndoView*>(self))) {
        vqundoview->setQUndoView_IsSignalConnected_Callback(reinterpret_cast<VirtualQUndoView::QUndoView_IsSignalConnected_Callback>(slot));
    }
}

void QUndoView_Delete(QUndoView* self) {
    delete self;
}
