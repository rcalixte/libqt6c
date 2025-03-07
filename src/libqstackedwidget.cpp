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
#include <QShowEvent>
#include <QSize>
#include <QSizePolicy>
#include <QStackedWidget>
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
#include <qstackedwidget.h>
#include "libqstackedwidget.hpp"
#include "libqstackedwidget.hxx"

QStackedWidget* QStackedWidget_new(QWidget* parent) {
    return new VirtualQStackedWidget(parent);
}

QStackedWidget* QStackedWidget_new2() {
    return new VirtualQStackedWidget();
}

QMetaObject* QStackedWidget_MetaObject(const QStackedWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* QStackedWidget_Metacast(QStackedWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QStackedWidget_Metacall(QStackedWidget* self, int param1, int param2, void** param3) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QStackedWidget_OnMetacall(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_Metacall_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QStackedWidget_QBaseMetacall(QStackedWidget* self, int param1, int param2, void** param3) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_Metacall_IsBase(true);
        return vqstackedwidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QStackedWidget_Tr(const char* s) {
    QString _ret = QStackedWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QStackedWidget_AddWidget(QStackedWidget* self, QWidget* w) {
    return self->addWidget(w);
}

int QStackedWidget_InsertWidget(QStackedWidget* self, int index, QWidget* w) {
    return self->insertWidget(static_cast<int>(index), w);
}

void QStackedWidget_RemoveWidget(QStackedWidget* self, QWidget* w) {
    self->removeWidget(w);
}

QWidget* QStackedWidget_CurrentWidget(const QStackedWidget* self) {
    return self->currentWidget();
}

int QStackedWidget_CurrentIndex(const QStackedWidget* self) {
    return self->currentIndex();
}

int QStackedWidget_IndexOf(const QStackedWidget* self, QWidget* param1) {
    return self->indexOf(param1);
}

QWidget* QStackedWidget_Widget(const QStackedWidget* self, int param1) {
    return self->widget(static_cast<int>(param1));
}

int QStackedWidget_Count(const QStackedWidget* self) {
    return self->count();
}

void QStackedWidget_SetCurrentIndex(QStackedWidget* self, int index) {
    self->setCurrentIndex(static_cast<int>(index));
}

void QStackedWidget_SetCurrentWidget(QStackedWidget* self, QWidget* w) {
    self->setCurrentWidget(w);
}

void QStackedWidget_CurrentChanged(QStackedWidget* self, int param1) {
    self->currentChanged(static_cast<int>(param1));
}

void QStackedWidget_Connect_CurrentChanged(QStackedWidget* self, intptr_t slot) {
    void (*slotFunc)(QStackedWidget*, int) = reinterpret_cast<void (*)(QStackedWidget*, int)>(slot);
    QStackedWidget::connect(self, &QStackedWidget::currentChanged, [self, slotFunc](int param1) {
        int sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void QStackedWidget_WidgetRemoved(QStackedWidget* self, int index) {
    self->widgetRemoved(static_cast<int>(index));
}

void QStackedWidget_Connect_WidgetRemoved(QStackedWidget* self, intptr_t slot) {
    void (*slotFunc)(QStackedWidget*, int) = reinterpret_cast<void (*)(QStackedWidget*, int)>(slot);
    QStackedWidget::connect(self, &QStackedWidget::widgetRemoved, [self, slotFunc](int index) {
        int sigval1 = index;
        slotFunc(self, sigval1);
    });
}

libqt_string QStackedWidget_Tr2(const char* s, const char* c) {
    QString _ret = QStackedWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QStackedWidget_Tr3(const char* s, const char* c, int n) {
    QString _ret = QStackedWidget::tr(s, c, static_cast<int>(n));
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
bool QStackedWidget_Event(QStackedWidget* self, QEvent* e) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        return vqstackedwidget->event(e);
    } else {
        return vqstackedwidget->event(e);
    }
}

// Base class handler implementation
bool QStackedWidget_QBaseEvent(QStackedWidget* self, QEvent* e) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_Event_IsBase(true);
        return vqstackedwidget->event(e);
    } else {
        return vqstackedwidget->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_Event_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_Event_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QStackedWidget_SizeHint(const QStackedWidget* self) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        return new QSize(vqstackedwidget->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QStackedWidget_QBaseSizeHint(const QStackedWidget* self) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        vqstackedwidget->setQStackedWidget_SizeHint_IsBase(true);
        return new QSize(vqstackedwidget->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnSizeHint(const QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        vqstackedwidget->setQStackedWidget_SizeHint_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_PaintEvent(QStackedWidget* self, QPaintEvent* param1) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->paintEvent(param1);
    } else {
        vqstackedwidget->paintEvent(param1);
    }
}

// Base class handler implementation
void QStackedWidget_QBasePaintEvent(QStackedWidget* self, QPaintEvent* param1) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_PaintEvent_IsBase(true);
        vqstackedwidget->paintEvent(param1);
    } else {
        vqstackedwidget->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnPaintEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_PaintEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_ChangeEvent(QStackedWidget* self, QEvent* param1) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->changeEvent(param1);
    } else {
        vqstackedwidget->changeEvent(param1);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseChangeEvent(QStackedWidget* self, QEvent* param1) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_ChangeEvent_IsBase(true);
        vqstackedwidget->changeEvent(param1);
    } else {
        vqstackedwidget->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnChangeEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_ChangeEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_InitStyleOption(const QStackedWidget* self, QStyleOptionFrame* option) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        vqstackedwidget->initStyleOption(option);
    } else {
        vqstackedwidget->initStyleOption(option);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseInitStyleOption(const QStackedWidget* self, QStyleOptionFrame* option) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        vqstackedwidget->setQStackedWidget_InitStyleOption_IsBase(true);
        vqstackedwidget->initStyleOption(option);
    } else {
        vqstackedwidget->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnInitStyleOption(const QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        vqstackedwidget->setQStackedWidget_InitStyleOption_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QStackedWidget_DevType(const QStackedWidget* self) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        return vqstackedwidget->devType();
    } else {
        return vqstackedwidget->devType();
    }
}

// Base class handler implementation
int QStackedWidget_QBaseDevType(const QStackedWidget* self) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        vqstackedwidget->setQStackedWidget_DevType_IsBase(true);
        return vqstackedwidget->devType();
    } else {
        return vqstackedwidget->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnDevType(const QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        vqstackedwidget->setQStackedWidget_DevType_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_SetVisible(QStackedWidget* self, bool visible) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setVisible(visible);
    } else {
        vqstackedwidget->setVisible(visible);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseSetVisible(QStackedWidget* self, bool visible) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_SetVisible_IsBase(true);
        vqstackedwidget->setVisible(visible);
    } else {
        vqstackedwidget->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnSetVisible(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_SetVisible_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QStackedWidget_MinimumSizeHint(const QStackedWidget* self) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        return new QSize(vqstackedwidget->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QStackedWidget_QBaseMinimumSizeHint(const QStackedWidget* self) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        vqstackedwidget->setQStackedWidget_MinimumSizeHint_IsBase(true);
        return new QSize(vqstackedwidget->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnMinimumSizeHint(const QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        vqstackedwidget->setQStackedWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QStackedWidget_HeightForWidth(const QStackedWidget* self, int param1) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        return vqstackedwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return vqstackedwidget->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QStackedWidget_QBaseHeightForWidth(const QStackedWidget* self, int param1) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        vqstackedwidget->setQStackedWidget_HeightForWidth_IsBase(true);
        return vqstackedwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return vqstackedwidget->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnHeightForWidth(const QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        vqstackedwidget->setQStackedWidget_HeightForWidth_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStackedWidget_HasHeightForWidth(const QStackedWidget* self) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        return vqstackedwidget->hasHeightForWidth();
    } else {
        return vqstackedwidget->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QStackedWidget_QBaseHasHeightForWidth(const QStackedWidget* self) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        vqstackedwidget->setQStackedWidget_HasHeightForWidth_IsBase(true);
        return vqstackedwidget->hasHeightForWidth();
    } else {
        return vqstackedwidget->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnHasHeightForWidth(const QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        vqstackedwidget->setQStackedWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QStackedWidget_PaintEngine(const QStackedWidget* self) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        return vqstackedwidget->paintEngine();
    } else {
        return vqstackedwidget->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QStackedWidget_QBasePaintEngine(const QStackedWidget* self) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        vqstackedwidget->setQStackedWidget_PaintEngine_IsBase(true);
        return vqstackedwidget->paintEngine();
    } else {
        return vqstackedwidget->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnPaintEngine(const QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        vqstackedwidget->setQStackedWidget_PaintEngine_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_MousePressEvent(QStackedWidget* self, QMouseEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->mousePressEvent(event);
    } else {
        vqstackedwidget->mousePressEvent(event);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseMousePressEvent(QStackedWidget* self, QMouseEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_MousePressEvent_IsBase(true);
        vqstackedwidget->mousePressEvent(event);
    } else {
        vqstackedwidget->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnMousePressEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_MousePressEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_MouseReleaseEvent(QStackedWidget* self, QMouseEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->mouseReleaseEvent(event);
    } else {
        vqstackedwidget->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseMouseReleaseEvent(QStackedWidget* self, QMouseEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_MouseReleaseEvent_IsBase(true);
        vqstackedwidget->mouseReleaseEvent(event);
    } else {
        vqstackedwidget->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnMouseReleaseEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_MouseDoubleClickEvent(QStackedWidget* self, QMouseEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->mouseDoubleClickEvent(event);
    } else {
        vqstackedwidget->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseMouseDoubleClickEvent(QStackedWidget* self, QMouseEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_MouseDoubleClickEvent_IsBase(true);
        vqstackedwidget->mouseDoubleClickEvent(event);
    } else {
        vqstackedwidget->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnMouseDoubleClickEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_MouseMoveEvent(QStackedWidget* self, QMouseEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->mouseMoveEvent(event);
    } else {
        vqstackedwidget->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseMouseMoveEvent(QStackedWidget* self, QMouseEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_MouseMoveEvent_IsBase(true);
        vqstackedwidget->mouseMoveEvent(event);
    } else {
        vqstackedwidget->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnMouseMoveEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_WheelEvent(QStackedWidget* self, QWheelEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->wheelEvent(event);
    } else {
        vqstackedwidget->wheelEvent(event);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseWheelEvent(QStackedWidget* self, QWheelEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_WheelEvent_IsBase(true);
        vqstackedwidget->wheelEvent(event);
    } else {
        vqstackedwidget->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnWheelEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_WheelEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_KeyPressEvent(QStackedWidget* self, QKeyEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->keyPressEvent(event);
    } else {
        vqstackedwidget->keyPressEvent(event);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseKeyPressEvent(QStackedWidget* self, QKeyEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_KeyPressEvent_IsBase(true);
        vqstackedwidget->keyPressEvent(event);
    } else {
        vqstackedwidget->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnKeyPressEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_KeyReleaseEvent(QStackedWidget* self, QKeyEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->keyReleaseEvent(event);
    } else {
        vqstackedwidget->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseKeyReleaseEvent(QStackedWidget* self, QKeyEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_KeyReleaseEvent_IsBase(true);
        vqstackedwidget->keyReleaseEvent(event);
    } else {
        vqstackedwidget->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnKeyReleaseEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_FocusInEvent(QStackedWidget* self, QFocusEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->focusInEvent(event);
    } else {
        vqstackedwidget->focusInEvent(event);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseFocusInEvent(QStackedWidget* self, QFocusEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_FocusInEvent_IsBase(true);
        vqstackedwidget->focusInEvent(event);
    } else {
        vqstackedwidget->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnFocusInEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_FocusInEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_FocusOutEvent(QStackedWidget* self, QFocusEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->focusOutEvent(event);
    } else {
        vqstackedwidget->focusOutEvent(event);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseFocusOutEvent(QStackedWidget* self, QFocusEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_FocusOutEvent_IsBase(true);
        vqstackedwidget->focusOutEvent(event);
    } else {
        vqstackedwidget->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnFocusOutEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_EnterEvent(QStackedWidget* self, QEnterEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->enterEvent(event);
    } else {
        vqstackedwidget->enterEvent(event);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseEnterEvent(QStackedWidget* self, QEnterEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_EnterEvent_IsBase(true);
        vqstackedwidget->enterEvent(event);
    } else {
        vqstackedwidget->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnEnterEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_EnterEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_LeaveEvent(QStackedWidget* self, QEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->leaveEvent(event);
    } else {
        vqstackedwidget->leaveEvent(event);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseLeaveEvent(QStackedWidget* self, QEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_LeaveEvent_IsBase(true);
        vqstackedwidget->leaveEvent(event);
    } else {
        vqstackedwidget->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnLeaveEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_LeaveEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_MoveEvent(QStackedWidget* self, QMoveEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->moveEvent(event);
    } else {
        vqstackedwidget->moveEvent(event);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseMoveEvent(QStackedWidget* self, QMoveEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_MoveEvent_IsBase(true);
        vqstackedwidget->moveEvent(event);
    } else {
        vqstackedwidget->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnMoveEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_MoveEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_ResizeEvent(QStackedWidget* self, QResizeEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->resizeEvent(event);
    } else {
        vqstackedwidget->resizeEvent(event);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseResizeEvent(QStackedWidget* self, QResizeEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_ResizeEvent_IsBase(true);
        vqstackedwidget->resizeEvent(event);
    } else {
        vqstackedwidget->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnResizeEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_ResizeEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_CloseEvent(QStackedWidget* self, QCloseEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->closeEvent(event);
    } else {
        vqstackedwidget->closeEvent(event);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseCloseEvent(QStackedWidget* self, QCloseEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_CloseEvent_IsBase(true);
        vqstackedwidget->closeEvent(event);
    } else {
        vqstackedwidget->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnCloseEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_CloseEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_ContextMenuEvent(QStackedWidget* self, QContextMenuEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->contextMenuEvent(event);
    } else {
        vqstackedwidget->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseContextMenuEvent(QStackedWidget* self, QContextMenuEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_ContextMenuEvent_IsBase(true);
        vqstackedwidget->contextMenuEvent(event);
    } else {
        vqstackedwidget->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnContextMenuEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_TabletEvent(QStackedWidget* self, QTabletEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->tabletEvent(event);
    } else {
        vqstackedwidget->tabletEvent(event);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseTabletEvent(QStackedWidget* self, QTabletEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_TabletEvent_IsBase(true);
        vqstackedwidget->tabletEvent(event);
    } else {
        vqstackedwidget->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnTabletEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_TabletEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_ActionEvent(QStackedWidget* self, QActionEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->actionEvent(event);
    } else {
        vqstackedwidget->actionEvent(event);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseActionEvent(QStackedWidget* self, QActionEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_ActionEvent_IsBase(true);
        vqstackedwidget->actionEvent(event);
    } else {
        vqstackedwidget->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnActionEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_ActionEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_DragEnterEvent(QStackedWidget* self, QDragEnterEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->dragEnterEvent(event);
    } else {
        vqstackedwidget->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseDragEnterEvent(QStackedWidget* self, QDragEnterEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_DragEnterEvent_IsBase(true);
        vqstackedwidget->dragEnterEvent(event);
    } else {
        vqstackedwidget->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnDragEnterEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_DragMoveEvent(QStackedWidget* self, QDragMoveEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->dragMoveEvent(event);
    } else {
        vqstackedwidget->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseDragMoveEvent(QStackedWidget* self, QDragMoveEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_DragMoveEvent_IsBase(true);
        vqstackedwidget->dragMoveEvent(event);
    } else {
        vqstackedwidget->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnDragMoveEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_DragLeaveEvent(QStackedWidget* self, QDragLeaveEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->dragLeaveEvent(event);
    } else {
        vqstackedwidget->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseDragLeaveEvent(QStackedWidget* self, QDragLeaveEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_DragLeaveEvent_IsBase(true);
        vqstackedwidget->dragLeaveEvent(event);
    } else {
        vqstackedwidget->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnDragLeaveEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_DropEvent(QStackedWidget* self, QDropEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->dropEvent(event);
    } else {
        vqstackedwidget->dropEvent(event);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseDropEvent(QStackedWidget* self, QDropEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_DropEvent_IsBase(true);
        vqstackedwidget->dropEvent(event);
    } else {
        vqstackedwidget->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnDropEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_DropEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_ShowEvent(QStackedWidget* self, QShowEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->showEvent(event);
    } else {
        vqstackedwidget->showEvent(event);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseShowEvent(QStackedWidget* self, QShowEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_ShowEvent_IsBase(true);
        vqstackedwidget->showEvent(event);
    } else {
        vqstackedwidget->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnShowEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_ShowEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_HideEvent(QStackedWidget* self, QHideEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->hideEvent(event);
    } else {
        vqstackedwidget->hideEvent(event);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseHideEvent(QStackedWidget* self, QHideEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_HideEvent_IsBase(true);
        vqstackedwidget->hideEvent(event);
    } else {
        vqstackedwidget->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnHideEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_HideEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStackedWidget_NativeEvent(QStackedWidget* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        return vqstackedwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqstackedwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QStackedWidget_QBaseNativeEvent(QStackedWidget* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_NativeEvent_IsBase(true);
        return vqstackedwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqstackedwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnNativeEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_NativeEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QStackedWidget_Metric(const QStackedWidget* self, int param1) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        return vqstackedwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqstackedwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QStackedWidget_QBaseMetric(const QStackedWidget* self, int param1) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        vqstackedwidget->setQStackedWidget_Metric_IsBase(true);
        return vqstackedwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqstackedwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnMetric(const QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        vqstackedwidget->setQStackedWidget_Metric_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_InitPainter(const QStackedWidget* self, QPainter* painter) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        vqstackedwidget->initPainter(painter);
    } else {
        vqstackedwidget->initPainter(painter);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseInitPainter(const QStackedWidget* self, QPainter* painter) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        vqstackedwidget->setQStackedWidget_InitPainter_IsBase(true);
        vqstackedwidget->initPainter(painter);
    } else {
        vqstackedwidget->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnInitPainter(const QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        vqstackedwidget->setQStackedWidget_InitPainter_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QStackedWidget_Redirected(const QStackedWidget* self, QPoint* offset) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        return vqstackedwidget->redirected(offset);
    } else {
        return vqstackedwidget->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QStackedWidget_QBaseRedirected(const QStackedWidget* self, QPoint* offset) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        vqstackedwidget->setQStackedWidget_Redirected_IsBase(true);
        return vqstackedwidget->redirected(offset);
    } else {
        return vqstackedwidget->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnRedirected(const QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        vqstackedwidget->setQStackedWidget_Redirected_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QStackedWidget_SharedPainter(const QStackedWidget* self) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        return vqstackedwidget->sharedPainter();
    } else {
        return vqstackedwidget->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QStackedWidget_QBaseSharedPainter(const QStackedWidget* self) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        vqstackedwidget->setQStackedWidget_SharedPainter_IsBase(true);
        return vqstackedwidget->sharedPainter();
    } else {
        return vqstackedwidget->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnSharedPainter(const QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        vqstackedwidget->setQStackedWidget_SharedPainter_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_InputMethodEvent(QStackedWidget* self, QInputMethodEvent* param1) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->inputMethodEvent(param1);
    } else {
        vqstackedwidget->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseInputMethodEvent(QStackedWidget* self, QInputMethodEvent* param1) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_InputMethodEvent_IsBase(true);
        vqstackedwidget->inputMethodEvent(param1);
    } else {
        vqstackedwidget->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnInputMethodEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QStackedWidget_InputMethodQuery(const QStackedWidget* self, int param1) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        return new QVariant(vqstackedwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QStackedWidget_QBaseInputMethodQuery(const QStackedWidget* self, int param1) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        vqstackedwidget->setQStackedWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vqstackedwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnInputMethodQuery(const QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        vqstackedwidget->setQStackedWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStackedWidget_FocusNextPrevChild(QStackedWidget* self, bool next) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        return vqstackedwidget->focusNextPrevChild(next);
    } else {
        return vqstackedwidget->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QStackedWidget_QBaseFocusNextPrevChild(QStackedWidget* self, bool next) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_FocusNextPrevChild_IsBase(true);
        return vqstackedwidget->focusNextPrevChild(next);
    } else {
        return vqstackedwidget->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnFocusNextPrevChild(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStackedWidget_EventFilter(QStackedWidget* self, QObject* watched, QEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        return vqstackedwidget->eventFilter(watched, event);
    } else {
        return vqstackedwidget->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QStackedWidget_QBaseEventFilter(QStackedWidget* self, QObject* watched, QEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_EventFilter_IsBase(true);
        return vqstackedwidget->eventFilter(watched, event);
    } else {
        return vqstackedwidget->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnEventFilter(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_EventFilter_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_TimerEvent(QStackedWidget* self, QTimerEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->timerEvent(event);
    } else {
        vqstackedwidget->timerEvent(event);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseTimerEvent(QStackedWidget* self, QTimerEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_TimerEvent_IsBase(true);
        vqstackedwidget->timerEvent(event);
    } else {
        vqstackedwidget->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnTimerEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_TimerEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_ChildEvent(QStackedWidget* self, QChildEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->childEvent(event);
    } else {
        vqstackedwidget->childEvent(event);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseChildEvent(QStackedWidget* self, QChildEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_ChildEvent_IsBase(true);
        vqstackedwidget->childEvent(event);
    } else {
        vqstackedwidget->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnChildEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_ChildEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_CustomEvent(QStackedWidget* self, QEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->customEvent(event);
    } else {
        vqstackedwidget->customEvent(event);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseCustomEvent(QStackedWidget* self, QEvent* event) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_CustomEvent_IsBase(true);
        vqstackedwidget->customEvent(event);
    } else {
        vqstackedwidget->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnCustomEvent(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_CustomEvent_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_ConnectNotify(QStackedWidget* self, QMetaMethod* signal) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->connectNotify(*signal);
    } else {
        vqstackedwidget->connectNotify(*signal);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseConnectNotify(QStackedWidget* self, QMetaMethod* signal) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_ConnectNotify_IsBase(true);
        vqstackedwidget->connectNotify(*signal);
    } else {
        vqstackedwidget->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnConnectNotify(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_ConnectNotify_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_DisconnectNotify(QStackedWidget* self, QMetaMethod* signal) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->disconnectNotify(*signal);
    } else {
        vqstackedwidget->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseDisconnectNotify(QStackedWidget* self, QMetaMethod* signal) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_DisconnectNotify_IsBase(true);
        vqstackedwidget->disconnectNotify(*signal);
    } else {
        vqstackedwidget->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnDisconnectNotify(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_DrawFrame(QStackedWidget* self, QPainter* param1) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->drawFrame(param1);
    } else {
        vqstackedwidget->drawFrame(param1);
    }
}

// Base class handler implementation
void QStackedWidget_QBaseDrawFrame(QStackedWidget* self, QPainter* param1) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_DrawFrame_IsBase(true);
        vqstackedwidget->drawFrame(param1);
    } else {
        vqstackedwidget->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnDrawFrame(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_DrawFrame_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_UpdateMicroFocus(QStackedWidget* self) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->updateMicroFocus();
    } else {
        vqstackedwidget->updateMicroFocus();
    }
}

// Base class handler implementation
void QStackedWidget_QBaseUpdateMicroFocus(QStackedWidget* self) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_UpdateMicroFocus_IsBase(true);
        vqstackedwidget->updateMicroFocus();
    } else {
        vqstackedwidget->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnUpdateMicroFocus(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_Create(QStackedWidget* self) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->create();
    } else {
        vqstackedwidget->create();
    }
}

// Base class handler implementation
void QStackedWidget_QBaseCreate(QStackedWidget* self) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_Create_IsBase(true);
        vqstackedwidget->create();
    } else {
        vqstackedwidget->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnCreate(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_Create_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QStackedWidget_Destroy(QStackedWidget* self) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->destroy();
    } else {
        vqstackedwidget->destroy();
    }
}

// Base class handler implementation
void QStackedWidget_QBaseDestroy(QStackedWidget* self) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_Destroy_IsBase(true);
        vqstackedwidget->destroy();
    } else {
        vqstackedwidget->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnDestroy(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_Destroy_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStackedWidget_FocusNextChild(QStackedWidget* self) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        return vqstackedwidget->focusNextChild();
    } else {
        return vqstackedwidget->focusNextChild();
    }
}

// Base class handler implementation
bool QStackedWidget_QBaseFocusNextChild(QStackedWidget* self) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_FocusNextChild_IsBase(true);
        return vqstackedwidget->focusNextChild();
    } else {
        return vqstackedwidget->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnFocusNextChild(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_FocusNextChild_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStackedWidget_FocusPreviousChild(QStackedWidget* self) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        return vqstackedwidget->focusPreviousChild();
    } else {
        return vqstackedwidget->focusPreviousChild();
    }
}

// Base class handler implementation
bool QStackedWidget_QBaseFocusPreviousChild(QStackedWidget* self) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_FocusPreviousChild_IsBase(true);
        return vqstackedwidget->focusPreviousChild();
    } else {
        return vqstackedwidget->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnFocusPreviousChild(QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self)) {
        vqstackedwidget->setQStackedWidget_FocusPreviousChild_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QStackedWidget_Sender(const QStackedWidget* self) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        return vqstackedwidget->sender();
    } else {
        return vqstackedwidget->sender();
    }
}

// Base class handler implementation
QObject* QStackedWidget_QBaseSender(const QStackedWidget* self) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        vqstackedwidget->setQStackedWidget_Sender_IsBase(true);
        return vqstackedwidget->sender();
    } else {
        return vqstackedwidget->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnSender(const QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        vqstackedwidget->setQStackedWidget_Sender_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QStackedWidget_SenderSignalIndex(const QStackedWidget* self) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        return vqstackedwidget->senderSignalIndex();
    } else {
        return vqstackedwidget->senderSignalIndex();
    }
}

// Base class handler implementation
int QStackedWidget_QBaseSenderSignalIndex(const QStackedWidget* self) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        vqstackedwidget->setQStackedWidget_SenderSignalIndex_IsBase(true);
        return vqstackedwidget->senderSignalIndex();
    } else {
        return vqstackedwidget->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnSenderSignalIndex(const QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        vqstackedwidget->setQStackedWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QStackedWidget_Receivers(const QStackedWidget* self, const char* signal) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        return vqstackedwidget->receivers(signal);
    } else {
        return vqstackedwidget->receivers(signal);
    }
}

// Base class handler implementation
int QStackedWidget_QBaseReceivers(const QStackedWidget* self, const char* signal) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        vqstackedwidget->setQStackedWidget_Receivers_IsBase(true);
        return vqstackedwidget->receivers(signal);
    } else {
        return vqstackedwidget->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnReceivers(const QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        vqstackedwidget->setQStackedWidget_Receivers_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QStackedWidget_IsSignalConnected(const QStackedWidget* self, QMetaMethod* signal) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        return vqstackedwidget->isSignalConnected(*signal);
    } else {
        return vqstackedwidget->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QStackedWidget_QBaseIsSignalConnected(const QStackedWidget* self, QMetaMethod* signal) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        vqstackedwidget->setQStackedWidget_IsSignalConnected_IsBase(true);
        return vqstackedwidget->isSignalConnected(*signal);
    } else {
        return vqstackedwidget->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnIsSignalConnected(const QStackedWidget* self, intptr_t slot) {
    if (auto* vqstackedwidget = const_cast<VirtualQStackedWidget*>(dynamic_cast<const VirtualQStackedWidget*>(self))) {
        vqstackedwidget->setQStackedWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_IsSignalConnected_Callback>(slot));
    }
}

void QStackedWidget_Delete(QStackedWidget* self) {
    delete self;
}
