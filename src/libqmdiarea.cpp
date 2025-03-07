#include <QAbstractScrollArea>
#include <QAction>
#include <QActionEvent>
#include <QAnyStringView>
#include <QBackingStore>
#include <QBindingStorage>
#include <QBitmap>
#include <QBrush>
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
#include <QMdiArea>
#include <QMdiSubWindow>
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
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <QWindow>
#include <qmdiarea.h>
#include "libqmdiarea.hpp"
#include "libqmdiarea.hxx"

QMdiArea* QMdiArea_new(QWidget* parent) {
    return new VirtualQMdiArea(parent);
}

QMdiArea* QMdiArea_new2() {
    return new VirtualQMdiArea();
}

QMetaObject* QMdiArea_MetaObject(const QMdiArea* self) {
    return (QMetaObject*)self->metaObject();
}

void* QMdiArea_Metacast(QMdiArea* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QMdiArea_Metacall(QMdiArea* self, int param1, int param2, void** param3) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QMdiArea_OnMetacall(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_Metacall_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QMdiArea_QBaseMetacall(QMdiArea* self, int param1, int param2, void** param3) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_Metacall_IsBase(true);
        return vqmdiarea->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QMdiArea_Tr(const char* s) {
    QString _ret = QMdiArea::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QMdiSubWindow* QMdiArea_CurrentSubWindow(const QMdiArea* self) {
    return self->currentSubWindow();
}

QMdiSubWindow* QMdiArea_ActiveSubWindow(const QMdiArea* self) {
    return self->activeSubWindow();
}

libqt_list /* of QMdiSubWindow* */ QMdiArea_SubWindowList(const QMdiArea* self) {
    QList<QMdiSubWindow*> _ret = self->subWindowList();
    // Convert QList<> from C++ memory to manually-managed C memory
    QMdiSubWindow** _arr = static_cast<QMdiSubWindow**>(malloc(sizeof(QMdiSubWindow*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

QMdiSubWindow* QMdiArea_AddSubWindow(QMdiArea* self, QWidget* widget) {
    return self->addSubWindow(widget);
}

void QMdiArea_RemoveSubWindow(QMdiArea* self, QWidget* widget) {
    self->removeSubWindow(widget);
}

QBrush* QMdiArea_Background(const QMdiArea* self) {
    return new QBrush(self->background());
}

void QMdiArea_SetBackground(QMdiArea* self, QBrush* background) {
    self->setBackground(*background);
}

int QMdiArea_ActivationOrder(const QMdiArea* self) {
    return static_cast<int>(self->activationOrder());
}

void QMdiArea_SetActivationOrder(QMdiArea* self, int order) {
    self->setActivationOrder(static_cast<QMdiArea::WindowOrder>(order));
}

void QMdiArea_SetOption(QMdiArea* self, int option) {
    self->setOption(static_cast<QMdiArea::AreaOption>(option));
}

bool QMdiArea_TestOption(const QMdiArea* self, int opton) {
    return self->testOption(static_cast<QMdiArea::AreaOption>(opton));
}

void QMdiArea_SetViewMode(QMdiArea* self, int mode) {
    self->setViewMode(static_cast<QMdiArea::ViewMode>(mode));
}

int QMdiArea_ViewMode(const QMdiArea* self) {
    return static_cast<int>(self->viewMode());
}

bool QMdiArea_DocumentMode(const QMdiArea* self) {
    return self->documentMode();
}

void QMdiArea_SetDocumentMode(QMdiArea* self, bool enabled) {
    self->setDocumentMode(enabled);
}

void QMdiArea_SetTabsClosable(QMdiArea* self, bool closable) {
    self->setTabsClosable(closable);
}

bool QMdiArea_TabsClosable(const QMdiArea* self) {
    return self->tabsClosable();
}

void QMdiArea_SetTabsMovable(QMdiArea* self, bool movable) {
    self->setTabsMovable(movable);
}

bool QMdiArea_TabsMovable(const QMdiArea* self) {
    return self->tabsMovable();
}

void QMdiArea_SetTabShape(QMdiArea* self, int shape) {
    self->setTabShape(static_cast<QTabWidget::TabShape>(shape));
}

int QMdiArea_TabShape(const QMdiArea* self) {
    return static_cast<int>(self->tabShape());
}

void QMdiArea_SetTabPosition(QMdiArea* self, int position) {
    self->setTabPosition(static_cast<QTabWidget::TabPosition>(position));
}

int QMdiArea_TabPosition(const QMdiArea* self) {
    return static_cast<int>(self->tabPosition());
}

void QMdiArea_SubWindowActivated(QMdiArea* self, QMdiSubWindow* param1) {
    self->subWindowActivated(param1);
}

void QMdiArea_Connect_SubWindowActivated(QMdiArea* self, intptr_t slot) {
    void (*slotFunc)(QMdiArea*, QMdiSubWindow*) = reinterpret_cast<void (*)(QMdiArea*, QMdiSubWindow*)>(slot);
    QMdiArea::connect(self, &QMdiArea::subWindowActivated, [self, slotFunc](QMdiSubWindow* param1) {
        QMdiSubWindow* sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void QMdiArea_SetActiveSubWindow(QMdiArea* self, QMdiSubWindow* window) {
    self->setActiveSubWindow(window);
}

void QMdiArea_TileSubWindows(QMdiArea* self) {
    self->tileSubWindows();
}

void QMdiArea_CascadeSubWindows(QMdiArea* self) {
    self->cascadeSubWindows();
}

void QMdiArea_CloseActiveSubWindow(QMdiArea* self) {
    self->closeActiveSubWindow();
}

void QMdiArea_CloseAllSubWindows(QMdiArea* self) {
    self->closeAllSubWindows();
}

void QMdiArea_ActivateNextSubWindow(QMdiArea* self) {
    self->activateNextSubWindow();
}

void QMdiArea_ActivatePreviousSubWindow(QMdiArea* self) {
    self->activatePreviousSubWindow();
}

libqt_string QMdiArea_Tr2(const char* s, const char* c) {
    QString _ret = QMdiArea::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QMdiArea_Tr3(const char* s, const char* c, int n) {
    QString _ret = QMdiArea::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_list /* of QMdiSubWindow* */ QMdiArea_SubWindowList1(const QMdiArea* self, int order) {
    QList<QMdiSubWindow*> _ret = self->subWindowList(static_cast<QMdiArea::WindowOrder>(order));
    // Convert QList<> from C++ memory to manually-managed C memory
    QMdiSubWindow** _arr = static_cast<QMdiSubWindow**>(malloc(sizeof(QMdiSubWindow*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

QMdiSubWindow* QMdiArea_AddSubWindow2(QMdiArea* self, QWidget* widget, int flags) {
    return self->addSubWindow(widget, static_cast<Qt::WindowFlags>(flags));
}

void QMdiArea_SetOption2(QMdiArea* self, int option, bool on) {
    self->setOption(static_cast<QMdiArea::AreaOption>(option), on);
}

// Derived class handler implementation
QSize* QMdiArea_SizeHint(const QMdiArea* self) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        return new QSize(vqmdiarea->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QMdiArea_QBaseSizeHint(const QMdiArea* self) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        vqmdiarea->setQMdiArea_SizeHint_IsBase(true);
        return new QSize(vqmdiarea->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnSizeHint(const QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        vqmdiarea->setQMdiArea_SizeHint_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QMdiArea_MinimumSizeHint(const QMdiArea* self) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        return new QSize(vqmdiarea->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QMdiArea_QBaseMinimumSizeHint(const QMdiArea* self) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        vqmdiarea->setQMdiArea_MinimumSizeHint_IsBase(true);
        return new QSize(vqmdiarea->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnMinimumSizeHint(const QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        vqmdiarea->setQMdiArea_MinimumSizeHint_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_SetupViewport(QMdiArea* self, QWidget* viewport) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setupViewport(viewport);
    } else {
        vqmdiarea->setupViewport(viewport);
    }
}

// Base class handler implementation
void QMdiArea_QBaseSetupViewport(QMdiArea* self, QWidget* viewport) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_SetupViewport_IsBase(true);
        vqmdiarea->setupViewport(viewport);
    } else {
        vqmdiarea->setupViewport(viewport);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnSetupViewport(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_SetupViewport_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_SetupViewport_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMdiArea_Event(QMdiArea* self, QEvent* event) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        return vqmdiarea->event(event);
    } else {
        return vqmdiarea->event(event);
    }
}

// Base class handler implementation
bool QMdiArea_QBaseEvent(QMdiArea* self, QEvent* event) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_Event_IsBase(true);
        return vqmdiarea->event(event);
    } else {
        return vqmdiarea->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_Event_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMdiArea_EventFilter(QMdiArea* self, QObject* object, QEvent* event) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        return vqmdiarea->eventFilter(object, event);
    } else {
        return vqmdiarea->eventFilter(object, event);
    }
}

// Base class handler implementation
bool QMdiArea_QBaseEventFilter(QMdiArea* self, QObject* object, QEvent* event) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_EventFilter_IsBase(true);
        return vqmdiarea->eventFilter(object, event);
    } else {
        return vqmdiarea->eventFilter(object, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnEventFilter(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_EventFilter_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_PaintEvent(QMdiArea* self, QPaintEvent* paintEvent) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->paintEvent(paintEvent);
    } else {
        vqmdiarea->paintEvent(paintEvent);
    }
}

// Base class handler implementation
void QMdiArea_QBasePaintEvent(QMdiArea* self, QPaintEvent* paintEvent) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_PaintEvent_IsBase(true);
        vqmdiarea->paintEvent(paintEvent);
    } else {
        vqmdiarea->paintEvent(paintEvent);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnPaintEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_PaintEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_ChildEvent(QMdiArea* self, QChildEvent* childEvent) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->childEvent(childEvent);
    } else {
        vqmdiarea->childEvent(childEvent);
    }
}

// Base class handler implementation
void QMdiArea_QBaseChildEvent(QMdiArea* self, QChildEvent* childEvent) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_ChildEvent_IsBase(true);
        vqmdiarea->childEvent(childEvent);
    } else {
        vqmdiarea->childEvent(childEvent);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnChildEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_ChildEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_ResizeEvent(QMdiArea* self, QResizeEvent* resizeEvent) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->resizeEvent(resizeEvent);
    } else {
        vqmdiarea->resizeEvent(resizeEvent);
    }
}

// Base class handler implementation
void QMdiArea_QBaseResizeEvent(QMdiArea* self, QResizeEvent* resizeEvent) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_ResizeEvent_IsBase(true);
        vqmdiarea->resizeEvent(resizeEvent);
    } else {
        vqmdiarea->resizeEvent(resizeEvent);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnResizeEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_ResizeEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_TimerEvent(QMdiArea* self, QTimerEvent* timerEvent) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->timerEvent(timerEvent);
    } else {
        vqmdiarea->timerEvent(timerEvent);
    }
}

// Base class handler implementation
void QMdiArea_QBaseTimerEvent(QMdiArea* self, QTimerEvent* timerEvent) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_TimerEvent_IsBase(true);
        vqmdiarea->timerEvent(timerEvent);
    } else {
        vqmdiarea->timerEvent(timerEvent);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnTimerEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_TimerEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_ShowEvent(QMdiArea* self, QShowEvent* showEvent) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->showEvent(showEvent);
    } else {
        vqmdiarea->showEvent(showEvent);
    }
}

// Base class handler implementation
void QMdiArea_QBaseShowEvent(QMdiArea* self, QShowEvent* showEvent) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_ShowEvent_IsBase(true);
        vqmdiarea->showEvent(showEvent);
    } else {
        vqmdiarea->showEvent(showEvent);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnShowEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_ShowEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMdiArea_ViewportEvent(QMdiArea* self, QEvent* event) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        return vqmdiarea->viewportEvent(event);
    } else {
        return vqmdiarea->viewportEvent(event);
    }
}

// Base class handler implementation
bool QMdiArea_QBaseViewportEvent(QMdiArea* self, QEvent* event) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_ViewportEvent_IsBase(true);
        return vqmdiarea->viewportEvent(event);
    } else {
        return vqmdiarea->viewportEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnViewportEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_ViewportEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_ViewportEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_ScrollContentsBy(QMdiArea* self, int dx, int dy) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqmdiarea->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void QMdiArea_QBaseScrollContentsBy(QMdiArea* self, int dx, int dy) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_ScrollContentsBy_IsBase(true);
        vqmdiarea->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqmdiarea->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnScrollContentsBy(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_ScrollContentsBy_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_ScrollContentsBy_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_MousePressEvent(QMdiArea* self, QMouseEvent* param1) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->mousePressEvent(param1);
    } else {
        vqmdiarea->mousePressEvent(param1);
    }
}

// Base class handler implementation
void QMdiArea_QBaseMousePressEvent(QMdiArea* self, QMouseEvent* param1) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_MousePressEvent_IsBase(true);
        vqmdiarea->mousePressEvent(param1);
    } else {
        vqmdiarea->mousePressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnMousePressEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_MousePressEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_MouseReleaseEvent(QMdiArea* self, QMouseEvent* param1) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->mouseReleaseEvent(param1);
    } else {
        vqmdiarea->mouseReleaseEvent(param1);
    }
}

// Base class handler implementation
void QMdiArea_QBaseMouseReleaseEvent(QMdiArea* self, QMouseEvent* param1) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_MouseReleaseEvent_IsBase(true);
        vqmdiarea->mouseReleaseEvent(param1);
    } else {
        vqmdiarea->mouseReleaseEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnMouseReleaseEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_MouseDoubleClickEvent(QMdiArea* self, QMouseEvent* param1) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->mouseDoubleClickEvent(param1);
    } else {
        vqmdiarea->mouseDoubleClickEvent(param1);
    }
}

// Base class handler implementation
void QMdiArea_QBaseMouseDoubleClickEvent(QMdiArea* self, QMouseEvent* param1) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_MouseDoubleClickEvent_IsBase(true);
        vqmdiarea->mouseDoubleClickEvent(param1);
    } else {
        vqmdiarea->mouseDoubleClickEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnMouseDoubleClickEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_MouseMoveEvent(QMdiArea* self, QMouseEvent* param1) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->mouseMoveEvent(param1);
    } else {
        vqmdiarea->mouseMoveEvent(param1);
    }
}

