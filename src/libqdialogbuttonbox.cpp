#include <QAbstractButton>
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
#include <QDialogButtonBox>
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
#include <QPushButton>
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
#include <qdialogbuttonbox.h>
#include "libqdialogbuttonbox.hpp"
#include "libqdialogbuttonbox.hxx"

QDialogButtonBox* QDialogButtonBox_new(QWidget* parent) {
    return new VirtualQDialogButtonBox(parent);
}

QDialogButtonBox* QDialogButtonBox_new2() {
    return new VirtualQDialogButtonBox();
}

QDialogButtonBox* QDialogButtonBox_new3(int orientation) {
    return new VirtualQDialogButtonBox(static_cast<Qt::Orientation>(orientation));
}

QDialogButtonBox* QDialogButtonBox_new4(int buttons) {
    return new VirtualQDialogButtonBox(static_cast<QDialogButtonBox::StandardButtons>(buttons));
}

QDialogButtonBox* QDialogButtonBox_new5(int buttons, int orientation) {
    return new VirtualQDialogButtonBox(static_cast<QDialogButtonBox::StandardButtons>(buttons), static_cast<Qt::Orientation>(orientation));
}

QDialogButtonBox* QDialogButtonBox_new6(int orientation, QWidget* parent) {
    return new VirtualQDialogButtonBox(static_cast<Qt::Orientation>(orientation), parent);
}

QDialogButtonBox* QDialogButtonBox_new7(int buttons, QWidget* parent) {
    return new VirtualQDialogButtonBox(static_cast<QDialogButtonBox::StandardButtons>(buttons), parent);
}

QDialogButtonBox* QDialogButtonBox_new8(int buttons, int orientation, QWidget* parent) {
    return new VirtualQDialogButtonBox(static_cast<QDialogButtonBox::StandardButtons>(buttons), static_cast<Qt::Orientation>(orientation), parent);
}

QMetaObject* QDialogButtonBox_MetaObject(const QDialogButtonBox* self) {
    return (QMetaObject*)self->metaObject();
}

