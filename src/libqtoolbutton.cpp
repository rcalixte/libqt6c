#include <QAbstractButton>
#include <QAction>
#include <QActionEvent>
#include <QAnyStringView>
#include <QBackingStore>
#include <QBindingStorage>
#include <QBitmap>
#include <QButtonGroup>
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
#include <QMenu>
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
#include <QStyleOptionToolButton>
#include <QTabletEvent>
#include <QThread>
#include <QTimerEvent>
#include <QToolButton>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <QWindow>
#include <qtoolbutton.h>
#include "libqtoolbutton.hpp"
#include "libqtoolbutton.hxx"

QToolButton* QToolButton_new(QWidget* parent) {
    return new VirtualQToolButton(parent);
}

QToolButton* QToolButton_new2() {
    return new VirtualQToolButton();
}

QMetaObject* QToolButton_MetaObject(const QToolButton* self) {
    return (QMetaObject*)self->metaObject();
}

void* QToolButton_Metacast(QToolButton* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QToolButton_Metacall(QToolButton* self, int param1, int param2, void** param3) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QToolButton_OnMetacall(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_Metacall_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QToolButton_QBaseMetacall(QToolButton* self, int param1, int param2, void** param3) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_Metacall_IsBase(true);
        return vqtoolbutton->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QToolButton_Tr(const char* s) {
    QString _ret = QToolButton::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QToolButton_ToolButtonStyle(const QToolButton* self) {
    return static_cast<int>(self->toolButtonStyle());
}

int QToolButton_ArrowType(const QToolButton* self) {
    return static_cast<int>(self->arrowType());
}

void QToolButton_SetArrowType(QToolButton* self, int typeVal) {
    self->setArrowType(static_cast<Qt::ArrowType>(typeVal));
}

void QToolButton_SetMenu(QToolButton* self, QMenu* menu) {
    self->setMenu(menu);
}

QMenu* QToolButton_Menu(const QToolButton* self) {
    return self->menu();
}

void QToolButton_SetPopupMode(QToolButton* self, int mode) {
    self->setPopupMode(static_cast<QToolButton::ToolButtonPopupMode>(mode));
}

int QToolButton_PopupMode(const QToolButton* self) {
    return static_cast<int>(self->popupMode());
}

QAction* QToolButton_DefaultAction(const QToolButton* self) {
    return self->defaultAction();
}

void QToolButton_SetAutoRaise(QToolButton* self, bool enable) {
    self->setAutoRaise(enable);
}

bool QToolButton_AutoRaise(const QToolButton* self) {
    return self->autoRaise();
}

void QToolButton_ShowMenu(QToolButton* self) {
    self->showMenu();
}

void QToolButton_SetToolButtonStyle(QToolButton* self, int style) {
    self->setToolButtonStyle(static_cast<Qt::ToolButtonStyle>(style));
}

void QToolButton_SetDefaultAction(QToolButton* self, QAction* defaultAction) {
    self->setDefaultAction(defaultAction);
}

void QToolButton_Triggered(QToolButton* self, QAction* param1) {
    self->triggered(param1);
}

void QToolButton_Connect_Triggered(QToolButton* self, intptr_t slot) {
    void (*slotFunc)(QToolButton*, QAction*) = reinterpret_cast<void (*)(QToolButton*, QAction*)>(slot);
    QToolButton::connect(self, &QToolButton::triggered, [self, slotFunc](QAction* param1) {
        QAction* sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

libqt_string QToolButton_Tr2(const char* s, const char* c) {
    QString _ret = QToolButton::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QToolButton_Tr3(const char* s, const char* c, int n) {
    QString _ret = QToolButton::tr(s, c, static_cast<int>(n));
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
QSize* QToolButton_SizeHint(const QToolButton* self) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        return new QSize(vqtoolbutton->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QToolButton_QBaseSizeHint(const QToolButton* self) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        vqtoolbutton->setQToolButton_SizeHint_IsBase(true);
        return new QSize(vqtoolbutton->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnSizeHint(const QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        vqtoolbutton->setQToolButton_SizeHint_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QToolButton_MinimumSizeHint(const QToolButton* self) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        return new QSize(vqtoolbutton->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QToolButton_QBaseMinimumSizeHint(const QToolButton* self) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        vqtoolbutton->setQToolButton_MinimumSizeHint_IsBase(true);
        return new QSize(vqtoolbutton->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnMinimumSizeHint(const QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        vqtoolbutton->setQToolButton_MinimumSizeHint_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
bool QToolButton_Event(QToolButton* self, QEvent* e) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        return vqtoolbutton->event(e);
    } else {
        return vqtoolbutton->event(e);
    }
}

// Base class handler implementation
bool QToolButton_QBaseEvent(QToolButton* self, QEvent* e) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_Event_IsBase(true);
        return vqtoolbutton->event(e);
    } else {
        return vqtoolbutton->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_Event_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolButton_MousePressEvent(QToolButton* self, QMouseEvent* param1) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->mousePressEvent(param1);
    } else {
        vqtoolbutton->mousePressEvent(param1);
    }
}

// Base class handler implementation
void QToolButton_QBaseMousePressEvent(QToolButton* self, QMouseEvent* param1) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_MousePressEvent_IsBase(true);
        vqtoolbutton->mousePressEvent(param1);
    } else {
        vqtoolbutton->mousePressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnMousePressEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_MousePressEvent_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolButton_MouseReleaseEvent(QToolButton* self, QMouseEvent* param1) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->mouseReleaseEvent(param1);
    } else {
        vqtoolbutton->mouseReleaseEvent(param1);
    }
}

// Base class handler implementation
void QToolButton_QBaseMouseReleaseEvent(QToolButton* self, QMouseEvent* param1) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_MouseReleaseEvent_IsBase(true);
        vqtoolbutton->mouseReleaseEvent(param1);
    } else {
        vqtoolbutton->mouseReleaseEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnMouseReleaseEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolButton_PaintEvent(QToolButton* self, QPaintEvent* param1) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->paintEvent(param1);
    } else {
        vqtoolbutton->paintEvent(param1);
    }
}

// Base class handler implementation
void QToolButton_QBasePaintEvent(QToolButton* self, QPaintEvent* param1) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_PaintEvent_IsBase(true);
        vqtoolbutton->paintEvent(param1);
    } else {
        vqtoolbutton->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnPaintEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_PaintEvent_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolButton_ActionEvent(QToolButton* self, QActionEvent* param1) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->actionEvent(param1);
    } else {
        vqtoolbutton->actionEvent(param1);
    }
}

// Base class handler implementation
void QToolButton_QBaseActionEvent(QToolButton* self, QActionEvent* param1) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_ActionEvent_IsBase(true);
        vqtoolbutton->actionEvent(param1);
    } else {
        vqtoolbutton->actionEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnActionEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_ActionEvent_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolButton_EnterEvent(QToolButton* self, QEnterEvent* param1) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->enterEvent(param1);
    } else {
        vqtoolbutton->enterEvent(param1);
    }
}

// Base class handler implementation
void QToolButton_QBaseEnterEvent(QToolButton* self, QEnterEvent* param1) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_EnterEvent_IsBase(true);
        vqtoolbutton->enterEvent(param1);
    } else {
        vqtoolbutton->enterEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnEnterEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_EnterEvent_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolButton_LeaveEvent(QToolButton* self, QEvent* param1) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->leaveEvent(param1);
    } else {
        vqtoolbutton->leaveEvent(param1);
    }
}

