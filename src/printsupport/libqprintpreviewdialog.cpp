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
#include <QPrintPreviewDialog>
#include <QPrinter>
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
#include <qprintpreviewdialog.h>
#include "libqprintpreviewdialog.hpp"
#include "libqprintpreviewdialog.hxx"

QPrintPreviewDialog* QPrintPreviewDialog_new(QWidget* parent) {
    return new VirtualQPrintPreviewDialog(parent);
}

QPrintPreviewDialog* QPrintPreviewDialog_new2() {
    return new VirtualQPrintPreviewDialog();
}

QPrintPreviewDialog* QPrintPreviewDialog_new3(QPrinter* printer) {
    return new VirtualQPrintPreviewDialog(printer);
}

QPrintPreviewDialog* QPrintPreviewDialog_new4(QWidget* parent, int flags) {
    return new VirtualQPrintPreviewDialog(parent, static_cast<Qt::WindowFlags>(flags));
}

QPrintPreviewDialog* QPrintPreviewDialog_new5(QPrinter* printer, QWidget* parent) {
    return new VirtualQPrintPreviewDialog(printer, parent);
}

QPrintPreviewDialog* QPrintPreviewDialog_new6(QPrinter* printer, QWidget* parent, int flags) {
    return new VirtualQPrintPreviewDialog(printer, parent, static_cast<Qt::WindowFlags>(flags));
}

QMetaObject* QPrintPreviewDialog_MetaObject(const QPrintPreviewDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPrintPreviewDialog_Metacast(QPrintPreviewDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPrintPreviewDialog_Metacall(QPrintPreviewDialog* self, int param1, int param2, void** param3) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QPrintPreviewDialog_OnMetacall(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_Metacall_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QPrintPreviewDialog_QBaseMetacall(QPrintPreviewDialog* self, int param1, int param2, void** param3) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_Metacall_IsBase(true);
        return vqprintpreviewdialog->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QPrintPreviewDialog_Tr(const char* s) {
    QString _ret = QPrintPreviewDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QPrinter* QPrintPreviewDialog_Printer(QPrintPreviewDialog* self) {
    return self->printer();
}

void QPrintPreviewDialog_PaintRequested(QPrintPreviewDialog* self, QPrinter* printer) {
    self->paintRequested(printer);
}

void QPrintPreviewDialog_Connect_PaintRequested(QPrintPreviewDialog* self, intptr_t slot) {
    void (*slotFunc)(QPrintPreviewDialog*, QPrinter*) = reinterpret_cast<void (*)(QPrintPreviewDialog*, QPrinter*)>(slot);
    QPrintPreviewDialog::connect(self, &QPrintPreviewDialog::paintRequested, [self, slotFunc](QPrinter* printer) {
        QPrinter* sigval1 = printer;
        slotFunc(self, sigval1);
    });
}

libqt_string QPrintPreviewDialog_Tr2(const char* s, const char* c) {
    QString _ret = QPrintPreviewDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QPrintPreviewDialog_Tr3(const char* s, const char* c, int n) {
    QString _ret = QPrintPreviewDialog::tr(s, c, static_cast<int>(n));
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
void QPrintPreviewDialog_SetVisible(QPrintPreviewDialog* self, bool visible) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setVisible(visible);
    } else {
        vqprintpreviewdialog->setVisible(visible);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseSetVisible(QPrintPreviewDialog* self, bool visible) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_SetVisible_IsBase(true);
        vqprintpreviewdialog->setVisible(visible);
    } else {
        vqprintpreviewdialog->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnSetVisible(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_SetVisible_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_Done(QPrintPreviewDialog* self, int result) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->done(static_cast<int>(result));
    } else {
        vqprintpreviewdialog->done(static_cast<int>(result));
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseDone(QPrintPreviewDialog* self, int result) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_Done_IsBase(true);
        vqprintpreviewdialog->done(static_cast<int>(result));
    } else {
        vqprintpreviewdialog->done(static_cast<int>(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnDone(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_Done_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_Done_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QPrintPreviewDialog_SizeHint(const QPrintPreviewDialog* self) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self))) {
        return new QSize(vqprintpreviewdialog->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QPrintPreviewDialog_QBaseSizeHint(const QPrintPreviewDialog* self) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self))) {
        vqprintpreviewdialog->setQPrintPreviewDialog_SizeHint_IsBase(true);
        return new QSize(vqprintpreviewdialog->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnSizeHint(const QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self))) {
        vqprintpreviewdialog->setQPrintPreviewDialog_SizeHint_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QPrintPreviewDialog_MinimumSizeHint(const QPrintPreviewDialog* self) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self))) {
        return new QSize(vqprintpreviewdialog->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QPrintPreviewDialog_QBaseMinimumSizeHint(const QPrintPreviewDialog* self) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self))) {
        vqprintpreviewdialog->setQPrintPreviewDialog_MinimumSizeHint_IsBase(true);
        return new QSize(vqprintpreviewdialog->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnMinimumSizeHint(const QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self))) {
        vqprintpreviewdialog->setQPrintPreviewDialog_MinimumSizeHint_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_Open(QPrintPreviewDialog* self) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->open();
    } else {
        vqprintpreviewdialog->open();
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseOpen(QPrintPreviewDialog* self) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_Open_IsBase(true);
        vqprintpreviewdialog->open();
    } else {
        vqprintpreviewdialog->open();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnOpen(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_Open_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_Open_Callback>(slot));
    }
}

// Derived class handler implementation
int QPrintPreviewDialog_Exec(QPrintPreviewDialog* self) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        return vqprintpreviewdialog->exec();
    } else {
        return vqprintpreviewdialog->exec();
    }
}