void* QDialogButtonBox_Metacast(QDialogButtonBox* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QDialogButtonBox_Metacall(QDialogButtonBox* self, int param1, int param2, void** param3) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QDialogButtonBox_OnMetacall(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_Metacall_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QDialogButtonBox_QBaseMetacall(QDialogButtonBox* self, int param1, int param2, void** param3) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_Metacall_IsBase(true);
        return vqdialogbuttonbox->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QDialogButtonBox_Tr(const char* s) {
    QString _ret = QDialogButtonBox::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QDialogButtonBox_SetOrientation(QDialogButtonBox* self, int orientation) {
    self->setOrientation(static_cast<Qt::Orientation>(orientation));
}

int QDialogButtonBox_Orientation(const QDialogButtonBox* self) {
    return static_cast<int>(self->orientation());
}

void QDialogButtonBox_AddButton(QDialogButtonBox* self, QAbstractButton* button, int role) {
    self->addButton(button, static_cast<QDialogButtonBox::ButtonRole>(role));
}

QPushButton* QDialogButtonBox_AddButton2(QDialogButtonBox* self, libqt_string text, int role) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->addButton(text_QString, static_cast<QDialogButtonBox::ButtonRole>(role));
}

QPushButton* QDialogButtonBox_AddButtonWithButton(QDialogButtonBox* self, int button) {
    return self->addButton(static_cast<QDialogButtonBox::StandardButton>(button));
}

void QDialogButtonBox_RemoveButton(QDialogButtonBox* self, QAbstractButton* button) {
    self->removeButton(button);
}

void QDialogButtonBox_Clear(QDialogButtonBox* self) {
    self->clear();
}

libqt_list /* of QAbstractButton* */ QDialogButtonBox_Buttons(const QDialogButtonBox* self) {
    QList<QAbstractButton*> _ret = self->buttons();
    // Convert QList<> from C++ memory to manually-managed C memory
    QAbstractButton** _arr = static_cast<QAbstractButton**>(malloc(sizeof(QAbstractButton*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

int QDialogButtonBox_ButtonRole(const QDialogButtonBox* self, QAbstractButton* button) {
    return static_cast<int>(self->buttonRole(button));
}

void QDialogButtonBox_SetStandardButtons(QDialogButtonBox* self, int buttons) {
    self->setStandardButtons(static_cast<QDialogButtonBox::StandardButtons>(buttons));
}

int QDialogButtonBox_StandardButtons(const QDialogButtonBox* self) {
    return static_cast<int>(self->standardButtons());
}

int QDialogButtonBox_StandardButton(const QDialogButtonBox* self, QAbstractButton* button) {
    return static_cast<int>(self->standardButton(button));
}

QPushButton* QDialogButtonBox_Button(const QDialogButtonBox* self, int which) {
    return self->button(static_cast<QDialogButtonBox::StandardButton>(which));
}

void QDialogButtonBox_SetCenterButtons(QDialogButtonBox* self, bool center) {
    self->setCenterButtons(center);
}

bool QDialogButtonBox_CenterButtons(const QDialogButtonBox* self) {
    return self->centerButtons();
}

void QDialogButtonBox_Clicked(QDialogButtonBox* self, QAbstractButton* button) {
    self->clicked(button);
}

void QDialogButtonBox_Connect_Clicked(QDialogButtonBox* self, intptr_t slot) {
    void (*slotFunc)(QDialogButtonBox*, QAbstractButton*) = reinterpret_cast<void (*)(QDialogButtonBox*, QAbstractButton*)>(slot);
    QDialogButtonBox::connect(self, &QDialogButtonBox::clicked, [self, slotFunc](QAbstractButton* button) {
        QAbstractButton* sigval1 = button;
        slotFunc(self, sigval1);
    });
}

void QDialogButtonBox_Accepted(QDialogButtonBox* self) {
    self->accepted();
}

void QDialogButtonBox_Connect_Accepted(QDialogButtonBox* self, intptr_t slot) {
    void (*slotFunc)(QDialogButtonBox*) = reinterpret_cast<void (*)(QDialogButtonBox*)>(slot);
    QDialogButtonBox::connect(self, &QDialogButtonBox::accepted, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QDialogButtonBox_HelpRequested(QDialogButtonBox* self) {
    self->helpRequested();
}

void QDialogButtonBox_Connect_HelpRequested(QDialogButtonBox* self, intptr_t slot) {
    void (*slotFunc)(QDialogButtonBox*) = reinterpret_cast<void (*)(QDialogButtonBox*)>(slot);
    QDialogButtonBox::connect(self, &QDialogButtonBox::helpRequested, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QDialogButtonBox_Rejected(QDialogButtonBox* self) {
    self->rejected();
}

void QDialogButtonBox_Connect_Rejected(QDialogButtonBox* self, intptr_t slot) {
    void (*slotFunc)(QDialogButtonBox*) = reinterpret_cast<void (*)(QDialogButtonBox*)>(slot);
    QDialogButtonBox::connect(self, &QDialogButtonBox::rejected, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QDialogButtonBox_Tr2(const char* s, const char* c) {
    QString _ret = QDialogButtonBox::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QDialogButtonBox_Tr3(const char* s, const char* c, int n) {
    QString _ret = QDialogButtonBox::tr(s, c, static_cast<int>(n));
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
void QDialogButtonBox_ChangeEvent(QDialogButtonBox* self, QEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->changeEvent(event);
    } else {
        vqdialogbuttonbox->changeEvent(event);
    }
}

// Base class handler implementation
void QDialogButtonBox_QBaseChangeEvent(QDialogButtonBox* self, QEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_ChangeEvent_IsBase(true);
        vqdialogbuttonbox->changeEvent(event);
    } else {
        vqdialogbuttonbox->changeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnChangeEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_ChangeEvent_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDialogButtonBox_Event(QDialogButtonBox* self, QEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        return vqdialogbuttonbox->event(event);
    } else {
        return vqdialogbuttonbox->event(event);
    }
}

// Base class handler implementation
bool QDialogButtonBox_QBaseEvent(QDialogButtonBox* self, QEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_Event_IsBase(true);
        return vqdialogbuttonbox->event(event);
    } else {
        return vqdialogbuttonbox->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_Event_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_Event_Callback>(slot));
    }
}

// Derived class handler implementation
int QDialogButtonBox_DevType(const QDialogButtonBox* self) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self))) {
        return vqdialogbuttonbox->devType();
    } else {
        return vqdialogbuttonbox->devType();
    }
}

// Base class handler implementation
int QDialogButtonBox_QBaseDevType(const QDialogButtonBox* self) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self))) {
        vqdialogbuttonbox->setQDialogButtonBox_DevType_IsBase(true);
        return vqdialogbuttonbox->devType();
    } else {
        return vqdialogbuttonbox->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnDevType(const QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self))) {
        vqdialogbuttonbox->setQDialogButtonBox_DevType_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialogButtonBox_SetVisible(QDialogButtonBox* self, bool visible) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setVisible(visible);
    } else {
        vqdialogbuttonbox->setVisible(visible);
    }
}

// Base class handler implementation
void QDialogButtonBox_QBaseSetVisible(QDialogButtonBox* self, bool visible) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_SetVisible_IsBase(true);
        vqdialogbuttonbox->setVisible(visible);
    } else {
        vqdialogbuttonbox->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnSetVisible(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_SetVisible_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QDialogButtonBox_SizeHint(const QDialogButtonBox* self) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self))) {
        return new QSize(vqdialogbuttonbox->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QDialogButtonBox_QBaseSizeHint(const QDialogButtonBox* self) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self))) {
        vqdialogbuttonbox->setQDialogButtonBox_SizeHint_IsBase(true);
        return new QSize(vqdialogbuttonbox->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnSizeHint(const QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self))) {
        vqdialogbuttonbox->setQDialogButtonBox_SizeHint_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QDialogButtonBox_MinimumSizeHint(const QDialogButtonBox* self) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self))) {
        return new QSize(vqdialogbuttonbox->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QDialogButtonBox_QBaseMinimumSizeHint(const QDialogButtonBox* self) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self))) {
        vqdialogbuttonbox->setQDialogButtonBox_MinimumSizeHint_IsBase(true);
        return new QSize(vqdialogbuttonbox->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnMinimumSizeHint(const QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self))) {
        vqdialogbuttonbox->setQDialogButtonBox_MinimumSizeHint_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QDialogButtonBox_HeightForWidth(const QDialogButtonBox* self, int param1) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self))) {
        return vqdialogbuttonbox->heightForWidth(static_cast<int>(param1));
    } else {
        return vqdialogbuttonbox->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QDialogButtonBox_QBaseHeightForWidth(const QDialogButtonBox* self, int param1) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self))) {
        vqdialogbuttonbox->setQDialogButtonBox_HeightForWidth_IsBase(true);
        return vqdialogbuttonbox->heightForWidth(static_cast<int>(param1));
    } else {
        return vqdialogbuttonbox->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnHeightForWidth(const QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self))) {
        vqdialogbuttonbox->setQDialogButtonBox_HeightForWidth_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDialogButtonBox_HasHeightForWidth(const QDialogButtonBox* self) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self))) {
        return vqdialogbuttonbox->hasHeightForWidth();
    } else {
        return vqdialogbuttonbox->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QDialogButtonBox_QBaseHasHeightForWidth(const QDialogButtonBox* self) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self))) {
        vqdialogbuttonbox->setQDialogButtonBox_HasHeightForWidth_IsBase(true);
        return vqdialogbuttonbox->hasHeightForWidth();
    } else {
        return vqdialogbuttonbox->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnHasHeightForWidth(const QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self))) {
        vqdialogbuttonbox->setQDialogButtonBox_HasHeightForWidth_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QDialogButtonBox_PaintEngine(const QDialogButtonBox* self) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self))) {
        return vqdialogbuttonbox->paintEngine();
    } else {
        return vqdialogbuttonbox->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QDialogButtonBox_QBasePaintEngine(const QDialogButtonBox* self) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self))) {
        vqdialogbuttonbox->setQDialogButtonBox_PaintEngine_IsBase(true);
        return vqdialogbuttonbox->paintEngine();
    } else {
        return vqdialogbuttonbox->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnPaintEngine(const QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self))) {
        vqdialogbuttonbox->setQDialogButtonBox_PaintEngine_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialogButtonBox_MousePressEvent(QDialogButtonBox* self, QMouseEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->mousePressEvent(event);
    } else {
        vqdialogbuttonbox->mousePressEvent(event);
    }
}

