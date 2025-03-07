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
#include <QShowEvent>
#include <QSize>
#include <QSizePolicy>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyle>
#include <QTabletEvent>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <QVideoSink>
#include <QVideoWidget>
#include <QWheelEvent>
#include <QWidget>
#include <QWindow>
#include <qvideowidget.h>
#include "libqvideowidget.hpp"
#include "libqvideowidget.hxx"

QVideoWidget* QVideoWidget_new(QWidget* parent) {
    return new VirtualQVideoWidget(parent);
}

QVideoWidget* QVideoWidget_new2() {
    return new VirtualQVideoWidget();
}

QMetaObject* QVideoWidget_MetaObject(const QVideoWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* QVideoWidget_Metacast(QVideoWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QVideoWidget_Metacall(QVideoWidget* self, int param1, int param2, void** param3) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QVideoWidget_OnMetacall(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_Metacall_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QVideoWidget_QBaseMetacall(QVideoWidget* self, int param1, int param2, void** param3) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_Metacall_IsBase(true);
        return vqvideowidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QVideoWidget_Tr(const char* s) {
    QString _ret = QVideoWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QVideoSink* QVideoWidget_VideoSink(const QVideoWidget* self) {
    return self->videoSink();
}

int QVideoWidget_AspectRatioMode(const QVideoWidget* self) {
    return static_cast<int>(self->aspectRatioMode());
}

void QVideoWidget_SetFullScreen(QVideoWidget* self, bool fullScreen) {
    self->setFullScreen(fullScreen);
}

void QVideoWidget_SetAspectRatioMode(QVideoWidget* self, int mode) {
    self->setAspectRatioMode(static_cast<Qt::AspectRatioMode>(mode));
}

void QVideoWidget_FullScreenChanged(QVideoWidget* self, bool fullScreen) {
    self->fullScreenChanged(fullScreen);
}

void QVideoWidget_Connect_FullScreenChanged(QVideoWidget* self, intptr_t slot) {
    void (*slotFunc)(QVideoWidget*, bool) = reinterpret_cast<void (*)(QVideoWidget*, bool)>(slot);
    QVideoWidget::connect(self, &QVideoWidget::fullScreenChanged, [self, slotFunc](bool fullScreen) {
        bool sigval1 = fullScreen;
        slotFunc(self, sigval1);
    });
}

void QVideoWidget_AspectRatioModeChanged(QVideoWidget* self, int mode) {
    self->aspectRatioModeChanged(static_cast<Qt::AspectRatioMode>(mode));
}

void QVideoWidget_Connect_AspectRatioModeChanged(QVideoWidget* self, intptr_t slot) {
    void (*slotFunc)(QVideoWidget*, int) = reinterpret_cast<void (*)(QVideoWidget*, int)>(slot);
    QVideoWidget::connect(self, &QVideoWidget::aspectRatioModeChanged, [self, slotFunc](Qt::AspectRatioMode mode) {
        int sigval1 = static_cast<int>(mode);
        slotFunc(self, sigval1);
    });
}

libqt_string QVideoWidget_Tr2(const char* s, const char* c) {
    QString _ret = QVideoWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QVideoWidget_Tr3(const char* s, const char* c, int n) {
    QString _ret = QVideoWidget::tr(s, c, static_cast<int>(n));
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
QSize* QVideoWidget_SizeHint(const QVideoWidget* self) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self))) {
        return new QSize(vqvideowidget->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QVideoWidget_QBaseSizeHint(const QVideoWidget* self) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self))) {
        vqvideowidget->setQVideoWidget_SizeHint_IsBase(true);
        return new QSize(vqvideowidget->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnSizeHint(const QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self))) {
        vqvideowidget->setQVideoWidget_SizeHint_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
bool QVideoWidget_Event(QVideoWidget* self, QEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        return vqvideowidget->event(event);
    } else {
        return vqvideowidget->event(event);
    }
}

// Base class handler implementation
bool QVideoWidget_QBaseEvent(QVideoWidget* self, QEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_Event_IsBase(true);
        return vqvideowidget->event(event);
    } else {
        return vqvideowidget->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_Event_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_ShowEvent(QVideoWidget* self, QShowEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->showEvent(event);
    } else {
        vqvideowidget->showEvent(event);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseShowEvent(QVideoWidget* self, QShowEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_ShowEvent_IsBase(true);
        vqvideowidget->showEvent(event);
    } else {
        vqvideowidget->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnShowEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_ShowEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_HideEvent(QVideoWidget* self, QHideEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->hideEvent(event);
    } else {
        vqvideowidget->hideEvent(event);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseHideEvent(QVideoWidget* self, QHideEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_HideEvent_IsBase(true);
        vqvideowidget->hideEvent(event);
    } else {
        vqvideowidget->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnHideEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_HideEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_ResizeEvent(QVideoWidget* self, QResizeEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->resizeEvent(event);
    } else {
        vqvideowidget->resizeEvent(event);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseResizeEvent(QVideoWidget* self, QResizeEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_ResizeEvent_IsBase(true);
        vqvideowidget->resizeEvent(event);
    } else {
        vqvideowidget->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnResizeEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_ResizeEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_MoveEvent(QVideoWidget* self, QMoveEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->moveEvent(event);
    } else {
        vqvideowidget->moveEvent(event);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseMoveEvent(QVideoWidget* self, QMoveEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_MoveEvent_IsBase(true);
        vqvideowidget->moveEvent(event);
    } else {
        vqvideowidget->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnMoveEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_MoveEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QVideoWidget_DevType(const QVideoWidget* self) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self))) {
        return vqvideowidget->devType();
    } else {
        return vqvideowidget->devType();
    }
}

// Base class handler implementation
int QVideoWidget_QBaseDevType(const QVideoWidget* self) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self))) {
        vqvideowidget->setQVideoWidget_DevType_IsBase(true);
        return vqvideowidget->devType();
    } else {
        return vqvideowidget->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnDevType(const QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self))) {
        vqvideowidget->setQVideoWidget_DevType_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_SetVisible(QVideoWidget* self, bool visible) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setVisible(visible);
    } else {
        vqvideowidget->setVisible(visible);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseSetVisible(QVideoWidget* self, bool visible) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_SetVisible_IsBase(true);
        vqvideowidget->setVisible(visible);
    } else {
        vqvideowidget->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnSetVisible(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_SetVisible_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QVideoWidget_MinimumSizeHint(const QVideoWidget* self) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self))) {
        return new QSize(vqvideowidget->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QVideoWidget_QBaseMinimumSizeHint(const QVideoWidget* self) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self))) {
        vqvideowidget->setQVideoWidget_MinimumSizeHint_IsBase(true);
        return new QSize(vqvideowidget->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnMinimumSizeHint(const QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self))) {
        vqvideowidget->setQVideoWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QVideoWidget_HeightForWidth(const QVideoWidget* self, int param1) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self))) {
        return vqvideowidget->heightForWidth(static_cast<int>(param1));
    } else {
        return vqvideowidget->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QVideoWidget_QBaseHeightForWidth(const QVideoWidget* self, int param1) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self))) {
        vqvideowidget->setQVideoWidget_HeightForWidth_IsBase(true);
        return vqvideowidget->heightForWidth(static_cast<int>(param1));
    } else {
        return vqvideowidget->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnHeightForWidth(const QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self))) {
        vqvideowidget->setQVideoWidget_HeightForWidth_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QVideoWidget_HasHeightForWidth(const QVideoWidget* self) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self))) {
        return vqvideowidget->hasHeightForWidth();
    } else {
        return vqvideowidget->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QVideoWidget_QBaseHasHeightForWidth(const QVideoWidget* self) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self))) {
        vqvideowidget->setQVideoWidget_HasHeightForWidth_IsBase(true);
        return vqvideowidget->hasHeightForWidth();
    } else {
        return vqvideowidget->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnHasHeightForWidth(const QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self))) {
        vqvideowidget->setQVideoWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QVideoWidget_PaintEngine(const QVideoWidget* self) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self))) {
        return vqvideowidget->paintEngine();
    } else {
        return vqvideowidget->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QVideoWidget_QBasePaintEngine(const QVideoWidget* self) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self))) {
        vqvideowidget->setQVideoWidget_PaintEngine_IsBase(true);
        return vqvideowidget->paintEngine();
    } else {
        return vqvideowidget->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnPaintEngine(const QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self))) {
        vqvideowidget->setQVideoWidget_PaintEngine_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_MousePressEvent(QVideoWidget* self, QMouseEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->mousePressEvent(event);
    } else {
        vqvideowidget->mousePressEvent(event);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseMousePressEvent(QVideoWidget* self, QMouseEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_MousePressEvent_IsBase(true);
        vqvideowidget->mousePressEvent(event);
    } else {
        vqvideowidget->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnMousePressEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_MousePressEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_MouseReleaseEvent(QVideoWidget* self, QMouseEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->mouseReleaseEvent(event);
    } else {
        vqvideowidget->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseMouseReleaseEvent(QVideoWidget* self, QMouseEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_MouseReleaseEvent_IsBase(true);
        vqvideowidget->mouseReleaseEvent(event);
    } else {
        vqvideowidget->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnMouseReleaseEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_MouseDoubleClickEvent(QVideoWidget* self, QMouseEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->mouseDoubleClickEvent(event);
    } else {
        vqvideowidget->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseMouseDoubleClickEvent(QVideoWidget* self, QMouseEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_MouseDoubleClickEvent_IsBase(true);
        vqvideowidget->mouseDoubleClickEvent(event);
    } else {
        vqvideowidget->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnMouseDoubleClickEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_MouseMoveEvent(QVideoWidget* self, QMouseEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->mouseMoveEvent(event);
    } else {
        vqvideowidget->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseMouseMoveEvent(QVideoWidget* self, QMouseEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_MouseMoveEvent_IsBase(true);
        vqvideowidget->mouseMoveEvent(event);
    } else {
        vqvideowidget->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnMouseMoveEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_WheelEvent(QVideoWidget* self, QWheelEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->wheelEvent(event);
    } else {
        vqvideowidget->wheelEvent(event);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseWheelEvent(QVideoWidget* self, QWheelEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_WheelEvent_IsBase(true);
        vqvideowidget->wheelEvent(event);
    } else {
        vqvideowidget->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnWheelEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_WheelEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_KeyPressEvent(QVideoWidget* self, QKeyEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->keyPressEvent(event);
    } else {
        vqvideowidget->keyPressEvent(event);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseKeyPressEvent(QVideoWidget* self, QKeyEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_KeyPressEvent_IsBase(true);
        vqvideowidget->keyPressEvent(event);
    } else {
        vqvideowidget->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnKeyPressEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_KeyReleaseEvent(QVideoWidget* self, QKeyEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->keyReleaseEvent(event);
    } else {
        vqvideowidget->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseKeyReleaseEvent(QVideoWidget* self, QKeyEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_KeyReleaseEvent_IsBase(true);
        vqvideowidget->keyReleaseEvent(event);
    } else {
        vqvideowidget->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnKeyReleaseEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_FocusInEvent(QVideoWidget* self, QFocusEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->focusInEvent(event);
    } else {
        vqvideowidget->focusInEvent(event);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseFocusInEvent(QVideoWidget* self, QFocusEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_FocusInEvent_IsBase(true);
        vqvideowidget->focusInEvent(event);
    } else {
        vqvideowidget->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnFocusInEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_FocusInEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_FocusOutEvent(QVideoWidget* self, QFocusEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->focusOutEvent(event);
    } else {
        vqvideowidget->focusOutEvent(event);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseFocusOutEvent(QVideoWidget* self, QFocusEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_FocusOutEvent_IsBase(true);
        vqvideowidget->focusOutEvent(event);
    } else {
        vqvideowidget->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnFocusOutEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_EnterEvent(QVideoWidget* self, QEnterEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->enterEvent(event);
    } else {
        vqvideowidget->enterEvent(event);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseEnterEvent(QVideoWidget* self, QEnterEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_EnterEvent_IsBase(true);
        vqvideowidget->enterEvent(event);
    } else {
        vqvideowidget->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnEnterEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_EnterEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_LeaveEvent(QVideoWidget* self, QEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->leaveEvent(event);
    } else {
        vqvideowidget->leaveEvent(event);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseLeaveEvent(QVideoWidget* self, QEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_LeaveEvent_IsBase(true);
        vqvideowidget->leaveEvent(event);
    } else {
        vqvideowidget->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnLeaveEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_LeaveEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_PaintEvent(QVideoWidget* self, QPaintEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->paintEvent(event);
    } else {
        vqvideowidget->paintEvent(event);
    }
}

// Base class handler implementation
void QVideoWidget_QBasePaintEvent(QVideoWidget* self, QPaintEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_PaintEvent_IsBase(true);
        vqvideowidget->paintEvent(event);
    } else {
        vqvideowidget->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnPaintEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_PaintEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_CloseEvent(QVideoWidget* self, QCloseEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->closeEvent(event);
    } else {
        vqvideowidget->closeEvent(event);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseCloseEvent(QVideoWidget* self, QCloseEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_CloseEvent_IsBase(true);
        vqvideowidget->closeEvent(event);
    } else {
        vqvideowidget->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnCloseEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_CloseEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_ContextMenuEvent(QVideoWidget* self, QContextMenuEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->contextMenuEvent(event);
    } else {
        vqvideowidget->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseContextMenuEvent(QVideoWidget* self, QContextMenuEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_ContextMenuEvent_IsBase(true);
        vqvideowidget->contextMenuEvent(event);
    } else {
        vqvideowidget->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnContextMenuEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_TabletEvent(QVideoWidget* self, QTabletEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->tabletEvent(event);
    } else {
        vqvideowidget->tabletEvent(event);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseTabletEvent(QVideoWidget* self, QTabletEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_TabletEvent_IsBase(true);
        vqvideowidget->tabletEvent(event);
    } else {
        vqvideowidget->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnTabletEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_TabletEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_ActionEvent(QVideoWidget* self, QActionEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->actionEvent(event);
    } else {
        vqvideowidget->actionEvent(event);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseActionEvent(QVideoWidget* self, QActionEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_ActionEvent_IsBase(true);
        vqvideowidget->actionEvent(event);
    } else {
        vqvideowidget->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnActionEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_ActionEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_DragEnterEvent(QVideoWidget* self, QDragEnterEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->dragEnterEvent(event);
    } else {
        vqvideowidget->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseDragEnterEvent(QVideoWidget* self, QDragEnterEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_DragEnterEvent_IsBase(true);
        vqvideowidget->dragEnterEvent(event);
    } else {
        vqvideowidget->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnDragEnterEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_DragMoveEvent(QVideoWidget* self, QDragMoveEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->dragMoveEvent(event);
    } else {
        vqvideowidget->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseDragMoveEvent(QVideoWidget* self, QDragMoveEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_DragMoveEvent_IsBase(true);
        vqvideowidget->dragMoveEvent(event);
    } else {
        vqvideowidget->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnDragMoveEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_DragLeaveEvent(QVideoWidget* self, QDragLeaveEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->dragLeaveEvent(event);
    } else {
        vqvideowidget->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseDragLeaveEvent(QVideoWidget* self, QDragLeaveEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_DragLeaveEvent_IsBase(true);
        vqvideowidget->dragLeaveEvent(event);
    } else {
        vqvideowidget->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnDragLeaveEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_DropEvent(QVideoWidget* self, QDropEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->dropEvent(event);
    } else {
        vqvideowidget->dropEvent(event);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseDropEvent(QVideoWidget* self, QDropEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_DropEvent_IsBase(true);
        vqvideowidget->dropEvent(event);
    } else {
        vqvideowidget->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnDropEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_DropEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QVideoWidget_NativeEvent(QVideoWidget* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        return vqvideowidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqvideowidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QVideoWidget_QBaseNativeEvent(QVideoWidget* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_NativeEvent_IsBase(true);
        return vqvideowidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqvideowidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnNativeEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_NativeEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_ChangeEvent(QVideoWidget* self, QEvent* param1) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->changeEvent(param1);
    } else {
        vqvideowidget->changeEvent(param1);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseChangeEvent(QVideoWidget* self, QEvent* param1) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_ChangeEvent_IsBase(true);
        vqvideowidget->changeEvent(param1);
    } else {
        vqvideowidget->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnChangeEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_ChangeEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QVideoWidget_Metric(const QVideoWidget* self, int param1) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self))) {
        return vqvideowidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqvideowidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QVideoWidget_QBaseMetric(const QVideoWidget* self, int param1) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self))) {
        vqvideowidget->setQVideoWidget_Metric_IsBase(true);
        return vqvideowidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqvideowidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnMetric(const QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self))) {
        vqvideowidget->setQVideoWidget_Metric_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_InitPainter(const QVideoWidget* self, QPainter* painter) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self))) {
        vqvideowidget->initPainter(painter);
    } else {
        vqvideowidget->initPainter(painter);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseInitPainter(const QVideoWidget* self, QPainter* painter) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self))) {
        vqvideowidget->setQVideoWidget_InitPainter_IsBase(true);
        vqvideowidget->initPainter(painter);
    } else {
        vqvideowidget->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnInitPainter(const QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self))) {
        vqvideowidget->setQVideoWidget_InitPainter_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QVideoWidget_Redirected(const QVideoWidget* self, QPoint* offset) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self))) {
        return vqvideowidget->redirected(offset);
    } else {
        return vqvideowidget->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QVideoWidget_QBaseRedirected(const QVideoWidget* self, QPoint* offset) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self))) {
        vqvideowidget->setQVideoWidget_Redirected_IsBase(true);
        return vqvideowidget->redirected(offset);
    } else {
        return vqvideowidget->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnRedirected(const QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self))) {
        vqvideowidget->setQVideoWidget_Redirected_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QVideoWidget_SharedPainter(const QVideoWidget* self) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self))) {
        return vqvideowidget->sharedPainter();
    } else {
        return vqvideowidget->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QVideoWidget_QBaseSharedPainter(const QVideoWidget* self) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self))) {
        vqvideowidget->setQVideoWidget_SharedPainter_IsBase(true);
        return vqvideowidget->sharedPainter();
    } else {
        return vqvideowidget->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnSharedPainter(const QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self))) {
        vqvideowidget->setQVideoWidget_SharedPainter_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_InputMethodEvent(QVideoWidget* self, QInputMethodEvent* param1) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->inputMethodEvent(param1);
    } else {
        vqvideowidget->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseInputMethodEvent(QVideoWidget* self, QInputMethodEvent* param1) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_InputMethodEvent_IsBase(true);
        vqvideowidget->inputMethodEvent(param1);
    } else {
        vqvideowidget->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnInputMethodEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QVideoWidget_InputMethodQuery(const QVideoWidget* self, int param1) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self))) {
        return new QVariant(vqvideowidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QVideoWidget_QBaseInputMethodQuery(const QVideoWidget* self, int param1) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self))) {
        vqvideowidget->setQVideoWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vqvideowidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnInputMethodQuery(const QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self))) {
        vqvideowidget->setQVideoWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QVideoWidget_FocusNextPrevChild(QVideoWidget* self, bool next) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        return vqvideowidget->focusNextPrevChild(next);
    } else {
        return vqvideowidget->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QVideoWidget_QBaseFocusNextPrevChild(QVideoWidget* self, bool next) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_FocusNextPrevChild_IsBase(true);
        return vqvideowidget->focusNextPrevChild(next);
    } else {
        return vqvideowidget->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnFocusNextPrevChild(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QVideoWidget_EventFilter(QVideoWidget* self, QObject* watched, QEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        return vqvideowidget->eventFilter(watched, event);
    } else {
        return vqvideowidget->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QVideoWidget_QBaseEventFilter(QVideoWidget* self, QObject* watched, QEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_EventFilter_IsBase(true);
        return vqvideowidget->eventFilter(watched, event);
    } else {
        return vqvideowidget->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnEventFilter(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_EventFilter_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_TimerEvent(QVideoWidget* self, QTimerEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->timerEvent(event);
    } else {
        vqvideowidget->timerEvent(event);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseTimerEvent(QVideoWidget* self, QTimerEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_TimerEvent_IsBase(true);
        vqvideowidget->timerEvent(event);
    } else {
        vqvideowidget->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnTimerEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_TimerEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_ChildEvent(QVideoWidget* self, QChildEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->childEvent(event);
    } else {
        vqvideowidget->childEvent(event);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseChildEvent(QVideoWidget* self, QChildEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_ChildEvent_IsBase(true);
        vqvideowidget->childEvent(event);
    } else {
        vqvideowidget->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnChildEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_ChildEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_CustomEvent(QVideoWidget* self, QEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->customEvent(event);
    } else {
        vqvideowidget->customEvent(event);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseCustomEvent(QVideoWidget* self, QEvent* event) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_CustomEvent_IsBase(true);
        vqvideowidget->customEvent(event);
    } else {
        vqvideowidget->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnCustomEvent(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_CustomEvent_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_ConnectNotify(QVideoWidget* self, QMetaMethod* signal) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->connectNotify(*signal);
    } else {
        vqvideowidget->connectNotify(*signal);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseConnectNotify(QVideoWidget* self, QMetaMethod* signal) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_ConnectNotify_IsBase(true);
        vqvideowidget->connectNotify(*signal);
    } else {
        vqvideowidget->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnConnectNotify(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_ConnectNotify_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_DisconnectNotify(QVideoWidget* self, QMetaMethod* signal) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->disconnectNotify(*signal);
    } else {
        vqvideowidget->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QVideoWidget_QBaseDisconnectNotify(QVideoWidget* self, QMetaMethod* signal) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_DisconnectNotify_IsBase(true);
        vqvideowidget->disconnectNotify(*signal);
    } else {
        vqvideowidget->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnDisconnectNotify(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_UpdateMicroFocus(QVideoWidget* self) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->updateMicroFocus();
    } else {
        vqvideowidget->updateMicroFocus();
    }
}

// Base class handler implementation
void QVideoWidget_QBaseUpdateMicroFocus(QVideoWidget* self) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_UpdateMicroFocus_IsBase(true);
        vqvideowidget->updateMicroFocus();
    } else {
        vqvideowidget->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnUpdateMicroFocus(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_Create(QVideoWidget* self) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->create();
    } else {
        vqvideowidget->create();
    }
}

// Base class handler implementation
void QVideoWidget_QBaseCreate(QVideoWidget* self) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_Create_IsBase(true);
        vqvideowidget->create();
    } else {
        vqvideowidget->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnCreate(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_Create_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QVideoWidget_Destroy(QVideoWidget* self) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->destroy();
    } else {
        vqvideowidget->destroy();
    }
}

// Base class handler implementation
void QVideoWidget_QBaseDestroy(QVideoWidget* self) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_Destroy_IsBase(true);
        vqvideowidget->destroy();
    } else {
        vqvideowidget->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnDestroy(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_Destroy_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QVideoWidget_FocusNextChild(QVideoWidget* self) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        return vqvideowidget->focusNextChild();
    } else {
        return vqvideowidget->focusNextChild();
    }
}

// Base class handler implementation
bool QVideoWidget_QBaseFocusNextChild(QVideoWidget* self) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_FocusNextChild_IsBase(true);
        return vqvideowidget->focusNextChild();
    } else {
        return vqvideowidget->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnFocusNextChild(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_FocusNextChild_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QVideoWidget_FocusPreviousChild(QVideoWidget* self) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        return vqvideowidget->focusPreviousChild();
    } else {
        return vqvideowidget->focusPreviousChild();
    }
}

// Base class handler implementation
bool QVideoWidget_QBaseFocusPreviousChild(QVideoWidget* self) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_FocusPreviousChild_IsBase(true);
        return vqvideowidget->focusPreviousChild();
    } else {
        return vqvideowidget->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnFocusPreviousChild(QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = dynamic_cast<VirtualQVideoWidget*>(self)) {
        vqvideowidget->setQVideoWidget_FocusPreviousChild_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QVideoWidget_Sender(const QVideoWidget* self) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self))) {
        return vqvideowidget->sender();
    } else {
        return vqvideowidget->sender();
    }
}

// Base class handler implementation
QObject* QVideoWidget_QBaseSender(const QVideoWidget* self) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self))) {
        vqvideowidget->setQVideoWidget_Sender_IsBase(true);
        return vqvideowidget->sender();
    } else {
        return vqvideowidget->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnSender(const QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self))) {
        vqvideowidget->setQVideoWidget_Sender_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QVideoWidget_SenderSignalIndex(const QVideoWidget* self) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self))) {
        return vqvideowidget->senderSignalIndex();
    } else {
        return vqvideowidget->senderSignalIndex();
    }
}

// Base class handler implementation
int QVideoWidget_QBaseSenderSignalIndex(const QVideoWidget* self) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self))) {
        vqvideowidget->setQVideoWidget_SenderSignalIndex_IsBase(true);
        return vqvideowidget->senderSignalIndex();
    } else {
        return vqvideowidget->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnSenderSignalIndex(const QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self))) {
        vqvideowidget->setQVideoWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QVideoWidget_Receivers(const QVideoWidget* self, const char* signal) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self))) {
        return vqvideowidget->receivers(signal);
    } else {
        return vqvideowidget->receivers(signal);
    }
}

// Base class handler implementation
int QVideoWidget_QBaseReceivers(const QVideoWidget* self, const char* signal) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self))) {
        vqvideowidget->setQVideoWidget_Receivers_IsBase(true);
        return vqvideowidget->receivers(signal);
    } else {
        return vqvideowidget->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnReceivers(const QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self))) {
        vqvideowidget->setQVideoWidget_Receivers_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QVideoWidget_IsSignalConnected(const QVideoWidget* self, QMetaMethod* signal) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self))) {
        return vqvideowidget->isSignalConnected(*signal);
    } else {
        return vqvideowidget->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QVideoWidget_QBaseIsSignalConnected(const QVideoWidget* self, QMetaMethod* signal) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self))) {
        vqvideowidget->setQVideoWidget_IsSignalConnected_IsBase(true);
        return vqvideowidget->isSignalConnected(*signal);
    } else {
        return vqvideowidget->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVideoWidget_OnIsSignalConnected(const QVideoWidget* self, intptr_t slot) {
    if (auto* vqvideowidget = const_cast<VirtualQVideoWidget*>(dynamic_cast<const VirtualQVideoWidget*>(self))) {
        vqvideowidget->setQVideoWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualQVideoWidget::QVideoWidget_IsSignalConnected_Callback>(slot));
    }
}

void QVideoWidget_Delete(QVideoWidget* self) {
    delete self;
}
