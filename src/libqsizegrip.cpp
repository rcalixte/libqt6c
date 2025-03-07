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
#include <QSizeGrip>
#include <QSizePolicy>
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
#include <qsizegrip.h>
#include "libqsizegrip.hpp"
#include "libqsizegrip.hxx"

QSizeGrip* QSizeGrip_new(QWidget* parent) {
    return new VirtualQSizeGrip(parent);
}

QMetaObject* QSizeGrip_MetaObject(const QSizeGrip* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSizeGrip_Metacast(QSizeGrip* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSizeGrip_Metacall(QSizeGrip* self, int param1, int param2, void** param3) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QSizeGrip_OnMetacall(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_Metacall_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QSizeGrip_QBaseMetacall(QSizeGrip* self, int param1, int param2, void** param3) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_Metacall_IsBase(true);
        return vqsizegrip->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QSizeGrip_Tr(const char* s) {
    QString _ret = QSizeGrip::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QSizeGrip_Tr2(const char* s, const char* c) {
    QString _ret = QSizeGrip::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QSizeGrip_Tr3(const char* s, const char* c, int n) {
    QString _ret = QSizeGrip::tr(s, c, static_cast<int>(n));
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
QSize* QSizeGrip_SizeHint(const QSizeGrip* self) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self))) {
        return new QSize(vqsizegrip->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QSizeGrip_QBaseSizeHint(const QSizeGrip* self) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self))) {
        vqsizegrip->setQSizeGrip_SizeHint_IsBase(true);
        return new QSize(vqsizegrip->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnSizeHint(const QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self))) {
        vqsizegrip->setQSizeGrip_SizeHint_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_SetVisible(QSizeGrip* self, bool visible) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setVisible(visible);
    } else {
        vqsizegrip->setVisible(visible);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseSetVisible(QSizeGrip* self, bool visible) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_SetVisible_IsBase(true);
        vqsizegrip->setVisible(visible);
    } else {
        vqsizegrip->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnSetVisible(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_SetVisible_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_PaintEvent(QSizeGrip* self, QPaintEvent* param1) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->paintEvent(param1);
    } else {
        vqsizegrip->paintEvent(param1);
    }
}

// Base class handler implementation
void QSizeGrip_QBasePaintEvent(QSizeGrip* self, QPaintEvent* param1) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_PaintEvent_IsBase(true);
        vqsizegrip->paintEvent(param1);
    } else {
        vqsizegrip->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnPaintEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_PaintEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_MousePressEvent(QSizeGrip* self, QMouseEvent* param1) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->mousePressEvent(param1);
    } else {
        vqsizegrip->mousePressEvent(param1);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseMousePressEvent(QSizeGrip* self, QMouseEvent* param1) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_MousePressEvent_IsBase(true);
        vqsizegrip->mousePressEvent(param1);
    } else {
        vqsizegrip->mousePressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnMousePressEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_MousePressEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_MouseMoveEvent(QSizeGrip* self, QMouseEvent* param1) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->mouseMoveEvent(param1);
    } else {
        vqsizegrip->mouseMoveEvent(param1);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseMouseMoveEvent(QSizeGrip* self, QMouseEvent* param1) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_MouseMoveEvent_IsBase(true);
        vqsizegrip->mouseMoveEvent(param1);
    } else {
        vqsizegrip->mouseMoveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnMouseMoveEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_MouseMoveEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_MouseReleaseEvent(QSizeGrip* self, QMouseEvent* mouseEvent) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->mouseReleaseEvent(mouseEvent);
    } else {
        vqsizegrip->mouseReleaseEvent(mouseEvent);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseMouseReleaseEvent(QSizeGrip* self, QMouseEvent* mouseEvent) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_MouseReleaseEvent_IsBase(true);
        vqsizegrip->mouseReleaseEvent(mouseEvent);
    } else {
        vqsizegrip->mouseReleaseEvent(mouseEvent);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnMouseReleaseEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_MoveEvent(QSizeGrip* self, QMoveEvent* moveEvent) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->moveEvent(moveEvent);
    } else {
        vqsizegrip->moveEvent(moveEvent);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseMoveEvent(QSizeGrip* self, QMoveEvent* moveEvent) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_MoveEvent_IsBase(true);
        vqsizegrip->moveEvent(moveEvent);
    } else {
        vqsizegrip->moveEvent(moveEvent);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnMoveEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_MoveEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_ShowEvent(QSizeGrip* self, QShowEvent* showEvent) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->showEvent(showEvent);
    } else {
        vqsizegrip->showEvent(showEvent);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseShowEvent(QSizeGrip* self, QShowEvent* showEvent) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_ShowEvent_IsBase(true);
        vqsizegrip->showEvent(showEvent);
    } else {
        vqsizegrip->showEvent(showEvent);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnShowEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_ShowEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_HideEvent(QSizeGrip* self, QHideEvent* hideEvent) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->hideEvent(hideEvent);
    } else {
        vqsizegrip->hideEvent(hideEvent);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseHideEvent(QSizeGrip* self, QHideEvent* hideEvent) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_HideEvent_IsBase(true);
        vqsizegrip->hideEvent(hideEvent);
    } else {
        vqsizegrip->hideEvent(hideEvent);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnHideEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_HideEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSizeGrip_EventFilter(QSizeGrip* self, QObject* param1, QEvent* param2) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        return vqsizegrip->eventFilter(param1, param2);
    } else {
        return vqsizegrip->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool QSizeGrip_QBaseEventFilter(QSizeGrip* self, QObject* param1, QEvent* param2) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_EventFilter_IsBase(true);
        return vqsizegrip->eventFilter(param1, param2);
    } else {
        return vqsizegrip->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnEventFilter(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_EventFilter_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSizeGrip_Event(QSizeGrip* self, QEvent* param1) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        return vqsizegrip->event(param1);
    } else {
        return vqsizegrip->event(param1);
    }
}

// Base class handler implementation
bool QSizeGrip_QBaseEvent(QSizeGrip* self, QEvent* param1) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_Event_IsBase(true);
        return vqsizegrip->event(param1);
    } else {
        return vqsizegrip->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_Event_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_Event_Callback>(slot));
    }
}

