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
#include <QMenu>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPageLayout>
#include <QPageRanges>
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
#include <QUrl>
#include <QVariant>
#include <QWebEngineContextMenuRequest>
#include <QWebEngineHistory>
#include <QWebEngineHttpRequest>
#include <QWebEnginePage>
#include <QWebEngineProfile>
#include <QWebEngineSettings>
#include <QWebEngineView>
#include <QWheelEvent>
#include <QWidget>
#include <QWindow>
#include <qwebengineview.h>
#include "libqwebengineview.hpp"
#include "libqwebengineview.hxx"

QWebEngineView* QWebEngineView_new(QWidget* parent) {
    return new VirtualQWebEngineView(parent);
}

QWebEngineView* QWebEngineView_new2() {
    return new VirtualQWebEngineView();
}

QWebEngineView* QWebEngineView_new3(QWebEngineProfile* profile) {
    return new VirtualQWebEngineView(profile);
}

QWebEngineView* QWebEngineView_new4(QWebEnginePage* page) {
    return new VirtualQWebEngineView(page);
}

QWebEngineView* QWebEngineView_new5(QWebEngineProfile* profile, QWidget* parent) {
    return new VirtualQWebEngineView(profile, parent);
}

QWebEngineView* QWebEngineView_new6(QWebEnginePage* page, QWidget* parent) {
    return new VirtualQWebEngineView(page, parent);
}

QMetaObject* QWebEngineView_MetaObject(const QWebEngineView* self) {
    return (QMetaObject*)self->metaObject();
}

