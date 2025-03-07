#include <QAbstractPrintDialog>
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
#include <qabstractprintdialog.h>
#include "libqabstractprintdialog.hpp"
#include "libqabstractprintdialog.hxx"

QAbstractPrintDialog* QAbstractPrintDialog_new(QPrinter* printer) {
    return new VirtualQAbstractPrintDialog(printer);
}

QAbstractPrintDialog* QAbstractPrintDialog_new2(QPrinter* printer, QWidget* parent) {
    return new VirtualQAbstractPrintDialog(printer, parent);
}

QMetaObject* QAbstractPrintDialog_MetaObject(const QAbstractPrintDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAbstractPrintDialog_Metacast(QAbstractPrintDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAbstractPrintDialog_Metacall(QAbstractPrintDialog* self, int param1, int param2, void** param3) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAbstractPrintDialog_OnMetacall(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_Metacall_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QAbstractPrintDialog_QBaseMetacall(QAbstractPrintDialog* self, int param1, int param2, void** param3) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_Metacall_IsBase(true);
        return vqabstractprintdialog->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QAbstractPrintDialog_Tr(const char* s) {
    QString _ret = QAbstractPrintDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QAbstractPrintDialog_SetOptionTabs(QAbstractPrintDialog* self, libqt_list /* of QWidget* */ tabs) {
    QList<QWidget*> tabs_QList;
    tabs_QList.reserve(tabs.len);
    QWidget** tabs_arr = static_cast<QWidget**>(tabs.data.ptr);
    for (size_t i = 0; i < tabs.len; ++i) {
        tabs_QList.push_back(tabs_arr[i]);
    }
    self->setOptionTabs(tabs_QList);
}

void QAbstractPrintDialog_SetPrintRange(QAbstractPrintDialog* self, int range) {
    self->setPrintRange(static_cast<QAbstractPrintDialog::PrintRange>(range));
}

int QAbstractPrintDialog_PrintRange(const QAbstractPrintDialog* self) {
    return static_cast<int>(self->printRange());
}

void QAbstractPrintDialog_SetMinMax(QAbstractPrintDialog* self, int min, int max) {
    self->setMinMax(static_cast<int>(min), static_cast<int>(max));
}

int QAbstractPrintDialog_MinPage(const QAbstractPrintDialog* self) {
    return self->minPage();
}

int QAbstractPrintDialog_MaxPage(const QAbstractPrintDialog* self) {
    return self->maxPage();
}

void QAbstractPrintDialog_SetFromTo(QAbstractPrintDialog* self, int fromPage, int toPage) {
    self->setFromTo(static_cast<int>(fromPage), static_cast<int>(toPage));
}

int QAbstractPrintDialog_FromPage(const QAbstractPrintDialog* self) {
    return self->fromPage();
}

int QAbstractPrintDialog_ToPage(const QAbstractPrintDialog* self) {
    return self->toPage();
}

QPrinter* QAbstractPrintDialog_Printer(const QAbstractPrintDialog* self) {
    return self->printer();
}

libqt_string QAbstractPrintDialog_Tr2(const char* s, const char* c) {
    QString _ret = QAbstractPrintDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QAbstractPrintDialog_Tr3(const char* s, const char* c, int n) {
    QString _ret = QAbstractPrintDialog::tr(s, c, static_cast<int>(n));
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
void QAbstractPrintDialog_SetVisible(QAbstractPrintDialog* self, bool visible) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setVisible(visible);
    } else {
        vqabstractprintdialog->setVisible(visible);
    }
}

// Base class handler implementation
void QAbstractPrintDialog_QBaseSetVisible(QAbstractPrintDialog* self, bool visible) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_SetVisible_IsBase(true);
        vqabstractprintdialog->setVisible(visible);
    } else {
        vqabstractprintdialog->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnSetVisible(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_SetVisible_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QAbstractPrintDialog_SizeHint(const QAbstractPrintDialog* self) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self))) {
        return new QSize(vqabstractprintdialog->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QAbstractPrintDialog_QBaseSizeHint(const QAbstractPrintDialog* self) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self))) {
        vqabstractprintdialog->setQAbstractPrintDialog_SizeHint_IsBase(true);
        return new QSize(vqabstractprintdialog->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnSizeHint(const QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self))) {
        vqabstractprintdialog->setQAbstractPrintDialog_SizeHint_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QAbstractPrintDialog_MinimumSizeHint(const QAbstractPrintDialog* self) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self))) {
        return new QSize(vqabstractprintdialog->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QAbstractPrintDialog_QBaseMinimumSizeHint(const QAbstractPrintDialog* self) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self))) {
        vqabstractprintdialog->setQAbstractPrintDialog_MinimumSizeHint_IsBase(true);
        return new QSize(vqabstractprintdialog->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnMinimumSizeHint(const QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self))) {
        vqabstractprintdialog->setQAbstractPrintDialog_MinimumSizeHint_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractPrintDialog_Open(QAbstractPrintDialog* self) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->open();
    } else {
        vqabstractprintdialog->open();
    }
}

