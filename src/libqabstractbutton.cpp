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
#include <QWheelEvent>
#include <QWidget>
#include <QWindow>
#include <qabstractbutton.h>
#include "libqabstractbutton.hpp"
#include "libqabstractbutton.hxx"

QAbstractButton* QAbstractButton_new(QWidget* parent) {
    return new VirtualQAbstractButton(parent);
}

QAbstractButton* QAbstractButton_new2() {
    return new VirtualQAbstractButton();
}

QMetaObject* QAbstractButton_MetaObject(const QAbstractButton* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAbstractButton_Metacast(QAbstractButton* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAbstractButton_Metacall(QAbstractButton* self, int param1, int param2, void** param3) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAbstractButton_OnMetacall(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_Metacall_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QAbstractButton_QBaseMetacall(QAbstractButton* self, int param1, int param2, void** param3) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_Metacall_IsBase(true);
        return vqabstractbutton->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QAbstractButton_Tr(const char* s) {
    QString _ret = QAbstractButton::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QAbstractButton_SetText(QAbstractButton* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setText(text_QString);
}

libqt_string QAbstractButton_Text(const QAbstractButton* self) {
    QString _ret = self->text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QAbstractButton_SetIcon(QAbstractButton* self, QIcon* icon) {
    self->setIcon(*icon);
}

QIcon* QAbstractButton_Icon(const QAbstractButton* self) {
    return new QIcon(self->icon());
}

QSize* QAbstractButton_IconSize(const QAbstractButton* self) {
    return new QSize(self->iconSize());
}

void QAbstractButton_SetShortcut(QAbstractButton* self, QKeySequence* key) {
    self->setShortcut(*key);
}

QKeySequence* QAbstractButton_Shortcut(const QAbstractButton* self) {
    return new QKeySequence(self->shortcut());
}

void QAbstractButton_SetCheckable(QAbstractButton* self, bool checkable) {
    self->setCheckable(checkable);
}

bool QAbstractButton_IsCheckable(const QAbstractButton* self) {
    return self->isCheckable();
}

bool QAbstractButton_IsChecked(const QAbstractButton* self) {
    return self->isChecked();
}

void QAbstractButton_SetDown(QAbstractButton* self, bool down) {
    self->setDown(down);
}

bool QAbstractButton_IsDown(const QAbstractButton* self) {
    return self->isDown();
}

void QAbstractButton_SetAutoRepeat(QAbstractButton* self, bool autoRepeat) {
    self->setAutoRepeat(autoRepeat);
}

bool QAbstractButton_AutoRepeat(const QAbstractButton* self) {
    return self->autoRepeat();
}

void QAbstractButton_SetAutoRepeatDelay(QAbstractButton* self, int autoRepeatDelay) {
    self->setAutoRepeatDelay(static_cast<int>(autoRepeatDelay));
}

int QAbstractButton_AutoRepeatDelay(const QAbstractButton* self) {
    return self->autoRepeatDelay();
}

void QAbstractButton_SetAutoRepeatInterval(QAbstractButton* self, int autoRepeatInterval) {
    self->setAutoRepeatInterval(static_cast<int>(autoRepeatInterval));
}

int QAbstractButton_AutoRepeatInterval(const QAbstractButton* self) {
    return self->autoRepeatInterval();
}

void QAbstractButton_SetAutoExclusive(QAbstractButton* self, bool autoExclusive) {
    self->setAutoExclusive(autoExclusive);
}

bool QAbstractButton_AutoExclusive(const QAbstractButton* self) {
    return self->autoExclusive();
}

QButtonGroup* QAbstractButton_Group(const QAbstractButton* self) {
    return self->group();
}

void QAbstractButton_SetIconSize(QAbstractButton* self, QSize* size) {
    self->setIconSize(*size);
}

void QAbstractButton_AnimateClick(QAbstractButton* self) {
    self->animateClick();
}

void QAbstractButton_Click(QAbstractButton* self) {
    self->click();
}

void QAbstractButton_Toggle(QAbstractButton* self) {
    self->toggle();
}

void QAbstractButton_SetChecked(QAbstractButton* self, bool checked) {
    self->setChecked(checked);
}

void QAbstractButton_Pressed(QAbstractButton* self) {
    self->pressed();
}

void QAbstractButton_Connect_Pressed(QAbstractButton* self, intptr_t slot) {
    void (*slotFunc)(QAbstractButton*) = reinterpret_cast<void (*)(QAbstractButton*)>(slot);
    QAbstractButton::connect(self, &QAbstractButton::pressed, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAbstractButton_Released(QAbstractButton* self) {
    self->released();
}

void QAbstractButton_Connect_Released(QAbstractButton* self, intptr_t slot) {
    void (*slotFunc)(QAbstractButton*) = reinterpret_cast<void (*)(QAbstractButton*)>(slot);
    QAbstractButton::connect(self, &QAbstractButton::released, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAbstractButton_Clicked(QAbstractButton* self) {
    self->clicked();
}

void QAbstractButton_Connect_Clicked(QAbstractButton* self, intptr_t slot) {
    void (*slotFunc)(QAbstractButton*) = reinterpret_cast<void (*)(QAbstractButton*)>(slot);
    QAbstractButton::connect(self, &QAbstractButton::clicked, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAbstractButton_Toggled(QAbstractButton* self, bool checked) {
    self->toggled(checked);
}

void QAbstractButton_Connect_Toggled(QAbstractButton* self, intptr_t slot) {
    void (*slotFunc)(QAbstractButton*, bool) = reinterpret_cast<void (*)(QAbstractButton*, bool)>(slot);
    QAbstractButton::connect(self, &QAbstractButton::toggled, [self, slotFunc](bool checked) {
        bool sigval1 = checked;
        slotFunc(self, sigval1);
    });
}

libqt_string QAbstractButton_Tr2(const char* s, const char* c) {
    QString _ret = QAbstractButton::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QAbstractButton_Tr3(const char* s, const char* c, int n) {
    QString _ret = QAbstractButton::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QAbstractButton_Clicked1(QAbstractButton* self, bool checked) {
    self->clicked(checked);
}

void QAbstractButton_Connect_Clicked1(QAbstractButton* self, intptr_t slot) {
    void (*slotFunc)(QAbstractButton*, bool) = reinterpret_cast<void (*)(QAbstractButton*, bool)>(slot);
    QAbstractButton::connect(self, &QAbstractButton::clicked, [self, slotFunc](bool checked) {
        bool sigval1 = checked;
        slotFunc(self, sigval1);
    });
}

// Derived class handler implementation
void QAbstractButton_PaintEvent(QAbstractButton* self, QPaintEvent* e) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->paintEvent(e);
    } else {
        vqabstractbutton->paintEvent(e);
    }
}

// Base class handler implementation
void QAbstractButton_QBasePaintEvent(QAbstractButton* self, QPaintEvent* e) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_PaintEvent_IsBase(true);
        vqabstractbutton->paintEvent(e);
    } else {
        vqabstractbutton->paintEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnPaintEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_PaintEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractButton_HitButton(const QAbstractButton* self, QPoint* pos) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        return vqabstractbutton->hitButton(*pos);
    } else {
        return vqabstractbutton->hitButton(*pos);
    }
}

// Base class handler implementation
bool QAbstractButton_QBaseHitButton(const QAbstractButton* self, QPoint* pos) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        vqabstractbutton->setQAbstractButton_HitButton_IsBase(true);
        return vqabstractbutton->hitButton(*pos);
    } else {
        return vqabstractbutton->hitButton(*pos);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnHitButton(const QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        vqabstractbutton->setQAbstractButton_HitButton_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_HitButton_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_CheckStateSet(QAbstractButton* self) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->checkStateSet();
    } else {
        vqabstractbutton->checkStateSet();
    }
}

// Base class handler implementation
void QAbstractButton_QBaseCheckStateSet(QAbstractButton* self) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_CheckStateSet_IsBase(true);
        vqabstractbutton->checkStateSet();
    } else {
        vqabstractbutton->checkStateSet();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnCheckStateSet(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_CheckStateSet_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_CheckStateSet_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_NextCheckState(QAbstractButton* self) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->nextCheckState();
    } else {
        vqabstractbutton->nextCheckState();
    }
}

// Base class handler implementation
void QAbstractButton_QBaseNextCheckState(QAbstractButton* self) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_NextCheckState_IsBase(true);
        vqabstractbutton->nextCheckState();
    } else {
        vqabstractbutton->nextCheckState();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnNextCheckState(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_NextCheckState_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_NextCheckState_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractButton_Event(QAbstractButton* self, QEvent* e) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        return vqabstractbutton->event(e);
    } else {
        return vqabstractbutton->event(e);
    }
}

// Base class handler implementation
bool QAbstractButton_QBaseEvent(QAbstractButton* self, QEvent* e) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_Event_IsBase(true);
        return vqabstractbutton->event(e);
    } else {
        return vqabstractbutton->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_Event_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_KeyPressEvent(QAbstractButton* self, QKeyEvent* e) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->keyPressEvent(e);
    } else {
        vqabstractbutton->keyPressEvent(e);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseKeyPressEvent(QAbstractButton* self, QKeyEvent* e) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_KeyPressEvent_IsBase(true);
        vqabstractbutton->keyPressEvent(e);
    } else {
        vqabstractbutton->keyPressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnKeyPressEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_KeyPressEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_KeyReleaseEvent(QAbstractButton* self, QKeyEvent* e) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->keyReleaseEvent(e);
    } else {
        vqabstractbutton->keyReleaseEvent(e);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseKeyReleaseEvent(QAbstractButton* self, QKeyEvent* e) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_KeyReleaseEvent_IsBase(true);
        vqabstractbutton->keyReleaseEvent(e);
    } else {
        vqabstractbutton->keyReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnKeyReleaseEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_MousePressEvent(QAbstractButton* self, QMouseEvent* e) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->mousePressEvent(e);
    } else {
        vqabstractbutton->mousePressEvent(e);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseMousePressEvent(QAbstractButton* self, QMouseEvent* e) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_MousePressEvent_IsBase(true);
        vqabstractbutton->mousePressEvent(e);
    } else {
        vqabstractbutton->mousePressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnMousePressEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_MousePressEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_MouseReleaseEvent(QAbstractButton* self, QMouseEvent* e) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->mouseReleaseEvent(e);
    } else {
        vqabstractbutton->mouseReleaseEvent(e);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseMouseReleaseEvent(QAbstractButton* self, QMouseEvent* e) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_MouseReleaseEvent_IsBase(true);
        vqabstractbutton->mouseReleaseEvent(e);
    } else {
        vqabstractbutton->mouseReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnMouseReleaseEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_MouseMoveEvent(QAbstractButton* self, QMouseEvent* e) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->mouseMoveEvent(e);
    } else {
        vqabstractbutton->mouseMoveEvent(e);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseMouseMoveEvent(QAbstractButton* self, QMouseEvent* e) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_MouseMoveEvent_IsBase(true);
        vqabstractbutton->mouseMoveEvent(e);
    } else {
        vqabstractbutton->mouseMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnMouseMoveEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_MouseMoveEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_FocusInEvent(QAbstractButton* self, QFocusEvent* e) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->focusInEvent(e);
    } else {
        vqabstractbutton->focusInEvent(e);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseFocusInEvent(QAbstractButton* self, QFocusEvent* e) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_FocusInEvent_IsBase(true);
        vqabstractbutton->focusInEvent(e);
    } else {
        vqabstractbutton->focusInEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnFocusInEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_FocusInEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_FocusOutEvent(QAbstractButton* self, QFocusEvent* e) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->focusOutEvent(e);
    } else {
        vqabstractbutton->focusOutEvent(e);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseFocusOutEvent(QAbstractButton* self, QFocusEvent* e) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_FocusOutEvent_IsBase(true);
        vqabstractbutton->focusOutEvent(e);
    } else {
        vqabstractbutton->focusOutEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnFocusOutEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_FocusOutEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_ChangeEvent(QAbstractButton* self, QEvent* e) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->changeEvent(e);
    } else {
        vqabstractbutton->changeEvent(e);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseChangeEvent(QAbstractButton* self, QEvent* e) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_ChangeEvent_IsBase(true);
        vqabstractbutton->changeEvent(e);
    } else {
        vqabstractbutton->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnChangeEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_ChangeEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_TimerEvent(QAbstractButton* self, QTimerEvent* e) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->timerEvent(e);
    } else {
        vqabstractbutton->timerEvent(e);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseTimerEvent(QAbstractButton* self, QTimerEvent* e) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_TimerEvent_IsBase(true);
        vqabstractbutton->timerEvent(e);
    } else {
        vqabstractbutton->timerEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnTimerEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_TimerEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractButton_DevType(const QAbstractButton* self) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        return vqabstractbutton->devType();
    } else {
        return vqabstractbutton->devType();
    }
}

// Base class handler implementation
int QAbstractButton_QBaseDevType(const QAbstractButton* self) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        vqabstractbutton->setQAbstractButton_DevType_IsBase(true);
        return vqabstractbutton->devType();
    } else {
        return vqabstractbutton->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnDevType(const QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        vqabstractbutton->setQAbstractButton_DevType_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_SetVisible(QAbstractButton* self, bool visible) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setVisible(visible);
    } else {
        vqabstractbutton->setVisible(visible);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseSetVisible(QAbstractButton* self, bool visible) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_SetVisible_IsBase(true);
        vqabstractbutton->setVisible(visible);
    } else {
        vqabstractbutton->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnSetVisible(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_SetVisible_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QAbstractButton_SizeHint(const QAbstractButton* self) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        return new QSize(vqabstractbutton->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QAbstractButton_QBaseSizeHint(const QAbstractButton* self) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        vqabstractbutton->setQAbstractButton_SizeHint_IsBase(true);
        return new QSize(vqabstractbutton->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnSizeHint(const QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        vqabstractbutton->setQAbstractButton_SizeHint_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QAbstractButton_MinimumSizeHint(const QAbstractButton* self) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        return new QSize(vqabstractbutton->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QAbstractButton_QBaseMinimumSizeHint(const QAbstractButton* self) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        vqabstractbutton->setQAbstractButton_MinimumSizeHint_IsBase(true);
        return new QSize(vqabstractbutton->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnMinimumSizeHint(const QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        vqabstractbutton->setQAbstractButton_MinimumSizeHint_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractButton_HeightForWidth(const QAbstractButton* self, int param1) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        return vqabstractbutton->heightForWidth(static_cast<int>(param1));
    } else {
        return vqabstractbutton->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QAbstractButton_QBaseHeightForWidth(const QAbstractButton* self, int param1) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        vqabstractbutton->setQAbstractButton_HeightForWidth_IsBase(true);
        return vqabstractbutton->heightForWidth(static_cast<int>(param1));
    } else {
        return vqabstractbutton->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnHeightForWidth(const QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        vqabstractbutton->setQAbstractButton_HeightForWidth_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractButton_HasHeightForWidth(const QAbstractButton* self) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        return vqabstractbutton->hasHeightForWidth();
    } else {
        return vqabstractbutton->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QAbstractButton_QBaseHasHeightForWidth(const QAbstractButton* self) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        vqabstractbutton->setQAbstractButton_HasHeightForWidth_IsBase(true);
        return vqabstractbutton->hasHeightForWidth();
    } else {
        return vqabstractbutton->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnHasHeightForWidth(const QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        vqabstractbutton->setQAbstractButton_HasHeightForWidth_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QAbstractButton_PaintEngine(const QAbstractButton* self) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        return vqabstractbutton->paintEngine();
    } else {
        return vqabstractbutton->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QAbstractButton_QBasePaintEngine(const QAbstractButton* self) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        vqabstractbutton->setQAbstractButton_PaintEngine_IsBase(true);
        return vqabstractbutton->paintEngine();
    } else {
        return vqabstractbutton->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnPaintEngine(const QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        vqabstractbutton->setQAbstractButton_PaintEngine_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_MouseDoubleClickEvent(QAbstractButton* self, QMouseEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->mouseDoubleClickEvent(event);
    } else {
        vqabstractbutton->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseMouseDoubleClickEvent(QAbstractButton* self, QMouseEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_MouseDoubleClickEvent_IsBase(true);
        vqabstractbutton->mouseDoubleClickEvent(event);
    } else {
        vqabstractbutton->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnMouseDoubleClickEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_WheelEvent(QAbstractButton* self, QWheelEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->wheelEvent(event);
    } else {
        vqabstractbutton->wheelEvent(event);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseWheelEvent(QAbstractButton* self, QWheelEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_WheelEvent_IsBase(true);
        vqabstractbutton->wheelEvent(event);
    } else {
        vqabstractbutton->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnWheelEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_WheelEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_EnterEvent(QAbstractButton* self, QEnterEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->enterEvent(event);
    } else {
        vqabstractbutton->enterEvent(event);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseEnterEvent(QAbstractButton* self, QEnterEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_EnterEvent_IsBase(true);
        vqabstractbutton->enterEvent(event);
    } else {
        vqabstractbutton->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnEnterEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_EnterEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_LeaveEvent(QAbstractButton* self, QEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->leaveEvent(event);
    } else {
        vqabstractbutton->leaveEvent(event);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseLeaveEvent(QAbstractButton* self, QEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_LeaveEvent_IsBase(true);
        vqabstractbutton->leaveEvent(event);
    } else {
        vqabstractbutton->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnLeaveEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_LeaveEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_MoveEvent(QAbstractButton* self, QMoveEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->moveEvent(event);
    } else {
        vqabstractbutton->moveEvent(event);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseMoveEvent(QAbstractButton* self, QMoveEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_MoveEvent_IsBase(true);
        vqabstractbutton->moveEvent(event);
    } else {
        vqabstractbutton->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnMoveEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_MoveEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_ResizeEvent(QAbstractButton* self, QResizeEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->resizeEvent(event);
    } else {
        vqabstractbutton->resizeEvent(event);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseResizeEvent(QAbstractButton* self, QResizeEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_ResizeEvent_IsBase(true);
        vqabstractbutton->resizeEvent(event);
    } else {
        vqabstractbutton->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnResizeEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_ResizeEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_CloseEvent(QAbstractButton* self, QCloseEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->closeEvent(event);
    } else {
        vqabstractbutton->closeEvent(event);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseCloseEvent(QAbstractButton* self, QCloseEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_CloseEvent_IsBase(true);
        vqabstractbutton->closeEvent(event);
    } else {
        vqabstractbutton->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnCloseEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_CloseEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_ContextMenuEvent(QAbstractButton* self, QContextMenuEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->contextMenuEvent(event);
    } else {
        vqabstractbutton->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseContextMenuEvent(QAbstractButton* self, QContextMenuEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_ContextMenuEvent_IsBase(true);
        vqabstractbutton->contextMenuEvent(event);
    } else {
        vqabstractbutton->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnContextMenuEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_ContextMenuEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_TabletEvent(QAbstractButton* self, QTabletEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->tabletEvent(event);
    } else {
        vqabstractbutton->tabletEvent(event);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseTabletEvent(QAbstractButton* self, QTabletEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_TabletEvent_IsBase(true);
        vqabstractbutton->tabletEvent(event);
    } else {
        vqabstractbutton->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnTabletEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_TabletEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_ActionEvent(QAbstractButton* self, QActionEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->actionEvent(event);
    } else {
        vqabstractbutton->actionEvent(event);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseActionEvent(QAbstractButton* self, QActionEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_ActionEvent_IsBase(true);
        vqabstractbutton->actionEvent(event);
    } else {
        vqabstractbutton->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnActionEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_ActionEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_DragEnterEvent(QAbstractButton* self, QDragEnterEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->dragEnterEvent(event);
    } else {
        vqabstractbutton->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseDragEnterEvent(QAbstractButton* self, QDragEnterEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_DragEnterEvent_IsBase(true);
        vqabstractbutton->dragEnterEvent(event);
    } else {
        vqabstractbutton->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnDragEnterEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_DragEnterEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_DragMoveEvent(QAbstractButton* self, QDragMoveEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->dragMoveEvent(event);
    } else {
        vqabstractbutton->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseDragMoveEvent(QAbstractButton* self, QDragMoveEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_DragMoveEvent_IsBase(true);
        vqabstractbutton->dragMoveEvent(event);
    } else {
        vqabstractbutton->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnDragMoveEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_DragMoveEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_DragLeaveEvent(QAbstractButton* self, QDragLeaveEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->dragLeaveEvent(event);
    } else {
        vqabstractbutton->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseDragLeaveEvent(QAbstractButton* self, QDragLeaveEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_DragLeaveEvent_IsBase(true);
        vqabstractbutton->dragLeaveEvent(event);
    } else {
        vqabstractbutton->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnDragLeaveEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_DragLeaveEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_DropEvent(QAbstractButton* self, QDropEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->dropEvent(event);
    } else {
        vqabstractbutton->dropEvent(event);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseDropEvent(QAbstractButton* self, QDropEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_DropEvent_IsBase(true);
        vqabstractbutton->dropEvent(event);
    } else {
        vqabstractbutton->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnDropEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_DropEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_ShowEvent(QAbstractButton* self, QShowEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->showEvent(event);
    } else {
        vqabstractbutton->showEvent(event);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseShowEvent(QAbstractButton* self, QShowEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_ShowEvent_IsBase(true);
        vqabstractbutton->showEvent(event);
    } else {
        vqabstractbutton->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnShowEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_ShowEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_HideEvent(QAbstractButton* self, QHideEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->hideEvent(event);
    } else {
        vqabstractbutton->hideEvent(event);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseHideEvent(QAbstractButton* self, QHideEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_HideEvent_IsBase(true);
        vqabstractbutton->hideEvent(event);
    } else {
        vqabstractbutton->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnHideEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_HideEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractButton_NativeEvent(QAbstractButton* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        return vqabstractbutton->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqabstractbutton->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QAbstractButton_QBaseNativeEvent(QAbstractButton* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_NativeEvent_IsBase(true);
        return vqabstractbutton->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqabstractbutton->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnNativeEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_NativeEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractButton_Metric(const QAbstractButton* self, int param1) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        return vqabstractbutton->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqabstractbutton->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QAbstractButton_QBaseMetric(const QAbstractButton* self, int param1) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        vqabstractbutton->setQAbstractButton_Metric_IsBase(true);
        return vqabstractbutton->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqabstractbutton->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnMetric(const QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        vqabstractbutton->setQAbstractButton_Metric_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_InitPainter(const QAbstractButton* self, QPainter* painter) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        vqabstractbutton->initPainter(painter);
    } else {
        vqabstractbutton->initPainter(painter);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseInitPainter(const QAbstractButton* self, QPainter* painter) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        vqabstractbutton->setQAbstractButton_InitPainter_IsBase(true);
        vqabstractbutton->initPainter(painter);
    } else {
        vqabstractbutton->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnInitPainter(const QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        vqabstractbutton->setQAbstractButton_InitPainter_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QAbstractButton_Redirected(const QAbstractButton* self, QPoint* offset) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        return vqabstractbutton->redirected(offset);
    } else {
        return vqabstractbutton->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QAbstractButton_QBaseRedirected(const QAbstractButton* self, QPoint* offset) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        vqabstractbutton->setQAbstractButton_Redirected_IsBase(true);
        return vqabstractbutton->redirected(offset);
    } else {
        return vqabstractbutton->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnRedirected(const QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        vqabstractbutton->setQAbstractButton_Redirected_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QAbstractButton_SharedPainter(const QAbstractButton* self) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        return vqabstractbutton->sharedPainter();
    } else {
        return vqabstractbutton->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QAbstractButton_QBaseSharedPainter(const QAbstractButton* self) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        vqabstractbutton->setQAbstractButton_SharedPainter_IsBase(true);
        return vqabstractbutton->sharedPainter();
    } else {
        return vqabstractbutton->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnSharedPainter(const QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        vqabstractbutton->setQAbstractButton_SharedPainter_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_InputMethodEvent(QAbstractButton* self, QInputMethodEvent* param1) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->inputMethodEvent(param1);
    } else {
        vqabstractbutton->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseInputMethodEvent(QAbstractButton* self, QInputMethodEvent* param1) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_InputMethodEvent_IsBase(true);
        vqabstractbutton->inputMethodEvent(param1);
    } else {
        vqabstractbutton->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnInputMethodEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_InputMethodEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QAbstractButton_InputMethodQuery(const QAbstractButton* self, int param1) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        return new QVariant(vqabstractbutton->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QAbstractButton_QBaseInputMethodQuery(const QAbstractButton* self, int param1) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        vqabstractbutton->setQAbstractButton_InputMethodQuery_IsBase(true);
        return new QVariant(vqabstractbutton->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnInputMethodQuery(const QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        vqabstractbutton->setQAbstractButton_InputMethodQuery_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractButton_FocusNextPrevChild(QAbstractButton* self, bool next) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        return vqabstractbutton->focusNextPrevChild(next);
    } else {
        return vqabstractbutton->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QAbstractButton_QBaseFocusNextPrevChild(QAbstractButton* self, bool next) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_FocusNextPrevChild_IsBase(true);
        return vqabstractbutton->focusNextPrevChild(next);
    } else {
        return vqabstractbutton->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnFocusNextPrevChild(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractButton_EventFilter(QAbstractButton* self, QObject* watched, QEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        return vqabstractbutton->eventFilter(watched, event);
    } else {
        return vqabstractbutton->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QAbstractButton_QBaseEventFilter(QAbstractButton* self, QObject* watched, QEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_EventFilter_IsBase(true);
        return vqabstractbutton->eventFilter(watched, event);
    } else {
        return vqabstractbutton->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnEventFilter(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_EventFilter_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_ChildEvent(QAbstractButton* self, QChildEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->childEvent(event);
    } else {
        vqabstractbutton->childEvent(event);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseChildEvent(QAbstractButton* self, QChildEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_ChildEvent_IsBase(true);
        vqabstractbutton->childEvent(event);
    } else {
        vqabstractbutton->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnChildEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_ChildEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_CustomEvent(QAbstractButton* self, QEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->customEvent(event);
    } else {
        vqabstractbutton->customEvent(event);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseCustomEvent(QAbstractButton* self, QEvent* event) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_CustomEvent_IsBase(true);
        vqabstractbutton->customEvent(event);
    } else {
        vqabstractbutton->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnCustomEvent(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_CustomEvent_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_ConnectNotify(QAbstractButton* self, QMetaMethod* signal) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->connectNotify(*signal);
    } else {
        vqabstractbutton->connectNotify(*signal);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseConnectNotify(QAbstractButton* self, QMetaMethod* signal) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_ConnectNotify_IsBase(true);
        vqabstractbutton->connectNotify(*signal);
    } else {
        vqabstractbutton->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnConnectNotify(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_ConnectNotify_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_DisconnectNotify(QAbstractButton* self, QMetaMethod* signal) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->disconnectNotify(*signal);
    } else {
        vqabstractbutton->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QAbstractButton_QBaseDisconnectNotify(QAbstractButton* self, QMetaMethod* signal) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_DisconnectNotify_IsBase(true);
        vqabstractbutton->disconnectNotify(*signal);
    } else {
        vqabstractbutton->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnDisconnectNotify(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_DisconnectNotify_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_UpdateMicroFocus(QAbstractButton* self) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->updateMicroFocus();
    } else {
        vqabstractbutton->updateMicroFocus();
    }
}

// Base class handler implementation
void QAbstractButton_QBaseUpdateMicroFocus(QAbstractButton* self) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_UpdateMicroFocus_IsBase(true);
        vqabstractbutton->updateMicroFocus();
    } else {
        vqabstractbutton->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnUpdateMicroFocus(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_Create(QAbstractButton* self) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->create();
    } else {
        vqabstractbutton->create();
    }
}

// Base class handler implementation
void QAbstractButton_QBaseCreate(QAbstractButton* self) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_Create_IsBase(true);
        vqabstractbutton->create();
    } else {
        vqabstractbutton->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnCreate(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_Create_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractButton_Destroy(QAbstractButton* self) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->destroy();
    } else {
        vqabstractbutton->destroy();
    }
}

// Base class handler implementation
void QAbstractButton_QBaseDestroy(QAbstractButton* self) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_Destroy_IsBase(true);
        vqabstractbutton->destroy();
    } else {
        vqabstractbutton->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnDestroy(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_Destroy_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractButton_FocusNextChild(QAbstractButton* self) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        return vqabstractbutton->focusNextChild();
    } else {
        return vqabstractbutton->focusNextChild();
    }
}

// Base class handler implementation
bool QAbstractButton_QBaseFocusNextChild(QAbstractButton* self) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_FocusNextChild_IsBase(true);
        return vqabstractbutton->focusNextChild();
    } else {
        return vqabstractbutton->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnFocusNextChild(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_FocusNextChild_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractButton_FocusPreviousChild(QAbstractButton* self) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        return vqabstractbutton->focusPreviousChild();
    } else {
        return vqabstractbutton->focusPreviousChild();
    }
}

// Base class handler implementation
bool QAbstractButton_QBaseFocusPreviousChild(QAbstractButton* self) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_FocusPreviousChild_IsBase(true);
        return vqabstractbutton->focusPreviousChild();
    } else {
        return vqabstractbutton->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnFocusPreviousChild(QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = dynamic_cast<VirtualQAbstractButton*>(self)) {
        vqabstractbutton->setQAbstractButton_FocusPreviousChild_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QAbstractButton_Sender(const QAbstractButton* self) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        return vqabstractbutton->sender();
    } else {
        return vqabstractbutton->sender();
    }
}

// Base class handler implementation
QObject* QAbstractButton_QBaseSender(const QAbstractButton* self) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        vqabstractbutton->setQAbstractButton_Sender_IsBase(true);
        return vqabstractbutton->sender();
    } else {
        return vqabstractbutton->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnSender(const QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        vqabstractbutton->setQAbstractButton_Sender_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractButton_SenderSignalIndex(const QAbstractButton* self) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        return vqabstractbutton->senderSignalIndex();
    } else {
        return vqabstractbutton->senderSignalIndex();
    }
}

// Base class handler implementation
int QAbstractButton_QBaseSenderSignalIndex(const QAbstractButton* self) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        vqabstractbutton->setQAbstractButton_SenderSignalIndex_IsBase(true);
        return vqabstractbutton->senderSignalIndex();
    } else {
        return vqabstractbutton->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnSenderSignalIndex(const QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        vqabstractbutton->setQAbstractButton_SenderSignalIndex_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractButton_Receivers(const QAbstractButton* self, const char* signal) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        return vqabstractbutton->receivers(signal);
    } else {
        return vqabstractbutton->receivers(signal);
    }
}

// Base class handler implementation
int QAbstractButton_QBaseReceivers(const QAbstractButton* self, const char* signal) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        vqabstractbutton->setQAbstractButton_Receivers_IsBase(true);
        return vqabstractbutton->receivers(signal);
    } else {
        return vqabstractbutton->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnReceivers(const QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        vqabstractbutton->setQAbstractButton_Receivers_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractButton_IsSignalConnected(const QAbstractButton* self, QMetaMethod* signal) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        return vqabstractbutton->isSignalConnected(*signal);
    } else {
        return vqabstractbutton->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QAbstractButton_QBaseIsSignalConnected(const QAbstractButton* self, QMetaMethod* signal) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        vqabstractbutton->setQAbstractButton_IsSignalConnected_IsBase(true);
        return vqabstractbutton->isSignalConnected(*signal);
    } else {
        return vqabstractbutton->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractButton_OnIsSignalConnected(const QAbstractButton* self, intptr_t slot) {
    if (auto* vqabstractbutton = const_cast<VirtualQAbstractButton*>(dynamic_cast<const VirtualQAbstractButton*>(self))) {
        vqabstractbutton->setQAbstractButton_IsSignalConnected_Callback(reinterpret_cast<VirtualQAbstractButton::QAbstractButton_IsSignalConnected_Callback>(slot));
    }
}

void QAbstractButton_Delete(QAbstractButton* self) {
    delete self;
}