void* QWebEngineView_Metacast(QWebEngineView* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QWebEngineView_Metacall(QWebEngineView* self, int param1, int param2, void** param3) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QWebEngineView_OnMetacall(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_Metacall_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QWebEngineView_QBaseMetacall(QWebEngineView* self, int param1, int param2, void** param3) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_Metacall_IsBase(true);
        return vqwebengineview->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QWebEngineView_Tr(const char* s) {
    QString _ret = QWebEngineView::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QWebEngineView* QWebEngineView_ForPage(QWebEnginePage* page) {
    return QWebEngineView::forPage(page);
}

QWebEnginePage* QWebEngineView_Page(const QWebEngineView* self) {
    return self->page();
}

void QWebEngineView_SetPage(QWebEngineView* self, QWebEnginePage* page) {
    self->setPage(page);
}

void QWebEngineView_Load(QWebEngineView* self, QUrl* url) {
    self->load(*url);
}

void QWebEngineView_LoadWithRequest(QWebEngineView* self, QWebEngineHttpRequest* request) {
    self->load(*request);
}

void QWebEngineView_SetHtml(QWebEngineView* self, libqt_string html) {
    QString html_QString = QString::fromUtf8(html.data, html.len);
    self->setHtml(html_QString);
}

void QWebEngineView_SetContent(QWebEngineView* self, libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    self->setContent(data_QByteArray);
}

QWebEngineHistory* QWebEngineView_History(const QWebEngineView* self) {
    return self->history();
}

libqt_string QWebEngineView_Title(const QWebEngineView* self) {
    QString _ret = self->title();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QWebEngineView_SetUrl(QWebEngineView* self, QUrl* url) {
    self->setUrl(*url);
}

QUrl* QWebEngineView_Url(const QWebEngineView* self) {
    return new QUrl(self->url());
}

QUrl* QWebEngineView_IconUrl(const QWebEngineView* self) {
    return new QUrl(self->iconUrl());
}

QIcon* QWebEngineView_Icon(const QWebEngineView* self) {
    return new QIcon(self->icon());
}

bool QWebEngineView_HasSelection(const QWebEngineView* self) {
    return self->hasSelection();
}

libqt_string QWebEngineView_SelectedText(const QWebEngineView* self) {
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

QAction* QWebEngineView_PageAction(const QWebEngineView* self, int action) {
    return self->pageAction(static_cast<QWebEnginePage::WebAction>(action));
}

void QWebEngineView_TriggerPageAction(QWebEngineView* self, int action) {
    self->triggerPageAction(static_cast<QWebEnginePage::WebAction>(action));
}

double QWebEngineView_ZoomFactor(const QWebEngineView* self) {
    return static_cast<double>(self->zoomFactor());
}

void QWebEngineView_SetZoomFactor(QWebEngineView* self, double factor) {
    self->setZoomFactor(static_cast<qreal>(factor));
}

QWebEngineSettings* QWebEngineView_Settings(const QWebEngineView* self) {
    return self->settings();
}

QMenu* QWebEngineView_CreateStandardContextMenu(QWebEngineView* self) {
    return self->createStandardContextMenu();
}

QWebEngineContextMenuRequest* QWebEngineView_LastContextMenuRequest(const QWebEngineView* self) {
    return self->lastContextMenuRequest();
}

void QWebEngineView_PrintToPdf(QWebEngineView* self, libqt_string filePath) {
    QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
    self->printToPdf(filePath_QString);
}

void QWebEngineView_Print(QWebEngineView* self, QPrinter* printer) {
    self->print(printer);
}

void QWebEngineView_Stop(QWebEngineView* self) {
    self->stop();
}

void QWebEngineView_Back(QWebEngineView* self) {
    self->back();
}

void QWebEngineView_Forward(QWebEngineView* self) {
    self->forward();
}

void QWebEngineView_Reload(QWebEngineView* self) {
    self->reload();
}

void QWebEngineView_LoadStarted(QWebEngineView* self) {
    self->loadStarted();
}

void QWebEngineView_Connect_LoadStarted(QWebEngineView* self, intptr_t slot) {
    void (*slotFunc)(QWebEngineView*) = reinterpret_cast<void (*)(QWebEngineView*)>(slot);
    QWebEngineView::connect(self, &QWebEngineView::loadStarted, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QWebEngineView_LoadProgress(QWebEngineView* self, int progress) {
    self->loadProgress(static_cast<int>(progress));
}

void QWebEngineView_Connect_LoadProgress(QWebEngineView* self, intptr_t slot) {
    void (*slotFunc)(QWebEngineView*, int) = reinterpret_cast<void (*)(QWebEngineView*, int)>(slot);
    QWebEngineView::connect(self, &QWebEngineView::loadProgress, [self, slotFunc](int progress) {
        int sigval1 = progress;
        slotFunc(self, sigval1);
    });
}

void QWebEngineView_LoadFinished(QWebEngineView* self, bool param1) {
    self->loadFinished(param1);
}

void QWebEngineView_Connect_LoadFinished(QWebEngineView* self, intptr_t slot) {
    void (*slotFunc)(QWebEngineView*, bool) = reinterpret_cast<void (*)(QWebEngineView*, bool)>(slot);
    QWebEngineView::connect(self, &QWebEngineView::loadFinished, [self, slotFunc](bool param1) {
        bool sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void QWebEngineView_TitleChanged(QWebEngineView* self, libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    self->titleChanged(title_QString);
}

void QWebEngineView_Connect_TitleChanged(QWebEngineView* self, intptr_t slot) {
    void (*slotFunc)(QWebEngineView*, libqt_string) = reinterpret_cast<void (*)(QWebEngineView*, libqt_string)>(slot);
    QWebEngineView::connect(self, &QWebEngineView::titleChanged, [self, slotFunc](const QString& title) {
        const QString title_ret = title;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray title_b = title_ret.toUtf8();
        libqt_string title_str;
        title_str.len = title_b.length();
        title_str.data = static_cast<char*>(malloc((title_str.len + 1) * sizeof(char)));
        memcpy(title_str.data, title_b.data(), title_str.len);
        title_str.data[title_str.len] = '\0';
        libqt_string sigval1 = title_str;
        slotFunc(self, sigval1);
    });
}

void QWebEngineView_SelectionChanged(QWebEngineView* self) {
    self->selectionChanged();
}

void QWebEngineView_Connect_SelectionChanged(QWebEngineView* self, intptr_t slot) {
    void (*slotFunc)(QWebEngineView*) = reinterpret_cast<void (*)(QWebEngineView*)>(slot);
    QWebEngineView::connect(self, &QWebEngineView::selectionChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QWebEngineView_UrlChanged(QWebEngineView* self, QUrl* param1) {
    self->urlChanged(*param1);
}

void QWebEngineView_Connect_UrlChanged(QWebEngineView* self, intptr_t slot) {
    void (*slotFunc)(QWebEngineView*, QUrl*) = reinterpret_cast<void (*)(QWebEngineView*, QUrl*)>(slot);
    QWebEngineView::connect(self, &QWebEngineView::urlChanged, [self, slotFunc](const QUrl& param1) {
        const QUrl& param1_ret = param1;
        // Cast returned reference into pointer
        QUrl* sigval1 = const_cast<QUrl*>(&param1_ret);
        slotFunc(self, sigval1);
    });
}

void QWebEngineView_IconUrlChanged(QWebEngineView* self, QUrl* param1) {
    self->iconUrlChanged(*param1);
}

void QWebEngineView_Connect_IconUrlChanged(QWebEngineView* self, intptr_t slot) {
    void (*slotFunc)(QWebEngineView*, QUrl*) = reinterpret_cast<void (*)(QWebEngineView*, QUrl*)>(slot);
    QWebEngineView::connect(self, &QWebEngineView::iconUrlChanged, [self, slotFunc](const QUrl& param1) {
        const QUrl& param1_ret = param1;
        // Cast returned reference into pointer
        QUrl* sigval1 = const_cast<QUrl*>(&param1_ret);
        slotFunc(self, sigval1);
    });
}

void QWebEngineView_IconChanged(QWebEngineView* self, QIcon* param1) {
    self->iconChanged(*param1);
}

void QWebEngineView_Connect_IconChanged(QWebEngineView* self, intptr_t slot) {
    void (*slotFunc)(QWebEngineView*, QIcon*) = reinterpret_cast<void (*)(QWebEngineView*, QIcon*)>(slot);
    QWebEngineView::connect(self, &QWebEngineView::iconChanged, [self, slotFunc](const QIcon& param1) {
        const QIcon& param1_ret = param1;
        // Cast returned reference into pointer
        QIcon* sigval1 = const_cast<QIcon*>(&param1_ret);
        slotFunc(self, sigval1);
    });
}

void QWebEngineView_RenderProcessTerminated(QWebEngineView* self, int terminationStatus, int exitCode) {
    self->renderProcessTerminated(static_cast<QWebEnginePage::RenderProcessTerminationStatus>(terminationStatus), static_cast<int>(exitCode));
}

void QWebEngineView_Connect_RenderProcessTerminated(QWebEngineView* self, intptr_t slot) {
    void (*slotFunc)(QWebEngineView*, int, int) = reinterpret_cast<void (*)(QWebEngineView*, int, int)>(slot);
    QWebEngineView::connect(self, &QWebEngineView::renderProcessTerminated, [self, slotFunc](QWebEnginePage::RenderProcessTerminationStatus terminationStatus, int exitCode) {
        int sigval1 = static_cast<int>(terminationStatus);
        int sigval2 = exitCode;
        slotFunc(self, sigval1, sigval2);
    });
}

void QWebEngineView_PdfPrintingFinished(QWebEngineView* self, libqt_string filePath, bool success) {
    QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
    self->pdfPrintingFinished(filePath_QString, success);
}

void QWebEngineView_Connect_PdfPrintingFinished(QWebEngineView* self, intptr_t slot) {
    void (*slotFunc)(QWebEngineView*, libqt_string, bool) = reinterpret_cast<void (*)(QWebEngineView*, libqt_string, bool)>(slot);
    QWebEngineView::connect(self, &QWebEngineView::pdfPrintingFinished, [self, slotFunc](const QString& filePath, bool success) {
        const QString filePath_ret = filePath;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray filePath_b = filePath_ret.toUtf8();
        libqt_string filePath_str;
        filePath_str.len = filePath_b.length();
        filePath_str.data = static_cast<char*>(malloc((filePath_str.len + 1) * sizeof(char)));
        memcpy(filePath_str.data, filePath_b.data(), filePath_str.len);
        filePath_str.data[filePath_str.len] = '\0';
        libqt_string sigval1 = filePath_str;
        bool sigval2 = success;
        slotFunc(self, sigval1, sigval2);
    });
}

void QWebEngineView_PrintRequested(QWebEngineView* self) {
    self->printRequested();
}

void QWebEngineView_Connect_PrintRequested(QWebEngineView* self, intptr_t slot) {
    void (*slotFunc)(QWebEngineView*) = reinterpret_cast<void (*)(QWebEngineView*)>(slot);
    QWebEngineView::connect(self, &QWebEngineView::printRequested, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QWebEngineView_PrintFinished(QWebEngineView* self, bool success) {
    self->printFinished(success);
}

void QWebEngineView_Connect_PrintFinished(QWebEngineView* self, intptr_t slot) {
    void (*slotFunc)(QWebEngineView*, bool) = reinterpret_cast<void (*)(QWebEngineView*, bool)>(slot);
    QWebEngineView::connect(self, &QWebEngineView::printFinished, [self, slotFunc](bool success) {
        bool sigval1 = success;
        slotFunc(self, sigval1);
    });
}

libqt_string QWebEngineView_Tr2(const char* s, const char* c) {
    QString _ret = QWebEngineView::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QWebEngineView_Tr3(const char* s, const char* c, int n) {
    QString _ret = QWebEngineView::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QWebEngineView_SetHtml2(QWebEngineView* self, libqt_string html, QUrl* baseUrl) {
    QString html_QString = QString::fromUtf8(html.data, html.len);
    self->setHtml(html_QString, *baseUrl);
}

void QWebEngineView_SetContent2(QWebEngineView* self, libqt_string data, libqt_string mimeType) {
    QByteArray data_QByteArray(data.data, data.len);
    QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
    self->setContent(data_QByteArray, mimeType_QString);
}

void QWebEngineView_SetContent3(QWebEngineView* self, libqt_string data, libqt_string mimeType, QUrl* baseUrl) {
    QByteArray data_QByteArray(data.data, data.len);
    QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
    self->setContent(data_QByteArray, mimeType_QString, *baseUrl);
}

void QWebEngineView_TriggerPageAction2(QWebEngineView* self, int action, bool checked) {
    self->triggerPageAction(static_cast<QWebEnginePage::WebAction>(action), checked);
}

void QWebEngineView_PrintToPdf2(QWebEngineView* self, libqt_string filePath, QPageLayout* layout) {
    QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
    self->printToPdf(filePath_QString, *layout);
}

void QWebEngineView_PrintToPdf3(QWebEngineView* self, libqt_string filePath, QPageLayout* layout, QPageRanges* ranges) {
    QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
    self->printToPdf(filePath_QString, *layout, *ranges);
}

// Derived class handler implementation
QSize* QWebEngineView_SizeHint(const QWebEngineView* self) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self))) {
        return new QSize(vqwebengineview->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QWebEngineView_QBaseSizeHint(const QWebEngineView* self) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self))) {
        vqwebengineview->setQWebEngineView_SizeHint_IsBase(true);
        return new QSize(vqwebengineview->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnSizeHint(const QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self))) {
        vqwebengineview->setQWebEngineView_SizeHint_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QWebEngineView* QWebEngineView_CreateWindow(QWebEngineView* self, int typeVal) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        return vqwebengineview->createWindow(static_cast<QWebEnginePage::WebWindowType>(typeVal));
    } else {
        return vqwebengineview->createWindow(static_cast<QWebEnginePage::WebWindowType>(typeVal));
    }
}

// Base class handler implementation
QWebEngineView* QWebEngineView_QBaseCreateWindow(QWebEngineView* self, int typeVal) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_CreateWindow_IsBase(true);
        return vqwebengineview->createWindow(static_cast<QWebEnginePage::WebWindowType>(typeVal));
    } else {
        return vqwebengineview->createWindow(static_cast<QWebEnginePage::WebWindowType>(typeVal));
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnCreateWindow(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_CreateWindow_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_CreateWindow_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineView_ContextMenuEvent(QWebEngineView* self, QContextMenuEvent* param1) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->contextMenuEvent(param1);
    } else {
        vqwebengineview->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void QWebEngineView_QBaseContextMenuEvent(QWebEngineView* self, QContextMenuEvent* param1) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_ContextMenuEvent_IsBase(true);
        vqwebengineview->contextMenuEvent(param1);
    } else {
        vqwebengineview->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnContextMenuEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_ContextMenuEvent_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWebEngineView_Event(QWebEngineView* self, QEvent* param1) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        return vqwebengineview->event(param1);
    } else {
        return vqwebengineview->event(param1);
    }
}

// Base class handler implementation
bool QWebEngineView_QBaseEvent(QWebEngineView* self, QEvent* param1) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_Event_IsBase(true);
        return vqwebengineview->event(param1);
    } else {
        return vqwebengineview->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_Event_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineView_ShowEvent(QWebEngineView* self, QShowEvent* param1) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->showEvent(param1);
    } else {
        vqwebengineview->showEvent(param1);
    }
}

// Base class handler implementation
void QWebEngineView_QBaseShowEvent(QWebEngineView* self, QShowEvent* param1) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_ShowEvent_IsBase(true);
        vqwebengineview->showEvent(param1);
    } else {
        vqwebengineview->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnShowEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_ShowEvent_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineView_HideEvent(QWebEngineView* self, QHideEvent* param1) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->hideEvent(param1);
    } else {
        vqwebengineview->hideEvent(param1);
    }
}

// Base class handler implementation
void QWebEngineView_QBaseHideEvent(QWebEngineView* self, QHideEvent* param1) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_HideEvent_IsBase(true);
        vqwebengineview->hideEvent(param1);
    } else {
        vqwebengineview->hideEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnHideEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_HideEvent_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineView_CloseEvent(QWebEngineView* self, QCloseEvent* param1) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->closeEvent(param1);
    } else {
        vqwebengineview->closeEvent(param1);
    }
}

// Base class handler implementation
void QWebEngineView_QBaseCloseEvent(QWebEngineView* self, QCloseEvent* param1) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_CloseEvent_IsBase(true);
        vqwebengineview->closeEvent(param1);
    } else {
        vqwebengineview->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnCloseEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_CloseEvent_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineView_DragEnterEvent(QWebEngineView* self, QDragEnterEvent* e) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->dragEnterEvent(e);
    } else {
        vqwebengineview->dragEnterEvent(e);
    }
}

// Base class handler implementation
void QWebEngineView_QBaseDragEnterEvent(QWebEngineView* self, QDragEnterEvent* e) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_DragEnterEvent_IsBase(true);
        vqwebengineview->dragEnterEvent(e);
    } else {
        vqwebengineview->dragEnterEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnDragEnterEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_DragEnterEvent_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineView_DragLeaveEvent(QWebEngineView* self, QDragLeaveEvent* e) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->dragLeaveEvent(e);
    } else {
        vqwebengineview->dragLeaveEvent(e);
    }
}

