#include <QAction>
#include <QActionEvent>
#include <QAnyStringView>
#include <QBackingStore>
#include <QBindingStorage>
#include <QBitmap>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QColor>
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
#include <QShowEvent>
#include <QSize>
#include <QSizePolicy>
#include <QSplashScreen>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyle>
#include <QTabletEvent>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <QWindow>
#include <qsplashscreen.h>
#include "libqsplashscreen.hpp"
#include "libqsplashscreen.hxx"

QSplashScreen* QSplashScreen_new() {
    return new VirtualQSplashScreen();
}

QSplashScreen* QSplashScreen_new2(QScreen* screen) {
    return new VirtualQSplashScreen(screen);
}

QSplashScreen* QSplashScreen_new3(QPixmap* pixmap) {
    return new VirtualQSplashScreen(*pixmap);
}

QSplashScreen* QSplashScreen_new4(QPixmap* pixmap, int f) {
    return new VirtualQSplashScreen(*pixmap, static_cast<Qt::WindowFlags>(f));
}

QSplashScreen* QSplashScreen_new5(QScreen* screen, QPixmap* pixmap) {
    return new VirtualQSplashScreen(screen, *pixmap);
}

QSplashScreen* QSplashScreen_new6(QScreen* screen, QPixmap* pixmap, int f) {
    return new VirtualQSplashScreen(screen, *pixmap, static_cast<Qt::WindowFlags>(f));
}

QMetaObject* QSplashScreen_MetaObject(const QSplashScreen* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSplashScreen_Metacast(QSplashScreen* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSplashScreen_Metacall(QSplashScreen* self, int param1, int param2, void** param3) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QSplashScreen_OnMetacall(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_Metacall_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QSplashScreen_QBaseMetacall(QSplashScreen* self, int param1, int param2, void** param3) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_Metacall_IsBase(true);
        return vqsplashscreen->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QSplashScreen_Tr(const char* s) {
    QString _ret = QSplashScreen::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QSplashScreen_SetPixmap(QSplashScreen* self, QPixmap* pixmap) {
    self->setPixmap(*pixmap);
}

QPixmap* QSplashScreen_Pixmap(const QSplashScreen* self) {
    return new QPixmap(self->pixmap());
}

void QSplashScreen_Finish(QSplashScreen* self, QWidget* w) {
    self->finish(w);
}

void QSplashScreen_Repaint(QSplashScreen* self) {
    self->repaint();
}

libqt_string QSplashScreen_Message(const QSplashScreen* self) {
    QString _ret = self->message();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QSplashScreen_ShowMessage(QSplashScreen* self, libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    self->showMessage(message_QString);
}

void QSplashScreen_ClearMessage(QSplashScreen* self) {
    self->clearMessage();
}

void QSplashScreen_MessageChanged(QSplashScreen* self, libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    self->messageChanged(message_QString);
}

void QSplashScreen_Connect_MessageChanged(QSplashScreen* self, intptr_t slot) {
    void (*slotFunc)(QSplashScreen*, libqt_string) = reinterpret_cast<void (*)(QSplashScreen*, libqt_string)>(slot);
    QSplashScreen::connect(self, &QSplashScreen::messageChanged, [self, slotFunc](const QString& message) {
        const QString message_ret = message;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray message_b = message_ret.toUtf8();
        libqt_string message_str;
        message_str.len = message_b.length();
        message_str.data = static_cast<char*>(malloc((message_str.len + 1) * sizeof(char)));
        memcpy(message_str.data, message_b.data(), message_str.len);
        message_str.data[message_str.len] = '\0';
        libqt_string sigval1 = message_str;
        slotFunc(self, sigval1);
    });
}

libqt_string QSplashScreen_Tr2(const char* s, const char* c) {
    QString _ret = QSplashScreen::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QSplashScreen_Tr3(const char* s, const char* c, int n) {
    QString _ret = QSplashScreen::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QSplashScreen_ShowMessage2(QSplashScreen* self, libqt_string message, int alignment) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    self->showMessage(message_QString, static_cast<int>(alignment));
}

void QSplashScreen_ShowMessage3(QSplashScreen* self, libqt_string message, int alignment, QColor* color) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    self->showMessage(message_QString, static_cast<int>(alignment), *color);
}

// Derived class handler implementation
bool QSplashScreen_Event(QSplashScreen* self, QEvent* e) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        return vqsplashscreen->event(e);
    } else {
        return vqsplashscreen->event(e);
    }
}

// Base class handler implementation
bool QSplashScreen_QBaseEvent(QSplashScreen* self, QEvent* e) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_Event_IsBase(true);
        return vqsplashscreen->event(e);
    } else {
        return vqsplashscreen->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_Event_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplashScreen_DrawContents(QSplashScreen* self, QPainter* painter) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->drawContents(painter);
    } else {
        vqsplashscreen->drawContents(painter);
    }
}

// Base class handler implementation
void QSplashScreen_QBaseDrawContents(QSplashScreen* self, QPainter* painter) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_DrawContents_IsBase(true);
        vqsplashscreen->drawContents(painter);
    } else {
        vqsplashscreen->drawContents(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnDrawContents(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_DrawContents_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_DrawContents_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplashScreen_MousePressEvent(QSplashScreen* self, QMouseEvent* param1) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->mousePressEvent(param1);
    } else {
        vqsplashscreen->mousePressEvent(param1);
    }
}

// Base class handler implementation
void QSplashScreen_QBaseMousePressEvent(QSplashScreen* self, QMouseEvent* param1) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_MousePressEvent_IsBase(true);
        vqsplashscreen->mousePressEvent(param1);
    } else {
        vqsplashscreen->mousePressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnMousePressEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_MousePressEvent_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QSplashScreen_DevType(const QSplashScreen* self) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self))) {
        return vqsplashscreen->devType();
    } else {
        return vqsplashscreen->devType();
    }
}

