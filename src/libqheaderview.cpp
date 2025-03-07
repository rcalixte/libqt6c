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
#include <QStyleOptionHeader>
#include <QStyleOptionViewItem>
#include <QTabletEvent>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <QWindow>
#include <qheaderview.h>
#include "libqheaderview.hpp"
#include "libqheaderview.hxx"

QHeaderView* QHeaderView_new(int orientation) {
    return new VirtualQHeaderView(static_cast<Qt::Orientation>(orientation));
}

QHeaderView* QHeaderView_new2(int orientation, QWidget* parent) {
    return new VirtualQHeaderView(static_cast<Qt::Orientation>(orientation), parent);
}

QMetaObject* QHeaderView_MetaObject(const QHeaderView* self) {
    return (QMetaObject*)self->metaObject();
}

void* QHeaderView_Metacast(QHeaderView* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QHeaderView_Metacall(QHeaderView* self, int param1, int param2, void** param3) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QHeaderView_OnMetacall(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_Metacall_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QHeaderView_QBaseMetacall(QHeaderView* self, int param1, int param2, void** param3) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_Metacall_IsBase(true);
        return vqheaderview->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QHeaderView_Tr(const char* s) {
    QString _ret = QHeaderView::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QHeaderView_Orientation(const QHeaderView* self) {
    return static_cast<int>(self->orientation());
}

int QHeaderView_Offset(const QHeaderView* self) {
    return self->offset();
}

int QHeaderView_Length(const QHeaderView* self) {
    return self->length();
}

int QHeaderView_SectionSizeHint(const QHeaderView* self, int logicalIndex) {
    return self->sectionSizeHint(static_cast<int>(logicalIndex));
}

int QHeaderView_VisualIndexAt(const QHeaderView* self, int position) {
    return self->visualIndexAt(static_cast<int>(position));
}

int QHeaderView_LogicalIndexAt(const QHeaderView* self, int position) {
    return self->logicalIndexAt(static_cast<int>(position));
}

int QHeaderView_LogicalIndexAt2(const QHeaderView* self, int x, int y) {
    return self->logicalIndexAt(static_cast<int>(x), static_cast<int>(y));
}

int QHeaderView_LogicalIndexAtWithPos(const QHeaderView* self, QPoint* pos) {
    return self->logicalIndexAt(*pos);
}

int QHeaderView_SectionSize(const QHeaderView* self, int logicalIndex) {
    return self->sectionSize(static_cast<int>(logicalIndex));
}

int QHeaderView_SectionPosition(const QHeaderView* self, int logicalIndex) {
    return self->sectionPosition(static_cast<int>(logicalIndex));
}

int QHeaderView_SectionViewportPosition(const QHeaderView* self, int logicalIndex) {
    return self->sectionViewportPosition(static_cast<int>(logicalIndex));
}

void QHeaderView_MoveSection(QHeaderView* self, int from, int to) {
    self->moveSection(static_cast<int>(from), static_cast<int>(to));
}

void QHeaderView_SwapSections(QHeaderView* self, int first, int second) {
    self->swapSections(static_cast<int>(first), static_cast<int>(second));
}

void QHeaderView_ResizeSection(QHeaderView* self, int logicalIndex, int size) {
    self->resizeSection(static_cast<int>(logicalIndex), static_cast<int>(size));
}

void QHeaderView_ResizeSections(QHeaderView* self, int mode) {
    self->resizeSections(static_cast<QHeaderView::ResizeMode>(mode));
}

bool QHeaderView_IsSectionHidden(const QHeaderView* self, int logicalIndex) {
    return self->isSectionHidden(static_cast<int>(logicalIndex));
}

void QHeaderView_SetSectionHidden(QHeaderView* self, int logicalIndex, bool hide) {
    self->setSectionHidden(static_cast<int>(logicalIndex), hide);
}

int QHeaderView_HiddenSectionCount(const QHeaderView* self) {
    return self->hiddenSectionCount();
}

void QHeaderView_HideSection(QHeaderView* self, int logicalIndex) {
    self->hideSection(static_cast<int>(logicalIndex));
}

void QHeaderView_ShowSection(QHeaderView* self, int logicalIndex) {
    self->showSection(static_cast<int>(logicalIndex));
}

int QHeaderView_Count(const QHeaderView* self) {
    return self->count();
}

int QHeaderView_VisualIndex(const QHeaderView* self, int logicalIndex) {
    return self->visualIndex(static_cast<int>(logicalIndex));
}

int QHeaderView_LogicalIndex(const QHeaderView* self, int visualIndex) {
    return self->logicalIndex(static_cast<int>(visualIndex));
}

void QHeaderView_SetSectionsMovable(QHeaderView* self, bool movable) {
    self->setSectionsMovable(movable);
}

bool QHeaderView_SectionsMovable(const QHeaderView* self) {
    return self->sectionsMovable();
}

void QHeaderView_SetFirstSectionMovable(QHeaderView* self, bool movable) {
    self->setFirstSectionMovable(movable);
}

bool QHeaderView_IsFirstSectionMovable(const QHeaderView* self) {
    return self->isFirstSectionMovable();
}

void QHeaderView_SetSectionsClickable(QHeaderView* self, bool clickable) {
    self->setSectionsClickable(clickable);
}

bool QHeaderView_SectionsClickable(const QHeaderView* self) {
    return self->sectionsClickable();
}

void QHeaderView_SetHighlightSections(QHeaderView* self, bool highlight) {
    self->setHighlightSections(highlight);
}

bool QHeaderView_HighlightSections(const QHeaderView* self) {
    return self->highlightSections();
}

int QHeaderView_SectionResizeMode(const QHeaderView* self, int logicalIndex) {
    return static_cast<int>(self->sectionResizeMode(static_cast<int>(logicalIndex)));
}

void QHeaderView_SetSectionResizeMode(QHeaderView* self, int mode) {
    self->setSectionResizeMode(static_cast<QHeaderView::ResizeMode>(mode));
}

void QHeaderView_SetSectionResizeMode2(QHeaderView* self, int logicalIndex, int mode) {
    self->setSectionResizeMode(static_cast<int>(logicalIndex), static_cast<QHeaderView::ResizeMode>(mode));
}

void QHeaderView_SetResizeContentsPrecision(QHeaderView* self, int precision) {
    self->setResizeContentsPrecision(static_cast<int>(precision));
}

int QHeaderView_ResizeContentsPrecision(const QHeaderView* self) {
    return self->resizeContentsPrecision();
}

int QHeaderView_StretchSectionCount(const QHeaderView* self) {
    return self->stretchSectionCount();
}

void QHeaderView_SetSortIndicatorShown(QHeaderView* self, bool show) {
    self->setSortIndicatorShown(show);
}

bool QHeaderView_IsSortIndicatorShown(const QHeaderView* self) {
    return self->isSortIndicatorShown();
}

void QHeaderView_SetSortIndicator(QHeaderView* self, int logicalIndex, int order) {
    self->setSortIndicator(static_cast<int>(logicalIndex), static_cast<Qt::SortOrder>(order));
}

int QHeaderView_SortIndicatorSection(const QHeaderView* self) {
    return self->sortIndicatorSection();
}

int QHeaderView_SortIndicatorOrder(const QHeaderView* self) {
    return static_cast<int>(self->sortIndicatorOrder());
}

void QHeaderView_SetSortIndicatorClearable(QHeaderView* self, bool clearable) {
    self->setSortIndicatorClearable(clearable);
}

bool QHeaderView_IsSortIndicatorClearable(const QHeaderView* self) {
    return self->isSortIndicatorClearable();
}

bool QHeaderView_StretchLastSection(const QHeaderView* self) {
    return self->stretchLastSection();
}

void QHeaderView_SetStretchLastSection(QHeaderView* self, bool stretch) {
    self->setStretchLastSection(stretch);
}

bool QHeaderView_CascadingSectionResizes(const QHeaderView* self) {
    return self->cascadingSectionResizes();
}

void QHeaderView_SetCascadingSectionResizes(QHeaderView* self, bool enable) {
    self->setCascadingSectionResizes(enable);
}

int QHeaderView_DefaultSectionSize(const QHeaderView* self) {
    return self->defaultSectionSize();
}

void QHeaderView_SetDefaultSectionSize(QHeaderView* self, int size) {
    self->setDefaultSectionSize(static_cast<int>(size));
}

void QHeaderView_ResetDefaultSectionSize(QHeaderView* self) {
    self->resetDefaultSectionSize();
}

int QHeaderView_MinimumSectionSize(const QHeaderView* self) {
    return self->minimumSectionSize();
}

void QHeaderView_SetMinimumSectionSize(QHeaderView* self, int size) {
    self->setMinimumSectionSize(static_cast<int>(size));
}

int QHeaderView_MaximumSectionSize(const QHeaderView* self) {
    return self->maximumSectionSize();
}

void QHeaderView_SetMaximumSectionSize(QHeaderView* self, int size) {
    self->setMaximumSectionSize(static_cast<int>(size));
}

int QHeaderView_DefaultAlignment(const QHeaderView* self) {
    return static_cast<int>(self->defaultAlignment());
}

void QHeaderView_SetDefaultAlignment(QHeaderView* self, int alignment) {
    self->setDefaultAlignment(static_cast<Qt::Alignment>(alignment));
}

bool QHeaderView_SectionsMoved(const QHeaderView* self) {
    return self->sectionsMoved();
}

bool QHeaderView_SectionsHidden(const QHeaderView* self) {
    return self->sectionsHidden();
}

libqt_string QHeaderView_SaveState(const QHeaderView* self) {
    QByteArray _qb = self->saveState();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _qb.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QHeaderView_RestoreState(QHeaderView* self, libqt_string state) {
    QByteArray state_QByteArray(state.data, state.len);
    return self->restoreState(state_QByteArray);
}

void QHeaderView_SetOffset(QHeaderView* self, int offset) {
    self->setOffset(static_cast<int>(offset));
}

void QHeaderView_SetOffsetToSectionPosition(QHeaderView* self, int visualIndex) {
    self->setOffsetToSectionPosition(static_cast<int>(visualIndex));
}

void QHeaderView_SetOffsetToLastSection(QHeaderView* self) {
    self->setOffsetToLastSection();
}

void QHeaderView_HeaderDataChanged(QHeaderView* self, int orientation, int logicalFirst, int logicalLast) {
    self->headerDataChanged(static_cast<Qt::Orientation>(orientation), static_cast<int>(logicalFirst), static_cast<int>(logicalLast));
}

void QHeaderView_SectionMoved(QHeaderView* self, int logicalIndex, int oldVisualIndex, int newVisualIndex) {
    self->sectionMoved(static_cast<int>(logicalIndex), static_cast<int>(oldVisualIndex), static_cast<int>(newVisualIndex));
}

void QHeaderView_Connect_SectionMoved(QHeaderView* self, intptr_t slot) {
    void (*slotFunc)(QHeaderView*, int, int, int) = reinterpret_cast<void (*)(QHeaderView*, int, int, int)>(slot);
    QHeaderView::connect(self, &QHeaderView::sectionMoved, [self, slotFunc](int logicalIndex, int oldVisualIndex, int newVisualIndex) {
        int sigval1 = logicalIndex;
        int sigval2 = oldVisualIndex;
        int sigval3 = newVisualIndex;
        slotFunc(self, sigval1, sigval2, sigval3);
    });
}

void QHeaderView_SectionResized(QHeaderView* self, int logicalIndex, int oldSize, int newSize) {
    self->sectionResized(static_cast<int>(logicalIndex), static_cast<int>(oldSize), static_cast<int>(newSize));
}

void QHeaderView_Connect_SectionResized(QHeaderView* self, intptr_t slot) {
    void (*slotFunc)(QHeaderView*, int, int, int) = reinterpret_cast<void (*)(QHeaderView*, int, int, int)>(slot);
    QHeaderView::connect(self, &QHeaderView::sectionResized, [self, slotFunc](int logicalIndex, int oldSize, int newSize) {
        int sigval1 = logicalIndex;
        int sigval2 = oldSize;
        int sigval3 = newSize;
        slotFunc(self, sigval1, sigval2, sigval3);
    });
}

void QHeaderView_SectionPressed(QHeaderView* self, int logicalIndex) {
    self->sectionPressed(static_cast<int>(logicalIndex));
}

void QHeaderView_Connect_SectionPressed(QHeaderView* self, intptr_t slot) {
    void (*slotFunc)(QHeaderView*, int) = reinterpret_cast<void (*)(QHeaderView*, int)>(slot);
    QHeaderView::connect(self, &QHeaderView::sectionPressed, [self, slotFunc](int logicalIndex) {
        int sigval1 = logicalIndex;
        slotFunc(self, sigval1);
    });
}

void QHeaderView_SectionClicked(QHeaderView* self, int logicalIndex) {
    self->sectionClicked(static_cast<int>(logicalIndex));
}

void QHeaderView_Connect_SectionClicked(QHeaderView* self, intptr_t slot) {
    void (*slotFunc)(QHeaderView*, int) = reinterpret_cast<void (*)(QHeaderView*, int)>(slot);
    QHeaderView::connect(self, &QHeaderView::sectionClicked, [self, slotFunc](int logicalIndex) {
        int sigval1 = logicalIndex;
        slotFunc(self, sigval1);
    });
}

void QHeaderView_SectionEntered(QHeaderView* self, int logicalIndex) {
    self->sectionEntered(static_cast<int>(logicalIndex));
}

void QHeaderView_Connect_SectionEntered(QHeaderView* self, intptr_t slot) {
    void (*slotFunc)(QHeaderView*, int) = reinterpret_cast<void (*)(QHeaderView*, int)>(slot);
    QHeaderView::connect(self, &QHeaderView::sectionEntered, [self, slotFunc](int logicalIndex) {
        int sigval1 = logicalIndex;
        slotFunc(self, sigval1);
    });
}

void QHeaderView_SectionDoubleClicked(QHeaderView* self, int logicalIndex) {
    self->sectionDoubleClicked(static_cast<int>(logicalIndex));
}

void QHeaderView_Connect_SectionDoubleClicked(QHeaderView* self, intptr_t slot) {
    void (*slotFunc)(QHeaderView*, int) = reinterpret_cast<void (*)(QHeaderView*, int)>(slot);
    QHeaderView::connect(self, &QHeaderView::sectionDoubleClicked, [self, slotFunc](int logicalIndex) {
        int sigval1 = logicalIndex;
        slotFunc(self, sigval1);
    });
}

void QHeaderView_SectionCountChanged(QHeaderView* self, int oldCount, int newCount) {
    self->sectionCountChanged(static_cast<int>(oldCount), static_cast<int>(newCount));
}

void QHeaderView_Connect_SectionCountChanged(QHeaderView* self, intptr_t slot) {
    void (*slotFunc)(QHeaderView*, int, int) = reinterpret_cast<void (*)(QHeaderView*, int, int)>(slot);
    QHeaderView::connect(self, &QHeaderView::sectionCountChanged, [self, slotFunc](int oldCount, int newCount) {
        int sigval1 = oldCount;
        int sigval2 = newCount;
        slotFunc(self, sigval1, sigval2);
    });
}

void QHeaderView_SectionHandleDoubleClicked(QHeaderView* self, int logicalIndex) {
    self->sectionHandleDoubleClicked(static_cast<int>(logicalIndex));
}

void QHeaderView_Connect_SectionHandleDoubleClicked(QHeaderView* self, intptr_t slot) {
    void (*slotFunc)(QHeaderView*, int) = reinterpret_cast<void (*)(QHeaderView*, int)>(slot);
    QHeaderView::connect(self, &QHeaderView::sectionHandleDoubleClicked, [self, slotFunc](int logicalIndex) {
        int sigval1 = logicalIndex;
        slotFunc(self, sigval1);
    });
}

void QHeaderView_GeometriesChanged(QHeaderView* self) {
    self->geometriesChanged();
}

void QHeaderView_Connect_GeometriesChanged(QHeaderView* self, intptr_t slot) {
    void (*slotFunc)(QHeaderView*) = reinterpret_cast<void (*)(QHeaderView*)>(slot);
    QHeaderView::connect(self, &QHeaderView::geometriesChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QHeaderView_SortIndicatorChanged(QHeaderView* self, int logicalIndex, int order) {
    self->sortIndicatorChanged(static_cast<int>(logicalIndex), static_cast<Qt::SortOrder>(order));
}

void QHeaderView_Connect_SortIndicatorChanged(QHeaderView* self, intptr_t slot) {
    void (*slotFunc)(QHeaderView*, int, int) = reinterpret_cast<void (*)(QHeaderView*, int, int)>(slot);
    QHeaderView::connect(self, &QHeaderView::sortIndicatorChanged, [self, slotFunc](int logicalIndex, Qt::SortOrder order) {
        int sigval1 = logicalIndex;
        int sigval2 = static_cast<int>(order);
        slotFunc(self, sigval1, sigval2);
    });
}

void QHeaderView_SortIndicatorClearableChanged(QHeaderView* self, bool clearable) {
    self->sortIndicatorClearableChanged(clearable);
}

void QHeaderView_Connect_SortIndicatorClearableChanged(QHeaderView* self, intptr_t slot) {
    void (*slotFunc)(QHeaderView*, bool) = reinterpret_cast<void (*)(QHeaderView*, bool)>(slot);
    QHeaderView::connect(self, &QHeaderView::sortIndicatorClearableChanged, [self, slotFunc](bool clearable) {
        bool sigval1 = clearable;
        slotFunc(self, sigval1);
    });
}

libqt_string QHeaderView_Tr2(const char* s, const char* c) {
    QString _ret = QHeaderView::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QHeaderView_Tr3(const char* s, const char* c, int n) {
    QString _ret = QHeaderView::tr(s, c, static_cast<int>(n));
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
void QHeaderView_SetModel(QHeaderView* self, QAbstractItemModel* model) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setModel(model);
    } else {
        vqheaderview->setModel(model);
    }
}

// Base class handler implementation
void QHeaderView_QBaseSetModel(QHeaderView* self, QAbstractItemModel* model) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_SetModel_IsBase(true);
        vqheaderview->setModel(model);
    } else {
        vqheaderview->setModel(model);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSetModel(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_SetModel_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_SetModel_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QHeaderView_SizeHint(const QHeaderView* self) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        return new QSize(vqheaderview->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QHeaderView_QBaseSizeHint(const QHeaderView* self) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_SizeHint_IsBase(true);
        return new QSize(vqheaderview->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSizeHint(const QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_SizeHint_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_SetVisible(QHeaderView* self, bool v) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setVisible(v);
    } else {
        vqheaderview->setVisible(v);
    }
}

// Base class handler implementation
void QHeaderView_QBaseSetVisible(QHeaderView* self, bool v) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_SetVisible_IsBase(true);
        vqheaderview->setVisible(v);
    } else {
        vqheaderview->setVisible(v);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSetVisible(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_SetVisible_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_DoItemsLayout(QHeaderView* self) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->doItemsLayout();
    } else {
        vqheaderview->doItemsLayout();
    }
}

// Base class handler implementation
void QHeaderView_QBaseDoItemsLayout(QHeaderView* self) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_DoItemsLayout_IsBase(true);
        vqheaderview->doItemsLayout();
    } else {
        vqheaderview->doItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnDoItemsLayout(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_DoItemsLayout_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_DoItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_Reset(QHeaderView* self) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->reset();
    } else {
        vqheaderview->reset();
    }
}

// Base class handler implementation
void QHeaderView_QBaseReset(QHeaderView* self) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_Reset_IsBase(true);
        vqheaderview->reset();
    } else {
        vqheaderview->reset();
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnReset(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_Reset_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_Reset_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_CurrentChanged(QHeaderView* self, QModelIndex* current, QModelIndex* old) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->currentChanged(*current, *old);
    } else {
        vqheaderview->currentChanged(*current, *old);
    }
}

// Base class handler implementation
void QHeaderView_QBaseCurrentChanged(QHeaderView* self, QModelIndex* current, QModelIndex* old) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_CurrentChanged_IsBase(true);
        vqheaderview->currentChanged(*current, *old);
    } else {
        vqheaderview->currentChanged(*current, *old);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnCurrentChanged(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_CurrentChanged_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_CurrentChanged_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHeaderView_Event(QHeaderView* self, QEvent* e) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        return vqheaderview->event(e);
    } else {
        return vqheaderview->event(e);
    }
}

// Base class handler implementation
bool QHeaderView_QBaseEvent(QHeaderView* self, QEvent* e) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_Event_IsBase(true);
        return vqheaderview->event(e);
    } else {
        return vqheaderview->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_Event_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_PaintEvent(QHeaderView* self, QPaintEvent* e) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->paintEvent(e);
    } else {
        vqheaderview->paintEvent(e);
    }
}

// Base class handler implementation
void QHeaderView_QBasePaintEvent(QHeaderView* self, QPaintEvent* e) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_PaintEvent_IsBase(true);
        vqheaderview->paintEvent(e);
    } else {
        vqheaderview->paintEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnPaintEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_PaintEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_MousePressEvent(QHeaderView* self, QMouseEvent* e) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->mousePressEvent(e);
    } else {
        vqheaderview->mousePressEvent(e);
    }
}

