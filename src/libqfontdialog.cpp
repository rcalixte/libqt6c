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
#include <QFontDialog>
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
#include <qfontdialog.h>
#include "libqfontdialog.hpp"
#include "libqfontdialog.hxx"

QFontDialog* QFontDialog_new(QWidget* parent) {
    return new VirtualQFontDialog(parent);
}

QFontDialog* QFontDialog_new2() {
    return new VirtualQFontDialog();
}

QFontDialog* QFontDialog_new3(QFont* initial) {
    return new VirtualQFontDialog(*initial);
}

QFontDialog* QFontDialog_new4(QFont* initial, QWidget* parent) {
    return new VirtualQFontDialog(*initial, parent);
}

QMetaObject* QFontDialog_MetaObject(const QFontDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* QFontDialog_Metacast(QFontDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QFontDialog_Metacall(QFontDialog* self, int param1, int param2, void** param3) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QFontDialog_OnMetacall(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_Metacall_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QFontDialog_QBaseMetacall(QFontDialog* self, int param1, int param2, void** param3) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_Metacall_IsBase(true);
        return vqfontdialog->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QFontDialog_Tr(const char* s) {
    QString _ret = QFontDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QFontDialog_SetCurrentFont(QFontDialog* self, QFont* font) {
    self->setCurrentFont(*font);
}

QFont* QFontDialog_CurrentFont(const QFontDialog* self) {
    return new QFont(self->currentFont());
}

QFont* QFontDialog_SelectedFont(const QFontDialog* self) {
    return new QFont(self->selectedFont());
}

void QFontDialog_SetOption(QFontDialog* self, int option) {
    self->setOption(static_cast<QFontDialog::FontDialogOption>(option));
}

bool QFontDialog_TestOption(const QFontDialog* self, int option) {
    return self->testOption(static_cast<QFontDialog::FontDialogOption>(option));
}

void QFontDialog_SetOptions(QFontDialog* self, int options) {
    self->setOptions(static_cast<QFontDialog::FontDialogOptions>(options));
}

int QFontDialog_Options(const QFontDialog* self) {
    return static_cast<int>(self->options());
}

QFont* QFontDialog_GetFont(bool* ok) {
    return new QFont(QFontDialog::getFont(ok));
}

QFont* QFontDialog_GetFont2(bool* ok, QFont* initial) {
    return new QFont(QFontDialog::getFont(ok, *initial));
}

void QFontDialog_CurrentFontChanged(QFontDialog* self, QFont* font) {
    self->currentFontChanged(*font);
}

void QFontDialog_Connect_CurrentFontChanged(QFontDialog* self, intptr_t slot) {
    void (*slotFunc)(QFontDialog*, QFont*) = reinterpret_cast<void (*)(QFontDialog*, QFont*)>(slot);
    QFontDialog::connect(self, &QFontDialog::currentFontChanged, [self, slotFunc](const QFont& font) {
        const QFont& font_ret = font;
        // Cast returned reference into pointer
        QFont* sigval1 = const_cast<QFont*>(&font_ret);
        slotFunc(self, sigval1);
    });
}

void QFontDialog_FontSelected(QFontDialog* self, QFont* font) {
    self->fontSelected(*font);
}

void QFontDialog_Connect_FontSelected(QFontDialog* self, intptr_t slot) {
    void (*slotFunc)(QFontDialog*, QFont*) = reinterpret_cast<void (*)(QFontDialog*, QFont*)>(slot);
    QFontDialog::connect(self, &QFontDialog::fontSelected, [self, slotFunc](const QFont& font) {
        const QFont& font_ret = font;
        // Cast returned reference into pointer
        QFont* sigval1 = const_cast<QFont*>(&font_ret);
        slotFunc(self, sigval1);
    });
}

libqt_string QFontDialog_Tr2(const char* s, const char* c) {
    QString _ret = QFontDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QFontDialog_Tr3(const char* s, const char* c, int n) {
    QString _ret = QFontDialog::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QFontDialog_SetOption2(QFontDialog* self, int option, bool on) {
    self->setOption(static_cast<QFontDialog::FontDialogOption>(option), on);
}

QFont* QFontDialog_GetFont22(bool* ok, QWidget* parent) {
    return new QFont(QFontDialog::getFont(ok, parent));
}

QFont* QFontDialog_GetFont3(bool* ok, QFont* initial, QWidget* parent) {
    return new QFont(QFontDialog::getFont(ok, *initial, parent));
}

QFont* QFontDialog_GetFont4(bool* ok, QFont* initial, QWidget* parent, libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    return new QFont(QFontDialog::getFont(ok, *initial, parent, title_QString));
}

QFont* QFontDialog_GetFont5(bool* ok, QFont* initial, QWidget* parent, libqt_string title, int options) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    return new QFont(QFontDialog::getFont(ok, *initial, parent, title_QString, static_cast<QFontDialog::FontDialogOptions>(options)));
}

// Derived class handler implementation
void QFontDialog_SetVisible(QFontDialog* self, bool visible) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setVisible(visible);
    } else {
        vqfontdialog->setVisible(visible);
    }
}

// Base class handler implementation
void QFontDialog_QBaseSetVisible(QFontDialog* self, bool visible) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_SetVisible_IsBase(true);
        vqfontdialog->setVisible(visible);
    } else {
        vqfontdialog->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnSetVisible(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_SetVisible_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_ChangeEvent(QFontDialog* self, QEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->changeEvent(event);
    } else {
        vqfontdialog->changeEvent(event);
    }
}

// Base class handler implementation
void QFontDialog_QBaseChangeEvent(QFontDialog* self, QEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_ChangeEvent_IsBase(true);
        vqfontdialog->changeEvent(event);
    } else {
        vqfontdialog->changeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnChangeEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_ChangeEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_Done(QFontDialog* self, int result) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->done(static_cast<int>(result));
    } else {
        vqfontdialog->done(static_cast<int>(result));
    }
}

// Base class handler implementation
void QFontDialog_QBaseDone(QFontDialog* self, int result) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_Done_IsBase(true);
        vqfontdialog->done(static_cast<int>(result));
    } else {
        vqfontdialog->done(static_cast<int>(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnDone(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_Done_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_Done_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFontDialog_EventFilter(QFontDialog* self, QObject* object, QEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        return vqfontdialog->eventFilter(object, event);
    } else {
        return vqfontdialog->eventFilter(object, event);
    }
}

// Base class handler implementation
bool QFontDialog_QBaseEventFilter(QFontDialog* self, QObject* object, QEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_EventFilter_IsBase(true);
        return vqfontdialog->eventFilter(object, event);
    } else {
        return vqfontdialog->eventFilter(object, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnEventFilter(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_EventFilter_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QFontDialog_SizeHint(const QFontDialog* self) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self))) {
        return new QSize(vqfontdialog->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QFontDialog_QBaseSizeHint(const QFontDialog* self) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self))) {
        vqfontdialog->setQFontDialog_SizeHint_IsBase(true);
        return new QSize(vqfontdialog->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnSizeHint(const QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self))) {
        vqfontdialog->setQFontDialog_SizeHint_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QFontDialog_MinimumSizeHint(const QFontDialog* self) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self))) {
        return new QSize(vqfontdialog->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QFontDialog_QBaseMinimumSizeHint(const QFontDialog* self) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self))) {
        vqfontdialog->setQFontDialog_MinimumSizeHint_IsBase(true);
        return new QSize(vqfontdialog->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnMinimumSizeHint(const QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self))) {
        vqfontdialog->setQFontDialog_MinimumSizeHint_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_Open(QFontDialog* self) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->open();
    } else {
        vqfontdialog->open();
    }
}

