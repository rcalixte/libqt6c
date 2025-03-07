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
#include <QColumnView>
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
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <QWindow>
#include <qcolumnview.h>
#include "libqcolumnview.hpp"
#include "libqcolumnview.hxx"

QColumnView* QColumnView_new(QWidget* parent) {
    return new VirtualQColumnView(parent);
}

QColumnView* QColumnView_new2() {
    return new VirtualQColumnView();
}

QMetaObject* QColumnView_MetaObject(const QColumnView* self) {
    return (QMetaObject*)self->metaObject();
}

void* QColumnView_Metacast(QColumnView* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QColumnView_Metacall(QColumnView* self, int param1, int param2, void** param3) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QColumnView_OnMetacall(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_Metacall_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QColumnView_QBaseMetacall(QColumnView* self, int param1, int param2, void** param3) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_Metacall_IsBase(true);
        return vqcolumnview->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QColumnView_Tr(const char* s) {
    QString _ret = QColumnView::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QColumnView_UpdatePreviewWidget(QColumnView* self, QModelIndex* index) {
    self->updatePreviewWidget(*index);
}

void QColumnView_Connect_UpdatePreviewWidget(QColumnView* self, intptr_t slot) {
    void (*slotFunc)(QColumnView*, QModelIndex*) = reinterpret_cast<void (*)(QColumnView*, QModelIndex*)>(slot);
    QColumnView::connect(self, &QColumnView::updatePreviewWidget, [self, slotFunc](const QModelIndex& index) {
        const QModelIndex& index_ret = index;
        // Cast returned reference into pointer
        QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
        slotFunc(self, sigval1);
    });
}

void QColumnView_SetResizeGripsVisible(QColumnView* self, bool visible) {
    self->setResizeGripsVisible(visible);
}

bool QColumnView_ResizeGripsVisible(const QColumnView* self) {
    return self->resizeGripsVisible();
}

QWidget* QColumnView_PreviewWidget(const QColumnView* self) {
    return self->previewWidget();
}

void QColumnView_SetPreviewWidget(QColumnView* self, QWidget* widget) {
    self->setPreviewWidget(widget);
}

void QColumnView_SetColumnWidths(QColumnView* self, libqt_list /* of int */ list) {
    QList<int> list_QList;
    list_QList.reserve(list.len);
    int* list_arr = static_cast<int*>(list.data.ints);
    for (size_t i = 0; i < list.len; ++i) {
        list_QList.push_back(static_cast<int>(list_arr[i]));
    }
    self->setColumnWidths(list_QList);
}

libqt_list /* of int */ QColumnView_ColumnWidths(const QColumnView* self) {
    QList<int> _ret = self->columnWidths();
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ints = _arr;
    return _out;
}

libqt_string QColumnView_Tr2(const char* s, const char* c) {
    QString _ret = QColumnView::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QColumnView_Tr3(const char* s, const char* c, int n) {
    QString _ret = QColumnView::tr(s, c, static_cast<int>(n));
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
QModelIndex* QColumnView_IndexAt(const QColumnView* self, QPoint* point) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        return new QModelIndex(vqcolumnview->indexAt(*point));
    } else {
        return new QModelIndex(self->indexAt(*point));
    }
}

// Base class handler implementation
QModelIndex* QColumnView_QBaseIndexAt(const QColumnView* self, QPoint* point) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_IndexAt_IsBase(true);
        return new QModelIndex(vqcolumnview->indexAt(*point));
    } else {
        return new QModelIndex(self->indexAt(*point));
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnIndexAt(const QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_IndexAt_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_IndexAt_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_ScrollTo(QColumnView* self, QModelIndex* index, int hint) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    } else {
        vqcolumnview->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    }
}

// Base class handler implementation
void QColumnView_QBaseScrollTo(QColumnView* self, QModelIndex* index, int hint) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_ScrollTo_IsBase(true);
        vqcolumnview->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    } else {
        vqcolumnview->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnScrollTo(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_ScrollTo_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_ScrollTo_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QColumnView_SizeHint(const QColumnView* self) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        return new QSize(vqcolumnview->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QColumnView_QBaseSizeHint(const QColumnView* self) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_SizeHint_IsBase(true);
        return new QSize(vqcolumnview->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSizeHint(const QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_SizeHint_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QColumnView_VisualRect(const QColumnView* self, QModelIndex* index) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        return new QRect(vqcolumnview->visualRect(*index));
    } else {
        return new QRect(self->visualRect(*index));
    }
}

// Base class handler implementation
QRect* QColumnView_QBaseVisualRect(const QColumnView* self, QModelIndex* index) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_VisualRect_IsBase(true);
        return new QRect(vqcolumnview->visualRect(*index));
    } else {
        return new QRect(self->visualRect(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnVisualRect(const QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_VisualRect_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_VisualRect_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_SetModel(QColumnView* self, QAbstractItemModel* model) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setModel(model);
    } else {
        vqcolumnview->setModel(model);
    }
}

// Base class handler implementation
void QColumnView_QBaseSetModel(QColumnView* self, QAbstractItemModel* model) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_SetModel_IsBase(true);
        vqcolumnview->setModel(model);
    } else {
        vqcolumnview->setModel(model);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSetModel(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_SetModel_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_SetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_SetSelectionModel(QColumnView* self, QItemSelectionModel* selectionModel) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setSelectionModel(selectionModel);
    } else {
        vqcolumnview->setSelectionModel(selectionModel);
    }
}

// Base class handler implementation
void QColumnView_QBaseSetSelectionModel(QColumnView* self, QItemSelectionModel* selectionModel) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_SetSelectionModel_IsBase(true);
        vqcolumnview->setSelectionModel(selectionModel);
    } else {
        vqcolumnview->setSelectionModel(selectionModel);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSetSelectionModel(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_SetSelectionModel_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_SetSelectionModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_SetRootIndex(QColumnView* self, QModelIndex* index) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setRootIndex(*index);
    } else {
        vqcolumnview->setRootIndex(*index);
    }
}

// Base class handler implementation
void QColumnView_QBaseSetRootIndex(QColumnView* self, QModelIndex* index) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_SetRootIndex_IsBase(true);
        vqcolumnview->setRootIndex(*index);
    } else {
        vqcolumnview->setRootIndex(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSetRootIndex(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_SetRootIndex_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_SetRootIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_SelectAll(QColumnView* self) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->selectAll();
    } else {
        vqcolumnview->selectAll();
    }
}

// Base class handler implementation
void QColumnView_QBaseSelectAll(QColumnView* self) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_SelectAll_IsBase(true);
        vqcolumnview->selectAll();
    } else {
        vqcolumnview->selectAll();
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSelectAll(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_SelectAll_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_SelectAll_Callback>(slot));
    }
}

// Derived class handler implementation
bool QColumnView_IsIndexHidden(const QColumnView* self, QModelIndex* index) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        return vqcolumnview->isIndexHidden(*index);
    } else {
        return vqcolumnview->isIndexHidden(*index);
    }
}

