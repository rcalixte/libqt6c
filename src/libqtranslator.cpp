#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QLocale>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QTranslator>
#include <QVariant>
#include <qtranslator.h>
#include "libqtranslator.hpp"
#include "libqtranslator.hxx"

QTranslator* QTranslator_new() {
    return new VirtualQTranslator();
}

QTranslator* QTranslator_new2(QObject* parent) {
    return new VirtualQTranslator(parent);
}

QMetaObject* QTranslator_MetaObject(const QTranslator* self) {
    return (QMetaObject*)self->metaObject();
}

void* QTranslator_Metacast(QTranslator* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QTranslator_Metacall(QTranslator* self, int param1, int param2, void** param3) {
    if (auto* vqtranslator = dynamic_cast<VirtualQTranslator*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTranslator_OnMetacall(QTranslator* self, intptr_t slot) {
    if (auto* vqtranslator = dynamic_cast<VirtualQTranslator*>(self)) {
        vqtranslator->setQTranslator_Metacall_Callback(reinterpret_cast<VirtualQTranslator::QTranslator_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QTranslator_QBaseMetacall(QTranslator* self, int param1, int param2, void** param3) {
    if (auto* vqtranslator = dynamic_cast<VirtualQTranslator*>(self)) {
        vqtranslator->setQTranslator_Metacall_IsBase(true);
        return vqtranslator->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QTranslator_Tr(const char* s) {
    QString _ret = QTranslator::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QTranslator_Language(const QTranslator* self) {
    QString _ret = self->language();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QTranslator_FilePath(const QTranslator* self) {
    QString _ret = self->filePath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QTranslator_Load(QTranslator* self, libqt_string filename) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    return self->load(filename_QString);
}

bool QTranslator_Load2(QTranslator* self, QLocale* locale, libqt_string filename) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    return self->load(*locale, filename_QString);
}

bool QTranslator_Load3(QTranslator* self, const unsigned char* data, int lenVal) {
    return self->load(static_cast<const uchar*>(data), static_cast<int>(lenVal));
}

libqt_string QTranslator_Tr2(const char* s, const char* c) {
    QString _ret = QTranslator::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QTranslator_Tr3(const char* s, const char* c, int n) {
    QString _ret = QTranslator::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QTranslator_Load22(QTranslator* self, libqt_string filename, libqt_string directory) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    QString directory_QString = QString::fromUtf8(directory.data, directory.len);
    return self->load(filename_QString, directory_QString);
}

bool QTranslator_Load32(QTranslator* self, libqt_string filename, libqt_string directory, libqt_string search_delimiters) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    QString directory_QString = QString::fromUtf8(directory.data, directory.len);
    QString search_delimiters_QString = QString::fromUtf8(search_delimiters.data, search_delimiters.len);
    return self->load(filename_QString, directory_QString, search_delimiters_QString);
}

bool QTranslator_Load4(QTranslator* self, libqt_string filename, libqt_string directory, libqt_string search_delimiters, libqt_string suffix) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    QString directory_QString = QString::fromUtf8(directory.data, directory.len);
    QString search_delimiters_QString = QString::fromUtf8(search_delimiters.data, search_delimiters.len);
    QString suffix_QString = QString::fromUtf8(suffix.data, suffix.len);
    return self->load(filename_QString, directory_QString, search_delimiters_QString, suffix_QString);
}

bool QTranslator_Load33(QTranslator* self, QLocale* locale, libqt_string filename, libqt_string prefix) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    return self->load(*locale, filename_QString, prefix_QString);
}

bool QTranslator_Load42(QTranslator* self, QLocale* locale, libqt_string filename, libqt_string prefix, libqt_string directory) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    QString directory_QString = QString::fromUtf8(directory.data, directory.len);
    return self->load(*locale, filename_QString, prefix_QString, directory_QString);
}

bool QTranslator_Load5(QTranslator* self, QLocale* locale, libqt_string filename, libqt_string prefix, libqt_string directory, libqt_string suffix) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    QString directory_QString = QString::fromUtf8(directory.data, directory.len);
    QString suffix_QString = QString::fromUtf8(suffix.data, suffix.len);
    return self->load(*locale, filename_QString, prefix_QString, directory_QString, suffix_QString);
}

bool QTranslator_Load34(QTranslator* self, const unsigned char* data, int lenVal, libqt_string directory) {
    QString directory_QString = QString::fromUtf8(directory.data, directory.len);
    return self->load(static_cast<const uchar*>(data), static_cast<int>(lenVal), directory_QString);
}

// Derived class handler implementation
libqt_string QTranslator_Translate(const QTranslator* self, const char* context, const char* sourceText, const char* disambiguation, int n) {
    if (auto* vqtranslator = const_cast<VirtualQTranslator*>(dynamic_cast<const VirtualQTranslator*>(self))) {
        QString _ret = vqtranslator->translate(context, sourceText, disambiguation, static_cast<int>(n));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqtranslator->translate(context, sourceText, disambiguation, static_cast<int>(n));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QTranslator_QBaseTranslate(const QTranslator* self, const char* context, const char* sourceText, const char* disambiguation, int n) {
    if (auto* vqtranslator = const_cast<VirtualQTranslator*>(dynamic_cast<const VirtualQTranslator*>(self))) {
        vqtranslator->setQTranslator_Translate_IsBase(true);
        QString _ret = vqtranslator->translate(context, sourceText, disambiguation, static_cast<int>(n));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = vqtranslator->translate(context, sourceText, disambiguation, static_cast<int>(n));
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
        memcpy(_str.data, _b.data(), _str.len);
        _str.data[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QTranslator_OnTranslate(const QTranslator* self, intptr_t slot) {
    if (auto* vqtranslator = const_cast<VirtualQTranslator*>(dynamic_cast<const VirtualQTranslator*>(self))) {
        vqtranslator->setQTranslator_Translate_Callback(reinterpret_cast<VirtualQTranslator::QTranslator_Translate_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTranslator_IsEmpty(const QTranslator* self) {
    if (auto* vqtranslator = const_cast<VirtualQTranslator*>(dynamic_cast<const VirtualQTranslator*>(self))) {
        return vqtranslator->isEmpty();
    } else {
        return vqtranslator->isEmpty();
    }
}

// Base class handler implementation
bool QTranslator_QBaseIsEmpty(const QTranslator* self) {
    if (auto* vqtranslator = const_cast<VirtualQTranslator*>(dynamic_cast<const VirtualQTranslator*>(self))) {
        vqtranslator->setQTranslator_IsEmpty_IsBase(true);
        return vqtranslator->isEmpty();
    } else {
        return vqtranslator->isEmpty();
    }
}

// Auxiliary method to allow providing re-implementation
void QTranslator_OnIsEmpty(const QTranslator* self, intptr_t slot) {
    if (auto* vqtranslator = const_cast<VirtualQTranslator*>(dynamic_cast<const VirtualQTranslator*>(self))) {
        vqtranslator->setQTranslator_IsEmpty_Callback(reinterpret_cast<VirtualQTranslator::QTranslator_IsEmpty_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTranslator_Event(QTranslator* self, QEvent* event) {
    if (auto* vqtranslator = dynamic_cast<VirtualQTranslator*>(self)) {
        return vqtranslator->event(event);
    } else {
        return vqtranslator->event(event);
    }
}

// Base class handler implementation
bool QTranslator_QBaseEvent(QTranslator* self, QEvent* event) {
    if (auto* vqtranslator = dynamic_cast<VirtualQTranslator*>(self)) {
        vqtranslator->setQTranslator_Event_IsBase(true);
        return vqtranslator->event(event);
    } else {
        return vqtranslator->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTranslator_OnEvent(QTranslator* self, intptr_t slot) {
    if (auto* vqtranslator = dynamic_cast<VirtualQTranslator*>(self)) {
        vqtranslator->setQTranslator_Event_Callback(reinterpret_cast<VirtualQTranslator::QTranslator_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTranslator_EventFilter(QTranslator* self, QObject* watched, QEvent* event) {
    if (auto* vqtranslator = dynamic_cast<VirtualQTranslator*>(self)) {
        return vqtranslator->eventFilter(watched, event);
    } else {
        return vqtranslator->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QTranslator_QBaseEventFilter(QTranslator* self, QObject* watched, QEvent* event) {
    if (auto* vqtranslator = dynamic_cast<VirtualQTranslator*>(self)) {
        vqtranslator->setQTranslator_EventFilter_IsBase(true);
        return vqtranslator->eventFilter(watched, event);
    } else {
        return vqtranslator->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTranslator_OnEventFilter(QTranslator* self, intptr_t slot) {
    if (auto* vqtranslator = dynamic_cast<VirtualQTranslator*>(self)) {
        vqtranslator->setQTranslator_EventFilter_Callback(reinterpret_cast<VirtualQTranslator::QTranslator_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QTranslator_TimerEvent(QTranslator* self, QTimerEvent* event) {
    if (auto* vqtranslator = dynamic_cast<VirtualQTranslator*>(self)) {
        vqtranslator->timerEvent(event);
    } else {
        vqtranslator->timerEvent(event);
    }
}

// Base class handler implementation
void QTranslator_QBaseTimerEvent(QTranslator* self, QTimerEvent* event) {
    if (auto* vqtranslator = dynamic_cast<VirtualQTranslator*>(self)) {
        vqtranslator->setQTranslator_TimerEvent_IsBase(true);
        vqtranslator->timerEvent(event);
    } else {
        vqtranslator->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTranslator_OnTimerEvent(QTranslator* self, intptr_t slot) {
    if (auto* vqtranslator = dynamic_cast<VirtualQTranslator*>(self)) {
        vqtranslator->setQTranslator_TimerEvent_Callback(reinterpret_cast<VirtualQTranslator::QTranslator_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTranslator_ChildEvent(QTranslator* self, QChildEvent* event) {
    if (auto* vqtranslator = dynamic_cast<VirtualQTranslator*>(self)) {
        vqtranslator->childEvent(event);
    } else {
        vqtranslator->childEvent(event);
    }
}

// Base class handler implementation
void QTranslator_QBaseChildEvent(QTranslator* self, QChildEvent* event) {
    if (auto* vqtranslator = dynamic_cast<VirtualQTranslator*>(self)) {
        vqtranslator->setQTranslator_ChildEvent_IsBase(true);
        vqtranslator->childEvent(event);
    } else {
        vqtranslator->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTranslator_OnChildEvent(QTranslator* self, intptr_t slot) {
    if (auto* vqtranslator = dynamic_cast<VirtualQTranslator*>(self)) {
        vqtranslator->setQTranslator_ChildEvent_Callback(reinterpret_cast<VirtualQTranslator::QTranslator_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTranslator_CustomEvent(QTranslator* self, QEvent* event) {
    if (auto* vqtranslator = dynamic_cast<VirtualQTranslator*>(self)) {
        vqtranslator->customEvent(event);
    } else {
        vqtranslator->customEvent(event);
    }
}

// Base class handler implementation
void QTranslator_QBaseCustomEvent(QTranslator* self, QEvent* event) {
    if (auto* vqtranslator = dynamic_cast<VirtualQTranslator*>(self)) {
        vqtranslator->setQTranslator_CustomEvent_IsBase(true);
        vqtranslator->customEvent(event);
    } else {
        vqtranslator->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTranslator_OnCustomEvent(QTranslator* self, intptr_t slot) {
    if (auto* vqtranslator = dynamic_cast<VirtualQTranslator*>(self)) {
        vqtranslator->setQTranslator_CustomEvent_Callback(reinterpret_cast<VirtualQTranslator::QTranslator_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTranslator_ConnectNotify(QTranslator* self, QMetaMethod* signal) {
    if (auto* vqtranslator = dynamic_cast<VirtualQTranslator*>(self)) {
        vqtranslator->connectNotify(*signal);
    } else {
        vqtranslator->connectNotify(*signal);
    }
}

// Base class handler implementation
void QTranslator_QBaseConnectNotify(QTranslator* self, QMetaMethod* signal) {
    if (auto* vqtranslator = dynamic_cast<VirtualQTranslator*>(self)) {
        vqtranslator->setQTranslator_ConnectNotify_IsBase(true);
        vqtranslator->connectNotify(*signal);
    } else {
        vqtranslator->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTranslator_OnConnectNotify(QTranslator* self, intptr_t slot) {
    if (auto* vqtranslator = dynamic_cast<VirtualQTranslator*>(self)) {
        vqtranslator->setQTranslator_ConnectNotify_Callback(reinterpret_cast<VirtualQTranslator::QTranslator_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QTranslator_DisconnectNotify(QTranslator* self, QMetaMethod* signal) {
    if (auto* vqtranslator = dynamic_cast<VirtualQTranslator*>(self)) {
        vqtranslator->disconnectNotify(*signal);
    } else {
        vqtranslator->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QTranslator_QBaseDisconnectNotify(QTranslator* self, QMetaMethod* signal) {
    if (auto* vqtranslator = dynamic_cast<VirtualQTranslator*>(self)) {
        vqtranslator->setQTranslator_DisconnectNotify_IsBase(true);
        vqtranslator->disconnectNotify(*signal);
    } else {
        vqtranslator->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTranslator_OnDisconnectNotify(QTranslator* self, intptr_t slot) {
    if (auto* vqtranslator = dynamic_cast<VirtualQTranslator*>(self)) {
        vqtranslator->setQTranslator_DisconnectNotify_Callback(reinterpret_cast<VirtualQTranslator::QTranslator_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QTranslator_Sender(const QTranslator* self) {
    if (auto* vqtranslator = const_cast<VirtualQTranslator*>(dynamic_cast<const VirtualQTranslator*>(self))) {
        return vqtranslator->sender();
    } else {
        return vqtranslator->sender();
    }
}

// Base class handler implementation
QObject* QTranslator_QBaseSender(const QTranslator* self) {
    if (auto* vqtranslator = const_cast<VirtualQTranslator*>(dynamic_cast<const VirtualQTranslator*>(self))) {
        vqtranslator->setQTranslator_Sender_IsBase(true);
        return vqtranslator->sender();
    } else {
        return vqtranslator->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QTranslator_OnSender(const QTranslator* self, intptr_t slot) {
    if (auto* vqtranslator = const_cast<VirtualQTranslator*>(dynamic_cast<const VirtualQTranslator*>(self))) {
        vqtranslator->setQTranslator_Sender_Callback(reinterpret_cast<VirtualQTranslator::QTranslator_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QTranslator_SenderSignalIndex(const QTranslator* self) {
    if (auto* vqtranslator = const_cast<VirtualQTranslator*>(dynamic_cast<const VirtualQTranslator*>(self))) {
        return vqtranslator->senderSignalIndex();
    } else {
        return vqtranslator->senderSignalIndex();
    }
}

// Base class handler implementation
int QTranslator_QBaseSenderSignalIndex(const QTranslator* self) {
    if (auto* vqtranslator = const_cast<VirtualQTranslator*>(dynamic_cast<const VirtualQTranslator*>(self))) {
        vqtranslator->setQTranslator_SenderSignalIndex_IsBase(true);
        return vqtranslator->senderSignalIndex();
    } else {
        return vqtranslator->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QTranslator_OnSenderSignalIndex(const QTranslator* self, intptr_t slot) {
    if (auto* vqtranslator = const_cast<VirtualQTranslator*>(dynamic_cast<const VirtualQTranslator*>(self))) {
        vqtranslator->setQTranslator_SenderSignalIndex_Callback(reinterpret_cast<VirtualQTranslator::QTranslator_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QTranslator_Receivers(const QTranslator* self, const char* signal) {
    if (auto* vqtranslator = const_cast<VirtualQTranslator*>(dynamic_cast<const VirtualQTranslator*>(self))) {
        return vqtranslator->receivers(signal);
    } else {
        return vqtranslator->receivers(signal);
    }
}

// Base class handler implementation
int QTranslator_QBaseReceivers(const QTranslator* self, const char* signal) {
    if (auto* vqtranslator = const_cast<VirtualQTranslator*>(dynamic_cast<const VirtualQTranslator*>(self))) {
        vqtranslator->setQTranslator_Receivers_IsBase(true);
        return vqtranslator->receivers(signal);
    } else {
        return vqtranslator->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTranslator_OnReceivers(const QTranslator* self, intptr_t slot) {
    if (auto* vqtranslator = const_cast<VirtualQTranslator*>(dynamic_cast<const VirtualQTranslator*>(self))) {
        vqtranslator->setQTranslator_Receivers_Callback(reinterpret_cast<VirtualQTranslator::QTranslator_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTranslator_IsSignalConnected(const QTranslator* self, QMetaMethod* signal) {
    if (auto* vqtranslator = const_cast<VirtualQTranslator*>(dynamic_cast<const VirtualQTranslator*>(self))) {
        return vqtranslator->isSignalConnected(*signal);
    } else {
        return vqtranslator->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QTranslator_QBaseIsSignalConnected(const QTranslator* self, QMetaMethod* signal) {
    if (auto* vqtranslator = const_cast<VirtualQTranslator*>(dynamic_cast<const VirtualQTranslator*>(self))) {
        vqtranslator->setQTranslator_IsSignalConnected_IsBase(true);
        return vqtranslator->isSignalConnected(*signal);
    } else {
        return vqtranslator->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTranslator_OnIsSignalConnected(const QTranslator* self, intptr_t slot) {
    if (auto* vqtranslator = const_cast<VirtualQTranslator*>(dynamic_cast<const VirtualQTranslator*>(self))) {
        vqtranslator->setQTranslator_IsSignalConnected_Callback(reinterpret_cast<VirtualQTranslator::QTranslator_IsSignalConnected_Callback>(slot));
    }
}

void QTranslator_Delete(QTranslator* self) {
    delete self;
}
