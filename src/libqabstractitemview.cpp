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
#include <qabstractitemview.h>
#include "libqabstractitemview.hpp"
#include "libqabstractitemview.hxx"

QAbstractItemView* QAbstractItemView_new(QWidget* parent) {
    return new VirtualQAbstractItemView(parent);
}

QAbstractItemView* QAbstractItemView_new2() {
    return new VirtualQAbstractItemView();
}

QMetaObject* QAbstractItemView_MetaObject(const QAbstractItemView* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAbstractItemView_Metacast(QAbstractItemView* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAbstractItemView_Metacall(QAbstractItemView* self, int param1, int param2, void** param3) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAbstractItemView_OnMetacall(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_Metacall_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QAbstractItemView_QBaseMetacall(QAbstractItemView* self, int param1, int param2, void** param3) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_Metacall_IsBase(true);
        return vqabstractitemview->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QAbstractItemView_Tr(const char* s) {
    QString _ret = QAbstractItemView::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QAbstractItemModel* QAbstractItemView_Model(const QAbstractItemView* self) {
    return self->model();
}

QItemSelectionModel* QAbstractItemView_SelectionModel(const QAbstractItemView* self) {
    return self->selectionModel();
}

void QAbstractItemView_SetItemDelegate(QAbstractItemView* self, QAbstractItemDelegate* delegate) {
    self->setItemDelegate(delegate);
}

QAbstractItemDelegate* QAbstractItemView_ItemDelegate(const QAbstractItemView* self) {
    return self->itemDelegate();
}

void QAbstractItemView_SetSelectionMode(QAbstractItemView* self, int mode) {
    self->setSelectionMode(static_cast<QAbstractItemView::SelectionMode>(mode));
}

int QAbstractItemView_SelectionMode(const QAbstractItemView* self) {
    return static_cast<int>(self->selectionMode());
}

void QAbstractItemView_SetSelectionBehavior(QAbstractItemView* self, int behavior) {
    self->setSelectionBehavior(static_cast<QAbstractItemView::SelectionBehavior>(behavior));
}

int QAbstractItemView_SelectionBehavior(const QAbstractItemView* self) {
    return static_cast<int>(self->selectionBehavior());
}

QModelIndex* QAbstractItemView_CurrentIndex(const QAbstractItemView* self) {
    return new QModelIndex(self->currentIndex());
}

QModelIndex* QAbstractItemView_RootIndex(const QAbstractItemView* self) {
    return new QModelIndex(self->rootIndex());
}

void QAbstractItemView_SetEditTriggers(QAbstractItemView* self, int triggers) {
    self->setEditTriggers(static_cast<QAbstractItemView::EditTriggers>(triggers));
}

int QAbstractItemView_EditTriggers(const QAbstractItemView* self) {
    return static_cast<int>(self->editTriggers());
}

void QAbstractItemView_SetVerticalScrollMode(QAbstractItemView* self, int mode) {
    self->setVerticalScrollMode(static_cast<QAbstractItemView::ScrollMode>(mode));
}

int QAbstractItemView_VerticalScrollMode(const QAbstractItemView* self) {
    return static_cast<int>(self->verticalScrollMode());
}

void QAbstractItemView_ResetVerticalScrollMode(QAbstractItemView* self) {
    self->resetVerticalScrollMode();
}

void QAbstractItemView_SetHorizontalScrollMode(QAbstractItemView* self, int mode) {
    self->setHorizontalScrollMode(static_cast<QAbstractItemView::ScrollMode>(mode));
}

int QAbstractItemView_HorizontalScrollMode(const QAbstractItemView* self) {
    return static_cast<int>(self->horizontalScrollMode());
}

void QAbstractItemView_ResetHorizontalScrollMode(QAbstractItemView* self) {
    self->resetHorizontalScrollMode();
}

void QAbstractItemView_SetAutoScroll(QAbstractItemView* self, bool enable) {
    self->setAutoScroll(enable);
}

bool QAbstractItemView_HasAutoScroll(const QAbstractItemView* self) {
    return self->hasAutoScroll();
}

void QAbstractItemView_SetAutoScrollMargin(QAbstractItemView* self, int margin) {
    self->setAutoScrollMargin(static_cast<int>(margin));
}

int QAbstractItemView_AutoScrollMargin(const QAbstractItemView* self) {
    return self->autoScrollMargin();
}

void QAbstractItemView_SetTabKeyNavigation(QAbstractItemView* self, bool enable) {
    self->setTabKeyNavigation(enable);
}

bool QAbstractItemView_TabKeyNavigation(const QAbstractItemView* self) {
    return self->tabKeyNavigation();
}

void QAbstractItemView_SetDropIndicatorShown(QAbstractItemView* self, bool enable) {
    self->setDropIndicatorShown(enable);
}

bool QAbstractItemView_ShowDropIndicator(const QAbstractItemView* self) {
    return self->showDropIndicator();
}

void QAbstractItemView_SetDragEnabled(QAbstractItemView* self, bool enable) {
    self->setDragEnabled(enable);
}

bool QAbstractItemView_DragEnabled(const QAbstractItemView* self) {
    return self->dragEnabled();
}

void QAbstractItemView_SetDragDropOverwriteMode(QAbstractItemView* self, bool overwrite) {
    self->setDragDropOverwriteMode(overwrite);
}

bool QAbstractItemView_DragDropOverwriteMode(const QAbstractItemView* self) {
    return self->dragDropOverwriteMode();
}

void QAbstractItemView_SetDragDropMode(QAbstractItemView* self, int behavior) {
    self->setDragDropMode(static_cast<QAbstractItemView::DragDropMode>(behavior));
}

int QAbstractItemView_DragDropMode(const QAbstractItemView* self) {
    return static_cast<int>(self->dragDropMode());
}

void QAbstractItemView_SetDefaultDropAction(QAbstractItemView* self, int dropAction) {
    self->setDefaultDropAction(static_cast<Qt::DropAction>(dropAction));
}

int QAbstractItemView_DefaultDropAction(const QAbstractItemView* self) {
    return static_cast<int>(self->defaultDropAction());
}

void QAbstractItemView_SetAlternatingRowColors(QAbstractItemView* self, bool enable) {
    self->setAlternatingRowColors(enable);
}

bool QAbstractItemView_AlternatingRowColors(const QAbstractItemView* self) {
    return self->alternatingRowColors();
}

void QAbstractItemView_SetIconSize(QAbstractItemView* self, QSize* size) {
    self->setIconSize(*size);
}

QSize* QAbstractItemView_IconSize(const QAbstractItemView* self) {
    return new QSize(self->iconSize());
}

void QAbstractItemView_SetTextElideMode(QAbstractItemView* self, int mode) {
    self->setTextElideMode(static_cast<Qt::TextElideMode>(mode));
}

int QAbstractItemView_TextElideMode(const QAbstractItemView* self) {
    return static_cast<int>(self->textElideMode());
}

QSize* QAbstractItemView_SizeHintForIndex(const QAbstractItemView* self, QModelIndex* index) {
    return new QSize(self->sizeHintForIndex(*index));
}

void QAbstractItemView_OpenPersistentEditor(QAbstractItemView* self, QModelIndex* index) {
    self->openPersistentEditor(*index);
}

void QAbstractItemView_ClosePersistentEditor(QAbstractItemView* self, QModelIndex* index) {
    self->closePersistentEditor(*index);
}

bool QAbstractItemView_IsPersistentEditorOpen(const QAbstractItemView* self, QModelIndex* index) {
    return self->isPersistentEditorOpen(*index);
}

void QAbstractItemView_SetIndexWidget(QAbstractItemView* self, QModelIndex* index, QWidget* widget) {
    self->setIndexWidget(*index, widget);
}

QWidget* QAbstractItemView_IndexWidget(const QAbstractItemView* self, QModelIndex* index) {
    return self->indexWidget(*index);
}

void QAbstractItemView_SetItemDelegateForRow(QAbstractItemView* self, int row, QAbstractItemDelegate* delegate) {
    self->setItemDelegateForRow(static_cast<int>(row), delegate);
}

QAbstractItemDelegate* QAbstractItemView_ItemDelegateForRow(const QAbstractItemView* self, int row) {
    return self->itemDelegateForRow(static_cast<int>(row));
}

void QAbstractItemView_SetItemDelegateForColumn(QAbstractItemView* self, int column, QAbstractItemDelegate* delegate) {
    self->setItemDelegateForColumn(static_cast<int>(column), delegate);
}

QAbstractItemDelegate* QAbstractItemView_ItemDelegateForColumn(const QAbstractItemView* self, int column) {
    return self->itemDelegateForColumn(static_cast<int>(column));
}

QAbstractItemDelegate* QAbstractItemView_ItemDelegateWithIndex(const QAbstractItemView* self, QModelIndex* index) {
    return self->itemDelegate(*index);
}

void QAbstractItemView_Edit(QAbstractItemView* self, QModelIndex* index) {
    self->edit(*index);
}

void QAbstractItemView_ClearSelection(QAbstractItemView* self) {
    self->clearSelection();
}

void QAbstractItemView_SetCurrentIndex(QAbstractItemView* self, QModelIndex* index) {
    self->setCurrentIndex(*index);
}

void QAbstractItemView_ScrollToTop(QAbstractItemView* self) {
    self->scrollToTop();
}

void QAbstractItemView_ScrollToBottom(QAbstractItemView* self) {
    self->scrollToBottom();
}

void QAbstractItemView_Update(QAbstractItemView* self, QModelIndex* index) {
    self->update(*index);
}

void QAbstractItemView_Pressed(QAbstractItemView* self, QModelIndex* index) {
    self->pressed(*index);
}

void QAbstractItemView_Connect_Pressed(QAbstractItemView* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemView*, QModelIndex*) = reinterpret_cast<void (*)(QAbstractItemView*, QModelIndex*)>(slot);
    QAbstractItemView::connect(self, &QAbstractItemView::pressed, [self, slotFunc](const QModelIndex& index) {
        const QModelIndex& index_ret = index;
        // Cast returned reference into pointer
        QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
        slotFunc(self, sigval1);
    });
}

void QAbstractItemView_Clicked(QAbstractItemView* self, QModelIndex* index) {
    self->clicked(*index);
}

void QAbstractItemView_Connect_Clicked(QAbstractItemView* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemView*, QModelIndex*) = reinterpret_cast<void (*)(QAbstractItemView*, QModelIndex*)>(slot);
    QAbstractItemView::connect(self, &QAbstractItemView::clicked, [self, slotFunc](const QModelIndex& index) {
        const QModelIndex& index_ret = index;
        // Cast returned reference into pointer
        QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
        slotFunc(self, sigval1);
    });
}

void QAbstractItemView_DoubleClicked(QAbstractItemView* self, QModelIndex* index) {
    self->doubleClicked(*index);
}

void QAbstractItemView_Connect_DoubleClicked(QAbstractItemView* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemView*, QModelIndex*) = reinterpret_cast<void (*)(QAbstractItemView*, QModelIndex*)>(slot);
    QAbstractItemView::connect(self, &QAbstractItemView::doubleClicked, [self, slotFunc](const QModelIndex& index) {
        const QModelIndex& index_ret = index;
        // Cast returned reference into pointer
        QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
        slotFunc(self, sigval1);
    });
}

void QAbstractItemView_Activated(QAbstractItemView* self, QModelIndex* index) {
    self->activated(*index);
}

void QAbstractItemView_Connect_Activated(QAbstractItemView* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemView*, QModelIndex*) = reinterpret_cast<void (*)(QAbstractItemView*, QModelIndex*)>(slot);
    QAbstractItemView::connect(self, &QAbstractItemView::activated, [self, slotFunc](const QModelIndex& index) {
        const QModelIndex& index_ret = index;
        // Cast returned reference into pointer
        QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
        slotFunc(self, sigval1);
    });
}

