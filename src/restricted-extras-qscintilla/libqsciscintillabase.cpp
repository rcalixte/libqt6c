#include <QAbstractScrollArea>
#include <QAction>
#include <QActionEvent>
#include <QAnyStringView>
#include <QBackingStore>
#include <QBindingStorage>
#include <QBitmap>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QColor>
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
#include <QImage>
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
#include <QMimeData>
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
#include <QScrollBar>
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
#include <QUrl>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <QWindow>
#include <qsciscintillabase.h>
#include "libqsciscintillabase.hpp"
#include "libqsciscintillabase.hxx"

QsciScintillaBase* QsciScintillaBase_new(QWidget* parent) {
    return new VirtualQsciScintillaBase(parent);
}

QsciScintillaBase* QsciScintillaBase_new2() {
    return new VirtualQsciScintillaBase();
}

QMetaObject* QsciScintillaBase_MetaObject(const QsciScintillaBase* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciScintillaBase_Metacast(QsciScintillaBase* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciScintillaBase_Metacall(QsciScintillaBase* self, int param1, int param2, void** param3) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QsciScintillaBase_OnMetacall(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_Metacall_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QsciScintillaBase_QBaseMetacall(QsciScintillaBase* self, int param1, int param2, void** param3) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_Metacall_IsBase(true);
        return vqsciscintillabase->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciScintillaBase_Tr(const char* s) {
    QString _ret = QsciScintillaBase::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QsciScintillaBase* QsciScintillaBase_Pool() {
    return QsciScintillaBase::pool();
}

void QsciScintillaBase_ReplaceHorizontalScrollBar(QsciScintillaBase* self, QScrollBar* scrollBar) {
    self->replaceHorizontalScrollBar(scrollBar);
}

void QsciScintillaBase_ReplaceVerticalScrollBar(QsciScintillaBase* self, QScrollBar* scrollBar) {
    self->replaceVerticalScrollBar(scrollBar);
}

long QsciScintillaBase_SendScintilla(const QsciScintillaBase* self, unsigned int msg) {
    return self->SendScintilla(static_cast<unsigned int>(msg));
}

long QsciScintillaBase_SendScintilla2(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam, void* lParam) {
    return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<unsigned long>(wParam), lParam);
}

long QsciScintillaBase_SendScintilla3(const QsciScintillaBase* self, unsigned int msg, uintptr_t wParam, const char* lParam) {
    return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<uintptr_t>(wParam), lParam);
}

long QsciScintillaBase_SendScintilla4(const QsciScintillaBase* self, unsigned int msg, const char* lParam) {
    return self->SendScintilla(static_cast<unsigned int>(msg), lParam);
}

long QsciScintillaBase_SendScintilla5(const QsciScintillaBase* self, unsigned int msg, const char* wParam, const char* lParam) {
    return self->SendScintilla(static_cast<unsigned int>(msg), wParam, lParam);
}

long QsciScintillaBase_SendScintilla6(const QsciScintillaBase* self, unsigned int msg, long wParam) {
    return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<long>(wParam));
}

long QsciScintillaBase_SendScintilla7(const QsciScintillaBase* self, unsigned int msg, int wParam) {
    return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<int>(wParam));
}

long QsciScintillaBase_SendScintilla8(const QsciScintillaBase* self, unsigned int msg, long cpMin, long cpMax, char* lpstrText) {
    return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<long>(cpMin), static_cast<long>(cpMax), lpstrText);
}

long QsciScintillaBase_SendScintilla9(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam, QColor* col) {
    return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<unsigned long>(wParam), *col);
}

long QsciScintillaBase_SendScintilla10(const QsciScintillaBase* self, unsigned int msg, QColor* col) {
    return self->SendScintilla(static_cast<unsigned int>(msg), *col);
}

long QsciScintillaBase_SendScintilla11(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam, QPainter* hdc, QRect* rc, long cpMin, long cpMax) {
    return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<unsigned long>(wParam), hdc, *rc, static_cast<long>(cpMin), static_cast<long>(cpMax));
}

long QsciScintillaBase_SendScintilla12(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam, QPixmap* lParam) {
    return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<unsigned long>(wParam), *lParam);
}

long QsciScintillaBase_SendScintilla13(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam, QImage* lParam) {
    return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<unsigned long>(wParam), *lParam);
}

void* QsciScintillaBase_SendScintillaPtrResult(const QsciScintillaBase* self, unsigned int msg) {
    return self->SendScintillaPtrResult(static_cast<unsigned int>(msg));
}

int QsciScintillaBase_CommandKey(int qt_key, int* modifiers) {
    return QsciScintillaBase::commandKey(static_cast<int>(qt_key), static_cast<int&>(*modifiers));
}

void QsciScintillaBase_QSCN_SELCHANGED(QsciScintillaBase* self, bool yes) {
    self->QSCN_SELCHANGED(yes);
}

void QsciScintillaBase_SCN_AUTOCCANCELLED(QsciScintillaBase* self) {
    self->SCN_AUTOCCANCELLED();
}

void QsciScintillaBase_SCN_AUTOCCHARDELETED(QsciScintillaBase* self) {
    self->SCN_AUTOCCHARDELETED();
}

void QsciScintillaBase_SCN_AUTOCCOMPLETED(QsciScintillaBase* self, const char* selection, int position, int ch, int method) {
    self->SCN_AUTOCCOMPLETED(selection, static_cast<int>(position), static_cast<int>(ch), static_cast<int>(method));
}

void QsciScintillaBase_SCN_AUTOCSELECTION(QsciScintillaBase* self, const char* selection, int position, int ch, int method) {
    self->SCN_AUTOCSELECTION(selection, static_cast<int>(position), static_cast<int>(ch), static_cast<int>(method));
}

void QsciScintillaBase_SCN_AUTOCSELECTION2(QsciScintillaBase* self, const char* selection, int position) {
    self->SCN_AUTOCSELECTION(selection, static_cast<int>(position));
}

void QsciScintillaBase_SCN_AUTOCSELECTIONCHANGE(QsciScintillaBase* self, const char* selection, int id, int position) {
    self->SCN_AUTOCSELECTIONCHANGE(selection, static_cast<int>(id), static_cast<int>(position));
}

void QsciScintillaBase_SCEN_CHANGE(QsciScintillaBase* self) {
    self->SCEN_CHANGE();
}

