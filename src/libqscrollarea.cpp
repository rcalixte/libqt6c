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
#include <QScrollArea>
#include <QScrollBar>
#include <QShowEvent>
#include <QSize>
#include <QSizePolicy>
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
#include <qscrollarea.h>
#include "libqscrollarea.hpp"
#include "libqscrollarea.hxx"

QScrollArea* QScrollArea_new(QWidget* parent) {
    return new VirtualQScrollArea(parent);
}

QScrollArea* QScrollArea_new2() {
    return new VirtualQScrollArea();
}

QMetaObject* QScrollArea_MetaObject(const QScrollArea* self) {
    return (QMetaObject*)self->metaObject();
}

void* QScrollArea_Metacast(QScrollArea* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QScrollArea_Metacall(QScrollArea* self, int param1, int param2, void** param3) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QScrollArea_OnMetacall(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_Metacall_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QScrollArea_QBaseMetacall(QScrollArea* self, int param1, int param2, void** param3) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_Metacall_IsBase(true);
        return vqscrollarea->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QScrollArea_Tr(const char* s) {
    QString _ret = QScrollArea::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QWidget* QScrollArea_Widget(const QScrollArea* self) {
    return self->widget();
}

void QScrollArea_SetWidget(QScrollArea* self, QWidget* widget) {
    self->setWidget(widget);
}

QWidget* QScrollArea_TakeWidget(QScrollArea* self) {
    return self->takeWidget();
}

bool QScrollArea_WidgetResizable(const QScrollArea* self) {
    return self->widgetResizable();
}

void QScrollArea_SetWidgetResizable(QScrollArea* self, bool resizable) {
    self->setWidgetResizable(resizable);
}

int QScrollArea_Alignment(const QScrollArea* self) {
    return static_cast<int>(self->alignment());
}

void QScrollArea_SetAlignment(QScrollArea* self, int alignment) {
    self->setAlignment(static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

void QScrollArea_EnsureVisible(QScrollArea* self, int x, int y) {
    self->ensureVisible(static_cast<int>(x), static_cast<int>(y));
}

void QScrollArea_EnsureWidgetVisible(QScrollArea* self, QWidget* childWidget) {
    self->ensureWidgetVisible(childWidget);
}

libqt_string QScrollArea_Tr2(const char* s, const char* c) {
    QString _ret = QScrollArea::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QScrollArea_Tr3(const char* s, const char* c, int n) {
    QString _ret = QScrollArea::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QScrollArea_EnsureVisible3(QScrollArea* self, int x, int y, int xmargin) {
    self->ensureVisible(static_cast<int>(x), static_cast<int>(y), static_cast<int>(xmargin));
}

void QScrollArea_EnsureVisible4(QScrollArea* self, int x, int y, int xmargin, int ymargin) {
    self->ensureVisible(static_cast<int>(x), static_cast<int>(y), static_cast<int>(xmargin), static_cast<int>(ymargin));
}

void QScrollArea_EnsureWidgetVisible2(QScrollArea* self, QWidget* childWidget, int xmargin) {
    self->ensureWidgetVisible(childWidget, static_cast<int>(xmargin));
}

void QScrollArea_EnsureWidgetVisible3(QScrollArea* self, QWidget* childWidget, int xmargin, int ymargin) {
    self->ensureWidgetVisible(childWidget, static_cast<int>(xmargin), static_cast<int>(ymargin));
}

// Derived class handler implementation
QSize* QScrollArea_SizeHint(const QScrollArea* self) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        return new QSize(vqscrollarea->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QScrollArea_QBaseSizeHint(const QScrollArea* self) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        vqscrollarea->setQScrollArea_SizeHint_IsBase(true);
        return new QSize(vqscrollarea->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnSizeHint(const QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        vqscrollarea->setQScrollArea_SizeHint_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
bool QScrollArea_FocusNextPrevChild(QScrollArea* self, bool next) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        return vqscrollarea->focusNextPrevChild(next);
    } else {
        return vqscrollarea->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QScrollArea_QBaseFocusNextPrevChild(QScrollArea* self, bool next) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_FocusNextPrevChild_IsBase(true);
        return vqscrollarea->focusNextPrevChild(next);
    } else {
        return vqscrollarea->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnFocusNextPrevChild(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QScrollArea_Event(QScrollArea* self, QEvent* param1) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        return vqscrollarea->event(param1);
    } else {
        return vqscrollarea->event(param1);
    }
}

// Base class handler implementation
bool QScrollArea_QBaseEvent(QScrollArea* self, QEvent* param1) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_Event_IsBase(true);
        return vqscrollarea->event(param1);
    } else {
        return vqscrollarea->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_Event_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QScrollArea_EventFilter(QScrollArea* self, QObject* param1, QEvent* param2) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        return vqscrollarea->eventFilter(param1, param2);
    } else {
        return vqscrollarea->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool QScrollArea_QBaseEventFilter(QScrollArea* self, QObject* param1, QEvent* param2) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_EventFilter_IsBase(true);
        return vqscrollarea->eventFilter(param1, param2);
    } else {
        return vqscrollarea->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnEventFilter(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_EventFilter_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_ResizeEvent(QScrollArea* self, QResizeEvent* param1) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->resizeEvent(param1);
    } else {
        vqscrollarea->resizeEvent(param1);
    }
}

// Base class handler implementation
void QScrollArea_QBaseResizeEvent(QScrollArea* self, QResizeEvent* param1) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_ResizeEvent_IsBase(true);
        vqscrollarea->resizeEvent(param1);
    } else {
        vqscrollarea->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnResizeEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_ResizeEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_ScrollContentsBy(QScrollArea* self, int dx, int dy) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqscrollarea->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void QScrollArea_QBaseScrollContentsBy(QScrollArea* self, int dx, int dy) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_ScrollContentsBy_IsBase(true);
        vqscrollarea->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqscrollarea->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnScrollContentsBy(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_ScrollContentsBy_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_ScrollContentsBy_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QScrollArea_ViewportSizeHint(const QScrollArea* self) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        return new QSize(vqscrollarea->viewportSizeHint());
    }
    return {};
}

// Base class handler implementation
QSize* QScrollArea_QBaseViewportSizeHint(const QScrollArea* self) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        vqscrollarea->setQScrollArea_ViewportSizeHint_IsBase(true);
        return new QSize(vqscrollarea->viewportSizeHint());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnViewportSizeHint(const QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        vqscrollarea->setQScrollArea_ViewportSizeHint_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_ViewportSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QScrollArea_MinimumSizeHint(const QScrollArea* self) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        return new QSize(vqscrollarea->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QScrollArea_QBaseMinimumSizeHint(const QScrollArea* self) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        vqscrollarea->setQScrollArea_MinimumSizeHint_IsBase(true);
        return new QSize(vqscrollarea->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnMinimumSizeHint(const QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        vqscrollarea->setQScrollArea_MinimumSizeHint_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_SetupViewport(QScrollArea* self, QWidget* viewport) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setupViewport(viewport);
    } else {
        vqscrollarea->setupViewport(viewport);
    }
}

// Base class handler implementation
void QScrollArea_QBaseSetupViewport(QScrollArea* self, QWidget* viewport) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_SetupViewport_IsBase(true);
        vqscrollarea->setupViewport(viewport);
    } else {
        vqscrollarea->setupViewport(viewport);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnSetupViewport(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_SetupViewport_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_SetupViewport_Callback>(slot));
    }
}

// Derived class handler implementation
bool QScrollArea_ViewportEvent(QScrollArea* self, QEvent* param1) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        return vqscrollarea->viewportEvent(param1);
    } else {
        return vqscrollarea->viewportEvent(param1);
    }
}

// Base class handler implementation
bool QScrollArea_QBaseViewportEvent(QScrollArea* self, QEvent* param1) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_ViewportEvent_IsBase(true);
        return vqscrollarea->viewportEvent(param1);
    } else {
        return vqscrollarea->viewportEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnViewportEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_ViewportEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_ViewportEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_PaintEvent(QScrollArea* self, QPaintEvent* param1) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->paintEvent(param1);
    } else {
        vqscrollarea->paintEvent(param1);
    }
}

// Base class handler implementation
void QScrollArea_QBasePaintEvent(QScrollArea* self, QPaintEvent* param1) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_PaintEvent_IsBase(true);
        vqscrollarea->paintEvent(param1);
    } else {
        vqscrollarea->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnPaintEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_PaintEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_MousePressEvent(QScrollArea* self, QMouseEvent* param1) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->mousePressEvent(param1);
    } else {
        vqscrollarea->mousePressEvent(param1);
    }
}

// Base class handler implementation
void QScrollArea_QBaseMousePressEvent(QScrollArea* self, QMouseEvent* param1) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_MousePressEvent_IsBase(true);
        vqscrollarea->mousePressEvent(param1);
    } else {
        vqscrollarea->mousePressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnMousePressEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_MousePressEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_MouseReleaseEvent(QScrollArea* self, QMouseEvent* param1) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->mouseReleaseEvent(param1);
    } else {
        vqscrollarea->mouseReleaseEvent(param1);
    }
}