// Base class handler implementation
bool QColumnView_QBaseIsIndexHidden(const QColumnView* self, QModelIndex* index) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_IsIndexHidden_IsBase(true);
        return vqcolumnview->isIndexHidden(*index);
    } else {
        return vqcolumnview->isIndexHidden(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnIsIndexHidden(const QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_IsIndexHidden_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_IsIndexHidden_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QColumnView_MoveCursor(QColumnView* self, int cursorAction, int modifiers) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        return new QModelIndex(vqcolumnview->moveCursor(static_cast<VirtualQColumnView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* QColumnView_QBaseMoveCursor(QColumnView* self, int cursorAction, int modifiers) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_MoveCursor_IsBase(true);
        return new QModelIndex(vqcolumnview->moveCursor(static_cast<VirtualQColumnView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnMoveCursor(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_MoveCursor_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_MoveCursor_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_ResizeEvent(QColumnView* self, QResizeEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->resizeEvent(event);
    } else {
        vqcolumnview->resizeEvent(event);
    }
}

// Base class handler implementation
void QColumnView_QBaseResizeEvent(QColumnView* self, QResizeEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_ResizeEvent_IsBase(true);
        vqcolumnview->resizeEvent(event);
    } else {
        vqcolumnview->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnResizeEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_ResizeEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_SetSelection(QColumnView* self, QRect* rect, int command) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        vqcolumnview->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

// Base class handler implementation
void QColumnView_QBaseSetSelection(QColumnView* self, QRect* rect, int command) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_SetSelection_IsBase(true);
        vqcolumnview->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        vqcolumnview->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSetSelection(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_SetSelection_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_SetSelection_Callback>(slot));
    }
}

// Derived class handler implementation
QRegion* QColumnView_VisualRegionForSelection(const QColumnView* self, QItemSelection* selection) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        return new QRegion(vqcolumnview->visualRegionForSelection(*selection));
    }
    return {};
}

// Base class handler implementation
QRegion* QColumnView_QBaseVisualRegionForSelection(const QColumnView* self, QItemSelection* selection) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_VisualRegionForSelection_IsBase(true);
        return new QRegion(vqcolumnview->visualRegionForSelection(*selection));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnVisualRegionForSelection(const QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_VisualRegionForSelection_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_VisualRegionForSelection_Callback>(slot));
    }
}

// Derived class handler implementation
int QColumnView_HorizontalOffset(const QColumnView* self) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        return vqcolumnview->horizontalOffset();
    } else {
        return vqcolumnview->horizontalOffset();
    }
}

// Base class handler implementation
int QColumnView_QBaseHorizontalOffset(const QColumnView* self) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_HorizontalOffset_IsBase(true);
        return vqcolumnview->horizontalOffset();
    } else {
        return vqcolumnview->horizontalOffset();
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnHorizontalOffset(const QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_HorizontalOffset_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_HorizontalOffset_Callback>(slot));
    }
}

// Derived class handler implementation
int QColumnView_VerticalOffset(const QColumnView* self) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        return vqcolumnview->verticalOffset();
    } else {
        return vqcolumnview->verticalOffset();
    }
}

// Base class handler implementation
int QColumnView_QBaseVerticalOffset(const QColumnView* self) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_VerticalOffset_IsBase(true);
        return vqcolumnview->verticalOffset();
    } else {
        return vqcolumnview->verticalOffset();
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnVerticalOffset(const QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_VerticalOffset_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_VerticalOffset_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_RowsInserted(QColumnView* self, QModelIndex* parent, int start, int end) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        vqcolumnview->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Base class handler implementation
void QColumnView_QBaseRowsInserted(QColumnView* self, QModelIndex* parent, int start, int end) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_RowsInserted_IsBase(true);
        vqcolumnview->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        vqcolumnview->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnRowsInserted(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_RowsInserted_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_RowsInserted_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_CurrentChanged(QColumnView* self, QModelIndex* current, QModelIndex* previous) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->currentChanged(*current, *previous);
    } else {
        vqcolumnview->currentChanged(*current, *previous);
    }
}

// Base class handler implementation
void QColumnView_QBaseCurrentChanged(QColumnView* self, QModelIndex* current, QModelIndex* previous) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_CurrentChanged_IsBase(true);
        vqcolumnview->currentChanged(*current, *previous);
    } else {
        vqcolumnview->currentChanged(*current, *previous);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnCurrentChanged(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_CurrentChanged_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_CurrentChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_ScrollContentsBy(QColumnView* self, int dx, int dy) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqcolumnview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void QColumnView_QBaseScrollContentsBy(QColumnView* self, int dx, int dy) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_ScrollContentsBy_IsBase(true);
        vqcolumnview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqcolumnview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnScrollContentsBy(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_ScrollContentsBy_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_ScrollContentsBy_Callback>(slot));
    }
}

// Derived class handler implementation
QAbstractItemView* QColumnView_CreateColumn(QColumnView* self, QModelIndex* rootIndex) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        return vqcolumnview->createColumn(*rootIndex);
    } else {
        return vqcolumnview->createColumn(*rootIndex);
    }
}

// Base class handler implementation
QAbstractItemView* QColumnView_QBaseCreateColumn(QColumnView* self, QModelIndex* rootIndex) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_CreateColumn_IsBase(true);
        return vqcolumnview->createColumn(*rootIndex);
    } else {
        return vqcolumnview->createColumn(*rootIndex);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnCreateColumn(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_CreateColumn_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_CreateColumn_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_KeyboardSearch(QColumnView* self, libqt_string search) {
    QString search_QString = QString::fromUtf8(search.data, search.len);
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->keyboardSearch(search_QString);
    } else {
        vqcolumnview->keyboardSearch(search_QString);
    }
}

// Base class handler implementation
void QColumnView_QBaseKeyboardSearch(QColumnView* self, libqt_string search) {
    QString search_QString = QString::fromUtf8(search.data, search.len);
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_KeyboardSearch_IsBase(true);
        vqcolumnview->keyboardSearch(search_QString);
    } else {
        vqcolumnview->keyboardSearch(search_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnKeyboardSearch(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_KeyboardSearch_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_KeyboardSearch_Callback>(slot));
    }
}

// Derived class handler implementation
int QColumnView_SizeHintForRow(const QColumnView* self, int row) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        return vqcolumnview->sizeHintForRow(static_cast<int>(row));
    } else {
        return vqcolumnview->sizeHintForRow(static_cast<int>(row));
    }
}

// Base class handler implementation
int QColumnView_QBaseSizeHintForRow(const QColumnView* self, int row) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_SizeHintForRow_IsBase(true);
        return vqcolumnview->sizeHintForRow(static_cast<int>(row));
    } else {
        return vqcolumnview->sizeHintForRow(static_cast<int>(row));
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSizeHintForRow(const QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_SizeHintForRow_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_SizeHintForRow_Callback>(slot));
    }
}

// Derived class handler implementation
int QColumnView_SizeHintForColumn(const QColumnView* self, int column) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        return vqcolumnview->sizeHintForColumn(static_cast<int>(column));
    } else {
        return vqcolumnview->sizeHintForColumn(static_cast<int>(column));
    }
}

// Base class handler implementation
int QColumnView_QBaseSizeHintForColumn(const QColumnView* self, int column) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_SizeHintForColumn_IsBase(true);
        return vqcolumnview->sizeHintForColumn(static_cast<int>(column));
    } else {
        return vqcolumnview->sizeHintForColumn(static_cast<int>(column));
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSizeHintForColumn(const QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_SizeHintForColumn_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_SizeHintForColumn_Callback>(slot));
    }
}