// Base class handler implementation
void QHeaderView_QBaseMousePressEvent(QHeaderView* self, QMouseEvent* e) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_MousePressEvent_IsBase(true);
        vqheaderview->mousePressEvent(e);
    } else {
        vqheaderview->mousePressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnMousePressEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_MousePressEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_MouseMoveEvent(QHeaderView* self, QMouseEvent* e) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->mouseMoveEvent(e);
    } else {
        vqheaderview->mouseMoveEvent(e);
    }
}

// Base class handler implementation
void QHeaderView_QBaseMouseMoveEvent(QHeaderView* self, QMouseEvent* e) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_MouseMoveEvent_IsBase(true);
        vqheaderview->mouseMoveEvent(e);
    } else {
        vqheaderview->mouseMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnMouseMoveEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_MouseMoveEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_MouseReleaseEvent(QHeaderView* self, QMouseEvent* e) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->mouseReleaseEvent(e);
    } else {
        vqheaderview->mouseReleaseEvent(e);
    }
}

// Base class handler implementation
void QHeaderView_QBaseMouseReleaseEvent(QHeaderView* self, QMouseEvent* e) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_MouseReleaseEvent_IsBase(true);
        vqheaderview->mouseReleaseEvent(e);
    } else {
        vqheaderview->mouseReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnMouseReleaseEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_MouseDoubleClickEvent(QHeaderView* self, QMouseEvent* e) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->mouseDoubleClickEvent(e);
    } else {
        vqheaderview->mouseDoubleClickEvent(e);
    }
}

