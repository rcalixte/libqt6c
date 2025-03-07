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
#include <QDial>
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
#include <qdial.h>
#include "libqdial.hpp"
#include "libqdial.hxx"

QDial* QDial_new(QWidget* parent) {
    return new VirtualQDial(parent);
}

QDial* QDial_new2() {
    return new VirtualQDial();
}

QMetaObject* QDial_MetaObject(const QDial* self) {
    return (QMetaObject*)self->metaObject();
}

void* QDial_Metacast(QDial* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QDial_Metacall(QDial* self, int param1, int param2, void** param3) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QDial_OnMetacall(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_Metacall_Callback(reinterpret_cast<VirtualQDial::QDial_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QDial_QBaseMetacall(QDial* self, int param1, int param2, void** param3) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_Metacall_IsBase(true);
        return vqdial->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QDial_Tr(const char* s) {
    QString _ret = QDial::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QDial_Wrapping(const QDial* self) {
    return self->wrapping();
}

int QDial_NotchSize(const QDial* self) {
    return self->notchSize();
}

void QDial_SetNotchTarget(QDial* self, double target) {
    self->setNotchTarget(static_cast<double>(target));
}

double QDial_NotchTarget(const QDial* self) {
    return static_cast<double>(self->notchTarget());
}

bool QDial_NotchesVisible(const QDial* self) {
    return self->notchesVisible();
}

void QDial_SetNotchesVisible(QDial* self, bool visible) {
    self->setNotchesVisible(visible);
}

void QDial_SetWrapping(QDial* self, bool on) {
    self->setWrapping(on);
}

libqt_string QDial_Tr2(const char* s, const char* c) {
    QString _ret = QDial::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QDial_Tr3(const char* s, const char* c, int n) {
    QString _ret = QDial::tr(s, c, static_cast<int>(n));
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
QSize* QDial_SizeHint(const QDial* self) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        return new QSize(vqdial->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QDial_QBaseSizeHint(const QDial* self) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        vqdial->setQDial_SizeHint_IsBase(true);
        return new QSize(vqdial->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnSizeHint(const QDial* self, intptr_t slot) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        vqdial->setQDial_SizeHint_Callback(reinterpret_cast<VirtualQDial::QDial_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QDial_MinimumSizeHint(const QDial* self) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        return new QSize(vqdial->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QDial_QBaseMinimumSizeHint(const QDial* self) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        vqdial->setQDial_MinimumSizeHint_IsBase(true);
        return new QSize(vqdial->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnMinimumSizeHint(const QDial* self, intptr_t slot) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        vqdial->setQDial_MinimumSizeHint_Callback(reinterpret_cast<VirtualQDial::QDial_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDial_Event(QDial* self, QEvent* e) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        return vqdial->event(e);
    } else {
        return vqdial->event(e);
    }
}

// Base class handler implementation
bool QDial_QBaseEvent(QDial* self, QEvent* e) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_Event_IsBase(true);
        return vqdial->event(e);
    } else {
        return vqdial->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_Event_Callback(reinterpret_cast<VirtualQDial::QDial_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_ResizeEvent(QDial* self, QResizeEvent* re) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->resizeEvent(re);
    } else {
        vqdial->resizeEvent(re);
    }
}

// Base class handler implementation
void QDial_QBaseResizeEvent(QDial* self, QResizeEvent* re) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_ResizeEvent_IsBase(true);
        vqdial->resizeEvent(re);
    } else {
        vqdial->resizeEvent(re);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnResizeEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_ResizeEvent_Callback(reinterpret_cast<VirtualQDial::QDial_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_PaintEvent(QDial* self, QPaintEvent* pe) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->paintEvent(pe);
    } else {
        vqdial->paintEvent(pe);
    }
}

// Base class handler implementation
void QDial_QBasePaintEvent(QDial* self, QPaintEvent* pe) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_PaintEvent_IsBase(true);
        vqdial->paintEvent(pe);
    } else {
        vqdial->paintEvent(pe);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnPaintEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_PaintEvent_Callback(reinterpret_cast<VirtualQDial::QDial_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_MousePressEvent(QDial* self, QMouseEvent* me) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->mousePressEvent(me);
    } else {
        vqdial->mousePressEvent(me);
    }
}

// Base class handler implementation
void QDial_QBaseMousePressEvent(QDial* self, QMouseEvent* me) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_MousePressEvent_IsBase(true);
        vqdial->mousePressEvent(me);
    } else {
        vqdial->mousePressEvent(me);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnMousePressEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_MousePressEvent_Callback(reinterpret_cast<VirtualQDial::QDial_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_MouseReleaseEvent(QDial* self, QMouseEvent* me) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->mouseReleaseEvent(me);
    } else {
        vqdial->mouseReleaseEvent(me);
    }
}

// Base class handler implementation
void QDial_QBaseMouseReleaseEvent(QDial* self, QMouseEvent* me) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_MouseReleaseEvent_IsBase(true);
        vqdial->mouseReleaseEvent(me);
    } else {
        vqdial->mouseReleaseEvent(me);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnMouseReleaseEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQDial::QDial_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_MouseMoveEvent(QDial* self, QMouseEvent* me) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->mouseMoveEvent(me);
    } else {
        vqdial->mouseMoveEvent(me);
    }
}

// Base class handler implementation
void QDial_QBaseMouseMoveEvent(QDial* self, QMouseEvent* me) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_MouseMoveEvent_IsBase(true);
        vqdial->mouseMoveEvent(me);
    } else {
        vqdial->mouseMoveEvent(me);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnMouseMoveEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_MouseMoveEvent_Callback(reinterpret_cast<VirtualQDial::QDial_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_SliderChange(QDial* self, int change) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->sliderChange(static_cast<VirtualQDial::SliderChange>(change));
    } else {
        vqdial->sliderChange(static_cast<VirtualQDial::SliderChange>(change));
    }
}

// Base class handler implementation
void QDial_QBaseSliderChange(QDial* self, int change) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_SliderChange_IsBase(true);
        vqdial->sliderChange(static_cast<VirtualQDial::SliderChange>(change));
    } else {
        vqdial->sliderChange(static_cast<VirtualQDial::SliderChange>(change));
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnSliderChange(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_SliderChange_Callback(reinterpret_cast<VirtualQDial::QDial_SliderChange_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_InitStyleOption(const QDial* self, QStyleOptionSlider* option) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        vqdial->initStyleOption(option);
    } else {
        vqdial->initStyleOption(option);
    }
}

// Base class handler implementation
void QDial_QBaseInitStyleOption(const QDial* self, QStyleOptionSlider* option) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        vqdial->setQDial_InitStyleOption_IsBase(true);
        vqdial->initStyleOption(option);
    } else {
        vqdial->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnInitStyleOption(const QDial* self, intptr_t slot) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        vqdial->setQDial_InitStyleOption_Callback(reinterpret_cast<VirtualQDial::QDial_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_KeyPressEvent(QDial* self, QKeyEvent* ev) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->keyPressEvent(ev);
    } else {
        vqdial->keyPressEvent(ev);
    }
}

// Base class handler implementation
void QDial_QBaseKeyPressEvent(QDial* self, QKeyEvent* ev) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_KeyPressEvent_IsBase(true);
        vqdial->keyPressEvent(ev);
    } else {
        vqdial->keyPressEvent(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnKeyPressEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_KeyPressEvent_Callback(reinterpret_cast<VirtualQDial::QDial_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_TimerEvent(QDial* self, QTimerEvent* param1) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->timerEvent(param1);
    } else {
        vqdial->timerEvent(param1);
    }
}

// Base class handler implementation
void QDial_QBaseTimerEvent(QDial* self, QTimerEvent* param1) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_TimerEvent_IsBase(true);
        vqdial->timerEvent(param1);
    } else {
        vqdial->timerEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnTimerEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_TimerEvent_Callback(reinterpret_cast<VirtualQDial::QDial_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_WheelEvent(QDial* self, QWheelEvent* e) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->wheelEvent(e);
    } else {
        vqdial->wheelEvent(e);
    }
}

// Base class handler implementation
void QDial_QBaseWheelEvent(QDial* self, QWheelEvent* e) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_WheelEvent_IsBase(true);
        vqdial->wheelEvent(e);
    } else {
        vqdial->wheelEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnWheelEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_WheelEvent_Callback(reinterpret_cast<VirtualQDial::QDial_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_ChangeEvent(QDial* self, QEvent* e) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->changeEvent(e);
    } else {
        vqdial->changeEvent(e);
    }
}