// Base class handler implementation
void QToolButton_QBaseLeaveEvent(QToolButton* self, QEvent* param1) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_LeaveEvent_IsBase(true);
        vqtoolbutton->leaveEvent(param1);
    } else {
        vqtoolbutton->leaveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnLeaveEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_LeaveEvent_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolButton_TimerEvent(QToolButton* self, QTimerEvent* param1) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->timerEvent(param1);
    } else {
        vqtoolbutton->timerEvent(param1);
    }
}

// Base class handler implementation
void QToolButton_QBaseTimerEvent(QToolButton* self, QTimerEvent* param1) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_TimerEvent_IsBase(true);
        vqtoolbutton->timerEvent(param1);
    } else {
        vqtoolbutton->timerEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnTimerEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_TimerEvent_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolButton_ChangeEvent(QToolButton* self, QEvent* param1) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->changeEvent(param1);
    } else {
        vqtoolbutton->changeEvent(param1);
    }
}

// Base class handler implementation
void QToolButton_QBaseChangeEvent(QToolButton* self, QEvent* param1) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_ChangeEvent_IsBase(true);
        vqtoolbutton->changeEvent(param1);
    } else {
        vqtoolbutton->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnChangeEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_ChangeEvent_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QToolButton_HitButton(const QToolButton* self, QPoint* pos) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        return vqtoolbutton->hitButton(*pos);
    } else {
        return vqtoolbutton->hitButton(*pos);
    }
}