// Base class handler implementation
void QAbstractPrintDialog_QBaseOpen(QAbstractPrintDialog* self) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_Open_IsBase(true);
        vqabstractprintdialog->open();
    } else {
        vqabstractprintdialog->open();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnOpen(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_Open_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_Open_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractPrintDialog_Exec(QAbstractPrintDialog* self) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        return vqabstractprintdialog->exec();
    } else {
        return vqabstractprintdialog->exec();
    }
}

// Base class handler implementation
int QAbstractPrintDialog_QBaseExec(QAbstractPrintDialog* self) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_Exec_IsBase(true);
        return vqabstractprintdialog->exec();
    } else {
        return vqabstractprintdialog->exec();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnExec(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_Exec_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_Exec_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractPrintDialog_Done(QAbstractPrintDialog* self, int param1) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->done(static_cast<int>(param1));
    } else {
        vqabstractprintdialog->done(static_cast<int>(param1));
    }
}

// Base class handler implementation
void QAbstractPrintDialog_QBaseDone(QAbstractPrintDialog* self, int param1) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_Done_IsBase(true);
        vqabstractprintdialog->done(static_cast<int>(param1));
    } else {
        vqabstractprintdialog->done(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnDone(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_Done_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_Done_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractPrintDialog_Accept(QAbstractPrintDialog* self) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->accept();
    } else {
        vqabstractprintdialog->accept();
    }
}

// Base class handler implementation
void QAbstractPrintDialog_QBaseAccept(QAbstractPrintDialog* self) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_Accept_IsBase(true);
        vqabstractprintdialog->accept();
    } else {
        vqabstractprintdialog->accept();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnAccept(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_Accept_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_Accept_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractPrintDialog_Reject(QAbstractPrintDialog* self) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->reject();
    } else {
        vqabstractprintdialog->reject();
    }
}

// Base class handler implementation
void QAbstractPrintDialog_QBaseReject(QAbstractPrintDialog* self) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_Reject_IsBase(true);
        vqabstractprintdialog->reject();
    } else {
        vqabstractprintdialog->reject();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnReject(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_Reject_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_Reject_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractPrintDialog_KeyPressEvent(QAbstractPrintDialog* self, QKeyEvent* param1) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->keyPressEvent(param1);
    } else {
        vqabstractprintdialog->keyPressEvent(param1);
    }
}

// Base class handler implementation
void QAbstractPrintDialog_QBaseKeyPressEvent(QAbstractPrintDialog* self, QKeyEvent* param1) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_KeyPressEvent_IsBase(true);
        vqabstractprintdialog->keyPressEvent(param1);
    } else {
        vqabstractprintdialog->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnKeyPressEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_KeyPressEvent_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractPrintDialog_CloseEvent(QAbstractPrintDialog* self, QCloseEvent* param1) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->closeEvent(param1);
    } else {
        vqabstractprintdialog->closeEvent(param1);
    }
}

// Base class handler implementation
void QAbstractPrintDialog_QBaseCloseEvent(QAbstractPrintDialog* self, QCloseEvent* param1) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_CloseEvent_IsBase(true);
        vqabstractprintdialog->closeEvent(param1);
    } else {
        vqabstractprintdialog->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnCloseEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_CloseEvent_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractPrintDialog_ShowEvent(QAbstractPrintDialog* self, QShowEvent* param1) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->showEvent(param1);
    } else {
        vqabstractprintdialog->showEvent(param1);
    }
}

// Base class handler implementation
void QAbstractPrintDialog_QBaseShowEvent(QAbstractPrintDialog* self, QShowEvent* param1) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_ShowEvent_IsBase(true);
        vqabstractprintdialog->showEvent(param1);
    } else {
        vqabstractprintdialog->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnShowEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_ShowEvent_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractPrintDialog_ResizeEvent(QAbstractPrintDialog* self, QResizeEvent* param1) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->resizeEvent(param1);
    } else {
        vqabstractprintdialog->resizeEvent(param1);
    }
}