// Base class handler implementation
void QFontDialog_QBaseOpen(QFontDialog* self) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_Open_IsBase(true);
        vqfontdialog->open();
    } else {
        vqfontdialog->open();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnOpen(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_Open_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_Open_Callback>(slot));
    }
}

// Derived class handler implementation
int QFontDialog_Exec(QFontDialog* self) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        return vqfontdialog->exec();
    } else {
        return vqfontdialog->exec();
    }
}

// Base class handler implementation
int QFontDialog_QBaseExec(QFontDialog* self) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_Exec_IsBase(true);
        return vqfontdialog->exec();
    } else {
        return vqfontdialog->exec();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnExec(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_Exec_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_Exec_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_Accept(QFontDialog* self) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->accept();
    } else {
        vqfontdialog->accept();
    }
}

// Base class handler implementation
void QFontDialog_QBaseAccept(QFontDialog* self) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_Accept_IsBase(true);
        vqfontdialog->accept();
    } else {
        vqfontdialog->accept();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnAccept(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_Accept_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_Accept_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_Reject(QFontDialog* self) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->reject();
    } else {
        vqfontdialog->reject();
    }
}

// Base class handler implementation
void QFontDialog_QBaseReject(QFontDialog* self) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_Reject_IsBase(true);
        vqfontdialog->reject();
    } else {
        vqfontdialog->reject();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnReject(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_Reject_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_Reject_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_KeyPressEvent(QFontDialog* self, QKeyEvent* param1) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->keyPressEvent(param1);
    } else {
        vqfontdialog->keyPressEvent(param1);
    }
}