// Derived class handler implementation
QAbstractItemDelegate* QColumnView_ItemDelegateForIndex(const QColumnView* self, QModelIndex* index) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        return vqcolumnview->itemDelegateForIndex(*index);
    } else {
        return vqcolumnview->itemDelegateForIndex(*index);
    }
}

// Base class handler implementation
QAbstractItemDelegate* QColumnView_QBaseItemDelegateForIndex(const QColumnView* self, QModelIndex* index) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_ItemDelegateForIndex_IsBase(true);
        return vqcolumnview->itemDelegateForIndex(*index);
    } else {
        return vqcolumnview->itemDelegateForIndex(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnItemDelegateForIndex(const QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_ItemDelegateForIndex_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_ItemDelegateForIndex_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QColumnView_InputMethodQuery(const QColumnView* self, int query) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        return new QVariant(vqcolumnview->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

// Base class handler implementation
QVariant* QColumnView_QBaseInputMethodQuery(const QColumnView* self, int query) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_InputMethodQuery_IsBase(true);
        return new QVariant(vqcolumnview->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnInputMethodQuery(const QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_InputMethodQuery_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_Reset(QColumnView* self) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->reset();
    } else {
        vqcolumnview->reset();
    }
}

// Base class handler implementation
void QColumnView_QBaseReset(QColumnView* self) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_Reset_IsBase(true);
        vqcolumnview->reset();
    } else {
        vqcolumnview->reset();
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnReset(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_Reset_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_Reset_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_DoItemsLayout(QColumnView* self) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->doItemsLayout();
    } else {
        vqcolumnview->doItemsLayout();
    }
}

// Base class handler implementation
void QColumnView_QBaseDoItemsLayout(QColumnView* self) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_DoItemsLayout_IsBase(true);
        vqcolumnview->doItemsLayout();
    } else {
        vqcolumnview->doItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnDoItemsLayout(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_DoItemsLayout_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_DoItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_DataChanged(QColumnView* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list /* of int */ roles) {
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data.ints);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->dataChanged(*topLeft, *bottomRight, roles_QList);
    } else {
        vqcolumnview->dataChanged(*topLeft, *bottomRight, roles_QList);
    }
}

// Base class handler implementation
void QColumnView_QBaseDataChanged(QColumnView* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list /* of int */ roles) {
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data.ints);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_DataChanged_IsBase(true);
        vqcolumnview->dataChanged(*topLeft, *bottomRight, roles_QList);
    } else {
        vqcolumnview->dataChanged(*topLeft, *bottomRight, roles_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnDataChanged(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_DataChanged_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_DataChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_RowsAboutToBeRemoved(QColumnView* self, QModelIndex* parent, int start, int end) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        vqcolumnview->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Base class handler implementation
void QColumnView_QBaseRowsAboutToBeRemoved(QColumnView* self, QModelIndex* parent, int start, int end) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_RowsAboutToBeRemoved_IsBase(true);
        vqcolumnview->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        vqcolumnview->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnRowsAboutToBeRemoved(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_RowsAboutToBeRemoved_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_RowsAboutToBeRemoved_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_SelectionChanged(QColumnView* self, QItemSelection* selected, QItemSelection* deselected) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->selectionChanged(*selected, *deselected);
    } else {
        vqcolumnview->selectionChanged(*selected, *deselected);
    }
}

// Base class handler implementation
void QColumnView_QBaseSelectionChanged(QColumnView* self, QItemSelection* selected, QItemSelection* deselected) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_SelectionChanged_IsBase(true);
        vqcolumnview->selectionChanged(*selected, *deselected);
    } else {
        vqcolumnview->selectionChanged(*selected, *deselected);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSelectionChanged(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_SelectionChanged_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_SelectionChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_UpdateEditorData(QColumnView* self) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->updateEditorData();
    } else {
        vqcolumnview->updateEditorData();
    }
}

// Base class handler implementation
void QColumnView_QBaseUpdateEditorData(QColumnView* self) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_UpdateEditorData_IsBase(true);
        vqcolumnview->updateEditorData();
    } else {
        vqcolumnview->updateEditorData();
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnUpdateEditorData(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_UpdateEditorData_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_UpdateEditorData_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_UpdateEditorGeometries(QColumnView* self) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->updateEditorGeometries();
    } else {
        vqcolumnview->updateEditorGeometries();
    }
}

// Base class handler implementation
void QColumnView_QBaseUpdateEditorGeometries(QColumnView* self) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_UpdateEditorGeometries_IsBase(true);
        vqcolumnview->updateEditorGeometries();
    } else {
        vqcolumnview->updateEditorGeometries();
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnUpdateEditorGeometries(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_UpdateEditorGeometries_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_UpdateEditorGeometries_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_UpdateGeometries(QColumnView* self) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->updateGeometries();
    } else {
        vqcolumnview->updateGeometries();
    }
}

// Base class handler implementation
void QColumnView_QBaseUpdateGeometries(QColumnView* self) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_UpdateGeometries_IsBase(true);
        vqcolumnview->updateGeometries();
    } else {
        vqcolumnview->updateGeometries();
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnUpdateGeometries(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_UpdateGeometries_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_UpdateGeometries_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_VerticalScrollbarAction(QColumnView* self, int action) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->verticalScrollbarAction(static_cast<int>(action));
    } else {
        vqcolumnview->verticalScrollbarAction(static_cast<int>(action));
    }
}

