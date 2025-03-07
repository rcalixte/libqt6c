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
#include <QDialog>
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
#include <qdialog.h>
#include "libqdialog.hpp"
#include "libqdialog.hxx"

QDialog* QDialog_new(QWidget* parent) {
    return new VirtualQDialog(parent);
}

QDialog* QDialog_new2() {
    return new VirtualQDialog();
}

QDialog* QDialog_new3(QWidget* parent, int f) {
    return new VirtualQDialog(parent, static_cast<Qt::WindowFlags>(f));
}

QMetaObject* QDialog_MetaObject(const QDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* QDialog_Metacast(QDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QDialog_Metacall(QDialog* self, int param1, int param2, void** param3) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QDialog_OnMetacall(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_Metacall_Callback(reinterpret_cast<VirtualQDialog::QDialog_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QDialog_QBaseMetacall(QDialog* self, int param1, int param2, void** param3) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_Metacall_IsBase(true);
        return vqdialog->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QDialog_Tr(const char* s) {
    QString _ret = QDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QDialog_Result(const QDialog* self) {
    return self->result();
}

void QDialog_SetSizeGripEnabled(QDialog* self, bool sizeGripEnabled) {
    self->setSizeGripEnabled(sizeGripEnabled);
}

bool QDialog_IsSizeGripEnabled(const QDialog* self) {
    return self->isSizeGripEnabled();
}

void QDialog_SetModal(QDialog* self, bool modal) {
    self->setModal(modal);
}

void QDialog_SetResult(QDialog* self, int r) {
    self->setResult(static_cast<int>(r));
}

void QDialog_Finished(QDialog* self, int result) {
    self->finished(static_cast<int>(result));
}

void QDialog_Connect_Finished(QDialog* self, intptr_t slot) {
    void (*slotFunc)(QDialog*, int) = reinterpret_cast<void (*)(QDialog*, int)>(slot);
    QDialog::connect(self, &QDialog::finished, [self, slotFunc](int result) {
        int sigval1 = result;
        slotFunc(self, sigval1);
    });
}

void QDialog_Accepted(QDialog* self) {
    self->accepted();
}

void QDialog_Connect_Accepted(QDialog* self, intptr_t slot) {
    void (*slotFunc)(QDialog*) = reinterpret_cast<void (*)(QDialog*)>(slot);
    QDialog::connect(self, &QDialog::accepted, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QDialog_Rejected(QDialog* self) {
    self->rejected();
}

void QDialog_Connect_Rejected(QDialog* self, intptr_t slot) {
    void (*slotFunc)(QDialog*) = reinterpret_cast<void (*)(QDialog*)>(slot);
    QDialog::connect(self, &QDialog::rejected, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QDialog_Tr2(const char* s, const char* c) {
    QString _ret = QDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QDialog_Tr3(const char* s, const char* c, int n) {
    QString _ret = QDialog::tr(s, c, static_cast<int>(n));
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
void QDialog_SetVisible(QDialog* self, bool visible) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setVisible(visible);
    } else {
        vqdialog->setVisible(visible);
    }
}

// Base class handler implementation
void QDialog_QBaseSetVisible(QDialog* self, bool visible) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_SetVisible_IsBase(true);
        vqdialog->setVisible(visible);
    } else {
        vqdialog->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnSetVisible(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_SetVisible_Callback(reinterpret_cast<VirtualQDialog::QDialog_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QDialog_SizeHint(const QDialog* self) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self))) {
        return new QSize(vqdialog->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QDialog_QBaseSizeHint(const QDialog* self) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self))) {
        vqdialog->setQDialog_SizeHint_IsBase(true);
        return new QSize(vqdialog->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnSizeHint(const QDialog* self, intptr_t slot) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self))) {
        vqdialog->setQDialog_SizeHint_Callback(reinterpret_cast<VirtualQDialog::QDialog_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QDialog_MinimumSizeHint(const QDialog* self) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self))) {
        return new QSize(vqdialog->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QDialog_QBaseMinimumSizeHint(const QDialog* self) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self))) {
        vqdialog->setQDialog_MinimumSizeHint_IsBase(true);
        return new QSize(vqdialog->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnMinimumSizeHint(const QDialog* self, intptr_t slot) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self))) {
        vqdialog->setQDialog_MinimumSizeHint_Callback(reinterpret_cast<VirtualQDialog::QDialog_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_Open(QDialog* self) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->open();
    } else {
        vqdialog->open();
    }
}

// Base class handler implementation
void QDialog_QBaseOpen(QDialog* self) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_Open_IsBase(true);
        vqdialog->open();
    } else {
        vqdialog->open();
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnOpen(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_Open_Callback(reinterpret_cast<VirtualQDialog::QDialog_Open_Callback>(slot));
    }
}

// Derived class handler implementation
int QDialog_Exec(QDialog* self) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        return vqdialog->exec();
    } else {
        return vqdialog->exec();
    }
}

