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
#include <QLabel>
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
#include <QProgressBar>
#include <QProgressDialog>
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
#include <qprogressdialog.h>
#include "libqprogressdialog.hpp"
#include "libqprogressdialog.hxx"

QProgressDialog* QProgressDialog_new(QWidget* parent) {
    return new VirtualQProgressDialog(parent);
}

QProgressDialog* QProgressDialog_new2() {
    return new VirtualQProgressDialog();
}

QProgressDialog* QProgressDialog_new3(libqt_string labelText, libqt_string cancelButtonText, int minimum, int maximum) {
    QString labelText_QString = QString::fromUtf8(labelText.data, labelText.len);
    QString cancelButtonText_QString = QString::fromUtf8(cancelButtonText.data, cancelButtonText.len);
    return new VirtualQProgressDialog(labelText_QString, cancelButtonText_QString, static_cast<int>(minimum), static_cast<int>(maximum));
}

QProgressDialog* QProgressDialog_new4(QWidget* parent, int flags) {
    return new VirtualQProgressDialog(parent, static_cast<Qt::WindowFlags>(flags));
}

QProgressDialog* QProgressDialog_new5(libqt_string labelText, libqt_string cancelButtonText, int minimum, int maximum, QWidget* parent) {
    QString labelText_QString = QString::fromUtf8(labelText.data, labelText.len);
    QString cancelButtonText_QString = QString::fromUtf8(cancelButtonText.data, cancelButtonText.len);
    return new VirtualQProgressDialog(labelText_QString, cancelButtonText_QString, static_cast<int>(minimum), static_cast<int>(maximum), parent);
}

QProgressDialog* QProgressDialog_new6(libqt_string labelText, libqt_string cancelButtonText, int minimum, int maximum, QWidget* parent, int flags) {
    QString labelText_QString = QString::fromUtf8(labelText.data, labelText.len);
    QString cancelButtonText_QString = QString::fromUtf8(cancelButtonText.data, cancelButtonText.len);
    return new VirtualQProgressDialog(labelText_QString, cancelButtonText_QString, static_cast<int>(minimum), static_cast<int>(maximum), parent, static_cast<Qt::WindowFlags>(flags));
}

