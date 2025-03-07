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
#include <QKeyEvent>
#include <QKeySequence>
#include <QLayout>
#include <QList>
#include <QLocale>
#include <QMargins>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
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
#include <QShowEvent>
#include <QSize>
#include <QSizePolicy>
#include <QSplitter>
#include <QSplitterHandle>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyle>
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <QWindow>
#include <qsplitter.h>
#include "libqsplitter.hpp"
#include "libqsplitter.hxx"

QSplitter* QSplitter_new(QWidget* parent) {
    return new VirtualQSplitter(parent);
}

QSplitter* QSplitter_new2() {
    return new VirtualQSplitter();
}

QSplitter* QSplitter_new3(int param1) {
    return new VirtualQSplitter(static_cast<Qt::Orientation>(param1));
}

QSplitter* QSplitter_new4(int param1, QWidget* parent) {
    return new VirtualQSplitter(static_cast<Qt::Orientation>(param1), parent);
}

QMetaObject* QSplitter_MetaObject(const QSplitter* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSplitter_Metacast(QSplitter* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSplitter_Metacall(QSplitter* self, int param1, int param2, void** param3) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QSplitter_OnMetacall(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_Metacall_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QSplitter_QBaseMetacall(QSplitter* self, int param1, int param2, void** param3) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_Metacall_IsBase(true);
        return vqsplitter->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QSplitter_Tr(const char* s) {
    QString _ret = QSplitter::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QSplitter_AddWidget(QSplitter* self, QWidget* widget) {
    self->addWidget(widget);
}

void QSplitter_InsertWidget(QSplitter* self, int index, QWidget* widget) {
    self->insertWidget(static_cast<int>(index), widget);
}

QWidget* QSplitter_ReplaceWidget(QSplitter* self, int index, QWidget* widget) {
    return self->replaceWidget(static_cast<int>(index), widget);
}

void QSplitter_SetOrientation(QSplitter* self, int orientation) {
    self->setOrientation(static_cast<Qt::Orientation>(orientation));
}

int QSplitter_Orientation(const QSplitter* self) {
    return static_cast<int>(self->orientation());
}

void QSplitter_SetChildrenCollapsible(QSplitter* self, bool childrenCollapsible) {
    self->setChildrenCollapsible(childrenCollapsible);
}

bool QSplitter_ChildrenCollapsible(const QSplitter* self) {
    return self->childrenCollapsible();
}

void QSplitter_SetCollapsible(QSplitter* self, int index, bool param2) {
    self->setCollapsible(static_cast<int>(index), param2);
}

bool QSplitter_IsCollapsible(const QSplitter* self, int index) {
    return self->isCollapsible(static_cast<int>(index));
}

void QSplitter_SetOpaqueResize(QSplitter* self) {
    self->setOpaqueResize();
}

bool QSplitter_OpaqueResize(const QSplitter* self) {
    return self->opaqueResize();
}

void QSplitter_Refresh(QSplitter* self) {
    self->refresh();
}

libqt_list /* of int */ QSplitter_Sizes(const QSplitter* self) {
    QList<int> _ret = self->sizes();
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

void QSplitter_SetSizes(QSplitter* self, libqt_list /* of int */ list) {
    QList<int> list_QList;
    list_QList.reserve(list.len);
    int* list_arr = static_cast<int*>(list.data.ints);
    for (size_t i = 0; i < list.len; ++i) {
        list_QList.push_back(static_cast<int>(list_arr[i]));
    }
    self->setSizes(list_QList);
}

libqt_string QSplitter_SaveState(const QSplitter* self) {
    QByteArray _qb = self->saveState();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _qb.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QSplitter_RestoreState(QSplitter* self, libqt_string state) {
    QByteArray state_QByteArray(state.data, state.len);
    return self->restoreState(state_QByteArray);
}

int QSplitter_HandleWidth(const QSplitter* self) {
    return self->handleWidth();
}

void QSplitter_SetHandleWidth(QSplitter* self, int handleWidth) {
    self->setHandleWidth(static_cast<int>(handleWidth));
}

int QSplitter_IndexOf(const QSplitter* self, QWidget* w) {
    return self->indexOf(w);
}

QWidget* QSplitter_Widget(const QSplitter* self, int index) {
    return self->widget(static_cast<int>(index));
}

int QSplitter_Count(const QSplitter* self) {
    return self->count();
}

void QSplitter_GetRange(const QSplitter* self, int index, int* param2, int* param3) {
    self->getRange(static_cast<int>(index), static_cast<int*>(param2), static_cast<int*>(param3));
}

QSplitterHandle* QSplitter_Handle(const QSplitter* self, int index) {
    return self->handle(static_cast<int>(index));
}

void QSplitter_SetStretchFactor(QSplitter* self, int index, int stretch) {
    self->setStretchFactor(static_cast<int>(index), static_cast<int>(stretch));
}

void QSplitter_SplitterMoved(QSplitter* self, int pos, int index) {
    self->splitterMoved(static_cast<int>(pos), static_cast<int>(index));
}

void QSplitter_Connect_SplitterMoved(QSplitter* self, intptr_t slot) {
    void (*slotFunc)(QSplitter*, int, int) = reinterpret_cast<void (*)(QSplitter*, int, int)>(slot);
    QSplitter::connect(self, &QSplitter::splitterMoved, [self, slotFunc](int pos, int index) {
        int sigval1 = pos;
        int sigval2 = index;
        slotFunc(self, sigval1, sigval2);
    });
}

libqt_string QSplitter_Tr2(const char* s, const char* c) {
    QString _ret = QSplitter::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QSplitter_Tr3(const char* s, const char* c, int n) {
    QString _ret = QSplitter::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QSplitter_SetOpaqueResize1(QSplitter* self, bool opaque) {
    self->setOpaqueResize(opaque);
}

// Derived class handler implementation
QSize* QSplitter_SizeHint(const QSplitter* self) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        return new QSize(vqsplitter->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QSplitter_QBaseSizeHint(const QSplitter* self) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        vqsplitter->setQSplitter_SizeHint_IsBase(true);
        return new QSize(vqsplitter->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnSizeHint(const QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        vqsplitter->setQSplitter_SizeHint_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QSplitter_MinimumSizeHint(const QSplitter* self) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        return new QSize(vqsplitter->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QSplitter_QBaseMinimumSizeHint(const QSplitter* self) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        vqsplitter->setQSplitter_MinimumSizeHint_IsBase(true);
        return new QSize(vqsplitter->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnMinimumSizeHint(const QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        vqsplitter->setQSplitter_MinimumSizeHint_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSplitterHandle* QSplitter_CreateHandle(QSplitter* self) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        return vqsplitter->createHandle();
    } else {
        return vqsplitter->createHandle();
    }
}

// Base class handler implementation
QSplitterHandle* QSplitter_QBaseCreateHandle(QSplitter* self) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_CreateHandle_IsBase(true);
        return vqsplitter->createHandle();
    } else {
        return vqsplitter->createHandle();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnCreateHandle(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_CreateHandle_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_CreateHandle_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_ChildEvent(QSplitter* self, QChildEvent* param1) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->childEvent(param1);
    } else {
        vqsplitter->childEvent(param1);
    }
}

// Base class handler implementation
void QSplitter_QBaseChildEvent(QSplitter* self, QChildEvent* param1) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_ChildEvent_IsBase(true);
        vqsplitter->childEvent(param1);
    } else {
        vqsplitter->childEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnChildEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_ChildEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSplitter_Event(QSplitter* self, QEvent* param1) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        return vqsplitter->event(param1);
    } else {
        return vqsplitter->event(param1);
    }
}

// Base class handler implementation
bool QSplitter_QBaseEvent(QSplitter* self, QEvent* param1) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_Event_IsBase(true);
        return vqsplitter->event(param1);
    } else {
        return vqsplitter->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_Event_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_ResizeEvent(QSplitter* self, QResizeEvent* param1) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->resizeEvent(param1);
    } else {
        vqsplitter->resizeEvent(param1);
    }
}

// Base class handler implementation
void QSplitter_QBaseResizeEvent(QSplitter* self, QResizeEvent* param1) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_ResizeEvent_IsBase(true);
        vqsplitter->resizeEvent(param1);
    } else {
        vqsplitter->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnResizeEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_ResizeEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_ChangeEvent(QSplitter* self, QEvent* param1) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->changeEvent(param1);
    } else {
        vqsplitter->changeEvent(param1);
    }
}

// Base class handler implementation
void QSplitter_QBaseChangeEvent(QSplitter* self, QEvent* param1) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_ChangeEvent_IsBase(true);
        vqsplitter->changeEvent(param1);
    } else {
        vqsplitter->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnChangeEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_ChangeEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_PaintEvent(QSplitter* self, QPaintEvent* param1) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->paintEvent(param1);
    } else {
        vqsplitter->paintEvent(param1);
    }
}

// Base class handler implementation
void QSplitter_QBasePaintEvent(QSplitter* self, QPaintEvent* param1) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_PaintEvent_IsBase(true);
        vqsplitter->paintEvent(param1);
    } else {
        vqsplitter->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnPaintEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_PaintEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_InitStyleOption(const QSplitter* self, QStyleOptionFrame* option) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        vqsplitter->initStyleOption(option);
    } else {
        vqsplitter->initStyleOption(option);
    }
}

// Base class handler implementation
void QSplitter_QBaseInitStyleOption(const QSplitter* self, QStyleOptionFrame* option) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        vqsplitter->setQSplitter_InitStyleOption_IsBase(true);
        vqsplitter->initStyleOption(option);
    } else {
        vqsplitter->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnInitStyleOption(const QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        vqsplitter->setQSplitter_InitStyleOption_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QSplitter_DevType(const QSplitter* self) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        return vqsplitter->devType();
    } else {
        return vqsplitter->devType();
    }
}

