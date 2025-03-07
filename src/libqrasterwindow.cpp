#include <QAccessibleInterface>
#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QCursor>
#include <QEvent>
#include <QExposeEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QIcon>
#include <QKeyEvent>
#include <QList>
#include <QMargins>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintDeviceWindow>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QPointF>
#include <QRasterWindow>
#include <QRect>
#include <QRegion>
#include <QResizeEvent>
#include <QScreen>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QSurface>
#include <QSurfaceFormat>
#include <QTabletEvent>
#include <QThread>
#include <QTimerEvent>
#include <QTouchEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWindow>
#include <qrasterwindow.h>
#include "libqrasterwindow.hpp"
#include "libqrasterwindow.hxx"

QRasterWindow* QRasterWindow_new() {
    return new VirtualQRasterWindow();
}

QRasterWindow* QRasterWindow_new2(QWindow* parent) {
    return new VirtualQRasterWindow(parent);
}

QMetaObject* QRasterWindow_MetaObject(const QRasterWindow* self) {
    return (QMetaObject*)self->metaObject();
}

void* QRasterWindow_Metacast(QRasterWindow* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QRasterWindow_Metacall(QRasterWindow* self, int param1, int param2, void** param3) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QRasterWindow_OnMetacall(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->setQRasterWindow_Metacall_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QRasterWindow_QBaseMetacall(QRasterWindow* self, int param1, int param2, void** param3) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->setQRasterWindow_Metacall_IsBase(true);
        return vqrasterwindow->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QRasterWindow_Tr(const char* s) {
    QString _ret = QRasterWindow::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QRasterWindow_Tr2(const char* s, const char* c) {
    QString _ret = QRasterWindow::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QRasterWindow_Tr3(const char* s, const char* c, int n) {
    QString _ret = QRasterWindow::tr(s, c, static_cast<int>(n));
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
int QRasterWindow_Metric(const QRasterWindow* self, int metric) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        return vqrasterwindow->metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));
    } else {
        return vqrasterwindow->metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));
    }
}

// Base class handler implementation
int QRasterWindow_QBaseMetric(const QRasterWindow* self, int metric) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        vqrasterwindow->setQRasterWindow_Metric_IsBase(true);
        return vqrasterwindow->metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));
    } else {
        return vqrasterwindow->metric(static_cast<QPaintDevice::PaintDeviceMetric>(metric));
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnMetric(const QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        vqrasterwindow->setQRasterWindow_Metric_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QRasterWindow_Redirected(const QRasterWindow* self, QPoint* param1) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        return vqrasterwindow->redirected(param1);
    } else {
        return vqrasterwindow->redirected(param1);
    }
}

// Base class handler implementation
QPaintDevice* QRasterWindow_QBaseRedirected(const QRasterWindow* self, QPoint* param1) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        vqrasterwindow->setQRasterWindow_Redirected_IsBase(true);
        return vqrasterwindow->redirected(param1);
    } else {
        return vqrasterwindow->redirected(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnRedirected(const QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        vqrasterwindow->setQRasterWindow_Redirected_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
void QRasterWindow_ExposeEvent(QRasterWindow* self, QExposeEvent* param1) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->exposeEvent(param1);
    } else {
        vqrasterwindow->exposeEvent(param1);
    }
}

// Base class handler implementation
void QRasterWindow_QBaseExposeEvent(QRasterWindow* self, QExposeEvent* param1) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->setQRasterWindow_ExposeEvent_IsBase(true);
        vqrasterwindow->exposeEvent(param1);
    } else {
        vqrasterwindow->exposeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnExposeEvent(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->setQRasterWindow_ExposeEvent_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_ExposeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRasterWindow_PaintEvent(QRasterWindow* self, QPaintEvent* event) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->paintEvent(event);
    } else {
        vqrasterwindow->paintEvent(event);
    }
}

// Base class handler implementation
void QRasterWindow_QBasePaintEvent(QRasterWindow* self, QPaintEvent* event) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->setQRasterWindow_PaintEvent_IsBase(true);
        vqrasterwindow->paintEvent(event);
    } else {
        vqrasterwindow->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnPaintEvent(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->setQRasterWindow_PaintEvent_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QRasterWindow_Event(QRasterWindow* self, QEvent* event) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        return vqrasterwindow->event(event);
    } else {
        return vqrasterwindow->event(event);
    }
}