QMetaObject* QProgressDialog_MetaObject(const QProgressDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* QProgressDialog_Metacast(QProgressDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QProgressDialog_Metacall(QProgressDialog* self, int param1, int param2, void** param3) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QProgressDialog_OnMetacall(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_Metacall_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QProgressDialog_QBaseMetacall(QProgressDialog* self, int param1, int param2, void** param3) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_Metacall_IsBase(true);
        return vqprogressdialog->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QProgressDialog_Tr(const char* s) {
    QString _ret = QProgressDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QProgressDialog_SetLabel(QProgressDialog* self, QLabel* label) {
    self->setLabel(label);
}

void QProgressDialog_SetCancelButton(QProgressDialog* self, QPushButton* button) {
    self->setCancelButton(button);
}

void QProgressDialog_SetBar(QProgressDialog* self, QProgressBar* bar) {
    self->setBar(bar);
}

bool QProgressDialog_WasCanceled(const QProgressDialog* self) {
    return self->wasCanceled();
}

int QProgressDialog_Minimum(const QProgressDialog* self) {
    return self->minimum();
}

int QProgressDialog_Maximum(const QProgressDialog* self) {
    return self->maximum();
}

int QProgressDialog_Value(const QProgressDialog* self) {
    return self->value();
}

libqt_string QProgressDialog_LabelText(const QProgressDialog* self) {
    QString _ret = self->labelText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QProgressDialog_MinimumDuration(const QProgressDialog* self) {
    return self->minimumDuration();
}

void QProgressDialog_SetAutoReset(QProgressDialog* self, bool reset) {
    self->setAutoReset(reset);
}

bool QProgressDialog_AutoReset(const QProgressDialog* self) {
    return self->autoReset();
}

void QProgressDialog_SetAutoClose(QProgressDialog* self, bool close) {
    self->setAutoClose(close);
}

bool QProgressDialog_AutoClose(const QProgressDialog* self) {
    return self->autoClose();
}

void QProgressDialog_Cancel(QProgressDialog* self) {
    self->cancel();
}

void QProgressDialog_Reset(QProgressDialog* self) {
    self->reset();
}

void QProgressDialog_SetMaximum(QProgressDialog* self, int maximum) {
    self->setMaximum(static_cast<int>(maximum));
}

void QProgressDialog_SetMinimum(QProgressDialog* self, int minimum) {
    self->setMinimum(static_cast<int>(minimum));
}

void QProgressDialog_SetRange(QProgressDialog* self, int minimum, int maximum) {
    self->setRange(static_cast<int>(minimum), static_cast<int>(maximum));
}

void QProgressDialog_SetValue(QProgressDialog* self, int progress) {
    self->setValue(static_cast<int>(progress));
}

void QProgressDialog_SetLabelText(QProgressDialog* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setLabelText(text_QString);
}

void QProgressDialog_SetCancelButtonText(QProgressDialog* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setCancelButtonText(text_QString);
}

void QProgressDialog_SetMinimumDuration(QProgressDialog* self, int ms) {
    self->setMinimumDuration(static_cast<int>(ms));
}

void QProgressDialog_Canceled(QProgressDialog* self) {
    self->canceled();
}

void QProgressDialog_Connect_Canceled(QProgressDialog* self, intptr_t slot) {
    void (*slotFunc)(QProgressDialog*) = reinterpret_cast<void (*)(QProgressDialog*)>(slot);
    QProgressDialog::connect(self, &QProgressDialog::canceled, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QProgressDialog_Tr2(const char* s, const char* c) {
    QString _ret = QProgressDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QProgressDialog_Tr3(const char* s, const char* c, int n) {
    QString _ret = QProgressDialog::tr(s, c, static_cast<int>(n));
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
QSize* QProgressDialog_SizeHint(const QProgressDialog* self) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self))) {
        return new QSize(vqprogressdialog->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QProgressDialog_QBaseSizeHint(const QProgressDialog* self) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self))) {
        vqprogressdialog->setQProgressDialog_SizeHint_IsBase(true);
        return new QSize(vqprogressdialog->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnSizeHint(const QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self))) {
        vqprogressdialog->setQProgressDialog_SizeHint_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressDialog_ResizeEvent(QProgressDialog* self, QResizeEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->resizeEvent(event);
    } else {
        vqprogressdialog->resizeEvent(event);
    }
}

// Base class handler implementation
void QProgressDialog_QBaseResizeEvent(QProgressDialog* self, QResizeEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_ResizeEvent_IsBase(true);
        vqprogressdialog->resizeEvent(event);
    } else {
        vqprogressdialog->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnResizeEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_ResizeEvent_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressDialog_CloseEvent(QProgressDialog* self, QCloseEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->closeEvent(event);
    } else {
        vqprogressdialog->closeEvent(event);
    }
}

// Base class handler implementation
void QProgressDialog_QBaseCloseEvent(QProgressDialog* self, QCloseEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_CloseEvent_IsBase(true);
        vqprogressdialog->closeEvent(event);
    } else {
        vqprogressdialog->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnCloseEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_CloseEvent_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressDialog_ChangeEvent(QProgressDialog* self, QEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->changeEvent(event);
    } else {
        vqprogressdialog->changeEvent(event);
    }
}

// Base class handler implementation
void QProgressDialog_QBaseChangeEvent(QProgressDialog* self, QEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_ChangeEvent_IsBase(true);
        vqprogressdialog->changeEvent(event);
    } else {
        vqprogressdialog->changeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnChangeEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_ChangeEvent_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressDialog_ShowEvent(QProgressDialog* self, QShowEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->showEvent(event);
    } else {
        vqprogressdialog->showEvent(event);
    }
}

// Base class handler implementation
void QProgressDialog_QBaseShowEvent(QProgressDialog* self, QShowEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_ShowEvent_IsBase(true);
        vqprogressdialog->showEvent(event);
    } else {
        vqprogressdialog->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnShowEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_ShowEvent_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressDialog_SetVisible(QProgressDialog* self, bool visible) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setVisible(visible);
    } else {
        vqprogressdialog->setVisible(visible);
    }
}

// Base class handler implementation
void QProgressDialog_QBaseSetVisible(QProgressDialog* self, bool visible) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_SetVisible_IsBase(true);
        vqprogressdialog->setVisible(visible);
    } else {
        vqprogressdialog->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnSetVisible(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_SetVisible_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QProgressDialog_MinimumSizeHint(const QProgressDialog* self) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self))) {
        return new QSize(vqprogressdialog->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QProgressDialog_QBaseMinimumSizeHint(const QProgressDialog* self) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self))) {
        vqprogressdialog->setQProgressDialog_MinimumSizeHint_IsBase(true);
        return new QSize(vqprogressdialog->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnMinimumSizeHint(const QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self))) {
        vqprogressdialog->setQProgressDialog_MinimumSizeHint_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressDialog_Open(QProgressDialog* self) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->open();
    } else {
        vqprogressdialog->open();
    }
}