// Base class handler implementation
void QMdiArea_QBaseMouseMoveEvent(QMdiArea* self, QMouseEvent* param1) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_MouseMoveEvent_IsBase(true);
        vqmdiarea->mouseMoveEvent(param1);
    } else {
        vqmdiarea->mouseMoveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnMouseMoveEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_MouseMoveEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_WheelEvent(QMdiArea* self, QWheelEvent* param1) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->wheelEvent(param1);
    } else {
        vqmdiarea->wheelEvent(param1);
    }
}

// Base class handler implementation
void QMdiArea_QBaseWheelEvent(QMdiArea* self, QWheelEvent* param1) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_WheelEvent_IsBase(true);
        vqmdiarea->wheelEvent(param1);
    } else {
        vqmdiarea->wheelEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnWheelEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_WheelEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_ContextMenuEvent(QMdiArea* self, QContextMenuEvent* param1) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->contextMenuEvent(param1);
    } else {
        vqmdiarea->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void QMdiArea_QBaseContextMenuEvent(QMdiArea* self, QContextMenuEvent* param1) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_ContextMenuEvent_IsBase(true);
        vqmdiarea->contextMenuEvent(param1);
    } else {
        vqmdiarea->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnContextMenuEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_ContextMenuEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_DragEnterEvent(QMdiArea* self, QDragEnterEvent* param1) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->dragEnterEvent(param1);
    } else {
        vqmdiarea->dragEnterEvent(param1);
    }
}

