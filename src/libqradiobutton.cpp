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
#include <QRadioButton>
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
#include <QStyleOptionButton>
#include <QTabletEvent>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <QWindow>
#include <qradiobutton.h>
#include "libqradiobutton.hpp"
#include "libqradiobutton.hxx"

QRadioButton* QRadioButton_new(QWidget* parent) {
    return new VirtualQRadioButton(parent);
}

QRadioButton* QRadioButton_new2() {
    return new VirtualQRadioButton();
}

QRadioButton* QRadioButton_new3(libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQRadioButton(text_QString);
}

QRadioButton* QRadioButton_new4(libqt_string text, QWidget* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQRadioButton(text_QString, parent);
}

QMetaObject* QRadioButton_MetaObject(const QRadioButton* self) {
    return (QMetaObject*)self->metaObject();
}

void* QRadioButton_Metacast(QRadioButton* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QRadioButton_Metacall(QRadioButton* self, int param1, int param2, void** param3) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QRadioButton_OnMetacall(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_Metacall_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QRadioButton_QBaseMetacall(QRadioButton* self, int param1, int param2, void** param3) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_Metacall_IsBase(true);
        return vqradiobutton->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QRadioButton_Tr(const char* s) {
    QString _ret = QRadioButton::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QRadioButton_Tr2(const char* s, const char* c) {
    QString _ret = QRadioButton::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QRadioButton_Tr3(const char* s, const char* c, int n) {
    QString _ret = QRadioButton::tr(s, c, static_cast<int>(n));
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
QSize* QRadioButton_SizeHint(const QRadioButton* self) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        return new QSize(vqradiobutton->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QRadioButton_QBaseSizeHint(const QRadioButton* self) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        vqradiobutton->setQRadioButton_SizeHint_IsBase(true);
        return new QSize(vqradiobutton->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnSizeHint(const QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        vqradiobutton->setQRadioButton_SizeHint_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QRadioButton_MinimumSizeHint(const QRadioButton* self) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        return new QSize(vqradiobutton->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QRadioButton_QBaseMinimumSizeHint(const QRadioButton* self) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        vqradiobutton->setQRadioButton_MinimumSizeHint_IsBase(true);
        return new QSize(vqradiobutton->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnMinimumSizeHint(const QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        vqradiobutton->setQRadioButton_MinimumSizeHint_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
bool QRadioButton_Event(QRadioButton* self, QEvent* e) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        return vqradiobutton->event(e);
    } else {
        return vqradiobutton->event(e);
    }
}

// Base class handler implementation
bool QRadioButton_QBaseEvent(QRadioButton* self, QEvent* e) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_Event_IsBase(true);
        return vqradiobutton->event(e);
    } else {
        return vqradiobutton->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_Event_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QRadioButton_HitButton(const QRadioButton* self, QPoint* param1) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        return vqradiobutton->hitButton(*param1);
    } else {
        return vqradiobutton->hitButton(*param1);
    }
}

// Base class handler implementation
bool QRadioButton_QBaseHitButton(const QRadioButton* self, QPoint* param1) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        vqradiobutton->setQRadioButton_HitButton_IsBase(true);
        return vqradiobutton->hitButton(*param1);
    } else {
        return vqradiobutton->hitButton(*param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnHitButton(const QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        vqradiobutton->setQRadioButton_HitButton_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_HitButton_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_PaintEvent(QRadioButton* self, QPaintEvent* param1) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->paintEvent(param1);
    } else {
        vqradiobutton->paintEvent(param1);
    }
}

// Base class handler implementation
void QRadioButton_QBasePaintEvent(QRadioButton* self, QPaintEvent* param1) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_PaintEvent_IsBase(true);
        vqradiobutton->paintEvent(param1);
    } else {
        vqradiobutton->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnPaintEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_PaintEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_MouseMoveEvent(QRadioButton* self, QMouseEvent* param1) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->mouseMoveEvent(param1);
    } else {
        vqradiobutton->mouseMoveEvent(param1);
    }
}

// Base class handler implementation
void QRadioButton_QBaseMouseMoveEvent(QRadioButton* self, QMouseEvent* param1) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_MouseMoveEvent_IsBase(true);
        vqradiobutton->mouseMoveEvent(param1);
    } else {
        vqradiobutton->mouseMoveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnMouseMoveEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_MouseMoveEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_InitStyleOption(const QRadioButton* self, QStyleOptionButton* button) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        vqradiobutton->initStyleOption(button);
    } else {
        vqradiobutton->initStyleOption(button);
    }
}

// Base class handler implementation
void QRadioButton_QBaseInitStyleOption(const QRadioButton* self, QStyleOptionButton* button) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        vqradiobutton->setQRadioButton_InitStyleOption_IsBase(true);
        vqradiobutton->initStyleOption(button);
    } else {
        vqradiobutton->initStyleOption(button);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnInitStyleOption(const QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        vqradiobutton->setQRadioButton_InitStyleOption_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_CheckStateSet(QRadioButton* self) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->checkStateSet();
    } else {
        vqradiobutton->checkStateSet();
    }
}

// Base class handler implementation
void QRadioButton_QBaseCheckStateSet(QRadioButton* self) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_CheckStateSet_IsBase(true);
        vqradiobutton->checkStateSet();
    } else {
        vqradiobutton->checkStateSet();
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnCheckStateSet(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_CheckStateSet_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_CheckStateSet_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_NextCheckState(QRadioButton* self) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->nextCheckState();
    } else {
        vqradiobutton->nextCheckState();
    }
}

// Base class handler implementation
void QRadioButton_QBaseNextCheckState(QRadioButton* self) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_NextCheckState_IsBase(true);
        vqradiobutton->nextCheckState();
    } else {
        vqradiobutton->nextCheckState();
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnNextCheckState(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_NextCheckState_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_NextCheckState_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_KeyPressEvent(QRadioButton* self, QKeyEvent* e) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->keyPressEvent(e);
    } else {
        vqradiobutton->keyPressEvent(e);
    }
}

