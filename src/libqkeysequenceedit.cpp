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
#include <QKeySequenceEdit>
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
#include <qkeysequenceedit.h>
#include "libqkeysequenceedit.hpp"
#include "libqkeysequenceedit.hxx"

QKeySequenceEdit* QKeySequenceEdit_new(QWidget* parent) {
    return new VirtualQKeySequenceEdit(parent);
}

QKeySequenceEdit* QKeySequenceEdit_new2() {
    return new VirtualQKeySequenceEdit();
}

QKeySequenceEdit* QKeySequenceEdit_new3(QKeySequence* keySequence) {
    return new VirtualQKeySequenceEdit(*keySequence);
}

QKeySequenceEdit* QKeySequenceEdit_new4(QKeySequence* keySequence, QWidget* parent) {
    return new VirtualQKeySequenceEdit(*keySequence, parent);
}

QMetaObject* QKeySequenceEdit_MetaObject(const QKeySequenceEdit* self) {
    return (QMetaObject*)self->metaObject();
}

void* QKeySequenceEdit_Metacast(QKeySequenceEdit* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QKeySequenceEdit_Metacall(QKeySequenceEdit* self, int param1, int param2, void** param3) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QKeySequenceEdit_OnMetacall(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_Metacall_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QKeySequenceEdit_QBaseMetacall(QKeySequenceEdit* self, int param1, int param2, void** param3) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_Metacall_IsBase(true);
        return vqkeysequenceedit->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QKeySequenceEdit_Tr(const char* s) {
    QString _ret = QKeySequenceEdit::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QKeySequence* QKeySequenceEdit_KeySequence(const QKeySequenceEdit* self) {
    return new QKeySequence(self->keySequence());
}

void QKeySequenceEdit_SetClearButtonEnabled(QKeySequenceEdit* self, bool enable) {
    self->setClearButtonEnabled(enable);
}

bool QKeySequenceEdit_IsClearButtonEnabled(const QKeySequenceEdit* self) {
    return self->isClearButtonEnabled();
}

void QKeySequenceEdit_SetKeySequence(QKeySequenceEdit* self, QKeySequence* keySequence) {
    self->setKeySequence(*keySequence);
}

void QKeySequenceEdit_Clear(QKeySequenceEdit* self) {
    self->clear();
}

void QKeySequenceEdit_EditingFinished(QKeySequenceEdit* self) {
    self->editingFinished();
}

void QKeySequenceEdit_Connect_EditingFinished(QKeySequenceEdit* self, intptr_t slot) {
    void (*slotFunc)(QKeySequenceEdit*) = reinterpret_cast<void (*)(QKeySequenceEdit*)>(slot);
    QKeySequenceEdit::connect(self, &QKeySequenceEdit::editingFinished, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QKeySequenceEdit_KeySequenceChanged(QKeySequenceEdit* self, QKeySequence* keySequence) {
    self->keySequenceChanged(*keySequence);
}

void QKeySequenceEdit_Connect_KeySequenceChanged(QKeySequenceEdit* self, intptr_t slot) {
    void (*slotFunc)(QKeySequenceEdit*, QKeySequence*) = reinterpret_cast<void (*)(QKeySequenceEdit*, QKeySequence*)>(slot);
    QKeySequenceEdit::connect(self, &QKeySequenceEdit::keySequenceChanged, [self, slotFunc](const QKeySequence& keySequence) {
        const QKeySequence& keySequence_ret = keySequence;
        // Cast returned reference into pointer
        QKeySequence* sigval1 = const_cast<QKeySequence*>(&keySequence_ret);
        slotFunc(self, sigval1);
    });
}

libqt_string QKeySequenceEdit_Tr2(const char* s, const char* c) {
    QString _ret = QKeySequenceEdit::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QKeySequenceEdit_Tr3(const char* s, const char* c, int n) {
    QString _ret = QKeySequenceEdit::tr(s, c, static_cast<int>(n));
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
bool QKeySequenceEdit_Event(QKeySequenceEdit* self, QEvent* param1) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        return vqkeysequenceedit->event(param1);
    } else {
        return vqkeysequenceedit->event(param1);
    }
}

// Base class handler implementation
bool QKeySequenceEdit_QBaseEvent(QKeySequenceEdit* self, QEvent* param1) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_Event_IsBase(true);
        return vqkeysequenceedit->event(param1);
    } else {
        return vqkeysequenceedit->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_Event_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_KeyPressEvent(QKeySequenceEdit* self, QKeyEvent* param1) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->keyPressEvent(param1);
    } else {
        vqkeysequenceedit->keyPressEvent(param1);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseKeyPressEvent(QKeySequenceEdit* self, QKeyEvent* param1) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_KeyPressEvent_IsBase(true);
        vqkeysequenceedit->keyPressEvent(param1);
    } else {
        vqkeysequenceedit->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnKeyPressEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_KeyPressEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_KeyReleaseEvent(QKeySequenceEdit* self, QKeyEvent* param1) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->keyReleaseEvent(param1);
    } else {
        vqkeysequenceedit->keyReleaseEvent(param1);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseKeyReleaseEvent(QKeySequenceEdit* self, QKeyEvent* param1) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_KeyReleaseEvent_IsBase(true);
        vqkeysequenceedit->keyReleaseEvent(param1);
    } else {
        vqkeysequenceedit->keyReleaseEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnKeyReleaseEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_TimerEvent(QKeySequenceEdit* self, QTimerEvent* param1) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->timerEvent(param1);
    } else {
        vqkeysequenceedit->timerEvent(param1);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseTimerEvent(QKeySequenceEdit* self, QTimerEvent* param1) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_TimerEvent_IsBase(true);
        vqkeysequenceedit->timerEvent(param1);
    } else {
        vqkeysequenceedit->timerEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnTimerEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_TimerEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_FocusOutEvent(QKeySequenceEdit* self, QFocusEvent* param1) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->focusOutEvent(param1);
    } else {
        vqkeysequenceedit->focusOutEvent(param1);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseFocusOutEvent(QKeySequenceEdit* self, QFocusEvent* param1) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_FocusOutEvent_IsBase(true);
        vqkeysequenceedit->focusOutEvent(param1);
    } else {
        vqkeysequenceedit->focusOutEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnFocusOutEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_FocusOutEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QKeySequenceEdit_DevType(const QKeySequenceEdit* self) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self))) {
        return vqkeysequenceedit->devType();
    } else {
        return vqkeysequenceedit->devType();
    }
}

// Base class handler implementation
int QKeySequenceEdit_QBaseDevType(const QKeySequenceEdit* self) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self))) {
        vqkeysequenceedit->setQKeySequenceEdit_DevType_IsBase(true);
        return vqkeysequenceedit->devType();
    } else {
        return vqkeysequenceedit->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnDevType(const QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self))) {
        vqkeysequenceedit->setQKeySequenceEdit_DevType_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_SetVisible(QKeySequenceEdit* self, bool visible) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setVisible(visible);
    } else {
        vqkeysequenceedit->setVisible(visible);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseSetVisible(QKeySequenceEdit* self, bool visible) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_SetVisible_IsBase(true);
        vqkeysequenceedit->setVisible(visible);
    } else {
        vqkeysequenceedit->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnSetVisible(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_SetVisible_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QKeySequenceEdit_SizeHint(const QKeySequenceEdit* self) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self))) {
        return new QSize(vqkeysequenceedit->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QKeySequenceEdit_QBaseSizeHint(const QKeySequenceEdit* self) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self))) {
        vqkeysequenceedit->setQKeySequenceEdit_SizeHint_IsBase(true);
        return new QSize(vqkeysequenceedit->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnSizeHint(const QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self))) {
        vqkeysequenceedit->setQKeySequenceEdit_SizeHint_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QKeySequenceEdit_MinimumSizeHint(const QKeySequenceEdit* self) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self))) {
        return new QSize(vqkeysequenceedit->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QKeySequenceEdit_QBaseMinimumSizeHint(const QKeySequenceEdit* self) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self))) {
        vqkeysequenceedit->setQKeySequenceEdit_MinimumSizeHint_IsBase(true);
        return new QSize(vqkeysequenceedit->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnMinimumSizeHint(const QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self))) {
        vqkeysequenceedit->setQKeySequenceEdit_MinimumSizeHint_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QKeySequenceEdit_HeightForWidth(const QKeySequenceEdit* self, int param1) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self))) {
        return vqkeysequenceedit->heightForWidth(static_cast<int>(param1));
    } else {
        return vqkeysequenceedit->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QKeySequenceEdit_QBaseHeightForWidth(const QKeySequenceEdit* self, int param1) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self))) {
        vqkeysequenceedit->setQKeySequenceEdit_HeightForWidth_IsBase(true);
        return vqkeysequenceedit->heightForWidth(static_cast<int>(param1));
    } else {
        return vqkeysequenceedit->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnHeightForWidth(const QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self))) {
        vqkeysequenceedit->setQKeySequenceEdit_HeightForWidth_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QKeySequenceEdit_HasHeightForWidth(const QKeySequenceEdit* self) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self))) {
        return vqkeysequenceedit->hasHeightForWidth();
    } else {
        return vqkeysequenceedit->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QKeySequenceEdit_QBaseHasHeightForWidth(const QKeySequenceEdit* self) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self))) {
        vqkeysequenceedit->setQKeySequenceEdit_HasHeightForWidth_IsBase(true);
        return vqkeysequenceedit->hasHeightForWidth();
    } else {
        return vqkeysequenceedit->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnHasHeightForWidth(const QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self))) {
        vqkeysequenceedit->setQKeySequenceEdit_HasHeightForWidth_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QKeySequenceEdit_PaintEngine(const QKeySequenceEdit* self) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self))) {
        return vqkeysequenceedit->paintEngine();
    } else {
        return vqkeysequenceedit->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QKeySequenceEdit_QBasePaintEngine(const QKeySequenceEdit* self) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self))) {
        vqkeysequenceedit->setQKeySequenceEdit_PaintEngine_IsBase(true);
        return vqkeysequenceedit->paintEngine();
    } else {
        return vqkeysequenceedit->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnPaintEngine(const QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self))) {
        vqkeysequenceedit->setQKeySequenceEdit_PaintEngine_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_MousePressEvent(QKeySequenceEdit* self, QMouseEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->mousePressEvent(event);
    } else {
        vqkeysequenceedit->mousePressEvent(event);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseMousePressEvent(QKeySequenceEdit* self, QMouseEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_MousePressEvent_IsBase(true);
        vqkeysequenceedit->mousePressEvent(event);
    } else {
        vqkeysequenceedit->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnMousePressEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_MousePressEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_MouseReleaseEvent(QKeySequenceEdit* self, QMouseEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->mouseReleaseEvent(event);
    } else {
        vqkeysequenceedit->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseMouseReleaseEvent(QKeySequenceEdit* self, QMouseEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_MouseReleaseEvent_IsBase(true);
        vqkeysequenceedit->mouseReleaseEvent(event);
    } else {
        vqkeysequenceedit->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnMouseReleaseEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_MouseDoubleClickEvent(QKeySequenceEdit* self, QMouseEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->mouseDoubleClickEvent(event);
    } else {
        vqkeysequenceedit->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseMouseDoubleClickEvent(QKeySequenceEdit* self, QMouseEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_MouseDoubleClickEvent_IsBase(true);
        vqkeysequenceedit->mouseDoubleClickEvent(event);
    } else {
        vqkeysequenceedit->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnMouseDoubleClickEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_MouseMoveEvent(QKeySequenceEdit* self, QMouseEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->mouseMoveEvent(event);
    } else {
        vqkeysequenceedit->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseMouseMoveEvent(QKeySequenceEdit* self, QMouseEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_MouseMoveEvent_IsBase(true);
        vqkeysequenceedit->mouseMoveEvent(event);
    } else {
        vqkeysequenceedit->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnMouseMoveEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_MouseMoveEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_WheelEvent(QKeySequenceEdit* self, QWheelEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->wheelEvent(event);
    } else {
        vqkeysequenceedit->wheelEvent(event);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseWheelEvent(QKeySequenceEdit* self, QWheelEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_WheelEvent_IsBase(true);
        vqkeysequenceedit->wheelEvent(event);
    } else {
        vqkeysequenceedit->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnWheelEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_WheelEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_FocusInEvent(QKeySequenceEdit* self, QFocusEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->focusInEvent(event);
    } else {
        vqkeysequenceedit->focusInEvent(event);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseFocusInEvent(QKeySequenceEdit* self, QFocusEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_FocusInEvent_IsBase(true);
        vqkeysequenceedit->focusInEvent(event);
    } else {
        vqkeysequenceedit->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnFocusInEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_FocusInEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_EnterEvent(QKeySequenceEdit* self, QEnterEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->enterEvent(event);
    } else {
        vqkeysequenceedit->enterEvent(event);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseEnterEvent(QKeySequenceEdit* self, QEnterEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_EnterEvent_IsBase(true);
        vqkeysequenceedit->enterEvent(event);
    } else {
        vqkeysequenceedit->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnEnterEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_EnterEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_LeaveEvent(QKeySequenceEdit* self, QEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->leaveEvent(event);
    } else {
        vqkeysequenceedit->leaveEvent(event);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseLeaveEvent(QKeySequenceEdit* self, QEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_LeaveEvent_IsBase(true);
        vqkeysequenceedit->leaveEvent(event);
    } else {
        vqkeysequenceedit->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnLeaveEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_LeaveEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_PaintEvent(QKeySequenceEdit* self, QPaintEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->paintEvent(event);
    } else {
        vqkeysequenceedit->paintEvent(event);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBasePaintEvent(QKeySequenceEdit* self, QPaintEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_PaintEvent_IsBase(true);
        vqkeysequenceedit->paintEvent(event);
    } else {
        vqkeysequenceedit->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnPaintEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_PaintEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_MoveEvent(QKeySequenceEdit* self, QMoveEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->moveEvent(event);
    } else {
        vqkeysequenceedit->moveEvent(event);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseMoveEvent(QKeySequenceEdit* self, QMoveEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_MoveEvent_IsBase(true);
        vqkeysequenceedit->moveEvent(event);
    } else {
        vqkeysequenceedit->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnMoveEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_MoveEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_ResizeEvent(QKeySequenceEdit* self, QResizeEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->resizeEvent(event);
    } else {
        vqkeysequenceedit->resizeEvent(event);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseResizeEvent(QKeySequenceEdit* self, QResizeEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_ResizeEvent_IsBase(true);
        vqkeysequenceedit->resizeEvent(event);
    } else {
        vqkeysequenceedit->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnResizeEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_ResizeEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_CloseEvent(QKeySequenceEdit* self, QCloseEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->closeEvent(event);
    } else {
        vqkeysequenceedit->closeEvent(event);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseCloseEvent(QKeySequenceEdit* self, QCloseEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_CloseEvent_IsBase(true);
        vqkeysequenceedit->closeEvent(event);
    } else {
        vqkeysequenceedit->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnCloseEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_CloseEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_ContextMenuEvent(QKeySequenceEdit* self, QContextMenuEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->contextMenuEvent(event);
    } else {
        vqkeysequenceedit->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseContextMenuEvent(QKeySequenceEdit* self, QContextMenuEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_ContextMenuEvent_IsBase(true);
        vqkeysequenceedit->contextMenuEvent(event);
    } else {
        vqkeysequenceedit->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnContextMenuEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_ContextMenuEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_TabletEvent(QKeySequenceEdit* self, QTabletEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->tabletEvent(event);
    } else {
        vqkeysequenceedit->tabletEvent(event);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseTabletEvent(QKeySequenceEdit* self, QTabletEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_TabletEvent_IsBase(true);
        vqkeysequenceedit->tabletEvent(event);
    } else {
        vqkeysequenceedit->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnTabletEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_TabletEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_ActionEvent(QKeySequenceEdit* self, QActionEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->actionEvent(event);
    } else {
        vqkeysequenceedit->actionEvent(event);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseActionEvent(QKeySequenceEdit* self, QActionEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_ActionEvent_IsBase(true);
        vqkeysequenceedit->actionEvent(event);
    } else {
        vqkeysequenceedit->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnActionEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_ActionEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_DragEnterEvent(QKeySequenceEdit* self, QDragEnterEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->dragEnterEvent(event);
    } else {
        vqkeysequenceedit->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseDragEnterEvent(QKeySequenceEdit* self, QDragEnterEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_DragEnterEvent_IsBase(true);
        vqkeysequenceedit->dragEnterEvent(event);
    } else {
        vqkeysequenceedit->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnDragEnterEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_DragEnterEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_DragMoveEvent(QKeySequenceEdit* self, QDragMoveEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->dragMoveEvent(event);
    } else {
        vqkeysequenceedit->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseDragMoveEvent(QKeySequenceEdit* self, QDragMoveEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_DragMoveEvent_IsBase(true);
        vqkeysequenceedit->dragMoveEvent(event);
    } else {
        vqkeysequenceedit->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnDragMoveEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_DragMoveEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_DragLeaveEvent(QKeySequenceEdit* self, QDragLeaveEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->dragLeaveEvent(event);
    } else {
        vqkeysequenceedit->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseDragLeaveEvent(QKeySequenceEdit* self, QDragLeaveEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_DragLeaveEvent_IsBase(true);
        vqkeysequenceedit->dragLeaveEvent(event);
    } else {
        vqkeysequenceedit->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnDragLeaveEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_DragLeaveEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_DropEvent(QKeySequenceEdit* self, QDropEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->dropEvent(event);
    } else {
        vqkeysequenceedit->dropEvent(event);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseDropEvent(QKeySequenceEdit* self, QDropEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_DropEvent_IsBase(true);
        vqkeysequenceedit->dropEvent(event);
    } else {
        vqkeysequenceedit->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnDropEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_DropEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_ShowEvent(QKeySequenceEdit* self, QShowEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->showEvent(event);
    } else {
        vqkeysequenceedit->showEvent(event);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseShowEvent(QKeySequenceEdit* self, QShowEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_ShowEvent_IsBase(true);
        vqkeysequenceedit->showEvent(event);
    } else {
        vqkeysequenceedit->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnShowEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_ShowEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_HideEvent(QKeySequenceEdit* self, QHideEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->hideEvent(event);
    } else {
        vqkeysequenceedit->hideEvent(event);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseHideEvent(QKeySequenceEdit* self, QHideEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_HideEvent_IsBase(true);
        vqkeysequenceedit->hideEvent(event);
    } else {
        vqkeysequenceedit->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnHideEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_HideEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QKeySequenceEdit_NativeEvent(QKeySequenceEdit* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        return vqkeysequenceedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqkeysequenceedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QKeySequenceEdit_QBaseNativeEvent(QKeySequenceEdit* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_NativeEvent_IsBase(true);
        return vqkeysequenceedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqkeysequenceedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnNativeEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_NativeEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_ChangeEvent(QKeySequenceEdit* self, QEvent* param1) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->changeEvent(param1);
    } else {
        vqkeysequenceedit->changeEvent(param1);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseChangeEvent(QKeySequenceEdit* self, QEvent* param1) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_ChangeEvent_IsBase(true);
        vqkeysequenceedit->changeEvent(param1);
    } else {
        vqkeysequenceedit->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnChangeEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_ChangeEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QKeySequenceEdit_Metric(const QKeySequenceEdit* self, int param1) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self))) {
        return vqkeysequenceedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqkeysequenceedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QKeySequenceEdit_QBaseMetric(const QKeySequenceEdit* self, int param1) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self))) {
        vqkeysequenceedit->setQKeySequenceEdit_Metric_IsBase(true);
        return vqkeysequenceedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqkeysequenceedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnMetric(const QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self))) {
        vqkeysequenceedit->setQKeySequenceEdit_Metric_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_InitPainter(const QKeySequenceEdit* self, QPainter* painter) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self))) {
        vqkeysequenceedit->initPainter(painter);
    } else {
        vqkeysequenceedit->initPainter(painter);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseInitPainter(const QKeySequenceEdit* self, QPainter* painter) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self))) {
        vqkeysequenceedit->setQKeySequenceEdit_InitPainter_IsBase(true);
        vqkeysequenceedit->initPainter(painter);
    } else {
        vqkeysequenceedit->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnInitPainter(const QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self))) {
        vqkeysequenceedit->setQKeySequenceEdit_InitPainter_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QKeySequenceEdit_Redirected(const QKeySequenceEdit* self, QPoint* offset) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self))) {
        return vqkeysequenceedit->redirected(offset);
    } else {
        return vqkeysequenceedit->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QKeySequenceEdit_QBaseRedirected(const QKeySequenceEdit* self, QPoint* offset) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self))) {
        vqkeysequenceedit->setQKeySequenceEdit_Redirected_IsBase(true);
        return vqkeysequenceedit->redirected(offset);
    } else {
        return vqkeysequenceedit->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnRedirected(const QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self))) {
        vqkeysequenceedit->setQKeySequenceEdit_Redirected_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QKeySequenceEdit_SharedPainter(const QKeySequenceEdit* self) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self))) {
        return vqkeysequenceedit->sharedPainter();
    } else {
        return vqkeysequenceedit->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QKeySequenceEdit_QBaseSharedPainter(const QKeySequenceEdit* self) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self))) {
        vqkeysequenceedit->setQKeySequenceEdit_SharedPainter_IsBase(true);
        return vqkeysequenceedit->sharedPainter();
    } else {
        return vqkeysequenceedit->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnSharedPainter(const QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self))) {
        vqkeysequenceedit->setQKeySequenceEdit_SharedPainter_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_InputMethodEvent(QKeySequenceEdit* self, QInputMethodEvent* param1) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->inputMethodEvent(param1);
    } else {
        vqkeysequenceedit->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseInputMethodEvent(QKeySequenceEdit* self, QInputMethodEvent* param1) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_InputMethodEvent_IsBase(true);
        vqkeysequenceedit->inputMethodEvent(param1);
    } else {
        vqkeysequenceedit->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnInputMethodEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_InputMethodEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QKeySequenceEdit_InputMethodQuery(const QKeySequenceEdit* self, int param1) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self))) {
        return new QVariant(vqkeysequenceedit->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QKeySequenceEdit_QBaseInputMethodQuery(const QKeySequenceEdit* self, int param1) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self))) {
        vqkeysequenceedit->setQKeySequenceEdit_InputMethodQuery_IsBase(true);
        return new QVariant(vqkeysequenceedit->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnInputMethodQuery(const QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self))) {
        vqkeysequenceedit->setQKeySequenceEdit_InputMethodQuery_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QKeySequenceEdit_FocusNextPrevChild(QKeySequenceEdit* self, bool next) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        return vqkeysequenceedit->focusNextPrevChild(next);
    } else {
        return vqkeysequenceedit->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QKeySequenceEdit_QBaseFocusNextPrevChild(QKeySequenceEdit* self, bool next) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_FocusNextPrevChild_IsBase(true);
        return vqkeysequenceedit->focusNextPrevChild(next);
    } else {
        return vqkeysequenceedit->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnFocusNextPrevChild(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QKeySequenceEdit_EventFilter(QKeySequenceEdit* self, QObject* watched, QEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        return vqkeysequenceedit->eventFilter(watched, event);
    } else {
        return vqkeysequenceedit->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QKeySequenceEdit_QBaseEventFilter(QKeySequenceEdit* self, QObject* watched, QEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_EventFilter_IsBase(true);
        return vqkeysequenceedit->eventFilter(watched, event);
    } else {
        return vqkeysequenceedit->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnEventFilter(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_EventFilter_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_ChildEvent(QKeySequenceEdit* self, QChildEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->childEvent(event);
    } else {
        vqkeysequenceedit->childEvent(event);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseChildEvent(QKeySequenceEdit* self, QChildEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_ChildEvent_IsBase(true);
        vqkeysequenceedit->childEvent(event);
    } else {
        vqkeysequenceedit->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnChildEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_ChildEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_CustomEvent(QKeySequenceEdit* self, QEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->customEvent(event);
    } else {
        vqkeysequenceedit->customEvent(event);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseCustomEvent(QKeySequenceEdit* self, QEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_CustomEvent_IsBase(true);
        vqkeysequenceedit->customEvent(event);
    } else {
        vqkeysequenceedit->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnCustomEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_CustomEvent_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_ConnectNotify(QKeySequenceEdit* self, QMetaMethod* signal) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->connectNotify(*signal);
    } else {
        vqkeysequenceedit->connectNotify(*signal);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseConnectNotify(QKeySequenceEdit* self, QMetaMethod* signal) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_ConnectNotify_IsBase(true);
        vqkeysequenceedit->connectNotify(*signal);
    } else {
        vqkeysequenceedit->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnConnectNotify(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_ConnectNotify_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_DisconnectNotify(QKeySequenceEdit* self, QMetaMethod* signal) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->disconnectNotify(*signal);
    } else {
        vqkeysequenceedit->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseDisconnectNotify(QKeySequenceEdit* self, QMetaMethod* signal) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_DisconnectNotify_IsBase(true);
        vqkeysequenceedit->disconnectNotify(*signal);
    } else {
        vqkeysequenceedit->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnDisconnectNotify(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_DisconnectNotify_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_UpdateMicroFocus(QKeySequenceEdit* self) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->updateMicroFocus();
    } else {
        vqkeysequenceedit->updateMicroFocus();
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseUpdateMicroFocus(QKeySequenceEdit* self) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_UpdateMicroFocus_IsBase(true);
        vqkeysequenceedit->updateMicroFocus();
    } else {
        vqkeysequenceedit->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnUpdateMicroFocus(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_Create(QKeySequenceEdit* self) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->create();
    } else {
        vqkeysequenceedit->create();
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseCreate(QKeySequenceEdit* self) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_Create_IsBase(true);
        vqkeysequenceedit->create();
    } else {
        vqkeysequenceedit->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnCreate(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_Create_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QKeySequenceEdit_Destroy(QKeySequenceEdit* self) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->destroy();
    } else {
        vqkeysequenceedit->destroy();
    }
}

// Base class handler implementation
void QKeySequenceEdit_QBaseDestroy(QKeySequenceEdit* self) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_Destroy_IsBase(true);
        vqkeysequenceedit->destroy();
    } else {
        vqkeysequenceedit->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnDestroy(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_Destroy_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QKeySequenceEdit_FocusNextChild(QKeySequenceEdit* self) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        return vqkeysequenceedit->focusNextChild();
    } else {
        return vqkeysequenceedit->focusNextChild();
    }
}

// Base class handler implementation
bool QKeySequenceEdit_QBaseFocusNextChild(QKeySequenceEdit* self) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_FocusNextChild_IsBase(true);
        return vqkeysequenceedit->focusNextChild();
    } else {
        return vqkeysequenceedit->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnFocusNextChild(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_FocusNextChild_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QKeySequenceEdit_FocusPreviousChild(QKeySequenceEdit* self) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        return vqkeysequenceedit->focusPreviousChild();
    } else {
        return vqkeysequenceedit->focusPreviousChild();
    }
}

// Base class handler implementation
bool QKeySequenceEdit_QBaseFocusPreviousChild(QKeySequenceEdit* self) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_FocusPreviousChild_IsBase(true);
        return vqkeysequenceedit->focusPreviousChild();
    } else {
        return vqkeysequenceedit->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnFocusPreviousChild(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->setQKeySequenceEdit_FocusPreviousChild_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QKeySequenceEdit_Sender(const QKeySequenceEdit* self) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self))) {
        return vqkeysequenceedit->sender();
    } else {
        return vqkeysequenceedit->sender();
    }
}

// Base class handler implementation
QObject* QKeySequenceEdit_QBaseSender(const QKeySequenceEdit* self) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self))) {
        vqkeysequenceedit->setQKeySequenceEdit_Sender_IsBase(true);
        return vqkeysequenceedit->sender();
    } else {
        return vqkeysequenceedit->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnSender(const QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self))) {
        vqkeysequenceedit->setQKeySequenceEdit_Sender_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QKeySequenceEdit_SenderSignalIndex(const QKeySequenceEdit* self) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self))) {
        return vqkeysequenceedit->senderSignalIndex();
    } else {
        return vqkeysequenceedit->senderSignalIndex();
    }
}

// Base class handler implementation
int QKeySequenceEdit_QBaseSenderSignalIndex(const QKeySequenceEdit* self) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self))) {
        vqkeysequenceedit->setQKeySequenceEdit_SenderSignalIndex_IsBase(true);
        return vqkeysequenceedit->senderSignalIndex();
    } else {
        return vqkeysequenceedit->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnSenderSignalIndex(const QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self))) {
        vqkeysequenceedit->setQKeySequenceEdit_SenderSignalIndex_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QKeySequenceEdit_Receivers(const QKeySequenceEdit* self, const char* signal) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self))) {
        return vqkeysequenceedit->receivers(signal);
    } else {
        return vqkeysequenceedit->receivers(signal);
    }
}

// Base class handler implementation
int QKeySequenceEdit_QBaseReceivers(const QKeySequenceEdit* self, const char* signal) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self))) {
        vqkeysequenceedit->setQKeySequenceEdit_Receivers_IsBase(true);
        return vqkeysequenceedit->receivers(signal);
    } else {
        return vqkeysequenceedit->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnReceivers(const QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self))) {
        vqkeysequenceedit->setQKeySequenceEdit_Receivers_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QKeySequenceEdit_IsSignalConnected(const QKeySequenceEdit* self, QMetaMethod* signal) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self))) {
        return vqkeysequenceedit->isSignalConnected(*signal);
    } else {
        return vqkeysequenceedit->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QKeySequenceEdit_QBaseIsSignalConnected(const QKeySequenceEdit* self, QMetaMethod* signal) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self))) {
        vqkeysequenceedit->setQKeySequenceEdit_IsSignalConnected_IsBase(true);
        return vqkeysequenceedit->isSignalConnected(*signal);
    } else {
        return vqkeysequenceedit->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnIsSignalConnected(const QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self))) {
        vqkeysequenceedit->setQKeySequenceEdit_IsSignalConnected_Callback(reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_IsSignalConnected_Callback>(slot));
    }
}

void QKeySequenceEdit_Delete(QKeySequenceEdit* self) {
    delete self;
}