// Base class handler implementation
int QDialog_QBaseExec(QDialog* self) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_Exec_IsBase(true);
        return vqdialog->exec();
    } else {
        return vqdialog->exec();
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnExec(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_Exec_Callback(reinterpret_cast<VirtualQDialog::QDialog_Exec_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_Done(QDialog* self, int param1) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->done(static_cast<int>(param1));
    } else {
        vqdialog->done(static_cast<int>(param1));
    }
}

// Base class handler implementation
void QDialog_QBaseDone(QDialog* self, int param1) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_Done_IsBase(true);
        vqdialog->done(static_cast<int>(param1));
    } else {
        vqdialog->done(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnDone(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_Done_Callback(reinterpret_cast<VirtualQDialog::QDialog_Done_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_Accept(QDialog* self) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->accept();
    } else {
        vqdialog->accept();
    }
}

// Base class handler implementation
void QDialog_QBaseAccept(QDialog* self) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_Accept_IsBase(true);
        vqdialog->accept();
    } else {
        vqdialog->accept();
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnAccept(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_Accept_Callback(reinterpret_cast<VirtualQDialog::QDialog_Accept_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_Reject(QDialog* self) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->reject();
    } else {
        vqdialog->reject();
    }
}

// Base class handler implementation
void QDialog_QBaseReject(QDialog* self) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_Reject_IsBase(true);
        vqdialog->reject();
    } else {
        vqdialog->reject();
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnReject(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_Reject_Callback(reinterpret_cast<VirtualQDialog::QDialog_Reject_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_KeyPressEvent(QDialog* self, QKeyEvent* param1) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->keyPressEvent(param1);
    } else {
        vqdialog->keyPressEvent(param1);
    }
}

// Base class handler implementation
void QDialog_QBaseKeyPressEvent(QDialog* self, QKeyEvent* param1) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_KeyPressEvent_IsBase(true);
        vqdialog->keyPressEvent(param1);
    } else {
        vqdialog->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnKeyPressEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_KeyPressEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_CloseEvent(QDialog* self, QCloseEvent* param1) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->closeEvent(param1);
    } else {
        vqdialog->closeEvent(param1);
    }
}

// Base class handler implementation
void QDialog_QBaseCloseEvent(QDialog* self, QCloseEvent* param1) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_CloseEvent_IsBase(true);
        vqdialog->closeEvent(param1);
    } else {
        vqdialog->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnCloseEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_CloseEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_ShowEvent(QDialog* self, QShowEvent* param1) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->showEvent(param1);
    } else {
        vqdialog->showEvent(param1);
    }
}

// Base class handler implementation
void QDialog_QBaseShowEvent(QDialog* self, QShowEvent* param1) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_ShowEvent_IsBase(true);
        vqdialog->showEvent(param1);
    } else {
        vqdialog->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnShowEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_ShowEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_ResizeEvent(QDialog* self, QResizeEvent* param1) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->resizeEvent(param1);
    } else {
        vqdialog->resizeEvent(param1);
    }
}