// Derived class handler implementation
int QSizeGrip_DevType(const QSizeGrip* self) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self))) {
        return vqsizegrip->devType();
    } else {
        return vqsizegrip->devType();
    }
}

// Base class handler implementation
int QSizeGrip_QBaseDevType(const QSizeGrip* self) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self))) {
        vqsizegrip->setQSizeGrip_DevType_IsBase(true);
        return vqsizegrip->devType();
    } else {
        return vqsizegrip->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnDevType(const QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self))) {
        vqsizegrip->setQSizeGrip_DevType_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QSizeGrip_MinimumSizeHint(const QSizeGrip* self) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self))) {
        return new QSize(vqsizegrip->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QSizeGrip_QBaseMinimumSizeHint(const QSizeGrip* self) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self))) {
        vqsizegrip->setQSizeGrip_MinimumSizeHint_IsBase(true);
        return new QSize(vqsizegrip->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnMinimumSizeHint(const QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self))) {
        vqsizegrip->setQSizeGrip_MinimumSizeHint_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QSizeGrip_HeightForWidth(const QSizeGrip* self, int param1) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self))) {
        return vqsizegrip->heightForWidth(static_cast<int>(param1));
    } else {
        return vqsizegrip->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QSizeGrip_QBaseHeightForWidth(const QSizeGrip* self, int param1) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self))) {
        vqsizegrip->setQSizeGrip_HeightForWidth_IsBase(true);
        return vqsizegrip->heightForWidth(static_cast<int>(param1));
    } else {
        return vqsizegrip->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnHeightForWidth(const QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self))) {
        vqsizegrip->setQSizeGrip_HeightForWidth_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSizeGrip_HasHeightForWidth(const QSizeGrip* self) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self))) {
        return vqsizegrip->hasHeightForWidth();
    } else {
        return vqsizegrip->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QSizeGrip_QBaseHasHeightForWidth(const QSizeGrip* self) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self))) {
        vqsizegrip->setQSizeGrip_HasHeightForWidth_IsBase(true);
        return vqsizegrip->hasHeightForWidth();
    } else {
        return vqsizegrip->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnHasHeightForWidth(const QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self))) {
        vqsizegrip->setQSizeGrip_HasHeightForWidth_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QSizeGrip_PaintEngine(const QSizeGrip* self) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self))) {
        return vqsizegrip->paintEngine();
    } else {
        return vqsizegrip->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QSizeGrip_QBasePaintEngine(const QSizeGrip* self) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self))) {
        vqsizegrip->setQSizeGrip_PaintEngine_IsBase(true);
        return vqsizegrip->paintEngine();
    } else {
        return vqsizegrip->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnPaintEngine(const QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self))) {
        vqsizegrip->setQSizeGrip_PaintEngine_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_MouseDoubleClickEvent(QSizeGrip* self, QMouseEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->mouseDoubleClickEvent(event);
    } else {
        vqsizegrip->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseMouseDoubleClickEvent(QSizeGrip* self, QMouseEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_MouseDoubleClickEvent_IsBase(true);
        vqsizegrip->mouseDoubleClickEvent(event);
    } else {
        vqsizegrip->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnMouseDoubleClickEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_WheelEvent(QSizeGrip* self, QWheelEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->wheelEvent(event);
    } else {
        vqsizegrip->wheelEvent(event);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseWheelEvent(QSizeGrip* self, QWheelEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_WheelEvent_IsBase(true);
        vqsizegrip->wheelEvent(event);
    } else {
        vqsizegrip->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnWheelEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_WheelEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_KeyPressEvent(QSizeGrip* self, QKeyEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->keyPressEvent(event);
    } else {
        vqsizegrip->keyPressEvent(event);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseKeyPressEvent(QSizeGrip* self, QKeyEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_KeyPressEvent_IsBase(true);
        vqsizegrip->keyPressEvent(event);
    } else {
        vqsizegrip->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnKeyPressEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_KeyPressEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_KeyReleaseEvent(QSizeGrip* self, QKeyEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->keyReleaseEvent(event);
    } else {
        vqsizegrip->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseKeyReleaseEvent(QSizeGrip* self, QKeyEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_KeyReleaseEvent_IsBase(true);
        vqsizegrip->keyReleaseEvent(event);
    } else {
        vqsizegrip->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnKeyReleaseEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_FocusInEvent(QSizeGrip* self, QFocusEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->focusInEvent(event);
    } else {
        vqsizegrip->focusInEvent(event);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseFocusInEvent(QSizeGrip* self, QFocusEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_FocusInEvent_IsBase(true);
        vqsizegrip->focusInEvent(event);
    } else {
        vqsizegrip->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnFocusInEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_FocusInEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_FocusOutEvent(QSizeGrip* self, QFocusEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->focusOutEvent(event);
    } else {
        vqsizegrip->focusOutEvent(event);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseFocusOutEvent(QSizeGrip* self, QFocusEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_FocusOutEvent_IsBase(true);
        vqsizegrip->focusOutEvent(event);
    } else {
        vqsizegrip->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnFocusOutEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_FocusOutEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_EnterEvent(QSizeGrip* self, QEnterEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->enterEvent(event);
    } else {
        vqsizegrip->enterEvent(event);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseEnterEvent(QSizeGrip* self, QEnterEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_EnterEvent_IsBase(true);
        vqsizegrip->enterEvent(event);
    } else {
        vqsizegrip->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnEnterEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_EnterEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_LeaveEvent(QSizeGrip* self, QEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->leaveEvent(event);
    } else {
        vqsizegrip->leaveEvent(event);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseLeaveEvent(QSizeGrip* self, QEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_LeaveEvent_IsBase(true);
        vqsizegrip->leaveEvent(event);
    } else {
        vqsizegrip->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnLeaveEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_LeaveEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_ResizeEvent(QSizeGrip* self, QResizeEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->resizeEvent(event);
    } else {
        vqsizegrip->resizeEvent(event);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseResizeEvent(QSizeGrip* self, QResizeEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_ResizeEvent_IsBase(true);
        vqsizegrip->resizeEvent(event);
    } else {
        vqsizegrip->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnResizeEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_ResizeEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_CloseEvent(QSizeGrip* self, QCloseEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->closeEvent(event);
    } else {
        vqsizegrip->closeEvent(event);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseCloseEvent(QSizeGrip* self, QCloseEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_CloseEvent_IsBase(true);
        vqsizegrip->closeEvent(event);
    } else {
        vqsizegrip->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnCloseEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_CloseEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_ContextMenuEvent(QSizeGrip* self, QContextMenuEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->contextMenuEvent(event);
    } else {
        vqsizegrip->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseContextMenuEvent(QSizeGrip* self, QContextMenuEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_ContextMenuEvent_IsBase(true);
        vqsizegrip->contextMenuEvent(event);
    } else {
        vqsizegrip->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnContextMenuEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_ContextMenuEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_TabletEvent(QSizeGrip* self, QTabletEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->tabletEvent(event);
    } else {
        vqsizegrip->tabletEvent(event);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseTabletEvent(QSizeGrip* self, QTabletEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_TabletEvent_IsBase(true);
        vqsizegrip->tabletEvent(event);
    } else {
        vqsizegrip->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnTabletEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_TabletEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_ActionEvent(QSizeGrip* self, QActionEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->actionEvent(event);
    } else {
        vqsizegrip->actionEvent(event);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseActionEvent(QSizeGrip* self, QActionEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_ActionEvent_IsBase(true);
        vqsizegrip->actionEvent(event);
    } else {
        vqsizegrip->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnActionEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_ActionEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_DragEnterEvent(QSizeGrip* self, QDragEnterEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->dragEnterEvent(event);
    } else {
        vqsizegrip->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseDragEnterEvent(QSizeGrip* self, QDragEnterEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_DragEnterEvent_IsBase(true);
        vqsizegrip->dragEnterEvent(event);
    } else {
        vqsizegrip->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnDragEnterEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_DragEnterEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_DragMoveEvent(QSizeGrip* self, QDragMoveEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->dragMoveEvent(event);
    } else {
        vqsizegrip->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseDragMoveEvent(QSizeGrip* self, QDragMoveEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_DragMoveEvent_IsBase(true);
        vqsizegrip->dragMoveEvent(event);
    } else {
        vqsizegrip->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnDragMoveEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_DragMoveEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_DragLeaveEvent(QSizeGrip* self, QDragLeaveEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->dragLeaveEvent(event);
    } else {
        vqsizegrip->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseDragLeaveEvent(QSizeGrip* self, QDragLeaveEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_DragLeaveEvent_IsBase(true);
        vqsizegrip->dragLeaveEvent(event);
    } else {
        vqsizegrip->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnDragLeaveEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_DragLeaveEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_DropEvent(QSizeGrip* self, QDropEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->dropEvent(event);
    } else {
        vqsizegrip->dropEvent(event);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseDropEvent(QSizeGrip* self, QDropEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_DropEvent_IsBase(true);
        vqsizegrip->dropEvent(event);
    } else {
        vqsizegrip->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnDropEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_DropEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSizeGrip_NativeEvent(QSizeGrip* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        return vqsizegrip->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqsizegrip->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QSizeGrip_QBaseNativeEvent(QSizeGrip* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_NativeEvent_IsBase(true);
        return vqsizegrip->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqsizegrip->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnNativeEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_NativeEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_ChangeEvent(QSizeGrip* self, QEvent* param1) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->changeEvent(param1);
    } else {
        vqsizegrip->changeEvent(param1);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseChangeEvent(QSizeGrip* self, QEvent* param1) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_ChangeEvent_IsBase(true);
        vqsizegrip->changeEvent(param1);
    } else {
        vqsizegrip->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnChangeEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_ChangeEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QSizeGrip_Metric(const QSizeGrip* self, int param1) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self))) {
        return vqsizegrip->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqsizegrip->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QSizeGrip_QBaseMetric(const QSizeGrip* self, int param1) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self))) {
        vqsizegrip->setQSizeGrip_Metric_IsBase(true);
        return vqsizegrip->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqsizegrip->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnMetric(const QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self))) {
        vqsizegrip->setQSizeGrip_Metric_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_InitPainter(const QSizeGrip* self, QPainter* painter) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self))) {
        vqsizegrip->initPainter(painter);
    } else {
        vqsizegrip->initPainter(painter);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseInitPainter(const QSizeGrip* self, QPainter* painter) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self))) {
        vqsizegrip->setQSizeGrip_InitPainter_IsBase(true);
        vqsizegrip->initPainter(painter);
    } else {
        vqsizegrip->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnInitPainter(const QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self))) {
        vqsizegrip->setQSizeGrip_InitPainter_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QSizeGrip_Redirected(const QSizeGrip* self, QPoint* offset) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self))) {
        return vqsizegrip->redirected(offset);
    } else {
        return vqsizegrip->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QSizeGrip_QBaseRedirected(const QSizeGrip* self, QPoint* offset) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self))) {
        vqsizegrip->setQSizeGrip_Redirected_IsBase(true);
        return vqsizegrip->redirected(offset);
    } else {
        return vqsizegrip->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnRedirected(const QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self))) {
        vqsizegrip->setQSizeGrip_Redirected_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QSizeGrip_SharedPainter(const QSizeGrip* self) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self))) {
        return vqsizegrip->sharedPainter();
    } else {
        return vqsizegrip->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QSizeGrip_QBaseSharedPainter(const QSizeGrip* self) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self))) {
        vqsizegrip->setQSizeGrip_SharedPainter_IsBase(true);
        return vqsizegrip->sharedPainter();
    } else {
        return vqsizegrip->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnSharedPainter(const QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self))) {
        vqsizegrip->setQSizeGrip_SharedPainter_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_InputMethodEvent(QSizeGrip* self, QInputMethodEvent* param1) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->inputMethodEvent(param1);
    } else {
        vqsizegrip->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseInputMethodEvent(QSizeGrip* self, QInputMethodEvent* param1) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_InputMethodEvent_IsBase(true);
        vqsizegrip->inputMethodEvent(param1);
    } else {
        vqsizegrip->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnInputMethodEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_InputMethodEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QSizeGrip_InputMethodQuery(const QSizeGrip* self, int param1) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self))) {
        return new QVariant(vqsizegrip->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QSizeGrip_QBaseInputMethodQuery(const QSizeGrip* self, int param1) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self))) {
        vqsizegrip->setQSizeGrip_InputMethodQuery_IsBase(true);
        return new QVariant(vqsizegrip->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnInputMethodQuery(const QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self))) {
        vqsizegrip->setQSizeGrip_InputMethodQuery_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSizeGrip_FocusNextPrevChild(QSizeGrip* self, bool next) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        return vqsizegrip->focusNextPrevChild(next);
    } else {
        return vqsizegrip->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QSizeGrip_QBaseFocusNextPrevChild(QSizeGrip* self, bool next) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_FocusNextPrevChild_IsBase(true);
        return vqsizegrip->focusNextPrevChild(next);
    } else {
        return vqsizegrip->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnFocusNextPrevChild(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_TimerEvent(QSizeGrip* self, QTimerEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->timerEvent(event);
    } else {
        vqsizegrip->timerEvent(event);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseTimerEvent(QSizeGrip* self, QTimerEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_TimerEvent_IsBase(true);
        vqsizegrip->timerEvent(event);
    } else {
        vqsizegrip->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnTimerEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_TimerEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_ChildEvent(QSizeGrip* self, QChildEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->childEvent(event);
    } else {
        vqsizegrip->childEvent(event);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseChildEvent(QSizeGrip* self, QChildEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_ChildEvent_IsBase(true);
        vqsizegrip->childEvent(event);
    } else {
        vqsizegrip->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnChildEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_ChildEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_CustomEvent(QSizeGrip* self, QEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->customEvent(event);
    } else {
        vqsizegrip->customEvent(event);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseCustomEvent(QSizeGrip* self, QEvent* event) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_CustomEvent_IsBase(true);
        vqsizegrip->customEvent(event);
    } else {
        vqsizegrip->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnCustomEvent(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_CustomEvent_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_ConnectNotify(QSizeGrip* self, QMetaMethod* signal) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->connectNotify(*signal);
    } else {
        vqsizegrip->connectNotify(*signal);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseConnectNotify(QSizeGrip* self, QMetaMethod* signal) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_ConnectNotify_IsBase(true);
        vqsizegrip->connectNotify(*signal);
    } else {
        vqsizegrip->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnConnectNotify(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_ConnectNotify_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_DisconnectNotify(QSizeGrip* self, QMetaMethod* signal) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->disconnectNotify(*signal);
    } else {
        vqsizegrip->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QSizeGrip_QBaseDisconnectNotify(QSizeGrip* self, QMetaMethod* signal) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_DisconnectNotify_IsBase(true);
        vqsizegrip->disconnectNotify(*signal);
    } else {
        vqsizegrip->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnDisconnectNotify(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_DisconnectNotify_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_UpdateMicroFocus(QSizeGrip* self) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->updateMicroFocus();
    } else {
        vqsizegrip->updateMicroFocus();
    }
}

// Base class handler implementation
void QSizeGrip_QBaseUpdateMicroFocus(QSizeGrip* self) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_UpdateMicroFocus_IsBase(true);
        vqsizegrip->updateMicroFocus();
    } else {
        vqsizegrip->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnUpdateMicroFocus(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_Create(QSizeGrip* self) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->create();
    } else {
        vqsizegrip->create();
    }
}

// Base class handler implementation
void QSizeGrip_QBaseCreate(QSizeGrip* self) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_Create_IsBase(true);
        vqsizegrip->create();
    } else {
        vqsizegrip->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnCreate(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_Create_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QSizeGrip_Destroy(QSizeGrip* self) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->destroy();
    } else {
        vqsizegrip->destroy();
    }
}

// Base class handler implementation
void QSizeGrip_QBaseDestroy(QSizeGrip* self) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_Destroy_IsBase(true);
        vqsizegrip->destroy();
    } else {
        vqsizegrip->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnDestroy(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_Destroy_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSizeGrip_FocusNextChild(QSizeGrip* self) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        return vqsizegrip->focusNextChild();
    } else {
        return vqsizegrip->focusNextChild();
    }
}

// Base class handler implementation
bool QSizeGrip_QBaseFocusNextChild(QSizeGrip* self) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_FocusNextChild_IsBase(true);
        return vqsizegrip->focusNextChild();
    } else {
        return vqsizegrip->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnFocusNextChild(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_FocusNextChild_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSizeGrip_FocusPreviousChild(QSizeGrip* self) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        return vqsizegrip->focusPreviousChild();
    } else {
        return vqsizegrip->focusPreviousChild();
    }
}

// Base class handler implementation
bool QSizeGrip_QBaseFocusPreviousChild(QSizeGrip* self) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_FocusPreviousChild_IsBase(true);
        return vqsizegrip->focusPreviousChild();
    } else {
        return vqsizegrip->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnFocusPreviousChild(QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self)) {
        vqsizegrip->setQSizeGrip_FocusPreviousChild_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QSizeGrip_Sender(const QSizeGrip* self) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self))) {
        return vqsizegrip->sender();
    } else {
        return vqsizegrip->sender();
    }
}

// Base class handler implementation
QObject* QSizeGrip_QBaseSender(const QSizeGrip* self) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self))) {
        vqsizegrip->setQSizeGrip_Sender_IsBase(true);
        return vqsizegrip->sender();
    } else {
        return vqsizegrip->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnSender(const QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self))) {
        vqsizegrip->setQSizeGrip_Sender_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QSizeGrip_SenderSignalIndex(const QSizeGrip* self) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self))) {
        return vqsizegrip->senderSignalIndex();
    } else {
        return vqsizegrip->senderSignalIndex();
    }
}

// Base class handler implementation
int QSizeGrip_QBaseSenderSignalIndex(const QSizeGrip* self) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self))) {
        vqsizegrip->setQSizeGrip_SenderSignalIndex_IsBase(true);
        return vqsizegrip->senderSignalIndex();
    } else {
        return vqsizegrip->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnSenderSignalIndex(const QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self))) {
        vqsizegrip->setQSizeGrip_SenderSignalIndex_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QSizeGrip_Receivers(const QSizeGrip* self, const char* signal) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self))) {
        return vqsizegrip->receivers(signal);
    } else {
        return vqsizegrip->receivers(signal);
    }
}