// Base class handler implementation
void QScrollArea_QBaseMouseReleaseEvent(QScrollArea* self, QMouseEvent* param1) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_MouseReleaseEvent_IsBase(true);
        vqscrollarea->mouseReleaseEvent(param1);
    } else {
        vqscrollarea->mouseReleaseEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnMouseReleaseEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_MouseDoubleClickEvent(QScrollArea* self, QMouseEvent* param1) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->mouseDoubleClickEvent(param1);
    } else {
        vqscrollarea->mouseDoubleClickEvent(param1);
    }
}

// Base class handler implementation
void QScrollArea_QBaseMouseDoubleClickEvent(QScrollArea* self, QMouseEvent* param1) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_MouseDoubleClickEvent_IsBase(true);
        vqscrollarea->mouseDoubleClickEvent(param1);
    } else {
        vqscrollarea->mouseDoubleClickEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnMouseDoubleClickEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_MouseMoveEvent(QScrollArea* self, QMouseEvent* param1) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->mouseMoveEvent(param1);
    } else {
        vqscrollarea->mouseMoveEvent(param1);
    }
}

// Base class handler implementation
void QScrollArea_QBaseMouseMoveEvent(QScrollArea* self, QMouseEvent* param1) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_MouseMoveEvent_IsBase(true);
        vqscrollarea->mouseMoveEvent(param1);
    } else {
        vqscrollarea->mouseMoveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnMouseMoveEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_MouseMoveEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_WheelEvent(QScrollArea* self, QWheelEvent* param1) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->wheelEvent(param1);
    } else {
        vqscrollarea->wheelEvent(param1);
    }
}

