#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QOffscreenSurface>
#include <QScreen>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QSurface>
#include <QSurfaceFormat>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <qoffscreensurface.h>
#include "libqoffscreensurface.hpp"
#include "libqoffscreensurface.hxx"

QOffscreenSurface* QOffscreenSurface_new() {
    return new VirtualQOffscreenSurface();
}

QOffscreenSurface* QOffscreenSurface_new2(QScreen* screen) {
    return new VirtualQOffscreenSurface(screen);
}

QOffscreenSurface* QOffscreenSurface_new3(QScreen* screen, QObject* parent) {
    return new VirtualQOffscreenSurface(screen, parent);
}

QMetaObject* QOffscreenSurface_MetaObject(const QOffscreenSurface* self) {
    return (QMetaObject*)self->metaObject();
}

void* QOffscreenSurface_Metacast(QOffscreenSurface* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QOffscreenSurface_Metacall(QOffscreenSurface* self, int param1, int param2, void** param3) {
    if (auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QOffscreenSurface_OnMetacall(QOffscreenSurface* self, intptr_t slot) {
    if (auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self)) {
        vqoffscreensurface->setQOffscreenSurface_Metacall_Callback(reinterpret_cast<VirtualQOffscreenSurface::QOffscreenSurface_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QOffscreenSurface_QBaseMetacall(QOffscreenSurface* self, int param1, int param2, void** param3) {
    if (auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self)) {
        vqoffscreensurface->setQOffscreenSurface_Metacall_IsBase(true);
        return vqoffscreensurface->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QOffscreenSurface_Tr(const char* s) {
    QString _ret = QOffscreenSurface::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QOffscreenSurface_Create(QOffscreenSurface* self) {
    self->create();
}

void QOffscreenSurface_Destroy(QOffscreenSurface* self) {
    self->destroy();
}

bool QOffscreenSurface_IsValid(const QOffscreenSurface* self) {
    return self->isValid();
}

void QOffscreenSurface_SetFormat(QOffscreenSurface* self, QSurfaceFormat* format) {
    self->setFormat(*format);
}

QSurfaceFormat* QOffscreenSurface_RequestedFormat(const QOffscreenSurface* self) {
    return new QSurfaceFormat(self->requestedFormat());
}

QScreen* QOffscreenSurface_Screen(const QOffscreenSurface* self) {
    return self->screen();
}

void QOffscreenSurface_SetScreen(QOffscreenSurface* self, QScreen* screen) {
    self->setScreen(screen);
}

void QOffscreenSurface_ScreenChanged(QOffscreenSurface* self, QScreen* screen) {
    self->screenChanged(screen);
}

void QOffscreenSurface_Connect_ScreenChanged(QOffscreenSurface* self, intptr_t slot) {
    void (*slotFunc)(QOffscreenSurface*, QScreen*) = reinterpret_cast<void (*)(QOffscreenSurface*, QScreen*)>(slot);
    QOffscreenSurface::connect(self, &QOffscreenSurface::screenChanged, [self, slotFunc](QScreen* screen) {
        QScreen* sigval1 = screen;
        slotFunc(self, sigval1);
    });
}

libqt_string QOffscreenSurface_Tr2(const char* s, const char* c) {
    QString _ret = QOffscreenSurface::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QOffscreenSurface_Tr3(const char* s, const char* c, int n) {
    QString _ret = QOffscreenSurface::tr(s, c, static_cast<int>(n));
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
int QOffscreenSurface_SurfaceType(const QOffscreenSurface* self) {
    if (auto* vqoffscreensurface = const_cast<VirtualQOffscreenSurface*>(dynamic_cast<const VirtualQOffscreenSurface*>(self))) {
        return static_cast<int>(vqoffscreensurface->surfaceType());
    } else {
        return static_cast<int>(vqoffscreensurface->surfaceType());
    }
}

// Base class handler implementation
int QOffscreenSurface_QBaseSurfaceType(const QOffscreenSurface* self) {
    if (auto* vqoffscreensurface = const_cast<VirtualQOffscreenSurface*>(dynamic_cast<const VirtualQOffscreenSurface*>(self))) {
        vqoffscreensurface->setQOffscreenSurface_SurfaceType_IsBase(true);
        return static_cast<int>(vqoffscreensurface->surfaceType());
    } else {
        return static_cast<int>(vqoffscreensurface->surfaceType());
    }
}

// Auxiliary method to allow providing re-implementation
void QOffscreenSurface_OnSurfaceType(const QOffscreenSurface* self, intptr_t slot) {
    if (auto* vqoffscreensurface = const_cast<VirtualQOffscreenSurface*>(dynamic_cast<const VirtualQOffscreenSurface*>(self))) {
        vqoffscreensurface->setQOffscreenSurface_SurfaceType_Callback(reinterpret_cast<VirtualQOffscreenSurface::QOffscreenSurface_SurfaceType_Callback>(slot));
    }
}

// Derived class handler implementation
QSurfaceFormat* QOffscreenSurface_Format(const QOffscreenSurface* self) {
    if (auto* vqoffscreensurface = const_cast<VirtualQOffscreenSurface*>(dynamic_cast<const VirtualQOffscreenSurface*>(self))) {
        return new QSurfaceFormat(vqoffscreensurface->format());
    } else {
        return new QSurfaceFormat(self->format());
    }
}

// Base class handler implementation
QSurfaceFormat* QOffscreenSurface_QBaseFormat(const QOffscreenSurface* self) {
    if (auto* vqoffscreensurface = const_cast<VirtualQOffscreenSurface*>(dynamic_cast<const VirtualQOffscreenSurface*>(self))) {
        vqoffscreensurface->setQOffscreenSurface_Format_IsBase(true);
        return new QSurfaceFormat(vqoffscreensurface->format());
    } else {
        return new QSurfaceFormat(self->format());
    }
}

// Auxiliary method to allow providing re-implementation
void QOffscreenSurface_OnFormat(const QOffscreenSurface* self, intptr_t slot) {
    if (auto* vqoffscreensurface = const_cast<VirtualQOffscreenSurface*>(dynamic_cast<const VirtualQOffscreenSurface*>(self))) {
        vqoffscreensurface->setQOffscreenSurface_Format_Callback(reinterpret_cast<VirtualQOffscreenSurface::QOffscreenSurface_Format_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QOffscreenSurface_Size(const QOffscreenSurface* self) {
    if (auto* vqoffscreensurface = const_cast<VirtualQOffscreenSurface*>(dynamic_cast<const VirtualQOffscreenSurface*>(self))) {
        return new QSize(vqoffscreensurface->size());
    } else {
        return new QSize(self->size());
    }
}

// Base class handler implementation
QSize* QOffscreenSurface_QBaseSize(const QOffscreenSurface* self) {
    if (auto* vqoffscreensurface = const_cast<VirtualQOffscreenSurface*>(dynamic_cast<const VirtualQOffscreenSurface*>(self))) {
        vqoffscreensurface->setQOffscreenSurface_Size_IsBase(true);
        return new QSize(vqoffscreensurface->size());
    } else {
        return new QSize(self->size());
    }
}

// Auxiliary method to allow providing re-implementation
void QOffscreenSurface_OnSize(const QOffscreenSurface* self, intptr_t slot) {
    if (auto* vqoffscreensurface = const_cast<VirtualQOffscreenSurface*>(dynamic_cast<const VirtualQOffscreenSurface*>(self))) {
        vqoffscreensurface->setQOffscreenSurface_Size_Callback(reinterpret_cast<VirtualQOffscreenSurface::QOffscreenSurface_Size_Callback>(slot));
    }
}

// Derived class handler implementation
bool QOffscreenSurface_Event(QOffscreenSurface* self, QEvent* event) {
    if (auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self)) {
        return vqoffscreensurface->event(event);
    } else {
        return vqoffscreensurface->event(event);
    }
}

// Base class handler implementation
bool QOffscreenSurface_QBaseEvent(QOffscreenSurface* self, QEvent* event) {
    if (auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self)) {
        vqoffscreensurface->setQOffscreenSurface_Event_IsBase(true);
        return vqoffscreensurface->event(event);
    } else {
        return vqoffscreensurface->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOffscreenSurface_OnEvent(QOffscreenSurface* self, intptr_t slot) {
    if (auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self)) {
        vqoffscreensurface->setQOffscreenSurface_Event_Callback(reinterpret_cast<VirtualQOffscreenSurface::QOffscreenSurface_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QOffscreenSurface_EventFilter(QOffscreenSurface* self, QObject* watched, QEvent* event) {
    if (auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self)) {
        return vqoffscreensurface->eventFilter(watched, event);
    } else {
        return vqoffscreensurface->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QOffscreenSurface_QBaseEventFilter(QOffscreenSurface* self, QObject* watched, QEvent* event) {
    if (auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self)) {
        vqoffscreensurface->setQOffscreenSurface_EventFilter_IsBase(true);
        return vqoffscreensurface->eventFilter(watched, event);
    } else {
        return vqoffscreensurface->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOffscreenSurface_OnEventFilter(QOffscreenSurface* self, intptr_t slot) {
    if (auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self)) {
        vqoffscreensurface->setQOffscreenSurface_EventFilter_Callback(reinterpret_cast<VirtualQOffscreenSurface::QOffscreenSurface_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QOffscreenSurface_TimerEvent(QOffscreenSurface* self, QTimerEvent* event) {
    if (auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self)) {
        vqoffscreensurface->timerEvent(event);
    } else {
        vqoffscreensurface->timerEvent(event);
    }
}

// Base class handler implementation
void QOffscreenSurface_QBaseTimerEvent(QOffscreenSurface* self, QTimerEvent* event) {
    if (auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self)) {
        vqoffscreensurface->setQOffscreenSurface_TimerEvent_IsBase(true);
        vqoffscreensurface->timerEvent(event);
    } else {
        vqoffscreensurface->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOffscreenSurface_OnTimerEvent(QOffscreenSurface* self, intptr_t slot) {
    if (auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self)) {
        vqoffscreensurface->setQOffscreenSurface_TimerEvent_Callback(reinterpret_cast<VirtualQOffscreenSurface::QOffscreenSurface_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOffscreenSurface_ChildEvent(QOffscreenSurface* self, QChildEvent* event) {
    if (auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self)) {
        vqoffscreensurface->childEvent(event);
    } else {
        vqoffscreensurface->childEvent(event);
    }
}

// Base class handler implementation
void QOffscreenSurface_QBaseChildEvent(QOffscreenSurface* self, QChildEvent* event) {
    if (auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self)) {
        vqoffscreensurface->setQOffscreenSurface_ChildEvent_IsBase(true);
        vqoffscreensurface->childEvent(event);
    } else {
        vqoffscreensurface->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOffscreenSurface_OnChildEvent(QOffscreenSurface* self, intptr_t slot) {
    if (auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self)) {
        vqoffscreensurface->setQOffscreenSurface_ChildEvent_Callback(reinterpret_cast<VirtualQOffscreenSurface::QOffscreenSurface_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOffscreenSurface_CustomEvent(QOffscreenSurface* self, QEvent* event) {
    if (auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self)) {
        vqoffscreensurface->customEvent(event);
    } else {
        vqoffscreensurface->customEvent(event);
    }
}

// Base class handler implementation
void QOffscreenSurface_QBaseCustomEvent(QOffscreenSurface* self, QEvent* event) {
    if (auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self)) {
        vqoffscreensurface->setQOffscreenSurface_CustomEvent_IsBase(true);
        vqoffscreensurface->customEvent(event);
    } else {
        vqoffscreensurface->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOffscreenSurface_OnCustomEvent(QOffscreenSurface* self, intptr_t slot) {
    if (auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self)) {
        vqoffscreensurface->setQOffscreenSurface_CustomEvent_Callback(reinterpret_cast<VirtualQOffscreenSurface::QOffscreenSurface_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOffscreenSurface_ConnectNotify(QOffscreenSurface* self, QMetaMethod* signal) {
    if (auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self)) {
        vqoffscreensurface->connectNotify(*signal);
    } else {
        vqoffscreensurface->connectNotify(*signal);
    }
}

// Base class handler implementation
void QOffscreenSurface_QBaseConnectNotify(QOffscreenSurface* self, QMetaMethod* signal) {
    if (auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self)) {
        vqoffscreensurface->setQOffscreenSurface_ConnectNotify_IsBase(true);
        vqoffscreensurface->connectNotify(*signal);
    } else {
        vqoffscreensurface->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QOffscreenSurface_OnConnectNotify(QOffscreenSurface* self, intptr_t slot) {
    if (auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self)) {
        vqoffscreensurface->setQOffscreenSurface_ConnectNotify_Callback(reinterpret_cast<VirtualQOffscreenSurface::QOffscreenSurface_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QOffscreenSurface_DisconnectNotify(QOffscreenSurface* self, QMetaMethod* signal) {
    if (auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self)) {
        vqoffscreensurface->disconnectNotify(*signal);
    } else {
        vqoffscreensurface->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QOffscreenSurface_QBaseDisconnectNotify(QOffscreenSurface* self, QMetaMethod* signal) {
    if (auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self)) {
        vqoffscreensurface->setQOffscreenSurface_DisconnectNotify_IsBase(true);
        vqoffscreensurface->disconnectNotify(*signal);
    } else {
        vqoffscreensurface->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QOffscreenSurface_OnDisconnectNotify(QOffscreenSurface* self, intptr_t slot) {
    if (auto* vqoffscreensurface = dynamic_cast<VirtualQOffscreenSurface*>(self)) {
        vqoffscreensurface->setQOffscreenSurface_DisconnectNotify_Callback(reinterpret_cast<VirtualQOffscreenSurface::QOffscreenSurface_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void* QOffscreenSurface_ResolveInterface(const QOffscreenSurface* self, const char* name, int revision) {
    if (auto* vqoffscreensurface = const_cast<VirtualQOffscreenSurface*>(dynamic_cast<const VirtualQOffscreenSurface*>(self))) {
        return vqoffscreensurface->resolveInterface(name, static_cast<int>(revision));
    } else {
        return vqoffscreensurface->resolveInterface(name, static_cast<int>(revision));
    }
}

// Base class handler implementation
void* QOffscreenSurface_QBaseResolveInterface(const QOffscreenSurface* self, const char* name, int revision) {
    if (auto* vqoffscreensurface = const_cast<VirtualQOffscreenSurface*>(dynamic_cast<const VirtualQOffscreenSurface*>(self))) {
        vqoffscreensurface->setQOffscreenSurface_ResolveInterface_IsBase(true);
        return vqoffscreensurface->resolveInterface(name, static_cast<int>(revision));
    } else {
        return vqoffscreensurface->resolveInterface(name, static_cast<int>(revision));
    }
}

// Auxiliary method to allow providing re-implementation
void QOffscreenSurface_OnResolveInterface(const QOffscreenSurface* self, intptr_t slot) {
    if (auto* vqoffscreensurface = const_cast<VirtualQOffscreenSurface*>(dynamic_cast<const VirtualQOffscreenSurface*>(self))) {
        vqoffscreensurface->setQOffscreenSurface_ResolveInterface_Callback(reinterpret_cast<VirtualQOffscreenSurface::QOffscreenSurface_ResolveInterface_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QOffscreenSurface_Sender(const QOffscreenSurface* self) {
    if (auto* vqoffscreensurface = const_cast<VirtualQOffscreenSurface*>(dynamic_cast<const VirtualQOffscreenSurface*>(self))) {
        return vqoffscreensurface->sender();
    } else {
        return vqoffscreensurface->sender();
    }
}

// Base class handler implementation
QObject* QOffscreenSurface_QBaseSender(const QOffscreenSurface* self) {
    if (auto* vqoffscreensurface = const_cast<VirtualQOffscreenSurface*>(dynamic_cast<const VirtualQOffscreenSurface*>(self))) {
        vqoffscreensurface->setQOffscreenSurface_Sender_IsBase(true);
        return vqoffscreensurface->sender();
    } else {
        return vqoffscreensurface->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QOffscreenSurface_OnSender(const QOffscreenSurface* self, intptr_t slot) {
    if (auto* vqoffscreensurface = const_cast<VirtualQOffscreenSurface*>(dynamic_cast<const VirtualQOffscreenSurface*>(self))) {
        vqoffscreensurface->setQOffscreenSurface_Sender_Callback(reinterpret_cast<VirtualQOffscreenSurface::QOffscreenSurface_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QOffscreenSurface_SenderSignalIndex(const QOffscreenSurface* self) {
    if (auto* vqoffscreensurface = const_cast<VirtualQOffscreenSurface*>(dynamic_cast<const VirtualQOffscreenSurface*>(self))) {
        return vqoffscreensurface->senderSignalIndex();
    } else {
        return vqoffscreensurface->senderSignalIndex();
    }
}

// Base class handler implementation
int QOffscreenSurface_QBaseSenderSignalIndex(const QOffscreenSurface* self) {
    if (auto* vqoffscreensurface = const_cast<VirtualQOffscreenSurface*>(dynamic_cast<const VirtualQOffscreenSurface*>(self))) {
        vqoffscreensurface->setQOffscreenSurface_SenderSignalIndex_IsBase(true);
        return vqoffscreensurface->senderSignalIndex();
    } else {
        return vqoffscreensurface->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QOffscreenSurface_OnSenderSignalIndex(const QOffscreenSurface* self, intptr_t slot) {
    if (auto* vqoffscreensurface = const_cast<VirtualQOffscreenSurface*>(dynamic_cast<const VirtualQOffscreenSurface*>(self))) {
        vqoffscreensurface->setQOffscreenSurface_SenderSignalIndex_Callback(reinterpret_cast<VirtualQOffscreenSurface::QOffscreenSurface_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QOffscreenSurface_Receivers(const QOffscreenSurface* self, const char* signal) {
    if (auto* vqoffscreensurface = const_cast<VirtualQOffscreenSurface*>(dynamic_cast<const VirtualQOffscreenSurface*>(self))) {
        return vqoffscreensurface->receivers(signal);
    } else {
        return vqoffscreensurface->receivers(signal);
    }
}

// Base class handler implementation
int QOffscreenSurface_QBaseReceivers(const QOffscreenSurface* self, const char* signal) {
    if (auto* vqoffscreensurface = const_cast<VirtualQOffscreenSurface*>(dynamic_cast<const VirtualQOffscreenSurface*>(self))) {
        vqoffscreensurface->setQOffscreenSurface_Receivers_IsBase(true);
        return vqoffscreensurface->receivers(signal);
    } else {
        return vqoffscreensurface->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QOffscreenSurface_OnReceivers(const QOffscreenSurface* self, intptr_t slot) {
    if (auto* vqoffscreensurface = const_cast<VirtualQOffscreenSurface*>(dynamic_cast<const VirtualQOffscreenSurface*>(self))) {
        vqoffscreensurface->setQOffscreenSurface_Receivers_Callback(reinterpret_cast<VirtualQOffscreenSurface::QOffscreenSurface_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QOffscreenSurface_IsSignalConnected(const QOffscreenSurface* self, QMetaMethod* signal) {
    if (auto* vqoffscreensurface = const_cast<VirtualQOffscreenSurface*>(dynamic_cast<const VirtualQOffscreenSurface*>(self))) {
        return vqoffscreensurface->isSignalConnected(*signal);
    } else {
        return vqoffscreensurface->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QOffscreenSurface_QBaseIsSignalConnected(const QOffscreenSurface* self, QMetaMethod* signal) {
    if (auto* vqoffscreensurface = const_cast<VirtualQOffscreenSurface*>(dynamic_cast<const VirtualQOffscreenSurface*>(self))) {
        vqoffscreensurface->setQOffscreenSurface_IsSignalConnected_IsBase(true);
        return vqoffscreensurface->isSignalConnected(*signal);
    } else {
        return vqoffscreensurface->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QOffscreenSurface_OnIsSignalConnected(const QOffscreenSurface* self, intptr_t slot) {
    if (auto* vqoffscreensurface = const_cast<VirtualQOffscreenSurface*>(dynamic_cast<const VirtualQOffscreenSurface*>(self))) {
        vqoffscreensurface->setQOffscreenSurface_IsSignalConnected_Callback(reinterpret_cast<VirtualQOffscreenSurface::QOffscreenSurface_IsSignalConnected_Callback>(slot));
    }
}

void QOffscreenSurface_Delete(QOffscreenSurface* self) {
    delete self;
}