// Base class handler implementation
int QSplashScreen_QBaseDevType(const QSplashScreen* self) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self))) {
        vqsplashscreen->setQSplashScreen_DevType_IsBase(true);
        return vqsplashscreen->devType();
    } else {
        return vqsplashscreen->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnDevType(const QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self))) {
        vqsplashscreen->setQSplashScreen_DevType_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplashScreen_SetVisible(QSplashScreen* self, bool visible) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setVisible(visible);
    } else {
        vqsplashscreen->setVisible(visible);
    }
}

// Base class handler implementation
void QSplashScreen_QBaseSetVisible(QSplashScreen* self, bool visible) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_SetVisible_IsBase(true);
        vqsplashscreen->setVisible(visible);
    } else {
        vqsplashscreen->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnSetVisible(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_SetVisible_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QSplashScreen_SizeHint(const QSplashScreen* self) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self))) {
        return new QSize(vqsplashscreen->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QSplashScreen_QBaseSizeHint(const QSplashScreen* self) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self))) {
        vqsplashscreen->setQSplashScreen_SizeHint_IsBase(true);
        return new QSize(vqsplashscreen->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnSizeHint(const QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self))) {
        vqsplashscreen->setQSplashScreen_SizeHint_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QSplashScreen_MinimumSizeHint(const QSplashScreen* self) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self))) {
        return new QSize(vqsplashscreen->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QSplashScreen_QBaseMinimumSizeHint(const QSplashScreen* self) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self))) {
        vqsplashscreen->setQSplashScreen_MinimumSizeHint_IsBase(true);
        return new QSize(vqsplashscreen->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnMinimumSizeHint(const QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self))) {
        vqsplashscreen->setQSplashScreen_MinimumSizeHint_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QSplashScreen_HeightForWidth(const QSplashScreen* self, int param1) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self))) {
        return vqsplashscreen->heightForWidth(static_cast<int>(param1));
    } else {
        return vqsplashscreen->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QSplashScreen_QBaseHeightForWidth(const QSplashScreen* self, int param1) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self))) {
        vqsplashscreen->setQSplashScreen_HeightForWidth_IsBase(true);
        return vqsplashscreen->heightForWidth(static_cast<int>(param1));
    } else {
        return vqsplashscreen->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnHeightForWidth(const QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self))) {
        vqsplashscreen->setQSplashScreen_HeightForWidth_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSplashScreen_HasHeightForWidth(const QSplashScreen* self) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self))) {
        return vqsplashscreen->hasHeightForWidth();
    } else {
        return vqsplashscreen->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QSplashScreen_QBaseHasHeightForWidth(const QSplashScreen* self) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self))) {
        vqsplashscreen->setQSplashScreen_HasHeightForWidth_IsBase(true);
        return vqsplashscreen->hasHeightForWidth();
    } else {
        return vqsplashscreen->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnHasHeightForWidth(const QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self))) {
        vqsplashscreen->setQSplashScreen_HasHeightForWidth_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QSplashScreen_PaintEngine(const QSplashScreen* self) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self))) {
        return vqsplashscreen->paintEngine();
    } else {
        return vqsplashscreen->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QSplashScreen_QBasePaintEngine(const QSplashScreen* self) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self))) {
        vqsplashscreen->setQSplashScreen_PaintEngine_IsBase(true);
        return vqsplashscreen->paintEngine();
    } else {
        return vqsplashscreen->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnPaintEngine(const QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self))) {
        vqsplashscreen->setQSplashScreen_PaintEngine_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplashScreen_MouseReleaseEvent(QSplashScreen* self, QMouseEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->mouseReleaseEvent(event);
    } else {
        vqsplashscreen->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QSplashScreen_QBaseMouseReleaseEvent(QSplashScreen* self, QMouseEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_MouseReleaseEvent_IsBase(true);
        vqsplashscreen->mouseReleaseEvent(event);
    } else {
        vqsplashscreen->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnMouseReleaseEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplashScreen_MouseDoubleClickEvent(QSplashScreen* self, QMouseEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->mouseDoubleClickEvent(event);
    } else {
        vqsplashscreen->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QSplashScreen_QBaseMouseDoubleClickEvent(QSplashScreen* self, QMouseEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_MouseDoubleClickEvent_IsBase(true);
        vqsplashscreen->mouseDoubleClickEvent(event);
    } else {
        vqsplashscreen->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnMouseDoubleClickEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplashScreen_MouseMoveEvent(QSplashScreen* self, QMouseEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->mouseMoveEvent(event);
    } else {
        vqsplashscreen->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QSplashScreen_QBaseMouseMoveEvent(QSplashScreen* self, QMouseEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_MouseMoveEvent_IsBase(true);
        vqsplashscreen->mouseMoveEvent(event);
    } else {
        vqsplashscreen->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnMouseMoveEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_MouseMoveEvent_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplashScreen_WheelEvent(QSplashScreen* self, QWheelEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->wheelEvent(event);
    } else {
        vqsplashscreen->wheelEvent(event);
    }
}

// Base class handler implementation
void QSplashScreen_QBaseWheelEvent(QSplashScreen* self, QWheelEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_WheelEvent_IsBase(true);
        vqsplashscreen->wheelEvent(event);
    } else {
        vqsplashscreen->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnWheelEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_WheelEvent_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplashScreen_KeyPressEvent(QSplashScreen* self, QKeyEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->keyPressEvent(event);
    } else {
        vqsplashscreen->keyPressEvent(event);
    }
}

// Base class handler implementation
void QSplashScreen_QBaseKeyPressEvent(QSplashScreen* self, QKeyEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_KeyPressEvent_IsBase(true);
        vqsplashscreen->keyPressEvent(event);
    } else {
        vqsplashscreen->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnKeyPressEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_KeyPressEvent_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplashScreen_KeyReleaseEvent(QSplashScreen* self, QKeyEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->keyReleaseEvent(event);
    } else {
        vqsplashscreen->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QSplashScreen_QBaseKeyReleaseEvent(QSplashScreen* self, QKeyEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_KeyReleaseEvent_IsBase(true);
        vqsplashscreen->keyReleaseEvent(event);
    } else {
        vqsplashscreen->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnKeyReleaseEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplashScreen_FocusInEvent(QSplashScreen* self, QFocusEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->focusInEvent(event);
    } else {
        vqsplashscreen->focusInEvent(event);
    }
}

// Base class handler implementation
void QSplashScreen_QBaseFocusInEvent(QSplashScreen* self, QFocusEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_FocusInEvent_IsBase(true);
        vqsplashscreen->focusInEvent(event);
    } else {
        vqsplashscreen->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnFocusInEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_FocusInEvent_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplashScreen_FocusOutEvent(QSplashScreen* self, QFocusEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->focusOutEvent(event);
    } else {
        vqsplashscreen->focusOutEvent(event);
    }
}

// Base class handler implementation
void QSplashScreen_QBaseFocusOutEvent(QSplashScreen* self, QFocusEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_FocusOutEvent_IsBase(true);
        vqsplashscreen->focusOutEvent(event);
    } else {
        vqsplashscreen->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnFocusOutEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_FocusOutEvent_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplashScreen_EnterEvent(QSplashScreen* self, QEnterEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->enterEvent(event);
    } else {
        vqsplashscreen->enterEvent(event);
    }
}

// Base class handler implementation
void QSplashScreen_QBaseEnterEvent(QSplashScreen* self, QEnterEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_EnterEvent_IsBase(true);
        vqsplashscreen->enterEvent(event);
    } else {
        vqsplashscreen->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnEnterEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_EnterEvent_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplashScreen_LeaveEvent(QSplashScreen* self, QEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->leaveEvent(event);
    } else {
        vqsplashscreen->leaveEvent(event);
    }
}

// Base class handler implementation
void QSplashScreen_QBaseLeaveEvent(QSplashScreen* self, QEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_LeaveEvent_IsBase(true);
        vqsplashscreen->leaveEvent(event);
    } else {
        vqsplashscreen->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnLeaveEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_LeaveEvent_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplashScreen_PaintEvent(QSplashScreen* self, QPaintEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->paintEvent(event);
    } else {
        vqsplashscreen->paintEvent(event);
    }
}

// Base class handler implementation
void QSplashScreen_QBasePaintEvent(QSplashScreen* self, QPaintEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_PaintEvent_IsBase(true);
        vqsplashscreen->paintEvent(event);
    } else {
        vqsplashscreen->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnPaintEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_PaintEvent_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplashScreen_MoveEvent(QSplashScreen* self, QMoveEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->moveEvent(event);
    } else {
        vqsplashscreen->moveEvent(event);
    }
}

// Base class handler implementation
void QSplashScreen_QBaseMoveEvent(QSplashScreen* self, QMoveEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_MoveEvent_IsBase(true);
        vqsplashscreen->moveEvent(event);
    } else {
        vqsplashscreen->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnMoveEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_MoveEvent_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplashScreen_ResizeEvent(QSplashScreen* self, QResizeEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->resizeEvent(event);
    } else {
        vqsplashscreen->resizeEvent(event);
    }
}

// Base class handler implementation
void QSplashScreen_QBaseResizeEvent(QSplashScreen* self, QResizeEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_ResizeEvent_IsBase(true);
        vqsplashscreen->resizeEvent(event);
    } else {
        vqsplashscreen->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnResizeEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_ResizeEvent_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplashScreen_CloseEvent(QSplashScreen* self, QCloseEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->closeEvent(event);
    } else {
        vqsplashscreen->closeEvent(event);
    }
}

// Base class handler implementation
void QSplashScreen_QBaseCloseEvent(QSplashScreen* self, QCloseEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_CloseEvent_IsBase(true);
        vqsplashscreen->closeEvent(event);
    } else {
        vqsplashscreen->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnCloseEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_CloseEvent_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplashScreen_ContextMenuEvent(QSplashScreen* self, QContextMenuEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->contextMenuEvent(event);
    } else {
        vqsplashscreen->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QSplashScreen_QBaseContextMenuEvent(QSplashScreen* self, QContextMenuEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_ContextMenuEvent_IsBase(true);
        vqsplashscreen->contextMenuEvent(event);
    } else {
        vqsplashscreen->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnContextMenuEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_ContextMenuEvent_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplashScreen_TabletEvent(QSplashScreen* self, QTabletEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->tabletEvent(event);
    } else {
        vqsplashscreen->tabletEvent(event);
    }
}

// Base class handler implementation
void QSplashScreen_QBaseTabletEvent(QSplashScreen* self, QTabletEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_TabletEvent_IsBase(true);
        vqsplashscreen->tabletEvent(event);
    } else {
        vqsplashscreen->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnTabletEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_TabletEvent_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplashScreen_ActionEvent(QSplashScreen* self, QActionEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->actionEvent(event);
    } else {
        vqsplashscreen->actionEvent(event);
    }
}

// Base class handler implementation
void QSplashScreen_QBaseActionEvent(QSplashScreen* self, QActionEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_ActionEvent_IsBase(true);
        vqsplashscreen->actionEvent(event);
    } else {
        vqsplashscreen->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnActionEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_ActionEvent_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplashScreen_DragEnterEvent(QSplashScreen* self, QDragEnterEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->dragEnterEvent(event);
    } else {
        vqsplashscreen->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QSplashScreen_QBaseDragEnterEvent(QSplashScreen* self, QDragEnterEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_DragEnterEvent_IsBase(true);
        vqsplashscreen->dragEnterEvent(event);
    } else {
        vqsplashscreen->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnDragEnterEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_DragEnterEvent_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplashScreen_DragMoveEvent(QSplashScreen* self, QDragMoveEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->dragMoveEvent(event);
    } else {
        vqsplashscreen->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QSplashScreen_QBaseDragMoveEvent(QSplashScreen* self, QDragMoveEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_DragMoveEvent_IsBase(true);
        vqsplashscreen->dragMoveEvent(event);
    } else {
        vqsplashscreen->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnDragMoveEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_DragMoveEvent_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplashScreen_DragLeaveEvent(QSplashScreen* self, QDragLeaveEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->dragLeaveEvent(event);
    } else {
        vqsplashscreen->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QSplashScreen_QBaseDragLeaveEvent(QSplashScreen* self, QDragLeaveEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_DragLeaveEvent_IsBase(true);
        vqsplashscreen->dragLeaveEvent(event);
    } else {
        vqsplashscreen->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnDragLeaveEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_DragLeaveEvent_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplashScreen_DropEvent(QSplashScreen* self, QDropEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->dropEvent(event);
    } else {
        vqsplashscreen->dropEvent(event);
    }
}

// Base class handler implementation
void QSplashScreen_QBaseDropEvent(QSplashScreen* self, QDropEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_DropEvent_IsBase(true);
        vqsplashscreen->dropEvent(event);
    } else {
        vqsplashscreen->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnDropEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_DropEvent_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplashScreen_ShowEvent(QSplashScreen* self, QShowEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->showEvent(event);
    } else {
        vqsplashscreen->showEvent(event);
    }
}

// Base class handler implementation
void QSplashScreen_QBaseShowEvent(QSplashScreen* self, QShowEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_ShowEvent_IsBase(true);
        vqsplashscreen->showEvent(event);
    } else {
        vqsplashscreen->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnShowEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_ShowEvent_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplashScreen_HideEvent(QSplashScreen* self, QHideEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->hideEvent(event);
    } else {
        vqsplashscreen->hideEvent(event);
    }
}

// Base class handler implementation
void QSplashScreen_QBaseHideEvent(QSplashScreen* self, QHideEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_HideEvent_IsBase(true);
        vqsplashscreen->hideEvent(event);
    } else {
        vqsplashscreen->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnHideEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_HideEvent_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSplashScreen_NativeEvent(QSplashScreen* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        return vqsplashscreen->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqsplashscreen->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QSplashScreen_QBaseNativeEvent(QSplashScreen* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_NativeEvent_IsBase(true);
        return vqsplashscreen->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqsplashscreen->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnNativeEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_NativeEvent_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplashScreen_ChangeEvent(QSplashScreen* self, QEvent* param1) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->changeEvent(param1);
    } else {
        vqsplashscreen->changeEvent(param1);
    }
}

// Base class handler implementation
void QSplashScreen_QBaseChangeEvent(QSplashScreen* self, QEvent* param1) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_ChangeEvent_IsBase(true);
        vqsplashscreen->changeEvent(param1);
    } else {
        vqsplashscreen->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnChangeEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_ChangeEvent_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QSplashScreen_Metric(const QSplashScreen* self, int param1) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self))) {
        return vqsplashscreen->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqsplashscreen->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QSplashScreen_QBaseMetric(const QSplashScreen* self, int param1) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self))) {
        vqsplashscreen->setQSplashScreen_Metric_IsBase(true);
        return vqsplashscreen->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqsplashscreen->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnMetric(const QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self))) {
        vqsplashscreen->setQSplashScreen_Metric_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplashScreen_InitPainter(const QSplashScreen* self, QPainter* painter) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self))) {
        vqsplashscreen->initPainter(painter);
    } else {
        vqsplashscreen->initPainter(painter);
    }
}

// Base class handler implementation
void QSplashScreen_QBaseInitPainter(const QSplashScreen* self, QPainter* painter) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self))) {
        vqsplashscreen->setQSplashScreen_InitPainter_IsBase(true);
        vqsplashscreen->initPainter(painter);
    } else {
        vqsplashscreen->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnInitPainter(const QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self))) {
        vqsplashscreen->setQSplashScreen_InitPainter_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QSplashScreen_Redirected(const QSplashScreen* self, QPoint* offset) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self))) {
        return vqsplashscreen->redirected(offset);
    } else {
        return vqsplashscreen->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QSplashScreen_QBaseRedirected(const QSplashScreen* self, QPoint* offset) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self))) {
        vqsplashscreen->setQSplashScreen_Redirected_IsBase(true);
        return vqsplashscreen->redirected(offset);
    } else {
        return vqsplashscreen->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnRedirected(const QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self))) {
        vqsplashscreen->setQSplashScreen_Redirected_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QSplashScreen_SharedPainter(const QSplashScreen* self) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self))) {
        return vqsplashscreen->sharedPainter();
    } else {
        return vqsplashscreen->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QSplashScreen_QBaseSharedPainter(const QSplashScreen* self) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self))) {
        vqsplashscreen->setQSplashScreen_SharedPainter_IsBase(true);
        return vqsplashscreen->sharedPainter();
    } else {
        return vqsplashscreen->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnSharedPainter(const QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self))) {
        vqsplashscreen->setQSplashScreen_SharedPainter_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplashScreen_InputMethodEvent(QSplashScreen* self, QInputMethodEvent* param1) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->inputMethodEvent(param1);
    } else {
        vqsplashscreen->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QSplashScreen_QBaseInputMethodEvent(QSplashScreen* self, QInputMethodEvent* param1) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_InputMethodEvent_IsBase(true);
        vqsplashscreen->inputMethodEvent(param1);
    } else {
        vqsplashscreen->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnInputMethodEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_InputMethodEvent_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QSplashScreen_InputMethodQuery(const QSplashScreen* self, int param1) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self))) {
        return new QVariant(vqsplashscreen->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QSplashScreen_QBaseInputMethodQuery(const QSplashScreen* self, int param1) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self))) {
        vqsplashscreen->setQSplashScreen_InputMethodQuery_IsBase(true);
        return new QVariant(vqsplashscreen->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnInputMethodQuery(const QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self))) {
        vqsplashscreen->setQSplashScreen_InputMethodQuery_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSplashScreen_FocusNextPrevChild(QSplashScreen* self, bool next) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        return vqsplashscreen->focusNextPrevChild(next);
    } else {
        return vqsplashscreen->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QSplashScreen_QBaseFocusNextPrevChild(QSplashScreen* self, bool next) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_FocusNextPrevChild_IsBase(true);
        return vqsplashscreen->focusNextPrevChild(next);
    } else {
        return vqsplashscreen->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnFocusNextPrevChild(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSplashScreen_EventFilter(QSplashScreen* self, QObject* watched, QEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        return vqsplashscreen->eventFilter(watched, event);
    } else {
        return vqsplashscreen->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QSplashScreen_QBaseEventFilter(QSplashScreen* self, QObject* watched, QEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_EventFilter_IsBase(true);
        return vqsplashscreen->eventFilter(watched, event);
    } else {
        return vqsplashscreen->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnEventFilter(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_EventFilter_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplashScreen_TimerEvent(QSplashScreen* self, QTimerEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->timerEvent(event);
    } else {
        vqsplashscreen->timerEvent(event);
    }
}

// Base class handler implementation
void QSplashScreen_QBaseTimerEvent(QSplashScreen* self, QTimerEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_TimerEvent_IsBase(true);
        vqsplashscreen->timerEvent(event);
    } else {
        vqsplashscreen->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnTimerEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_TimerEvent_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplashScreen_ChildEvent(QSplashScreen* self, QChildEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->childEvent(event);
    } else {
        vqsplashscreen->childEvent(event);
    }
}

// Base class handler implementation
void QSplashScreen_QBaseChildEvent(QSplashScreen* self, QChildEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_ChildEvent_IsBase(true);
        vqsplashscreen->childEvent(event);
    } else {
        vqsplashscreen->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnChildEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_ChildEvent_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplashScreen_CustomEvent(QSplashScreen* self, QEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->customEvent(event);
    } else {
        vqsplashscreen->customEvent(event);
    }
}

// Base class handler implementation
void QSplashScreen_QBaseCustomEvent(QSplashScreen* self, QEvent* event) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_CustomEvent_IsBase(true);
        vqsplashscreen->customEvent(event);
    } else {
        vqsplashscreen->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnCustomEvent(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_CustomEvent_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplashScreen_ConnectNotify(QSplashScreen* self, QMetaMethod* signal) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->connectNotify(*signal);
    } else {
        vqsplashscreen->connectNotify(*signal);
    }
}

// Base class handler implementation
void QSplashScreen_QBaseConnectNotify(QSplashScreen* self, QMetaMethod* signal) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_ConnectNotify_IsBase(true);
        vqsplashscreen->connectNotify(*signal);
    } else {
        vqsplashscreen->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnConnectNotify(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_ConnectNotify_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplashScreen_DisconnectNotify(QSplashScreen* self, QMetaMethod* signal) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->disconnectNotify(*signal);
    } else {
        vqsplashscreen->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QSplashScreen_QBaseDisconnectNotify(QSplashScreen* self, QMetaMethod* signal) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_DisconnectNotify_IsBase(true);
        vqsplashscreen->disconnectNotify(*signal);
    } else {
        vqsplashscreen->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnDisconnectNotify(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_DisconnectNotify_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplashScreen_UpdateMicroFocus(QSplashScreen* self) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->updateMicroFocus();
    } else {
        vqsplashscreen->updateMicroFocus();
    }
}

// Base class handler implementation
void QSplashScreen_QBaseUpdateMicroFocus(QSplashScreen* self) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_UpdateMicroFocus_IsBase(true);
        vqsplashscreen->updateMicroFocus();
    } else {
        vqsplashscreen->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnUpdateMicroFocus(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplashScreen_Create(QSplashScreen* self) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->create();
    } else {
        vqsplashscreen->create();
    }
}

// Base class handler implementation
void QSplashScreen_QBaseCreate(QSplashScreen* self) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_Create_IsBase(true);
        vqsplashscreen->create();
    } else {
        vqsplashscreen->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnCreate(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_Create_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplashScreen_Destroy(QSplashScreen* self) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->destroy();
    } else {
        vqsplashscreen->destroy();
    }
}

// Base class handler implementation
void QSplashScreen_QBaseDestroy(QSplashScreen* self) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_Destroy_IsBase(true);
        vqsplashscreen->destroy();
    } else {
        vqsplashscreen->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnDestroy(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_Destroy_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSplashScreen_FocusNextChild(QSplashScreen* self) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        return vqsplashscreen->focusNextChild();
    } else {
        return vqsplashscreen->focusNextChild();
    }
}

