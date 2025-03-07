#include <QAbstractSlider>
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
#include <QScrollBar>
#include <QShowEvent>
#include <QSize>
#include <QSizePolicy>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyle>
#include <QStyleOptionSlider>
#include <QTabletEvent>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <QWindow>
#include <qscrollbar.h>
#include "libqscrollbar.hpp"
#include "libqscrollbar.hxx"

QScrollBar* QScrollBar_new(QWidget* parent) {
    return new VirtualQScrollBar(parent);
}

QScrollBar* QScrollBar_new2() {
    return new VirtualQScrollBar();
}

QScrollBar* QScrollBar_new3(int param1) {
    return new VirtualQScrollBar(static_cast<Qt::Orientation>(param1));
}

QScrollBar* QScrollBar_new4(int param1, QWidget* parent) {
    return new VirtualQScrollBar(static_cast<Qt::Orientation>(param1), parent);
}

QMetaObject* QScrollBar_MetaObject(const QScrollBar* self) {
    return (QMetaObject*)self->metaObject();
}

void* QScrollBar_Metacast(QScrollBar* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QScrollBar_Metacall(QScrollBar* self, int param1, int param2, void** param3) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QScrollBar_OnMetacall(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_Metacall_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QScrollBar_QBaseMetacall(QScrollBar* self, int param1, int param2, void** param3) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_Metacall_IsBase(true);
        return vqscrollbar->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QScrollBar_Tr(const char* s) {
    QString _ret = QScrollBar::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QScrollBar_Tr2(const char* s, const char* c) {
    QString _ret = QScrollBar::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QScrollBar_Tr3(const char* s, const char* c, int n) {
    QString _ret = QScrollBar::tr(s, c, static_cast<int>(n));
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
QSize* QScrollBar_SizeHint(const QScrollBar* self) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        return new QSize(vqscrollbar->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QScrollBar_QBaseSizeHint(const QScrollBar* self) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        vqscrollbar->setQScrollBar_SizeHint_IsBase(true);
        return new QSize(vqscrollbar->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnSizeHint(const QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        vqscrollbar->setQScrollBar_SizeHint_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
bool QScrollBar_Event(QScrollBar* self, QEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        return vqscrollbar->event(event);
    } else {
        return vqscrollbar->event(event);
    }
}

// Base class handler implementation
bool QScrollBar_QBaseEvent(QScrollBar* self, QEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_Event_IsBase(true);
        return vqscrollbar->event(event);
    } else {
        return vqscrollbar->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_Event_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_WheelEvent(QScrollBar* self, QWheelEvent* param1) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->wheelEvent(param1);
    } else {
        vqscrollbar->wheelEvent(param1);
    }
}

// Base class handler implementation
void QScrollBar_QBaseWheelEvent(QScrollBar* self, QWheelEvent* param1) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_WheelEvent_IsBase(true);
        vqscrollbar->wheelEvent(param1);
    } else {
        vqscrollbar->wheelEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnWheelEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_WheelEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_PaintEvent(QScrollBar* self, QPaintEvent* param1) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->paintEvent(param1);
    } else {
        vqscrollbar->paintEvent(param1);
    }
}

// Base class handler implementation
void QScrollBar_QBasePaintEvent(QScrollBar* self, QPaintEvent* param1) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_PaintEvent_IsBase(true);
        vqscrollbar->paintEvent(param1);
    } else {
        vqscrollbar->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnPaintEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_PaintEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_MousePressEvent(QScrollBar* self, QMouseEvent* param1) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->mousePressEvent(param1);
    } else {
        vqscrollbar->mousePressEvent(param1);
    }
}

// Base class handler implementation
void QScrollBar_QBaseMousePressEvent(QScrollBar* self, QMouseEvent* param1) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_MousePressEvent_IsBase(true);
        vqscrollbar->mousePressEvent(param1);
    } else {
        vqscrollbar->mousePressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnMousePressEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_MousePressEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_MouseReleaseEvent(QScrollBar* self, QMouseEvent* param1) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->mouseReleaseEvent(param1);
    } else {
        vqscrollbar->mouseReleaseEvent(param1);
    }
}