// Base class handler implementation
void QScrollArea_QBaseWheelEvent(QScrollArea* self, QWheelEvent* param1) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_WheelEvent_IsBase(true);
        vqscrollarea->wheelEvent(param1);
    } else {
        vqscrollarea->wheelEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnWheelEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_WheelEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_ContextMenuEvent(QScrollArea* self, QContextMenuEvent* param1) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->contextMenuEvent(param1);
    } else {
        vqscrollarea->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void QScrollArea_QBaseContextMenuEvent(QScrollArea* self, QContextMenuEvent* param1) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_ContextMenuEvent_IsBase(true);
        vqscrollarea->contextMenuEvent(param1);
    } else {
        vqscrollarea->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnContextMenuEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_ContextMenuEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_DragEnterEvent(QScrollArea* self, QDragEnterEvent* param1) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->dragEnterEvent(param1);
    } else {
        vqscrollarea->dragEnterEvent(param1);
    }
}

// Base class handler implementation
void QScrollArea_QBaseDragEnterEvent(QScrollArea* self, QDragEnterEvent* param1) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_DragEnterEvent_IsBase(true);
        vqscrollarea->dragEnterEvent(param1);
    } else {
        vqscrollarea->dragEnterEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnDragEnterEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_DragEnterEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_DragMoveEvent(QScrollArea* self, QDragMoveEvent* param1) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->dragMoveEvent(param1);
    } else {
        vqscrollarea->dragMoveEvent(param1);
    }
}

// Base class handler implementation
void QScrollArea_QBaseDragMoveEvent(QScrollArea* self, QDragMoveEvent* param1) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_DragMoveEvent_IsBase(true);
        vqscrollarea->dragMoveEvent(param1);
    } else {
        vqscrollarea->dragMoveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnDragMoveEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_DragMoveEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_DragLeaveEvent(QScrollArea* self, QDragLeaveEvent* param1) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->dragLeaveEvent(param1);
    } else {
        vqscrollarea->dragLeaveEvent(param1);
    }
}