// Base class handler implementation
bool QSplashScreen_QBaseFocusNextChild(QSplashScreen* self) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_FocusNextChild_IsBase(true);
        return vqsplashscreen->focusNextChild();
    } else {
        return vqsplashscreen->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnFocusNextChild(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_FocusNextChild_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSplashScreen_FocusPreviousChild(QSplashScreen* self) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        return vqsplashscreen->focusPreviousChild();
    } else {
        return vqsplashscreen->focusPreviousChild();
    }
}

// Base class handler implementation
bool QSplashScreen_QBaseFocusPreviousChild(QSplashScreen* self) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_FocusPreviousChild_IsBase(true);
        return vqsplashscreen->focusPreviousChild();
    } else {
        return vqsplashscreen->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnFocusPreviousChild(QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = dynamic_cast<VirtualQSplashScreen*>(self)) {
        vqsplashscreen->setQSplashScreen_FocusPreviousChild_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QSplashScreen_Sender(const QSplashScreen* self) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self))) {
        return vqsplashscreen->sender();
    } else {
        return vqsplashscreen->sender();
    }
}

// Base class handler implementation
QObject* QSplashScreen_QBaseSender(const QSplashScreen* self) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self))) {
        vqsplashscreen->setQSplashScreen_Sender_IsBase(true);
        return vqsplashscreen->sender();
    } else {
        return vqsplashscreen->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnSender(const QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self))) {
        vqsplashscreen->setQSplashScreen_Sender_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QSplashScreen_SenderSignalIndex(const QSplashScreen* self) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self))) {
        return vqsplashscreen->senderSignalIndex();
    } else {
        return vqsplashscreen->senderSignalIndex();
    }
}