// Base class handler implementation
bool QRasterWindow_QBaseEvent(QRasterWindow* self, QEvent* event) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->setQRasterWindow_Event_IsBase(true);
        return vqrasterwindow->event(event);
    } else {
        return vqrasterwindow->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnEvent(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->setQRasterWindow_Event_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_Event_Callback>(slot));
    }
}

// Derived class handler implementation
int QRasterWindow_SurfaceType(const QRasterWindow* self) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        return static_cast<int>(vqrasterwindow->surfaceType());
    } else {
        return static_cast<int>(vqrasterwindow->surfaceType());
    }
}

// Base class handler implementation
int QRasterWindow_QBaseSurfaceType(const QRasterWindow* self) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        vqrasterwindow->setQRasterWindow_SurfaceType_IsBase(true);
        return static_cast<int>(vqrasterwindow->surfaceType());
    } else {
        return static_cast<int>(vqrasterwindow->surfaceType());
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnSurfaceType(const QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        vqrasterwindow->setQRasterWindow_SurfaceType_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_SurfaceType_Callback>(slot));
    }
}

// Derived class handler implementation
QSurfaceFormat* QRasterWindow_Format(const QRasterWindow* self) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        return new QSurfaceFormat(vqrasterwindow->format());
    } else {
        return new QSurfaceFormat(self->format());
    }
}

// Base class handler implementation
QSurfaceFormat* QRasterWindow_QBaseFormat(const QRasterWindow* self) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        vqrasterwindow->setQRasterWindow_Format_IsBase(true);
        return new QSurfaceFormat(vqrasterwindow->format());
    } else {
        return new QSurfaceFormat(self->format());
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnFormat(const QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        vqrasterwindow->setQRasterWindow_Format_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_Format_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QRasterWindow_Size(const QRasterWindow* self) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        return new QSize(vqrasterwindow->size());
    } else {
        return new QSize(self->size());
    }
}

// Base class handler implementation
QSize* QRasterWindow_QBaseSize(const QRasterWindow* self) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        vqrasterwindow->setQRasterWindow_Size_IsBase(true);
        return new QSize(vqrasterwindow->size());
    } else {
        return new QSize(self->size());
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnSize(const QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        vqrasterwindow->setQRasterWindow_Size_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_Size_Callback>(slot));
    }
}

// Derived class handler implementation
QAccessibleInterface* QRasterWindow_AccessibleRoot(const QRasterWindow* self) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        return vqrasterwindow->accessibleRoot();
    } else {
        return vqrasterwindow->accessibleRoot();
    }
}

// Base class handler implementation
QAccessibleInterface* QRasterWindow_QBaseAccessibleRoot(const QRasterWindow* self) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        vqrasterwindow->setQRasterWindow_AccessibleRoot_IsBase(true);
        return vqrasterwindow->accessibleRoot();
    } else {
        return vqrasterwindow->accessibleRoot();
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnAccessibleRoot(const QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        vqrasterwindow->setQRasterWindow_AccessibleRoot_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_AccessibleRoot_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QRasterWindow_FocusObject(const QRasterWindow* self) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        return vqrasterwindow->focusObject();
    } else {
        return vqrasterwindow->focusObject();
    }
}

// Base class handler implementation
QObject* QRasterWindow_QBaseFocusObject(const QRasterWindow* self) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        vqrasterwindow->setQRasterWindow_FocusObject_IsBase(true);
        return vqrasterwindow->focusObject();
    } else {
        return vqrasterwindow->focusObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnFocusObject(const QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        vqrasterwindow->setQRasterWindow_FocusObject_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_FocusObject_Callback>(slot));
    }
}

// Derived class handler implementation
void QRasterWindow_ResizeEvent(QRasterWindow* self, QResizeEvent* param1) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->resizeEvent(param1);
    } else {
        vqrasterwindow->resizeEvent(param1);
    }
}

// Base class handler implementation
void QRasterWindow_QBaseResizeEvent(QRasterWindow* self, QResizeEvent* param1) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->setQRasterWindow_ResizeEvent_IsBase(true);
        vqrasterwindow->resizeEvent(param1);
    } else {
        vqrasterwindow->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnResizeEvent(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->setQRasterWindow_ResizeEvent_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRasterWindow_MoveEvent(QRasterWindow* self, QMoveEvent* param1) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->moveEvent(param1);
    } else {
        vqrasterwindow->moveEvent(param1);
    }
}