// Base class handler implementation
void QHeaderView_QBaseMouseDoubleClickEvent(QHeaderView* self, QMouseEvent* e) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_MouseDoubleClickEvent_IsBase(true);
        vqheaderview->mouseDoubleClickEvent(e);
    } else {
        vqheaderview->mouseDoubleClickEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnMouseDoubleClickEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHeaderView_ViewportEvent(QHeaderView* self, QEvent* e) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        return vqheaderview->viewportEvent(e);
    } else {
        return vqheaderview->viewportEvent(e);
    }
}

// Base class handler implementation
bool QHeaderView_QBaseViewportEvent(QHeaderView* self, QEvent* e) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_ViewportEvent_IsBase(true);
        return vqheaderview->viewportEvent(e);
    } else {
        return vqheaderview->viewportEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnViewportEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_ViewportEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_ViewportEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_PaintSection(const QHeaderView* self, QPainter* painter, QRect* rect, int logicalIndex) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->paintSection(painter, *rect, static_cast<int>(logicalIndex));
    } else {
        vqheaderview->paintSection(painter, *rect, static_cast<int>(logicalIndex));
    }
}

// Base class handler implementation
void QHeaderView_QBasePaintSection(const QHeaderView* self, QPainter* painter, QRect* rect, int logicalIndex) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_PaintSection_IsBase(true);
        vqheaderview->paintSection(painter, *rect, static_cast<int>(logicalIndex));
    } else {
        vqheaderview->paintSection(painter, *rect, static_cast<int>(logicalIndex));
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnPaintSection(const QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_PaintSection_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_PaintSection_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QHeaderView_SectionSizeFromContents(const QHeaderView* self, int logicalIndex) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        return new QSize(vqheaderview->sectionSizeFromContents(static_cast<int>(logicalIndex)));
    }
    return {};
}

// Base class handler implementation
QSize* QHeaderView_QBaseSectionSizeFromContents(const QHeaderView* self, int logicalIndex) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_SectionSizeFromContents_IsBase(true);
        return new QSize(vqheaderview->sectionSizeFromContents(static_cast<int>(logicalIndex)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSectionSizeFromContents(const QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_SectionSizeFromContents_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_SectionSizeFromContents_Callback>(slot));
    }
}

// Derived class handler implementation
int QHeaderView_HorizontalOffset(const QHeaderView* self) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        return vqheaderview->horizontalOffset();
    } else {
        return vqheaderview->horizontalOffset();
    }
}

// Base class handler implementation
int QHeaderView_QBaseHorizontalOffset(const QHeaderView* self) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_HorizontalOffset_IsBase(true);
        return vqheaderview->horizontalOffset();
    } else {
        return vqheaderview->horizontalOffset();
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnHorizontalOffset(const QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_HorizontalOffset_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_HorizontalOffset_Callback>(slot));
    }
}

// Derived class handler implementation
int QHeaderView_VerticalOffset(const QHeaderView* self) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        return vqheaderview->verticalOffset();
    } else {
        return vqheaderview->verticalOffset();
    }
}

// Base class handler implementation
int QHeaderView_QBaseVerticalOffset(const QHeaderView* self) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_VerticalOffset_IsBase(true);
        return vqheaderview->verticalOffset();
    } else {
        return vqheaderview->verticalOffset();
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnVerticalOffset(const QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_VerticalOffset_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_VerticalOffset_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_UpdateGeometries(QHeaderView* self) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->updateGeometries();
    } else {
        vqheaderview->updateGeometries();
    }
}

// Base class handler implementation
void QHeaderView_QBaseUpdateGeometries(QHeaderView* self) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_UpdateGeometries_IsBase(true);
        vqheaderview->updateGeometries();
    } else {
        vqheaderview->updateGeometries();
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnUpdateGeometries(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_UpdateGeometries_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_UpdateGeometries_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_ScrollContentsBy(QHeaderView* self, int dx, int dy) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqheaderview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void QHeaderView_QBaseScrollContentsBy(QHeaderView* self, int dx, int dy) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_ScrollContentsBy_IsBase(true);
        vqheaderview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqheaderview->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnScrollContentsBy(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_ScrollContentsBy_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_ScrollContentsBy_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_DataChanged(QHeaderView* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list /* of int */ roles) {
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data.ints);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->dataChanged(*topLeft, *bottomRight, roles_QList);
    } else {
        vqheaderview->dataChanged(*topLeft, *bottomRight, roles_QList);
    }
}

// Base class handler implementation
void QHeaderView_QBaseDataChanged(QHeaderView* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list /* of int */ roles) {
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data.ints);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_DataChanged_IsBase(true);
        vqheaderview->dataChanged(*topLeft, *bottomRight, roles_QList);
    } else {
        vqheaderview->dataChanged(*topLeft, *bottomRight, roles_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnDataChanged(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_DataChanged_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_DataChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_RowsInserted(QHeaderView* self, QModelIndex* parent, int start, int end) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        vqheaderview->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Base class handler implementation
void QHeaderView_QBaseRowsInserted(QHeaderView* self, QModelIndex* parent, int start, int end) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_RowsInserted_IsBase(true);
        vqheaderview->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        vqheaderview->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnRowsInserted(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_RowsInserted_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_RowsInserted_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QHeaderView_VisualRect(const QHeaderView* self, QModelIndex* index) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        return new QRect(vqheaderview->visualRect(*index));
    }
    return {};
}

// Base class handler implementation
QRect* QHeaderView_QBaseVisualRect(const QHeaderView* self, QModelIndex* index) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_VisualRect_IsBase(true);
        return new QRect(vqheaderview->visualRect(*index));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnVisualRect(const QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_VisualRect_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_VisualRect_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_ScrollTo(QHeaderView* self, QModelIndex* index, int hint) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    } else {
        vqheaderview->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    }
}

// Base class handler implementation
void QHeaderView_QBaseScrollTo(QHeaderView* self, QModelIndex* index, int hint) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_ScrollTo_IsBase(true);
        vqheaderview->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    } else {
        vqheaderview->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnScrollTo(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_ScrollTo_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_ScrollTo_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QHeaderView_IndexAt(const QHeaderView* self, QPoint* p) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        return new QModelIndex(vqheaderview->indexAt(*p));
    }
    return {};
}

// Base class handler implementation
QModelIndex* QHeaderView_QBaseIndexAt(const QHeaderView* self, QPoint* p) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_IndexAt_IsBase(true);
        return new QModelIndex(vqheaderview->indexAt(*p));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnIndexAt(const QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_IndexAt_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_IndexAt_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHeaderView_IsIndexHidden(const QHeaderView* self, QModelIndex* index) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        return vqheaderview->isIndexHidden(*index);
    } else {
        return vqheaderview->isIndexHidden(*index);
    }
}

