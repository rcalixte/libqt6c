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
#include <QMovie>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPalette>
#include <QPicture>
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
#include <qlabel.h>
#include "libqlabel.hpp"
#include "libqlabel.hxx"

QLabel* QLabel_new(QWidget* parent) {
    return new VirtualQLabel(parent);
}

QLabel* QLabel_new2() {
    return new VirtualQLabel();
}

QLabel* QLabel_new3(libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQLabel(text_QString);
}

QLabel* QLabel_new4(QWidget* parent, int f) {
    return new VirtualQLabel(parent, static_cast<Qt::WindowFlags>(f));
}

QLabel* QLabel_new5(libqt_string text, QWidget* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQLabel(text_QString, parent);
}

QLabel* QLabel_new6(libqt_string text, QWidget* parent, int f) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQLabel(text_QString, parent, static_cast<Qt::WindowFlags>(f));
}

QMetaObject* QLabel_MetaObject(const QLabel* self) {
    return (QMetaObject*)self->metaObject();
}

void* QLabel_Metacast(QLabel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QLabel_Metacall(QLabel* self, int param1, int param2, void** param3) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QLabel_OnMetacall(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_Metacall_Callback(reinterpret_cast<VirtualQLabel::QLabel_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QLabel_QBaseMetacall(QLabel* self, int param1, int param2, void** param3) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_Metacall_IsBase(true);
        return vqlabel->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QLabel_Tr(const char* s) {
    QString _ret = QLabel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QLabel_Text(const QLabel* self) {
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

QPixmap* QLabel_Pixmap(const QLabel* self, int param1) {
    return new QPixmap(self->pixmap(static_cast<Qt::ReturnByValueConstant>(param1)));
}

QPixmap* QLabel_Pixmap2(const QLabel* self) {
    return new QPixmap(self->pixmap());
}

QPicture* QLabel_Picture(const QLabel* self, int param1) {
    return new QPicture(self->picture(static_cast<Qt::ReturnByValueConstant>(param1)));
}

QPicture* QLabel_Picture2(const QLabel* self) {
    return new QPicture(self->picture());
}

QMovie* QLabel_Movie(const QLabel* self) {
    return self->movie();
}

int QLabel_TextFormat(const QLabel* self) {
    return static_cast<int>(self->textFormat());
}

void QLabel_SetTextFormat(QLabel* self, int textFormat) {
    self->setTextFormat(static_cast<Qt::TextFormat>(textFormat));
}

int QLabel_Alignment(const QLabel* self) {
    return static_cast<int>(self->alignment());
}

void QLabel_SetAlignment(QLabel* self, int alignment) {
    self->setAlignment(static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

void QLabel_SetWordWrap(QLabel* self, bool on) {
    self->setWordWrap(on);
}

bool QLabel_WordWrap(const QLabel* self) {
    return self->wordWrap();
}

int QLabel_Indent(const QLabel* self) {
    return self->indent();
}

void QLabel_SetIndent(QLabel* self, int indent) {
    self->setIndent(static_cast<int>(indent));
}

int QLabel_Margin(const QLabel* self) {
    return self->margin();
}

void QLabel_SetMargin(QLabel* self, int margin) {
    self->setMargin(static_cast<int>(margin));
}

bool QLabel_HasScaledContents(const QLabel* self) {
    return self->hasScaledContents();
}

void QLabel_SetScaledContents(QLabel* self, bool scaledContents) {
    self->setScaledContents(scaledContents);
}

void QLabel_SetBuddy(QLabel* self, QWidget* buddy) {
    self->setBuddy(buddy);
}

QWidget* QLabel_Buddy(const QLabel* self) {
    return self->buddy();
}

bool QLabel_OpenExternalLinks(const QLabel* self) {
    return self->openExternalLinks();
}

void QLabel_SetOpenExternalLinks(QLabel* self, bool open) {
    self->setOpenExternalLinks(open);
}

void QLabel_SetTextInteractionFlags(QLabel* self, int flags) {
    self->setTextInteractionFlags(static_cast<Qt::TextInteractionFlags>(flags));
}

int QLabel_TextInteractionFlags(const QLabel* self) {
    return static_cast<int>(self->textInteractionFlags());
}

void QLabel_SetSelection(QLabel* self, int param1, int param2) {
    self->setSelection(static_cast<int>(param1), static_cast<int>(param2));
}

bool QLabel_HasSelectedText(const QLabel* self) {
    return self->hasSelectedText();
}

libqt_string QLabel_SelectedText(const QLabel* self) {
    QString _ret = self->selectedText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QLabel_SelectionStart(const QLabel* self) {
    return self->selectionStart();
}

void QLabel_SetText(QLabel* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setText(text_QString);
}

void QLabel_SetPixmap(QLabel* self, QPixmap* pixmap) {
    self->setPixmap(*pixmap);
}

void QLabel_SetPicture(QLabel* self, QPicture* picture) {
    self->setPicture(*picture);
}

void QLabel_SetMovie(QLabel* self, QMovie* movie) {
    self->setMovie(movie);
}

void QLabel_SetNum(QLabel* self, int num) {
    self->setNum(static_cast<int>(num));
}

void QLabel_SetNumWithNum(QLabel* self, double num) {
    self->setNum(static_cast<double>(num));
}

void QLabel_Clear(QLabel* self) {
    self->clear();
}

void QLabel_LinkActivated(QLabel* self, libqt_string link) {
    QString link_QString = QString::fromUtf8(link.data, link.len);
    self->linkActivated(link_QString);
}

void QLabel_Connect_LinkActivated(QLabel* self, intptr_t slot) {
    void (*slotFunc)(QLabel*, libqt_string) = reinterpret_cast<void (*)(QLabel*, libqt_string)>(slot);
    QLabel::connect(self, &QLabel::linkActivated, [self, slotFunc](const QString& link) {
        const QString link_ret = link;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray link_b = link_ret.toUtf8();
        libqt_string link_str;
        link_str.len = link_b.length();
        link_str.data = static_cast<char*>(malloc((link_str.len + 1) * sizeof(char)));
        memcpy(link_str.data, link_b.data(), link_str.len);
        link_str.data[link_str.len] = '\0';
        libqt_string sigval1 = link_str;
        slotFunc(self, sigval1);
    });
}

void QLabel_LinkHovered(QLabel* self, libqt_string link) {
    QString link_QString = QString::fromUtf8(link.data, link.len);
    self->linkHovered(link_QString);
}

void QLabel_Connect_LinkHovered(QLabel* self, intptr_t slot) {
    void (*slotFunc)(QLabel*, libqt_string) = reinterpret_cast<void (*)(QLabel*, libqt_string)>(slot);
    QLabel::connect(self, &QLabel::linkHovered, [self, slotFunc](const QString& link) {
        const QString link_ret = link;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray link_b = link_ret.toUtf8();
        libqt_string link_str;
        link_str.len = link_b.length();
        link_str.data = static_cast<char*>(malloc((link_str.len + 1) * sizeof(char)));
        memcpy(link_str.data, link_b.data(), link_str.len);
        link_str.data[link_str.len] = '\0';
        libqt_string sigval1 = link_str;
        slotFunc(self, sigval1);
    });
}

libqt_string QLabel_Tr2(const char* s, const char* c) {
    QString _ret = QLabel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QLabel_Tr3(const char* s, const char* c, int n) {
    QString _ret = QLabel::tr(s, c, static_cast<int>(n));
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
QSize* QLabel_SizeHint(const QLabel* self) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        return new QSize(vqlabel->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QLabel_QBaseSizeHint(const QLabel* self) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        vqlabel->setQLabel_SizeHint_IsBase(true);
        return new QSize(vqlabel->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnSizeHint(const QLabel* self, intptr_t slot) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        vqlabel->setQLabel_SizeHint_Callback(reinterpret_cast<VirtualQLabel::QLabel_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QLabel_MinimumSizeHint(const QLabel* self) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        return new QSize(vqlabel->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QLabel_QBaseMinimumSizeHint(const QLabel* self) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        vqlabel->setQLabel_MinimumSizeHint_IsBase(true);
        return new QSize(vqlabel->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnMinimumSizeHint(const QLabel* self, intptr_t slot) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        vqlabel->setQLabel_MinimumSizeHint_Callback(reinterpret_cast<VirtualQLabel::QLabel_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QLabel_HeightForWidth(const QLabel* self, int param1) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        return vqlabel->heightForWidth(static_cast<int>(param1));
    } else {
        return vqlabel->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QLabel_QBaseHeightForWidth(const QLabel* self, int param1) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        vqlabel->setQLabel_HeightForWidth_IsBase(true);
        return vqlabel->heightForWidth(static_cast<int>(param1));
    } else {
        return vqlabel->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnHeightForWidth(const QLabel* self, intptr_t slot) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        vqlabel->setQLabel_HeightForWidth_Callback(reinterpret_cast<VirtualQLabel::QLabel_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLabel_Event(QLabel* self, QEvent* e) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        return vqlabel->event(e);
    } else {
        return vqlabel->event(e);
    }
}

// Base class handler implementation
bool QLabel_QBaseEvent(QLabel* self, QEvent* e) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_Event_IsBase(true);
        return vqlabel->event(e);
    } else {
        return vqlabel->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_Event_Callback(reinterpret_cast<VirtualQLabel::QLabel_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QLabel_KeyPressEvent(QLabel* self, QKeyEvent* ev) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->keyPressEvent(ev);
    } else {
        vqlabel->keyPressEvent(ev);
    }
}

// Base class handler implementation
void QLabel_QBaseKeyPressEvent(QLabel* self, QKeyEvent* ev) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_KeyPressEvent_IsBase(true);
        vqlabel->keyPressEvent(ev);
    } else {
        vqlabel->keyPressEvent(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnKeyPressEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_KeyPressEvent_Callback(reinterpret_cast<VirtualQLabel::QLabel_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLabel_PaintEvent(QLabel* self, QPaintEvent* param1) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->paintEvent(param1);
    } else {
        vqlabel->paintEvent(param1);
    }
}

// Base class handler implementation
void QLabel_QBasePaintEvent(QLabel* self, QPaintEvent* param1) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_PaintEvent_IsBase(true);
        vqlabel->paintEvent(param1);
    } else {
        vqlabel->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnPaintEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_PaintEvent_Callback(reinterpret_cast<VirtualQLabel::QLabel_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLabel_ChangeEvent(QLabel* self, QEvent* param1) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->changeEvent(param1);
    } else {
        vqlabel->changeEvent(param1);
    }
}

// Base class handler implementation
void QLabel_QBaseChangeEvent(QLabel* self, QEvent* param1) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_ChangeEvent_IsBase(true);
        vqlabel->changeEvent(param1);
    } else {
        vqlabel->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnChangeEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_ChangeEvent_Callback(reinterpret_cast<VirtualQLabel::QLabel_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLabel_MousePressEvent(QLabel* self, QMouseEvent* ev) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->mousePressEvent(ev);
    } else {
        vqlabel->mousePressEvent(ev);
    }
}

// Base class handler implementation
void QLabel_QBaseMousePressEvent(QLabel* self, QMouseEvent* ev) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_MousePressEvent_IsBase(true);
        vqlabel->mousePressEvent(ev);
    } else {
        vqlabel->mousePressEvent(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnMousePressEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_MousePressEvent_Callback(reinterpret_cast<VirtualQLabel::QLabel_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLabel_MouseMoveEvent(QLabel* self, QMouseEvent* ev) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->mouseMoveEvent(ev);
    } else {
        vqlabel->mouseMoveEvent(ev);
    }
}

// Base class handler implementation
void QLabel_QBaseMouseMoveEvent(QLabel* self, QMouseEvent* ev) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_MouseMoveEvent_IsBase(true);
        vqlabel->mouseMoveEvent(ev);
    } else {
        vqlabel->mouseMoveEvent(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnMouseMoveEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_MouseMoveEvent_Callback(reinterpret_cast<VirtualQLabel::QLabel_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLabel_MouseReleaseEvent(QLabel* self, QMouseEvent* ev) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->mouseReleaseEvent(ev);
    } else {
        vqlabel->mouseReleaseEvent(ev);
    }
}

// Base class handler implementation
void QLabel_QBaseMouseReleaseEvent(QLabel* self, QMouseEvent* ev) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_MouseReleaseEvent_IsBase(true);
        vqlabel->mouseReleaseEvent(ev);
    } else {
        vqlabel->mouseReleaseEvent(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnMouseReleaseEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQLabel::QLabel_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLabel_ContextMenuEvent(QLabel* self, QContextMenuEvent* ev) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->contextMenuEvent(ev);
    } else {
        vqlabel->contextMenuEvent(ev);
    }
}

// Base class handler implementation
void QLabel_QBaseContextMenuEvent(QLabel* self, QContextMenuEvent* ev) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_ContextMenuEvent_IsBase(true);
        vqlabel->contextMenuEvent(ev);
    } else {
        vqlabel->contextMenuEvent(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnContextMenuEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_ContextMenuEvent_Callback(reinterpret_cast<VirtualQLabel::QLabel_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLabel_FocusInEvent(QLabel* self, QFocusEvent* ev) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->focusInEvent(ev);
    } else {
        vqlabel->focusInEvent(ev);
    }
}

// Base class handler implementation
void QLabel_QBaseFocusInEvent(QLabel* self, QFocusEvent* ev) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_FocusInEvent_IsBase(true);
        vqlabel->focusInEvent(ev);
    } else {
        vqlabel->focusInEvent(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnFocusInEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_FocusInEvent_Callback(reinterpret_cast<VirtualQLabel::QLabel_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLabel_FocusOutEvent(QLabel* self, QFocusEvent* ev) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->focusOutEvent(ev);
    } else {
        vqlabel->focusOutEvent(ev);
    }
}

// Base class handler implementation
void QLabel_QBaseFocusOutEvent(QLabel* self, QFocusEvent* ev) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_FocusOutEvent_IsBase(true);
        vqlabel->focusOutEvent(ev);
    } else {
        vqlabel->focusOutEvent(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnFocusOutEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_FocusOutEvent_Callback(reinterpret_cast<VirtualQLabel::QLabel_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLabel_FocusNextPrevChild(QLabel* self, bool next) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        return vqlabel->focusNextPrevChild(next);
    } else {
        return vqlabel->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QLabel_QBaseFocusNextPrevChild(QLabel* self, bool next) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_FocusNextPrevChild_IsBase(true);
        return vqlabel->focusNextPrevChild(next);
    } else {
        return vqlabel->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnFocusNextPrevChild(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQLabel::QLabel_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void QLabel_InitStyleOption(const QLabel* self, QStyleOptionFrame* option) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        vqlabel->initStyleOption(option);
    } else {
        vqlabel->initStyleOption(option);
    }
}

// Base class handler implementation
void QLabel_QBaseInitStyleOption(const QLabel* self, QStyleOptionFrame* option) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        vqlabel->setQLabel_InitStyleOption_IsBase(true);
        vqlabel->initStyleOption(option);
    } else {
        vqlabel->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnInitStyleOption(const QLabel* self, intptr_t slot) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        vqlabel->setQLabel_InitStyleOption_Callback(reinterpret_cast<VirtualQLabel::QLabel_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QLabel_DevType(const QLabel* self) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        return vqlabel->devType();
    } else {
        return vqlabel->devType();
    }
}

// Base class handler implementation
int QLabel_QBaseDevType(const QLabel* self) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        vqlabel->setQLabel_DevType_IsBase(true);
        return vqlabel->devType();
    } else {
        return vqlabel->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnDevType(const QLabel* self, intptr_t slot) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        vqlabel->setQLabel_DevType_Callback(reinterpret_cast<VirtualQLabel::QLabel_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QLabel_SetVisible(QLabel* self, bool visible) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setVisible(visible);
    } else {
        vqlabel->setVisible(visible);
    }
}

// Base class handler implementation
void QLabel_QBaseSetVisible(QLabel* self, bool visible) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_SetVisible_IsBase(true);
        vqlabel->setVisible(visible);
    } else {
        vqlabel->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnSetVisible(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_SetVisible_Callback(reinterpret_cast<VirtualQLabel::QLabel_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLabel_HasHeightForWidth(const QLabel* self) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        return vqlabel->hasHeightForWidth();
    } else {
        return vqlabel->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QLabel_QBaseHasHeightForWidth(const QLabel* self) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        vqlabel->setQLabel_HasHeightForWidth_IsBase(true);
        return vqlabel->hasHeightForWidth();
    } else {
        return vqlabel->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnHasHeightForWidth(const QLabel* self, intptr_t slot) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        vqlabel->setQLabel_HasHeightForWidth_Callback(reinterpret_cast<VirtualQLabel::QLabel_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QLabel_PaintEngine(const QLabel* self) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        return vqlabel->paintEngine();
    } else {
        return vqlabel->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QLabel_QBasePaintEngine(const QLabel* self) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        vqlabel->setQLabel_PaintEngine_IsBase(true);
        return vqlabel->paintEngine();
    } else {
        return vqlabel->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnPaintEngine(const QLabel* self, intptr_t slot) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        vqlabel->setQLabel_PaintEngine_Callback(reinterpret_cast<VirtualQLabel::QLabel_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QLabel_MouseDoubleClickEvent(QLabel* self, QMouseEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->mouseDoubleClickEvent(event);
    } else {
        vqlabel->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QLabel_QBaseMouseDoubleClickEvent(QLabel* self, QMouseEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_MouseDoubleClickEvent_IsBase(true);
        vqlabel->mouseDoubleClickEvent(event);
    } else {
        vqlabel->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnMouseDoubleClickEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQLabel::QLabel_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLabel_WheelEvent(QLabel* self, QWheelEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->wheelEvent(event);
    } else {
        vqlabel->wheelEvent(event);
    }
}

// Base class handler implementation
void QLabel_QBaseWheelEvent(QLabel* self, QWheelEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_WheelEvent_IsBase(true);
        vqlabel->wheelEvent(event);
    } else {
        vqlabel->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnWheelEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_WheelEvent_Callback(reinterpret_cast<VirtualQLabel::QLabel_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLabel_KeyReleaseEvent(QLabel* self, QKeyEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->keyReleaseEvent(event);
    } else {
        vqlabel->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QLabel_QBaseKeyReleaseEvent(QLabel* self, QKeyEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_KeyReleaseEvent_IsBase(true);
        vqlabel->keyReleaseEvent(event);
    } else {
        vqlabel->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnKeyReleaseEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQLabel::QLabel_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLabel_EnterEvent(QLabel* self, QEnterEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->enterEvent(event);
    } else {
        vqlabel->enterEvent(event);
    }
}

// Base class handler implementation
void QLabel_QBaseEnterEvent(QLabel* self, QEnterEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_EnterEvent_IsBase(true);
        vqlabel->enterEvent(event);
    } else {
        vqlabel->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnEnterEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_EnterEvent_Callback(reinterpret_cast<VirtualQLabel::QLabel_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLabel_LeaveEvent(QLabel* self, QEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->leaveEvent(event);
    } else {
        vqlabel->leaveEvent(event);
    }
}

// Base class handler implementation
void QLabel_QBaseLeaveEvent(QLabel* self, QEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_LeaveEvent_IsBase(true);
        vqlabel->leaveEvent(event);
    } else {
        vqlabel->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnLeaveEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_LeaveEvent_Callback(reinterpret_cast<VirtualQLabel::QLabel_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLabel_MoveEvent(QLabel* self, QMoveEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->moveEvent(event);
    } else {
        vqlabel->moveEvent(event);
    }
}

// Base class handler implementation
void QLabel_QBaseMoveEvent(QLabel* self, QMoveEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_MoveEvent_IsBase(true);
        vqlabel->moveEvent(event);
    } else {
        vqlabel->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnMoveEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_MoveEvent_Callback(reinterpret_cast<VirtualQLabel::QLabel_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLabel_ResizeEvent(QLabel* self, QResizeEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->resizeEvent(event);
    } else {
        vqlabel->resizeEvent(event);
    }
}

// Base class handler implementation
void QLabel_QBaseResizeEvent(QLabel* self, QResizeEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_ResizeEvent_IsBase(true);
        vqlabel->resizeEvent(event);
    } else {
        vqlabel->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnResizeEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_ResizeEvent_Callback(reinterpret_cast<VirtualQLabel::QLabel_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLabel_CloseEvent(QLabel* self, QCloseEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->closeEvent(event);
    } else {
        vqlabel->closeEvent(event);
    }
}

// Base class handler implementation
void QLabel_QBaseCloseEvent(QLabel* self, QCloseEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_CloseEvent_IsBase(true);
        vqlabel->closeEvent(event);
    } else {
        vqlabel->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnCloseEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_CloseEvent_Callback(reinterpret_cast<VirtualQLabel::QLabel_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLabel_TabletEvent(QLabel* self, QTabletEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->tabletEvent(event);
    } else {
        vqlabel->tabletEvent(event);
    }
}

// Base class handler implementation
void QLabel_QBaseTabletEvent(QLabel* self, QTabletEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_TabletEvent_IsBase(true);
        vqlabel->tabletEvent(event);
    } else {
        vqlabel->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnTabletEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_TabletEvent_Callback(reinterpret_cast<VirtualQLabel::QLabel_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLabel_ActionEvent(QLabel* self, QActionEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->actionEvent(event);
    } else {
        vqlabel->actionEvent(event);
    }
}

// Base class handler implementation
void QLabel_QBaseActionEvent(QLabel* self, QActionEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_ActionEvent_IsBase(true);
        vqlabel->actionEvent(event);
    } else {
        vqlabel->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnActionEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_ActionEvent_Callback(reinterpret_cast<VirtualQLabel::QLabel_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLabel_DragEnterEvent(QLabel* self, QDragEnterEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->dragEnterEvent(event);
    } else {
        vqlabel->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QLabel_QBaseDragEnterEvent(QLabel* self, QDragEnterEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_DragEnterEvent_IsBase(true);
        vqlabel->dragEnterEvent(event);
    } else {
        vqlabel->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnDragEnterEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_DragEnterEvent_Callback(reinterpret_cast<VirtualQLabel::QLabel_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLabel_DragMoveEvent(QLabel* self, QDragMoveEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->dragMoveEvent(event);
    } else {
        vqlabel->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QLabel_QBaseDragMoveEvent(QLabel* self, QDragMoveEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_DragMoveEvent_IsBase(true);
        vqlabel->dragMoveEvent(event);
    } else {
        vqlabel->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnDragMoveEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_DragMoveEvent_Callback(reinterpret_cast<VirtualQLabel::QLabel_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLabel_DragLeaveEvent(QLabel* self, QDragLeaveEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->dragLeaveEvent(event);
    } else {
        vqlabel->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QLabel_QBaseDragLeaveEvent(QLabel* self, QDragLeaveEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_DragLeaveEvent_IsBase(true);
        vqlabel->dragLeaveEvent(event);
    } else {
        vqlabel->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnDragLeaveEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_DragLeaveEvent_Callback(reinterpret_cast<VirtualQLabel::QLabel_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLabel_DropEvent(QLabel* self, QDropEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->dropEvent(event);
    } else {
        vqlabel->dropEvent(event);
    }
}

// Base class handler implementation
void QLabel_QBaseDropEvent(QLabel* self, QDropEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_DropEvent_IsBase(true);
        vqlabel->dropEvent(event);
    } else {
        vqlabel->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnDropEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_DropEvent_Callback(reinterpret_cast<VirtualQLabel::QLabel_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLabel_ShowEvent(QLabel* self, QShowEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->showEvent(event);
    } else {
        vqlabel->showEvent(event);
    }
}

// Base class handler implementation
void QLabel_QBaseShowEvent(QLabel* self, QShowEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_ShowEvent_IsBase(true);
        vqlabel->showEvent(event);
    } else {
        vqlabel->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnShowEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_ShowEvent_Callback(reinterpret_cast<VirtualQLabel::QLabel_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLabel_HideEvent(QLabel* self, QHideEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->hideEvent(event);
    } else {
        vqlabel->hideEvent(event);
    }
}

// Base class handler implementation
void QLabel_QBaseHideEvent(QLabel* self, QHideEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_HideEvent_IsBase(true);
        vqlabel->hideEvent(event);
    } else {
        vqlabel->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnHideEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_HideEvent_Callback(reinterpret_cast<VirtualQLabel::QLabel_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLabel_NativeEvent(QLabel* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        return vqlabel->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqlabel->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QLabel_QBaseNativeEvent(QLabel* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_NativeEvent_IsBase(true);
        return vqlabel->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqlabel->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnNativeEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_NativeEvent_Callback(reinterpret_cast<VirtualQLabel::QLabel_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QLabel_Metric(const QLabel* self, int param1) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        return vqlabel->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqlabel->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QLabel_QBaseMetric(const QLabel* self, int param1) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        vqlabel->setQLabel_Metric_IsBase(true);
        return vqlabel->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqlabel->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnMetric(const QLabel* self, intptr_t slot) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        vqlabel->setQLabel_Metric_Callback(reinterpret_cast<VirtualQLabel::QLabel_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QLabel_InitPainter(const QLabel* self, QPainter* painter) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        vqlabel->initPainter(painter);
    } else {
        vqlabel->initPainter(painter);
    }
}

// Base class handler implementation
void QLabel_QBaseInitPainter(const QLabel* self, QPainter* painter) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        vqlabel->setQLabel_InitPainter_IsBase(true);
        vqlabel->initPainter(painter);
    } else {
        vqlabel->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnInitPainter(const QLabel* self, intptr_t slot) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        vqlabel->setQLabel_InitPainter_Callback(reinterpret_cast<VirtualQLabel::QLabel_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QLabel_Redirected(const QLabel* self, QPoint* offset) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        return vqlabel->redirected(offset);
    } else {
        return vqlabel->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QLabel_QBaseRedirected(const QLabel* self, QPoint* offset) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        vqlabel->setQLabel_Redirected_IsBase(true);
        return vqlabel->redirected(offset);
    } else {
        return vqlabel->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnRedirected(const QLabel* self, intptr_t slot) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        vqlabel->setQLabel_Redirected_Callback(reinterpret_cast<VirtualQLabel::QLabel_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QLabel_SharedPainter(const QLabel* self) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        return vqlabel->sharedPainter();
    } else {
        return vqlabel->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QLabel_QBaseSharedPainter(const QLabel* self) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        vqlabel->setQLabel_SharedPainter_IsBase(true);
        return vqlabel->sharedPainter();
    } else {
        return vqlabel->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnSharedPainter(const QLabel* self, intptr_t slot) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        vqlabel->setQLabel_SharedPainter_Callback(reinterpret_cast<VirtualQLabel::QLabel_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QLabel_InputMethodEvent(QLabel* self, QInputMethodEvent* param1) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->inputMethodEvent(param1);
    } else {
        vqlabel->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QLabel_QBaseInputMethodEvent(QLabel* self, QInputMethodEvent* param1) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_InputMethodEvent_IsBase(true);
        vqlabel->inputMethodEvent(param1);
    } else {
        vqlabel->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnInputMethodEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_InputMethodEvent_Callback(reinterpret_cast<VirtualQLabel::QLabel_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QLabel_InputMethodQuery(const QLabel* self, int param1) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        return new QVariant(vqlabel->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QLabel_QBaseInputMethodQuery(const QLabel* self, int param1) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        vqlabel->setQLabel_InputMethodQuery_IsBase(true);
        return new QVariant(vqlabel->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnInputMethodQuery(const QLabel* self, intptr_t slot) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        vqlabel->setQLabel_InputMethodQuery_Callback(reinterpret_cast<VirtualQLabel::QLabel_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLabel_EventFilter(QLabel* self, QObject* watched, QEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        return vqlabel->eventFilter(watched, event);
    } else {
        return vqlabel->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QLabel_QBaseEventFilter(QLabel* self, QObject* watched, QEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_EventFilter_IsBase(true);
        return vqlabel->eventFilter(watched, event);
    } else {
        return vqlabel->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnEventFilter(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_EventFilter_Callback(reinterpret_cast<VirtualQLabel::QLabel_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QLabel_TimerEvent(QLabel* self, QTimerEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->timerEvent(event);
    } else {
        vqlabel->timerEvent(event);
    }
}

// Base class handler implementation
void QLabel_QBaseTimerEvent(QLabel* self, QTimerEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_TimerEvent_IsBase(true);
        vqlabel->timerEvent(event);
    } else {
        vqlabel->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnTimerEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_TimerEvent_Callback(reinterpret_cast<VirtualQLabel::QLabel_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLabel_ChildEvent(QLabel* self, QChildEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->childEvent(event);
    } else {
        vqlabel->childEvent(event);
    }
}

// Base class handler implementation
void QLabel_QBaseChildEvent(QLabel* self, QChildEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_ChildEvent_IsBase(true);
        vqlabel->childEvent(event);
    } else {
        vqlabel->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnChildEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_ChildEvent_Callback(reinterpret_cast<VirtualQLabel::QLabel_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLabel_CustomEvent(QLabel* self, QEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->customEvent(event);
    } else {
        vqlabel->customEvent(event);
    }
}

// Base class handler implementation
void QLabel_QBaseCustomEvent(QLabel* self, QEvent* event) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_CustomEvent_IsBase(true);
        vqlabel->customEvent(event);
    } else {
        vqlabel->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnCustomEvent(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_CustomEvent_Callback(reinterpret_cast<VirtualQLabel::QLabel_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLabel_ConnectNotify(QLabel* self, QMetaMethod* signal) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->connectNotify(*signal);
    } else {
        vqlabel->connectNotify(*signal);
    }
}

// Base class handler implementation
void QLabel_QBaseConnectNotify(QLabel* self, QMetaMethod* signal) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_ConnectNotify_IsBase(true);
        vqlabel->connectNotify(*signal);
    } else {
        vqlabel->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnConnectNotify(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_ConnectNotify_Callback(reinterpret_cast<VirtualQLabel::QLabel_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QLabel_DisconnectNotify(QLabel* self, QMetaMethod* signal) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->disconnectNotify(*signal);
    } else {
        vqlabel->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QLabel_QBaseDisconnectNotify(QLabel* self, QMetaMethod* signal) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_DisconnectNotify_IsBase(true);
        vqlabel->disconnectNotify(*signal);
    } else {
        vqlabel->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnDisconnectNotify(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_DisconnectNotify_Callback(reinterpret_cast<VirtualQLabel::QLabel_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QLabel_DrawFrame(QLabel* self, QPainter* param1) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->drawFrame(param1);
    } else {
        vqlabel->drawFrame(param1);
    }
}

// Base class handler implementation
void QLabel_QBaseDrawFrame(QLabel* self, QPainter* param1) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_DrawFrame_IsBase(true);
        vqlabel->drawFrame(param1);
    } else {
        vqlabel->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnDrawFrame(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_DrawFrame_Callback(reinterpret_cast<VirtualQLabel::QLabel_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void QLabel_UpdateMicroFocus(QLabel* self) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->updateMicroFocus();
    } else {
        vqlabel->updateMicroFocus();
    }
}

// Base class handler implementation
void QLabel_QBaseUpdateMicroFocus(QLabel* self) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_UpdateMicroFocus_IsBase(true);
        vqlabel->updateMicroFocus();
    } else {
        vqlabel->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnUpdateMicroFocus(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQLabel::QLabel_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QLabel_Create(QLabel* self) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->create();
    } else {
        vqlabel->create();
    }
}

// Base class handler implementation
void QLabel_QBaseCreate(QLabel* self) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_Create_IsBase(true);
        vqlabel->create();
    } else {
        vqlabel->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnCreate(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_Create_Callback(reinterpret_cast<VirtualQLabel::QLabel_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QLabel_Destroy(QLabel* self) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->destroy();
    } else {
        vqlabel->destroy();
    }
}

// Base class handler implementation
void QLabel_QBaseDestroy(QLabel* self) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_Destroy_IsBase(true);
        vqlabel->destroy();
    } else {
        vqlabel->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnDestroy(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_Destroy_Callback(reinterpret_cast<VirtualQLabel::QLabel_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLabel_FocusNextChild(QLabel* self) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        return vqlabel->focusNextChild();
    } else {
        return vqlabel->focusNextChild();
    }
}

// Base class handler implementation
bool QLabel_QBaseFocusNextChild(QLabel* self) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_FocusNextChild_IsBase(true);
        return vqlabel->focusNextChild();
    } else {
        return vqlabel->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnFocusNextChild(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_FocusNextChild_Callback(reinterpret_cast<VirtualQLabel::QLabel_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLabel_FocusPreviousChild(QLabel* self) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        return vqlabel->focusPreviousChild();
    } else {
        return vqlabel->focusPreviousChild();
    }
}

// Base class handler implementation
bool QLabel_QBaseFocusPreviousChild(QLabel* self) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_FocusPreviousChild_IsBase(true);
        return vqlabel->focusPreviousChild();
    } else {
        return vqlabel->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnFocusPreviousChild(QLabel* self, intptr_t slot) {
    if (auto* vqlabel = dynamic_cast<VirtualQLabel*>(self)) {
        vqlabel->setQLabel_FocusPreviousChild_Callback(reinterpret_cast<VirtualQLabel::QLabel_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QLabel_Sender(const QLabel* self) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        return vqlabel->sender();
    } else {
        return vqlabel->sender();
    }
}

// Base class handler implementation
QObject* QLabel_QBaseSender(const QLabel* self) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        vqlabel->setQLabel_Sender_IsBase(true);
        return vqlabel->sender();
    } else {
        return vqlabel->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnSender(const QLabel* self, intptr_t slot) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        vqlabel->setQLabel_Sender_Callback(reinterpret_cast<VirtualQLabel::QLabel_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QLabel_SenderSignalIndex(const QLabel* self) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        return vqlabel->senderSignalIndex();
    } else {
        return vqlabel->senderSignalIndex();
    }
}

// Base class handler implementation
int QLabel_QBaseSenderSignalIndex(const QLabel* self) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        vqlabel->setQLabel_SenderSignalIndex_IsBase(true);
        return vqlabel->senderSignalIndex();
    } else {
        return vqlabel->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnSenderSignalIndex(const QLabel* self, intptr_t slot) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        vqlabel->setQLabel_SenderSignalIndex_Callback(reinterpret_cast<VirtualQLabel::QLabel_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QLabel_Receivers(const QLabel* self, const char* signal) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        return vqlabel->receivers(signal);
    } else {
        return vqlabel->receivers(signal);
    }
}

// Base class handler implementation
int QLabel_QBaseReceivers(const QLabel* self, const char* signal) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        vqlabel->setQLabel_Receivers_IsBase(true);
        return vqlabel->receivers(signal);
    } else {
        return vqlabel->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnReceivers(const QLabel* self, intptr_t slot) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        vqlabel->setQLabel_Receivers_Callback(reinterpret_cast<VirtualQLabel::QLabel_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLabel_IsSignalConnected(const QLabel* self, QMetaMethod* signal) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        return vqlabel->isSignalConnected(*signal);
    } else {
        return vqlabel->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QLabel_QBaseIsSignalConnected(const QLabel* self, QMetaMethod* signal) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        vqlabel->setQLabel_IsSignalConnected_IsBase(true);
        return vqlabel->isSignalConnected(*signal);
    } else {
        return vqlabel->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QLabel_OnIsSignalConnected(const QLabel* self, intptr_t slot) {
    if (auto* vqlabel = const_cast<VirtualQLabel*>(dynamic_cast<const VirtualQLabel*>(self))) {
        vqlabel->setQLabel_IsSignalConnected_Callback(reinterpret_cast<VirtualQLabel::QLabel_IsSignalConnected_Callback>(slot));
    }
}

void QLabel_Delete(QLabel* self) {
    delete self;
}