// Base class handler implementation
void QRasterWindow_QBaseMoveEvent(QRasterWindow* self, QMoveEvent* param1) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->setQRasterWindow_MoveEvent_IsBase(true);
        vqrasterwindow->moveEvent(param1);
    } else {
        vqrasterwindow->moveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnMoveEvent(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->setQRasterWindow_MoveEvent_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRasterWindow_FocusInEvent(QRasterWindow* self, QFocusEvent* param1) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->focusInEvent(param1);
    } else {
        vqrasterwindow->focusInEvent(param1);
    }
}

// Base class handler implementation
void QRasterWindow_QBaseFocusInEvent(QRasterWindow* self, QFocusEvent* param1) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->setQRasterWindow_FocusInEvent_IsBase(true);
        vqrasterwindow->focusInEvent(param1);
    } else {
        vqrasterwindow->focusInEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnFocusInEvent(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->setQRasterWindow_FocusInEvent_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRasterWindow_FocusOutEvent(QRasterWindow* self, QFocusEvent* param1) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->focusOutEvent(param1);
    } else {
        vqrasterwindow->focusOutEvent(param1);
    }
}

// Base class handler implementation
void QRasterWindow_QBaseFocusOutEvent(QRasterWindow* self, QFocusEvent* param1) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->setQRasterWindow_FocusOutEvent_IsBase(true);
        vqrasterwindow->focusOutEvent(param1);
    } else {
        vqrasterwindow->focusOutEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnFocusOutEvent(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->setQRasterWindow_FocusOutEvent_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRasterWindow_ShowEvent(QRasterWindow* self, QShowEvent* param1) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->showEvent(param1);
    } else {
        vqrasterwindow->showEvent(param1);
    }
}

// Base class handler implementation
void QRasterWindow_QBaseShowEvent(QRasterWindow* self, QShowEvent* param1) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->setQRasterWindow_ShowEvent_IsBase(true);
        vqrasterwindow->showEvent(param1);
    } else {
        vqrasterwindow->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnShowEvent(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->setQRasterWindow_ShowEvent_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRasterWindow_HideEvent(QRasterWindow* self, QHideEvent* param1) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->hideEvent(param1);
    } else {
        vqrasterwindow->hideEvent(param1);
    }
}

// Base class handler implementation
void QRasterWindow_QBaseHideEvent(QRasterWindow* self, QHideEvent* param1) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->setQRasterWindow_HideEvent_IsBase(true);
        vqrasterwindow->hideEvent(param1);
    } else {
        vqrasterwindow->hideEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnHideEvent(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->setQRasterWindow_HideEvent_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRasterWindow_CloseEvent(QRasterWindow* self, QCloseEvent* param1) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->closeEvent(param1);
    } else {
        vqrasterwindow->closeEvent(param1);
    }
}

// Base class handler implementation
void QRasterWindow_QBaseCloseEvent(QRasterWindow* self, QCloseEvent* param1) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->setQRasterWindow_CloseEvent_IsBase(true);
        vqrasterwindow->closeEvent(param1);
    } else {
        vqrasterwindow->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnCloseEvent(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->setQRasterWindow_CloseEvent_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRasterWindow_KeyPressEvent(QRasterWindow* self, QKeyEvent* param1) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->keyPressEvent(param1);
    } else {
        vqrasterwindow->keyPressEvent(param1);
    }
}

// Base class handler implementation
void QRasterWindow_QBaseKeyPressEvent(QRasterWindow* self, QKeyEvent* param1) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->setQRasterWindow_KeyPressEvent_IsBase(true);
        vqrasterwindow->keyPressEvent(param1);
    } else {
        vqrasterwindow->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnKeyPressEvent(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->setQRasterWindow_KeyPressEvent_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRasterWindow_KeyReleaseEvent(QRasterWindow* self, QKeyEvent* param1) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->keyReleaseEvent(param1);
    } else {
        vqrasterwindow->keyReleaseEvent(param1);
    }
}

// Base class handler implementation
void QRasterWindow_QBaseKeyReleaseEvent(QRasterWindow* self, QKeyEvent* param1) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->setQRasterWindow_KeyReleaseEvent_IsBase(true);
        vqrasterwindow->keyReleaseEvent(param1);
    } else {
        vqrasterwindow->keyReleaseEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnKeyReleaseEvent(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->setQRasterWindow_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRasterWindow_MousePressEvent(QRasterWindow* self, QMouseEvent* param1) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->mousePressEvent(param1);
    } else {
        vqrasterwindow->mousePressEvent(param1);
    }
}

