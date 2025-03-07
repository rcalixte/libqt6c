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
#include <QStyleOptionToolBar>
#include <QTabletEvent>
#include <QThread>
#include <QTimerEvent>
#include <QToolBar>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <QWindow>
#include <qtoolbar.h>
#include "libqtoolbar.hpp"
#include "libqtoolbar.hxx"

QToolBar* QToolBar_new(QWidget* parent) {
    return new VirtualQToolBar(parent);
}

QToolBar* QToolBar_new2(libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    return new VirtualQToolBar(title_QString);
}

QToolBar* QToolBar_new3() {
    return new VirtualQToolBar();
}

QToolBar* QToolBar_new4(libqt_string title, QWidget* parent) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    return new VirtualQToolBar(title_QString, parent);
}

QMetaObject* QToolBar_MetaObject(const QToolBar* self) {
    return (QMetaObject*)self->metaObject();
}

void* QToolBar_Metacast(QToolBar* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QToolBar_Metacall(QToolBar* self, int param1, int param2, void** param3) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QToolBar_OnMetacall(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_Metacall_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QToolBar_QBaseMetacall(QToolBar* self, int param1, int param2, void** param3) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_Metacall_IsBase(true);
        return vqtoolbar->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QToolBar_Tr(const char* s) {
    QString _ret = QToolBar::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QToolBar_SetMovable(QToolBar* self, bool movable) {
    self->setMovable(movable);
}

bool QToolBar_IsMovable(const QToolBar* self) {
    return self->isMovable();
}

void QToolBar_SetAllowedAreas(QToolBar* self, int areas) {
    self->setAllowedAreas(static_cast<Qt::ToolBarAreas>(areas));
}

int QToolBar_AllowedAreas(const QToolBar* self) {
    return static_cast<int>(self->allowedAreas());
}

bool QToolBar_IsAreaAllowed(const QToolBar* self, int area) {
    return self->isAreaAllowed(static_cast<Qt::ToolBarArea>(area));
}

void QToolBar_SetOrientation(QToolBar* self, int orientation) {
    self->setOrientation(static_cast<Qt::Orientation>(orientation));
}

int QToolBar_Orientation(const QToolBar* self) {
    return static_cast<int>(self->orientation());
}

void QToolBar_Clear(QToolBar* self) {
    self->clear();
}

QAction* QToolBar_AddSeparator(QToolBar* self) {
    return self->addSeparator();
}

QAction* QToolBar_InsertSeparator(QToolBar* self, QAction* before) {
    return self->insertSeparator(before);
}

QAction* QToolBar_AddWidget(QToolBar* self, QWidget* widget) {
    return self->addWidget(widget);
}

QAction* QToolBar_InsertWidget(QToolBar* self, QAction* before, QWidget* widget) {
    return self->insertWidget(before, widget);
}

QRect* QToolBar_ActionGeometry(const QToolBar* self, QAction* action) {
    return new QRect(self->actionGeometry(action));
}

QAction* QToolBar_ActionAt(const QToolBar* self, QPoint* p) {
    return self->actionAt(*p);
}

QAction* QToolBar_ActionAt2(const QToolBar* self, int x, int y) {
    return self->actionAt(static_cast<int>(x), static_cast<int>(y));
}

QAction* QToolBar_ToggleViewAction(const QToolBar* self) {
    return self->toggleViewAction();
}

QSize* QToolBar_IconSize(const QToolBar* self) {
    return new QSize(self->iconSize());
}

int QToolBar_ToolButtonStyle(const QToolBar* self) {
    return static_cast<int>(self->toolButtonStyle());
}

QWidget* QToolBar_WidgetForAction(const QToolBar* self, QAction* action) {
    return self->widgetForAction(action);
}

bool QToolBar_IsFloatable(const QToolBar* self) {
    return self->isFloatable();
}

void QToolBar_SetFloatable(QToolBar* self, bool floatable) {
    self->setFloatable(floatable);
}

bool QToolBar_IsFloating(const QToolBar* self) {
    return self->isFloating();
}

void QToolBar_SetIconSize(QToolBar* self, QSize* iconSize) {
    self->setIconSize(*iconSize);
}

void QToolBar_SetToolButtonStyle(QToolBar* self, int toolButtonStyle) {
    self->setToolButtonStyle(static_cast<Qt::ToolButtonStyle>(toolButtonStyle));
}

void QToolBar_ActionTriggered(QToolBar* self, QAction* action) {
    self->actionTriggered(action);
}

void QToolBar_Connect_ActionTriggered(QToolBar* self, intptr_t slot) {
    void (*slotFunc)(QToolBar*, QAction*) = reinterpret_cast<void (*)(QToolBar*, QAction*)>(slot);
    QToolBar::connect(self, &QToolBar::actionTriggered, [self, slotFunc](QAction* action) {
        QAction* sigval1 = action;
        slotFunc(self, sigval1);
    });
}

void QToolBar_MovableChanged(QToolBar* self, bool movable) {
    self->movableChanged(movable);
}

void QToolBar_Connect_MovableChanged(QToolBar* self, intptr_t slot) {
    void (*slotFunc)(QToolBar*, bool) = reinterpret_cast<void (*)(QToolBar*, bool)>(slot);
    QToolBar::connect(self, &QToolBar::movableChanged, [self, slotFunc](bool movable) {
        bool sigval1 = movable;
        slotFunc(self, sigval1);
    });
}

void QToolBar_AllowedAreasChanged(QToolBar* self, int allowedAreas) {
    self->allowedAreasChanged(static_cast<Qt::ToolBarAreas>(allowedAreas));
}

void QToolBar_Connect_AllowedAreasChanged(QToolBar* self, intptr_t slot) {
    void (*slotFunc)(QToolBar*, int) = reinterpret_cast<void (*)(QToolBar*, int)>(slot);
    QToolBar::connect(self, &QToolBar::allowedAreasChanged, [self, slotFunc](Qt::ToolBarAreas allowedAreas) {
        int sigval1 = static_cast<int>(allowedAreas);
        slotFunc(self, sigval1);
    });
}

void QToolBar_OrientationChanged(QToolBar* self, int orientation) {
    self->orientationChanged(static_cast<Qt::Orientation>(orientation));
}

void QToolBar_Connect_OrientationChanged(QToolBar* self, intptr_t slot) {
    void (*slotFunc)(QToolBar*, int) = reinterpret_cast<void (*)(QToolBar*, int)>(slot);
    QToolBar::connect(self, &QToolBar::orientationChanged, [self, slotFunc](Qt::Orientation orientation) {
        int sigval1 = static_cast<int>(orientation);
        slotFunc(self, sigval1);
    });
}

void QToolBar_IconSizeChanged(QToolBar* self, QSize* iconSize) {
    self->iconSizeChanged(*iconSize);
}

void QToolBar_Connect_IconSizeChanged(QToolBar* self, intptr_t slot) {
    void (*slotFunc)(QToolBar*, QSize*) = reinterpret_cast<void (*)(QToolBar*, QSize*)>(slot);
    QToolBar::connect(self, &QToolBar::iconSizeChanged, [self, slotFunc](const QSize& iconSize) {
        const QSize& iconSize_ret = iconSize;
        // Cast returned reference into pointer
        QSize* sigval1 = const_cast<QSize*>(&iconSize_ret);
        slotFunc(self, sigval1);
    });
}

void QToolBar_ToolButtonStyleChanged(QToolBar* self, int toolButtonStyle) {
    self->toolButtonStyleChanged(static_cast<Qt::ToolButtonStyle>(toolButtonStyle));
}

void QToolBar_Connect_ToolButtonStyleChanged(QToolBar* self, intptr_t slot) {
    void (*slotFunc)(QToolBar*, int) = reinterpret_cast<void (*)(QToolBar*, int)>(slot);
    QToolBar::connect(self, &QToolBar::toolButtonStyleChanged, [self, slotFunc](Qt::ToolButtonStyle toolButtonStyle) {
        int sigval1 = static_cast<int>(toolButtonStyle);
        slotFunc(self, sigval1);
    });
}

void QToolBar_TopLevelChanged(QToolBar* self, bool topLevel) {
    self->topLevelChanged(topLevel);
}

void QToolBar_Connect_TopLevelChanged(QToolBar* self, intptr_t slot) {
    void (*slotFunc)(QToolBar*, bool) = reinterpret_cast<void (*)(QToolBar*, bool)>(slot);
    QToolBar::connect(self, &QToolBar::topLevelChanged, [self, slotFunc](bool topLevel) {
        bool sigval1 = topLevel;
        slotFunc(self, sigval1);
    });
}

void QToolBar_VisibilityChanged(QToolBar* self, bool visible) {
    self->visibilityChanged(visible);
}

void QToolBar_Connect_VisibilityChanged(QToolBar* self, intptr_t slot) {
    void (*slotFunc)(QToolBar*, bool) = reinterpret_cast<void (*)(QToolBar*, bool)>(slot);
    QToolBar::connect(self, &QToolBar::visibilityChanged, [self, slotFunc](bool visible) {
        bool sigval1 = visible;
        slotFunc(self, sigval1);
    });
}

libqt_string QToolBar_Tr2(const char* s, const char* c) {
    QString _ret = QToolBar::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QToolBar_Tr3(const char* s, const char* c, int n) {
    QString _ret = QToolBar::tr(s, c, static_cast<int>(n));
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
void QToolBar_ActionEvent(QToolBar* self, QActionEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->actionEvent(event);
    } else {
        vqtoolbar->actionEvent(event);
    }
}

// Base class handler implementation
void QToolBar_QBaseActionEvent(QToolBar* self, QActionEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_ActionEvent_IsBase(true);
        vqtoolbar->actionEvent(event);
    } else {
        vqtoolbar->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnActionEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_ActionEvent_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBar_ChangeEvent(QToolBar* self, QEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->changeEvent(event);
    } else {
        vqtoolbar->changeEvent(event);
    }
}

// Base class handler implementation
void QToolBar_QBaseChangeEvent(QToolBar* self, QEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_ChangeEvent_IsBase(true);
        vqtoolbar->changeEvent(event);
    } else {
        vqtoolbar->changeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnChangeEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_ChangeEvent_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBar_PaintEvent(QToolBar* self, QPaintEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->paintEvent(event);
    } else {
        vqtoolbar->paintEvent(event);
    }
}

// Base class handler implementation
void QToolBar_QBasePaintEvent(QToolBar* self, QPaintEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_PaintEvent_IsBase(true);
        vqtoolbar->paintEvent(event);
    } else {
        vqtoolbar->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnPaintEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_PaintEvent_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QToolBar_Event(QToolBar* self, QEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        return vqtoolbar->event(event);
    } else {
        return vqtoolbar->event(event);
    }
}

// Base class handler implementation
bool QToolBar_QBaseEvent(QToolBar* self, QEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_Event_IsBase(true);
        return vqtoolbar->event(event);
    } else {
        return vqtoolbar->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_Event_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBar_InitStyleOption(const QToolBar* self, QStyleOptionToolBar* option) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        vqtoolbar->initStyleOption(option);
    } else {
        vqtoolbar->initStyleOption(option);
    }
}

// Base class handler implementation
void QToolBar_QBaseInitStyleOption(const QToolBar* self, QStyleOptionToolBar* option) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        vqtoolbar->setQToolBar_InitStyleOption_IsBase(true);
        vqtoolbar->initStyleOption(option);
    } else {
        vqtoolbar->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnInitStyleOption(const QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        vqtoolbar->setQToolBar_InitStyleOption_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QToolBar_DevType(const QToolBar* self) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        return vqtoolbar->devType();
    } else {
        return vqtoolbar->devType();
    }
}

// Base class handler implementation
int QToolBar_QBaseDevType(const QToolBar* self) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        vqtoolbar->setQToolBar_DevType_IsBase(true);
        return vqtoolbar->devType();
    } else {
        return vqtoolbar->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnDevType(const QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        vqtoolbar->setQToolBar_DevType_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBar_SetVisible(QToolBar* self, bool visible) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setVisible(visible);
    } else {
        vqtoolbar->setVisible(visible);
    }
}

// Base class handler implementation
void QToolBar_QBaseSetVisible(QToolBar* self, bool visible) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_SetVisible_IsBase(true);
        vqtoolbar->setVisible(visible);
    } else {
        vqtoolbar->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnSetVisible(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_SetVisible_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QToolBar_SizeHint(const QToolBar* self) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        return new QSize(vqtoolbar->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QToolBar_QBaseSizeHint(const QToolBar* self) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        vqtoolbar->setQToolBar_SizeHint_IsBase(true);
        return new QSize(vqtoolbar->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnSizeHint(const QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        vqtoolbar->setQToolBar_SizeHint_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QToolBar_MinimumSizeHint(const QToolBar* self) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        return new QSize(vqtoolbar->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QToolBar_QBaseMinimumSizeHint(const QToolBar* self) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        vqtoolbar->setQToolBar_MinimumSizeHint_IsBase(true);
        return new QSize(vqtoolbar->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnMinimumSizeHint(const QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        vqtoolbar->setQToolBar_MinimumSizeHint_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QToolBar_HeightForWidth(const QToolBar* self, int param1) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        return vqtoolbar->heightForWidth(static_cast<int>(param1));
    } else {
        return vqtoolbar->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QToolBar_QBaseHeightForWidth(const QToolBar* self, int param1) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        vqtoolbar->setQToolBar_HeightForWidth_IsBase(true);
        return vqtoolbar->heightForWidth(static_cast<int>(param1));
    } else {
        return vqtoolbar->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnHeightForWidth(const QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        vqtoolbar->setQToolBar_HeightForWidth_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QToolBar_HasHeightForWidth(const QToolBar* self) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        return vqtoolbar->hasHeightForWidth();
    } else {
        return vqtoolbar->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QToolBar_QBaseHasHeightForWidth(const QToolBar* self) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        vqtoolbar->setQToolBar_HasHeightForWidth_IsBase(true);
        return vqtoolbar->hasHeightForWidth();
    } else {
        return vqtoolbar->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnHasHeightForWidth(const QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        vqtoolbar->setQToolBar_HasHeightForWidth_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QToolBar_PaintEngine(const QToolBar* self) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        return vqtoolbar->paintEngine();
    } else {
        return vqtoolbar->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QToolBar_QBasePaintEngine(const QToolBar* self) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        vqtoolbar->setQToolBar_PaintEngine_IsBase(true);
        return vqtoolbar->paintEngine();
    } else {
        return vqtoolbar->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnPaintEngine(const QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        vqtoolbar->setQToolBar_PaintEngine_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBar_MousePressEvent(QToolBar* self, QMouseEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->mousePressEvent(event);
    } else {
        vqtoolbar->mousePressEvent(event);
    }
}

// Base class handler implementation
void QToolBar_QBaseMousePressEvent(QToolBar* self, QMouseEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_MousePressEvent_IsBase(true);
        vqtoolbar->mousePressEvent(event);
    } else {
        vqtoolbar->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnMousePressEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_MousePressEvent_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBar_MouseReleaseEvent(QToolBar* self, QMouseEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->mouseReleaseEvent(event);
    } else {
        vqtoolbar->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QToolBar_QBaseMouseReleaseEvent(QToolBar* self, QMouseEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_MouseReleaseEvent_IsBase(true);
        vqtoolbar->mouseReleaseEvent(event);
    } else {
        vqtoolbar->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnMouseReleaseEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBar_MouseDoubleClickEvent(QToolBar* self, QMouseEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->mouseDoubleClickEvent(event);
    } else {
        vqtoolbar->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QToolBar_QBaseMouseDoubleClickEvent(QToolBar* self, QMouseEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_MouseDoubleClickEvent_IsBase(true);
        vqtoolbar->mouseDoubleClickEvent(event);
    } else {
        vqtoolbar->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnMouseDoubleClickEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBar_MouseMoveEvent(QToolBar* self, QMouseEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->mouseMoveEvent(event);
    } else {
        vqtoolbar->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QToolBar_QBaseMouseMoveEvent(QToolBar* self, QMouseEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_MouseMoveEvent_IsBase(true);
        vqtoolbar->mouseMoveEvent(event);
    } else {
        vqtoolbar->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnMouseMoveEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_MouseMoveEvent_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBar_WheelEvent(QToolBar* self, QWheelEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->wheelEvent(event);
    } else {
        vqtoolbar->wheelEvent(event);
    }
}

// Base class handler implementation
void QToolBar_QBaseWheelEvent(QToolBar* self, QWheelEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_WheelEvent_IsBase(true);
        vqtoolbar->wheelEvent(event);
    } else {
        vqtoolbar->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnWheelEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_WheelEvent_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBar_KeyPressEvent(QToolBar* self, QKeyEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->keyPressEvent(event);
    } else {
        vqtoolbar->keyPressEvent(event);
    }
}

// Base class handler implementation
void QToolBar_QBaseKeyPressEvent(QToolBar* self, QKeyEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_KeyPressEvent_IsBase(true);
        vqtoolbar->keyPressEvent(event);
    } else {
        vqtoolbar->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnKeyPressEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_KeyPressEvent_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBar_KeyReleaseEvent(QToolBar* self, QKeyEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->keyReleaseEvent(event);
    } else {
        vqtoolbar->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QToolBar_QBaseKeyReleaseEvent(QToolBar* self, QKeyEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_KeyReleaseEvent_IsBase(true);
        vqtoolbar->keyReleaseEvent(event);
    } else {
        vqtoolbar->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnKeyReleaseEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBar_FocusInEvent(QToolBar* self, QFocusEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->focusInEvent(event);
    } else {
        vqtoolbar->focusInEvent(event);
    }
}

// Base class handler implementation
void QToolBar_QBaseFocusInEvent(QToolBar* self, QFocusEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_FocusInEvent_IsBase(true);
        vqtoolbar->focusInEvent(event);
    } else {
        vqtoolbar->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnFocusInEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_FocusInEvent_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBar_FocusOutEvent(QToolBar* self, QFocusEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->focusOutEvent(event);
    } else {
        vqtoolbar->focusOutEvent(event);
    }
}

// Base class handler implementation
void QToolBar_QBaseFocusOutEvent(QToolBar* self, QFocusEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_FocusOutEvent_IsBase(true);
        vqtoolbar->focusOutEvent(event);
    } else {
        vqtoolbar->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnFocusOutEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_FocusOutEvent_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBar_EnterEvent(QToolBar* self, QEnterEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->enterEvent(event);
    } else {
        vqtoolbar->enterEvent(event);
    }
}

// Base class handler implementation
void QToolBar_QBaseEnterEvent(QToolBar* self, QEnterEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_EnterEvent_IsBase(true);
        vqtoolbar->enterEvent(event);
    } else {
        vqtoolbar->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnEnterEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_EnterEvent_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBar_LeaveEvent(QToolBar* self, QEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->leaveEvent(event);
    } else {
        vqtoolbar->leaveEvent(event);
    }
}

// Base class handler implementation
void QToolBar_QBaseLeaveEvent(QToolBar* self, QEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_LeaveEvent_IsBase(true);
        vqtoolbar->leaveEvent(event);
    } else {
        vqtoolbar->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnLeaveEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_LeaveEvent_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBar_MoveEvent(QToolBar* self, QMoveEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->moveEvent(event);
    } else {
        vqtoolbar->moveEvent(event);
    }
}

// Base class handler implementation
void QToolBar_QBaseMoveEvent(QToolBar* self, QMoveEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_MoveEvent_IsBase(true);
        vqtoolbar->moveEvent(event);
    } else {
        vqtoolbar->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnMoveEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_MoveEvent_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBar_ResizeEvent(QToolBar* self, QResizeEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->resizeEvent(event);
    } else {
        vqtoolbar->resizeEvent(event);
    }
}

// Base class handler implementation
void QToolBar_QBaseResizeEvent(QToolBar* self, QResizeEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_ResizeEvent_IsBase(true);
        vqtoolbar->resizeEvent(event);
    } else {
        vqtoolbar->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnResizeEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_ResizeEvent_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBar_CloseEvent(QToolBar* self, QCloseEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->closeEvent(event);
    } else {
        vqtoolbar->closeEvent(event);
    }
}

// Base class handler implementation
void QToolBar_QBaseCloseEvent(QToolBar* self, QCloseEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_CloseEvent_IsBase(true);
        vqtoolbar->closeEvent(event);
    } else {
        vqtoolbar->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnCloseEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_CloseEvent_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBar_ContextMenuEvent(QToolBar* self, QContextMenuEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->contextMenuEvent(event);
    } else {
        vqtoolbar->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QToolBar_QBaseContextMenuEvent(QToolBar* self, QContextMenuEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_ContextMenuEvent_IsBase(true);
        vqtoolbar->contextMenuEvent(event);
    } else {
        vqtoolbar->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnContextMenuEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_ContextMenuEvent_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBar_TabletEvent(QToolBar* self, QTabletEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->tabletEvent(event);
    } else {
        vqtoolbar->tabletEvent(event);
    }
}

// Base class handler implementation
void QToolBar_QBaseTabletEvent(QToolBar* self, QTabletEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_TabletEvent_IsBase(true);
        vqtoolbar->tabletEvent(event);
    } else {
        vqtoolbar->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnTabletEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_TabletEvent_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBar_DragEnterEvent(QToolBar* self, QDragEnterEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->dragEnterEvent(event);
    } else {
        vqtoolbar->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QToolBar_QBaseDragEnterEvent(QToolBar* self, QDragEnterEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_DragEnterEvent_IsBase(true);
        vqtoolbar->dragEnterEvent(event);
    } else {
        vqtoolbar->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnDragEnterEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_DragEnterEvent_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBar_DragMoveEvent(QToolBar* self, QDragMoveEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->dragMoveEvent(event);
    } else {
        vqtoolbar->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QToolBar_QBaseDragMoveEvent(QToolBar* self, QDragMoveEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_DragMoveEvent_IsBase(true);
        vqtoolbar->dragMoveEvent(event);
    } else {
        vqtoolbar->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnDragMoveEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_DragMoveEvent_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBar_DragLeaveEvent(QToolBar* self, QDragLeaveEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->dragLeaveEvent(event);
    } else {
        vqtoolbar->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QToolBar_QBaseDragLeaveEvent(QToolBar* self, QDragLeaveEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_DragLeaveEvent_IsBase(true);
        vqtoolbar->dragLeaveEvent(event);
    } else {
        vqtoolbar->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnDragLeaveEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_DragLeaveEvent_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBar_DropEvent(QToolBar* self, QDropEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->dropEvent(event);
    } else {
        vqtoolbar->dropEvent(event);
    }
}

// Base class handler implementation
void QToolBar_QBaseDropEvent(QToolBar* self, QDropEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_DropEvent_IsBase(true);
        vqtoolbar->dropEvent(event);
    } else {
        vqtoolbar->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnDropEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_DropEvent_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBar_ShowEvent(QToolBar* self, QShowEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->showEvent(event);
    } else {
        vqtoolbar->showEvent(event);
    }
}

// Base class handler implementation
void QToolBar_QBaseShowEvent(QToolBar* self, QShowEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_ShowEvent_IsBase(true);
        vqtoolbar->showEvent(event);
    } else {
        vqtoolbar->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnShowEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_ShowEvent_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBar_HideEvent(QToolBar* self, QHideEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->hideEvent(event);
    } else {
        vqtoolbar->hideEvent(event);
    }
}

// Base class handler implementation
void QToolBar_QBaseHideEvent(QToolBar* self, QHideEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_HideEvent_IsBase(true);
        vqtoolbar->hideEvent(event);
    } else {
        vqtoolbar->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnHideEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_HideEvent_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QToolBar_NativeEvent(QToolBar* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        return vqtoolbar->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqtoolbar->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QToolBar_QBaseNativeEvent(QToolBar* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_NativeEvent_IsBase(true);
        return vqtoolbar->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqtoolbar->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnNativeEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_NativeEvent_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QToolBar_Metric(const QToolBar* self, int param1) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        return vqtoolbar->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqtoolbar->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QToolBar_QBaseMetric(const QToolBar* self, int param1) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        vqtoolbar->setQToolBar_Metric_IsBase(true);
        return vqtoolbar->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqtoolbar->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnMetric(const QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        vqtoolbar->setQToolBar_Metric_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBar_InitPainter(const QToolBar* self, QPainter* painter) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        vqtoolbar->initPainter(painter);
    } else {
        vqtoolbar->initPainter(painter);
    }
}

// Base class handler implementation
void QToolBar_QBaseInitPainter(const QToolBar* self, QPainter* painter) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        vqtoolbar->setQToolBar_InitPainter_IsBase(true);
        vqtoolbar->initPainter(painter);
    } else {
        vqtoolbar->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnInitPainter(const QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        vqtoolbar->setQToolBar_InitPainter_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QToolBar_Redirected(const QToolBar* self, QPoint* offset) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        return vqtoolbar->redirected(offset);
    } else {
        return vqtoolbar->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QToolBar_QBaseRedirected(const QToolBar* self, QPoint* offset) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        vqtoolbar->setQToolBar_Redirected_IsBase(true);
        return vqtoolbar->redirected(offset);
    } else {
        return vqtoolbar->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnRedirected(const QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        vqtoolbar->setQToolBar_Redirected_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QToolBar_SharedPainter(const QToolBar* self) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        return vqtoolbar->sharedPainter();
    } else {
        return vqtoolbar->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QToolBar_QBaseSharedPainter(const QToolBar* self) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        vqtoolbar->setQToolBar_SharedPainter_IsBase(true);
        return vqtoolbar->sharedPainter();
    } else {
        return vqtoolbar->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnSharedPainter(const QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        vqtoolbar->setQToolBar_SharedPainter_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBar_InputMethodEvent(QToolBar* self, QInputMethodEvent* param1) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->inputMethodEvent(param1);
    } else {
        vqtoolbar->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QToolBar_QBaseInputMethodEvent(QToolBar* self, QInputMethodEvent* param1) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_InputMethodEvent_IsBase(true);
        vqtoolbar->inputMethodEvent(param1);
    } else {
        vqtoolbar->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnInputMethodEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_InputMethodEvent_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QToolBar_InputMethodQuery(const QToolBar* self, int param1) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        return new QVariant(vqtoolbar->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QToolBar_QBaseInputMethodQuery(const QToolBar* self, int param1) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        vqtoolbar->setQToolBar_InputMethodQuery_IsBase(true);
        return new QVariant(vqtoolbar->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnInputMethodQuery(const QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        vqtoolbar->setQToolBar_InputMethodQuery_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QToolBar_FocusNextPrevChild(QToolBar* self, bool next) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        return vqtoolbar->focusNextPrevChild(next);
    } else {
        return vqtoolbar->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QToolBar_QBaseFocusNextPrevChild(QToolBar* self, bool next) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_FocusNextPrevChild_IsBase(true);
        return vqtoolbar->focusNextPrevChild(next);
    } else {
        return vqtoolbar->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnFocusNextPrevChild(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QToolBar_EventFilter(QToolBar* self, QObject* watched, QEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        return vqtoolbar->eventFilter(watched, event);
    } else {
        return vqtoolbar->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QToolBar_QBaseEventFilter(QToolBar* self, QObject* watched, QEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_EventFilter_IsBase(true);
        return vqtoolbar->eventFilter(watched, event);
    } else {
        return vqtoolbar->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnEventFilter(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_EventFilter_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBar_TimerEvent(QToolBar* self, QTimerEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->timerEvent(event);
    } else {
        vqtoolbar->timerEvent(event);
    }
}

// Base class handler implementation
void QToolBar_QBaseTimerEvent(QToolBar* self, QTimerEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_TimerEvent_IsBase(true);
        vqtoolbar->timerEvent(event);
    } else {
        vqtoolbar->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnTimerEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_TimerEvent_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBar_ChildEvent(QToolBar* self, QChildEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->childEvent(event);
    } else {
        vqtoolbar->childEvent(event);
    }
}

// Base class handler implementation
void QToolBar_QBaseChildEvent(QToolBar* self, QChildEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_ChildEvent_IsBase(true);
        vqtoolbar->childEvent(event);
    } else {
        vqtoolbar->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnChildEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_ChildEvent_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBar_CustomEvent(QToolBar* self, QEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->customEvent(event);
    } else {
        vqtoolbar->customEvent(event);
    }
}

// Base class handler implementation
void QToolBar_QBaseCustomEvent(QToolBar* self, QEvent* event) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_CustomEvent_IsBase(true);
        vqtoolbar->customEvent(event);
    } else {
        vqtoolbar->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnCustomEvent(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_CustomEvent_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBar_ConnectNotify(QToolBar* self, QMetaMethod* signal) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->connectNotify(*signal);
    } else {
        vqtoolbar->connectNotify(*signal);
    }
}

// Base class handler implementation
void QToolBar_QBaseConnectNotify(QToolBar* self, QMetaMethod* signal) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_ConnectNotify_IsBase(true);
        vqtoolbar->connectNotify(*signal);
    } else {
        vqtoolbar->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnConnectNotify(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_ConnectNotify_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBar_DisconnectNotify(QToolBar* self, QMetaMethod* signal) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->disconnectNotify(*signal);
    } else {
        vqtoolbar->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QToolBar_QBaseDisconnectNotify(QToolBar* self, QMetaMethod* signal) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_DisconnectNotify_IsBase(true);
        vqtoolbar->disconnectNotify(*signal);
    } else {
        vqtoolbar->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnDisconnectNotify(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_DisconnectNotify_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBar_UpdateMicroFocus(QToolBar* self) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->updateMicroFocus();
    } else {
        vqtoolbar->updateMicroFocus();
    }
}

// Base class handler implementation
void QToolBar_QBaseUpdateMicroFocus(QToolBar* self) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_UpdateMicroFocus_IsBase(true);
        vqtoolbar->updateMicroFocus();
    } else {
        vqtoolbar->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnUpdateMicroFocus(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBar_Create(QToolBar* self) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->create();
    } else {
        vqtoolbar->create();
    }
}

// Base class handler implementation
void QToolBar_QBaseCreate(QToolBar* self) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_Create_IsBase(true);
        vqtoolbar->create();
    } else {
        vqtoolbar->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnCreate(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_Create_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolBar_Destroy(QToolBar* self) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->destroy();
    } else {
        vqtoolbar->destroy();
    }
}

// Base class handler implementation
void QToolBar_QBaseDestroy(QToolBar* self) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_Destroy_IsBase(true);
        vqtoolbar->destroy();
    } else {
        vqtoolbar->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnDestroy(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_Destroy_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QToolBar_FocusNextChild(QToolBar* self) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        return vqtoolbar->focusNextChild();
    } else {
        return vqtoolbar->focusNextChild();
    }
}

// Base class handler implementation
bool QToolBar_QBaseFocusNextChild(QToolBar* self) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_FocusNextChild_IsBase(true);
        return vqtoolbar->focusNextChild();
    } else {
        return vqtoolbar->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnFocusNextChild(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_FocusNextChild_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QToolBar_FocusPreviousChild(QToolBar* self) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        return vqtoolbar->focusPreviousChild();
    } else {
        return vqtoolbar->focusPreviousChild();
    }
}

// Base class handler implementation
bool QToolBar_QBaseFocusPreviousChild(QToolBar* self) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_FocusPreviousChild_IsBase(true);
        return vqtoolbar->focusPreviousChild();
    } else {
        return vqtoolbar->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnFocusPreviousChild(QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = dynamic_cast<VirtualQToolBar*>(self)) {
        vqtoolbar->setQToolBar_FocusPreviousChild_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QToolBar_Sender(const QToolBar* self) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        return vqtoolbar->sender();
    } else {
        return vqtoolbar->sender();
    }
}

// Base class handler implementation
QObject* QToolBar_QBaseSender(const QToolBar* self) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        vqtoolbar->setQToolBar_Sender_IsBase(true);
        return vqtoolbar->sender();
    } else {
        return vqtoolbar->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnSender(const QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        vqtoolbar->setQToolBar_Sender_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QToolBar_SenderSignalIndex(const QToolBar* self) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        return vqtoolbar->senderSignalIndex();
    } else {
        return vqtoolbar->senderSignalIndex();
    }
}

// Base class handler implementation
int QToolBar_QBaseSenderSignalIndex(const QToolBar* self) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        vqtoolbar->setQToolBar_SenderSignalIndex_IsBase(true);
        return vqtoolbar->senderSignalIndex();
    } else {
        return vqtoolbar->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnSenderSignalIndex(const QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        vqtoolbar->setQToolBar_SenderSignalIndex_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QToolBar_Receivers(const QToolBar* self, const char* signal) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        return vqtoolbar->receivers(signal);
    } else {
        return vqtoolbar->receivers(signal);
    }
}

// Base class handler implementation
int QToolBar_QBaseReceivers(const QToolBar* self, const char* signal) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        vqtoolbar->setQToolBar_Receivers_IsBase(true);
        return vqtoolbar->receivers(signal);
    } else {
        return vqtoolbar->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnReceivers(const QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        vqtoolbar->setQToolBar_Receivers_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QToolBar_IsSignalConnected(const QToolBar* self, QMetaMethod* signal) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        return vqtoolbar->isSignalConnected(*signal);
    } else {
        return vqtoolbar->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QToolBar_QBaseIsSignalConnected(const QToolBar* self, QMetaMethod* signal) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        vqtoolbar->setQToolBar_IsSignalConnected_IsBase(true);
        return vqtoolbar->isSignalConnected(*signal);
    } else {
        return vqtoolbar->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolBar_OnIsSignalConnected(const QToolBar* self, intptr_t slot) {
    if (auto* vqtoolbar = const_cast<VirtualQToolBar*>(dynamic_cast<const VirtualQToolBar*>(self))) {
        vqtoolbar->setQToolBar_IsSignalConnected_Callback(reinterpret_cast<VirtualQToolBar::QToolBar_IsSignalConnected_Callback>(slot));
    }
}

void QToolBar_Delete(QToolBar* self) {
    delete self;
}
