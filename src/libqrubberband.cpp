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
#include <QRubberBand>
#include <QScreen>
#include <QShowEvent>
#include <QSize>
#include <QSizePolicy>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyle>
#include <QStyleOptionRubberBand>
#include <QTabletEvent>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <QWindow>
#include <qrubberband.h>
#include "libqrubberband.hpp"
#include "libqrubberband.hxx"

QRubberBand* QRubberBand_new(int param1) {
    return new VirtualQRubberBand(static_cast<QRubberBand::Shape>(param1));
}

QRubberBand* QRubberBand_new2(int param1, QWidget* param2) {
    return new VirtualQRubberBand(static_cast<QRubberBand::Shape>(param1), param2);
}

QMetaObject* QRubberBand_MetaObject(const QRubberBand* self) {
    return (QMetaObject*)self->metaObject();
}

void* QRubberBand_Metacast(QRubberBand* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QRubberBand_Metacall(QRubberBand* self, int param1, int param2, void** param3) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QRubberBand_OnMetacall(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_Metacall_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QRubberBand_QBaseMetacall(QRubberBand* self, int param1, int param2, void** param3) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_Metacall_IsBase(true);
        return vqrubberband->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QRubberBand_Tr(const char* s) {
    QString _ret = QRubberBand::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QRubberBand_Shape(const QRubberBand* self) {
    return static_cast<int>(self->shape());
}

void QRubberBand_SetGeometry(QRubberBand* self, QRect* r) {
    self->setGeometry(*r);
}

void QRubberBand_SetGeometry2(QRubberBand* self, int x, int y, int w, int h) {
    self->setGeometry(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
}

void QRubberBand_Move(QRubberBand* self, int x, int y) {
    self->move(static_cast<int>(x), static_cast<int>(y));
}

void QRubberBand_MoveWithQPoint(QRubberBand* self, QPoint* p) {
    self->move(*p);
}

void QRubberBand_Resize(QRubberBand* self, int w, int h) {
    self->resize(static_cast<int>(w), static_cast<int>(h));
}

void QRubberBand_ResizeWithQSize(QRubberBand* self, QSize* s) {
    self->resize(*s);
}

libqt_string QRubberBand_Tr2(const char* s, const char* c) {
    QString _ret = QRubberBand::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QRubberBand_Tr3(const char* s, const char* c, int n) {
    QString _ret = QRubberBand::tr(s, c, static_cast<int>(n));
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
bool QRubberBand_Event(QRubberBand* self, QEvent* e) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        return vqrubberband->event(e);
    } else {
        return vqrubberband->event(e);
    }
}

// Base class handler implementation
bool QRubberBand_QBaseEvent(QRubberBand* self, QEvent* e) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_Event_IsBase(true);
        return vqrubberband->event(e);
    } else {
        return vqrubberband->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_Event_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_PaintEvent(QRubberBand* self, QPaintEvent* param1) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->paintEvent(param1);
    } else {
        vqrubberband->paintEvent(param1);
    }
}

// Base class handler implementation
void QRubberBand_QBasePaintEvent(QRubberBand* self, QPaintEvent* param1) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_PaintEvent_IsBase(true);
        vqrubberband->paintEvent(param1);
    } else {
        vqrubberband->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnPaintEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_PaintEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_ChangeEvent(QRubberBand* self, QEvent* param1) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->changeEvent(param1);
    } else {
        vqrubberband->changeEvent(param1);
    }
}

// Base class handler implementation
void QRubberBand_QBaseChangeEvent(QRubberBand* self, QEvent* param1) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_ChangeEvent_IsBase(true);
        vqrubberband->changeEvent(param1);
    } else {
        vqrubberband->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnChangeEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_ChangeEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_ShowEvent(QRubberBand* self, QShowEvent* param1) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->showEvent(param1);
    } else {
        vqrubberband->showEvent(param1);
    }
}

