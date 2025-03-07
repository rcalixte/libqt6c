#include <QAbstractSlider>
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
#include <QTabletEvent>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <QWindow>
#include <qabstractslider.h>
#include "libqabstractslider.hpp"
#include "libqabstractslider.hxx"

QAbstractSlider* QAbstractSlider_new(QWidget* parent) {
    return new VirtualQAbstractSlider(parent);
}

QAbstractSlider* QAbstractSlider_new2() {
    return new VirtualQAbstractSlider();
}

QMetaObject* QAbstractSlider_MetaObject(const QAbstractSlider* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAbstractSlider_Metacast(QAbstractSlider* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAbstractSlider_Metacall(QAbstractSlider* self, int param1, int param2, void** param3) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAbstractSlider_OnMetacall(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_Metacall_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QAbstractSlider_QBaseMetacall(QAbstractSlider* self, int param1, int param2, void** param3) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_Metacall_IsBase(true);
        return vqabstractslider->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QAbstractSlider_Tr(const char* s) {
    QString _ret = QAbstractSlider::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QAbstractSlider_Orientation(const QAbstractSlider* self) {
    return static_cast<int>(self->orientation());
}

void QAbstractSlider_SetMinimum(QAbstractSlider* self, int minimum) {
    self->setMinimum(static_cast<int>(minimum));
}

int QAbstractSlider_Minimum(const QAbstractSlider* self) {
    return self->minimum();
}

void QAbstractSlider_SetMaximum(QAbstractSlider* self, int maximum) {
    self->setMaximum(static_cast<int>(maximum));
}

int QAbstractSlider_Maximum(const QAbstractSlider* self) {
    return self->maximum();
}

void QAbstractSlider_SetSingleStep(QAbstractSlider* self, int singleStep) {
    self->setSingleStep(static_cast<int>(singleStep));
}

int QAbstractSlider_SingleStep(const QAbstractSlider* self) {
    return self->singleStep();
}

void QAbstractSlider_SetPageStep(QAbstractSlider* self, int pageStep) {
    self->setPageStep(static_cast<int>(pageStep));
}

int QAbstractSlider_PageStep(const QAbstractSlider* self) {
    return self->pageStep();
}

void QAbstractSlider_SetTracking(QAbstractSlider* self, bool enable) {
    self->setTracking(enable);
}

bool QAbstractSlider_HasTracking(const QAbstractSlider* self) {
    return self->hasTracking();
}

void QAbstractSlider_SetSliderDown(QAbstractSlider* self, bool sliderDown) {
    self->setSliderDown(sliderDown);
}

bool QAbstractSlider_IsSliderDown(const QAbstractSlider* self) {
    return self->isSliderDown();
}

void QAbstractSlider_SetSliderPosition(QAbstractSlider* self, int sliderPosition) {
    self->setSliderPosition(static_cast<int>(sliderPosition));
}

int QAbstractSlider_SliderPosition(const QAbstractSlider* self) {
    return self->sliderPosition();
}

void QAbstractSlider_SetInvertedAppearance(QAbstractSlider* self, bool invertedAppearance) {
    self->setInvertedAppearance(invertedAppearance);
}

bool QAbstractSlider_InvertedAppearance(const QAbstractSlider* self) {
    return self->invertedAppearance();
}

void QAbstractSlider_SetInvertedControls(QAbstractSlider* self, bool invertedControls) {
    self->setInvertedControls(invertedControls);
}

bool QAbstractSlider_InvertedControls(const QAbstractSlider* self) {
    return self->invertedControls();
}

int QAbstractSlider_Value(const QAbstractSlider* self) {
    return self->value();
}

void QAbstractSlider_TriggerAction(QAbstractSlider* self, int action) {
    self->triggerAction(static_cast<QAbstractSlider::SliderAction>(action));
}

void QAbstractSlider_SetValue(QAbstractSlider* self, int value) {
    self->setValue(static_cast<int>(value));
}

void QAbstractSlider_SetOrientation(QAbstractSlider* self, int orientation) {
    self->setOrientation(static_cast<Qt::Orientation>(orientation));
}

void QAbstractSlider_SetRange(QAbstractSlider* self, int min, int max) {
    self->setRange(static_cast<int>(min), static_cast<int>(max));
}

void QAbstractSlider_ValueChanged(QAbstractSlider* self, int value) {
    self->valueChanged(static_cast<int>(value));
}

void QAbstractSlider_Connect_ValueChanged(QAbstractSlider* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSlider*, int) = reinterpret_cast<void (*)(QAbstractSlider*, int)>(slot);
    QAbstractSlider::connect(self, &QAbstractSlider::valueChanged, [self, slotFunc](int value) {
        int sigval1 = value;
        slotFunc(self, sigval1);
    });
}

void QAbstractSlider_SliderPressed(QAbstractSlider* self) {
    self->sliderPressed();
}

void QAbstractSlider_Connect_SliderPressed(QAbstractSlider* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSlider*) = reinterpret_cast<void (*)(QAbstractSlider*)>(slot);
    QAbstractSlider::connect(self, &QAbstractSlider::sliderPressed, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAbstractSlider_SliderMoved(QAbstractSlider* self, int position) {
    self->sliderMoved(static_cast<int>(position));
}

void QAbstractSlider_Connect_SliderMoved(QAbstractSlider* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSlider*, int) = reinterpret_cast<void (*)(QAbstractSlider*, int)>(slot);
    QAbstractSlider::connect(self, &QAbstractSlider::sliderMoved, [self, slotFunc](int position) {
        int sigval1 = position;
        slotFunc(self, sigval1);
    });
}

void QAbstractSlider_SliderReleased(QAbstractSlider* self) {
    self->sliderReleased();
}

void QAbstractSlider_Connect_SliderReleased(QAbstractSlider* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSlider*) = reinterpret_cast<void (*)(QAbstractSlider*)>(slot);
    QAbstractSlider::connect(self, &QAbstractSlider::sliderReleased, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QAbstractSlider_RangeChanged(QAbstractSlider* self, int min, int max) {
    self->rangeChanged(static_cast<int>(min), static_cast<int>(max));
}

void QAbstractSlider_Connect_RangeChanged(QAbstractSlider* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSlider*, int, int) = reinterpret_cast<void (*)(QAbstractSlider*, int, int)>(slot);
    QAbstractSlider::connect(self, &QAbstractSlider::rangeChanged, [self, slotFunc](int min, int max) {
        int sigval1 = min;
        int sigval2 = max;
        slotFunc(self, sigval1, sigval2);
    });
}

void QAbstractSlider_ActionTriggered(QAbstractSlider* self, int action) {
    self->actionTriggered(static_cast<int>(action));
}

void QAbstractSlider_Connect_ActionTriggered(QAbstractSlider* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSlider*, int) = reinterpret_cast<void (*)(QAbstractSlider*, int)>(slot);
    QAbstractSlider::connect(self, &QAbstractSlider::actionTriggered, [self, slotFunc](int action) {
        int sigval1 = action;
        slotFunc(self, sigval1);
    });
}

libqt_string QAbstractSlider_Tr2(const char* s, const char* c) {
    QString _ret = QAbstractSlider::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QAbstractSlider_Tr3(const char* s, const char* c, int n) {
    QString _ret = QAbstractSlider::tr(s, c, static_cast<int>(n));
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
bool QAbstractSlider_Event(QAbstractSlider* self, QEvent* e) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        return vqabstractslider->event(e);
    } else {
        return vqabstractslider->event(e);
    }
}

// Base class handler implementation
bool QAbstractSlider_QBaseEvent(QAbstractSlider* self, QEvent* e) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_Event_IsBase(true);
        return vqabstractslider->event(e);
    } else {
        return vqabstractslider->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_Event_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_SliderChange(QAbstractSlider* self, int change) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->sliderChange(static_cast<VirtualQAbstractSlider::SliderChange>(change));
    } else {
        vqabstractslider->sliderChange(static_cast<VirtualQAbstractSlider::SliderChange>(change));
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseSliderChange(QAbstractSlider* self, int change) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_SliderChange_IsBase(true);
        vqabstractslider->sliderChange(static_cast<VirtualQAbstractSlider::SliderChange>(change));
    } else {
        vqabstractslider->sliderChange(static_cast<VirtualQAbstractSlider::SliderChange>(change));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnSliderChange(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_SliderChange_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_SliderChange_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_KeyPressEvent(QAbstractSlider* self, QKeyEvent* ev) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->keyPressEvent(ev);
    } else {
        vqabstractslider->keyPressEvent(ev);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseKeyPressEvent(QAbstractSlider* self, QKeyEvent* ev) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_KeyPressEvent_IsBase(true);
        vqabstractslider->keyPressEvent(ev);
    } else {
        vqabstractslider->keyPressEvent(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnKeyPressEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_KeyPressEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_TimerEvent(QAbstractSlider* self, QTimerEvent* param1) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->timerEvent(param1);
    } else {
        vqabstractslider->timerEvent(param1);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseTimerEvent(QAbstractSlider* self, QTimerEvent* param1) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_TimerEvent_IsBase(true);
        vqabstractslider->timerEvent(param1);
    } else {
        vqabstractslider->timerEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnTimerEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_TimerEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_WheelEvent(QAbstractSlider* self, QWheelEvent* e) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->wheelEvent(e);
    } else {
        vqabstractslider->wheelEvent(e);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseWheelEvent(QAbstractSlider* self, QWheelEvent* e) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_WheelEvent_IsBase(true);
        vqabstractslider->wheelEvent(e);
    } else {
        vqabstractslider->wheelEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnWheelEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_WheelEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_ChangeEvent(QAbstractSlider* self, QEvent* e) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->changeEvent(e);
    } else {
        vqabstractslider->changeEvent(e);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseChangeEvent(QAbstractSlider* self, QEvent* e) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_ChangeEvent_IsBase(true);
        vqabstractslider->changeEvent(e);
    } else {
        vqabstractslider->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnChangeEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_ChangeEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractSlider_DevType(const QAbstractSlider* self) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        return vqabstractslider->devType();
    } else {
        return vqabstractslider->devType();
    }
}

// Base class handler implementation
int QAbstractSlider_QBaseDevType(const QAbstractSlider* self) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        vqabstractslider->setQAbstractSlider_DevType_IsBase(true);
        return vqabstractslider->devType();
    } else {
        return vqabstractslider->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnDevType(const QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        vqabstractslider->setQAbstractSlider_DevType_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_SetVisible(QAbstractSlider* self, bool visible) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setVisible(visible);
    } else {
        vqabstractslider->setVisible(visible);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseSetVisible(QAbstractSlider* self, bool visible) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_SetVisible_IsBase(true);
        vqabstractslider->setVisible(visible);
    } else {
        vqabstractslider->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnSetVisible(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_SetVisible_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QAbstractSlider_SizeHint(const QAbstractSlider* self) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        return new QSize(vqabstractslider->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QAbstractSlider_QBaseSizeHint(const QAbstractSlider* self) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        vqabstractslider->setQAbstractSlider_SizeHint_IsBase(true);
        return new QSize(vqabstractslider->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnSizeHint(const QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        vqabstractslider->setQAbstractSlider_SizeHint_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QAbstractSlider_MinimumSizeHint(const QAbstractSlider* self) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        return new QSize(vqabstractslider->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QAbstractSlider_QBaseMinimumSizeHint(const QAbstractSlider* self) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        vqabstractslider->setQAbstractSlider_MinimumSizeHint_IsBase(true);
        return new QSize(vqabstractslider->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnMinimumSizeHint(const QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        vqabstractslider->setQAbstractSlider_MinimumSizeHint_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractSlider_HeightForWidth(const QAbstractSlider* self, int param1) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        return vqabstractslider->heightForWidth(static_cast<int>(param1));
    } else {
        return vqabstractslider->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QAbstractSlider_QBaseHeightForWidth(const QAbstractSlider* self, int param1) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        vqabstractslider->setQAbstractSlider_HeightForWidth_IsBase(true);
        return vqabstractslider->heightForWidth(static_cast<int>(param1));
    } else {
        return vqabstractslider->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnHeightForWidth(const QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        vqabstractslider->setQAbstractSlider_HeightForWidth_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSlider_HasHeightForWidth(const QAbstractSlider* self) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        return vqabstractslider->hasHeightForWidth();
    } else {
        return vqabstractslider->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QAbstractSlider_QBaseHasHeightForWidth(const QAbstractSlider* self) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        vqabstractslider->setQAbstractSlider_HasHeightForWidth_IsBase(true);
        return vqabstractslider->hasHeightForWidth();
    } else {
        return vqabstractslider->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnHasHeightForWidth(const QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        vqabstractslider->setQAbstractSlider_HasHeightForWidth_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QAbstractSlider_PaintEngine(const QAbstractSlider* self) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        return vqabstractslider->paintEngine();
    } else {
        return vqabstractslider->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QAbstractSlider_QBasePaintEngine(const QAbstractSlider* self) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        vqabstractslider->setQAbstractSlider_PaintEngine_IsBase(true);
        return vqabstractslider->paintEngine();
    } else {
        return vqabstractslider->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnPaintEngine(const QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        vqabstractslider->setQAbstractSlider_PaintEngine_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_MousePressEvent(QAbstractSlider* self, QMouseEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->mousePressEvent(event);
    } else {
        vqabstractslider->mousePressEvent(event);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseMousePressEvent(QAbstractSlider* self, QMouseEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_MousePressEvent_IsBase(true);
        vqabstractslider->mousePressEvent(event);
    } else {
        vqabstractslider->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnMousePressEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_MousePressEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_MouseReleaseEvent(QAbstractSlider* self, QMouseEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->mouseReleaseEvent(event);
    } else {
        vqabstractslider->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseMouseReleaseEvent(QAbstractSlider* self, QMouseEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_MouseReleaseEvent_IsBase(true);
        vqabstractslider->mouseReleaseEvent(event);
    } else {
        vqabstractslider->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnMouseReleaseEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_MouseDoubleClickEvent(QAbstractSlider* self, QMouseEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->mouseDoubleClickEvent(event);
    } else {
        vqabstractslider->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseMouseDoubleClickEvent(QAbstractSlider* self, QMouseEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_MouseDoubleClickEvent_IsBase(true);
        vqabstractslider->mouseDoubleClickEvent(event);
    } else {
        vqabstractslider->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnMouseDoubleClickEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_MouseMoveEvent(QAbstractSlider* self, QMouseEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->mouseMoveEvent(event);
    } else {
        vqabstractslider->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseMouseMoveEvent(QAbstractSlider* self, QMouseEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_MouseMoveEvent_IsBase(true);
        vqabstractslider->mouseMoveEvent(event);
    } else {
        vqabstractslider->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnMouseMoveEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_MouseMoveEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_KeyReleaseEvent(QAbstractSlider* self, QKeyEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->keyReleaseEvent(event);
    } else {
        vqabstractslider->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseKeyReleaseEvent(QAbstractSlider* self, QKeyEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_KeyReleaseEvent_IsBase(true);
        vqabstractslider->keyReleaseEvent(event);
    } else {
        vqabstractslider->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnKeyReleaseEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_FocusInEvent(QAbstractSlider* self, QFocusEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->focusInEvent(event);
    } else {
        vqabstractslider->focusInEvent(event);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseFocusInEvent(QAbstractSlider* self, QFocusEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_FocusInEvent_IsBase(true);
        vqabstractslider->focusInEvent(event);
    } else {
        vqabstractslider->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnFocusInEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_FocusInEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_FocusOutEvent(QAbstractSlider* self, QFocusEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->focusOutEvent(event);
    } else {
        vqabstractslider->focusOutEvent(event);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseFocusOutEvent(QAbstractSlider* self, QFocusEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_FocusOutEvent_IsBase(true);
        vqabstractslider->focusOutEvent(event);
    } else {
        vqabstractslider->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnFocusOutEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_FocusOutEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_EnterEvent(QAbstractSlider* self, QEnterEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->enterEvent(event);
    } else {
        vqabstractslider->enterEvent(event);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseEnterEvent(QAbstractSlider* self, QEnterEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_EnterEvent_IsBase(true);
        vqabstractslider->enterEvent(event);
    } else {
        vqabstractslider->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnEnterEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_EnterEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_LeaveEvent(QAbstractSlider* self, QEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->leaveEvent(event);
    } else {
        vqabstractslider->leaveEvent(event);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseLeaveEvent(QAbstractSlider* self, QEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_LeaveEvent_IsBase(true);
        vqabstractslider->leaveEvent(event);
    } else {
        vqabstractslider->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnLeaveEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_LeaveEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_PaintEvent(QAbstractSlider* self, QPaintEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->paintEvent(event);
    } else {
        vqabstractslider->paintEvent(event);
    }
}

// Base class handler implementation
void QAbstractSlider_QBasePaintEvent(QAbstractSlider* self, QPaintEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_PaintEvent_IsBase(true);
        vqabstractslider->paintEvent(event);
    } else {
        vqabstractslider->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnPaintEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_PaintEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_MoveEvent(QAbstractSlider* self, QMoveEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->moveEvent(event);
    } else {
        vqabstractslider->moveEvent(event);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseMoveEvent(QAbstractSlider* self, QMoveEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_MoveEvent_IsBase(true);
        vqabstractslider->moveEvent(event);
    } else {
        vqabstractslider->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnMoveEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_MoveEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_ResizeEvent(QAbstractSlider* self, QResizeEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->resizeEvent(event);
    } else {
        vqabstractslider->resizeEvent(event);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseResizeEvent(QAbstractSlider* self, QResizeEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_ResizeEvent_IsBase(true);
        vqabstractslider->resizeEvent(event);
    } else {
        vqabstractslider->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnResizeEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_ResizeEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_CloseEvent(QAbstractSlider* self, QCloseEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->closeEvent(event);
    } else {
        vqabstractslider->closeEvent(event);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseCloseEvent(QAbstractSlider* self, QCloseEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_CloseEvent_IsBase(true);
        vqabstractslider->closeEvent(event);
    } else {
        vqabstractslider->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnCloseEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_CloseEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_ContextMenuEvent(QAbstractSlider* self, QContextMenuEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->contextMenuEvent(event);
    } else {
        vqabstractslider->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseContextMenuEvent(QAbstractSlider* self, QContextMenuEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_ContextMenuEvent_IsBase(true);
        vqabstractslider->contextMenuEvent(event);
    } else {
        vqabstractslider->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnContextMenuEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_ContextMenuEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_TabletEvent(QAbstractSlider* self, QTabletEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->tabletEvent(event);
    } else {
        vqabstractslider->tabletEvent(event);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseTabletEvent(QAbstractSlider* self, QTabletEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_TabletEvent_IsBase(true);
        vqabstractslider->tabletEvent(event);
    } else {
        vqabstractslider->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnTabletEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_TabletEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_ActionEvent(QAbstractSlider* self, QActionEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->actionEvent(event);
    } else {
        vqabstractslider->actionEvent(event);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseActionEvent(QAbstractSlider* self, QActionEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_ActionEvent_IsBase(true);
        vqabstractslider->actionEvent(event);
    } else {
        vqabstractslider->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnActionEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_ActionEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_DragEnterEvent(QAbstractSlider* self, QDragEnterEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->dragEnterEvent(event);
    } else {
        vqabstractslider->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseDragEnterEvent(QAbstractSlider* self, QDragEnterEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_DragEnterEvent_IsBase(true);
        vqabstractslider->dragEnterEvent(event);
    } else {
        vqabstractslider->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnDragEnterEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_DragEnterEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_DragMoveEvent(QAbstractSlider* self, QDragMoveEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->dragMoveEvent(event);
    } else {
        vqabstractslider->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseDragMoveEvent(QAbstractSlider* self, QDragMoveEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_DragMoveEvent_IsBase(true);
        vqabstractslider->dragMoveEvent(event);
    } else {
        vqabstractslider->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnDragMoveEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_DragMoveEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_DragLeaveEvent(QAbstractSlider* self, QDragLeaveEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->dragLeaveEvent(event);
    } else {
        vqabstractslider->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseDragLeaveEvent(QAbstractSlider* self, QDragLeaveEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_DragLeaveEvent_IsBase(true);
        vqabstractslider->dragLeaveEvent(event);
    } else {
        vqabstractslider->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnDragLeaveEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_DragLeaveEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_DropEvent(QAbstractSlider* self, QDropEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->dropEvent(event);
    } else {
        vqabstractslider->dropEvent(event);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseDropEvent(QAbstractSlider* self, QDropEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_DropEvent_IsBase(true);
        vqabstractslider->dropEvent(event);
    } else {
        vqabstractslider->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnDropEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_DropEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_ShowEvent(QAbstractSlider* self, QShowEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->showEvent(event);
    } else {
        vqabstractslider->showEvent(event);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseShowEvent(QAbstractSlider* self, QShowEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_ShowEvent_IsBase(true);
        vqabstractslider->showEvent(event);
    } else {
        vqabstractslider->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnShowEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_ShowEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_HideEvent(QAbstractSlider* self, QHideEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->hideEvent(event);
    } else {
        vqabstractslider->hideEvent(event);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseHideEvent(QAbstractSlider* self, QHideEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_HideEvent_IsBase(true);
        vqabstractslider->hideEvent(event);
    } else {
        vqabstractslider->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnHideEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_HideEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSlider_NativeEvent(QAbstractSlider* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        return vqabstractslider->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqabstractslider->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QAbstractSlider_QBaseNativeEvent(QAbstractSlider* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_NativeEvent_IsBase(true);
        return vqabstractslider->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqabstractslider->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnNativeEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_NativeEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractSlider_Metric(const QAbstractSlider* self, int param1) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        return vqabstractslider->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqabstractslider->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QAbstractSlider_QBaseMetric(const QAbstractSlider* self, int param1) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        vqabstractslider->setQAbstractSlider_Metric_IsBase(true);
        return vqabstractslider->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqabstractslider->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnMetric(const QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        vqabstractslider->setQAbstractSlider_Metric_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_InitPainter(const QAbstractSlider* self, QPainter* painter) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        vqabstractslider->initPainter(painter);
    } else {
        vqabstractslider->initPainter(painter);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseInitPainter(const QAbstractSlider* self, QPainter* painter) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        vqabstractslider->setQAbstractSlider_InitPainter_IsBase(true);
        vqabstractslider->initPainter(painter);
    } else {
        vqabstractslider->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnInitPainter(const QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        vqabstractslider->setQAbstractSlider_InitPainter_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QAbstractSlider_Redirected(const QAbstractSlider* self, QPoint* offset) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        return vqabstractslider->redirected(offset);
    } else {
        return vqabstractslider->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QAbstractSlider_QBaseRedirected(const QAbstractSlider* self, QPoint* offset) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        vqabstractslider->setQAbstractSlider_Redirected_IsBase(true);
        return vqabstractslider->redirected(offset);
    } else {
        return vqabstractslider->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnRedirected(const QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        vqabstractslider->setQAbstractSlider_Redirected_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QAbstractSlider_SharedPainter(const QAbstractSlider* self) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        return vqabstractslider->sharedPainter();
    } else {
        return vqabstractslider->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QAbstractSlider_QBaseSharedPainter(const QAbstractSlider* self) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        vqabstractslider->setQAbstractSlider_SharedPainter_IsBase(true);
        return vqabstractslider->sharedPainter();
    } else {
        return vqabstractslider->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnSharedPainter(const QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        vqabstractslider->setQAbstractSlider_SharedPainter_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_InputMethodEvent(QAbstractSlider* self, QInputMethodEvent* param1) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->inputMethodEvent(param1);
    } else {
        vqabstractslider->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseInputMethodEvent(QAbstractSlider* self, QInputMethodEvent* param1) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_InputMethodEvent_IsBase(true);
        vqabstractslider->inputMethodEvent(param1);
    } else {
        vqabstractslider->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnInputMethodEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_InputMethodEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QAbstractSlider_InputMethodQuery(const QAbstractSlider* self, int param1) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        return new QVariant(vqabstractslider->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QAbstractSlider_QBaseInputMethodQuery(const QAbstractSlider* self, int param1) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        vqabstractslider->setQAbstractSlider_InputMethodQuery_IsBase(true);
        return new QVariant(vqabstractslider->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnInputMethodQuery(const QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        vqabstractslider->setQAbstractSlider_InputMethodQuery_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSlider_FocusNextPrevChild(QAbstractSlider* self, bool next) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        return vqabstractslider->focusNextPrevChild(next);
    } else {
        return vqabstractslider->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QAbstractSlider_QBaseFocusNextPrevChild(QAbstractSlider* self, bool next) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_FocusNextPrevChild_IsBase(true);
        return vqabstractslider->focusNextPrevChild(next);
    } else {
        return vqabstractslider->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnFocusNextPrevChild(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSlider_EventFilter(QAbstractSlider* self, QObject* watched, QEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        return vqabstractslider->eventFilter(watched, event);
    } else {
        return vqabstractslider->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QAbstractSlider_QBaseEventFilter(QAbstractSlider* self, QObject* watched, QEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_EventFilter_IsBase(true);
        return vqabstractslider->eventFilter(watched, event);
    } else {
        return vqabstractslider->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnEventFilter(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_EventFilter_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_ChildEvent(QAbstractSlider* self, QChildEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->childEvent(event);
    } else {
        vqabstractslider->childEvent(event);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseChildEvent(QAbstractSlider* self, QChildEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_ChildEvent_IsBase(true);
        vqabstractslider->childEvent(event);
    } else {
        vqabstractslider->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnChildEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_ChildEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_CustomEvent(QAbstractSlider* self, QEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->customEvent(event);
    } else {
        vqabstractslider->customEvent(event);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseCustomEvent(QAbstractSlider* self, QEvent* event) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_CustomEvent_IsBase(true);
        vqabstractslider->customEvent(event);
    } else {
        vqabstractslider->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnCustomEvent(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_CustomEvent_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_ConnectNotify(QAbstractSlider* self, QMetaMethod* signal) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->connectNotify(*signal);
    } else {
        vqabstractslider->connectNotify(*signal);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseConnectNotify(QAbstractSlider* self, QMetaMethod* signal) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_ConnectNotify_IsBase(true);
        vqabstractslider->connectNotify(*signal);
    } else {
        vqabstractslider->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnConnectNotify(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_ConnectNotify_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_DisconnectNotify(QAbstractSlider* self, QMetaMethod* signal) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->disconnectNotify(*signal);
    } else {
        vqabstractslider->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseDisconnectNotify(QAbstractSlider* self, QMetaMethod* signal) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_DisconnectNotify_IsBase(true);
        vqabstractslider->disconnectNotify(*signal);
    } else {
        vqabstractslider->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnDisconnectNotify(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_DisconnectNotify_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_SetRepeatAction(QAbstractSlider* self, int action) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action));
    } else {
        vqabstractslider->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action));
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseSetRepeatAction(QAbstractSlider* self, int action) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_SetRepeatAction_IsBase(true);
        vqabstractslider->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action));
    } else {
        vqabstractslider->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnSetRepeatAction(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_SetRepeatAction_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_SetRepeatAction_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractSlider_RepeatAction(const QAbstractSlider* self) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        return static_cast<int>(vqabstractslider->repeatAction());
    } else {
        return static_cast<int>(vqabstractslider->repeatAction());
    }
}

// Base class handler implementation
int QAbstractSlider_QBaseRepeatAction(const QAbstractSlider* self) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        vqabstractslider->setQAbstractSlider_RepeatAction_IsBase(true);
        return static_cast<int>(vqabstractslider->repeatAction());
    } else {
        return static_cast<int>(vqabstractslider->repeatAction());
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnRepeatAction(const QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        vqabstractslider->setQAbstractSlider_RepeatAction_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_RepeatAction_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_SetRepeatAction2(QAbstractSlider* self, int action, int thresholdTime) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action), static_cast<int>(thresholdTime));
    } else {
        vqabstractslider->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action), static_cast<int>(thresholdTime));
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseSetRepeatAction2(QAbstractSlider* self, int action, int thresholdTime) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_SetRepeatAction2_IsBase(true);
        vqabstractslider->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action), static_cast<int>(thresholdTime));
    } else {
        vqabstractslider->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action), static_cast<int>(thresholdTime));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnSetRepeatAction2(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_SetRepeatAction2_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_SetRepeatAction2_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_SetRepeatAction3(QAbstractSlider* self, int action, int thresholdTime, int repeatTime) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action), static_cast<int>(thresholdTime), static_cast<int>(repeatTime));
    } else {
        vqabstractslider->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action), static_cast<int>(thresholdTime), static_cast<int>(repeatTime));
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseSetRepeatAction3(QAbstractSlider* self, int action, int thresholdTime, int repeatTime) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_SetRepeatAction3_IsBase(true);
        vqabstractslider->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action), static_cast<int>(thresholdTime), static_cast<int>(repeatTime));
    } else {
        vqabstractslider->setRepeatAction(static_cast<QAbstractSlider::SliderAction>(action), static_cast<int>(thresholdTime), static_cast<int>(repeatTime));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnSetRepeatAction3(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_SetRepeatAction3_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_SetRepeatAction3_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_UpdateMicroFocus(QAbstractSlider* self) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->updateMicroFocus();
    } else {
        vqabstractslider->updateMicroFocus();
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseUpdateMicroFocus(QAbstractSlider* self) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_UpdateMicroFocus_IsBase(true);
        vqabstractslider->updateMicroFocus();
    } else {
        vqabstractslider->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnUpdateMicroFocus(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_Create(QAbstractSlider* self) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->create();
    } else {
        vqabstractslider->create();
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseCreate(QAbstractSlider* self) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_Create_IsBase(true);
        vqabstractslider->create();
    } else {
        vqabstractslider->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnCreate(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_Create_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractSlider_Destroy(QAbstractSlider* self) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->destroy();
    } else {
        vqabstractslider->destroy();
    }
}

// Base class handler implementation
void QAbstractSlider_QBaseDestroy(QAbstractSlider* self) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_Destroy_IsBase(true);
        vqabstractslider->destroy();
    } else {
        vqabstractslider->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnDestroy(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_Destroy_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSlider_FocusNextChild(QAbstractSlider* self) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        return vqabstractslider->focusNextChild();
    } else {
        return vqabstractslider->focusNextChild();
    }
}

// Base class handler implementation
bool QAbstractSlider_QBaseFocusNextChild(QAbstractSlider* self) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_FocusNextChild_IsBase(true);
        return vqabstractslider->focusNextChild();
    } else {
        return vqabstractslider->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnFocusNextChild(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_FocusNextChild_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSlider_FocusPreviousChild(QAbstractSlider* self) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        return vqabstractslider->focusPreviousChild();
    } else {
        return vqabstractslider->focusPreviousChild();
    }
}

// Base class handler implementation
bool QAbstractSlider_QBaseFocusPreviousChild(QAbstractSlider* self) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_FocusPreviousChild_IsBase(true);
        return vqabstractslider->focusPreviousChild();
    } else {
        return vqabstractslider->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnFocusPreviousChild(QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = dynamic_cast<VirtualQAbstractSlider*>(self)) {
        vqabstractslider->setQAbstractSlider_FocusPreviousChild_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QAbstractSlider_Sender(const QAbstractSlider* self) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        return vqabstractslider->sender();
    } else {
        return vqabstractslider->sender();
    }
}

// Base class handler implementation
QObject* QAbstractSlider_QBaseSender(const QAbstractSlider* self) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        vqabstractslider->setQAbstractSlider_Sender_IsBase(true);
        return vqabstractslider->sender();
    } else {
        return vqabstractslider->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnSender(const QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        vqabstractslider->setQAbstractSlider_Sender_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractSlider_SenderSignalIndex(const QAbstractSlider* self) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        return vqabstractslider->senderSignalIndex();
    } else {
        return vqabstractslider->senderSignalIndex();
    }
}

// Base class handler implementation
int QAbstractSlider_QBaseSenderSignalIndex(const QAbstractSlider* self) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        vqabstractslider->setQAbstractSlider_SenderSignalIndex_IsBase(true);
        return vqabstractslider->senderSignalIndex();
    } else {
        return vqabstractslider->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnSenderSignalIndex(const QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        vqabstractslider->setQAbstractSlider_SenderSignalIndex_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractSlider_Receivers(const QAbstractSlider* self, const char* signal) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        return vqabstractslider->receivers(signal);
    } else {
        return vqabstractslider->receivers(signal);
    }
}

// Base class handler implementation
int QAbstractSlider_QBaseReceivers(const QAbstractSlider* self, const char* signal) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        vqabstractslider->setQAbstractSlider_Receivers_IsBase(true);
        return vqabstractslider->receivers(signal);
    } else {
        return vqabstractslider->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnReceivers(const QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        vqabstractslider->setQAbstractSlider_Receivers_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractSlider_IsSignalConnected(const QAbstractSlider* self, QMetaMethod* signal) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        return vqabstractslider->isSignalConnected(*signal);
    } else {
        return vqabstractslider->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QAbstractSlider_QBaseIsSignalConnected(const QAbstractSlider* self, QMetaMethod* signal) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        vqabstractslider->setQAbstractSlider_IsSignalConnected_IsBase(true);
        return vqabstractslider->isSignalConnected(*signal);
    } else {
        return vqabstractslider->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractSlider_OnIsSignalConnected(const QAbstractSlider* self, intptr_t slot) {
    if (auto* vqabstractslider = const_cast<VirtualQAbstractSlider*>(dynamic_cast<const VirtualQAbstractSlider*>(self))) {
        vqabstractslider->setQAbstractSlider_IsSignalConnected_Callback(reinterpret_cast<VirtualQAbstractSlider::QAbstractSlider_IsSignalConnected_Callback>(slot));
    }
}

void QAbstractSlider_Delete(QAbstractSlider* self) {
    delete self;
}