// Base class handler implementation
void QRadioButton_QBaseKeyPressEvent(QRadioButton* self, QKeyEvent* e) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_KeyPressEvent_IsBase(true);
        vqradiobutton->keyPressEvent(e);
    } else {
        vqradiobutton->keyPressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnKeyPressEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_KeyPressEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_KeyReleaseEvent(QRadioButton* self, QKeyEvent* e) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->keyReleaseEvent(e);
    } else {
        vqradiobutton->keyReleaseEvent(e);
    }
}

// Base class handler implementation
void QRadioButton_QBaseKeyReleaseEvent(QRadioButton* self, QKeyEvent* e) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_KeyReleaseEvent_IsBase(true);
        vqradiobutton->keyReleaseEvent(e);
    } else {
        vqradiobutton->keyReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnKeyReleaseEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_MousePressEvent(QRadioButton* self, QMouseEvent* e) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->mousePressEvent(e);
    } else {
        vqradiobutton->mousePressEvent(e);
    }
}

// Base class handler implementation
void QRadioButton_QBaseMousePressEvent(QRadioButton* self, QMouseEvent* e) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_MousePressEvent_IsBase(true);
        vqradiobutton->mousePressEvent(e);
    } else {
        vqradiobutton->mousePressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnMousePressEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_MousePressEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_MouseReleaseEvent(QRadioButton* self, QMouseEvent* e) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->mouseReleaseEvent(e);
    } else {
        vqradiobutton->mouseReleaseEvent(e);
    }
}

// Base class handler implementation
void QRadioButton_QBaseMouseReleaseEvent(QRadioButton* self, QMouseEvent* e) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_MouseReleaseEvent_IsBase(true);
        vqradiobutton->mouseReleaseEvent(e);
    } else {
        vqradiobutton->mouseReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnMouseReleaseEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_FocusInEvent(QRadioButton* self, QFocusEvent* e) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->focusInEvent(e);
    } else {
        vqradiobutton->focusInEvent(e);
    }
}

// Base class handler implementation
void QRadioButton_QBaseFocusInEvent(QRadioButton* self, QFocusEvent* e) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_FocusInEvent_IsBase(true);
        vqradiobutton->focusInEvent(e);
    } else {
        vqradiobutton->focusInEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnFocusInEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_FocusInEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_FocusOutEvent(QRadioButton* self, QFocusEvent* e) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->focusOutEvent(e);
    } else {
        vqradiobutton->focusOutEvent(e);
    }
}