// Base class handler implementation
void QRubberBand_QBaseShowEvent(QRubberBand* self, QShowEvent* param1) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_ShowEvent_IsBase(true);
        vqrubberband->showEvent(param1);
    } else {
        vqrubberband->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnShowEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_ShowEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_ResizeEvent(QRubberBand* self, QResizeEvent* param1) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->resizeEvent(param1);
    } else {
        vqrubberband->resizeEvent(param1);
    }
}

// Base class handler implementation
void QRubberBand_QBaseResizeEvent(QRubberBand* self, QResizeEvent* param1) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_ResizeEvent_IsBase(true);
        vqrubberband->resizeEvent(param1);
    } else {
        vqrubberband->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnResizeEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_ResizeEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_MoveEvent(QRubberBand* self, QMoveEvent* param1) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->moveEvent(param1);
    } else {
        vqrubberband->moveEvent(param1);
    }
}

// Base class handler implementation
void QRubberBand_QBaseMoveEvent(QRubberBand* self, QMoveEvent* param1) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_MoveEvent_IsBase(true);
        vqrubberband->moveEvent(param1);
    } else {
        vqrubberband->moveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnMoveEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_MoveEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_InitStyleOption(const QRubberBand* self, QStyleOptionRubberBand* option) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        vqrubberband->initStyleOption(option);
    } else {
        vqrubberband->initStyleOption(option);
    }
}

// Base class handler implementation
void QRubberBand_QBaseInitStyleOption(const QRubberBand* self, QStyleOptionRubberBand* option) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        vqrubberband->setQRubberBand_InitStyleOption_IsBase(true);
        vqrubberband->initStyleOption(option);
    } else {
        vqrubberband->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnInitStyleOption(const QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        vqrubberband->setQRubberBand_InitStyleOption_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QRubberBand_DevType(const QRubberBand* self) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        return vqrubberband->devType();
    } else {
        return vqrubberband->devType();
    }
}

// Base class handler implementation
int QRubberBand_QBaseDevType(const QRubberBand* self) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        vqrubberband->setQRubberBand_DevType_IsBase(true);
        return vqrubberband->devType();
    } else {
        return vqrubberband->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnDevType(const QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        vqrubberband->setQRubberBand_DevType_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_SetVisible(QRubberBand* self, bool visible) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setVisible(visible);
    } else {
        vqrubberband->setVisible(visible);
    }
}

