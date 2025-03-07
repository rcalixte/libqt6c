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
#include <QSettings>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <qsettings.h>
#include "libqsettings.hpp"
#include "libqsettings.hxx"

QSettings* QSettings_new(libqt_string organization) {
    QString organization_QString = QString::fromUtf8(organization.data, organization.len);
    return new VirtualQSettings(organization_QString);
}

QSettings* QSettings_new2(int scope, libqt_string organization) {
    QString organization_QString = QString::fromUtf8(organization.data, organization.len);
    return new VirtualQSettings(static_cast<QSettings::Scope>(scope), organization_QString);
}

QSettings* QSettings_new3(int format, int scope, libqt_string organization) {
    QString organization_QString = QString::fromUtf8(organization.data, organization.len);
    return new VirtualQSettings(static_cast<QSettings::Format>(format), static_cast<QSettings::Scope>(scope), organization_QString);
}

QSettings* QSettings_new4(libqt_string fileName, int format) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new VirtualQSettings(fileName_QString, static_cast<QSettings::Format>(format));
}

QSettings* QSettings_new5() {
    return new VirtualQSettings();
}

QSettings* QSettings_new6(int scope) {
    return new VirtualQSettings(static_cast<QSettings::Scope>(scope));
}

QSettings* QSettings_new7(libqt_string organization, libqt_string application) {
    QString organization_QString = QString::fromUtf8(organization.data, organization.len);
    QString application_QString = QString::fromUtf8(application.data, application.len);
    return new VirtualQSettings(organization_QString, application_QString);
}

QSettings* QSettings_new8(libqt_string organization, libqt_string application, QObject* parent) {
    QString organization_QString = QString::fromUtf8(organization.data, organization.len);
    QString application_QString = QString::fromUtf8(application.data, application.len);
    return new VirtualQSettings(organization_QString, application_QString, parent);
}

QSettings* QSettings_new9(int scope, libqt_string organization, libqt_string application) {
    QString organization_QString = QString::fromUtf8(organization.data, organization.len);
    QString application_QString = QString::fromUtf8(application.data, application.len);
    return new VirtualQSettings(static_cast<QSettings::Scope>(scope), organization_QString, application_QString);
}

QSettings* QSettings_new10(int scope, libqt_string organization, libqt_string application, QObject* parent) {
    QString organization_QString = QString::fromUtf8(organization.data, organization.len);
    QString application_QString = QString::fromUtf8(application.data, application.len);
    return new VirtualQSettings(static_cast<QSettings::Scope>(scope), organization_QString, application_QString, parent);
}

QSettings* QSettings_new11(int format, int scope, libqt_string organization, libqt_string application) {
    QString organization_QString = QString::fromUtf8(organization.data, organization.len);
    QString application_QString = QString::fromUtf8(application.data, application.len);
    return new VirtualQSettings(static_cast<QSettings::Format>(format), static_cast<QSettings::Scope>(scope), organization_QString, application_QString);
}

QSettings* QSettings_new12(int format, int scope, libqt_string organization, libqt_string application, QObject* parent) {
    QString organization_QString = QString::fromUtf8(organization.data, organization.len);
    QString application_QString = QString::fromUtf8(application.data, application.len);
    return new VirtualQSettings(static_cast<QSettings::Format>(format), static_cast<QSettings::Scope>(scope), organization_QString, application_QString, parent);
}

QSettings* QSettings_new13(libqt_string fileName, int format, QObject* parent) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new VirtualQSettings(fileName_QString, static_cast<QSettings::Format>(format), parent);
}

QSettings* QSettings_new14(QObject* parent) {
    return new VirtualQSettings(parent);
}

QSettings* QSettings_new15(int scope, QObject* parent) {
    return new VirtualQSettings(static_cast<QSettings::Scope>(scope), parent);
}