// Base class handler implementation
void QRasterWindow_QBaseMousePressEvent(QRasterWindow* self, QMouseEvent* param1) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->setQRasterWindow_MousePressEvent_IsBase(true);
        vqrasterwindow->mousePressEvent(param1);
    } else {
        vqrasterwindow->mousePressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnMousePressEvent(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->setQRasterWindow_MousePressEvent_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRasterWindow_MouseReleaseEvent(QRasterWindow* self, QMouseEvent* param1) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->mouseReleaseEvent(param1);
    } else {
        vqrasterwindow->mouseReleaseEvent(param1);
    }
}

// Base class handler implementation
void QRasterWindow_QBaseMouseReleaseEvent(QRasterWindow* self, QMouseEvent* param1) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->setQRasterWindow_MouseReleaseEvent_IsBase(true);
        vqrasterwindow->mouseReleaseEvent(param1);
    } else {
        vqrasterwindow->mouseReleaseEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnMouseReleaseEvent(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->setQRasterWindow_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRasterWindow_MouseDoubleClickEvent(QRasterWindow* self, QMouseEvent* param1) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->mouseDoubleClickEvent(param1);
    } else {
        vqrasterwindow->mouseDoubleClickEvent(param1);
    }
}

// Base class handler implementation
void QRasterWindow_QBaseMouseDoubleClickEvent(QRasterWindow* self, QMouseEvent* param1) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->setQRasterWindow_MouseDoubleClickEvent_IsBase(true);
        vqrasterwindow->mouseDoubleClickEvent(param1);
    } else {
        vqrasterwindow->mouseDoubleClickEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnMouseDoubleClickEvent(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->setQRasterWindow_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRasterWindow_MouseMoveEvent(QRasterWindow* self, QMouseEvent* param1) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->mouseMoveEvent(param1);
    } else {
        vqrasterwindow->mouseMoveEvent(param1);
    }
}

// Base class handler implementation
void QRasterWindow_QBaseMouseMoveEvent(QRasterWindow* self, QMouseEvent* param1) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->setQRasterWindow_MouseMoveEvent_IsBase(true);
        vqrasterwindow->mouseMoveEvent(param1);
    } else {
        vqrasterwindow->mouseMoveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnMouseMoveEvent(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->setQRasterWindow_MouseMoveEvent_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRasterWindow_WheelEvent(QRasterWindow* self, QWheelEvent* param1) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->wheelEvent(param1);
    } else {
        vqrasterwindow->wheelEvent(param1);
    }
}

// Base class handler implementation
void QRasterWindow_QBaseWheelEvent(QRasterWindow* self, QWheelEvent* param1) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->setQRasterWindow_WheelEvent_IsBase(true);
        vqrasterwindow->wheelEvent(param1);
    } else {
        vqrasterwindow->wheelEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnWheelEvent(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->setQRasterWindow_WheelEvent_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRasterWindow_TouchEvent(QRasterWindow* self, QTouchEvent* param1) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->touchEvent(param1);
    } else {
        vqrasterwindow->touchEvent(param1);
    }
}

// Base class handler implementation
void QRasterWindow_QBaseTouchEvent(QRasterWindow* self, QTouchEvent* param1) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->setQRasterWindow_TouchEvent_IsBase(true);
        vqrasterwindow->touchEvent(param1);
    } else {
        vqrasterwindow->touchEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnTouchEvent(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->setQRasterWindow_TouchEvent_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_TouchEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRasterWindow_TabletEvent(QRasterWindow* self, QTabletEvent* param1) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->tabletEvent(param1);
    } else {
        vqrasterwindow->tabletEvent(param1);
    }
}