// Base class handler implementation
void QWebEngineView_QBaseDragLeaveEvent(QWebEngineView* self, QDragLeaveEvent* e) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_DragLeaveEvent_IsBase(true);
        vqwebengineview->dragLeaveEvent(e);
    } else {
        vqwebengineview->dragLeaveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnDragLeaveEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_DragLeaveEvent_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineView_DragMoveEvent(QWebEngineView* self, QDragMoveEvent* e) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->dragMoveEvent(e);
    } else {
        vqwebengineview->dragMoveEvent(e);
    }
}

// Base class handler implementation
void QWebEngineView_QBaseDragMoveEvent(QWebEngineView* self, QDragMoveEvent* e) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_DragMoveEvent_IsBase(true);
        vqwebengineview->dragMoveEvent(e);
    } else {
        vqwebengineview->dragMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnDragMoveEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_DragMoveEvent_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineView_DropEvent(QWebEngineView* self, QDropEvent* e) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->dropEvent(e);
    } else {
        vqwebengineview->dropEvent(e);
    }
}

// Base class handler implementation
void QWebEngineView_QBaseDropEvent(QWebEngineView* self, QDropEvent* e) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_DropEvent_IsBase(true);
        vqwebengineview->dropEvent(e);
    } else {
        vqwebengineview->dropEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnDropEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_DropEvent_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QWebEngineView_DevType(const QWebEngineView* self) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self))) {
        return vqwebengineview->devType();
    } else {
        return vqwebengineview->devType();
    }
}