// Base class handler implementation
void QMdiArea_QBaseDragEnterEvent(QMdiArea* self, QDragEnterEvent* param1) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_DragEnterEvent_IsBase(true);
        vqmdiarea->dragEnterEvent(param1);
    } else {
        vqmdiarea->dragEnterEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnDragEnterEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_DragEnterEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_DragMoveEvent(QMdiArea* self, QDragMoveEvent* param1) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->dragMoveEvent(param1);
    } else {
        vqmdiarea->dragMoveEvent(param1);
    }
}

// Base class handler implementation
void QMdiArea_QBaseDragMoveEvent(QMdiArea* self, QDragMoveEvent* param1) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_DragMoveEvent_IsBase(true);
        vqmdiarea->dragMoveEvent(param1);
    } else {
        vqmdiarea->dragMoveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnDragMoveEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_DragMoveEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_DragLeaveEvent(QMdiArea* self, QDragLeaveEvent* param1) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->dragLeaveEvent(param1);
    } else {
        vqmdiarea->dragLeaveEvent(param1);
    }
}

// Base class handler implementation
void QMdiArea_QBaseDragLeaveEvent(QMdiArea* self, QDragLeaveEvent* param1) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_DragLeaveEvent_IsBase(true);
        vqmdiarea->dragLeaveEvent(param1);
    } else {
        vqmdiarea->dragLeaveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnDragLeaveEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_DragLeaveEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_DropEvent(QMdiArea* self, QDropEvent* param1) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->dropEvent(param1);
    } else {
        vqmdiarea->dropEvent(param1);
    }
}