// Base class handler implementation
void QScrollArea_QBaseDragLeaveEvent(QScrollArea* self, QDragLeaveEvent* param1) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_DragLeaveEvent_IsBase(true);
        vqscrollarea->dragLeaveEvent(param1);
    } else {
        vqscrollarea->dragLeaveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnDragLeaveEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_DragLeaveEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_DropEvent(QScrollArea* self, QDropEvent* param1) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->dropEvent(param1);
    } else {
        vqscrollarea->dropEvent(param1);
    }
}

// Base class handler implementation
void QScrollArea_QBaseDropEvent(QScrollArea* self, QDropEvent* param1) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_DropEvent_IsBase(true);
        vqscrollarea->dropEvent(param1);
    } else {
        vqscrollarea->dropEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnDropEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_DropEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_KeyPressEvent(QScrollArea* self, QKeyEvent* param1) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->keyPressEvent(param1);
    } else {
        vqscrollarea->keyPressEvent(param1);
    }
}

// Base class handler implementation
void QScrollArea_QBaseKeyPressEvent(QScrollArea* self, QKeyEvent* param1) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_KeyPressEvent_IsBase(true);
        vqscrollarea->keyPressEvent(param1);
    } else {
        vqscrollarea->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnKeyPressEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_KeyPressEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_ChangeEvent(QScrollArea* self, QEvent* param1) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->changeEvent(param1);
    } else {
        vqscrollarea->changeEvent(param1);
    }
}

// Base class handler implementation
void QScrollArea_QBaseChangeEvent(QScrollArea* self, QEvent* param1) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_ChangeEvent_IsBase(true);
        vqscrollarea->changeEvent(param1);
    } else {
        vqscrollarea->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnChangeEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_ChangeEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_InitStyleOption(const QScrollArea* self, QStyleOptionFrame* option) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        vqscrollarea->initStyleOption(option);
    } else {
        vqscrollarea->initStyleOption(option);
    }
}

// Base class handler implementation
void QScrollArea_QBaseInitStyleOption(const QScrollArea* self, QStyleOptionFrame* option) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        vqscrollarea->setQScrollArea_InitStyleOption_IsBase(true);
        vqscrollarea->initStyleOption(option);
    } else {
        vqscrollarea->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnInitStyleOption(const QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        vqscrollarea->setQScrollArea_InitStyleOption_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QScrollArea_DevType(const QScrollArea* self) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        return vqscrollarea->devType();
    } else {
        return vqscrollarea->devType();
    }
}

// Base class handler implementation
int QScrollArea_QBaseDevType(const QScrollArea* self) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        vqscrollarea->setQScrollArea_DevType_IsBase(true);
        return vqscrollarea->devType();
    } else {
        return vqscrollarea->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnDevType(const QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        vqscrollarea->setQScrollArea_DevType_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_SetVisible(QScrollArea* self, bool visible) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setVisible(visible);
    } else {
        vqscrollarea->setVisible(visible);
    }
}