// Base class handler implementation
void QProgressDialog_QBaseOpen(QProgressDialog* self) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_Open_IsBase(true);
        vqprogressdialog->open();
    } else {
        vqprogressdialog->open();
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnOpen(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_Open_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_Open_Callback>(slot));
    }
}

// Derived class handler implementation
int QProgressDialog_Exec(QProgressDialog* self) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        return vqprogressdialog->exec();
    } else {
        return vqprogressdialog->exec();
    }
}

// Base class handler implementation
int QProgressDialog_QBaseExec(QProgressDialog* self) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_Exec_IsBase(true);
        return vqprogressdialog->exec();
    } else {
        return vqprogressdialog->exec();
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnExec(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_Exec_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_Exec_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressDialog_Done(QProgressDialog* self, int param1) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->done(static_cast<int>(param1));
    } else {
        vqprogressdialog->done(static_cast<int>(param1));
    }
}

// Base class handler implementation
void QProgressDialog_QBaseDone(QProgressDialog* self, int param1) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_Done_IsBase(true);
        vqprogressdialog->done(static_cast<int>(param1));
    } else {
        vqprogressdialog->done(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnDone(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_Done_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_Done_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressDialog_Accept(QProgressDialog* self) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->accept();
    } else {
        vqprogressdialog->accept();
    }
}

// Base class handler implementation
void QProgressDialog_QBaseAccept(QProgressDialog* self) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_Accept_IsBase(true);
        vqprogressdialog->accept();
    } else {
        vqprogressdialog->accept();
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnAccept(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_Accept_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_Accept_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressDialog_Reject(QProgressDialog* self) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->reject();
    } else {
        vqprogressdialog->reject();
    }
}

// Base class handler implementation
void QProgressDialog_QBaseReject(QProgressDialog* self) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_Reject_IsBase(true);
        vqprogressdialog->reject();
    } else {
        vqprogressdialog->reject();
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnReject(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_Reject_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_Reject_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressDialog_KeyPressEvent(QProgressDialog* self, QKeyEvent* param1) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->keyPressEvent(param1);
    } else {
        vqprogressdialog->keyPressEvent(param1);
    }
}

// Base class handler implementation
void QProgressDialog_QBaseKeyPressEvent(QProgressDialog* self, QKeyEvent* param1) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_KeyPressEvent_IsBase(true);
        vqprogressdialog->keyPressEvent(param1);
    } else {
        vqprogressdialog->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnKeyPressEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_KeyPressEvent_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressDialog_ContextMenuEvent(QProgressDialog* self, QContextMenuEvent* param1) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->contextMenuEvent(param1);
    } else {
        vqprogressdialog->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void QProgressDialog_QBaseContextMenuEvent(QProgressDialog* self, QContextMenuEvent* param1) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_ContextMenuEvent_IsBase(true);
        vqprogressdialog->contextMenuEvent(param1);
    } else {
        vqprogressdialog->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnContextMenuEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_ContextMenuEvent_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QProgressDialog_EventFilter(QProgressDialog* self, QObject* param1, QEvent* param2) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        return vqprogressdialog->eventFilter(param1, param2);
    } else {
        return vqprogressdialog->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool QProgressDialog_QBaseEventFilter(QProgressDialog* self, QObject* param1, QEvent* param2) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_EventFilter_IsBase(true);
        return vqprogressdialog->eventFilter(param1, param2);
    } else {
        return vqprogressdialog->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnEventFilter(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_EventFilter_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int QProgressDialog_DevType(const QProgressDialog* self) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self))) {
        return vqprogressdialog->devType();
    } else {
        return vqprogressdialog->devType();
    }
}