// Base class handler implementation
void QFontDialog_QBaseKeyPressEvent(QFontDialog* self, QKeyEvent* param1) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_KeyPressEvent_IsBase(true);
        vqfontdialog->keyPressEvent(param1);
    } else {
        vqfontdialog->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnKeyPressEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_KeyPressEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_CloseEvent(QFontDialog* self, QCloseEvent* param1) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->closeEvent(param1);
    } else {
        vqfontdialog->closeEvent(param1);
    }
}

// Base class handler implementation
void QFontDialog_QBaseCloseEvent(QFontDialog* self, QCloseEvent* param1) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_CloseEvent_IsBase(true);
        vqfontdialog->closeEvent(param1);
    } else {
        vqfontdialog->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnCloseEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_CloseEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_ShowEvent(QFontDialog* self, QShowEvent* param1) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->showEvent(param1);
    } else {
        vqfontdialog->showEvent(param1);
    }
}

// Base class handler implementation
void QFontDialog_QBaseShowEvent(QFontDialog* self, QShowEvent* param1) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_ShowEvent_IsBase(true);
        vqfontdialog->showEvent(param1);
    } else {
        vqfontdialog->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnShowEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_ShowEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_ResizeEvent(QFontDialog* self, QResizeEvent* param1) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->resizeEvent(param1);
    } else {
        vqfontdialog->resizeEvent(param1);
    }
}

// Base class handler implementation
void QFontDialog_QBaseResizeEvent(QFontDialog* self, QResizeEvent* param1) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_ResizeEvent_IsBase(true);
        vqfontdialog->resizeEvent(param1);
    } else {
        vqfontdialog->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnResizeEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_ResizeEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_ContextMenuEvent(QFontDialog* self, QContextMenuEvent* param1) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->contextMenuEvent(param1);
    } else {
        vqfontdialog->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void QFontDialog_QBaseContextMenuEvent(QFontDialog* self, QContextMenuEvent* param1) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_ContextMenuEvent_IsBase(true);
        vqfontdialog->contextMenuEvent(param1);
    } else {
        vqfontdialog->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnContextMenuEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_ContextMenuEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QFontDialog_DevType(const QFontDialog* self) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self))) {
        return vqfontdialog->devType();
    } else {
        return vqfontdialog->devType();
    }
}