// Base class handler implementation
void QScrollArea_QBaseSetVisible(QScrollArea* self, bool visible) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_SetVisible_IsBase(true);
        vqscrollarea->setVisible(visible);
    } else {
        vqscrollarea->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnSetVisible(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_SetVisible_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QScrollArea_HeightForWidth(const QScrollArea* self, int param1) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        return vqscrollarea->heightForWidth(static_cast<int>(param1));
    } else {
        return vqscrollarea->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QScrollArea_QBaseHeightForWidth(const QScrollArea* self, int param1) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        vqscrollarea->setQScrollArea_HeightForWidth_IsBase(true);
        return vqscrollarea->heightForWidth(static_cast<int>(param1));
    } else {
        return vqscrollarea->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnHeightForWidth(const QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        vqscrollarea->setQScrollArea_HeightForWidth_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QScrollArea_HasHeightForWidth(const QScrollArea* self) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        return vqscrollarea->hasHeightForWidth();
    } else {
        return vqscrollarea->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QScrollArea_QBaseHasHeightForWidth(const QScrollArea* self) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        vqscrollarea->setQScrollArea_HasHeightForWidth_IsBase(true);
        return vqscrollarea->hasHeightForWidth();
    } else {
        return vqscrollarea->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnHasHeightForWidth(const QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        vqscrollarea->setQScrollArea_HasHeightForWidth_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QScrollArea_PaintEngine(const QScrollArea* self) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        return vqscrollarea->paintEngine();
    } else {
        return vqscrollarea->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QScrollArea_QBasePaintEngine(const QScrollArea* self) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        vqscrollarea->setQScrollArea_PaintEngine_IsBase(true);
        return vqscrollarea->paintEngine();
    } else {
        return vqscrollarea->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnPaintEngine(const QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        vqscrollarea->setQScrollArea_PaintEngine_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_KeyReleaseEvent(QScrollArea* self, QKeyEvent* event) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->keyReleaseEvent(event);
    } else {
        vqscrollarea->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QScrollArea_QBaseKeyReleaseEvent(QScrollArea* self, QKeyEvent* event) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_KeyReleaseEvent_IsBase(true);
        vqscrollarea->keyReleaseEvent(event);
    } else {
        vqscrollarea->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnKeyReleaseEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_FocusInEvent(QScrollArea* self, QFocusEvent* event) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->focusInEvent(event);
    } else {
        vqscrollarea->focusInEvent(event);
    }
}

// Base class handler implementation
void QScrollArea_QBaseFocusInEvent(QScrollArea* self, QFocusEvent* event) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_FocusInEvent_IsBase(true);
        vqscrollarea->focusInEvent(event);
    } else {
        vqscrollarea->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnFocusInEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_FocusInEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_FocusOutEvent(QScrollArea* self, QFocusEvent* event) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->focusOutEvent(event);
    } else {
        vqscrollarea->focusOutEvent(event);
    }
}

// Base class handler implementation
void QScrollArea_QBaseFocusOutEvent(QScrollArea* self, QFocusEvent* event) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_FocusOutEvent_IsBase(true);
        vqscrollarea->focusOutEvent(event);
    } else {
        vqscrollarea->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnFocusOutEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_FocusOutEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_EnterEvent(QScrollArea* self, QEnterEvent* event) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->enterEvent(event);
    } else {
        vqscrollarea->enterEvent(event);
    }
}

// Base class handler implementation
void QScrollArea_QBaseEnterEvent(QScrollArea* self, QEnterEvent* event) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_EnterEvent_IsBase(true);
        vqscrollarea->enterEvent(event);
    } else {
        vqscrollarea->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnEnterEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_EnterEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_LeaveEvent(QScrollArea* self, QEvent* event) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->leaveEvent(event);
    } else {
        vqscrollarea->leaveEvent(event);
    }
}

// Base class handler implementation
void QScrollArea_QBaseLeaveEvent(QScrollArea* self, QEvent* event) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_LeaveEvent_IsBase(true);
        vqscrollarea->leaveEvent(event);
    } else {
        vqscrollarea->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnLeaveEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_LeaveEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_MoveEvent(QScrollArea* self, QMoveEvent* event) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->moveEvent(event);
    } else {
        vqscrollarea->moveEvent(event);
    }
}

// Base class handler implementation
void QScrollArea_QBaseMoveEvent(QScrollArea* self, QMoveEvent* event) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_MoveEvent_IsBase(true);
        vqscrollarea->moveEvent(event);
    } else {
        vqscrollarea->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnMoveEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_MoveEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_CloseEvent(QScrollArea* self, QCloseEvent* event) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->closeEvent(event);
    } else {
        vqscrollarea->closeEvent(event);
    }
}

// Base class handler implementation
void QScrollArea_QBaseCloseEvent(QScrollArea* self, QCloseEvent* event) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_CloseEvent_IsBase(true);
        vqscrollarea->closeEvent(event);
    } else {
        vqscrollarea->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnCloseEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_CloseEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_TabletEvent(QScrollArea* self, QTabletEvent* event) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->tabletEvent(event);
    } else {
        vqscrollarea->tabletEvent(event);
    }
}

// Base class handler implementation
void QScrollArea_QBaseTabletEvent(QScrollArea* self, QTabletEvent* event) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_TabletEvent_IsBase(true);
        vqscrollarea->tabletEvent(event);
    } else {
        vqscrollarea->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnTabletEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_TabletEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_ActionEvent(QScrollArea* self, QActionEvent* event) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->actionEvent(event);
    } else {
        vqscrollarea->actionEvent(event);
    }
}

