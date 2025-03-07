#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QKeySequence>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QShortcut>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <qshortcut.h>
#include "libqshortcut.hpp"
#include "libqshortcut.hxx"

QShortcut* QShortcut_new(QObject* parent) {
    return new VirtualQShortcut(parent);
}

QShortcut* QShortcut_new2(QKeySequence* key, QObject* parent) {
    return new VirtualQShortcut(*key, parent);
}

QShortcut* QShortcut_new3(int key, QObject* parent) {
    return new VirtualQShortcut(static_cast<QKeySequence::StandardKey>(key), parent);
}

QShortcut* QShortcut_new4(QKeySequence* key, QObject* parent, const char* member) {
    return new VirtualQShortcut(*key, parent, member);
}

QShortcut* QShortcut_new5(QKeySequence* key, QObject* parent, const char* member, const char* ambiguousMember) {
    return new VirtualQShortcut(*key, parent, member, ambiguousMember);
}

QShortcut* QShortcut_new6(QKeySequence* key, QObject* parent, const char* member, const char* ambiguousMember, int context) {
    return new VirtualQShortcut(*key, parent, member, ambiguousMember, static_cast<Qt::ShortcutContext>(context));
}

QShortcut* QShortcut_new7(int key, QObject* parent, const char* member) {
    return new VirtualQShortcut(static_cast<QKeySequence::StandardKey>(key), parent, member);
}

QShortcut* QShortcut_new8(int key, QObject* parent, const char* member, const char* ambiguousMember) {
    return new VirtualQShortcut(static_cast<QKeySequence::StandardKey>(key), parent, member, ambiguousMember);
}

QShortcut* QShortcut_new9(int key, QObject* parent, const char* member, const char* ambiguousMember, int context) {
    return new VirtualQShortcut(static_cast<QKeySequence::StandardKey>(key), parent, member, ambiguousMember, static_cast<Qt::ShortcutContext>(context));
}

QMetaObject* QShortcut_MetaObject(const QShortcut* self) {
    return (QMetaObject*)self->metaObject();
}