// Base class handler implementation
bool QHeaderView_QBaseIsIndexHidden(const QHeaderView* self, QModelIndex* index) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_IsIndexHidden_IsBase(true);
        return vqheaderview->isIndexHidden(*index);
    } else {
        return vqheaderview->isIndexHidden(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnIsIndexHidden(const QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_IsIndexHidden_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_IsIndexHidden_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QHeaderView_MoveCursor(QHeaderView* self, int param1, int param2) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        return new QModelIndex(vqheaderview->moveCursor(static_cast<VirtualQHeaderView::CursorAction>(param1), static_cast<QFlags<Qt::KeyboardModifier>>(param2)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* QHeaderView_QBaseMoveCursor(QHeaderView* self, int param1, int param2) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_MoveCursor_IsBase(true);
        return new QModelIndex(vqheaderview->moveCursor(static_cast<VirtualQHeaderView::CursorAction>(param1), static_cast<QFlags<Qt::KeyboardModifier>>(param2)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnMoveCursor(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_MoveCursor_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_MoveCursor_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_SetSelection(QHeaderView* self, QRect* rect, int flags) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(flags));
    } else {
        vqheaderview->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(flags));
    }
}

// Base class handler implementation
void QHeaderView_QBaseSetSelection(QHeaderView* self, QRect* rect, int flags) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_SetSelection_IsBase(true);
        vqheaderview->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(flags));
    } else {
        vqheaderview->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(flags));
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSetSelection(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_SetSelection_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_SetSelection_Callback>(slot));
    }
}

// Derived class handler implementation
QRegion* QHeaderView_VisualRegionForSelection(const QHeaderView* self, QItemSelection* selection) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        return new QRegion(vqheaderview->visualRegionForSelection(*selection));
    }
    return {};
}

// Base class handler implementation
QRegion* QHeaderView_QBaseVisualRegionForSelection(const QHeaderView* self, QItemSelection* selection) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_VisualRegionForSelection_IsBase(true);
        return new QRegion(vqheaderview->visualRegionForSelection(*selection));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnVisualRegionForSelection(const QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_VisualRegionForSelection_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_VisualRegionForSelection_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_InitStyleOptionForIndex(const QHeaderView* self, QStyleOptionHeader* option, int logicalIndex) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->initStyleOptionForIndex(option, static_cast<int>(logicalIndex));
    } else {
        vqheaderview->initStyleOptionForIndex(option, static_cast<int>(logicalIndex));
    }
}

// Base class handler implementation
void QHeaderView_QBaseInitStyleOptionForIndex(const QHeaderView* self, QStyleOptionHeader* option, int logicalIndex) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_InitStyleOptionForIndex_IsBase(true);
        vqheaderview->initStyleOptionForIndex(option, static_cast<int>(logicalIndex));
    } else {
        vqheaderview->initStyleOptionForIndex(option, static_cast<int>(logicalIndex));
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnInitStyleOptionForIndex(const QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_InitStyleOptionForIndex_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_InitStyleOptionForIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_InitStyleOption(const QHeaderView* self, QStyleOptionHeader* option) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->initStyleOption(option);
    } else {
        vqheaderview->initStyleOption(option);
    }
}

// Base class handler implementation
void QHeaderView_QBaseInitStyleOption(const QHeaderView* self, QStyleOptionHeader* option) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_InitStyleOption_IsBase(true);
        vqheaderview->initStyleOption(option);
    } else {
        vqheaderview->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnInitStyleOption(const QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_InitStyleOption_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_SetSelectionModel(QHeaderView* self, QItemSelectionModel* selectionModel) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setSelectionModel(selectionModel);
    } else {
        vqheaderview->setSelectionModel(selectionModel);
    }
}

// Base class handler implementation
void QHeaderView_QBaseSetSelectionModel(QHeaderView* self, QItemSelectionModel* selectionModel) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_SetSelectionModel_IsBase(true);
        vqheaderview->setSelectionModel(selectionModel);
    } else {
        vqheaderview->setSelectionModel(selectionModel);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSetSelectionModel(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_SetSelectionModel_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_SetSelectionModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_KeyboardSearch(QHeaderView* self, libqt_string search) {
    QString search_QString = QString::fromUtf8(search.data, search.len);
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->keyboardSearch(search_QString);
    } else {
        vqheaderview->keyboardSearch(search_QString);
    }
}

// Base class handler implementation
void QHeaderView_QBaseKeyboardSearch(QHeaderView* self, libqt_string search) {
    QString search_QString = QString::fromUtf8(search.data, search.len);
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_KeyboardSearch_IsBase(true);
        vqheaderview->keyboardSearch(search_QString);
    } else {
        vqheaderview->keyboardSearch(search_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnKeyboardSearch(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_KeyboardSearch_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_KeyboardSearch_Callback>(slot));
    }
}

// Derived class handler implementation
int QHeaderView_SizeHintForRow(const QHeaderView* self, int row) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        return vqheaderview->sizeHintForRow(static_cast<int>(row));
    } else {
        return vqheaderview->sizeHintForRow(static_cast<int>(row));
    }
}

// Base class handler implementation
int QHeaderView_QBaseSizeHintForRow(const QHeaderView* self, int row) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_SizeHintForRow_IsBase(true);
        return vqheaderview->sizeHintForRow(static_cast<int>(row));
    } else {
        return vqheaderview->sizeHintForRow(static_cast<int>(row));
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSizeHintForRow(const QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_SizeHintForRow_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_SizeHintForRow_Callback>(slot));
    }
}

// Derived class handler implementation
int QHeaderView_SizeHintForColumn(const QHeaderView* self, int column) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        return vqheaderview->sizeHintForColumn(static_cast<int>(column));
    } else {
        return vqheaderview->sizeHintForColumn(static_cast<int>(column));
    }
}

// Base class handler implementation
int QHeaderView_QBaseSizeHintForColumn(const QHeaderView* self, int column) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_SizeHintForColumn_IsBase(true);
        return vqheaderview->sizeHintForColumn(static_cast<int>(column));
    } else {
        return vqheaderview->sizeHintForColumn(static_cast<int>(column));
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSizeHintForColumn(const QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_SizeHintForColumn_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_SizeHintForColumn_Callback>(slot));
    }
}

// Derived class handler implementation
QAbstractItemDelegate* QHeaderView_ItemDelegateForIndex(const QHeaderView* self, QModelIndex* index) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        return vqheaderview->itemDelegateForIndex(*index);
    } else {
        return vqheaderview->itemDelegateForIndex(*index);
    }
}