// Base class handler implementation
void QRadioButton_QBaseFocusOutEvent(QRadioButton* self, QFocusEvent* e) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_FocusOutEvent_IsBase(true);
        vqradiobutton->focusOutEvent(e);
    } else {
        vqradiobutton->focusOutEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnFocusOutEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_FocusOutEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_ChangeEvent(QRadioButton* self, QEvent* e) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->changeEvent(e);
    } else {
        vqradiobutton->changeEvent(e);
    }
}

// Base class handler implementation
void QRadioButton_QBaseChangeEvent(QRadioButton* self, QEvent* e) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_ChangeEvent_IsBase(true);
        vqradiobutton->changeEvent(e);
    } else {
        vqradiobutton->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnChangeEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_ChangeEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_TimerEvent(QRadioButton* self, QTimerEvent* e) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->timerEvent(e);
    } else {
        vqradiobutton->timerEvent(e);
    }
}

// Base class handler implementation
void QRadioButton_QBaseTimerEvent(QRadioButton* self, QTimerEvent* e) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_TimerEvent_IsBase(true);
        vqradiobutton->timerEvent(e);
    } else {
        vqradiobutton->timerEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnTimerEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_TimerEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QRadioButton_DevType(const QRadioButton* self) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        return vqradiobutton->devType();
    } else {
        return vqradiobutton->devType();
    }
}

// Base class handler implementation
int QRadioButton_QBaseDevType(const QRadioButton* self) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        vqradiobutton->setQRadioButton_DevType_IsBase(true);
        return vqradiobutton->devType();
    } else {
        return vqradiobutton->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnDevType(const QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        vqradiobutton->setQRadioButton_DevType_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_SetVisible(QRadioButton* self, bool visible) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setVisible(visible);
    } else {
        vqradiobutton->setVisible(visible);
    }
}