// Base class handler implementation
void QDialogButtonBox_QBaseMousePressEvent(QDialogButtonBox* self, QMouseEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_MousePressEvent_IsBase(true);
        vqdialogbuttonbox->mousePressEvent(event);
    } else {
        vqdialogbuttonbox->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnMousePressEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_MousePressEvent_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialogButtonBox_MouseReleaseEvent(QDialogButtonBox* self, QMouseEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->mouseReleaseEvent(event);
    } else {
        vqdialogbuttonbox->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QDialogButtonBox_QBaseMouseReleaseEvent(QDialogButtonBox* self, QMouseEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_MouseReleaseEvent_IsBase(true);
        vqdialogbuttonbox->mouseReleaseEvent(event);
    } else {
        vqdialogbuttonbox->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnMouseReleaseEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialogButtonBox_MouseDoubleClickEvent(QDialogButtonBox* self, QMouseEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->mouseDoubleClickEvent(event);
    } else {
        vqdialogbuttonbox->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QDialogButtonBox_QBaseMouseDoubleClickEvent(QDialogButtonBox* self, QMouseEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_MouseDoubleClickEvent_IsBase(true);
        vqdialogbuttonbox->mouseDoubleClickEvent(event);
    } else {
        vqdialogbuttonbox->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnMouseDoubleClickEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialogButtonBox_MouseMoveEvent(QDialogButtonBox* self, QMouseEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->mouseMoveEvent(event);
    } else {
        vqdialogbuttonbox->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QDialogButtonBox_QBaseMouseMoveEvent(QDialogButtonBox* self, QMouseEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_MouseMoveEvent_IsBase(true);
        vqdialogbuttonbox->mouseMoveEvent(event);
    } else {
        vqdialogbuttonbox->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnMouseMoveEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_MouseMoveEvent_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialogButtonBox_WheelEvent(QDialogButtonBox* self, QWheelEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->wheelEvent(event);
    } else {
        vqdialogbuttonbox->wheelEvent(event);
    }
}

// Base class handler implementation
void QDialogButtonBox_QBaseWheelEvent(QDialogButtonBox* self, QWheelEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_WheelEvent_IsBase(true);
        vqdialogbuttonbox->wheelEvent(event);
    } else {
        vqdialogbuttonbox->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnWheelEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_WheelEvent_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialogButtonBox_KeyPressEvent(QDialogButtonBox* self, QKeyEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->keyPressEvent(event);
    } else {
        vqdialogbuttonbox->keyPressEvent(event);
    }
}

// Base class handler implementation
void QDialogButtonBox_QBaseKeyPressEvent(QDialogButtonBox* self, QKeyEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_KeyPressEvent_IsBase(true);
        vqdialogbuttonbox->keyPressEvent(event);
    } else {
        vqdialogbuttonbox->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnKeyPressEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_KeyPressEvent_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialogButtonBox_KeyReleaseEvent(QDialogButtonBox* self, QKeyEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->keyReleaseEvent(event);
    } else {
        vqdialogbuttonbox->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QDialogButtonBox_QBaseKeyReleaseEvent(QDialogButtonBox* self, QKeyEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_KeyReleaseEvent_IsBase(true);
        vqdialogbuttonbox->keyReleaseEvent(event);
    } else {
        vqdialogbuttonbox->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnKeyReleaseEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialogButtonBox_FocusInEvent(QDialogButtonBox* self, QFocusEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->focusInEvent(event);
    } else {
        vqdialogbuttonbox->focusInEvent(event);
    }
}

// Base class handler implementation
void QDialogButtonBox_QBaseFocusInEvent(QDialogButtonBox* self, QFocusEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_FocusInEvent_IsBase(true);
        vqdialogbuttonbox->focusInEvent(event);
    } else {
        vqdialogbuttonbox->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnFocusInEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_FocusInEvent_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialogButtonBox_FocusOutEvent(QDialogButtonBox* self, QFocusEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->focusOutEvent(event);
    } else {
        vqdialogbuttonbox->focusOutEvent(event);
    }
}

// Base class handler implementation
void QDialogButtonBox_QBaseFocusOutEvent(QDialogButtonBox* self, QFocusEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_FocusOutEvent_IsBase(true);
        vqdialogbuttonbox->focusOutEvent(event);
    } else {
        vqdialogbuttonbox->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnFocusOutEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_FocusOutEvent_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialogButtonBox_EnterEvent(QDialogButtonBox* self, QEnterEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->enterEvent(event);
    } else {
        vqdialogbuttonbox->enterEvent(event);
    }
}

// Base class handler implementation
void QDialogButtonBox_QBaseEnterEvent(QDialogButtonBox* self, QEnterEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_EnterEvent_IsBase(true);
        vqdialogbuttonbox->enterEvent(event);
    } else {
        vqdialogbuttonbox->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnEnterEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_EnterEvent_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialogButtonBox_LeaveEvent(QDialogButtonBox* self, QEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->leaveEvent(event);
    } else {
        vqdialogbuttonbox->leaveEvent(event);
    }
}

// Base class handler implementation
void QDialogButtonBox_QBaseLeaveEvent(QDialogButtonBox* self, QEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_LeaveEvent_IsBase(true);
        vqdialogbuttonbox->leaveEvent(event);
    } else {
        vqdialogbuttonbox->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnLeaveEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_LeaveEvent_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialogButtonBox_PaintEvent(QDialogButtonBox* self, QPaintEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->paintEvent(event);
    } else {
        vqdialogbuttonbox->paintEvent(event);
    }
}

// Base class handler implementation
void QDialogButtonBox_QBasePaintEvent(QDialogButtonBox* self, QPaintEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_PaintEvent_IsBase(true);
        vqdialogbuttonbox->paintEvent(event);
    } else {
        vqdialogbuttonbox->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnPaintEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_PaintEvent_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialogButtonBox_MoveEvent(QDialogButtonBox* self, QMoveEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->moveEvent(event);
    } else {
        vqdialogbuttonbox->moveEvent(event);
    }
}

// Base class handler implementation
void QDialogButtonBox_QBaseMoveEvent(QDialogButtonBox* self, QMoveEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_MoveEvent_IsBase(true);
        vqdialogbuttonbox->moveEvent(event);
    } else {
        vqdialogbuttonbox->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnMoveEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_MoveEvent_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialogButtonBox_ResizeEvent(QDialogButtonBox* self, QResizeEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->resizeEvent(event);
    } else {
        vqdialogbuttonbox->resizeEvent(event);
    }
}

// Base class handler implementation
void QDialogButtonBox_QBaseResizeEvent(QDialogButtonBox* self, QResizeEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_ResizeEvent_IsBase(true);
        vqdialogbuttonbox->resizeEvent(event);
    } else {
        vqdialogbuttonbox->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnResizeEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_ResizeEvent_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialogButtonBox_CloseEvent(QDialogButtonBox* self, QCloseEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->closeEvent(event);
    } else {
        vqdialogbuttonbox->closeEvent(event);
    }
}

// Base class handler implementation
void QDialogButtonBox_QBaseCloseEvent(QDialogButtonBox* self, QCloseEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_CloseEvent_IsBase(true);
        vqdialogbuttonbox->closeEvent(event);
    } else {
        vqdialogbuttonbox->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnCloseEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_CloseEvent_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialogButtonBox_ContextMenuEvent(QDialogButtonBox* self, QContextMenuEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->contextMenuEvent(event);
    } else {
        vqdialogbuttonbox->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QDialogButtonBox_QBaseContextMenuEvent(QDialogButtonBox* self, QContextMenuEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_ContextMenuEvent_IsBase(true);
        vqdialogbuttonbox->contextMenuEvent(event);
    } else {
        vqdialogbuttonbox->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnContextMenuEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_ContextMenuEvent_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialogButtonBox_TabletEvent(QDialogButtonBox* self, QTabletEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->tabletEvent(event);
    } else {
        vqdialogbuttonbox->tabletEvent(event);
    }
}

// Base class handler implementation
void QDialogButtonBox_QBaseTabletEvent(QDialogButtonBox* self, QTabletEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_TabletEvent_IsBase(true);
        vqdialogbuttonbox->tabletEvent(event);
    } else {
        vqdialogbuttonbox->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnTabletEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_TabletEvent_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialogButtonBox_ActionEvent(QDialogButtonBox* self, QActionEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->actionEvent(event);
    } else {
        vqdialogbuttonbox->actionEvent(event);
    }
}

// Base class handler implementation
void QDialogButtonBox_QBaseActionEvent(QDialogButtonBox* self, QActionEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_ActionEvent_IsBase(true);
        vqdialogbuttonbox->actionEvent(event);
    } else {
        vqdialogbuttonbox->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnActionEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_ActionEvent_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialogButtonBox_DragEnterEvent(QDialogButtonBox* self, QDragEnterEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->dragEnterEvent(event);
    } else {
        vqdialogbuttonbox->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QDialogButtonBox_QBaseDragEnterEvent(QDialogButtonBox* self, QDragEnterEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_DragEnterEvent_IsBase(true);
        vqdialogbuttonbox->dragEnterEvent(event);
    } else {
        vqdialogbuttonbox->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnDragEnterEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_DragEnterEvent_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialogButtonBox_DragMoveEvent(QDialogButtonBox* self, QDragMoveEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->dragMoveEvent(event);
    } else {
        vqdialogbuttonbox->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QDialogButtonBox_QBaseDragMoveEvent(QDialogButtonBox* self, QDragMoveEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_DragMoveEvent_IsBase(true);
        vqdialogbuttonbox->dragMoveEvent(event);
    } else {
        vqdialogbuttonbox->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnDragMoveEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_DragMoveEvent_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialogButtonBox_DragLeaveEvent(QDialogButtonBox* self, QDragLeaveEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->dragLeaveEvent(event);
    } else {
        vqdialogbuttonbox->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QDialogButtonBox_QBaseDragLeaveEvent(QDialogButtonBox* self, QDragLeaveEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_DragLeaveEvent_IsBase(true);
        vqdialogbuttonbox->dragLeaveEvent(event);
    } else {
        vqdialogbuttonbox->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnDragLeaveEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_DragLeaveEvent_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialogButtonBox_DropEvent(QDialogButtonBox* self, QDropEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->dropEvent(event);
    } else {
        vqdialogbuttonbox->dropEvent(event);
    }
}

// Base class handler implementation
void QDialogButtonBox_QBaseDropEvent(QDialogButtonBox* self, QDropEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_DropEvent_IsBase(true);
        vqdialogbuttonbox->dropEvent(event);
    } else {
        vqdialogbuttonbox->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnDropEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_DropEvent_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialogButtonBox_ShowEvent(QDialogButtonBox* self, QShowEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->showEvent(event);
    } else {
        vqdialogbuttonbox->showEvent(event);
    }
}

// Base class handler implementation
void QDialogButtonBox_QBaseShowEvent(QDialogButtonBox* self, QShowEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_ShowEvent_IsBase(true);
        vqdialogbuttonbox->showEvent(event);
    } else {
        vqdialogbuttonbox->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnShowEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_ShowEvent_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialogButtonBox_HideEvent(QDialogButtonBox* self, QHideEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->hideEvent(event);
    } else {
        vqdialogbuttonbox->hideEvent(event);
    }
}

// Base class handler implementation
void QDialogButtonBox_QBaseHideEvent(QDialogButtonBox* self, QHideEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_HideEvent_IsBase(true);
        vqdialogbuttonbox->hideEvent(event);
    } else {
        vqdialogbuttonbox->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnHideEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_HideEvent_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDialogButtonBox_NativeEvent(QDialogButtonBox* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        return vqdialogbuttonbox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqdialogbuttonbox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QDialogButtonBox_QBaseNativeEvent(QDialogButtonBox* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_NativeEvent_IsBase(true);
        return vqdialogbuttonbox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqdialogbuttonbox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnNativeEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_NativeEvent_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QDialogButtonBox_Metric(const QDialogButtonBox* self, int param1) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self))) {
        return vqdialogbuttonbox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqdialogbuttonbox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QDialogButtonBox_QBaseMetric(const QDialogButtonBox* self, int param1) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self))) {
        vqdialogbuttonbox->setQDialogButtonBox_Metric_IsBase(true);
        return vqdialogbuttonbox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqdialogbuttonbox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnMetric(const QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self))) {
        vqdialogbuttonbox->setQDialogButtonBox_Metric_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialogButtonBox_InitPainter(const QDialogButtonBox* self, QPainter* painter) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self))) {
        vqdialogbuttonbox->initPainter(painter);
    } else {
        vqdialogbuttonbox->initPainter(painter);
    }
}

// Base class handler implementation
void QDialogButtonBox_QBaseInitPainter(const QDialogButtonBox* self, QPainter* painter) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self))) {
        vqdialogbuttonbox->setQDialogButtonBox_InitPainter_IsBase(true);
        vqdialogbuttonbox->initPainter(painter);
    } else {
        vqdialogbuttonbox->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnInitPainter(const QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self))) {
        vqdialogbuttonbox->setQDialogButtonBox_InitPainter_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QDialogButtonBox_Redirected(const QDialogButtonBox* self, QPoint* offset) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self))) {
        return vqdialogbuttonbox->redirected(offset);
    } else {
        return vqdialogbuttonbox->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QDialogButtonBox_QBaseRedirected(const QDialogButtonBox* self, QPoint* offset) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self))) {
        vqdialogbuttonbox->setQDialogButtonBox_Redirected_IsBase(true);
        return vqdialogbuttonbox->redirected(offset);
    } else {
        return vqdialogbuttonbox->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnRedirected(const QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self))) {
        vqdialogbuttonbox->setQDialogButtonBox_Redirected_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QDialogButtonBox_SharedPainter(const QDialogButtonBox* self) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self))) {
        return vqdialogbuttonbox->sharedPainter();
    } else {
        return vqdialogbuttonbox->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QDialogButtonBox_QBaseSharedPainter(const QDialogButtonBox* self) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self))) {
        vqdialogbuttonbox->setQDialogButtonBox_SharedPainter_IsBase(true);
        return vqdialogbuttonbox->sharedPainter();
    } else {
        return vqdialogbuttonbox->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnSharedPainter(const QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self))) {
        vqdialogbuttonbox->setQDialogButtonBox_SharedPainter_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialogButtonBox_InputMethodEvent(QDialogButtonBox* self, QInputMethodEvent* param1) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->inputMethodEvent(param1);
    } else {
        vqdialogbuttonbox->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QDialogButtonBox_QBaseInputMethodEvent(QDialogButtonBox* self, QInputMethodEvent* param1) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_InputMethodEvent_IsBase(true);
        vqdialogbuttonbox->inputMethodEvent(param1);
    } else {
        vqdialogbuttonbox->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnInputMethodEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_InputMethodEvent_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QDialogButtonBox_InputMethodQuery(const QDialogButtonBox* self, int param1) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self))) {
        return new QVariant(vqdialogbuttonbox->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QDialogButtonBox_QBaseInputMethodQuery(const QDialogButtonBox* self, int param1) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self))) {
        vqdialogbuttonbox->setQDialogButtonBox_InputMethodQuery_IsBase(true);
        return new QVariant(vqdialogbuttonbox->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnInputMethodQuery(const QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self))) {
        vqdialogbuttonbox->setQDialogButtonBox_InputMethodQuery_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDialogButtonBox_FocusNextPrevChild(QDialogButtonBox* self, bool next) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        return vqdialogbuttonbox->focusNextPrevChild(next);
    } else {
        return vqdialogbuttonbox->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QDialogButtonBox_QBaseFocusNextPrevChild(QDialogButtonBox* self, bool next) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_FocusNextPrevChild_IsBase(true);
        return vqdialogbuttonbox->focusNextPrevChild(next);
    } else {
        return vqdialogbuttonbox->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnFocusNextPrevChild(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDialogButtonBox_EventFilter(QDialogButtonBox* self, QObject* watched, QEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        return vqdialogbuttonbox->eventFilter(watched, event);
    } else {
        return vqdialogbuttonbox->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QDialogButtonBox_QBaseEventFilter(QDialogButtonBox* self, QObject* watched, QEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_EventFilter_IsBase(true);
        return vqdialogbuttonbox->eventFilter(watched, event);
    } else {
        return vqdialogbuttonbox->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnEventFilter(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_EventFilter_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialogButtonBox_TimerEvent(QDialogButtonBox* self, QTimerEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->timerEvent(event);
    } else {
        vqdialogbuttonbox->timerEvent(event);
    }
}

// Base class handler implementation
void QDialogButtonBox_QBaseTimerEvent(QDialogButtonBox* self, QTimerEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_TimerEvent_IsBase(true);
        vqdialogbuttonbox->timerEvent(event);
    } else {
        vqdialogbuttonbox->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnTimerEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_TimerEvent_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialogButtonBox_ChildEvent(QDialogButtonBox* self, QChildEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->childEvent(event);
    } else {
        vqdialogbuttonbox->childEvent(event);
    }
}

// Base class handler implementation
void QDialogButtonBox_QBaseChildEvent(QDialogButtonBox* self, QChildEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_ChildEvent_IsBase(true);
        vqdialogbuttonbox->childEvent(event);
    } else {
        vqdialogbuttonbox->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnChildEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_ChildEvent_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialogButtonBox_CustomEvent(QDialogButtonBox* self, QEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->customEvent(event);
    } else {
        vqdialogbuttonbox->customEvent(event);
    }
}

// Base class handler implementation
void QDialogButtonBox_QBaseCustomEvent(QDialogButtonBox* self, QEvent* event) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_CustomEvent_IsBase(true);
        vqdialogbuttonbox->customEvent(event);
    } else {
        vqdialogbuttonbox->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnCustomEvent(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_CustomEvent_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialogButtonBox_ConnectNotify(QDialogButtonBox* self, QMetaMethod* signal) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->connectNotify(*signal);
    } else {
        vqdialogbuttonbox->connectNotify(*signal);
    }
}

// Base class handler implementation
void QDialogButtonBox_QBaseConnectNotify(QDialogButtonBox* self, QMetaMethod* signal) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_ConnectNotify_IsBase(true);
        vqdialogbuttonbox->connectNotify(*signal);
    } else {
        vqdialogbuttonbox->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnConnectNotify(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_ConnectNotify_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialogButtonBox_DisconnectNotify(QDialogButtonBox* self, QMetaMethod* signal) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->disconnectNotify(*signal);
    } else {
        vqdialogbuttonbox->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QDialogButtonBox_QBaseDisconnectNotify(QDialogButtonBox* self, QMetaMethod* signal) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_DisconnectNotify_IsBase(true);
        vqdialogbuttonbox->disconnectNotify(*signal);
    } else {
        vqdialogbuttonbox->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnDisconnectNotify(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_DisconnectNotify_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialogButtonBox_UpdateMicroFocus(QDialogButtonBox* self) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->updateMicroFocus();
    } else {
        vqdialogbuttonbox->updateMicroFocus();
    }
}

// Base class handler implementation
void QDialogButtonBox_QBaseUpdateMicroFocus(QDialogButtonBox* self) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_UpdateMicroFocus_IsBase(true);
        vqdialogbuttonbox->updateMicroFocus();
    } else {
        vqdialogbuttonbox->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnUpdateMicroFocus(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialogButtonBox_Create(QDialogButtonBox* self) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->create();
    } else {
        vqdialogbuttonbox->create();
    }
}

// Base class handler implementation
void QDialogButtonBox_QBaseCreate(QDialogButtonBox* self) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_Create_IsBase(true);
        vqdialogbuttonbox->create();
    } else {
        vqdialogbuttonbox->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnCreate(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_Create_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialogButtonBox_Destroy(QDialogButtonBox* self) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->destroy();
    } else {
        vqdialogbuttonbox->destroy();
    }
}

// Base class handler implementation
void QDialogButtonBox_QBaseDestroy(QDialogButtonBox* self) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_Destroy_IsBase(true);
        vqdialogbuttonbox->destroy();
    } else {
        vqdialogbuttonbox->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnDestroy(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_Destroy_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDialogButtonBox_FocusNextChild(QDialogButtonBox* self) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        return vqdialogbuttonbox->focusNextChild();
    } else {
        return vqdialogbuttonbox->focusNextChild();
    }
}