// Base class handler implementation
int QSplashScreen_QBaseSenderSignalIndex(const QSplashScreen* self) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self))) {
        vqsplashscreen->setQSplashScreen_SenderSignalIndex_IsBase(true);
        return vqsplashscreen->senderSignalIndex();
    } else {
        return vqsplashscreen->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnSenderSignalIndex(const QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self))) {
        vqsplashscreen->setQSplashScreen_SenderSignalIndex_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QSplashScreen_Receivers(const QSplashScreen* self, const char* signal) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self))) {
        return vqsplashscreen->receivers(signal);
    } else {
        return vqsplashscreen->receivers(signal);
    }
}

// Base class handler implementation
int QSplashScreen_QBaseReceivers(const QSplashScreen* self, const char* signal) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self))) {
        vqsplashscreen->setQSplashScreen_Receivers_IsBase(true);
        return vqsplashscreen->receivers(signal);
    } else {
        return vqsplashscreen->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnReceivers(const QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self))) {
        vqsplashscreen->setQSplashScreen_Receivers_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSplashScreen_IsSignalConnected(const QSplashScreen* self, QMetaMethod* signal) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self))) {
        return vqsplashscreen->isSignalConnected(*signal);
    } else {
        return vqsplashscreen->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QSplashScreen_QBaseIsSignalConnected(const QSplashScreen* self, QMetaMethod* signal) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self))) {
        vqsplashscreen->setQSplashScreen_IsSignalConnected_IsBase(true);
        return vqsplashscreen->isSignalConnected(*signal);
    } else {
        return vqsplashscreen->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplashScreen_OnIsSignalConnected(const QSplashScreen* self, intptr_t slot) {
    if (auto* vqsplashscreen = const_cast<VirtualQSplashScreen*>(dynamic_cast<const VirtualQSplashScreen*>(self))) {
        vqsplashscreen->setQSplashScreen_IsSignalConnected_Callback(reinterpret_cast<VirtualQSplashScreen::QSplashScreen_IsSignalConnected_Callback>(slot));
    }
}

void QSplashScreen_Delete(QSplashScreen* self) {
    delete self;
}