// Base class handler implementation
int QFontDialog_QBaseDevType(const QFontDialog* self) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self))) {
        vqfontdialog->setQFontDialog_DevType_IsBase(true);
        return vqfontdialog->devType();
    } else {
        return vqfontdialog->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnDevType(const QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self))) {
        vqfontdialog->setQFontDialog_DevType_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int QFontDialog_HeightForWidth(const QFontDialog* self, int param1) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self))) {
        return vqfontdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return vqfontdialog->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QFontDialog_QBaseHeightForWidth(const QFontDialog* self, int param1) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self))) {
        vqfontdialog->setQFontDialog_HeightForWidth_IsBase(true);
        return vqfontdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return vqfontdialog->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnHeightForWidth(const QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self))) {
        vqfontdialog->setQFontDialog_HeightForWidth_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFontDialog_HasHeightForWidth(const QFontDialog* self) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self))) {
        return vqfontdialog->hasHeightForWidth();
    } else {
        return vqfontdialog->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QFontDialog_QBaseHasHeightForWidth(const QFontDialog* self) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self))) {
        vqfontdialog->setQFontDialog_HasHeightForWidth_IsBase(true);
        return vqfontdialog->hasHeightForWidth();
    } else {
        return vqfontdialog->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnHasHeightForWidth(const QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self))) {
        vqfontdialog->setQFontDialog_HasHeightForWidth_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QFontDialog_PaintEngine(const QFontDialog* self) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self))) {
        return vqfontdialog->paintEngine();
    } else {
        return vqfontdialog->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QFontDialog_QBasePaintEngine(const QFontDialog* self) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self))) {
        vqfontdialog->setQFontDialog_PaintEngine_IsBase(true);
        return vqfontdialog->paintEngine();
    } else {
        return vqfontdialog->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnPaintEngine(const QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self))) {
        vqfontdialog->setQFontDialog_PaintEngine_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFontDialog_Event(QFontDialog* self, QEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        return vqfontdialog->event(event);
    } else {
        return vqfontdialog->event(event);
    }
}

// Base class handler implementation
bool QFontDialog_QBaseEvent(QFontDialog* self, QEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_Event_IsBase(true);
        return vqfontdialog->event(event);
    } else {
        return vqfontdialog->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_Event_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_MousePressEvent(QFontDialog* self, QMouseEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->mousePressEvent(event);
    } else {
        vqfontdialog->mousePressEvent(event);
    }
}