// Base class handler implementation
void QAbstractPrintDialog_QBaseResizeEvent(QAbstractPrintDialog* self, QResizeEvent* param1) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_ResizeEvent_IsBase(true);
        vqabstractprintdialog->resizeEvent(param1);
    } else {
        vqabstractprintdialog->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnResizeEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_ResizeEvent_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractPrintDialog_ContextMenuEvent(QAbstractPrintDialog* self, QContextMenuEvent* param1) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->contextMenuEvent(param1);
    } else {
        vqabstractprintdialog->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void QAbstractPrintDialog_QBaseContextMenuEvent(QAbstractPrintDialog* self, QContextMenuEvent* param1) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_ContextMenuEvent_IsBase(true);
        vqabstractprintdialog->contextMenuEvent(param1);
    } else {
        vqabstractprintdialog->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnContextMenuEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_ContextMenuEvent_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractPrintDialog_EventFilter(QAbstractPrintDialog* self, QObject* param1, QEvent* param2) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        return vqabstractprintdialog->eventFilter(param1, param2);
    } else {
        return vqabstractprintdialog->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool QAbstractPrintDialog_QBaseEventFilter(QAbstractPrintDialog* self, QObject* param1, QEvent* param2) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_EventFilter_IsBase(true);
        return vqabstractprintdialog->eventFilter(param1, param2);
    } else {
        return vqabstractprintdialog->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnEventFilter(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_EventFilter_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractPrintDialog_DevType(const QAbstractPrintDialog* self) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self))) {
        return vqabstractprintdialog->devType();
    } else {
        return vqabstractprintdialog->devType();
    }
}

// Base class handler implementation
int QAbstractPrintDialog_QBaseDevType(const QAbstractPrintDialog* self) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self))) {
        vqabstractprintdialog->setQAbstractPrintDialog_DevType_IsBase(true);
        return vqabstractprintdialog->devType();
    } else {
        return vqabstractprintdialog->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnDevType(const QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self))) {
        vqabstractprintdialog->setQAbstractPrintDialog_DevType_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractPrintDialog_HeightForWidth(const QAbstractPrintDialog* self, int param1) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self))) {
        return vqabstractprintdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return vqabstractprintdialog->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QAbstractPrintDialog_QBaseHeightForWidth(const QAbstractPrintDialog* self, int param1) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self))) {
        vqabstractprintdialog->setQAbstractPrintDialog_HeightForWidth_IsBase(true);
        return vqabstractprintdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return vqabstractprintdialog->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnHeightForWidth(const QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self))) {
        vqabstractprintdialog->setQAbstractPrintDialog_HeightForWidth_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractPrintDialog_HasHeightForWidth(const QAbstractPrintDialog* self) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self))) {
        return vqabstractprintdialog->hasHeightForWidth();
    } else {
        return vqabstractprintdialog->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QAbstractPrintDialog_QBaseHasHeightForWidth(const QAbstractPrintDialog* self) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self))) {
        vqabstractprintdialog->setQAbstractPrintDialog_HasHeightForWidth_IsBase(true);
        return vqabstractprintdialog->hasHeightForWidth();
    } else {
        return vqabstractprintdialog->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnHasHeightForWidth(const QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self))) {
        vqabstractprintdialog->setQAbstractPrintDialog_HasHeightForWidth_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QAbstractPrintDialog_PaintEngine(const QAbstractPrintDialog* self) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self))) {
        return vqabstractprintdialog->paintEngine();
    } else {
        return vqabstractprintdialog->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QAbstractPrintDialog_QBasePaintEngine(const QAbstractPrintDialog* self) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self))) {
        vqabstractprintdialog->setQAbstractPrintDialog_PaintEngine_IsBase(true);
        return vqabstractprintdialog->paintEngine();
    } else {
        return vqabstractprintdialog->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnPaintEngine(const QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self))) {
        vqabstractprintdialog->setQAbstractPrintDialog_PaintEngine_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractPrintDialog_Event(QAbstractPrintDialog* self, QEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        return vqabstractprintdialog->event(event);
    } else {
        return vqabstractprintdialog->event(event);
    }
}

// Base class handler implementation
bool QAbstractPrintDialog_QBaseEvent(QAbstractPrintDialog* self, QEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_Event_IsBase(true);
        return vqabstractprintdialog->event(event);
    } else {
        return vqabstractprintdialog->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_Event_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractPrintDialog_MousePressEvent(QAbstractPrintDialog* self, QMouseEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->mousePressEvent(event);
    } else {
        vqabstractprintdialog->mousePressEvent(event);
    }
}