// Base class handler implementation
int QProgressDialog_QBaseDevType(const QProgressDialog* self) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self))) {
        vqprogressdialog->setQProgressDialog_DevType_IsBase(true);
        return vqprogressdialog->devType();
    } else {
        return vqprogressdialog->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnDevType(const QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self))) {
        vqprogressdialog->setQProgressDialog_DevType_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int QProgressDialog_HeightForWidth(const QProgressDialog* self, int param1) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self))) {
        return vqprogressdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return vqprogressdialog->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QProgressDialog_QBaseHeightForWidth(const QProgressDialog* self, int param1) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self))) {
        vqprogressdialog->setQProgressDialog_HeightForWidth_IsBase(true);
        return vqprogressdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return vqprogressdialog->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnHeightForWidth(const QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self))) {
        vqprogressdialog->setQProgressDialog_HeightForWidth_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QProgressDialog_HasHeightForWidth(const QProgressDialog* self) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self))) {
        return vqprogressdialog->hasHeightForWidth();
    } else {
        return vqprogressdialog->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QProgressDialog_QBaseHasHeightForWidth(const QProgressDialog* self) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self))) {
        vqprogressdialog->setQProgressDialog_HasHeightForWidth_IsBase(true);
        return vqprogressdialog->hasHeightForWidth();
    } else {
        return vqprogressdialog->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnHasHeightForWidth(const QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self))) {
        vqprogressdialog->setQProgressDialog_HasHeightForWidth_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QProgressDialog_PaintEngine(const QProgressDialog* self) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self))) {
        return vqprogressdialog->paintEngine();
    } else {
        return vqprogressdialog->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QProgressDialog_QBasePaintEngine(const QProgressDialog* self) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self))) {
        vqprogressdialog->setQProgressDialog_PaintEngine_IsBase(true);
        return vqprogressdialog->paintEngine();
    } else {
        return vqprogressdialog->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnPaintEngine(const QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self))) {
        vqprogressdialog->setQProgressDialog_PaintEngine_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool QProgressDialog_Event(QProgressDialog* self, QEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        return vqprogressdialog->event(event);
    } else {
        return vqprogressdialog->event(event);
    }
}

// Base class handler implementation
bool QProgressDialog_QBaseEvent(QProgressDialog* self, QEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_Event_IsBase(true);
        return vqprogressdialog->event(event);
    } else {
        return vqprogressdialog->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_Event_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressDialog_MousePressEvent(QProgressDialog* self, QMouseEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->mousePressEvent(event);
    } else {
        vqprogressdialog->mousePressEvent(event);
    }
}

