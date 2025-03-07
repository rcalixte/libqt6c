#include <QAbstractSpinBox>
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
#include <QLineEdit>
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
#include <QStyleOptionSpinBox>
#include <QTabletEvent>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <QWindow>
#include <qabstractspinbox.h>
#include "libqabstractspinbox.hpp"
#include "libqabstractspinbox.hxx"

QAbstractSpinBox* QAbstractSpinBox_new(QWidget* parent) {
    return new VirtualQAbstractSpinBox(parent);
}

QAbstractSpinBox* QAbstractSpinBox_new2() {
    return new VirtualQAbstractSpinBox();
}

QMetaObject* QAbstractSpinBox_MetaObject(const QAbstractSpinBox* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAbstractSpinBox_Metacast(QAbstractSpinBox* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAbstractSpinBox_Metacall(QAbstractSpinBox* self, int param1, int param2, void** param3) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAbstractSpinBox_OnMetacall(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_Metacall_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QAbstractSpinBox_QBaseMetacall(QAbstractSpinBox* self, int param1, int param2, void** param3) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_Metacall_IsBase(true);
        return vqabstractspinbox->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QAbstractSpinBox_Tr(const char* s) {
    QString _ret = QAbstractSpinBox::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QAbstractSpinBox_ButtonSymbols(const QAbstractSpinBox* self) {
    return static_cast<int>(self->buttonSymbols());
}

void QAbstractSpinBox_SetButtonSymbols(QAbstractSpinBox* self, int bs) {
    self->setButtonSymbols(static_cast<QAbstractSpinBox::ButtonSymbols>(bs));
}

void QAbstractSpinBox_SetCorrectionMode(QAbstractSpinBox* self, int cm) {
    self->setCorrectionMode(static_cast<QAbstractSpinBox::CorrectionMode>(cm));
}

int QAbstractSpinBox_CorrectionMode(const QAbstractSpinBox* self) {
    return static_cast<int>(self->correctionMode());
}

bool QAbstractSpinBox_HasAcceptableInput(const QAbstractSpinBox* self) {
    return self->hasAcceptableInput();
}

libqt_string QAbstractSpinBox_Text(const QAbstractSpinBox* self) {
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

libqt_string QAbstractSpinBox_SpecialValueText(const QAbstractSpinBox* self) {
    QString _ret = self->specialValueText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QAbstractSpinBox_SetSpecialValueText(QAbstractSpinBox* self, libqt_string txt) {
    QString txt_QString = QString::fromUtf8(txt.data, txt.len);
    self->setSpecialValueText(txt_QString);
}

bool QAbstractSpinBox_Wrapping(const QAbstractSpinBox* self) {
    return self->wrapping();
}

void QAbstractSpinBox_SetWrapping(QAbstractSpinBox* self, bool w) {
    self->setWrapping(w);
}

void QAbstractSpinBox_SetReadOnly(QAbstractSpinBox* self, bool r) {
    self->setReadOnly(r);
}

bool QAbstractSpinBox_IsReadOnly(const QAbstractSpinBox* self) {
    return self->isReadOnly();
}

void QAbstractSpinBox_SetKeyboardTracking(QAbstractSpinBox* self, bool kt) {
    self->setKeyboardTracking(kt);
}

bool QAbstractSpinBox_KeyboardTracking(const QAbstractSpinBox* self) {
    return self->keyboardTracking();
}

void QAbstractSpinBox_SetAlignment(QAbstractSpinBox* self, int flag) {
    self->setAlignment(static_cast<Qt::Alignment>(flag));
}

int QAbstractSpinBox_Alignment(const QAbstractSpinBox* self) {
    return static_cast<int>(self->alignment());
}

void QAbstractSpinBox_SetFrame(QAbstractSpinBox* self, bool frame) {
    self->setFrame(frame);
}

bool QAbstractSpinBox_HasFrame(const QAbstractSpinBox* self) {
    return self->hasFrame();
}

void QAbstractSpinBox_SetAccelerated(QAbstractSpinBox* self, bool on) {
    self->setAccelerated(on);
}

bool QAbstractSpinBox_IsAccelerated(const QAbstractSpinBox* self) {
    return self->isAccelerated();
}

void QAbstractSpinBox_SetGroupSeparatorShown(QAbstractSpinBox* self, bool shown) {
    self->setGroupSeparatorShown(shown);
}

bool QAbstractSpinBox_IsGroupSeparatorShown(const QAbstractSpinBox* self) {
    return self->isGroupSeparatorShown();
}

void QAbstractSpinBox_InterpretText(QAbstractSpinBox* self) {
    self->interpretText();
}

void QAbstractSpinBox_StepUp(QAbstractSpinBox* self) {
    self->stepUp();
}

void QAbstractSpinBox_StepDown(QAbstractSpinBox* self) {
    self->stepDown();
}

void QAbstractSpinBox_SelectAll(QAbstractSpinBox* self) {
    self->selectAll();
}

void QAbstractSpinBox_EditingFinished(QAbstractSpinBox* self) {
    self->editingFinished();
}

void QAbstractSpinBox_Connect_EditingFinished(QAbstractSpinBox* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSpinBox*) = reinterpret_cast<void (*)(QAbstractSpinBox*)>(slot);
    QAbstractSpinBox::connect(self, &QAbstractSpinBox::editingFinished, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QAbstractSpinBox_Tr2(const char* s, const char* c) {
    QString _ret = QAbstractSpinBox::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QAbstractSpinBox_Tr3(const char* s, const char* c, int n) {
    QString _ret = QAbstractSpinBox::tr(s, c, static_cast<int>(n));
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
QSize* QAbstractSpinBox_SizeHint(const QAbstractSpinBox* self) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        return new QSize(vqabstractspinbox->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QAbstractSpinBox_QBaseSizeHint(const QAbstractSpinBox* self) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        vqabstractspinbox->setQAbstractSpinBox_SizeHint_IsBase(true);
        return new QSize(vqabstractspinbox->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnSizeHint(const QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        vqabstractspinbox->setQAbstractSpinBox_SizeHint_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QAbstractSpinBox_MinimumSizeHint(const QAbstractSpinBox* self) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        return new QSize(vqabstractspinbox->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QAbstractSpinBox_QBaseMinimumSizeHint(const QAbstractSpinBox* self) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        vqabstractspinbox->setQAbstractSpinBox_MinimumSizeHint_IsBase(true);
        return new QSize(vqabstractspinbox->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnMinimumSizeHint(const QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        vqabstractspinbox->setQAbstractSpinBox_MinimumSizeHint_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSpinBox_Event(QAbstractSpinBox* self, QEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        return vqabstractspinbox->event(event);
    } else {
        return vqabstractspinbox->event(event);
    }
}

// Base class handler implementation
bool QAbstractSpinBox_QBaseEvent(QAbstractSpinBox* self, QEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_Event_IsBase(true);
        return vqabstractspinbox->event(event);
    } else {
        return vqabstractspinbox->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_Event_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_Event_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QAbstractSpinBox_InputMethodQuery(const QAbstractSpinBox* self, int param1) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        return new QVariant(vqabstractspinbox->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QAbstractSpinBox_QBaseInputMethodQuery(const QAbstractSpinBox* self, int param1) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        vqabstractspinbox->setQAbstractSpinBox_InputMethodQuery_IsBase(true);
        return new QVariant(vqabstractspinbox->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnInputMethodQuery(const QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        vqabstractspinbox->setQAbstractSpinBox_InputMethodQuery_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractSpinBox_Validate(const QAbstractSpinBox* self, libqt_string input, int* pos) {
    QString input_QString = QString::fromUtf8(input.data, input.len);
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        return static_cast<int>(vqabstractspinbox->validate(input_QString, static_cast<int&>(*pos)));
    } else {
        return static_cast<int>(vqabstractspinbox->validate(input_QString, static_cast<int&>(*pos)));
    }
}

// Base class handler implementation
int QAbstractSpinBox_QBaseValidate(const QAbstractSpinBox* self, libqt_string input, int* pos) {
    QString input_QString = QString::fromUtf8(input.data, input.len);
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        vqabstractspinbox->setQAbstractSpinBox_Validate_IsBase(true);
        return static_cast<int>(vqabstractspinbox->validate(input_QString, static_cast<int&>(*pos)));
    } else {
        return static_cast<int>(vqabstractspinbox->validate(input_QString, static_cast<int&>(*pos)));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnValidate(const QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        vqabstractspinbox->setQAbstractSpinBox_Validate_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_Validate_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_Fixup(const QAbstractSpinBox* self, libqt_string input) {
    QString input_QString = QString::fromUtf8(input.data, input.len);
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        vqabstractspinbox->fixup(input_QString);
    } else {
        vqabstractspinbox->fixup(input_QString);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseFixup(const QAbstractSpinBox* self, libqt_string input) {
    QString input_QString = QString::fromUtf8(input.data, input.len);
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        vqabstractspinbox->setQAbstractSpinBox_Fixup_IsBase(true);
        vqabstractspinbox->fixup(input_QString);
    } else {
        vqabstractspinbox->fixup(input_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnFixup(const QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        vqabstractspinbox->setQAbstractSpinBox_Fixup_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_Fixup_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_StepBy(QAbstractSpinBox* self, int steps) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->stepBy(static_cast<int>(steps));
    } else {
        vqabstractspinbox->stepBy(static_cast<int>(steps));
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseStepBy(QAbstractSpinBox* self, int steps) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_StepBy_IsBase(true);
        vqabstractspinbox->stepBy(static_cast<int>(steps));
    } else {
        vqabstractspinbox->stepBy(static_cast<int>(steps));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnStepBy(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_StepBy_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_StepBy_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_Clear(QAbstractSpinBox* self) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->clear();
    } else {
        vqabstractspinbox->clear();
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseClear(QAbstractSpinBox* self) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_Clear_IsBase(true);
        vqabstractspinbox->clear();
    } else {
        vqabstractspinbox->clear();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnClear(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_Clear_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_Clear_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_ResizeEvent(QAbstractSpinBox* self, QResizeEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->resizeEvent(event);
    } else {
        vqabstractspinbox->resizeEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseResizeEvent(QAbstractSpinBox* self, QResizeEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_ResizeEvent_IsBase(true);
        vqabstractspinbox->resizeEvent(event);
    } else {
        vqabstractspinbox->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnResizeEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_ResizeEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_KeyPressEvent(QAbstractSpinBox* self, QKeyEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->keyPressEvent(event);
    } else {
        vqabstractspinbox->keyPressEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseKeyPressEvent(QAbstractSpinBox* self, QKeyEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_KeyPressEvent_IsBase(true);
        vqabstractspinbox->keyPressEvent(event);
    } else {
        vqabstractspinbox->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnKeyPressEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_KeyPressEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_KeyReleaseEvent(QAbstractSpinBox* self, QKeyEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->keyReleaseEvent(event);
    } else {
        vqabstractspinbox->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseKeyReleaseEvent(QAbstractSpinBox* self, QKeyEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_KeyReleaseEvent_IsBase(true);
        vqabstractspinbox->keyReleaseEvent(event);
    } else {
        vqabstractspinbox->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnKeyReleaseEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_WheelEvent(QAbstractSpinBox* self, QWheelEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->wheelEvent(event);
    } else {
        vqabstractspinbox->wheelEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseWheelEvent(QAbstractSpinBox* self, QWheelEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_WheelEvent_IsBase(true);
        vqabstractspinbox->wheelEvent(event);
    } else {
        vqabstractspinbox->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnWheelEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_WheelEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_FocusInEvent(QAbstractSpinBox* self, QFocusEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->focusInEvent(event);
    } else {
        vqabstractspinbox->focusInEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseFocusInEvent(QAbstractSpinBox* self, QFocusEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_FocusInEvent_IsBase(true);
        vqabstractspinbox->focusInEvent(event);
    } else {
        vqabstractspinbox->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnFocusInEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_FocusInEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_FocusOutEvent(QAbstractSpinBox* self, QFocusEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->focusOutEvent(event);
    } else {
        vqabstractspinbox->focusOutEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseFocusOutEvent(QAbstractSpinBox* self, QFocusEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_FocusOutEvent_IsBase(true);
        vqabstractspinbox->focusOutEvent(event);
    } else {
        vqabstractspinbox->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnFocusOutEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_FocusOutEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_ContextMenuEvent(QAbstractSpinBox* self, QContextMenuEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->contextMenuEvent(event);
    } else {
        vqabstractspinbox->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseContextMenuEvent(QAbstractSpinBox* self, QContextMenuEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_ContextMenuEvent_IsBase(true);
        vqabstractspinbox->contextMenuEvent(event);
    } else {
        vqabstractspinbox->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnContextMenuEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_ContextMenuEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_ChangeEvent(QAbstractSpinBox* self, QEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->changeEvent(event);
    } else {
        vqabstractspinbox->changeEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseChangeEvent(QAbstractSpinBox* self, QEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_ChangeEvent_IsBase(true);
        vqabstractspinbox->changeEvent(event);
    } else {
        vqabstractspinbox->changeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnChangeEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_ChangeEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_CloseEvent(QAbstractSpinBox* self, QCloseEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->closeEvent(event);
    } else {
        vqabstractspinbox->closeEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseCloseEvent(QAbstractSpinBox* self, QCloseEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_CloseEvent_IsBase(true);
        vqabstractspinbox->closeEvent(event);
    } else {
        vqabstractspinbox->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnCloseEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_CloseEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_HideEvent(QAbstractSpinBox* self, QHideEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->hideEvent(event);
    } else {
        vqabstractspinbox->hideEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseHideEvent(QAbstractSpinBox* self, QHideEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_HideEvent_IsBase(true);
        vqabstractspinbox->hideEvent(event);
    } else {
        vqabstractspinbox->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnHideEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_HideEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_MousePressEvent(QAbstractSpinBox* self, QMouseEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->mousePressEvent(event);
    } else {
        vqabstractspinbox->mousePressEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseMousePressEvent(QAbstractSpinBox* self, QMouseEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_MousePressEvent_IsBase(true);
        vqabstractspinbox->mousePressEvent(event);
    } else {
        vqabstractspinbox->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnMousePressEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_MousePressEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_MouseReleaseEvent(QAbstractSpinBox* self, QMouseEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->mouseReleaseEvent(event);
    } else {
        vqabstractspinbox->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseMouseReleaseEvent(QAbstractSpinBox* self, QMouseEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_MouseReleaseEvent_IsBase(true);
        vqabstractspinbox->mouseReleaseEvent(event);
    } else {
        vqabstractspinbox->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnMouseReleaseEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_MouseMoveEvent(QAbstractSpinBox* self, QMouseEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->mouseMoveEvent(event);
    } else {
        vqabstractspinbox->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseMouseMoveEvent(QAbstractSpinBox* self, QMouseEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_MouseMoveEvent_IsBase(true);
        vqabstractspinbox->mouseMoveEvent(event);
    } else {
        vqabstractspinbox->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnMouseMoveEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_MouseMoveEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_TimerEvent(QAbstractSpinBox* self, QTimerEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->timerEvent(event);
    } else {
        vqabstractspinbox->timerEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseTimerEvent(QAbstractSpinBox* self, QTimerEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_TimerEvent_IsBase(true);
        vqabstractspinbox->timerEvent(event);
    } else {
        vqabstractspinbox->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnTimerEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_TimerEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_PaintEvent(QAbstractSpinBox* self, QPaintEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->paintEvent(event);
    } else {
        vqabstractspinbox->paintEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBasePaintEvent(QAbstractSpinBox* self, QPaintEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_PaintEvent_IsBase(true);
        vqabstractspinbox->paintEvent(event);
    } else {
        vqabstractspinbox->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnPaintEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_PaintEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_ShowEvent(QAbstractSpinBox* self, QShowEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->showEvent(event);
    } else {
        vqabstractspinbox->showEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseShowEvent(QAbstractSpinBox* self, QShowEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_ShowEvent_IsBase(true);
        vqabstractspinbox->showEvent(event);
    } else {
        vqabstractspinbox->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnShowEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_ShowEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_InitStyleOption(const QAbstractSpinBox* self, QStyleOptionSpinBox* option) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        vqabstractspinbox->initStyleOption(option);
    } else {
        vqabstractspinbox->initStyleOption(option);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseInitStyleOption(const QAbstractSpinBox* self, QStyleOptionSpinBox* option) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        vqabstractspinbox->setQAbstractSpinBox_InitStyleOption_IsBase(true);
        vqabstractspinbox->initStyleOption(option);
    } else {
        vqabstractspinbox->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnInitStyleOption(const QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        vqabstractspinbox->setQAbstractSpinBox_InitStyleOption_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractSpinBox_StepEnabled(const QAbstractSpinBox* self) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        return static_cast<int>(vqabstractspinbox->stepEnabled());
    } else {
        return static_cast<int>(vqabstractspinbox->stepEnabled());
    }
}

// Base class handler implementation
int QAbstractSpinBox_QBaseStepEnabled(const QAbstractSpinBox* self) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        vqabstractspinbox->setQAbstractSpinBox_StepEnabled_IsBase(true);
        return static_cast<int>(vqabstractspinbox->stepEnabled());
    } else {
        return static_cast<int>(vqabstractspinbox->stepEnabled());
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnStepEnabled(const QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        vqabstractspinbox->setQAbstractSpinBox_StepEnabled_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_StepEnabled_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractSpinBox_DevType(const QAbstractSpinBox* self) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        return vqabstractspinbox->devType();
    } else {
        return vqabstractspinbox->devType();
    }
}

// Base class handler implementation
int QAbstractSpinBox_QBaseDevType(const QAbstractSpinBox* self) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        vqabstractspinbox->setQAbstractSpinBox_DevType_IsBase(true);
        return vqabstractspinbox->devType();
    } else {
        return vqabstractspinbox->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnDevType(const QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        vqabstractspinbox->setQAbstractSpinBox_DevType_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_SetVisible(QAbstractSpinBox* self, bool visible) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setVisible(visible);
    } else {
        vqabstractspinbox->setVisible(visible);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseSetVisible(QAbstractSpinBox* self, bool visible) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_SetVisible_IsBase(true);
        vqabstractspinbox->setVisible(visible);
    } else {
        vqabstractspinbox->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnSetVisible(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_SetVisible_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractSpinBox_HeightForWidth(const QAbstractSpinBox* self, int param1) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        return vqabstractspinbox->heightForWidth(static_cast<int>(param1));
    } else {
        return vqabstractspinbox->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QAbstractSpinBox_QBaseHeightForWidth(const QAbstractSpinBox* self, int param1) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        vqabstractspinbox->setQAbstractSpinBox_HeightForWidth_IsBase(true);
        return vqabstractspinbox->heightForWidth(static_cast<int>(param1));
    } else {
        return vqabstractspinbox->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnHeightForWidth(const QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        vqabstractspinbox->setQAbstractSpinBox_HeightForWidth_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSpinBox_HasHeightForWidth(const QAbstractSpinBox* self) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        return vqabstractspinbox->hasHeightForWidth();
    } else {
        return vqabstractspinbox->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QAbstractSpinBox_QBaseHasHeightForWidth(const QAbstractSpinBox* self) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        vqabstractspinbox->setQAbstractSpinBox_HasHeightForWidth_IsBase(true);
        return vqabstractspinbox->hasHeightForWidth();
    } else {
        return vqabstractspinbox->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnHasHeightForWidth(const QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        vqabstractspinbox->setQAbstractSpinBox_HasHeightForWidth_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QAbstractSpinBox_PaintEngine(const QAbstractSpinBox* self) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        return vqabstractspinbox->paintEngine();
    } else {
        return vqabstractspinbox->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QAbstractSpinBox_QBasePaintEngine(const QAbstractSpinBox* self) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        vqabstractspinbox->setQAbstractSpinBox_PaintEngine_IsBase(true);
        return vqabstractspinbox->paintEngine();
    } else {
        return vqabstractspinbox->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnPaintEngine(const QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        vqabstractspinbox->setQAbstractSpinBox_PaintEngine_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_MouseDoubleClickEvent(QAbstractSpinBox* self, QMouseEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->mouseDoubleClickEvent(event);
    } else {
        vqabstractspinbox->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseMouseDoubleClickEvent(QAbstractSpinBox* self, QMouseEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_MouseDoubleClickEvent_IsBase(true);
        vqabstractspinbox->mouseDoubleClickEvent(event);
    } else {
        vqabstractspinbox->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnMouseDoubleClickEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_EnterEvent(QAbstractSpinBox* self, QEnterEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->enterEvent(event);
    } else {
        vqabstractspinbox->enterEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseEnterEvent(QAbstractSpinBox* self, QEnterEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_EnterEvent_IsBase(true);
        vqabstractspinbox->enterEvent(event);
    } else {
        vqabstractspinbox->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnEnterEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_EnterEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_LeaveEvent(QAbstractSpinBox* self, QEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->leaveEvent(event);
    } else {
        vqabstractspinbox->leaveEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseLeaveEvent(QAbstractSpinBox* self, QEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_LeaveEvent_IsBase(true);
        vqabstractspinbox->leaveEvent(event);
    } else {
        vqabstractspinbox->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnLeaveEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_LeaveEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_MoveEvent(QAbstractSpinBox* self, QMoveEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->moveEvent(event);
    } else {
        vqabstractspinbox->moveEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseMoveEvent(QAbstractSpinBox* self, QMoveEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_MoveEvent_IsBase(true);
        vqabstractspinbox->moveEvent(event);
    } else {
        vqabstractspinbox->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnMoveEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_MoveEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_TabletEvent(QAbstractSpinBox* self, QTabletEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->tabletEvent(event);
    } else {
        vqabstractspinbox->tabletEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseTabletEvent(QAbstractSpinBox* self, QTabletEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_TabletEvent_IsBase(true);
        vqabstractspinbox->tabletEvent(event);
    } else {
        vqabstractspinbox->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnTabletEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_TabletEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_ActionEvent(QAbstractSpinBox* self, QActionEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->actionEvent(event);
    } else {
        vqabstractspinbox->actionEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseActionEvent(QAbstractSpinBox* self, QActionEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_ActionEvent_IsBase(true);
        vqabstractspinbox->actionEvent(event);
    } else {
        vqabstractspinbox->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnActionEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_ActionEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_DragEnterEvent(QAbstractSpinBox* self, QDragEnterEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->dragEnterEvent(event);
    } else {
        vqabstractspinbox->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseDragEnterEvent(QAbstractSpinBox* self, QDragEnterEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_DragEnterEvent_IsBase(true);
        vqabstractspinbox->dragEnterEvent(event);
    } else {
        vqabstractspinbox->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnDragEnterEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_DragEnterEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_DragMoveEvent(QAbstractSpinBox* self, QDragMoveEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->dragMoveEvent(event);
    } else {
        vqabstractspinbox->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseDragMoveEvent(QAbstractSpinBox* self, QDragMoveEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_DragMoveEvent_IsBase(true);
        vqabstractspinbox->dragMoveEvent(event);
    } else {
        vqabstractspinbox->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnDragMoveEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_DragMoveEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_DragLeaveEvent(QAbstractSpinBox* self, QDragLeaveEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->dragLeaveEvent(event);
    } else {
        vqabstractspinbox->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseDragLeaveEvent(QAbstractSpinBox* self, QDragLeaveEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_DragLeaveEvent_IsBase(true);
        vqabstractspinbox->dragLeaveEvent(event);
    } else {
        vqabstractspinbox->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnDragLeaveEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_DragLeaveEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_DropEvent(QAbstractSpinBox* self, QDropEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->dropEvent(event);
    } else {
        vqabstractspinbox->dropEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseDropEvent(QAbstractSpinBox* self, QDropEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_DropEvent_IsBase(true);
        vqabstractspinbox->dropEvent(event);
    } else {
        vqabstractspinbox->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnDropEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_DropEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSpinBox_NativeEvent(QAbstractSpinBox* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        return vqabstractspinbox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqabstractspinbox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QAbstractSpinBox_QBaseNativeEvent(QAbstractSpinBox* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_NativeEvent_IsBase(true);
        return vqabstractspinbox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqabstractspinbox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnNativeEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_NativeEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractSpinBox_Metric(const QAbstractSpinBox* self, int param1) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        return vqabstractspinbox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqabstractspinbox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QAbstractSpinBox_QBaseMetric(const QAbstractSpinBox* self, int param1) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        vqabstractspinbox->setQAbstractSpinBox_Metric_IsBase(true);
        return vqabstractspinbox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqabstractspinbox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnMetric(const QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        vqabstractspinbox->setQAbstractSpinBox_Metric_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_InitPainter(const QAbstractSpinBox* self, QPainter* painter) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        vqabstractspinbox->initPainter(painter);
    } else {
        vqabstractspinbox->initPainter(painter);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseInitPainter(const QAbstractSpinBox* self, QPainter* painter) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        vqabstractspinbox->setQAbstractSpinBox_InitPainter_IsBase(true);
        vqabstractspinbox->initPainter(painter);
    } else {
        vqabstractspinbox->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnInitPainter(const QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        vqabstractspinbox->setQAbstractSpinBox_InitPainter_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QAbstractSpinBox_Redirected(const QAbstractSpinBox* self, QPoint* offset) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        return vqabstractspinbox->redirected(offset);
    } else {
        return vqabstractspinbox->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QAbstractSpinBox_QBaseRedirected(const QAbstractSpinBox* self, QPoint* offset) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        vqabstractspinbox->setQAbstractSpinBox_Redirected_IsBase(true);
        return vqabstractspinbox->redirected(offset);
    } else {
        return vqabstractspinbox->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnRedirected(const QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        vqabstractspinbox->setQAbstractSpinBox_Redirected_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QAbstractSpinBox_SharedPainter(const QAbstractSpinBox* self) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        return vqabstractspinbox->sharedPainter();
    } else {
        return vqabstractspinbox->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QAbstractSpinBox_QBaseSharedPainter(const QAbstractSpinBox* self) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        vqabstractspinbox->setQAbstractSpinBox_SharedPainter_IsBase(true);
        return vqabstractspinbox->sharedPainter();
    } else {
        return vqabstractspinbox->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnSharedPainter(const QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        vqabstractspinbox->setQAbstractSpinBox_SharedPainter_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_InputMethodEvent(QAbstractSpinBox* self, QInputMethodEvent* param1) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->inputMethodEvent(param1);
    } else {
        vqabstractspinbox->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseInputMethodEvent(QAbstractSpinBox* self, QInputMethodEvent* param1) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_InputMethodEvent_IsBase(true);
        vqabstractspinbox->inputMethodEvent(param1);
    } else {
        vqabstractspinbox->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnInputMethodEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_InputMethodEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSpinBox_FocusNextPrevChild(QAbstractSpinBox* self, bool next) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        return vqabstractspinbox->focusNextPrevChild(next);
    } else {
        return vqabstractspinbox->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QAbstractSpinBox_QBaseFocusNextPrevChild(QAbstractSpinBox* self, bool next) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_FocusNextPrevChild_IsBase(true);
        return vqabstractspinbox->focusNextPrevChild(next);
    } else {
        return vqabstractspinbox->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnFocusNextPrevChild(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSpinBox_EventFilter(QAbstractSpinBox* self, QObject* watched, QEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        return vqabstractspinbox->eventFilter(watched, event);
    } else {
        return vqabstractspinbox->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QAbstractSpinBox_QBaseEventFilter(QAbstractSpinBox* self, QObject* watched, QEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_EventFilter_IsBase(true);
        return vqabstractspinbox->eventFilter(watched, event);
    } else {
        return vqabstractspinbox->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnEventFilter(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_EventFilter_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_ChildEvent(QAbstractSpinBox* self, QChildEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->childEvent(event);
    } else {
        vqabstractspinbox->childEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseChildEvent(QAbstractSpinBox* self, QChildEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_ChildEvent_IsBase(true);
        vqabstractspinbox->childEvent(event);
    } else {
        vqabstractspinbox->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnChildEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_ChildEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_CustomEvent(QAbstractSpinBox* self, QEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->customEvent(event);
    } else {
        vqabstractspinbox->customEvent(event);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseCustomEvent(QAbstractSpinBox* self, QEvent* event) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_CustomEvent_IsBase(true);
        vqabstractspinbox->customEvent(event);
    } else {
        vqabstractspinbox->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnCustomEvent(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_CustomEvent_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_ConnectNotify(QAbstractSpinBox* self, QMetaMethod* signal) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->connectNotify(*signal);
    } else {
        vqabstractspinbox->connectNotify(*signal);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseConnectNotify(QAbstractSpinBox* self, QMetaMethod* signal) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_ConnectNotify_IsBase(true);
        vqabstractspinbox->connectNotify(*signal);
    } else {
        vqabstractspinbox->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnConnectNotify(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_ConnectNotify_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_DisconnectNotify(QAbstractSpinBox* self, QMetaMethod* signal) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->disconnectNotify(*signal);
    } else {
        vqabstractspinbox->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseDisconnectNotify(QAbstractSpinBox* self, QMetaMethod* signal) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_DisconnectNotify_IsBase(true);
        vqabstractspinbox->disconnectNotify(*signal);
    } else {
        vqabstractspinbox->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnDisconnectNotify(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_DisconnectNotify_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QLineEdit* QAbstractSpinBox_LineEdit(const QAbstractSpinBox* self) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        return vqabstractspinbox->lineEdit();
    } else {
        return vqabstractspinbox->lineEdit();
    }
}

// Base class handler implementation
QLineEdit* QAbstractSpinBox_QBaseLineEdit(const QAbstractSpinBox* self) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        vqabstractspinbox->setQAbstractSpinBox_LineEdit_IsBase(true);
        return vqabstractspinbox->lineEdit();
    } else {
        return vqabstractspinbox->lineEdit();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnLineEdit(const QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        vqabstractspinbox->setQAbstractSpinBox_LineEdit_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_LineEdit_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_SetLineEdit(QAbstractSpinBox* self, QLineEdit* edit) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setLineEdit(edit);
    } else {
        vqabstractspinbox->setLineEdit(edit);
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseSetLineEdit(QAbstractSpinBox* self, QLineEdit* edit) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_SetLineEdit_IsBase(true);
        vqabstractspinbox->setLineEdit(edit);
    } else {
        vqabstractspinbox->setLineEdit(edit);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnSetLineEdit(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_SetLineEdit_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_SetLineEdit_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_UpdateMicroFocus(QAbstractSpinBox* self) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->updateMicroFocus();
    } else {
        vqabstractspinbox->updateMicroFocus();
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseUpdateMicroFocus(QAbstractSpinBox* self) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_UpdateMicroFocus_IsBase(true);
        vqabstractspinbox->updateMicroFocus();
    } else {
        vqabstractspinbox->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnUpdateMicroFocus(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_Create(QAbstractSpinBox* self) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->create();
    } else {
        vqabstractspinbox->create();
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseCreate(QAbstractSpinBox* self) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_Create_IsBase(true);
        vqabstractspinbox->create();
    } else {
        vqabstractspinbox->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnCreate(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_Create_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSpinBox_Destroy(QAbstractSpinBox* self) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->destroy();
    } else {
        vqabstractspinbox->destroy();
    }
}

// Base class handler implementation
void QAbstractSpinBox_QBaseDestroy(QAbstractSpinBox* self) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_Destroy_IsBase(true);
        vqabstractspinbox->destroy();
    } else {
        vqabstractspinbox->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnDestroy(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_Destroy_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSpinBox_FocusNextChild(QAbstractSpinBox* self) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        return vqabstractspinbox->focusNextChild();
    } else {
        return vqabstractspinbox->focusNextChild();
    }
}

// Base class handler implementation
bool QAbstractSpinBox_QBaseFocusNextChild(QAbstractSpinBox* self) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_FocusNextChild_IsBase(true);
        return vqabstractspinbox->focusNextChild();
    } else {
        return vqabstractspinbox->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnFocusNextChild(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_FocusNextChild_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSpinBox_FocusPreviousChild(QAbstractSpinBox* self) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        return vqabstractspinbox->focusPreviousChild();
    } else {
        return vqabstractspinbox->focusPreviousChild();
    }
}

// Base class handler implementation
bool QAbstractSpinBox_QBaseFocusPreviousChild(QAbstractSpinBox* self) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_FocusPreviousChild_IsBase(true);
        return vqabstractspinbox->focusPreviousChild();
    } else {
        return vqabstractspinbox->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnFocusPreviousChild(QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = dynamic_cast<VirtualQAbstractSpinBox*>(self)) {
        vqabstractspinbox->setQAbstractSpinBox_FocusPreviousChild_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QAbstractSpinBox_Sender(const QAbstractSpinBox* self) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        return vqabstractspinbox->sender();
    } else {
        return vqabstractspinbox->sender();
    }
}

// Base class handler implementation
QObject* QAbstractSpinBox_QBaseSender(const QAbstractSpinBox* self) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        vqabstractspinbox->setQAbstractSpinBox_Sender_IsBase(true);
        return vqabstractspinbox->sender();
    } else {
        return vqabstractspinbox->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnSender(const QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        vqabstractspinbox->setQAbstractSpinBox_Sender_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractSpinBox_SenderSignalIndex(const QAbstractSpinBox* self) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        return vqabstractspinbox->senderSignalIndex();
    } else {
        return vqabstractspinbox->senderSignalIndex();
    }
}

// Base class handler implementation
int QAbstractSpinBox_QBaseSenderSignalIndex(const QAbstractSpinBox* self) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        vqabstractspinbox->setQAbstractSpinBox_SenderSignalIndex_IsBase(true);
        return vqabstractspinbox->senderSignalIndex();
    } else {
        return vqabstractspinbox->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnSenderSignalIndex(const QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        vqabstractspinbox->setQAbstractSpinBox_SenderSignalIndex_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractSpinBox_Receivers(const QAbstractSpinBox* self, const char* signal) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        return vqabstractspinbox->receivers(signal);
    } else {
        return vqabstractspinbox->receivers(signal);
    }
}

// Base class handler implementation
int QAbstractSpinBox_QBaseReceivers(const QAbstractSpinBox* self, const char* signal) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        vqabstractspinbox->setQAbstractSpinBox_Receivers_IsBase(true);
        return vqabstractspinbox->receivers(signal);
    } else {
        return vqabstractspinbox->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnReceivers(const QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        vqabstractspinbox->setQAbstractSpinBox_Receivers_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSpinBox_IsSignalConnected(const QAbstractSpinBox* self, QMetaMethod* signal) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        return vqabstractspinbox->isSignalConnected(*signal);
    } else {
        return vqabstractspinbox->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QAbstractSpinBox_QBaseIsSignalConnected(const QAbstractSpinBox* self, QMetaMethod* signal) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        vqabstractspinbox->setQAbstractSpinBox_IsSignalConnected_IsBase(true);
        return vqabstractspinbox->isSignalConnected(*signal);
    } else {
        return vqabstractspinbox->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSpinBox_OnIsSignalConnected(const QAbstractSpinBox* self, intptr_t slot) {
    if (auto* vqabstractspinbox = const_cast<VirtualQAbstractSpinBox*>(dynamic_cast<const VirtualQAbstractSpinBox*>(self))) {
        vqabstractspinbox->setQAbstractSpinBox_IsSignalConnected_Callback(reinterpret_cast<VirtualQAbstractSpinBox::QAbstractSpinBox_IsSignalConnected_Callback>(slot));
    }
}

void QAbstractSpinBox_Delete(QAbstractSpinBox* self) {
    delete self;
}