// Base class handler implementation
QAbstractItemDelegate* QHeaderView_QBaseItemDelegateForIndex(const QHeaderView* self, QModelIndex* index) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_ItemDelegateForIndex_IsBase(true);
        return vqheaderview->itemDelegateForIndex(*index);
    } else {
        return vqheaderview->itemDelegateForIndex(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnItemDelegateForIndex(const QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_ItemDelegateForIndex_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_ItemDelegateForIndex_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QHeaderView_InputMethodQuery(const QHeaderView* self, int query) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        return new QVariant(vqheaderview->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

// Base class handler implementation
QVariant* QHeaderView_QBaseInputMethodQuery(const QHeaderView* self, int query) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_InputMethodQuery_IsBase(true);
        return new QVariant(vqheaderview->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnInputMethodQuery(const QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_InputMethodQuery_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_SetRootIndex(QHeaderView* self, QModelIndex* index) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setRootIndex(*index);
    } else {
        vqheaderview->setRootIndex(*index);
    }
}

// Base class handler implementation
void QHeaderView_QBaseSetRootIndex(QHeaderView* self, QModelIndex* index) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_SetRootIndex_IsBase(true);
        vqheaderview->setRootIndex(*index);
    } else {
        vqheaderview->setRootIndex(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSetRootIndex(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_SetRootIndex_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_SetRootIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_SelectAll(QHeaderView* self) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->selectAll();
    } else {
        vqheaderview->selectAll();
    }
}

// Base class handler implementation
void QHeaderView_QBaseSelectAll(QHeaderView* self) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_SelectAll_IsBase(true);
        vqheaderview->selectAll();
    } else {
        vqheaderview->selectAll();
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSelectAll(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_SelectAll_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_SelectAll_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_RowsAboutToBeRemoved(QHeaderView* self, QModelIndex* parent, int start, int end) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        vqheaderview->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Base class handler implementation
void QHeaderView_QBaseRowsAboutToBeRemoved(QHeaderView* self, QModelIndex* parent, int start, int end) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_RowsAboutToBeRemoved_IsBase(true);
        vqheaderview->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        vqheaderview->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnRowsAboutToBeRemoved(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_RowsAboutToBeRemoved_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_RowsAboutToBeRemoved_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_SelectionChanged(QHeaderView* self, QItemSelection* selected, QItemSelection* deselected) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->selectionChanged(*selected, *deselected);
    } else {
        vqheaderview->selectionChanged(*selected, *deselected);
    }
}

// Base class handler implementation
void QHeaderView_QBaseSelectionChanged(QHeaderView* self, QItemSelection* selected, QItemSelection* deselected) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_SelectionChanged_IsBase(true);
        vqheaderview->selectionChanged(*selected, *deselected);
    } else {
        vqheaderview->selectionChanged(*selected, *deselected);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSelectionChanged(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_SelectionChanged_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_SelectionChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_UpdateEditorData(QHeaderView* self) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->updateEditorData();
    } else {
        vqheaderview->updateEditorData();
    }
}

// Base class handler implementation
void QHeaderView_QBaseUpdateEditorData(QHeaderView* self) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_UpdateEditorData_IsBase(true);
        vqheaderview->updateEditorData();
    } else {
        vqheaderview->updateEditorData();
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnUpdateEditorData(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_UpdateEditorData_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_UpdateEditorData_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_UpdateEditorGeometries(QHeaderView* self) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->updateEditorGeometries();
    } else {
        vqheaderview->updateEditorGeometries();
    }
}

// Base class handler implementation
void QHeaderView_QBaseUpdateEditorGeometries(QHeaderView* self) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_UpdateEditorGeometries_IsBase(true);
        vqheaderview->updateEditorGeometries();
    } else {
        vqheaderview->updateEditorGeometries();
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnUpdateEditorGeometries(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_UpdateEditorGeometries_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_UpdateEditorGeometries_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_VerticalScrollbarAction(QHeaderView* self, int action) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->verticalScrollbarAction(static_cast<int>(action));
    } else {
        vqheaderview->verticalScrollbarAction(static_cast<int>(action));
    }
}

// Base class handler implementation
void QHeaderView_QBaseVerticalScrollbarAction(QHeaderView* self, int action) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_VerticalScrollbarAction_IsBase(true);
        vqheaderview->verticalScrollbarAction(static_cast<int>(action));
    } else {
        vqheaderview->verticalScrollbarAction(static_cast<int>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnVerticalScrollbarAction(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_VerticalScrollbarAction_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_VerticalScrollbarAction_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_HorizontalScrollbarAction(QHeaderView* self, int action) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->horizontalScrollbarAction(static_cast<int>(action));
    } else {
        vqheaderview->horizontalScrollbarAction(static_cast<int>(action));
    }
}

// Base class handler implementation
void QHeaderView_QBaseHorizontalScrollbarAction(QHeaderView* self, int action) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_HorizontalScrollbarAction_IsBase(true);
        vqheaderview->horizontalScrollbarAction(static_cast<int>(action));
    } else {
        vqheaderview->horizontalScrollbarAction(static_cast<int>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnHorizontalScrollbarAction(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_HorizontalScrollbarAction_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_HorizontalScrollbarAction_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_VerticalScrollbarValueChanged(QHeaderView* self, int value) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->verticalScrollbarValueChanged(static_cast<int>(value));
    } else {
        vqheaderview->verticalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Base class handler implementation
void QHeaderView_QBaseVerticalScrollbarValueChanged(QHeaderView* self, int value) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_VerticalScrollbarValueChanged_IsBase(true);
        vqheaderview->verticalScrollbarValueChanged(static_cast<int>(value));
    } else {
        vqheaderview->verticalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnVerticalScrollbarValueChanged(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_VerticalScrollbarValueChanged_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_VerticalScrollbarValueChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_HorizontalScrollbarValueChanged(QHeaderView* self, int value) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->horizontalScrollbarValueChanged(static_cast<int>(value));
    } else {
        vqheaderview->horizontalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Base class handler implementation
void QHeaderView_QBaseHorizontalScrollbarValueChanged(QHeaderView* self, int value) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_HorizontalScrollbarValueChanged_IsBase(true);
        vqheaderview->horizontalScrollbarValueChanged(static_cast<int>(value));
    } else {
        vqheaderview->horizontalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnHorizontalScrollbarValueChanged(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_HorizontalScrollbarValueChanged_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_HorizontalScrollbarValueChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_CloseEditor(QHeaderView* self, QWidget* editor, int hint) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else {
        vqheaderview->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    }
}

// Base class handler implementation
void QHeaderView_QBaseCloseEditor(QHeaderView* self, QWidget* editor, int hint) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_CloseEditor_IsBase(true);
        vqheaderview->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else {
        vqheaderview->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnCloseEditor(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_CloseEditor_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_CloseEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_CommitData(QHeaderView* self, QWidget* editor) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->commitData(editor);
    } else {
        vqheaderview->commitData(editor);
    }
}

// Base class handler implementation
void QHeaderView_QBaseCommitData(QHeaderView* self, QWidget* editor) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_CommitData_IsBase(true);
        vqheaderview->commitData(editor);
    } else {
        vqheaderview->commitData(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnCommitData(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_CommitData_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_CommitData_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_EditorDestroyed(QHeaderView* self, QObject* editor) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->editorDestroyed(editor);
    } else {
        vqheaderview->editorDestroyed(editor);
    }
}

// Base class handler implementation
void QHeaderView_QBaseEditorDestroyed(QHeaderView* self, QObject* editor) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_EditorDestroyed_IsBase(true);
        vqheaderview->editorDestroyed(editor);
    } else {
        vqheaderview->editorDestroyed(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnEditorDestroyed(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_EditorDestroyed_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_EditorDestroyed_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QHeaderView_SelectedIndexes(const QHeaderView* self) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        QModelIndexList _ret = vqheaderview->selectedIndexes();
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
        QModelIndexList _ret = vqheaderview->selectedIndexes();
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
libqt_list /* of QModelIndex* */ QHeaderView_QBaseSelectedIndexes(const QHeaderView* self) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_SelectedIndexes_IsBase(true);
        QModelIndexList _ret = vqheaderview->selectedIndexes();
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
        QModelIndexList _ret = vqheaderview->selectedIndexes();
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
void QHeaderView_OnSelectedIndexes(const QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_SelectedIndexes_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_SelectedIndexes_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHeaderView_Edit2(QHeaderView* self, QModelIndex* index, int trigger, QEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        return vqheaderview->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else {
        return vqheaderview->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    }
}

// Base class handler implementation
bool QHeaderView_QBaseEdit2(QHeaderView* self, QModelIndex* index, int trigger, QEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_Edit2_IsBase(true);
        return vqheaderview->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else {
        return vqheaderview->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnEdit2(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_Edit2_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_Edit2_Callback>(slot));
    }
}

// Derived class handler implementation
int QHeaderView_SelectionCommand(const QHeaderView* self, QModelIndex* index, QEvent* event) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        return static_cast<int>(vqheaderview->selectionCommand(*index, event));
    } else {
        return static_cast<int>(vqheaderview->selectionCommand(*index, event));
    }
}

// Base class handler implementation
int QHeaderView_QBaseSelectionCommand(const QHeaderView* self, QModelIndex* index, QEvent* event) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_SelectionCommand_IsBase(true);
        return static_cast<int>(vqheaderview->selectionCommand(*index, event));
    } else {
        return static_cast<int>(vqheaderview->selectionCommand(*index, event));
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSelectionCommand(const QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_SelectionCommand_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_SelectionCommand_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_StartDrag(QHeaderView* self, int supportedActions) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else {
        vqheaderview->startDrag(static_cast<Qt::DropActions>(supportedActions));
    }
}

// Base class handler implementation
void QHeaderView_QBaseStartDrag(QHeaderView* self, int supportedActions) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_StartDrag_IsBase(true);
        vqheaderview->startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else {
        vqheaderview->startDrag(static_cast<Qt::DropActions>(supportedActions));
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnStartDrag(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_StartDrag_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_StartDrag_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_InitViewItemOption(const QHeaderView* self, QStyleOptionViewItem* option) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->initViewItemOption(option);
    } else {
        vqheaderview->initViewItemOption(option);
    }
}

// Base class handler implementation
void QHeaderView_QBaseInitViewItemOption(const QHeaderView* self, QStyleOptionViewItem* option) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_InitViewItemOption_IsBase(true);
        vqheaderview->initViewItemOption(option);
    } else {
        vqheaderview->initViewItemOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnInitViewItemOption(const QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_InitViewItemOption_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_InitViewItemOption_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHeaderView_FocusNextPrevChild(QHeaderView* self, bool next) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        return vqheaderview->focusNextPrevChild(next);
    } else {
        return vqheaderview->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QHeaderView_QBaseFocusNextPrevChild(QHeaderView* self, bool next) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_FocusNextPrevChild_IsBase(true);
        return vqheaderview->focusNextPrevChild(next);
    } else {
        return vqheaderview->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnFocusNextPrevChild(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_DragEnterEvent(QHeaderView* self, QDragEnterEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->dragEnterEvent(event);
    } else {
        vqheaderview->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QHeaderView_QBaseDragEnterEvent(QHeaderView* self, QDragEnterEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_DragEnterEvent_IsBase(true);
        vqheaderview->dragEnterEvent(event);
    } else {
        vqheaderview->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnDragEnterEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_DragEnterEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_DragMoveEvent(QHeaderView* self, QDragMoveEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->dragMoveEvent(event);
    } else {
        vqheaderview->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QHeaderView_QBaseDragMoveEvent(QHeaderView* self, QDragMoveEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_DragMoveEvent_IsBase(true);
        vqheaderview->dragMoveEvent(event);
    } else {
        vqheaderview->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnDragMoveEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_DragMoveEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_DragLeaveEvent(QHeaderView* self, QDragLeaveEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->dragLeaveEvent(event);
    } else {
        vqheaderview->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QHeaderView_QBaseDragLeaveEvent(QHeaderView* self, QDragLeaveEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_DragLeaveEvent_IsBase(true);
        vqheaderview->dragLeaveEvent(event);
    } else {
        vqheaderview->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnDragLeaveEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_DragLeaveEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_DropEvent(QHeaderView* self, QDropEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->dropEvent(event);
    } else {
        vqheaderview->dropEvent(event);
    }
}

// Base class handler implementation
void QHeaderView_QBaseDropEvent(QHeaderView* self, QDropEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_DropEvent_IsBase(true);
        vqheaderview->dropEvent(event);
    } else {
        vqheaderview->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnDropEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_DropEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_FocusInEvent(QHeaderView* self, QFocusEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->focusInEvent(event);
    } else {
        vqheaderview->focusInEvent(event);
    }
}

// Base class handler implementation
void QHeaderView_QBaseFocusInEvent(QHeaderView* self, QFocusEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_FocusInEvent_IsBase(true);
        vqheaderview->focusInEvent(event);
    } else {
        vqheaderview->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnFocusInEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_FocusInEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_FocusOutEvent(QHeaderView* self, QFocusEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->focusOutEvent(event);
    } else {
        vqheaderview->focusOutEvent(event);
    }
}

// Base class handler implementation
void QHeaderView_QBaseFocusOutEvent(QHeaderView* self, QFocusEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_FocusOutEvent_IsBase(true);
        vqheaderview->focusOutEvent(event);
    } else {
        vqheaderview->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnFocusOutEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_FocusOutEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_KeyPressEvent(QHeaderView* self, QKeyEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->keyPressEvent(event);
    } else {
        vqheaderview->keyPressEvent(event);
    }
}

// Base class handler implementation
void QHeaderView_QBaseKeyPressEvent(QHeaderView* self, QKeyEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_KeyPressEvent_IsBase(true);
        vqheaderview->keyPressEvent(event);
    } else {
        vqheaderview->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnKeyPressEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_KeyPressEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_ResizeEvent(QHeaderView* self, QResizeEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->resizeEvent(event);
    } else {
        vqheaderview->resizeEvent(event);
    }
}

// Base class handler implementation
void QHeaderView_QBaseResizeEvent(QHeaderView* self, QResizeEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_ResizeEvent_IsBase(true);
        vqheaderview->resizeEvent(event);
    } else {
        vqheaderview->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnResizeEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_ResizeEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_TimerEvent(QHeaderView* self, QTimerEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->timerEvent(event);
    } else {
        vqheaderview->timerEvent(event);
    }
}

// Base class handler implementation
void QHeaderView_QBaseTimerEvent(QHeaderView* self, QTimerEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_TimerEvent_IsBase(true);
        vqheaderview->timerEvent(event);
    } else {
        vqheaderview->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnTimerEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_TimerEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_InputMethodEvent(QHeaderView* self, QInputMethodEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->inputMethodEvent(event);
    } else {
        vqheaderview->inputMethodEvent(event);
    }
}

// Base class handler implementation
void QHeaderView_QBaseInputMethodEvent(QHeaderView* self, QInputMethodEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_InputMethodEvent_IsBase(true);
        vqheaderview->inputMethodEvent(event);
    } else {
        vqheaderview->inputMethodEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnInputMethodEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_InputMethodEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHeaderView_EventFilter(QHeaderView* self, QObject* object, QEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        return vqheaderview->eventFilter(object, event);
    } else {
        return vqheaderview->eventFilter(object, event);
    }
}

// Base class handler implementation
bool QHeaderView_QBaseEventFilter(QHeaderView* self, QObject* object, QEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_EventFilter_IsBase(true);
        return vqheaderview->eventFilter(object, event);
    } else {
        return vqheaderview->eventFilter(object, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnEventFilter(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_EventFilter_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QHeaderView_ViewportSizeHint(const QHeaderView* self) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        return new QSize(vqheaderview->viewportSizeHint());
    }
    return {};
}

// Base class handler implementation
QSize* QHeaderView_QBaseViewportSizeHint(const QHeaderView* self) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_ViewportSizeHint_IsBase(true);
        return new QSize(vqheaderview->viewportSizeHint());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnViewportSizeHint(const QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_ViewportSizeHint_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_ViewportSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QHeaderView_MinimumSizeHint(const QHeaderView* self) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        return new QSize(vqheaderview->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QHeaderView_QBaseMinimumSizeHint(const QHeaderView* self) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_MinimumSizeHint_IsBase(true);
        return new QSize(vqheaderview->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnMinimumSizeHint(const QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_MinimumSizeHint_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_SetupViewport(QHeaderView* self, QWidget* viewport) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setupViewport(viewport);
    } else {
        vqheaderview->setupViewport(viewport);
    }
}

// Base class handler implementation
void QHeaderView_QBaseSetupViewport(QHeaderView* self, QWidget* viewport) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_SetupViewport_IsBase(true);
        vqheaderview->setupViewport(viewport);
    } else {
        vqheaderview->setupViewport(viewport);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSetupViewport(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_SetupViewport_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_SetupViewport_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_WheelEvent(QHeaderView* self, QWheelEvent* param1) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->wheelEvent(param1);
    } else {
        vqheaderview->wheelEvent(param1);
    }
}

// Base class handler implementation
void QHeaderView_QBaseWheelEvent(QHeaderView* self, QWheelEvent* param1) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_WheelEvent_IsBase(true);
        vqheaderview->wheelEvent(param1);
    } else {
        vqheaderview->wheelEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnWheelEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_WheelEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_ContextMenuEvent(QHeaderView* self, QContextMenuEvent* param1) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->contextMenuEvent(param1);
    } else {
        vqheaderview->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void QHeaderView_QBaseContextMenuEvent(QHeaderView* self, QContextMenuEvent* param1) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_ContextMenuEvent_IsBase(true);
        vqheaderview->contextMenuEvent(param1);
    } else {
        vqheaderview->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnContextMenuEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_ContextMenuEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_ChangeEvent(QHeaderView* self, QEvent* param1) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->changeEvent(param1);
    } else {
        vqheaderview->changeEvent(param1);
    }
}

// Base class handler implementation
void QHeaderView_QBaseChangeEvent(QHeaderView* self, QEvent* param1) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_ChangeEvent_IsBase(true);
        vqheaderview->changeEvent(param1);
    } else {
        vqheaderview->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnChangeEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_ChangeEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QHeaderView_DevType(const QHeaderView* self) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        return vqheaderview->devType();
    } else {
        return vqheaderview->devType();
    }
}

// Base class handler implementation
int QHeaderView_QBaseDevType(const QHeaderView* self) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_DevType_IsBase(true);
        return vqheaderview->devType();
    } else {
        return vqheaderview->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnDevType(const QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_DevType_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int QHeaderView_HeightForWidth(const QHeaderView* self, int param1) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        return vqheaderview->heightForWidth(static_cast<int>(param1));
    } else {
        return vqheaderview->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QHeaderView_QBaseHeightForWidth(const QHeaderView* self, int param1) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_HeightForWidth_IsBase(true);
        return vqheaderview->heightForWidth(static_cast<int>(param1));
    } else {
        return vqheaderview->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnHeightForWidth(const QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_HeightForWidth_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHeaderView_HasHeightForWidth(const QHeaderView* self) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        return vqheaderview->hasHeightForWidth();
    } else {
        return vqheaderview->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QHeaderView_QBaseHasHeightForWidth(const QHeaderView* self) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_HasHeightForWidth_IsBase(true);
        return vqheaderview->hasHeightForWidth();
    } else {
        return vqheaderview->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnHasHeightForWidth(const QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_HasHeightForWidth_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QHeaderView_PaintEngine(const QHeaderView* self) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        return vqheaderview->paintEngine();
    } else {
        return vqheaderview->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QHeaderView_QBasePaintEngine(const QHeaderView* self) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_PaintEngine_IsBase(true);
        return vqheaderview->paintEngine();
    } else {
        return vqheaderview->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnPaintEngine(const QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_PaintEngine_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_KeyReleaseEvent(QHeaderView* self, QKeyEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->keyReleaseEvent(event);
    } else {
        vqheaderview->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QHeaderView_QBaseKeyReleaseEvent(QHeaderView* self, QKeyEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_KeyReleaseEvent_IsBase(true);
        vqheaderview->keyReleaseEvent(event);
    } else {
        vqheaderview->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnKeyReleaseEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_EnterEvent(QHeaderView* self, QEnterEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->enterEvent(event);
    } else {
        vqheaderview->enterEvent(event);
    }
}

// Base class handler implementation
void QHeaderView_QBaseEnterEvent(QHeaderView* self, QEnterEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_EnterEvent_IsBase(true);
        vqheaderview->enterEvent(event);
    } else {
        vqheaderview->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnEnterEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_EnterEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_LeaveEvent(QHeaderView* self, QEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->leaveEvent(event);
    } else {
        vqheaderview->leaveEvent(event);
    }
}

// Base class handler implementation
void QHeaderView_QBaseLeaveEvent(QHeaderView* self, QEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_LeaveEvent_IsBase(true);
        vqheaderview->leaveEvent(event);
    } else {
        vqheaderview->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnLeaveEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_LeaveEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_MoveEvent(QHeaderView* self, QMoveEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->moveEvent(event);
    } else {
        vqheaderview->moveEvent(event);
    }
}

// Base class handler implementation
void QHeaderView_QBaseMoveEvent(QHeaderView* self, QMoveEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_MoveEvent_IsBase(true);
        vqheaderview->moveEvent(event);
    } else {
        vqheaderview->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnMoveEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_MoveEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_CloseEvent(QHeaderView* self, QCloseEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->closeEvent(event);
    } else {
        vqheaderview->closeEvent(event);
    }
}

// Base class handler implementation
void QHeaderView_QBaseCloseEvent(QHeaderView* self, QCloseEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_CloseEvent_IsBase(true);
        vqheaderview->closeEvent(event);
    } else {
        vqheaderview->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnCloseEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_CloseEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_TabletEvent(QHeaderView* self, QTabletEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->tabletEvent(event);
    } else {
        vqheaderview->tabletEvent(event);
    }
}

// Base class handler implementation
void QHeaderView_QBaseTabletEvent(QHeaderView* self, QTabletEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_TabletEvent_IsBase(true);
        vqheaderview->tabletEvent(event);
    } else {
        vqheaderview->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnTabletEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_TabletEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_ActionEvent(QHeaderView* self, QActionEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->actionEvent(event);
    } else {
        vqheaderview->actionEvent(event);
    }
}

// Base class handler implementation
void QHeaderView_QBaseActionEvent(QHeaderView* self, QActionEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_ActionEvent_IsBase(true);
        vqheaderview->actionEvent(event);
    } else {
        vqheaderview->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnActionEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_ActionEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_ShowEvent(QHeaderView* self, QShowEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->showEvent(event);
    } else {
        vqheaderview->showEvent(event);
    }
}

// Base class handler implementation
void QHeaderView_QBaseShowEvent(QHeaderView* self, QShowEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_ShowEvent_IsBase(true);
        vqheaderview->showEvent(event);
    } else {
        vqheaderview->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnShowEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_ShowEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_HideEvent(QHeaderView* self, QHideEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->hideEvent(event);
    } else {
        vqheaderview->hideEvent(event);
    }
}

// Base class handler implementation
void QHeaderView_QBaseHideEvent(QHeaderView* self, QHideEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_HideEvent_IsBase(true);
        vqheaderview->hideEvent(event);
    } else {
        vqheaderview->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnHideEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_HideEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHeaderView_NativeEvent(QHeaderView* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        return vqheaderview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqheaderview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QHeaderView_QBaseNativeEvent(QHeaderView* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_NativeEvent_IsBase(true);
        return vqheaderview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqheaderview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnNativeEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_NativeEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QHeaderView_Metric(const QHeaderView* self, int param1) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        return vqheaderview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqheaderview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QHeaderView_QBaseMetric(const QHeaderView* self, int param1) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_Metric_IsBase(true);
        return vqheaderview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqheaderview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnMetric(const QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_Metric_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_InitPainter(const QHeaderView* self, QPainter* painter) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->initPainter(painter);
    } else {
        vqheaderview->initPainter(painter);
    }
}

// Base class handler implementation
void QHeaderView_QBaseInitPainter(const QHeaderView* self, QPainter* painter) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_InitPainter_IsBase(true);
        vqheaderview->initPainter(painter);
    } else {
        vqheaderview->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnInitPainter(const QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_InitPainter_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QHeaderView_Redirected(const QHeaderView* self, QPoint* offset) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        return vqheaderview->redirected(offset);
    } else {
        return vqheaderview->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QHeaderView_QBaseRedirected(const QHeaderView* self, QPoint* offset) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_Redirected_IsBase(true);
        return vqheaderview->redirected(offset);
    } else {
        return vqheaderview->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnRedirected(const QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_Redirected_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QHeaderView_SharedPainter(const QHeaderView* self) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        return vqheaderview->sharedPainter();
    } else {
        return vqheaderview->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QHeaderView_QBaseSharedPainter(const QHeaderView* self) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_SharedPainter_IsBase(true);
        return vqheaderview->sharedPainter();
    } else {
        return vqheaderview->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSharedPainter(const QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_SharedPainter_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_ChildEvent(QHeaderView* self, QChildEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->childEvent(event);
    } else {
        vqheaderview->childEvent(event);
    }
}

// Base class handler implementation
void QHeaderView_QBaseChildEvent(QHeaderView* self, QChildEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_ChildEvent_IsBase(true);
        vqheaderview->childEvent(event);
    } else {
        vqheaderview->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnChildEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_ChildEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_CustomEvent(QHeaderView* self, QEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->customEvent(event);
    } else {
        vqheaderview->customEvent(event);
    }
}

// Base class handler implementation
void QHeaderView_QBaseCustomEvent(QHeaderView* self, QEvent* event) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_CustomEvent_IsBase(true);
        vqheaderview->customEvent(event);
    } else {
        vqheaderview->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnCustomEvent(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_CustomEvent_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_ConnectNotify(QHeaderView* self, QMetaMethod* signal) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->connectNotify(*signal);
    } else {
        vqheaderview->connectNotify(*signal);
    }
}

// Base class handler implementation
void QHeaderView_QBaseConnectNotify(QHeaderView* self, QMetaMethod* signal) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_ConnectNotify_IsBase(true);
        vqheaderview->connectNotify(*signal);
    } else {
        vqheaderview->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnConnectNotify(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_ConnectNotify_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_DisconnectNotify(QHeaderView* self, QMetaMethod* signal) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->disconnectNotify(*signal);
    } else {
        vqheaderview->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QHeaderView_QBaseDisconnectNotify(QHeaderView* self, QMetaMethod* signal) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_DisconnectNotify_IsBase(true);
        vqheaderview->disconnectNotify(*signal);
    } else {
        vqheaderview->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnDisconnectNotify(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_DisconnectNotify_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_UpdateSection(QHeaderView* self, int logicalIndex) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->updateSection(static_cast<int>(logicalIndex));
    } else {
        vqheaderview->updateSection(static_cast<int>(logicalIndex));
    }
}

// Base class handler implementation
void QHeaderView_QBaseUpdateSection(QHeaderView* self, int logicalIndex) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_UpdateSection_IsBase(true);
        vqheaderview->updateSection(static_cast<int>(logicalIndex));
    } else {
        vqheaderview->updateSection(static_cast<int>(logicalIndex));
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnUpdateSection(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_UpdateSection_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_UpdateSection_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_ResizeSections2(QHeaderView* self) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->resizeSections();
    } else {
        vqheaderview->resizeSections();
    }
}

// Base class handler implementation
void QHeaderView_QBaseResizeSections2(QHeaderView* self) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_ResizeSections2_IsBase(true);
        vqheaderview->resizeSections();
    } else {
        vqheaderview->resizeSections();
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnResizeSections2(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_ResizeSections2_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_ResizeSections2_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_SectionsInserted(QHeaderView* self, QModelIndex* parent, int logicalFirst, int logicalLast) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->sectionsInserted(*parent, static_cast<int>(logicalFirst), static_cast<int>(logicalLast));
    } else {
        vqheaderview->sectionsInserted(*parent, static_cast<int>(logicalFirst), static_cast<int>(logicalLast));
    }
}

// Base class handler implementation
void QHeaderView_QBaseSectionsInserted(QHeaderView* self, QModelIndex* parent, int logicalFirst, int logicalLast) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_SectionsInserted_IsBase(true);
        vqheaderview->sectionsInserted(*parent, static_cast<int>(logicalFirst), static_cast<int>(logicalLast));
    } else {
        vqheaderview->sectionsInserted(*parent, static_cast<int>(logicalFirst), static_cast<int>(logicalLast));
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSectionsInserted(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_SectionsInserted_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_SectionsInserted_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_SectionsAboutToBeRemoved(QHeaderView* self, QModelIndex* parent, int logicalFirst, int logicalLast) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->sectionsAboutToBeRemoved(*parent, static_cast<int>(logicalFirst), static_cast<int>(logicalLast));
    } else {
        vqheaderview->sectionsAboutToBeRemoved(*parent, static_cast<int>(logicalFirst), static_cast<int>(logicalLast));
    }
}

// Base class handler implementation
void QHeaderView_QBaseSectionsAboutToBeRemoved(QHeaderView* self, QModelIndex* parent, int logicalFirst, int logicalLast) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_SectionsAboutToBeRemoved_IsBase(true);
        vqheaderview->sectionsAboutToBeRemoved(*parent, static_cast<int>(logicalFirst), static_cast<int>(logicalLast));
    } else {
        vqheaderview->sectionsAboutToBeRemoved(*parent, static_cast<int>(logicalFirst), static_cast<int>(logicalLast));
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSectionsAboutToBeRemoved(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_SectionsAboutToBeRemoved_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_SectionsAboutToBeRemoved_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_Initialize(QHeaderView* self) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->initialize();
    } else {
        vqheaderview->initialize();
    }
}

// Base class handler implementation
void QHeaderView_QBaseInitialize(QHeaderView* self) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_Initialize_IsBase(true);
        vqheaderview->initialize();
    } else {
        vqheaderview->initialize();
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnInitialize(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_Initialize_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_Initialize_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_InitializeSections(QHeaderView* self) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->initializeSections();
    } else {
        vqheaderview->initializeSections();
    }
}

// Base class handler implementation
void QHeaderView_QBaseInitializeSections(QHeaderView* self) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_InitializeSections_IsBase(true);
        vqheaderview->initializeSections();
    } else {
        vqheaderview->initializeSections();
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnInitializeSections(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_InitializeSections_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_InitializeSections_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_InitializeSections2(QHeaderView* self, int start, int end) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->initializeSections(static_cast<int>(start), static_cast<int>(end));
    } else {
        vqheaderview->initializeSections(static_cast<int>(start), static_cast<int>(end));
    }
}

// Base class handler implementation
void QHeaderView_QBaseInitializeSections2(QHeaderView* self, int start, int end) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_InitializeSections2_IsBase(true);
        vqheaderview->initializeSections(static_cast<int>(start), static_cast<int>(end));
    } else {
        vqheaderview->initializeSections(static_cast<int>(start), static_cast<int>(end));
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnInitializeSections2(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_InitializeSections2_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_InitializeSections2_Callback>(slot));
    }
}

// Derived class handler implementation
int QHeaderView_State(const QHeaderView* self) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        return static_cast<int>(vqheaderview->state());
    } else {
        return static_cast<int>(vqheaderview->state());
    }
}

// Base class handler implementation
int QHeaderView_QBaseState(const QHeaderView* self) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_State_IsBase(true);
        return static_cast<int>(vqheaderview->state());
    } else {
        return static_cast<int>(vqheaderview->state());
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnState(const QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_State_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_State_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_SetState(QHeaderView* self, int state) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setState(static_cast<VirtualQHeaderView::State>(state));
    } else {
        vqheaderview->setState(static_cast<VirtualQHeaderView::State>(state));
    }
}

// Base class handler implementation
void QHeaderView_QBaseSetState(QHeaderView* self, int state) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_SetState_IsBase(true);
        vqheaderview->setState(static_cast<VirtualQHeaderView::State>(state));
    } else {
        vqheaderview->setState(static_cast<VirtualQHeaderView::State>(state));
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSetState(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_SetState_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_SetState_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_ScheduleDelayedItemsLayout(QHeaderView* self) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->scheduleDelayedItemsLayout();
    } else {
        vqheaderview->scheduleDelayedItemsLayout();
    }
}

// Base class handler implementation
void QHeaderView_QBaseScheduleDelayedItemsLayout(QHeaderView* self) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_ScheduleDelayedItemsLayout_IsBase(true);
        vqheaderview->scheduleDelayedItemsLayout();
    } else {
        vqheaderview->scheduleDelayedItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnScheduleDelayedItemsLayout(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_ScheduleDelayedItemsLayout_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_ScheduleDelayedItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_ExecuteDelayedItemsLayout(QHeaderView* self) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->executeDelayedItemsLayout();
    } else {
        vqheaderview->executeDelayedItemsLayout();
    }
}

// Base class handler implementation
void QHeaderView_QBaseExecuteDelayedItemsLayout(QHeaderView* self) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_ExecuteDelayedItemsLayout_IsBase(true);
        vqheaderview->executeDelayedItemsLayout();
    } else {
        vqheaderview->executeDelayedItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnExecuteDelayedItemsLayout(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_ExecuteDelayedItemsLayout_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_ExecuteDelayedItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_SetDirtyRegion(QHeaderView* self, QRegion* region) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setDirtyRegion(*region);
    } else {
        vqheaderview->setDirtyRegion(*region);
    }
}

// Base class handler implementation
void QHeaderView_QBaseSetDirtyRegion(QHeaderView* self, QRegion* region) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_SetDirtyRegion_IsBase(true);
        vqheaderview->setDirtyRegion(*region);
    } else {
        vqheaderview->setDirtyRegion(*region);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSetDirtyRegion(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_SetDirtyRegion_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_SetDirtyRegion_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_ScrollDirtyRegion(QHeaderView* self, int dx, int dy) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqheaderview->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void QHeaderView_QBaseScrollDirtyRegion(QHeaderView* self, int dx, int dy) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_ScrollDirtyRegion_IsBase(true);
        vqheaderview->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqheaderview->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnScrollDirtyRegion(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_ScrollDirtyRegion_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_ScrollDirtyRegion_Callback>(slot));
    }
}

// Derived class handler implementation
QPoint* QHeaderView_DirtyRegionOffset(const QHeaderView* self) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        return new QPoint(vqheaderview->dirtyRegionOffset());
    }
    return {};
}

// Base class handler implementation
QPoint* QHeaderView_QBaseDirtyRegionOffset(const QHeaderView* self) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_DirtyRegionOffset_IsBase(true);
        return new QPoint(vqheaderview->dirtyRegionOffset());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnDirtyRegionOffset(const QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_DirtyRegionOffset_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_DirtyRegionOffset_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_StartAutoScroll(QHeaderView* self) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->startAutoScroll();
    } else {
        vqheaderview->startAutoScroll();
    }
}