// Base class handler implementation
void QColumnView_QBaseVerticalScrollbarAction(QColumnView* self, int action) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_VerticalScrollbarAction_IsBase(true);
        vqcolumnview->verticalScrollbarAction(static_cast<int>(action));
    } else {
        vqcolumnview->verticalScrollbarAction(static_cast<int>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnVerticalScrollbarAction(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_VerticalScrollbarAction_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_VerticalScrollbarAction_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_HorizontalScrollbarAction(QColumnView* self, int action) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->horizontalScrollbarAction(static_cast<int>(action));
    } else {
        vqcolumnview->horizontalScrollbarAction(static_cast<int>(action));
    }
}

// Base class handler implementation
void QColumnView_QBaseHorizontalScrollbarAction(QColumnView* self, int action) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_HorizontalScrollbarAction_IsBase(true);
        vqcolumnview->horizontalScrollbarAction(static_cast<int>(action));
    } else {
        vqcolumnview->horizontalScrollbarAction(static_cast<int>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnHorizontalScrollbarAction(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_HorizontalScrollbarAction_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_HorizontalScrollbarAction_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_VerticalScrollbarValueChanged(QColumnView* self, int value) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->verticalScrollbarValueChanged(static_cast<int>(value));
    } else {
        vqcolumnview->verticalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Base class handler implementation
void QColumnView_QBaseVerticalScrollbarValueChanged(QColumnView* self, int value) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_VerticalScrollbarValueChanged_IsBase(true);
        vqcolumnview->verticalScrollbarValueChanged(static_cast<int>(value));
    } else {
        vqcolumnview->verticalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnVerticalScrollbarValueChanged(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_VerticalScrollbarValueChanged_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_VerticalScrollbarValueChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_HorizontalScrollbarValueChanged(QColumnView* self, int value) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->horizontalScrollbarValueChanged(static_cast<int>(value));
    } else {
        vqcolumnview->horizontalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Base class handler implementation
void QColumnView_QBaseHorizontalScrollbarValueChanged(QColumnView* self, int value) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_HorizontalScrollbarValueChanged_IsBase(true);
        vqcolumnview->horizontalScrollbarValueChanged(static_cast<int>(value));
    } else {
        vqcolumnview->horizontalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnHorizontalScrollbarValueChanged(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_HorizontalScrollbarValueChanged_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_HorizontalScrollbarValueChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_CloseEditor(QColumnView* self, QWidget* editor, int hint) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else {
        vqcolumnview->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    }
}

// Base class handler implementation
void QColumnView_QBaseCloseEditor(QColumnView* self, QWidget* editor, int hint) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_CloseEditor_IsBase(true);
        vqcolumnview->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else {
        vqcolumnview->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnCloseEditor(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_CloseEditor_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_CloseEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_CommitData(QColumnView* self, QWidget* editor) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->commitData(editor);
    } else {
        vqcolumnview->commitData(editor);
    }
}

// Base class handler implementation
void QColumnView_QBaseCommitData(QColumnView* self, QWidget* editor) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_CommitData_IsBase(true);
        vqcolumnview->commitData(editor);
    } else {
        vqcolumnview->commitData(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnCommitData(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_CommitData_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_CommitData_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_EditorDestroyed(QColumnView* self, QObject* editor) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->editorDestroyed(editor);
    } else {
        vqcolumnview->editorDestroyed(editor);
    }
}

// Base class handler implementation
void QColumnView_QBaseEditorDestroyed(QColumnView* self, QObject* editor) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_EditorDestroyed_IsBase(true);
        vqcolumnview->editorDestroyed(editor);
    } else {
        vqcolumnview->editorDestroyed(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnEditorDestroyed(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_EditorDestroyed_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_EditorDestroyed_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QColumnView_SelectedIndexes(const QColumnView* self) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        QModelIndexList _ret = vqcolumnview->selectedIndexes();
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
        QModelIndexList _ret = vqcolumnview->selectedIndexes();
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
libqt_list /* of QModelIndex* */ QColumnView_QBaseSelectedIndexes(const QColumnView* self) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_SelectedIndexes_IsBase(true);
        QModelIndexList _ret = vqcolumnview->selectedIndexes();
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
        QModelIndexList _ret = vqcolumnview->selectedIndexes();
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
void QColumnView_OnSelectedIndexes(const QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_SelectedIndexes_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_SelectedIndexes_Callback>(slot));
    }
}

// Derived class handler implementation
bool QColumnView_Edit2(QColumnView* self, QModelIndex* index, int trigger, QEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        return vqcolumnview->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else {
        return vqcolumnview->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    }
}

// Base class handler implementation
bool QColumnView_QBaseEdit2(QColumnView* self, QModelIndex* index, int trigger, QEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_Edit2_IsBase(true);
        return vqcolumnview->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else {
        return vqcolumnview->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnEdit2(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_Edit2_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_Edit2_Callback>(slot));
    }
}

// Derived class handler implementation
int QColumnView_SelectionCommand(const QColumnView* self, QModelIndex* index, QEvent* event) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        return static_cast<int>(vqcolumnview->selectionCommand(*index, event));
    } else {
        return static_cast<int>(vqcolumnview->selectionCommand(*index, event));
    }
}

// Base class handler implementation
int QColumnView_QBaseSelectionCommand(const QColumnView* self, QModelIndex* index, QEvent* event) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_SelectionCommand_IsBase(true);
        return static_cast<int>(vqcolumnview->selectionCommand(*index, event));
    } else {
        return static_cast<int>(vqcolumnview->selectionCommand(*index, event));
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSelectionCommand(const QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_SelectionCommand_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_SelectionCommand_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_StartDrag(QColumnView* self, int supportedActions) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else {
        vqcolumnview->startDrag(static_cast<Qt::DropActions>(supportedActions));
    }
}

// Base class handler implementation
void QColumnView_QBaseStartDrag(QColumnView* self, int supportedActions) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_StartDrag_IsBase(true);
        vqcolumnview->startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else {
        vqcolumnview->startDrag(static_cast<Qt::DropActions>(supportedActions));
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnStartDrag(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_StartDrag_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_StartDrag_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_InitViewItemOption(const QColumnView* self, QStyleOptionViewItem* option) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->initViewItemOption(option);
    } else {
        vqcolumnview->initViewItemOption(option);
    }
}

// Base class handler implementation
void QColumnView_QBaseInitViewItemOption(const QColumnView* self, QStyleOptionViewItem* option) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_InitViewItemOption_IsBase(true);
        vqcolumnview->initViewItemOption(option);
    } else {
        vqcolumnview->initViewItemOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnInitViewItemOption(const QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_InitViewItemOption_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_InitViewItemOption_Callback>(slot));
    }
}