// Base class handler implementation
void QProgressDialog_QBaseMousePressEvent(QProgressDialog* self, QMouseEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_MousePressEvent_IsBase(true);
        vqprogressdialog->mousePressEvent(event);
    } else {
        vqprogressdialog->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnMousePressEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_MousePressEvent_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressDialog_MouseReleaseEvent(QProgressDialog* self, QMouseEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->mouseReleaseEvent(event);
    } else {
        vqprogressdialog->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QProgressDialog_QBaseMouseReleaseEvent(QProgressDialog* self, QMouseEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_MouseReleaseEvent_IsBase(true);
        vqprogressdialog->mouseReleaseEvent(event);
    } else {
        vqprogressdialog->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnMouseReleaseEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressDialog_MouseDoubleClickEvent(QProgressDialog* self, QMouseEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->mouseDoubleClickEvent(event);
    } else {
        vqprogressdialog->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QProgressDialog_QBaseMouseDoubleClickEvent(QProgressDialog* self, QMouseEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_MouseDoubleClickEvent_IsBase(true);
        vqprogressdialog->mouseDoubleClickEvent(event);
    } else {
        vqprogressdialog->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnMouseDoubleClickEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressDialog_MouseMoveEvent(QProgressDialog* self, QMouseEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->mouseMoveEvent(event);
    } else {
        vqprogressdialog->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QProgressDialog_QBaseMouseMoveEvent(QProgressDialog* self, QMouseEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_MouseMoveEvent_IsBase(true);
        vqprogressdialog->mouseMoveEvent(event);
    } else {
        vqprogressdialog->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnMouseMoveEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_MouseMoveEvent_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressDialog_WheelEvent(QProgressDialog* self, QWheelEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->wheelEvent(event);
    } else {
        vqprogressdialog->wheelEvent(event);
    }
}

// Base class handler implementation
void QProgressDialog_QBaseWheelEvent(QProgressDialog* self, QWheelEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_WheelEvent_IsBase(true);
        vqprogressdialog->wheelEvent(event);
    } else {
        vqprogressdialog->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnWheelEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_WheelEvent_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressDialog_KeyReleaseEvent(QProgressDialog* self, QKeyEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->keyReleaseEvent(event);
    } else {
        vqprogressdialog->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QProgressDialog_QBaseKeyReleaseEvent(QProgressDialog* self, QKeyEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_KeyReleaseEvent_IsBase(true);
        vqprogressdialog->keyReleaseEvent(event);
    } else {
        vqprogressdialog->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnKeyReleaseEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressDialog_FocusInEvent(QProgressDialog* self, QFocusEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->focusInEvent(event);
    } else {
        vqprogressdialog->focusInEvent(event);
    }
}

// Base class handler implementation
void QProgressDialog_QBaseFocusInEvent(QProgressDialog* self, QFocusEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_FocusInEvent_IsBase(true);
        vqprogressdialog->focusInEvent(event);
    } else {
        vqprogressdialog->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnFocusInEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_FocusInEvent_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressDialog_FocusOutEvent(QProgressDialog* self, QFocusEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->focusOutEvent(event);
    } else {
        vqprogressdialog->focusOutEvent(event);
    }
}

// Base class handler implementation
void QProgressDialog_QBaseFocusOutEvent(QProgressDialog* self, QFocusEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_FocusOutEvent_IsBase(true);
        vqprogressdialog->focusOutEvent(event);
    } else {
        vqprogressdialog->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnFocusOutEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_FocusOutEvent_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressDialog_EnterEvent(QProgressDialog* self, QEnterEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->enterEvent(event);
    } else {
        vqprogressdialog->enterEvent(event);
    }
}

// Base class handler implementation
void QProgressDialog_QBaseEnterEvent(QProgressDialog* self, QEnterEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_EnterEvent_IsBase(true);
        vqprogressdialog->enterEvent(event);
    } else {
        vqprogressdialog->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnEnterEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_EnterEvent_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressDialog_LeaveEvent(QProgressDialog* self, QEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->leaveEvent(event);
    } else {
        vqprogressdialog->leaveEvent(event);
    }
}

// Base class handler implementation
void QProgressDialog_QBaseLeaveEvent(QProgressDialog* self, QEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_LeaveEvent_IsBase(true);
        vqprogressdialog->leaveEvent(event);
    } else {
        vqprogressdialog->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnLeaveEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_LeaveEvent_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressDialog_PaintEvent(QProgressDialog* self, QPaintEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->paintEvent(event);
    } else {
        vqprogressdialog->paintEvent(event);
    }
}

// Base class handler implementation
void QProgressDialog_QBasePaintEvent(QProgressDialog* self, QPaintEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_PaintEvent_IsBase(true);
        vqprogressdialog->paintEvent(event);
    } else {
        vqprogressdialog->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnPaintEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_PaintEvent_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressDialog_MoveEvent(QProgressDialog* self, QMoveEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->moveEvent(event);
    } else {
        vqprogressdialog->moveEvent(event);
    }
}

// Base class handler implementation
void QProgressDialog_QBaseMoveEvent(QProgressDialog* self, QMoveEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_MoveEvent_IsBase(true);
        vqprogressdialog->moveEvent(event);
    } else {
        vqprogressdialog->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnMoveEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_MoveEvent_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressDialog_TabletEvent(QProgressDialog* self, QTabletEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->tabletEvent(event);
    } else {
        vqprogressdialog->tabletEvent(event);
    }
}

// Base class handler implementation
void QProgressDialog_QBaseTabletEvent(QProgressDialog* self, QTabletEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_TabletEvent_IsBase(true);
        vqprogressdialog->tabletEvent(event);
    } else {
        vqprogressdialog->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnTabletEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_TabletEvent_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressDialog_ActionEvent(QProgressDialog* self, QActionEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->actionEvent(event);
    } else {
        vqprogressdialog->actionEvent(event);
    }
}

// Base class handler implementation
void QProgressDialog_QBaseActionEvent(QProgressDialog* self, QActionEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_ActionEvent_IsBase(true);
        vqprogressdialog->actionEvent(event);
    } else {
        vqprogressdialog->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnActionEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_ActionEvent_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressDialog_DragEnterEvent(QProgressDialog* self, QDragEnterEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->dragEnterEvent(event);
    } else {
        vqprogressdialog->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QProgressDialog_QBaseDragEnterEvent(QProgressDialog* self, QDragEnterEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_DragEnterEvent_IsBase(true);
        vqprogressdialog->dragEnterEvent(event);
    } else {
        vqprogressdialog->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnDragEnterEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_DragEnterEvent_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressDialog_DragMoveEvent(QProgressDialog* self, QDragMoveEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->dragMoveEvent(event);
    } else {
        vqprogressdialog->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QProgressDialog_QBaseDragMoveEvent(QProgressDialog* self, QDragMoveEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_DragMoveEvent_IsBase(true);
        vqprogressdialog->dragMoveEvent(event);
    } else {
        vqprogressdialog->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnDragMoveEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_DragMoveEvent_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressDialog_DragLeaveEvent(QProgressDialog* self, QDragLeaveEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->dragLeaveEvent(event);
    } else {
        vqprogressdialog->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QProgressDialog_QBaseDragLeaveEvent(QProgressDialog* self, QDragLeaveEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_DragLeaveEvent_IsBase(true);
        vqprogressdialog->dragLeaveEvent(event);
    } else {
        vqprogressdialog->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnDragLeaveEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_DragLeaveEvent_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressDialog_DropEvent(QProgressDialog* self, QDropEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->dropEvent(event);
    } else {
        vqprogressdialog->dropEvent(event);
    }
}

// Base class handler implementation
void QProgressDialog_QBaseDropEvent(QProgressDialog* self, QDropEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_DropEvent_IsBase(true);
        vqprogressdialog->dropEvent(event);
    } else {
        vqprogressdialog->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnDropEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_DropEvent_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressDialog_HideEvent(QProgressDialog* self, QHideEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->hideEvent(event);
    } else {
        vqprogressdialog->hideEvent(event);
    }
}

// Base class handler implementation
void QProgressDialog_QBaseHideEvent(QProgressDialog* self, QHideEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_HideEvent_IsBase(true);
        vqprogressdialog->hideEvent(event);
    } else {
        vqprogressdialog->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnHideEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_HideEvent_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QProgressDialog_NativeEvent(QProgressDialog* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        return vqprogressdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqprogressdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QProgressDialog_QBaseNativeEvent(QProgressDialog* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_NativeEvent_IsBase(true);
        return vqprogressdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqprogressdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnNativeEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_NativeEvent_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QProgressDialog_Metric(const QProgressDialog* self, int param1) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self))) {
        return vqprogressdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqprogressdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QProgressDialog_QBaseMetric(const QProgressDialog* self, int param1) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self))) {
        vqprogressdialog->setQProgressDialog_Metric_IsBase(true);
        return vqprogressdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqprogressdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnMetric(const QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self))) {
        vqprogressdialog->setQProgressDialog_Metric_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressDialog_InitPainter(const QProgressDialog* self, QPainter* painter) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self))) {
        vqprogressdialog->initPainter(painter);
    } else {
        vqprogressdialog->initPainter(painter);
    }
}

// Base class handler implementation
void QProgressDialog_QBaseInitPainter(const QProgressDialog* self, QPainter* painter) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self))) {
        vqprogressdialog->setQProgressDialog_InitPainter_IsBase(true);
        vqprogressdialog->initPainter(painter);
    } else {
        vqprogressdialog->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnInitPainter(const QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self))) {
        vqprogressdialog->setQProgressDialog_InitPainter_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QProgressDialog_Redirected(const QProgressDialog* self, QPoint* offset) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self))) {
        return vqprogressdialog->redirected(offset);
    } else {
        return vqprogressdialog->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QProgressDialog_QBaseRedirected(const QProgressDialog* self, QPoint* offset) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self))) {
        vqprogressdialog->setQProgressDialog_Redirected_IsBase(true);
        return vqprogressdialog->redirected(offset);
    } else {
        return vqprogressdialog->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnRedirected(const QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self))) {
        vqprogressdialog->setQProgressDialog_Redirected_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QProgressDialog_SharedPainter(const QProgressDialog* self) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self))) {
        return vqprogressdialog->sharedPainter();
    } else {
        return vqprogressdialog->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QProgressDialog_QBaseSharedPainter(const QProgressDialog* self) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self))) {
        vqprogressdialog->setQProgressDialog_SharedPainter_IsBase(true);
        return vqprogressdialog->sharedPainter();
    } else {
        return vqprogressdialog->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnSharedPainter(const QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self))) {
        vqprogressdialog->setQProgressDialog_SharedPainter_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressDialog_InputMethodEvent(QProgressDialog* self, QInputMethodEvent* param1) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->inputMethodEvent(param1);
    } else {
        vqprogressdialog->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QProgressDialog_QBaseInputMethodEvent(QProgressDialog* self, QInputMethodEvent* param1) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_InputMethodEvent_IsBase(true);
        vqprogressdialog->inputMethodEvent(param1);
    } else {
        vqprogressdialog->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnInputMethodEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_InputMethodEvent_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QProgressDialog_InputMethodQuery(const QProgressDialog* self, int param1) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self))) {
        return new QVariant(vqprogressdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QProgressDialog_QBaseInputMethodQuery(const QProgressDialog* self, int param1) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self))) {
        vqprogressdialog->setQProgressDialog_InputMethodQuery_IsBase(true);
        return new QVariant(vqprogressdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnInputMethodQuery(const QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self))) {
        vqprogressdialog->setQProgressDialog_InputMethodQuery_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QProgressDialog_FocusNextPrevChild(QProgressDialog* self, bool next) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        return vqprogressdialog->focusNextPrevChild(next);
    } else {
        return vqprogressdialog->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QProgressDialog_QBaseFocusNextPrevChild(QProgressDialog* self, bool next) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_FocusNextPrevChild_IsBase(true);
        return vqprogressdialog->focusNextPrevChild(next);
    } else {
        return vqprogressdialog->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnFocusNextPrevChild(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressDialog_TimerEvent(QProgressDialog* self, QTimerEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->timerEvent(event);
    } else {
        vqprogressdialog->timerEvent(event);
    }
}

// Base class handler implementation
void QProgressDialog_QBaseTimerEvent(QProgressDialog* self, QTimerEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_TimerEvent_IsBase(true);
        vqprogressdialog->timerEvent(event);
    } else {
        vqprogressdialog->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnTimerEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_TimerEvent_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressDialog_ChildEvent(QProgressDialog* self, QChildEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->childEvent(event);
    } else {
        vqprogressdialog->childEvent(event);
    }
}

// Base class handler implementation
void QProgressDialog_QBaseChildEvent(QProgressDialog* self, QChildEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_ChildEvent_IsBase(true);
        vqprogressdialog->childEvent(event);
    } else {
        vqprogressdialog->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnChildEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_ChildEvent_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressDialog_CustomEvent(QProgressDialog* self, QEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->customEvent(event);
    } else {
        vqprogressdialog->customEvent(event);
    }
}

// Base class handler implementation
void QProgressDialog_QBaseCustomEvent(QProgressDialog* self, QEvent* event) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_CustomEvent_IsBase(true);
        vqprogressdialog->customEvent(event);
    } else {
        vqprogressdialog->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnCustomEvent(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_CustomEvent_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressDialog_ConnectNotify(QProgressDialog* self, QMetaMethod* signal) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->connectNotify(*signal);
    } else {
        vqprogressdialog->connectNotify(*signal);
    }
}