// Base class handler implementation
bool QDialogButtonBox_QBaseFocusNextChild(QDialogButtonBox* self) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_FocusNextChild_IsBase(true);
        return vqdialogbuttonbox->focusNextChild();
    } else {
        return vqdialogbuttonbox->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnFocusNextChild(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_FocusNextChild_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDialogButtonBox_FocusPreviousChild(QDialogButtonBox* self) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        return vqdialogbuttonbox->focusPreviousChild();
    } else {
        return vqdialogbuttonbox->focusPreviousChild();
    }
}

// Base class handler implementation
bool QDialogButtonBox_QBaseFocusPreviousChild(QDialogButtonBox* self) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_FocusPreviousChild_IsBase(true);
        return vqdialogbuttonbox->focusPreviousChild();
    } else {
        return vqdialogbuttonbox->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnFocusPreviousChild(QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self)) {
        vqdialogbuttonbox->setQDialogButtonBox_FocusPreviousChild_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QDialogButtonBox_Sender(const QDialogButtonBox* self) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self))) {
        return vqdialogbuttonbox->sender();
    } else {
        return vqdialogbuttonbox->sender();
    }
}

// Base class handler implementation
QObject* QDialogButtonBox_QBaseSender(const QDialogButtonBox* self) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self))) {
        vqdialogbuttonbox->setQDialogButtonBox_Sender_IsBase(true);
        return vqdialogbuttonbox->sender();
    } else {
        return vqdialogbuttonbox->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnSender(const QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self))) {
        vqdialogbuttonbox->setQDialogButtonBox_Sender_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QDialogButtonBox_SenderSignalIndex(const QDialogButtonBox* self) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self))) {
        return vqdialogbuttonbox->senderSignalIndex();
    } else {
        return vqdialogbuttonbox->senderSignalIndex();
    }
}