// Derived class handler implementation
bool QColumnView_FocusNextPrevChild(QColumnView* self, bool next) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        return vqcolumnview->focusNextPrevChild(next);
    } else {
        return vqcolumnview->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QColumnView_QBaseFocusNextPrevChild(QColumnView* self, bool next) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_FocusNextPrevChild_IsBase(true);
        return vqcolumnview->focusNextPrevChild(next);
    } else {
        return vqcolumnview->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnFocusNextPrevChild(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QColumnView_Event(QColumnView* self, QEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        return vqcolumnview->event(event);
    } else {
        return vqcolumnview->event(event);
    }
}

// Base class handler implementation
bool QColumnView_QBaseEvent(QColumnView* self, QEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_Event_IsBase(true);
        return vqcolumnview->event(event);
    } else {
        return vqcolumnview->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_Event_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QColumnView_ViewportEvent(QColumnView* self, QEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        return vqcolumnview->viewportEvent(event);
    } else {
        return vqcolumnview->viewportEvent(event);
    }
}

// Base class handler implementation
bool QColumnView_QBaseViewportEvent(QColumnView* self, QEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_ViewportEvent_IsBase(true);
        return vqcolumnview->viewportEvent(event);
    } else {
        return vqcolumnview->viewportEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnViewportEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_ViewportEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_ViewportEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_MousePressEvent(QColumnView* self, QMouseEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->mousePressEvent(event);
    } else {
        vqcolumnview->mousePressEvent(event);
    }
}

// Base class handler implementation
void QColumnView_QBaseMousePressEvent(QColumnView* self, QMouseEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_MousePressEvent_IsBase(true);
        vqcolumnview->mousePressEvent(event);
    } else {
        vqcolumnview->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnMousePressEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_MousePressEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_MouseMoveEvent(QColumnView* self, QMouseEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->mouseMoveEvent(event);
    } else {
        vqcolumnview->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QColumnView_QBaseMouseMoveEvent(QColumnView* self, QMouseEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_MouseMoveEvent_IsBase(true);
        vqcolumnview->mouseMoveEvent(event);
    } else {
        vqcolumnview->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnMouseMoveEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_MouseMoveEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_MouseReleaseEvent(QColumnView* self, QMouseEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->mouseReleaseEvent(event);
    } else {
        vqcolumnview->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QColumnView_QBaseMouseReleaseEvent(QColumnView* self, QMouseEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_MouseReleaseEvent_IsBase(true);
        vqcolumnview->mouseReleaseEvent(event);
    } else {
        vqcolumnview->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnMouseReleaseEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_MouseDoubleClickEvent(QColumnView* self, QMouseEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->mouseDoubleClickEvent(event);
    } else {
        vqcolumnview->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QColumnView_QBaseMouseDoubleClickEvent(QColumnView* self, QMouseEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_MouseDoubleClickEvent_IsBase(true);
        vqcolumnview->mouseDoubleClickEvent(event);
    } else {
        vqcolumnview->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnMouseDoubleClickEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_DragEnterEvent(QColumnView* self, QDragEnterEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->dragEnterEvent(event);
    } else {
        vqcolumnview->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QColumnView_QBaseDragEnterEvent(QColumnView* self, QDragEnterEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_DragEnterEvent_IsBase(true);
        vqcolumnview->dragEnterEvent(event);
    } else {
        vqcolumnview->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnDragEnterEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_DragEnterEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_DragMoveEvent(QColumnView* self, QDragMoveEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->dragMoveEvent(event);
    } else {
        vqcolumnview->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QColumnView_QBaseDragMoveEvent(QColumnView* self, QDragMoveEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_DragMoveEvent_IsBase(true);
        vqcolumnview->dragMoveEvent(event);
    } else {
        vqcolumnview->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnDragMoveEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_DragMoveEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_DragLeaveEvent(QColumnView* self, QDragLeaveEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->dragLeaveEvent(event);
    } else {
        vqcolumnview->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QColumnView_QBaseDragLeaveEvent(QColumnView* self, QDragLeaveEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_DragLeaveEvent_IsBase(true);
        vqcolumnview->dragLeaveEvent(event);
    } else {
        vqcolumnview->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnDragLeaveEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_DragLeaveEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_DropEvent(QColumnView* self, QDropEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->dropEvent(event);
    } else {
        vqcolumnview->dropEvent(event);
    }
}

// Base class handler implementation
void QColumnView_QBaseDropEvent(QColumnView* self, QDropEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_DropEvent_IsBase(true);
        vqcolumnview->dropEvent(event);
    } else {
        vqcolumnview->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnDropEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_DropEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_FocusInEvent(QColumnView* self, QFocusEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->focusInEvent(event);
    } else {
        vqcolumnview->focusInEvent(event);
    }
}

// Base class handler implementation
void QColumnView_QBaseFocusInEvent(QColumnView* self, QFocusEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_FocusInEvent_IsBase(true);
        vqcolumnview->focusInEvent(event);
    } else {
        vqcolumnview->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnFocusInEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_FocusInEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_FocusOutEvent(QColumnView* self, QFocusEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->focusOutEvent(event);
    } else {
        vqcolumnview->focusOutEvent(event);
    }
}

// Base class handler implementation
void QColumnView_QBaseFocusOutEvent(QColumnView* self, QFocusEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_FocusOutEvent_IsBase(true);
        vqcolumnview->focusOutEvent(event);
    } else {
        vqcolumnview->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnFocusOutEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_FocusOutEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_KeyPressEvent(QColumnView* self, QKeyEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->keyPressEvent(event);
    } else {
        vqcolumnview->keyPressEvent(event);
    }
}

// Base class handler implementation
void QColumnView_QBaseKeyPressEvent(QColumnView* self, QKeyEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_KeyPressEvent_IsBase(true);
        vqcolumnview->keyPressEvent(event);
    } else {
        vqcolumnview->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnKeyPressEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_KeyPressEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_TimerEvent(QColumnView* self, QTimerEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->timerEvent(event);
    } else {
        vqcolumnview->timerEvent(event);
    }
}

// Base class handler implementation
void QColumnView_QBaseTimerEvent(QColumnView* self, QTimerEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_TimerEvent_IsBase(true);
        vqcolumnview->timerEvent(event);
    } else {
        vqcolumnview->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnTimerEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_TimerEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_InputMethodEvent(QColumnView* self, QInputMethodEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->inputMethodEvent(event);
    } else {
        vqcolumnview->inputMethodEvent(event);
    }
}

// Base class handler implementation
void QColumnView_QBaseInputMethodEvent(QColumnView* self, QInputMethodEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_InputMethodEvent_IsBase(true);
        vqcolumnview->inputMethodEvent(event);
    } else {
        vqcolumnview->inputMethodEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnInputMethodEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_InputMethodEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QColumnView_EventFilter(QColumnView* self, QObject* object, QEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        return vqcolumnview->eventFilter(object, event);
    } else {
        return vqcolumnview->eventFilter(object, event);
    }
}

// Base class handler implementation
bool QColumnView_QBaseEventFilter(QColumnView* self, QObject* object, QEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_EventFilter_IsBase(true);
        return vqcolumnview->eventFilter(object, event);
    } else {
        return vqcolumnview->eventFilter(object, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnEventFilter(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_EventFilter_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QColumnView_ViewportSizeHint(const QColumnView* self) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        return new QSize(vqcolumnview->viewportSizeHint());
    }
    return {};
}

// Base class handler implementation
QSize* QColumnView_QBaseViewportSizeHint(const QColumnView* self) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_ViewportSizeHint_IsBase(true);
        return new QSize(vqcolumnview->viewportSizeHint());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnViewportSizeHint(const QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_ViewportSizeHint_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_ViewportSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QColumnView_MinimumSizeHint(const QColumnView* self) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        return new QSize(vqcolumnview->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QColumnView_QBaseMinimumSizeHint(const QColumnView* self) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_MinimumSizeHint_IsBase(true);
        return new QSize(vqcolumnview->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnMinimumSizeHint(const QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_MinimumSizeHint_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_SetupViewport(QColumnView* self, QWidget* viewport) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setupViewport(viewport);
    } else {
        vqcolumnview->setupViewport(viewport);
    }
}

// Base class handler implementation
void QColumnView_QBaseSetupViewport(QColumnView* self, QWidget* viewport) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_SetupViewport_IsBase(true);
        vqcolumnview->setupViewport(viewport);
    } else {
        vqcolumnview->setupViewport(viewport);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSetupViewport(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_SetupViewport_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_SetupViewport_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_PaintEvent(QColumnView* self, QPaintEvent* param1) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->paintEvent(param1);
    } else {
        vqcolumnview->paintEvent(param1);
    }
}

// Base class handler implementation
void QColumnView_QBasePaintEvent(QColumnView* self, QPaintEvent* param1) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_PaintEvent_IsBase(true);
        vqcolumnview->paintEvent(param1);
    } else {
        vqcolumnview->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnPaintEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_PaintEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_WheelEvent(QColumnView* self, QWheelEvent* param1) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->wheelEvent(param1);
    } else {
        vqcolumnview->wheelEvent(param1);
    }
}

// Base class handler implementation
void QColumnView_QBaseWheelEvent(QColumnView* self, QWheelEvent* param1) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_WheelEvent_IsBase(true);
        vqcolumnview->wheelEvent(param1);
    } else {
        vqcolumnview->wheelEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnWheelEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_WheelEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_ContextMenuEvent(QColumnView* self, QContextMenuEvent* param1) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->contextMenuEvent(param1);
    } else {
        vqcolumnview->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void QColumnView_QBaseContextMenuEvent(QColumnView* self, QContextMenuEvent* param1) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_ContextMenuEvent_IsBase(true);
        vqcolumnview->contextMenuEvent(param1);
    } else {
        vqcolumnview->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnContextMenuEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_ContextMenuEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_ChangeEvent(QColumnView* self, QEvent* param1) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->changeEvent(param1);
    } else {
        vqcolumnview->changeEvent(param1);
    }
}

// Base class handler implementation
void QColumnView_QBaseChangeEvent(QColumnView* self, QEvent* param1) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_ChangeEvent_IsBase(true);
        vqcolumnview->changeEvent(param1);
    } else {
        vqcolumnview->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnChangeEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_ChangeEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_InitStyleOption(const QColumnView* self, QStyleOptionFrame* option) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->initStyleOption(option);
    } else {
        vqcolumnview->initStyleOption(option);
    }
}

// Base class handler implementation
void QColumnView_QBaseInitStyleOption(const QColumnView* self, QStyleOptionFrame* option) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_InitStyleOption_IsBase(true);
        vqcolumnview->initStyleOption(option);
    } else {
        vqcolumnview->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnInitStyleOption(const QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_InitStyleOption_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QColumnView_DevType(const QColumnView* self) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        return vqcolumnview->devType();
    } else {
        return vqcolumnview->devType();
    }
}

// Base class handler implementation
int QColumnView_QBaseDevType(const QColumnView* self) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_DevType_IsBase(true);
        return vqcolumnview->devType();
    } else {
        return vqcolumnview->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnDevType(const QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_DevType_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_SetVisible(QColumnView* self, bool visible) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setVisible(visible);
    } else {
        vqcolumnview->setVisible(visible);
    }
}

// Base class handler implementation
void QColumnView_QBaseSetVisible(QColumnView* self, bool visible) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_SetVisible_IsBase(true);
        vqcolumnview->setVisible(visible);
    } else {
        vqcolumnview->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSetVisible(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_SetVisible_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QColumnView_HeightForWidth(const QColumnView* self, int param1) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        return vqcolumnview->heightForWidth(static_cast<int>(param1));
    } else {
        return vqcolumnview->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QColumnView_QBaseHeightForWidth(const QColumnView* self, int param1) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_HeightForWidth_IsBase(true);
        return vqcolumnview->heightForWidth(static_cast<int>(param1));
    } else {
        return vqcolumnview->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnHeightForWidth(const QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_HeightForWidth_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QColumnView_HasHeightForWidth(const QColumnView* self) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        return vqcolumnview->hasHeightForWidth();
    } else {
        return vqcolumnview->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QColumnView_QBaseHasHeightForWidth(const QColumnView* self) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_HasHeightForWidth_IsBase(true);
        return vqcolumnview->hasHeightForWidth();
    } else {
        return vqcolumnview->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnHasHeightForWidth(const QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_HasHeightForWidth_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QColumnView_PaintEngine(const QColumnView* self) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        return vqcolumnview->paintEngine();
    } else {
        return vqcolumnview->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QColumnView_QBasePaintEngine(const QColumnView* self) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_PaintEngine_IsBase(true);
        return vqcolumnview->paintEngine();
    } else {
        return vqcolumnview->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnPaintEngine(const QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_PaintEngine_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_KeyReleaseEvent(QColumnView* self, QKeyEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->keyReleaseEvent(event);
    } else {
        vqcolumnview->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QColumnView_QBaseKeyReleaseEvent(QColumnView* self, QKeyEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_KeyReleaseEvent_IsBase(true);
        vqcolumnview->keyReleaseEvent(event);
    } else {
        vqcolumnview->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnKeyReleaseEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_EnterEvent(QColumnView* self, QEnterEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->enterEvent(event);
    } else {
        vqcolumnview->enterEvent(event);
    }
}

// Base class handler implementation
void QColumnView_QBaseEnterEvent(QColumnView* self, QEnterEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_EnterEvent_IsBase(true);
        vqcolumnview->enterEvent(event);
    } else {
        vqcolumnview->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnEnterEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_EnterEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_LeaveEvent(QColumnView* self, QEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->leaveEvent(event);
    } else {
        vqcolumnview->leaveEvent(event);
    }
}

// Base class handler implementation
void QColumnView_QBaseLeaveEvent(QColumnView* self, QEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_LeaveEvent_IsBase(true);
        vqcolumnview->leaveEvent(event);
    } else {
        vqcolumnview->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnLeaveEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_LeaveEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_MoveEvent(QColumnView* self, QMoveEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->moveEvent(event);
    } else {
        vqcolumnview->moveEvent(event);
    }
}

// Base class handler implementation
void QColumnView_QBaseMoveEvent(QColumnView* self, QMoveEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_MoveEvent_IsBase(true);
        vqcolumnview->moveEvent(event);
    } else {
        vqcolumnview->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnMoveEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_MoveEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_CloseEvent(QColumnView* self, QCloseEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->closeEvent(event);
    } else {
        vqcolumnview->closeEvent(event);
    }
}

// Base class handler implementation
void QColumnView_QBaseCloseEvent(QColumnView* self, QCloseEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_CloseEvent_IsBase(true);
        vqcolumnview->closeEvent(event);
    } else {
        vqcolumnview->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnCloseEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_CloseEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_TabletEvent(QColumnView* self, QTabletEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->tabletEvent(event);
    } else {
        vqcolumnview->tabletEvent(event);
    }
}

// Base class handler implementation
void QColumnView_QBaseTabletEvent(QColumnView* self, QTabletEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_TabletEvent_IsBase(true);
        vqcolumnview->tabletEvent(event);
    } else {
        vqcolumnview->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnTabletEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_TabletEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_ActionEvent(QColumnView* self, QActionEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->actionEvent(event);
    } else {
        vqcolumnview->actionEvent(event);
    }
}

// Base class handler implementation
void QColumnView_QBaseActionEvent(QColumnView* self, QActionEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_ActionEvent_IsBase(true);
        vqcolumnview->actionEvent(event);
    } else {
        vqcolumnview->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnActionEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_ActionEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_ShowEvent(QColumnView* self, QShowEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->showEvent(event);
    } else {
        vqcolumnview->showEvent(event);
    }
}

// Base class handler implementation
void QColumnView_QBaseShowEvent(QColumnView* self, QShowEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_ShowEvent_IsBase(true);
        vqcolumnview->showEvent(event);
    } else {
        vqcolumnview->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnShowEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_ShowEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_HideEvent(QColumnView* self, QHideEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->hideEvent(event);
    } else {
        vqcolumnview->hideEvent(event);
    }
}

// Base class handler implementation
void QColumnView_QBaseHideEvent(QColumnView* self, QHideEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_HideEvent_IsBase(true);
        vqcolumnview->hideEvent(event);
    } else {
        vqcolumnview->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnHideEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_HideEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QColumnView_NativeEvent(QColumnView* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        return vqcolumnview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqcolumnview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QColumnView_QBaseNativeEvent(QColumnView* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_NativeEvent_IsBase(true);
        return vqcolumnview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqcolumnview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnNativeEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_NativeEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QColumnView_Metric(const QColumnView* self, int param1) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        return vqcolumnview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqcolumnview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QColumnView_QBaseMetric(const QColumnView* self, int param1) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_Metric_IsBase(true);
        return vqcolumnview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqcolumnview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnMetric(const QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_Metric_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_InitPainter(const QColumnView* self, QPainter* painter) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->initPainter(painter);
    } else {
        vqcolumnview->initPainter(painter);
    }
}

// Base class handler implementation
void QColumnView_QBaseInitPainter(const QColumnView* self, QPainter* painter) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_InitPainter_IsBase(true);
        vqcolumnview->initPainter(painter);
    } else {
        vqcolumnview->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnInitPainter(const QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_InitPainter_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QColumnView_Redirected(const QColumnView* self, QPoint* offset) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        return vqcolumnview->redirected(offset);
    } else {
        return vqcolumnview->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QColumnView_QBaseRedirected(const QColumnView* self, QPoint* offset) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_Redirected_IsBase(true);
        return vqcolumnview->redirected(offset);
    } else {
        return vqcolumnview->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnRedirected(const QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_Redirected_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QColumnView_SharedPainter(const QColumnView* self) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        return vqcolumnview->sharedPainter();
    } else {
        return vqcolumnview->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QColumnView_QBaseSharedPainter(const QColumnView* self) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_SharedPainter_IsBase(true);
        return vqcolumnview->sharedPainter();
    } else {
        return vqcolumnview->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSharedPainter(const QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_SharedPainter_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_ChildEvent(QColumnView* self, QChildEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->childEvent(event);
    } else {
        vqcolumnview->childEvent(event);
    }
}

// Base class handler implementation
void QColumnView_QBaseChildEvent(QColumnView* self, QChildEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_ChildEvent_IsBase(true);
        vqcolumnview->childEvent(event);
    } else {
        vqcolumnview->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnChildEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_ChildEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_CustomEvent(QColumnView* self, QEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->customEvent(event);
    } else {
        vqcolumnview->customEvent(event);
    }
}

// Base class handler implementation
void QColumnView_QBaseCustomEvent(QColumnView* self, QEvent* event) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_CustomEvent_IsBase(true);
        vqcolumnview->customEvent(event);
    } else {
        vqcolumnview->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnCustomEvent(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_CustomEvent_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_ConnectNotify(QColumnView* self, QMetaMethod* signal) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->connectNotify(*signal);
    } else {
        vqcolumnview->connectNotify(*signal);
    }
}

// Base class handler implementation
void QColumnView_QBaseConnectNotify(QColumnView* self, QMetaMethod* signal) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_ConnectNotify_IsBase(true);
        vqcolumnview->connectNotify(*signal);
    } else {
        vqcolumnview->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnConnectNotify(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_ConnectNotify_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_DisconnectNotify(QColumnView* self, QMetaMethod* signal) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->disconnectNotify(*signal);
    } else {
        vqcolumnview->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QColumnView_QBaseDisconnectNotify(QColumnView* self, QMetaMethod* signal) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_DisconnectNotify_IsBase(true);
        vqcolumnview->disconnectNotify(*signal);
    } else {
        vqcolumnview->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnDisconnectNotify(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_DisconnectNotify_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_InitializeColumn(const QColumnView* self, QAbstractItemView* column) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->initializeColumn(column);
    } else {
        vqcolumnview->initializeColumn(column);
    }
}

// Base class handler implementation
void QColumnView_QBaseInitializeColumn(const QColumnView* self, QAbstractItemView* column) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_InitializeColumn_IsBase(true);
        vqcolumnview->initializeColumn(column);
    } else {
        vqcolumnview->initializeColumn(column);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnInitializeColumn(const QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_InitializeColumn_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_InitializeColumn_Callback>(slot));
    }
}

// Derived class handler implementation
int QColumnView_State(const QColumnView* self) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        return static_cast<int>(vqcolumnview->state());
    } else {
        return static_cast<int>(vqcolumnview->state());
    }
}

// Base class handler implementation
int QColumnView_QBaseState(const QColumnView* self) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_State_IsBase(true);
        return static_cast<int>(vqcolumnview->state());
    } else {
        return static_cast<int>(vqcolumnview->state());
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnState(const QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_State_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_State_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_SetState(QColumnView* self, int state) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setState(static_cast<VirtualQColumnView::State>(state));
    } else {
        vqcolumnview->setState(static_cast<VirtualQColumnView::State>(state));
    }
}

// Base class handler implementation
void QColumnView_QBaseSetState(QColumnView* self, int state) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_SetState_IsBase(true);
        vqcolumnview->setState(static_cast<VirtualQColumnView::State>(state));
    } else {
        vqcolumnview->setState(static_cast<VirtualQColumnView::State>(state));
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSetState(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_SetState_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_SetState_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_ScheduleDelayedItemsLayout(QColumnView* self) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->scheduleDelayedItemsLayout();
    } else {
        vqcolumnview->scheduleDelayedItemsLayout();
    }
}

// Base class handler implementation
void QColumnView_QBaseScheduleDelayedItemsLayout(QColumnView* self) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_ScheduleDelayedItemsLayout_IsBase(true);
        vqcolumnview->scheduleDelayedItemsLayout();
    } else {
        vqcolumnview->scheduleDelayedItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnScheduleDelayedItemsLayout(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_ScheduleDelayedItemsLayout_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_ScheduleDelayedItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_ExecuteDelayedItemsLayout(QColumnView* self) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->executeDelayedItemsLayout();
    } else {
        vqcolumnview->executeDelayedItemsLayout();
    }
}

// Base class handler implementation
void QColumnView_QBaseExecuteDelayedItemsLayout(QColumnView* self) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_ExecuteDelayedItemsLayout_IsBase(true);
        vqcolumnview->executeDelayedItemsLayout();
    } else {
        vqcolumnview->executeDelayedItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnExecuteDelayedItemsLayout(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_ExecuteDelayedItemsLayout_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_ExecuteDelayedItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_SetDirtyRegion(QColumnView* self, QRegion* region) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setDirtyRegion(*region);
    } else {
        vqcolumnview->setDirtyRegion(*region);
    }
}

// Base class handler implementation
void QColumnView_QBaseSetDirtyRegion(QColumnView* self, QRegion* region) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_SetDirtyRegion_IsBase(true);
        vqcolumnview->setDirtyRegion(*region);
    } else {
        vqcolumnview->setDirtyRegion(*region);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSetDirtyRegion(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_SetDirtyRegion_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_SetDirtyRegion_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_ScrollDirtyRegion(QColumnView* self, int dx, int dy) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqcolumnview->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void QColumnView_QBaseScrollDirtyRegion(QColumnView* self, int dx, int dy) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_ScrollDirtyRegion_IsBase(true);
        vqcolumnview->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqcolumnview->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnScrollDirtyRegion(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_ScrollDirtyRegion_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_ScrollDirtyRegion_Callback>(slot));
    }
}

// Derived class handler implementation
QPoint* QColumnView_DirtyRegionOffset(const QColumnView* self) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        return new QPoint(vqcolumnview->dirtyRegionOffset());
    }
    return {};
}

// Base class handler implementation
QPoint* QColumnView_QBaseDirtyRegionOffset(const QColumnView* self) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_DirtyRegionOffset_IsBase(true);
        return new QPoint(vqcolumnview->dirtyRegionOffset());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnDirtyRegionOffset(const QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_DirtyRegionOffset_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_DirtyRegionOffset_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_StartAutoScroll(QColumnView* self) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->startAutoScroll();
    } else {
        vqcolumnview->startAutoScroll();
    }
}

// Base class handler implementation
void QColumnView_QBaseStartAutoScroll(QColumnView* self) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_StartAutoScroll_IsBase(true);
        vqcolumnview->startAutoScroll();
    } else {
        vqcolumnview->startAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnStartAutoScroll(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_StartAutoScroll_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_StartAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_StopAutoScroll(QColumnView* self) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->stopAutoScroll();
    } else {
        vqcolumnview->stopAutoScroll();
    }
}

// Base class handler implementation
void QColumnView_QBaseStopAutoScroll(QColumnView* self) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_StopAutoScroll_IsBase(true);
        vqcolumnview->stopAutoScroll();
    } else {
        vqcolumnview->stopAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnStopAutoScroll(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_StopAutoScroll_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_StopAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_DoAutoScroll(QColumnView* self) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->doAutoScroll();
    } else {
        vqcolumnview->doAutoScroll();
    }
}

// Base class handler implementation
void QColumnView_QBaseDoAutoScroll(QColumnView* self) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_DoAutoScroll_IsBase(true);
        vqcolumnview->doAutoScroll();
    } else {
        vqcolumnview->doAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnDoAutoScroll(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_DoAutoScroll_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_DoAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
int QColumnView_DropIndicatorPosition(const QColumnView* self) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        return static_cast<int>(vqcolumnview->dropIndicatorPosition());
    } else {
        return static_cast<int>(vqcolumnview->dropIndicatorPosition());
    }
}