// Base class handler implementation
void QProgressDialog_QBaseConnectNotify(QProgressDialog* self, QMetaMethod* signal) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_ConnectNotify_IsBase(true);
        vqprogressdialog->connectNotify(*signal);
    } else {
        vqprogressdialog->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnConnectNotify(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_ConnectNotify_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressDialog_DisconnectNotify(QProgressDialog* self, QMetaMethod* signal) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->disconnectNotify(*signal);
    } else {
        vqprogressdialog->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QProgressDialog_QBaseDisconnectNotify(QProgressDialog* self, QMetaMethod* signal) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_DisconnectNotify_IsBase(true);
        vqprogressdialog->disconnectNotify(*signal);
    } else {
        vqprogressdialog->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnDisconnectNotify(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_DisconnectNotify_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressDialog_ForceShow(QProgressDialog* self) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->forceShow();
    } else {
        vqprogressdialog->forceShow();
    }
}

// Base class handler implementation
void QProgressDialog_QBaseForceShow(QProgressDialog* self) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_ForceShow_IsBase(true);
        vqprogressdialog->forceShow();
    } else {
        vqprogressdialog->forceShow();
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnForceShow(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_ForceShow_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_ForceShow_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressDialog_AdjustPosition(QProgressDialog* self, QWidget* param1) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->adjustPosition(param1);
    } else {
        vqprogressdialog->adjustPosition(param1);
    }
}