void QsciScintillaBase_SCN_CALLTIPCLICK(QsciScintillaBase* self, int direction) {
    self->SCN_CALLTIPCLICK(static_cast<int>(direction));
}

void QsciScintillaBase_SCN_CHARADDED(QsciScintillaBase* self, int charadded) {
    self->SCN_CHARADDED(static_cast<int>(charadded));
}

void QsciScintillaBase_SCN_DOUBLECLICK(QsciScintillaBase* self, int position, int line, int modifiers) {
    self->SCN_DOUBLECLICK(static_cast<int>(position), static_cast<int>(line), static_cast<int>(modifiers));
}

void QsciScintillaBase_SCN_DWELLEND(QsciScintillaBase* self, int position, int x, int y) {
    self->SCN_DWELLEND(static_cast<int>(position), static_cast<int>(x), static_cast<int>(y));
}

void QsciScintillaBase_SCN_DWELLSTART(QsciScintillaBase* self, int position, int x, int y) {
    self->SCN_DWELLSTART(static_cast<int>(position), static_cast<int>(x), static_cast<int>(y));
}

void QsciScintillaBase_SCN_FOCUSIN(QsciScintillaBase* self) {
    self->SCN_FOCUSIN();
}

void QsciScintillaBase_SCN_FOCUSOUT(QsciScintillaBase* self) {
    self->SCN_FOCUSOUT();
}

void QsciScintillaBase_SCN_HOTSPOTCLICK(QsciScintillaBase* self, int position, int modifiers) {
    self->SCN_HOTSPOTCLICK(static_cast<int>(position), static_cast<int>(modifiers));
}

void QsciScintillaBase_SCN_HOTSPOTDOUBLECLICK(QsciScintillaBase* self, int position, int modifiers) {
    self->SCN_HOTSPOTDOUBLECLICK(static_cast<int>(position), static_cast<int>(modifiers));
}

void QsciScintillaBase_SCN_HOTSPOTRELEASECLICK(QsciScintillaBase* self, int position, int modifiers) {
    self->SCN_HOTSPOTRELEASECLICK(static_cast<int>(position), static_cast<int>(modifiers));
}

void QsciScintillaBase_SCN_INDICATORCLICK(QsciScintillaBase* self, int position, int modifiers) {
    self->SCN_INDICATORCLICK(static_cast<int>(position), static_cast<int>(modifiers));
}

void QsciScintillaBase_SCN_INDICATORRELEASE(QsciScintillaBase* self, int position, int modifiers) {
    self->SCN_INDICATORRELEASE(static_cast<int>(position), static_cast<int>(modifiers));
}

void QsciScintillaBase_SCN_MACRORECORD(QsciScintillaBase* self, unsigned int param1, unsigned long param2, void* param3) {
    self->SCN_MACRORECORD(static_cast<unsigned int>(param1), static_cast<unsigned long>(param2), param3);
}

void QsciScintillaBase_SCN_MARGINCLICK(QsciScintillaBase* self, int position, int modifiers, int margin) {
    self->SCN_MARGINCLICK(static_cast<int>(position), static_cast<int>(modifiers), static_cast<int>(margin));
}

void QsciScintillaBase_SCN_MARGINRIGHTCLICK(QsciScintillaBase* self, int position, int modifiers, int margin) {
    self->SCN_MARGINRIGHTCLICK(static_cast<int>(position), static_cast<int>(modifiers), static_cast<int>(margin));
}

void QsciScintillaBase_SCN_MODIFIED(QsciScintillaBase* self, int param1, int param2, const char* param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10) {
    self->SCN_MODIFIED(static_cast<int>(param1), static_cast<int>(param2), param3, static_cast<int>(param4), static_cast<int>(param5), static_cast<int>(param6), static_cast<int>(param7), static_cast<int>(param8), static_cast<int>(param9), static_cast<int>(param10));
}

void QsciScintillaBase_SCN_MODIFYATTEMPTRO(QsciScintillaBase* self) {
    self->SCN_MODIFYATTEMPTRO();
}

void QsciScintillaBase_SCN_NEEDSHOWN(QsciScintillaBase* self, int param1, int param2) {
    self->SCN_NEEDSHOWN(static_cast<int>(param1), static_cast<int>(param2));
}

void QsciScintillaBase_SCN_PAINTED(QsciScintillaBase* self) {
    self->SCN_PAINTED();
}

void QsciScintillaBase_SCN_SAVEPOINTLEFT(QsciScintillaBase* self) {
    self->SCN_SAVEPOINTLEFT();
}

void QsciScintillaBase_SCN_SAVEPOINTREACHED(QsciScintillaBase* self) {
    self->SCN_SAVEPOINTREACHED();
}

void QsciScintillaBase_SCN_STYLENEEDED(QsciScintillaBase* self, int position) {
    self->SCN_STYLENEEDED(static_cast<int>(position));
}

void QsciScintillaBase_SCN_URIDROPPED(QsciScintillaBase* self, QUrl* url) {
    self->SCN_URIDROPPED(*url);
}

void QsciScintillaBase_SCN_UPDATEUI(QsciScintillaBase* self, int updated) {
    self->SCN_UPDATEUI(static_cast<int>(updated));
}

void QsciScintillaBase_SCN_USERLISTSELECTION(QsciScintillaBase* self, const char* selection, int id, int ch, int method, int position) {
    self->SCN_USERLISTSELECTION(selection, static_cast<int>(id), static_cast<int>(ch), static_cast<int>(method), static_cast<int>(position));
}

void QsciScintillaBase_SCN_USERLISTSELECTION2(QsciScintillaBase* self, const char* selection, int id, int ch, int method) {
    self->SCN_USERLISTSELECTION(selection, static_cast<int>(id), static_cast<int>(ch), static_cast<int>(method));
}

void QsciScintillaBase_SCN_USERLISTSELECTION3(QsciScintillaBase* self, const char* selection, int id) {
    self->SCN_USERLISTSELECTION(selection, static_cast<int>(id));
}

void QsciScintillaBase_SCN_ZOOM(QsciScintillaBase* self) {
    self->SCN_ZOOM();
}

libqt_string QsciScintillaBase_Tr2(const char* s, const char* c) {
    QString _ret = QsciScintillaBase::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QsciScintillaBase_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciScintillaBase::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

long QsciScintillaBase_SendScintilla22(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam) {
    return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<unsigned long>(wParam));
}