// Base class handler implementation
void QDial_QBaseChangeEvent(QDial* self, QEvent* e) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_ChangeEvent_IsBase(true);
        vqdial->changeEvent(e);
    } else {
        vqdial->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnChangeEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_ChangeEvent_Callback(reinterpret_cast<VirtualQDial::QDial_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QDial_DevType(const QDial* self) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        return vqdial->devType();
    } else {
        return vqdial->devType();
    }
}

// Base class handler implementation
int QDial_QBaseDevType(const QDial* self) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        vqdial->setQDial_DevType_IsBase(true);
        return vqdial->devType();
    } else {
        return vqdial->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnDevType(const QDial* self, intptr_t slot) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        vqdial->setQDial_DevType_Callback(reinterpret_cast<VirtualQDial::QDial_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_SetVisible(QDial* self, bool visible) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setVisible(visible);
    } else {
        vqdial->setVisible(visible);
    }
}

// Base class handler implementation
void QDial_QBaseSetVisible(QDial* self, bool visible) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_SetVisible_IsBase(true);
        vqdial->setVisible(visible);
    } else {
        vqdial->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnSetVisible(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_SetVisible_Callback(reinterpret_cast<VirtualQDial::QDial_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QDial_HeightForWidth(const QDial* self, int param1) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        return vqdial->heightForWidth(static_cast<int>(param1));
    } else {
        return vqdial->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QDial_QBaseHeightForWidth(const QDial* self, int param1) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        vqdial->setQDial_HeightForWidth_IsBase(true);
        return vqdial->heightForWidth(static_cast<int>(param1));
    } else {
        return vqdial->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnHeightForWidth(const QDial* self, intptr_t slot) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        vqdial->setQDial_HeightForWidth_Callback(reinterpret_cast<VirtualQDial::QDial_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDial_HasHeightForWidth(const QDial* self) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        return vqdial->hasHeightForWidth();
    } else {
        return vqdial->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QDial_QBaseHasHeightForWidth(const QDial* self) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        vqdial->setQDial_HasHeightForWidth_IsBase(true);
        return vqdial->hasHeightForWidth();
    } else {
        return vqdial->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnHasHeightForWidth(const QDial* self, intptr_t slot) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        vqdial->setQDial_HasHeightForWidth_Callback(reinterpret_cast<VirtualQDial::QDial_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QDial_PaintEngine(const QDial* self) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        return vqdial->paintEngine();
    } else {
        return vqdial->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QDial_QBasePaintEngine(const QDial* self) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        vqdial->setQDial_PaintEngine_IsBase(true);
        return vqdial->paintEngine();
    } else {
        return vqdial->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnPaintEngine(const QDial* self, intptr_t slot) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        vqdial->setQDial_PaintEngine_Callback(reinterpret_cast<VirtualQDial::QDial_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_MouseDoubleClickEvent(QDial* self, QMouseEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->mouseDoubleClickEvent(event);
    } else {
        vqdial->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QDial_QBaseMouseDoubleClickEvent(QDial* self, QMouseEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_MouseDoubleClickEvent_IsBase(true);
        vqdial->mouseDoubleClickEvent(event);
    } else {
        vqdial->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnMouseDoubleClickEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQDial::QDial_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_KeyReleaseEvent(QDial* self, QKeyEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->keyReleaseEvent(event);
    } else {
        vqdial->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QDial_QBaseKeyReleaseEvent(QDial* self, QKeyEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_KeyReleaseEvent_IsBase(true);
        vqdial->keyReleaseEvent(event);
    } else {
        vqdial->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnKeyReleaseEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQDial::QDial_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_FocusInEvent(QDial* self, QFocusEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->focusInEvent(event);
    } else {
        vqdial->focusInEvent(event);
    }
}

// Base class handler implementation
void QDial_QBaseFocusInEvent(QDial* self, QFocusEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_FocusInEvent_IsBase(true);
        vqdial->focusInEvent(event);
    } else {
        vqdial->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnFocusInEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_FocusInEvent_Callback(reinterpret_cast<VirtualQDial::QDial_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_FocusOutEvent(QDial* self, QFocusEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->focusOutEvent(event);
    } else {
        vqdial->focusOutEvent(event);
    }
}

// Base class handler implementation
void QDial_QBaseFocusOutEvent(QDial* self, QFocusEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_FocusOutEvent_IsBase(true);
        vqdial->focusOutEvent(event);
    } else {
        vqdial->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnFocusOutEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_FocusOutEvent_Callback(reinterpret_cast<VirtualQDial::QDial_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_EnterEvent(QDial* self, QEnterEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->enterEvent(event);
    } else {
        vqdial->enterEvent(event);
    }
}

// Base class handler implementation
void QDial_QBaseEnterEvent(QDial* self, QEnterEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_EnterEvent_IsBase(true);
        vqdial->enterEvent(event);
    } else {
        vqdial->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnEnterEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_EnterEvent_Callback(reinterpret_cast<VirtualQDial::QDial_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_LeaveEvent(QDial* self, QEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->leaveEvent(event);
    } else {
        vqdial->leaveEvent(event);
    }
}

// Base class handler implementation
void QDial_QBaseLeaveEvent(QDial* self, QEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_LeaveEvent_IsBase(true);
        vqdial->leaveEvent(event);
    } else {
        vqdial->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnLeaveEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_LeaveEvent_Callback(reinterpret_cast<VirtualQDial::QDial_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_MoveEvent(QDial* self, QMoveEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->moveEvent(event);
    } else {
        vqdial->moveEvent(event);
    }
}

// Base class handler implementation
void QDial_QBaseMoveEvent(QDial* self, QMoveEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_MoveEvent_IsBase(true);
        vqdial->moveEvent(event);
    } else {
        vqdial->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnMoveEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_MoveEvent_Callback(reinterpret_cast<VirtualQDial::QDial_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_CloseEvent(QDial* self, QCloseEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->closeEvent(event);
    } else {
        vqdial->closeEvent(event);
    }
}

// Base class handler implementation
void QDial_QBaseCloseEvent(QDial* self, QCloseEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_CloseEvent_IsBase(true);
        vqdial->closeEvent(event);
    } else {
        vqdial->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnCloseEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_CloseEvent_Callback(reinterpret_cast<VirtualQDial::QDial_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_ContextMenuEvent(QDial* self, QContextMenuEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->contextMenuEvent(event);
    } else {
        vqdial->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QDial_QBaseContextMenuEvent(QDial* self, QContextMenuEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_ContextMenuEvent_IsBase(true);
        vqdial->contextMenuEvent(event);
    } else {
        vqdial->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnContextMenuEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_ContextMenuEvent_Callback(reinterpret_cast<VirtualQDial::QDial_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_TabletEvent(QDial* self, QTabletEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->tabletEvent(event);
    } else {
        vqdial->tabletEvent(event);
    }
}

// Base class handler implementation
void QDial_QBaseTabletEvent(QDial* self, QTabletEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_TabletEvent_IsBase(true);
        vqdial->tabletEvent(event);
    } else {
        vqdial->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnTabletEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_TabletEvent_Callback(reinterpret_cast<VirtualQDial::QDial_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_ActionEvent(QDial* self, QActionEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->actionEvent(event);
    } else {
        vqdial->actionEvent(event);
    }
}

// Base class handler implementation
void QDial_QBaseActionEvent(QDial* self, QActionEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_ActionEvent_IsBase(true);
        vqdial->actionEvent(event);
    } else {
        vqdial->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnActionEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_ActionEvent_Callback(reinterpret_cast<VirtualQDial::QDial_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_DragEnterEvent(QDial* self, QDragEnterEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->dragEnterEvent(event);
    } else {
        vqdial->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QDial_QBaseDragEnterEvent(QDial* self, QDragEnterEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_DragEnterEvent_IsBase(true);
        vqdial->dragEnterEvent(event);
    } else {
        vqdial->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnDragEnterEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_DragEnterEvent_Callback(reinterpret_cast<VirtualQDial::QDial_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_DragMoveEvent(QDial* self, QDragMoveEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->dragMoveEvent(event);
    } else {
        vqdial->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QDial_QBaseDragMoveEvent(QDial* self, QDragMoveEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_DragMoveEvent_IsBase(true);
        vqdial->dragMoveEvent(event);
    } else {
        vqdial->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnDragMoveEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_DragMoveEvent_Callback(reinterpret_cast<VirtualQDial::QDial_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_DragLeaveEvent(QDial* self, QDragLeaveEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->dragLeaveEvent(event);
    } else {
        vqdial->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QDial_QBaseDragLeaveEvent(QDial* self, QDragLeaveEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_DragLeaveEvent_IsBase(true);
        vqdial->dragLeaveEvent(event);
    } else {
        vqdial->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnDragLeaveEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_DragLeaveEvent_Callback(reinterpret_cast<VirtualQDial::QDial_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_DropEvent(QDial* self, QDropEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->dropEvent(event);
    } else {
        vqdial->dropEvent(event);
    }
}

// Base class handler implementation
void QDial_QBaseDropEvent(QDial* self, QDropEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_DropEvent_IsBase(true);
        vqdial->dropEvent(event);
    } else {
        vqdial->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnDropEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_DropEvent_Callback(reinterpret_cast<VirtualQDial::QDial_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_ShowEvent(QDial* self, QShowEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->showEvent(event);
    } else {
        vqdial->showEvent(event);
    }
}

// Base class handler implementation
void QDial_QBaseShowEvent(QDial* self, QShowEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_ShowEvent_IsBase(true);
        vqdial->showEvent(event);
    } else {
        vqdial->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnShowEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_ShowEvent_Callback(reinterpret_cast<VirtualQDial::QDial_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_HideEvent(QDial* self, QHideEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->hideEvent(event);
    } else {
        vqdial->hideEvent(event);
    }
}

// Base class handler implementation
void QDial_QBaseHideEvent(QDial* self, QHideEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_HideEvent_IsBase(true);
        vqdial->hideEvent(event);
    } else {
        vqdial->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnHideEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_HideEvent_Callback(reinterpret_cast<VirtualQDial::QDial_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDial_NativeEvent(QDial* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        return vqdial->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqdial->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QDial_QBaseNativeEvent(QDial* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_NativeEvent_IsBase(true);
        return vqdial->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqdial->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnNativeEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_NativeEvent_Callback(reinterpret_cast<VirtualQDial::QDial_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QDial_Metric(const QDial* self, int param1) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        return vqdial->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqdial->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QDial_QBaseMetric(const QDial* self, int param1) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        vqdial->setQDial_Metric_IsBase(true);
        return vqdial->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqdial->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnMetric(const QDial* self, intptr_t slot) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        vqdial->setQDial_Metric_Callback(reinterpret_cast<VirtualQDial::QDial_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_InitPainter(const QDial* self, QPainter* painter) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        vqdial->initPainter(painter);
    } else {
        vqdial->initPainter(painter);
    }
}

// Base class handler implementation
void QDial_QBaseInitPainter(const QDial* self, QPainter* painter) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        vqdial->setQDial_InitPainter_IsBase(true);
        vqdial->initPainter(painter);
    } else {
        vqdial->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnInitPainter(const QDial* self, intptr_t slot) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        vqdial->setQDial_InitPainter_Callback(reinterpret_cast<VirtualQDial::QDial_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QDial_Redirected(const QDial* self, QPoint* offset) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        return vqdial->redirected(offset);
    } else {
        return vqdial->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QDial_QBaseRedirected(const QDial* self, QPoint* offset) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        vqdial->setQDial_Redirected_IsBase(true);
        return vqdial->redirected(offset);
    } else {
        return vqdial->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnRedirected(const QDial* self, intptr_t slot) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        vqdial->setQDial_Redirected_Callback(reinterpret_cast<VirtualQDial::QDial_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QDial_SharedPainter(const QDial* self) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        return vqdial->sharedPainter();
    } else {
        return vqdial->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QDial_QBaseSharedPainter(const QDial* self) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        vqdial->setQDial_SharedPainter_IsBase(true);
        return vqdial->sharedPainter();
    } else {
        return vqdial->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnSharedPainter(const QDial* self, intptr_t slot) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        vqdial->setQDial_SharedPainter_Callback(reinterpret_cast<VirtualQDial::QDial_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_InputMethodEvent(QDial* self, QInputMethodEvent* param1) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->inputMethodEvent(param1);
    } else {
        vqdial->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QDial_QBaseInputMethodEvent(QDial* self, QInputMethodEvent* param1) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_InputMethodEvent_IsBase(true);
        vqdial->inputMethodEvent(param1);
    } else {
        vqdial->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnInputMethodEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_InputMethodEvent_Callback(reinterpret_cast<VirtualQDial::QDial_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QDial_InputMethodQuery(const QDial* self, int param1) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        return new QVariant(vqdial->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QDial_QBaseInputMethodQuery(const QDial* self, int param1) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        vqdial->setQDial_InputMethodQuery_IsBase(true);
        return new QVariant(vqdial->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnInputMethodQuery(const QDial* self, intptr_t slot) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        vqdial->setQDial_InputMethodQuery_Callback(reinterpret_cast<VirtualQDial::QDial_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDial_FocusNextPrevChild(QDial* self, bool next) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        return vqdial->focusNextPrevChild(next);
    } else {
        return vqdial->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QDial_QBaseFocusNextPrevChild(QDial* self, bool next) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_FocusNextPrevChild_IsBase(true);
        return vqdial->focusNextPrevChild(next);
    } else {
        return vqdial->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnFocusNextPrevChild(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQDial::QDial_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDial_EventFilter(QDial* self, QObject* watched, QEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        return vqdial->eventFilter(watched, event);
    } else {
        return vqdial->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QDial_QBaseEventFilter(QDial* self, QObject* watched, QEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_EventFilter_IsBase(true);
        return vqdial->eventFilter(watched, event);
    } else {
        return vqdial->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnEventFilter(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_EventFilter_Callback(reinterpret_cast<VirtualQDial::QDial_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_ChildEvent(QDial* self, QChildEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->childEvent(event);
    } else {
        vqdial->childEvent(event);
    }
}

// Base class handler implementation
void QDial_QBaseChildEvent(QDial* self, QChildEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_ChildEvent_IsBase(true);
        vqdial->childEvent(event);
    } else {
        vqdial->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnChildEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_ChildEvent_Callback(reinterpret_cast<VirtualQDial::QDial_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_CustomEvent(QDial* self, QEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->customEvent(event);
    } else {
        vqdial->customEvent(event);
    }
}

// Base class handler implementation
void QDial_QBaseCustomEvent(QDial* self, QEvent* event) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_CustomEvent_IsBase(true);
        vqdial->customEvent(event);
    } else {
        vqdial->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnCustomEvent(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_CustomEvent_Callback(reinterpret_cast<VirtualQDial::QDial_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_ConnectNotify(QDial* self, QMetaMethod* signal) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->connectNotify(*signal);
    } else {
        vqdial->connectNotify(*signal);
    }
}

// Base class handler implementation
void QDial_QBaseConnectNotify(QDial* self, QMetaMethod* signal) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_ConnectNotify_IsBase(true);
        vqdial->connectNotify(*signal);
    } else {
        vqdial->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnConnectNotify(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_ConnectNotify_Callback(reinterpret_cast<VirtualQDial::QDial_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_DisconnectNotify(QDial* self, QMetaMethod* signal) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->disconnectNotify(*signal);
    } else {
        vqdial->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QDial_QBaseDisconnectNotify(QDial* self, QMetaMethod* signal) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_DisconnectNotify_IsBase(true);
        vqdial->disconnectNotify(*signal);
    } else {
        vqdial->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnDisconnectNotify(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_DisconnectNotify_Callback(reinterpret_cast<VirtualQDial::QDial_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_SetRepeatAction(QDial* self, int action) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action));
    } else {
        vqdial->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action));
    }
}

// Base class handler implementation
void QDial_QBaseSetRepeatAction(QDial* self, int action) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_SetRepeatAction_IsBase(true);
        vqdial->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action));
    } else {
        vqdial->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnSetRepeatAction(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_SetRepeatAction_Callback(reinterpret_cast<VirtualQDial::QDial_SetRepeatAction_Callback>(slot));
    }
}

// Derived class handler implementation
int QDial_RepeatAction(const QDial* self) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        return static_cast<int>(vqdial->repeatAction());
    } else {
        return static_cast<int>(vqdial->repeatAction());
    }
}

// Base class handler implementation
int QDial_QBaseRepeatAction(const QDial* self) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        vqdial->setQDial_RepeatAction_IsBase(true);
        return static_cast<int>(vqdial->repeatAction());
    } else {
        return static_cast<int>(vqdial->repeatAction());
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnRepeatAction(const QDial* self, intptr_t slot) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        vqdial->setQDial_RepeatAction_Callback(reinterpret_cast<VirtualQDial::QDial_RepeatAction_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_UpdateMicroFocus(QDial* self) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->updateMicroFocus();
    } else {
        vqdial->updateMicroFocus();
    }
}

// Base class handler implementation
void QDial_QBaseUpdateMicroFocus(QDial* self) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_UpdateMicroFocus_IsBase(true);
        vqdial->updateMicroFocus();
    } else {
        vqdial->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnUpdateMicroFocus(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQDial::QDial_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_Create(QDial* self) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->create();
    } else {
        vqdial->create();
    }
}

// Base class handler implementation
void QDial_QBaseCreate(QDial* self) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_Create_IsBase(true);
        vqdial->create();
    } else {
        vqdial->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnCreate(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_Create_Callback(reinterpret_cast<VirtualQDial::QDial_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QDial_Destroy(QDial* self) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->destroy();
    } else {
        vqdial->destroy();
    }
}

// Base class handler implementation
void QDial_QBaseDestroy(QDial* self) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_Destroy_IsBase(true);
        vqdial->destroy();
    } else {
        vqdial->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnDestroy(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_Destroy_Callback(reinterpret_cast<VirtualQDial::QDial_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDial_FocusNextChild(QDial* self) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        return vqdial->focusNextChild();
    } else {
        return vqdial->focusNextChild();
    }
}

// Base class handler implementation
bool QDial_QBaseFocusNextChild(QDial* self) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_FocusNextChild_IsBase(true);
        return vqdial->focusNextChild();
    } else {
        return vqdial->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnFocusNextChild(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_FocusNextChild_Callback(reinterpret_cast<VirtualQDial::QDial_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDial_FocusPreviousChild(QDial* self) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        return vqdial->focusPreviousChild();
    } else {
        return vqdial->focusPreviousChild();
    }
}

// Base class handler implementation
bool QDial_QBaseFocusPreviousChild(QDial* self) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_FocusPreviousChild_IsBase(true);
        return vqdial->focusPreviousChild();
    } else {
        return vqdial->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnFocusPreviousChild(QDial* self, intptr_t slot) {
    if (auto* vqdial = dynamic_cast<VirtualQDial*>(self)) {
        vqdial->setQDial_FocusPreviousChild_Callback(reinterpret_cast<VirtualQDial::QDial_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QDial_Sender(const QDial* self) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        return vqdial->sender();
    } else {
        return vqdial->sender();
    }
}

// Base class handler implementation
QObject* QDial_QBaseSender(const QDial* self) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        vqdial->setQDial_Sender_IsBase(true);
        return vqdial->sender();
    } else {
        return vqdial->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnSender(const QDial* self, intptr_t slot) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        vqdial->setQDial_Sender_Callback(reinterpret_cast<VirtualQDial::QDial_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QDial_SenderSignalIndex(const QDial* self) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        return vqdial->senderSignalIndex();
    } else {
        return vqdial->senderSignalIndex();
    }
}

// Base class handler implementation
int QDial_QBaseSenderSignalIndex(const QDial* self) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        vqdial->setQDial_SenderSignalIndex_IsBase(true);
        return vqdial->senderSignalIndex();
    } else {
        return vqdial->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnSenderSignalIndex(const QDial* self, intptr_t slot) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        vqdial->setQDial_SenderSignalIndex_Callback(reinterpret_cast<VirtualQDial::QDial_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QDial_Receivers(const QDial* self, const char* signal) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        return vqdial->receivers(signal);
    } else {
        return vqdial->receivers(signal);
    }
}

// Base class handler implementation
int QDial_QBaseReceivers(const QDial* self, const char* signal) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        vqdial->setQDial_Receivers_IsBase(true);
        return vqdial->receivers(signal);
    } else {
        return vqdial->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnReceivers(const QDial* self, intptr_t slot) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        vqdial->setQDial_Receivers_Callback(reinterpret_cast<VirtualQDial::QDial_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDial_IsSignalConnected(const QDial* self, QMetaMethod* signal) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        return vqdial->isSignalConnected(*signal);
    } else {
        return vqdial->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QDial_QBaseIsSignalConnected(const QDial* self, QMetaMethod* signal) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        vqdial->setQDial_IsSignalConnected_IsBase(true);
        return vqdial->isSignalConnected(*signal);
    } else {
        return vqdial->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDial_OnIsSignalConnected(const QDial* self, intptr_t slot) {
    if (auto* vqdial = const_cast<VirtualQDial*>(dynamic_cast<const VirtualQDial*>(self))) {
        vqdial->setQDial_IsSignalConnected_Callback(reinterpret_cast<VirtualQDial::QDial_IsSignalConnected_Callback>(slot));
    }
}

void QDial_Delete(QDial* self) {
    delete self;
}