// Base class handler implementation
void QProgressDialog_QBaseAdjustPosition(QProgressDialog* self, QWidget* param1) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_AdjustPosition_IsBase(true);
        vqprogressdialog->adjustPosition(param1);
    } else {
        vqprogressdialog->adjustPosition(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnAdjustPosition(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_AdjustPosition_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_AdjustPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressDialog_UpdateMicroFocus(QProgressDialog* self) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->updateMicroFocus();
    } else {
        vqprogressdialog->updateMicroFocus();
    }
}

// Base class handler implementation
void QProgressDialog_QBaseUpdateMicroFocus(QProgressDialog* self) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_UpdateMicroFocus_IsBase(true);
        vqprogressdialog->updateMicroFocus();
    } else {
        vqprogressdialog->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnUpdateMicroFocus(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressDialog_Create(QProgressDialog* self) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->create();
    } else {
        vqprogressdialog->create();
    }
}

// Base class handler implementation
void QProgressDialog_QBaseCreate(QProgressDialog* self) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_Create_IsBase(true);
        vqprogressdialog->create();
    } else {
        vqprogressdialog->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnCreate(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_Create_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QProgressDialog_Destroy(QProgressDialog* self) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->destroy();
    } else {
        vqprogressdialog->destroy();
    }
}