// Base class handler implementation
void QFontDialog_QBaseMousePressEvent(QFontDialog* self, QMouseEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_MousePressEvent_IsBase(true);
        vqfontdialog->mousePressEvent(event);
    } else {
        vqfontdialog->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnMousePressEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_MousePressEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_MouseReleaseEvent(QFontDialog* self, QMouseEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->mouseReleaseEvent(event);
    } else {
        vqfontdialog->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QFontDialog_QBaseMouseReleaseEvent(QFontDialog* self, QMouseEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_MouseReleaseEvent_IsBase(true);
        vqfontdialog->mouseReleaseEvent(event);
    } else {
        vqfontdialog->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnMouseReleaseEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_MouseDoubleClickEvent(QFontDialog* self, QMouseEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->mouseDoubleClickEvent(event);
    } else {
        vqfontdialog->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QFontDialog_QBaseMouseDoubleClickEvent(QFontDialog* self, QMouseEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_MouseDoubleClickEvent_IsBase(true);
        vqfontdialog->mouseDoubleClickEvent(event);
    } else {
        vqfontdialog->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnMouseDoubleClickEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_MouseMoveEvent(QFontDialog* self, QMouseEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->mouseMoveEvent(event);
    } else {
        vqfontdialog->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QFontDialog_QBaseMouseMoveEvent(QFontDialog* self, QMouseEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_MouseMoveEvent_IsBase(true);
        vqfontdialog->mouseMoveEvent(event);
    } else {
        vqfontdialog->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnMouseMoveEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_MouseMoveEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_WheelEvent(QFontDialog* self, QWheelEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->wheelEvent(event);
    } else {
        vqfontdialog->wheelEvent(event);
    }
}

// Base class handler implementation
void QFontDialog_QBaseWheelEvent(QFontDialog* self, QWheelEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_WheelEvent_IsBase(true);
        vqfontdialog->wheelEvent(event);
    } else {
        vqfontdialog->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnWheelEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_WheelEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_KeyReleaseEvent(QFontDialog* self, QKeyEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->keyReleaseEvent(event);
    } else {
        vqfontdialog->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QFontDialog_QBaseKeyReleaseEvent(QFontDialog* self, QKeyEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_KeyReleaseEvent_IsBase(true);
        vqfontdialog->keyReleaseEvent(event);
    } else {
        vqfontdialog->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnKeyReleaseEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_FocusInEvent(QFontDialog* self, QFocusEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->focusInEvent(event);
    } else {
        vqfontdialog->focusInEvent(event);
    }
}

// Base class handler implementation
void QFontDialog_QBaseFocusInEvent(QFontDialog* self, QFocusEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_FocusInEvent_IsBase(true);
        vqfontdialog->focusInEvent(event);
    } else {
        vqfontdialog->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnFocusInEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_FocusInEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_FocusOutEvent(QFontDialog* self, QFocusEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->focusOutEvent(event);
    } else {
        vqfontdialog->focusOutEvent(event);
    }
}

// Base class handler implementation
void QFontDialog_QBaseFocusOutEvent(QFontDialog* self, QFocusEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_FocusOutEvent_IsBase(true);
        vqfontdialog->focusOutEvent(event);
    } else {
        vqfontdialog->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnFocusOutEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_FocusOutEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_EnterEvent(QFontDialog* self, QEnterEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->enterEvent(event);
    } else {
        vqfontdialog->enterEvent(event);
    }
}

// Base class handler implementation
void QFontDialog_QBaseEnterEvent(QFontDialog* self, QEnterEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_EnterEvent_IsBase(true);
        vqfontdialog->enterEvent(event);
    } else {
        vqfontdialog->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnEnterEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_EnterEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_LeaveEvent(QFontDialog* self, QEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->leaveEvent(event);
    } else {
        vqfontdialog->leaveEvent(event);
    }
}

// Base class handler implementation
void QFontDialog_QBaseLeaveEvent(QFontDialog* self, QEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_LeaveEvent_IsBase(true);
        vqfontdialog->leaveEvent(event);
    } else {
        vqfontdialog->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnLeaveEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_LeaveEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_PaintEvent(QFontDialog* self, QPaintEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->paintEvent(event);
    } else {
        vqfontdialog->paintEvent(event);
    }
}

// Base class handler implementation
void QFontDialog_QBasePaintEvent(QFontDialog* self, QPaintEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_PaintEvent_IsBase(true);
        vqfontdialog->paintEvent(event);
    } else {
        vqfontdialog->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnPaintEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_PaintEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_MoveEvent(QFontDialog* self, QMoveEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->moveEvent(event);
    } else {
        vqfontdialog->moveEvent(event);
    }
}

// Base class handler implementation
void QFontDialog_QBaseMoveEvent(QFontDialog* self, QMoveEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_MoveEvent_IsBase(true);
        vqfontdialog->moveEvent(event);
    } else {
        vqfontdialog->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnMoveEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_MoveEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_TabletEvent(QFontDialog* self, QTabletEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->tabletEvent(event);
    } else {
        vqfontdialog->tabletEvent(event);
    }
}

// Base class handler implementation
void QFontDialog_QBaseTabletEvent(QFontDialog* self, QTabletEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_TabletEvent_IsBase(true);
        vqfontdialog->tabletEvent(event);
    } else {
        vqfontdialog->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnTabletEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_TabletEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_ActionEvent(QFontDialog* self, QActionEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->actionEvent(event);
    } else {
        vqfontdialog->actionEvent(event);
    }
}

// Base class handler implementation
void QFontDialog_QBaseActionEvent(QFontDialog* self, QActionEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_ActionEvent_IsBase(true);
        vqfontdialog->actionEvent(event);
    } else {
        vqfontdialog->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnActionEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_ActionEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_DragEnterEvent(QFontDialog* self, QDragEnterEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->dragEnterEvent(event);
    } else {
        vqfontdialog->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QFontDialog_QBaseDragEnterEvent(QFontDialog* self, QDragEnterEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_DragEnterEvent_IsBase(true);
        vqfontdialog->dragEnterEvent(event);
    } else {
        vqfontdialog->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnDragEnterEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_DragEnterEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_DragMoveEvent(QFontDialog* self, QDragMoveEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->dragMoveEvent(event);
    } else {
        vqfontdialog->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QFontDialog_QBaseDragMoveEvent(QFontDialog* self, QDragMoveEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_DragMoveEvent_IsBase(true);
        vqfontdialog->dragMoveEvent(event);
    } else {
        vqfontdialog->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnDragMoveEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_DragMoveEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_DragLeaveEvent(QFontDialog* self, QDragLeaveEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->dragLeaveEvent(event);
    } else {
        vqfontdialog->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QFontDialog_QBaseDragLeaveEvent(QFontDialog* self, QDragLeaveEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_DragLeaveEvent_IsBase(true);
        vqfontdialog->dragLeaveEvent(event);
    } else {
        vqfontdialog->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnDragLeaveEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_DragLeaveEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_DropEvent(QFontDialog* self, QDropEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->dropEvent(event);
    } else {
        vqfontdialog->dropEvent(event);
    }
}

// Base class handler implementation
void QFontDialog_QBaseDropEvent(QFontDialog* self, QDropEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_DropEvent_IsBase(true);
        vqfontdialog->dropEvent(event);
    } else {
        vqfontdialog->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnDropEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_DropEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_HideEvent(QFontDialog* self, QHideEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->hideEvent(event);
    } else {
        vqfontdialog->hideEvent(event);
    }
}

// Base class handler implementation
void QFontDialog_QBaseHideEvent(QFontDialog* self, QHideEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_HideEvent_IsBase(true);
        vqfontdialog->hideEvent(event);
    } else {
        vqfontdialog->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnHideEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_HideEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFontDialog_NativeEvent(QFontDialog* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        return vqfontdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqfontdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QFontDialog_QBaseNativeEvent(QFontDialog* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_NativeEvent_IsBase(true);
        return vqfontdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqfontdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnNativeEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_NativeEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QFontDialog_Metric(const QFontDialog* self, int param1) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self))) {
        return vqfontdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqfontdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QFontDialog_QBaseMetric(const QFontDialog* self, int param1) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self))) {
        vqfontdialog->setQFontDialog_Metric_IsBase(true);
        return vqfontdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqfontdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnMetric(const QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self))) {
        vqfontdialog->setQFontDialog_Metric_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_InitPainter(const QFontDialog* self, QPainter* painter) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self))) {
        vqfontdialog->initPainter(painter);
    } else {
        vqfontdialog->initPainter(painter);
    }
}

// Base class handler implementation
void QFontDialog_QBaseInitPainter(const QFontDialog* self, QPainter* painter) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self))) {
        vqfontdialog->setQFontDialog_InitPainter_IsBase(true);
        vqfontdialog->initPainter(painter);
    } else {
        vqfontdialog->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnInitPainter(const QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self))) {
        vqfontdialog->setQFontDialog_InitPainter_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QFontDialog_Redirected(const QFontDialog* self, QPoint* offset) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self))) {
        return vqfontdialog->redirected(offset);
    } else {
        return vqfontdialog->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QFontDialog_QBaseRedirected(const QFontDialog* self, QPoint* offset) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self))) {
        vqfontdialog->setQFontDialog_Redirected_IsBase(true);
        return vqfontdialog->redirected(offset);
    } else {
        return vqfontdialog->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnRedirected(const QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self))) {
        vqfontdialog->setQFontDialog_Redirected_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QFontDialog_SharedPainter(const QFontDialog* self) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self))) {
        return vqfontdialog->sharedPainter();
    } else {
        return vqfontdialog->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QFontDialog_QBaseSharedPainter(const QFontDialog* self) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self))) {
        vqfontdialog->setQFontDialog_SharedPainter_IsBase(true);
        return vqfontdialog->sharedPainter();
    } else {
        return vqfontdialog->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnSharedPainter(const QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self))) {
        vqfontdialog->setQFontDialog_SharedPainter_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_InputMethodEvent(QFontDialog* self, QInputMethodEvent* param1) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->inputMethodEvent(param1);
    } else {
        vqfontdialog->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QFontDialog_QBaseInputMethodEvent(QFontDialog* self, QInputMethodEvent* param1) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_InputMethodEvent_IsBase(true);
        vqfontdialog->inputMethodEvent(param1);
    } else {
        vqfontdialog->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnInputMethodEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_InputMethodEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QFontDialog_InputMethodQuery(const QFontDialog* self, int param1) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self))) {
        return new QVariant(vqfontdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QFontDialog_QBaseInputMethodQuery(const QFontDialog* self, int param1) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self))) {
        vqfontdialog->setQFontDialog_InputMethodQuery_IsBase(true);
        return new QVariant(vqfontdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnInputMethodQuery(const QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self))) {
        vqfontdialog->setQFontDialog_InputMethodQuery_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFontDialog_FocusNextPrevChild(QFontDialog* self, bool next) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        return vqfontdialog->focusNextPrevChild(next);
    } else {
        return vqfontdialog->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QFontDialog_QBaseFocusNextPrevChild(QFontDialog* self, bool next) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_FocusNextPrevChild_IsBase(true);
        return vqfontdialog->focusNextPrevChild(next);
    } else {
        return vqfontdialog->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnFocusNextPrevChild(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_TimerEvent(QFontDialog* self, QTimerEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->timerEvent(event);
    } else {
        vqfontdialog->timerEvent(event);
    }
}

// Base class handler implementation
void QFontDialog_QBaseTimerEvent(QFontDialog* self, QTimerEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_TimerEvent_IsBase(true);
        vqfontdialog->timerEvent(event);
    } else {
        vqfontdialog->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnTimerEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_TimerEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_ChildEvent(QFontDialog* self, QChildEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->childEvent(event);
    } else {
        vqfontdialog->childEvent(event);
    }
}

// Base class handler implementation
void QFontDialog_QBaseChildEvent(QFontDialog* self, QChildEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_ChildEvent_IsBase(true);
        vqfontdialog->childEvent(event);
    } else {
        vqfontdialog->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnChildEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_ChildEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_CustomEvent(QFontDialog* self, QEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->customEvent(event);
    } else {
        vqfontdialog->customEvent(event);
    }
}

// Base class handler implementation
void QFontDialog_QBaseCustomEvent(QFontDialog* self, QEvent* event) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_CustomEvent_IsBase(true);
        vqfontdialog->customEvent(event);
    } else {
        vqfontdialog->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnCustomEvent(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_CustomEvent_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_ConnectNotify(QFontDialog* self, QMetaMethod* signal) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->connectNotify(*signal);
    } else {
        vqfontdialog->connectNotify(*signal);
    }
}