// Base class handler implementation
bool QToolButton_QBaseHitButton(const QToolButton* self, QPoint* pos) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        vqtoolbutton->setQToolButton_HitButton_IsBase(true);
        return vqtoolbutton->hitButton(*pos);
    } else {
        return vqtoolbutton->hitButton(*pos);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnHitButton(const QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        vqtoolbutton->setQToolButton_HitButton_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_HitButton_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolButton_CheckStateSet(QToolButton* self) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->checkStateSet();
    } else {
        vqtoolbutton->checkStateSet();
    }
}

// Base class handler implementation
void QToolButton_QBaseCheckStateSet(QToolButton* self) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_CheckStateSet_IsBase(true);
        vqtoolbutton->checkStateSet();
    } else {
        vqtoolbutton->checkStateSet();
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnCheckStateSet(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_CheckStateSet_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_CheckStateSet_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolButton_NextCheckState(QToolButton* self) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->nextCheckState();
    } else {
        vqtoolbutton->nextCheckState();
    }
}

// Base class handler implementation
void QToolButton_QBaseNextCheckState(QToolButton* self) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_NextCheckState_IsBase(true);
        vqtoolbutton->nextCheckState();
    } else {
        vqtoolbutton->nextCheckState();
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnNextCheckState(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_NextCheckState_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_NextCheckState_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolButton_InitStyleOption(const QToolButton* self, QStyleOptionToolButton* option) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        vqtoolbutton->initStyleOption(option);
    } else {
        vqtoolbutton->initStyleOption(option);
    }
}

// Base class handler implementation
void QToolButton_QBaseInitStyleOption(const QToolButton* self, QStyleOptionToolButton* option) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        vqtoolbutton->setQToolButton_InitStyleOption_IsBase(true);
        vqtoolbutton->initStyleOption(option);
    } else {
        vqtoolbutton->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnInitStyleOption(const QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        vqtoolbutton->setQToolButton_InitStyleOption_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolButton_KeyPressEvent(QToolButton* self, QKeyEvent* e) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->keyPressEvent(e);
    } else {
        vqtoolbutton->keyPressEvent(e);
    }
}

// Base class handler implementation
void QToolButton_QBaseKeyPressEvent(QToolButton* self, QKeyEvent* e) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_KeyPressEvent_IsBase(true);
        vqtoolbutton->keyPressEvent(e);
    } else {
        vqtoolbutton->keyPressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnKeyPressEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_KeyPressEvent_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolButton_KeyReleaseEvent(QToolButton* self, QKeyEvent* e) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->keyReleaseEvent(e);
    } else {
        vqtoolbutton->keyReleaseEvent(e);
    }
}

// Base class handler implementation
void QToolButton_QBaseKeyReleaseEvent(QToolButton* self, QKeyEvent* e) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_KeyReleaseEvent_IsBase(true);
        vqtoolbutton->keyReleaseEvent(e);
    } else {
        vqtoolbutton->keyReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnKeyReleaseEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolButton_MouseMoveEvent(QToolButton* self, QMouseEvent* e) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->mouseMoveEvent(e);
    } else {
        vqtoolbutton->mouseMoveEvent(e);
    }
}