// Base class handler implementation
void QMdiArea_QBaseDropEvent(QMdiArea* self, QDropEvent* param1) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_DropEvent_IsBase(true);
        vqmdiarea->dropEvent(param1);
    } else {
        vqmdiarea->dropEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnDropEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_DropEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_KeyPressEvent(QMdiArea* self, QKeyEvent* param1) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->keyPressEvent(param1);
    } else {
        vqmdiarea->keyPressEvent(param1);
    }
}

// Base class handler implementation
void QMdiArea_QBaseKeyPressEvent(QMdiArea* self, QKeyEvent* param1) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_KeyPressEvent_IsBase(true);
        vqmdiarea->keyPressEvent(param1);
    } else {
        vqmdiarea->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnKeyPressEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_KeyPressEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QMdiArea_ViewportSizeHint(const QMdiArea* self) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        return new QSize(vqmdiarea->viewportSizeHint());
    }
    return {};
}

// Base class handler implementation
QSize* QMdiArea_QBaseViewportSizeHint(const QMdiArea* self) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        vqmdiarea->setQMdiArea_ViewportSizeHint_IsBase(true);
        return new QSize(vqmdiarea->viewportSizeHint());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnViewportSizeHint(const QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        vqmdiarea->setQMdiArea_ViewportSizeHint_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_ViewportSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_ChangeEvent(QMdiArea* self, QEvent* param1) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->changeEvent(param1);
    } else {
        vqmdiarea->changeEvent(param1);
    }
}