QMetaObject* QSettings_MetaObject(const QSettings* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSettings_Metacast(QSettings* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSettings_Metacall(QSettings* self, int param1, int param2, void** param3) {
    if (auto* vqsettings = dynamic_cast<VirtualQSettings*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QSettings_OnMetacall(QSettings* self, intptr_t slot) {
    if (auto* vqsettings = dynamic_cast<VirtualQSettings*>(self)) {
        vqsettings->setQSettings_Metacall_Callback(reinterpret_cast<VirtualQSettings::QSettings_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QSettings_QBaseMetacall(QSettings* self, int param1, int param2, void** param3) {
    if (auto* vqsettings = dynamic_cast<VirtualQSettings*>(self)) {
        vqsettings->setQSettings_Metacall_IsBase(true);
        return vqsettings->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QSettings_Tr(const char* s) {
    QString _ret = QSettings::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QSettings_Clear(QSettings* self) {
    self->clear();
}

void QSettings_Sync(QSettings* self) {
    self->sync();
}

int QSettings_Status(const QSettings* self) {
    return static_cast<int>(self->status());
}

bool QSettings_IsAtomicSyncRequired(const QSettings* self) {
    return self->isAtomicSyncRequired();
}

void QSettings_SetAtomicSyncRequired(QSettings* self, bool enable) {
    self->setAtomicSyncRequired(enable);
}

void QSettings_BeginGroup(QSettings* self, QAnyStringView* prefix) {
    self->beginGroup(*prefix);
}

void QSettings_EndGroup(QSettings* self) {
    self->endGroup();
}

libqt_string QSettings_Group(const QSettings* self) {
    QString _ret = self->group();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QSettings_BeginReadArray(QSettings* self, QAnyStringView* prefix) {
    return self->beginReadArray(*prefix);
}

void QSettings_BeginWriteArray(QSettings* self, QAnyStringView* prefix) {
    self->beginWriteArray(*prefix);
}

void QSettings_EndArray(QSettings* self) {
    self->endArray();
}

void QSettings_SetArrayIndex(QSettings* self, int i) {
    self->setArrayIndex(static_cast<int>(i));
}

libqt_list /* of libqt_string */ QSettings_AllKeys(const QSettings* self) {
    QStringList _ret = self->allKeys();
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

libqt_list /* of libqt_string */ QSettings_ChildKeys(const QSettings* self) {
    QStringList _ret = self->childKeys();
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

libqt_list /* of libqt_string */ QSettings_ChildGroups(const QSettings* self) {
    QStringList _ret = self->childGroups();
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

bool QSettings_IsWritable(const QSettings* self) {
    return self->isWritable();
}

void QSettings_SetValue(QSettings* self, QAnyStringView* key, QVariant* value) {
    self->setValue(*key, *value);
}

QVariant* QSettings_Value(const QSettings* self, QAnyStringView* key, QVariant* defaultValue) {
    return new QVariant(self->value(*key, *defaultValue));
}

QVariant* QSettings_ValueWithKey(const QSettings* self, QAnyStringView* key) {
    return new QVariant(self->value(*key));
}

void QSettings_Remove(QSettings* self, QAnyStringView* key) {
    self->remove(*key);
}

bool QSettings_Contains(const QSettings* self, QAnyStringView* key) {
    return self->contains(*key);
}

void QSettings_SetFallbacksEnabled(QSettings* self, bool b) {
    self->setFallbacksEnabled(b);
}

bool QSettings_FallbacksEnabled(const QSettings* self) {
    return self->fallbacksEnabled();
}

libqt_string QSettings_FileName(const QSettings* self) {
    QString _ret = self->fileName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QSettings_Format(const QSettings* self) {
    return static_cast<int>(self->format());
}

int QSettings_Scope(const QSettings* self) {
    return static_cast<int>(self->scope());
}

libqt_string QSettings_OrganizationName(const QSettings* self) {
    QString _ret = self->organizationName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QSettings_ApplicationName(const QSettings* self) {
    QString _ret = self->applicationName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QSettings_SetDefaultFormat(int format) {
    QSettings::setDefaultFormat(static_cast<QSettings::Format>(format));
}

int QSettings_DefaultFormat() {
    return static_cast<int>(QSettings::defaultFormat());
}

void QSettings_SetPath(int format, int scope, libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    QSettings::setPath(static_cast<QSettings::Format>(format), static_cast<QSettings::Scope>(scope), path_QString);
}

libqt_string QSettings_Tr2(const char* s, const char* c) {
    QString _ret = QSettings::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QSettings_Tr3(const char* s, const char* c, int n) {
    QString _ret = QSettings::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QSettings_BeginWriteArray2(QSettings* self, QAnyStringView* prefix, int size) {
    self->beginWriteArray(*prefix, static_cast<int>(size));
}

// Derived class handler implementation
bool QSettings_Event(QSettings* self, QEvent* event) {
    if (auto* vqsettings = dynamic_cast<VirtualQSettings*>(self)) {
        return vqsettings->event(event);
    } else {
        return vqsettings->event(event);
    }
}

// Base class handler implementation
bool QSettings_QBaseEvent(QSettings* self, QEvent* event) {
    if (auto* vqsettings = dynamic_cast<VirtualQSettings*>(self)) {
        vqsettings->setQSettings_Event_IsBase(true);
        return vqsettings->event(event);
    } else {
        return vqsettings->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSettings_OnEvent(QSettings* self, intptr_t slot) {
    if (auto* vqsettings = dynamic_cast<VirtualQSettings*>(self)) {
        vqsettings->setQSettings_Event_Callback(reinterpret_cast<VirtualQSettings::QSettings_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSettings_EventFilter(QSettings* self, QObject* watched, QEvent* event) {
    if (auto* vqsettings = dynamic_cast<VirtualQSettings*>(self)) {
        return vqsettings->eventFilter(watched, event);
    } else {
        return vqsettings->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QSettings_QBaseEventFilter(QSettings* self, QObject* watched, QEvent* event) {
    if (auto* vqsettings = dynamic_cast<VirtualQSettings*>(self)) {
        vqsettings->setQSettings_EventFilter_IsBase(true);
        return vqsettings->eventFilter(watched, event);
    } else {
        return vqsettings->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSettings_OnEventFilter(QSettings* self, intptr_t slot) {
    if (auto* vqsettings = dynamic_cast<VirtualQSettings*>(self)) {
        vqsettings->setQSettings_EventFilter_Callback(reinterpret_cast<VirtualQSettings::QSettings_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QSettings_TimerEvent(QSettings* self, QTimerEvent* event) {
    if (auto* vqsettings = dynamic_cast<VirtualQSettings*>(self)) {
        vqsettings->timerEvent(event);
    } else {
        vqsettings->timerEvent(event);
    }
}

// Base class handler implementation
void QSettings_QBaseTimerEvent(QSettings* self, QTimerEvent* event) {
    if (auto* vqsettings = dynamic_cast<VirtualQSettings*>(self)) {
        vqsettings->setQSettings_TimerEvent_IsBase(true);
        vqsettings->timerEvent(event);
    } else {
        vqsettings->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSettings_OnTimerEvent(QSettings* self, intptr_t slot) {
    if (auto* vqsettings = dynamic_cast<VirtualQSettings*>(self)) {
        vqsettings->setQSettings_TimerEvent_Callback(reinterpret_cast<VirtualQSettings::QSettings_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSettings_ChildEvent(QSettings* self, QChildEvent* event) {
    if (auto* vqsettings = dynamic_cast<VirtualQSettings*>(self)) {
        vqsettings->childEvent(event);
    } else {
        vqsettings->childEvent(event);
    }
}

// Base class handler implementation
void QSettings_QBaseChildEvent(QSettings* self, QChildEvent* event) {
    if (auto* vqsettings = dynamic_cast<VirtualQSettings*>(self)) {
        vqsettings->setQSettings_ChildEvent_IsBase(true);
        vqsettings->childEvent(event);
    } else {
        vqsettings->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSettings_OnChildEvent(QSettings* self, intptr_t slot) {
    if (auto* vqsettings = dynamic_cast<VirtualQSettings*>(self)) {
        vqsettings->setQSettings_ChildEvent_Callback(reinterpret_cast<VirtualQSettings::QSettings_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSettings_CustomEvent(QSettings* self, QEvent* event) {
    if (auto* vqsettings = dynamic_cast<VirtualQSettings*>(self)) {
        vqsettings->customEvent(event);
    } else {
        vqsettings->customEvent(event);
    }
}

// Base class handler implementation
void QSettings_QBaseCustomEvent(QSettings* self, QEvent* event) {
    if (auto* vqsettings = dynamic_cast<VirtualQSettings*>(self)) {
        vqsettings->setQSettings_CustomEvent_IsBase(true);
        vqsettings->customEvent(event);
    } else {
        vqsettings->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSettings_OnCustomEvent(QSettings* self, intptr_t slot) {
    if (auto* vqsettings = dynamic_cast<VirtualQSettings*>(self)) {
        vqsettings->setQSettings_CustomEvent_Callback(reinterpret_cast<VirtualQSettings::QSettings_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSettings_ConnectNotify(QSettings* self, QMetaMethod* signal) {
    if (auto* vqsettings = dynamic_cast<VirtualQSettings*>(self)) {
        vqsettings->connectNotify(*signal);
    } else {
        vqsettings->connectNotify(*signal);
    }
}

// Base class handler implementation
void QSettings_QBaseConnectNotify(QSettings* self, QMetaMethod* signal) {
    if (auto* vqsettings = dynamic_cast<VirtualQSettings*>(self)) {
        vqsettings->setQSettings_ConnectNotify_IsBase(true);
        vqsettings->connectNotify(*signal);
    } else {
        vqsettings->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSettings_OnConnectNotify(QSettings* self, intptr_t slot) {
    if (auto* vqsettings = dynamic_cast<VirtualQSettings*>(self)) {
        vqsettings->setQSettings_ConnectNotify_Callback(reinterpret_cast<VirtualQSettings::QSettings_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSettings_DisconnectNotify(QSettings* self, QMetaMethod* signal) {
    if (auto* vqsettings = dynamic_cast<VirtualQSettings*>(self)) {
        vqsettings->disconnectNotify(*signal);
    } else {
        vqsettings->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QSettings_QBaseDisconnectNotify(QSettings* self, QMetaMethod* signal) {
    if (auto* vqsettings = dynamic_cast<VirtualQSettings*>(self)) {
        vqsettings->setQSettings_DisconnectNotify_IsBase(true);
        vqsettings->disconnectNotify(*signal);
    } else {
        vqsettings->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSettings_OnDisconnectNotify(QSettings* self, intptr_t slot) {
    if (auto* vqsettings = dynamic_cast<VirtualQSettings*>(self)) {
        vqsettings->setQSettings_DisconnectNotify_Callback(reinterpret_cast<VirtualQSettings::QSettings_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QSettings_Sender(const QSettings* self) {
    if (auto* vqsettings = const_cast<VirtualQSettings*>(dynamic_cast<const VirtualQSettings*>(self))) {
        return vqsettings->sender();
    } else {
        return vqsettings->sender();
    }
}

// Base class handler implementation
QObject* QSettings_QBaseSender(const QSettings* self) {
    if (auto* vqsettings = const_cast<VirtualQSettings*>(dynamic_cast<const VirtualQSettings*>(self))) {
        vqsettings->setQSettings_Sender_IsBase(true);
        return vqsettings->sender();
    } else {
        return vqsettings->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QSettings_OnSender(const QSettings* self, intptr_t slot) {
    if (auto* vqsettings = const_cast<VirtualQSettings*>(dynamic_cast<const VirtualQSettings*>(self))) {
        vqsettings->setQSettings_Sender_Callback(reinterpret_cast<VirtualQSettings::QSettings_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QSettings_SenderSignalIndex(const QSettings* self) {
    if (auto* vqsettings = const_cast<VirtualQSettings*>(dynamic_cast<const VirtualQSettings*>(self))) {
        return vqsettings->senderSignalIndex();
    } else {
        return vqsettings->senderSignalIndex();
    }
}

// Base class handler implementation
int QSettings_QBaseSenderSignalIndex(const QSettings* self) {
    if (auto* vqsettings = const_cast<VirtualQSettings*>(dynamic_cast<const VirtualQSettings*>(self))) {
        vqsettings->setQSettings_SenderSignalIndex_IsBase(true);
        return vqsettings->senderSignalIndex();
    } else {
        return vqsettings->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QSettings_OnSenderSignalIndex(const QSettings* self, intptr_t slot) {
    if (auto* vqsettings = const_cast<VirtualQSettings*>(dynamic_cast<const VirtualQSettings*>(self))) {
        vqsettings->setQSettings_SenderSignalIndex_Callback(reinterpret_cast<VirtualQSettings::QSettings_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QSettings_Receivers(const QSettings* self, const char* signal) {
    if (auto* vqsettings = const_cast<VirtualQSettings*>(dynamic_cast<const VirtualQSettings*>(self))) {
        return vqsettings->receivers(signal);
    } else {
        return vqsettings->receivers(signal);
    }
}

// Base class handler implementation
int QSettings_QBaseReceivers(const QSettings* self, const char* signal) {
    if (auto* vqsettings = const_cast<VirtualQSettings*>(dynamic_cast<const VirtualQSettings*>(self))) {
        vqsettings->setQSettings_Receivers_IsBase(true);
        return vqsettings->receivers(signal);
    } else {
        return vqsettings->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSettings_OnReceivers(const QSettings* self, intptr_t slot) {
    if (auto* vqsettings = const_cast<VirtualQSettings*>(dynamic_cast<const VirtualQSettings*>(self))) {
        vqsettings->setQSettings_Receivers_Callback(reinterpret_cast<VirtualQSettings::QSettings_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSettings_IsSignalConnected(const QSettings* self, QMetaMethod* signal) {
    if (auto* vqsettings = const_cast<VirtualQSettings*>(dynamic_cast<const VirtualQSettings*>(self))) {
        return vqsettings->isSignalConnected(*signal);
    } else {
        return vqsettings->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QSettings_QBaseIsSignalConnected(const QSettings* self, QMetaMethod* signal) {
    if (auto* vqsettings = const_cast<VirtualQSettings*>(dynamic_cast<const VirtualQSettings*>(self))) {
        vqsettings->setQSettings_IsSignalConnected_IsBase(true);
        return vqsettings->isSignalConnected(*signal);
    } else {
        return vqsettings->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSettings_OnIsSignalConnected(const QSettings* self, intptr_t slot) {
    if (auto* vqsettings = const_cast<VirtualQSettings*>(dynamic_cast<const VirtualQSettings*>(self))) {
        vqsettings->setQSettings_IsSignalConnected_Callback(reinterpret_cast<VirtualQSettings::QSettings_IsSignalConnected_Callback>(slot));
    }
}

void QSettings_Delete(QSettings* self) {
    delete self;
}