// Base class handler implementation
void QToolButton_QBaseMouseMoveEvent(QToolButton* self, QMouseEvent* e) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_MouseMoveEvent_IsBase(true);
        vqtoolbutton->mouseMoveEvent(e);
    } else {
        vqtoolbutton->mouseMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnMouseMoveEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_MouseMoveEvent_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolButton_FocusInEvent(QToolButton* self, QFocusEvent* e) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->focusInEvent(e);
    } else {
        vqtoolbutton->focusInEvent(e);
    }
}

// Base class handler implementation
void QToolButton_QBaseFocusInEvent(QToolButton* self, QFocusEvent* e) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_FocusInEvent_IsBase(true);
        vqtoolbutton->focusInEvent(e);
    } else {
        vqtoolbutton->focusInEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnFocusInEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_FocusInEvent_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolButton_FocusOutEvent(QToolButton* self, QFocusEvent* e) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->focusOutEvent(e);
    } else {
        vqtoolbutton->focusOutEvent(e);
    }
}

// Base class handler implementation
void QToolButton_QBaseFocusOutEvent(QToolButton* self, QFocusEvent* e) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_FocusOutEvent_IsBase(true);
        vqtoolbutton->focusOutEvent(e);
    } else {
        vqtoolbutton->focusOutEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnFocusOutEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_FocusOutEvent_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QToolButton_DevType(const QToolButton* self) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        return vqtoolbutton->devType();
    } else {
        return vqtoolbutton->devType();
    }
}

// Base class handler implementation
int QToolButton_QBaseDevType(const QToolButton* self) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        vqtoolbutton->setQToolButton_DevType_IsBase(true);
        return vqtoolbutton->devType();
    } else {
        return vqtoolbutton->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnDevType(const QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        vqtoolbutton->setQToolButton_DevType_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolButton_SetVisible(QToolButton* self, bool visible) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setVisible(visible);
    } else {
        vqtoolbutton->setVisible(visible);
    }
}

// Base class handler implementation
void QToolButton_QBaseSetVisible(QToolButton* self, bool visible) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_SetVisible_IsBase(true);
        vqtoolbutton->setVisible(visible);
    } else {
        vqtoolbutton->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnSetVisible(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_SetVisible_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QToolButton_HeightForWidth(const QToolButton* self, int param1) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        return vqtoolbutton->heightForWidth(static_cast<int>(param1));
    } else {
        return vqtoolbutton->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QToolButton_QBaseHeightForWidth(const QToolButton* self, int param1) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        vqtoolbutton->setQToolButton_HeightForWidth_IsBase(true);
        return vqtoolbutton->heightForWidth(static_cast<int>(param1));
    } else {
        return vqtoolbutton->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnHeightForWidth(const QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        vqtoolbutton->setQToolButton_HeightForWidth_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QToolButton_HasHeightForWidth(const QToolButton* self) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        return vqtoolbutton->hasHeightForWidth();
    } else {
        return vqtoolbutton->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QToolButton_QBaseHasHeightForWidth(const QToolButton* self) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        vqtoolbutton->setQToolButton_HasHeightForWidth_IsBase(true);
        return vqtoolbutton->hasHeightForWidth();
    } else {
        return vqtoolbutton->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnHasHeightForWidth(const QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        vqtoolbutton->setQToolButton_HasHeightForWidth_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QToolButton_PaintEngine(const QToolButton* self) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        return vqtoolbutton->paintEngine();
    } else {
        return vqtoolbutton->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QToolButton_QBasePaintEngine(const QToolButton* self) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        vqtoolbutton->setQToolButton_PaintEngine_IsBase(true);
        return vqtoolbutton->paintEngine();
    } else {
        return vqtoolbutton->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnPaintEngine(const QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        vqtoolbutton->setQToolButton_PaintEngine_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolButton_MouseDoubleClickEvent(QToolButton* self, QMouseEvent* event) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->mouseDoubleClickEvent(event);
    } else {
        vqtoolbutton->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QToolButton_QBaseMouseDoubleClickEvent(QToolButton* self, QMouseEvent* event) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_MouseDoubleClickEvent_IsBase(true);
        vqtoolbutton->mouseDoubleClickEvent(event);
    } else {
        vqtoolbutton->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnMouseDoubleClickEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolButton_WheelEvent(QToolButton* self, QWheelEvent* event) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->wheelEvent(event);
    } else {
        vqtoolbutton->wheelEvent(event);
    }
}

// Base class handler implementation
void QToolButton_QBaseWheelEvent(QToolButton* self, QWheelEvent* event) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_WheelEvent_IsBase(true);
        vqtoolbutton->wheelEvent(event);
    } else {
        vqtoolbutton->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnWheelEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_WheelEvent_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolButton_MoveEvent(QToolButton* self, QMoveEvent* event) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->moveEvent(event);
    } else {
        vqtoolbutton->moveEvent(event);
    }
}

// Base class handler implementation
void QToolButton_QBaseMoveEvent(QToolButton* self, QMoveEvent* event) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_MoveEvent_IsBase(true);
        vqtoolbutton->moveEvent(event);
    } else {
        vqtoolbutton->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnMoveEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_MoveEvent_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolButton_ResizeEvent(QToolButton* self, QResizeEvent* event) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->resizeEvent(event);
    } else {
        vqtoolbutton->resizeEvent(event);
    }
}