// Base class handler implementation
void QRubberBand_QBaseSetVisible(QRubberBand* self, bool visible) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_SetVisible_IsBase(true);
        vqrubberband->setVisible(visible);
    } else {
        vqrubberband->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnSetVisible(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_SetVisible_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QRubberBand_SizeHint(const QRubberBand* self) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        return new QSize(vqrubberband->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QRubberBand_QBaseSizeHint(const QRubberBand* self) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        vqrubberband->setQRubberBand_SizeHint_IsBase(true);
        return new QSize(vqrubberband->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnSizeHint(const QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        vqrubberband->setQRubberBand_SizeHint_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QRubberBand_MinimumSizeHint(const QRubberBand* self) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        return new QSize(vqrubberband->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QRubberBand_QBaseMinimumSizeHint(const QRubberBand* self) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        vqrubberband->setQRubberBand_MinimumSizeHint_IsBase(true);
        return new QSize(vqrubberband->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnMinimumSizeHint(const QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        vqrubberband->setQRubberBand_MinimumSizeHint_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QRubberBand_HeightForWidth(const QRubberBand* self, int param1) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        return vqrubberband->heightForWidth(static_cast<int>(param1));
    } else {
        return vqrubberband->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QRubberBand_QBaseHeightForWidth(const QRubberBand* self, int param1) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        vqrubberband->setQRubberBand_HeightForWidth_IsBase(true);
        return vqrubberband->heightForWidth(static_cast<int>(param1));
    } else {
        return vqrubberband->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnHeightForWidth(const QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        vqrubberband->setQRubberBand_HeightForWidth_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QRubberBand_HasHeightForWidth(const QRubberBand* self) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        return vqrubberband->hasHeightForWidth();
    } else {
        return vqrubberband->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QRubberBand_QBaseHasHeightForWidth(const QRubberBand* self) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        vqrubberband->setQRubberBand_HasHeightForWidth_IsBase(true);
        return vqrubberband->hasHeightForWidth();
    } else {
        return vqrubberband->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnHasHeightForWidth(const QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        vqrubberband->setQRubberBand_HasHeightForWidth_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QRubberBand_PaintEngine(const QRubberBand* self) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        return vqrubberband->paintEngine();
    } else {
        return vqrubberband->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QRubberBand_QBasePaintEngine(const QRubberBand* self) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        vqrubberband->setQRubberBand_PaintEngine_IsBase(true);
        return vqrubberband->paintEngine();
    } else {
        return vqrubberband->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnPaintEngine(const QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        vqrubberband->setQRubberBand_PaintEngine_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_MousePressEvent(QRubberBand* self, QMouseEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->mousePressEvent(event);
    } else {
        vqrubberband->mousePressEvent(event);
    }
}

// Base class handler implementation
void QRubberBand_QBaseMousePressEvent(QRubberBand* self, QMouseEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_MousePressEvent_IsBase(true);
        vqrubberband->mousePressEvent(event);
    } else {
        vqrubberband->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnMousePressEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_MousePressEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_MouseReleaseEvent(QRubberBand* self, QMouseEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->mouseReleaseEvent(event);
    } else {
        vqrubberband->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QRubberBand_QBaseMouseReleaseEvent(QRubberBand* self, QMouseEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_MouseReleaseEvent_IsBase(true);
        vqrubberband->mouseReleaseEvent(event);
    } else {
        vqrubberband->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnMouseReleaseEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_MouseDoubleClickEvent(QRubberBand* self, QMouseEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->mouseDoubleClickEvent(event);
    } else {
        vqrubberband->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QRubberBand_QBaseMouseDoubleClickEvent(QRubberBand* self, QMouseEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_MouseDoubleClickEvent_IsBase(true);
        vqrubberband->mouseDoubleClickEvent(event);
    } else {
        vqrubberband->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnMouseDoubleClickEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_MouseMoveEvent(QRubberBand* self, QMouseEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->mouseMoveEvent(event);
    } else {
        vqrubberband->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QRubberBand_QBaseMouseMoveEvent(QRubberBand* self, QMouseEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_MouseMoveEvent_IsBase(true);
        vqrubberband->mouseMoveEvent(event);
    } else {
        vqrubberband->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnMouseMoveEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_MouseMoveEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_WheelEvent(QRubberBand* self, QWheelEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->wheelEvent(event);
    } else {
        vqrubberband->wheelEvent(event);
    }
}

// Base class handler implementation
void QRubberBand_QBaseWheelEvent(QRubberBand* self, QWheelEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_WheelEvent_IsBase(true);
        vqrubberband->wheelEvent(event);
    } else {
        vqrubberband->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnWheelEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_WheelEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_KeyPressEvent(QRubberBand* self, QKeyEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->keyPressEvent(event);
    } else {
        vqrubberband->keyPressEvent(event);
    }
}

// Base class handler implementation
void QRubberBand_QBaseKeyPressEvent(QRubberBand* self, QKeyEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_KeyPressEvent_IsBase(true);
        vqrubberband->keyPressEvent(event);
    } else {
        vqrubberband->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnKeyPressEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_KeyPressEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_KeyReleaseEvent(QRubberBand* self, QKeyEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->keyReleaseEvent(event);
    } else {
        vqrubberband->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QRubberBand_QBaseKeyReleaseEvent(QRubberBand* self, QKeyEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_KeyReleaseEvent_IsBase(true);
        vqrubberband->keyReleaseEvent(event);
    } else {
        vqrubberband->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnKeyReleaseEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_FocusInEvent(QRubberBand* self, QFocusEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->focusInEvent(event);
    } else {
        vqrubberband->focusInEvent(event);
    }
}

// Base class handler implementation
void QRubberBand_QBaseFocusInEvent(QRubberBand* self, QFocusEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_FocusInEvent_IsBase(true);
        vqrubberband->focusInEvent(event);
    } else {
        vqrubberband->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnFocusInEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_FocusInEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_FocusOutEvent(QRubberBand* self, QFocusEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->focusOutEvent(event);
    } else {
        vqrubberband->focusOutEvent(event);
    }
}

// Base class handler implementation
void QRubberBand_QBaseFocusOutEvent(QRubberBand* self, QFocusEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_FocusOutEvent_IsBase(true);
        vqrubberband->focusOutEvent(event);
    } else {
        vqrubberband->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnFocusOutEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_FocusOutEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_EnterEvent(QRubberBand* self, QEnterEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->enterEvent(event);
    } else {
        vqrubberband->enterEvent(event);
    }
}

// Base class handler implementation
void QRubberBand_QBaseEnterEvent(QRubberBand* self, QEnterEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_EnterEvent_IsBase(true);
        vqrubberband->enterEvent(event);
    } else {
        vqrubberband->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnEnterEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_EnterEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_LeaveEvent(QRubberBand* self, QEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->leaveEvent(event);
    } else {
        vqrubberband->leaveEvent(event);
    }
}

// Base class handler implementation
void QRubberBand_QBaseLeaveEvent(QRubberBand* self, QEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_LeaveEvent_IsBase(true);
        vqrubberband->leaveEvent(event);
    } else {
        vqrubberband->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnLeaveEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_LeaveEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_CloseEvent(QRubberBand* self, QCloseEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->closeEvent(event);
    } else {
        vqrubberband->closeEvent(event);
    }
}

// Base class handler implementation
void QRubberBand_QBaseCloseEvent(QRubberBand* self, QCloseEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_CloseEvent_IsBase(true);
        vqrubberband->closeEvent(event);
    } else {
        vqrubberband->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnCloseEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_CloseEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_ContextMenuEvent(QRubberBand* self, QContextMenuEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->contextMenuEvent(event);
    } else {
        vqrubberband->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QRubberBand_QBaseContextMenuEvent(QRubberBand* self, QContextMenuEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_ContextMenuEvent_IsBase(true);
        vqrubberband->contextMenuEvent(event);
    } else {
        vqrubberband->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnContextMenuEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_ContextMenuEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_TabletEvent(QRubberBand* self, QTabletEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->tabletEvent(event);
    } else {
        vqrubberband->tabletEvent(event);
    }
}

// Base class handler implementation
void QRubberBand_QBaseTabletEvent(QRubberBand* self, QTabletEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_TabletEvent_IsBase(true);
        vqrubberband->tabletEvent(event);
    } else {
        vqrubberband->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnTabletEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_TabletEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_ActionEvent(QRubberBand* self, QActionEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->actionEvent(event);
    } else {
        vqrubberband->actionEvent(event);
    }
}

// Base class handler implementation
void QRubberBand_QBaseActionEvent(QRubberBand* self, QActionEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_ActionEvent_IsBase(true);
        vqrubberband->actionEvent(event);
    } else {
        vqrubberband->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnActionEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_ActionEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_DragEnterEvent(QRubberBand* self, QDragEnterEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->dragEnterEvent(event);
    } else {
        vqrubberband->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QRubberBand_QBaseDragEnterEvent(QRubberBand* self, QDragEnterEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_DragEnterEvent_IsBase(true);
        vqrubberband->dragEnterEvent(event);
    } else {
        vqrubberband->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnDragEnterEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_DragEnterEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_DragMoveEvent(QRubberBand* self, QDragMoveEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->dragMoveEvent(event);
    } else {
        vqrubberband->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QRubberBand_QBaseDragMoveEvent(QRubberBand* self, QDragMoveEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_DragMoveEvent_IsBase(true);
        vqrubberband->dragMoveEvent(event);
    } else {
        vqrubberband->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnDragMoveEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_DragMoveEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_DragLeaveEvent(QRubberBand* self, QDragLeaveEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->dragLeaveEvent(event);
    } else {
        vqrubberband->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QRubberBand_QBaseDragLeaveEvent(QRubberBand* self, QDragLeaveEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_DragLeaveEvent_IsBase(true);
        vqrubberband->dragLeaveEvent(event);
    } else {
        vqrubberband->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnDragLeaveEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_DragLeaveEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_DropEvent(QRubberBand* self, QDropEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->dropEvent(event);
    } else {
        vqrubberband->dropEvent(event);
    }
}

// Base class handler implementation
void QRubberBand_QBaseDropEvent(QRubberBand* self, QDropEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_DropEvent_IsBase(true);
        vqrubberband->dropEvent(event);
    } else {
        vqrubberband->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnDropEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_DropEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_HideEvent(QRubberBand* self, QHideEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->hideEvent(event);
    } else {
        vqrubberband->hideEvent(event);
    }
}

// Base class handler implementation
void QRubberBand_QBaseHideEvent(QRubberBand* self, QHideEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_HideEvent_IsBase(true);
        vqrubberband->hideEvent(event);
    } else {
        vqrubberband->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnHideEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_HideEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QRubberBand_NativeEvent(QRubberBand* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        return vqrubberband->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqrubberband->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QRubberBand_QBaseNativeEvent(QRubberBand* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_NativeEvent_IsBase(true);
        return vqrubberband->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqrubberband->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnNativeEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_NativeEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QRubberBand_Metric(const QRubberBand* self, int param1) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        return vqrubberband->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqrubberband->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QRubberBand_QBaseMetric(const QRubberBand* self, int param1) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        vqrubberband->setQRubberBand_Metric_IsBase(true);
        return vqrubberband->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqrubberband->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnMetric(const QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        vqrubberband->setQRubberBand_Metric_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_InitPainter(const QRubberBand* self, QPainter* painter) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        vqrubberband->initPainter(painter);
    } else {
        vqrubberband->initPainter(painter);
    }
}

// Base class handler implementation
void QRubberBand_QBaseInitPainter(const QRubberBand* self, QPainter* painter) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        vqrubberband->setQRubberBand_InitPainter_IsBase(true);
        vqrubberband->initPainter(painter);
    } else {
        vqrubberband->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnInitPainter(const QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        vqrubberband->setQRubberBand_InitPainter_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QRubberBand_Redirected(const QRubberBand* self, QPoint* offset) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        return vqrubberband->redirected(offset);
    } else {
        return vqrubberband->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QRubberBand_QBaseRedirected(const QRubberBand* self, QPoint* offset) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        vqrubberband->setQRubberBand_Redirected_IsBase(true);
        return vqrubberband->redirected(offset);
    } else {
        return vqrubberband->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnRedirected(const QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        vqrubberband->setQRubberBand_Redirected_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QRubberBand_SharedPainter(const QRubberBand* self) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        return vqrubberband->sharedPainter();
    } else {
        return vqrubberband->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QRubberBand_QBaseSharedPainter(const QRubberBand* self) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        vqrubberband->setQRubberBand_SharedPainter_IsBase(true);
        return vqrubberband->sharedPainter();
    } else {
        return vqrubberband->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnSharedPainter(const QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        vqrubberband->setQRubberBand_SharedPainter_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_InputMethodEvent(QRubberBand* self, QInputMethodEvent* param1) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->inputMethodEvent(param1);
    } else {
        vqrubberband->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QRubberBand_QBaseInputMethodEvent(QRubberBand* self, QInputMethodEvent* param1) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_InputMethodEvent_IsBase(true);
        vqrubberband->inputMethodEvent(param1);
    } else {
        vqrubberband->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnInputMethodEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_InputMethodEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QRubberBand_InputMethodQuery(const QRubberBand* self, int param1) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        return new QVariant(vqrubberband->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QRubberBand_QBaseInputMethodQuery(const QRubberBand* self, int param1) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        vqrubberband->setQRubberBand_InputMethodQuery_IsBase(true);
        return new QVariant(vqrubberband->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnInputMethodQuery(const QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        vqrubberband->setQRubberBand_InputMethodQuery_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QRubberBand_FocusNextPrevChild(QRubberBand* self, bool next) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        return vqrubberband->focusNextPrevChild(next);
    } else {
        return vqrubberband->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QRubberBand_QBaseFocusNextPrevChild(QRubberBand* self, bool next) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_FocusNextPrevChild_IsBase(true);
        return vqrubberband->focusNextPrevChild(next);
    } else {
        return vqrubberband->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnFocusNextPrevChild(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QRubberBand_EventFilter(QRubberBand* self, QObject* watched, QEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        return vqrubberband->eventFilter(watched, event);
    } else {
        return vqrubberband->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QRubberBand_QBaseEventFilter(QRubberBand* self, QObject* watched, QEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_EventFilter_IsBase(true);
        return vqrubberband->eventFilter(watched, event);
    } else {
        return vqrubberband->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnEventFilter(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_EventFilter_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_TimerEvent(QRubberBand* self, QTimerEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->timerEvent(event);
    } else {
        vqrubberband->timerEvent(event);
    }
}

// Base class handler implementation
void QRubberBand_QBaseTimerEvent(QRubberBand* self, QTimerEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_TimerEvent_IsBase(true);
        vqrubberband->timerEvent(event);
    } else {
        vqrubberband->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnTimerEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_TimerEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_ChildEvent(QRubberBand* self, QChildEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->childEvent(event);
    } else {
        vqrubberband->childEvent(event);
    }
}

// Base class handler implementation
void QRubberBand_QBaseChildEvent(QRubberBand* self, QChildEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_ChildEvent_IsBase(true);
        vqrubberband->childEvent(event);
    } else {
        vqrubberband->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnChildEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_ChildEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_CustomEvent(QRubberBand* self, QEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->customEvent(event);
    } else {
        vqrubberband->customEvent(event);
    }
}

// Base class handler implementation
void QRubberBand_QBaseCustomEvent(QRubberBand* self, QEvent* event) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_CustomEvent_IsBase(true);
        vqrubberband->customEvent(event);
    } else {
        vqrubberband->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnCustomEvent(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_CustomEvent_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_ConnectNotify(QRubberBand* self, QMetaMethod* signal) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->connectNotify(*signal);
    } else {
        vqrubberband->connectNotify(*signal);
    }
}

// Base class handler implementation
void QRubberBand_QBaseConnectNotify(QRubberBand* self, QMetaMethod* signal) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_ConnectNotify_IsBase(true);
        vqrubberband->connectNotify(*signal);
    } else {
        vqrubberband->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnConnectNotify(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_ConnectNotify_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_DisconnectNotify(QRubberBand* self, QMetaMethod* signal) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->disconnectNotify(*signal);
    } else {
        vqrubberband->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QRubberBand_QBaseDisconnectNotify(QRubberBand* self, QMetaMethod* signal) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_DisconnectNotify_IsBase(true);
        vqrubberband->disconnectNotify(*signal);
    } else {
        vqrubberband->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnDisconnectNotify(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_DisconnectNotify_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_UpdateMicroFocus(QRubberBand* self) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->updateMicroFocus();
    } else {
        vqrubberband->updateMicroFocus();
    }
}

// Base class handler implementation
void QRubberBand_QBaseUpdateMicroFocus(QRubberBand* self) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_UpdateMicroFocus_IsBase(true);
        vqrubberband->updateMicroFocus();
    } else {
        vqrubberband->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnUpdateMicroFocus(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_Create(QRubberBand* self) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->create();
    } else {
        vqrubberband->create();
    }
}

// Base class handler implementation
void QRubberBand_QBaseCreate(QRubberBand* self) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_Create_IsBase(true);
        vqrubberband->create();
    } else {
        vqrubberband->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnCreate(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_Create_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QRubberBand_Destroy(QRubberBand* self) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->destroy();
    } else {
        vqrubberband->destroy();
    }
}

// Base class handler implementation
void QRubberBand_QBaseDestroy(QRubberBand* self) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_Destroy_IsBase(true);
        vqrubberband->destroy();
    } else {
        vqrubberband->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnDestroy(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_Destroy_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QRubberBand_FocusNextChild(QRubberBand* self) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        return vqrubberband->focusNextChild();
    } else {
        return vqrubberband->focusNextChild();
    }
}

// Base class handler implementation
bool QRubberBand_QBaseFocusNextChild(QRubberBand* self) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_FocusNextChild_IsBase(true);
        return vqrubberband->focusNextChild();
    } else {
        return vqrubberband->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnFocusNextChild(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_FocusNextChild_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QRubberBand_FocusPreviousChild(QRubberBand* self) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        return vqrubberband->focusPreviousChild();
    } else {
        return vqrubberband->focusPreviousChild();
    }
}

// Base class handler implementation
bool QRubberBand_QBaseFocusPreviousChild(QRubberBand* self) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_FocusPreviousChild_IsBase(true);
        return vqrubberband->focusPreviousChild();
    } else {
        return vqrubberband->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnFocusPreviousChild(QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = dynamic_cast<VirtualQRubberBand*>(self)) {
        vqrubberband->setQRubberBand_FocusPreviousChild_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QRubberBand_Sender(const QRubberBand* self) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        return vqrubberband->sender();
    } else {
        return vqrubberband->sender();
    }
}

// Base class handler implementation
QObject* QRubberBand_QBaseSender(const QRubberBand* self) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        vqrubberband->setQRubberBand_Sender_IsBase(true);
        return vqrubberband->sender();
    } else {
        return vqrubberband->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnSender(const QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        vqrubberband->setQRubberBand_Sender_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QRubberBand_SenderSignalIndex(const QRubberBand* self) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        return vqrubberband->senderSignalIndex();
    } else {
        return vqrubberband->senderSignalIndex();
    }
}

// Base class handler implementation
int QRubberBand_QBaseSenderSignalIndex(const QRubberBand* self) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        vqrubberband->setQRubberBand_SenderSignalIndex_IsBase(true);
        return vqrubberband->senderSignalIndex();
    } else {
        return vqrubberband->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnSenderSignalIndex(const QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        vqrubberband->setQRubberBand_SenderSignalIndex_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QRubberBand_Receivers(const QRubberBand* self, const char* signal) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        return vqrubberband->receivers(signal);
    } else {
        return vqrubberband->receivers(signal);
    }
}

// Base class handler implementation
int QRubberBand_QBaseReceivers(const QRubberBand* self, const char* signal) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        vqrubberband->setQRubberBand_Receivers_IsBase(true);
        return vqrubberband->receivers(signal);
    } else {
        return vqrubberband->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnReceivers(const QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        vqrubberband->setQRubberBand_Receivers_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QRubberBand_IsSignalConnected(const QRubberBand* self, QMetaMethod* signal) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        return vqrubberband->isSignalConnected(*signal);
    } else {
        return vqrubberband->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QRubberBand_QBaseIsSignalConnected(const QRubberBand* self, QMetaMethod* signal) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        vqrubberband->setQRubberBand_IsSignalConnected_IsBase(true);
        return vqrubberband->isSignalConnected(*signal);
    } else {
        return vqrubberband->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QRubberBand_OnIsSignalConnected(const QRubberBand* self, intptr_t slot) {
    if (auto* vqrubberband = const_cast<VirtualQRubberBand*>(dynamic_cast<const VirtualQRubberBand*>(self))) {
        vqrubberband->setQRubberBand_IsSignalConnected_Callback(reinterpret_cast<VirtualQRubberBand::QRubberBand_IsSignalConnected_Callback>(slot));
    }
}

void QRubberBand_Delete(QRubberBand* self) {
    delete self;
}