// Base class handler implementation
void QRasterWindow_QBaseTabletEvent(QRasterWindow* self, QTabletEvent* param1) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->setQRasterWindow_TabletEvent_IsBase(true);
        vqrasterwindow->tabletEvent(param1);
    } else {
        vqrasterwindow->tabletEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnTabletEvent(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->setQRasterWindow_TabletEvent_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QRasterWindow_NativeEvent(QRasterWindow* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        return vqrasterwindow->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqrasterwindow->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QRasterWindow_QBaseNativeEvent(QRasterWindow* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->setQRasterWindow_NativeEvent_IsBase(true);
        return vqrasterwindow->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqrasterwindow->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnNativeEvent(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->setQRasterWindow_NativeEvent_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QRasterWindow_EventFilter(QRasterWindow* self, QObject* watched, QEvent* event) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        return vqrasterwindow->eventFilter(watched, event);
    } else {
        return vqrasterwindow->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QRasterWindow_QBaseEventFilter(QRasterWindow* self, QObject* watched, QEvent* event) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->setQRasterWindow_EventFilter_IsBase(true);
        return vqrasterwindow->eventFilter(watched, event);
    } else {
        return vqrasterwindow->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnEventFilter(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->setQRasterWindow_EventFilter_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QRasterWindow_TimerEvent(QRasterWindow* self, QTimerEvent* event) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->timerEvent(event);
    } else {
        vqrasterwindow->timerEvent(event);
    }
}

// Base class handler implementation
void QRasterWindow_QBaseTimerEvent(QRasterWindow* self, QTimerEvent* event) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->setQRasterWindow_TimerEvent_IsBase(true);
        vqrasterwindow->timerEvent(event);
    } else {
        vqrasterwindow->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnTimerEvent(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->setQRasterWindow_TimerEvent_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRasterWindow_ChildEvent(QRasterWindow* self, QChildEvent* event) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->childEvent(event);
    } else {
        vqrasterwindow->childEvent(event);
    }
}

// Base class handler implementation
void QRasterWindow_QBaseChildEvent(QRasterWindow* self, QChildEvent* event) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->setQRasterWindow_ChildEvent_IsBase(true);
        vqrasterwindow->childEvent(event);
    } else {
        vqrasterwindow->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnChildEvent(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->setQRasterWindow_ChildEvent_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRasterWindow_CustomEvent(QRasterWindow* self, QEvent* event) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->customEvent(event);
    } else {
        vqrasterwindow->customEvent(event);
    }
}

// Base class handler implementation
void QRasterWindow_QBaseCustomEvent(QRasterWindow* self, QEvent* event) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->setQRasterWindow_CustomEvent_IsBase(true);
        vqrasterwindow->customEvent(event);
    } else {
        vqrasterwindow->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnCustomEvent(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->setQRasterWindow_CustomEvent_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRasterWindow_ConnectNotify(QRasterWindow* self, QMetaMethod* signal) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->connectNotify(*signal);
    } else {
        vqrasterwindow->connectNotify(*signal);
    }
}

// Base class handler implementation
void QRasterWindow_QBaseConnectNotify(QRasterWindow* self, QMetaMethod* signal) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->setQRasterWindow_ConnectNotify_IsBase(true);
        vqrasterwindow->connectNotify(*signal);
    } else {
        vqrasterwindow->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnConnectNotify(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->setQRasterWindow_ConnectNotify_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QRasterWindow_DisconnectNotify(QRasterWindow* self, QMetaMethod* signal) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->disconnectNotify(*signal);
    } else {
        vqrasterwindow->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QRasterWindow_QBaseDisconnectNotify(QRasterWindow* self, QMetaMethod* signal) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->setQRasterWindow_DisconnectNotify_IsBase(true);
        vqrasterwindow->disconnectNotify(*signal);
    } else {
        vqrasterwindow->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnDisconnectNotify(QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = dynamic_cast<VirtualQRasterWindow*>(self)) {
        vqrasterwindow->setQRasterWindow_DisconnectNotify_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
int QRasterWindow_DevType(const QRasterWindow* self) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        return vqrasterwindow->devType();
    } else {
        return vqrasterwindow->devType();
    }
}

// Base class handler implementation
int QRasterWindow_QBaseDevType(const QRasterWindow* self) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        vqrasterwindow->setQRasterWindow_DevType_IsBase(true);
        return vqrasterwindow->devType();
    } else {
        return vqrasterwindow->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnDevType(const QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        vqrasterwindow->setQRasterWindow_DevType_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QRasterWindow_InitPainter(const QRasterWindow* self, QPainter* painter) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        vqrasterwindow->initPainter(painter);
    } else {
        vqrasterwindow->initPainter(painter);
    }
}

