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
#include <QTableView>
#include <QTabletEvent>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <QWindow>
#include <qtableview.h>
#include "libqtableview.hpp"
#include "libqtableview.hxx"

QTableView* QTableView_new(QWidget* parent) {
    return new VirtualQTableView(parent);
}

QTableView* QTableView_new2() {
    return new VirtualQTableView();
}

QMetaObject* QTableView_MetaObject(const QTableView* self) {
    return (QMetaObject*)self->metaObject();
}

void* QTableView_Metacast(QTableView* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QTableView_Metacall(QTableView* self, int param1, int param2, void** param3) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTableView_OnMetacall(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_Metacall_Callback(reinterpret_cast<VirtualQTableView::QTableView_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QTableView_QBaseMetacall(QTableView* self, int param1, int param2, void** param3) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_Metacall_IsBase(true);
        return vqtableview->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QTableView_Tr(const char* s) {
    QString _ret = QTableView::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QHeaderView* QTableView_HorizontalHeader(const QTableView* self) {
    return self->horizontalHeader();
}

QHeaderView* QTableView_VerticalHeader(const QTableView* self) {
    return self->verticalHeader();
}

void QTableView_SetHorizontalHeader(QTableView* self, QHeaderView* header) {
    self->setHorizontalHeader(header);
}

void QTableView_SetVerticalHeader(QTableView* self, QHeaderView* header) {
    self->setVerticalHeader(header);
}

int QTableView_RowViewportPosition(const QTableView* self, int row) {
    return self->rowViewportPosition(static_cast<int>(row));
}

int QTableView_RowAt(const QTableView* self, int y) {
    return self->rowAt(static_cast<int>(y));
}

void QTableView_SetRowHeight(QTableView* self, int row, int height) {
    self->setRowHeight(static_cast<int>(row), static_cast<int>(height));
}

int QTableView_RowHeight(const QTableView* self, int row) {
    return self->rowHeight(static_cast<int>(row));
}

int QTableView_ColumnViewportPosition(const QTableView* self, int column) {
    return self->columnViewportPosition(static_cast<int>(column));
}

int QTableView_ColumnAt(const QTableView* self, int x) {
    return self->columnAt(static_cast<int>(x));
}

void QTableView_SetColumnWidth(QTableView* self, int column, int width) {
    self->setColumnWidth(static_cast<int>(column), static_cast<int>(width));
}

int QTableView_ColumnWidth(const QTableView* self, int column) {
    return self->columnWidth(static_cast<int>(column));
}

bool QTableView_IsRowHidden(const QTableView* self, int row) {
    return self->isRowHidden(static_cast<int>(row));
}

void QTableView_SetRowHidden(QTableView* self, int row, bool hide) {
    self->setRowHidden(static_cast<int>(row), hide);
}

bool QTableView_IsColumnHidden(const QTableView* self, int column) {
    return self->isColumnHidden(static_cast<int>(column));
}

void QTableView_SetColumnHidden(QTableView* self, int column, bool hide) {
    self->setColumnHidden(static_cast<int>(column), hide);
}

void QTableView_SetSortingEnabled(QTableView* self, bool enable) {
    self->setSortingEnabled(enable);
}

bool QTableView_IsSortingEnabled(const QTableView* self) {
    return self->isSortingEnabled();
}

bool QTableView_ShowGrid(const QTableView* self) {
    return self->showGrid();
}

int QTableView_GridStyle(const QTableView* self) {
    return static_cast<int>(self->gridStyle());
}

void QTableView_SetGridStyle(QTableView* self, int style) {
    self->setGridStyle(static_cast<Qt::PenStyle>(style));
}

void QTableView_SetWordWrap(QTableView* self, bool on) {
    self->setWordWrap(on);
}

bool QTableView_WordWrap(const QTableView* self) {
    return self->wordWrap();
}

void QTableView_SetCornerButtonEnabled(QTableView* self, bool enable) {
    self->setCornerButtonEnabled(enable);
}

bool QTableView_IsCornerButtonEnabled(const QTableView* self) {
    return self->isCornerButtonEnabled();
}

void QTableView_SetSpan(QTableView* self, int row, int column, int rowSpan, int columnSpan) {
    self->setSpan(static_cast<int>(row), static_cast<int>(column), static_cast<int>(rowSpan), static_cast<int>(columnSpan));
}

int QTableView_RowSpan(const QTableView* self, int row, int column) {
    return self->rowSpan(static_cast<int>(row), static_cast<int>(column));
}

int QTableView_ColumnSpan(const QTableView* self, int row, int column) {
    return self->columnSpan(static_cast<int>(row), static_cast<int>(column));
}

void QTableView_ClearSpans(QTableView* self) {
    self->clearSpans();
}

void QTableView_SelectRow(QTableView* self, int row) {
    self->selectRow(static_cast<int>(row));
}

void QTableView_SelectColumn(QTableView* self, int column) {
    self->selectColumn(static_cast<int>(column));
}

void QTableView_HideRow(QTableView* self, int row) {
    self->hideRow(static_cast<int>(row));
}

void QTableView_HideColumn(QTableView* self, int column) {
    self->hideColumn(static_cast<int>(column));
}

void QTableView_ShowRow(QTableView* self, int row) {
    self->showRow(static_cast<int>(row));
}

void QTableView_ShowColumn(QTableView* self, int column) {
    self->showColumn(static_cast<int>(column));
}

void QTableView_ResizeRowToContents(QTableView* self, int row) {
    self->resizeRowToContents(static_cast<int>(row));
}

void QTableView_ResizeRowsToContents(QTableView* self) {
    self->resizeRowsToContents();
}

void QTableView_ResizeColumnToContents(QTableView* self, int column) {
    self->resizeColumnToContents(static_cast<int>(column));
}

void QTableView_ResizeColumnsToContents(QTableView* self) {
    self->resizeColumnsToContents();
}

void QTableView_SortByColumn(QTableView* self, int column, int order) {
    self->sortByColumn(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

void QTableView_SetShowGrid(QTableView* self, bool show) {
    self->setShowGrid(show);
}

libqt_string QTableView_Tr2(const char* s, const char* c) {
    QString _ret = QTableView::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QTableView_Tr3(const char* s, const char* c, int n) {
    QString _ret = QTableView::tr(s, c, static_cast<int>(n));
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
void QTableView_SetModel(QTableView* self, QAbstractItemModel* model) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setModel(model);
    } else {
        vqtableview->setModel(model);
    }
}

// Base class handler implementation
void QTableView_QBaseSetModel(QTableView* self, QAbstractItemModel* model) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_SetModel_IsBase(true);
        vqtableview->setModel(model);
    } else {
        vqtableview->setModel(model);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnSetModel(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_SetModel_Callback(reinterpret_cast<VirtualQTableView::QTableView_SetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_SetRootIndex(QTableView* self, QModelIndex* index) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setRootIndex(*index);
    } else {
        vqtableview->setRootIndex(*index);
    }
}

// Base class handler implementation
void QTableView_QBaseSetRootIndex(QTableView* self, QModelIndex* index) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_SetRootIndex_IsBase(true);
        vqtableview->setRootIndex(*index);
    } else {
        vqtableview->setRootIndex(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnSetRootIndex(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_SetRootIndex_Callback(reinterpret_cast<VirtualQTableView::QTableView_SetRootIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_SetSelectionModel(QTableView* self, QItemSelectionModel* selectionModel) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setSelectionModel(selectionModel);
    } else {
        vqtableview->setSelectionModel(selectionModel);
    }
}

// Base class handler implementation
void QTableView_QBaseSetSelectionModel(QTableView* self, QItemSelectionModel* selectionModel) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_SetSelectionModel_IsBase(true);
        vqtableview->setSelectionModel(selectionModel);
    } else {
        vqtableview->setSelectionModel(selectionModel);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnSetSelectionModel(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_SetSelectionModel_Callback(reinterpret_cast<VirtualQTableView::QTableView_SetSelectionModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_DoItemsLayout(QTableView* self) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->doItemsLayout();
    } else {
        vqtableview->doItemsLayout();
    }
}

// Base class handler implementation
void QTableView_QBaseDoItemsLayout(QTableView* self) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_DoItemsLayout_IsBase(true);
        vqtableview->doItemsLayout();
    } else {
        vqtableview->doItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnDoItemsLayout(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_DoItemsLayout_Callback(reinterpret_cast<VirtualQTableView::QTableView_DoItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QTableView_VisualRect(const QTableView* self, QModelIndex* index) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        return new QRect(vqtableview->visualRect(*index));
    } else {
        return new QRect(self->visualRect(*index));
    }
}

// Base class handler implementation
QRect* QTableView_QBaseVisualRect(const QTableView* self, QModelIndex* index) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_VisualRect_IsBase(true);
        return new QRect(vqtableview->visualRect(*index));
    } else {
        return new QRect(self->visualRect(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnVisualRect(const QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_VisualRect_Callback(reinterpret_cast<VirtualQTableView::QTableView_VisualRect_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_ScrollTo(QTableView* self, QModelIndex* index, int hint) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    } else {
        vqtableview->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    }
}

// Base class handler implementation
void QTableView_QBaseScrollTo(QTableView* self, QModelIndex* index, int hint) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_ScrollTo_IsBase(true);
        vqtableview->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    } else {
        vqtableview->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnScrollTo(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_ScrollTo_Callback(reinterpret_cast<VirtualQTableView::QTableView_ScrollTo_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QTableView_IndexAt(const QTableView* self, QPoint* p) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        return new QModelIndex(vqtableview->indexAt(*p));
    } else {
        return new QModelIndex(self->indexAt(*p));
    }
}

// Base class handler implementation
QModelIndex* QTableView_QBaseIndexAt(const QTableView* self, QPoint* p) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_IndexAt_IsBase(true);
        return new QModelIndex(vqtableview->indexAt(*p));
    } else {
        return new QModelIndex(self->indexAt(*p));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnIndexAt(const QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_IndexAt_Callback(reinterpret_cast<VirtualQTableView::QTableView_IndexAt_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_ScrollContentsBy(QTableView* self, int dx, int dy) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqtableview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void QTableView_QBaseScrollContentsBy(QTableView* self, int dx, int dy) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_ScrollContentsBy_IsBase(true);
        vqtableview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqtableview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnScrollContentsBy(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_ScrollContentsBy_Callback(reinterpret_cast<VirtualQTableView::QTableView_ScrollContentsBy_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_InitViewItemOption(const QTableView* self, QStyleOptionViewItem* option) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->initViewItemOption(option);
    } else {
        vqtableview->initViewItemOption(option);
    }
}

// Base class handler implementation
void QTableView_QBaseInitViewItemOption(const QTableView* self, QStyleOptionViewItem* option) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_InitViewItemOption_IsBase(true);
        vqtableview->initViewItemOption(option);
    } else {
        vqtableview->initViewItemOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnInitViewItemOption(const QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_InitViewItemOption_Callback(reinterpret_cast<VirtualQTableView::QTableView_InitViewItemOption_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_PaintEvent(QTableView* self, QPaintEvent* e) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->paintEvent(e);
    } else {
        vqtableview->paintEvent(e);
    }
}

// Base class handler implementation
void QTableView_QBasePaintEvent(QTableView* self, QPaintEvent* e) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_PaintEvent_IsBase(true);
        vqtableview->paintEvent(e);
    } else {
        vqtableview->paintEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnPaintEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_PaintEvent_Callback(reinterpret_cast<VirtualQTableView::QTableView_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_TimerEvent(QTableView* self, QTimerEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->timerEvent(event);
    } else {
        vqtableview->timerEvent(event);
    }
}

// Base class handler implementation
void QTableView_QBaseTimerEvent(QTableView* self, QTimerEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_TimerEvent_IsBase(true);
        vqtableview->timerEvent(event);
    } else {
        vqtableview->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnTimerEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_TimerEvent_Callback(reinterpret_cast<VirtualQTableView::QTableView_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QTableView_HorizontalOffset(const QTableView* self) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        return vqtableview->horizontalOffset();
    } else {
        return vqtableview->horizontalOffset();
    }
}

// Base class handler implementation
int QTableView_QBaseHorizontalOffset(const QTableView* self) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_HorizontalOffset_IsBase(true);
        return vqtableview->horizontalOffset();
    } else {
        return vqtableview->horizontalOffset();
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnHorizontalOffset(const QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_HorizontalOffset_Callback(reinterpret_cast<VirtualQTableView::QTableView_HorizontalOffset_Callback>(slot));
    }
}

// Derived class handler implementation
int QTableView_VerticalOffset(const QTableView* self) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        return vqtableview->verticalOffset();
    } else {
        return vqtableview->verticalOffset();
    }
}

// Base class handler implementation
int QTableView_QBaseVerticalOffset(const QTableView* self) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_VerticalOffset_IsBase(true);
        return vqtableview->verticalOffset();
    } else {
        return vqtableview->verticalOffset();
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnVerticalOffset(const QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_VerticalOffset_Callback(reinterpret_cast<VirtualQTableView::QTableView_VerticalOffset_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QTableView_MoveCursor(QTableView* self, int cursorAction, int modifiers) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        return new QModelIndex(vqtableview->moveCursor(static_cast<VirtualQTableView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* QTableView_QBaseMoveCursor(QTableView* self, int cursorAction, int modifiers) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_MoveCursor_IsBase(true);
        return new QModelIndex(vqtableview->moveCursor(static_cast<VirtualQTableView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnMoveCursor(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_MoveCursor_Callback(reinterpret_cast<VirtualQTableView::QTableView_MoveCursor_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_SetSelection(QTableView* self, QRect* rect, int command) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        vqtableview->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

// Base class handler implementation
void QTableView_QBaseSetSelection(QTableView* self, QRect* rect, int command) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_SetSelection_IsBase(true);
        vqtableview->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        vqtableview->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnSetSelection(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_SetSelection_Callback(reinterpret_cast<VirtualQTableView::QTableView_SetSelection_Callback>(slot));
    }
}

// Derived class handler implementation
QRegion* QTableView_VisualRegionForSelection(const QTableView* self, QItemSelection* selection) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        return new QRegion(vqtableview->visualRegionForSelection(*selection));
    }
    return {};
}

// Base class handler implementation
QRegion* QTableView_QBaseVisualRegionForSelection(const QTableView* self, QItemSelection* selection) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_VisualRegionForSelection_IsBase(true);
        return new QRegion(vqtableview->visualRegionForSelection(*selection));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnVisualRegionForSelection(const QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_VisualRegionForSelection_Callback(reinterpret_cast<VirtualQTableView::QTableView_VisualRegionForSelection_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QTableView_SelectedIndexes(const QTableView* self) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        QModelIndexList _ret = vqtableview->selectedIndexes();
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
        QModelIndexList _ret = vqtableview->selectedIndexes();
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
libqt_list /* of QModelIndex* */ QTableView_QBaseSelectedIndexes(const QTableView* self) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_SelectedIndexes_IsBase(true);
        QModelIndexList _ret = vqtableview->selectedIndexes();
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
        QModelIndexList _ret = vqtableview->selectedIndexes();
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
void QTableView_OnSelectedIndexes(const QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_SelectedIndexes_Callback(reinterpret_cast<VirtualQTableView::QTableView_SelectedIndexes_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_UpdateGeometries(QTableView* self) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->updateGeometries();
    } else {
        vqtableview->updateGeometries();
    }
}

// Base class handler implementation
void QTableView_QBaseUpdateGeometries(QTableView* self) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_UpdateGeometries_IsBase(true);
        vqtableview->updateGeometries();
    } else {
        vqtableview->updateGeometries();
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnUpdateGeometries(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_UpdateGeometries_Callback(reinterpret_cast<VirtualQTableView::QTableView_UpdateGeometries_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QTableView_ViewportSizeHint(const QTableView* self) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        return new QSize(vqtableview->viewportSizeHint());
    }
    return {};
}

// Base class handler implementation
QSize* QTableView_QBaseViewportSizeHint(const QTableView* self) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_ViewportSizeHint_IsBase(true);
        return new QSize(vqtableview->viewportSizeHint());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnViewportSizeHint(const QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_ViewportSizeHint_Callback(reinterpret_cast<VirtualQTableView::QTableView_ViewportSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QTableView_SizeHintForRow(const QTableView* self, int row) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        return vqtableview->sizeHintForRow(static_cast<int>(row));
    } else {
        return vqtableview->sizeHintForRow(static_cast<int>(row));
    }
}

// Base class handler implementation
int QTableView_QBaseSizeHintForRow(const QTableView* self, int row) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_SizeHintForRow_IsBase(true);
        return vqtableview->sizeHintForRow(static_cast<int>(row));
    } else {
        return vqtableview->sizeHintForRow(static_cast<int>(row));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnSizeHintForRow(const QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_SizeHintForRow_Callback(reinterpret_cast<VirtualQTableView::QTableView_SizeHintForRow_Callback>(slot));
    }
}

// Derived class handler implementation
int QTableView_SizeHintForColumn(const QTableView* self, int column) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        return vqtableview->sizeHintForColumn(static_cast<int>(column));
    } else {
        return vqtableview->sizeHintForColumn(static_cast<int>(column));
    }
}

// Base class handler implementation
int QTableView_QBaseSizeHintForColumn(const QTableView* self, int column) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_SizeHintForColumn_IsBase(true);
        return vqtableview->sizeHintForColumn(static_cast<int>(column));
    } else {
        return vqtableview->sizeHintForColumn(static_cast<int>(column));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnSizeHintForColumn(const QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_SizeHintForColumn_Callback(reinterpret_cast<VirtualQTableView::QTableView_SizeHintForColumn_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_VerticalScrollbarAction(QTableView* self, int action) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->verticalScrollbarAction(static_cast<int>(action));
    } else {
        vqtableview->verticalScrollbarAction(static_cast<int>(action));
    }
}

// Base class handler implementation
void QTableView_QBaseVerticalScrollbarAction(QTableView* self, int action) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_VerticalScrollbarAction_IsBase(true);
        vqtableview->verticalScrollbarAction(static_cast<int>(action));
    } else {
        vqtableview->verticalScrollbarAction(static_cast<int>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnVerticalScrollbarAction(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_VerticalScrollbarAction_Callback(reinterpret_cast<VirtualQTableView::QTableView_VerticalScrollbarAction_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_HorizontalScrollbarAction(QTableView* self, int action) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->horizontalScrollbarAction(static_cast<int>(action));
    } else {
        vqtableview->horizontalScrollbarAction(static_cast<int>(action));
    }
}

// Base class handler implementation
void QTableView_QBaseHorizontalScrollbarAction(QTableView* self, int action) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_HorizontalScrollbarAction_IsBase(true);
        vqtableview->horizontalScrollbarAction(static_cast<int>(action));
    } else {
        vqtableview->horizontalScrollbarAction(static_cast<int>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnHorizontalScrollbarAction(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_HorizontalScrollbarAction_Callback(reinterpret_cast<VirtualQTableView::QTableView_HorizontalScrollbarAction_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTableView_IsIndexHidden(const QTableView* self, QModelIndex* index) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        return vqtableview->isIndexHidden(*index);
    } else {
        return vqtableview->isIndexHidden(*index);
    }
}

// Base class handler implementation
bool QTableView_QBaseIsIndexHidden(const QTableView* self, QModelIndex* index) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_IsIndexHidden_IsBase(true);
        return vqtableview->isIndexHidden(*index);
    } else {
        return vqtableview->isIndexHidden(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnIsIndexHidden(const QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_IsIndexHidden_Callback(reinterpret_cast<VirtualQTableView::QTableView_IsIndexHidden_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_SelectionChanged(QTableView* self, QItemSelection* selected, QItemSelection* deselected) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->selectionChanged(*selected, *deselected);
    } else {
        vqtableview->selectionChanged(*selected, *deselected);
    }
}

// Base class handler implementation
void QTableView_QBaseSelectionChanged(QTableView* self, QItemSelection* selected, QItemSelection* deselected) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_SelectionChanged_IsBase(true);
        vqtableview->selectionChanged(*selected, *deselected);
    } else {
        vqtableview->selectionChanged(*selected, *deselected);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnSelectionChanged(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_SelectionChanged_Callback(reinterpret_cast<VirtualQTableView::QTableView_SelectionChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_CurrentChanged(QTableView* self, QModelIndex* current, QModelIndex* previous) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->currentChanged(*current, *previous);
    } else {
        vqtableview->currentChanged(*current, *previous);
    }
}

// Base class handler implementation
void QTableView_QBaseCurrentChanged(QTableView* self, QModelIndex* current, QModelIndex* previous) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_CurrentChanged_IsBase(true);
        vqtableview->currentChanged(*current, *previous);
    } else {
        vqtableview->currentChanged(*current, *previous);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnCurrentChanged(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_CurrentChanged_Callback(reinterpret_cast<VirtualQTableView::QTableView_CurrentChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_KeyboardSearch(QTableView* self, libqt_string search) {
    QString search_QString = QString::fromUtf8(search.data, search.len);
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->keyboardSearch(search_QString);
    } else {
        vqtableview->keyboardSearch(search_QString);
    }
}

// Base class handler implementation
void QTableView_QBaseKeyboardSearch(QTableView* self, libqt_string search) {
    QString search_QString = QString::fromUtf8(search.data, search.len);
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_KeyboardSearch_IsBase(true);
        vqtableview->keyboardSearch(search_QString);
    } else {
        vqtableview->keyboardSearch(search_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnKeyboardSearch(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_KeyboardSearch_Callback(reinterpret_cast<VirtualQTableView::QTableView_KeyboardSearch_Callback>(slot));
    }
}

// Derived class handler implementation
QAbstractItemDelegate* QTableView_ItemDelegateForIndex(const QTableView* self, QModelIndex* index) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        return vqtableview->itemDelegateForIndex(*index);
    } else {
        return vqtableview->itemDelegateForIndex(*index);
    }
}

// Base class handler implementation
QAbstractItemDelegate* QTableView_QBaseItemDelegateForIndex(const QTableView* self, QModelIndex* index) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_ItemDelegateForIndex_IsBase(true);
        return vqtableview->itemDelegateForIndex(*index);
    } else {
        return vqtableview->itemDelegateForIndex(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnItemDelegateForIndex(const QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_ItemDelegateForIndex_Callback(reinterpret_cast<VirtualQTableView::QTableView_ItemDelegateForIndex_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QTableView_InputMethodQuery(const QTableView* self, int query) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        return new QVariant(vqtableview->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

// Base class handler implementation
QVariant* QTableView_QBaseInputMethodQuery(const QTableView* self, int query) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_InputMethodQuery_IsBase(true);
        return new QVariant(vqtableview->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnInputMethodQuery(const QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_InputMethodQuery_Callback(reinterpret_cast<VirtualQTableView::QTableView_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_Reset(QTableView* self) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->reset();
    } else {
        vqtableview->reset();
    }
}

// Base class handler implementation
void QTableView_QBaseReset(QTableView* self) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_Reset_IsBase(true);
        vqtableview->reset();
    } else {
        vqtableview->reset();
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnReset(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_Reset_Callback(reinterpret_cast<VirtualQTableView::QTableView_Reset_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_SelectAll(QTableView* self) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->selectAll();
    } else {
        vqtableview->selectAll();
    }
}

// Base class handler implementation
void QTableView_QBaseSelectAll(QTableView* self) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_SelectAll_IsBase(true);
        vqtableview->selectAll();
    } else {
        vqtableview->selectAll();
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnSelectAll(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_SelectAll_Callback(reinterpret_cast<VirtualQTableView::QTableView_SelectAll_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_DataChanged(QTableView* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list /* of int */ roles) {
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data.ints);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->dataChanged(*topLeft, *bottomRight, roles_QList);
    } else {
        vqtableview->dataChanged(*topLeft, *bottomRight, roles_QList);
    }
}

// Base class handler implementation
void QTableView_QBaseDataChanged(QTableView* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list /* of int */ roles) {
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data.ints);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_DataChanged_IsBase(true);
        vqtableview->dataChanged(*topLeft, *bottomRight, roles_QList);
    } else {
        vqtableview->dataChanged(*topLeft, *bottomRight, roles_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnDataChanged(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_DataChanged_Callback(reinterpret_cast<VirtualQTableView::QTableView_DataChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_RowsInserted(QTableView* self, QModelIndex* parent, int start, int end) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        vqtableview->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Base class handler implementation
void QTableView_QBaseRowsInserted(QTableView* self, QModelIndex* parent, int start, int end) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_RowsInserted_IsBase(true);
        vqtableview->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        vqtableview->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnRowsInserted(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_RowsInserted_Callback(reinterpret_cast<VirtualQTableView::QTableView_RowsInserted_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_RowsAboutToBeRemoved(QTableView* self, QModelIndex* parent, int start, int end) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        vqtableview->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Base class handler implementation
void QTableView_QBaseRowsAboutToBeRemoved(QTableView* self, QModelIndex* parent, int start, int end) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_RowsAboutToBeRemoved_IsBase(true);
        vqtableview->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        vqtableview->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnRowsAboutToBeRemoved(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_RowsAboutToBeRemoved_Callback(reinterpret_cast<VirtualQTableView::QTableView_RowsAboutToBeRemoved_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_UpdateEditorData(QTableView* self) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->updateEditorData();
    } else {
        vqtableview->updateEditorData();
    }
}

// Base class handler implementation
void QTableView_QBaseUpdateEditorData(QTableView* self) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_UpdateEditorData_IsBase(true);
        vqtableview->updateEditorData();
    } else {
        vqtableview->updateEditorData();
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnUpdateEditorData(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_UpdateEditorData_Callback(reinterpret_cast<VirtualQTableView::QTableView_UpdateEditorData_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_UpdateEditorGeometries(QTableView* self) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->updateEditorGeometries();
    } else {
        vqtableview->updateEditorGeometries();
    }
}

// Base class handler implementation
void QTableView_QBaseUpdateEditorGeometries(QTableView* self) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_UpdateEditorGeometries_IsBase(true);
        vqtableview->updateEditorGeometries();
    } else {
        vqtableview->updateEditorGeometries();
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnUpdateEditorGeometries(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_UpdateEditorGeometries_Callback(reinterpret_cast<VirtualQTableView::QTableView_UpdateEditorGeometries_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_VerticalScrollbarValueChanged(QTableView* self, int value) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->verticalScrollbarValueChanged(static_cast<int>(value));
    } else {
        vqtableview->verticalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Base class handler implementation
void QTableView_QBaseVerticalScrollbarValueChanged(QTableView* self, int value) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_VerticalScrollbarValueChanged_IsBase(true);
        vqtableview->verticalScrollbarValueChanged(static_cast<int>(value));
    } else {
        vqtableview->verticalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnVerticalScrollbarValueChanged(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_VerticalScrollbarValueChanged_Callback(reinterpret_cast<VirtualQTableView::QTableView_VerticalScrollbarValueChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_HorizontalScrollbarValueChanged(QTableView* self, int value) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->horizontalScrollbarValueChanged(static_cast<int>(value));
    } else {
        vqtableview->horizontalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Base class handler implementation
void QTableView_QBaseHorizontalScrollbarValueChanged(QTableView* self, int value) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_HorizontalScrollbarValueChanged_IsBase(true);
        vqtableview->horizontalScrollbarValueChanged(static_cast<int>(value));
    } else {
        vqtableview->horizontalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnHorizontalScrollbarValueChanged(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_HorizontalScrollbarValueChanged_Callback(reinterpret_cast<VirtualQTableView::QTableView_HorizontalScrollbarValueChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_CloseEditor(QTableView* self, QWidget* editor, int hint) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else {
        vqtableview->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    }
}

// Base class handler implementation
void QTableView_QBaseCloseEditor(QTableView* self, QWidget* editor, int hint) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_CloseEditor_IsBase(true);
        vqtableview->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else {
        vqtableview->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnCloseEditor(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_CloseEditor_Callback(reinterpret_cast<VirtualQTableView::QTableView_CloseEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_CommitData(QTableView* self, QWidget* editor) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->commitData(editor);
    } else {
        vqtableview->commitData(editor);
    }
}

// Base class handler implementation
void QTableView_QBaseCommitData(QTableView* self, QWidget* editor) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_CommitData_IsBase(true);
        vqtableview->commitData(editor);
    } else {
        vqtableview->commitData(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnCommitData(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_CommitData_Callback(reinterpret_cast<VirtualQTableView::QTableView_CommitData_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_EditorDestroyed(QTableView* self, QObject* editor) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->editorDestroyed(editor);
    } else {
        vqtableview->editorDestroyed(editor);
    }
}

// Base class handler implementation
void QTableView_QBaseEditorDestroyed(QTableView* self, QObject* editor) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_EditorDestroyed_IsBase(true);
        vqtableview->editorDestroyed(editor);
    } else {
        vqtableview->editorDestroyed(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnEditorDestroyed(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_EditorDestroyed_Callback(reinterpret_cast<VirtualQTableView::QTableView_EditorDestroyed_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTableView_Edit2(QTableView* self, QModelIndex* index, int trigger, QEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        return vqtableview->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else {
        return vqtableview->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    }
}

// Base class handler implementation
bool QTableView_QBaseEdit2(QTableView* self, QModelIndex* index, int trigger, QEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_Edit2_IsBase(true);
        return vqtableview->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else {
        return vqtableview->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnEdit2(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_Edit2_Callback(reinterpret_cast<VirtualQTableView::QTableView_Edit2_Callback>(slot));
    }
}

// Derived class handler implementation
int QTableView_SelectionCommand(const QTableView* self, QModelIndex* index, QEvent* event) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        return static_cast<int>(vqtableview->selectionCommand(*index, event));
    } else {
        return static_cast<int>(vqtableview->selectionCommand(*index, event));
    }
}

// Base class handler implementation
int QTableView_QBaseSelectionCommand(const QTableView* self, QModelIndex* index, QEvent* event) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_SelectionCommand_IsBase(true);
        return static_cast<int>(vqtableview->selectionCommand(*index, event));
    } else {
        return static_cast<int>(vqtableview->selectionCommand(*index, event));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnSelectionCommand(const QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_SelectionCommand_Callback(reinterpret_cast<VirtualQTableView::QTableView_SelectionCommand_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_StartDrag(QTableView* self, int supportedActions) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else {
        vqtableview->startDrag(static_cast<Qt::DropActions>(supportedActions));
    }
}

// Base class handler implementation
void QTableView_QBaseStartDrag(QTableView* self, int supportedActions) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_StartDrag_IsBase(true);
        vqtableview->startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else {
        vqtableview->startDrag(static_cast<Qt::DropActions>(supportedActions));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnStartDrag(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_StartDrag_Callback(reinterpret_cast<VirtualQTableView::QTableView_StartDrag_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTableView_FocusNextPrevChild(QTableView* self, bool next) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        return vqtableview->focusNextPrevChild(next);
    } else {
        return vqtableview->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QTableView_QBaseFocusNextPrevChild(QTableView* self, bool next) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_FocusNextPrevChild_IsBase(true);
        return vqtableview->focusNextPrevChild(next);
    } else {
        return vqtableview->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnFocusNextPrevChild(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQTableView::QTableView_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTableView_Event(QTableView* self, QEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        return vqtableview->event(event);
    } else {
        return vqtableview->event(event);
    }
}

// Base class handler implementation
bool QTableView_QBaseEvent(QTableView* self, QEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_Event_IsBase(true);
        return vqtableview->event(event);
    } else {
        return vqtableview->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_Event_Callback(reinterpret_cast<VirtualQTableView::QTableView_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTableView_ViewportEvent(QTableView* self, QEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        return vqtableview->viewportEvent(event);
    } else {
        return vqtableview->viewportEvent(event);
    }
}

// Base class handler implementation
bool QTableView_QBaseViewportEvent(QTableView* self, QEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_ViewportEvent_IsBase(true);
        return vqtableview->viewportEvent(event);
    } else {
        return vqtableview->viewportEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnViewportEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_ViewportEvent_Callback(reinterpret_cast<VirtualQTableView::QTableView_ViewportEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_MousePressEvent(QTableView* self, QMouseEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->mousePressEvent(event);
    } else {
        vqtableview->mousePressEvent(event);
    }
}

// Base class handler implementation
void QTableView_QBaseMousePressEvent(QTableView* self, QMouseEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_MousePressEvent_IsBase(true);
        vqtableview->mousePressEvent(event);
    } else {
        vqtableview->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnMousePressEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_MousePressEvent_Callback(reinterpret_cast<VirtualQTableView::QTableView_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_MouseMoveEvent(QTableView* self, QMouseEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->mouseMoveEvent(event);
    } else {
        vqtableview->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QTableView_QBaseMouseMoveEvent(QTableView* self, QMouseEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_MouseMoveEvent_IsBase(true);
        vqtableview->mouseMoveEvent(event);
    } else {
        vqtableview->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnMouseMoveEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_MouseMoveEvent_Callback(reinterpret_cast<VirtualQTableView::QTableView_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_MouseReleaseEvent(QTableView* self, QMouseEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->mouseReleaseEvent(event);
    } else {
        vqtableview->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QTableView_QBaseMouseReleaseEvent(QTableView* self, QMouseEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_MouseReleaseEvent_IsBase(true);
        vqtableview->mouseReleaseEvent(event);
    } else {
        vqtableview->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnMouseReleaseEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQTableView::QTableView_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_MouseDoubleClickEvent(QTableView* self, QMouseEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->mouseDoubleClickEvent(event);
    } else {
        vqtableview->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QTableView_QBaseMouseDoubleClickEvent(QTableView* self, QMouseEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_MouseDoubleClickEvent_IsBase(true);
        vqtableview->mouseDoubleClickEvent(event);
    } else {
        vqtableview->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnMouseDoubleClickEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQTableView::QTableView_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_DragEnterEvent(QTableView* self, QDragEnterEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->dragEnterEvent(event);
    } else {
        vqtableview->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QTableView_QBaseDragEnterEvent(QTableView* self, QDragEnterEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_DragEnterEvent_IsBase(true);
        vqtableview->dragEnterEvent(event);
    } else {
        vqtableview->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnDragEnterEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_DragEnterEvent_Callback(reinterpret_cast<VirtualQTableView::QTableView_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_DragMoveEvent(QTableView* self, QDragMoveEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->dragMoveEvent(event);
    } else {
        vqtableview->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QTableView_QBaseDragMoveEvent(QTableView* self, QDragMoveEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_DragMoveEvent_IsBase(true);
        vqtableview->dragMoveEvent(event);
    } else {
        vqtableview->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnDragMoveEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_DragMoveEvent_Callback(reinterpret_cast<VirtualQTableView::QTableView_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_DragLeaveEvent(QTableView* self, QDragLeaveEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->dragLeaveEvent(event);
    } else {
        vqtableview->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QTableView_QBaseDragLeaveEvent(QTableView* self, QDragLeaveEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_DragLeaveEvent_IsBase(true);
        vqtableview->dragLeaveEvent(event);
    } else {
        vqtableview->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnDragLeaveEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_DragLeaveEvent_Callback(reinterpret_cast<VirtualQTableView::QTableView_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_DropEvent(QTableView* self, QDropEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->dropEvent(event);
    } else {
        vqtableview->dropEvent(event);
    }
}

// Base class handler implementation
void QTableView_QBaseDropEvent(QTableView* self, QDropEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_DropEvent_IsBase(true);
        vqtableview->dropEvent(event);
    } else {
        vqtableview->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnDropEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_DropEvent_Callback(reinterpret_cast<VirtualQTableView::QTableView_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_FocusInEvent(QTableView* self, QFocusEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->focusInEvent(event);
    } else {
        vqtableview->focusInEvent(event);
    }
}

// Base class handler implementation
void QTableView_QBaseFocusInEvent(QTableView* self, QFocusEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_FocusInEvent_IsBase(true);
        vqtableview->focusInEvent(event);
    } else {
        vqtableview->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnFocusInEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_FocusInEvent_Callback(reinterpret_cast<VirtualQTableView::QTableView_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_FocusOutEvent(QTableView* self, QFocusEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->focusOutEvent(event);
    } else {
        vqtableview->focusOutEvent(event);
    }
}

// Base class handler implementation
void QTableView_QBaseFocusOutEvent(QTableView* self, QFocusEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_FocusOutEvent_IsBase(true);
        vqtableview->focusOutEvent(event);
    } else {
        vqtableview->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnFocusOutEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_FocusOutEvent_Callback(reinterpret_cast<VirtualQTableView::QTableView_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_KeyPressEvent(QTableView* self, QKeyEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->keyPressEvent(event);
    } else {
        vqtableview->keyPressEvent(event);
    }
}

// Base class handler implementation
void QTableView_QBaseKeyPressEvent(QTableView* self, QKeyEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_KeyPressEvent_IsBase(true);
        vqtableview->keyPressEvent(event);
    } else {
        vqtableview->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnKeyPressEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_KeyPressEvent_Callback(reinterpret_cast<VirtualQTableView::QTableView_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_ResizeEvent(QTableView* self, QResizeEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->resizeEvent(event);
    } else {
        vqtableview->resizeEvent(event);
    }
}

// Base class handler implementation
void QTableView_QBaseResizeEvent(QTableView* self, QResizeEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_ResizeEvent_IsBase(true);
        vqtableview->resizeEvent(event);
    } else {
        vqtableview->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnResizeEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_ResizeEvent_Callback(reinterpret_cast<VirtualQTableView::QTableView_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_InputMethodEvent(QTableView* self, QInputMethodEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->inputMethodEvent(event);
    } else {
        vqtableview->inputMethodEvent(event);
    }
}

// Base class handler implementation
void QTableView_QBaseInputMethodEvent(QTableView* self, QInputMethodEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_InputMethodEvent_IsBase(true);
        vqtableview->inputMethodEvent(event);
    } else {
        vqtableview->inputMethodEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnInputMethodEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_InputMethodEvent_Callback(reinterpret_cast<VirtualQTableView::QTableView_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTableView_EventFilter(QTableView* self, QObject* object, QEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        return vqtableview->eventFilter(object, event);
    } else {
        return vqtableview->eventFilter(object, event);
    }
}

// Base class handler implementation
bool QTableView_QBaseEventFilter(QTableView* self, QObject* object, QEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_EventFilter_IsBase(true);
        return vqtableview->eventFilter(object, event);
    } else {
        return vqtableview->eventFilter(object, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnEventFilter(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_EventFilter_Callback(reinterpret_cast<VirtualQTableView::QTableView_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QTableView_MinimumSizeHint(const QTableView* self) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        return new QSize(vqtableview->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QTableView_QBaseMinimumSizeHint(const QTableView* self) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_MinimumSizeHint_IsBase(true);
        return new QSize(vqtableview->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnMinimumSizeHint(const QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_MinimumSizeHint_Callback(reinterpret_cast<VirtualQTableView::QTableView_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QTableView_SizeHint(const QTableView* self) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        return new QSize(vqtableview->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QTableView_QBaseSizeHint(const QTableView* self) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_SizeHint_IsBase(true);
        return new QSize(vqtableview->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnSizeHint(const QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_SizeHint_Callback(reinterpret_cast<VirtualQTableView::QTableView_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_SetupViewport(QTableView* self, QWidget* viewport) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setupViewport(viewport);
    } else {
        vqtableview->setupViewport(viewport);
    }
}

// Base class handler implementation
void QTableView_QBaseSetupViewport(QTableView* self, QWidget* viewport) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_SetupViewport_IsBase(true);
        vqtableview->setupViewport(viewport);
    } else {
        vqtableview->setupViewport(viewport);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnSetupViewport(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_SetupViewport_Callback(reinterpret_cast<VirtualQTableView::QTableView_SetupViewport_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_WheelEvent(QTableView* self, QWheelEvent* param1) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->wheelEvent(param1);
    } else {
        vqtableview->wheelEvent(param1);
    }
}

// Base class handler implementation
void QTableView_QBaseWheelEvent(QTableView* self, QWheelEvent* param1) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_WheelEvent_IsBase(true);
        vqtableview->wheelEvent(param1);
    } else {
        vqtableview->wheelEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnWheelEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_WheelEvent_Callback(reinterpret_cast<VirtualQTableView::QTableView_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_ContextMenuEvent(QTableView* self, QContextMenuEvent* param1) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->contextMenuEvent(param1);
    } else {
        vqtableview->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void QTableView_QBaseContextMenuEvent(QTableView* self, QContextMenuEvent* param1) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_ContextMenuEvent_IsBase(true);
        vqtableview->contextMenuEvent(param1);
    } else {
        vqtableview->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnContextMenuEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_ContextMenuEvent_Callback(reinterpret_cast<VirtualQTableView::QTableView_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_ChangeEvent(QTableView* self, QEvent* param1) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->changeEvent(param1);
    } else {
        vqtableview->changeEvent(param1);
    }
}

// Base class handler implementation
void QTableView_QBaseChangeEvent(QTableView* self, QEvent* param1) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_ChangeEvent_IsBase(true);
        vqtableview->changeEvent(param1);
    } else {
        vqtableview->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnChangeEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_ChangeEvent_Callback(reinterpret_cast<VirtualQTableView::QTableView_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_InitStyleOption(const QTableView* self, QStyleOptionFrame* option) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->initStyleOption(option);
    } else {
        vqtableview->initStyleOption(option);
    }
}

// Base class handler implementation
void QTableView_QBaseInitStyleOption(const QTableView* self, QStyleOptionFrame* option) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_InitStyleOption_IsBase(true);
        vqtableview->initStyleOption(option);
    } else {
        vqtableview->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnInitStyleOption(const QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_InitStyleOption_Callback(reinterpret_cast<VirtualQTableView::QTableView_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QTableView_DevType(const QTableView* self) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        return vqtableview->devType();
    } else {
        return vqtableview->devType();
    }
}

// Base class handler implementation
int QTableView_QBaseDevType(const QTableView* self) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_DevType_IsBase(true);
        return vqtableview->devType();
    } else {
        return vqtableview->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnDevType(const QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_DevType_Callback(reinterpret_cast<VirtualQTableView::QTableView_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_SetVisible(QTableView* self, bool visible) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setVisible(visible);
    } else {
        vqtableview->setVisible(visible);
    }
}

// Base class handler implementation
void QTableView_QBaseSetVisible(QTableView* self, bool visible) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_SetVisible_IsBase(true);
        vqtableview->setVisible(visible);
    } else {
        vqtableview->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnSetVisible(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_SetVisible_Callback(reinterpret_cast<VirtualQTableView::QTableView_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QTableView_HeightForWidth(const QTableView* self, int param1) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        return vqtableview->heightForWidth(static_cast<int>(param1));
    } else {
        return vqtableview->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QTableView_QBaseHeightForWidth(const QTableView* self, int param1) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_HeightForWidth_IsBase(true);
        return vqtableview->heightForWidth(static_cast<int>(param1));
    } else {
        return vqtableview->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnHeightForWidth(const QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_HeightForWidth_Callback(reinterpret_cast<VirtualQTableView::QTableView_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTableView_HasHeightForWidth(const QTableView* self) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        return vqtableview->hasHeightForWidth();
    } else {
        return vqtableview->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QTableView_QBaseHasHeightForWidth(const QTableView* self) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_HasHeightForWidth_IsBase(true);
        return vqtableview->hasHeightForWidth();
    } else {
        return vqtableview->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnHasHeightForWidth(const QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_HasHeightForWidth_Callback(reinterpret_cast<VirtualQTableView::QTableView_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QTableView_PaintEngine(const QTableView* self) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        return vqtableview->paintEngine();
    } else {
        return vqtableview->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QTableView_QBasePaintEngine(const QTableView* self) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_PaintEngine_IsBase(true);
        return vqtableview->paintEngine();
    } else {
        return vqtableview->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnPaintEngine(const QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_PaintEngine_Callback(reinterpret_cast<VirtualQTableView::QTableView_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_KeyReleaseEvent(QTableView* self, QKeyEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->keyReleaseEvent(event);
    } else {
        vqtableview->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QTableView_QBaseKeyReleaseEvent(QTableView* self, QKeyEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_KeyReleaseEvent_IsBase(true);
        vqtableview->keyReleaseEvent(event);
    } else {
        vqtableview->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnKeyReleaseEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQTableView::QTableView_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_EnterEvent(QTableView* self, QEnterEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->enterEvent(event);
    } else {
        vqtableview->enterEvent(event);
    }
}

// Base class handler implementation
void QTableView_QBaseEnterEvent(QTableView* self, QEnterEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_EnterEvent_IsBase(true);
        vqtableview->enterEvent(event);
    } else {
        vqtableview->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnEnterEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_EnterEvent_Callback(reinterpret_cast<VirtualQTableView::QTableView_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_LeaveEvent(QTableView* self, QEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->leaveEvent(event);
    } else {
        vqtableview->leaveEvent(event);
    }
}

// Base class handler implementation
void QTableView_QBaseLeaveEvent(QTableView* self, QEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_LeaveEvent_IsBase(true);
        vqtableview->leaveEvent(event);
    } else {
        vqtableview->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnLeaveEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_LeaveEvent_Callback(reinterpret_cast<VirtualQTableView::QTableView_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_MoveEvent(QTableView* self, QMoveEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->moveEvent(event);
    } else {
        vqtableview->moveEvent(event);
    }
}

// Base class handler implementation
void QTableView_QBaseMoveEvent(QTableView* self, QMoveEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_MoveEvent_IsBase(true);
        vqtableview->moveEvent(event);
    } else {
        vqtableview->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnMoveEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_MoveEvent_Callback(reinterpret_cast<VirtualQTableView::QTableView_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_CloseEvent(QTableView* self, QCloseEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->closeEvent(event);
    } else {
        vqtableview->closeEvent(event);
    }
}

// Base class handler implementation
void QTableView_QBaseCloseEvent(QTableView* self, QCloseEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_CloseEvent_IsBase(true);
        vqtableview->closeEvent(event);
    } else {
        vqtableview->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnCloseEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_CloseEvent_Callback(reinterpret_cast<VirtualQTableView::QTableView_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_TabletEvent(QTableView* self, QTabletEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->tabletEvent(event);
    } else {
        vqtableview->tabletEvent(event);
    }
}

// Base class handler implementation
void QTableView_QBaseTabletEvent(QTableView* self, QTabletEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_TabletEvent_IsBase(true);
        vqtableview->tabletEvent(event);
    } else {
        vqtableview->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnTabletEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_TabletEvent_Callback(reinterpret_cast<VirtualQTableView::QTableView_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_ActionEvent(QTableView* self, QActionEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->actionEvent(event);
    } else {
        vqtableview->actionEvent(event);
    }
}

// Base class handler implementation
void QTableView_QBaseActionEvent(QTableView* self, QActionEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_ActionEvent_IsBase(true);
        vqtableview->actionEvent(event);
    } else {
        vqtableview->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnActionEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_ActionEvent_Callback(reinterpret_cast<VirtualQTableView::QTableView_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_ShowEvent(QTableView* self, QShowEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->showEvent(event);
    } else {
        vqtableview->showEvent(event);
    }
}

// Base class handler implementation
void QTableView_QBaseShowEvent(QTableView* self, QShowEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_ShowEvent_IsBase(true);
        vqtableview->showEvent(event);
    } else {
        vqtableview->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnShowEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_ShowEvent_Callback(reinterpret_cast<VirtualQTableView::QTableView_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_HideEvent(QTableView* self, QHideEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->hideEvent(event);
    } else {
        vqtableview->hideEvent(event);
    }
}

// Base class handler implementation
void QTableView_QBaseHideEvent(QTableView* self, QHideEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_HideEvent_IsBase(true);
        vqtableview->hideEvent(event);
    } else {
        vqtableview->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnHideEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_HideEvent_Callback(reinterpret_cast<VirtualQTableView::QTableView_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTableView_NativeEvent(QTableView* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        return vqtableview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqtableview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QTableView_QBaseNativeEvent(QTableView* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_NativeEvent_IsBase(true);
        return vqtableview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqtableview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnNativeEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_NativeEvent_Callback(reinterpret_cast<VirtualQTableView::QTableView_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QTableView_Metric(const QTableView* self, int param1) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        return vqtableview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqtableview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QTableView_QBaseMetric(const QTableView* self, int param1) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_Metric_IsBase(true);
        return vqtableview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqtableview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnMetric(const QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_Metric_Callback(reinterpret_cast<VirtualQTableView::QTableView_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_InitPainter(const QTableView* self, QPainter* painter) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->initPainter(painter);
    } else {
        vqtableview->initPainter(painter);
    }
}

// Base class handler implementation
void QTableView_QBaseInitPainter(const QTableView* self, QPainter* painter) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_InitPainter_IsBase(true);
        vqtableview->initPainter(painter);
    } else {
        vqtableview->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnInitPainter(const QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_InitPainter_Callback(reinterpret_cast<VirtualQTableView::QTableView_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QTableView_Redirected(const QTableView* self, QPoint* offset) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        return vqtableview->redirected(offset);
    } else {
        return vqtableview->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QTableView_QBaseRedirected(const QTableView* self, QPoint* offset) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_Redirected_IsBase(true);
        return vqtableview->redirected(offset);
    } else {
        return vqtableview->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnRedirected(const QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_Redirected_Callback(reinterpret_cast<VirtualQTableView::QTableView_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QTableView_SharedPainter(const QTableView* self) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        return vqtableview->sharedPainter();
    } else {
        return vqtableview->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QTableView_QBaseSharedPainter(const QTableView* self) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_SharedPainter_IsBase(true);
        return vqtableview->sharedPainter();
    } else {
        return vqtableview->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnSharedPainter(const QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_SharedPainter_Callback(reinterpret_cast<VirtualQTableView::QTableView_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_ChildEvent(QTableView* self, QChildEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->childEvent(event);
    } else {
        vqtableview->childEvent(event);
    }
}

// Base class handler implementation
void QTableView_QBaseChildEvent(QTableView* self, QChildEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_ChildEvent_IsBase(true);
        vqtableview->childEvent(event);
    } else {
        vqtableview->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnChildEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_ChildEvent_Callback(reinterpret_cast<VirtualQTableView::QTableView_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_CustomEvent(QTableView* self, QEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->customEvent(event);
    } else {
        vqtableview->customEvent(event);
    }
}

// Base class handler implementation
void QTableView_QBaseCustomEvent(QTableView* self, QEvent* event) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_CustomEvent_IsBase(true);
        vqtableview->customEvent(event);
    } else {
        vqtableview->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnCustomEvent(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_CustomEvent_Callback(reinterpret_cast<VirtualQTableView::QTableView_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_ConnectNotify(QTableView* self, QMetaMethod* signal) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->connectNotify(*signal);
    } else {
        vqtableview->connectNotify(*signal);
    }
}

// Base class handler implementation
void QTableView_QBaseConnectNotify(QTableView* self, QMetaMethod* signal) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_ConnectNotify_IsBase(true);
        vqtableview->connectNotify(*signal);
    } else {
        vqtableview->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnConnectNotify(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_ConnectNotify_Callback(reinterpret_cast<VirtualQTableView::QTableView_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_DisconnectNotify(QTableView* self, QMetaMethod* signal) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->disconnectNotify(*signal);
    } else {
        vqtableview->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QTableView_QBaseDisconnectNotify(QTableView* self, QMetaMethod* signal) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_DisconnectNotify_IsBase(true);
        vqtableview->disconnectNotify(*signal);
    } else {
        vqtableview->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnDisconnectNotify(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_DisconnectNotify_Callback(reinterpret_cast<VirtualQTableView::QTableView_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_RowMoved(QTableView* self, int row, int oldIndex, int newIndex) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->rowMoved(static_cast<int>(row), static_cast<int>(oldIndex), static_cast<int>(newIndex));
    } else {
        vqtableview->rowMoved(static_cast<int>(row), static_cast<int>(oldIndex), static_cast<int>(newIndex));
    }
}

// Base class handler implementation
void QTableView_QBaseRowMoved(QTableView* self, int row, int oldIndex, int newIndex) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_RowMoved_IsBase(true);
        vqtableview->rowMoved(static_cast<int>(row), static_cast<int>(oldIndex), static_cast<int>(newIndex));
    } else {
        vqtableview->rowMoved(static_cast<int>(row), static_cast<int>(oldIndex), static_cast<int>(newIndex));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnRowMoved(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_RowMoved_Callback(reinterpret_cast<VirtualQTableView::QTableView_RowMoved_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_ColumnMoved(QTableView* self, int column, int oldIndex, int newIndex) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->columnMoved(static_cast<int>(column), static_cast<int>(oldIndex), static_cast<int>(newIndex));
    } else {
        vqtableview->columnMoved(static_cast<int>(column), static_cast<int>(oldIndex), static_cast<int>(newIndex));
    }
}

// Base class handler implementation
void QTableView_QBaseColumnMoved(QTableView* self, int column, int oldIndex, int newIndex) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_ColumnMoved_IsBase(true);
        vqtableview->columnMoved(static_cast<int>(column), static_cast<int>(oldIndex), static_cast<int>(newIndex));
    } else {
        vqtableview->columnMoved(static_cast<int>(column), static_cast<int>(oldIndex), static_cast<int>(newIndex));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnColumnMoved(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_ColumnMoved_Callback(reinterpret_cast<VirtualQTableView::QTableView_ColumnMoved_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_RowResized(QTableView* self, int row, int oldHeight, int newHeight) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->rowResized(static_cast<int>(row), static_cast<int>(oldHeight), static_cast<int>(newHeight));
    } else {
        vqtableview->rowResized(static_cast<int>(row), static_cast<int>(oldHeight), static_cast<int>(newHeight));
    }
}

// Base class handler implementation
void QTableView_QBaseRowResized(QTableView* self, int row, int oldHeight, int newHeight) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_RowResized_IsBase(true);
        vqtableview->rowResized(static_cast<int>(row), static_cast<int>(oldHeight), static_cast<int>(newHeight));
    } else {
        vqtableview->rowResized(static_cast<int>(row), static_cast<int>(oldHeight), static_cast<int>(newHeight));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnRowResized(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_RowResized_Callback(reinterpret_cast<VirtualQTableView::QTableView_RowResized_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_ColumnResized(QTableView* self, int column, int oldWidth, int newWidth) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->columnResized(static_cast<int>(column), static_cast<int>(oldWidth), static_cast<int>(newWidth));
    } else {
        vqtableview->columnResized(static_cast<int>(column), static_cast<int>(oldWidth), static_cast<int>(newWidth));
    }
}

// Base class handler implementation
void QTableView_QBaseColumnResized(QTableView* self, int column, int oldWidth, int newWidth) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_ColumnResized_IsBase(true);
        vqtableview->columnResized(static_cast<int>(column), static_cast<int>(oldWidth), static_cast<int>(newWidth));
    } else {
        vqtableview->columnResized(static_cast<int>(column), static_cast<int>(oldWidth), static_cast<int>(newWidth));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnColumnResized(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_ColumnResized_Callback(reinterpret_cast<VirtualQTableView::QTableView_ColumnResized_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_RowCountChanged(QTableView* self, int oldCount, int newCount) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->rowCountChanged(static_cast<int>(oldCount), static_cast<int>(newCount));
    } else {
        vqtableview->rowCountChanged(static_cast<int>(oldCount), static_cast<int>(newCount));
    }
}

// Base class handler implementation
void QTableView_QBaseRowCountChanged(QTableView* self, int oldCount, int newCount) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_RowCountChanged_IsBase(true);
        vqtableview->rowCountChanged(static_cast<int>(oldCount), static_cast<int>(newCount));
    } else {
        vqtableview->rowCountChanged(static_cast<int>(oldCount), static_cast<int>(newCount));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnRowCountChanged(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_RowCountChanged_Callback(reinterpret_cast<VirtualQTableView::QTableView_RowCountChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_ColumnCountChanged(QTableView* self, int oldCount, int newCount) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->columnCountChanged(static_cast<int>(oldCount), static_cast<int>(newCount));
    } else {
        vqtableview->columnCountChanged(static_cast<int>(oldCount), static_cast<int>(newCount));
    }
}

// Base class handler implementation
void QTableView_QBaseColumnCountChanged(QTableView* self, int oldCount, int newCount) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_ColumnCountChanged_IsBase(true);
        vqtableview->columnCountChanged(static_cast<int>(oldCount), static_cast<int>(newCount));
    } else {
        vqtableview->columnCountChanged(static_cast<int>(oldCount), static_cast<int>(newCount));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnColumnCountChanged(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_ColumnCountChanged_Callback(reinterpret_cast<VirtualQTableView::QTableView_ColumnCountChanged_Callback>(slot));
    }
}

// Derived class handler implementation
int QTableView_State(const QTableView* self) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        return static_cast<int>(vqtableview->state());
    } else {
        return static_cast<int>(vqtableview->state());
    }
}

// Base class handler implementation
int QTableView_QBaseState(const QTableView* self) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_State_IsBase(true);
        return static_cast<int>(vqtableview->state());
    } else {
        return static_cast<int>(vqtableview->state());
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnState(const QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_State_Callback(reinterpret_cast<VirtualQTableView::QTableView_State_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_SetState(QTableView* self, int state) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setState(static_cast<VirtualQTableView::State>(state));
    } else {
        vqtableview->setState(static_cast<VirtualQTableView::State>(state));
    }
}

// Base class handler implementation
void QTableView_QBaseSetState(QTableView* self, int state) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_SetState_IsBase(true);
        vqtableview->setState(static_cast<VirtualQTableView::State>(state));
    } else {
        vqtableview->setState(static_cast<VirtualQTableView::State>(state));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnSetState(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_SetState_Callback(reinterpret_cast<VirtualQTableView::QTableView_SetState_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_ScheduleDelayedItemsLayout(QTableView* self) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->scheduleDelayedItemsLayout();
    } else {
        vqtableview->scheduleDelayedItemsLayout();
    }
}

// Base class handler implementation
void QTableView_QBaseScheduleDelayedItemsLayout(QTableView* self) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_ScheduleDelayedItemsLayout_IsBase(true);
        vqtableview->scheduleDelayedItemsLayout();
    } else {
        vqtableview->scheduleDelayedItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnScheduleDelayedItemsLayout(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_ScheduleDelayedItemsLayout_Callback(reinterpret_cast<VirtualQTableView::QTableView_ScheduleDelayedItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_ExecuteDelayedItemsLayout(QTableView* self) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->executeDelayedItemsLayout();
    } else {
        vqtableview->executeDelayedItemsLayout();
    }
}

// Base class handler implementation
void QTableView_QBaseExecuteDelayedItemsLayout(QTableView* self) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_ExecuteDelayedItemsLayout_IsBase(true);
        vqtableview->executeDelayedItemsLayout();
    } else {
        vqtableview->executeDelayedItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnExecuteDelayedItemsLayout(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_ExecuteDelayedItemsLayout_Callback(reinterpret_cast<VirtualQTableView::QTableView_ExecuteDelayedItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_SetDirtyRegion(QTableView* self, QRegion* region) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setDirtyRegion(*region);
    } else {
        vqtableview->setDirtyRegion(*region);
    }
}

// Base class handler implementation
void QTableView_QBaseSetDirtyRegion(QTableView* self, QRegion* region) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_SetDirtyRegion_IsBase(true);
        vqtableview->setDirtyRegion(*region);
    } else {
        vqtableview->setDirtyRegion(*region);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnSetDirtyRegion(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_SetDirtyRegion_Callback(reinterpret_cast<VirtualQTableView::QTableView_SetDirtyRegion_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_ScrollDirtyRegion(QTableView* self, int dx, int dy) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqtableview->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void QTableView_QBaseScrollDirtyRegion(QTableView* self, int dx, int dy) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_ScrollDirtyRegion_IsBase(true);
        vqtableview->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqtableview->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnScrollDirtyRegion(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_ScrollDirtyRegion_Callback(reinterpret_cast<VirtualQTableView::QTableView_ScrollDirtyRegion_Callback>(slot));
    }
}

// Derived class handler implementation
QPoint* QTableView_DirtyRegionOffset(const QTableView* self) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        return new QPoint(vqtableview->dirtyRegionOffset());
    }
    return {};
}

// Base class handler implementation
QPoint* QTableView_QBaseDirtyRegionOffset(const QTableView* self) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_DirtyRegionOffset_IsBase(true);
        return new QPoint(vqtableview->dirtyRegionOffset());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnDirtyRegionOffset(const QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_DirtyRegionOffset_Callback(reinterpret_cast<VirtualQTableView::QTableView_DirtyRegionOffset_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_StartAutoScroll(QTableView* self) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->startAutoScroll();
    } else {
        vqtableview->startAutoScroll();
    }
}

// Base class handler implementation
void QTableView_QBaseStartAutoScroll(QTableView* self) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_StartAutoScroll_IsBase(true);
        vqtableview->startAutoScroll();
    } else {
        vqtableview->startAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnStartAutoScroll(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_StartAutoScroll_Callback(reinterpret_cast<VirtualQTableView::QTableView_StartAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_StopAutoScroll(QTableView* self) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->stopAutoScroll();
    } else {
        vqtableview->stopAutoScroll();
    }
}

// Base class handler implementation
void QTableView_QBaseStopAutoScroll(QTableView* self) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_StopAutoScroll_IsBase(true);
        vqtableview->stopAutoScroll();
    } else {
        vqtableview->stopAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnStopAutoScroll(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_StopAutoScroll_Callback(reinterpret_cast<VirtualQTableView::QTableView_StopAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_DoAutoScroll(QTableView* self) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->doAutoScroll();
    } else {
        vqtableview->doAutoScroll();
    }
}

// Base class handler implementation
void QTableView_QBaseDoAutoScroll(QTableView* self) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_DoAutoScroll_IsBase(true);
        vqtableview->doAutoScroll();
    } else {
        vqtableview->doAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnDoAutoScroll(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_DoAutoScroll_Callback(reinterpret_cast<VirtualQTableView::QTableView_DoAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
int QTableView_DropIndicatorPosition(const QTableView* self) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        return static_cast<int>(vqtableview->dropIndicatorPosition());
    } else {
        return static_cast<int>(vqtableview->dropIndicatorPosition());
    }
}

// Base class handler implementation
int QTableView_QBaseDropIndicatorPosition(const QTableView* self) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_DropIndicatorPosition_IsBase(true);
        return static_cast<int>(vqtableview->dropIndicatorPosition());
    } else {
        return static_cast<int>(vqtableview->dropIndicatorPosition());
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnDropIndicatorPosition(const QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_DropIndicatorPosition_Callback(reinterpret_cast<VirtualQTableView::QTableView_DropIndicatorPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_SetViewportMargins(QTableView* self, int left, int top, int right, int bottom) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        vqtableview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Base class handler implementation
void QTableView_QBaseSetViewportMargins(QTableView* self, int left, int top, int right, int bottom) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_SetViewportMargins_IsBase(true);
        vqtableview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        vqtableview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnSetViewportMargins(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_SetViewportMargins_Callback(reinterpret_cast<VirtualQTableView::QTableView_SetViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
QMargins* QTableView_ViewportMargins(const QTableView* self) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        return new QMargins(vqtableview->viewportMargins());
    }
    return {};
}

// Base class handler implementation
QMargins* QTableView_QBaseViewportMargins(const QTableView* self) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_ViewportMargins_IsBase(true);
        return new QMargins(vqtableview->viewportMargins());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnViewportMargins(const QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_ViewportMargins_Callback(reinterpret_cast<VirtualQTableView::QTableView_ViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_DrawFrame(QTableView* self, QPainter* param1) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->drawFrame(param1);
    } else {
        vqtableview->drawFrame(param1);
    }
}

// Base class handler implementation
void QTableView_QBaseDrawFrame(QTableView* self, QPainter* param1) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_DrawFrame_IsBase(true);
        vqtableview->drawFrame(param1);
    } else {
        vqtableview->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnDrawFrame(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_DrawFrame_Callback(reinterpret_cast<VirtualQTableView::QTableView_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_UpdateMicroFocus(QTableView* self) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->updateMicroFocus();
    } else {
        vqtableview->updateMicroFocus();
    }
}

// Base class handler implementation
void QTableView_QBaseUpdateMicroFocus(QTableView* self) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_UpdateMicroFocus_IsBase(true);
        vqtableview->updateMicroFocus();
    } else {
        vqtableview->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnUpdateMicroFocus(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQTableView::QTableView_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_Create(QTableView* self) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->create();
    } else {
        vqtableview->create();
    }
}

// Base class handler implementation
void QTableView_QBaseCreate(QTableView* self) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_Create_IsBase(true);
        vqtableview->create();
    } else {
        vqtableview->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnCreate(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_Create_Callback(reinterpret_cast<VirtualQTableView::QTableView_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QTableView_Destroy(QTableView* self) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->destroy();
    } else {
        vqtableview->destroy();
    }
}

// Base class handler implementation
void QTableView_QBaseDestroy(QTableView* self) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_Destroy_IsBase(true);
        vqtableview->destroy();
    } else {
        vqtableview->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnDestroy(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_Destroy_Callback(reinterpret_cast<VirtualQTableView::QTableView_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTableView_FocusNextChild(QTableView* self) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        return vqtableview->focusNextChild();
    } else {
        return vqtableview->focusNextChild();
    }
}

// Base class handler implementation
bool QTableView_QBaseFocusNextChild(QTableView* self) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_FocusNextChild_IsBase(true);
        return vqtableview->focusNextChild();
    } else {
        return vqtableview->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnFocusNextChild(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_FocusNextChild_Callback(reinterpret_cast<VirtualQTableView::QTableView_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTableView_FocusPreviousChild(QTableView* self) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        return vqtableview->focusPreviousChild();
    } else {
        return vqtableview->focusPreviousChild();
    }
}

// Base class handler implementation
bool QTableView_QBaseFocusPreviousChild(QTableView* self) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_FocusPreviousChild_IsBase(true);
        return vqtableview->focusPreviousChild();
    } else {
        return vqtableview->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnFocusPreviousChild(QTableView* self, intptr_t slot) {
    if (auto* vqtableview = dynamic_cast<VirtualQTableView*>(self)) {
        vqtableview->setQTableView_FocusPreviousChild_Callback(reinterpret_cast<VirtualQTableView::QTableView_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QTableView_Sender(const QTableView* self) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        return vqtableview->sender();
    } else {
        return vqtableview->sender();
    }
}

// Base class handler implementation
QObject* QTableView_QBaseSender(const QTableView* self) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_Sender_IsBase(true);
        return vqtableview->sender();
    } else {
        return vqtableview->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnSender(const QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_Sender_Callback(reinterpret_cast<VirtualQTableView::QTableView_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QTableView_SenderSignalIndex(const QTableView* self) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        return vqtableview->senderSignalIndex();
    } else {
        return vqtableview->senderSignalIndex();
    }
}

// Base class handler implementation
int QTableView_QBaseSenderSignalIndex(const QTableView* self) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_SenderSignalIndex_IsBase(true);
        return vqtableview->senderSignalIndex();
    } else {
        return vqtableview->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnSenderSignalIndex(const QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_SenderSignalIndex_Callback(reinterpret_cast<VirtualQTableView::QTableView_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QTableView_Receivers(const QTableView* self, const char* signal) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        return vqtableview->receivers(signal);
    } else {
        return vqtableview->receivers(signal);
    }
}

// Base class handler implementation
int QTableView_QBaseReceivers(const QTableView* self, const char* signal) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_Receivers_IsBase(true);
        return vqtableview->receivers(signal);
    } else {
        return vqtableview->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnReceivers(const QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_Receivers_Callback(reinterpret_cast<VirtualQTableView::QTableView_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTableView_IsSignalConnected(const QTableView* self, QMetaMethod* signal) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        return vqtableview->isSignalConnected(*signal);
    } else {
        return vqtableview->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QTableView_QBaseIsSignalConnected(const QTableView* self, QMetaMethod* signal) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_IsSignalConnected_IsBase(true);
        return vqtableview->isSignalConnected(*signal);
    } else {
        return vqtableview->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTableView_OnIsSignalConnected(const QTableView* self, intptr_t slot) {
    if (auto* vqtableview = const_cast<VirtualQTableView*>(dynamic_cast<const VirtualQTableView*>(self))) {
        vqtableview->setQTableView_IsSignalConnected_Callback(reinterpret_cast<VirtualQTableView::QTableView_IsSignalConnected_Callback>(slot));
    }
}

void QTableView_Delete(QTableView* self) {
    delete self;
}