void* QShortcut_Metacast(QShortcut* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QShortcut_Metacall(QShortcut* self, int param1, int param2, void** param3) {
    if (auto* vqshortcut = dynamic_cast<VirtualQShortcut*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QShortcut_OnMetacall(QShortcut* self, intptr_t slot) {
    if (auto* vqshortcut = dynamic_cast<VirtualQShortcut*>(self)) {
        vqshortcut->setQShortcut_Metacall_Callback(reinterpret_cast<VirtualQShortcut::QShortcut_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QShortcut_QBaseMetacall(QShortcut* self, int param1, int param2, void** param3) {
    if (auto* vqshortcut = dynamic_cast<VirtualQShortcut*>(self)) {
        vqshortcut->setQShortcut_Metacall_IsBase(true);
        return vqshortcut->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QShortcut_Tr(const char* s) {
    QString _ret = QShortcut::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QShortcut_SetKey(QShortcut* self, QKeySequence* key) {
    self->setKey(*key);
}

QKeySequence* QShortcut_Key(const QShortcut* self) {
    return new QKeySequence(self->key());
}

void QShortcut_SetKeys(QShortcut* self, int key) {
    self->setKeys(static_cast<QKeySequence::StandardKey>(key));
}

void QShortcut_SetKeysWithKeys(QShortcut* self, libqt_list /* of QKeySequence* */ keys) {
    QList<QKeySequence> keys_QList;
    keys_QList.reserve(keys.len);
    QKeySequence** keys_arr = static_cast<QKeySequence**>(keys.data.ptr);
    for (size_t i = 0; i < keys.len; ++i) {
        keys_QList.push_back(*(keys_arr[i]));
    }
    self->setKeys(keys_QList);
}

libqt_list /* of QKeySequence* */ QShortcut_Keys(const QShortcut* self) {
    QList<QKeySequence> _ret = self->keys();
    // Convert QList<> from C++ memory to manually-managed C memory
    QKeySequence** _arr = static_cast<QKeySequence**>(malloc(sizeof(QKeySequence*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = new QKeySequence(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

void QShortcut_SetEnabled(QShortcut* self, bool enable) {
    self->setEnabled(enable);
}

bool QShortcut_IsEnabled(const QShortcut* self) {
    return self->isEnabled();
}

void QShortcut_SetContext(QShortcut* self, int context) {
    self->setContext(static_cast<Qt::ShortcutContext>(context));
}

int QShortcut_Context(const QShortcut* self) {
    return static_cast<int>(self->context());
}

void QShortcut_SetAutoRepeat(QShortcut* self, bool on) {
    self->setAutoRepeat(on);
}

bool QShortcut_AutoRepeat(const QShortcut* self) {
    return self->autoRepeat();
}

int QShortcut_Id(const QShortcut* self) {
    return self->id();
}

void QShortcut_SetWhatsThis(QShortcut* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setWhatsThis(text_QString);
}

libqt_string QShortcut_WhatsThis(const QShortcut* self) {
    QString _ret = self->whatsThis();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QShortcut_Activated(QShortcut* self) {
    self->activated();
}

void QShortcut_Connect_Activated(QShortcut* self, intptr_t slot) {
    void (*slotFunc)(QShortcut*) = reinterpret_cast<void (*)(QShortcut*)>(slot);
    QShortcut::connect(self, &QShortcut::activated, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QShortcut_ActivatedAmbiguously(QShortcut* self) {
    self->activatedAmbiguously();
}

void QShortcut_Connect_ActivatedAmbiguously(QShortcut* self, intptr_t slot) {
    void (*slotFunc)(QShortcut*) = reinterpret_cast<void (*)(QShortcut*)>(slot);
    QShortcut::connect(self, &QShortcut::activatedAmbiguously, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QShortcut_Tr2(const char* s, const char* c) {
    QString _ret = QShortcut::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QShortcut_Tr3(const char* s, const char* c, int n) {
    QString _ret = QShortcut::tr(s, c, static_cast<int>(n));
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
bool QShortcut_Event(QShortcut* self, QEvent* e) {
    if (auto* vqshortcut = dynamic_cast<VirtualQShortcut*>(self)) {
        return vqshortcut->event(e);
    } else {
        return vqshortcut->event(e);
    }
}

// Base class handler implementation
bool QShortcut_QBaseEvent(QShortcut* self, QEvent* e) {
    if (auto* vqshortcut = dynamic_cast<VirtualQShortcut*>(self)) {
        vqshortcut->setQShortcut_Event_IsBase(true);
        return vqshortcut->event(e);
    } else {
        return vqshortcut->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QShortcut_OnEvent(QShortcut* self, intptr_t slot) {
    if (auto* vqshortcut = dynamic_cast<VirtualQShortcut*>(self)) {
        vqshortcut->setQShortcut_Event_Callback(reinterpret_cast<VirtualQShortcut::QShortcut_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QShortcut_EventFilter(QShortcut* self, QObject* watched, QEvent* event) {
    if (auto* vqshortcut = dynamic_cast<VirtualQShortcut*>(self)) {
        return vqshortcut->eventFilter(watched, event);
    } else {
        return vqshortcut->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QShortcut_QBaseEventFilter(QShortcut* self, QObject* watched, QEvent* event) {
    if (auto* vqshortcut = dynamic_cast<VirtualQShortcut*>(self)) {
        vqshortcut->setQShortcut_EventFilter_IsBase(true);
        return vqshortcut->eventFilter(watched, event);
    } else {
        return vqshortcut->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QShortcut_OnEventFilter(QShortcut* self, intptr_t slot) {
    if (auto* vqshortcut = dynamic_cast<VirtualQShortcut*>(self)) {
        vqshortcut->setQShortcut_EventFilter_Callback(reinterpret_cast<VirtualQShortcut::QShortcut_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QShortcut_TimerEvent(QShortcut* self, QTimerEvent* event) {
    if (auto* vqshortcut = dynamic_cast<VirtualQShortcut*>(self)) {
        vqshortcut->timerEvent(event);
    } else {
        vqshortcut->timerEvent(event);
    }
}

// Base class handler implementation
void QShortcut_QBaseTimerEvent(QShortcut* self, QTimerEvent* event) {
    if (auto* vqshortcut = dynamic_cast<VirtualQShortcut*>(self)) {
        vqshortcut->setQShortcut_TimerEvent_IsBase(true);
        vqshortcut->timerEvent(event);
    } else {
        vqshortcut->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QShortcut_OnTimerEvent(QShortcut* self, intptr_t slot) {
    if (auto* vqshortcut = dynamic_cast<VirtualQShortcut*>(self)) {
        vqshortcut->setQShortcut_TimerEvent_Callback(reinterpret_cast<VirtualQShortcut::QShortcut_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QShortcut_ChildEvent(QShortcut* self, QChildEvent* event) {
    if (auto* vqshortcut = dynamic_cast<VirtualQShortcut*>(self)) {
        vqshortcut->childEvent(event);
    } else {
        vqshortcut->childEvent(event);
    }
}

// Base class handler implementation
void QShortcut_QBaseChildEvent(QShortcut* self, QChildEvent* event) {
    if (auto* vqshortcut = dynamic_cast<VirtualQShortcut*>(self)) {
        vqshortcut->setQShortcut_ChildEvent_IsBase(true);
        vqshortcut->childEvent(event);
    } else {
        vqshortcut->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QShortcut_OnChildEvent(QShortcut* self, intptr_t slot) {
    if (auto* vqshortcut = dynamic_cast<VirtualQShortcut*>(self)) {
        vqshortcut->setQShortcut_ChildEvent_Callback(reinterpret_cast<VirtualQShortcut::QShortcut_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QShortcut_CustomEvent(QShortcut* self, QEvent* event) {
    if (auto* vqshortcut = dynamic_cast<VirtualQShortcut*>(self)) {
        vqshortcut->customEvent(event);
    } else {
        vqshortcut->customEvent(event);
    }
}

// Base class handler implementation
void QShortcut_QBaseCustomEvent(QShortcut* self, QEvent* event) {
    if (auto* vqshortcut = dynamic_cast<VirtualQShortcut*>(self)) {
        vqshortcut->setQShortcut_CustomEvent_IsBase(true);
        vqshortcut->customEvent(event);
    } else {
        vqshortcut->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QShortcut_OnCustomEvent(QShortcut* self, intptr_t slot) {
    if (auto* vqshortcut = dynamic_cast<VirtualQShortcut*>(self)) {
        vqshortcut->setQShortcut_CustomEvent_Callback(reinterpret_cast<VirtualQShortcut::QShortcut_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QShortcut_ConnectNotify(QShortcut* self, QMetaMethod* signal) {
    if (auto* vqshortcut = dynamic_cast<VirtualQShortcut*>(self)) {
        vqshortcut->connectNotify(*signal);
    } else {
        vqshortcut->connectNotify(*signal);
    }
}

// Base class handler implementation
void QShortcut_QBaseConnectNotify(QShortcut* self, QMetaMethod* signal) {
    if (auto* vqshortcut = dynamic_cast<VirtualQShortcut*>(self)) {
        vqshortcut->setQShortcut_ConnectNotify_IsBase(true);
        vqshortcut->connectNotify(*signal);
    } else {
        vqshortcut->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QShortcut_OnConnectNotify(QShortcut* self, intptr_t slot) {
    if (auto* vqshortcut = dynamic_cast<VirtualQShortcut*>(self)) {
        vqshortcut->setQShortcut_ConnectNotify_Callback(reinterpret_cast<VirtualQShortcut::QShortcut_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QShortcut_DisconnectNotify(QShortcut* self, QMetaMethod* signal) {
    if (auto* vqshortcut = dynamic_cast<VirtualQShortcut*>(self)) {
        vqshortcut->disconnectNotify(*signal);
    } else {
        vqshortcut->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QShortcut_QBaseDisconnectNotify(QShortcut* self, QMetaMethod* signal) {
    if (auto* vqshortcut = dynamic_cast<VirtualQShortcut*>(self)) {
        vqshortcut->setQShortcut_DisconnectNotify_IsBase(true);
        vqshortcut->disconnectNotify(*signal);
    } else {
        vqshortcut->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QShortcut_OnDisconnectNotify(QShortcut* self, intptr_t slot) {
    if (auto* vqshortcut = dynamic_cast<VirtualQShortcut*>(self)) {
        vqshortcut->setQShortcut_DisconnectNotify_Callback(reinterpret_cast<VirtualQShortcut::QShortcut_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QShortcut_Sender(const QShortcut* self) {
    if (auto* vqshortcut = const_cast<VirtualQShortcut*>(dynamic_cast<const VirtualQShortcut*>(self))) {
        return vqshortcut->sender();
    } else {
        return vqshortcut->sender();
    }
}

// Base class handler implementation
QObject* QShortcut_QBaseSender(const QShortcut* self) {
    if (auto* vqshortcut = const_cast<VirtualQShortcut*>(dynamic_cast<const VirtualQShortcut*>(self))) {
        vqshortcut->setQShortcut_Sender_IsBase(true);
        return vqshortcut->sender();
    } else {
        return vqshortcut->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QShortcut_OnSender(const QShortcut* self, intptr_t slot) {
    if (auto* vqshortcut = const_cast<VirtualQShortcut*>(dynamic_cast<const VirtualQShortcut*>(self))) {
        vqshortcut->setQShortcut_Sender_Callback(reinterpret_cast<VirtualQShortcut::QShortcut_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QShortcut_SenderSignalIndex(const QShortcut* self) {
    if (auto* vqshortcut = const_cast<VirtualQShortcut*>(dynamic_cast<const VirtualQShortcut*>(self))) {
        return vqshortcut->senderSignalIndex();
    } else {
        return vqshortcut->senderSignalIndex();
    }
}

// Base class handler implementation
int QShortcut_QBaseSenderSignalIndex(const QShortcut* self) {
    if (auto* vqshortcut = const_cast<VirtualQShortcut*>(dynamic_cast<const VirtualQShortcut*>(self))) {
        vqshortcut->setQShortcut_SenderSignalIndex_IsBase(true);
        return vqshortcut->senderSignalIndex();
    } else {
        return vqshortcut->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QShortcut_OnSenderSignalIndex(const QShortcut* self, intptr_t slot) {
    if (auto* vqshortcut = const_cast<VirtualQShortcut*>(dynamic_cast<const VirtualQShortcut*>(self))) {
        vqshortcut->setQShortcut_SenderSignalIndex_Callback(reinterpret_cast<VirtualQShortcut::QShortcut_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QShortcut_Receivers(const QShortcut* self, const char* signal) {
    if (auto* vqshortcut = const_cast<VirtualQShortcut*>(dynamic_cast<const VirtualQShortcut*>(self))) {
        return vqshortcut->receivers(signal);
    } else {
        return vqshortcut->receivers(signal);
    }
}

// Base class handler implementation
int QShortcut_QBaseReceivers(const QShortcut* self, const char* signal) {
    if (auto* vqshortcut = const_cast<VirtualQShortcut*>(dynamic_cast<const VirtualQShortcut*>(self))) {
        vqshortcut->setQShortcut_Receivers_IsBase(true);
        return vqshortcut->receivers(signal);
    } else {
        return vqshortcut->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QShortcut_OnReceivers(const QShortcut* self, intptr_t slot) {
    if (auto* vqshortcut = const_cast<VirtualQShortcut*>(dynamic_cast<const VirtualQShortcut*>(self))) {
        vqshortcut->setQShortcut_Receivers_Callback(reinterpret_cast<VirtualQShortcut::QShortcut_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QShortcut_IsSignalConnected(const QShortcut* self, QMetaMethod* signal) {
    if (auto* vqshortcut = const_cast<VirtualQShortcut*>(dynamic_cast<const VirtualQShortcut*>(self))) {
        return vqshortcut->isSignalConnected(*signal);
    } else {
        return vqshortcut->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QShortcut_QBaseIsSignalConnected(const QShortcut* self, QMetaMethod* signal) {
    if (auto* vqshortcut = const_cast<VirtualQShortcut*>(dynamic_cast<const VirtualQShortcut*>(self))) {
        vqshortcut->setQShortcut_IsSignalConnected_IsBase(true);
        return vqshortcut->isSignalConnected(*signal);
    } else {
        return vqshortcut->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QShortcut_OnIsSignalConnected(const QShortcut* self, intptr_t slot) {
    if (auto* vqshortcut = const_cast<VirtualQShortcut*>(dynamic_cast<const VirtualQShortcut*>(self))) {
        vqshortcut->setQShortcut_IsSignalConnected_Callback(reinterpret_cast<VirtualQShortcut::QShortcut_IsSignalConnected_Callback>(slot));
    }
}

void QShortcut_Delete(QShortcut* self) {
    delete self;
}