// Base class handler implementation
int QSizeGrip_QBaseReceivers(const QSizeGrip* self, const char* signal) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self))) {
        vqsizegrip->setQSizeGrip_Receivers_IsBase(true);
        return vqsizegrip->receivers(signal);
    } else {
        return vqsizegrip->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnReceivers(const QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self))) {
        vqsizegrip->setQSizeGrip_Receivers_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSizeGrip_IsSignalConnected(const QSizeGrip* self, QMetaMethod* signal) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self))) {
        return vqsizegrip->isSignalConnected(*signal);
    } else {
        return vqsizegrip->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QSizeGrip_QBaseIsSignalConnected(const QSizeGrip* self, QMetaMethod* signal) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self))) {
        vqsizegrip->setQSizeGrip_IsSignalConnected_IsBase(true);
        return vqsizegrip->isSignalConnected(*signal);
    } else {
        return vqsizegrip->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnIsSignalConnected(const QSizeGrip* self, intptr_t slot) {
    if (auto* vqsizegrip = const_cast<VirtualQSizeGrip*>(dynamic_cast<const VirtualQSizeGrip*>(self))) {
        vqsizegrip->setQSizeGrip_IsSignalConnected_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_IsSignalConnected_Callback>(slot));
    }
}

void QSizeGrip_Delete(QSizeGrip* self) {
    delete self;
}