// Base class handler implementation
void QMdiArea_QBaseChangeEvent(QMdiArea* self, QEvent* param1) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_ChangeEvent_IsBase(true);
        vqmdiarea->changeEvent(param1);
    } else {
        vqmdiarea->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnChangeEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_ChangeEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_InitStyleOption(const QMdiArea* self, QStyleOptionFrame* option) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        vqmdiarea->initStyleOption(option);
    } else {
        vqmdiarea->initStyleOption(option);
    }
}

// Base class handler implementation
void QMdiArea_QBaseInitStyleOption(const QMdiArea* self, QStyleOptionFrame* option) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        vqmdiarea->setQMdiArea_InitStyleOption_IsBase(true);
        vqmdiarea->initStyleOption(option);
    } else {
        vqmdiarea->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnInitStyleOption(const QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        vqmdiarea->setQMdiArea_InitStyleOption_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QMdiArea_DevType(const QMdiArea* self) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        return vqmdiarea->devType();
    } else {
        return vqmdiarea->devType();
    }
}

// Base class handler implementation
int QMdiArea_QBaseDevType(const QMdiArea* self) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        vqmdiarea->setQMdiArea_DevType_IsBase(true);
        return vqmdiarea->devType();
    } else {
        return vqmdiarea->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnDevType(const QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        vqmdiarea->setQMdiArea_DevType_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_SetVisible(QMdiArea* self, bool visible) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setVisible(visible);
    } else {
        vqmdiarea->setVisible(visible);
    }
}

// Base class handler implementation
void QMdiArea_QBaseSetVisible(QMdiArea* self, bool visible) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_SetVisible_IsBase(true);
        vqmdiarea->setVisible(visible);
    } else {
        vqmdiarea->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnSetVisible(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_SetVisible_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QMdiArea_HeightForWidth(const QMdiArea* self, int param1) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        return vqmdiarea->heightForWidth(static_cast<int>(param1));
    } else {
        return vqmdiarea->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QMdiArea_QBaseHeightForWidth(const QMdiArea* self, int param1) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        vqmdiarea->setQMdiArea_HeightForWidth_IsBase(true);
        return vqmdiarea->heightForWidth(static_cast<int>(param1));
    } else {
        return vqmdiarea->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnHeightForWidth(const QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        vqmdiarea->setQMdiArea_HeightForWidth_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMdiArea_HasHeightForWidth(const QMdiArea* self) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        return vqmdiarea->hasHeightForWidth();
    } else {
        return vqmdiarea->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QMdiArea_QBaseHasHeightForWidth(const QMdiArea* self) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        vqmdiarea->setQMdiArea_HasHeightForWidth_IsBase(true);
        return vqmdiarea->hasHeightForWidth();
    } else {
        return vqmdiarea->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnHasHeightForWidth(const QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        vqmdiarea->setQMdiArea_HasHeightForWidth_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QMdiArea_PaintEngine(const QMdiArea* self) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        return vqmdiarea->paintEngine();
    } else {
        return vqmdiarea->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QMdiArea_QBasePaintEngine(const QMdiArea* self) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        vqmdiarea->setQMdiArea_PaintEngine_IsBase(true);
        return vqmdiarea->paintEngine();
    } else {
        return vqmdiarea->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnPaintEngine(const QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        vqmdiarea->setQMdiArea_PaintEngine_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_KeyReleaseEvent(QMdiArea* self, QKeyEvent* event) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->keyReleaseEvent(event);
    } else {
        vqmdiarea->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QMdiArea_QBaseKeyReleaseEvent(QMdiArea* self, QKeyEvent* event) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_KeyReleaseEvent_IsBase(true);
        vqmdiarea->keyReleaseEvent(event);
    } else {
        vqmdiarea->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnKeyReleaseEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_FocusInEvent(QMdiArea* self, QFocusEvent* event) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->focusInEvent(event);
    } else {
        vqmdiarea->focusInEvent(event);
    }
}

// Base class handler implementation
void QMdiArea_QBaseFocusInEvent(QMdiArea* self, QFocusEvent* event) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_FocusInEvent_IsBase(true);
        vqmdiarea->focusInEvent(event);
    } else {
        vqmdiarea->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnFocusInEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_FocusInEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_FocusOutEvent(QMdiArea* self, QFocusEvent* event) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->focusOutEvent(event);
    } else {
        vqmdiarea->focusOutEvent(event);
    }
}

// Base class handler implementation
void QMdiArea_QBaseFocusOutEvent(QMdiArea* self, QFocusEvent* event) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_FocusOutEvent_IsBase(true);
        vqmdiarea->focusOutEvent(event);
    } else {
        vqmdiarea->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnFocusOutEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_FocusOutEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_EnterEvent(QMdiArea* self, QEnterEvent* event) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->enterEvent(event);
    } else {
        vqmdiarea->enterEvent(event);
    }
}