// Base class handler implementation
void QToolButton_QBaseResizeEvent(QToolButton* self, QResizeEvent* event) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_ResizeEvent_IsBase(true);
        vqtoolbutton->resizeEvent(event);
    } else {
        vqtoolbutton->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnResizeEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_ResizeEvent_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolButton_CloseEvent(QToolButton* self, QCloseEvent* event) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->closeEvent(event);
    } else {
        vqtoolbutton->closeEvent(event);
    }
}

// Base class handler implementation
void QToolButton_QBaseCloseEvent(QToolButton* self, QCloseEvent* event) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_CloseEvent_IsBase(true);
        vqtoolbutton->closeEvent(event);
    } else {
        vqtoolbutton->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnCloseEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_CloseEvent_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolButton_ContextMenuEvent(QToolButton* self, QContextMenuEvent* event) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->contextMenuEvent(event);
    } else {
        vqtoolbutton->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QToolButton_QBaseContextMenuEvent(QToolButton* self, QContextMenuEvent* event) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_ContextMenuEvent_IsBase(true);
        vqtoolbutton->contextMenuEvent(event);
    } else {
        vqtoolbutton->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnContextMenuEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_ContextMenuEvent_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolButton_TabletEvent(QToolButton* self, QTabletEvent* event) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->tabletEvent(event);
    } else {
        vqtoolbutton->tabletEvent(event);
    }
}

// Base class handler implementation
void QToolButton_QBaseTabletEvent(QToolButton* self, QTabletEvent* event) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_TabletEvent_IsBase(true);
        vqtoolbutton->tabletEvent(event);
    } else {
        vqtoolbutton->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnTabletEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_TabletEvent_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolButton_DragEnterEvent(QToolButton* self, QDragEnterEvent* event) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->dragEnterEvent(event);
    } else {
        vqtoolbutton->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QToolButton_QBaseDragEnterEvent(QToolButton* self, QDragEnterEvent* event) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_DragEnterEvent_IsBase(true);
        vqtoolbutton->dragEnterEvent(event);
    } else {
        vqtoolbutton->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnDragEnterEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_DragEnterEvent_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolButton_DragMoveEvent(QToolButton* self, QDragMoveEvent* event) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->dragMoveEvent(event);
    } else {
        vqtoolbutton->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QToolButton_QBaseDragMoveEvent(QToolButton* self, QDragMoveEvent* event) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_DragMoveEvent_IsBase(true);
        vqtoolbutton->dragMoveEvent(event);
    } else {
        vqtoolbutton->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnDragMoveEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_DragMoveEvent_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolButton_DragLeaveEvent(QToolButton* self, QDragLeaveEvent* event) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->dragLeaveEvent(event);
    } else {
        vqtoolbutton->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QToolButton_QBaseDragLeaveEvent(QToolButton* self, QDragLeaveEvent* event) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_DragLeaveEvent_IsBase(true);
        vqtoolbutton->dragLeaveEvent(event);
    } else {
        vqtoolbutton->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnDragLeaveEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_DragLeaveEvent_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolButton_DropEvent(QToolButton* self, QDropEvent* event) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->dropEvent(event);
    } else {
        vqtoolbutton->dropEvent(event);
    }
}