long QsciScintillaBase_SendScintilla32(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam, long lParam) {
    return self->SendScintilla(static_cast<unsigned int>(msg), static_cast<unsigned long>(wParam), static_cast<long>(lParam));
}

// Derived class handler implementation
bool QsciScintillaBase_CanInsertFromMimeData(const QsciScintillaBase* self, QMimeData* source) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        return vqsciscintillabase->canInsertFromMimeData(source);
    } else {
        return vqsciscintillabase->canInsertFromMimeData(source);
    }
}

// Base class handler implementation
bool QsciScintillaBase_QBaseCanInsertFromMimeData(const QsciScintillaBase* self, QMimeData* source) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        vqsciscintillabase->setQsciScintillaBase_CanInsertFromMimeData_IsBase(true);
        return vqsciscintillabase->canInsertFromMimeData(source);
    } else {
        return vqsciscintillabase->canInsertFromMimeData(source);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnCanInsertFromMimeData(const QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        vqsciscintillabase->setQsciScintillaBase_CanInsertFromMimeData_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_CanInsertFromMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QsciScintillaBase_FromMimeData(const QsciScintillaBase* self, QMimeData* source, bool* rectangular) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        QByteArray _qb = vqsciscintillabase->fromMimeData(source, *rectangular);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _qb.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = vqsciscintillabase->fromMimeData(source, *rectangular);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _qb.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QsciScintillaBase_QBaseFromMimeData(const QsciScintillaBase* self, QMimeData* source, bool* rectangular) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        vqsciscintillabase->setQsciScintillaBase_FromMimeData_IsBase(true);
        QByteArray _qb = vqsciscintillabase->fromMimeData(source, *rectangular);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _qb.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QByteArray _qb = vqsciscintillabase->fromMimeData(source, *rectangular);
        libqt_string _str;
        _str.len = _qb.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _qb.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnFromMimeData(const QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        vqsciscintillabase->setQsciScintillaBase_FromMimeData_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_FromMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* QsciScintillaBase_ToMimeData(const QsciScintillaBase* self, libqt_string text, bool rectangular) {
    QByteArray text_QByteArray(text.data, text.len);
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        return vqsciscintillabase->toMimeData(text_QByteArray, rectangular);
    } else {
        return vqsciscintillabase->toMimeData(text_QByteArray, rectangular);
    }
}

// Base class handler implementation
QMimeData* QsciScintillaBase_QBaseToMimeData(const QsciScintillaBase* self, libqt_string text, bool rectangular) {
    QByteArray text_QByteArray(text.data, text.len);
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        vqsciscintillabase->setQsciScintillaBase_ToMimeData_IsBase(true);
        return vqsciscintillabase->toMimeData(text_QByteArray, rectangular);
    } else {
        return vqsciscintillabase->toMimeData(text_QByteArray, rectangular);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnToMimeData(const QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        vqsciscintillabase->setQsciScintillaBase_ToMimeData_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_ToMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintillaBase_ChangeEvent(QsciScintillaBase* self, QEvent* e) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->changeEvent(e);
    } else {
        vqsciscintillabase->changeEvent(e);
    }
}

// Base class handler implementation
void QsciScintillaBase_QBaseChangeEvent(QsciScintillaBase* self, QEvent* e) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_ChangeEvent_IsBase(true);
        vqsciscintillabase->changeEvent(e);
    } else {
        vqsciscintillabase->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnChangeEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_ChangeEvent_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintillaBase_ContextMenuEvent(QsciScintillaBase* self, QContextMenuEvent* e) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->contextMenuEvent(e);
    } else {
        vqsciscintillabase->contextMenuEvent(e);
    }
}

// Base class handler implementation
void QsciScintillaBase_QBaseContextMenuEvent(QsciScintillaBase* self, QContextMenuEvent* e) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_ContextMenuEvent_IsBase(true);
        vqsciscintillabase->contextMenuEvent(e);
    } else {
        vqsciscintillabase->contextMenuEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnContextMenuEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_ContextMenuEvent_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintillaBase_DragEnterEvent(QsciScintillaBase* self, QDragEnterEvent* e) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->dragEnterEvent(e);
    } else {
        vqsciscintillabase->dragEnterEvent(e);
    }
}

// Base class handler implementation
void QsciScintillaBase_QBaseDragEnterEvent(QsciScintillaBase* self, QDragEnterEvent* e) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_DragEnterEvent_IsBase(true);
        vqsciscintillabase->dragEnterEvent(e);
    } else {
        vqsciscintillabase->dragEnterEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnDragEnterEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_DragEnterEvent_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintillaBase_DragLeaveEvent(QsciScintillaBase* self, QDragLeaveEvent* e) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->dragLeaveEvent(e);
    } else {
        vqsciscintillabase->dragLeaveEvent(e);
    }
}

// Base class handler implementation
void QsciScintillaBase_QBaseDragLeaveEvent(QsciScintillaBase* self, QDragLeaveEvent* e) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_DragLeaveEvent_IsBase(true);
        vqsciscintillabase->dragLeaveEvent(e);
    } else {
        vqsciscintillabase->dragLeaveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnDragLeaveEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_DragLeaveEvent_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintillaBase_DragMoveEvent(QsciScintillaBase* self, QDragMoveEvent* e) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->dragMoveEvent(e);
    } else {
        vqsciscintillabase->dragMoveEvent(e);
    }
}

// Base class handler implementation
void QsciScintillaBase_QBaseDragMoveEvent(QsciScintillaBase* self, QDragMoveEvent* e) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_DragMoveEvent_IsBase(true);
        vqsciscintillabase->dragMoveEvent(e);
    } else {
        vqsciscintillabase->dragMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnDragMoveEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_DragMoveEvent_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintillaBase_DropEvent(QsciScintillaBase* self, QDropEvent* e) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->dropEvent(e);
    } else {
        vqsciscintillabase->dropEvent(e);
    }
}

// Base class handler implementation
void QsciScintillaBase_QBaseDropEvent(QsciScintillaBase* self, QDropEvent* e) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_DropEvent_IsBase(true);
        vqsciscintillabase->dropEvent(e);
    } else {
        vqsciscintillabase->dropEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnDropEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_DropEvent_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintillaBase_FocusInEvent(QsciScintillaBase* self, QFocusEvent* e) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->focusInEvent(e);
    } else {
        vqsciscintillabase->focusInEvent(e);
    }
}