// Base class handler implementation
void QMdiArea_QBaseEnterEvent(QMdiArea* self, QEnterEvent* event) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_EnterEvent_IsBase(true);
        vqmdiarea->enterEvent(event);
    } else {
        vqmdiarea->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnEnterEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_EnterEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_LeaveEvent(QMdiArea* self, QEvent* event) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->leaveEvent(event);
    } else {
        vqmdiarea->leaveEvent(event);
    }
}

// Base class handler implementation
void QMdiArea_QBaseLeaveEvent(QMdiArea* self, QEvent* event) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_LeaveEvent_IsBase(true);
        vqmdiarea->leaveEvent(event);
    } else {
        vqmdiarea->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnLeaveEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_LeaveEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_MoveEvent(QMdiArea* self, QMoveEvent* event) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->moveEvent(event);
    } else {
        vqmdiarea->moveEvent(event);
    }
}

// Base class handler implementation
void QMdiArea_QBaseMoveEvent(QMdiArea* self, QMoveEvent* event) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_MoveEvent_IsBase(true);
        vqmdiarea->moveEvent(event);
    } else {
        vqmdiarea->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnMoveEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_MoveEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_CloseEvent(QMdiArea* self, QCloseEvent* event) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->closeEvent(event);
    } else {
        vqmdiarea->closeEvent(event);
    }
}

// Base class handler implementation
void QMdiArea_QBaseCloseEvent(QMdiArea* self, QCloseEvent* event) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_CloseEvent_IsBase(true);
        vqmdiarea->closeEvent(event);
    } else {
        vqmdiarea->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnCloseEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_CloseEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_TabletEvent(QMdiArea* self, QTabletEvent* event) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->tabletEvent(event);
    } else {
        vqmdiarea->tabletEvent(event);
    }
}

// Base class handler implementation
void QMdiArea_QBaseTabletEvent(QMdiArea* self, QTabletEvent* event) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_TabletEvent_IsBase(true);
        vqmdiarea->tabletEvent(event);
    } else {
        vqmdiarea->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnTabletEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_TabletEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_ActionEvent(QMdiArea* self, QActionEvent* event) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->actionEvent(event);
    } else {
        vqmdiarea->actionEvent(event);
    }
}

// Base class handler implementation
void QMdiArea_QBaseActionEvent(QMdiArea* self, QActionEvent* event) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_ActionEvent_IsBase(true);
        vqmdiarea->actionEvent(event);
    } else {
        vqmdiarea->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnActionEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_ActionEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_HideEvent(QMdiArea* self, QHideEvent* event) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->hideEvent(event);
    } else {
        vqmdiarea->hideEvent(event);
    }
}