// Base class handler implementation
void QFontDialog_QBaseConnectNotify(QFontDialog* self, QMetaMethod* signal) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_ConnectNotify_IsBase(true);
        vqfontdialog->connectNotify(*signal);
    } else {
        vqfontdialog->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnConnectNotify(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_ConnectNotify_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_DisconnectNotify(QFontDialog* self, QMetaMethod* signal) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->disconnectNotify(*signal);
    } else {
        vqfontdialog->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QFontDialog_QBaseDisconnectNotify(QFontDialog* self, QMetaMethod* signal) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_DisconnectNotify_IsBase(true);
        vqfontdialog->disconnectNotify(*signal);
    } else {
        vqfontdialog->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnDisconnectNotify(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_DisconnectNotify_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_AdjustPosition(QFontDialog* self, QWidget* param1) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->adjustPosition(param1);
    } else {
        vqfontdialog->adjustPosition(param1);
    }
}

// Base class handler implementation
void QFontDialog_QBaseAdjustPosition(QFontDialog* self, QWidget* param1) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_AdjustPosition_IsBase(true);
        vqfontdialog->adjustPosition(param1);
    } else {
        vqfontdialog->adjustPosition(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnAdjustPosition(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_AdjustPosition_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_AdjustPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_UpdateMicroFocus(QFontDialog* self) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->updateMicroFocus();
    } else {
        vqfontdialog->updateMicroFocus();
    }
}

// Base class handler implementation
void QFontDialog_QBaseUpdateMicroFocus(QFontDialog* self) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_UpdateMicroFocus_IsBase(true);
        vqfontdialog->updateMicroFocus();
    } else {
        vqfontdialog->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnUpdateMicroFocus(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_Create(QFontDialog* self) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->create();
    } else {
        vqfontdialog->create();
    }
}