// Base class handler implementation
void QScrollArea_QBaseActionEvent(QScrollArea* self, QActionEvent* event) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_ActionEvent_IsBase(true);
        vqscrollarea->actionEvent(event);
    } else {
        vqscrollarea->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnActionEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_ActionEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_ShowEvent(QScrollArea* self, QShowEvent* event) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->showEvent(event);
    } else {
        vqscrollarea->showEvent(event);
    }
}

// Base class handler implementation
void QScrollArea_QBaseShowEvent(QScrollArea* self, QShowEvent* event) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_ShowEvent_IsBase(true);
        vqscrollarea->showEvent(event);
    } else {
        vqscrollarea->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnShowEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_ShowEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_HideEvent(QScrollArea* self, QHideEvent* event) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->hideEvent(event);
    } else {
        vqscrollarea->hideEvent(event);
    }
}

// Base class handler implementation
void QScrollArea_QBaseHideEvent(QScrollArea* self, QHideEvent* event) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_HideEvent_IsBase(true);
        vqscrollarea->hideEvent(event);
    } else {
        vqscrollarea->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnHideEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_HideEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QScrollArea_NativeEvent(QScrollArea* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        return vqscrollarea->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqscrollarea->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QScrollArea_QBaseNativeEvent(QScrollArea* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_NativeEvent_IsBase(true);
        return vqscrollarea->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqscrollarea->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnNativeEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_NativeEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QScrollArea_Metric(const QScrollArea* self, int param1) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        return vqscrollarea->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqscrollarea->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QScrollArea_QBaseMetric(const QScrollArea* self, int param1) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        vqscrollarea->setQScrollArea_Metric_IsBase(true);
        return vqscrollarea->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqscrollarea->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnMetric(const QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        vqscrollarea->setQScrollArea_Metric_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_InitPainter(const QScrollArea* self, QPainter* painter) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        vqscrollarea->initPainter(painter);
    } else {
        vqscrollarea->initPainter(painter);
    }
}

// Base class handler implementation
void QScrollArea_QBaseInitPainter(const QScrollArea* self, QPainter* painter) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        vqscrollarea->setQScrollArea_InitPainter_IsBase(true);
        vqscrollarea->initPainter(painter);
    } else {
        vqscrollarea->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnInitPainter(const QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        vqscrollarea->setQScrollArea_InitPainter_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QScrollArea_Redirected(const QScrollArea* self, QPoint* offset) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        return vqscrollarea->redirected(offset);
    } else {
        return vqscrollarea->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QScrollArea_QBaseRedirected(const QScrollArea* self, QPoint* offset) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        vqscrollarea->setQScrollArea_Redirected_IsBase(true);
        return vqscrollarea->redirected(offset);
    } else {
        return vqscrollarea->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnRedirected(const QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        vqscrollarea->setQScrollArea_Redirected_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QScrollArea_SharedPainter(const QScrollArea* self) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        return vqscrollarea->sharedPainter();
    } else {
        return vqscrollarea->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QScrollArea_QBaseSharedPainter(const QScrollArea* self) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        vqscrollarea->setQScrollArea_SharedPainter_IsBase(true);
        return vqscrollarea->sharedPainter();
    } else {
        return vqscrollarea->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnSharedPainter(const QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        vqscrollarea->setQScrollArea_SharedPainter_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_InputMethodEvent(QScrollArea* self, QInputMethodEvent* param1) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->inputMethodEvent(param1);
    } else {
        vqscrollarea->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QScrollArea_QBaseInputMethodEvent(QScrollArea* self, QInputMethodEvent* param1) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_InputMethodEvent_IsBase(true);
        vqscrollarea->inputMethodEvent(param1);
    } else {
        vqscrollarea->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnInputMethodEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_InputMethodEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QScrollArea_InputMethodQuery(const QScrollArea* self, int param1) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        return new QVariant(vqscrollarea->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QScrollArea_QBaseInputMethodQuery(const QScrollArea* self, int param1) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        vqscrollarea->setQScrollArea_InputMethodQuery_IsBase(true);
        return new QVariant(vqscrollarea->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnInputMethodQuery(const QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        vqscrollarea->setQScrollArea_InputMethodQuery_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_TimerEvent(QScrollArea* self, QTimerEvent* event) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->timerEvent(event);
    } else {
        vqscrollarea->timerEvent(event);
    }
}

// Base class handler implementation
void QScrollArea_QBaseTimerEvent(QScrollArea* self, QTimerEvent* event) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_TimerEvent_IsBase(true);
        vqscrollarea->timerEvent(event);
    } else {
        vqscrollarea->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnTimerEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_TimerEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_ChildEvent(QScrollArea* self, QChildEvent* event) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->childEvent(event);
    } else {
        vqscrollarea->childEvent(event);
    }
}

// Base class handler implementation
void QScrollArea_QBaseChildEvent(QScrollArea* self, QChildEvent* event) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_ChildEvent_IsBase(true);
        vqscrollarea->childEvent(event);
    } else {
        vqscrollarea->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnChildEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_ChildEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_CustomEvent(QScrollArea* self, QEvent* event) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->customEvent(event);
    } else {
        vqscrollarea->customEvent(event);
    }
}

// Base class handler implementation
void QScrollArea_QBaseCustomEvent(QScrollArea* self, QEvent* event) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_CustomEvent_IsBase(true);
        vqscrollarea->customEvent(event);
    } else {
        vqscrollarea->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnCustomEvent(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_CustomEvent_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_ConnectNotify(QScrollArea* self, QMetaMethod* signal) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->connectNotify(*signal);
    } else {
        vqscrollarea->connectNotify(*signal);
    }
}

// Base class handler implementation
void QScrollArea_QBaseConnectNotify(QScrollArea* self, QMetaMethod* signal) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_ConnectNotify_IsBase(true);
        vqscrollarea->connectNotify(*signal);
    } else {
        vqscrollarea->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnConnectNotify(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_ConnectNotify_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_DisconnectNotify(QScrollArea* self, QMetaMethod* signal) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->disconnectNotify(*signal);
    } else {
        vqscrollarea->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QScrollArea_QBaseDisconnectNotify(QScrollArea* self, QMetaMethod* signal) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_DisconnectNotify_IsBase(true);
        vqscrollarea->disconnectNotify(*signal);
    } else {
        vqscrollarea->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnDisconnectNotify(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_DisconnectNotify_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_SetViewportMargins(QScrollArea* self, int left, int top, int right, int bottom) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        vqscrollarea->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Base class handler implementation
void QScrollArea_QBaseSetViewportMargins(QScrollArea* self, int left, int top, int right, int bottom) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_SetViewportMargins_IsBase(true);
        vqscrollarea->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        vqscrollarea->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnSetViewportMargins(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_SetViewportMargins_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_SetViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
QMargins* QScrollArea_ViewportMargins(const QScrollArea* self) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        return new QMargins(vqscrollarea->viewportMargins());
    }
    return {};
}

// Base class handler implementation
QMargins* QScrollArea_QBaseViewportMargins(const QScrollArea* self) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        vqscrollarea->setQScrollArea_ViewportMargins_IsBase(true);
        return new QMargins(vqscrollarea->viewportMargins());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnViewportMargins(const QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        vqscrollarea->setQScrollArea_ViewportMargins_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_ViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_DrawFrame(QScrollArea* self, QPainter* param1) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->drawFrame(param1);
    } else {
        vqscrollarea->drawFrame(param1);
    }
}

// Base class handler implementation
void QScrollArea_QBaseDrawFrame(QScrollArea* self, QPainter* param1) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_DrawFrame_IsBase(true);
        vqscrollarea->drawFrame(param1);
    } else {
        vqscrollarea->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnDrawFrame(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_DrawFrame_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_UpdateMicroFocus(QScrollArea* self) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->updateMicroFocus();
    } else {
        vqscrollarea->updateMicroFocus();
    }
}