// Base class handler implementation
int QWebEngineView_QBaseDevType(const QWebEngineView* self) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self))) {
        vqwebengineview->setQWebEngineView_DevType_IsBase(true);
        return vqwebengineview->devType();
    } else {
        return vqwebengineview->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnDevType(const QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self))) {
        vqwebengineview->setQWebEngineView_DevType_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineView_SetVisible(QWebEngineView* self, bool visible) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setVisible(visible);
    } else {
        vqwebengineview->setVisible(visible);
    }
}

// Base class handler implementation
void QWebEngineView_QBaseSetVisible(QWebEngineView* self, bool visible) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_SetVisible_IsBase(true);
        vqwebengineview->setVisible(visible);
    } else {
        vqwebengineview->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnSetVisible(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_SetVisible_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QWebEngineView_MinimumSizeHint(const QWebEngineView* self) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self))) {
        return new QSize(vqwebengineview->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QWebEngineView_QBaseMinimumSizeHint(const QWebEngineView* self) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self))) {
        vqwebengineview->setQWebEngineView_MinimumSizeHint_IsBase(true);
        return new QSize(vqwebengineview->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnMinimumSizeHint(const QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self))) {
        vqwebengineview->setQWebEngineView_MinimumSizeHint_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QWebEngineView_HeightForWidth(const QWebEngineView* self, int param1) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self))) {
        return vqwebengineview->heightForWidth(static_cast<int>(param1));
    } else {
        return vqwebengineview->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QWebEngineView_QBaseHeightForWidth(const QWebEngineView* self, int param1) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self))) {
        vqwebengineview->setQWebEngineView_HeightForWidth_IsBase(true);
        return vqwebengineview->heightForWidth(static_cast<int>(param1));
    } else {
        return vqwebengineview->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnHeightForWidth(const QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self))) {
        vqwebengineview->setQWebEngineView_HeightForWidth_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWebEngineView_HasHeightForWidth(const QWebEngineView* self) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self))) {
        return vqwebengineview->hasHeightForWidth();
    } else {
        return vqwebengineview->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QWebEngineView_QBaseHasHeightForWidth(const QWebEngineView* self) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self))) {
        vqwebengineview->setQWebEngineView_HasHeightForWidth_IsBase(true);
        return vqwebengineview->hasHeightForWidth();
    } else {
        return vqwebengineview->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnHasHeightForWidth(const QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self))) {
        vqwebengineview->setQWebEngineView_HasHeightForWidth_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QWebEngineView_PaintEngine(const QWebEngineView* self) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self))) {
        return vqwebengineview->paintEngine();
    } else {
        return vqwebengineview->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QWebEngineView_QBasePaintEngine(const QWebEngineView* self) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self))) {
        vqwebengineview->setQWebEngineView_PaintEngine_IsBase(true);
        return vqwebengineview->paintEngine();
    } else {
        return vqwebengineview->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnPaintEngine(const QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self))) {
        vqwebengineview->setQWebEngineView_PaintEngine_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineView_MousePressEvent(QWebEngineView* self, QMouseEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->mousePressEvent(event);
    } else {
        vqwebengineview->mousePressEvent(event);
    }
}

