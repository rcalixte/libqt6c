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
#include <QPoint>
#include <QPointF>
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
#include <qpaintdevicewindow.h>
#include "libqpaintdevicewindow.hpp"
#include "libqpaintdevicewindow.hxx"

QMetaObject* QPaintDeviceWindow_MetaObject(const QPaintDeviceWindow* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPaintDeviceWindow_Metacast(QPaintDeviceWindow* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPaintDeviceWindow_Metacall(QPaintDeviceWindow* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QPaintDeviceWindow_Tr(const char* s) {
    QString _ret = QPaintDeviceWindow::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QPaintDeviceWindow_Update(QPaintDeviceWindow* self, QRect* rect) {
    self->update(*rect);
}

void QPaintDeviceWindow_UpdateWithRegion(QPaintDeviceWindow* self, QRegion* region) {
    self->update(*region);
}

void QPaintDeviceWindow_Update2(QPaintDeviceWindow* self) {
    self->update();
}

libqt_string QPaintDeviceWindow_Tr2(const char* s, const char* c) {
    QString _ret = QPaintDeviceWindow::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QPaintDeviceWindow_Tr3(const char* s, const char* c, int n) {
    QString _ret = QPaintDeviceWindow::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QPaintDeviceWindow_SurfaceType(const QPaintDeviceWindow* self) {
    return static_cast<int>(self->surfaceType());
}

QSurfaceFormat* QPaintDeviceWindow_Format(const QPaintDeviceWindow* self) {
    return new QSurfaceFormat(self->format());
}

QSize* QPaintDeviceWindow_Size(const QPaintDeviceWindow* self) {
    return new QSize(self->size());
}

QAccessibleInterface* QPaintDeviceWindow_AccessibleRoot(const QPaintDeviceWindow* self) {
    return self->accessibleRoot();
}

QObject* QPaintDeviceWindow_FocusObject(const QPaintDeviceWindow* self) {
    return self->focusObject();
}

bool QPaintDeviceWindow_EventFilter(QPaintDeviceWindow* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

int QPaintDeviceWindow_DevType(const QPaintDeviceWindow* self) {
    return self->devType();
}

void QPaintDeviceWindow_Delete(QPaintDeviceWindow* self) {
    delete self;
}