// Base class handler implementation
void QAbstractPrintDialog_QBaseMousePressEvent(QAbstractPrintDialog* self, QMouseEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_MousePressEvent_IsBase(true);
        vqabstractprintdialog->mousePressEvent(event);
    } else {
        vqabstractprintdialog->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnMousePressEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_MousePressEvent_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractPrintDialog_MouseReleaseEvent(QAbstractPrintDialog* self, QMouseEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->mouseReleaseEvent(event);
    } else {
        vqabstractprintdialog->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QAbstractPrintDialog_QBaseMouseReleaseEvent(QAbstractPrintDialog* self, QMouseEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_MouseReleaseEvent_IsBase(true);
        vqabstractprintdialog->mouseReleaseEvent(event);
    } else {
        vqabstractprintdialog->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnMouseReleaseEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractPrintDialog_MouseDoubleClickEvent(QAbstractPrintDialog* self, QMouseEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->mouseDoubleClickEvent(event);
    } else {
        vqabstractprintdialog->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QAbstractPrintDialog_QBaseMouseDoubleClickEvent(QAbstractPrintDialog* self, QMouseEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_MouseDoubleClickEvent_IsBase(true);
        vqabstractprintdialog->mouseDoubleClickEvent(event);
    } else {
        vqabstractprintdialog->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnMouseDoubleClickEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractPrintDialog_MouseMoveEvent(QAbstractPrintDialog* self, QMouseEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->mouseMoveEvent(event);
    } else {
        vqabstractprintdialog->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QAbstractPrintDialog_QBaseMouseMoveEvent(QAbstractPrintDialog* self, QMouseEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_MouseMoveEvent_IsBase(true);
        vqabstractprintdialog->mouseMoveEvent(event);
    } else {
        vqabstractprintdialog->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnMouseMoveEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_MouseMoveEvent_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractPrintDialog_WheelEvent(QAbstractPrintDialog* self, QWheelEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->wheelEvent(event);
    } else {
        vqabstractprintdialog->wheelEvent(event);
    }
}

// Base class handler implementation
void QAbstractPrintDialog_QBaseWheelEvent(QAbstractPrintDialog* self, QWheelEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_WheelEvent_IsBase(true);
        vqabstractprintdialog->wheelEvent(event);
    } else {
        vqabstractprintdialog->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnWheelEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_WheelEvent_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractPrintDialog_KeyReleaseEvent(QAbstractPrintDialog* self, QKeyEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->keyReleaseEvent(event);
    } else {
        vqabstractprintdialog->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QAbstractPrintDialog_QBaseKeyReleaseEvent(QAbstractPrintDialog* self, QKeyEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_KeyReleaseEvent_IsBase(true);
        vqabstractprintdialog->keyReleaseEvent(event);
    } else {
        vqabstractprintdialog->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnKeyReleaseEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractPrintDialog_FocusInEvent(QAbstractPrintDialog* self, QFocusEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->focusInEvent(event);
    } else {
        vqabstractprintdialog->focusInEvent(event);
    }
}

// Base class handler implementation
void QAbstractPrintDialog_QBaseFocusInEvent(QAbstractPrintDialog* self, QFocusEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_FocusInEvent_IsBase(true);
        vqabstractprintdialog->focusInEvent(event);
    } else {
        vqabstractprintdialog->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnFocusInEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_FocusInEvent_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractPrintDialog_FocusOutEvent(QAbstractPrintDialog* self, QFocusEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->focusOutEvent(event);
    } else {
        vqabstractprintdialog->focusOutEvent(event);
    }
}

// Base class handler implementation
void QAbstractPrintDialog_QBaseFocusOutEvent(QAbstractPrintDialog* self, QFocusEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_FocusOutEvent_IsBase(true);
        vqabstractprintdialog->focusOutEvent(event);
    } else {
        vqabstractprintdialog->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnFocusOutEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_FocusOutEvent_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractPrintDialog_EnterEvent(QAbstractPrintDialog* self, QEnterEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->enterEvent(event);
    } else {
        vqabstractprintdialog->enterEvent(event);
    }
}

// Base class handler implementation
void QAbstractPrintDialog_QBaseEnterEvent(QAbstractPrintDialog* self, QEnterEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_EnterEvent_IsBase(true);
        vqabstractprintdialog->enterEvent(event);
    } else {
        vqabstractprintdialog->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnEnterEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_EnterEvent_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractPrintDialog_LeaveEvent(QAbstractPrintDialog* self, QEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->leaveEvent(event);
    } else {
        vqabstractprintdialog->leaveEvent(event);
    }
}

// Base class handler implementation
void QAbstractPrintDialog_QBaseLeaveEvent(QAbstractPrintDialog* self, QEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_LeaveEvent_IsBase(true);
        vqabstractprintdialog->leaveEvent(event);
    } else {
        vqabstractprintdialog->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnLeaveEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_LeaveEvent_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractPrintDialog_PaintEvent(QAbstractPrintDialog* self, QPaintEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->paintEvent(event);
    } else {
        vqabstractprintdialog->paintEvent(event);
    }
}

// Base class handler implementation
void QAbstractPrintDialog_QBasePaintEvent(QAbstractPrintDialog* self, QPaintEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_PaintEvent_IsBase(true);
        vqabstractprintdialog->paintEvent(event);
    } else {
        vqabstractprintdialog->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnPaintEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_PaintEvent_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractPrintDialog_MoveEvent(QAbstractPrintDialog* self, QMoveEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->moveEvent(event);
    } else {
        vqabstractprintdialog->moveEvent(event);
    }
}

// Base class handler implementation
void QAbstractPrintDialog_QBaseMoveEvent(QAbstractPrintDialog* self, QMoveEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_MoveEvent_IsBase(true);
        vqabstractprintdialog->moveEvent(event);
    } else {
        vqabstractprintdialog->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnMoveEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_MoveEvent_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractPrintDialog_TabletEvent(QAbstractPrintDialog* self, QTabletEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->tabletEvent(event);
    } else {
        vqabstractprintdialog->tabletEvent(event);
    }
}

// Base class handler implementation
void QAbstractPrintDialog_QBaseTabletEvent(QAbstractPrintDialog* self, QTabletEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_TabletEvent_IsBase(true);
        vqabstractprintdialog->tabletEvent(event);
    } else {
        vqabstractprintdialog->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnTabletEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_TabletEvent_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractPrintDialog_ActionEvent(QAbstractPrintDialog* self, QActionEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->actionEvent(event);
    } else {
        vqabstractprintdialog->actionEvent(event);
    }
}

// Base class handler implementation
void QAbstractPrintDialog_QBaseActionEvent(QAbstractPrintDialog* self, QActionEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_ActionEvent_IsBase(true);
        vqabstractprintdialog->actionEvent(event);
    } else {
        vqabstractprintdialog->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnActionEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_ActionEvent_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractPrintDialog_DragEnterEvent(QAbstractPrintDialog* self, QDragEnterEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->dragEnterEvent(event);
    } else {
        vqabstractprintdialog->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QAbstractPrintDialog_QBaseDragEnterEvent(QAbstractPrintDialog* self, QDragEnterEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_DragEnterEvent_IsBase(true);
        vqabstractprintdialog->dragEnterEvent(event);
    } else {
        vqabstractprintdialog->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnDragEnterEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_DragEnterEvent_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractPrintDialog_DragMoveEvent(QAbstractPrintDialog* self, QDragMoveEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->dragMoveEvent(event);
    } else {
        vqabstractprintdialog->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QAbstractPrintDialog_QBaseDragMoveEvent(QAbstractPrintDialog* self, QDragMoveEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_DragMoveEvent_IsBase(true);
        vqabstractprintdialog->dragMoveEvent(event);
    } else {
        vqabstractprintdialog->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnDragMoveEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_DragMoveEvent_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractPrintDialog_DragLeaveEvent(QAbstractPrintDialog* self, QDragLeaveEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->dragLeaveEvent(event);
    } else {
        vqabstractprintdialog->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QAbstractPrintDialog_QBaseDragLeaveEvent(QAbstractPrintDialog* self, QDragLeaveEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_DragLeaveEvent_IsBase(true);
        vqabstractprintdialog->dragLeaveEvent(event);
    } else {
        vqabstractprintdialog->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnDragLeaveEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_DragLeaveEvent_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractPrintDialog_DropEvent(QAbstractPrintDialog* self, QDropEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->dropEvent(event);
    } else {
        vqabstractprintdialog->dropEvent(event);
    }
}

// Base class handler implementation
void QAbstractPrintDialog_QBaseDropEvent(QAbstractPrintDialog* self, QDropEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_DropEvent_IsBase(true);
        vqabstractprintdialog->dropEvent(event);
    } else {
        vqabstractprintdialog->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnDropEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_DropEvent_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractPrintDialog_HideEvent(QAbstractPrintDialog* self, QHideEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->hideEvent(event);
    } else {
        vqabstractprintdialog->hideEvent(event);
    }
}

// Base class handler implementation
void QAbstractPrintDialog_QBaseHideEvent(QAbstractPrintDialog* self, QHideEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_HideEvent_IsBase(true);
        vqabstractprintdialog->hideEvent(event);
    } else {
        vqabstractprintdialog->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnHideEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_HideEvent_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractPrintDialog_NativeEvent(QAbstractPrintDialog* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        return vqabstractprintdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqabstractprintdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QAbstractPrintDialog_QBaseNativeEvent(QAbstractPrintDialog* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_NativeEvent_IsBase(true);
        return vqabstractprintdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqabstractprintdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnNativeEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_NativeEvent_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractPrintDialog_ChangeEvent(QAbstractPrintDialog* self, QEvent* param1) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->changeEvent(param1);
    } else {
        vqabstractprintdialog->changeEvent(param1);
    }
}

// Base class handler implementation
void QAbstractPrintDialog_QBaseChangeEvent(QAbstractPrintDialog* self, QEvent* param1) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_ChangeEvent_IsBase(true);
        vqabstractprintdialog->changeEvent(param1);
    } else {
        vqabstractprintdialog->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnChangeEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_ChangeEvent_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractPrintDialog_Metric(const QAbstractPrintDialog* self, int param1) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self))) {
        return vqabstractprintdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqabstractprintdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QAbstractPrintDialog_QBaseMetric(const QAbstractPrintDialog* self, int param1) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self))) {
        vqabstractprintdialog->setQAbstractPrintDialog_Metric_IsBase(true);
        return vqabstractprintdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqabstractprintdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnMetric(const QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self))) {
        vqabstractprintdialog->setQAbstractPrintDialog_Metric_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractPrintDialog_InitPainter(const QAbstractPrintDialog* self, QPainter* painter) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self))) {
        vqabstractprintdialog->initPainter(painter);
    } else {
        vqabstractprintdialog->initPainter(painter);
    }
}

// Base class handler implementation
void QAbstractPrintDialog_QBaseInitPainter(const QAbstractPrintDialog* self, QPainter* painter) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self))) {
        vqabstractprintdialog->setQAbstractPrintDialog_InitPainter_IsBase(true);
        vqabstractprintdialog->initPainter(painter);
    } else {
        vqabstractprintdialog->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnInitPainter(const QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self))) {
        vqabstractprintdialog->setQAbstractPrintDialog_InitPainter_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QAbstractPrintDialog_Redirected(const QAbstractPrintDialog* self, QPoint* offset) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self))) {
        return vqabstractprintdialog->redirected(offset);
    } else {
        return vqabstractprintdialog->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QAbstractPrintDialog_QBaseRedirected(const QAbstractPrintDialog* self, QPoint* offset) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self))) {
        vqabstractprintdialog->setQAbstractPrintDialog_Redirected_IsBase(true);
        return vqabstractprintdialog->redirected(offset);
    } else {
        return vqabstractprintdialog->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnRedirected(const QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self))) {
        vqabstractprintdialog->setQAbstractPrintDialog_Redirected_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QAbstractPrintDialog_SharedPainter(const QAbstractPrintDialog* self) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self))) {
        return vqabstractprintdialog->sharedPainter();
    } else {
        return vqabstractprintdialog->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QAbstractPrintDialog_QBaseSharedPainter(const QAbstractPrintDialog* self) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self))) {
        vqabstractprintdialog->setQAbstractPrintDialog_SharedPainter_IsBase(true);
        return vqabstractprintdialog->sharedPainter();
    } else {
        return vqabstractprintdialog->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnSharedPainter(const QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self))) {
        vqabstractprintdialog->setQAbstractPrintDialog_SharedPainter_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractPrintDialog_InputMethodEvent(QAbstractPrintDialog* self, QInputMethodEvent* param1) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->inputMethodEvent(param1);
    } else {
        vqabstractprintdialog->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QAbstractPrintDialog_QBaseInputMethodEvent(QAbstractPrintDialog* self, QInputMethodEvent* param1) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_InputMethodEvent_IsBase(true);
        vqabstractprintdialog->inputMethodEvent(param1);
    } else {
        vqabstractprintdialog->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnInputMethodEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_InputMethodEvent_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QAbstractPrintDialog_InputMethodQuery(const QAbstractPrintDialog* self, int param1) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self))) {
        return new QVariant(vqabstractprintdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QAbstractPrintDialog_QBaseInputMethodQuery(const QAbstractPrintDialog* self, int param1) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self))) {
        vqabstractprintdialog->setQAbstractPrintDialog_InputMethodQuery_IsBase(true);
        return new QVariant(vqabstractprintdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnInputMethodQuery(const QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self))) {
        vqabstractprintdialog->setQAbstractPrintDialog_InputMethodQuery_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractPrintDialog_FocusNextPrevChild(QAbstractPrintDialog* self, bool next) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        return vqabstractprintdialog->focusNextPrevChild(next);
    } else {
        return vqabstractprintdialog->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QAbstractPrintDialog_QBaseFocusNextPrevChild(QAbstractPrintDialog* self, bool next) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_FocusNextPrevChild_IsBase(true);
        return vqabstractprintdialog->focusNextPrevChild(next);
    } else {
        return vqabstractprintdialog->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnFocusNextPrevChild(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractPrintDialog_TimerEvent(QAbstractPrintDialog* self, QTimerEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->timerEvent(event);
    } else {
        vqabstractprintdialog->timerEvent(event);
    }
}

// Base class handler implementation
void QAbstractPrintDialog_QBaseTimerEvent(QAbstractPrintDialog* self, QTimerEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_TimerEvent_IsBase(true);
        vqabstractprintdialog->timerEvent(event);
    } else {
        vqabstractprintdialog->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnTimerEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_TimerEvent_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractPrintDialog_ChildEvent(QAbstractPrintDialog* self, QChildEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->childEvent(event);
    } else {
        vqabstractprintdialog->childEvent(event);
    }
}

// Base class handler implementation
void QAbstractPrintDialog_QBaseChildEvent(QAbstractPrintDialog* self, QChildEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_ChildEvent_IsBase(true);
        vqabstractprintdialog->childEvent(event);
    } else {
        vqabstractprintdialog->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnChildEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_ChildEvent_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractPrintDialog_CustomEvent(QAbstractPrintDialog* self, QEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->customEvent(event);
    } else {
        vqabstractprintdialog->customEvent(event);
    }
}

// Base class handler implementation
void QAbstractPrintDialog_QBaseCustomEvent(QAbstractPrintDialog* self, QEvent* event) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_CustomEvent_IsBase(true);
        vqabstractprintdialog->customEvent(event);
    } else {
        vqabstractprintdialog->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnCustomEvent(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_CustomEvent_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractPrintDialog_ConnectNotify(QAbstractPrintDialog* self, QMetaMethod* signal) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->connectNotify(*signal);
    } else {
        vqabstractprintdialog->connectNotify(*signal);
    }
}