// Base class handler implementation
void QWebEngineView_QBaseMousePressEvent(QWebEngineView* self, QMouseEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_MousePressEvent_IsBase(true);
        vqwebengineview->mousePressEvent(event);
    } else {
        vqwebengineview->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnMousePressEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_MousePressEvent_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineView_MouseReleaseEvent(QWebEngineView* self, QMouseEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->mouseReleaseEvent(event);
    } else {
        vqwebengineview->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QWebEngineView_QBaseMouseReleaseEvent(QWebEngineView* self, QMouseEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_MouseReleaseEvent_IsBase(true);
        vqwebengineview->mouseReleaseEvent(event);
    } else {
        vqwebengineview->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnMouseReleaseEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineView_MouseDoubleClickEvent(QWebEngineView* self, QMouseEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->mouseDoubleClickEvent(event);
    } else {
        vqwebengineview->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QWebEngineView_QBaseMouseDoubleClickEvent(QWebEngineView* self, QMouseEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_MouseDoubleClickEvent_IsBase(true);
        vqwebengineview->mouseDoubleClickEvent(event);
    } else {
        vqwebengineview->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnMouseDoubleClickEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineView_MouseMoveEvent(QWebEngineView* self, QMouseEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->mouseMoveEvent(event);
    } else {
        vqwebengineview->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QWebEngineView_QBaseMouseMoveEvent(QWebEngineView* self, QMouseEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_MouseMoveEvent_IsBase(true);
        vqwebengineview->mouseMoveEvent(event);
    } else {
        vqwebengineview->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnMouseMoveEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_MouseMoveEvent_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineView_WheelEvent(QWebEngineView* self, QWheelEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->wheelEvent(event);
    } else {
        vqwebengineview->wheelEvent(event);
    }
}

// Base class handler implementation
void QWebEngineView_QBaseWheelEvent(QWebEngineView* self, QWheelEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_WheelEvent_IsBase(true);
        vqwebengineview->wheelEvent(event);
    } else {
        vqwebengineview->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnWheelEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_WheelEvent_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineView_KeyPressEvent(QWebEngineView* self, QKeyEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->keyPressEvent(event);
    } else {
        vqwebengineview->keyPressEvent(event);
    }
}

// Base class handler implementation
void QWebEngineView_QBaseKeyPressEvent(QWebEngineView* self, QKeyEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_KeyPressEvent_IsBase(true);
        vqwebengineview->keyPressEvent(event);
    } else {
        vqwebengineview->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnKeyPressEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_KeyPressEvent_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineView_KeyReleaseEvent(QWebEngineView* self, QKeyEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->keyReleaseEvent(event);
    } else {
        vqwebengineview->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QWebEngineView_QBaseKeyReleaseEvent(QWebEngineView* self, QKeyEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_KeyReleaseEvent_IsBase(true);
        vqwebengineview->keyReleaseEvent(event);
    } else {
        vqwebengineview->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnKeyReleaseEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineView_FocusInEvent(QWebEngineView* self, QFocusEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->focusInEvent(event);
    } else {
        vqwebengineview->focusInEvent(event);
    }
}

// Base class handler implementation
void QWebEngineView_QBaseFocusInEvent(QWebEngineView* self, QFocusEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_FocusInEvent_IsBase(true);
        vqwebengineview->focusInEvent(event);
    } else {
        vqwebengineview->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnFocusInEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_FocusInEvent_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineView_FocusOutEvent(QWebEngineView* self, QFocusEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->focusOutEvent(event);
    } else {
        vqwebengineview->focusOutEvent(event);
    }
}

// Base class handler implementation
void QWebEngineView_QBaseFocusOutEvent(QWebEngineView* self, QFocusEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_FocusOutEvent_IsBase(true);
        vqwebengineview->focusOutEvent(event);
    } else {
        vqwebengineview->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnFocusOutEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_FocusOutEvent_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineView_EnterEvent(QWebEngineView* self, QEnterEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->enterEvent(event);
    } else {
        vqwebengineview->enterEvent(event);
    }
}

// Base class handler implementation
void QWebEngineView_QBaseEnterEvent(QWebEngineView* self, QEnterEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_EnterEvent_IsBase(true);
        vqwebengineview->enterEvent(event);
    } else {
        vqwebengineview->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnEnterEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_EnterEvent_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineView_LeaveEvent(QWebEngineView* self, QEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->leaveEvent(event);
    } else {
        vqwebengineview->leaveEvent(event);
    }
}

// Base class handler implementation
void QWebEngineView_QBaseLeaveEvent(QWebEngineView* self, QEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_LeaveEvent_IsBase(true);
        vqwebengineview->leaveEvent(event);
    } else {
        vqwebengineview->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnLeaveEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_LeaveEvent_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineView_PaintEvent(QWebEngineView* self, QPaintEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->paintEvent(event);
    } else {
        vqwebengineview->paintEvent(event);
    }
}

// Base class handler implementation
void QWebEngineView_QBasePaintEvent(QWebEngineView* self, QPaintEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_PaintEvent_IsBase(true);
        vqwebengineview->paintEvent(event);
    } else {
        vqwebengineview->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnPaintEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_PaintEvent_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineView_MoveEvent(QWebEngineView* self, QMoveEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->moveEvent(event);
    } else {
        vqwebengineview->moveEvent(event);
    }
}

// Base class handler implementation
void QWebEngineView_QBaseMoveEvent(QWebEngineView* self, QMoveEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_MoveEvent_IsBase(true);
        vqwebengineview->moveEvent(event);
    } else {
        vqwebengineview->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnMoveEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_MoveEvent_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineView_ResizeEvent(QWebEngineView* self, QResizeEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->resizeEvent(event);
    } else {
        vqwebengineview->resizeEvent(event);
    }
}

// Base class handler implementation
void QWebEngineView_QBaseResizeEvent(QWebEngineView* self, QResizeEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_ResizeEvent_IsBase(true);
        vqwebengineview->resizeEvent(event);
    } else {
        vqwebengineview->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnResizeEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_ResizeEvent_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineView_TabletEvent(QWebEngineView* self, QTabletEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->tabletEvent(event);
    } else {
        vqwebengineview->tabletEvent(event);
    }
}

// Base class handler implementation
void QWebEngineView_QBaseTabletEvent(QWebEngineView* self, QTabletEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_TabletEvent_IsBase(true);
        vqwebengineview->tabletEvent(event);
    } else {
        vqwebengineview->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnTabletEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_TabletEvent_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineView_ActionEvent(QWebEngineView* self, QActionEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->actionEvent(event);
    } else {
        vqwebengineview->actionEvent(event);
    }
}

// Base class handler implementation
void QWebEngineView_QBaseActionEvent(QWebEngineView* self, QActionEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_ActionEvent_IsBase(true);
        vqwebengineview->actionEvent(event);
    } else {
        vqwebengineview->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnActionEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_ActionEvent_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWebEngineView_NativeEvent(QWebEngineView* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        return vqwebengineview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqwebengineview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QWebEngineView_QBaseNativeEvent(QWebEngineView* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_NativeEvent_IsBase(true);
        return vqwebengineview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqwebengineview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnNativeEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_NativeEvent_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineView_ChangeEvent(QWebEngineView* self, QEvent* param1) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->changeEvent(param1);
    } else {
        vqwebengineview->changeEvent(param1);
    }
}

// Base class handler implementation
void QWebEngineView_QBaseChangeEvent(QWebEngineView* self, QEvent* param1) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_ChangeEvent_IsBase(true);
        vqwebengineview->changeEvent(param1);
    } else {
        vqwebengineview->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnChangeEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_ChangeEvent_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QWebEngineView_Metric(const QWebEngineView* self, int param1) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self))) {
        return vqwebengineview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqwebengineview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QWebEngineView_QBaseMetric(const QWebEngineView* self, int param1) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self))) {
        vqwebengineview->setQWebEngineView_Metric_IsBase(true);
        return vqwebengineview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqwebengineview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnMetric(const QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self))) {
        vqwebengineview->setQWebEngineView_Metric_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineView_InitPainter(const QWebEngineView* self, QPainter* painter) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self))) {
        vqwebengineview->initPainter(painter);
    } else {
        vqwebengineview->initPainter(painter);
    }
}