// Base class handler implementation
void QsciScintillaBase_QBaseFocusInEvent(QsciScintillaBase* self, QFocusEvent* e) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_FocusInEvent_IsBase(true);
        vqsciscintillabase->focusInEvent(e);
    } else {
        vqsciscintillabase->focusInEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnFocusInEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_FocusInEvent_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintillaBase_FocusOutEvent(QsciScintillaBase* self, QFocusEvent* e) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->focusOutEvent(e);
    } else {
        vqsciscintillabase->focusOutEvent(e);
    }
}

// Base class handler implementation
void QsciScintillaBase_QBaseFocusOutEvent(QsciScintillaBase* self, QFocusEvent* e) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_FocusOutEvent_IsBase(true);
        vqsciscintillabase->focusOutEvent(e);
    } else {
        vqsciscintillabase->focusOutEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnFocusOutEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_FocusOutEvent_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciScintillaBase_FocusNextPrevChild(QsciScintillaBase* self, bool next) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        return vqsciscintillabase->focusNextPrevChild(next);
    } else {
        return vqsciscintillabase->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QsciScintillaBase_QBaseFocusNextPrevChild(QsciScintillaBase* self, bool next) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_FocusNextPrevChild_IsBase(true);
        return vqsciscintillabase->focusNextPrevChild(next);
    } else {
        return vqsciscintillabase->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnFocusNextPrevChild(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintillaBase_KeyPressEvent(QsciScintillaBase* self, QKeyEvent* e) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->keyPressEvent(e);
    } else {
        vqsciscintillabase->keyPressEvent(e);
    }
}

// Base class handler implementation
void QsciScintillaBase_QBaseKeyPressEvent(QsciScintillaBase* self, QKeyEvent* e) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_KeyPressEvent_IsBase(true);
        vqsciscintillabase->keyPressEvent(e);
    } else {
        vqsciscintillabase->keyPressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnKeyPressEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_KeyPressEvent_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintillaBase_InputMethodEvent(QsciScintillaBase* self, QInputMethodEvent* event) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->inputMethodEvent(event);
    } else {
        vqsciscintillabase->inputMethodEvent(event);
    }
}

// Base class handler implementation
void QsciScintillaBase_QBaseInputMethodEvent(QsciScintillaBase* self, QInputMethodEvent* event) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_InputMethodEvent_IsBase(true);
        vqsciscintillabase->inputMethodEvent(event);
    } else {
        vqsciscintillabase->inputMethodEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnInputMethodEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_InputMethodEvent_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintillaBase_MouseDoubleClickEvent(QsciScintillaBase* self, QMouseEvent* e) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->mouseDoubleClickEvent(e);
    } else {
        vqsciscintillabase->mouseDoubleClickEvent(e);
    }
}

// Base class handler implementation
void QsciScintillaBase_QBaseMouseDoubleClickEvent(QsciScintillaBase* self, QMouseEvent* e) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_MouseDoubleClickEvent_IsBase(true);
        vqsciscintillabase->mouseDoubleClickEvent(e);
    } else {
        vqsciscintillabase->mouseDoubleClickEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnMouseDoubleClickEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintillaBase_MouseMoveEvent(QsciScintillaBase* self, QMouseEvent* e) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->mouseMoveEvent(e);
    } else {
        vqsciscintillabase->mouseMoveEvent(e);
    }
}

// Base class handler implementation
void QsciScintillaBase_QBaseMouseMoveEvent(QsciScintillaBase* self, QMouseEvent* e) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_MouseMoveEvent_IsBase(true);
        vqsciscintillabase->mouseMoveEvent(e);
    } else {
        vqsciscintillabase->mouseMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnMouseMoveEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_MouseMoveEvent_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintillaBase_MousePressEvent(QsciScintillaBase* self, QMouseEvent* e) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->mousePressEvent(e);
    } else {
        vqsciscintillabase->mousePressEvent(e);
    }
}

// Base class handler implementation
void QsciScintillaBase_QBaseMousePressEvent(QsciScintillaBase* self, QMouseEvent* e) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_MousePressEvent_IsBase(true);
        vqsciscintillabase->mousePressEvent(e);
    } else {
        vqsciscintillabase->mousePressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnMousePressEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_MousePressEvent_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintillaBase_MouseReleaseEvent(QsciScintillaBase* self, QMouseEvent* e) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->mouseReleaseEvent(e);
    } else {
        vqsciscintillabase->mouseReleaseEvent(e);
    }
}

// Base class handler implementation
void QsciScintillaBase_QBaseMouseReleaseEvent(QsciScintillaBase* self, QMouseEvent* e) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_MouseReleaseEvent_IsBase(true);
        vqsciscintillabase->mouseReleaseEvent(e);
    } else {
        vqsciscintillabase->mouseReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnMouseReleaseEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintillaBase_PaintEvent(QsciScintillaBase* self, QPaintEvent* e) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->paintEvent(e);
    } else {
        vqsciscintillabase->paintEvent(e);
    }
}

// Base class handler implementation
void QsciScintillaBase_QBasePaintEvent(QsciScintillaBase* self, QPaintEvent* e) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_PaintEvent_IsBase(true);
        vqsciscintillabase->paintEvent(e);
    } else {
        vqsciscintillabase->paintEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnPaintEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_PaintEvent_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintillaBase_ResizeEvent(QsciScintillaBase* self, QResizeEvent* e) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->resizeEvent(e);
    } else {
        vqsciscintillabase->resizeEvent(e);
    }
}