// Base class handler implementation
int QDialogButtonBox_QBaseSenderSignalIndex(const QDialogButtonBox* self) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self))) {
        vqdialogbuttonbox->setQDialogButtonBox_SenderSignalIndex_IsBase(true);
        return vqdialogbuttonbox->senderSignalIndex();
    } else {
        return vqdialogbuttonbox->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnSenderSignalIndex(const QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self))) {
        vqdialogbuttonbox->setQDialogButtonBox_SenderSignalIndex_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QDialogButtonBox_Receivers(const QDialogButtonBox* self, const char* signal) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self))) {
        return vqdialogbuttonbox->receivers(signal);
    } else {
        return vqdialogbuttonbox->receivers(signal);
    }
}

// Base class handler implementation
int QDialogButtonBox_QBaseReceivers(const QDialogButtonBox* self, const char* signal) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self))) {
        vqdialogbuttonbox->setQDialogButtonBox_Receivers_IsBase(true);
        return vqdialogbuttonbox->receivers(signal);
    } else {
        return vqdialogbuttonbox->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnReceivers(const QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self))) {
        vqdialogbuttonbox->setQDialogButtonBox_Receivers_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDialogButtonBox_IsSignalConnected(const QDialogButtonBox* self, QMetaMethod* signal) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self))) {
        return vqdialogbuttonbox->isSignalConnected(*signal);
    } else {
        return vqdialogbuttonbox->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QDialogButtonBox_QBaseIsSignalConnected(const QDialogButtonBox* self, QMetaMethod* signal) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self))) {
        vqdialogbuttonbox->setQDialogButtonBox_IsSignalConnected_IsBase(true);
        return vqdialogbuttonbox->isSignalConnected(*signal);
    } else {
        return vqdialogbuttonbox->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnIsSignalConnected(const QDialogButtonBox* self, intptr_t slot) {
    if (auto* vqdialogbuttonbox = const_cast<VirtualQDialogButtonBox*>(dynamic_cast<const VirtualQDialogButtonBox*>(self))) {
        vqdialogbuttonbox->setQDialogButtonBox_IsSignalConnected_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_IsSignalConnected_Callback>(slot));
    }
}

void QDialogButtonBox_Delete(QDialogButtonBox* self) {
    delete self;
}