// Base class handler implementation
void QProgressDialog_QBaseDestroy(QProgressDialog* self) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_Destroy_IsBase(true);
        vqprogressdialog->destroy();
    } else {
        vqprogressdialog->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnDestroy(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_Destroy_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QProgressDialog_FocusNextChild(QProgressDialog* self) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        return vqprogressdialog->focusNextChild();
    } else {
        return vqprogressdialog->focusNextChild();
    }
}

// Base class handler implementation
bool QProgressDialog_QBaseFocusNextChild(QProgressDialog* self) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_FocusNextChild_IsBase(true);
        return vqprogressdialog->focusNextChild();
    } else {
        return vqprogressdialog->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnFocusNextChild(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_FocusNextChild_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QProgressDialog_FocusPreviousChild(QProgressDialog* self) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        return vqprogressdialog->focusPreviousChild();
    } else {
        return vqprogressdialog->focusPreviousChild();
    }
}

// Base class handler implementation
bool QProgressDialog_QBaseFocusPreviousChild(QProgressDialog* self) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_FocusPreviousChild_IsBase(true);
        return vqprogressdialog->focusPreviousChild();
    } else {
        return vqprogressdialog->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnFocusPreviousChild(QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = dynamic_cast<VirtualQProgressDialog*>(self)) {
        vqprogressdialog->setQProgressDialog_FocusPreviousChild_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QProgressDialog_Sender(const QProgressDialog* self) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self))) {
        return vqprogressdialog->sender();
    } else {
        return vqprogressdialog->sender();
    }
}

// Base class handler implementation
QObject* QProgressDialog_QBaseSender(const QProgressDialog* self) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self))) {
        vqprogressdialog->setQProgressDialog_Sender_IsBase(true);
        return vqprogressdialog->sender();
    } else {
        return vqprogressdialog->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnSender(const QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self))) {
        vqprogressdialog->setQProgressDialog_Sender_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QProgressDialog_SenderSignalIndex(const QProgressDialog* self) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self))) {
        return vqprogressdialog->senderSignalIndex();
    } else {
        return vqprogressdialog->senderSignalIndex();
    }
}

// Base class handler implementation
int QProgressDialog_QBaseSenderSignalIndex(const QProgressDialog* self) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self))) {
        vqprogressdialog->setQProgressDialog_SenderSignalIndex_IsBase(true);
        return vqprogressdialog->senderSignalIndex();
    } else {
        return vqprogressdialog->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnSenderSignalIndex(const QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self))) {
        vqprogressdialog->setQProgressDialog_SenderSignalIndex_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QProgressDialog_Receivers(const QProgressDialog* self, const char* signal) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self))) {
        return vqprogressdialog->receivers(signal);
    } else {
        return vqprogressdialog->receivers(signal);
    }
}

// Base class handler implementation
int QProgressDialog_QBaseReceivers(const QProgressDialog* self, const char* signal) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self))) {
        vqprogressdialog->setQProgressDialog_Receivers_IsBase(true);
        return vqprogressdialog->receivers(signal);
    } else {
        return vqprogressdialog->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnReceivers(const QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self))) {
        vqprogressdialog->setQProgressDialog_Receivers_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QProgressDialog_IsSignalConnected(const QProgressDialog* self, QMetaMethod* signal) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self))) {
        return vqprogressdialog->isSignalConnected(*signal);
    } else {
        return vqprogressdialog->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QProgressDialog_QBaseIsSignalConnected(const QProgressDialog* self, QMetaMethod* signal) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self))) {
        vqprogressdialog->setQProgressDialog_IsSignalConnected_IsBase(true);
        return vqprogressdialog->isSignalConnected(*signal);
    } else {
        return vqprogressdialog->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QProgressDialog_OnIsSignalConnected(const QProgressDialog* self, intptr_t slot) {
    if (auto* vqprogressdialog = const_cast<VirtualQProgressDialog*>(dynamic_cast<const VirtualQProgressDialog*>(self))) {
        vqprogressdialog->setQProgressDialog_IsSignalConnected_Callback(reinterpret_cast<VirtualQProgressDialog::QProgressDialog_IsSignalConnected_Callback>(slot));
    }
}

void QProgressDialog_Delete(QProgressDialog* self) {
    delete self;
}