// Base class handler implementation
void QMdiArea_QBaseHideEvent(QMdiArea* self, QHideEvent* event) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_HideEvent_IsBase(true);
        vqmdiarea->hideEvent(event);
    } else {
        vqmdiarea->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnHideEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_HideEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMdiArea_NativeEvent(QMdiArea* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        return vqmdiarea->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqmdiarea->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QMdiArea_QBaseNativeEvent(QMdiArea* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_NativeEvent_IsBase(true);
        return vqmdiarea->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqmdiarea->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnNativeEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_NativeEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QMdiArea_Metric(const QMdiArea* self, int param1) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        return vqmdiarea->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqmdiarea->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QMdiArea_QBaseMetric(const QMdiArea* self, int param1) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        vqmdiarea->setQMdiArea_Metric_IsBase(true);
        return vqmdiarea->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqmdiarea->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnMetric(const QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        vqmdiarea->setQMdiArea_Metric_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_InitPainter(const QMdiArea* self, QPainter* painter) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        vqmdiarea->initPainter(painter);
    } else {
        vqmdiarea->initPainter(painter);
    }
}

// Base class handler implementation
void QMdiArea_QBaseInitPainter(const QMdiArea* self, QPainter* painter) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        vqmdiarea->setQMdiArea_InitPainter_IsBase(true);
        vqmdiarea->initPainter(painter);
    } else {
        vqmdiarea->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnInitPainter(const QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        vqmdiarea->setQMdiArea_InitPainter_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QMdiArea_Redirected(const QMdiArea* self, QPoint* offset) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        return vqmdiarea->redirected(offset);
    } else {
        return vqmdiarea->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QMdiArea_QBaseRedirected(const QMdiArea* self, QPoint* offset) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        vqmdiarea->setQMdiArea_Redirected_IsBase(true);
        return vqmdiarea->redirected(offset);
    } else {
        return vqmdiarea->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnRedirected(const QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        vqmdiarea->setQMdiArea_Redirected_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QMdiArea_SharedPainter(const QMdiArea* self) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        return vqmdiarea->sharedPainter();
    } else {
        return vqmdiarea->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QMdiArea_QBaseSharedPainter(const QMdiArea* self) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        vqmdiarea->setQMdiArea_SharedPainter_IsBase(true);
        return vqmdiarea->sharedPainter();
    } else {
        return vqmdiarea->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnSharedPainter(const QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        vqmdiarea->setQMdiArea_SharedPainter_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_InputMethodEvent(QMdiArea* self, QInputMethodEvent* param1) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->inputMethodEvent(param1);
    } else {
        vqmdiarea->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QMdiArea_QBaseInputMethodEvent(QMdiArea* self, QInputMethodEvent* param1) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_InputMethodEvent_IsBase(true);
        vqmdiarea->inputMethodEvent(param1);
    } else {
        vqmdiarea->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnInputMethodEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_InputMethodEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QMdiArea_InputMethodQuery(const QMdiArea* self, int param1) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        return new QVariant(vqmdiarea->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QMdiArea_QBaseInputMethodQuery(const QMdiArea* self, int param1) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        vqmdiarea->setQMdiArea_InputMethodQuery_IsBase(true);
        return new QVariant(vqmdiarea->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnInputMethodQuery(const QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        vqmdiarea->setQMdiArea_InputMethodQuery_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMdiArea_FocusNextPrevChild(QMdiArea* self, bool next) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        return vqmdiarea->focusNextPrevChild(next);
    } else {
        return vqmdiarea->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QMdiArea_QBaseFocusNextPrevChild(QMdiArea* self, bool next) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_FocusNextPrevChild_IsBase(true);
        return vqmdiarea->focusNextPrevChild(next);
    } else {
        return vqmdiarea->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnFocusNextPrevChild(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_CustomEvent(QMdiArea* self, QEvent* event) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->customEvent(event);
    } else {
        vqmdiarea->customEvent(event);
    }
}

// Base class handler implementation
void QMdiArea_QBaseCustomEvent(QMdiArea* self, QEvent* event) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_CustomEvent_IsBase(true);
        vqmdiarea->customEvent(event);
    } else {
        vqmdiarea->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnCustomEvent(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_CustomEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_ConnectNotify(QMdiArea* self, QMetaMethod* signal) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->connectNotify(*signal);
    } else {
        vqmdiarea->connectNotify(*signal);
    }
}

// Base class handler implementation
void QMdiArea_QBaseConnectNotify(QMdiArea* self, QMetaMethod* signal) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_ConnectNotify_IsBase(true);
        vqmdiarea->connectNotify(*signal);
    } else {
        vqmdiarea->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnConnectNotify(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_ConnectNotify_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_DisconnectNotify(QMdiArea* self, QMetaMethod* signal) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->disconnectNotify(*signal);
    } else {
        vqmdiarea->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QMdiArea_QBaseDisconnectNotify(QMdiArea* self, QMetaMethod* signal) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_DisconnectNotify_IsBase(true);
        vqmdiarea->disconnectNotify(*signal);
    } else {
        vqmdiarea->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnDisconnectNotify(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_DisconnectNotify_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_SetViewportMargins(QMdiArea* self, int left, int top, int right, int bottom) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        vqmdiarea->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Base class handler implementation
void QMdiArea_QBaseSetViewportMargins(QMdiArea* self, int left, int top, int right, int bottom) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_SetViewportMargins_IsBase(true);
        vqmdiarea->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        vqmdiarea->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnSetViewportMargins(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_SetViewportMargins_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_SetViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
QMargins* QMdiArea_ViewportMargins(const QMdiArea* self) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        return new QMargins(vqmdiarea->viewportMargins());
    }
    return {};
}

// Base class handler implementation
QMargins* QMdiArea_QBaseViewportMargins(const QMdiArea* self) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        vqmdiarea->setQMdiArea_ViewportMargins_IsBase(true);
        return new QMargins(vqmdiarea->viewportMargins());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnViewportMargins(const QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        vqmdiarea->setQMdiArea_ViewportMargins_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_ViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_DrawFrame(QMdiArea* self, QPainter* param1) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->drawFrame(param1);
    } else {
        vqmdiarea->drawFrame(param1);
    }
}

// Base class handler implementation
void QMdiArea_QBaseDrawFrame(QMdiArea* self, QPainter* param1) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_DrawFrame_IsBase(true);
        vqmdiarea->drawFrame(param1);
    } else {
        vqmdiarea->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnDrawFrame(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_DrawFrame_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_UpdateMicroFocus(QMdiArea* self) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->updateMicroFocus();
    } else {
        vqmdiarea->updateMicroFocus();
    }
}

// Base class handler implementation
void QMdiArea_QBaseUpdateMicroFocus(QMdiArea* self) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_UpdateMicroFocus_IsBase(true);
        vqmdiarea->updateMicroFocus();
    } else {
        vqmdiarea->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnUpdateMicroFocus(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_Create(QMdiArea* self) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->create();
    } else {
        vqmdiarea->create();
    }
}

// Base class handler implementation
void QMdiArea_QBaseCreate(QMdiArea* self) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_Create_IsBase(true);
        vqmdiarea->create();
    } else {
        vqmdiarea->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnCreate(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_Create_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QMdiArea_Destroy(QMdiArea* self) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->destroy();
    } else {
        vqmdiarea->destroy();
    }
}

// Base class handler implementation
void QMdiArea_QBaseDestroy(QMdiArea* self) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_Destroy_IsBase(true);
        vqmdiarea->destroy();
    } else {
        vqmdiarea->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnDestroy(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_Destroy_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMdiArea_FocusNextChild(QMdiArea* self) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        return vqmdiarea->focusNextChild();
    } else {
        return vqmdiarea->focusNextChild();
    }
}

// Base class handler implementation
bool QMdiArea_QBaseFocusNextChild(QMdiArea* self) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_FocusNextChild_IsBase(true);
        return vqmdiarea->focusNextChild();
    } else {
        return vqmdiarea->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnFocusNextChild(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_FocusNextChild_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMdiArea_FocusPreviousChild(QMdiArea* self) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        return vqmdiarea->focusPreviousChild();
    } else {
        return vqmdiarea->focusPreviousChild();
    }
}

// Base class handler implementation
bool QMdiArea_QBaseFocusPreviousChild(QMdiArea* self) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_FocusPreviousChild_IsBase(true);
        return vqmdiarea->focusPreviousChild();
    } else {
        return vqmdiarea->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnFocusPreviousChild(QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self)) {
        vqmdiarea->setQMdiArea_FocusPreviousChild_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QMdiArea_Sender(const QMdiArea* self) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        return vqmdiarea->sender();
    } else {
        return vqmdiarea->sender();
    }
}

