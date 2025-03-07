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
#include <QFocusFrame>
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
#include <QShowEvent>
#include <QSize>
#include <QSizePolicy>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyle>
#include <QStyleOption>
#include <QTabletEvent>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <QWindow>
#include <qfocusframe.h>
#include "libqfocusframe.hpp"
#include "libqfocusframe.hxx"

QFocusFrame* QFocusFrame_new(QWidget* parent) {
    return new VirtualQFocusFrame(parent);
}

QFocusFrame* QFocusFrame_new2() {
    return new VirtualQFocusFrame();
}

QMetaObject* QFocusFrame_MetaObject(const QFocusFrame* self) {
    return (QMetaObject*)self->metaObject();
}

void* QFocusFrame_Metacast(QFocusFrame* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QFocusFrame_Metacall(QFocusFrame* self, int param1, int param2, void** param3) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QFocusFrame_OnMetacall(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_Metacall_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QFocusFrame_QBaseMetacall(QFocusFrame* self, int param1, int param2, void** param3) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_Metacall_IsBase(true);
        return vqfocusframe->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QFocusFrame_Tr(const char* s) {
    QString _ret = QFocusFrame::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QFocusFrame_SetWidget(QFocusFrame* self, QWidget* widget) {
    self->setWidget(widget);
}

QWidget* QFocusFrame_Widget(const QFocusFrame* self) {
    return self->widget();
}

libqt_string QFocusFrame_Tr2(const char* s, const char* c) {
    QString _ret = QFocusFrame::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QFocusFrame_Tr3(const char* s, const char* c, int n) {
    QString _ret = QFocusFrame::tr(s, c, static_cast<int>(n));
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
bool QFocusFrame_Event(QFocusFrame* self, QEvent* e) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        return vqfocusframe->event(e);
    } else {
        return vqfocusframe->event(e);
    }
}

// Base class handler implementation
bool QFocusFrame_QBaseEvent(QFocusFrame* self, QEvent* e) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_Event_IsBase(true);
        return vqfocusframe->event(e);
    } else {
        return vqfocusframe->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_Event_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFocusFrame_EventFilter(QFocusFrame* self, QObject* param1, QEvent* param2) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        return vqfocusframe->eventFilter(param1, param2);
    } else {
        return vqfocusframe->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool QFocusFrame_QBaseEventFilter(QFocusFrame* self, QObject* param1, QEvent* param2) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_EventFilter_IsBase(true);
        return vqfocusframe->eventFilter(param1, param2);
    } else {
        return vqfocusframe->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnEventFilter(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_EventFilter_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_PaintEvent(QFocusFrame* self, QPaintEvent* param1) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->paintEvent(param1);
    } else {
        vqfocusframe->paintEvent(param1);
    }
}

// Base class handler implementation
void QFocusFrame_QBasePaintEvent(QFocusFrame* self, QPaintEvent* param1) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_PaintEvent_IsBase(true);
        vqfocusframe->paintEvent(param1);
    } else {
        vqfocusframe->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnPaintEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_PaintEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_InitStyleOption(const QFocusFrame* self, QStyleOption* option) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        vqfocusframe->initStyleOption(option);
    } else {
        vqfocusframe->initStyleOption(option);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseInitStyleOption(const QFocusFrame* self, QStyleOption* option) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        vqfocusframe->setQFocusFrame_InitStyleOption_IsBase(true);
        vqfocusframe->initStyleOption(option);
    } else {
        vqfocusframe->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnInitStyleOption(const QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        vqfocusframe->setQFocusFrame_InitStyleOption_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QFocusFrame_DevType(const QFocusFrame* self) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        return vqfocusframe->devType();
    } else {
        return vqfocusframe->devType();
    }
}

// Base class handler implementation
int QFocusFrame_QBaseDevType(const QFocusFrame* self) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        vqfocusframe->setQFocusFrame_DevType_IsBase(true);
        return vqfocusframe->devType();
    } else {
        return vqfocusframe->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnDevType(const QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        vqfocusframe->setQFocusFrame_DevType_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_SetVisible(QFocusFrame* self, bool visible) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setVisible(visible);
    } else {
        vqfocusframe->setVisible(visible);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseSetVisible(QFocusFrame* self, bool visible) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_SetVisible_IsBase(true);
        vqfocusframe->setVisible(visible);
    } else {
        vqfocusframe->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnSetVisible(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_SetVisible_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QFocusFrame_SizeHint(const QFocusFrame* self) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        return new QSize(vqfocusframe->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QFocusFrame_QBaseSizeHint(const QFocusFrame* self) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        vqfocusframe->setQFocusFrame_SizeHint_IsBase(true);
        return new QSize(vqfocusframe->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnSizeHint(const QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        vqfocusframe->setQFocusFrame_SizeHint_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QFocusFrame_MinimumSizeHint(const QFocusFrame* self) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        return new QSize(vqfocusframe->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QFocusFrame_QBaseMinimumSizeHint(const QFocusFrame* self) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        vqfocusframe->setQFocusFrame_MinimumSizeHint_IsBase(true);
        return new QSize(vqfocusframe->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnMinimumSizeHint(const QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        vqfocusframe->setQFocusFrame_MinimumSizeHint_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QFocusFrame_HeightForWidth(const QFocusFrame* self, int param1) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        return vqfocusframe->heightForWidth(static_cast<int>(param1));
    } else {
        return vqfocusframe->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QFocusFrame_QBaseHeightForWidth(const QFocusFrame* self, int param1) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        vqfocusframe->setQFocusFrame_HeightForWidth_IsBase(true);
        return vqfocusframe->heightForWidth(static_cast<int>(param1));
    } else {
        return vqfocusframe->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnHeightForWidth(const QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        vqfocusframe->setQFocusFrame_HeightForWidth_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFocusFrame_HasHeightForWidth(const QFocusFrame* self) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        return vqfocusframe->hasHeightForWidth();
    } else {
        return vqfocusframe->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QFocusFrame_QBaseHasHeightForWidth(const QFocusFrame* self) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        vqfocusframe->setQFocusFrame_HasHeightForWidth_IsBase(true);
        return vqfocusframe->hasHeightForWidth();
    } else {
        return vqfocusframe->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnHasHeightForWidth(const QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        vqfocusframe->setQFocusFrame_HasHeightForWidth_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QFocusFrame_PaintEngine(const QFocusFrame* self) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        return vqfocusframe->paintEngine();
    } else {
        return vqfocusframe->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QFocusFrame_QBasePaintEngine(const QFocusFrame* self) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        vqfocusframe->setQFocusFrame_PaintEngine_IsBase(true);
        return vqfocusframe->paintEngine();
    } else {
        return vqfocusframe->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnPaintEngine(const QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        vqfocusframe->setQFocusFrame_PaintEngine_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_MousePressEvent(QFocusFrame* self, QMouseEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->mousePressEvent(event);
    } else {
        vqfocusframe->mousePressEvent(event);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseMousePressEvent(QFocusFrame* self, QMouseEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_MousePressEvent_IsBase(true);
        vqfocusframe->mousePressEvent(event);
    } else {
        vqfocusframe->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnMousePressEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_MousePressEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_MouseReleaseEvent(QFocusFrame* self, QMouseEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->mouseReleaseEvent(event);
    } else {
        vqfocusframe->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseMouseReleaseEvent(QFocusFrame* self, QMouseEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_MouseReleaseEvent_IsBase(true);
        vqfocusframe->mouseReleaseEvent(event);
    } else {
        vqfocusframe->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnMouseReleaseEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_MouseDoubleClickEvent(QFocusFrame* self, QMouseEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->mouseDoubleClickEvent(event);
    } else {
        vqfocusframe->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseMouseDoubleClickEvent(QFocusFrame* self, QMouseEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_MouseDoubleClickEvent_IsBase(true);
        vqfocusframe->mouseDoubleClickEvent(event);
    } else {
        vqfocusframe->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnMouseDoubleClickEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_MouseMoveEvent(QFocusFrame* self, QMouseEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->mouseMoveEvent(event);
    } else {
        vqfocusframe->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseMouseMoveEvent(QFocusFrame* self, QMouseEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_MouseMoveEvent_IsBase(true);
        vqfocusframe->mouseMoveEvent(event);
    } else {
        vqfocusframe->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnMouseMoveEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_MouseMoveEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_WheelEvent(QFocusFrame* self, QWheelEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->wheelEvent(event);
    } else {
        vqfocusframe->wheelEvent(event);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseWheelEvent(QFocusFrame* self, QWheelEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_WheelEvent_IsBase(true);
        vqfocusframe->wheelEvent(event);
    } else {
        vqfocusframe->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnWheelEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_WheelEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_KeyPressEvent(QFocusFrame* self, QKeyEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->keyPressEvent(event);
    } else {
        vqfocusframe->keyPressEvent(event);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseKeyPressEvent(QFocusFrame* self, QKeyEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_KeyPressEvent_IsBase(true);
        vqfocusframe->keyPressEvent(event);
    } else {
        vqfocusframe->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnKeyPressEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_KeyPressEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_KeyReleaseEvent(QFocusFrame* self, QKeyEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->keyReleaseEvent(event);
    } else {
        vqfocusframe->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseKeyReleaseEvent(QFocusFrame* self, QKeyEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_KeyReleaseEvent_IsBase(true);
        vqfocusframe->keyReleaseEvent(event);
    } else {
        vqfocusframe->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnKeyReleaseEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_FocusInEvent(QFocusFrame* self, QFocusEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->focusInEvent(event);
    } else {
        vqfocusframe->focusInEvent(event);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseFocusInEvent(QFocusFrame* self, QFocusEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_FocusInEvent_IsBase(true);
        vqfocusframe->focusInEvent(event);
    } else {
        vqfocusframe->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnFocusInEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_FocusInEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_FocusOutEvent(QFocusFrame* self, QFocusEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->focusOutEvent(event);
    } else {
        vqfocusframe->focusOutEvent(event);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseFocusOutEvent(QFocusFrame* self, QFocusEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_FocusOutEvent_IsBase(true);
        vqfocusframe->focusOutEvent(event);
    } else {
        vqfocusframe->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnFocusOutEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_FocusOutEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_EnterEvent(QFocusFrame* self, QEnterEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->enterEvent(event);
    } else {
        vqfocusframe->enterEvent(event);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseEnterEvent(QFocusFrame* self, QEnterEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_EnterEvent_IsBase(true);
        vqfocusframe->enterEvent(event);
    } else {
        vqfocusframe->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnEnterEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_EnterEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_LeaveEvent(QFocusFrame* self, QEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->leaveEvent(event);
    } else {
        vqfocusframe->leaveEvent(event);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseLeaveEvent(QFocusFrame* self, QEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_LeaveEvent_IsBase(true);
        vqfocusframe->leaveEvent(event);
    } else {
        vqfocusframe->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnLeaveEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_LeaveEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_MoveEvent(QFocusFrame* self, QMoveEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->moveEvent(event);
    } else {
        vqfocusframe->moveEvent(event);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseMoveEvent(QFocusFrame* self, QMoveEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_MoveEvent_IsBase(true);
        vqfocusframe->moveEvent(event);
    } else {
        vqfocusframe->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnMoveEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_MoveEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_ResizeEvent(QFocusFrame* self, QResizeEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->resizeEvent(event);
    } else {
        vqfocusframe->resizeEvent(event);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseResizeEvent(QFocusFrame* self, QResizeEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_ResizeEvent_IsBase(true);
        vqfocusframe->resizeEvent(event);
    } else {
        vqfocusframe->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnResizeEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_ResizeEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_CloseEvent(QFocusFrame* self, QCloseEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->closeEvent(event);
    } else {
        vqfocusframe->closeEvent(event);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseCloseEvent(QFocusFrame* self, QCloseEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_CloseEvent_IsBase(true);
        vqfocusframe->closeEvent(event);
    } else {
        vqfocusframe->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnCloseEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_CloseEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_ContextMenuEvent(QFocusFrame* self, QContextMenuEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->contextMenuEvent(event);
    } else {
        vqfocusframe->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseContextMenuEvent(QFocusFrame* self, QContextMenuEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_ContextMenuEvent_IsBase(true);
        vqfocusframe->contextMenuEvent(event);
    } else {
        vqfocusframe->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnContextMenuEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_ContextMenuEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_TabletEvent(QFocusFrame* self, QTabletEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->tabletEvent(event);
    } else {
        vqfocusframe->tabletEvent(event);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseTabletEvent(QFocusFrame* self, QTabletEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_TabletEvent_IsBase(true);
        vqfocusframe->tabletEvent(event);
    } else {
        vqfocusframe->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnTabletEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_TabletEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_ActionEvent(QFocusFrame* self, QActionEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->actionEvent(event);
    } else {
        vqfocusframe->actionEvent(event);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseActionEvent(QFocusFrame* self, QActionEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_ActionEvent_IsBase(true);
        vqfocusframe->actionEvent(event);
    } else {
        vqfocusframe->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnActionEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_ActionEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_DragEnterEvent(QFocusFrame* self, QDragEnterEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->dragEnterEvent(event);
    } else {
        vqfocusframe->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseDragEnterEvent(QFocusFrame* self, QDragEnterEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_DragEnterEvent_IsBase(true);
        vqfocusframe->dragEnterEvent(event);
    } else {
        vqfocusframe->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnDragEnterEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_DragEnterEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_DragMoveEvent(QFocusFrame* self, QDragMoveEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->dragMoveEvent(event);
    } else {
        vqfocusframe->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseDragMoveEvent(QFocusFrame* self, QDragMoveEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_DragMoveEvent_IsBase(true);
        vqfocusframe->dragMoveEvent(event);
    } else {
        vqfocusframe->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnDragMoveEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_DragMoveEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_DragLeaveEvent(QFocusFrame* self, QDragLeaveEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->dragLeaveEvent(event);
    } else {
        vqfocusframe->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseDragLeaveEvent(QFocusFrame* self, QDragLeaveEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_DragLeaveEvent_IsBase(true);
        vqfocusframe->dragLeaveEvent(event);
    } else {
        vqfocusframe->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnDragLeaveEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_DragLeaveEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_DropEvent(QFocusFrame* self, QDropEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->dropEvent(event);
    } else {
        vqfocusframe->dropEvent(event);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseDropEvent(QFocusFrame* self, QDropEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_DropEvent_IsBase(true);
        vqfocusframe->dropEvent(event);
    } else {
        vqfocusframe->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnDropEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_DropEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_ShowEvent(QFocusFrame* self, QShowEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->showEvent(event);
    } else {
        vqfocusframe->showEvent(event);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseShowEvent(QFocusFrame* self, QShowEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_ShowEvent_IsBase(true);
        vqfocusframe->showEvent(event);
    } else {
        vqfocusframe->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnShowEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_ShowEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_HideEvent(QFocusFrame* self, QHideEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->hideEvent(event);
    } else {
        vqfocusframe->hideEvent(event);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseHideEvent(QFocusFrame* self, QHideEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_HideEvent_IsBase(true);
        vqfocusframe->hideEvent(event);
    } else {
        vqfocusframe->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnHideEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_HideEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFocusFrame_NativeEvent(QFocusFrame* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        return vqfocusframe->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqfocusframe->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QFocusFrame_QBaseNativeEvent(QFocusFrame* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_NativeEvent_IsBase(true);
        return vqfocusframe->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqfocusframe->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnNativeEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_NativeEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_ChangeEvent(QFocusFrame* self, QEvent* param1) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->changeEvent(param1);
    } else {
        vqfocusframe->changeEvent(param1);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseChangeEvent(QFocusFrame* self, QEvent* param1) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_ChangeEvent_IsBase(true);
        vqfocusframe->changeEvent(param1);
    } else {
        vqfocusframe->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnChangeEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_ChangeEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QFocusFrame_Metric(const QFocusFrame* self, int param1) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        return vqfocusframe->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqfocusframe->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QFocusFrame_QBaseMetric(const QFocusFrame* self, int param1) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        vqfocusframe->setQFocusFrame_Metric_IsBase(true);
        return vqfocusframe->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqfocusframe->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnMetric(const QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        vqfocusframe->setQFocusFrame_Metric_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_InitPainter(const QFocusFrame* self, QPainter* painter) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        vqfocusframe->initPainter(painter);
    } else {
        vqfocusframe->initPainter(painter);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseInitPainter(const QFocusFrame* self, QPainter* painter) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        vqfocusframe->setQFocusFrame_InitPainter_IsBase(true);
        vqfocusframe->initPainter(painter);
    } else {
        vqfocusframe->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnInitPainter(const QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        vqfocusframe->setQFocusFrame_InitPainter_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QFocusFrame_Redirected(const QFocusFrame* self, QPoint* offset) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        return vqfocusframe->redirected(offset);
    } else {
        return vqfocusframe->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QFocusFrame_QBaseRedirected(const QFocusFrame* self, QPoint* offset) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        vqfocusframe->setQFocusFrame_Redirected_IsBase(true);
        return vqfocusframe->redirected(offset);
    } else {
        return vqfocusframe->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnRedirected(const QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        vqfocusframe->setQFocusFrame_Redirected_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QFocusFrame_SharedPainter(const QFocusFrame* self) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        return vqfocusframe->sharedPainter();
    } else {
        return vqfocusframe->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QFocusFrame_QBaseSharedPainter(const QFocusFrame* self) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        vqfocusframe->setQFocusFrame_SharedPainter_IsBase(true);
        return vqfocusframe->sharedPainter();
    } else {
        return vqfocusframe->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnSharedPainter(const QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        vqfocusframe->setQFocusFrame_SharedPainter_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_InputMethodEvent(QFocusFrame* self, QInputMethodEvent* param1) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->inputMethodEvent(param1);
    } else {
        vqfocusframe->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseInputMethodEvent(QFocusFrame* self, QInputMethodEvent* param1) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_InputMethodEvent_IsBase(true);
        vqfocusframe->inputMethodEvent(param1);
    } else {
        vqfocusframe->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnInputMethodEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_InputMethodEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QFocusFrame_InputMethodQuery(const QFocusFrame* self, int param1) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        return new QVariant(vqfocusframe->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QFocusFrame_QBaseInputMethodQuery(const QFocusFrame* self, int param1) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        vqfocusframe->setQFocusFrame_InputMethodQuery_IsBase(true);
        return new QVariant(vqfocusframe->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnInputMethodQuery(const QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        vqfocusframe->setQFocusFrame_InputMethodQuery_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFocusFrame_FocusNextPrevChild(QFocusFrame* self, bool next) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        return vqfocusframe->focusNextPrevChild(next);
    } else {
        return vqfocusframe->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QFocusFrame_QBaseFocusNextPrevChild(QFocusFrame* self, bool next) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_FocusNextPrevChild_IsBase(true);
        return vqfocusframe->focusNextPrevChild(next);
    } else {
        return vqfocusframe->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnFocusNextPrevChild(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_TimerEvent(QFocusFrame* self, QTimerEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->timerEvent(event);
    } else {
        vqfocusframe->timerEvent(event);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseTimerEvent(QFocusFrame* self, QTimerEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_TimerEvent_IsBase(true);
        vqfocusframe->timerEvent(event);
    } else {
        vqfocusframe->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnTimerEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_TimerEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_ChildEvent(QFocusFrame* self, QChildEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->childEvent(event);
    } else {
        vqfocusframe->childEvent(event);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseChildEvent(QFocusFrame* self, QChildEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_ChildEvent_IsBase(true);
        vqfocusframe->childEvent(event);
    } else {
        vqfocusframe->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnChildEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_ChildEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_CustomEvent(QFocusFrame* self, QEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->customEvent(event);
    } else {
        vqfocusframe->customEvent(event);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseCustomEvent(QFocusFrame* self, QEvent* event) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_CustomEvent_IsBase(true);
        vqfocusframe->customEvent(event);
    } else {
        vqfocusframe->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnCustomEvent(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_CustomEvent_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_ConnectNotify(QFocusFrame* self, QMetaMethod* signal) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->connectNotify(*signal);
    } else {
        vqfocusframe->connectNotify(*signal);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseConnectNotify(QFocusFrame* self, QMetaMethod* signal) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_ConnectNotify_IsBase(true);
        vqfocusframe->connectNotify(*signal);
    } else {
        vqfocusframe->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnConnectNotify(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_ConnectNotify_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_DisconnectNotify(QFocusFrame* self, QMetaMethod* signal) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->disconnectNotify(*signal);
    } else {
        vqfocusframe->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QFocusFrame_QBaseDisconnectNotify(QFocusFrame* self, QMetaMethod* signal) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_DisconnectNotify_IsBase(true);
        vqfocusframe->disconnectNotify(*signal);
    } else {
        vqfocusframe->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnDisconnectNotify(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_DisconnectNotify_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_UpdateMicroFocus(QFocusFrame* self) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->updateMicroFocus();
    } else {
        vqfocusframe->updateMicroFocus();
    }
}

// Base class handler implementation
void QFocusFrame_QBaseUpdateMicroFocus(QFocusFrame* self) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_UpdateMicroFocus_IsBase(true);
        vqfocusframe->updateMicroFocus();
    } else {
        vqfocusframe->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnUpdateMicroFocus(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_Create(QFocusFrame* self) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->create();
    } else {
        vqfocusframe->create();
    }
}

// Base class handler implementation
void QFocusFrame_QBaseCreate(QFocusFrame* self) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_Create_IsBase(true);
        vqfocusframe->create();
    } else {
        vqfocusframe->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnCreate(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_Create_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QFocusFrame_Destroy(QFocusFrame* self) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->destroy();
    } else {
        vqfocusframe->destroy();
    }
}

// Base class handler implementation
void QFocusFrame_QBaseDestroy(QFocusFrame* self) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_Destroy_IsBase(true);
        vqfocusframe->destroy();
    } else {
        vqfocusframe->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnDestroy(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_Destroy_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFocusFrame_FocusNextChild(QFocusFrame* self) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        return vqfocusframe->focusNextChild();
    } else {
        return vqfocusframe->focusNextChild();
    }
}

// Base class handler implementation
bool QFocusFrame_QBaseFocusNextChild(QFocusFrame* self) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_FocusNextChild_IsBase(true);
        return vqfocusframe->focusNextChild();
    } else {
        return vqfocusframe->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnFocusNextChild(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_FocusNextChild_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFocusFrame_FocusPreviousChild(QFocusFrame* self) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        return vqfocusframe->focusPreviousChild();
    } else {
        return vqfocusframe->focusPreviousChild();
    }
}

// Base class handler implementation
bool QFocusFrame_QBaseFocusPreviousChild(QFocusFrame* self) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_FocusPreviousChild_IsBase(true);
        return vqfocusframe->focusPreviousChild();
    } else {
        return vqfocusframe->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnFocusPreviousChild(QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = dynamic_cast<VirtualQFocusFrame*>(self)) {
        vqfocusframe->setQFocusFrame_FocusPreviousChild_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QFocusFrame_Sender(const QFocusFrame* self) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        return vqfocusframe->sender();
    } else {
        return vqfocusframe->sender();
    }
}

// Base class handler implementation
QObject* QFocusFrame_QBaseSender(const QFocusFrame* self) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        vqfocusframe->setQFocusFrame_Sender_IsBase(true);
        return vqfocusframe->sender();
    } else {
        return vqfocusframe->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnSender(const QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        vqfocusframe->setQFocusFrame_Sender_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QFocusFrame_SenderSignalIndex(const QFocusFrame* self) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        return vqfocusframe->senderSignalIndex();
    } else {
        return vqfocusframe->senderSignalIndex();
    }
}

// Base class handler implementation
int QFocusFrame_QBaseSenderSignalIndex(const QFocusFrame* self) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        vqfocusframe->setQFocusFrame_SenderSignalIndex_IsBase(true);
        return vqfocusframe->senderSignalIndex();
    } else {
        return vqfocusframe->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnSenderSignalIndex(const QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        vqfocusframe->setQFocusFrame_SenderSignalIndex_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QFocusFrame_Receivers(const QFocusFrame* self, const char* signal) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        return vqfocusframe->receivers(signal);
    } else {
        return vqfocusframe->receivers(signal);
    }
}

// Base class handler implementation
int QFocusFrame_QBaseReceivers(const QFocusFrame* self, const char* signal) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        vqfocusframe->setQFocusFrame_Receivers_IsBase(true);
        return vqfocusframe->receivers(signal);
    } else {
        return vqfocusframe->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnReceivers(const QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        vqfocusframe->setQFocusFrame_Receivers_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFocusFrame_IsSignalConnected(const QFocusFrame* self, QMetaMethod* signal) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        return vqfocusframe->isSignalConnected(*signal);
    } else {
        return vqfocusframe->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QFocusFrame_QBaseIsSignalConnected(const QFocusFrame* self, QMetaMethod* signal) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        vqfocusframe->setQFocusFrame_IsSignalConnected_IsBase(true);
        return vqfocusframe->isSignalConnected(*signal);
    } else {
        return vqfocusframe->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFocusFrame_OnIsSignalConnected(const QFocusFrame* self, intptr_t slot) {
    if (auto* vqfocusframe = const_cast<VirtualQFocusFrame*>(dynamic_cast<const VirtualQFocusFrame*>(self))) {
        vqfocusframe->setQFocusFrame_IsSignalConnected_Callback(reinterpret_cast<VirtualQFocusFrame::QFocusFrame_IsSignalConnected_Callback>(slot));
    }
}

void QFocusFrame_Delete(QFocusFrame* self) {
    delete self;
}