// Base class handler implementation
void QHeaderView_QBaseStartAutoScroll(QHeaderView* self) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_StartAutoScroll_IsBase(true);
        vqheaderview->startAutoScroll();
    } else {
        vqheaderview->startAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnStartAutoScroll(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_StartAutoScroll_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_StartAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_StopAutoScroll(QHeaderView* self) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->stopAutoScroll();
    } else {
        vqheaderview->stopAutoScroll();
    }
}

// Base class handler implementation
void QHeaderView_QBaseStopAutoScroll(QHeaderView* self) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_StopAutoScroll_IsBase(true);
        vqheaderview->stopAutoScroll();
    } else {
        vqheaderview->stopAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnStopAutoScroll(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_StopAutoScroll_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_StopAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_DoAutoScroll(QHeaderView* self) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->doAutoScroll();
    } else {
        vqheaderview->doAutoScroll();
    }
}

// Base class handler implementation
void QHeaderView_QBaseDoAutoScroll(QHeaderView* self) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_DoAutoScroll_IsBase(true);
        vqheaderview->doAutoScroll();
    } else {
        vqheaderview->doAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnDoAutoScroll(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_DoAutoScroll_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_DoAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
int QHeaderView_DropIndicatorPosition(const QHeaderView* self) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        return static_cast<int>(vqheaderview->dropIndicatorPosition());
    } else {
        return static_cast<int>(vqheaderview->dropIndicatorPosition());
    }
}