// Base class handler implementation
void QsciScintillaBase_QBaseResizeEvent(QsciScintillaBase* self, QResizeEvent* e) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_ResizeEvent_IsBase(true);
        vqsciscintillabase->resizeEvent(e);
    } else {
        vqsciscintillabase->resizeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnResizeEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_ResizeEvent_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintillaBase_ScrollContentsBy(QsciScintillaBase* self, int dx, int dy) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqsciscintillabase->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void QsciScintillaBase_QBaseScrollContentsBy(QsciScintillaBase* self, int dx, int dy) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_ScrollContentsBy_IsBase(true);
        vqsciscintillabase->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqsciscintillabase->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnScrollContentsBy(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_ScrollContentsBy_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_ScrollContentsBy_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QsciScintillaBase_MinimumSizeHint(const QsciScintillaBase* self) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        return new QSize(vqsciscintillabase->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QsciScintillaBase_QBaseMinimumSizeHint(const QsciScintillaBase* self) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        vqsciscintillabase->setQsciScintillaBase_MinimumSizeHint_IsBase(true);
        return new QSize(vqsciscintillabase->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnMinimumSizeHint(const QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        vqsciscintillabase->setQsciScintillaBase_MinimumSizeHint_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QsciScintillaBase_SizeHint(const QsciScintillaBase* self) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        return new QSize(vqsciscintillabase->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QsciScintillaBase_QBaseSizeHint(const QsciScintillaBase* self) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        vqsciscintillabase->setQsciScintillaBase_SizeHint_IsBase(true);
        return new QSize(vqsciscintillabase->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnSizeHint(const QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        vqsciscintillabase->setQsciScintillaBase_SizeHint_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintillaBase_SetupViewport(QsciScintillaBase* self, QWidget* viewport) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setupViewport(viewport);
    } else {
        vqsciscintillabase->setupViewport(viewport);
    }
}

// Base class handler implementation
void QsciScintillaBase_QBaseSetupViewport(QsciScintillaBase* self, QWidget* viewport) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_SetupViewport_IsBase(true);
        vqsciscintillabase->setupViewport(viewport);
    } else {
        vqsciscintillabase->setupViewport(viewport);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnSetupViewport(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_SetupViewport_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_SetupViewport_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciScintillaBase_EventFilter(QsciScintillaBase* self, QObject* param1, QEvent* param2) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        return vqsciscintillabase->eventFilter(param1, param2);
    } else {
        return vqsciscintillabase->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool QsciScintillaBase_QBaseEventFilter(QsciScintillaBase* self, QObject* param1, QEvent* param2) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_EventFilter_IsBase(true);
        return vqsciscintillabase->eventFilter(param1, param2);
    } else {
        return vqsciscintillabase->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnEventFilter(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_EventFilter_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciScintillaBase_Event(QsciScintillaBase* self, QEvent* param1) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        return vqsciscintillabase->event(param1);
    } else {
        return vqsciscintillabase->event(param1);
    }
}

// Base class handler implementation
bool QsciScintillaBase_QBaseEvent(QsciScintillaBase* self, QEvent* param1) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_Event_IsBase(true);
        return vqsciscintillabase->event(param1);
    } else {
        return vqsciscintillabase->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_Event_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciScintillaBase_ViewportEvent(QsciScintillaBase* self, QEvent* param1) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        return vqsciscintillabase->viewportEvent(param1);
    } else {
        return vqsciscintillabase->viewportEvent(param1);
    }
}

// Base class handler implementation
bool QsciScintillaBase_QBaseViewportEvent(QsciScintillaBase* self, QEvent* param1) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_ViewportEvent_IsBase(true);
        return vqsciscintillabase->viewportEvent(param1);
    } else {
        return vqsciscintillabase->viewportEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnViewportEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_ViewportEvent_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_ViewportEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintillaBase_WheelEvent(QsciScintillaBase* self, QWheelEvent* param1) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->wheelEvent(param1);
    } else {
        vqsciscintillabase->wheelEvent(param1);
    }
}

// Base class handler implementation
void QsciScintillaBase_QBaseWheelEvent(QsciScintillaBase* self, QWheelEvent* param1) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_WheelEvent_IsBase(true);
        vqsciscintillabase->wheelEvent(param1);
    } else {
        vqsciscintillabase->wheelEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnWheelEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_WheelEvent_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QsciScintillaBase_ViewportSizeHint(const QsciScintillaBase* self) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        return new QSize(vqsciscintillabase->viewportSizeHint());
    }
    return {};
}

// Base class handler implementation
QSize* QsciScintillaBase_QBaseViewportSizeHint(const QsciScintillaBase* self) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        vqsciscintillabase->setQsciScintillaBase_ViewportSizeHint_IsBase(true);
        return new QSize(vqsciscintillabase->viewportSizeHint());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnViewportSizeHint(const QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        vqsciscintillabase->setQsciScintillaBase_ViewportSizeHint_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_ViewportSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintillaBase_InitStyleOption(const QsciScintillaBase* self, QStyleOptionFrame* option) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        vqsciscintillabase->initStyleOption(option);
    } else {
        vqsciscintillabase->initStyleOption(option);
    }
}

// Base class handler implementation
void QsciScintillaBase_QBaseInitStyleOption(const QsciScintillaBase* self, QStyleOptionFrame* option) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        vqsciscintillabase->setQsciScintillaBase_InitStyleOption_IsBase(true);
        vqsciscintillabase->initStyleOption(option);
    } else {
        vqsciscintillabase->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnInitStyleOption(const QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        vqsciscintillabase->setQsciScintillaBase_InitStyleOption_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciScintillaBase_DevType(const QsciScintillaBase* self) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        return vqsciscintillabase->devType();
    } else {
        return vqsciscintillabase->devType();
    }
}

// Base class handler implementation
int QsciScintillaBase_QBaseDevType(const QsciScintillaBase* self) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        vqsciscintillabase->setQsciScintillaBase_DevType_IsBase(true);
        return vqsciscintillabase->devType();
    } else {
        return vqsciscintillabase->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnDevType(const QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        vqsciscintillabase->setQsciScintillaBase_DevType_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintillaBase_SetVisible(QsciScintillaBase* self, bool visible) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setVisible(visible);
    } else {
        vqsciscintillabase->setVisible(visible);
    }
}