// Base class handler implementation
int QPrintPreviewDialog_QBaseExec(QPrintPreviewDialog* self) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_Exec_IsBase(true);
        return vqprintpreviewdialog->exec();
    } else {
        return vqprintpreviewdialog->exec();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnExec(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_Exec_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_Exec_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_Accept(QPrintPreviewDialog* self) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->accept();
    } else {
        vqprintpreviewdialog->accept();
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseAccept(QPrintPreviewDialog* self) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_Accept_IsBase(true);
        vqprintpreviewdialog->accept();
    } else {
        vqprintpreviewdialog->accept();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnAccept(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_Accept_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_Accept_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_Reject(QPrintPreviewDialog* self) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->reject();
    } else {
        vqprintpreviewdialog->reject();
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseReject(QPrintPreviewDialog* self) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_Reject_IsBase(true);
        vqprintpreviewdialog->reject();
    } else {
        vqprintpreviewdialog->reject();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnReject(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_Reject_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_Reject_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_KeyPressEvent(QPrintPreviewDialog* self, QKeyEvent* param1) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->keyPressEvent(param1);
    } else {
        vqprintpreviewdialog->keyPressEvent(param1);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseKeyPressEvent(QPrintPreviewDialog* self, QKeyEvent* param1) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_KeyPressEvent_IsBase(true);
        vqprintpreviewdialog->keyPressEvent(param1);
    } else {
        vqprintpreviewdialog->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnKeyPressEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_KeyPressEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_CloseEvent(QPrintPreviewDialog* self, QCloseEvent* param1) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->closeEvent(param1);
    } else {
        vqprintpreviewdialog->closeEvent(param1);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseCloseEvent(QPrintPreviewDialog* self, QCloseEvent* param1) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_CloseEvent_IsBase(true);
        vqprintpreviewdialog->closeEvent(param1);
    } else {
        vqprintpreviewdialog->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnCloseEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_CloseEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_ShowEvent(QPrintPreviewDialog* self, QShowEvent* param1) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->showEvent(param1);
    } else {
        vqprintpreviewdialog->showEvent(param1);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseShowEvent(QPrintPreviewDialog* self, QShowEvent* param1) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_ShowEvent_IsBase(true);
        vqprintpreviewdialog->showEvent(param1);
    } else {
        vqprintpreviewdialog->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnShowEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_ShowEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_ResizeEvent(QPrintPreviewDialog* self, QResizeEvent* param1) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->resizeEvent(param1);
    } else {
        vqprintpreviewdialog->resizeEvent(param1);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseResizeEvent(QPrintPreviewDialog* self, QResizeEvent* param1) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_ResizeEvent_IsBase(true);
        vqprintpreviewdialog->resizeEvent(param1);
    } else {
        vqprintpreviewdialog->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnResizeEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_ResizeEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_ContextMenuEvent(QPrintPreviewDialog* self, QContextMenuEvent* param1) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->contextMenuEvent(param1);
    } else {
        vqprintpreviewdialog->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseContextMenuEvent(QPrintPreviewDialog* self, QContextMenuEvent* param1) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_ContextMenuEvent_IsBase(true);
        vqprintpreviewdialog->contextMenuEvent(param1);
    } else {
        vqprintpreviewdialog->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnContextMenuEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_ContextMenuEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPrintPreviewDialog_EventFilter(QPrintPreviewDialog* self, QObject* param1, QEvent* param2) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        return vqprintpreviewdialog->eventFilter(param1, param2);
    } else {
        return vqprintpreviewdialog->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool QPrintPreviewDialog_QBaseEventFilter(QPrintPreviewDialog* self, QObject* param1, QEvent* param2) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_EventFilter_IsBase(true);
        return vqprintpreviewdialog->eventFilter(param1, param2);
    } else {
        return vqprintpreviewdialog->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnEventFilter(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_EventFilter_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int QPrintPreviewDialog_DevType(const QPrintPreviewDialog* self) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self))) {
        return vqprintpreviewdialog->devType();
    } else {
        return vqprintpreviewdialog->devType();
    }
}

// Base class handler implementation
int QPrintPreviewDialog_QBaseDevType(const QPrintPreviewDialog* self) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self))) {
        vqprintpreviewdialog->setQPrintPreviewDialog_DevType_IsBase(true);
        return vqprintpreviewdialog->devType();
    } else {
        return vqprintpreviewdialog->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnDevType(const QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self))) {
        vqprintpreviewdialog->setQPrintPreviewDialog_DevType_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int QPrintPreviewDialog_HeightForWidth(const QPrintPreviewDialog* self, int param1) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self))) {
        return vqprintpreviewdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return vqprintpreviewdialog->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QPrintPreviewDialog_QBaseHeightForWidth(const QPrintPreviewDialog* self, int param1) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self))) {
        vqprintpreviewdialog->setQPrintPreviewDialog_HeightForWidth_IsBase(true);
        return vqprintpreviewdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return vqprintpreviewdialog->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnHeightForWidth(const QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self))) {
        vqprintpreviewdialog->setQPrintPreviewDialog_HeightForWidth_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPrintPreviewDialog_HasHeightForWidth(const QPrintPreviewDialog* self) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self))) {
        return vqprintpreviewdialog->hasHeightForWidth();
    } else {
        return vqprintpreviewdialog->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QPrintPreviewDialog_QBaseHasHeightForWidth(const QPrintPreviewDialog* self) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self))) {
        vqprintpreviewdialog->setQPrintPreviewDialog_HasHeightForWidth_IsBase(true);
        return vqprintpreviewdialog->hasHeightForWidth();
    } else {
        return vqprintpreviewdialog->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnHasHeightForWidth(const QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self))) {
        vqprintpreviewdialog->setQPrintPreviewDialog_HasHeightForWidth_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QPrintPreviewDialog_PaintEngine(const QPrintPreviewDialog* self) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self))) {
        return vqprintpreviewdialog->paintEngine();
    } else {
        return vqprintpreviewdialog->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QPrintPreviewDialog_QBasePaintEngine(const QPrintPreviewDialog* self) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self))) {
        vqprintpreviewdialog->setQPrintPreviewDialog_PaintEngine_IsBase(true);
        return vqprintpreviewdialog->paintEngine();
    } else {
        return vqprintpreviewdialog->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnPaintEngine(const QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self))) {
        vqprintpreviewdialog->setQPrintPreviewDialog_PaintEngine_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPrintPreviewDialog_Event(QPrintPreviewDialog* self, QEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        return vqprintpreviewdialog->event(event);
    } else {
        return vqprintpreviewdialog->event(event);
    }
}