// Base class handler implementation
void QAbstractPrintDialog_QBaseConnectNotify(QAbstractPrintDialog* self, QMetaMethod* signal) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_ConnectNotify_IsBase(true);
        vqabstractprintdialog->connectNotify(*signal);
    } else {
        vqabstractprintdialog->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnConnectNotify(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_ConnectNotify_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractPrintDialog_DisconnectNotify(QAbstractPrintDialog* self, QMetaMethod* signal) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->disconnectNotify(*signal);
    } else {
        vqabstractprintdialog->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QAbstractPrintDialog_QBaseDisconnectNotify(QAbstractPrintDialog* self, QMetaMethod* signal) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_DisconnectNotify_IsBase(true);
        vqabstractprintdialog->disconnectNotify(*signal);
    } else {
        vqabstractprintdialog->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnDisconnectNotify(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_DisconnectNotify_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractPrintDialog_AdjustPosition(QAbstractPrintDialog* self, QWidget* param1) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->adjustPosition(param1);
    } else {
        vqabstractprintdialog->adjustPosition(param1);
    }
}

// Base class handler implementation
void QAbstractPrintDialog_QBaseAdjustPosition(QAbstractPrintDialog* self, QWidget* param1) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_AdjustPosition_IsBase(true);
        vqabstractprintdialog->adjustPosition(param1);
    } else {
        vqabstractprintdialog->adjustPosition(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnAdjustPosition(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_AdjustPosition_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_AdjustPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractPrintDialog_UpdateMicroFocus(QAbstractPrintDialog* self) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->updateMicroFocus();
    } else {
        vqabstractprintdialog->updateMicroFocus();
    }
}

// Base class handler implementation
void QAbstractPrintDialog_QBaseUpdateMicroFocus(QAbstractPrintDialog* self) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_UpdateMicroFocus_IsBase(true);
        vqabstractprintdialog->updateMicroFocus();
    } else {
        vqabstractprintdialog->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnUpdateMicroFocus(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractPrintDialog_Create(QAbstractPrintDialog* self) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->create();
    } else {
        vqabstractprintdialog->create();
    }
}