// Base class handler implementation
void QToolButton_QBaseDropEvent(QToolButton* self, QDropEvent* event) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_DropEvent_IsBase(true);
        vqtoolbutton->dropEvent(event);
    } else {
        vqtoolbutton->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnDropEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_DropEvent_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolButton_ShowEvent(QToolButton* self, QShowEvent* event) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->showEvent(event);
    } else {
        vqtoolbutton->showEvent(event);
    }
}

// Base class handler implementation
void QToolButton_QBaseShowEvent(QToolButton* self, QShowEvent* event) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_ShowEvent_IsBase(true);
        vqtoolbutton->showEvent(event);
    } else {
        vqtoolbutton->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnShowEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_ShowEvent_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolButton_HideEvent(QToolButton* self, QHideEvent* event) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->hideEvent(event);
    } else {
        vqtoolbutton->hideEvent(event);
    }
}

// Base class handler implementation
void QToolButton_QBaseHideEvent(QToolButton* self, QHideEvent* event) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_HideEvent_IsBase(true);
        vqtoolbutton->hideEvent(event);
    } else {
        vqtoolbutton->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnHideEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_HideEvent_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QToolButton_NativeEvent(QToolButton* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        return vqtoolbutton->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqtoolbutton->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QToolButton_QBaseNativeEvent(QToolButton* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_NativeEvent_IsBase(true);
        return vqtoolbutton->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqtoolbutton->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnNativeEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_NativeEvent_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QToolButton_Metric(const QToolButton* self, int param1) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        return vqtoolbutton->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqtoolbutton->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QToolButton_QBaseMetric(const QToolButton* self, int param1) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        vqtoolbutton->setQToolButton_Metric_IsBase(true);
        return vqtoolbutton->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqtoolbutton->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnMetric(const QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        vqtoolbutton->setQToolButton_Metric_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolButton_InitPainter(const QToolButton* self, QPainter* painter) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        vqtoolbutton->initPainter(painter);
    } else {
        vqtoolbutton->initPainter(painter);
    }
}

// Base class handler implementation
void QToolButton_QBaseInitPainter(const QToolButton* self, QPainter* painter) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        vqtoolbutton->setQToolButton_InitPainter_IsBase(true);
        vqtoolbutton->initPainter(painter);
    } else {
        vqtoolbutton->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnInitPainter(const QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        vqtoolbutton->setQToolButton_InitPainter_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QToolButton_Redirected(const QToolButton* self, QPoint* offset) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        return vqtoolbutton->redirected(offset);
    } else {
        return vqtoolbutton->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QToolButton_QBaseRedirected(const QToolButton* self, QPoint* offset) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        vqtoolbutton->setQToolButton_Redirected_IsBase(true);
        return vqtoolbutton->redirected(offset);
    } else {
        return vqtoolbutton->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnRedirected(const QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        vqtoolbutton->setQToolButton_Redirected_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QToolButton_SharedPainter(const QToolButton* self) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        return vqtoolbutton->sharedPainter();
    } else {
        return vqtoolbutton->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QToolButton_QBaseSharedPainter(const QToolButton* self) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        vqtoolbutton->setQToolButton_SharedPainter_IsBase(true);
        return vqtoolbutton->sharedPainter();
    } else {
        return vqtoolbutton->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnSharedPainter(const QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        vqtoolbutton->setQToolButton_SharedPainter_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolButton_InputMethodEvent(QToolButton* self, QInputMethodEvent* param1) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->inputMethodEvent(param1);
    } else {
        vqtoolbutton->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QToolButton_QBaseInputMethodEvent(QToolButton* self, QInputMethodEvent* param1) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_InputMethodEvent_IsBase(true);
        vqtoolbutton->inputMethodEvent(param1);
    } else {
        vqtoolbutton->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnInputMethodEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_InputMethodEvent_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QToolButton_InputMethodQuery(const QToolButton* self, int param1) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        return new QVariant(vqtoolbutton->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QToolButton_QBaseInputMethodQuery(const QToolButton* self, int param1) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        vqtoolbutton->setQToolButton_InputMethodQuery_IsBase(true);
        return new QVariant(vqtoolbutton->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnInputMethodQuery(const QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        vqtoolbutton->setQToolButton_InputMethodQuery_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QToolButton_FocusNextPrevChild(QToolButton* self, bool next) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        return vqtoolbutton->focusNextPrevChild(next);
    } else {
        return vqtoolbutton->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QToolButton_QBaseFocusNextPrevChild(QToolButton* self, bool next) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_FocusNextPrevChild_IsBase(true);
        return vqtoolbutton->focusNextPrevChild(next);
    } else {
        return vqtoolbutton->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnFocusNextPrevChild(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QToolButton_EventFilter(QToolButton* self, QObject* watched, QEvent* event) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        return vqtoolbutton->eventFilter(watched, event);
    } else {
        return vqtoolbutton->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QToolButton_QBaseEventFilter(QToolButton* self, QObject* watched, QEvent* event) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_EventFilter_IsBase(true);
        return vqtoolbutton->eventFilter(watched, event);
    } else {
        return vqtoolbutton->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnEventFilter(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_EventFilter_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolButton_ChildEvent(QToolButton* self, QChildEvent* event) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->childEvent(event);
    } else {
        vqtoolbutton->childEvent(event);
    }
}

// Base class handler implementation
void QToolButton_QBaseChildEvent(QToolButton* self, QChildEvent* event) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_ChildEvent_IsBase(true);
        vqtoolbutton->childEvent(event);
    } else {
        vqtoolbutton->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnChildEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_ChildEvent_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolButton_CustomEvent(QToolButton* self, QEvent* event) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->customEvent(event);
    } else {
        vqtoolbutton->customEvent(event);
    }
}

// Base class handler implementation
void QToolButton_QBaseCustomEvent(QToolButton* self, QEvent* event) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_CustomEvent_IsBase(true);
        vqtoolbutton->customEvent(event);
    } else {
        vqtoolbutton->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnCustomEvent(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_CustomEvent_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolButton_ConnectNotify(QToolButton* self, QMetaMethod* signal) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->connectNotify(*signal);
    } else {
        vqtoolbutton->connectNotify(*signal);
    }
}

// Base class handler implementation
void QToolButton_QBaseConnectNotify(QToolButton* self, QMetaMethod* signal) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_ConnectNotify_IsBase(true);
        vqtoolbutton->connectNotify(*signal);
    } else {
        vqtoolbutton->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnConnectNotify(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_ConnectNotify_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolButton_DisconnectNotify(QToolButton* self, QMetaMethod* signal) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->disconnectNotify(*signal);
    } else {
        vqtoolbutton->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QToolButton_QBaseDisconnectNotify(QToolButton* self, QMetaMethod* signal) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_DisconnectNotify_IsBase(true);
        vqtoolbutton->disconnectNotify(*signal);
    } else {
        vqtoolbutton->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnDisconnectNotify(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_DisconnectNotify_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolButton_UpdateMicroFocus(QToolButton* self) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->updateMicroFocus();
    } else {
        vqtoolbutton->updateMicroFocus();
    }
}

// Base class handler implementation
void QToolButton_QBaseUpdateMicroFocus(QToolButton* self) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_UpdateMicroFocus_IsBase(true);
        vqtoolbutton->updateMicroFocus();
    } else {
        vqtoolbutton->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnUpdateMicroFocus(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolButton_Create(QToolButton* self) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->create();
    } else {
        vqtoolbutton->create();
    }
}

// Base class handler implementation
void QToolButton_QBaseCreate(QToolButton* self) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_Create_IsBase(true);
        vqtoolbutton->create();
    } else {
        vqtoolbutton->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnCreate(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_Create_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QToolButton_Destroy(QToolButton* self) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->destroy();
    } else {
        vqtoolbutton->destroy();
    }
}

// Base class handler implementation
void QToolButton_QBaseDestroy(QToolButton* self) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_Destroy_IsBase(true);
        vqtoolbutton->destroy();
    } else {
        vqtoolbutton->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnDestroy(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_Destroy_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QToolButton_FocusNextChild(QToolButton* self) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        return vqtoolbutton->focusNextChild();
    } else {
        return vqtoolbutton->focusNextChild();
    }
}

// Base class handler implementation
bool QToolButton_QBaseFocusNextChild(QToolButton* self) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_FocusNextChild_IsBase(true);
        return vqtoolbutton->focusNextChild();
    } else {
        return vqtoolbutton->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnFocusNextChild(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_FocusNextChild_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QToolButton_FocusPreviousChild(QToolButton* self) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        return vqtoolbutton->focusPreviousChild();
    } else {
        return vqtoolbutton->focusPreviousChild();
    }
}

// Base class handler implementation
bool QToolButton_QBaseFocusPreviousChild(QToolButton* self) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_FocusPreviousChild_IsBase(true);
        return vqtoolbutton->focusPreviousChild();
    } else {
        return vqtoolbutton->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnFocusPreviousChild(QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = dynamic_cast<VirtualQToolButton*>(self)) {
        vqtoolbutton->setQToolButton_FocusPreviousChild_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QToolButton_Sender(const QToolButton* self) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        return vqtoolbutton->sender();
    } else {
        return vqtoolbutton->sender();
    }
}