// Base class handler implementation
void QsciScintillaBase_QBaseSetVisible(QsciScintillaBase* self, bool visible) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_SetVisible_IsBase(true);
        vqsciscintillabase->setVisible(visible);
    } else {
        vqsciscintillabase->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnSetVisible(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_SetVisible_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciScintillaBase_HeightForWidth(const QsciScintillaBase* self, int param1) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        return vqsciscintillabase->heightForWidth(static_cast<int>(param1));
    } else {
        return vqsciscintillabase->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QsciScintillaBase_QBaseHeightForWidth(const QsciScintillaBase* self, int param1) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        vqsciscintillabase->setQsciScintillaBase_HeightForWidth_IsBase(true);
        return vqsciscintillabase->heightForWidth(static_cast<int>(param1));
    } else {
        return vqsciscintillabase->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnHeightForWidth(const QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        vqsciscintillabase->setQsciScintillaBase_HeightForWidth_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciScintillaBase_HasHeightForWidth(const QsciScintillaBase* self) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        return vqsciscintillabase->hasHeightForWidth();
    } else {
        return vqsciscintillabase->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QsciScintillaBase_QBaseHasHeightForWidth(const QsciScintillaBase* self) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        vqsciscintillabase->setQsciScintillaBase_HasHeightForWidth_IsBase(true);
        return vqsciscintillabase->hasHeightForWidth();
    } else {
        return vqsciscintillabase->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnHasHeightForWidth(const QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        vqsciscintillabase->setQsciScintillaBase_HasHeightForWidth_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QsciScintillaBase_PaintEngine(const QsciScintillaBase* self) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        return vqsciscintillabase->paintEngine();
    } else {
        return vqsciscintillabase->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QsciScintillaBase_QBasePaintEngine(const QsciScintillaBase* self) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        vqsciscintillabase->setQsciScintillaBase_PaintEngine_IsBase(true);
        return vqsciscintillabase->paintEngine();
    } else {
        return vqsciscintillabase->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnPaintEngine(const QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        vqsciscintillabase->setQsciScintillaBase_PaintEngine_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintillaBase_KeyReleaseEvent(QsciScintillaBase* self, QKeyEvent* event) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->keyReleaseEvent(event);
    } else {
        vqsciscintillabase->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QsciScintillaBase_QBaseKeyReleaseEvent(QsciScintillaBase* self, QKeyEvent* event) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_KeyReleaseEvent_IsBase(true);
        vqsciscintillabase->keyReleaseEvent(event);
    } else {
        vqsciscintillabase->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnKeyReleaseEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintillaBase_EnterEvent(QsciScintillaBase* self, QEnterEvent* event) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->enterEvent(event);
    } else {
        vqsciscintillabase->enterEvent(event);
    }
}

// Base class handler implementation
void QsciScintillaBase_QBaseEnterEvent(QsciScintillaBase* self, QEnterEvent* event) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_EnterEvent_IsBase(true);
        vqsciscintillabase->enterEvent(event);
    } else {
        vqsciscintillabase->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnEnterEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_EnterEvent_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintillaBase_LeaveEvent(QsciScintillaBase* self, QEvent* event) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->leaveEvent(event);
    } else {
        vqsciscintillabase->leaveEvent(event);
    }
}

// Base class handler implementation
void QsciScintillaBase_QBaseLeaveEvent(QsciScintillaBase* self, QEvent* event) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_LeaveEvent_IsBase(true);
        vqsciscintillabase->leaveEvent(event);
    } else {
        vqsciscintillabase->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnLeaveEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_LeaveEvent_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintillaBase_MoveEvent(QsciScintillaBase* self, QMoveEvent* event) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->moveEvent(event);
    } else {
        vqsciscintillabase->moveEvent(event);
    }
}

// Base class handler implementation
void QsciScintillaBase_QBaseMoveEvent(QsciScintillaBase* self, QMoveEvent* event) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_MoveEvent_IsBase(true);
        vqsciscintillabase->moveEvent(event);
    } else {
        vqsciscintillabase->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnMoveEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_MoveEvent_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintillaBase_CloseEvent(QsciScintillaBase* self, QCloseEvent* event) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->closeEvent(event);
    } else {
        vqsciscintillabase->closeEvent(event);
    }
}

// Base class handler implementation
void QsciScintillaBase_QBaseCloseEvent(QsciScintillaBase* self, QCloseEvent* event) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_CloseEvent_IsBase(true);
        vqsciscintillabase->closeEvent(event);
    } else {
        vqsciscintillabase->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnCloseEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_CloseEvent_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintillaBase_TabletEvent(QsciScintillaBase* self, QTabletEvent* event) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->tabletEvent(event);
    } else {
        vqsciscintillabase->tabletEvent(event);
    }
}

// Base class handler implementation
void QsciScintillaBase_QBaseTabletEvent(QsciScintillaBase* self, QTabletEvent* event) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_TabletEvent_IsBase(true);
        vqsciscintillabase->tabletEvent(event);
    } else {
        vqsciscintillabase->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnTabletEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_TabletEvent_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintillaBase_ActionEvent(QsciScintillaBase* self, QActionEvent* event) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->actionEvent(event);
    } else {
        vqsciscintillabase->actionEvent(event);
    }
}

// Base class handler implementation
void QsciScintillaBase_QBaseActionEvent(QsciScintillaBase* self, QActionEvent* event) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_ActionEvent_IsBase(true);
        vqsciscintillabase->actionEvent(event);
    } else {
        vqsciscintillabase->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnActionEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_ActionEvent_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintillaBase_ShowEvent(QsciScintillaBase* self, QShowEvent* event) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->showEvent(event);
    } else {
        vqsciscintillabase->showEvent(event);
    }
}

// Base class handler implementation
void QsciScintillaBase_QBaseShowEvent(QsciScintillaBase* self, QShowEvent* event) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_ShowEvent_IsBase(true);
        vqsciscintillabase->showEvent(event);
    } else {
        vqsciscintillabase->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnShowEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_ShowEvent_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintillaBase_HideEvent(QsciScintillaBase* self, QHideEvent* event) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->hideEvent(event);
    } else {
        vqsciscintillabase->hideEvent(event);
    }
}