// Base class handler implementation
void QAbstractPrintDialog_QBaseCreate(QAbstractPrintDialog* self) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_Create_IsBase(true);
        vqabstractprintdialog->create();
    } else {
        vqabstractprintdialog->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnCreate(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_Create_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractPrintDialog_Destroy(QAbstractPrintDialog* self) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->destroy();
    } else {
        vqabstractprintdialog->destroy();
    }
}

// Base class handler implementation
void QAbstractPrintDialog_QBaseDestroy(QAbstractPrintDialog* self) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_Destroy_IsBase(true);
        vqabstractprintdialog->destroy();
    } else {
        vqabstractprintdialog->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnDestroy(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_Destroy_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractPrintDialog_FocusNextChild(QAbstractPrintDialog* self) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        return vqabstractprintdialog->focusNextChild();
    } else {
        return vqabstractprintdialog->focusNextChild();
    }
}

// Base class handler implementation
bool QAbstractPrintDialog_QBaseFocusNextChild(QAbstractPrintDialog* self) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_FocusNextChild_IsBase(true);
        return vqabstractprintdialog->focusNextChild();
    } else {
        return vqabstractprintdialog->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnFocusNextChild(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_FocusNextChild_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractPrintDialog_FocusPreviousChild(QAbstractPrintDialog* self) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        return vqabstractprintdialog->focusPreviousChild();
    } else {
        return vqabstractprintdialog->focusPreviousChild();
    }
}