// Base class handler implementation
void QFontDialog_QBaseCreate(QFontDialog* self) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_Create_IsBase(true);
        vqfontdialog->create();
    } else {
        vqfontdialog->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnCreate(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_Create_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QFontDialog_Destroy(QFontDialog* self) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->destroy();
    } else {
        vqfontdialog->destroy();
    }
}

// Base class handler implementation
void QFontDialog_QBaseDestroy(QFontDialog* self) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_Destroy_IsBase(true);
        vqfontdialog->destroy();
    } else {
        vqfontdialog->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnDestroy(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_Destroy_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFontDialog_FocusNextChild(QFontDialog* self) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        return vqfontdialog->focusNextChild();
    } else {
        return vqfontdialog->focusNextChild();
    }
}

// Base class handler implementation
bool QFontDialog_QBaseFocusNextChild(QFontDialog* self) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_FocusNextChild_IsBase(true);
        return vqfontdialog->focusNextChild();
    } else {
        return vqfontdialog->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnFocusNextChild(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_FocusNextChild_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFontDialog_FocusPreviousChild(QFontDialog* self) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        return vqfontdialog->focusPreviousChild();
    } else {
        return vqfontdialog->focusPreviousChild();
    }
}

// Base class handler implementation
bool QFontDialog_QBaseFocusPreviousChild(QFontDialog* self) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_FocusPreviousChild_IsBase(true);
        return vqfontdialog->focusPreviousChild();
    } else {
        return vqfontdialog->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnFocusPreviousChild(QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = dynamic_cast<VirtualQFontDialog*>(self)) {
        vqfontdialog->setQFontDialog_FocusPreviousChild_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QFontDialog_Sender(const QFontDialog* self) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self))) {
        return vqfontdialog->sender();
    } else {
        return vqfontdialog->sender();
    }
}