// Base class handler implementation
void QWebEngineView_QBaseInitPainter(const QWebEngineView* self, QPainter* painter) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self))) {
        vqwebengineview->setQWebEngineView_InitPainter_IsBase(true);
        vqwebengineview->initPainter(painter);
    } else {
        vqwebengineview->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnInitPainter(const QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self))) {
        vqwebengineview->setQWebEngineView_InitPainter_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QWebEngineView_Redirected(const QWebEngineView* self, QPoint* offset) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self))) {
        return vqwebengineview->redirected(offset);
    } else {
        return vqwebengineview->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QWebEngineView_QBaseRedirected(const QWebEngineView* self, QPoint* offset) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self))) {
        vqwebengineview->setQWebEngineView_Redirected_IsBase(true);
        return vqwebengineview->redirected(offset);
    } else {
        return vqwebengineview->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnRedirected(const QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self))) {
        vqwebengineview->setQWebEngineView_Redirected_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QWebEngineView_SharedPainter(const QWebEngineView* self) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self))) {
        return vqwebengineview->sharedPainter();
    } else {
        return vqwebengineview->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QWebEngineView_QBaseSharedPainter(const QWebEngineView* self) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self))) {
        vqwebengineview->setQWebEngineView_SharedPainter_IsBase(true);
        return vqwebengineview->sharedPainter();
    } else {
        return vqwebengineview->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnSharedPainter(const QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self))) {
        vqwebengineview->setQWebEngineView_SharedPainter_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineView_InputMethodEvent(QWebEngineView* self, QInputMethodEvent* param1) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->inputMethodEvent(param1);
    } else {
        vqwebengineview->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QWebEngineView_QBaseInputMethodEvent(QWebEngineView* self, QInputMethodEvent* param1) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_InputMethodEvent_IsBase(true);
        vqwebengineview->inputMethodEvent(param1);
    } else {
        vqwebengineview->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnInputMethodEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_InputMethodEvent_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QWebEngineView_InputMethodQuery(const QWebEngineView* self, int param1) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self))) {
        return new QVariant(vqwebengineview->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QWebEngineView_QBaseInputMethodQuery(const QWebEngineView* self, int param1) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self))) {
        vqwebengineview->setQWebEngineView_InputMethodQuery_IsBase(true);
        return new QVariant(vqwebengineview->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnInputMethodQuery(const QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self))) {
        vqwebengineview->setQWebEngineView_InputMethodQuery_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWebEngineView_FocusNextPrevChild(QWebEngineView* self, bool next) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        return vqwebengineview->focusNextPrevChild(next);
    } else {
        return vqwebengineview->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QWebEngineView_QBaseFocusNextPrevChild(QWebEngineView* self, bool next) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_FocusNextPrevChild_IsBase(true);
        return vqwebengineview->focusNextPrevChild(next);
    } else {
        return vqwebengineview->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnFocusNextPrevChild(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWebEngineView_EventFilter(QWebEngineView* self, QObject* watched, QEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        return vqwebengineview->eventFilter(watched, event);
    } else {
        return vqwebengineview->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QWebEngineView_QBaseEventFilter(QWebEngineView* self, QObject* watched, QEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_EventFilter_IsBase(true);
        return vqwebengineview->eventFilter(watched, event);
    } else {
        return vqwebengineview->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnEventFilter(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_EventFilter_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineView_TimerEvent(QWebEngineView* self, QTimerEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->timerEvent(event);
    } else {
        vqwebengineview->timerEvent(event);
    }
}

// Base class handler implementation
void QWebEngineView_QBaseTimerEvent(QWebEngineView* self, QTimerEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_TimerEvent_IsBase(true);
        vqwebengineview->timerEvent(event);
    } else {
        vqwebengineview->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnTimerEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_TimerEvent_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineView_ChildEvent(QWebEngineView* self, QChildEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->childEvent(event);
    } else {
        vqwebengineview->childEvent(event);
    }
}

// Base class handler implementation
void QWebEngineView_QBaseChildEvent(QWebEngineView* self, QChildEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_ChildEvent_IsBase(true);
        vqwebengineview->childEvent(event);
    } else {
        vqwebengineview->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnChildEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_ChildEvent_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineView_CustomEvent(QWebEngineView* self, QEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->customEvent(event);
    } else {
        vqwebengineview->customEvent(event);
    }
}

// Base class handler implementation
void QWebEngineView_QBaseCustomEvent(QWebEngineView* self, QEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_CustomEvent_IsBase(true);
        vqwebengineview->customEvent(event);
    } else {
        vqwebengineview->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnCustomEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_CustomEvent_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineView_ConnectNotify(QWebEngineView* self, QMetaMethod* signal) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->connectNotify(*signal);
    } else {
        vqwebengineview->connectNotify(*signal);
    }
}

// Base class handler implementation
void QWebEngineView_QBaseConnectNotify(QWebEngineView* self, QMetaMethod* signal) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_ConnectNotify_IsBase(true);
        vqwebengineview->connectNotify(*signal);
    } else {
        vqwebengineview->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnConnectNotify(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_ConnectNotify_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineView_DisconnectNotify(QWebEngineView* self, QMetaMethod* signal) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->disconnectNotify(*signal);
    } else {
        vqwebengineview->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QWebEngineView_QBaseDisconnectNotify(QWebEngineView* self, QMetaMethod* signal) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_DisconnectNotify_IsBase(true);
        vqwebengineview->disconnectNotify(*signal);
    } else {
        vqwebengineview->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnDisconnectNotify(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_DisconnectNotify_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineView_UpdateMicroFocus(QWebEngineView* self) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->updateMicroFocus();
    } else {
        vqwebengineview->updateMicroFocus();
    }
}

// Base class handler implementation
void QWebEngineView_QBaseUpdateMicroFocus(QWebEngineView* self) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_UpdateMicroFocus_IsBase(true);
        vqwebengineview->updateMicroFocus();
    } else {
        vqwebengineview->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnUpdateMicroFocus(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineView_Create(QWebEngineView* self) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->create();
    } else {
        vqwebengineview->create();
    }
}

// Base class handler implementation
void QWebEngineView_QBaseCreate(QWebEngineView* self) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_Create_IsBase(true);
        vqwebengineview->create();
    } else {
        vqwebengineview->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnCreate(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_Create_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QWebEngineView_Destroy(QWebEngineView* self) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->destroy();
    } else {
        vqwebengineview->destroy();
    }
}

// Base class handler implementation
void QWebEngineView_QBaseDestroy(QWebEngineView* self) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_Destroy_IsBase(true);
        vqwebengineview->destroy();
    } else {
        vqwebengineview->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnDestroy(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_Destroy_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWebEngineView_FocusNextChild(QWebEngineView* self) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        return vqwebengineview->focusNextChild();
    } else {
        return vqwebengineview->focusNextChild();
    }
}

