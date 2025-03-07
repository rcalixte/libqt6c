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
#include <QDockWidget>
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
#include <QStyleOptionDockWidget>
#include <QTabletEvent>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <QWindow>
#include <qdockwidget.h>
#include "libqdockwidget.hpp"
#include "libqdockwidget.hxx"

QDockWidget* QDockWidget_new(QWidget* parent) {
    return new VirtualQDockWidget(parent);
}

QDockWidget* QDockWidget_new2(libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    return new VirtualQDockWidget(title_QString);
}

QDockWidget* QDockWidget_new3() {
    return new VirtualQDockWidget();
}

QDockWidget* QDockWidget_new4(libqt_string title, QWidget* parent) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    return new VirtualQDockWidget(title_QString, parent);
}

QDockWidget* QDockWidget_new5(libqt_string title, QWidget* parent, int flags) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    return new VirtualQDockWidget(title_QString, parent, static_cast<Qt::WindowFlags>(flags));
}

QDockWidget* QDockWidget_new6(QWidget* parent, int flags) {
    return new VirtualQDockWidget(parent, static_cast<Qt::WindowFlags>(flags));
}

QMetaObject* QDockWidget_MetaObject(const QDockWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* QDockWidget_Metacast(QDockWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QDockWidget_Metacall(QDockWidget* self, int param1, int param2, void** param3) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QDockWidget_OnMetacall(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_Metacall_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QDockWidget_QBaseMetacall(QDockWidget* self, int param1, int param2, void** param3) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_Metacall_IsBase(true);
        return vqdockwidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QDockWidget_Tr(const char* s) {
    QString _ret = QDockWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QWidget* QDockWidget_Widget(const QDockWidget* self) {
    return self->widget();
}

void QDockWidget_SetWidget(QDockWidget* self, QWidget* widget) {
    self->setWidget(widget);
}

void QDockWidget_SetFeatures(QDockWidget* self, int features) {
    self->setFeatures(static_cast<QDockWidget::DockWidgetFeatures>(features));
}

int QDockWidget_Features(const QDockWidget* self) {
    return static_cast<int>(self->features());
}

void QDockWidget_SetFloating(QDockWidget* self, bool floating) {
    self->setFloating(floating);
}

bool QDockWidget_IsFloating(const QDockWidget* self) {
    return self->isFloating();
}

void QDockWidget_SetAllowedAreas(QDockWidget* self, int areas) {
    self->setAllowedAreas(static_cast<Qt::DockWidgetAreas>(areas));
}

int QDockWidget_AllowedAreas(const QDockWidget* self) {
    return static_cast<int>(self->allowedAreas());
}

void QDockWidget_SetTitleBarWidget(QDockWidget* self, QWidget* widget) {
    self->setTitleBarWidget(widget);
}

QWidget* QDockWidget_TitleBarWidget(const QDockWidget* self) {
    return self->titleBarWidget();
}

bool QDockWidget_IsAreaAllowed(const QDockWidget* self, int area) {
    return self->isAreaAllowed(static_cast<Qt::DockWidgetArea>(area));
}

QAction* QDockWidget_ToggleViewAction(const QDockWidget* self) {
    return self->toggleViewAction();
}

void QDockWidget_FeaturesChanged(QDockWidget* self, int features) {
    self->featuresChanged(static_cast<QDockWidget::DockWidgetFeatures>(features));
}

void QDockWidget_Connect_FeaturesChanged(QDockWidget* self, intptr_t slot) {
    void (*slotFunc)(QDockWidget*, int) = reinterpret_cast<void (*)(QDockWidget*, int)>(slot);
    QDockWidget::connect(self, &QDockWidget::featuresChanged, [self, slotFunc](QDockWidget::DockWidgetFeatures features) {
        int sigval1 = static_cast<int>(features);
        slotFunc(self, sigval1);
    });
}

void QDockWidget_TopLevelChanged(QDockWidget* self, bool topLevel) {
    self->topLevelChanged(topLevel);
}

void QDockWidget_Connect_TopLevelChanged(QDockWidget* self, intptr_t slot) {
    void (*slotFunc)(QDockWidget*, bool) = reinterpret_cast<void (*)(QDockWidget*, bool)>(slot);
    QDockWidget::connect(self, &QDockWidget::topLevelChanged, [self, slotFunc](bool topLevel) {
        bool sigval1 = topLevel;
        slotFunc(self, sigval1);
    });
}

void QDockWidget_AllowedAreasChanged(QDockWidget* self, int allowedAreas) {
    self->allowedAreasChanged(static_cast<Qt::DockWidgetAreas>(allowedAreas));
}

void QDockWidget_Connect_AllowedAreasChanged(QDockWidget* self, intptr_t slot) {
    void (*slotFunc)(QDockWidget*, int) = reinterpret_cast<void (*)(QDockWidget*, int)>(slot);
    QDockWidget::connect(self, &QDockWidget::allowedAreasChanged, [self, slotFunc](Qt::DockWidgetAreas allowedAreas) {
        int sigval1 = static_cast<int>(allowedAreas);
        slotFunc(self, sigval1);
    });
}

void QDockWidget_VisibilityChanged(QDockWidget* self, bool visible) {
    self->visibilityChanged(visible);
}

void QDockWidget_Connect_VisibilityChanged(QDockWidget* self, intptr_t slot) {
    void (*slotFunc)(QDockWidget*, bool) = reinterpret_cast<void (*)(QDockWidget*, bool)>(slot);
    QDockWidget::connect(self, &QDockWidget::visibilityChanged, [self, slotFunc](bool visible) {
        bool sigval1 = visible;
        slotFunc(self, sigval1);
    });
}

void QDockWidget_DockLocationChanged(QDockWidget* self, int area) {
    self->dockLocationChanged(static_cast<Qt::DockWidgetArea>(area));
}

void QDockWidget_Connect_DockLocationChanged(QDockWidget* self, intptr_t slot) {
    void (*slotFunc)(QDockWidget*, int) = reinterpret_cast<void (*)(QDockWidget*, int)>(slot);
    QDockWidget::connect(self, &QDockWidget::dockLocationChanged, [self, slotFunc](Qt::DockWidgetArea area) {
        int sigval1 = static_cast<int>(area);
        slotFunc(self, sigval1);
    });
}

libqt_string QDockWidget_Tr2(const char* s, const char* c) {
    QString _ret = QDockWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QDockWidget_Tr3(const char* s, const char* c, int n) {
    QString _ret = QDockWidget::tr(s, c, static_cast<int>(n));
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
void QDockWidget_ChangeEvent(QDockWidget* self, QEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->changeEvent(event);
    } else {
        vqdockwidget->changeEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBaseChangeEvent(QDockWidget* self, QEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_ChangeEvent_IsBase(true);
        vqdockwidget->changeEvent(event);
    } else {
        vqdockwidget->changeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnChangeEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_ChangeEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_CloseEvent(QDockWidget* self, QCloseEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->closeEvent(event);
    } else {
        vqdockwidget->closeEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBaseCloseEvent(QDockWidget* self, QCloseEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_CloseEvent_IsBase(true);
        vqdockwidget->closeEvent(event);
    } else {
        vqdockwidget->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnCloseEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_CloseEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_PaintEvent(QDockWidget* self, QPaintEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->paintEvent(event);
    } else {
        vqdockwidget->paintEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBasePaintEvent(QDockWidget* self, QPaintEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_PaintEvent_IsBase(true);
        vqdockwidget->paintEvent(event);
    } else {
        vqdockwidget->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnPaintEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_PaintEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDockWidget_Event(QDockWidget* self, QEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        return vqdockwidget->event(event);
    } else {
        return vqdockwidget->event(event);
    }
}

// Base class handler implementation
bool QDockWidget_QBaseEvent(QDockWidget* self, QEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_Event_IsBase(true);
        return vqdockwidget->event(event);
    } else {
        return vqdockwidget->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_Event_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_InitStyleOption(const QDockWidget* self, QStyleOptionDockWidget* option) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        vqdockwidget->initStyleOption(option);
    } else {
        vqdockwidget->initStyleOption(option);
    }
}

// Base class handler implementation
void QDockWidget_QBaseInitStyleOption(const QDockWidget* self, QStyleOptionDockWidget* option) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        vqdockwidget->setQDockWidget_InitStyleOption_IsBase(true);
        vqdockwidget->initStyleOption(option);
    } else {
        vqdockwidget->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnInitStyleOption(const QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        vqdockwidget->setQDockWidget_InitStyleOption_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QDockWidget_DevType(const QDockWidget* self) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        return vqdockwidget->devType();
    } else {
        return vqdockwidget->devType();
    }
}

// Base class handler implementation
int QDockWidget_QBaseDevType(const QDockWidget* self) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        vqdockwidget->setQDockWidget_DevType_IsBase(true);
        return vqdockwidget->devType();
    } else {
        return vqdockwidget->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnDevType(const QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        vqdockwidget->setQDockWidget_DevType_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_SetVisible(QDockWidget* self, bool visible) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setVisible(visible);
    } else {
        vqdockwidget->setVisible(visible);
    }
}

// Base class handler implementation
void QDockWidget_QBaseSetVisible(QDockWidget* self, bool visible) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_SetVisible_IsBase(true);
        vqdockwidget->setVisible(visible);
    } else {
        vqdockwidget->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnSetVisible(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_SetVisible_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QDockWidget_SizeHint(const QDockWidget* self) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        return new QSize(vqdockwidget->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QDockWidget_QBaseSizeHint(const QDockWidget* self) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        vqdockwidget->setQDockWidget_SizeHint_IsBase(true);
        return new QSize(vqdockwidget->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnSizeHint(const QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        vqdockwidget->setQDockWidget_SizeHint_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QDockWidget_MinimumSizeHint(const QDockWidget* self) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        return new QSize(vqdockwidget->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QDockWidget_QBaseMinimumSizeHint(const QDockWidget* self) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        vqdockwidget->setQDockWidget_MinimumSizeHint_IsBase(true);
        return new QSize(vqdockwidget->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnMinimumSizeHint(const QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        vqdockwidget->setQDockWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QDockWidget_HeightForWidth(const QDockWidget* self, int param1) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        return vqdockwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return vqdockwidget->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QDockWidget_QBaseHeightForWidth(const QDockWidget* self, int param1) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        vqdockwidget->setQDockWidget_HeightForWidth_IsBase(true);
        return vqdockwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return vqdockwidget->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnHeightForWidth(const QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        vqdockwidget->setQDockWidget_HeightForWidth_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDockWidget_HasHeightForWidth(const QDockWidget* self) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        return vqdockwidget->hasHeightForWidth();
    } else {
        return vqdockwidget->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QDockWidget_QBaseHasHeightForWidth(const QDockWidget* self) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        vqdockwidget->setQDockWidget_HasHeightForWidth_IsBase(true);
        return vqdockwidget->hasHeightForWidth();
    } else {
        return vqdockwidget->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnHasHeightForWidth(const QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        vqdockwidget->setQDockWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QDockWidget_PaintEngine(const QDockWidget* self) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        return vqdockwidget->paintEngine();
    } else {
        return vqdockwidget->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QDockWidget_QBasePaintEngine(const QDockWidget* self) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        vqdockwidget->setQDockWidget_PaintEngine_IsBase(true);
        return vqdockwidget->paintEngine();
    } else {
        return vqdockwidget->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnPaintEngine(const QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        vqdockwidget->setQDockWidget_PaintEngine_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_MousePressEvent(QDockWidget* self, QMouseEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->mousePressEvent(event);
    } else {
        vqdockwidget->mousePressEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBaseMousePressEvent(QDockWidget* self, QMouseEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_MousePressEvent_IsBase(true);
        vqdockwidget->mousePressEvent(event);
    } else {
        vqdockwidget->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnMousePressEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_MousePressEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_MouseReleaseEvent(QDockWidget* self, QMouseEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->mouseReleaseEvent(event);
    } else {
        vqdockwidget->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBaseMouseReleaseEvent(QDockWidget* self, QMouseEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_MouseReleaseEvent_IsBase(true);
        vqdockwidget->mouseReleaseEvent(event);
    } else {
        vqdockwidget->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnMouseReleaseEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_MouseDoubleClickEvent(QDockWidget* self, QMouseEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->mouseDoubleClickEvent(event);
    } else {
        vqdockwidget->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBaseMouseDoubleClickEvent(QDockWidget* self, QMouseEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_MouseDoubleClickEvent_IsBase(true);
        vqdockwidget->mouseDoubleClickEvent(event);
    } else {
        vqdockwidget->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnMouseDoubleClickEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_MouseMoveEvent(QDockWidget* self, QMouseEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->mouseMoveEvent(event);
    } else {
        vqdockwidget->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBaseMouseMoveEvent(QDockWidget* self, QMouseEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_MouseMoveEvent_IsBase(true);
        vqdockwidget->mouseMoveEvent(event);
    } else {
        vqdockwidget->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnMouseMoveEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_WheelEvent(QDockWidget* self, QWheelEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->wheelEvent(event);
    } else {
        vqdockwidget->wheelEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBaseWheelEvent(QDockWidget* self, QWheelEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_WheelEvent_IsBase(true);
        vqdockwidget->wheelEvent(event);
    } else {
        vqdockwidget->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnWheelEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_WheelEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_KeyPressEvent(QDockWidget* self, QKeyEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->keyPressEvent(event);
    } else {
        vqdockwidget->keyPressEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBaseKeyPressEvent(QDockWidget* self, QKeyEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_KeyPressEvent_IsBase(true);
        vqdockwidget->keyPressEvent(event);
    } else {
        vqdockwidget->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnKeyPressEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_KeyReleaseEvent(QDockWidget* self, QKeyEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->keyReleaseEvent(event);
    } else {
        vqdockwidget->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBaseKeyReleaseEvent(QDockWidget* self, QKeyEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_KeyReleaseEvent_IsBase(true);
        vqdockwidget->keyReleaseEvent(event);
    } else {
        vqdockwidget->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnKeyReleaseEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_FocusInEvent(QDockWidget* self, QFocusEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->focusInEvent(event);
    } else {
        vqdockwidget->focusInEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBaseFocusInEvent(QDockWidget* self, QFocusEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_FocusInEvent_IsBase(true);
        vqdockwidget->focusInEvent(event);
    } else {
        vqdockwidget->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnFocusInEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_FocusInEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_FocusOutEvent(QDockWidget* self, QFocusEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->focusOutEvent(event);
    } else {
        vqdockwidget->focusOutEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBaseFocusOutEvent(QDockWidget* self, QFocusEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_FocusOutEvent_IsBase(true);
        vqdockwidget->focusOutEvent(event);
    } else {
        vqdockwidget->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnFocusOutEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_EnterEvent(QDockWidget* self, QEnterEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->enterEvent(event);
    } else {
        vqdockwidget->enterEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBaseEnterEvent(QDockWidget* self, QEnterEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_EnterEvent_IsBase(true);
        vqdockwidget->enterEvent(event);
    } else {
        vqdockwidget->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnEnterEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_EnterEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_LeaveEvent(QDockWidget* self, QEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->leaveEvent(event);
    } else {
        vqdockwidget->leaveEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBaseLeaveEvent(QDockWidget* self, QEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_LeaveEvent_IsBase(true);
        vqdockwidget->leaveEvent(event);
    } else {
        vqdockwidget->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnLeaveEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_LeaveEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_MoveEvent(QDockWidget* self, QMoveEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->moveEvent(event);
    } else {
        vqdockwidget->moveEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBaseMoveEvent(QDockWidget* self, QMoveEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_MoveEvent_IsBase(true);
        vqdockwidget->moveEvent(event);
    } else {
        vqdockwidget->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnMoveEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_MoveEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_ResizeEvent(QDockWidget* self, QResizeEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->resizeEvent(event);
    } else {
        vqdockwidget->resizeEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBaseResizeEvent(QDockWidget* self, QResizeEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_ResizeEvent_IsBase(true);
        vqdockwidget->resizeEvent(event);
    } else {
        vqdockwidget->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnResizeEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_ResizeEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_ContextMenuEvent(QDockWidget* self, QContextMenuEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->contextMenuEvent(event);
    } else {
        vqdockwidget->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBaseContextMenuEvent(QDockWidget* self, QContextMenuEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_ContextMenuEvent_IsBase(true);
        vqdockwidget->contextMenuEvent(event);
    } else {
        vqdockwidget->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnContextMenuEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_TabletEvent(QDockWidget* self, QTabletEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->tabletEvent(event);
    } else {
        vqdockwidget->tabletEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBaseTabletEvent(QDockWidget* self, QTabletEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_TabletEvent_IsBase(true);
        vqdockwidget->tabletEvent(event);
    } else {
        vqdockwidget->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnTabletEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_TabletEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_ActionEvent(QDockWidget* self, QActionEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->actionEvent(event);
    } else {
        vqdockwidget->actionEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBaseActionEvent(QDockWidget* self, QActionEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_ActionEvent_IsBase(true);
        vqdockwidget->actionEvent(event);
    } else {
        vqdockwidget->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnActionEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_ActionEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_DragEnterEvent(QDockWidget* self, QDragEnterEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->dragEnterEvent(event);
    } else {
        vqdockwidget->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBaseDragEnterEvent(QDockWidget* self, QDragEnterEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_DragEnterEvent_IsBase(true);
        vqdockwidget->dragEnterEvent(event);
    } else {
        vqdockwidget->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnDragEnterEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_DragMoveEvent(QDockWidget* self, QDragMoveEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->dragMoveEvent(event);
    } else {
        vqdockwidget->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBaseDragMoveEvent(QDockWidget* self, QDragMoveEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_DragMoveEvent_IsBase(true);
        vqdockwidget->dragMoveEvent(event);
    } else {
        vqdockwidget->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnDragMoveEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_DragLeaveEvent(QDockWidget* self, QDragLeaveEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->dragLeaveEvent(event);
    } else {
        vqdockwidget->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBaseDragLeaveEvent(QDockWidget* self, QDragLeaveEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_DragLeaveEvent_IsBase(true);
        vqdockwidget->dragLeaveEvent(event);
    } else {
        vqdockwidget->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnDragLeaveEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_DropEvent(QDockWidget* self, QDropEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->dropEvent(event);
    } else {
        vqdockwidget->dropEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBaseDropEvent(QDockWidget* self, QDropEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_DropEvent_IsBase(true);
        vqdockwidget->dropEvent(event);
    } else {
        vqdockwidget->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnDropEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_DropEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_ShowEvent(QDockWidget* self, QShowEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->showEvent(event);
    } else {
        vqdockwidget->showEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBaseShowEvent(QDockWidget* self, QShowEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_ShowEvent_IsBase(true);
        vqdockwidget->showEvent(event);
    } else {
        vqdockwidget->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnShowEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_ShowEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_HideEvent(QDockWidget* self, QHideEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->hideEvent(event);
    } else {
        vqdockwidget->hideEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBaseHideEvent(QDockWidget* self, QHideEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_HideEvent_IsBase(true);
        vqdockwidget->hideEvent(event);
    } else {
        vqdockwidget->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnHideEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_HideEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDockWidget_NativeEvent(QDockWidget* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        return vqdockwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqdockwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QDockWidget_QBaseNativeEvent(QDockWidget* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_NativeEvent_IsBase(true);
        return vqdockwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqdockwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnNativeEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_NativeEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QDockWidget_Metric(const QDockWidget* self, int param1) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        return vqdockwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqdockwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QDockWidget_QBaseMetric(const QDockWidget* self, int param1) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        vqdockwidget->setQDockWidget_Metric_IsBase(true);
        return vqdockwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqdockwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnMetric(const QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        vqdockwidget->setQDockWidget_Metric_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_InitPainter(const QDockWidget* self, QPainter* painter) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        vqdockwidget->initPainter(painter);
    } else {
        vqdockwidget->initPainter(painter);
    }
}

// Base class handler implementation
void QDockWidget_QBaseInitPainter(const QDockWidget* self, QPainter* painter) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        vqdockwidget->setQDockWidget_InitPainter_IsBase(true);
        vqdockwidget->initPainter(painter);
    } else {
        vqdockwidget->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnInitPainter(const QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        vqdockwidget->setQDockWidget_InitPainter_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QDockWidget_Redirected(const QDockWidget* self, QPoint* offset) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        return vqdockwidget->redirected(offset);
    } else {
        return vqdockwidget->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QDockWidget_QBaseRedirected(const QDockWidget* self, QPoint* offset) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        vqdockwidget->setQDockWidget_Redirected_IsBase(true);
        return vqdockwidget->redirected(offset);
    } else {
        return vqdockwidget->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnRedirected(const QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        vqdockwidget->setQDockWidget_Redirected_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QDockWidget_SharedPainter(const QDockWidget* self) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        return vqdockwidget->sharedPainter();
    } else {
        return vqdockwidget->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QDockWidget_QBaseSharedPainter(const QDockWidget* self) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        vqdockwidget->setQDockWidget_SharedPainter_IsBase(true);
        return vqdockwidget->sharedPainter();
    } else {
        return vqdockwidget->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnSharedPainter(const QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        vqdockwidget->setQDockWidget_SharedPainter_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_InputMethodEvent(QDockWidget* self, QInputMethodEvent* param1) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->inputMethodEvent(param1);
    } else {
        vqdockwidget->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QDockWidget_QBaseInputMethodEvent(QDockWidget* self, QInputMethodEvent* param1) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_InputMethodEvent_IsBase(true);
        vqdockwidget->inputMethodEvent(param1);
    } else {
        vqdockwidget->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnInputMethodEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QDockWidget_InputMethodQuery(const QDockWidget* self, int param1) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        return new QVariant(vqdockwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QDockWidget_QBaseInputMethodQuery(const QDockWidget* self, int param1) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        vqdockwidget->setQDockWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vqdockwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnInputMethodQuery(const QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        vqdockwidget->setQDockWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDockWidget_FocusNextPrevChild(QDockWidget* self, bool next) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        return vqdockwidget->focusNextPrevChild(next);
    } else {
        return vqdockwidget->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QDockWidget_QBaseFocusNextPrevChild(QDockWidget* self, bool next) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_FocusNextPrevChild_IsBase(true);
        return vqdockwidget->focusNextPrevChild(next);
    } else {
        return vqdockwidget->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnFocusNextPrevChild(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDockWidget_EventFilter(QDockWidget* self, QObject* watched, QEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        return vqdockwidget->eventFilter(watched, event);
    } else {
        return vqdockwidget->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QDockWidget_QBaseEventFilter(QDockWidget* self, QObject* watched, QEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_EventFilter_IsBase(true);
        return vqdockwidget->eventFilter(watched, event);
    } else {
        return vqdockwidget->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnEventFilter(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_EventFilter_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_TimerEvent(QDockWidget* self, QTimerEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->timerEvent(event);
    } else {
        vqdockwidget->timerEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBaseTimerEvent(QDockWidget* self, QTimerEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_TimerEvent_IsBase(true);
        vqdockwidget->timerEvent(event);
    } else {
        vqdockwidget->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnTimerEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_TimerEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_ChildEvent(QDockWidget* self, QChildEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->childEvent(event);
    } else {
        vqdockwidget->childEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBaseChildEvent(QDockWidget* self, QChildEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_ChildEvent_IsBase(true);
        vqdockwidget->childEvent(event);
    } else {
        vqdockwidget->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnChildEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_ChildEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_CustomEvent(QDockWidget* self, QEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->customEvent(event);
    } else {
        vqdockwidget->customEvent(event);
    }
}

// Base class handler implementation
void QDockWidget_QBaseCustomEvent(QDockWidget* self, QEvent* event) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_CustomEvent_IsBase(true);
        vqdockwidget->customEvent(event);
    } else {
        vqdockwidget->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnCustomEvent(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_CustomEvent_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_ConnectNotify(QDockWidget* self, QMetaMethod* signal) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->connectNotify(*signal);
    } else {
        vqdockwidget->connectNotify(*signal);
    }
}

// Base class handler implementation
void QDockWidget_QBaseConnectNotify(QDockWidget* self, QMetaMethod* signal) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_ConnectNotify_IsBase(true);
        vqdockwidget->connectNotify(*signal);
    } else {
        vqdockwidget->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnConnectNotify(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_ConnectNotify_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_DisconnectNotify(QDockWidget* self, QMetaMethod* signal) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->disconnectNotify(*signal);
    } else {
        vqdockwidget->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QDockWidget_QBaseDisconnectNotify(QDockWidget* self, QMetaMethod* signal) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_DisconnectNotify_IsBase(true);
        vqdockwidget->disconnectNotify(*signal);
    } else {
        vqdockwidget->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnDisconnectNotify(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_UpdateMicroFocus(QDockWidget* self) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->updateMicroFocus();
    } else {
        vqdockwidget->updateMicroFocus();
    }
}

// Base class handler implementation
void QDockWidget_QBaseUpdateMicroFocus(QDockWidget* self) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_UpdateMicroFocus_IsBase(true);
        vqdockwidget->updateMicroFocus();
    } else {
        vqdockwidget->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnUpdateMicroFocus(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_Create(QDockWidget* self) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->create();
    } else {
        vqdockwidget->create();
    }
}

// Base class handler implementation
void QDockWidget_QBaseCreate(QDockWidget* self) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_Create_IsBase(true);
        vqdockwidget->create();
    } else {
        vqdockwidget->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnCreate(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_Create_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QDockWidget_Destroy(QDockWidget* self) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->destroy();
    } else {
        vqdockwidget->destroy();
    }
}

// Base class handler implementation
void QDockWidget_QBaseDestroy(QDockWidget* self) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_Destroy_IsBase(true);
        vqdockwidget->destroy();
    } else {
        vqdockwidget->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnDestroy(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_Destroy_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDockWidget_FocusNextChild(QDockWidget* self) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        return vqdockwidget->focusNextChild();
    } else {
        return vqdockwidget->focusNextChild();
    }
}

// Base class handler implementation
bool QDockWidget_QBaseFocusNextChild(QDockWidget* self) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_FocusNextChild_IsBase(true);
        return vqdockwidget->focusNextChild();
    } else {
        return vqdockwidget->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnFocusNextChild(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_FocusNextChild_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDockWidget_FocusPreviousChild(QDockWidget* self) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        return vqdockwidget->focusPreviousChild();
    } else {
        return vqdockwidget->focusPreviousChild();
    }
}

// Base class handler implementation
bool QDockWidget_QBaseFocusPreviousChild(QDockWidget* self) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_FocusPreviousChild_IsBase(true);
        return vqdockwidget->focusPreviousChild();
    } else {
        return vqdockwidget->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnFocusPreviousChild(QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = dynamic_cast<VirtualQDockWidget*>(self)) {
        vqdockwidget->setQDockWidget_FocusPreviousChild_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QDockWidget_Sender(const QDockWidget* self) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        return vqdockwidget->sender();
    } else {
        return vqdockwidget->sender();
    }
}

// Base class handler implementation
QObject* QDockWidget_QBaseSender(const QDockWidget* self) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        vqdockwidget->setQDockWidget_Sender_IsBase(true);
        return vqdockwidget->sender();
    } else {
        return vqdockwidget->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnSender(const QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        vqdockwidget->setQDockWidget_Sender_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QDockWidget_SenderSignalIndex(const QDockWidget* self) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        return vqdockwidget->senderSignalIndex();
    } else {
        return vqdockwidget->senderSignalIndex();
    }
}

// Base class handler implementation
int QDockWidget_QBaseSenderSignalIndex(const QDockWidget* self) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        vqdockwidget->setQDockWidget_SenderSignalIndex_IsBase(true);
        return vqdockwidget->senderSignalIndex();
    } else {
        return vqdockwidget->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnSenderSignalIndex(const QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        vqdockwidget->setQDockWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QDockWidget_Receivers(const QDockWidget* self, const char* signal) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        return vqdockwidget->receivers(signal);
    } else {
        return vqdockwidget->receivers(signal);
    }
}

// Base class handler implementation
int QDockWidget_QBaseReceivers(const QDockWidget* self, const char* signal) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        vqdockwidget->setQDockWidget_Receivers_IsBase(true);
        return vqdockwidget->receivers(signal);
    } else {
        return vqdockwidget->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnReceivers(const QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        vqdockwidget->setQDockWidget_Receivers_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDockWidget_IsSignalConnected(const QDockWidget* self, QMetaMethod* signal) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        return vqdockwidget->isSignalConnected(*signal);
    } else {
        return vqdockwidget->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QDockWidget_QBaseIsSignalConnected(const QDockWidget* self, QMetaMethod* signal) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        vqdockwidget->setQDockWidget_IsSignalConnected_IsBase(true);
        return vqdockwidget->isSignalConnected(*signal);
    } else {
        return vqdockwidget->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDockWidget_OnIsSignalConnected(const QDockWidget* self, intptr_t slot) {
    if (auto* vqdockwidget = const_cast<VirtualQDockWidget*>(dynamic_cast<const VirtualQDockWidget*>(self))) {
        vqdockwidget->setQDockWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualQDockWidget::QDockWidget_IsSignalConnected_Callback>(slot));
    }
}

void QDockWidget_Delete(QDockWidget* self) {
    delete self;
}