// Base class handler implementation
void QsciScintillaBase_QBaseHideEvent(QsciScintillaBase* self, QHideEvent* event) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_HideEvent_IsBase(true);
        vqsciscintillabase->hideEvent(event);
    } else {
        vqsciscintillabase->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnHideEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_HideEvent_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciScintillaBase_NativeEvent(QsciScintillaBase* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        return vqsciscintillabase->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqsciscintillabase->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QsciScintillaBase_QBaseNativeEvent(QsciScintillaBase* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_NativeEvent_IsBase(true);
        return vqsciscintillabase->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqsciscintillabase->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnNativeEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_NativeEvent_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciScintillaBase_Metric(const QsciScintillaBase* self, int param1) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        return vqsciscintillabase->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqsciscintillabase->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QsciScintillaBase_QBaseMetric(const QsciScintillaBase* self, int param1) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        vqsciscintillabase->setQsciScintillaBase_Metric_IsBase(true);
        return vqsciscintillabase->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqsciscintillabase->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnMetric(const QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        vqsciscintillabase->setQsciScintillaBase_Metric_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintillaBase_InitPainter(const QsciScintillaBase* self, QPainter* painter) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        vqsciscintillabase->initPainter(painter);
    } else {
        vqsciscintillabase->initPainter(painter);
    }
}

// Base class handler implementation
void QsciScintillaBase_QBaseInitPainter(const QsciScintillaBase* self, QPainter* painter) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        vqsciscintillabase->setQsciScintillaBase_InitPainter_IsBase(true);
        vqsciscintillabase->initPainter(painter);
    } else {
        vqsciscintillabase->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnInitPainter(const QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        vqsciscintillabase->setQsciScintillaBase_InitPainter_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QsciScintillaBase_Redirected(const QsciScintillaBase* self, QPoint* offset) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        return vqsciscintillabase->redirected(offset);
    } else {
        return vqsciscintillabase->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QsciScintillaBase_QBaseRedirected(const QsciScintillaBase* self, QPoint* offset) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        vqsciscintillabase->setQsciScintillaBase_Redirected_IsBase(true);
        return vqsciscintillabase->redirected(offset);
    } else {
        return vqsciscintillabase->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnRedirected(const QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        vqsciscintillabase->setQsciScintillaBase_Redirected_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QsciScintillaBase_SharedPainter(const QsciScintillaBase* self) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        return vqsciscintillabase->sharedPainter();
    } else {
        return vqsciscintillabase->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QsciScintillaBase_QBaseSharedPainter(const QsciScintillaBase* self) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        vqsciscintillabase->setQsciScintillaBase_SharedPainter_IsBase(true);
        return vqsciscintillabase->sharedPainter();
    } else {
        return vqsciscintillabase->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnSharedPainter(const QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        vqsciscintillabase->setQsciScintillaBase_SharedPainter_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintillaBase_TimerEvent(QsciScintillaBase* self, QTimerEvent* event) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->timerEvent(event);
    } else {
        vqsciscintillabase->timerEvent(event);
    }
}

// Base class handler implementation
void QsciScintillaBase_QBaseTimerEvent(QsciScintillaBase* self, QTimerEvent* event) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_TimerEvent_IsBase(true);
        vqsciscintillabase->timerEvent(event);
    } else {
        vqsciscintillabase->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnTimerEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_TimerEvent_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintillaBase_ChildEvent(QsciScintillaBase* self, QChildEvent* event) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->childEvent(event);
    } else {
        vqsciscintillabase->childEvent(event);
    }
}

// Base class handler implementation
void QsciScintillaBase_QBaseChildEvent(QsciScintillaBase* self, QChildEvent* event) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_ChildEvent_IsBase(true);
        vqsciscintillabase->childEvent(event);
    } else {
        vqsciscintillabase->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnChildEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_ChildEvent_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintillaBase_CustomEvent(QsciScintillaBase* self, QEvent* event) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->customEvent(event);
    } else {
        vqsciscintillabase->customEvent(event);
    }
}

// Base class handler implementation
void QsciScintillaBase_QBaseCustomEvent(QsciScintillaBase* self, QEvent* event) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_CustomEvent_IsBase(true);
        vqsciscintillabase->customEvent(event);
    } else {
        vqsciscintillabase->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnCustomEvent(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_CustomEvent_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintillaBase_ConnectNotify(QsciScintillaBase* self, QMetaMethod* signal) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->connectNotify(*signal);
    } else {
        vqsciscintillabase->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciScintillaBase_QBaseConnectNotify(QsciScintillaBase* self, QMetaMethod* signal) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_ConnectNotify_IsBase(true);
        vqsciscintillabase->connectNotify(*signal);
    } else {
        vqsciscintillabase->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnConnectNotify(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_ConnectNotify_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintillaBase_DisconnectNotify(QsciScintillaBase* self, QMetaMethod* signal) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->disconnectNotify(*signal);
    } else {
        vqsciscintillabase->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciScintillaBase_QBaseDisconnectNotify(QsciScintillaBase* self, QMetaMethod* signal) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_DisconnectNotify_IsBase(true);
        vqsciscintillabase->disconnectNotify(*signal);
    } else {
        vqsciscintillabase->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnDisconnectNotify(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintillaBase_SetScrollBars(QsciScintillaBase* self) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setScrollBars();
    } else {
        vqsciscintillabase->setScrollBars();
    }
}

// Base class handler implementation
void QsciScintillaBase_QBaseSetScrollBars(QsciScintillaBase* self) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_SetScrollBars_IsBase(true);
        vqsciscintillabase->setScrollBars();
    } else {
        vqsciscintillabase->setScrollBars();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnSetScrollBars(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_SetScrollBars_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_SetScrollBars_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciScintillaBase_ContextMenuNeeded(const QsciScintillaBase* self, int x, int y) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        return vqsciscintillabase->contextMenuNeeded(static_cast<int>(x), static_cast<int>(y));
    } else {
        return vqsciscintillabase->contextMenuNeeded(static_cast<int>(x), static_cast<int>(y));
    }
}

// Base class handler implementation
bool QsciScintillaBase_QBaseContextMenuNeeded(const QsciScintillaBase* self, int x, int y) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        vqsciscintillabase->setQsciScintillaBase_ContextMenuNeeded_IsBase(true);
        return vqsciscintillabase->contextMenuNeeded(static_cast<int>(x), static_cast<int>(y));
    } else {
        return vqsciscintillabase->contextMenuNeeded(static_cast<int>(x), static_cast<int>(y));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnContextMenuNeeded(const QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        vqsciscintillabase->setQsciScintillaBase_ContextMenuNeeded_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_ContextMenuNeeded_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintillaBase_SetViewportMargins(QsciScintillaBase* self, int left, int top, int right, int bottom) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        vqsciscintillabase->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Base class handler implementation
void QsciScintillaBase_QBaseSetViewportMargins(QsciScintillaBase* self, int left, int top, int right, int bottom) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_SetViewportMargins_IsBase(true);
        vqsciscintillabase->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        vqsciscintillabase->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnSetViewportMargins(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_SetViewportMargins_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_SetViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
QMargins* QsciScintillaBase_ViewportMargins(const QsciScintillaBase* self) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        return new QMargins(vqsciscintillabase->viewportMargins());
    }
    return {};
}

// Base class handler implementation
QMargins* QsciScintillaBase_QBaseViewportMargins(const QsciScintillaBase* self) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        vqsciscintillabase->setQsciScintillaBase_ViewportMargins_IsBase(true);
        return new QMargins(vqsciscintillabase->viewportMargins());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnViewportMargins(const QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        vqsciscintillabase->setQsciScintillaBase_ViewportMargins_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_ViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintillaBase_DrawFrame(QsciScintillaBase* self, QPainter* param1) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->drawFrame(param1);
    } else {
        vqsciscintillabase->drawFrame(param1);
    }
}