// Base class handler implementation
int QSplitter_QBaseDevType(const QSplitter* self) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        vqsplitter->setQSplitter_DevType_IsBase(true);
        return vqsplitter->devType();
    } else {
        return vqsplitter->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnDevType(const QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        vqsplitter->setQSplitter_DevType_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_SetVisible(QSplitter* self, bool visible) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setVisible(visible);
    } else {
        vqsplitter->setVisible(visible);
    }
}

// Base class handler implementation
void QSplitter_QBaseSetVisible(QSplitter* self, bool visible) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_SetVisible_IsBase(true);
        vqsplitter->setVisible(visible);
    } else {
        vqsplitter->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnSetVisible(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_SetVisible_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QSplitter_HeightForWidth(const QSplitter* self, int param1) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        return vqsplitter->heightForWidth(static_cast<int>(param1));
    } else {
        return vqsplitter->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QSplitter_QBaseHeightForWidth(const QSplitter* self, int param1) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        vqsplitter->setQSplitter_HeightForWidth_IsBase(true);
        return vqsplitter->heightForWidth(static_cast<int>(param1));
    } else {
        return vqsplitter->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnHeightForWidth(const QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        vqsplitter->setQSplitter_HeightForWidth_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSplitter_HasHeightForWidth(const QSplitter* self) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        return vqsplitter->hasHeightForWidth();
    } else {
        return vqsplitter->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QSplitter_QBaseHasHeightForWidth(const QSplitter* self) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        vqsplitter->setQSplitter_HasHeightForWidth_IsBase(true);
        return vqsplitter->hasHeightForWidth();
    } else {
        return vqsplitter->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnHasHeightForWidth(const QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        vqsplitter->setQSplitter_HasHeightForWidth_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QSplitter_PaintEngine(const QSplitter* self) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        return vqsplitter->paintEngine();
    } else {
        return vqsplitter->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QSplitter_QBasePaintEngine(const QSplitter* self) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        vqsplitter->setQSplitter_PaintEngine_IsBase(true);
        return vqsplitter->paintEngine();
    } else {
        return vqsplitter->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnPaintEngine(const QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        vqsplitter->setQSplitter_PaintEngine_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_MousePressEvent(QSplitter* self, QMouseEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->mousePressEvent(event);
    } else {
        vqsplitter->mousePressEvent(event);
    }
}

// Base class handler implementation
void QSplitter_QBaseMousePressEvent(QSplitter* self, QMouseEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_MousePressEvent_IsBase(true);
        vqsplitter->mousePressEvent(event);
    } else {
        vqsplitter->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnMousePressEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_MousePressEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_MouseReleaseEvent(QSplitter* self, QMouseEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->mouseReleaseEvent(event);
    } else {
        vqsplitter->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QSplitter_QBaseMouseReleaseEvent(QSplitter* self, QMouseEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_MouseReleaseEvent_IsBase(true);
        vqsplitter->mouseReleaseEvent(event);
    } else {
        vqsplitter->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnMouseReleaseEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_MouseDoubleClickEvent(QSplitter* self, QMouseEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->mouseDoubleClickEvent(event);
    } else {
        vqsplitter->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QSplitter_QBaseMouseDoubleClickEvent(QSplitter* self, QMouseEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_MouseDoubleClickEvent_IsBase(true);
        vqsplitter->mouseDoubleClickEvent(event);
    } else {
        vqsplitter->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnMouseDoubleClickEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_MouseMoveEvent(QSplitter* self, QMouseEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->mouseMoveEvent(event);
    } else {
        vqsplitter->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QSplitter_QBaseMouseMoveEvent(QSplitter* self, QMouseEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_MouseMoveEvent_IsBase(true);
        vqsplitter->mouseMoveEvent(event);
    } else {
        vqsplitter->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnMouseMoveEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_MouseMoveEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_WheelEvent(QSplitter* self, QWheelEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->wheelEvent(event);
    } else {
        vqsplitter->wheelEvent(event);
    }
}

// Base class handler implementation
void QSplitter_QBaseWheelEvent(QSplitter* self, QWheelEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_WheelEvent_IsBase(true);
        vqsplitter->wheelEvent(event);
    } else {
        vqsplitter->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnWheelEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_WheelEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_KeyPressEvent(QSplitter* self, QKeyEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->keyPressEvent(event);
    } else {
        vqsplitter->keyPressEvent(event);
    }
}

// Base class handler implementation
void QSplitter_QBaseKeyPressEvent(QSplitter* self, QKeyEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_KeyPressEvent_IsBase(true);
        vqsplitter->keyPressEvent(event);
    } else {
        vqsplitter->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnKeyPressEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_KeyPressEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_KeyReleaseEvent(QSplitter* self, QKeyEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->keyReleaseEvent(event);
    } else {
        vqsplitter->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QSplitter_QBaseKeyReleaseEvent(QSplitter* self, QKeyEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_KeyReleaseEvent_IsBase(true);
        vqsplitter->keyReleaseEvent(event);
    } else {
        vqsplitter->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnKeyReleaseEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_FocusInEvent(QSplitter* self, QFocusEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->focusInEvent(event);
    } else {
        vqsplitter->focusInEvent(event);
    }
}

// Base class handler implementation
void QSplitter_QBaseFocusInEvent(QSplitter* self, QFocusEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_FocusInEvent_IsBase(true);
        vqsplitter->focusInEvent(event);
    } else {
        vqsplitter->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnFocusInEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_FocusInEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_FocusOutEvent(QSplitter* self, QFocusEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->focusOutEvent(event);
    } else {
        vqsplitter->focusOutEvent(event);
    }
}

// Base class handler implementation
void QSplitter_QBaseFocusOutEvent(QSplitter* self, QFocusEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_FocusOutEvent_IsBase(true);
        vqsplitter->focusOutEvent(event);
    } else {
        vqsplitter->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnFocusOutEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_FocusOutEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_EnterEvent(QSplitter* self, QEnterEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->enterEvent(event);
    } else {
        vqsplitter->enterEvent(event);
    }
}

// Base class handler implementation
void QSplitter_QBaseEnterEvent(QSplitter* self, QEnterEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_EnterEvent_IsBase(true);
        vqsplitter->enterEvent(event);
    } else {
        vqsplitter->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnEnterEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_EnterEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_LeaveEvent(QSplitter* self, QEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->leaveEvent(event);
    } else {
        vqsplitter->leaveEvent(event);
    }
}

// Base class handler implementation
void QSplitter_QBaseLeaveEvent(QSplitter* self, QEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_LeaveEvent_IsBase(true);
        vqsplitter->leaveEvent(event);
    } else {
        vqsplitter->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnLeaveEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_LeaveEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_MoveEvent(QSplitter* self, QMoveEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->moveEvent(event);
    } else {
        vqsplitter->moveEvent(event);
    }
}

// Base class handler implementation
void QSplitter_QBaseMoveEvent(QSplitter* self, QMoveEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_MoveEvent_IsBase(true);
        vqsplitter->moveEvent(event);
    } else {
        vqsplitter->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnMoveEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_MoveEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_CloseEvent(QSplitter* self, QCloseEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->closeEvent(event);
    } else {
        vqsplitter->closeEvent(event);
    }
}

// Base class handler implementation
void QSplitter_QBaseCloseEvent(QSplitter* self, QCloseEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_CloseEvent_IsBase(true);
        vqsplitter->closeEvent(event);
    } else {
        vqsplitter->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnCloseEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_CloseEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_ContextMenuEvent(QSplitter* self, QContextMenuEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->contextMenuEvent(event);
    } else {
        vqsplitter->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QSplitter_QBaseContextMenuEvent(QSplitter* self, QContextMenuEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_ContextMenuEvent_IsBase(true);
        vqsplitter->contextMenuEvent(event);
    } else {
        vqsplitter->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnContextMenuEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_ContextMenuEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_TabletEvent(QSplitter* self, QTabletEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->tabletEvent(event);
    } else {
        vqsplitter->tabletEvent(event);
    }
}

// Base class handler implementation
void QSplitter_QBaseTabletEvent(QSplitter* self, QTabletEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_TabletEvent_IsBase(true);
        vqsplitter->tabletEvent(event);
    } else {
        vqsplitter->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnTabletEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_TabletEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_ActionEvent(QSplitter* self, QActionEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->actionEvent(event);
    } else {
        vqsplitter->actionEvent(event);
    }
}

// Base class handler implementation
void QSplitter_QBaseActionEvent(QSplitter* self, QActionEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_ActionEvent_IsBase(true);
        vqsplitter->actionEvent(event);
    } else {
        vqsplitter->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnActionEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_ActionEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_DragEnterEvent(QSplitter* self, QDragEnterEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->dragEnterEvent(event);
    } else {
        vqsplitter->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QSplitter_QBaseDragEnterEvent(QSplitter* self, QDragEnterEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_DragEnterEvent_IsBase(true);
        vqsplitter->dragEnterEvent(event);
    } else {
        vqsplitter->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnDragEnterEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_DragEnterEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_DragMoveEvent(QSplitter* self, QDragMoveEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->dragMoveEvent(event);
    } else {
        vqsplitter->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QSplitter_QBaseDragMoveEvent(QSplitter* self, QDragMoveEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_DragMoveEvent_IsBase(true);
        vqsplitter->dragMoveEvent(event);
    } else {
        vqsplitter->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnDragMoveEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_DragMoveEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_DragLeaveEvent(QSplitter* self, QDragLeaveEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->dragLeaveEvent(event);
    } else {
        vqsplitter->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QSplitter_QBaseDragLeaveEvent(QSplitter* self, QDragLeaveEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_DragLeaveEvent_IsBase(true);
        vqsplitter->dragLeaveEvent(event);
    } else {
        vqsplitter->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnDragLeaveEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_DragLeaveEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_DropEvent(QSplitter* self, QDropEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->dropEvent(event);
    } else {
        vqsplitter->dropEvent(event);
    }
}

// Base class handler implementation
void QSplitter_QBaseDropEvent(QSplitter* self, QDropEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_DropEvent_IsBase(true);
        vqsplitter->dropEvent(event);
    } else {
        vqsplitter->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnDropEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_DropEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_ShowEvent(QSplitter* self, QShowEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->showEvent(event);
    } else {
        vqsplitter->showEvent(event);
    }
}

// Base class handler implementation
void QSplitter_QBaseShowEvent(QSplitter* self, QShowEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_ShowEvent_IsBase(true);
        vqsplitter->showEvent(event);
    } else {
        vqsplitter->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnShowEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_ShowEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_HideEvent(QSplitter* self, QHideEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->hideEvent(event);
    } else {
        vqsplitter->hideEvent(event);
    }
}

// Base class handler implementation
void QSplitter_QBaseHideEvent(QSplitter* self, QHideEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_HideEvent_IsBase(true);
        vqsplitter->hideEvent(event);
    } else {
        vqsplitter->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnHideEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_HideEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSplitter_NativeEvent(QSplitter* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        return vqsplitter->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqsplitter->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QSplitter_QBaseNativeEvent(QSplitter* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_NativeEvent_IsBase(true);
        return vqsplitter->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqsplitter->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnNativeEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_NativeEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QSplitter_Metric(const QSplitter* self, int param1) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        return vqsplitter->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqsplitter->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QSplitter_QBaseMetric(const QSplitter* self, int param1) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        vqsplitter->setQSplitter_Metric_IsBase(true);
        return vqsplitter->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqsplitter->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnMetric(const QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        vqsplitter->setQSplitter_Metric_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_InitPainter(const QSplitter* self, QPainter* painter) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        vqsplitter->initPainter(painter);
    } else {
        vqsplitter->initPainter(painter);
    }
}

// Base class handler implementation
void QSplitter_QBaseInitPainter(const QSplitter* self, QPainter* painter) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        vqsplitter->setQSplitter_InitPainter_IsBase(true);
        vqsplitter->initPainter(painter);
    } else {
        vqsplitter->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnInitPainter(const QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        vqsplitter->setQSplitter_InitPainter_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QSplitter_Redirected(const QSplitter* self, QPoint* offset) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        return vqsplitter->redirected(offset);
    } else {
        return vqsplitter->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QSplitter_QBaseRedirected(const QSplitter* self, QPoint* offset) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        vqsplitter->setQSplitter_Redirected_IsBase(true);
        return vqsplitter->redirected(offset);
    } else {
        return vqsplitter->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnRedirected(const QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        vqsplitter->setQSplitter_Redirected_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QSplitter_SharedPainter(const QSplitter* self) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        return vqsplitter->sharedPainter();
    } else {
        return vqsplitter->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QSplitter_QBaseSharedPainter(const QSplitter* self) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        vqsplitter->setQSplitter_SharedPainter_IsBase(true);
        return vqsplitter->sharedPainter();
    } else {
        return vqsplitter->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnSharedPainter(const QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        vqsplitter->setQSplitter_SharedPainter_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_InputMethodEvent(QSplitter* self, QInputMethodEvent* param1) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->inputMethodEvent(param1);
    } else {
        vqsplitter->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QSplitter_QBaseInputMethodEvent(QSplitter* self, QInputMethodEvent* param1) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_InputMethodEvent_IsBase(true);
        vqsplitter->inputMethodEvent(param1);
    } else {
        vqsplitter->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnInputMethodEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_InputMethodEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QSplitter_InputMethodQuery(const QSplitter* self, int param1) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        return new QVariant(vqsplitter->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QSplitter_QBaseInputMethodQuery(const QSplitter* self, int param1) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        vqsplitter->setQSplitter_InputMethodQuery_IsBase(true);
        return new QVariant(vqsplitter->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnInputMethodQuery(const QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        vqsplitter->setQSplitter_InputMethodQuery_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSplitter_FocusNextPrevChild(QSplitter* self, bool next) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        return vqsplitter->focusNextPrevChild(next);
    } else {
        return vqsplitter->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QSplitter_QBaseFocusNextPrevChild(QSplitter* self, bool next) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_FocusNextPrevChild_IsBase(true);
        return vqsplitter->focusNextPrevChild(next);
    } else {
        return vqsplitter->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnFocusNextPrevChild(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSplitter_EventFilter(QSplitter* self, QObject* watched, QEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        return vqsplitter->eventFilter(watched, event);
    } else {
        return vqsplitter->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QSplitter_QBaseEventFilter(QSplitter* self, QObject* watched, QEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_EventFilter_IsBase(true);
        return vqsplitter->eventFilter(watched, event);
    } else {
        return vqsplitter->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnEventFilter(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_EventFilter_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_TimerEvent(QSplitter* self, QTimerEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->timerEvent(event);
    } else {
        vqsplitter->timerEvent(event);
    }
}

// Base class handler implementation
void QSplitter_QBaseTimerEvent(QSplitter* self, QTimerEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_TimerEvent_IsBase(true);
        vqsplitter->timerEvent(event);
    } else {
        vqsplitter->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnTimerEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_TimerEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_CustomEvent(QSplitter* self, QEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->customEvent(event);
    } else {
        vqsplitter->customEvent(event);
    }
}

// Base class handler implementation
void QSplitter_QBaseCustomEvent(QSplitter* self, QEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_CustomEvent_IsBase(true);
        vqsplitter->customEvent(event);
    } else {
        vqsplitter->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnCustomEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_CustomEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_ConnectNotify(QSplitter* self, QMetaMethod* signal) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->connectNotify(*signal);
    } else {
        vqsplitter->connectNotify(*signal);
    }
}

// Base class handler implementation
void QSplitter_QBaseConnectNotify(QSplitter* self, QMetaMethod* signal) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_ConnectNotify_IsBase(true);
        vqsplitter->connectNotify(*signal);
    } else {
        vqsplitter->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnConnectNotify(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_ConnectNotify_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_DisconnectNotify(QSplitter* self, QMetaMethod* signal) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->disconnectNotify(*signal);
    } else {
        vqsplitter->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QSplitter_QBaseDisconnectNotify(QSplitter* self, QMetaMethod* signal) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_DisconnectNotify_IsBase(true);
        vqsplitter->disconnectNotify(*signal);
    } else {
        vqsplitter->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnDisconnectNotify(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_DisconnectNotify_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_MoveSplitter(QSplitter* self, int pos, int index) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->moveSplitter(static_cast<int>(pos), static_cast<int>(index));
    } else {
        vqsplitter->moveSplitter(static_cast<int>(pos), static_cast<int>(index));
    }
}

// Base class handler implementation
void QSplitter_QBaseMoveSplitter(QSplitter* self, int pos, int index) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_MoveSplitter_IsBase(true);
        vqsplitter->moveSplitter(static_cast<int>(pos), static_cast<int>(index));
    } else {
        vqsplitter->moveSplitter(static_cast<int>(pos), static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnMoveSplitter(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_MoveSplitter_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_MoveSplitter_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_SetRubberBand(QSplitter* self, int position) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setRubberBand(static_cast<int>(position));
    } else {
        vqsplitter->setRubberBand(static_cast<int>(position));
    }
}

// Base class handler implementation
void QSplitter_QBaseSetRubberBand(QSplitter* self, int position) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_SetRubberBand_IsBase(true);
        vqsplitter->setRubberBand(static_cast<int>(position));
    } else {
        vqsplitter->setRubberBand(static_cast<int>(position));
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnSetRubberBand(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_SetRubberBand_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_SetRubberBand_Callback>(slot));
    }
}

// Derived class handler implementation
int QSplitter_ClosestLegalPosition(QSplitter* self, int param1, int param2) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        return vqsplitter->closestLegalPosition(static_cast<int>(param1), static_cast<int>(param2));
    } else {
        return vqsplitter->closestLegalPosition(static_cast<int>(param1), static_cast<int>(param2));
    }
}

// Base class handler implementation
int QSplitter_QBaseClosestLegalPosition(QSplitter* self, int param1, int param2) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_ClosestLegalPosition_IsBase(true);
        return vqsplitter->closestLegalPosition(static_cast<int>(param1), static_cast<int>(param2));
    } else {
        return vqsplitter->closestLegalPosition(static_cast<int>(param1), static_cast<int>(param2));
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnClosestLegalPosition(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_ClosestLegalPosition_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_ClosestLegalPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_DrawFrame(QSplitter* self, QPainter* param1) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->drawFrame(param1);
    } else {
        vqsplitter->drawFrame(param1);
    }
}

// Base class handler implementation
void QSplitter_QBaseDrawFrame(QSplitter* self, QPainter* param1) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_DrawFrame_IsBase(true);
        vqsplitter->drawFrame(param1);
    } else {
        vqsplitter->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnDrawFrame(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_DrawFrame_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_UpdateMicroFocus(QSplitter* self) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->updateMicroFocus();
    } else {
        vqsplitter->updateMicroFocus();
    }
}

// Base class handler implementation
void QSplitter_QBaseUpdateMicroFocus(QSplitter* self) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_UpdateMicroFocus_IsBase(true);
        vqsplitter->updateMicroFocus();
    } else {
        vqsplitter->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnUpdateMicroFocus(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_Create(QSplitter* self) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->create();
    } else {
        vqsplitter->create();
    }
}

// Base class handler implementation
void QSplitter_QBaseCreate(QSplitter* self) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_Create_IsBase(true);
        vqsplitter->create();
    } else {
        vqsplitter->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnCreate(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_Create_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_Destroy(QSplitter* self) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->destroy();
    } else {
        vqsplitter->destroy();
    }
}

// Base class handler implementation
void QSplitter_QBaseDestroy(QSplitter* self) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_Destroy_IsBase(true);
        vqsplitter->destroy();
    } else {
        vqsplitter->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnDestroy(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_Destroy_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSplitter_FocusNextChild(QSplitter* self) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        return vqsplitter->focusNextChild();
    } else {
        return vqsplitter->focusNextChild();
    }
}

// Base class handler implementation
bool QSplitter_QBaseFocusNextChild(QSplitter* self) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_FocusNextChild_IsBase(true);
        return vqsplitter->focusNextChild();
    } else {
        return vqsplitter->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnFocusNextChild(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_FocusNextChild_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSplitter_FocusPreviousChild(QSplitter* self) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        return vqsplitter->focusPreviousChild();
    } else {
        return vqsplitter->focusPreviousChild();
    }
}

// Base class handler implementation
bool QSplitter_QBaseFocusPreviousChild(QSplitter* self) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_FocusPreviousChild_IsBase(true);
        return vqsplitter->focusPreviousChild();
    } else {
        return vqsplitter->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnFocusPreviousChild(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->setQSplitter_FocusPreviousChild_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QSplitter_Sender(const QSplitter* self) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        return vqsplitter->sender();
    } else {
        return vqsplitter->sender();
    }
}

// Base class handler implementation
QObject* QSplitter_QBaseSender(const QSplitter* self) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        vqsplitter->setQSplitter_Sender_IsBase(true);
        return vqsplitter->sender();
    } else {
        return vqsplitter->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnSender(const QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        vqsplitter->setQSplitter_Sender_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QSplitter_SenderSignalIndex(const QSplitter* self) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        return vqsplitter->senderSignalIndex();
    } else {
        return vqsplitter->senderSignalIndex();
    }
}

// Base class handler implementation
int QSplitter_QBaseSenderSignalIndex(const QSplitter* self) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        vqsplitter->setQSplitter_SenderSignalIndex_IsBase(true);
        return vqsplitter->senderSignalIndex();
    } else {
        return vqsplitter->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnSenderSignalIndex(const QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        vqsplitter->setQSplitter_SenderSignalIndex_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QSplitter_Receivers(const QSplitter* self, const char* signal) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        return vqsplitter->receivers(signal);
    } else {
        return vqsplitter->receivers(signal);
    }
}

// Base class handler implementation
int QSplitter_QBaseReceivers(const QSplitter* self, const char* signal) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        vqsplitter->setQSplitter_Receivers_IsBase(true);
        return vqsplitter->receivers(signal);
    } else {
        return vqsplitter->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnReceivers(const QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        vqsplitter->setQSplitter_Receivers_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSplitter_IsSignalConnected(const QSplitter* self, QMetaMethod* signal) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        return vqsplitter->isSignalConnected(*signal);
    } else {
        return vqsplitter->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QSplitter_QBaseIsSignalConnected(const QSplitter* self, QMetaMethod* signal) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        vqsplitter->setQSplitter_IsSignalConnected_IsBase(true);
        return vqsplitter->isSignalConnected(*signal);
    } else {
        return vqsplitter->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnIsSignalConnected(const QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        vqsplitter->setQSplitter_IsSignalConnected_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_IsSignalConnected_Callback>(slot));
    }
}

void QSplitter_Delete(QSplitter* self) {
    delete self;
}

QSplitterHandle* QSplitterHandle_new(int o, QSplitter* parent) {
    return new VirtualQSplitterHandle(static_cast<Qt::Orientation>(o), parent);
}

QMetaObject* QSplitterHandle_MetaObject(const QSplitterHandle* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSplitterHandle_Metacast(QSplitterHandle* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSplitterHandle_Metacall(QSplitterHandle* self, int param1, int param2, void** param3) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QSplitterHandle_OnMetacall(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_Metacall_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QSplitterHandle_QBaseMetacall(QSplitterHandle* self, int param1, int param2, void** param3) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_Metacall_IsBase(true);
        return vqsplitterhandle->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QSplitterHandle_Tr(const char* s) {
    QString _ret = QSplitterHandle::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QSplitterHandle_SetOrientation(QSplitterHandle* self, int o) {
    self->setOrientation(static_cast<Qt::Orientation>(o));
}

int QSplitterHandle_Orientation(const QSplitterHandle* self) {
    return static_cast<int>(self->orientation());
}

bool QSplitterHandle_OpaqueResize(const QSplitterHandle* self) {
    return self->opaqueResize();
}

QSplitter* QSplitterHandle_Splitter(const QSplitterHandle* self) {
    return self->splitter();
}

libqt_string QSplitterHandle_Tr2(const char* s, const char* c) {
    QString _ret = QSplitterHandle::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QSplitterHandle_Tr3(const char* s, const char* c, int n) {
    QString _ret = QSplitterHandle::tr(s, c, static_cast<int>(n));
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
QSize* QSplitterHandle_SizeHint(const QSplitterHandle* self) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self))) {
        return new QSize(vqsplitterhandle->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QSplitterHandle_QBaseSizeHint(const QSplitterHandle* self) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self))) {
        vqsplitterhandle->setQSplitterHandle_SizeHint_IsBase(true);
        return new QSize(vqsplitterhandle->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnSizeHint(const QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self))) {
        vqsplitterhandle->setQSplitterHandle_SizeHint_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_PaintEvent(QSplitterHandle* self, QPaintEvent* param1) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->paintEvent(param1);
    } else {
        vqsplitterhandle->paintEvent(param1);
    }
}

// Base class handler implementation
void QSplitterHandle_QBasePaintEvent(QSplitterHandle* self, QPaintEvent* param1) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_PaintEvent_IsBase(true);
        vqsplitterhandle->paintEvent(param1);
    } else {
        vqsplitterhandle->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnPaintEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_PaintEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_MouseMoveEvent(QSplitterHandle* self, QMouseEvent* param1) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->mouseMoveEvent(param1);
    } else {
        vqsplitterhandle->mouseMoveEvent(param1);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseMouseMoveEvent(QSplitterHandle* self, QMouseEvent* param1) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_MouseMoveEvent_IsBase(true);
        vqsplitterhandle->mouseMoveEvent(param1);
    } else {
        vqsplitterhandle->mouseMoveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnMouseMoveEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_MouseMoveEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_MousePressEvent(QSplitterHandle* self, QMouseEvent* param1) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->mousePressEvent(param1);
    } else {
        vqsplitterhandle->mousePressEvent(param1);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseMousePressEvent(QSplitterHandle* self, QMouseEvent* param1) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_MousePressEvent_IsBase(true);
        vqsplitterhandle->mousePressEvent(param1);
    } else {
        vqsplitterhandle->mousePressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnMousePressEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_MousePressEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_MouseReleaseEvent(QSplitterHandle* self, QMouseEvent* param1) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->mouseReleaseEvent(param1);
    } else {
        vqsplitterhandle->mouseReleaseEvent(param1);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseMouseReleaseEvent(QSplitterHandle* self, QMouseEvent* param1) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_MouseReleaseEvent_IsBase(true);
        vqsplitterhandle->mouseReleaseEvent(param1);
    } else {
        vqsplitterhandle->mouseReleaseEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnMouseReleaseEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_ResizeEvent(QSplitterHandle* self, QResizeEvent* param1) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->resizeEvent(param1);
    } else {
        vqsplitterhandle->resizeEvent(param1);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseResizeEvent(QSplitterHandle* self, QResizeEvent* param1) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_ResizeEvent_IsBase(true);
        vqsplitterhandle->resizeEvent(param1);
    } else {
        vqsplitterhandle->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnResizeEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_ResizeEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSplitterHandle_Event(QSplitterHandle* self, QEvent* param1) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        return vqsplitterhandle->event(param1);
    } else {
        return vqsplitterhandle->event(param1);
    }
}

// Base class handler implementation
bool QSplitterHandle_QBaseEvent(QSplitterHandle* self, QEvent* param1) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_Event_IsBase(true);
        return vqsplitterhandle->event(param1);
    } else {
        return vqsplitterhandle->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_Event_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_Event_Callback>(slot));
    }
}

// Derived class handler implementation
int QSplitterHandle_DevType(const QSplitterHandle* self) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self))) {
        return vqsplitterhandle->devType();
    } else {
        return vqsplitterhandle->devType();
    }
}

// Base class handler implementation
int QSplitterHandle_QBaseDevType(const QSplitterHandle* self) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self))) {
        vqsplitterhandle->setQSplitterHandle_DevType_IsBase(true);
        return vqsplitterhandle->devType();
    } else {
        return vqsplitterhandle->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnDevType(const QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self))) {
        vqsplitterhandle->setQSplitterHandle_DevType_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_SetVisible(QSplitterHandle* self, bool visible) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setVisible(visible);
    } else {
        vqsplitterhandle->setVisible(visible);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseSetVisible(QSplitterHandle* self, bool visible) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_SetVisible_IsBase(true);
        vqsplitterhandle->setVisible(visible);
    } else {
        vqsplitterhandle->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnSetVisible(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_SetVisible_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QSplitterHandle_MinimumSizeHint(const QSplitterHandle* self) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self))) {
        return new QSize(vqsplitterhandle->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QSplitterHandle_QBaseMinimumSizeHint(const QSplitterHandle* self) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self))) {
        vqsplitterhandle->setQSplitterHandle_MinimumSizeHint_IsBase(true);
        return new QSize(vqsplitterhandle->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnMinimumSizeHint(const QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self))) {
        vqsplitterhandle->setQSplitterHandle_MinimumSizeHint_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QSplitterHandle_HeightForWidth(const QSplitterHandle* self, int param1) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self))) {
        return vqsplitterhandle->heightForWidth(static_cast<int>(param1));
    } else {
        return vqsplitterhandle->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QSplitterHandle_QBaseHeightForWidth(const QSplitterHandle* self, int param1) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self))) {
        vqsplitterhandle->setQSplitterHandle_HeightForWidth_IsBase(true);
        return vqsplitterhandle->heightForWidth(static_cast<int>(param1));
    } else {
        return vqsplitterhandle->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnHeightForWidth(const QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self))) {
        vqsplitterhandle->setQSplitterHandle_HeightForWidth_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSplitterHandle_HasHeightForWidth(const QSplitterHandle* self) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self))) {
        return vqsplitterhandle->hasHeightForWidth();
    } else {
        return vqsplitterhandle->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QSplitterHandle_QBaseHasHeightForWidth(const QSplitterHandle* self) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self))) {
        vqsplitterhandle->setQSplitterHandle_HasHeightForWidth_IsBase(true);
        return vqsplitterhandle->hasHeightForWidth();
    } else {
        return vqsplitterhandle->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnHasHeightForWidth(const QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self))) {
        vqsplitterhandle->setQSplitterHandle_HasHeightForWidth_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QSplitterHandle_PaintEngine(const QSplitterHandle* self) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self))) {
        return vqsplitterhandle->paintEngine();
    } else {
        return vqsplitterhandle->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QSplitterHandle_QBasePaintEngine(const QSplitterHandle* self) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self))) {
        vqsplitterhandle->setQSplitterHandle_PaintEngine_IsBase(true);
        return vqsplitterhandle->paintEngine();
    } else {
        return vqsplitterhandle->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnPaintEngine(const QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self))) {
        vqsplitterhandle->setQSplitterHandle_PaintEngine_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_MouseDoubleClickEvent(QSplitterHandle* self, QMouseEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->mouseDoubleClickEvent(event);
    } else {
        vqsplitterhandle->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseMouseDoubleClickEvent(QSplitterHandle* self, QMouseEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_MouseDoubleClickEvent_IsBase(true);
        vqsplitterhandle->mouseDoubleClickEvent(event);
    } else {
        vqsplitterhandle->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnMouseDoubleClickEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_WheelEvent(QSplitterHandle* self, QWheelEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->wheelEvent(event);
    } else {
        vqsplitterhandle->wheelEvent(event);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseWheelEvent(QSplitterHandle* self, QWheelEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_WheelEvent_IsBase(true);
        vqsplitterhandle->wheelEvent(event);
    } else {
        vqsplitterhandle->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnWheelEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_WheelEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_KeyPressEvent(QSplitterHandle* self, QKeyEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->keyPressEvent(event);
    } else {
        vqsplitterhandle->keyPressEvent(event);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseKeyPressEvent(QSplitterHandle* self, QKeyEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_KeyPressEvent_IsBase(true);
        vqsplitterhandle->keyPressEvent(event);
    } else {
        vqsplitterhandle->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnKeyPressEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_KeyPressEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_KeyReleaseEvent(QSplitterHandle* self, QKeyEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->keyReleaseEvent(event);
    } else {
        vqsplitterhandle->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseKeyReleaseEvent(QSplitterHandle* self, QKeyEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_KeyReleaseEvent_IsBase(true);
        vqsplitterhandle->keyReleaseEvent(event);
    } else {
        vqsplitterhandle->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnKeyReleaseEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_FocusInEvent(QSplitterHandle* self, QFocusEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->focusInEvent(event);
    } else {
        vqsplitterhandle->focusInEvent(event);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseFocusInEvent(QSplitterHandle* self, QFocusEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_FocusInEvent_IsBase(true);
        vqsplitterhandle->focusInEvent(event);
    } else {
        vqsplitterhandle->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnFocusInEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_FocusInEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_FocusOutEvent(QSplitterHandle* self, QFocusEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->focusOutEvent(event);
    } else {
        vqsplitterhandle->focusOutEvent(event);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseFocusOutEvent(QSplitterHandle* self, QFocusEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_FocusOutEvent_IsBase(true);
        vqsplitterhandle->focusOutEvent(event);
    } else {
        vqsplitterhandle->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnFocusOutEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_FocusOutEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_EnterEvent(QSplitterHandle* self, QEnterEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->enterEvent(event);
    } else {
        vqsplitterhandle->enterEvent(event);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseEnterEvent(QSplitterHandle* self, QEnterEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_EnterEvent_IsBase(true);
        vqsplitterhandle->enterEvent(event);
    } else {
        vqsplitterhandle->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnEnterEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_EnterEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_LeaveEvent(QSplitterHandle* self, QEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->leaveEvent(event);
    } else {
        vqsplitterhandle->leaveEvent(event);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseLeaveEvent(QSplitterHandle* self, QEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_LeaveEvent_IsBase(true);
        vqsplitterhandle->leaveEvent(event);
    } else {
        vqsplitterhandle->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnLeaveEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_LeaveEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_MoveEvent(QSplitterHandle* self, QMoveEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->moveEvent(event);
    } else {
        vqsplitterhandle->moveEvent(event);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseMoveEvent(QSplitterHandle* self, QMoveEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_MoveEvent_IsBase(true);
        vqsplitterhandle->moveEvent(event);
    } else {
        vqsplitterhandle->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnMoveEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_MoveEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_CloseEvent(QSplitterHandle* self, QCloseEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->closeEvent(event);
    } else {
        vqsplitterhandle->closeEvent(event);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseCloseEvent(QSplitterHandle* self, QCloseEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_CloseEvent_IsBase(true);
        vqsplitterhandle->closeEvent(event);
    } else {
        vqsplitterhandle->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnCloseEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_CloseEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_ContextMenuEvent(QSplitterHandle* self, QContextMenuEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->contextMenuEvent(event);
    } else {
        vqsplitterhandle->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseContextMenuEvent(QSplitterHandle* self, QContextMenuEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_ContextMenuEvent_IsBase(true);
        vqsplitterhandle->contextMenuEvent(event);
    } else {
        vqsplitterhandle->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnContextMenuEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_ContextMenuEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_TabletEvent(QSplitterHandle* self, QTabletEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->tabletEvent(event);
    } else {
        vqsplitterhandle->tabletEvent(event);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseTabletEvent(QSplitterHandle* self, QTabletEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_TabletEvent_IsBase(true);
        vqsplitterhandle->tabletEvent(event);
    } else {
        vqsplitterhandle->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnTabletEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_TabletEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_ActionEvent(QSplitterHandle* self, QActionEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->actionEvent(event);
    } else {
        vqsplitterhandle->actionEvent(event);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseActionEvent(QSplitterHandle* self, QActionEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_ActionEvent_IsBase(true);
        vqsplitterhandle->actionEvent(event);
    } else {
        vqsplitterhandle->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnActionEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_ActionEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_DragEnterEvent(QSplitterHandle* self, QDragEnterEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->dragEnterEvent(event);
    } else {
        vqsplitterhandle->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseDragEnterEvent(QSplitterHandle* self, QDragEnterEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_DragEnterEvent_IsBase(true);
        vqsplitterhandle->dragEnterEvent(event);
    } else {
        vqsplitterhandle->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnDragEnterEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_DragEnterEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_DragMoveEvent(QSplitterHandle* self, QDragMoveEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->dragMoveEvent(event);
    } else {
        vqsplitterhandle->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseDragMoveEvent(QSplitterHandle* self, QDragMoveEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_DragMoveEvent_IsBase(true);
        vqsplitterhandle->dragMoveEvent(event);
    } else {
        vqsplitterhandle->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnDragMoveEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_DragMoveEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_DragLeaveEvent(QSplitterHandle* self, QDragLeaveEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->dragLeaveEvent(event);
    } else {
        vqsplitterhandle->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseDragLeaveEvent(QSplitterHandle* self, QDragLeaveEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_DragLeaveEvent_IsBase(true);
        vqsplitterhandle->dragLeaveEvent(event);
    } else {
        vqsplitterhandle->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnDragLeaveEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_DragLeaveEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_DropEvent(QSplitterHandle* self, QDropEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->dropEvent(event);
    } else {
        vqsplitterhandle->dropEvent(event);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseDropEvent(QSplitterHandle* self, QDropEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_DropEvent_IsBase(true);
        vqsplitterhandle->dropEvent(event);
    } else {
        vqsplitterhandle->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnDropEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_DropEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_ShowEvent(QSplitterHandle* self, QShowEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->showEvent(event);
    } else {
        vqsplitterhandle->showEvent(event);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseShowEvent(QSplitterHandle* self, QShowEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_ShowEvent_IsBase(true);
        vqsplitterhandle->showEvent(event);
    } else {
        vqsplitterhandle->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnShowEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_ShowEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_HideEvent(QSplitterHandle* self, QHideEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->hideEvent(event);
    } else {
        vqsplitterhandle->hideEvent(event);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseHideEvent(QSplitterHandle* self, QHideEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_HideEvent_IsBase(true);
        vqsplitterhandle->hideEvent(event);
    } else {
        vqsplitterhandle->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnHideEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_HideEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSplitterHandle_NativeEvent(QSplitterHandle* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        return vqsplitterhandle->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqsplitterhandle->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QSplitterHandle_QBaseNativeEvent(QSplitterHandle* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_NativeEvent_IsBase(true);
        return vqsplitterhandle->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqsplitterhandle->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnNativeEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_NativeEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_ChangeEvent(QSplitterHandle* self, QEvent* param1) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->changeEvent(param1);
    } else {
        vqsplitterhandle->changeEvent(param1);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseChangeEvent(QSplitterHandle* self, QEvent* param1) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_ChangeEvent_IsBase(true);
        vqsplitterhandle->changeEvent(param1);
    } else {
        vqsplitterhandle->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnChangeEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_ChangeEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QSplitterHandle_Metric(const QSplitterHandle* self, int param1) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self))) {
        return vqsplitterhandle->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqsplitterhandle->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QSplitterHandle_QBaseMetric(const QSplitterHandle* self, int param1) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self))) {
        vqsplitterhandle->setQSplitterHandle_Metric_IsBase(true);
        return vqsplitterhandle->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqsplitterhandle->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnMetric(const QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self))) {
        vqsplitterhandle->setQSplitterHandle_Metric_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_InitPainter(const QSplitterHandle* self, QPainter* painter) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self))) {
        vqsplitterhandle->initPainter(painter);
    } else {
        vqsplitterhandle->initPainter(painter);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseInitPainter(const QSplitterHandle* self, QPainter* painter) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self))) {
        vqsplitterhandle->setQSplitterHandle_InitPainter_IsBase(true);
        vqsplitterhandle->initPainter(painter);
    } else {
        vqsplitterhandle->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnInitPainter(const QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self))) {
        vqsplitterhandle->setQSplitterHandle_InitPainter_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QSplitterHandle_Redirected(const QSplitterHandle* self, QPoint* offset) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self))) {
        return vqsplitterhandle->redirected(offset);
    } else {
        return vqsplitterhandle->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QSplitterHandle_QBaseRedirected(const QSplitterHandle* self, QPoint* offset) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self))) {
        vqsplitterhandle->setQSplitterHandle_Redirected_IsBase(true);
        return vqsplitterhandle->redirected(offset);
    } else {
        return vqsplitterhandle->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnRedirected(const QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self))) {
        vqsplitterhandle->setQSplitterHandle_Redirected_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QSplitterHandle_SharedPainter(const QSplitterHandle* self) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self))) {
        return vqsplitterhandle->sharedPainter();
    } else {
        return vqsplitterhandle->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QSplitterHandle_QBaseSharedPainter(const QSplitterHandle* self) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self))) {
        vqsplitterhandle->setQSplitterHandle_SharedPainter_IsBase(true);
        return vqsplitterhandle->sharedPainter();
    } else {
        return vqsplitterhandle->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnSharedPainter(const QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self))) {
        vqsplitterhandle->setQSplitterHandle_SharedPainter_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_InputMethodEvent(QSplitterHandle* self, QInputMethodEvent* param1) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->inputMethodEvent(param1);
    } else {
        vqsplitterhandle->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseInputMethodEvent(QSplitterHandle* self, QInputMethodEvent* param1) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_InputMethodEvent_IsBase(true);
        vqsplitterhandle->inputMethodEvent(param1);
    } else {
        vqsplitterhandle->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnInputMethodEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_InputMethodEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QSplitterHandle_InputMethodQuery(const QSplitterHandle* self, int param1) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self))) {
        return new QVariant(vqsplitterhandle->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QSplitterHandle_QBaseInputMethodQuery(const QSplitterHandle* self, int param1) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self))) {
        vqsplitterhandle->setQSplitterHandle_InputMethodQuery_IsBase(true);
        return new QVariant(vqsplitterhandle->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnInputMethodQuery(const QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self))) {
        vqsplitterhandle->setQSplitterHandle_InputMethodQuery_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSplitterHandle_FocusNextPrevChild(QSplitterHandle* self, bool next) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        return vqsplitterhandle->focusNextPrevChild(next);
    } else {
        return vqsplitterhandle->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QSplitterHandle_QBaseFocusNextPrevChild(QSplitterHandle* self, bool next) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_FocusNextPrevChild_IsBase(true);
        return vqsplitterhandle->focusNextPrevChild(next);
    } else {
        return vqsplitterhandle->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnFocusNextPrevChild(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSplitterHandle_EventFilter(QSplitterHandle* self, QObject* watched, QEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        return vqsplitterhandle->eventFilter(watched, event);
    } else {
        return vqsplitterhandle->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QSplitterHandle_QBaseEventFilter(QSplitterHandle* self, QObject* watched, QEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_EventFilter_IsBase(true);
        return vqsplitterhandle->eventFilter(watched, event);
    } else {
        return vqsplitterhandle->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnEventFilter(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_EventFilter_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_TimerEvent(QSplitterHandle* self, QTimerEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->timerEvent(event);
    } else {
        vqsplitterhandle->timerEvent(event);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseTimerEvent(QSplitterHandle* self, QTimerEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_TimerEvent_IsBase(true);
        vqsplitterhandle->timerEvent(event);
    } else {
        vqsplitterhandle->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnTimerEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_TimerEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_ChildEvent(QSplitterHandle* self, QChildEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->childEvent(event);
    } else {
        vqsplitterhandle->childEvent(event);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseChildEvent(QSplitterHandle* self, QChildEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_ChildEvent_IsBase(true);
        vqsplitterhandle->childEvent(event);
    } else {
        vqsplitterhandle->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnChildEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_ChildEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_CustomEvent(QSplitterHandle* self, QEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->customEvent(event);
    } else {
        vqsplitterhandle->customEvent(event);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseCustomEvent(QSplitterHandle* self, QEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_CustomEvent_IsBase(true);
        vqsplitterhandle->customEvent(event);
    } else {
        vqsplitterhandle->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnCustomEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_CustomEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_ConnectNotify(QSplitterHandle* self, QMetaMethod* signal) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->connectNotify(*signal);
    } else {
        vqsplitterhandle->connectNotify(*signal);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseConnectNotify(QSplitterHandle* self, QMetaMethod* signal) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_ConnectNotify_IsBase(true);
        vqsplitterhandle->connectNotify(*signal);
    } else {
        vqsplitterhandle->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnConnectNotify(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_ConnectNotify_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_DisconnectNotify(QSplitterHandle* self, QMetaMethod* signal) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->disconnectNotify(*signal);
    } else {
        vqsplitterhandle->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseDisconnectNotify(QSplitterHandle* self, QMetaMethod* signal) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_DisconnectNotify_IsBase(true);
        vqsplitterhandle->disconnectNotify(*signal);
    } else {
        vqsplitterhandle->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnDisconnectNotify(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_DisconnectNotify_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_MoveSplitter(QSplitterHandle* self, int p) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->moveSplitter(static_cast<int>(p));
    } else {
        vqsplitterhandle->moveSplitter(static_cast<int>(p));
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseMoveSplitter(QSplitterHandle* self, int p) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_MoveSplitter_IsBase(true);
        vqsplitterhandle->moveSplitter(static_cast<int>(p));
    } else {
        vqsplitterhandle->moveSplitter(static_cast<int>(p));
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnMoveSplitter(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_MoveSplitter_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_MoveSplitter_Callback>(slot));
    }
}

// Derived class handler implementation
int QSplitterHandle_ClosestLegalPosition(QSplitterHandle* self, int p) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        return vqsplitterhandle->closestLegalPosition(static_cast<int>(p));
    } else {
        return vqsplitterhandle->closestLegalPosition(static_cast<int>(p));
    }
}

// Base class handler implementation
int QSplitterHandle_QBaseClosestLegalPosition(QSplitterHandle* self, int p) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_ClosestLegalPosition_IsBase(true);
        return vqsplitterhandle->closestLegalPosition(static_cast<int>(p));
    } else {
        return vqsplitterhandle->closestLegalPosition(static_cast<int>(p));
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnClosestLegalPosition(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_ClosestLegalPosition_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_ClosestLegalPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_UpdateMicroFocus(QSplitterHandle* self) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->updateMicroFocus();
    } else {
        vqsplitterhandle->updateMicroFocus();
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseUpdateMicroFocus(QSplitterHandle* self) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_UpdateMicroFocus_IsBase(true);
        vqsplitterhandle->updateMicroFocus();
    } else {
        vqsplitterhandle->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnUpdateMicroFocus(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_Create(QSplitterHandle* self) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->create();
    } else {
        vqsplitterhandle->create();
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseCreate(QSplitterHandle* self) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_Create_IsBase(true);
        vqsplitterhandle->create();
    } else {
        vqsplitterhandle->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnCreate(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_Create_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_Destroy(QSplitterHandle* self) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->destroy();
    } else {
        vqsplitterhandle->destroy();
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseDestroy(QSplitterHandle* self) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_Destroy_IsBase(true);
        vqsplitterhandle->destroy();
    } else {
        vqsplitterhandle->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnDestroy(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_Destroy_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSplitterHandle_FocusNextChild(QSplitterHandle* self) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        return vqsplitterhandle->focusNextChild();
    } else {
        return vqsplitterhandle->focusNextChild();
    }
}

// Base class handler implementation
bool QSplitterHandle_QBaseFocusNextChild(QSplitterHandle* self) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_FocusNextChild_IsBase(true);
        return vqsplitterhandle->focusNextChild();
    } else {
        return vqsplitterhandle->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnFocusNextChild(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_FocusNextChild_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSplitterHandle_FocusPreviousChild(QSplitterHandle* self) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        return vqsplitterhandle->focusPreviousChild();
    } else {
        return vqsplitterhandle->focusPreviousChild();
    }
}

// Base class handler implementation
bool QSplitterHandle_QBaseFocusPreviousChild(QSplitterHandle* self) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_FocusPreviousChild_IsBase(true);
        return vqsplitterhandle->focusPreviousChild();
    } else {
        return vqsplitterhandle->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnFocusPreviousChild(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->setQSplitterHandle_FocusPreviousChild_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QSplitterHandle_Sender(const QSplitterHandle* self) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self))) {
        return vqsplitterhandle->sender();
    } else {
        return vqsplitterhandle->sender();
    }
}

// Base class handler implementation
QObject* QSplitterHandle_QBaseSender(const QSplitterHandle* self) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self))) {
        vqsplitterhandle->setQSplitterHandle_Sender_IsBase(true);
        return vqsplitterhandle->sender();
    } else {
        return vqsplitterhandle->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnSender(const QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self))) {
        vqsplitterhandle->setQSplitterHandle_Sender_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QSplitterHandle_SenderSignalIndex(const QSplitterHandle* self) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self))) {
        return vqsplitterhandle->senderSignalIndex();
    } else {
        return vqsplitterhandle->senderSignalIndex();
    }
}

// Base class handler implementation
int QSplitterHandle_QBaseSenderSignalIndex(const QSplitterHandle* self) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self))) {
        vqsplitterhandle->setQSplitterHandle_SenderSignalIndex_IsBase(true);
        return vqsplitterhandle->senderSignalIndex();
    } else {
        return vqsplitterhandle->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnSenderSignalIndex(const QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self))) {
        vqsplitterhandle->setQSplitterHandle_SenderSignalIndex_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QSplitterHandle_Receivers(const QSplitterHandle* self, const char* signal) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self))) {
        return vqsplitterhandle->receivers(signal);
    } else {
        return vqsplitterhandle->receivers(signal);
    }
}

// Base class handler implementation
int QSplitterHandle_QBaseReceivers(const QSplitterHandle* self, const char* signal) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self))) {
        vqsplitterhandle->setQSplitterHandle_Receivers_IsBase(true);
        return vqsplitterhandle->receivers(signal);
    } else {
        return vqsplitterhandle->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnReceivers(const QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self))) {
        vqsplitterhandle->setQSplitterHandle_Receivers_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSplitterHandle_IsSignalConnected(const QSplitterHandle* self, QMetaMethod* signal) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self))) {
        return vqsplitterhandle->isSignalConnected(*signal);
    } else {
        return vqsplitterhandle->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QSplitterHandle_QBaseIsSignalConnected(const QSplitterHandle* self, QMetaMethod* signal) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self))) {
        vqsplitterhandle->setQSplitterHandle_IsSignalConnected_IsBase(true);
        return vqsplitterhandle->isSignalConnected(*signal);
    } else {
        return vqsplitterhandle->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnIsSignalConnected(const QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self))) {
        vqsplitterhandle->setQSplitterHandle_IsSignalConnected_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_IsSignalConnected_Callback>(slot));
    }
}

void QSplitterHandle_Delete(QSplitterHandle* self) {
    delete self;
}