// Base class handler implementation
void QScrollArea_QBaseUpdateMicroFocus(QScrollArea* self) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_UpdateMicroFocus_IsBase(true);
        vqscrollarea->updateMicroFocus();
    } else {
        vqscrollarea->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnUpdateMicroFocus(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_Create(QScrollArea* self) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->create();
    } else {
        vqscrollarea->create();
    }
}

// Base class handler implementation
void QScrollArea_QBaseCreate(QScrollArea* self) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_Create_IsBase(true);
        vqscrollarea->create();
    } else {
        vqscrollarea->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnCreate(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_Create_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QScrollArea_Destroy(QScrollArea* self) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->destroy();
    } else {
        vqscrollarea->destroy();
    }
}

// Base class handler implementation
void QScrollArea_QBaseDestroy(QScrollArea* self) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_Destroy_IsBase(true);
        vqscrollarea->destroy();
    } else {
        vqscrollarea->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnDestroy(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_Destroy_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QScrollArea_FocusNextChild(QScrollArea* self) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        return vqscrollarea->focusNextChild();
    } else {
        return vqscrollarea->focusNextChild();
    }
}

// Base class handler implementation
bool QScrollArea_QBaseFocusNextChild(QScrollArea* self) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_FocusNextChild_IsBase(true);
        return vqscrollarea->focusNextChild();
    } else {
        return vqscrollarea->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnFocusNextChild(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_FocusNextChild_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QScrollArea_FocusPreviousChild(QScrollArea* self) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        return vqscrollarea->focusPreviousChild();
    } else {
        return vqscrollarea->focusPreviousChild();
    }
}