void QAbstractItemView_Entered(QAbstractItemView* self, QModelIndex* index) {
    self->entered(*index);
}

void QAbstractItemView_Connect_Entered(QAbstractItemView* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemView*, QModelIndex*) = reinterpret_cast<void (*)(QAbstractItemView*, QModelIndex*)>(slot);
    QAbstractItemView::connect(self, &QAbstractItemView::entered, [self, slotFunc](const QModelIndex& index) {
        const QModelIndex& index_ret = index;
        // Cast returned reference into pointer
        QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
        slotFunc(self, sigval1);
    });
}

void QAbstractItemView_ViewportEntered(QAbstractItemView* self) {
    self->viewportEntered();
}

void QAbstractItemView_Connect_ViewportEntered(QAbstractItemView* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemView*) = reinterpret_cast<void (*)(QAbstractItemView*)>(slot);
    QAbstractItemView::connect(self, &QAbstractItemView::viewportEntered, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAbstractItemView_IconSizeChanged(QAbstractItemView* self, QSize* size) {
    self->iconSizeChanged(*size);
}

void QAbstractItemView_Connect_IconSizeChanged(QAbstractItemView* self, intptr_t slot) {
    void (*slotFunc)(QAbstractItemView*, QSize*) = reinterpret_cast<void (*)(QAbstractItemView*, QSize*)>(slot);
    QAbstractItemView::connect(self, &QAbstractItemView::iconSizeChanged, [self, slotFunc](const QSize& size) {
        const QSize& size_ret = size;
        // Cast returned reference into pointer
        QSize* sigval1 = const_cast<QSize*>(&size_ret);
        slotFunc(self, sigval1);
    });
}

libqt_string QAbstractItemView_Tr2(const char* s, const char* c) {
    QString _ret = QAbstractItemView::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QAbstractItemView_Tr3(const char* s, const char* c, int n) {
    QString _ret = QAbstractItemView::tr(s, c, static_cast<int>(n));
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
void QAbstractItemView_SetModel(QAbstractItemView* self, QAbstractItemModel* model) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setModel(model);
    } else {
        vqabstractitemview->setModel(model);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseSetModel(QAbstractItemView* self, QAbstractItemModel* model) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_SetModel_IsBase(true);
        vqabstractitemview->setModel(model);
    } else {
        vqabstractitemview->setModel(model);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSetModel(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_SetModel_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SetModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_SetSelectionModel(QAbstractItemView* self, QItemSelectionModel* selectionModel) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setSelectionModel(selectionModel);
    } else {
        vqabstractitemview->setSelectionModel(selectionModel);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseSetSelectionModel(QAbstractItemView* self, QItemSelectionModel* selectionModel) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_SetSelectionModel_IsBase(true);
        vqabstractitemview->setSelectionModel(selectionModel);
    } else {
        vqabstractitemview->setSelectionModel(selectionModel);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSetSelectionModel(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_SetSelectionModel_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SetSelectionModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_KeyboardSearch(QAbstractItemView* self, libqt_string search) {
    QString search_QString = QString::fromUtf8(search.data, search.len);
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->keyboardSearch(search_QString);
    } else {
        vqabstractitemview->keyboardSearch(search_QString);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseKeyboardSearch(QAbstractItemView* self, libqt_string search) {
    QString search_QString = QString::fromUtf8(search.data, search.len);
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_KeyboardSearch_IsBase(true);
        vqabstractitemview->keyboardSearch(search_QString);
    } else {
        vqabstractitemview->keyboardSearch(search_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnKeyboardSearch(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_KeyboardSearch_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_KeyboardSearch_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QAbstractItemView_VisualRect(const QAbstractItemView* self, QModelIndex* index) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        return new QRect(vqabstractitemview->visualRect(*index));
    } else {
        return new QRect(self->visualRect(*index));
    }
}

// Base class handler implementation
QRect* QAbstractItemView_QBaseVisualRect(const QAbstractItemView* self, QModelIndex* index) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_VisualRect_IsBase(true);
        return new QRect(vqabstractitemview->visualRect(*index));
    } else {
        return new QRect(self->visualRect(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnVisualRect(const QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_VisualRect_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_VisualRect_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_ScrollTo(QAbstractItemView* self, QModelIndex* index, int hint) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    } else {
        vqabstractitemview->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseScrollTo(QAbstractItemView* self, QModelIndex* index, int hint) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_ScrollTo_IsBase(true);
        vqabstractitemview->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    } else {
        vqabstractitemview->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnScrollTo(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_ScrollTo_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_ScrollTo_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QAbstractItemView_IndexAt(const QAbstractItemView* self, QPoint* point) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        return new QModelIndex(vqabstractitemview->indexAt(*point));
    } else {
        return new QModelIndex(self->indexAt(*point));
    }
}

// Base class handler implementation
QModelIndex* QAbstractItemView_QBaseIndexAt(const QAbstractItemView* self, QPoint* point) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_IndexAt_IsBase(true);
        return new QModelIndex(vqabstractitemview->indexAt(*point));
    } else {
        return new QModelIndex(self->indexAt(*point));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnIndexAt(const QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_IndexAt_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_IndexAt_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractItemView_SizeHintForRow(const QAbstractItemView* self, int row) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        return vqabstractitemview->sizeHintForRow(static_cast<int>(row));
    } else {
        return vqabstractitemview->sizeHintForRow(static_cast<int>(row));
    }
}

// Base class handler implementation
int QAbstractItemView_QBaseSizeHintForRow(const QAbstractItemView* self, int row) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_SizeHintForRow_IsBase(true);
        return vqabstractitemview->sizeHintForRow(static_cast<int>(row));
    } else {
        return vqabstractitemview->sizeHintForRow(static_cast<int>(row));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSizeHintForRow(const QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_SizeHintForRow_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SizeHintForRow_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractItemView_SizeHintForColumn(const QAbstractItemView* self, int column) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        return vqabstractitemview->sizeHintForColumn(static_cast<int>(column));
    } else {
        return vqabstractitemview->sizeHintForColumn(static_cast<int>(column));
    }
}

// Base class handler implementation
int QAbstractItemView_QBaseSizeHintForColumn(const QAbstractItemView* self, int column) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_SizeHintForColumn_IsBase(true);
        return vqabstractitemview->sizeHintForColumn(static_cast<int>(column));
    } else {
        return vqabstractitemview->sizeHintForColumn(static_cast<int>(column));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSizeHintForColumn(const QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_SizeHintForColumn_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SizeHintForColumn_Callback>(slot));
    }
}

// Derived class handler implementation
QAbstractItemDelegate* QAbstractItemView_ItemDelegateForIndex(const QAbstractItemView* self, QModelIndex* index) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        return vqabstractitemview->itemDelegateForIndex(*index);
    } else {
        return vqabstractitemview->itemDelegateForIndex(*index);
    }
}

// Base class handler implementation
QAbstractItemDelegate* QAbstractItemView_QBaseItemDelegateForIndex(const QAbstractItemView* self, QModelIndex* index) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_ItemDelegateForIndex_IsBase(true);
        return vqabstractitemview->itemDelegateForIndex(*index);
    } else {
        return vqabstractitemview->itemDelegateForIndex(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnItemDelegateForIndex(const QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_ItemDelegateForIndex_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_ItemDelegateForIndex_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QAbstractItemView_InputMethodQuery(const QAbstractItemView* self, int query) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        return new QVariant(vqabstractitemview->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

// Base class handler implementation
QVariant* QAbstractItemView_QBaseInputMethodQuery(const QAbstractItemView* self, int query) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_InputMethodQuery_IsBase(true);
        return new QVariant(vqabstractitemview->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnInputMethodQuery(const QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_InputMethodQuery_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_Reset(QAbstractItemView* self) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->reset();
    } else {
        vqabstractitemview->reset();
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseReset(QAbstractItemView* self) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_Reset_IsBase(true);
        vqabstractitemview->reset();
    } else {
        vqabstractitemview->reset();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnReset(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_Reset_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_Reset_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_SetRootIndex(QAbstractItemView* self, QModelIndex* index) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setRootIndex(*index);
    } else {
        vqabstractitemview->setRootIndex(*index);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseSetRootIndex(QAbstractItemView* self, QModelIndex* index) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_SetRootIndex_IsBase(true);
        vqabstractitemview->setRootIndex(*index);
    } else {
        vqabstractitemview->setRootIndex(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSetRootIndex(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_SetRootIndex_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SetRootIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_DoItemsLayout(QAbstractItemView* self) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->doItemsLayout();
    } else {
        vqabstractitemview->doItemsLayout();
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseDoItemsLayout(QAbstractItemView* self) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_DoItemsLayout_IsBase(true);
        vqabstractitemview->doItemsLayout();
    } else {
        vqabstractitemview->doItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnDoItemsLayout(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_DoItemsLayout_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_DoItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_SelectAll(QAbstractItemView* self) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->selectAll();
    } else {
        vqabstractitemview->selectAll();
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseSelectAll(QAbstractItemView* self) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_SelectAll_IsBase(true);
        vqabstractitemview->selectAll();
    } else {
        vqabstractitemview->selectAll();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSelectAll(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_SelectAll_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SelectAll_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_DataChanged(QAbstractItemView* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list /* of int */ roles) {
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data.ints);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->dataChanged(*topLeft, *bottomRight, roles_QList);
    } else {
        vqabstractitemview->dataChanged(*topLeft, *bottomRight, roles_QList);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseDataChanged(QAbstractItemView* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list /* of int */ roles) {
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data.ints);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_DataChanged_IsBase(true);
        vqabstractitemview->dataChanged(*topLeft, *bottomRight, roles_QList);
    } else {
        vqabstractitemview->dataChanged(*topLeft, *bottomRight, roles_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnDataChanged(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_DataChanged_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_DataChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_RowsInserted(QAbstractItemView* self, QModelIndex* parent, int start, int end) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        vqabstractitemview->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseRowsInserted(QAbstractItemView* self, QModelIndex* parent, int start, int end) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_RowsInserted_IsBase(true);
        vqabstractitemview->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        vqabstractitemview->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnRowsInserted(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_RowsInserted_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_RowsInserted_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_RowsAboutToBeRemoved(QAbstractItemView* self, QModelIndex* parent, int start, int end) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        vqabstractitemview->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseRowsAboutToBeRemoved(QAbstractItemView* self, QModelIndex* parent, int start, int end) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_RowsAboutToBeRemoved_IsBase(true);
        vqabstractitemview->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        vqabstractitemview->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnRowsAboutToBeRemoved(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_RowsAboutToBeRemoved_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_RowsAboutToBeRemoved_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_SelectionChanged(QAbstractItemView* self, QItemSelection* selected, QItemSelection* deselected) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->selectionChanged(*selected, *deselected);
    } else {
        vqabstractitemview->selectionChanged(*selected, *deselected);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseSelectionChanged(QAbstractItemView* self, QItemSelection* selected, QItemSelection* deselected) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_SelectionChanged_IsBase(true);
        vqabstractitemview->selectionChanged(*selected, *deselected);
    } else {
        vqabstractitemview->selectionChanged(*selected, *deselected);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSelectionChanged(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_SelectionChanged_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SelectionChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_CurrentChanged(QAbstractItemView* self, QModelIndex* current, QModelIndex* previous) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->currentChanged(*current, *previous);
    } else {
        vqabstractitemview->currentChanged(*current, *previous);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseCurrentChanged(QAbstractItemView* self, QModelIndex* current, QModelIndex* previous) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_CurrentChanged_IsBase(true);
        vqabstractitemview->currentChanged(*current, *previous);
    } else {
        vqabstractitemview->currentChanged(*current, *previous);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnCurrentChanged(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_CurrentChanged_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_CurrentChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_UpdateEditorData(QAbstractItemView* self) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->updateEditorData();
    } else {
        vqabstractitemview->updateEditorData();
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseUpdateEditorData(QAbstractItemView* self) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_UpdateEditorData_IsBase(true);
        vqabstractitemview->updateEditorData();
    } else {
        vqabstractitemview->updateEditorData();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnUpdateEditorData(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_UpdateEditorData_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_UpdateEditorData_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_UpdateEditorGeometries(QAbstractItemView* self) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->updateEditorGeometries();
    } else {
        vqabstractitemview->updateEditorGeometries();
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseUpdateEditorGeometries(QAbstractItemView* self) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_UpdateEditorGeometries_IsBase(true);
        vqabstractitemview->updateEditorGeometries();
    } else {
        vqabstractitemview->updateEditorGeometries();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnUpdateEditorGeometries(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_UpdateEditorGeometries_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_UpdateEditorGeometries_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_UpdateGeometries(QAbstractItemView* self) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->updateGeometries();
    } else {
        vqabstractitemview->updateGeometries();
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseUpdateGeometries(QAbstractItemView* self) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_UpdateGeometries_IsBase(true);
        vqabstractitemview->updateGeometries();
    } else {
        vqabstractitemview->updateGeometries();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnUpdateGeometries(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_UpdateGeometries_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_UpdateGeometries_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_VerticalScrollbarAction(QAbstractItemView* self, int action) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->verticalScrollbarAction(static_cast<int>(action));
    } else {
        vqabstractitemview->verticalScrollbarAction(static_cast<int>(action));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseVerticalScrollbarAction(QAbstractItemView* self, int action) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_VerticalScrollbarAction_IsBase(true);
        vqabstractitemview->verticalScrollbarAction(static_cast<int>(action));
    } else {
        vqabstractitemview->verticalScrollbarAction(static_cast<int>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnVerticalScrollbarAction(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_VerticalScrollbarAction_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_VerticalScrollbarAction_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_HorizontalScrollbarAction(QAbstractItemView* self, int action) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->horizontalScrollbarAction(static_cast<int>(action));
    } else {
        vqabstractitemview->horizontalScrollbarAction(static_cast<int>(action));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseHorizontalScrollbarAction(QAbstractItemView* self, int action) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_HorizontalScrollbarAction_IsBase(true);
        vqabstractitemview->horizontalScrollbarAction(static_cast<int>(action));
    } else {
        vqabstractitemview->horizontalScrollbarAction(static_cast<int>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnHorizontalScrollbarAction(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_HorizontalScrollbarAction_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_HorizontalScrollbarAction_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_VerticalScrollbarValueChanged(QAbstractItemView* self, int value) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->verticalScrollbarValueChanged(static_cast<int>(value));
    } else {
        vqabstractitemview->verticalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseVerticalScrollbarValueChanged(QAbstractItemView* self, int value) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_VerticalScrollbarValueChanged_IsBase(true);
        vqabstractitemview->verticalScrollbarValueChanged(static_cast<int>(value));
    } else {
        vqabstractitemview->verticalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnVerticalScrollbarValueChanged(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_VerticalScrollbarValueChanged_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_VerticalScrollbarValueChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_HorizontalScrollbarValueChanged(QAbstractItemView* self, int value) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->horizontalScrollbarValueChanged(static_cast<int>(value));
    } else {
        vqabstractitemview->horizontalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseHorizontalScrollbarValueChanged(QAbstractItemView* self, int value) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_HorizontalScrollbarValueChanged_IsBase(true);
        vqabstractitemview->horizontalScrollbarValueChanged(static_cast<int>(value));
    } else {
        vqabstractitemview->horizontalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnHorizontalScrollbarValueChanged(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_HorizontalScrollbarValueChanged_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_HorizontalScrollbarValueChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_CloseEditor(QAbstractItemView* self, QWidget* editor, int hint) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else {
        vqabstractitemview->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseCloseEditor(QAbstractItemView* self, QWidget* editor, int hint) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_CloseEditor_IsBase(true);
        vqabstractitemview->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else {
        vqabstractitemview->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnCloseEditor(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_CloseEditor_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_CloseEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_CommitData(QAbstractItemView* self, QWidget* editor) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->commitData(editor);
    } else {
        vqabstractitemview->commitData(editor);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseCommitData(QAbstractItemView* self, QWidget* editor) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_CommitData_IsBase(true);
        vqabstractitemview->commitData(editor);
    } else {
        vqabstractitemview->commitData(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnCommitData(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_CommitData_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_CommitData_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_EditorDestroyed(QAbstractItemView* self, QObject* editor) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->editorDestroyed(editor);
    } else {
        vqabstractitemview->editorDestroyed(editor);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseEditorDestroyed(QAbstractItemView* self, QObject* editor) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_EditorDestroyed_IsBase(true);
        vqabstractitemview->editorDestroyed(editor);
    } else {
        vqabstractitemview->editorDestroyed(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnEditorDestroyed(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_EditorDestroyed_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_EditorDestroyed_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QAbstractItemView_MoveCursor(QAbstractItemView* self, int cursorAction, int modifiers) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        return new QModelIndex(vqabstractitemview->moveCursor(static_cast<VirtualQAbstractItemView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* QAbstractItemView_QBaseMoveCursor(QAbstractItemView* self, int cursorAction, int modifiers) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_MoveCursor_IsBase(true);
        return new QModelIndex(vqabstractitemview->moveCursor(static_cast<VirtualQAbstractItemView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnMoveCursor(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_MoveCursor_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_MoveCursor_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractItemView_HorizontalOffset(const QAbstractItemView* self) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        return vqabstractitemview->horizontalOffset();
    } else {
        return vqabstractitemview->horizontalOffset();
    }
}

// Base class handler implementation
int QAbstractItemView_QBaseHorizontalOffset(const QAbstractItemView* self) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_HorizontalOffset_IsBase(true);
        return vqabstractitemview->horizontalOffset();
    } else {
        return vqabstractitemview->horizontalOffset();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnHorizontalOffset(const QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_HorizontalOffset_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_HorizontalOffset_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractItemView_VerticalOffset(const QAbstractItemView* self) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        return vqabstractitemview->verticalOffset();
    } else {
        return vqabstractitemview->verticalOffset();
    }
}

// Base class handler implementation
int QAbstractItemView_QBaseVerticalOffset(const QAbstractItemView* self) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_VerticalOffset_IsBase(true);
        return vqabstractitemview->verticalOffset();
    } else {
        return vqabstractitemview->verticalOffset();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnVerticalOffset(const QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_VerticalOffset_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_VerticalOffset_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractItemView_IsIndexHidden(const QAbstractItemView* self, QModelIndex* index) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        return vqabstractitemview->isIndexHidden(*index);
    } else {
        return vqabstractitemview->isIndexHidden(*index);
    }
}

// Base class handler implementation
bool QAbstractItemView_QBaseIsIndexHidden(const QAbstractItemView* self, QModelIndex* index) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_IsIndexHidden_IsBase(true);
        return vqabstractitemview->isIndexHidden(*index);
    } else {
        return vqabstractitemview->isIndexHidden(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnIsIndexHidden(const QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_IsIndexHidden_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_IsIndexHidden_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_SetSelection(QAbstractItemView* self, QRect* rect, int command) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        vqabstractitemview->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseSetSelection(QAbstractItemView* self, QRect* rect, int command) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_SetSelection_IsBase(true);
        vqabstractitemview->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        vqabstractitemview->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSetSelection(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_SetSelection_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SetSelection_Callback>(slot));
    }
}

// Derived class handler implementation
QRegion* QAbstractItemView_VisualRegionForSelection(const QAbstractItemView* self, QItemSelection* selection) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        return new QRegion(vqabstractitemview->visualRegionForSelection(*selection));
    }
    return {};
}

// Base class handler implementation
QRegion* QAbstractItemView_QBaseVisualRegionForSelection(const QAbstractItemView* self, QItemSelection* selection) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_VisualRegionForSelection_IsBase(true);
        return new QRegion(vqabstractitemview->visualRegionForSelection(*selection));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnVisualRegionForSelection(const QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_VisualRegionForSelection_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_VisualRegionForSelection_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QAbstractItemView_SelectedIndexes(const QAbstractItemView* self) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        QModelIndexList _ret = vqabstractitemview->selectedIndexes();
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
        QModelIndexList _ret = vqabstractitemview->selectedIndexes();
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
libqt_list /* of QModelIndex* */ QAbstractItemView_QBaseSelectedIndexes(const QAbstractItemView* self) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_SelectedIndexes_IsBase(true);
        QModelIndexList _ret = vqabstractitemview->selectedIndexes();
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
        QModelIndexList _ret = vqabstractitemview->selectedIndexes();
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
void QAbstractItemView_OnSelectedIndexes(const QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_SelectedIndexes_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SelectedIndexes_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractItemView_Edit2(QAbstractItemView* self, QModelIndex* index, int trigger, QEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        return vqabstractitemview->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else {
        return vqabstractitemview->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    }
}

// Base class handler implementation
bool QAbstractItemView_QBaseEdit2(QAbstractItemView* self, QModelIndex* index, int trigger, QEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_Edit2_IsBase(true);
        return vqabstractitemview->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else {
        return vqabstractitemview->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnEdit2(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_Edit2_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_Edit2_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractItemView_SelectionCommand(const QAbstractItemView* self, QModelIndex* index, QEvent* event) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        return static_cast<int>(vqabstractitemview->selectionCommand(*index, event));
    } else {
        return static_cast<int>(vqabstractitemview->selectionCommand(*index, event));
    }
}

// Base class handler implementation
int QAbstractItemView_QBaseSelectionCommand(const QAbstractItemView* self, QModelIndex* index, QEvent* event) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_SelectionCommand_IsBase(true);
        return static_cast<int>(vqabstractitemview->selectionCommand(*index, event));
    } else {
        return static_cast<int>(vqabstractitemview->selectionCommand(*index, event));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSelectionCommand(const QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_SelectionCommand_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SelectionCommand_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_StartDrag(QAbstractItemView* self, int supportedActions) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else {
        vqabstractitemview->startDrag(static_cast<Qt::DropActions>(supportedActions));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseStartDrag(QAbstractItemView* self, int supportedActions) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_StartDrag_IsBase(true);
        vqabstractitemview->startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else {
        vqabstractitemview->startDrag(static_cast<Qt::DropActions>(supportedActions));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnStartDrag(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_StartDrag_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_StartDrag_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_InitViewItemOption(const QAbstractItemView* self, QStyleOptionViewItem* option) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->initViewItemOption(option);
    } else {
        vqabstractitemview->initViewItemOption(option);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseInitViewItemOption(const QAbstractItemView* self, QStyleOptionViewItem* option) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_InitViewItemOption_IsBase(true);
        vqabstractitemview->initViewItemOption(option);
    } else {
        vqabstractitemview->initViewItemOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnInitViewItemOption(const QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_InitViewItemOption_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_InitViewItemOption_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractItemView_FocusNextPrevChild(QAbstractItemView* self, bool next) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        return vqabstractitemview->focusNextPrevChild(next);
    } else {
        return vqabstractitemview->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QAbstractItemView_QBaseFocusNextPrevChild(QAbstractItemView* self, bool next) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_FocusNextPrevChild_IsBase(true);
        return vqabstractitemview->focusNextPrevChild(next);
    } else {
        return vqabstractitemview->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnFocusNextPrevChild(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractItemView_Event(QAbstractItemView* self, QEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        return vqabstractitemview->event(event);
    } else {
        return vqabstractitemview->event(event);
    }
}

// Base class handler implementation
bool QAbstractItemView_QBaseEvent(QAbstractItemView* self, QEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_Event_IsBase(true);
        return vqabstractitemview->event(event);
    } else {
        return vqabstractitemview->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_Event_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractItemView_ViewportEvent(QAbstractItemView* self, QEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        return vqabstractitemview->viewportEvent(event);
    } else {
        return vqabstractitemview->viewportEvent(event);
    }
}

// Base class handler implementation
bool QAbstractItemView_QBaseViewportEvent(QAbstractItemView* self, QEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_ViewportEvent_IsBase(true);
        return vqabstractitemview->viewportEvent(event);
    } else {
        return vqabstractitemview->viewportEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnViewportEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_ViewportEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_ViewportEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_MousePressEvent(QAbstractItemView* self, QMouseEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->mousePressEvent(event);
    } else {
        vqabstractitemview->mousePressEvent(event);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseMousePressEvent(QAbstractItemView* self, QMouseEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_MousePressEvent_IsBase(true);
        vqabstractitemview->mousePressEvent(event);
    } else {
        vqabstractitemview->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnMousePressEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_MousePressEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_MouseMoveEvent(QAbstractItemView* self, QMouseEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->mouseMoveEvent(event);
    } else {
        vqabstractitemview->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseMouseMoveEvent(QAbstractItemView* self, QMouseEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_MouseMoveEvent_IsBase(true);
        vqabstractitemview->mouseMoveEvent(event);
    } else {
        vqabstractitemview->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnMouseMoveEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_MouseMoveEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_MouseReleaseEvent(QAbstractItemView* self, QMouseEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->mouseReleaseEvent(event);
    } else {
        vqabstractitemview->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseMouseReleaseEvent(QAbstractItemView* self, QMouseEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_MouseReleaseEvent_IsBase(true);
        vqabstractitemview->mouseReleaseEvent(event);
    } else {
        vqabstractitemview->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnMouseReleaseEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_MouseDoubleClickEvent(QAbstractItemView* self, QMouseEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->mouseDoubleClickEvent(event);
    } else {
        vqabstractitemview->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseMouseDoubleClickEvent(QAbstractItemView* self, QMouseEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_MouseDoubleClickEvent_IsBase(true);
        vqabstractitemview->mouseDoubleClickEvent(event);
    } else {
        vqabstractitemview->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnMouseDoubleClickEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_DragEnterEvent(QAbstractItemView* self, QDragEnterEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->dragEnterEvent(event);
    } else {
        vqabstractitemview->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseDragEnterEvent(QAbstractItemView* self, QDragEnterEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_DragEnterEvent_IsBase(true);
        vqabstractitemview->dragEnterEvent(event);
    } else {
        vqabstractitemview->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnDragEnterEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_DragEnterEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_DragMoveEvent(QAbstractItemView* self, QDragMoveEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->dragMoveEvent(event);
    } else {
        vqabstractitemview->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseDragMoveEvent(QAbstractItemView* self, QDragMoveEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_DragMoveEvent_IsBase(true);
        vqabstractitemview->dragMoveEvent(event);
    } else {
        vqabstractitemview->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnDragMoveEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_DragMoveEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_DragLeaveEvent(QAbstractItemView* self, QDragLeaveEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->dragLeaveEvent(event);
    } else {
        vqabstractitemview->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseDragLeaveEvent(QAbstractItemView* self, QDragLeaveEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_DragLeaveEvent_IsBase(true);
        vqabstractitemview->dragLeaveEvent(event);
    } else {
        vqabstractitemview->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnDragLeaveEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_DragLeaveEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_DropEvent(QAbstractItemView* self, QDropEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->dropEvent(event);
    } else {
        vqabstractitemview->dropEvent(event);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseDropEvent(QAbstractItemView* self, QDropEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_DropEvent_IsBase(true);
        vqabstractitemview->dropEvent(event);
    } else {
        vqabstractitemview->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnDropEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_DropEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_FocusInEvent(QAbstractItemView* self, QFocusEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->focusInEvent(event);
    } else {
        vqabstractitemview->focusInEvent(event);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseFocusInEvent(QAbstractItemView* self, QFocusEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_FocusInEvent_IsBase(true);
        vqabstractitemview->focusInEvent(event);
    } else {
        vqabstractitemview->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnFocusInEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_FocusInEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_FocusOutEvent(QAbstractItemView* self, QFocusEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->focusOutEvent(event);
    } else {
        vqabstractitemview->focusOutEvent(event);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseFocusOutEvent(QAbstractItemView* self, QFocusEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_FocusOutEvent_IsBase(true);
        vqabstractitemview->focusOutEvent(event);
    } else {
        vqabstractitemview->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnFocusOutEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_FocusOutEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_KeyPressEvent(QAbstractItemView* self, QKeyEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->keyPressEvent(event);
    } else {
        vqabstractitemview->keyPressEvent(event);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseKeyPressEvent(QAbstractItemView* self, QKeyEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_KeyPressEvent_IsBase(true);
        vqabstractitemview->keyPressEvent(event);
    } else {
        vqabstractitemview->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnKeyPressEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_KeyPressEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_ResizeEvent(QAbstractItemView* self, QResizeEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->resizeEvent(event);
    } else {
        vqabstractitemview->resizeEvent(event);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseResizeEvent(QAbstractItemView* self, QResizeEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_ResizeEvent_IsBase(true);
        vqabstractitemview->resizeEvent(event);
    } else {
        vqabstractitemview->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnResizeEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_ResizeEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_TimerEvent(QAbstractItemView* self, QTimerEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->timerEvent(event);
    } else {
        vqabstractitemview->timerEvent(event);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseTimerEvent(QAbstractItemView* self, QTimerEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_TimerEvent_IsBase(true);
        vqabstractitemview->timerEvent(event);
    } else {
        vqabstractitemview->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnTimerEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_TimerEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_InputMethodEvent(QAbstractItemView* self, QInputMethodEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->inputMethodEvent(event);
    } else {
        vqabstractitemview->inputMethodEvent(event);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseInputMethodEvent(QAbstractItemView* self, QInputMethodEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_InputMethodEvent_IsBase(true);
        vqabstractitemview->inputMethodEvent(event);
    } else {
        vqabstractitemview->inputMethodEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnInputMethodEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_InputMethodEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractItemView_EventFilter(QAbstractItemView* self, QObject* object, QEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        return vqabstractitemview->eventFilter(object, event);
    } else {
        return vqabstractitemview->eventFilter(object, event);
    }
}

// Base class handler implementation
bool QAbstractItemView_QBaseEventFilter(QAbstractItemView* self, QObject* object, QEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_EventFilter_IsBase(true);
        return vqabstractitemview->eventFilter(object, event);
    } else {
        return vqabstractitemview->eventFilter(object, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnEventFilter(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_EventFilter_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QAbstractItemView_ViewportSizeHint(const QAbstractItemView* self) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        return new QSize(vqabstractitemview->viewportSizeHint());
    }
    return {};
}

// Base class handler implementation
QSize* QAbstractItemView_QBaseViewportSizeHint(const QAbstractItemView* self) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_ViewportSizeHint_IsBase(true);
        return new QSize(vqabstractitemview->viewportSizeHint());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnViewportSizeHint(const QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_ViewportSizeHint_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_ViewportSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QAbstractItemView_MinimumSizeHint(const QAbstractItemView* self) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        return new QSize(vqabstractitemview->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QAbstractItemView_QBaseMinimumSizeHint(const QAbstractItemView* self) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_MinimumSizeHint_IsBase(true);
        return new QSize(vqabstractitemview->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnMinimumSizeHint(const QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_MinimumSizeHint_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QAbstractItemView_SizeHint(const QAbstractItemView* self) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        return new QSize(vqabstractitemview->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QAbstractItemView_QBaseSizeHint(const QAbstractItemView* self) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_SizeHint_IsBase(true);
        return new QSize(vqabstractitemview->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSizeHint(const QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_SizeHint_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_SetupViewport(QAbstractItemView* self, QWidget* viewport) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setupViewport(viewport);
    } else {
        vqabstractitemview->setupViewport(viewport);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseSetupViewport(QAbstractItemView* self, QWidget* viewport) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_SetupViewport_IsBase(true);
        vqabstractitemview->setupViewport(viewport);
    } else {
        vqabstractitemview->setupViewport(viewport);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSetupViewport(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_SetupViewport_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SetupViewport_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_PaintEvent(QAbstractItemView* self, QPaintEvent* param1) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->paintEvent(param1);
    } else {
        vqabstractitemview->paintEvent(param1);
    }
}

// Base class handler implementation
void QAbstractItemView_QBasePaintEvent(QAbstractItemView* self, QPaintEvent* param1) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_PaintEvent_IsBase(true);
        vqabstractitemview->paintEvent(param1);
    } else {
        vqabstractitemview->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnPaintEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_PaintEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_WheelEvent(QAbstractItemView* self, QWheelEvent* param1) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->wheelEvent(param1);
    } else {
        vqabstractitemview->wheelEvent(param1);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseWheelEvent(QAbstractItemView* self, QWheelEvent* param1) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_WheelEvent_IsBase(true);
        vqabstractitemview->wheelEvent(param1);
    } else {
        vqabstractitemview->wheelEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnWheelEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_WheelEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_ContextMenuEvent(QAbstractItemView* self, QContextMenuEvent* param1) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->contextMenuEvent(param1);
    } else {
        vqabstractitemview->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseContextMenuEvent(QAbstractItemView* self, QContextMenuEvent* param1) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_ContextMenuEvent_IsBase(true);
        vqabstractitemview->contextMenuEvent(param1);
    } else {
        vqabstractitemview->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnContextMenuEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_ContextMenuEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_ScrollContentsBy(QAbstractItemView* self, int dx, int dy) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqabstractitemview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseScrollContentsBy(QAbstractItemView* self, int dx, int dy) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_ScrollContentsBy_IsBase(true);
        vqabstractitemview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqabstractitemview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnScrollContentsBy(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_ScrollContentsBy_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_ScrollContentsBy_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_ChangeEvent(QAbstractItemView* self, QEvent* param1) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->changeEvent(param1);
    } else {
        vqabstractitemview->changeEvent(param1);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseChangeEvent(QAbstractItemView* self, QEvent* param1) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_ChangeEvent_IsBase(true);
        vqabstractitemview->changeEvent(param1);
    } else {
        vqabstractitemview->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnChangeEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_ChangeEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_InitStyleOption(const QAbstractItemView* self, QStyleOptionFrame* option) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->initStyleOption(option);
    } else {
        vqabstractitemview->initStyleOption(option);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseInitStyleOption(const QAbstractItemView* self, QStyleOptionFrame* option) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_InitStyleOption_IsBase(true);
        vqabstractitemview->initStyleOption(option);
    } else {
        vqabstractitemview->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnInitStyleOption(const QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_InitStyleOption_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractItemView_DevType(const QAbstractItemView* self) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        return vqabstractitemview->devType();
    } else {
        return vqabstractitemview->devType();
    }
}

// Base class handler implementation
int QAbstractItemView_QBaseDevType(const QAbstractItemView* self) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_DevType_IsBase(true);
        return vqabstractitemview->devType();
    } else {
        return vqabstractitemview->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnDevType(const QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_DevType_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_SetVisible(QAbstractItemView* self, bool visible) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setVisible(visible);
    } else {
        vqabstractitemview->setVisible(visible);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseSetVisible(QAbstractItemView* self, bool visible) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_SetVisible_IsBase(true);
        vqabstractitemview->setVisible(visible);
    } else {
        vqabstractitemview->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSetVisible(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_SetVisible_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractItemView_HeightForWidth(const QAbstractItemView* self, int param1) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        return vqabstractitemview->heightForWidth(static_cast<int>(param1));
    } else {
        return vqabstractitemview->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QAbstractItemView_QBaseHeightForWidth(const QAbstractItemView* self, int param1) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_HeightForWidth_IsBase(true);
        return vqabstractitemview->heightForWidth(static_cast<int>(param1));
    } else {
        return vqabstractitemview->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnHeightForWidth(const QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_HeightForWidth_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractItemView_HasHeightForWidth(const QAbstractItemView* self) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        return vqabstractitemview->hasHeightForWidth();
    } else {
        return vqabstractitemview->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QAbstractItemView_QBaseHasHeightForWidth(const QAbstractItemView* self) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_HasHeightForWidth_IsBase(true);
        return vqabstractitemview->hasHeightForWidth();
    } else {
        return vqabstractitemview->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnHasHeightForWidth(const QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_HasHeightForWidth_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QAbstractItemView_PaintEngine(const QAbstractItemView* self) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        return vqabstractitemview->paintEngine();
    } else {
        return vqabstractitemview->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QAbstractItemView_QBasePaintEngine(const QAbstractItemView* self) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_PaintEngine_IsBase(true);
        return vqabstractitemview->paintEngine();
    } else {
        return vqabstractitemview->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnPaintEngine(const QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_PaintEngine_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_KeyReleaseEvent(QAbstractItemView* self, QKeyEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->keyReleaseEvent(event);
    } else {
        vqabstractitemview->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseKeyReleaseEvent(QAbstractItemView* self, QKeyEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_KeyReleaseEvent_IsBase(true);
        vqabstractitemview->keyReleaseEvent(event);
    } else {
        vqabstractitemview->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnKeyReleaseEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_EnterEvent(QAbstractItemView* self, QEnterEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->enterEvent(event);
    } else {
        vqabstractitemview->enterEvent(event);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseEnterEvent(QAbstractItemView* self, QEnterEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_EnterEvent_IsBase(true);
        vqabstractitemview->enterEvent(event);
    } else {
        vqabstractitemview->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnEnterEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_EnterEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_LeaveEvent(QAbstractItemView* self, QEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->leaveEvent(event);
    } else {
        vqabstractitemview->leaveEvent(event);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseLeaveEvent(QAbstractItemView* self, QEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_LeaveEvent_IsBase(true);
        vqabstractitemview->leaveEvent(event);
    } else {
        vqabstractitemview->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnLeaveEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_LeaveEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_MoveEvent(QAbstractItemView* self, QMoveEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->moveEvent(event);
    } else {
        vqabstractitemview->moveEvent(event);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseMoveEvent(QAbstractItemView* self, QMoveEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_MoveEvent_IsBase(true);
        vqabstractitemview->moveEvent(event);
    } else {
        vqabstractitemview->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnMoveEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_MoveEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_CloseEvent(QAbstractItemView* self, QCloseEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->closeEvent(event);
    } else {
        vqabstractitemview->closeEvent(event);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseCloseEvent(QAbstractItemView* self, QCloseEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_CloseEvent_IsBase(true);
        vqabstractitemview->closeEvent(event);
    } else {
        vqabstractitemview->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnCloseEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_CloseEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_TabletEvent(QAbstractItemView* self, QTabletEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->tabletEvent(event);
    } else {
        vqabstractitemview->tabletEvent(event);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseTabletEvent(QAbstractItemView* self, QTabletEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_TabletEvent_IsBase(true);
        vqabstractitemview->tabletEvent(event);
    } else {
        vqabstractitemview->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnTabletEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_TabletEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_ActionEvent(QAbstractItemView* self, QActionEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->actionEvent(event);
    } else {
        vqabstractitemview->actionEvent(event);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseActionEvent(QAbstractItemView* self, QActionEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_ActionEvent_IsBase(true);
        vqabstractitemview->actionEvent(event);
    } else {
        vqabstractitemview->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnActionEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_ActionEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_ShowEvent(QAbstractItemView* self, QShowEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->showEvent(event);
    } else {
        vqabstractitemview->showEvent(event);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseShowEvent(QAbstractItemView* self, QShowEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_ShowEvent_IsBase(true);
        vqabstractitemview->showEvent(event);
    } else {
        vqabstractitemview->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnShowEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_ShowEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_HideEvent(QAbstractItemView* self, QHideEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->hideEvent(event);
    } else {
        vqabstractitemview->hideEvent(event);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseHideEvent(QAbstractItemView* self, QHideEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_HideEvent_IsBase(true);
        vqabstractitemview->hideEvent(event);
    } else {
        vqabstractitemview->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnHideEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_HideEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractItemView_NativeEvent(QAbstractItemView* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        return vqabstractitemview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqabstractitemview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QAbstractItemView_QBaseNativeEvent(QAbstractItemView* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_NativeEvent_IsBase(true);
        return vqabstractitemview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqabstractitemview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnNativeEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_NativeEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractItemView_Metric(const QAbstractItemView* self, int param1) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        return vqabstractitemview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqabstractitemview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QAbstractItemView_QBaseMetric(const QAbstractItemView* self, int param1) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_Metric_IsBase(true);
        return vqabstractitemview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqabstractitemview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnMetric(const QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_Metric_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_InitPainter(const QAbstractItemView* self, QPainter* painter) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->initPainter(painter);
    } else {
        vqabstractitemview->initPainter(painter);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseInitPainter(const QAbstractItemView* self, QPainter* painter) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_InitPainter_IsBase(true);
        vqabstractitemview->initPainter(painter);
    } else {
        vqabstractitemview->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnInitPainter(const QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_InitPainter_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QAbstractItemView_Redirected(const QAbstractItemView* self, QPoint* offset) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        return vqabstractitemview->redirected(offset);
    } else {
        return vqabstractitemview->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QAbstractItemView_QBaseRedirected(const QAbstractItemView* self, QPoint* offset) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_Redirected_IsBase(true);
        return vqabstractitemview->redirected(offset);
    } else {
        return vqabstractitemview->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnRedirected(const QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_Redirected_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QAbstractItemView_SharedPainter(const QAbstractItemView* self) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        return vqabstractitemview->sharedPainter();
    } else {
        return vqabstractitemview->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QAbstractItemView_QBaseSharedPainter(const QAbstractItemView* self) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_SharedPainter_IsBase(true);
        return vqabstractitemview->sharedPainter();
    } else {
        return vqabstractitemview->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSharedPainter(const QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_SharedPainter_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_ChildEvent(QAbstractItemView* self, QChildEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->childEvent(event);
    } else {
        vqabstractitemview->childEvent(event);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseChildEvent(QAbstractItemView* self, QChildEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_ChildEvent_IsBase(true);
        vqabstractitemview->childEvent(event);
    } else {
        vqabstractitemview->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnChildEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_ChildEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_CustomEvent(QAbstractItemView* self, QEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->customEvent(event);
    } else {
        vqabstractitemview->customEvent(event);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseCustomEvent(QAbstractItemView* self, QEvent* event) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_CustomEvent_IsBase(true);
        vqabstractitemview->customEvent(event);
    } else {
        vqabstractitemview->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnCustomEvent(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_CustomEvent_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_ConnectNotify(QAbstractItemView* self, QMetaMethod* signal) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->connectNotify(*signal);
    } else {
        vqabstractitemview->connectNotify(*signal);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseConnectNotify(QAbstractItemView* self, QMetaMethod* signal) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_ConnectNotify_IsBase(true);
        vqabstractitemview->connectNotify(*signal);
    } else {
        vqabstractitemview->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnConnectNotify(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_ConnectNotify_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_DisconnectNotify(QAbstractItemView* self, QMetaMethod* signal) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->disconnectNotify(*signal);
    } else {
        vqabstractitemview->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseDisconnectNotify(QAbstractItemView* self, QMetaMethod* signal) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_DisconnectNotify_IsBase(true);
        vqabstractitemview->disconnectNotify(*signal);
    } else {
        vqabstractitemview->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnDisconnectNotify(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_DisconnectNotify_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractItemView_State(const QAbstractItemView* self) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        return static_cast<int>(vqabstractitemview->state());
    } else {
        return static_cast<int>(vqabstractitemview->state());
    }
}

// Base class handler implementation
int QAbstractItemView_QBaseState(const QAbstractItemView* self) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_State_IsBase(true);
        return static_cast<int>(vqabstractitemview->state());
    } else {
        return static_cast<int>(vqabstractitemview->state());
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnState(const QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_State_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_State_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_SetState(QAbstractItemView* self, int state) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setState(static_cast<VirtualQAbstractItemView::State>(state));
    } else {
        vqabstractitemview->setState(static_cast<VirtualQAbstractItemView::State>(state));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseSetState(QAbstractItemView* self, int state) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_SetState_IsBase(true);
        vqabstractitemview->setState(static_cast<VirtualQAbstractItemView::State>(state));
    } else {
        vqabstractitemview->setState(static_cast<VirtualQAbstractItemView::State>(state));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSetState(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_SetState_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SetState_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_ScheduleDelayedItemsLayout(QAbstractItemView* self) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->scheduleDelayedItemsLayout();
    } else {
        vqabstractitemview->scheduleDelayedItemsLayout();
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseScheduleDelayedItemsLayout(QAbstractItemView* self) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_ScheduleDelayedItemsLayout_IsBase(true);
        vqabstractitemview->scheduleDelayedItemsLayout();
    } else {
        vqabstractitemview->scheduleDelayedItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnScheduleDelayedItemsLayout(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_ScheduleDelayedItemsLayout_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_ScheduleDelayedItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_ExecuteDelayedItemsLayout(QAbstractItemView* self) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->executeDelayedItemsLayout();
    } else {
        vqabstractitemview->executeDelayedItemsLayout();
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseExecuteDelayedItemsLayout(QAbstractItemView* self) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_ExecuteDelayedItemsLayout_IsBase(true);
        vqabstractitemview->executeDelayedItemsLayout();
    } else {
        vqabstractitemview->executeDelayedItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnExecuteDelayedItemsLayout(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_ExecuteDelayedItemsLayout_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_ExecuteDelayedItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_SetDirtyRegion(QAbstractItemView* self, QRegion* region) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setDirtyRegion(*region);
    } else {
        vqabstractitemview->setDirtyRegion(*region);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseSetDirtyRegion(QAbstractItemView* self, QRegion* region) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_SetDirtyRegion_IsBase(true);
        vqabstractitemview->setDirtyRegion(*region);
    } else {
        vqabstractitemview->setDirtyRegion(*region);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSetDirtyRegion(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_SetDirtyRegion_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SetDirtyRegion_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_ScrollDirtyRegion(QAbstractItemView* self, int dx, int dy) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqabstractitemview->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseScrollDirtyRegion(QAbstractItemView* self, int dx, int dy) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_ScrollDirtyRegion_IsBase(true);
        vqabstractitemview->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqabstractitemview->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnScrollDirtyRegion(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_ScrollDirtyRegion_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_ScrollDirtyRegion_Callback>(slot));
    }
}

// Derived class handler implementation
QPoint* QAbstractItemView_DirtyRegionOffset(const QAbstractItemView* self) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        return new QPoint(vqabstractitemview->dirtyRegionOffset());
    }
    return {};
}

// Base class handler implementation
QPoint* QAbstractItemView_QBaseDirtyRegionOffset(const QAbstractItemView* self) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_DirtyRegionOffset_IsBase(true);
        return new QPoint(vqabstractitemview->dirtyRegionOffset());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnDirtyRegionOffset(const QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_DirtyRegionOffset_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_DirtyRegionOffset_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_StartAutoScroll(QAbstractItemView* self) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->startAutoScroll();
    } else {
        vqabstractitemview->startAutoScroll();
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseStartAutoScroll(QAbstractItemView* self) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_StartAutoScroll_IsBase(true);
        vqabstractitemview->startAutoScroll();
    } else {
        vqabstractitemview->startAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnStartAutoScroll(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_StartAutoScroll_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_StartAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_StopAutoScroll(QAbstractItemView* self) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->stopAutoScroll();
    } else {
        vqabstractitemview->stopAutoScroll();
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseStopAutoScroll(QAbstractItemView* self) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_StopAutoScroll_IsBase(true);
        vqabstractitemview->stopAutoScroll();
    } else {
        vqabstractitemview->stopAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnStopAutoScroll(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_StopAutoScroll_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_StopAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_DoAutoScroll(QAbstractItemView* self) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->doAutoScroll();
    } else {
        vqabstractitemview->doAutoScroll();
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseDoAutoScroll(QAbstractItemView* self) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_DoAutoScroll_IsBase(true);
        vqabstractitemview->doAutoScroll();
    } else {
        vqabstractitemview->doAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnDoAutoScroll(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_DoAutoScroll_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_DoAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractItemView_DropIndicatorPosition(const QAbstractItemView* self) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        return static_cast<int>(vqabstractitemview->dropIndicatorPosition());
    } else {
        return static_cast<int>(vqabstractitemview->dropIndicatorPosition());
    }
}

// Base class handler implementation
int QAbstractItemView_QBaseDropIndicatorPosition(const QAbstractItemView* self) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_DropIndicatorPosition_IsBase(true);
        return static_cast<int>(vqabstractitemview->dropIndicatorPosition());
    } else {
        return static_cast<int>(vqabstractitemview->dropIndicatorPosition());
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnDropIndicatorPosition(const QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_DropIndicatorPosition_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_DropIndicatorPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_SetViewportMargins(QAbstractItemView* self, int left, int top, int right, int bottom) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        vqabstractitemview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseSetViewportMargins(QAbstractItemView* self, int left, int top, int right, int bottom) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_SetViewportMargins_IsBase(true);
        vqabstractitemview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        vqabstractitemview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSetViewportMargins(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_SetViewportMargins_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SetViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
QMargins* QAbstractItemView_ViewportMargins(const QAbstractItemView* self) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        return new QMargins(vqabstractitemview->viewportMargins());
    }
    return {};
}

// Base class handler implementation
QMargins* QAbstractItemView_QBaseViewportMargins(const QAbstractItemView* self) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_ViewportMargins_IsBase(true);
        return new QMargins(vqabstractitemview->viewportMargins());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnViewportMargins(const QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_ViewportMargins_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_ViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_DrawFrame(QAbstractItemView* self, QPainter* param1) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->drawFrame(param1);
    } else {
        vqabstractitemview->drawFrame(param1);
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseDrawFrame(QAbstractItemView* self, QPainter* param1) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_DrawFrame_IsBase(true);
        vqabstractitemview->drawFrame(param1);
    } else {
        vqabstractitemview->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnDrawFrame(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_DrawFrame_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_UpdateMicroFocus(QAbstractItemView* self) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->updateMicroFocus();
    } else {
        vqabstractitemview->updateMicroFocus();
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseUpdateMicroFocus(QAbstractItemView* self) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_UpdateMicroFocus_IsBase(true);
        vqabstractitemview->updateMicroFocus();
    } else {
        vqabstractitemview->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnUpdateMicroFocus(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_Create(QAbstractItemView* self) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->create();
    } else {
        vqabstractitemview->create();
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseCreate(QAbstractItemView* self) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_Create_IsBase(true);
        vqabstractitemview->create();
    } else {
        vqabstractitemview->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnCreate(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_Create_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractItemView_Destroy(QAbstractItemView* self) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->destroy();
    } else {
        vqabstractitemview->destroy();
    }
}

// Base class handler implementation
void QAbstractItemView_QBaseDestroy(QAbstractItemView* self) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_Destroy_IsBase(true);
        vqabstractitemview->destroy();
    } else {
        vqabstractitemview->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnDestroy(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_Destroy_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractItemView_FocusNextChild(QAbstractItemView* self) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        return vqabstractitemview->focusNextChild();
    } else {
        return vqabstractitemview->focusNextChild();
    }
}

// Base class handler implementation
bool QAbstractItemView_QBaseFocusNextChild(QAbstractItemView* self) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_FocusNextChild_IsBase(true);
        return vqabstractitemview->focusNextChild();
    } else {
        return vqabstractitemview->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnFocusNextChild(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_FocusNextChild_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractItemView_FocusPreviousChild(QAbstractItemView* self) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        return vqabstractitemview->focusPreviousChild();
    } else {
        return vqabstractitemview->focusPreviousChild();
    }
}

// Base class handler implementation
bool QAbstractItemView_QBaseFocusPreviousChild(QAbstractItemView* self) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_FocusPreviousChild_IsBase(true);
        return vqabstractitemview->focusPreviousChild();
    } else {
        return vqabstractitemview->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnFocusPreviousChild(QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = dynamic_cast<VirtualQAbstractItemView*>(self)) {
        vqabstractitemview->setQAbstractItemView_FocusPreviousChild_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QAbstractItemView_Sender(const QAbstractItemView* self) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        return vqabstractitemview->sender();
    } else {
        return vqabstractitemview->sender();
    }
}

// Base class handler implementation
QObject* QAbstractItemView_QBaseSender(const QAbstractItemView* self) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_Sender_IsBase(true);
        return vqabstractitemview->sender();
    } else {
        return vqabstractitemview->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSender(const QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_Sender_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractItemView_SenderSignalIndex(const QAbstractItemView* self) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        return vqabstractitemview->senderSignalIndex();
    } else {
        return vqabstractitemview->senderSignalIndex();
    }
}

// Base class handler implementation
int QAbstractItemView_QBaseSenderSignalIndex(const QAbstractItemView* self) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_SenderSignalIndex_IsBase(true);
        return vqabstractitemview->senderSignalIndex();
    } else {
        return vqabstractitemview->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnSenderSignalIndex(const QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_SenderSignalIndex_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractItemView_Receivers(const QAbstractItemView* self, const char* signal) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        return vqabstractitemview->receivers(signal);
    } else {
        return vqabstractitemview->receivers(signal);
    }
}

// Base class handler implementation
int QAbstractItemView_QBaseReceivers(const QAbstractItemView* self, const char* signal) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_Receivers_IsBase(true);
        return vqabstractitemview->receivers(signal);
    } else {
        return vqabstractitemview->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnReceivers(const QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_Receivers_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractItemView_IsSignalConnected(const QAbstractItemView* self, QMetaMethod* signal) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        return vqabstractitemview->isSignalConnected(*signal);
    } else {
        return vqabstractitemview->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QAbstractItemView_QBaseIsSignalConnected(const QAbstractItemView* self, QMetaMethod* signal) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_IsSignalConnected_IsBase(true);
        return vqabstractitemview->isSignalConnected(*signal);
    } else {
        return vqabstractitemview->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractItemView_OnIsSignalConnected(const QAbstractItemView* self, intptr_t slot) {
    if (auto* vqabstractitemview = const_cast<VirtualQAbstractItemView*>(dynamic_cast<const VirtualQAbstractItemView*>(self))) {
        vqabstractitemview->setQAbstractItemView_IsSignalConnected_Callback(reinterpret_cast<VirtualQAbstractItemView::QAbstractItemView_IsSignalConnected_Callback>(slot));
    }
}

void QAbstractItemView_Delete(QAbstractItemView* self) {
    delete self;
}