// Base class handler implementation
QObject* QToolButton_QBaseSender(const QToolButton* self) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        vqtoolbutton->setQToolButton_Sender_IsBase(true);
        return vqtoolbutton->sender();
    } else {
        return vqtoolbutton->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnSender(const QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        vqtoolbutton->setQToolButton_Sender_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QToolButton_SenderSignalIndex(const QToolButton* self) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        return vqtoolbutton->senderSignalIndex();
    } else {
        return vqtoolbutton->senderSignalIndex();
    }
}

// Base class handler implementation
int QToolButton_QBaseSenderSignalIndex(const QToolButton* self) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        vqtoolbutton->setQToolButton_SenderSignalIndex_IsBase(true);
        return vqtoolbutton->senderSignalIndex();
    } else {
        return vqtoolbutton->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnSenderSignalIndex(const QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        vqtoolbutton->setQToolButton_SenderSignalIndex_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QToolButton_Receivers(const QToolButton* self, const char* signal) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        return vqtoolbutton->receivers(signal);
    } else {
        return vqtoolbutton->receivers(signal);
    }
}

// Base class handler implementation
int QToolButton_QBaseReceivers(const QToolButton* self, const char* signal) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        vqtoolbutton->setQToolButton_Receivers_IsBase(true);
        return vqtoolbutton->receivers(signal);
    } else {
        return vqtoolbutton->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnReceivers(const QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        vqtoolbutton->setQToolButton_Receivers_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QToolButton_IsSignalConnected(const QToolButton* self, QMetaMethod* signal) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        return vqtoolbutton->isSignalConnected(*signal);
    } else {
        return vqtoolbutton->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QToolButton_QBaseIsSignalConnected(const QToolButton* self, QMetaMethod* signal) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        vqtoolbutton->setQToolButton_IsSignalConnected_IsBase(true);
        return vqtoolbutton->isSignalConnected(*signal);
    } else {
        return vqtoolbutton->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QToolButton_OnIsSignalConnected(const QToolButton* self, intptr_t slot) {
    if (auto* vqtoolbutton = const_cast<VirtualQToolButton*>(dynamic_cast<const VirtualQToolButton*>(self))) {
        vqtoolbutton->setQToolButton_IsSignalConnected_Callback(reinterpret_cast<VirtualQToolButton::QToolButton_IsSignalConnected_Callback>(slot));
    }
}

void QToolButton_Delete(QToolButton* self) {
    delete self;
}