// Base class handler implementation
void QScrollBar_QBaseMouseReleaseEvent(QScrollBar* self, QMouseEvent* param1) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_MouseReleaseEvent_IsBase(true);
        vqscrollbar->mouseReleaseEvent(param1);
    } else {
        vqscrollbar->mouseReleaseEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnMouseReleaseEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_MouseMoveEvent(QScrollBar* self, QMouseEvent* param1) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->mouseMoveEvent(param1);
    } else {
        vqscrollbar->mouseMoveEvent(param1);
    }
}

// Base class handler implementation
void QScrollBar_QBaseMouseMoveEvent(QScrollBar* self, QMouseEvent* param1) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_MouseMoveEvent_IsBase(true);
        vqscrollbar->mouseMoveEvent(param1);
    } else {
        vqscrollbar->mouseMoveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnMouseMoveEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_MouseMoveEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_HideEvent(QScrollBar* self, QHideEvent* param1) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->hideEvent(param1);
    } else {
        vqscrollbar->hideEvent(param1);
    }
}

// Base class handler implementation
void QScrollBar_QBaseHideEvent(QScrollBar* self, QHideEvent* param1) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_HideEvent_IsBase(true);
        vqscrollbar->hideEvent(param1);
    } else {
        vqscrollbar->hideEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnHideEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_HideEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_SliderChange(QScrollBar* self, int change) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->sliderChange(static_cast<VirtualQScrollBar::SliderChange>(change));
    } else {
        vqscrollbar->sliderChange(static_cast<VirtualQScrollBar::SliderChange>(change));
    }
}

// Base class handler implementation
void QScrollBar_QBaseSliderChange(QScrollBar* self, int change) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_SliderChange_IsBase(true);
        vqscrollbar->sliderChange(static_cast<VirtualQScrollBar::SliderChange>(change));
    } else {
        vqscrollbar->sliderChange(static_cast<VirtualQScrollBar::SliderChange>(change));
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnSliderChange(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_SliderChange_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_SliderChange_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_ContextMenuEvent(QScrollBar* self, QContextMenuEvent* param1) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->contextMenuEvent(param1);
    } else {
        vqscrollbar->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void QScrollBar_QBaseContextMenuEvent(QScrollBar* self, QContextMenuEvent* param1) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_ContextMenuEvent_IsBase(true);
        vqscrollbar->contextMenuEvent(param1);
    } else {
        vqscrollbar->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnContextMenuEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_ContextMenuEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_InitStyleOption(const QScrollBar* self, QStyleOptionSlider* option) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        vqscrollbar->initStyleOption(option);
    } else {
        vqscrollbar->initStyleOption(option);
    }
}

// Base class handler implementation
void QScrollBar_QBaseInitStyleOption(const QScrollBar* self, QStyleOptionSlider* option) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        vqscrollbar->setQScrollBar_InitStyleOption_IsBase(true);
        vqscrollbar->initStyleOption(option);
    } else {
        vqscrollbar->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnInitStyleOption(const QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        vqscrollbar->setQScrollBar_InitStyleOption_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_KeyPressEvent(QScrollBar* self, QKeyEvent* ev) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->keyPressEvent(ev);
    } else {
        vqscrollbar->keyPressEvent(ev);
    }
}

// Base class handler implementation
void QScrollBar_QBaseKeyPressEvent(QScrollBar* self, QKeyEvent* ev) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_KeyPressEvent_IsBase(true);
        vqscrollbar->keyPressEvent(ev);
    } else {
        vqscrollbar->keyPressEvent(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnKeyPressEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_KeyPressEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_TimerEvent(QScrollBar* self, QTimerEvent* param1) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->timerEvent(param1);
    } else {
        vqscrollbar->timerEvent(param1);
    }
}

// Base class handler implementation
void QScrollBar_QBaseTimerEvent(QScrollBar* self, QTimerEvent* param1) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_TimerEvent_IsBase(true);
        vqscrollbar->timerEvent(param1);
    } else {
        vqscrollbar->timerEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnTimerEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_TimerEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_ChangeEvent(QScrollBar* self, QEvent* e) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->changeEvent(e);
    } else {
        vqscrollbar->changeEvent(e);
    }
}

// Base class handler implementation
void QScrollBar_QBaseChangeEvent(QScrollBar* self, QEvent* e) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_ChangeEvent_IsBase(true);
        vqscrollbar->changeEvent(e);
    } else {
        vqscrollbar->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnChangeEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_ChangeEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QScrollBar_DevType(const QScrollBar* self) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        return vqscrollbar->devType();
    } else {
        return vqscrollbar->devType();
    }
}