// Base class handler implementation
void QDialog_QBaseResizeEvent(QDialog* self, QResizeEvent* param1) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_ResizeEvent_IsBase(true);
        vqdialog->resizeEvent(param1);
    } else {
        vqdialog->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnResizeEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_ResizeEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_ContextMenuEvent(QDialog* self, QContextMenuEvent* param1) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->contextMenuEvent(param1);
    } else {
        vqdialog->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void QDialog_QBaseContextMenuEvent(QDialog* self, QContextMenuEvent* param1) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_ContextMenuEvent_IsBase(true);
        vqdialog->contextMenuEvent(param1);
    } else {
        vqdialog->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnContextMenuEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_ContextMenuEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDialog_EventFilter(QDialog* self, QObject* param1, QEvent* param2) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        return vqdialog->eventFilter(param1, param2);
    } else {
        return vqdialog->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool QDialog_QBaseEventFilter(QDialog* self, QObject* param1, QEvent* param2) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_EventFilter_IsBase(true);
        return vqdialog->eventFilter(param1, param2);
    } else {
        return vqdialog->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnEventFilter(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_EventFilter_Callback(reinterpret_cast<VirtualQDialog::QDialog_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int QDialog_DevType(const QDialog* self) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self))) {
        return vqdialog->devType();
    } else {
        return vqdialog->devType();
    }
}