// Base class handler implementation
bool QAbstractPrintDialog_QBaseFocusPreviousChild(QAbstractPrintDialog* self) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_FocusPreviousChild_IsBase(true);
        return vqabstractprintdialog->focusPreviousChild();
    } else {
        return vqabstractprintdialog->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnFocusPreviousChild(QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = dynamic_cast<VirtualQAbstractPrintDialog*>(self)) {
        vqabstractprintdialog->setQAbstractPrintDialog_FocusPreviousChild_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QAbstractPrintDialog_Sender(const QAbstractPrintDialog* self) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self))) {
        return vqabstractprintdialog->sender();
    } else {
        return vqabstractprintdialog->sender();
    }
}

// Base class handler implementation
QObject* QAbstractPrintDialog_QBaseSender(const QAbstractPrintDialog* self) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self))) {
        vqabstractprintdialog->setQAbstractPrintDialog_Sender_IsBase(true);
        return vqabstractprintdialog->sender();
    } else {
        return vqabstractprintdialog->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnSender(const QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self))) {
        vqabstractprintdialog->setQAbstractPrintDialog_Sender_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractPrintDialog_SenderSignalIndex(const QAbstractPrintDialog* self) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self))) {
        return vqabstractprintdialog->senderSignalIndex();
    } else {
        return vqabstractprintdialog->senderSignalIndex();
    }
}