// Base class handler implementation
int QScrollBar_QBaseDevType(const QScrollBar* self) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        vqscrollbar->setQScrollBar_DevType_IsBase(true);
        return vqscrollbar->devType();
    } else {
        return vqscrollbar->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnDevType(const QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        vqscrollbar->setQScrollBar_DevType_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_SetVisible(QScrollBar* self, bool visible) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setVisible(visible);
    } else {
        vqscrollbar->setVisible(visible);
    }
}

// Base class handler implementation
void QScrollBar_QBaseSetVisible(QScrollBar* self, bool visible) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_SetVisible_IsBase(true);
        vqscrollbar->setVisible(visible);
    } else {
        vqscrollbar->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnSetVisible(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_SetVisible_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QScrollBar_MinimumSizeHint(const QScrollBar* self) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        return new QSize(vqscrollbar->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QScrollBar_QBaseMinimumSizeHint(const QScrollBar* self) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        vqscrollbar->setQScrollBar_MinimumSizeHint_IsBase(true);
        return new QSize(vqscrollbar->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnMinimumSizeHint(const QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        vqscrollbar->setQScrollBar_MinimumSizeHint_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QScrollBar_HeightForWidth(const QScrollBar* self, int param1) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        return vqscrollbar->heightForWidth(static_cast<int>(param1));
    } else {
        return vqscrollbar->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QScrollBar_QBaseHeightForWidth(const QScrollBar* self, int param1) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        vqscrollbar->setQScrollBar_HeightForWidth_IsBase(true);
        return vqscrollbar->heightForWidth(static_cast<int>(param1));
    } else {
        return vqscrollbar->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnHeightForWidth(const QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        vqscrollbar->setQScrollBar_HeightForWidth_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QScrollBar_HasHeightForWidth(const QScrollBar* self) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        return vqscrollbar->hasHeightForWidth();
    } else {
        return vqscrollbar->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QScrollBar_QBaseHasHeightForWidth(const QScrollBar* self) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        vqscrollbar->setQScrollBar_HasHeightForWidth_IsBase(true);
        return vqscrollbar->hasHeightForWidth();
    } else {
        return vqscrollbar->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnHasHeightForWidth(const QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        vqscrollbar->setQScrollBar_HasHeightForWidth_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QScrollBar_PaintEngine(const QScrollBar* self) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        return vqscrollbar->paintEngine();
    } else {
        return vqscrollbar->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QScrollBar_QBasePaintEngine(const QScrollBar* self) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        vqscrollbar->setQScrollBar_PaintEngine_IsBase(true);
        return vqscrollbar->paintEngine();
    } else {
        return vqscrollbar->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnPaintEngine(const QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        vqscrollbar->setQScrollBar_PaintEngine_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_MouseDoubleClickEvent(QScrollBar* self, QMouseEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->mouseDoubleClickEvent(event);
    } else {
        vqscrollbar->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QScrollBar_QBaseMouseDoubleClickEvent(QScrollBar* self, QMouseEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_MouseDoubleClickEvent_IsBase(true);
        vqscrollbar->mouseDoubleClickEvent(event);
    } else {
        vqscrollbar->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnMouseDoubleClickEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_KeyReleaseEvent(QScrollBar* self, QKeyEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->keyReleaseEvent(event);
    } else {
        vqscrollbar->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QScrollBar_QBaseKeyReleaseEvent(QScrollBar* self, QKeyEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_KeyReleaseEvent_IsBase(true);
        vqscrollbar->keyReleaseEvent(event);
    } else {
        vqscrollbar->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnKeyReleaseEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_FocusInEvent(QScrollBar* self, QFocusEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->focusInEvent(event);
    } else {
        vqscrollbar->focusInEvent(event);
    }
}

// Base class handler implementation
void QScrollBar_QBaseFocusInEvent(QScrollBar* self, QFocusEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_FocusInEvent_IsBase(true);
        vqscrollbar->focusInEvent(event);
    } else {
        vqscrollbar->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnFocusInEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_FocusInEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_FocusOutEvent(QScrollBar* self, QFocusEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->focusOutEvent(event);
    } else {
        vqscrollbar->focusOutEvent(event);
    }
}

// Base class handler implementation
void QScrollBar_QBaseFocusOutEvent(QScrollBar* self, QFocusEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_FocusOutEvent_IsBase(true);
        vqscrollbar->focusOutEvent(event);
    } else {
        vqscrollbar->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnFocusOutEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_FocusOutEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_EnterEvent(QScrollBar* self, QEnterEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->enterEvent(event);
    } else {
        vqscrollbar->enterEvent(event);
    }
}

// Base class handler implementation
void QScrollBar_QBaseEnterEvent(QScrollBar* self, QEnterEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_EnterEvent_IsBase(true);
        vqscrollbar->enterEvent(event);
    } else {
        vqscrollbar->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnEnterEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_EnterEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_LeaveEvent(QScrollBar* self, QEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->leaveEvent(event);
    } else {
        vqscrollbar->leaveEvent(event);
    }
}

// Base class handler implementation
void QScrollBar_QBaseLeaveEvent(QScrollBar* self, QEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_LeaveEvent_IsBase(true);
        vqscrollbar->leaveEvent(event);
    } else {
        vqscrollbar->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnLeaveEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_LeaveEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_MoveEvent(QScrollBar* self, QMoveEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->moveEvent(event);
    } else {
        vqscrollbar->moveEvent(event);
    }
}

// Base class handler implementation
void QScrollBar_QBaseMoveEvent(QScrollBar* self, QMoveEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_MoveEvent_IsBase(true);
        vqscrollbar->moveEvent(event);
    } else {
        vqscrollbar->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnMoveEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_MoveEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_ResizeEvent(QScrollBar* self, QResizeEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->resizeEvent(event);
    } else {
        vqscrollbar->resizeEvent(event);
    }
}

// Base class handler implementation
void QScrollBar_QBaseResizeEvent(QScrollBar* self, QResizeEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_ResizeEvent_IsBase(true);
        vqscrollbar->resizeEvent(event);
    } else {
        vqscrollbar->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnResizeEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_ResizeEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_CloseEvent(QScrollBar* self, QCloseEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->closeEvent(event);
    } else {
        vqscrollbar->closeEvent(event);
    }
}

// Base class handler implementation
void QScrollBar_QBaseCloseEvent(QScrollBar* self, QCloseEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_CloseEvent_IsBase(true);
        vqscrollbar->closeEvent(event);
    } else {
        vqscrollbar->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnCloseEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_CloseEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_TabletEvent(QScrollBar* self, QTabletEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->tabletEvent(event);
    } else {
        vqscrollbar->tabletEvent(event);
    }
}

// Base class handler implementation
void QScrollBar_QBaseTabletEvent(QScrollBar* self, QTabletEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_TabletEvent_IsBase(true);
        vqscrollbar->tabletEvent(event);
    } else {
        vqscrollbar->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnTabletEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_TabletEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_ActionEvent(QScrollBar* self, QActionEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->actionEvent(event);
    } else {
        vqscrollbar->actionEvent(event);
    }
}

// Base class handler implementation
void QScrollBar_QBaseActionEvent(QScrollBar* self, QActionEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_ActionEvent_IsBase(true);
        vqscrollbar->actionEvent(event);
    } else {
        vqscrollbar->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnActionEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_ActionEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_DragEnterEvent(QScrollBar* self, QDragEnterEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->dragEnterEvent(event);
    } else {
        vqscrollbar->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QScrollBar_QBaseDragEnterEvent(QScrollBar* self, QDragEnterEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_DragEnterEvent_IsBase(true);
        vqscrollbar->dragEnterEvent(event);
    } else {
        vqscrollbar->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnDragEnterEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_DragEnterEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_DragMoveEvent(QScrollBar* self, QDragMoveEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->dragMoveEvent(event);
    } else {
        vqscrollbar->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QScrollBar_QBaseDragMoveEvent(QScrollBar* self, QDragMoveEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_DragMoveEvent_IsBase(true);
        vqscrollbar->dragMoveEvent(event);
    } else {
        vqscrollbar->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnDragMoveEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_DragMoveEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_DragLeaveEvent(QScrollBar* self, QDragLeaveEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->dragLeaveEvent(event);
    } else {
        vqscrollbar->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QScrollBar_QBaseDragLeaveEvent(QScrollBar* self, QDragLeaveEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_DragLeaveEvent_IsBase(true);
        vqscrollbar->dragLeaveEvent(event);
    } else {
        vqscrollbar->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnDragLeaveEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_DragLeaveEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_DropEvent(QScrollBar* self, QDropEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->dropEvent(event);
    } else {
        vqscrollbar->dropEvent(event);
    }
}

// Base class handler implementation
void QScrollBar_QBaseDropEvent(QScrollBar* self, QDropEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_DropEvent_IsBase(true);
        vqscrollbar->dropEvent(event);
    } else {
        vqscrollbar->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnDropEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_DropEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_ShowEvent(QScrollBar* self, QShowEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->showEvent(event);
    } else {
        vqscrollbar->showEvent(event);
    }
}

// Base class handler implementation
void QScrollBar_QBaseShowEvent(QScrollBar* self, QShowEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_ShowEvent_IsBase(true);
        vqscrollbar->showEvent(event);
    } else {
        vqscrollbar->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnShowEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_ShowEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QScrollBar_NativeEvent(QScrollBar* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        return vqscrollbar->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqscrollbar->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QScrollBar_QBaseNativeEvent(QScrollBar* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_NativeEvent_IsBase(true);
        return vqscrollbar->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqscrollbar->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnNativeEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_NativeEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QScrollBar_Metric(const QScrollBar* self, int param1) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        return vqscrollbar->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqscrollbar->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QScrollBar_QBaseMetric(const QScrollBar* self, int param1) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        vqscrollbar->setQScrollBar_Metric_IsBase(true);
        return vqscrollbar->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqscrollbar->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnMetric(const QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        vqscrollbar->setQScrollBar_Metric_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_InitPainter(const QScrollBar* self, QPainter* painter) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        vqscrollbar->initPainter(painter);
    } else {
        vqscrollbar->initPainter(painter);
    }
}

// Base class handler implementation
void QScrollBar_QBaseInitPainter(const QScrollBar* self, QPainter* painter) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        vqscrollbar->setQScrollBar_InitPainter_IsBase(true);
        vqscrollbar->initPainter(painter);
    } else {
        vqscrollbar->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnInitPainter(const QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        vqscrollbar->setQScrollBar_InitPainter_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QScrollBar_Redirected(const QScrollBar* self, QPoint* offset) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        return vqscrollbar->redirected(offset);
    } else {
        return vqscrollbar->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QScrollBar_QBaseRedirected(const QScrollBar* self, QPoint* offset) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        vqscrollbar->setQScrollBar_Redirected_IsBase(true);
        return vqscrollbar->redirected(offset);
    } else {
        return vqscrollbar->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnRedirected(const QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        vqscrollbar->setQScrollBar_Redirected_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QScrollBar_SharedPainter(const QScrollBar* self) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        return vqscrollbar->sharedPainter();
    } else {
        return vqscrollbar->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QScrollBar_QBaseSharedPainter(const QScrollBar* self) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        vqscrollbar->setQScrollBar_SharedPainter_IsBase(true);
        return vqscrollbar->sharedPainter();
    } else {
        return vqscrollbar->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnSharedPainter(const QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        vqscrollbar->setQScrollBar_SharedPainter_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_InputMethodEvent(QScrollBar* self, QInputMethodEvent* param1) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->inputMethodEvent(param1);
    } else {
        vqscrollbar->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QScrollBar_QBaseInputMethodEvent(QScrollBar* self, QInputMethodEvent* param1) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_InputMethodEvent_IsBase(true);
        vqscrollbar->inputMethodEvent(param1);
    } else {
        vqscrollbar->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnInputMethodEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_InputMethodEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QScrollBar_InputMethodQuery(const QScrollBar* self, int param1) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        return new QVariant(vqscrollbar->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QScrollBar_QBaseInputMethodQuery(const QScrollBar* self, int param1) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        vqscrollbar->setQScrollBar_InputMethodQuery_IsBase(true);
        return new QVariant(vqscrollbar->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnInputMethodQuery(const QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        vqscrollbar->setQScrollBar_InputMethodQuery_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QScrollBar_FocusNextPrevChild(QScrollBar* self, bool next) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        return vqscrollbar->focusNextPrevChild(next);
    } else {
        return vqscrollbar->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QScrollBar_QBaseFocusNextPrevChild(QScrollBar* self, bool next) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_FocusNextPrevChild_IsBase(true);
        return vqscrollbar->focusNextPrevChild(next);
    } else {
        return vqscrollbar->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnFocusNextPrevChild(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QScrollBar_EventFilter(QScrollBar* self, QObject* watched, QEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        return vqscrollbar->eventFilter(watched, event);
    } else {
        return vqscrollbar->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QScrollBar_QBaseEventFilter(QScrollBar* self, QObject* watched, QEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_EventFilter_IsBase(true);
        return vqscrollbar->eventFilter(watched, event);
    } else {
        return vqscrollbar->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnEventFilter(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_EventFilter_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_ChildEvent(QScrollBar* self, QChildEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->childEvent(event);
    } else {
        vqscrollbar->childEvent(event);
    }
}

// Base class handler implementation
void QScrollBar_QBaseChildEvent(QScrollBar* self, QChildEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_ChildEvent_IsBase(true);
        vqscrollbar->childEvent(event);
    } else {
        vqscrollbar->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnChildEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_ChildEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_CustomEvent(QScrollBar* self, QEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->customEvent(event);
    } else {
        vqscrollbar->customEvent(event);
    }
}

// Base class handler implementation
void QScrollBar_QBaseCustomEvent(QScrollBar* self, QEvent* event) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_CustomEvent_IsBase(true);
        vqscrollbar->customEvent(event);
    } else {
        vqscrollbar->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnCustomEvent(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_CustomEvent_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_ConnectNotify(QScrollBar* self, QMetaMethod* signal) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->connectNotify(*signal);
    } else {
        vqscrollbar->connectNotify(*signal);
    }
}

// Base class handler implementation
void QScrollBar_QBaseConnectNotify(QScrollBar* self, QMetaMethod* signal) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_ConnectNotify_IsBase(true);
        vqscrollbar->connectNotify(*signal);
    } else {
        vqscrollbar->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnConnectNotify(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_ConnectNotify_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_DisconnectNotify(QScrollBar* self, QMetaMethod* signal) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->disconnectNotify(*signal);
    } else {
        vqscrollbar->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QScrollBar_QBaseDisconnectNotify(QScrollBar* self, QMetaMethod* signal) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_DisconnectNotify_IsBase(true);
        vqscrollbar->disconnectNotify(*signal);
    } else {
        vqscrollbar->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnDisconnectNotify(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_DisconnectNotify_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_SetRepeatAction(QScrollBar* self, int action) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action));
    } else {
        vqscrollbar->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action));
    }
}

// Base class handler implementation
void QScrollBar_QBaseSetRepeatAction(QScrollBar* self, int action) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_SetRepeatAction_IsBase(true);
        vqscrollbar->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action));
    } else {
        vqscrollbar->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnSetRepeatAction(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_SetRepeatAction_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_SetRepeatAction_Callback>(slot));
    }
}

// Derived class handler implementation
int QScrollBar_RepeatAction(const QScrollBar* self) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        return static_cast<int>(vqscrollbar->repeatAction());
    } else {
        return static_cast<int>(vqscrollbar->repeatAction());
    }
}

// Base class handler implementation
int QScrollBar_QBaseRepeatAction(const QScrollBar* self) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        vqscrollbar->setQScrollBar_RepeatAction_IsBase(true);
        return static_cast<int>(vqscrollbar->repeatAction());
    } else {
        return static_cast<int>(vqscrollbar->repeatAction());
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnRepeatAction(const QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        vqscrollbar->setQScrollBar_RepeatAction_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_RepeatAction_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_UpdateMicroFocus(QScrollBar* self) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->updateMicroFocus();
    } else {
        vqscrollbar->updateMicroFocus();
    }
}

// Base class handler implementation
void QScrollBar_QBaseUpdateMicroFocus(QScrollBar* self) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_UpdateMicroFocus_IsBase(true);
        vqscrollbar->updateMicroFocus();
    } else {
        vqscrollbar->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnUpdateMicroFocus(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_Create(QScrollBar* self) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->create();
    } else {
        vqscrollbar->create();
    }
}

// Base class handler implementation
void QScrollBar_QBaseCreate(QScrollBar* self) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_Create_IsBase(true);
        vqscrollbar->create();
    } else {
        vqscrollbar->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnCreate(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_Create_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollBar_Destroy(QScrollBar* self) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->destroy();
    } else {
        vqscrollbar->destroy();
    }
}

// Base class handler implementation
void QScrollBar_QBaseDestroy(QScrollBar* self) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_Destroy_IsBase(true);
        vqscrollbar->destroy();
    } else {
        vqscrollbar->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnDestroy(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_Destroy_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QScrollBar_FocusNextChild(QScrollBar* self) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        return vqscrollbar->focusNextChild();
    } else {
        return vqscrollbar->focusNextChild();
    }
}

// Base class handler implementation
bool QScrollBar_QBaseFocusNextChild(QScrollBar* self) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_FocusNextChild_IsBase(true);
        return vqscrollbar->focusNextChild();
    } else {
        return vqscrollbar->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnFocusNextChild(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_FocusNextChild_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QScrollBar_FocusPreviousChild(QScrollBar* self) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        return vqscrollbar->focusPreviousChild();
    } else {
        return vqscrollbar->focusPreviousChild();
    }
}

// Base class handler implementation
bool QScrollBar_QBaseFocusPreviousChild(QScrollBar* self) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_FocusPreviousChild_IsBase(true);
        return vqscrollbar->focusPreviousChild();
    } else {
        return vqscrollbar->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnFocusPreviousChild(QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = dynamic_cast<VirtualQScrollBar*>(self)) {
        vqscrollbar->setQScrollBar_FocusPreviousChild_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QScrollBar_Sender(const QScrollBar* self) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        return vqscrollbar->sender();
    } else {
        return vqscrollbar->sender();
    }
}

// Base class handler implementation
QObject* QScrollBar_QBaseSender(const QScrollBar* self) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        vqscrollbar->setQScrollBar_Sender_IsBase(true);
        return vqscrollbar->sender();
    } else {
        return vqscrollbar->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnSender(const QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        vqscrollbar->setQScrollBar_Sender_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QScrollBar_SenderSignalIndex(const QScrollBar* self) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        return vqscrollbar->senderSignalIndex();
    } else {
        return vqscrollbar->senderSignalIndex();
    }
}

// Base class handler implementation
int QScrollBar_QBaseSenderSignalIndex(const QScrollBar* self) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        vqscrollbar->setQScrollBar_SenderSignalIndex_IsBase(true);
        return vqscrollbar->senderSignalIndex();
    } else {
        return vqscrollbar->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnSenderSignalIndex(const QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        vqscrollbar->setQScrollBar_SenderSignalIndex_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QScrollBar_Receivers(const QScrollBar* self, const char* signal) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        return vqscrollbar->receivers(signal);
    } else {
        return vqscrollbar->receivers(signal);
    }
}

// Base class handler implementation
int QScrollBar_QBaseReceivers(const QScrollBar* self, const char* signal) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        vqscrollbar->setQScrollBar_Receivers_IsBase(true);
        return vqscrollbar->receivers(signal);
    } else {
        return vqscrollbar->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnReceivers(const QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        vqscrollbar->setQScrollBar_Receivers_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QScrollBar_IsSignalConnected(const QScrollBar* self, QMetaMethod* signal) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        return vqscrollbar->isSignalConnected(*signal);
    } else {
        return vqscrollbar->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QScrollBar_QBaseIsSignalConnected(const QScrollBar* self, QMetaMethod* signal) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        vqscrollbar->setQScrollBar_IsSignalConnected_IsBase(true);
        return vqscrollbar->isSignalConnected(*signal);
    } else {
        return vqscrollbar->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollBar_OnIsSignalConnected(const QScrollBar* self, intptr_t slot) {
    if (auto* vqscrollbar = const_cast<VirtualQScrollBar*>(dynamic_cast<const VirtualQScrollBar*>(self))) {
        vqscrollbar->setQScrollBar_IsSignalConnected_Callback(reinterpret_cast<VirtualQScrollBar::QScrollBar_IsSignalConnected_Callback>(slot));
    }
}

void QScrollBar_Delete(QScrollBar* self) {
    delete self;
}