// Base class handler implementation
int QDialog_QBaseDevType(const QDialog* self) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self))) {
        vqdialog->setQDialog_DevType_IsBase(true);
        return vqdialog->devType();
    } else {
        return vqdialog->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnDevType(const QDialog* self, intptr_t slot) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self))) {
        vqdialog->setQDialog_DevType_Callback(reinterpret_cast<VirtualQDialog::QDialog_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int QDialog_HeightForWidth(const QDialog* self, int param1) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self))) {
        return vqdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return vqdialog->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QDialog_QBaseHeightForWidth(const QDialog* self, int param1) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self))) {
        vqdialog->setQDialog_HeightForWidth_IsBase(true);
        return vqdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return vqdialog->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnHeightForWidth(const QDialog* self, intptr_t slot) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self))) {
        vqdialog->setQDialog_HeightForWidth_Callback(reinterpret_cast<VirtualQDialog::QDialog_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDialog_HasHeightForWidth(const QDialog* self) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self))) {
        return vqdialog->hasHeightForWidth();
    } else {
        return vqdialog->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QDialog_QBaseHasHeightForWidth(const QDialog* self) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self))) {
        vqdialog->setQDialog_HasHeightForWidth_IsBase(true);
        return vqdialog->hasHeightForWidth();
    } else {
        return vqdialog->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnHasHeightForWidth(const QDialog* self, intptr_t slot) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self))) {
        vqdialog->setQDialog_HasHeightForWidth_Callback(reinterpret_cast<VirtualQDialog::QDialog_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QDialog_PaintEngine(const QDialog* self) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self))) {
        return vqdialog->paintEngine();
    } else {
        return vqdialog->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QDialog_QBasePaintEngine(const QDialog* self) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self))) {
        vqdialog->setQDialog_PaintEngine_IsBase(true);
        return vqdialog->paintEngine();
    } else {
        return vqdialog->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnPaintEngine(const QDialog* self, intptr_t slot) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self))) {
        vqdialog->setQDialog_PaintEngine_Callback(reinterpret_cast<VirtualQDialog::QDialog_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDialog_Event(QDialog* self, QEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        return vqdialog->event(event);
    } else {
        return vqdialog->event(event);
    }
}

// Base class handler implementation
bool QDialog_QBaseEvent(QDialog* self, QEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_Event_IsBase(true);
        return vqdialog->event(event);
    } else {
        return vqdialog->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_Event_Callback(reinterpret_cast<VirtualQDialog::QDialog_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_MousePressEvent(QDialog* self, QMouseEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->mousePressEvent(event);
    } else {
        vqdialog->mousePressEvent(event);
    }
}

// Base class handler implementation
void QDialog_QBaseMousePressEvent(QDialog* self, QMouseEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_MousePressEvent_IsBase(true);
        vqdialog->mousePressEvent(event);
    } else {
        vqdialog->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnMousePressEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_MousePressEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_MouseReleaseEvent(QDialog* self, QMouseEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->mouseReleaseEvent(event);
    } else {
        vqdialog->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QDialog_QBaseMouseReleaseEvent(QDialog* self, QMouseEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_MouseReleaseEvent_IsBase(true);
        vqdialog->mouseReleaseEvent(event);
    } else {
        vqdialog->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnMouseReleaseEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_MouseDoubleClickEvent(QDialog* self, QMouseEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->mouseDoubleClickEvent(event);
    } else {
        vqdialog->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QDialog_QBaseMouseDoubleClickEvent(QDialog* self, QMouseEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_MouseDoubleClickEvent_IsBase(true);
        vqdialog->mouseDoubleClickEvent(event);
    } else {
        vqdialog->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnMouseDoubleClickEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_MouseMoveEvent(QDialog* self, QMouseEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->mouseMoveEvent(event);
    } else {
        vqdialog->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QDialog_QBaseMouseMoveEvent(QDialog* self, QMouseEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_MouseMoveEvent_IsBase(true);
        vqdialog->mouseMoveEvent(event);
    } else {
        vqdialog->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnMouseMoveEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_MouseMoveEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_WheelEvent(QDialog* self, QWheelEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->wheelEvent(event);
    } else {
        vqdialog->wheelEvent(event);
    }
}

// Base class handler implementation
void QDialog_QBaseWheelEvent(QDialog* self, QWheelEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_WheelEvent_IsBase(true);
        vqdialog->wheelEvent(event);
    } else {
        vqdialog->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnWheelEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_WheelEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_KeyReleaseEvent(QDialog* self, QKeyEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->keyReleaseEvent(event);
    } else {
        vqdialog->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QDialog_QBaseKeyReleaseEvent(QDialog* self, QKeyEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_KeyReleaseEvent_IsBase(true);
        vqdialog->keyReleaseEvent(event);
    } else {
        vqdialog->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnKeyReleaseEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_FocusInEvent(QDialog* self, QFocusEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->focusInEvent(event);
    } else {
        vqdialog->focusInEvent(event);
    }
}

// Base class handler implementation
void QDialog_QBaseFocusInEvent(QDialog* self, QFocusEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_FocusInEvent_IsBase(true);
        vqdialog->focusInEvent(event);
    } else {
        vqdialog->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnFocusInEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_FocusInEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_FocusOutEvent(QDialog* self, QFocusEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->focusOutEvent(event);
    } else {
        vqdialog->focusOutEvent(event);
    }
}

// Base class handler implementation
void QDialog_QBaseFocusOutEvent(QDialog* self, QFocusEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_FocusOutEvent_IsBase(true);
        vqdialog->focusOutEvent(event);
    } else {
        vqdialog->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnFocusOutEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_FocusOutEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_EnterEvent(QDialog* self, QEnterEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->enterEvent(event);
    } else {
        vqdialog->enterEvent(event);
    }
}

// Base class handler implementation
void QDialog_QBaseEnterEvent(QDialog* self, QEnterEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_EnterEvent_IsBase(true);
        vqdialog->enterEvent(event);
    } else {
        vqdialog->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnEnterEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_EnterEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_LeaveEvent(QDialog* self, QEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->leaveEvent(event);
    } else {
        vqdialog->leaveEvent(event);
    }
}

// Base class handler implementation
void QDialog_QBaseLeaveEvent(QDialog* self, QEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_LeaveEvent_IsBase(true);
        vqdialog->leaveEvent(event);
    } else {
        vqdialog->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnLeaveEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_LeaveEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_PaintEvent(QDialog* self, QPaintEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->paintEvent(event);
    } else {
        vqdialog->paintEvent(event);
    }
}

// Base class handler implementation
void QDialog_QBasePaintEvent(QDialog* self, QPaintEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_PaintEvent_IsBase(true);
        vqdialog->paintEvent(event);
    } else {
        vqdialog->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnPaintEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_PaintEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_MoveEvent(QDialog* self, QMoveEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->moveEvent(event);
    } else {
        vqdialog->moveEvent(event);
    }
}

// Base class handler implementation
void QDialog_QBaseMoveEvent(QDialog* self, QMoveEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_MoveEvent_IsBase(true);
        vqdialog->moveEvent(event);
    } else {
        vqdialog->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnMoveEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_MoveEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_TabletEvent(QDialog* self, QTabletEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->tabletEvent(event);
    } else {
        vqdialog->tabletEvent(event);
    }
}

// Base class handler implementation
void QDialog_QBaseTabletEvent(QDialog* self, QTabletEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_TabletEvent_IsBase(true);
        vqdialog->tabletEvent(event);
    } else {
        vqdialog->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnTabletEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_TabletEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_ActionEvent(QDialog* self, QActionEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->actionEvent(event);
    } else {
        vqdialog->actionEvent(event);
    }
}

// Base class handler implementation
void QDialog_QBaseActionEvent(QDialog* self, QActionEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_ActionEvent_IsBase(true);
        vqdialog->actionEvent(event);
    } else {
        vqdialog->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnActionEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_ActionEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_DragEnterEvent(QDialog* self, QDragEnterEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->dragEnterEvent(event);
    } else {
        vqdialog->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QDialog_QBaseDragEnterEvent(QDialog* self, QDragEnterEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_DragEnterEvent_IsBase(true);
        vqdialog->dragEnterEvent(event);
    } else {
        vqdialog->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnDragEnterEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_DragEnterEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_DragMoveEvent(QDialog* self, QDragMoveEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->dragMoveEvent(event);
    } else {
        vqdialog->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QDialog_QBaseDragMoveEvent(QDialog* self, QDragMoveEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_DragMoveEvent_IsBase(true);
        vqdialog->dragMoveEvent(event);
    } else {
        vqdialog->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnDragMoveEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_DragMoveEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_DragLeaveEvent(QDialog* self, QDragLeaveEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->dragLeaveEvent(event);
    } else {
        vqdialog->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QDialog_QBaseDragLeaveEvent(QDialog* self, QDragLeaveEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_DragLeaveEvent_IsBase(true);
        vqdialog->dragLeaveEvent(event);
    } else {
        vqdialog->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnDragLeaveEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_DragLeaveEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_DropEvent(QDialog* self, QDropEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->dropEvent(event);
    } else {
        vqdialog->dropEvent(event);
    }
}

// Base class handler implementation
void QDialog_QBaseDropEvent(QDialog* self, QDropEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_DropEvent_IsBase(true);
        vqdialog->dropEvent(event);
    } else {
        vqdialog->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnDropEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_DropEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_HideEvent(QDialog* self, QHideEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->hideEvent(event);
    } else {
        vqdialog->hideEvent(event);
    }
}

// Base class handler implementation
void QDialog_QBaseHideEvent(QDialog* self, QHideEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_HideEvent_IsBase(true);
        vqdialog->hideEvent(event);
    } else {
        vqdialog->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnHideEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_HideEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDialog_NativeEvent(QDialog* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        return vqdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QDialog_QBaseNativeEvent(QDialog* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_NativeEvent_IsBase(true);
        return vqdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnNativeEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_NativeEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_ChangeEvent(QDialog* self, QEvent* param1) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->changeEvent(param1);
    } else {
        vqdialog->changeEvent(param1);
    }
}

// Base class handler implementation
void QDialog_QBaseChangeEvent(QDialog* self, QEvent* param1) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_ChangeEvent_IsBase(true);
        vqdialog->changeEvent(param1);
    } else {
        vqdialog->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnChangeEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_ChangeEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QDialog_Metric(const QDialog* self, int param1) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self))) {
        return vqdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QDialog_QBaseMetric(const QDialog* self, int param1) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self))) {
        vqdialog->setQDialog_Metric_IsBase(true);
        return vqdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnMetric(const QDialog* self, intptr_t slot) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self))) {
        vqdialog->setQDialog_Metric_Callback(reinterpret_cast<VirtualQDialog::QDialog_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_InitPainter(const QDialog* self, QPainter* painter) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self))) {
        vqdialog->initPainter(painter);
    } else {
        vqdialog->initPainter(painter);
    }
}

// Base class handler implementation
void QDialog_QBaseInitPainter(const QDialog* self, QPainter* painter) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self))) {
        vqdialog->setQDialog_InitPainter_IsBase(true);
        vqdialog->initPainter(painter);
    } else {
        vqdialog->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnInitPainter(const QDialog* self, intptr_t slot) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self))) {
        vqdialog->setQDialog_InitPainter_Callback(reinterpret_cast<VirtualQDialog::QDialog_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QDialog_Redirected(const QDialog* self, QPoint* offset) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self))) {
        return vqdialog->redirected(offset);
    } else {
        return vqdialog->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QDialog_QBaseRedirected(const QDialog* self, QPoint* offset) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self))) {
        vqdialog->setQDialog_Redirected_IsBase(true);
        return vqdialog->redirected(offset);
    } else {
        return vqdialog->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnRedirected(const QDialog* self, intptr_t slot) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self))) {
        vqdialog->setQDialog_Redirected_Callback(reinterpret_cast<VirtualQDialog::QDialog_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QDialog_SharedPainter(const QDialog* self) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self))) {
        return vqdialog->sharedPainter();
    } else {
        return vqdialog->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QDialog_QBaseSharedPainter(const QDialog* self) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self))) {
        vqdialog->setQDialog_SharedPainter_IsBase(true);
        return vqdialog->sharedPainter();
    } else {
        return vqdialog->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnSharedPainter(const QDialog* self, intptr_t slot) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self))) {
        vqdialog->setQDialog_SharedPainter_Callback(reinterpret_cast<VirtualQDialog::QDialog_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_InputMethodEvent(QDialog* self, QInputMethodEvent* param1) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->inputMethodEvent(param1);
    } else {
        vqdialog->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QDialog_QBaseInputMethodEvent(QDialog* self, QInputMethodEvent* param1) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_InputMethodEvent_IsBase(true);
        vqdialog->inputMethodEvent(param1);
    } else {
        vqdialog->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnInputMethodEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_InputMethodEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QDialog_InputMethodQuery(const QDialog* self, int param1) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self))) {
        return new QVariant(vqdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QDialog_QBaseInputMethodQuery(const QDialog* self, int param1) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self))) {
        vqdialog->setQDialog_InputMethodQuery_IsBase(true);
        return new QVariant(vqdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnInputMethodQuery(const QDialog* self, intptr_t slot) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self))) {
        vqdialog->setQDialog_InputMethodQuery_Callback(reinterpret_cast<VirtualQDialog::QDialog_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDialog_FocusNextPrevChild(QDialog* self, bool next) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        return vqdialog->focusNextPrevChild(next);
    } else {
        return vqdialog->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QDialog_QBaseFocusNextPrevChild(QDialog* self, bool next) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_FocusNextPrevChild_IsBase(true);
        return vqdialog->focusNextPrevChild(next);
    } else {
        return vqdialog->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnFocusNextPrevChild(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQDialog::QDialog_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_TimerEvent(QDialog* self, QTimerEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->timerEvent(event);
    } else {
        vqdialog->timerEvent(event);
    }
}

// Base class handler implementation
void QDialog_QBaseTimerEvent(QDialog* self, QTimerEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_TimerEvent_IsBase(true);
        vqdialog->timerEvent(event);
    } else {
        vqdialog->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnTimerEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_TimerEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_ChildEvent(QDialog* self, QChildEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->childEvent(event);
    } else {
        vqdialog->childEvent(event);
    }
}

// Base class handler implementation
void QDialog_QBaseChildEvent(QDialog* self, QChildEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_ChildEvent_IsBase(true);
        vqdialog->childEvent(event);
    } else {
        vqdialog->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnChildEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_ChildEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_CustomEvent(QDialog* self, QEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->customEvent(event);
    } else {
        vqdialog->customEvent(event);
    }
}

// Base class handler implementation
void QDialog_QBaseCustomEvent(QDialog* self, QEvent* event) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_CustomEvent_IsBase(true);
        vqdialog->customEvent(event);
    } else {
        vqdialog->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnCustomEvent(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_CustomEvent_Callback(reinterpret_cast<VirtualQDialog::QDialog_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_ConnectNotify(QDialog* self, QMetaMethod* signal) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->connectNotify(*signal);
    } else {
        vqdialog->connectNotify(*signal);
    }
}

// Base class handler implementation
void QDialog_QBaseConnectNotify(QDialog* self, QMetaMethod* signal) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_ConnectNotify_IsBase(true);
        vqdialog->connectNotify(*signal);
    } else {
        vqdialog->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnConnectNotify(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_ConnectNotify_Callback(reinterpret_cast<VirtualQDialog::QDialog_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_DisconnectNotify(QDialog* self, QMetaMethod* signal) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->disconnectNotify(*signal);
    } else {
        vqdialog->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QDialog_QBaseDisconnectNotify(QDialog* self, QMetaMethod* signal) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_DisconnectNotify_IsBase(true);
        vqdialog->disconnectNotify(*signal);
    } else {
        vqdialog->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnDisconnectNotify(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_DisconnectNotify_Callback(reinterpret_cast<VirtualQDialog::QDialog_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_AdjustPosition(QDialog* self, QWidget* param1) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->adjustPosition(param1);
    } else {
        vqdialog->adjustPosition(param1);
    }
}

// Base class handler implementation
void QDialog_QBaseAdjustPosition(QDialog* self, QWidget* param1) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_AdjustPosition_IsBase(true);
        vqdialog->adjustPosition(param1);
    } else {
        vqdialog->adjustPosition(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnAdjustPosition(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_AdjustPosition_Callback(reinterpret_cast<VirtualQDialog::QDialog_AdjustPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_UpdateMicroFocus(QDialog* self) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->updateMicroFocus();
    } else {
        vqdialog->updateMicroFocus();
    }
}

// Base class handler implementation
void QDialog_QBaseUpdateMicroFocus(QDialog* self) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_UpdateMicroFocus_IsBase(true);
        vqdialog->updateMicroFocus();
    } else {
        vqdialog->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnUpdateMicroFocus(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQDialog::QDialog_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_Create(QDialog* self) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->create();
    } else {
        vqdialog->create();
    }
}

// Base class handler implementation
void QDialog_QBaseCreate(QDialog* self) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_Create_IsBase(true);
        vqdialog->create();
    } else {
        vqdialog->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnCreate(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_Create_Callback(reinterpret_cast<VirtualQDialog::QDialog_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QDialog_Destroy(QDialog* self) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->destroy();
    } else {
        vqdialog->destroy();
    }
}

// Base class handler implementation
void QDialog_QBaseDestroy(QDialog* self) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_Destroy_IsBase(true);
        vqdialog->destroy();
    } else {
        vqdialog->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnDestroy(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_Destroy_Callback(reinterpret_cast<VirtualQDialog::QDialog_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDialog_FocusNextChild(QDialog* self) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        return vqdialog->focusNextChild();
    } else {
        return vqdialog->focusNextChild();
    }
}

// Base class handler implementation
bool QDialog_QBaseFocusNextChild(QDialog* self) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_FocusNextChild_IsBase(true);
        return vqdialog->focusNextChild();
    } else {
        return vqdialog->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnFocusNextChild(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_FocusNextChild_Callback(reinterpret_cast<VirtualQDialog::QDialog_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDialog_FocusPreviousChild(QDialog* self) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        return vqdialog->focusPreviousChild();
    } else {
        return vqdialog->focusPreviousChild();
    }
}

// Base class handler implementation
bool QDialog_QBaseFocusPreviousChild(QDialog* self) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_FocusPreviousChild_IsBase(true);
        return vqdialog->focusPreviousChild();
    } else {
        return vqdialog->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnFocusPreviousChild(QDialog* self, intptr_t slot) {
    if (auto* vqdialog = dynamic_cast<VirtualQDialog*>(self)) {
        vqdialog->setQDialog_FocusPreviousChild_Callback(reinterpret_cast<VirtualQDialog::QDialog_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QDialog_Sender(const QDialog* self) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self))) {
        return vqdialog->sender();
    } else {
        return vqdialog->sender();
    }
}

// Base class handler implementation
QObject* QDialog_QBaseSender(const QDialog* self) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self))) {
        vqdialog->setQDialog_Sender_IsBase(true);
        return vqdialog->sender();
    } else {
        return vqdialog->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnSender(const QDialog* self, intptr_t slot) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self))) {
        vqdialog->setQDialog_Sender_Callback(reinterpret_cast<VirtualQDialog::QDialog_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QDialog_SenderSignalIndex(const QDialog* self) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self))) {
        return vqdialog->senderSignalIndex();
    } else {
        return vqdialog->senderSignalIndex();
    }
}

