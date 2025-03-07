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
#include <QHeaderView>
#include <QHideEvent>
#include <QIcon>
#include <QInputMethodEvent>
#include <QItemSelection>
#include <QItemSelectionModel>
#include <QKeyEvent>
#include <QKeySequence>
#include <QLayout>
#include <QList>
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
#include <QTreeView>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <QWindow>
#include <qtreeview.h>
#include "libqtreeview.hpp"
#include "libqtreeview.hxx"

QTreeView* QTreeView_new(QWidget* parent) {
    return new VirtualQTreeView(parent);
}

QTreeView* QTreeView_new2() {
    return new VirtualQTreeView();
}

QMetaObject* QTreeView_MetaObject(const QTreeView* self) {
    return (QMetaObject*)self->metaObject();
}

void* QTreeView_Metacast(QTreeView* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QTreeView_Metacall(QTreeView* self, int param1, int param2, void** param3) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTreeView_OnMetacall(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_Metacall_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QTreeView_QBaseMetacall(QTreeView* self, int param1, int param2, void** param3) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_Metacall_IsBase(true);
        return vqtreeview->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QTreeView_Tr(const char* s) {
    QString _ret = QTreeView::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QHeaderView* QTreeView_Header(const QTreeView* self) {
    return self->header();
}

void QTreeView_SetHeader(QTreeView* self, QHeaderView* header) {
    self->setHeader(header);
}

int QTreeView_AutoExpandDelay(const QTreeView* self) {
    return self->autoExpandDelay();
}

void QTreeView_SetAutoExpandDelay(QTreeView* self, int delay) {
    self->setAutoExpandDelay(static_cast<int>(delay));
}

int QTreeView_Indentation(const QTreeView* self) {
    return self->indentation();
}

void QTreeView_SetIndentation(QTreeView* self, int i) {
    self->setIndentation(static_cast<int>(i));
}

void QTreeView_ResetIndentation(QTreeView* self) {
    self->resetIndentation();
}

bool QTreeView_RootIsDecorated(const QTreeView* self) {
    return self->rootIsDecorated();
}

void QTreeView_SetRootIsDecorated(QTreeView* self, bool show) {
    self->setRootIsDecorated(show);
}

bool QTreeView_UniformRowHeights(const QTreeView* self) {
    return self->uniformRowHeights();
}

void QTreeView_SetUniformRowHeights(QTreeView* self, bool uniform) {
    self->setUniformRowHeights(uniform);
}

bool QTreeView_ItemsExpandable(const QTreeView* self) {
    return self->itemsExpandable();
}

void QTreeView_SetItemsExpandable(QTreeView* self, bool enable) {
    self->setItemsExpandable(enable);
}

bool QTreeView_ExpandsOnDoubleClick(const QTreeView* self) {
    return self->expandsOnDoubleClick();
}

void QTreeView_SetExpandsOnDoubleClick(QTreeView* self, bool enable) {
    self->setExpandsOnDoubleClick(enable);
}

int QTreeView_ColumnViewportPosition(const QTreeView* self, int column) {
    return self->columnViewportPosition(static_cast<int>(column));
}

int QTreeView_ColumnWidth(const QTreeView* self, int column) {
    return self->columnWidth(static_cast<int>(column));
}

void QTreeView_SetColumnWidth(QTreeView* self, int column, int width) {
    self->setColumnWidth(static_cast<int>(column), static_cast<int>(width));
}

int QTreeView_ColumnAt(const QTreeView* self, int x) {
    return self->columnAt(static_cast<int>(x));
}

bool QTreeView_IsColumnHidden(const QTreeView* self, int column) {
    return self->isColumnHidden(static_cast<int>(column));
}

void QTreeView_SetColumnHidden(QTreeView* self, int column, bool hide) {
    self->setColumnHidden(static_cast<int>(column), hide);
}

bool QTreeView_IsHeaderHidden(const QTreeView* self) {
    return self->isHeaderHidden();
}

void QTreeView_SetHeaderHidden(QTreeView* self, bool hide) {
    self->setHeaderHidden(hide);
}

bool QTreeView_IsRowHidden(const QTreeView* self, int row, QModelIndex* parent) {
    return self->isRowHidden(static_cast<int>(row), *parent);
}

void QTreeView_SetRowHidden(QTreeView* self, int row, QModelIndex* parent, bool hide) {
    self->setRowHidden(static_cast<int>(row), *parent, hide);
}

bool QTreeView_IsFirstColumnSpanned(const QTreeView* self, int row, QModelIndex* parent) {
    return self->isFirstColumnSpanned(static_cast<int>(row), *parent);
}

void QTreeView_SetFirstColumnSpanned(QTreeView* self, int row, QModelIndex* parent, bool span) {
    self->setFirstColumnSpanned(static_cast<int>(row), *parent, span);
}

bool QTreeView_IsExpanded(const QTreeView* self, QModelIndex* index) {
    return self->isExpanded(*index);
}

void QTreeView_SetExpanded(QTreeView* self, QModelIndex* index, bool expand) {
    self->setExpanded(*index, expand);
}

void QTreeView_SetSortingEnabled(QTreeView* self, bool enable) {
    self->setSortingEnabled(enable);
}

bool QTreeView_IsSortingEnabled(const QTreeView* self) {
    return self->isSortingEnabled();
}

void QTreeView_SetAnimated(QTreeView* self, bool enable) {
    self->setAnimated(enable);
}

bool QTreeView_IsAnimated(const QTreeView* self) {
    return self->isAnimated();
}

void QTreeView_SetAllColumnsShowFocus(QTreeView* self, bool enable) {
    self->setAllColumnsShowFocus(enable);
}

bool QTreeView_AllColumnsShowFocus(const QTreeView* self) {
    return self->allColumnsShowFocus();
}

void QTreeView_SetWordWrap(QTreeView* self, bool on) {
    self->setWordWrap(on);
}

bool QTreeView_WordWrap(const QTreeView* self) {
    return self->wordWrap();
}

void QTreeView_SetTreePosition(QTreeView* self, int logicalIndex) {
    self->setTreePosition(static_cast<int>(logicalIndex));
}

int QTreeView_TreePosition(const QTreeView* self) {
    return self->treePosition();
}

QModelIndex* QTreeView_IndexAbove(const QTreeView* self, QModelIndex* index) {
    return new QModelIndex(self->indexAbove(*index));
}

QModelIndex* QTreeView_IndexBelow(const QTreeView* self, QModelIndex* index) {
    return new QModelIndex(self->indexBelow(*index));
}

void QTreeView_Expanded(QTreeView* self, QModelIndex* index) {
    self->expanded(*index);
}

void QTreeView_Connect_Expanded(QTreeView* self, intptr_t slot) {
    void (*slotFunc)(QTreeView*, QModelIndex*) = reinterpret_cast<void (*)(QTreeView*, QModelIndex*)>(slot);
    QTreeView::connect(self, &QTreeView::expanded, [self, slotFunc](const QModelIndex& index) {
        const QModelIndex& index_ret = index;
        // Cast returned reference into pointer
        QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
        slotFunc(self, sigval1);
    });
}

void QTreeView_Collapsed(QTreeView* self, QModelIndex* index) {
    self->collapsed(*index);
}

void QTreeView_Connect_Collapsed(QTreeView* self, intptr_t slot) {
    void (*slotFunc)(QTreeView*, QModelIndex*) = reinterpret_cast<void (*)(QTreeView*, QModelIndex*)>(slot);
    QTreeView::connect(self, &QTreeView::collapsed, [self, slotFunc](const QModelIndex& index) {
        const QModelIndex& index_ret = index;
        // Cast returned reference into pointer
        QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
        slotFunc(self, sigval1);
    });
}

void QTreeView_HideColumn(QTreeView* self, int column) {
    self->hideColumn(static_cast<int>(column));
}

void QTreeView_ShowColumn(QTreeView* self, int column) {
    self->showColumn(static_cast<int>(column));
}

void QTreeView_Expand(QTreeView* self, QModelIndex* index) {
    self->expand(*index);
}

void QTreeView_Collapse(QTreeView* self, QModelIndex* index) {
    self->collapse(*index);
}

void QTreeView_ResizeColumnToContents(QTreeView* self, int column) {
    self->resizeColumnToContents(static_cast<int>(column));
}

void QTreeView_SortByColumn(QTreeView* self, int column, int order) {
    self->sortByColumn(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

void QTreeView_ExpandAll(QTreeView* self) {
    self->expandAll();
}

void QTreeView_ExpandRecursively(QTreeView* self, QModelIndex* index) {
    self->expandRecursively(*index);
}

void QTreeView_CollapseAll(QTreeView* self) {
    self->collapseAll();
}

void QTreeView_ExpandToDepth(QTreeView* self, int depth) {
    self->expandToDepth(static_cast<int>(depth));
}

libqt_string QTreeView_Tr2(const char* s, const char* c) {
    QString _ret = QTreeView::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QTreeView_Tr3(const char* s, const char* c, int n) {
    QString _ret = QTreeView::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QTreeView_ExpandRecursively2(QTreeView* self, QModelIndex* index, int depth) {
    self->expandRecursively(*index, static_cast<int>(depth));
}

// Derived class handler implementation
void QTreeView_SetModel(QTreeView* self, QAbstractItemModel* model) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setModel(model);
    } else {
        vqtreeview->setModel(model);
    }
}

// Base class handler implementation
void QTreeView_QBaseSetModel(QTreeView* self, QAbstractItemModel* model) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_SetModel_IsBase(true);
        vqtreeview->setModel(model);
    } else {
        vqtreeview->setModel(model);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSetModel(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_SetModel_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_SetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_SetRootIndex(QTreeView* self, QModelIndex* index) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setRootIndex(*index);
    } else {
        vqtreeview->setRootIndex(*index);
    }
}

// Base class handler implementation
void QTreeView_QBaseSetRootIndex(QTreeView* self, QModelIndex* index) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_SetRootIndex_IsBase(true);
        vqtreeview->setRootIndex(*index);
    } else {
        vqtreeview->setRootIndex(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSetRootIndex(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_SetRootIndex_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_SetRootIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_SetSelectionModel(QTreeView* self, QItemSelectionModel* selectionModel) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setSelectionModel(selectionModel);
    } else {
        vqtreeview->setSelectionModel(selectionModel);
    }
}

// Base class handler implementation
void QTreeView_QBaseSetSelectionModel(QTreeView* self, QItemSelectionModel* selectionModel) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_SetSelectionModel_IsBase(true);
        vqtreeview->setSelectionModel(selectionModel);
    } else {
        vqtreeview->setSelectionModel(selectionModel);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSetSelectionModel(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_SetSelectionModel_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_SetSelectionModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_KeyboardSearch(QTreeView* self, libqt_string search) {
    QString search_QString = QString::fromUtf8(search.data, search.len);
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->keyboardSearch(search_QString);
    } else {
        vqtreeview->keyboardSearch(search_QString);
    }
}

// Base class handler implementation
void QTreeView_QBaseKeyboardSearch(QTreeView* self, libqt_string search) {
    QString search_QString = QString::fromUtf8(search.data, search.len);
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_KeyboardSearch_IsBase(true);
        vqtreeview->keyboardSearch(search_QString);
    } else {
        vqtreeview->keyboardSearch(search_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnKeyboardSearch(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_KeyboardSearch_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_KeyboardSearch_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QTreeView_VisualRect(const QTreeView* self, QModelIndex* index) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        return new QRect(vqtreeview->visualRect(*index));
    } else {
        return new QRect(self->visualRect(*index));
    }
}

// Base class handler implementation
QRect* QTreeView_QBaseVisualRect(const QTreeView* self, QModelIndex* index) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_VisualRect_IsBase(true);
        return new QRect(vqtreeview->visualRect(*index));
    } else {
        return new QRect(self->visualRect(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnVisualRect(const QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_VisualRect_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_VisualRect_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_ScrollTo(QTreeView* self, QModelIndex* index, int hint) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    } else {
        vqtreeview->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    }
}

// Base class handler implementation
void QTreeView_QBaseScrollTo(QTreeView* self, QModelIndex* index, int hint) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_ScrollTo_IsBase(true);
        vqtreeview->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    } else {
        vqtreeview->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnScrollTo(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_ScrollTo_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_ScrollTo_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QTreeView_IndexAt(const QTreeView* self, QPoint* p) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        return new QModelIndex(vqtreeview->indexAt(*p));
    } else {
        return new QModelIndex(self->indexAt(*p));
    }
}

// Base class handler implementation
QModelIndex* QTreeView_QBaseIndexAt(const QTreeView* self, QPoint* p) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_IndexAt_IsBase(true);
        return new QModelIndex(vqtreeview->indexAt(*p));
    } else {
        return new QModelIndex(self->indexAt(*p));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnIndexAt(const QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_IndexAt_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_IndexAt_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_DoItemsLayout(QTreeView* self) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->doItemsLayout();
    } else {
        vqtreeview->doItemsLayout();
    }
}

// Base class handler implementation
void QTreeView_QBaseDoItemsLayout(QTreeView* self) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_DoItemsLayout_IsBase(true);
        vqtreeview->doItemsLayout();
    } else {
        vqtreeview->doItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnDoItemsLayout(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_DoItemsLayout_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_DoItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_Reset(QTreeView* self) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->reset();
    } else {
        vqtreeview->reset();
    }
}

// Base class handler implementation
void QTreeView_QBaseReset(QTreeView* self) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_Reset_IsBase(true);
        vqtreeview->reset();
    } else {
        vqtreeview->reset();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnReset(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_Reset_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_Reset_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_DataChanged(QTreeView* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list /* of int */ roles) {
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data.ints);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->dataChanged(*topLeft, *bottomRight, roles_QList);
    } else {
        vqtreeview->dataChanged(*topLeft, *bottomRight, roles_QList);
    }
}

// Base class handler implementation
void QTreeView_QBaseDataChanged(QTreeView* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list /* of int */ roles) {
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data.ints);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_DataChanged_IsBase(true);
        vqtreeview->dataChanged(*topLeft, *bottomRight, roles_QList);
    } else {
        vqtreeview->dataChanged(*topLeft, *bottomRight, roles_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnDataChanged(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_DataChanged_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_DataChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_SelectAll(QTreeView* self) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->selectAll();
    } else {
        vqtreeview->selectAll();
    }
}

// Base class handler implementation
void QTreeView_QBaseSelectAll(QTreeView* self) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_SelectAll_IsBase(true);
        vqtreeview->selectAll();
    } else {
        vqtreeview->selectAll();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSelectAll(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_SelectAll_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_SelectAll_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_VerticalScrollbarValueChanged(QTreeView* self, int value) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->verticalScrollbarValueChanged(static_cast<int>(value));
    } else {
        vqtreeview->verticalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Base class handler implementation
void QTreeView_QBaseVerticalScrollbarValueChanged(QTreeView* self, int value) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_VerticalScrollbarValueChanged_IsBase(true);
        vqtreeview->verticalScrollbarValueChanged(static_cast<int>(value));
    } else {
        vqtreeview->verticalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnVerticalScrollbarValueChanged(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_VerticalScrollbarValueChanged_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_VerticalScrollbarValueChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_ScrollContentsBy(QTreeView* self, int dx, int dy) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqtreeview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void QTreeView_QBaseScrollContentsBy(QTreeView* self, int dx, int dy) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_ScrollContentsBy_IsBase(true);
        vqtreeview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqtreeview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnScrollContentsBy(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_ScrollContentsBy_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_ScrollContentsBy_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_RowsInserted(QTreeView* self, QModelIndex* parent, int start, int end) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        vqtreeview->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Base class handler implementation
void QTreeView_QBaseRowsInserted(QTreeView* self, QModelIndex* parent, int start, int end) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_RowsInserted_IsBase(true);
        vqtreeview->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        vqtreeview->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnRowsInserted(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_RowsInserted_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_RowsInserted_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_RowsAboutToBeRemoved(QTreeView* self, QModelIndex* parent, int start, int end) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        vqtreeview->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Base class handler implementation
void QTreeView_QBaseRowsAboutToBeRemoved(QTreeView* self, QModelIndex* parent, int start, int end) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_RowsAboutToBeRemoved_IsBase(true);
        vqtreeview->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        vqtreeview->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnRowsAboutToBeRemoved(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_RowsAboutToBeRemoved_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_RowsAboutToBeRemoved_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QTreeView_MoveCursor(QTreeView* self, int cursorAction, int modifiers) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        return new QModelIndex(vqtreeview->moveCursor(static_cast<VirtualQTreeView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* QTreeView_QBaseMoveCursor(QTreeView* self, int cursorAction, int modifiers) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_MoveCursor_IsBase(true);
        return new QModelIndex(vqtreeview->moveCursor(static_cast<VirtualQTreeView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnMoveCursor(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_MoveCursor_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_MoveCursor_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeView_HorizontalOffset(const QTreeView* self) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        return vqtreeview->horizontalOffset();
    } else {
        return vqtreeview->horizontalOffset();
    }
}

// Base class handler implementation
int QTreeView_QBaseHorizontalOffset(const QTreeView* self) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_HorizontalOffset_IsBase(true);
        return vqtreeview->horizontalOffset();
    } else {
        return vqtreeview->horizontalOffset();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnHorizontalOffset(const QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_HorizontalOffset_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_HorizontalOffset_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeView_VerticalOffset(const QTreeView* self) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        return vqtreeview->verticalOffset();
    } else {
        return vqtreeview->verticalOffset();
    }
}

// Base class handler implementation
int QTreeView_QBaseVerticalOffset(const QTreeView* self) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_VerticalOffset_IsBase(true);
        return vqtreeview->verticalOffset();
    } else {
        return vqtreeview->verticalOffset();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnVerticalOffset(const QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_VerticalOffset_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_VerticalOffset_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_SetSelection(QTreeView* self, QRect* rect, int command) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        vqtreeview->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

// Base class handler implementation
void QTreeView_QBaseSetSelection(QTreeView* self, QRect* rect, int command) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_SetSelection_IsBase(true);
        vqtreeview->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        vqtreeview->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSetSelection(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_SetSelection_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_SetSelection_Callback>(slot));
    }
}

// Derived class handler implementation
QRegion* QTreeView_VisualRegionForSelection(const QTreeView* self, QItemSelection* selection) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        return new QRegion(vqtreeview->visualRegionForSelection(*selection));
    }
    return {};
}

// Base class handler implementation
QRegion* QTreeView_QBaseVisualRegionForSelection(const QTreeView* self, QItemSelection* selection) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_VisualRegionForSelection_IsBase(true);
        return new QRegion(vqtreeview->visualRegionForSelection(*selection));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnVisualRegionForSelection(const QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_VisualRegionForSelection_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_VisualRegionForSelection_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QTreeView_SelectedIndexes(const QTreeView* self) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        QModelIndexList _ret = vqtreeview->selectedIndexes();
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
        QModelIndexList _ret = vqtreeview->selectedIndexes();
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
libqt_list /* of QModelIndex* */ QTreeView_QBaseSelectedIndexes(const QTreeView* self) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_SelectedIndexes_IsBase(true);
        QModelIndexList _ret = vqtreeview->selectedIndexes();
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
        QModelIndexList _ret = vqtreeview->selectedIndexes();
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
void QTreeView_OnSelectedIndexes(const QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_SelectedIndexes_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_SelectedIndexes_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_ChangeEvent(QTreeView* self, QEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->changeEvent(event);
    } else {
        vqtreeview->changeEvent(event);
    }
}

// Base class handler implementation
void QTreeView_QBaseChangeEvent(QTreeView* self, QEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_ChangeEvent_IsBase(true);
        vqtreeview->changeEvent(event);
    } else {
        vqtreeview->changeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnChangeEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_ChangeEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_TimerEvent(QTreeView* self, QTimerEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->timerEvent(event);
    } else {
        vqtreeview->timerEvent(event);
    }
}

// Base class handler implementation
void QTreeView_QBaseTimerEvent(QTreeView* self, QTimerEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_TimerEvent_IsBase(true);
        vqtreeview->timerEvent(event);
    } else {
        vqtreeview->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnTimerEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_TimerEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_PaintEvent(QTreeView* self, QPaintEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->paintEvent(event);
    } else {
        vqtreeview->paintEvent(event);
    }
}

// Base class handler implementation
void QTreeView_QBasePaintEvent(QTreeView* self, QPaintEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_PaintEvent_IsBase(true);
        vqtreeview->paintEvent(event);
    } else {
        vqtreeview->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnPaintEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_PaintEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_DrawRow(const QTreeView* self, QPainter* painter, QStyleOptionViewItem* options, QModelIndex* index) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->drawRow(painter, *options, *index);
    } else {
        vqtreeview->drawRow(painter, *options, *index);
    }
}

// Base class handler implementation
void QTreeView_QBaseDrawRow(const QTreeView* self, QPainter* painter, QStyleOptionViewItem* options, QModelIndex* index) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_DrawRow_IsBase(true);
        vqtreeview->drawRow(painter, *options, *index);
    } else {
        vqtreeview->drawRow(painter, *options, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnDrawRow(const QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_DrawRow_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_DrawRow_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_DrawBranches(const QTreeView* self, QPainter* painter, QRect* rect, QModelIndex* index) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->drawBranches(painter, *rect, *index);
    } else {
        vqtreeview->drawBranches(painter, *rect, *index);
    }
}

// Base class handler implementation
void QTreeView_QBaseDrawBranches(const QTreeView* self, QPainter* painter, QRect* rect, QModelIndex* index) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_DrawBranches_IsBase(true);
        vqtreeview->drawBranches(painter, *rect, *index);
    } else {
        vqtreeview->drawBranches(painter, *rect, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnDrawBranches(const QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_DrawBranches_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_DrawBranches_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_MousePressEvent(QTreeView* self, QMouseEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->mousePressEvent(event);
    } else {
        vqtreeview->mousePressEvent(event);
    }
}

// Base class handler implementation
void QTreeView_QBaseMousePressEvent(QTreeView* self, QMouseEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_MousePressEvent_IsBase(true);
        vqtreeview->mousePressEvent(event);
    } else {
        vqtreeview->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnMousePressEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_MousePressEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_MouseReleaseEvent(QTreeView* self, QMouseEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->mouseReleaseEvent(event);
    } else {
        vqtreeview->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QTreeView_QBaseMouseReleaseEvent(QTreeView* self, QMouseEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_MouseReleaseEvent_IsBase(true);
        vqtreeview->mouseReleaseEvent(event);
    } else {
        vqtreeview->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnMouseReleaseEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_MouseDoubleClickEvent(QTreeView* self, QMouseEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->mouseDoubleClickEvent(event);
    } else {
        vqtreeview->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QTreeView_QBaseMouseDoubleClickEvent(QTreeView* self, QMouseEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_MouseDoubleClickEvent_IsBase(true);
        vqtreeview->mouseDoubleClickEvent(event);
    } else {
        vqtreeview->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnMouseDoubleClickEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_MouseMoveEvent(QTreeView* self, QMouseEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->mouseMoveEvent(event);
    } else {
        vqtreeview->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QTreeView_QBaseMouseMoveEvent(QTreeView* self, QMouseEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_MouseMoveEvent_IsBase(true);
        vqtreeview->mouseMoveEvent(event);
    } else {
        vqtreeview->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnMouseMoveEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_MouseMoveEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_KeyPressEvent(QTreeView* self, QKeyEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->keyPressEvent(event);
    } else {
        vqtreeview->keyPressEvent(event);
    }
}

// Base class handler implementation
void QTreeView_QBaseKeyPressEvent(QTreeView* self, QKeyEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_KeyPressEvent_IsBase(true);
        vqtreeview->keyPressEvent(event);
    } else {
        vqtreeview->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnKeyPressEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_KeyPressEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_DragMoveEvent(QTreeView* self, QDragMoveEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->dragMoveEvent(event);
    } else {
        vqtreeview->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QTreeView_QBaseDragMoveEvent(QTreeView* self, QDragMoveEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_DragMoveEvent_IsBase(true);
        vqtreeview->dragMoveEvent(event);
    } else {
        vqtreeview->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnDragMoveEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_DragMoveEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTreeView_ViewportEvent(QTreeView* self, QEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        return vqtreeview->viewportEvent(event);
    } else {
        return vqtreeview->viewportEvent(event);
    }
}

// Base class handler implementation
bool QTreeView_QBaseViewportEvent(QTreeView* self, QEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_ViewportEvent_IsBase(true);
        return vqtreeview->viewportEvent(event);
    } else {
        return vqtreeview->viewportEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnViewportEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_ViewportEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_ViewportEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_UpdateGeometries(QTreeView* self) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->updateGeometries();
    } else {
        vqtreeview->updateGeometries();
    }
}

// Base class handler implementation
void QTreeView_QBaseUpdateGeometries(QTreeView* self) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_UpdateGeometries_IsBase(true);
        vqtreeview->updateGeometries();
    } else {
        vqtreeview->updateGeometries();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnUpdateGeometries(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_UpdateGeometries_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_UpdateGeometries_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QTreeView_ViewportSizeHint(const QTreeView* self) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        return new QSize(vqtreeview->viewportSizeHint());
    }
    return {};
}

// Base class handler implementation
QSize* QTreeView_QBaseViewportSizeHint(const QTreeView* self) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_ViewportSizeHint_IsBase(true);
        return new QSize(vqtreeview->viewportSizeHint());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnViewportSizeHint(const QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_ViewportSizeHint_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_ViewportSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeView_SizeHintForColumn(const QTreeView* self, int column) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        return vqtreeview->sizeHintForColumn(static_cast<int>(column));
    } else {
        return vqtreeview->sizeHintForColumn(static_cast<int>(column));
    }
}

// Base class handler implementation
int QTreeView_QBaseSizeHintForColumn(const QTreeView* self, int column) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_SizeHintForColumn_IsBase(true);
        return vqtreeview->sizeHintForColumn(static_cast<int>(column));
    } else {
        return vqtreeview->sizeHintForColumn(static_cast<int>(column));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSizeHintForColumn(const QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_SizeHintForColumn_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_SizeHintForColumn_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_HorizontalScrollbarAction(QTreeView* self, int action) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->horizontalScrollbarAction(static_cast<int>(action));
    } else {
        vqtreeview->horizontalScrollbarAction(static_cast<int>(action));
    }
}

// Base class handler implementation
void QTreeView_QBaseHorizontalScrollbarAction(QTreeView* self, int action) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_HorizontalScrollbarAction_IsBase(true);
        vqtreeview->horizontalScrollbarAction(static_cast<int>(action));
    } else {
        vqtreeview->horizontalScrollbarAction(static_cast<int>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnHorizontalScrollbarAction(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_HorizontalScrollbarAction_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_HorizontalScrollbarAction_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTreeView_IsIndexHidden(const QTreeView* self, QModelIndex* index) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        return vqtreeview->isIndexHidden(*index);
    } else {
        return vqtreeview->isIndexHidden(*index);
    }
}

// Base class handler implementation
bool QTreeView_QBaseIsIndexHidden(const QTreeView* self, QModelIndex* index) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_IsIndexHidden_IsBase(true);
        return vqtreeview->isIndexHidden(*index);
    } else {
        return vqtreeview->isIndexHidden(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnIsIndexHidden(const QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_IsIndexHidden_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_IsIndexHidden_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_SelectionChanged(QTreeView* self, QItemSelection* selected, QItemSelection* deselected) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->selectionChanged(*selected, *deselected);
    } else {
        vqtreeview->selectionChanged(*selected, *deselected);
    }
}

// Base class handler implementation
void QTreeView_QBaseSelectionChanged(QTreeView* self, QItemSelection* selected, QItemSelection* deselected) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_SelectionChanged_IsBase(true);
        vqtreeview->selectionChanged(*selected, *deselected);
    } else {
        vqtreeview->selectionChanged(*selected, *deselected);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSelectionChanged(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_SelectionChanged_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_SelectionChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_CurrentChanged(QTreeView* self, QModelIndex* current, QModelIndex* previous) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->currentChanged(*current, *previous);
    } else {
        vqtreeview->currentChanged(*current, *previous);
    }
}

// Base class handler implementation
void QTreeView_QBaseCurrentChanged(QTreeView* self, QModelIndex* current, QModelIndex* previous) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_CurrentChanged_IsBase(true);
        vqtreeview->currentChanged(*current, *previous);
    } else {
        vqtreeview->currentChanged(*current, *previous);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnCurrentChanged(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_CurrentChanged_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_CurrentChanged_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeView_SizeHintForRow(const QTreeView* self, int row) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        return vqtreeview->sizeHintForRow(static_cast<int>(row));
    } else {
        return vqtreeview->sizeHintForRow(static_cast<int>(row));
    }
}

// Base class handler implementation
int QTreeView_QBaseSizeHintForRow(const QTreeView* self, int row) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_SizeHintForRow_IsBase(true);
        return vqtreeview->sizeHintForRow(static_cast<int>(row));
    } else {
        return vqtreeview->sizeHintForRow(static_cast<int>(row));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSizeHintForRow(const QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_SizeHintForRow_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_SizeHintForRow_Callback>(slot));
    }
}

// Derived class handler implementation
QAbstractItemDelegate* QTreeView_ItemDelegateForIndex(const QTreeView* self, QModelIndex* index) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        return vqtreeview->itemDelegateForIndex(*index);
    } else {
        return vqtreeview->itemDelegateForIndex(*index);
    }
}

// Base class handler implementation
QAbstractItemDelegate* QTreeView_QBaseItemDelegateForIndex(const QTreeView* self, QModelIndex* index) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_ItemDelegateForIndex_IsBase(true);
        return vqtreeview->itemDelegateForIndex(*index);
    } else {
        return vqtreeview->itemDelegateForIndex(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnItemDelegateForIndex(const QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_ItemDelegateForIndex_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_ItemDelegateForIndex_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QTreeView_InputMethodQuery(const QTreeView* self, int query) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        return new QVariant(vqtreeview->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

// Base class handler implementation
QVariant* QTreeView_QBaseInputMethodQuery(const QTreeView* self, int query) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_InputMethodQuery_IsBase(true);
        return new QVariant(vqtreeview->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnInputMethodQuery(const QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_InputMethodQuery_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_UpdateEditorData(QTreeView* self) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->updateEditorData();
    } else {
        vqtreeview->updateEditorData();
    }
}

// Base class handler implementation
void QTreeView_QBaseUpdateEditorData(QTreeView* self) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_UpdateEditorData_IsBase(true);
        vqtreeview->updateEditorData();
    } else {
        vqtreeview->updateEditorData();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnUpdateEditorData(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_UpdateEditorData_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_UpdateEditorData_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_UpdateEditorGeometries(QTreeView* self) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->updateEditorGeometries();
    } else {
        vqtreeview->updateEditorGeometries();
    }
}

// Base class handler implementation
void QTreeView_QBaseUpdateEditorGeometries(QTreeView* self) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_UpdateEditorGeometries_IsBase(true);
        vqtreeview->updateEditorGeometries();
    } else {
        vqtreeview->updateEditorGeometries();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnUpdateEditorGeometries(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_UpdateEditorGeometries_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_UpdateEditorGeometries_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_VerticalScrollbarAction(QTreeView* self, int action) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->verticalScrollbarAction(static_cast<int>(action));
    } else {
        vqtreeview->verticalScrollbarAction(static_cast<int>(action));
    }
}

// Base class handler implementation
void QTreeView_QBaseVerticalScrollbarAction(QTreeView* self, int action) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_VerticalScrollbarAction_IsBase(true);
        vqtreeview->verticalScrollbarAction(static_cast<int>(action));
    } else {
        vqtreeview->verticalScrollbarAction(static_cast<int>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnVerticalScrollbarAction(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_VerticalScrollbarAction_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_VerticalScrollbarAction_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_HorizontalScrollbarValueChanged(QTreeView* self, int value) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->horizontalScrollbarValueChanged(static_cast<int>(value));
    } else {
        vqtreeview->horizontalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Base class handler implementation
void QTreeView_QBaseHorizontalScrollbarValueChanged(QTreeView* self, int value) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_HorizontalScrollbarValueChanged_IsBase(true);
        vqtreeview->horizontalScrollbarValueChanged(static_cast<int>(value));
    } else {
        vqtreeview->horizontalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnHorizontalScrollbarValueChanged(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_HorizontalScrollbarValueChanged_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_HorizontalScrollbarValueChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_CloseEditor(QTreeView* self, QWidget* editor, int hint) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else {
        vqtreeview->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    }
}

// Base class handler implementation
void QTreeView_QBaseCloseEditor(QTreeView* self, QWidget* editor, int hint) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_CloseEditor_IsBase(true);
        vqtreeview->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else {
        vqtreeview->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnCloseEditor(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_CloseEditor_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_CloseEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_CommitData(QTreeView* self, QWidget* editor) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->commitData(editor);
    } else {
        vqtreeview->commitData(editor);
    }
}

// Base class handler implementation
void QTreeView_QBaseCommitData(QTreeView* self, QWidget* editor) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_CommitData_IsBase(true);
        vqtreeview->commitData(editor);
    } else {
        vqtreeview->commitData(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnCommitData(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_CommitData_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_CommitData_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_EditorDestroyed(QTreeView* self, QObject* editor) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->editorDestroyed(editor);
    } else {
        vqtreeview->editorDestroyed(editor);
    }
}

// Base class handler implementation
void QTreeView_QBaseEditorDestroyed(QTreeView* self, QObject* editor) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_EditorDestroyed_IsBase(true);
        vqtreeview->editorDestroyed(editor);
    } else {
        vqtreeview->editorDestroyed(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnEditorDestroyed(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_EditorDestroyed_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_EditorDestroyed_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTreeView_Edit2(QTreeView* self, QModelIndex* index, int trigger, QEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        return vqtreeview->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else {
        return vqtreeview->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    }
}

// Base class handler implementation
bool QTreeView_QBaseEdit2(QTreeView* self, QModelIndex* index, int trigger, QEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_Edit2_IsBase(true);
        return vqtreeview->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else {
        return vqtreeview->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnEdit2(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_Edit2_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_Edit2_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeView_SelectionCommand(const QTreeView* self, QModelIndex* index, QEvent* event) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        return static_cast<int>(vqtreeview->selectionCommand(*index, event));
    } else {
        return static_cast<int>(vqtreeview->selectionCommand(*index, event));
    }
}

// Base class handler implementation
int QTreeView_QBaseSelectionCommand(const QTreeView* self, QModelIndex* index, QEvent* event) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_SelectionCommand_IsBase(true);
        return static_cast<int>(vqtreeview->selectionCommand(*index, event));
    } else {
        return static_cast<int>(vqtreeview->selectionCommand(*index, event));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSelectionCommand(const QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_SelectionCommand_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_SelectionCommand_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_StartDrag(QTreeView* self, int supportedActions) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else {
        vqtreeview->startDrag(static_cast<Qt::DropActions>(supportedActions));
    }
}

// Base class handler implementation
void QTreeView_QBaseStartDrag(QTreeView* self, int supportedActions) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_StartDrag_IsBase(true);
        vqtreeview->startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else {
        vqtreeview->startDrag(static_cast<Qt::DropActions>(supportedActions));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnStartDrag(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_StartDrag_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_StartDrag_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_InitViewItemOption(const QTreeView* self, QStyleOptionViewItem* option) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->initViewItemOption(option);
    } else {
        vqtreeview->initViewItemOption(option);
    }
}

// Base class handler implementation
void QTreeView_QBaseInitViewItemOption(const QTreeView* self, QStyleOptionViewItem* option) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_InitViewItemOption_IsBase(true);
        vqtreeview->initViewItemOption(option);
    } else {
        vqtreeview->initViewItemOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnInitViewItemOption(const QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_InitViewItemOption_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_InitViewItemOption_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTreeView_FocusNextPrevChild(QTreeView* self, bool next) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        return vqtreeview->focusNextPrevChild(next);
    } else {
        return vqtreeview->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QTreeView_QBaseFocusNextPrevChild(QTreeView* self, bool next) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_FocusNextPrevChild_IsBase(true);
        return vqtreeview->focusNextPrevChild(next);
    } else {
        return vqtreeview->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnFocusNextPrevChild(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTreeView_Event(QTreeView* self, QEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        return vqtreeview->event(event);
    } else {
        return vqtreeview->event(event);
    }
}

// Base class handler implementation
bool QTreeView_QBaseEvent(QTreeView* self, QEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_Event_IsBase(true);
        return vqtreeview->event(event);
    } else {
        return vqtreeview->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_Event_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_DragEnterEvent(QTreeView* self, QDragEnterEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->dragEnterEvent(event);
    } else {
        vqtreeview->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QTreeView_QBaseDragEnterEvent(QTreeView* self, QDragEnterEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_DragEnterEvent_IsBase(true);
        vqtreeview->dragEnterEvent(event);
    } else {
        vqtreeview->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnDragEnterEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_DragEnterEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_DragLeaveEvent(QTreeView* self, QDragLeaveEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->dragLeaveEvent(event);
    } else {
        vqtreeview->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QTreeView_QBaseDragLeaveEvent(QTreeView* self, QDragLeaveEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_DragLeaveEvent_IsBase(true);
        vqtreeview->dragLeaveEvent(event);
    } else {
        vqtreeview->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnDragLeaveEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_DragLeaveEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_DropEvent(QTreeView* self, QDropEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->dropEvent(event);
    } else {
        vqtreeview->dropEvent(event);
    }
}

// Base class handler implementation
void QTreeView_QBaseDropEvent(QTreeView* self, QDropEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_DropEvent_IsBase(true);
        vqtreeview->dropEvent(event);
    } else {
        vqtreeview->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnDropEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_DropEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_FocusInEvent(QTreeView* self, QFocusEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->focusInEvent(event);
    } else {
        vqtreeview->focusInEvent(event);
    }
}

// Base class handler implementation
void QTreeView_QBaseFocusInEvent(QTreeView* self, QFocusEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_FocusInEvent_IsBase(true);
        vqtreeview->focusInEvent(event);
    } else {
        vqtreeview->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnFocusInEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_FocusInEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_FocusOutEvent(QTreeView* self, QFocusEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->focusOutEvent(event);
    } else {
        vqtreeview->focusOutEvent(event);
    }
}

// Base class handler implementation
void QTreeView_QBaseFocusOutEvent(QTreeView* self, QFocusEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_FocusOutEvent_IsBase(true);
        vqtreeview->focusOutEvent(event);
    } else {
        vqtreeview->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnFocusOutEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_FocusOutEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_ResizeEvent(QTreeView* self, QResizeEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->resizeEvent(event);
    } else {
        vqtreeview->resizeEvent(event);
    }
}

// Base class handler implementation
void QTreeView_QBaseResizeEvent(QTreeView* self, QResizeEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_ResizeEvent_IsBase(true);
        vqtreeview->resizeEvent(event);
    } else {
        vqtreeview->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnResizeEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_ResizeEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_InputMethodEvent(QTreeView* self, QInputMethodEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->inputMethodEvent(event);
    } else {
        vqtreeview->inputMethodEvent(event);
    }
}

// Base class handler implementation
void QTreeView_QBaseInputMethodEvent(QTreeView* self, QInputMethodEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_InputMethodEvent_IsBase(true);
        vqtreeview->inputMethodEvent(event);
    } else {
        vqtreeview->inputMethodEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnInputMethodEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_InputMethodEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTreeView_EventFilter(QTreeView* self, QObject* object, QEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        return vqtreeview->eventFilter(object, event);
    } else {
        return vqtreeview->eventFilter(object, event);
    }
}

// Base class handler implementation
bool QTreeView_QBaseEventFilter(QTreeView* self, QObject* object, QEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_EventFilter_IsBase(true);
        return vqtreeview->eventFilter(object, event);
    } else {
        return vqtreeview->eventFilter(object, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnEventFilter(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_EventFilter_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QTreeView_MinimumSizeHint(const QTreeView* self) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        return new QSize(vqtreeview->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QTreeView_QBaseMinimumSizeHint(const QTreeView* self) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_MinimumSizeHint_IsBase(true);
        return new QSize(vqtreeview->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnMinimumSizeHint(const QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_MinimumSizeHint_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QTreeView_SizeHint(const QTreeView* self) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        return new QSize(vqtreeview->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QTreeView_QBaseSizeHint(const QTreeView* self) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_SizeHint_IsBase(true);
        return new QSize(vqtreeview->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSizeHint(const QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_SizeHint_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_SetupViewport(QTreeView* self, QWidget* viewport) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setupViewport(viewport);
    } else {
        vqtreeview->setupViewport(viewport);
    }
}

// Base class handler implementation
void QTreeView_QBaseSetupViewport(QTreeView* self, QWidget* viewport) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_SetupViewport_IsBase(true);
        vqtreeview->setupViewport(viewport);
    } else {
        vqtreeview->setupViewport(viewport);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSetupViewport(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_SetupViewport_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_SetupViewport_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_WheelEvent(QTreeView* self, QWheelEvent* param1) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->wheelEvent(param1);
    } else {
        vqtreeview->wheelEvent(param1);
    }
}

// Base class handler implementation
void QTreeView_QBaseWheelEvent(QTreeView* self, QWheelEvent* param1) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_WheelEvent_IsBase(true);
        vqtreeview->wheelEvent(param1);
    } else {
        vqtreeview->wheelEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnWheelEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_WheelEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_ContextMenuEvent(QTreeView* self, QContextMenuEvent* param1) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->contextMenuEvent(param1);
    } else {
        vqtreeview->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void QTreeView_QBaseContextMenuEvent(QTreeView* self, QContextMenuEvent* param1) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_ContextMenuEvent_IsBase(true);
        vqtreeview->contextMenuEvent(param1);
    } else {
        vqtreeview->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnContextMenuEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_ContextMenuEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_InitStyleOption(const QTreeView* self, QStyleOptionFrame* option) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->initStyleOption(option);
    } else {
        vqtreeview->initStyleOption(option);
    }
}

// Base class handler implementation
void QTreeView_QBaseInitStyleOption(const QTreeView* self, QStyleOptionFrame* option) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_InitStyleOption_IsBase(true);
        vqtreeview->initStyleOption(option);
    } else {
        vqtreeview->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnInitStyleOption(const QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_InitStyleOption_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeView_DevType(const QTreeView* self) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        return vqtreeview->devType();
    } else {
        return vqtreeview->devType();
    }
}

// Base class handler implementation
int QTreeView_QBaseDevType(const QTreeView* self) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_DevType_IsBase(true);
        return vqtreeview->devType();
    } else {
        return vqtreeview->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnDevType(const QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_DevType_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_SetVisible(QTreeView* self, bool visible) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setVisible(visible);
    } else {
        vqtreeview->setVisible(visible);
    }
}

// Base class handler implementation
void QTreeView_QBaseSetVisible(QTreeView* self, bool visible) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_SetVisible_IsBase(true);
        vqtreeview->setVisible(visible);
    } else {
        vqtreeview->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSetVisible(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_SetVisible_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeView_HeightForWidth(const QTreeView* self, int param1) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        return vqtreeview->heightForWidth(static_cast<int>(param1));
    } else {
        return vqtreeview->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QTreeView_QBaseHeightForWidth(const QTreeView* self, int param1) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_HeightForWidth_IsBase(true);
        return vqtreeview->heightForWidth(static_cast<int>(param1));
    } else {
        return vqtreeview->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnHeightForWidth(const QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_HeightForWidth_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTreeView_HasHeightForWidth(const QTreeView* self) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        return vqtreeview->hasHeightForWidth();
    } else {
        return vqtreeview->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QTreeView_QBaseHasHeightForWidth(const QTreeView* self) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_HasHeightForWidth_IsBase(true);
        return vqtreeview->hasHeightForWidth();
    } else {
        return vqtreeview->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnHasHeightForWidth(const QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_HasHeightForWidth_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QTreeView_PaintEngine(const QTreeView* self) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        return vqtreeview->paintEngine();
    } else {
        return vqtreeview->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QTreeView_QBasePaintEngine(const QTreeView* self) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_PaintEngine_IsBase(true);
        return vqtreeview->paintEngine();
    } else {
        return vqtreeview->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnPaintEngine(const QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_PaintEngine_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_KeyReleaseEvent(QTreeView* self, QKeyEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->keyReleaseEvent(event);
    } else {
        vqtreeview->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QTreeView_QBaseKeyReleaseEvent(QTreeView* self, QKeyEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_KeyReleaseEvent_IsBase(true);
        vqtreeview->keyReleaseEvent(event);
    } else {
        vqtreeview->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnKeyReleaseEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_EnterEvent(QTreeView* self, QEnterEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->enterEvent(event);
    } else {
        vqtreeview->enterEvent(event);
    }
}

// Base class handler implementation
void QTreeView_QBaseEnterEvent(QTreeView* self, QEnterEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_EnterEvent_IsBase(true);
        vqtreeview->enterEvent(event);
    } else {
        vqtreeview->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnEnterEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_EnterEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_LeaveEvent(QTreeView* self, QEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->leaveEvent(event);
    } else {
        vqtreeview->leaveEvent(event);
    }
}

// Base class handler implementation
void QTreeView_QBaseLeaveEvent(QTreeView* self, QEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_LeaveEvent_IsBase(true);
        vqtreeview->leaveEvent(event);
    } else {
        vqtreeview->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnLeaveEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_LeaveEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_MoveEvent(QTreeView* self, QMoveEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->moveEvent(event);
    } else {
        vqtreeview->moveEvent(event);
    }
}

// Base class handler implementation
void QTreeView_QBaseMoveEvent(QTreeView* self, QMoveEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_MoveEvent_IsBase(true);
        vqtreeview->moveEvent(event);
    } else {
        vqtreeview->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnMoveEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_MoveEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_CloseEvent(QTreeView* self, QCloseEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->closeEvent(event);
    } else {
        vqtreeview->closeEvent(event);
    }
}

// Base class handler implementation
void QTreeView_QBaseCloseEvent(QTreeView* self, QCloseEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_CloseEvent_IsBase(true);
        vqtreeview->closeEvent(event);
    } else {
        vqtreeview->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnCloseEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_CloseEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_TabletEvent(QTreeView* self, QTabletEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->tabletEvent(event);
    } else {
        vqtreeview->tabletEvent(event);
    }
}

// Base class handler implementation
void QTreeView_QBaseTabletEvent(QTreeView* self, QTabletEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_TabletEvent_IsBase(true);
        vqtreeview->tabletEvent(event);
    } else {
        vqtreeview->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnTabletEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_TabletEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_ActionEvent(QTreeView* self, QActionEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->actionEvent(event);
    } else {
        vqtreeview->actionEvent(event);
    }
}

// Base class handler implementation
void QTreeView_QBaseActionEvent(QTreeView* self, QActionEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_ActionEvent_IsBase(true);
        vqtreeview->actionEvent(event);
    } else {
        vqtreeview->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnActionEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_ActionEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_ShowEvent(QTreeView* self, QShowEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->showEvent(event);
    } else {
        vqtreeview->showEvent(event);
    }
}

// Base class handler implementation
void QTreeView_QBaseShowEvent(QTreeView* self, QShowEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_ShowEvent_IsBase(true);
        vqtreeview->showEvent(event);
    } else {
        vqtreeview->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnShowEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_ShowEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_HideEvent(QTreeView* self, QHideEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->hideEvent(event);
    } else {
        vqtreeview->hideEvent(event);
    }
}

// Base class handler implementation
void QTreeView_QBaseHideEvent(QTreeView* self, QHideEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_HideEvent_IsBase(true);
        vqtreeview->hideEvent(event);
    } else {
        vqtreeview->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnHideEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_HideEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTreeView_NativeEvent(QTreeView* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        return vqtreeview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqtreeview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QTreeView_QBaseNativeEvent(QTreeView* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_NativeEvent_IsBase(true);
        return vqtreeview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqtreeview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnNativeEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_NativeEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeView_Metric(const QTreeView* self, int param1) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        return vqtreeview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqtreeview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QTreeView_QBaseMetric(const QTreeView* self, int param1) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_Metric_IsBase(true);
        return vqtreeview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqtreeview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnMetric(const QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_Metric_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_InitPainter(const QTreeView* self, QPainter* painter) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->initPainter(painter);
    } else {
        vqtreeview->initPainter(painter);
    }
}

// Base class handler implementation
void QTreeView_QBaseInitPainter(const QTreeView* self, QPainter* painter) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_InitPainter_IsBase(true);
        vqtreeview->initPainter(painter);
    } else {
        vqtreeview->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnInitPainter(const QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_InitPainter_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QTreeView_Redirected(const QTreeView* self, QPoint* offset) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        return vqtreeview->redirected(offset);
    } else {
        return vqtreeview->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QTreeView_QBaseRedirected(const QTreeView* self, QPoint* offset) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_Redirected_IsBase(true);
        return vqtreeview->redirected(offset);
    } else {
        return vqtreeview->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnRedirected(const QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_Redirected_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QTreeView_SharedPainter(const QTreeView* self) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        return vqtreeview->sharedPainter();
    } else {
        return vqtreeview->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QTreeView_QBaseSharedPainter(const QTreeView* self) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_SharedPainter_IsBase(true);
        return vqtreeview->sharedPainter();
    } else {
        return vqtreeview->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSharedPainter(const QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_SharedPainter_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_ChildEvent(QTreeView* self, QChildEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->childEvent(event);
    } else {
        vqtreeview->childEvent(event);
    }
}

// Base class handler implementation
void QTreeView_QBaseChildEvent(QTreeView* self, QChildEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_ChildEvent_IsBase(true);
        vqtreeview->childEvent(event);
    } else {
        vqtreeview->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnChildEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_ChildEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_CustomEvent(QTreeView* self, QEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->customEvent(event);
    } else {
        vqtreeview->customEvent(event);
    }
}

// Base class handler implementation
void QTreeView_QBaseCustomEvent(QTreeView* self, QEvent* event) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_CustomEvent_IsBase(true);
        vqtreeview->customEvent(event);
    } else {
        vqtreeview->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnCustomEvent(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_CustomEvent_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_ConnectNotify(QTreeView* self, QMetaMethod* signal) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->connectNotify(*signal);
    } else {
        vqtreeview->connectNotify(*signal);
    }
}

// Base class handler implementation
void QTreeView_QBaseConnectNotify(QTreeView* self, QMetaMethod* signal) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_ConnectNotify_IsBase(true);
        vqtreeview->connectNotify(*signal);
    } else {
        vqtreeview->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnConnectNotify(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_ConnectNotify_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_DisconnectNotify(QTreeView* self, QMetaMethod* signal) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->disconnectNotify(*signal);
    } else {
        vqtreeview->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QTreeView_QBaseDisconnectNotify(QTreeView* self, QMetaMethod* signal) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_DisconnectNotify_IsBase(true);
        vqtreeview->disconnectNotify(*signal);
    } else {
        vqtreeview->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnDisconnectNotify(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_DisconnectNotify_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_ColumnResized(QTreeView* self, int column, int oldSize, int newSize) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->columnResized(static_cast<int>(column), static_cast<int>(oldSize), static_cast<int>(newSize));
    } else {
        vqtreeview->columnResized(static_cast<int>(column), static_cast<int>(oldSize), static_cast<int>(newSize));
    }
}

// Base class handler implementation
void QTreeView_QBaseColumnResized(QTreeView* self, int column, int oldSize, int newSize) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_ColumnResized_IsBase(true);
        vqtreeview->columnResized(static_cast<int>(column), static_cast<int>(oldSize), static_cast<int>(newSize));
    } else {
        vqtreeview->columnResized(static_cast<int>(column), static_cast<int>(oldSize), static_cast<int>(newSize));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnColumnResized(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_ColumnResized_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_ColumnResized_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_ColumnCountChanged(QTreeView* self, int oldCount, int newCount) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->columnCountChanged(static_cast<int>(oldCount), static_cast<int>(newCount));
    } else {
        vqtreeview->columnCountChanged(static_cast<int>(oldCount), static_cast<int>(newCount));
    }
}

// Base class handler implementation
void QTreeView_QBaseColumnCountChanged(QTreeView* self, int oldCount, int newCount) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_ColumnCountChanged_IsBase(true);
        vqtreeview->columnCountChanged(static_cast<int>(oldCount), static_cast<int>(newCount));
    } else {
        vqtreeview->columnCountChanged(static_cast<int>(oldCount), static_cast<int>(newCount));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnColumnCountChanged(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_ColumnCountChanged_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_ColumnCountChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_ColumnMoved(QTreeView* self) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->columnMoved();
    } else {
        vqtreeview->columnMoved();
    }
}

// Base class handler implementation
void QTreeView_QBaseColumnMoved(QTreeView* self) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_ColumnMoved_IsBase(true);
        vqtreeview->columnMoved();
    } else {
        vqtreeview->columnMoved();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnColumnMoved(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_ColumnMoved_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_ColumnMoved_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_Reexpand(QTreeView* self) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->reexpand();
    } else {
        vqtreeview->reexpand();
    }
}

// Base class handler implementation
void QTreeView_QBaseReexpand(QTreeView* self) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_Reexpand_IsBase(true);
        vqtreeview->reexpand();
    } else {
        vqtreeview->reexpand();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnReexpand(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_Reexpand_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_Reexpand_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_RowsRemoved(QTreeView* self, QModelIndex* parent, int first, int last) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->rowsRemoved(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        vqtreeview->rowsRemoved(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QTreeView_QBaseRowsRemoved(QTreeView* self, QModelIndex* parent, int first, int last) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_RowsRemoved_IsBase(true);
        vqtreeview->rowsRemoved(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        vqtreeview->rowsRemoved(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnRowsRemoved(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_RowsRemoved_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_RowsRemoved_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_DrawTree(const QTreeView* self, QPainter* painter, QRegion* region) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->drawTree(painter, *region);
    } else {
        vqtreeview->drawTree(painter, *region);
    }
}

// Base class handler implementation
void QTreeView_QBaseDrawTree(const QTreeView* self, QPainter* painter, QRegion* region) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_DrawTree_IsBase(true);
        vqtreeview->drawTree(painter, *region);
    } else {
        vqtreeview->drawTree(painter, *region);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnDrawTree(const QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_DrawTree_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_DrawTree_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeView_IndexRowSizeHint(const QTreeView* self, QModelIndex* index) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        return vqtreeview->indexRowSizeHint(*index);
    } else {
        return vqtreeview->indexRowSizeHint(*index);
    }
}

// Base class handler implementation
int QTreeView_QBaseIndexRowSizeHint(const QTreeView* self, QModelIndex* index) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_IndexRowSizeHint_IsBase(true);
        return vqtreeview->indexRowSizeHint(*index);
    } else {
        return vqtreeview->indexRowSizeHint(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnIndexRowSizeHint(const QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_IndexRowSizeHint_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_IndexRowSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeView_RowHeight(const QTreeView* self, QModelIndex* index) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        return vqtreeview->rowHeight(*index);
    } else {
        return vqtreeview->rowHeight(*index);
    }
}

// Base class handler implementation
int QTreeView_QBaseRowHeight(const QTreeView* self, QModelIndex* index) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_RowHeight_IsBase(true);
        return vqtreeview->rowHeight(*index);
    } else {
        return vqtreeview->rowHeight(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnRowHeight(const QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_RowHeight_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_RowHeight_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeView_State(const QTreeView* self) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        return static_cast<int>(vqtreeview->state());
    } else {
        return static_cast<int>(vqtreeview->state());
    }
}

// Base class handler implementation
int QTreeView_QBaseState(const QTreeView* self) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_State_IsBase(true);
        return static_cast<int>(vqtreeview->state());
    } else {
        return static_cast<int>(vqtreeview->state());
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnState(const QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_State_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_State_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_SetState(QTreeView* self, int state) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setState(static_cast<VirtualQTreeView::State>(state));
    } else {
        vqtreeview->setState(static_cast<VirtualQTreeView::State>(state));
    }
}

// Base class handler implementation
void QTreeView_QBaseSetState(QTreeView* self, int state) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_SetState_IsBase(true);
        vqtreeview->setState(static_cast<VirtualQTreeView::State>(state));
    } else {
        vqtreeview->setState(static_cast<VirtualQTreeView::State>(state));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSetState(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_SetState_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_SetState_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_ScheduleDelayedItemsLayout(QTreeView* self) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->scheduleDelayedItemsLayout();
    } else {
        vqtreeview->scheduleDelayedItemsLayout();
    }
}

// Base class handler implementation
void QTreeView_QBaseScheduleDelayedItemsLayout(QTreeView* self) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_ScheduleDelayedItemsLayout_IsBase(true);
        vqtreeview->scheduleDelayedItemsLayout();
    } else {
        vqtreeview->scheduleDelayedItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnScheduleDelayedItemsLayout(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_ScheduleDelayedItemsLayout_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_ScheduleDelayedItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_ExecuteDelayedItemsLayout(QTreeView* self) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->executeDelayedItemsLayout();
    } else {
        vqtreeview->executeDelayedItemsLayout();
    }
}

// Base class handler implementation
void QTreeView_QBaseExecuteDelayedItemsLayout(QTreeView* self) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_ExecuteDelayedItemsLayout_IsBase(true);
        vqtreeview->executeDelayedItemsLayout();
    } else {
        vqtreeview->executeDelayedItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnExecuteDelayedItemsLayout(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_ExecuteDelayedItemsLayout_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_ExecuteDelayedItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_SetDirtyRegion(QTreeView* self, QRegion* region) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setDirtyRegion(*region);
    } else {
        vqtreeview->setDirtyRegion(*region);
    }
}

// Base class handler implementation
void QTreeView_QBaseSetDirtyRegion(QTreeView* self, QRegion* region) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_SetDirtyRegion_IsBase(true);
        vqtreeview->setDirtyRegion(*region);
    } else {
        vqtreeview->setDirtyRegion(*region);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSetDirtyRegion(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_SetDirtyRegion_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_SetDirtyRegion_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_ScrollDirtyRegion(QTreeView* self, int dx, int dy) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqtreeview->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void QTreeView_QBaseScrollDirtyRegion(QTreeView* self, int dx, int dy) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_ScrollDirtyRegion_IsBase(true);
        vqtreeview->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqtreeview->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnScrollDirtyRegion(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_ScrollDirtyRegion_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_ScrollDirtyRegion_Callback>(slot));
    }
}

// Derived class handler implementation
QPoint* QTreeView_DirtyRegionOffset(const QTreeView* self) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        return new QPoint(vqtreeview->dirtyRegionOffset());
    }
    return {};
}

// Base class handler implementation
QPoint* QTreeView_QBaseDirtyRegionOffset(const QTreeView* self) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_DirtyRegionOffset_IsBase(true);
        return new QPoint(vqtreeview->dirtyRegionOffset());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnDirtyRegionOffset(const QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_DirtyRegionOffset_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_DirtyRegionOffset_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_StartAutoScroll(QTreeView* self) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->startAutoScroll();
    } else {
        vqtreeview->startAutoScroll();
    }
}

// Base class handler implementation
void QTreeView_QBaseStartAutoScroll(QTreeView* self) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_StartAutoScroll_IsBase(true);
        vqtreeview->startAutoScroll();
    } else {
        vqtreeview->startAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnStartAutoScroll(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_StartAutoScroll_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_StartAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_StopAutoScroll(QTreeView* self) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->stopAutoScroll();
    } else {
        vqtreeview->stopAutoScroll();
    }
}

// Base class handler implementation
void QTreeView_QBaseStopAutoScroll(QTreeView* self) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_StopAutoScroll_IsBase(true);
        vqtreeview->stopAutoScroll();
    } else {
        vqtreeview->stopAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnStopAutoScroll(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_StopAutoScroll_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_StopAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_DoAutoScroll(QTreeView* self) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->doAutoScroll();
    } else {
        vqtreeview->doAutoScroll();
    }
}

// Base class handler implementation
void QTreeView_QBaseDoAutoScroll(QTreeView* self) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_DoAutoScroll_IsBase(true);
        vqtreeview->doAutoScroll();
    } else {
        vqtreeview->doAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnDoAutoScroll(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_DoAutoScroll_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_DoAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeView_DropIndicatorPosition(const QTreeView* self) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        return static_cast<int>(vqtreeview->dropIndicatorPosition());
    } else {
        return static_cast<int>(vqtreeview->dropIndicatorPosition());
    }
}

// Base class handler implementation
int QTreeView_QBaseDropIndicatorPosition(const QTreeView* self) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_DropIndicatorPosition_IsBase(true);
        return static_cast<int>(vqtreeview->dropIndicatorPosition());
    } else {
        return static_cast<int>(vqtreeview->dropIndicatorPosition());
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnDropIndicatorPosition(const QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_DropIndicatorPosition_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_DropIndicatorPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_SetViewportMargins(QTreeView* self, int left, int top, int right, int bottom) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        vqtreeview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Base class handler implementation
void QTreeView_QBaseSetViewportMargins(QTreeView* self, int left, int top, int right, int bottom) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_SetViewportMargins_IsBase(true);
        vqtreeview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        vqtreeview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSetViewportMargins(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_SetViewportMargins_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_SetViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
QMargins* QTreeView_ViewportMargins(const QTreeView* self) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        return new QMargins(vqtreeview->viewportMargins());
    }
    return {};
}

// Base class handler implementation
QMargins* QTreeView_QBaseViewportMargins(const QTreeView* self) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_ViewportMargins_IsBase(true);
        return new QMargins(vqtreeview->viewportMargins());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnViewportMargins(const QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_ViewportMargins_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_ViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_DrawFrame(QTreeView* self, QPainter* param1) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->drawFrame(param1);
    } else {
        vqtreeview->drawFrame(param1);
    }
}

// Base class handler implementation
void QTreeView_QBaseDrawFrame(QTreeView* self, QPainter* param1) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_DrawFrame_IsBase(true);
        vqtreeview->drawFrame(param1);
    } else {
        vqtreeview->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnDrawFrame(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_DrawFrame_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_UpdateMicroFocus(QTreeView* self) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->updateMicroFocus();
    } else {
        vqtreeview->updateMicroFocus();
    }
}

// Base class handler implementation
void QTreeView_QBaseUpdateMicroFocus(QTreeView* self) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_UpdateMicroFocus_IsBase(true);
        vqtreeview->updateMicroFocus();
    } else {
        vqtreeview->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnUpdateMicroFocus(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_Create(QTreeView* self) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->create();
    } else {
        vqtreeview->create();
    }
}

// Base class handler implementation
void QTreeView_QBaseCreate(QTreeView* self) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_Create_IsBase(true);
        vqtreeview->create();
    } else {
        vqtreeview->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnCreate(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_Create_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeView_Destroy(QTreeView* self) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->destroy();
    } else {
        vqtreeview->destroy();
    }
}

// Base class handler implementation
void QTreeView_QBaseDestroy(QTreeView* self) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_Destroy_IsBase(true);
        vqtreeview->destroy();
    } else {
        vqtreeview->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnDestroy(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_Destroy_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTreeView_FocusNextChild(QTreeView* self) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        return vqtreeview->focusNextChild();
    } else {
        return vqtreeview->focusNextChild();
    }
}

// Base class handler implementation
bool QTreeView_QBaseFocusNextChild(QTreeView* self) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_FocusNextChild_IsBase(true);
        return vqtreeview->focusNextChild();
    } else {
        return vqtreeview->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnFocusNextChild(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_FocusNextChild_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTreeView_FocusPreviousChild(QTreeView* self) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        return vqtreeview->focusPreviousChild();
    } else {
        return vqtreeview->focusPreviousChild();
    }
}

// Base class handler implementation
bool QTreeView_QBaseFocusPreviousChild(QTreeView* self) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_FocusPreviousChild_IsBase(true);
        return vqtreeview->focusPreviousChild();
    } else {
        return vqtreeview->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnFocusPreviousChild(QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = dynamic_cast<VirtualQTreeView*>(self)) {
        vqtreeview->setQTreeView_FocusPreviousChild_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QTreeView_Sender(const QTreeView* self) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        return vqtreeview->sender();
    } else {
        return vqtreeview->sender();
    }
}

// Base class handler implementation
QObject* QTreeView_QBaseSender(const QTreeView* self) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_Sender_IsBase(true);
        return vqtreeview->sender();
    } else {
        return vqtreeview->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSender(const QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_Sender_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeView_SenderSignalIndex(const QTreeView* self) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        return vqtreeview->senderSignalIndex();
    } else {
        return vqtreeview->senderSignalIndex();
    }
}

// Base class handler implementation
int QTreeView_QBaseSenderSignalIndex(const QTreeView* self) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_SenderSignalIndex_IsBase(true);
        return vqtreeview->senderSignalIndex();
    } else {
        return vqtreeview->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnSenderSignalIndex(const QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_SenderSignalIndex_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeView_Receivers(const QTreeView* self, const char* signal) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        return vqtreeview->receivers(signal);
    } else {
        return vqtreeview->receivers(signal);
    }
}

// Base class handler implementation
int QTreeView_QBaseReceivers(const QTreeView* self, const char* signal) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_Receivers_IsBase(true);
        return vqtreeview->receivers(signal);
    } else {
        return vqtreeview->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnReceivers(const QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_Receivers_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTreeView_IsSignalConnected(const QTreeView* self, QMetaMethod* signal) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        return vqtreeview->isSignalConnected(*signal);
    } else {
        return vqtreeview->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QTreeView_QBaseIsSignalConnected(const QTreeView* self, QMetaMethod* signal) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_IsSignalConnected_IsBase(true);
        return vqtreeview->isSignalConnected(*signal);
    } else {
        return vqtreeview->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeView_OnIsSignalConnected(const QTreeView* self, intptr_t slot) {
    if (auto* vqtreeview = const_cast<VirtualQTreeView*>(dynamic_cast<const VirtualQTreeView*>(self))) {
        vqtreeview->setQTreeView_IsSignalConnected_Callback(reinterpret_cast<VirtualQTreeView::QTreeView_IsSignalConnected_Callback>(slot));
    }
}

void QTreeView_Delete(QTreeView* self) {
    delete self;
}