// Base class handler implementation
int QColumnView_QBaseDropIndicatorPosition(const QColumnView* self) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_DropIndicatorPosition_IsBase(true);
        return static_cast<int>(vqcolumnview->dropIndicatorPosition());
    } else {
        return static_cast<int>(vqcolumnview->dropIndicatorPosition());
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnDropIndicatorPosition(const QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_DropIndicatorPosition_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_DropIndicatorPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_SetViewportMargins(QColumnView* self, int left, int top, int right, int bottom) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        vqcolumnview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Base class handler implementation
void QColumnView_QBaseSetViewportMargins(QColumnView* self, int left, int top, int right, int bottom) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_SetViewportMargins_IsBase(true);
        vqcolumnview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        vqcolumnview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSetViewportMargins(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_SetViewportMargins_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_SetViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
QMargins* QColumnView_ViewportMargins(const QColumnView* self) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        return new QMargins(vqcolumnview->viewportMargins());
    }
    return {};
}

// Base class handler implementation
QMargins* QColumnView_QBaseViewportMargins(const QColumnView* self) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_ViewportMargins_IsBase(true);
        return new QMargins(vqcolumnview->viewportMargins());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnViewportMargins(const QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_ViewportMargins_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_ViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_DrawFrame(QColumnView* self, QPainter* param1) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->drawFrame(param1);
    } else {
        vqcolumnview->drawFrame(param1);
    }
}

