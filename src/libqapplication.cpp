#include <QAbstractEventDispatcher>
#include <QAbstractNativeEventFilter>
#include <QAnyStringView>
#include <QApplication>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QClipboard>
#include <QCoreApplication>
#include <QCursor>
#include <QEvent>
#include <QFont>
#include <QFontMetrics>
#include <QGuiApplication>
#include <QIcon>
#include <QInputMethod>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QPalette>
#include <QPoint>
#include <QScreen>
#include <QSessionManager>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyle>
#include <QStyleHints>
#include <QThread>
#include <QTimerEvent>
#include <QTranslator>
#include <QVariant>
#include <QWidget>
#include <QWindow>
#include <qapplication.h>
#include "libqapplication.hpp"
#include "libqapplication.hxx"

QApplication* QApplication_new(int* argc, char** argv) {
    return new VirtualQApplication(static_cast<int&>(*argc), argv);
}

QApplication* QApplication_new2(int* argc, char** argv, int param3) {
    return new VirtualQApplication(static_cast<int&>(*argc), argv, static_cast<int>(param3));
}

QMetaObject* QApplication_MetaObject(const QApplication* self) {
    return (QMetaObject*)self->metaObject();
}

void* QApplication_Metacast(QApplication* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QApplication_Metacall(QApplication* self, int param1, int param2, void** param3) {
    if (auto* vqapplication = dynamic_cast<VirtualQApplication*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QApplication_OnMetacall(QApplication* self, intptr_t slot) {
    if (auto* vqapplication = dynamic_cast<VirtualQApplication*>(self)) {
        vqapplication->setQApplication_Metacall_Callback(reinterpret_cast<VirtualQApplication::QApplication_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QApplication_QBaseMetacall(QApplication* self, int param1, int param2, void** param3) {
    if (auto* vqapplication = dynamic_cast<VirtualQApplication*>(self)) {
        vqapplication->setQApplication_Metacall_IsBase(true);
        return vqapplication->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QApplication_Tr(const char* s) {
    QString _ret = QApplication::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QStyle* QApplication_Style() {
    return QApplication::style();
}

void QApplication_SetStyle(QStyle* style) {
    QApplication::setStyle(style);
}

QStyle* QApplication_SetStyleWithStyle(libqt_string style) {
    QString style_QString = QString::fromUtf8(style.data, style.len);
    return QApplication::setStyle(style_QString);
}

QPalette* QApplication_Palette(QWidget* param1) {
    return new QPalette(QApplication::palette(param1));
}

QPalette* QApplication_PaletteWithClassName(const char* className) {
    return new QPalette(QApplication::palette(className));
}

void QApplication_SetPalette(QPalette* param1) {
    QApplication::setPalette(*param1);
}

QFont* QApplication_Font() {
    return new QFont(QApplication::font());
}

QFont* QApplication_FontWithQWidget(QWidget* param1) {
    return new QFont(QApplication::font(param1));
}

QFont* QApplication_FontWithClassName(const char* className) {
    return new QFont(QApplication::font(className));
}

void QApplication_SetFont(QFont* param1) {
    QApplication::setFont(*param1);
}

QFontMetrics* QApplication_FontMetrics() {
    return new QFontMetrics(QApplication::fontMetrics());
}

libqt_list /* of QWidget* */ QApplication_AllWidgets() {
    QWidgetList _ret = QApplication::allWidgets();
    // Convert QList<> from C++ memory to manually-managed C memory
    QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QWidget* */ QApplication_TopLevelWidgets() {
    QWidgetList _ret = QApplication::topLevelWidgets();
    // Convert QList<> from C++ memory to manually-managed C memory
    QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

QWidget* QApplication_ActivePopupWidget() {
    return QApplication::activePopupWidget();
}

QWidget* QApplication_ActiveModalWidget() {
    return QApplication::activeModalWidget();
}

QWidget* QApplication_FocusWidget() {
    return QApplication::focusWidget();
}

QWidget* QApplication_ActiveWindow() {
    return QApplication::activeWindow();
}

void QApplication_SetActiveWindow(QWidget* act) {
    QApplication::setActiveWindow(act);
}

QWidget* QApplication_WidgetAt(QPoint* p) {
    return QApplication::widgetAt(*p);
}

QWidget* QApplication_WidgetAt2(int x, int y) {
    return QApplication::widgetAt(static_cast<int>(x), static_cast<int>(y));
}

QWidget* QApplication_TopLevelAt(QPoint* p) {
    return QApplication::topLevelAt(*p);
}

QWidget* QApplication_TopLevelAt2(int x, int y) {
    return QApplication::topLevelAt(static_cast<int>(x), static_cast<int>(y));
}

void QApplication_Beep() {
    QApplication::beep();
}

void QApplication_Alert(QWidget* widget) {
    QApplication::alert(widget);
}

void QApplication_SetCursorFlashTime(int cursorFlashTime) {
    QApplication::setCursorFlashTime(static_cast<int>(cursorFlashTime));
}

int QApplication_CursorFlashTime() {
    return QApplication::cursorFlashTime();
}

void QApplication_SetDoubleClickInterval(int doubleClickInterval) {
    QApplication::setDoubleClickInterval(static_cast<int>(doubleClickInterval));
}

int QApplication_DoubleClickInterval() {
    return QApplication::doubleClickInterval();
}

void QApplication_SetKeyboardInputInterval(int keyboardInputInterval) {
    QApplication::setKeyboardInputInterval(static_cast<int>(keyboardInputInterval));
}

int QApplication_KeyboardInputInterval() {
    return QApplication::keyboardInputInterval();
}

void QApplication_SetWheelScrollLines(int wheelScrollLines) {
    QApplication::setWheelScrollLines(static_cast<int>(wheelScrollLines));
}

int QApplication_WheelScrollLines() {
    return QApplication::wheelScrollLines();
}

void QApplication_SetStartDragTime(int ms) {
    QApplication::setStartDragTime(static_cast<int>(ms));
}

int QApplication_StartDragTime() {
    return QApplication::startDragTime();
}

void QApplication_SetStartDragDistance(int l) {
    QApplication::setStartDragDistance(static_cast<int>(l));
}

int QApplication_StartDragDistance() {
    return QApplication::startDragDistance();
}

bool QApplication_IsEffectEnabled(int param1) {
    return QApplication::isEffectEnabled(static_cast<Qt::UIEffect>(param1));
}

void QApplication_SetEffectEnabled(int param1) {
    QApplication::setEffectEnabled(static_cast<Qt::UIEffect>(param1));
}

int QApplication_Exec() {
    return QApplication::exec();
}

void QApplication_FocusChanged(QApplication* self, QWidget* old, QWidget* now) {
    self->focusChanged(old, now);
}

void QApplication_Connect_FocusChanged(QApplication* self, intptr_t slot) {
    void (*slotFunc)(QApplication*, QWidget*, QWidget*) = reinterpret_cast<void (*)(QApplication*, QWidget*, QWidget*)>(slot);
    QApplication::connect(self, &QApplication::focusChanged, [self, slotFunc](QWidget* old, QWidget* now) {
        QWidget* sigval1 = old;
        QWidget* sigval2 = now;
        slotFunc(self, sigval1, sigval2);
    });
}

libqt_string QApplication_StyleSheet(const QApplication* self) {
    QString _ret = self->styleSheet();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QApplication_SetStyleSheet(QApplication* self, libqt_string sheet) {
    QString sheet_QString = QString::fromUtf8(sheet.data, sheet.len);
    self->setStyleSheet(sheet_QString);
}

void QApplication_SetAutoSipEnabled(QApplication* self, const bool enabled) {
    self->setAutoSipEnabled(enabled);
}

bool QApplication_AutoSipEnabled(const QApplication* self) {
    return self->autoSipEnabled();
}

void QApplication_CloseAllWindows() {
    QApplication::closeAllWindows();
}

void QApplication_AboutQt() {
    QApplication::aboutQt();
}

libqt_string QApplication_Tr2(const char* s, const char* c) {
    QString _ret = QApplication::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QApplication_Tr3(const char* s, const char* c, int n) {
    QString _ret = QApplication::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QApplication_SetPalette2(QPalette* param1, const char* className) {
    QApplication::setPalette(*param1, className);
}

void QApplication_SetFont2(QFont* param1, const char* className) {
    QApplication::setFont(*param1, className);
}

void QApplication_Alert2(QWidget* widget, int duration) {
    QApplication::alert(widget, static_cast<int>(duration));
}

void QApplication_SetEffectEnabled2(int param1, bool enable) {
    QApplication::setEffectEnabled(static_cast<Qt::UIEffect>(param1), enable);
}

// Derived class handler implementation
bool QApplication_Notify(QApplication* self, QObject* param1, QEvent* param2) {
    if (auto* vqapplication = dynamic_cast<VirtualQApplication*>(self)) {
        return vqapplication->notify(param1, param2);
    } else {
        return vqapplication->notify(param1, param2);
    }
}

// Base class handler implementation
bool QApplication_QBaseNotify(QApplication* self, QObject* param1, QEvent* param2) {
    if (auto* vqapplication = dynamic_cast<VirtualQApplication*>(self)) {
        vqapplication->setQApplication_Notify_IsBase(true);
        return vqapplication->notify(param1, param2);
    } else {
        return vqapplication->notify(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QApplication_OnNotify(QApplication* self, intptr_t slot) {
    if (auto* vqapplication = dynamic_cast<VirtualQApplication*>(self)) {
        vqapplication->setQApplication_Notify_Callback(reinterpret_cast<VirtualQApplication::QApplication_Notify_Callback>(slot));
    }
}

// Derived class handler implementation
bool QApplication_Event(QApplication* self, QEvent* param1) {
    if (auto* vqapplication = dynamic_cast<VirtualQApplication*>(self)) {
        return vqapplication->event(param1);
    } else {
        return vqapplication->event(param1);
    }
}

// Base class handler implementation
bool QApplication_QBaseEvent(QApplication* self, QEvent* param1) {
    if (auto* vqapplication = dynamic_cast<VirtualQApplication*>(self)) {
        vqapplication->setQApplication_Event_IsBase(true);
        return vqapplication->event(param1);
    } else {
        return vqapplication->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QApplication_OnEvent(QApplication* self, intptr_t slot) {
    if (auto* vqapplication = dynamic_cast<VirtualQApplication*>(self)) {
        vqapplication->setQApplication_Event_Callback(reinterpret_cast<VirtualQApplication::QApplication_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QApplication_EventFilter(QApplication* self, QObject* watched, QEvent* event) {
    if (auto* vqapplication = dynamic_cast<VirtualQApplication*>(self)) {
        return vqapplication->eventFilter(watched, event);
    } else {
        return vqapplication->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QApplication_QBaseEventFilter(QApplication* self, QObject* watched, QEvent* event) {
    if (auto* vqapplication = dynamic_cast<VirtualQApplication*>(self)) {
        vqapplication->setQApplication_EventFilter_IsBase(true);
        return vqapplication->eventFilter(watched, event);
    } else {
        return vqapplication->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QApplication_OnEventFilter(QApplication* self, intptr_t slot) {
    if (auto* vqapplication = dynamic_cast<VirtualQApplication*>(self)) {
        vqapplication->setQApplication_EventFilter_Callback(reinterpret_cast<VirtualQApplication::QApplication_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QApplication_TimerEvent(QApplication* self, QTimerEvent* event) {
    if (auto* vqapplication = dynamic_cast<VirtualQApplication*>(self)) {
        vqapplication->timerEvent(event);
    } else {
        vqapplication->timerEvent(event);
    }
}

// Base class handler implementation
void QApplication_QBaseTimerEvent(QApplication* self, QTimerEvent* event) {
    if (auto* vqapplication = dynamic_cast<VirtualQApplication*>(self)) {
        vqapplication->setQApplication_TimerEvent_IsBase(true);
        vqapplication->timerEvent(event);
    } else {
        vqapplication->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QApplication_OnTimerEvent(QApplication* self, intptr_t slot) {
    if (auto* vqapplication = dynamic_cast<VirtualQApplication*>(self)) {
        vqapplication->setQApplication_TimerEvent_Callback(reinterpret_cast<VirtualQApplication::QApplication_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QApplication_ChildEvent(QApplication* self, QChildEvent* event) {
    if (auto* vqapplication = dynamic_cast<VirtualQApplication*>(self)) {
        vqapplication->childEvent(event);
    } else {
        vqapplication->childEvent(event);
    }
}

// Base class handler implementation
void QApplication_QBaseChildEvent(QApplication* self, QChildEvent* event) {
    if (auto* vqapplication = dynamic_cast<VirtualQApplication*>(self)) {
        vqapplication->setQApplication_ChildEvent_IsBase(true);
        vqapplication->childEvent(event);
    } else {
        vqapplication->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QApplication_OnChildEvent(QApplication* self, intptr_t slot) {
    if (auto* vqapplication = dynamic_cast<VirtualQApplication*>(self)) {
        vqapplication->setQApplication_ChildEvent_Callback(reinterpret_cast<VirtualQApplication::QApplication_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QApplication_CustomEvent(QApplication* self, QEvent* event) {
    if (auto* vqapplication = dynamic_cast<VirtualQApplication*>(self)) {
        vqapplication->customEvent(event);
    } else {
        vqapplication->customEvent(event);
    }
}

// Base class handler implementation
void QApplication_QBaseCustomEvent(QApplication* self, QEvent* event) {
    if (auto* vqapplication = dynamic_cast<VirtualQApplication*>(self)) {
        vqapplication->setQApplication_CustomEvent_IsBase(true);
        vqapplication->customEvent(event);
    } else {
        vqapplication->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QApplication_OnCustomEvent(QApplication* self, intptr_t slot) {
    if (auto* vqapplication = dynamic_cast<VirtualQApplication*>(self)) {
        vqapplication->setQApplication_CustomEvent_Callback(reinterpret_cast<VirtualQApplication::QApplication_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QApplication_ConnectNotify(QApplication* self, QMetaMethod* signal) {
    if (auto* vqapplication = dynamic_cast<VirtualQApplication*>(self)) {
        vqapplication->connectNotify(*signal);
    } else {
        vqapplication->connectNotify(*signal);
    }
}

// Base class handler implementation
void QApplication_QBaseConnectNotify(QApplication* self, QMetaMethod* signal) {
    if (auto* vqapplication = dynamic_cast<VirtualQApplication*>(self)) {
        vqapplication->setQApplication_ConnectNotify_IsBase(true);
        vqapplication->connectNotify(*signal);
    } else {
        vqapplication->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QApplication_OnConnectNotify(QApplication* self, intptr_t slot) {
    if (auto* vqapplication = dynamic_cast<VirtualQApplication*>(self)) {
        vqapplication->setQApplication_ConnectNotify_Callback(reinterpret_cast<VirtualQApplication::QApplication_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QApplication_DisconnectNotify(QApplication* self, QMetaMethod* signal) {
    if (auto* vqapplication = dynamic_cast<VirtualQApplication*>(self)) {
        vqapplication->disconnectNotify(*signal);
    } else {
        vqapplication->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QApplication_QBaseDisconnectNotify(QApplication* self, QMetaMethod* signal) {
    if (auto* vqapplication = dynamic_cast<VirtualQApplication*>(self)) {
        vqapplication->setQApplication_DisconnectNotify_IsBase(true);
        vqapplication->disconnectNotify(*signal);
    } else {
        vqapplication->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QApplication_OnDisconnectNotify(QApplication* self, intptr_t slot) {
    if (auto* vqapplication = dynamic_cast<VirtualQApplication*>(self)) {
        vqapplication->setQApplication_DisconnectNotify_Callback(reinterpret_cast<VirtualQApplication::QApplication_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void* QApplication_ResolveInterface(const QApplication* self, const char* name, int revision) {
    if (auto* vqapplication = const_cast<VirtualQApplication*>(dynamic_cast<const VirtualQApplication*>(self))) {
        return vqapplication->resolveInterface(name, static_cast<int>(revision));
    } else {
        return vqapplication->resolveInterface(name, static_cast<int>(revision));
    }
}

// Base class handler implementation
void* QApplication_QBaseResolveInterface(const QApplication* self, const char* name, int revision) {
    if (auto* vqapplication = const_cast<VirtualQApplication*>(dynamic_cast<const VirtualQApplication*>(self))) {
        vqapplication->setQApplication_ResolveInterface_IsBase(true);
        return vqapplication->resolveInterface(name, static_cast<int>(revision));
    } else {
        return vqapplication->resolveInterface(name, static_cast<int>(revision));
    }
}

// Auxiliary method to allow providing re-implementation
void QApplication_OnResolveInterface(const QApplication* self, intptr_t slot) {
    if (auto* vqapplication = const_cast<VirtualQApplication*>(dynamic_cast<const VirtualQApplication*>(self))) {
        vqapplication->setQApplication_ResolveInterface_Callback(reinterpret_cast<VirtualQApplication::QApplication_ResolveInterface_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QApplication_Sender(const QApplication* self) {
    if (auto* vqapplication = const_cast<VirtualQApplication*>(dynamic_cast<const VirtualQApplication*>(self))) {
        return vqapplication->sender();
    } else {
        return vqapplication->sender();
    }
}

// Base class handler implementation
QObject* QApplication_QBaseSender(const QApplication* self) {
    if (auto* vqapplication = const_cast<VirtualQApplication*>(dynamic_cast<const VirtualQApplication*>(self))) {
        vqapplication->setQApplication_Sender_IsBase(true);
        return vqapplication->sender();
    } else {
        return vqapplication->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QApplication_OnSender(const QApplication* self, intptr_t slot) {
    if (auto* vqapplication = const_cast<VirtualQApplication*>(dynamic_cast<const VirtualQApplication*>(self))) {
        vqapplication->setQApplication_Sender_Callback(reinterpret_cast<VirtualQApplication::QApplication_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QApplication_SenderSignalIndex(const QApplication* self) {
    if (auto* vqapplication = const_cast<VirtualQApplication*>(dynamic_cast<const VirtualQApplication*>(self))) {
        return vqapplication->senderSignalIndex();
    } else {
        return vqapplication->senderSignalIndex();
    }
}

// Base class handler implementation
int QApplication_QBaseSenderSignalIndex(const QApplication* self) {
    if (auto* vqapplication = const_cast<VirtualQApplication*>(dynamic_cast<const VirtualQApplication*>(self))) {
        vqapplication->setQApplication_SenderSignalIndex_IsBase(true);
        return vqapplication->senderSignalIndex();
    } else {
        return vqapplication->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QApplication_OnSenderSignalIndex(const QApplication* self, intptr_t slot) {
    if (auto* vqapplication = const_cast<VirtualQApplication*>(dynamic_cast<const VirtualQApplication*>(self))) {
        vqapplication->setQApplication_SenderSignalIndex_Callback(reinterpret_cast<VirtualQApplication::QApplication_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QApplication_Receivers(const QApplication* self, const char* signal) {
    if (auto* vqapplication = const_cast<VirtualQApplication*>(dynamic_cast<const VirtualQApplication*>(self))) {
        return vqapplication->receivers(signal);
    } else {
        return vqapplication->receivers(signal);
    }
}

// Base class handler implementation
int QApplication_QBaseReceivers(const QApplication* self, const char* signal) {
    if (auto* vqapplication = const_cast<VirtualQApplication*>(dynamic_cast<const VirtualQApplication*>(self))) {
        vqapplication->setQApplication_Receivers_IsBase(true);
        return vqapplication->receivers(signal);
    } else {
        return vqapplication->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QApplication_OnReceivers(const QApplication* self, intptr_t slot) {
    if (auto* vqapplication = const_cast<VirtualQApplication*>(dynamic_cast<const VirtualQApplication*>(self))) {
        vqapplication->setQApplication_Receivers_Callback(reinterpret_cast<VirtualQApplication::QApplication_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QApplication_IsSignalConnected(const QApplication* self, QMetaMethod* signal) {
    if (auto* vqapplication = const_cast<VirtualQApplication*>(dynamic_cast<const VirtualQApplication*>(self))) {
        return vqapplication->isSignalConnected(*signal);
    } else {
        return vqapplication->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QApplication_QBaseIsSignalConnected(const QApplication* self, QMetaMethod* signal) {
    if (auto* vqapplication = const_cast<VirtualQApplication*>(dynamic_cast<const VirtualQApplication*>(self))) {
        vqapplication->setQApplication_IsSignalConnected_IsBase(true);
        return vqapplication->isSignalConnected(*signal);
    } else {
        return vqapplication->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QApplication_OnIsSignalConnected(const QApplication* self, intptr_t slot) {
    if (auto* vqapplication = const_cast<VirtualQApplication*>(dynamic_cast<const VirtualQApplication*>(self))) {
        vqapplication->setQApplication_IsSignalConnected_Callback(reinterpret_cast<VirtualQApplication::QApplication_IsSignalConnected_Callback>(slot));
    }
}

void QApplication_Delete(QApplication* self) {
    delete self;
}