// Base class handler implementation
void QRadioButton_QBaseSetVisible(QRadioButton* self, bool visible) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_SetVisible_IsBase(true);
        vqradiobutton->setVisible(visible);
    } else {
        vqradiobutton->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnSetVisible(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_SetVisible_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QRadioButton_HeightForWidth(const QRadioButton* self, int param1) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        return vqradiobutton->heightForWidth(static_cast<int>(param1));
    } else {
        return vqradiobutton->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QRadioButton_QBaseHeightForWidth(const QRadioButton* self, int param1) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        vqradiobutton->setQRadioButton_HeightForWidth_IsBase(true);
        return vqradiobutton->heightForWidth(static_cast<int>(param1));
    } else {
        return vqradiobutton->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnHeightForWidth(const QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        vqradiobutton->setQRadioButton_HeightForWidth_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QRadioButton_HasHeightForWidth(const QRadioButton* self) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        return vqradiobutton->hasHeightForWidth();
    } else {
        return vqradiobutton->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QRadioButton_QBaseHasHeightForWidth(const QRadioButton* self) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        vqradiobutton->setQRadioButton_HasHeightForWidth_IsBase(true);
        return vqradiobutton->hasHeightForWidth();
    } else {
        return vqradiobutton->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnHasHeightForWidth(const QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        vqradiobutton->setQRadioButton_HasHeightForWidth_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QRadioButton_PaintEngine(const QRadioButton* self) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        return vqradiobutton->paintEngine();
    } else {
        return vqradiobutton->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QRadioButton_QBasePaintEngine(const QRadioButton* self) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        vqradiobutton->setQRadioButton_PaintEngine_IsBase(true);
        return vqradiobutton->paintEngine();
    } else {
        return vqradiobutton->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnPaintEngine(const QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        vqradiobutton->setQRadioButton_PaintEngine_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_MouseDoubleClickEvent(QRadioButton* self, QMouseEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->mouseDoubleClickEvent(event);
    } else {
        vqradiobutton->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QRadioButton_QBaseMouseDoubleClickEvent(QRadioButton* self, QMouseEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_MouseDoubleClickEvent_IsBase(true);
        vqradiobutton->mouseDoubleClickEvent(event);
    } else {
        vqradiobutton->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnMouseDoubleClickEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_WheelEvent(QRadioButton* self, QWheelEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->wheelEvent(event);
    } else {
        vqradiobutton->wheelEvent(event);
    }
}

// Base class handler implementation
void QRadioButton_QBaseWheelEvent(QRadioButton* self, QWheelEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_WheelEvent_IsBase(true);
        vqradiobutton->wheelEvent(event);
    } else {
        vqradiobutton->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnWheelEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_WheelEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_EnterEvent(QRadioButton* self, QEnterEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->enterEvent(event);
    } else {
        vqradiobutton->enterEvent(event);
    }
}

// Base class handler implementation
void QRadioButton_QBaseEnterEvent(QRadioButton* self, QEnterEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_EnterEvent_IsBase(true);
        vqradiobutton->enterEvent(event);
    } else {
        vqradiobutton->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnEnterEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_EnterEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_LeaveEvent(QRadioButton* self, QEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->leaveEvent(event);
    } else {
        vqradiobutton->leaveEvent(event);
    }
}

// Base class handler implementation
void QRadioButton_QBaseLeaveEvent(QRadioButton* self, QEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_LeaveEvent_IsBase(true);
        vqradiobutton->leaveEvent(event);
    } else {
        vqradiobutton->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnLeaveEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_LeaveEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_MoveEvent(QRadioButton* self, QMoveEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->moveEvent(event);
    } else {
        vqradiobutton->moveEvent(event);
    }
}

// Base class handler implementation
void QRadioButton_QBaseMoveEvent(QRadioButton* self, QMoveEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_MoveEvent_IsBase(true);
        vqradiobutton->moveEvent(event);
    } else {
        vqradiobutton->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnMoveEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_MoveEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_ResizeEvent(QRadioButton* self, QResizeEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->resizeEvent(event);
    } else {
        vqradiobutton->resizeEvent(event);
    }
}

// Base class handler implementation
void QRadioButton_QBaseResizeEvent(QRadioButton* self, QResizeEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_ResizeEvent_IsBase(true);
        vqradiobutton->resizeEvent(event);
    } else {
        vqradiobutton->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnResizeEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_ResizeEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_CloseEvent(QRadioButton* self, QCloseEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->closeEvent(event);
    } else {
        vqradiobutton->closeEvent(event);
    }
}

// Base class handler implementation
void QRadioButton_QBaseCloseEvent(QRadioButton* self, QCloseEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_CloseEvent_IsBase(true);
        vqradiobutton->closeEvent(event);
    } else {
        vqradiobutton->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnCloseEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_CloseEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_ContextMenuEvent(QRadioButton* self, QContextMenuEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->contextMenuEvent(event);
    } else {
        vqradiobutton->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QRadioButton_QBaseContextMenuEvent(QRadioButton* self, QContextMenuEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_ContextMenuEvent_IsBase(true);
        vqradiobutton->contextMenuEvent(event);
    } else {
        vqradiobutton->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnContextMenuEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_ContextMenuEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_TabletEvent(QRadioButton* self, QTabletEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->tabletEvent(event);
    } else {
        vqradiobutton->tabletEvent(event);
    }
}

// Base class handler implementation
void QRadioButton_QBaseTabletEvent(QRadioButton* self, QTabletEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_TabletEvent_IsBase(true);
        vqradiobutton->tabletEvent(event);
    } else {
        vqradiobutton->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnTabletEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_TabletEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_ActionEvent(QRadioButton* self, QActionEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->actionEvent(event);
    } else {
        vqradiobutton->actionEvent(event);
    }
}

// Base class handler implementation
void QRadioButton_QBaseActionEvent(QRadioButton* self, QActionEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_ActionEvent_IsBase(true);
        vqradiobutton->actionEvent(event);
    } else {
        vqradiobutton->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnActionEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_ActionEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_DragEnterEvent(QRadioButton* self, QDragEnterEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->dragEnterEvent(event);
    } else {
        vqradiobutton->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QRadioButton_QBaseDragEnterEvent(QRadioButton* self, QDragEnterEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_DragEnterEvent_IsBase(true);
        vqradiobutton->dragEnterEvent(event);
    } else {
        vqradiobutton->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnDragEnterEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_DragEnterEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_DragMoveEvent(QRadioButton* self, QDragMoveEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->dragMoveEvent(event);
    } else {
        vqradiobutton->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QRadioButton_QBaseDragMoveEvent(QRadioButton* self, QDragMoveEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_DragMoveEvent_IsBase(true);
        vqradiobutton->dragMoveEvent(event);
    } else {
        vqradiobutton->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnDragMoveEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_DragMoveEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_DragLeaveEvent(QRadioButton* self, QDragLeaveEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->dragLeaveEvent(event);
    } else {
        vqradiobutton->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QRadioButton_QBaseDragLeaveEvent(QRadioButton* self, QDragLeaveEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_DragLeaveEvent_IsBase(true);
        vqradiobutton->dragLeaveEvent(event);
    } else {
        vqradiobutton->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnDragLeaveEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_DragLeaveEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_DropEvent(QRadioButton* self, QDropEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->dropEvent(event);
    } else {
        vqradiobutton->dropEvent(event);
    }
}

// Base class handler implementation
void QRadioButton_QBaseDropEvent(QRadioButton* self, QDropEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_DropEvent_IsBase(true);
        vqradiobutton->dropEvent(event);
    } else {
        vqradiobutton->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnDropEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_DropEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_ShowEvent(QRadioButton* self, QShowEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->showEvent(event);
    } else {
        vqradiobutton->showEvent(event);
    }
}

// Base class handler implementation
void QRadioButton_QBaseShowEvent(QRadioButton* self, QShowEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_ShowEvent_IsBase(true);
        vqradiobutton->showEvent(event);
    } else {
        vqradiobutton->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnShowEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_ShowEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_HideEvent(QRadioButton* self, QHideEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->hideEvent(event);
    } else {
        vqradiobutton->hideEvent(event);
    }
}

// Base class handler implementation
void QRadioButton_QBaseHideEvent(QRadioButton* self, QHideEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_HideEvent_IsBase(true);
        vqradiobutton->hideEvent(event);
    } else {
        vqradiobutton->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnHideEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_HideEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QRadioButton_NativeEvent(QRadioButton* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        return vqradiobutton->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqradiobutton->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QRadioButton_QBaseNativeEvent(QRadioButton* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_NativeEvent_IsBase(true);
        return vqradiobutton->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqradiobutton->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnNativeEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_NativeEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QRadioButton_Metric(const QRadioButton* self, int param1) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        return vqradiobutton->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqradiobutton->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QRadioButton_QBaseMetric(const QRadioButton* self, int param1) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        vqradiobutton->setQRadioButton_Metric_IsBase(true);
        return vqradiobutton->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqradiobutton->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnMetric(const QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        vqradiobutton->setQRadioButton_Metric_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_InitPainter(const QRadioButton* self, QPainter* painter) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        vqradiobutton->initPainter(painter);
    } else {
        vqradiobutton->initPainter(painter);
    }
}

// Base class handler implementation
void QRadioButton_QBaseInitPainter(const QRadioButton* self, QPainter* painter) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        vqradiobutton->setQRadioButton_InitPainter_IsBase(true);
        vqradiobutton->initPainter(painter);
    } else {
        vqradiobutton->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnInitPainter(const QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        vqradiobutton->setQRadioButton_InitPainter_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QRadioButton_Redirected(const QRadioButton* self, QPoint* offset) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        return vqradiobutton->redirected(offset);
    } else {
        return vqradiobutton->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QRadioButton_QBaseRedirected(const QRadioButton* self, QPoint* offset) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        vqradiobutton->setQRadioButton_Redirected_IsBase(true);
        return vqradiobutton->redirected(offset);
    } else {
        return vqradiobutton->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnRedirected(const QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        vqradiobutton->setQRadioButton_Redirected_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QRadioButton_SharedPainter(const QRadioButton* self) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        return vqradiobutton->sharedPainter();
    } else {
        return vqradiobutton->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QRadioButton_QBaseSharedPainter(const QRadioButton* self) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        vqradiobutton->setQRadioButton_SharedPainter_IsBase(true);
        return vqradiobutton->sharedPainter();
    } else {
        return vqradiobutton->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnSharedPainter(const QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        vqradiobutton->setQRadioButton_SharedPainter_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_InputMethodEvent(QRadioButton* self, QInputMethodEvent* param1) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->inputMethodEvent(param1);
    } else {
        vqradiobutton->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QRadioButton_QBaseInputMethodEvent(QRadioButton* self, QInputMethodEvent* param1) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_InputMethodEvent_IsBase(true);
        vqradiobutton->inputMethodEvent(param1);
    } else {
        vqradiobutton->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnInputMethodEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_InputMethodEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QRadioButton_InputMethodQuery(const QRadioButton* self, int param1) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        return new QVariant(vqradiobutton->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QRadioButton_QBaseInputMethodQuery(const QRadioButton* self, int param1) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        vqradiobutton->setQRadioButton_InputMethodQuery_IsBase(true);
        return new QVariant(vqradiobutton->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnInputMethodQuery(const QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        vqradiobutton->setQRadioButton_InputMethodQuery_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QRadioButton_FocusNextPrevChild(QRadioButton* self, bool next) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        return vqradiobutton->focusNextPrevChild(next);
    } else {
        return vqradiobutton->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QRadioButton_QBaseFocusNextPrevChild(QRadioButton* self, bool next) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_FocusNextPrevChild_IsBase(true);
        return vqradiobutton->focusNextPrevChild(next);
    } else {
        return vqradiobutton->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnFocusNextPrevChild(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QRadioButton_EventFilter(QRadioButton* self, QObject* watched, QEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        return vqradiobutton->eventFilter(watched, event);
    } else {
        return vqradiobutton->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QRadioButton_QBaseEventFilter(QRadioButton* self, QObject* watched, QEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_EventFilter_IsBase(true);
        return vqradiobutton->eventFilter(watched, event);
    } else {
        return vqradiobutton->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnEventFilter(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_EventFilter_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_ChildEvent(QRadioButton* self, QChildEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->childEvent(event);
    } else {
        vqradiobutton->childEvent(event);
    }
}

// Base class handler implementation
void QRadioButton_QBaseChildEvent(QRadioButton* self, QChildEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_ChildEvent_IsBase(true);
        vqradiobutton->childEvent(event);
    } else {
        vqradiobutton->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnChildEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_ChildEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_CustomEvent(QRadioButton* self, QEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->customEvent(event);
    } else {
        vqradiobutton->customEvent(event);
    }
}

// Base class handler implementation
void QRadioButton_QBaseCustomEvent(QRadioButton* self, QEvent* event) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_CustomEvent_IsBase(true);
        vqradiobutton->customEvent(event);
    } else {
        vqradiobutton->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnCustomEvent(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_CustomEvent_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_ConnectNotify(QRadioButton* self, QMetaMethod* signal) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->connectNotify(*signal);
    } else {
        vqradiobutton->connectNotify(*signal);
    }
}

// Base class handler implementation
void QRadioButton_QBaseConnectNotify(QRadioButton* self, QMetaMethod* signal) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_ConnectNotify_IsBase(true);
        vqradiobutton->connectNotify(*signal);
    } else {
        vqradiobutton->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnConnectNotify(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_ConnectNotify_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_DisconnectNotify(QRadioButton* self, QMetaMethod* signal) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->disconnectNotify(*signal);
    } else {
        vqradiobutton->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QRadioButton_QBaseDisconnectNotify(QRadioButton* self, QMetaMethod* signal) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_DisconnectNotify_IsBase(true);
        vqradiobutton->disconnectNotify(*signal);
    } else {
        vqradiobutton->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnDisconnectNotify(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_DisconnectNotify_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_UpdateMicroFocus(QRadioButton* self) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->updateMicroFocus();
    } else {
        vqradiobutton->updateMicroFocus();
    }
}

// Base class handler implementation
void QRadioButton_QBaseUpdateMicroFocus(QRadioButton* self) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_UpdateMicroFocus_IsBase(true);
        vqradiobutton->updateMicroFocus();
    } else {
        vqradiobutton->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnUpdateMicroFocus(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_Create(QRadioButton* self) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->create();
    } else {
        vqradiobutton->create();
    }
}

// Base class handler implementation
void QRadioButton_QBaseCreate(QRadioButton* self) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_Create_IsBase(true);
        vqradiobutton->create();
    } else {
        vqradiobutton->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnCreate(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_Create_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QRadioButton_Destroy(QRadioButton* self) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->destroy();
    } else {
        vqradiobutton->destroy();
    }
}

// Base class handler implementation
void QRadioButton_QBaseDestroy(QRadioButton* self) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_Destroy_IsBase(true);
        vqradiobutton->destroy();
    } else {
        vqradiobutton->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnDestroy(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_Destroy_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QRadioButton_FocusNextChild(QRadioButton* self) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        return vqradiobutton->focusNextChild();
    } else {
        return vqradiobutton->focusNextChild();
    }
}

// Base class handler implementation
bool QRadioButton_QBaseFocusNextChild(QRadioButton* self) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_FocusNextChild_IsBase(true);
        return vqradiobutton->focusNextChild();
    } else {
        return vqradiobutton->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnFocusNextChild(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_FocusNextChild_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QRadioButton_FocusPreviousChild(QRadioButton* self) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        return vqradiobutton->focusPreviousChild();
    } else {
        return vqradiobutton->focusPreviousChild();
    }
}

// Base class handler implementation
bool QRadioButton_QBaseFocusPreviousChild(QRadioButton* self) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_FocusPreviousChild_IsBase(true);
        return vqradiobutton->focusPreviousChild();
    } else {
        return vqradiobutton->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnFocusPreviousChild(QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = dynamic_cast<VirtualQRadioButton*>(self)) {
        vqradiobutton->setQRadioButton_FocusPreviousChild_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QRadioButton_Sender(const QRadioButton* self) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        return vqradiobutton->sender();
    } else {
        return vqradiobutton->sender();
    }
}

// Base class handler implementation
QObject* QRadioButton_QBaseSender(const QRadioButton* self) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        vqradiobutton->setQRadioButton_Sender_IsBase(true);
        return vqradiobutton->sender();
    } else {
        return vqradiobutton->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnSender(const QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        vqradiobutton->setQRadioButton_Sender_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QRadioButton_SenderSignalIndex(const QRadioButton* self) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        return vqradiobutton->senderSignalIndex();
    } else {
        return vqradiobutton->senderSignalIndex();
    }
}

// Base class handler implementation
int QRadioButton_QBaseSenderSignalIndex(const QRadioButton* self) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        vqradiobutton->setQRadioButton_SenderSignalIndex_IsBase(true);
        return vqradiobutton->senderSignalIndex();
    } else {
        return vqradiobutton->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnSenderSignalIndex(const QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        vqradiobutton->setQRadioButton_SenderSignalIndex_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QRadioButton_Receivers(const QRadioButton* self, const char* signal) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        return vqradiobutton->receivers(signal);
    } else {
        return vqradiobutton->receivers(signal);
    }
}

// Base class handler implementation
int QRadioButton_QBaseReceivers(const QRadioButton* self, const char* signal) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        vqradiobutton->setQRadioButton_Receivers_IsBase(true);
        return vqradiobutton->receivers(signal);
    } else {
        return vqradiobutton->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnReceivers(const QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        vqradiobutton->setQRadioButton_Receivers_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QRadioButton_IsSignalConnected(const QRadioButton* self, QMetaMethod* signal) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        return vqradiobutton->isSignalConnected(*signal);
    } else {
        return vqradiobutton->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QRadioButton_QBaseIsSignalConnected(const QRadioButton* self, QMetaMethod* signal) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        vqradiobutton->setQRadioButton_IsSignalConnected_IsBase(true);
        return vqradiobutton->isSignalConnected(*signal);
    } else {
        return vqradiobutton->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnIsSignalConnected(const QRadioButton* self, intptr_t slot) {
    if (auto* vqradiobutton = const_cast<VirtualQRadioButton*>(dynamic_cast<const VirtualQRadioButton*>(self))) {
        vqradiobutton->setQRadioButton_IsSignalConnected_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_IsSignalConnected_Callback>(slot));
    }
}

void QRadioButton_Delete(QRadioButton* self) {
    delete self;
}
