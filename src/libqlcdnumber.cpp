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
#include <QLCDNumber>
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
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <QWindow>
#include <qlcdnumber.h>
#include "libqlcdnumber.hpp"
#include "libqlcdnumber.hxx"

QLCDNumber* QLCDNumber_new(QWidget* parent) {
    return new VirtualQLCDNumber(parent);
}

QLCDNumber* QLCDNumber_new2() {
    return new VirtualQLCDNumber();
}

QLCDNumber* QLCDNumber_new3(unsigned int numDigits) {
    return new VirtualQLCDNumber(static_cast<uint>(numDigits));
}

QLCDNumber* QLCDNumber_new4(unsigned int numDigits, QWidget* parent) {
    return new VirtualQLCDNumber(static_cast<uint>(numDigits), parent);
}

QMetaObject* QLCDNumber_MetaObject(const QLCDNumber* self) {
    return (QMetaObject*)self->metaObject();
}

void* QLCDNumber_Metacast(QLCDNumber* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QLCDNumber_Metacall(QLCDNumber* self, int param1, int param2, void** param3) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QLCDNumber_OnMetacall(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_Metacall_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QLCDNumber_QBaseMetacall(QLCDNumber* self, int param1, int param2, void** param3) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_Metacall_IsBase(true);
        return vqlcdnumber->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QLCDNumber_Tr(const char* s) {
    QString _ret = QLCDNumber::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QLCDNumber_SmallDecimalPoint(const QLCDNumber* self) {
    return self->smallDecimalPoint();
}

int QLCDNumber_DigitCount(const QLCDNumber* self) {
    return self->digitCount();
}

void QLCDNumber_SetDigitCount(QLCDNumber* self, int nDigits) {
    self->setDigitCount(static_cast<int>(nDigits));
}

bool QLCDNumber_CheckOverflow(const QLCDNumber* self, double num) {
    return self->checkOverflow(static_cast<double>(num));
}

bool QLCDNumber_CheckOverflowWithNum(const QLCDNumber* self, int num) {
    return self->checkOverflow(static_cast<int>(num));
}

int QLCDNumber_Mode(const QLCDNumber* self) {
    return static_cast<int>(self->mode());
}

void QLCDNumber_SetMode(QLCDNumber* self, int mode) {
    self->setMode(static_cast<QLCDNumber::Mode>(mode));
}

int QLCDNumber_SegmentStyle(const QLCDNumber* self) {
    return static_cast<int>(self->segmentStyle());
}

void QLCDNumber_SetSegmentStyle(QLCDNumber* self, int segmentStyle) {
    self->setSegmentStyle(static_cast<QLCDNumber::SegmentStyle>(segmentStyle));
}

double QLCDNumber_Value(const QLCDNumber* self) {
    return self->value();
}

int QLCDNumber_IntValue(const QLCDNumber* self) {
    return self->intValue();
}

void QLCDNumber_Display(QLCDNumber* self, libqt_string str) {
    QString str_QString = QString::fromUtf8(str.data, str.len);
    self->display(str_QString);
}

void QLCDNumber_DisplayWithNum(QLCDNumber* self, int num) {
    self->display(static_cast<int>(num));
}

void QLCDNumber_Display2(QLCDNumber* self, double num) {
    self->display(static_cast<double>(num));
}

void QLCDNumber_SetHexMode(QLCDNumber* self) {
    self->setHexMode();
}

void QLCDNumber_SetDecMode(QLCDNumber* self) {
    self->setDecMode();
}

void QLCDNumber_SetOctMode(QLCDNumber* self) {
    self->setOctMode();
}

void QLCDNumber_SetBinMode(QLCDNumber* self) {
    self->setBinMode();
}

void QLCDNumber_SetSmallDecimalPoint(QLCDNumber* self, bool smallDecimalPoint) {
    self->setSmallDecimalPoint(smallDecimalPoint);
}

void QLCDNumber_Overflow(QLCDNumber* self) {
    self->overflow();
}

void QLCDNumber_Connect_Overflow(QLCDNumber* self, intptr_t slot) {
    void (*slotFunc)(QLCDNumber*) = reinterpret_cast<void (*)(QLCDNumber*)>(slot);
    QLCDNumber::connect(self, &QLCDNumber::overflow, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QLCDNumber_Tr2(const char* s, const char* c) {
    QString _ret = QLCDNumber::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QLCDNumber_Tr3(const char* s, const char* c, int n) {
    QString _ret = QLCDNumber::tr(s, c, static_cast<int>(n));
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
QSize* QLCDNumber_SizeHint(const QLCDNumber* self) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        return new QSize(vqlcdnumber->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QLCDNumber_QBaseSizeHint(const QLCDNumber* self) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        vqlcdnumber->setQLCDNumber_SizeHint_IsBase(true);
        return new QSize(vqlcdnumber->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnSizeHint(const QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        vqlcdnumber->setQLCDNumber_SizeHint_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLCDNumber_Event(QLCDNumber* self, QEvent* e) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        return vqlcdnumber->event(e);
    } else {
        return vqlcdnumber->event(e);
    }
}

// Base class handler implementation
bool QLCDNumber_QBaseEvent(QLCDNumber* self, QEvent* e) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_Event_IsBase(true);
        return vqlcdnumber->event(e);
    } else {
        return vqlcdnumber->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_Event_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_PaintEvent(QLCDNumber* self, QPaintEvent* param1) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->paintEvent(param1);
    } else {
        vqlcdnumber->paintEvent(param1);
    }
}

// Base class handler implementation
void QLCDNumber_QBasePaintEvent(QLCDNumber* self, QPaintEvent* param1) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_PaintEvent_IsBase(true);
        vqlcdnumber->paintEvent(param1);
    } else {
        vqlcdnumber->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnPaintEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_PaintEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_ChangeEvent(QLCDNumber* self, QEvent* param1) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->changeEvent(param1);
    } else {
        vqlcdnumber->changeEvent(param1);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseChangeEvent(QLCDNumber* self, QEvent* param1) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_ChangeEvent_IsBase(true);
        vqlcdnumber->changeEvent(param1);
    } else {
        vqlcdnumber->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnChangeEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_ChangeEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_InitStyleOption(const QLCDNumber* self, QStyleOptionFrame* option) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        vqlcdnumber->initStyleOption(option);
    } else {
        vqlcdnumber->initStyleOption(option);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseInitStyleOption(const QLCDNumber* self, QStyleOptionFrame* option) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        vqlcdnumber->setQLCDNumber_InitStyleOption_IsBase(true);
        vqlcdnumber->initStyleOption(option);
    } else {
        vqlcdnumber->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnInitStyleOption(const QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        vqlcdnumber->setQLCDNumber_InitStyleOption_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QLCDNumber_DevType(const QLCDNumber* self) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        return vqlcdnumber->devType();
    } else {
        return vqlcdnumber->devType();
    }
}

// Base class handler implementation
int QLCDNumber_QBaseDevType(const QLCDNumber* self) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        vqlcdnumber->setQLCDNumber_DevType_IsBase(true);
        return vqlcdnumber->devType();
    } else {
        return vqlcdnumber->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnDevType(const QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        vqlcdnumber->setQLCDNumber_DevType_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_SetVisible(QLCDNumber* self, bool visible) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setVisible(visible);
    } else {
        vqlcdnumber->setVisible(visible);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseSetVisible(QLCDNumber* self, bool visible) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_SetVisible_IsBase(true);
        vqlcdnumber->setVisible(visible);
    } else {
        vqlcdnumber->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnSetVisible(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_SetVisible_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QLCDNumber_MinimumSizeHint(const QLCDNumber* self) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        return new QSize(vqlcdnumber->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QLCDNumber_QBaseMinimumSizeHint(const QLCDNumber* self) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        vqlcdnumber->setQLCDNumber_MinimumSizeHint_IsBase(true);
        return new QSize(vqlcdnumber->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnMinimumSizeHint(const QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        vqlcdnumber->setQLCDNumber_MinimumSizeHint_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QLCDNumber_HeightForWidth(const QLCDNumber* self, int param1) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        return vqlcdnumber->heightForWidth(static_cast<int>(param1));
    } else {
        return vqlcdnumber->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QLCDNumber_QBaseHeightForWidth(const QLCDNumber* self, int param1) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        vqlcdnumber->setQLCDNumber_HeightForWidth_IsBase(true);
        return vqlcdnumber->heightForWidth(static_cast<int>(param1));
    } else {
        return vqlcdnumber->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnHeightForWidth(const QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        vqlcdnumber->setQLCDNumber_HeightForWidth_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLCDNumber_HasHeightForWidth(const QLCDNumber* self) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        return vqlcdnumber->hasHeightForWidth();
    } else {
        return vqlcdnumber->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QLCDNumber_QBaseHasHeightForWidth(const QLCDNumber* self) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        vqlcdnumber->setQLCDNumber_HasHeightForWidth_IsBase(true);
        return vqlcdnumber->hasHeightForWidth();
    } else {
        return vqlcdnumber->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnHasHeightForWidth(const QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        vqlcdnumber->setQLCDNumber_HasHeightForWidth_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QLCDNumber_PaintEngine(const QLCDNumber* self) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        return vqlcdnumber->paintEngine();
    } else {
        return vqlcdnumber->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QLCDNumber_QBasePaintEngine(const QLCDNumber* self) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        vqlcdnumber->setQLCDNumber_PaintEngine_IsBase(true);
        return vqlcdnumber->paintEngine();
    } else {
        return vqlcdnumber->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnPaintEngine(const QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        vqlcdnumber->setQLCDNumber_PaintEngine_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_MousePressEvent(QLCDNumber* self, QMouseEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->mousePressEvent(event);
    } else {
        vqlcdnumber->mousePressEvent(event);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseMousePressEvent(QLCDNumber* self, QMouseEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_MousePressEvent_IsBase(true);
        vqlcdnumber->mousePressEvent(event);
    } else {
        vqlcdnumber->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnMousePressEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_MousePressEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_MouseReleaseEvent(QLCDNumber* self, QMouseEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->mouseReleaseEvent(event);
    } else {
        vqlcdnumber->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseMouseReleaseEvent(QLCDNumber* self, QMouseEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_MouseReleaseEvent_IsBase(true);
        vqlcdnumber->mouseReleaseEvent(event);
    } else {
        vqlcdnumber->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnMouseReleaseEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_MouseDoubleClickEvent(QLCDNumber* self, QMouseEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->mouseDoubleClickEvent(event);
    } else {
        vqlcdnumber->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseMouseDoubleClickEvent(QLCDNumber* self, QMouseEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_MouseDoubleClickEvent_IsBase(true);
        vqlcdnumber->mouseDoubleClickEvent(event);
    } else {
        vqlcdnumber->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnMouseDoubleClickEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_MouseMoveEvent(QLCDNumber* self, QMouseEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->mouseMoveEvent(event);
    } else {
        vqlcdnumber->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseMouseMoveEvent(QLCDNumber* self, QMouseEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_MouseMoveEvent_IsBase(true);
        vqlcdnumber->mouseMoveEvent(event);
    } else {
        vqlcdnumber->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnMouseMoveEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_MouseMoveEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_WheelEvent(QLCDNumber* self, QWheelEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->wheelEvent(event);
    } else {
        vqlcdnumber->wheelEvent(event);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseWheelEvent(QLCDNumber* self, QWheelEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_WheelEvent_IsBase(true);
        vqlcdnumber->wheelEvent(event);
    } else {
        vqlcdnumber->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnWheelEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_WheelEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_KeyPressEvent(QLCDNumber* self, QKeyEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->keyPressEvent(event);
    } else {
        vqlcdnumber->keyPressEvent(event);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseKeyPressEvent(QLCDNumber* self, QKeyEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_KeyPressEvent_IsBase(true);
        vqlcdnumber->keyPressEvent(event);
    } else {
        vqlcdnumber->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnKeyPressEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_KeyPressEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_KeyReleaseEvent(QLCDNumber* self, QKeyEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->keyReleaseEvent(event);
    } else {
        vqlcdnumber->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseKeyReleaseEvent(QLCDNumber* self, QKeyEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_KeyReleaseEvent_IsBase(true);
        vqlcdnumber->keyReleaseEvent(event);
    } else {
        vqlcdnumber->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnKeyReleaseEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_FocusInEvent(QLCDNumber* self, QFocusEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->focusInEvent(event);
    } else {
        vqlcdnumber->focusInEvent(event);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseFocusInEvent(QLCDNumber* self, QFocusEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_FocusInEvent_IsBase(true);
        vqlcdnumber->focusInEvent(event);
    } else {
        vqlcdnumber->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnFocusInEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_FocusInEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_FocusOutEvent(QLCDNumber* self, QFocusEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->focusOutEvent(event);
    } else {
        vqlcdnumber->focusOutEvent(event);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseFocusOutEvent(QLCDNumber* self, QFocusEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_FocusOutEvent_IsBase(true);
        vqlcdnumber->focusOutEvent(event);
    } else {
        vqlcdnumber->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnFocusOutEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_FocusOutEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_EnterEvent(QLCDNumber* self, QEnterEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->enterEvent(event);
    } else {
        vqlcdnumber->enterEvent(event);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseEnterEvent(QLCDNumber* self, QEnterEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_EnterEvent_IsBase(true);
        vqlcdnumber->enterEvent(event);
    } else {
        vqlcdnumber->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnEnterEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_EnterEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_LeaveEvent(QLCDNumber* self, QEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->leaveEvent(event);
    } else {
        vqlcdnumber->leaveEvent(event);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseLeaveEvent(QLCDNumber* self, QEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_LeaveEvent_IsBase(true);
        vqlcdnumber->leaveEvent(event);
    } else {
        vqlcdnumber->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnLeaveEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_LeaveEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_MoveEvent(QLCDNumber* self, QMoveEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->moveEvent(event);
    } else {
        vqlcdnumber->moveEvent(event);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseMoveEvent(QLCDNumber* self, QMoveEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_MoveEvent_IsBase(true);
        vqlcdnumber->moveEvent(event);
    } else {
        vqlcdnumber->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnMoveEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_MoveEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_ResizeEvent(QLCDNumber* self, QResizeEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->resizeEvent(event);
    } else {
        vqlcdnumber->resizeEvent(event);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseResizeEvent(QLCDNumber* self, QResizeEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_ResizeEvent_IsBase(true);
        vqlcdnumber->resizeEvent(event);
    } else {
        vqlcdnumber->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnResizeEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_ResizeEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_CloseEvent(QLCDNumber* self, QCloseEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->closeEvent(event);
    } else {
        vqlcdnumber->closeEvent(event);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseCloseEvent(QLCDNumber* self, QCloseEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_CloseEvent_IsBase(true);
        vqlcdnumber->closeEvent(event);
    } else {
        vqlcdnumber->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnCloseEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_CloseEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_ContextMenuEvent(QLCDNumber* self, QContextMenuEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->contextMenuEvent(event);
    } else {
        vqlcdnumber->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseContextMenuEvent(QLCDNumber* self, QContextMenuEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_ContextMenuEvent_IsBase(true);
        vqlcdnumber->contextMenuEvent(event);
    } else {
        vqlcdnumber->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnContextMenuEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_ContextMenuEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_TabletEvent(QLCDNumber* self, QTabletEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->tabletEvent(event);
    } else {
        vqlcdnumber->tabletEvent(event);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseTabletEvent(QLCDNumber* self, QTabletEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_TabletEvent_IsBase(true);
        vqlcdnumber->tabletEvent(event);
    } else {
        vqlcdnumber->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnTabletEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_TabletEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_ActionEvent(QLCDNumber* self, QActionEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->actionEvent(event);
    } else {
        vqlcdnumber->actionEvent(event);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseActionEvent(QLCDNumber* self, QActionEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_ActionEvent_IsBase(true);
        vqlcdnumber->actionEvent(event);
    } else {
        vqlcdnumber->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnActionEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_ActionEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_DragEnterEvent(QLCDNumber* self, QDragEnterEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->dragEnterEvent(event);
    } else {
        vqlcdnumber->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseDragEnterEvent(QLCDNumber* self, QDragEnterEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_DragEnterEvent_IsBase(true);
        vqlcdnumber->dragEnterEvent(event);
    } else {
        vqlcdnumber->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnDragEnterEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_DragEnterEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_DragMoveEvent(QLCDNumber* self, QDragMoveEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->dragMoveEvent(event);
    } else {
        vqlcdnumber->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseDragMoveEvent(QLCDNumber* self, QDragMoveEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_DragMoveEvent_IsBase(true);
        vqlcdnumber->dragMoveEvent(event);
    } else {
        vqlcdnumber->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnDragMoveEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_DragMoveEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_DragLeaveEvent(QLCDNumber* self, QDragLeaveEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->dragLeaveEvent(event);
    } else {
        vqlcdnumber->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseDragLeaveEvent(QLCDNumber* self, QDragLeaveEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_DragLeaveEvent_IsBase(true);
        vqlcdnumber->dragLeaveEvent(event);
    } else {
        vqlcdnumber->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnDragLeaveEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_DragLeaveEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_DropEvent(QLCDNumber* self, QDropEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->dropEvent(event);
    } else {
        vqlcdnumber->dropEvent(event);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseDropEvent(QLCDNumber* self, QDropEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_DropEvent_IsBase(true);
        vqlcdnumber->dropEvent(event);
    } else {
        vqlcdnumber->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnDropEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_DropEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_ShowEvent(QLCDNumber* self, QShowEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->showEvent(event);
    } else {
        vqlcdnumber->showEvent(event);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseShowEvent(QLCDNumber* self, QShowEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_ShowEvent_IsBase(true);
        vqlcdnumber->showEvent(event);
    } else {
        vqlcdnumber->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnShowEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_ShowEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_HideEvent(QLCDNumber* self, QHideEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->hideEvent(event);
    } else {
        vqlcdnumber->hideEvent(event);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseHideEvent(QLCDNumber* self, QHideEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_HideEvent_IsBase(true);
        vqlcdnumber->hideEvent(event);
    } else {
        vqlcdnumber->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnHideEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_HideEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLCDNumber_NativeEvent(QLCDNumber* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        return vqlcdnumber->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqlcdnumber->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QLCDNumber_QBaseNativeEvent(QLCDNumber* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_NativeEvent_IsBase(true);
        return vqlcdnumber->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqlcdnumber->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnNativeEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_NativeEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QLCDNumber_Metric(const QLCDNumber* self, int param1) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        return vqlcdnumber->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqlcdnumber->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QLCDNumber_QBaseMetric(const QLCDNumber* self, int param1) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        vqlcdnumber->setQLCDNumber_Metric_IsBase(true);
        return vqlcdnumber->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqlcdnumber->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnMetric(const QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        vqlcdnumber->setQLCDNumber_Metric_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_InitPainter(const QLCDNumber* self, QPainter* painter) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        vqlcdnumber->initPainter(painter);
    } else {
        vqlcdnumber->initPainter(painter);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseInitPainter(const QLCDNumber* self, QPainter* painter) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        vqlcdnumber->setQLCDNumber_InitPainter_IsBase(true);
        vqlcdnumber->initPainter(painter);
    } else {
        vqlcdnumber->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnInitPainter(const QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        vqlcdnumber->setQLCDNumber_InitPainter_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QLCDNumber_Redirected(const QLCDNumber* self, QPoint* offset) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        return vqlcdnumber->redirected(offset);
    } else {
        return vqlcdnumber->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QLCDNumber_QBaseRedirected(const QLCDNumber* self, QPoint* offset) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        vqlcdnumber->setQLCDNumber_Redirected_IsBase(true);
        return vqlcdnumber->redirected(offset);
    } else {
        return vqlcdnumber->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnRedirected(const QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        vqlcdnumber->setQLCDNumber_Redirected_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QLCDNumber_SharedPainter(const QLCDNumber* self) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        return vqlcdnumber->sharedPainter();
    } else {
        return vqlcdnumber->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QLCDNumber_QBaseSharedPainter(const QLCDNumber* self) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        vqlcdnumber->setQLCDNumber_SharedPainter_IsBase(true);
        return vqlcdnumber->sharedPainter();
    } else {
        return vqlcdnumber->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnSharedPainter(const QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        vqlcdnumber->setQLCDNumber_SharedPainter_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_InputMethodEvent(QLCDNumber* self, QInputMethodEvent* param1) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->inputMethodEvent(param1);
    } else {
        vqlcdnumber->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseInputMethodEvent(QLCDNumber* self, QInputMethodEvent* param1) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_InputMethodEvent_IsBase(true);
        vqlcdnumber->inputMethodEvent(param1);
    } else {
        vqlcdnumber->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnInputMethodEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_InputMethodEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QLCDNumber_InputMethodQuery(const QLCDNumber* self, int param1) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        return new QVariant(vqlcdnumber->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QLCDNumber_QBaseInputMethodQuery(const QLCDNumber* self, int param1) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        vqlcdnumber->setQLCDNumber_InputMethodQuery_IsBase(true);
        return new QVariant(vqlcdnumber->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnInputMethodQuery(const QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        vqlcdnumber->setQLCDNumber_InputMethodQuery_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLCDNumber_FocusNextPrevChild(QLCDNumber* self, bool next) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        return vqlcdnumber->focusNextPrevChild(next);
    } else {
        return vqlcdnumber->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QLCDNumber_QBaseFocusNextPrevChild(QLCDNumber* self, bool next) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_FocusNextPrevChild_IsBase(true);
        return vqlcdnumber->focusNextPrevChild(next);
    } else {
        return vqlcdnumber->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnFocusNextPrevChild(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLCDNumber_EventFilter(QLCDNumber* self, QObject* watched, QEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        return vqlcdnumber->eventFilter(watched, event);
    } else {
        return vqlcdnumber->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QLCDNumber_QBaseEventFilter(QLCDNumber* self, QObject* watched, QEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_EventFilter_IsBase(true);
        return vqlcdnumber->eventFilter(watched, event);
    } else {
        return vqlcdnumber->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnEventFilter(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_EventFilter_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_TimerEvent(QLCDNumber* self, QTimerEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->timerEvent(event);
    } else {
        vqlcdnumber->timerEvent(event);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseTimerEvent(QLCDNumber* self, QTimerEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_TimerEvent_IsBase(true);
        vqlcdnumber->timerEvent(event);
    } else {
        vqlcdnumber->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnTimerEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_TimerEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_ChildEvent(QLCDNumber* self, QChildEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->childEvent(event);
    } else {
        vqlcdnumber->childEvent(event);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseChildEvent(QLCDNumber* self, QChildEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_ChildEvent_IsBase(true);
        vqlcdnumber->childEvent(event);
    } else {
        vqlcdnumber->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnChildEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_ChildEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_CustomEvent(QLCDNumber* self, QEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->customEvent(event);
    } else {
        vqlcdnumber->customEvent(event);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseCustomEvent(QLCDNumber* self, QEvent* event) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_CustomEvent_IsBase(true);
        vqlcdnumber->customEvent(event);
    } else {
        vqlcdnumber->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnCustomEvent(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_CustomEvent_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_ConnectNotify(QLCDNumber* self, QMetaMethod* signal) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->connectNotify(*signal);
    } else {
        vqlcdnumber->connectNotify(*signal);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseConnectNotify(QLCDNumber* self, QMetaMethod* signal) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_ConnectNotify_IsBase(true);
        vqlcdnumber->connectNotify(*signal);
    } else {
        vqlcdnumber->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnConnectNotify(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_ConnectNotify_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_DisconnectNotify(QLCDNumber* self, QMetaMethod* signal) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->disconnectNotify(*signal);
    } else {
        vqlcdnumber->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseDisconnectNotify(QLCDNumber* self, QMetaMethod* signal) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_DisconnectNotify_IsBase(true);
        vqlcdnumber->disconnectNotify(*signal);
    } else {
        vqlcdnumber->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnDisconnectNotify(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_DisconnectNotify_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_DrawFrame(QLCDNumber* self, QPainter* param1) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->drawFrame(param1);
    } else {
        vqlcdnumber->drawFrame(param1);
    }
}

// Base class handler implementation
void QLCDNumber_QBaseDrawFrame(QLCDNumber* self, QPainter* param1) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_DrawFrame_IsBase(true);
        vqlcdnumber->drawFrame(param1);
    } else {
        vqlcdnumber->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnDrawFrame(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_DrawFrame_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_UpdateMicroFocus(QLCDNumber* self) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->updateMicroFocus();
    } else {
        vqlcdnumber->updateMicroFocus();
    }
}

// Base class handler implementation
void QLCDNumber_QBaseUpdateMicroFocus(QLCDNumber* self) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_UpdateMicroFocus_IsBase(true);
        vqlcdnumber->updateMicroFocus();
    } else {
        vqlcdnumber->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnUpdateMicroFocus(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_Create(QLCDNumber* self) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->create();
    } else {
        vqlcdnumber->create();
    }
}

// Base class handler implementation
void QLCDNumber_QBaseCreate(QLCDNumber* self) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_Create_IsBase(true);
        vqlcdnumber->create();
    } else {
        vqlcdnumber->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnCreate(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_Create_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QLCDNumber_Destroy(QLCDNumber* self) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->destroy();
    } else {
        vqlcdnumber->destroy();
    }
}

// Base class handler implementation
void QLCDNumber_QBaseDestroy(QLCDNumber* self) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_Destroy_IsBase(true);
        vqlcdnumber->destroy();
    } else {
        vqlcdnumber->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnDestroy(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_Destroy_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLCDNumber_FocusNextChild(QLCDNumber* self) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        return vqlcdnumber->focusNextChild();
    } else {
        return vqlcdnumber->focusNextChild();
    }
}

// Base class handler implementation
bool QLCDNumber_QBaseFocusNextChild(QLCDNumber* self) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_FocusNextChild_IsBase(true);
        return vqlcdnumber->focusNextChild();
    } else {
        return vqlcdnumber->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnFocusNextChild(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_FocusNextChild_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLCDNumber_FocusPreviousChild(QLCDNumber* self) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        return vqlcdnumber->focusPreviousChild();
    } else {
        return vqlcdnumber->focusPreviousChild();
    }
}

// Base class handler implementation
bool QLCDNumber_QBaseFocusPreviousChild(QLCDNumber* self) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_FocusPreviousChild_IsBase(true);
        return vqlcdnumber->focusPreviousChild();
    } else {
        return vqlcdnumber->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnFocusPreviousChild(QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = dynamic_cast<VirtualQLCDNumber*>(self)) {
        vqlcdnumber->setQLCDNumber_FocusPreviousChild_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QLCDNumber_Sender(const QLCDNumber* self) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        return vqlcdnumber->sender();
    } else {
        return vqlcdnumber->sender();
    }
}

// Base class handler implementation
QObject* QLCDNumber_QBaseSender(const QLCDNumber* self) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        vqlcdnumber->setQLCDNumber_Sender_IsBase(true);
        return vqlcdnumber->sender();
    } else {
        return vqlcdnumber->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnSender(const QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        vqlcdnumber->setQLCDNumber_Sender_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QLCDNumber_SenderSignalIndex(const QLCDNumber* self) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        return vqlcdnumber->senderSignalIndex();
    } else {
        return vqlcdnumber->senderSignalIndex();
    }
}

// Base class handler implementation
int QLCDNumber_QBaseSenderSignalIndex(const QLCDNumber* self) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        vqlcdnumber->setQLCDNumber_SenderSignalIndex_IsBase(true);
        return vqlcdnumber->senderSignalIndex();
    } else {
        return vqlcdnumber->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnSenderSignalIndex(const QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        vqlcdnumber->setQLCDNumber_SenderSignalIndex_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QLCDNumber_Receivers(const QLCDNumber* self, const char* signal) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        return vqlcdnumber->receivers(signal);
    } else {
        return vqlcdnumber->receivers(signal);
    }
}

// Base class handler implementation
int QLCDNumber_QBaseReceivers(const QLCDNumber* self, const char* signal) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        vqlcdnumber->setQLCDNumber_Receivers_IsBase(true);
        return vqlcdnumber->receivers(signal);
    } else {
        return vqlcdnumber->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnReceivers(const QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        vqlcdnumber->setQLCDNumber_Receivers_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLCDNumber_IsSignalConnected(const QLCDNumber* self, QMetaMethod* signal) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        return vqlcdnumber->isSignalConnected(*signal);
    } else {
        return vqlcdnumber->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QLCDNumber_QBaseIsSignalConnected(const QLCDNumber* self, QMetaMethod* signal) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        vqlcdnumber->setQLCDNumber_IsSignalConnected_IsBase(true);
        return vqlcdnumber->isSignalConnected(*signal);
    } else {
        return vqlcdnumber->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QLCDNumber_OnIsSignalConnected(const QLCDNumber* self, intptr_t slot) {
    if (auto* vqlcdnumber = const_cast<VirtualQLCDNumber*>(dynamic_cast<const VirtualQLCDNumber*>(self))) {
        vqlcdnumber->setQLCDNumber_IsSignalConnected_Callback(reinterpret_cast<VirtualQLCDNumber::QLCDNumber_IsSignalConnected_Callback>(slot));
    }
}

void QLCDNumber_Delete(QLCDNumber* self) {
    delete self;
}