// Base class handler implementation
QObject* QMdiArea_QBaseSender(const QMdiArea* self) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        vqmdiarea->setQMdiArea_Sender_IsBase(true);
        return vqmdiarea->sender();
    } else {
        return vqmdiarea->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnSender(const QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        vqmdiarea->setQMdiArea_Sender_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QMdiArea_SenderSignalIndex(const QMdiArea* self) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        return vqmdiarea->senderSignalIndex();
    } else {
        return vqmdiarea->senderSignalIndex();
    }
}

// Base class handler implementation
int QMdiArea_QBaseSenderSignalIndex(const QMdiArea* self) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        vqmdiarea->setQMdiArea_SenderSignalIndex_IsBase(true);
        return vqmdiarea->senderSignalIndex();
    } else {
        return vqmdiarea->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnSenderSignalIndex(const QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        vqmdiarea->setQMdiArea_SenderSignalIndex_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QMdiArea_Receivers(const QMdiArea* self, const char* signal) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        return vqmdiarea->receivers(signal);
    } else {
        return vqmdiarea->receivers(signal);
    }
}

// Base class handler implementation
int QMdiArea_QBaseReceivers(const QMdiArea* self, const char* signal) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        vqmdiarea->setQMdiArea_Receivers_IsBase(true);
        return vqmdiarea->receivers(signal);
    } else {
        return vqmdiarea->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnReceivers(const QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        vqmdiarea->setQMdiArea_Receivers_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QMdiArea_IsSignalConnected(const QMdiArea* self, QMetaMethod* signal) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        return vqmdiarea->isSignalConnected(*signal);
    } else {
        return vqmdiarea->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QMdiArea_QBaseIsSignalConnected(const QMdiArea* self, QMetaMethod* signal) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        vqmdiarea->setQMdiArea_IsSignalConnected_IsBase(true);
        return vqmdiarea->isSignalConnected(*signal);
    } else {
        return vqmdiarea->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnIsSignalConnected(const QMdiArea* self, intptr_t slot) {
    if (auto* vqmdiarea = const_cast<VirtualQMdiArea*>(dynamic_cast<const VirtualQMdiArea*>(self))) {
        vqmdiarea->setQMdiArea_IsSignalConnected_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_IsSignalConnected_Callback>(slot));
    }
}

void QMdiArea_Delete(QMdiArea* self) {
    delete self;
}