// Base class handler implementation
void QColumnView_QBaseDrawFrame(QColumnView* self, QPainter* param1) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_DrawFrame_IsBase(true);
        vqcolumnview->drawFrame(param1);
    } else {
        vqcolumnview->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnDrawFrame(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_DrawFrame_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_UpdateMicroFocus(QColumnView* self) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->updateMicroFocus();
    } else {
        vqcolumnview->updateMicroFocus();
    }
}

// Base class handler implementation
void QColumnView_QBaseUpdateMicroFocus(QColumnView* self) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_UpdateMicroFocus_IsBase(true);
        vqcolumnview->updateMicroFocus();
    } else {
        vqcolumnview->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnUpdateMicroFocus(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_Create(QColumnView* self) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->create();
    } else {
        vqcolumnview->create();
    }
}

// Base class handler implementation
void QColumnView_QBaseCreate(QColumnView* self) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_Create_IsBase(true);
        vqcolumnview->create();
    } else {
        vqcolumnview->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnCreate(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_Create_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QColumnView_Destroy(QColumnView* self) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->destroy();
    } else {
        vqcolumnview->destroy();
    }
}

// Base class handler implementation
void QColumnView_QBaseDestroy(QColumnView* self) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_Destroy_IsBase(true);
        vqcolumnview->destroy();
    } else {
        vqcolumnview->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnDestroy(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_Destroy_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QColumnView_FocusNextChild(QColumnView* self) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        return vqcolumnview->focusNextChild();
    } else {
        return vqcolumnview->focusNextChild();
    }
}