// Base class handler implementation
int QDialog_QBaseSenderSignalIndex(const QDialog* self) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self))) {
        vqdialog->setQDialog_SenderSignalIndex_IsBase(true);
        return vqdialog->senderSignalIndex();
    } else {
        return vqdialog->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnSenderSignalIndex(const QDialog* self, intptr_t slot) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self))) {
        vqdialog->setQDialog_SenderSignalIndex_Callback(reinterpret_cast<VirtualQDialog::QDialog_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QDialog_Receivers(const QDialog* self, const char* signal) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self))) {
        return vqdialog->receivers(signal);
    } else {
        return vqdialog->receivers(signal);
    }
}

// Base class handler implementation
int QDialog_QBaseReceivers(const QDialog* self, const char* signal) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self))) {
        vqdialog->setQDialog_Receivers_IsBase(true);
        return vqdialog->receivers(signal);
    } else {
        return vqdialog->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnReceivers(const QDialog* self, intptr_t slot) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self))) {
        vqdialog->setQDialog_Receivers_Callback(reinterpret_cast<VirtualQDialog::QDialog_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDialog_IsSignalConnected(const QDialog* self, QMetaMethod* signal) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self))) {
        return vqdialog->isSignalConnected(*signal);
    } else {
        return vqdialog->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QDialog_QBaseIsSignalConnected(const QDialog* self, QMetaMethod* signal) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self))) {
        vqdialog->setQDialog_IsSignalConnected_IsBase(true);
        return vqdialog->isSignalConnected(*signal);
    } else {
        return vqdialog->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDialog_OnIsSignalConnected(const QDialog* self, intptr_t slot) {
    if (auto* vqdialog = const_cast<VirtualQDialog*>(dynamic_cast<const VirtualQDialog*>(self))) {
        vqdialog->setQDialog_IsSignalConnected_Callback(reinterpret_cast<VirtualQDialog::QDialog_IsSignalConnected_Callback>(slot));
    }
}

void QDialog_Delete(QDialog* self) {
    delete self;
}