// Base class handler implementation
int QHeaderView_QBaseDropIndicatorPosition(const QHeaderView* self) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_DropIndicatorPosition_IsBase(true);
        return static_cast<int>(vqheaderview->dropIndicatorPosition());
    } else {
        return static_cast<int>(vqheaderview->dropIndicatorPosition());
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnDropIndicatorPosition(const QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_DropIndicatorPosition_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_DropIndicatorPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_SetViewportMargins(QHeaderView* self, int left, int top, int right, int bottom) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        vqheaderview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Base class handler implementation
void QHeaderView_QBaseSetViewportMargins(QHeaderView* self, int left, int top, int right, int bottom) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_SetViewportMargins_IsBase(true);
        vqheaderview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        vqheaderview->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSetViewportMargins(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_SetViewportMargins_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_SetViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
QMargins* QHeaderView_ViewportMargins(const QHeaderView* self) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        return new QMargins(vqheaderview->viewportMargins());
    }
    return {};
}

// Base class handler implementation
QMargins* QHeaderView_QBaseViewportMargins(const QHeaderView* self) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_ViewportMargins_IsBase(true);
        return new QMargins(vqheaderview->viewportMargins());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnViewportMargins(const QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_ViewportMargins_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_ViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_DrawFrame(QHeaderView* self, QPainter* param1) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->drawFrame(param1);
    } else {
        vqheaderview->drawFrame(param1);
    }
}