// Base class handler implementation
bool QPrintPreviewDialog_QBaseEvent(QPrintPreviewDialog* self, QEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_Event_IsBase(true);
        return vqprintpreviewdialog->event(event);
    } else {
        return vqprintpreviewdialog->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_Event_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_MousePressEvent(QPrintPreviewDialog* self, QMouseEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->mousePressEvent(event);
    } else {
        vqprintpreviewdialog->mousePressEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseMousePressEvent(QPrintPreviewDialog* self, QMouseEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_MousePressEvent_IsBase(true);
        vqprintpreviewdialog->mousePressEvent(event);
    } else {
        vqprintpreviewdialog->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnMousePressEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_MousePressEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_MouseReleaseEvent(QPrintPreviewDialog* self, QMouseEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->mouseReleaseEvent(event);
    } else {
        vqprintpreviewdialog->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseMouseReleaseEvent(QPrintPreviewDialog* self, QMouseEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_MouseReleaseEvent_IsBase(true);
        vqprintpreviewdialog->mouseReleaseEvent(event);
    } else {
        vqprintpreviewdialog->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnMouseReleaseEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_MouseDoubleClickEvent(QPrintPreviewDialog* self, QMouseEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->mouseDoubleClickEvent(event);
    } else {
        vqprintpreviewdialog->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseMouseDoubleClickEvent(QPrintPreviewDialog* self, QMouseEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_MouseDoubleClickEvent_IsBase(true);
        vqprintpreviewdialog->mouseDoubleClickEvent(event);
    } else {
        vqprintpreviewdialog->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnMouseDoubleClickEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_MouseMoveEvent(QPrintPreviewDialog* self, QMouseEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->mouseMoveEvent(event);
    } else {
        vqprintpreviewdialog->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseMouseMoveEvent(QPrintPreviewDialog* self, QMouseEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_MouseMoveEvent_IsBase(true);
        vqprintpreviewdialog->mouseMoveEvent(event);
    } else {
        vqprintpreviewdialog->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnMouseMoveEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_MouseMoveEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_WheelEvent(QPrintPreviewDialog* self, QWheelEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->wheelEvent(event);
    } else {
        vqprintpreviewdialog->wheelEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseWheelEvent(QPrintPreviewDialog* self, QWheelEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_WheelEvent_IsBase(true);
        vqprintpreviewdialog->wheelEvent(event);
    } else {
        vqprintpreviewdialog->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnWheelEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_WheelEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_KeyReleaseEvent(QPrintPreviewDialog* self, QKeyEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->keyReleaseEvent(event);
    } else {
        vqprintpreviewdialog->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseKeyReleaseEvent(QPrintPreviewDialog* self, QKeyEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_KeyReleaseEvent_IsBase(true);
        vqprintpreviewdialog->keyReleaseEvent(event);
    } else {
        vqprintpreviewdialog->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnKeyReleaseEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_FocusInEvent(QPrintPreviewDialog* self, QFocusEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->focusInEvent(event);
    } else {
        vqprintpreviewdialog->focusInEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseFocusInEvent(QPrintPreviewDialog* self, QFocusEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_FocusInEvent_IsBase(true);
        vqprintpreviewdialog->focusInEvent(event);
    } else {
        vqprintpreviewdialog->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnFocusInEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_FocusInEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_FocusOutEvent(QPrintPreviewDialog* self, QFocusEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->focusOutEvent(event);
    } else {
        vqprintpreviewdialog->focusOutEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseFocusOutEvent(QPrintPreviewDialog* self, QFocusEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_FocusOutEvent_IsBase(true);
        vqprintpreviewdialog->focusOutEvent(event);
    } else {
        vqprintpreviewdialog->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnFocusOutEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_FocusOutEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_EnterEvent(QPrintPreviewDialog* self, QEnterEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->enterEvent(event);
    } else {
        vqprintpreviewdialog->enterEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseEnterEvent(QPrintPreviewDialog* self, QEnterEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_EnterEvent_IsBase(true);
        vqprintpreviewdialog->enterEvent(event);
    } else {
        vqprintpreviewdialog->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnEnterEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_EnterEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_LeaveEvent(QPrintPreviewDialog* self, QEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->leaveEvent(event);
    } else {
        vqprintpreviewdialog->leaveEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseLeaveEvent(QPrintPreviewDialog* self, QEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_LeaveEvent_IsBase(true);
        vqprintpreviewdialog->leaveEvent(event);
    } else {
        vqprintpreviewdialog->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnLeaveEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_LeaveEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_PaintEvent(QPrintPreviewDialog* self, QPaintEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->paintEvent(event);
    } else {
        vqprintpreviewdialog->paintEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBasePaintEvent(QPrintPreviewDialog* self, QPaintEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_PaintEvent_IsBase(true);
        vqprintpreviewdialog->paintEvent(event);
    } else {
        vqprintpreviewdialog->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnPaintEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_PaintEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_MoveEvent(QPrintPreviewDialog* self, QMoveEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->moveEvent(event);
    } else {
        vqprintpreviewdialog->moveEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseMoveEvent(QPrintPreviewDialog* self, QMoveEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_MoveEvent_IsBase(true);
        vqprintpreviewdialog->moveEvent(event);
    } else {
        vqprintpreviewdialog->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnMoveEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_MoveEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_TabletEvent(QPrintPreviewDialog* self, QTabletEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->tabletEvent(event);
    } else {
        vqprintpreviewdialog->tabletEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseTabletEvent(QPrintPreviewDialog* self, QTabletEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_TabletEvent_IsBase(true);
        vqprintpreviewdialog->tabletEvent(event);
    } else {
        vqprintpreviewdialog->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnTabletEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_TabletEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_ActionEvent(QPrintPreviewDialog* self, QActionEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->actionEvent(event);
    } else {
        vqprintpreviewdialog->actionEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseActionEvent(QPrintPreviewDialog* self, QActionEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_ActionEvent_IsBase(true);
        vqprintpreviewdialog->actionEvent(event);
    } else {
        vqprintpreviewdialog->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnActionEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_ActionEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_DragEnterEvent(QPrintPreviewDialog* self, QDragEnterEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->dragEnterEvent(event);
    } else {
        vqprintpreviewdialog->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseDragEnterEvent(QPrintPreviewDialog* self, QDragEnterEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_DragEnterEvent_IsBase(true);
        vqprintpreviewdialog->dragEnterEvent(event);
    } else {
        vqprintpreviewdialog->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnDragEnterEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_DragEnterEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_DragMoveEvent(QPrintPreviewDialog* self, QDragMoveEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->dragMoveEvent(event);
    } else {
        vqprintpreviewdialog->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseDragMoveEvent(QPrintPreviewDialog* self, QDragMoveEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_DragMoveEvent_IsBase(true);
        vqprintpreviewdialog->dragMoveEvent(event);
    } else {
        vqprintpreviewdialog->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnDragMoveEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_DragMoveEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_DragLeaveEvent(QPrintPreviewDialog* self, QDragLeaveEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->dragLeaveEvent(event);
    } else {
        vqprintpreviewdialog->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseDragLeaveEvent(QPrintPreviewDialog* self, QDragLeaveEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_DragLeaveEvent_IsBase(true);
        vqprintpreviewdialog->dragLeaveEvent(event);
    } else {
        vqprintpreviewdialog->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnDragLeaveEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_DragLeaveEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_DropEvent(QPrintPreviewDialog* self, QDropEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->dropEvent(event);
    } else {
        vqprintpreviewdialog->dropEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseDropEvent(QPrintPreviewDialog* self, QDropEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_DropEvent_IsBase(true);
        vqprintpreviewdialog->dropEvent(event);
    } else {
        vqprintpreviewdialog->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnDropEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_DropEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_HideEvent(QPrintPreviewDialog* self, QHideEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->hideEvent(event);
    } else {
        vqprintpreviewdialog->hideEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseHideEvent(QPrintPreviewDialog* self, QHideEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_HideEvent_IsBase(true);
        vqprintpreviewdialog->hideEvent(event);
    } else {
        vqprintpreviewdialog->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnHideEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_HideEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPrintPreviewDialog_NativeEvent(QPrintPreviewDialog* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        return vqprintpreviewdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqprintpreviewdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QPrintPreviewDialog_QBaseNativeEvent(QPrintPreviewDialog* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_NativeEvent_IsBase(true);
        return vqprintpreviewdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqprintpreviewdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnNativeEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_NativeEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_ChangeEvent(QPrintPreviewDialog* self, QEvent* param1) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->changeEvent(param1);
    } else {
        vqprintpreviewdialog->changeEvent(param1);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseChangeEvent(QPrintPreviewDialog* self, QEvent* param1) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_ChangeEvent_IsBase(true);
        vqprintpreviewdialog->changeEvent(param1);
    } else {
        vqprintpreviewdialog->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnChangeEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_ChangeEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QPrintPreviewDialog_Metric(const QPrintPreviewDialog* self, int param1) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self))) {
        return vqprintpreviewdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqprintpreviewdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QPrintPreviewDialog_QBaseMetric(const QPrintPreviewDialog* self, int param1) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self))) {
        vqprintpreviewdialog->setQPrintPreviewDialog_Metric_IsBase(true);
        return vqprintpreviewdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqprintpreviewdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnMetric(const QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self))) {
        vqprintpreviewdialog->setQPrintPreviewDialog_Metric_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_InitPainter(const QPrintPreviewDialog* self, QPainter* painter) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self))) {
        vqprintpreviewdialog->initPainter(painter);
    } else {
        vqprintpreviewdialog->initPainter(painter);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseInitPainter(const QPrintPreviewDialog* self, QPainter* painter) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self))) {
        vqprintpreviewdialog->setQPrintPreviewDialog_InitPainter_IsBase(true);
        vqprintpreviewdialog->initPainter(painter);
    } else {
        vqprintpreviewdialog->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnInitPainter(const QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self))) {
        vqprintpreviewdialog->setQPrintPreviewDialog_InitPainter_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QPrintPreviewDialog_Redirected(const QPrintPreviewDialog* self, QPoint* offset) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self))) {
        return vqprintpreviewdialog->redirected(offset);
    } else {
        return vqprintpreviewdialog->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QPrintPreviewDialog_QBaseRedirected(const QPrintPreviewDialog* self, QPoint* offset) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self))) {
        vqprintpreviewdialog->setQPrintPreviewDialog_Redirected_IsBase(true);
        return vqprintpreviewdialog->redirected(offset);
    } else {
        return vqprintpreviewdialog->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnRedirected(const QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self))) {
        vqprintpreviewdialog->setQPrintPreviewDialog_Redirected_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QPrintPreviewDialog_SharedPainter(const QPrintPreviewDialog* self) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self))) {
        return vqprintpreviewdialog->sharedPainter();
    } else {
        return vqprintpreviewdialog->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QPrintPreviewDialog_QBaseSharedPainter(const QPrintPreviewDialog* self) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self))) {
        vqprintpreviewdialog->setQPrintPreviewDialog_SharedPainter_IsBase(true);
        return vqprintpreviewdialog->sharedPainter();
    } else {
        return vqprintpreviewdialog->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnSharedPainter(const QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self))) {
        vqprintpreviewdialog->setQPrintPreviewDialog_SharedPainter_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_InputMethodEvent(QPrintPreviewDialog* self, QInputMethodEvent* param1) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->inputMethodEvent(param1);
    } else {
        vqprintpreviewdialog->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseInputMethodEvent(QPrintPreviewDialog* self, QInputMethodEvent* param1) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_InputMethodEvent_IsBase(true);
        vqprintpreviewdialog->inputMethodEvent(param1);
    } else {
        vqprintpreviewdialog->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnInputMethodEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_InputMethodEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QPrintPreviewDialog_InputMethodQuery(const QPrintPreviewDialog* self, int param1) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self))) {
        return new QVariant(vqprintpreviewdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QPrintPreviewDialog_QBaseInputMethodQuery(const QPrintPreviewDialog* self, int param1) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self))) {
        vqprintpreviewdialog->setQPrintPreviewDialog_InputMethodQuery_IsBase(true);
        return new QVariant(vqprintpreviewdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnInputMethodQuery(const QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self))) {
        vqprintpreviewdialog->setQPrintPreviewDialog_InputMethodQuery_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPrintPreviewDialog_FocusNextPrevChild(QPrintPreviewDialog* self, bool next) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        return vqprintpreviewdialog->focusNextPrevChild(next);
    } else {
        return vqprintpreviewdialog->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QPrintPreviewDialog_QBaseFocusNextPrevChild(QPrintPreviewDialog* self, bool next) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_FocusNextPrevChild_IsBase(true);
        return vqprintpreviewdialog->focusNextPrevChild(next);
    } else {
        return vqprintpreviewdialog->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnFocusNextPrevChild(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_TimerEvent(QPrintPreviewDialog* self, QTimerEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->timerEvent(event);
    } else {
        vqprintpreviewdialog->timerEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseTimerEvent(QPrintPreviewDialog* self, QTimerEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_TimerEvent_IsBase(true);
        vqprintpreviewdialog->timerEvent(event);
    } else {
        vqprintpreviewdialog->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnTimerEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_TimerEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_ChildEvent(QPrintPreviewDialog* self, QChildEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->childEvent(event);
    } else {
        vqprintpreviewdialog->childEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseChildEvent(QPrintPreviewDialog* self, QChildEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_ChildEvent_IsBase(true);
        vqprintpreviewdialog->childEvent(event);
    } else {
        vqprintpreviewdialog->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnChildEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_ChildEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_CustomEvent(QPrintPreviewDialog* self, QEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->customEvent(event);
    } else {
        vqprintpreviewdialog->customEvent(event);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseCustomEvent(QPrintPreviewDialog* self, QEvent* event) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_CustomEvent_IsBase(true);
        vqprintpreviewdialog->customEvent(event);
    } else {
        vqprintpreviewdialog->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnCustomEvent(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_CustomEvent_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_ConnectNotify(QPrintPreviewDialog* self, QMetaMethod* signal) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->connectNotify(*signal);
    } else {
        vqprintpreviewdialog->connectNotify(*signal);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseConnectNotify(QPrintPreviewDialog* self, QMetaMethod* signal) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_ConnectNotify_IsBase(true);
        vqprintpreviewdialog->connectNotify(*signal);
    } else {
        vqprintpreviewdialog->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnConnectNotify(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_ConnectNotify_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_DisconnectNotify(QPrintPreviewDialog* self, QMetaMethod* signal) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->disconnectNotify(*signal);
    } else {
        vqprintpreviewdialog->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseDisconnectNotify(QPrintPreviewDialog* self, QMetaMethod* signal) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_DisconnectNotify_IsBase(true);
        vqprintpreviewdialog->disconnectNotify(*signal);
    } else {
        vqprintpreviewdialog->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnDisconnectNotify(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_DisconnectNotify_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_AdjustPosition(QPrintPreviewDialog* self, QWidget* param1) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->adjustPosition(param1);
    } else {
        vqprintpreviewdialog->adjustPosition(param1);
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseAdjustPosition(QPrintPreviewDialog* self, QWidget* param1) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_AdjustPosition_IsBase(true);
        vqprintpreviewdialog->adjustPosition(param1);
    } else {
        vqprintpreviewdialog->adjustPosition(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnAdjustPosition(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_AdjustPosition_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_AdjustPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_UpdateMicroFocus(QPrintPreviewDialog* self) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->updateMicroFocus();
    } else {
        vqprintpreviewdialog->updateMicroFocus();
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseUpdateMicroFocus(QPrintPreviewDialog* self) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_UpdateMicroFocus_IsBase(true);
        vqprintpreviewdialog->updateMicroFocus();
    } else {
        vqprintpreviewdialog->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnUpdateMicroFocus(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_Create(QPrintPreviewDialog* self) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->create();
    } else {
        vqprintpreviewdialog->create();
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseCreate(QPrintPreviewDialog* self) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_Create_IsBase(true);
        vqprintpreviewdialog->create();
    } else {
        vqprintpreviewdialog->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnCreate(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_Create_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QPrintPreviewDialog_Destroy(QPrintPreviewDialog* self) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->destroy();
    } else {
        vqprintpreviewdialog->destroy();
    }
}

// Base class handler implementation
void QPrintPreviewDialog_QBaseDestroy(QPrintPreviewDialog* self) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_Destroy_IsBase(true);
        vqprintpreviewdialog->destroy();
    } else {
        vqprintpreviewdialog->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnDestroy(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_Destroy_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPrintPreviewDialog_FocusNextChild(QPrintPreviewDialog* self) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        return vqprintpreviewdialog->focusNextChild();
    } else {
        return vqprintpreviewdialog->focusNextChild();
    }
}

// Base class handler implementation
bool QPrintPreviewDialog_QBaseFocusNextChild(QPrintPreviewDialog* self) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_FocusNextChild_IsBase(true);
        return vqprintpreviewdialog->focusNextChild();
    } else {
        return vqprintpreviewdialog->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnFocusNextChild(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_FocusNextChild_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPrintPreviewDialog_FocusPreviousChild(QPrintPreviewDialog* self) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        return vqprintpreviewdialog->focusPreviousChild();
    } else {
        return vqprintpreviewdialog->focusPreviousChild();
    }
}

// Base class handler implementation
bool QPrintPreviewDialog_QBaseFocusPreviousChild(QPrintPreviewDialog* self) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_FocusPreviousChild_IsBase(true);
        return vqprintpreviewdialog->focusPreviousChild();
    } else {
        return vqprintpreviewdialog->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnFocusPreviousChild(QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = dynamic_cast<VirtualQPrintPreviewDialog*>(self)) {
        vqprintpreviewdialog->setQPrintPreviewDialog_FocusPreviousChild_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QPrintPreviewDialog_Sender(const QPrintPreviewDialog* self) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self))) {
        return vqprintpreviewdialog->sender();
    } else {
        return vqprintpreviewdialog->sender();
    }
}

// Base class handler implementation
QObject* QPrintPreviewDialog_QBaseSender(const QPrintPreviewDialog* self) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self))) {
        vqprintpreviewdialog->setQPrintPreviewDialog_Sender_IsBase(true);
        return vqprintpreviewdialog->sender();
    } else {
        return vqprintpreviewdialog->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnSender(const QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self))) {
        vqprintpreviewdialog->setQPrintPreviewDialog_Sender_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QPrintPreviewDialog_SenderSignalIndex(const QPrintPreviewDialog* self) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self))) {
        return vqprintpreviewdialog->senderSignalIndex();
    } else {
        return vqprintpreviewdialog->senderSignalIndex();
    }
}

// Base class handler implementation
int QPrintPreviewDialog_QBaseSenderSignalIndex(const QPrintPreviewDialog* self) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self))) {
        vqprintpreviewdialog->setQPrintPreviewDialog_SenderSignalIndex_IsBase(true);
        return vqprintpreviewdialog->senderSignalIndex();
    } else {
        return vqprintpreviewdialog->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnSenderSignalIndex(const QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self))) {
        vqprintpreviewdialog->setQPrintPreviewDialog_SenderSignalIndex_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QPrintPreviewDialog_Receivers(const QPrintPreviewDialog* self, const char* signal) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self))) {
        return vqprintpreviewdialog->receivers(signal);
    } else {
        return vqprintpreviewdialog->receivers(signal);
    }
}

// Base class handler implementation
int QPrintPreviewDialog_QBaseReceivers(const QPrintPreviewDialog* self, const char* signal) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self))) {
        vqprintpreviewdialog->setQPrintPreviewDialog_Receivers_IsBase(true);
        return vqprintpreviewdialog->receivers(signal);
    } else {
        return vqprintpreviewdialog->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnReceivers(const QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self))) {
        vqprintpreviewdialog->setQPrintPreviewDialog_Receivers_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPrintPreviewDialog_IsSignalConnected(const QPrintPreviewDialog* self, QMetaMethod* signal) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self))) {
        return vqprintpreviewdialog->isSignalConnected(*signal);
    } else {
        return vqprintpreviewdialog->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QPrintPreviewDialog_QBaseIsSignalConnected(const QPrintPreviewDialog* self, QMetaMethod* signal) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self))) {
        vqprintpreviewdialog->setQPrintPreviewDialog_IsSignalConnected_IsBase(true);
        return vqprintpreviewdialog->isSignalConnected(*signal);
    } else {
        return vqprintpreviewdialog->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewDialog_OnIsSignalConnected(const QPrintPreviewDialog* self, intptr_t slot) {
    if (auto* vqprintpreviewdialog = const_cast<VirtualQPrintPreviewDialog*>(dynamic_cast<const VirtualQPrintPreviewDialog*>(self))) {
        vqprintpreviewdialog->setQPrintPreviewDialog_IsSignalConnected_Callback(reinterpret_cast<VirtualQPrintPreviewDialog::QPrintPreviewDialog_IsSignalConnected_Callback>(slot));
    }
}

void QPrintPreviewDialog_Delete(QPrintPreviewDialog* self) {
    delete self;
}