// Base class handler implementation
void QsciScintillaBase_QBaseDrawFrame(QsciScintillaBase* self, QPainter* param1) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_DrawFrame_IsBase(true);
        vqsciscintillabase->drawFrame(param1);
    } else {
        vqsciscintillabase->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnDrawFrame(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_DrawFrame_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintillaBase_UpdateMicroFocus(QsciScintillaBase* self) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->updateMicroFocus();
    } else {
        vqsciscintillabase->updateMicroFocus();
    }
}

// Base class handler implementation
void QsciScintillaBase_QBaseUpdateMicroFocus(QsciScintillaBase* self) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_UpdateMicroFocus_IsBase(true);
        vqsciscintillabase->updateMicroFocus();
    } else {
        vqsciscintillabase->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnUpdateMicroFocus(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintillaBase_Create(QsciScintillaBase* self) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->create();
    } else {
        vqsciscintillabase->create();
    }
}

// Base class handler implementation
void QsciScintillaBase_QBaseCreate(QsciScintillaBase* self) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_Create_IsBase(true);
        vqsciscintillabase->create();
    } else {
        vqsciscintillabase->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnCreate(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_Create_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciScintillaBase_Destroy(QsciScintillaBase* self) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->destroy();
    } else {
        vqsciscintillabase->destroy();
    }
}

// Base class handler implementation
void QsciScintillaBase_QBaseDestroy(QsciScintillaBase* self) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_Destroy_IsBase(true);
        vqsciscintillabase->destroy();
    } else {
        vqsciscintillabase->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnDestroy(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_Destroy_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciScintillaBase_FocusNextChild(QsciScintillaBase* self) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        return vqsciscintillabase->focusNextChild();
    } else {
        return vqsciscintillabase->focusNextChild();
    }
}

// Base class handler implementation
bool QsciScintillaBase_QBaseFocusNextChild(QsciScintillaBase* self) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_FocusNextChild_IsBase(true);
        return vqsciscintillabase->focusNextChild();
    } else {
        return vqsciscintillabase->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnFocusNextChild(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_FocusNextChild_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciScintillaBase_FocusPreviousChild(QsciScintillaBase* self) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        return vqsciscintillabase->focusPreviousChild();
    } else {
        return vqsciscintillabase->focusPreviousChild();
    }
}

// Base class handler implementation
bool QsciScintillaBase_QBaseFocusPreviousChild(QsciScintillaBase* self) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_FocusPreviousChild_IsBase(true);
        return vqsciscintillabase->focusPreviousChild();
    } else {
        return vqsciscintillabase->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnFocusPreviousChild(QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = dynamic_cast<VirtualQsciScintillaBase*>(self)) {
        vqsciscintillabase->setQsciScintillaBase_FocusPreviousChild_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciScintillaBase_Sender(const QsciScintillaBase* self) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        return vqsciscintillabase->sender();
    } else {
        return vqsciscintillabase->sender();
    }
}

// Base class handler implementation
QObject* QsciScintillaBase_QBaseSender(const QsciScintillaBase* self) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        vqsciscintillabase->setQsciScintillaBase_Sender_IsBase(true);
        return vqsciscintillabase->sender();
    } else {
        return vqsciscintillabase->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnSender(const QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        vqsciscintillabase->setQsciScintillaBase_Sender_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciScintillaBase_SenderSignalIndex(const QsciScintillaBase* self) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        return vqsciscintillabase->senderSignalIndex();
    } else {
        return vqsciscintillabase->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciScintillaBase_QBaseSenderSignalIndex(const QsciScintillaBase* self) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        vqsciscintillabase->setQsciScintillaBase_SenderSignalIndex_IsBase(true);
        return vqsciscintillabase->senderSignalIndex();
    } else {
        return vqsciscintillabase->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnSenderSignalIndex(const QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        vqsciscintillabase->setQsciScintillaBase_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciScintillaBase_Receivers(const QsciScintillaBase* self, const char* signal) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        return vqsciscintillabase->receivers(signal);
    } else {
        return vqsciscintillabase->receivers(signal);
    }
}

// Base class handler implementation
int QsciScintillaBase_QBaseReceivers(const QsciScintillaBase* self, const char* signal) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        vqsciscintillabase->setQsciScintillaBase_Receivers_IsBase(true);
        return vqsciscintillabase->receivers(signal);
    } else {
        return vqsciscintillabase->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnReceivers(const QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        vqsciscintillabase->setQsciScintillaBase_Receivers_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciScintillaBase_IsSignalConnected(const QsciScintillaBase* self, QMetaMethod* signal) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        return vqsciscintillabase->isSignalConnected(*signal);
    } else {
        return vqsciscintillabase->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciScintillaBase_QBaseIsSignalConnected(const QsciScintillaBase* self, QMetaMethod* signal) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        vqsciscintillabase->setQsciScintillaBase_IsSignalConnected_IsBase(true);
        return vqsciscintillabase->isSignalConnected(*signal);
    } else {
        return vqsciscintillabase->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciScintillaBase_OnIsSignalConnected(const QsciScintillaBase* self, intptr_t slot) {
    if (auto* vqsciscintillabase = const_cast<VirtualQsciScintillaBase*>(dynamic_cast<const VirtualQsciScintillaBase*>(self))) {
        vqsciscintillabase->setQsciScintillaBase_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciScintillaBase::QsciScintillaBase_IsSignalConnected_Callback>(slot));
    }
}

void QsciScintillaBase_Delete(QsciScintillaBase* self) {
    delete self;
}