// Base class handler implementation
bool QWebEngineView_QBaseFocusNextChild(QWebEngineView* self) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_FocusNextChild_IsBase(true);
        return vqwebengineview->focusNextChild();
    } else {
        return vqwebengineview->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnFocusNextChild(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_FocusNextChild_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWebEngineView_FocusPreviousChild(QWebEngineView* self) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        return vqwebengineview->focusPreviousChild();
    } else {
        return vqwebengineview->focusPreviousChild();
    }
}

// Base class handler implementation
bool QWebEngineView_QBaseFocusPreviousChild(QWebEngineView* self) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_FocusPreviousChild_IsBase(true);
        return vqwebengineview->focusPreviousChild();
    } else {
        return vqwebengineview->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnFocusPreviousChild(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->setQWebEngineView_FocusPreviousChild_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QWebEngineView_Sender(const QWebEngineView* self) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self))) {
        return vqwebengineview->sender();
    } else {
        return vqwebengineview->sender();
    }
}

// Base class handler implementation
QObject* QWebEngineView_QBaseSender(const QWebEngineView* self) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self))) {
        vqwebengineview->setQWebEngineView_Sender_IsBase(true);
        return vqwebengineview->sender();
    } else {
        return vqwebengineview->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnSender(const QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self))) {
        vqwebengineview->setQWebEngineView_Sender_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QWebEngineView_SenderSignalIndex(const QWebEngineView* self) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self))) {
        return vqwebengineview->senderSignalIndex();
    } else {
        return vqwebengineview->senderSignalIndex();
    }
}