// Base class handler implementation
void QHeaderView_QBaseDrawFrame(QHeaderView* self, QPainter* param1) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_DrawFrame_IsBase(true);
        vqheaderview->drawFrame(param1);
    } else {
        vqheaderview->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnDrawFrame(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_DrawFrame_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_UpdateMicroFocus(QHeaderView* self) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->updateMicroFocus();
    } else {
        vqheaderview->updateMicroFocus();
    }
}

// Base class handler implementation
void QHeaderView_QBaseUpdateMicroFocus(QHeaderView* self) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_UpdateMicroFocus_IsBase(true);
        vqheaderview->updateMicroFocus();
    } else {
        vqheaderview->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnUpdateMicroFocus(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_Create(QHeaderView* self) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->create();
    } else {
        vqheaderview->create();
    }
}

// Base class handler implementation
void QHeaderView_QBaseCreate(QHeaderView* self) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_Create_IsBase(true);
        vqheaderview->create();
    } else {
        vqheaderview->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnCreate(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_Create_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QHeaderView_Destroy(QHeaderView* self) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->destroy();
    } else {
        vqheaderview->destroy();
    }
}

// Base class handler implementation
void QHeaderView_QBaseDestroy(QHeaderView* self) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_Destroy_IsBase(true);
        vqheaderview->destroy();
    } else {
        vqheaderview->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnDestroy(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_Destroy_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHeaderView_FocusNextChild(QHeaderView* self) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        return vqheaderview->focusNextChild();
    } else {
        return vqheaderview->focusNextChild();
    }
}

// Base class handler implementation
bool QHeaderView_QBaseFocusNextChild(QHeaderView* self) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_FocusNextChild_IsBase(true);
        return vqheaderview->focusNextChild();
    } else {
        return vqheaderview->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnFocusNextChild(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_FocusNextChild_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHeaderView_FocusPreviousChild(QHeaderView* self) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        return vqheaderview->focusPreviousChild();
    } else {
        return vqheaderview->focusPreviousChild();
    }
}

// Base class handler implementation
bool QHeaderView_QBaseFocusPreviousChild(QHeaderView* self) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_FocusPreviousChild_IsBase(true);
        return vqheaderview->focusPreviousChild();
    } else {
        return vqheaderview->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnFocusPreviousChild(QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = dynamic_cast<VirtualQHeaderView*>(self)) {
        vqheaderview->setQHeaderView_FocusPreviousChild_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QHeaderView_Sender(const QHeaderView* self) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        return vqheaderview->sender();
    } else {
        return vqheaderview->sender();
    }
}

// Base class handler implementation
QObject* QHeaderView_QBaseSender(const QHeaderView* self) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_Sender_IsBase(true);
        return vqheaderview->sender();
    } else {
        return vqheaderview->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSender(const QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_Sender_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QHeaderView_SenderSignalIndex(const QHeaderView* self) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        return vqheaderview->senderSignalIndex();
    } else {
        return vqheaderview->senderSignalIndex();
    }
}

// Base class handler implementation
int QHeaderView_QBaseSenderSignalIndex(const QHeaderView* self) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_SenderSignalIndex_IsBase(true);
        return vqheaderview->senderSignalIndex();
    } else {
        return vqheaderview->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnSenderSignalIndex(const QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_SenderSignalIndex_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QHeaderView_Receivers(const QHeaderView* self, const char* signal) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        return vqheaderview->receivers(signal);
    } else {
        return vqheaderview->receivers(signal);
    }
}

// Base class handler implementation
int QHeaderView_QBaseReceivers(const QHeaderView* self, const char* signal) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_Receivers_IsBase(true);
        return vqheaderview->receivers(signal);
    } else {
        return vqheaderview->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnReceivers(const QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_Receivers_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QHeaderView_IsSignalConnected(const QHeaderView* self, QMetaMethod* signal) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        return vqheaderview->isSignalConnected(*signal);
    } else {
        return vqheaderview->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QHeaderView_QBaseIsSignalConnected(const QHeaderView* self, QMetaMethod* signal) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_IsSignalConnected_IsBase(true);
        return vqheaderview->isSignalConnected(*signal);
    } else {
        return vqheaderview->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QHeaderView_OnIsSignalConnected(const QHeaderView* self, intptr_t slot) {
    if (auto* vqheaderview = const_cast<VirtualQHeaderView*>(dynamic_cast<const VirtualQHeaderView*>(self))) {
        vqheaderview->setQHeaderView_IsSignalConnected_Callback(reinterpret_cast<VirtualQHeaderView::QHeaderView_IsSignalConnected_Callback>(slot));
    }
}

void QHeaderView_Delete(QHeaderView* self) {
    delete self;
}