// Base class handler implementation
void QRasterWindow_QBaseInitPainter(const QRasterWindow* self, QPainter* painter) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        vqrasterwindow->setQRasterWindow_InitPainter_IsBase(true);
        vqrasterwindow->initPainter(painter);
    } else {
        vqrasterwindow->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnInitPainter(const QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        vqrasterwindow->setQRasterWindow_InitPainter_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QRasterWindow_SharedPainter(const QRasterWindow* self) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        return vqrasterwindow->sharedPainter();
    } else {
        return vqrasterwindow->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QRasterWindow_QBaseSharedPainter(const QRasterWindow* self) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        vqrasterwindow->setQRasterWindow_SharedPainter_IsBase(true);
        return vqrasterwindow->sharedPainter();
    } else {
        return vqrasterwindow->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnSharedPainter(const QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        vqrasterwindow->setQRasterWindow_SharedPainter_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void* QRasterWindow_ResolveInterface(const QRasterWindow* self, const char* name, int revision) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        return vqrasterwindow->resolveInterface(name, static_cast<int>(revision));
    } else {
        return vqrasterwindow->resolveInterface(name, static_cast<int>(revision));
    }
}

// Base class handler implementation
void* QRasterWindow_QBaseResolveInterface(const QRasterWindow* self, const char* name, int revision) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        vqrasterwindow->setQRasterWindow_ResolveInterface_IsBase(true);
        return vqrasterwindow->resolveInterface(name, static_cast<int>(revision));
    } else {
        return vqrasterwindow->resolveInterface(name, static_cast<int>(revision));
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnResolveInterface(const QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        vqrasterwindow->setQRasterWindow_ResolveInterface_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_ResolveInterface_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QRasterWindow_Sender(const QRasterWindow* self) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        return vqrasterwindow->sender();
    } else {
        return vqrasterwindow->sender();
    }
}

// Base class handler implementation
QObject* QRasterWindow_QBaseSender(const QRasterWindow* self) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        vqrasterwindow->setQRasterWindow_Sender_IsBase(true);
        return vqrasterwindow->sender();
    } else {
        return vqrasterwindow->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnSender(const QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        vqrasterwindow->setQRasterWindow_Sender_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QRasterWindow_SenderSignalIndex(const QRasterWindow* self) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        return vqrasterwindow->senderSignalIndex();
    } else {
        return vqrasterwindow->senderSignalIndex();
    }
}

// Base class handler implementation
int QRasterWindow_QBaseSenderSignalIndex(const QRasterWindow* self) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        vqrasterwindow->setQRasterWindow_SenderSignalIndex_IsBase(true);
        return vqrasterwindow->senderSignalIndex();
    } else {
        return vqrasterwindow->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnSenderSignalIndex(const QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        vqrasterwindow->setQRasterWindow_SenderSignalIndex_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QRasterWindow_Receivers(const QRasterWindow* self, const char* signal) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        return vqrasterwindow->receivers(signal);
    } else {
        return vqrasterwindow->receivers(signal);
    }
}

// Base class handler implementation
int QRasterWindow_QBaseReceivers(const QRasterWindow* self, const char* signal) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        vqrasterwindow->setQRasterWindow_Receivers_IsBase(true);
        return vqrasterwindow->receivers(signal);
    } else {
        return vqrasterwindow->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnReceivers(const QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        vqrasterwindow->setQRasterWindow_Receivers_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QRasterWindow_IsSignalConnected(const QRasterWindow* self, QMetaMethod* signal) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        return vqrasterwindow->isSignalConnected(*signal);
    } else {
        return vqrasterwindow->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QRasterWindow_QBaseIsSignalConnected(const QRasterWindow* self, QMetaMethod* signal) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        vqrasterwindow->setQRasterWindow_IsSignalConnected_IsBase(true);
        return vqrasterwindow->isSignalConnected(*signal);
    } else {
        return vqrasterwindow->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QRasterWindow_OnIsSignalConnected(const QRasterWindow* self, intptr_t slot) {
    if (auto* vqrasterwindow = const_cast<VirtualQRasterWindow*>(dynamic_cast<const VirtualQRasterWindow*>(self))) {
        vqrasterwindow->setQRasterWindow_IsSignalConnected_Callback(reinterpret_cast<VirtualQRasterWindow::QRasterWindow_IsSignalConnected_Callback>(slot));
    }
}

void QRasterWindow_Delete(QRasterWindow* self) {
    delete self;
}