// Base class handler implementation
int QAbstractPrintDialog_QBaseSenderSignalIndex(const QAbstractPrintDialog* self) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self))) {
        vqabstractprintdialog->setQAbstractPrintDialog_SenderSignalIndex_IsBase(true);
        return vqabstractprintdialog->senderSignalIndex();
    } else {
        return vqabstractprintdialog->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnSenderSignalIndex(const QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self))) {
        vqabstractprintdialog->setQAbstractPrintDialog_SenderSignalIndex_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractPrintDialog_Receivers(const QAbstractPrintDialog* self, const char* signal) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self))) {
        return vqabstractprintdialog->receivers(signal);
    } else {
        return vqabstractprintdialog->receivers(signal);
    }
}

// Base class handler implementation
int QAbstractPrintDialog_QBaseReceivers(const QAbstractPrintDialog* self, const char* signal) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self))) {
        vqabstractprintdialog->setQAbstractPrintDialog_Receivers_IsBase(true);
        return vqabstractprintdialog->receivers(signal);
    } else {
        return vqabstractprintdialog->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnReceivers(const QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self))) {
        vqabstractprintdialog->setQAbstractPrintDialog_Receivers_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractPrintDialog_IsSignalConnected(const QAbstractPrintDialog* self, QMetaMethod* signal) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self))) {
        return vqabstractprintdialog->isSignalConnected(*signal);
    } else {
        return vqabstractprintdialog->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QAbstractPrintDialog_QBaseIsSignalConnected(const QAbstractPrintDialog* self, QMetaMethod* signal) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self))) {
        vqabstractprintdialog->setQAbstractPrintDialog_IsSignalConnected_IsBase(true);
        return vqabstractprintdialog->isSignalConnected(*signal);
    } else {
        return vqabstractprintdialog->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractPrintDialog_OnIsSignalConnected(const QAbstractPrintDialog* self, intptr_t slot) {
    if (auto* vqabstractprintdialog = const_cast<VirtualQAbstractPrintDialog*>(dynamic_cast<const VirtualQAbstractPrintDialog*>(self))) {
        vqabstractprintdialog->setQAbstractPrintDialog_IsSignalConnected_Callback(reinterpret_cast<VirtualQAbstractPrintDialog::QAbstractPrintDialog_IsSignalConnected_Callback>(slot));
    }
}

void QAbstractPrintDialog_Delete(QAbstractPrintDialog* self) {
    delete self;
}