// Base class handler implementation
int QWebEngineView_QBaseSenderSignalIndex(const QWebEngineView* self) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self))) {
        vqwebengineview->setQWebEngineView_SenderSignalIndex_IsBase(true);
        return vqwebengineview->senderSignalIndex();
    } else {
        return vqwebengineview->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnSenderSignalIndex(const QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self))) {
        vqwebengineview->setQWebEngineView_SenderSignalIndex_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QWebEngineView_Receivers(const QWebEngineView* self, const char* signal) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self))) {
        return vqwebengineview->receivers(signal);
    } else {
        return vqwebengineview->receivers(signal);
    }
}

// Base class handler implementation
int QWebEngineView_QBaseReceivers(const QWebEngineView* self, const char* signal) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self))) {
        vqwebengineview->setQWebEngineView_Receivers_IsBase(true);
        return vqwebengineview->receivers(signal);
    } else {
        return vqwebengineview->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnReceivers(const QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self))) {
        vqwebengineview->setQWebEngineView_Receivers_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QWebEngineView_IsSignalConnected(const QWebEngineView* self, QMetaMethod* signal) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self))) {
        return vqwebengineview->isSignalConnected(*signal);
    } else {
        return vqwebengineview->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QWebEngineView_QBaseIsSignalConnected(const QWebEngineView* self, QMetaMethod* signal) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self))) {
        vqwebengineview->setQWebEngineView_IsSignalConnected_IsBase(true);
        return vqwebengineview->isSignalConnected(*signal);
    } else {
        return vqwebengineview->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnIsSignalConnected(const QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self))) {
        vqwebengineview->setQWebEngineView_IsSignalConnected_Callback(reinterpret_cast<VirtualQWebEngineView::QWebEngineView_IsSignalConnected_Callback>(slot));
    }
}

void QWebEngineView_Delete(QWebEngineView* self) {
    delete self;
}