// Base class handler implementation
QObject* QFontDialog_QBaseSender(const QFontDialog* self) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self))) {
        vqfontdialog->setQFontDialog_Sender_IsBase(true);
        return vqfontdialog->sender();
    } else {
        return vqfontdialog->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnSender(const QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self))) {
        vqfontdialog->setQFontDialog_Sender_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QFontDialog_SenderSignalIndex(const QFontDialog* self) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self))) {
        return vqfontdialog->senderSignalIndex();
    } else {
        return vqfontdialog->senderSignalIndex();
    }
}

// Base class handler implementation
int QFontDialog_QBaseSenderSignalIndex(const QFontDialog* self) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self))) {
        vqfontdialog->setQFontDialog_SenderSignalIndex_IsBase(true);
        return vqfontdialog->senderSignalIndex();
    } else {
        return vqfontdialog->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnSenderSignalIndex(const QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self))) {
        vqfontdialog->setQFontDialog_SenderSignalIndex_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QFontDialog_Receivers(const QFontDialog* self, const char* signal) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self))) {
        return vqfontdialog->receivers(signal);
    } else {
        return vqfontdialog->receivers(signal);
    }
}

// Base class handler implementation
int QFontDialog_QBaseReceivers(const QFontDialog* self, const char* signal) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self))) {
        vqfontdialog->setQFontDialog_Receivers_IsBase(true);
        return vqfontdialog->receivers(signal);
    } else {
        return vqfontdialog->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnReceivers(const QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self))) {
        vqfontdialog->setQFontDialog_Receivers_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFontDialog_IsSignalConnected(const QFontDialog* self, QMetaMethod* signal) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self))) {
        return vqfontdialog->isSignalConnected(*signal);
    } else {
        return vqfontdialog->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QFontDialog_QBaseIsSignalConnected(const QFontDialog* self, QMetaMethod* signal) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self))) {
        vqfontdialog->setQFontDialog_IsSignalConnected_IsBase(true);
        return vqfontdialog->isSignalConnected(*signal);
    } else {
        return vqfontdialog->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFontDialog_OnIsSignalConnected(const QFontDialog* self, intptr_t slot) {
    if (auto* vqfontdialog = const_cast<VirtualQFontDialog*>(dynamic_cast<const VirtualQFontDialog*>(self))) {
        vqfontdialog->setQFontDialog_IsSignalConnected_Callback(reinterpret_cast<VirtualQFontDialog::QFontDialog_IsSignalConnected_Callback>(slot));
    }
}

void QFontDialog_Delete(QFontDialog* self) {
    delete self;
}
