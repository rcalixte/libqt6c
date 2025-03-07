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
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QKeySequence>
#include <QLayout>
#include <QList>
#include <QLocale>
#include <QMargins>
#include <QMenu>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QMimeData>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPagedPaintDevice>
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
#include <QRegularExpression>
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
#include <QTextBrowser>
#include <QTextCharFormat>
#include <QTextCursor>
#include <QTextDocument>
#include <QTextEdit>
#define WORKAROUND_INNER_CLASS_DEFINITION_QTextEdit__ExtraSelection
#include <QThread>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <QWindow>
#include <qtextbrowser.h>
#include "libqtextbrowser.hpp"
#include "libqtextbrowser.hxx"

QTextBrowser* QTextBrowser_new(QWidget* parent) {
    return new VirtualQTextBrowser(parent);
}

QTextBrowser* QTextBrowser_new2() {
    return new VirtualQTextBrowser();
}

QMetaObject* QTextBrowser_MetaObject(const QTextBrowser* self) {
    return (QMetaObject*)self->metaObject();
}

void* QTextBrowser_Metacast(QTextBrowser* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QTextBrowser_Metacall(QTextBrowser* self, int param1, int param2, void** param3) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTextBrowser_OnMetacall(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_Metacall_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QTextBrowser_QBaseMetacall(QTextBrowser* self, int param1, int param2, void** param3) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_Metacall_IsBase(true);
        return vqtextbrowser->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QTextBrowser_Tr(const char* s) {
    QString _ret = QTextBrowser::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QUrl* QTextBrowser_Source(const QTextBrowser* self) {
    return new QUrl(self->source());
}

int QTextBrowser_SourceType(const QTextBrowser* self) {
    return static_cast<int>(self->sourceType());
}

libqt_list /* of libqt_string */ QTextBrowser_SearchPaths(const QTextBrowser* self) {
    QStringList _ret = self->searchPaths();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
        memcpy(_lv_str.data, _lv_b.data(), _lv_str.len);
        _lv_str.data[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

void QTextBrowser_SetSearchPaths(QTextBrowser* self, libqt_list /* of libqt_string */ paths) {
    QStringList paths_QList;
    paths_QList.reserve(paths.len);
    libqt_string* paths_arr = static_cast<libqt_string*>(paths.data.ptr);
    for (size_t i = 0; i < paths.len; ++i) {
        QString paths_arr_i_QString = QString::fromUtf8(paths_arr[i].data, paths_arr[i].len);
        paths_QList.push_back(paths_arr_i_QString);
    }
    self->setSearchPaths(paths_QList);
}

bool QTextBrowser_IsBackwardAvailable(const QTextBrowser* self) {
    return self->isBackwardAvailable();
}

bool QTextBrowser_IsForwardAvailable(const QTextBrowser* self) {
    return self->isForwardAvailable();
}

void QTextBrowser_ClearHistory(QTextBrowser* self) {
    self->clearHistory();
}

libqt_string QTextBrowser_HistoryTitle(const QTextBrowser* self, int param1) {
    QString _ret = self->historyTitle(static_cast<int>(param1));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QUrl* QTextBrowser_HistoryUrl(const QTextBrowser* self, int param1) {
    return new QUrl(self->historyUrl(static_cast<int>(param1)));
}

int QTextBrowser_BackwardHistoryCount(const QTextBrowser* self) {
    return self->backwardHistoryCount();
}

int QTextBrowser_ForwardHistoryCount(const QTextBrowser* self) {
    return self->forwardHistoryCount();
}

bool QTextBrowser_OpenExternalLinks(const QTextBrowser* self) {
    return self->openExternalLinks();
}

void QTextBrowser_SetOpenExternalLinks(QTextBrowser* self, bool open) {
    self->setOpenExternalLinks(open);
}

bool QTextBrowser_OpenLinks(const QTextBrowser* self) {
    return self->openLinks();
}

void QTextBrowser_SetOpenLinks(QTextBrowser* self, bool open) {
    self->setOpenLinks(open);
}

void QTextBrowser_SetSource(QTextBrowser* self, QUrl* name) {
    self->setSource(*name);
}

void QTextBrowser_BackwardAvailable(QTextBrowser* self, bool param1) {
    self->backwardAvailable(param1);
}

void QTextBrowser_Connect_BackwardAvailable(QTextBrowser* self, intptr_t slot) {
    void (*slotFunc)(QTextBrowser*, bool) = reinterpret_cast<void (*)(QTextBrowser*, bool)>(slot);
    QTextBrowser::connect(self, &QTextBrowser::backwardAvailable, [self, slotFunc](bool param1) {
        bool sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void QTextBrowser_ForwardAvailable(QTextBrowser* self, bool param1) {
    self->forwardAvailable(param1);
}

void QTextBrowser_Connect_ForwardAvailable(QTextBrowser* self, intptr_t slot) {
    void (*slotFunc)(QTextBrowser*, bool) = reinterpret_cast<void (*)(QTextBrowser*, bool)>(slot);
    QTextBrowser::connect(self, &QTextBrowser::forwardAvailable, [self, slotFunc](bool param1) {
        bool sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void QTextBrowser_HistoryChanged(QTextBrowser* self) {
    self->historyChanged();
}

void QTextBrowser_Connect_HistoryChanged(QTextBrowser* self, intptr_t slot) {
    void (*slotFunc)(QTextBrowser*) = reinterpret_cast<void (*)(QTextBrowser*)>(slot);
    QTextBrowser::connect(self, &QTextBrowser::historyChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QTextBrowser_SourceChanged(QTextBrowser* self, QUrl* param1) {
    self->sourceChanged(*param1);
}

void QTextBrowser_Connect_SourceChanged(QTextBrowser* self, intptr_t slot) {
    void (*slotFunc)(QTextBrowser*, QUrl*) = reinterpret_cast<void (*)(QTextBrowser*, QUrl*)>(slot);
    QTextBrowser::connect(self, &QTextBrowser::sourceChanged, [self, slotFunc](const QUrl& param1) {
        const QUrl& param1_ret = param1;
        // Cast returned reference into pointer
        QUrl* sigval1 = const_cast<QUrl*>(&param1_ret);
        slotFunc(self, sigval1);
    });
}

void QTextBrowser_Highlighted(QTextBrowser* self, QUrl* param1) {
    self->highlighted(*param1);
}

void QTextBrowser_Connect_Highlighted(QTextBrowser* self, intptr_t slot) {
    void (*slotFunc)(QTextBrowser*, QUrl*) = reinterpret_cast<void (*)(QTextBrowser*, QUrl*)>(slot);
    QTextBrowser::connect(self, &QTextBrowser::highlighted, [self, slotFunc](const QUrl& param1) {
        const QUrl& param1_ret = param1;
        // Cast returned reference into pointer
        QUrl* sigval1 = const_cast<QUrl*>(&param1_ret);
        slotFunc(self, sigval1);
    });
}

void QTextBrowser_AnchorClicked(QTextBrowser* self, QUrl* param1) {
    self->anchorClicked(*param1);
}

void QTextBrowser_Connect_AnchorClicked(QTextBrowser* self, intptr_t slot) {
    void (*slotFunc)(QTextBrowser*, QUrl*) = reinterpret_cast<void (*)(QTextBrowser*, QUrl*)>(slot);
    QTextBrowser::connect(self, &QTextBrowser::anchorClicked, [self, slotFunc](const QUrl& param1) {
        const QUrl& param1_ret = param1;
        // Cast returned reference into pointer
        QUrl* sigval1 = const_cast<QUrl*>(&param1_ret);
        slotFunc(self, sigval1);
    });
}

libqt_string QTextBrowser_Tr2(const char* s, const char* c) {
    QString _ret = QTextBrowser::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QTextBrowser_Tr3(const char* s, const char* c, int n) {
    QString _ret = QTextBrowser::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QTextBrowser_SetSource2(QTextBrowser* self, QUrl* name, int typeVal) {
    self->setSource(*name, static_cast<QTextDocument::ResourceType>(typeVal));
}

// Derived class handler implementation
QVariant* QTextBrowser_LoadResource(QTextBrowser* self, int typeVal, QUrl* name) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        return new QVariant(vqtextbrowser->loadResource(static_cast<int>(typeVal), *name));
    } else {
        return new QVariant(self->loadResource(static_cast<int>(typeVal), *name));
    }
}

// Base class handler implementation
QVariant* QTextBrowser_QBaseLoadResource(QTextBrowser* self, int typeVal, QUrl* name) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_LoadResource_IsBase(true);
        return new QVariant(vqtextbrowser->loadResource(static_cast<int>(typeVal), *name));
    } else {
        return new QVariant(self->loadResource(static_cast<int>(typeVal), *name));
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnLoadResource(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_LoadResource_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_LoadResource_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_Backward(QTextBrowser* self) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->backward();
    } else {
        vqtextbrowser->backward();
    }
}

// Base class handler implementation
void QTextBrowser_QBaseBackward(QTextBrowser* self) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_Backward_IsBase(true);
        vqtextbrowser->backward();
    } else {
        vqtextbrowser->backward();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnBackward(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_Backward_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_Backward_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_Forward(QTextBrowser* self) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->forward();
    } else {
        vqtextbrowser->forward();
    }
}

// Base class handler implementation
void QTextBrowser_QBaseForward(QTextBrowser* self) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_Forward_IsBase(true);
        vqtextbrowser->forward();
    } else {
        vqtextbrowser->forward();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnForward(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_Forward_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_Forward_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_Home(QTextBrowser* self) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->home();
    } else {
        vqtextbrowser->home();
    }
}

// Base class handler implementation
void QTextBrowser_QBaseHome(QTextBrowser* self) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_Home_IsBase(true);
        vqtextbrowser->home();
    } else {
        vqtextbrowser->home();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnHome(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_Home_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_Home_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_Reload(QTextBrowser* self) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->reload();
    } else {
        vqtextbrowser->reload();
    }
}

// Base class handler implementation
void QTextBrowser_QBaseReload(QTextBrowser* self) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_Reload_IsBase(true);
        vqtextbrowser->reload();
    } else {
        vqtextbrowser->reload();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnReload(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_Reload_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_Reload_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTextBrowser_Event(QTextBrowser* self, QEvent* e) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        return vqtextbrowser->event(e);
    } else {
        return vqtextbrowser->event(e);
    }
}

// Base class handler implementation
bool QTextBrowser_QBaseEvent(QTextBrowser* self, QEvent* e) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_Event_IsBase(true);
        return vqtextbrowser->event(e);
    } else {
        return vqtextbrowser->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_Event_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_KeyPressEvent(QTextBrowser* self, QKeyEvent* ev) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->keyPressEvent(ev);
    } else {
        vqtextbrowser->keyPressEvent(ev);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseKeyPressEvent(QTextBrowser* self, QKeyEvent* ev) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_KeyPressEvent_IsBase(true);
        vqtextbrowser->keyPressEvent(ev);
    } else {
        vqtextbrowser->keyPressEvent(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnKeyPressEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_KeyPressEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_MouseMoveEvent(QTextBrowser* self, QMouseEvent* ev) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->mouseMoveEvent(ev);
    } else {
        vqtextbrowser->mouseMoveEvent(ev);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseMouseMoveEvent(QTextBrowser* self, QMouseEvent* ev) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_MouseMoveEvent_IsBase(true);
        vqtextbrowser->mouseMoveEvent(ev);
    } else {
        vqtextbrowser->mouseMoveEvent(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnMouseMoveEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_MouseMoveEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_MousePressEvent(QTextBrowser* self, QMouseEvent* ev) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->mousePressEvent(ev);
    } else {
        vqtextbrowser->mousePressEvent(ev);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseMousePressEvent(QTextBrowser* self, QMouseEvent* ev) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_MousePressEvent_IsBase(true);
        vqtextbrowser->mousePressEvent(ev);
    } else {
        vqtextbrowser->mousePressEvent(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnMousePressEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_MousePressEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_MouseReleaseEvent(QTextBrowser* self, QMouseEvent* ev) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->mouseReleaseEvent(ev);
    } else {
        vqtextbrowser->mouseReleaseEvent(ev);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseMouseReleaseEvent(QTextBrowser* self, QMouseEvent* ev) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_MouseReleaseEvent_IsBase(true);
        vqtextbrowser->mouseReleaseEvent(ev);
    } else {
        vqtextbrowser->mouseReleaseEvent(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnMouseReleaseEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_FocusOutEvent(QTextBrowser* self, QFocusEvent* ev) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->focusOutEvent(ev);
    } else {
        vqtextbrowser->focusOutEvent(ev);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseFocusOutEvent(QTextBrowser* self, QFocusEvent* ev) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_FocusOutEvent_IsBase(true);
        vqtextbrowser->focusOutEvent(ev);
    } else {
        vqtextbrowser->focusOutEvent(ev);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnFocusOutEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_FocusOutEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTextBrowser_FocusNextPrevChild(QTextBrowser* self, bool next) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        return vqtextbrowser->focusNextPrevChild(next);
    } else {
        return vqtextbrowser->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QTextBrowser_QBaseFocusNextPrevChild(QTextBrowser* self, bool next) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_FocusNextPrevChild_IsBase(true);
        return vqtextbrowser->focusNextPrevChild(next);
    } else {
        return vqtextbrowser->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnFocusNextPrevChild(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_PaintEvent(QTextBrowser* self, QPaintEvent* e) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->paintEvent(e);
    } else {
        vqtextbrowser->paintEvent(e);
    }
}

// Base class handler implementation
void QTextBrowser_QBasePaintEvent(QTextBrowser* self, QPaintEvent* e) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_PaintEvent_IsBase(true);
        vqtextbrowser->paintEvent(e);
    } else {
        vqtextbrowser->paintEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnPaintEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_PaintEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_DoSetSource(QTextBrowser* self, QUrl* name, int typeVal) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->doSetSource(*name, static_cast<QTextDocument::ResourceType>(typeVal));
    } else {
        vqtextbrowser->doSetSource(*name, static_cast<QTextDocument::ResourceType>(typeVal));
    }
}

// Base class handler implementation
void QTextBrowser_QBaseDoSetSource(QTextBrowser* self, QUrl* name, int typeVal) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_DoSetSource_IsBase(true);
        vqtextbrowser->doSetSource(*name, static_cast<QTextDocument::ResourceType>(typeVal));
    } else {
        vqtextbrowser->doSetSource(*name, static_cast<QTextDocument::ResourceType>(typeVal));
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnDoSetSource(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_DoSetSource_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_DoSetSource_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QTextBrowser_InputMethodQuery(const QTextBrowser* self, int property) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        return new QVariant(vqtextbrowser->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    }
}

// Base class handler implementation
QVariant* QTextBrowser_QBaseInputMethodQuery(const QTextBrowser* self, int property) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        vqtextbrowser->setQTextBrowser_InputMethodQuery_IsBase(true);
        return new QVariant(vqtextbrowser->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnInputMethodQuery(const QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        vqtextbrowser->setQTextBrowser_InputMethodQuery_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_TimerEvent(QTextBrowser* self, QTimerEvent* e) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->timerEvent(e);
    } else {
        vqtextbrowser->timerEvent(e);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseTimerEvent(QTextBrowser* self, QTimerEvent* e) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_TimerEvent_IsBase(true);
        vqtextbrowser->timerEvent(e);
    } else {
        vqtextbrowser->timerEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnTimerEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_TimerEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_KeyReleaseEvent(QTextBrowser* self, QKeyEvent* e) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->keyReleaseEvent(e);
    } else {
        vqtextbrowser->keyReleaseEvent(e);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseKeyReleaseEvent(QTextBrowser* self, QKeyEvent* e) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_KeyReleaseEvent_IsBase(true);
        vqtextbrowser->keyReleaseEvent(e);
    } else {
        vqtextbrowser->keyReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnKeyReleaseEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_ResizeEvent(QTextBrowser* self, QResizeEvent* e) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->resizeEvent(e);
    } else {
        vqtextbrowser->resizeEvent(e);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseResizeEvent(QTextBrowser* self, QResizeEvent* e) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_ResizeEvent_IsBase(true);
        vqtextbrowser->resizeEvent(e);
    } else {
        vqtextbrowser->resizeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnResizeEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_ResizeEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_MouseDoubleClickEvent(QTextBrowser* self, QMouseEvent* e) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->mouseDoubleClickEvent(e);
    } else {
        vqtextbrowser->mouseDoubleClickEvent(e);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseMouseDoubleClickEvent(QTextBrowser* self, QMouseEvent* e) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_MouseDoubleClickEvent_IsBase(true);
        vqtextbrowser->mouseDoubleClickEvent(e);
    } else {
        vqtextbrowser->mouseDoubleClickEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnMouseDoubleClickEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_ContextMenuEvent(QTextBrowser* self, QContextMenuEvent* e) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->contextMenuEvent(e);
    } else {
        vqtextbrowser->contextMenuEvent(e);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseContextMenuEvent(QTextBrowser* self, QContextMenuEvent* e) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_ContextMenuEvent_IsBase(true);
        vqtextbrowser->contextMenuEvent(e);
    } else {
        vqtextbrowser->contextMenuEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnContextMenuEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_ContextMenuEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_DragEnterEvent(QTextBrowser* self, QDragEnterEvent* e) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->dragEnterEvent(e);
    } else {
        vqtextbrowser->dragEnterEvent(e);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseDragEnterEvent(QTextBrowser* self, QDragEnterEvent* e) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_DragEnterEvent_IsBase(true);
        vqtextbrowser->dragEnterEvent(e);
    } else {
        vqtextbrowser->dragEnterEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnDragEnterEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_DragEnterEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_DragLeaveEvent(QTextBrowser* self, QDragLeaveEvent* e) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->dragLeaveEvent(e);
    } else {
        vqtextbrowser->dragLeaveEvent(e);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseDragLeaveEvent(QTextBrowser* self, QDragLeaveEvent* e) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_DragLeaveEvent_IsBase(true);
        vqtextbrowser->dragLeaveEvent(e);
    } else {
        vqtextbrowser->dragLeaveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnDragLeaveEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_DragLeaveEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_DragMoveEvent(QTextBrowser* self, QDragMoveEvent* e) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->dragMoveEvent(e);
    } else {
        vqtextbrowser->dragMoveEvent(e);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseDragMoveEvent(QTextBrowser* self, QDragMoveEvent* e) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_DragMoveEvent_IsBase(true);
        vqtextbrowser->dragMoveEvent(e);
    } else {
        vqtextbrowser->dragMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnDragMoveEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_DragMoveEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_DropEvent(QTextBrowser* self, QDropEvent* e) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->dropEvent(e);
    } else {
        vqtextbrowser->dropEvent(e);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseDropEvent(QTextBrowser* self, QDropEvent* e) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_DropEvent_IsBase(true);
        vqtextbrowser->dropEvent(e);
    } else {
        vqtextbrowser->dropEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnDropEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_DropEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_FocusInEvent(QTextBrowser* self, QFocusEvent* e) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->focusInEvent(e);
    } else {
        vqtextbrowser->focusInEvent(e);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseFocusInEvent(QTextBrowser* self, QFocusEvent* e) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_FocusInEvent_IsBase(true);
        vqtextbrowser->focusInEvent(e);
    } else {
        vqtextbrowser->focusInEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnFocusInEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_FocusInEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_ShowEvent(QTextBrowser* self, QShowEvent* param1) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->showEvent(param1);
    } else {
        vqtextbrowser->showEvent(param1);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseShowEvent(QTextBrowser* self, QShowEvent* param1) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_ShowEvent_IsBase(true);
        vqtextbrowser->showEvent(param1);
    } else {
        vqtextbrowser->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnShowEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_ShowEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_ChangeEvent(QTextBrowser* self, QEvent* e) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->changeEvent(e);
    } else {
        vqtextbrowser->changeEvent(e);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseChangeEvent(QTextBrowser* self, QEvent* e) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_ChangeEvent_IsBase(true);
        vqtextbrowser->changeEvent(e);
    } else {
        vqtextbrowser->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnChangeEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_ChangeEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_WheelEvent(QTextBrowser* self, QWheelEvent* e) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->wheelEvent(e);
    } else {
        vqtextbrowser->wheelEvent(e);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseWheelEvent(QTextBrowser* self, QWheelEvent* e) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_WheelEvent_IsBase(true);
        vqtextbrowser->wheelEvent(e);
    } else {
        vqtextbrowser->wheelEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnWheelEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_WheelEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* QTextBrowser_CreateMimeDataFromSelection(const QTextBrowser* self) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        return vqtextbrowser->createMimeDataFromSelection();
    } else {
        return vqtextbrowser->createMimeDataFromSelection();
    }
}

// Base class handler implementation
QMimeData* QTextBrowser_QBaseCreateMimeDataFromSelection(const QTextBrowser* self) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        vqtextbrowser->setQTextBrowser_CreateMimeDataFromSelection_IsBase(true);
        return vqtextbrowser->createMimeDataFromSelection();
    } else {
        return vqtextbrowser->createMimeDataFromSelection();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnCreateMimeDataFromSelection(const QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        vqtextbrowser->setQTextBrowser_CreateMimeDataFromSelection_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_CreateMimeDataFromSelection_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTextBrowser_CanInsertFromMimeData(const QTextBrowser* self, QMimeData* source) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        return vqtextbrowser->canInsertFromMimeData(source);
    } else {
        return vqtextbrowser->canInsertFromMimeData(source);
    }
}

// Base class handler implementation
bool QTextBrowser_QBaseCanInsertFromMimeData(const QTextBrowser* self, QMimeData* source) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        vqtextbrowser->setQTextBrowser_CanInsertFromMimeData_IsBase(true);
        return vqtextbrowser->canInsertFromMimeData(source);
    } else {
        return vqtextbrowser->canInsertFromMimeData(source);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnCanInsertFromMimeData(const QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        vqtextbrowser->setQTextBrowser_CanInsertFromMimeData_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_CanInsertFromMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_InsertFromMimeData(QTextBrowser* self, QMimeData* source) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->insertFromMimeData(source);
    } else {
        vqtextbrowser->insertFromMimeData(source);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseInsertFromMimeData(QTextBrowser* self, QMimeData* source) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_InsertFromMimeData_IsBase(true);
        vqtextbrowser->insertFromMimeData(source);
    } else {
        vqtextbrowser->insertFromMimeData(source);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnInsertFromMimeData(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_InsertFromMimeData_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_InsertFromMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_InputMethodEvent(QTextBrowser* self, QInputMethodEvent* param1) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->inputMethodEvent(param1);
    } else {
        vqtextbrowser->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseInputMethodEvent(QTextBrowser* self, QInputMethodEvent* param1) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_InputMethodEvent_IsBase(true);
        vqtextbrowser->inputMethodEvent(param1);
    } else {
        vqtextbrowser->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnInputMethodEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_InputMethodEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_ScrollContentsBy(QTextBrowser* self, int dx, int dy) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqtextbrowser->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void QTextBrowser_QBaseScrollContentsBy(QTextBrowser* self, int dx, int dy) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_ScrollContentsBy_IsBase(true);
        vqtextbrowser->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqtextbrowser->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnScrollContentsBy(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_ScrollContentsBy_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_ScrollContentsBy_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_DoSetTextCursor(QTextBrowser* self, QTextCursor* cursor) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->doSetTextCursor(*cursor);
    } else {
        vqtextbrowser->doSetTextCursor(*cursor);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseDoSetTextCursor(QTextBrowser* self, QTextCursor* cursor) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_DoSetTextCursor_IsBase(true);
        vqtextbrowser->doSetTextCursor(*cursor);
    } else {
        vqtextbrowser->doSetTextCursor(*cursor);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnDoSetTextCursor(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_DoSetTextCursor_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_DoSetTextCursor_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QTextBrowser_MinimumSizeHint(const QTextBrowser* self) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        return new QSize(vqtextbrowser->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QTextBrowser_QBaseMinimumSizeHint(const QTextBrowser* self) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        vqtextbrowser->setQTextBrowser_MinimumSizeHint_IsBase(true);
        return new QSize(vqtextbrowser->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnMinimumSizeHint(const QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        vqtextbrowser->setQTextBrowser_MinimumSizeHint_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QTextBrowser_SizeHint(const QTextBrowser* self) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        return new QSize(vqtextbrowser->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QTextBrowser_QBaseSizeHint(const QTextBrowser* self) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        vqtextbrowser->setQTextBrowser_SizeHint_IsBase(true);
        return new QSize(vqtextbrowser->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnSizeHint(const QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        vqtextbrowser->setQTextBrowser_SizeHint_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_SetupViewport(QTextBrowser* self, QWidget* viewport) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setupViewport(viewport);
    } else {
        vqtextbrowser->setupViewport(viewport);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseSetupViewport(QTextBrowser* self, QWidget* viewport) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_SetupViewport_IsBase(true);
        vqtextbrowser->setupViewport(viewport);
    } else {
        vqtextbrowser->setupViewport(viewport);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnSetupViewport(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_SetupViewport_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_SetupViewport_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTextBrowser_EventFilter(QTextBrowser* self, QObject* param1, QEvent* param2) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        return vqtextbrowser->eventFilter(param1, param2);
    } else {
        return vqtextbrowser->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool QTextBrowser_QBaseEventFilter(QTextBrowser* self, QObject* param1, QEvent* param2) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_EventFilter_IsBase(true);
        return vqtextbrowser->eventFilter(param1, param2);
    } else {
        return vqtextbrowser->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnEventFilter(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_EventFilter_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTextBrowser_ViewportEvent(QTextBrowser* self, QEvent* param1) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        return vqtextbrowser->viewportEvent(param1);
    } else {
        return vqtextbrowser->viewportEvent(param1);
    }
}

// Base class handler implementation
bool QTextBrowser_QBaseViewportEvent(QTextBrowser* self, QEvent* param1) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_ViewportEvent_IsBase(true);
        return vqtextbrowser->viewportEvent(param1);
    } else {
        return vqtextbrowser->viewportEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnViewportEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_ViewportEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_ViewportEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QTextBrowser_ViewportSizeHint(const QTextBrowser* self) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        return new QSize(vqtextbrowser->viewportSizeHint());
    }
    return {};
}

// Base class handler implementation
QSize* QTextBrowser_QBaseViewportSizeHint(const QTextBrowser* self) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        vqtextbrowser->setQTextBrowser_ViewportSizeHint_IsBase(true);
        return new QSize(vqtextbrowser->viewportSizeHint());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnViewportSizeHint(const QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        vqtextbrowser->setQTextBrowser_ViewportSizeHint_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_ViewportSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_InitStyleOption(const QTextBrowser* self, QStyleOptionFrame* option) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        vqtextbrowser->initStyleOption(option);
    } else {
        vqtextbrowser->initStyleOption(option);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseInitStyleOption(const QTextBrowser* self, QStyleOptionFrame* option) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        vqtextbrowser->setQTextBrowser_InitStyleOption_IsBase(true);
        vqtextbrowser->initStyleOption(option);
    } else {
        vqtextbrowser->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnInitStyleOption(const QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        vqtextbrowser->setQTextBrowser_InitStyleOption_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QTextBrowser_DevType(const QTextBrowser* self) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        return vqtextbrowser->devType();
    } else {
        return vqtextbrowser->devType();
    }
}

// Base class handler implementation
int QTextBrowser_QBaseDevType(const QTextBrowser* self) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        vqtextbrowser->setQTextBrowser_DevType_IsBase(true);
        return vqtextbrowser->devType();
    } else {
        return vqtextbrowser->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnDevType(const QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        vqtextbrowser->setQTextBrowser_DevType_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_SetVisible(QTextBrowser* self, bool visible) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setVisible(visible);
    } else {
        vqtextbrowser->setVisible(visible);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseSetVisible(QTextBrowser* self, bool visible) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_SetVisible_IsBase(true);
        vqtextbrowser->setVisible(visible);
    } else {
        vqtextbrowser->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnSetVisible(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_SetVisible_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QTextBrowser_HeightForWidth(const QTextBrowser* self, int param1) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        return vqtextbrowser->heightForWidth(static_cast<int>(param1));
    } else {
        return vqtextbrowser->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QTextBrowser_QBaseHeightForWidth(const QTextBrowser* self, int param1) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        vqtextbrowser->setQTextBrowser_HeightForWidth_IsBase(true);
        return vqtextbrowser->heightForWidth(static_cast<int>(param1));
    } else {
        return vqtextbrowser->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnHeightForWidth(const QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        vqtextbrowser->setQTextBrowser_HeightForWidth_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTextBrowser_HasHeightForWidth(const QTextBrowser* self) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        return vqtextbrowser->hasHeightForWidth();
    } else {
        return vqtextbrowser->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QTextBrowser_QBaseHasHeightForWidth(const QTextBrowser* self) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        vqtextbrowser->setQTextBrowser_HasHeightForWidth_IsBase(true);
        return vqtextbrowser->hasHeightForWidth();
    } else {
        return vqtextbrowser->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnHasHeightForWidth(const QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        vqtextbrowser->setQTextBrowser_HasHeightForWidth_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QTextBrowser_PaintEngine(const QTextBrowser* self) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        return vqtextbrowser->paintEngine();
    } else {
        return vqtextbrowser->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QTextBrowser_QBasePaintEngine(const QTextBrowser* self) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        vqtextbrowser->setQTextBrowser_PaintEngine_IsBase(true);
        return vqtextbrowser->paintEngine();
    } else {
        return vqtextbrowser->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnPaintEngine(const QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        vqtextbrowser->setQTextBrowser_PaintEngine_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_EnterEvent(QTextBrowser* self, QEnterEvent* event) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->enterEvent(event);
    } else {
        vqtextbrowser->enterEvent(event);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseEnterEvent(QTextBrowser* self, QEnterEvent* event) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_EnterEvent_IsBase(true);
        vqtextbrowser->enterEvent(event);
    } else {
        vqtextbrowser->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnEnterEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_EnterEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_LeaveEvent(QTextBrowser* self, QEvent* event) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->leaveEvent(event);
    } else {
        vqtextbrowser->leaveEvent(event);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseLeaveEvent(QTextBrowser* self, QEvent* event) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_LeaveEvent_IsBase(true);
        vqtextbrowser->leaveEvent(event);
    } else {
        vqtextbrowser->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnLeaveEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_LeaveEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_MoveEvent(QTextBrowser* self, QMoveEvent* event) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->moveEvent(event);
    } else {
        vqtextbrowser->moveEvent(event);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseMoveEvent(QTextBrowser* self, QMoveEvent* event) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_MoveEvent_IsBase(true);
        vqtextbrowser->moveEvent(event);
    } else {
        vqtextbrowser->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnMoveEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_MoveEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_CloseEvent(QTextBrowser* self, QCloseEvent* event) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->closeEvent(event);
    } else {
        vqtextbrowser->closeEvent(event);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseCloseEvent(QTextBrowser* self, QCloseEvent* event) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_CloseEvent_IsBase(true);
        vqtextbrowser->closeEvent(event);
    } else {
        vqtextbrowser->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnCloseEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_CloseEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_TabletEvent(QTextBrowser* self, QTabletEvent* event) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->tabletEvent(event);
    } else {
        vqtextbrowser->tabletEvent(event);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseTabletEvent(QTextBrowser* self, QTabletEvent* event) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_TabletEvent_IsBase(true);
        vqtextbrowser->tabletEvent(event);
    } else {
        vqtextbrowser->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnTabletEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_TabletEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_ActionEvent(QTextBrowser* self, QActionEvent* event) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->actionEvent(event);
    } else {
        vqtextbrowser->actionEvent(event);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseActionEvent(QTextBrowser* self, QActionEvent* event) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_ActionEvent_IsBase(true);
        vqtextbrowser->actionEvent(event);
    } else {
        vqtextbrowser->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnActionEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_ActionEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_HideEvent(QTextBrowser* self, QHideEvent* event) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->hideEvent(event);
    } else {
        vqtextbrowser->hideEvent(event);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseHideEvent(QTextBrowser* self, QHideEvent* event) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_HideEvent_IsBase(true);
        vqtextbrowser->hideEvent(event);
    } else {
        vqtextbrowser->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnHideEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_HideEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTextBrowser_NativeEvent(QTextBrowser* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        return vqtextbrowser->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqtextbrowser->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QTextBrowser_QBaseNativeEvent(QTextBrowser* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_NativeEvent_IsBase(true);
        return vqtextbrowser->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqtextbrowser->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnNativeEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_NativeEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QTextBrowser_Metric(const QTextBrowser* self, int param1) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        return vqtextbrowser->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqtextbrowser->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QTextBrowser_QBaseMetric(const QTextBrowser* self, int param1) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        vqtextbrowser->setQTextBrowser_Metric_IsBase(true);
        return vqtextbrowser->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqtextbrowser->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnMetric(const QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        vqtextbrowser->setQTextBrowser_Metric_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_InitPainter(const QTextBrowser* self, QPainter* painter) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        vqtextbrowser->initPainter(painter);
    } else {
        vqtextbrowser->initPainter(painter);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseInitPainter(const QTextBrowser* self, QPainter* painter) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        vqtextbrowser->setQTextBrowser_InitPainter_IsBase(true);
        vqtextbrowser->initPainter(painter);
    } else {
        vqtextbrowser->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnInitPainter(const QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        vqtextbrowser->setQTextBrowser_InitPainter_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QTextBrowser_Redirected(const QTextBrowser* self, QPoint* offset) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        return vqtextbrowser->redirected(offset);
    } else {
        return vqtextbrowser->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QTextBrowser_QBaseRedirected(const QTextBrowser* self, QPoint* offset) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        vqtextbrowser->setQTextBrowser_Redirected_IsBase(true);
        return vqtextbrowser->redirected(offset);
    } else {
        return vqtextbrowser->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnRedirected(const QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        vqtextbrowser->setQTextBrowser_Redirected_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QTextBrowser_SharedPainter(const QTextBrowser* self) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        return vqtextbrowser->sharedPainter();
    } else {
        return vqtextbrowser->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QTextBrowser_QBaseSharedPainter(const QTextBrowser* self) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        vqtextbrowser->setQTextBrowser_SharedPainter_IsBase(true);
        return vqtextbrowser->sharedPainter();
    } else {
        return vqtextbrowser->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnSharedPainter(const QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        vqtextbrowser->setQTextBrowser_SharedPainter_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_ChildEvent(QTextBrowser* self, QChildEvent* event) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->childEvent(event);
    } else {
        vqtextbrowser->childEvent(event);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseChildEvent(QTextBrowser* self, QChildEvent* event) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_ChildEvent_IsBase(true);
        vqtextbrowser->childEvent(event);
    } else {
        vqtextbrowser->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnChildEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_ChildEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_CustomEvent(QTextBrowser* self, QEvent* event) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->customEvent(event);
    } else {
        vqtextbrowser->customEvent(event);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseCustomEvent(QTextBrowser* self, QEvent* event) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_CustomEvent_IsBase(true);
        vqtextbrowser->customEvent(event);
    } else {
        vqtextbrowser->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnCustomEvent(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_CustomEvent_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_ConnectNotify(QTextBrowser* self, QMetaMethod* signal) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->connectNotify(*signal);
    } else {
        vqtextbrowser->connectNotify(*signal);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseConnectNotify(QTextBrowser* self, QMetaMethod* signal) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_ConnectNotify_IsBase(true);
        vqtextbrowser->connectNotify(*signal);
    } else {
        vqtextbrowser->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnConnectNotify(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_ConnectNotify_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_DisconnectNotify(QTextBrowser* self, QMetaMethod* signal) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->disconnectNotify(*signal);
    } else {
        vqtextbrowser->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseDisconnectNotify(QTextBrowser* self, QMetaMethod* signal) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_DisconnectNotify_IsBase(true);
        vqtextbrowser->disconnectNotify(*signal);
    } else {
        vqtextbrowser->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnDisconnectNotify(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_DisconnectNotify_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_ZoomInF(QTextBrowser* self, float range) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->zoomInF(static_cast<float>(range));
    } else {
        vqtextbrowser->zoomInF(static_cast<float>(range));
    }
}

// Base class handler implementation
void QTextBrowser_QBaseZoomInF(QTextBrowser* self, float range) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_ZoomInF_IsBase(true);
        vqtextbrowser->zoomInF(static_cast<float>(range));
    } else {
        vqtextbrowser->zoomInF(static_cast<float>(range));
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnZoomInF(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_ZoomInF_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_ZoomInF_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_SetViewportMargins(QTextBrowser* self, int left, int top, int right, int bottom) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        vqtextbrowser->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Base class handler implementation
void QTextBrowser_QBaseSetViewportMargins(QTextBrowser* self, int left, int top, int right, int bottom) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_SetViewportMargins_IsBase(true);
        vqtextbrowser->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        vqtextbrowser->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnSetViewportMargins(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_SetViewportMargins_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_SetViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
QMargins* QTextBrowser_ViewportMargins(const QTextBrowser* self) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        return new QMargins(vqtextbrowser->viewportMargins());
    }
    return {};
}

// Base class handler implementation
QMargins* QTextBrowser_QBaseViewportMargins(const QTextBrowser* self) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        vqtextbrowser->setQTextBrowser_ViewportMargins_IsBase(true);
        return new QMargins(vqtextbrowser->viewportMargins());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnViewportMargins(const QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        vqtextbrowser->setQTextBrowser_ViewportMargins_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_ViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_DrawFrame(QTextBrowser* self, QPainter* param1) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->drawFrame(param1);
    } else {
        vqtextbrowser->drawFrame(param1);
    }
}

// Base class handler implementation
void QTextBrowser_QBaseDrawFrame(QTextBrowser* self, QPainter* param1) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_DrawFrame_IsBase(true);
        vqtextbrowser->drawFrame(param1);
    } else {
        vqtextbrowser->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnDrawFrame(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_DrawFrame_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_UpdateMicroFocus(QTextBrowser* self) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->updateMicroFocus();
    } else {
        vqtextbrowser->updateMicroFocus();
    }
}

// Base class handler implementation
void QTextBrowser_QBaseUpdateMicroFocus(QTextBrowser* self) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_UpdateMicroFocus_IsBase(true);
        vqtextbrowser->updateMicroFocus();
    } else {
        vqtextbrowser->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnUpdateMicroFocus(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_Create(QTextBrowser* self) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->create();
    } else {
        vqtextbrowser->create();
    }
}

// Base class handler implementation
void QTextBrowser_QBaseCreate(QTextBrowser* self) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_Create_IsBase(true);
        vqtextbrowser->create();
    } else {
        vqtextbrowser->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnCreate(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_Create_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextBrowser_Destroy(QTextBrowser* self) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->destroy();
    } else {
        vqtextbrowser->destroy();
    }
}

// Base class handler implementation
void QTextBrowser_QBaseDestroy(QTextBrowser* self) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_Destroy_IsBase(true);
        vqtextbrowser->destroy();
    } else {
        vqtextbrowser->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnDestroy(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_Destroy_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTextBrowser_FocusNextChild(QTextBrowser* self) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        return vqtextbrowser->focusNextChild();
    } else {
        return vqtextbrowser->focusNextChild();
    }
}

// Base class handler implementation
bool QTextBrowser_QBaseFocusNextChild(QTextBrowser* self) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_FocusNextChild_IsBase(true);
        return vqtextbrowser->focusNextChild();
    } else {
        return vqtextbrowser->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnFocusNextChild(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_FocusNextChild_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTextBrowser_FocusPreviousChild(QTextBrowser* self) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        return vqtextbrowser->focusPreviousChild();
    } else {
        return vqtextbrowser->focusPreviousChild();
    }
}

// Base class handler implementation
bool QTextBrowser_QBaseFocusPreviousChild(QTextBrowser* self) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_FocusPreviousChild_IsBase(true);
        return vqtextbrowser->focusPreviousChild();
    } else {
        return vqtextbrowser->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnFocusPreviousChild(QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = dynamic_cast<VirtualQTextBrowser*>(self)) {
        vqtextbrowser->setQTextBrowser_FocusPreviousChild_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QTextBrowser_Sender(const QTextBrowser* self) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        return vqtextbrowser->sender();
    } else {
        return vqtextbrowser->sender();
    }
}

// Base class handler implementation
QObject* QTextBrowser_QBaseSender(const QTextBrowser* self) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        vqtextbrowser->setQTextBrowser_Sender_IsBase(true);
        return vqtextbrowser->sender();
    } else {
        return vqtextbrowser->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnSender(const QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        vqtextbrowser->setQTextBrowser_Sender_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QTextBrowser_SenderSignalIndex(const QTextBrowser* self) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        return vqtextbrowser->senderSignalIndex();
    } else {
        return vqtextbrowser->senderSignalIndex();
    }
}

// Base class handler implementation
int QTextBrowser_QBaseSenderSignalIndex(const QTextBrowser* self) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        vqtextbrowser->setQTextBrowser_SenderSignalIndex_IsBase(true);
        return vqtextbrowser->senderSignalIndex();
    } else {
        return vqtextbrowser->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnSenderSignalIndex(const QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        vqtextbrowser->setQTextBrowser_SenderSignalIndex_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QTextBrowser_Receivers(const QTextBrowser* self, const char* signal) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        return vqtextbrowser->receivers(signal);
    } else {
        return vqtextbrowser->receivers(signal);
    }
}

// Base class handler implementation
int QTextBrowser_QBaseReceivers(const QTextBrowser* self, const char* signal) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        vqtextbrowser->setQTextBrowser_Receivers_IsBase(true);
        return vqtextbrowser->receivers(signal);
    } else {
        return vqtextbrowser->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnReceivers(const QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        vqtextbrowser->setQTextBrowser_Receivers_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTextBrowser_IsSignalConnected(const QTextBrowser* self, QMetaMethod* signal) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        return vqtextbrowser->isSignalConnected(*signal);
    } else {
        return vqtextbrowser->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QTextBrowser_QBaseIsSignalConnected(const QTextBrowser* self, QMetaMethod* signal) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        vqtextbrowser->setQTextBrowser_IsSignalConnected_IsBase(true);
        return vqtextbrowser->isSignalConnected(*signal);
    } else {
        return vqtextbrowser->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextBrowser_OnIsSignalConnected(const QTextBrowser* self, intptr_t slot) {
    if (auto* vqtextbrowser = const_cast<VirtualQTextBrowser*>(dynamic_cast<const VirtualQTextBrowser*>(self))) {
        vqtextbrowser->setQTextBrowser_IsSignalConnected_Callback(reinterpret_cast<VirtualQTextBrowser::QTextBrowser_IsSignalConnected_Callback>(slot));
    }
}

void QTextBrowser_Delete(QTextBrowser* self) {
    delete self;
}