// Base class handler implementation
bool QColumnView_QBaseFocusNextChild(QColumnView* self) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_FocusNextChild_IsBase(true);
        return vqcolumnview->focusNextChild();
    } else {
        return vqcolumnview->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnFocusNextChild(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_FocusNextChild_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QColumnView_FocusPreviousChild(QColumnView* self) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        return vqcolumnview->focusPreviousChild();
    } else {
        return vqcolumnview->focusPreviousChild();
    }
}

// Base class handler implementation
bool QColumnView_QBaseFocusPreviousChild(QColumnView* self) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_FocusPreviousChild_IsBase(true);
        return vqcolumnview->focusPreviousChild();
    } else {
        return vqcolumnview->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnFocusPreviousChild(QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = dynamic_cast<VirtualQColumnView*>(self)) {
        vqcolumnview->setQColumnView_FocusPreviousChild_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QColumnView_Sender(const QColumnView* self) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        return vqcolumnview->sender();
    } else {
        return vqcolumnview->sender();
    }
}

// Base class handler implementation
QObject* QColumnView_QBaseSender(const QColumnView* self) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_Sender_IsBase(true);
        return vqcolumnview->sender();
    } else {
        return vqcolumnview->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSender(const QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_Sender_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QColumnView_SenderSignalIndex(const QColumnView* self) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        return vqcolumnview->senderSignalIndex();
    } else {
        return vqcolumnview->senderSignalIndex();
    }
}

// Base class handler implementation
int QColumnView_QBaseSenderSignalIndex(const QColumnView* self) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_SenderSignalIndex_IsBase(true);
        return vqcolumnview->senderSignalIndex();
    } else {
        return vqcolumnview->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnSenderSignalIndex(const QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_SenderSignalIndex_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QColumnView_Receivers(const QColumnView* self, const char* signal) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        return vqcolumnview->receivers(signal);
    } else {
        return vqcolumnview->receivers(signal);
    }
}

// Base class handler implementation
int QColumnView_QBaseReceivers(const QColumnView* self, const char* signal) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_Receivers_IsBase(true);
        return vqcolumnview->receivers(signal);
    } else {
        return vqcolumnview->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnReceivers(const QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_Receivers_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QColumnView_IsSignalConnected(const QColumnView* self, QMetaMethod* signal) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        return vqcolumnview->isSignalConnected(*signal);
    } else {
        return vqcolumnview->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QColumnView_QBaseIsSignalConnected(const QColumnView* self, QMetaMethod* signal) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_IsSignalConnected_IsBase(true);
        return vqcolumnview->isSignalConnected(*signal);
    } else {
        return vqcolumnview->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QColumnView_OnIsSignalConnected(const QColumnView* self, intptr_t slot) {
    if (auto* vqcolumnview = const_cast<VirtualQColumnView*>(dynamic_cast<const VirtualQColumnView*>(self))) {
        vqcolumnview->setQColumnView_IsSignalConnected_Callback(reinterpret_cast<VirtualQColumnView::QColumnView_IsSignalConnected_Callback>(slot));
    }
}

void QColumnView_Delete(QColumnView* self) {
    delete self;
}