// Base class handler implementation
bool QScrollArea_QBaseFocusPreviousChild(QScrollArea* self) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_FocusPreviousChild_IsBase(true);
        return vqscrollarea->focusPreviousChild();
    } else {
        return vqscrollarea->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnFocusPreviousChild(QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = dynamic_cast<VirtualQScrollArea*>(self)) {
        vqscrollarea->setQScrollArea_FocusPreviousChild_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QScrollArea_Sender(const QScrollArea* self) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        return vqscrollarea->sender();
    } else {
        return vqscrollarea->sender();
    }
}

// Base class handler implementation
QObject* QScrollArea_QBaseSender(const QScrollArea* self) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        vqscrollarea->setQScrollArea_Sender_IsBase(true);
        return vqscrollarea->sender();
    } else {
        return vqscrollarea->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnSender(const QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        vqscrollarea->setQScrollArea_Sender_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QScrollArea_SenderSignalIndex(const QScrollArea* self) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        return vqscrollarea->senderSignalIndex();
    } else {
        return vqscrollarea->senderSignalIndex();
    }
}

// Base class handler implementation
int QScrollArea_QBaseSenderSignalIndex(const QScrollArea* self) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        vqscrollarea->setQScrollArea_SenderSignalIndex_IsBase(true);
        return vqscrollarea->senderSignalIndex();
    } else {
        return vqscrollarea->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnSenderSignalIndex(const QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        vqscrollarea->setQScrollArea_SenderSignalIndex_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QScrollArea_Receivers(const QScrollArea* self, const char* signal) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        return vqscrollarea->receivers(signal);
    } else {
        return vqscrollarea->receivers(signal);
    }
}

// Base class handler implementation
int QScrollArea_QBaseReceivers(const QScrollArea* self, const char* signal) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        vqscrollarea->setQScrollArea_Receivers_IsBase(true);
        return vqscrollarea->receivers(signal);
    } else {
        return vqscrollarea->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnReceivers(const QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        vqscrollarea->setQScrollArea_Receivers_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QScrollArea_IsSignalConnected(const QScrollArea* self, QMetaMethod* signal) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        return vqscrollarea->isSignalConnected(*signal);
    } else {
        return vqscrollarea->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QScrollArea_QBaseIsSignalConnected(const QScrollArea* self, QMetaMethod* signal) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        vqscrollarea->setQScrollArea_IsSignalConnected_IsBase(true);
        return vqscrollarea->isSignalConnected(*signal);
    } else {
        return vqscrollarea->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QScrollArea_OnIsSignalConnected(const QScrollArea* self, intptr_t slot) {
    if (auto* vqscrollarea = const_cast<VirtualQScrollArea*>(dynamic_cast<const VirtualQScrollArea*>(self))) {
        vqscrollarea->setQScrollArea_IsSignalConnected_Callback(reinterpret_cast<VirtualQScrollArea::QScrollArea_IsSignalConnected_Callback>(slot));
    }
}

void QScrollArea_Delete(QScrollArea* self) {
    delete self;
}
