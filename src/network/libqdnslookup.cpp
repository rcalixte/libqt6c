#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QDnsDomainNameRecord>
#include <QDnsHostAddressRecord>
#include <QDnsLookup>
#include <QDnsMailExchangeRecord>
#include <QDnsServiceRecord>
#include <QDnsTextRecord>
#include <QEvent>
#include <QHostAddress>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <qdnslookup.h>
#include "libqdnslookup.hpp"
#include "libqdnslookup.hxx"

QDnsDomainNameRecord* QDnsDomainNameRecord_new() {
    return new QDnsDomainNameRecord();
}

QDnsDomainNameRecord* QDnsDomainNameRecord_new2(QDnsDomainNameRecord* other) {
    return new QDnsDomainNameRecord(*other);
}

void QDnsDomainNameRecord_OperatorAssign(QDnsDomainNameRecord* self, QDnsDomainNameRecord* other) {
    self->operator=(*other);
}

void QDnsDomainNameRecord_Swap(QDnsDomainNameRecord* self, QDnsDomainNameRecord* other) {
    self->swap(*other);
}

libqt_string QDnsDomainNameRecord_Name(const QDnsDomainNameRecord* self) {
    QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

unsigned int QDnsDomainNameRecord_TimeToLive(const QDnsDomainNameRecord* self) {
    return static_cast<unsigned int>(self->timeToLive());
}

libqt_string QDnsDomainNameRecord_Value(const QDnsDomainNameRecord* self) {
    QString _ret = self->value();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QDnsDomainNameRecord_Delete(QDnsDomainNameRecord* self) {
    delete self;
}

QDnsHostAddressRecord* QDnsHostAddressRecord_new() {
    return new QDnsHostAddressRecord();
}

QDnsHostAddressRecord* QDnsHostAddressRecord_new2(QDnsHostAddressRecord* other) {
    return new QDnsHostAddressRecord(*other);
}

void QDnsHostAddressRecord_OperatorAssign(QDnsHostAddressRecord* self, QDnsHostAddressRecord* other) {
    self->operator=(*other);
}

void QDnsHostAddressRecord_Swap(QDnsHostAddressRecord* self, QDnsHostAddressRecord* other) {
    self->swap(*other);
}

libqt_string QDnsHostAddressRecord_Name(const QDnsHostAddressRecord* self) {
    QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

unsigned int QDnsHostAddressRecord_TimeToLive(const QDnsHostAddressRecord* self) {
    return static_cast<unsigned int>(self->timeToLive());
}

QHostAddress* QDnsHostAddressRecord_Value(const QDnsHostAddressRecord* self) {
    return new QHostAddress(self->value());
}

void QDnsHostAddressRecord_Delete(QDnsHostAddressRecord* self) {
    delete self;
}

QDnsMailExchangeRecord* QDnsMailExchangeRecord_new() {
    return new QDnsMailExchangeRecord();
}

QDnsMailExchangeRecord* QDnsMailExchangeRecord_new2(QDnsMailExchangeRecord* other) {
    return new QDnsMailExchangeRecord(*other);
}

void QDnsMailExchangeRecord_OperatorAssign(QDnsMailExchangeRecord* self, QDnsMailExchangeRecord* other) {
    self->operator=(*other);
}

void QDnsMailExchangeRecord_Swap(QDnsMailExchangeRecord* self, QDnsMailExchangeRecord* other) {
    self->swap(*other);
}

libqt_string QDnsMailExchangeRecord_Exchange(const QDnsMailExchangeRecord* self) {
    QString _ret = self->exchange();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QDnsMailExchangeRecord_Name(const QDnsMailExchangeRecord* self) {
    QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

uint16_t QDnsMailExchangeRecord_Preference(const QDnsMailExchangeRecord* self) {
    return static_cast<uint16_t>(self->preference());
}

unsigned int QDnsMailExchangeRecord_TimeToLive(const QDnsMailExchangeRecord* self) {
    return static_cast<unsigned int>(self->timeToLive());
}

void QDnsMailExchangeRecord_Delete(QDnsMailExchangeRecord* self) {
    delete self;
}

QDnsServiceRecord* QDnsServiceRecord_new() {
    return new QDnsServiceRecord();
}

QDnsServiceRecord* QDnsServiceRecord_new2(QDnsServiceRecord* other) {
    return new QDnsServiceRecord(*other);
}

void QDnsServiceRecord_OperatorAssign(QDnsServiceRecord* self, QDnsServiceRecord* other) {
    self->operator=(*other);
}

void QDnsServiceRecord_Swap(QDnsServiceRecord* self, QDnsServiceRecord* other) {
    self->swap(*other);
}

libqt_string QDnsServiceRecord_Name(const QDnsServiceRecord* self) {
    QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

uint16_t QDnsServiceRecord_Port(const QDnsServiceRecord* self) {
    return static_cast<uint16_t>(self->port());
}

uint16_t QDnsServiceRecord_Priority(const QDnsServiceRecord* self) {
    return static_cast<uint16_t>(self->priority());
}

libqt_string QDnsServiceRecord_Target(const QDnsServiceRecord* self) {
    QString _ret = self->target();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

unsigned int QDnsServiceRecord_TimeToLive(const QDnsServiceRecord* self) {
    return static_cast<unsigned int>(self->timeToLive());
}

uint16_t QDnsServiceRecord_Weight(const QDnsServiceRecord* self) {
    return static_cast<uint16_t>(self->weight());
}

void QDnsServiceRecord_Delete(QDnsServiceRecord* self) {
    delete self;
}

QDnsTextRecord* QDnsTextRecord_new() {
    return new QDnsTextRecord();
}

QDnsTextRecord* QDnsTextRecord_new2(QDnsTextRecord* other) {
    return new QDnsTextRecord(*other);
}

void QDnsTextRecord_OperatorAssign(QDnsTextRecord* self, QDnsTextRecord* other) {
    self->operator=(*other);
}

void QDnsTextRecord_Swap(QDnsTextRecord* self, QDnsTextRecord* other) {
    self->swap(*other);
}

libqt_string QDnsTextRecord_Name(const QDnsTextRecord* self) {
    QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

unsigned int QDnsTextRecord_TimeToLive(const QDnsTextRecord* self) {
    return static_cast<unsigned int>(self->timeToLive());
}

libqt_list /* of libqt_string */ QDnsTextRecord_Values(const QDnsTextRecord* self) {
    QList<QByteArray> _ret = self->values();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        QByteArray _lv_qb = _ret[i];
        libqt_string _lv_str;
        _lv_str.len = _lv_qb.length();
        _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
        memcpy(_lv_str.data, _lv_qb.data(), _lv_str.len);
        _lv_str.data[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

void QDnsTextRecord_Delete(QDnsTextRecord* self) {
    delete self;
}

QDnsLookup* QDnsLookup_new() {
    return new VirtualQDnsLookup();
}

QDnsLookup* QDnsLookup_new2(int typeVal, libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new VirtualQDnsLookup(static_cast<QDnsLookup::Type>(typeVal), name_QString);
}

QDnsLookup* QDnsLookup_new3(int typeVal, libqt_string name, QHostAddress* nameserver) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new VirtualQDnsLookup(static_cast<QDnsLookup::Type>(typeVal), name_QString, *nameserver);
}

QDnsLookup* QDnsLookup_new4(QObject* parent) {
    return new VirtualQDnsLookup(parent);
}

QDnsLookup* QDnsLookup_new5(int typeVal, libqt_string name, QObject* parent) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new VirtualQDnsLookup(static_cast<QDnsLookup::Type>(typeVal), name_QString, parent);
}

QDnsLookup* QDnsLookup_new6(int typeVal, libqt_string name, QHostAddress* nameserver, QObject* parent) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new VirtualQDnsLookup(static_cast<QDnsLookup::Type>(typeVal), name_QString, *nameserver, parent);
}

QMetaObject* QDnsLookup_MetaObject(const QDnsLookup* self) {
    return (QMetaObject*)self->metaObject();
}

void* QDnsLookup_Metacast(QDnsLookup* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QDnsLookup_Metacall(QDnsLookup* self, int param1, int param2, void** param3) {
    if (auto* vqdnslookup = dynamic_cast<VirtualQDnsLookup*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QDnsLookup_OnMetacall(QDnsLookup* self, intptr_t slot) {
    if (auto* vqdnslookup = dynamic_cast<VirtualQDnsLookup*>(self)) {
        vqdnslookup->setQDnsLookup_Metacall_Callback(reinterpret_cast<VirtualQDnsLookup::QDnsLookup_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QDnsLookup_QBaseMetacall(QDnsLookup* self, int param1, int param2, void** param3) {
    if (auto* vqdnslookup = dynamic_cast<VirtualQDnsLookup*>(self)) {
        vqdnslookup->setQDnsLookup_Metacall_IsBase(true);
        return vqdnslookup->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QDnsLookup_Tr(const char* s) {
    QString _ret = QDnsLookup::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QDnsLookup_Error(const QDnsLookup* self) {
    return static_cast<int>(self->error());
}

libqt_string QDnsLookup_ErrorString(const QDnsLookup* self) {
    QString _ret = self->errorString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QDnsLookup_IsFinished(const QDnsLookup* self) {
    return self->isFinished();
}

libqt_string QDnsLookup_Name(const QDnsLookup* self) {
    QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QDnsLookup_SetName(QDnsLookup* self, libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setName(name_QString);
}

int QDnsLookup_Type(const QDnsLookup* self) {
    return static_cast<int>(self->type());
}

void QDnsLookup_SetType(QDnsLookup* self, int typeVal) {
    self->setType(static_cast<QDnsLookup::Type>(typeVal));
}

QHostAddress* QDnsLookup_Nameserver(const QDnsLookup* self) {
    return new QHostAddress(self->nameserver());
}

void QDnsLookup_SetNameserver(QDnsLookup* self, QHostAddress* nameserver) {
    self->setNameserver(*nameserver);
}

libqt_list /* of QDnsDomainNameRecord* */ QDnsLookup_CanonicalNameRecords(const QDnsLookup* self) {
    QList<QDnsDomainNameRecord> _ret = self->canonicalNameRecords();
    // Convert QList<> from C++ memory to manually-managed C memory
    QDnsDomainNameRecord** _arr = static_cast<QDnsDomainNameRecord**>(malloc(sizeof(QDnsDomainNameRecord*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = new QDnsDomainNameRecord(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QDnsHostAddressRecord* */ QDnsLookup_HostAddressRecords(const QDnsLookup* self) {
    QList<QDnsHostAddressRecord> _ret = self->hostAddressRecords();
    // Convert QList<> from C++ memory to manually-managed C memory
    QDnsHostAddressRecord** _arr = static_cast<QDnsHostAddressRecord**>(malloc(sizeof(QDnsHostAddressRecord*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = new QDnsHostAddressRecord(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QDnsMailExchangeRecord* */ QDnsLookup_MailExchangeRecords(const QDnsLookup* self) {
    QList<QDnsMailExchangeRecord> _ret = self->mailExchangeRecords();
    // Convert QList<> from C++ memory to manually-managed C memory
    QDnsMailExchangeRecord** _arr = static_cast<QDnsMailExchangeRecord**>(malloc(sizeof(QDnsMailExchangeRecord*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = new QDnsMailExchangeRecord(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QDnsDomainNameRecord* */ QDnsLookup_NameServerRecords(const QDnsLookup* self) {
    QList<QDnsDomainNameRecord> _ret = self->nameServerRecords();
    // Convert QList<> from C++ memory to manually-managed C memory
    QDnsDomainNameRecord** _arr = static_cast<QDnsDomainNameRecord**>(malloc(sizeof(QDnsDomainNameRecord*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = new QDnsDomainNameRecord(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QDnsDomainNameRecord* */ QDnsLookup_PointerRecords(const QDnsLookup* self) {
    QList<QDnsDomainNameRecord> _ret = self->pointerRecords();
    // Convert QList<> from C++ memory to manually-managed C memory
    QDnsDomainNameRecord** _arr = static_cast<QDnsDomainNameRecord**>(malloc(sizeof(QDnsDomainNameRecord*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = new QDnsDomainNameRecord(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QDnsServiceRecord* */ QDnsLookup_ServiceRecords(const QDnsLookup* self) {
    QList<QDnsServiceRecord> _ret = self->serviceRecords();
    // Convert QList<> from C++ memory to manually-managed C memory
    QDnsServiceRecord** _arr = static_cast<QDnsServiceRecord**>(malloc(sizeof(QDnsServiceRecord*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = new QDnsServiceRecord(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QDnsTextRecord* */ QDnsLookup_TextRecords(const QDnsLookup* self) {
    QList<QDnsTextRecord> _ret = self->textRecords();
    // Convert QList<> from C++ memory to manually-managed C memory
    QDnsTextRecord** _arr = static_cast<QDnsTextRecord**>(malloc(sizeof(QDnsTextRecord*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = new QDnsTextRecord(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

void QDnsLookup_Abort(QDnsLookup* self) {
    self->abort();
}

void QDnsLookup_Lookup(QDnsLookup* self) {
    self->lookup();
}

void QDnsLookup_Finished(QDnsLookup* self) {
    self->finished();
}

void QDnsLookup_Connect_Finished(QDnsLookup* self, intptr_t slot) {
    void (*slotFunc)(QDnsLookup*) = reinterpret_cast<void (*)(QDnsLookup*)>(slot);
    QDnsLookup::connect(self, &QDnsLookup::finished, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QDnsLookup_NameChanged(QDnsLookup* self, libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->nameChanged(name_QString);
}

void QDnsLookup_Connect_NameChanged(QDnsLookup* self, intptr_t slot) {
    void (*slotFunc)(QDnsLookup*, libqt_string) = reinterpret_cast<void (*)(QDnsLookup*, libqt_string)>(slot);
    QDnsLookup::connect(self, &QDnsLookup::nameChanged, [self, slotFunc](const QString& name) {
        const QString name_ret = name;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray name_b = name_ret.toUtf8();
        libqt_string name_str;
        name_str.len = name_b.length();
        name_str.data = static_cast<char*>(malloc((name_str.len + 1) * sizeof(char)));
        memcpy(name_str.data, name_b.data(), name_str.len);
        name_str.data[name_str.len] = '\0';
        libqt_string sigval1 = name_str;
        slotFunc(self, sigval1);
    });
}

void QDnsLookup_TypeChanged(QDnsLookup* self, int typeVal) {
    self->typeChanged(static_cast<QDnsLookup::Type>(typeVal));
}

void QDnsLookup_Connect_TypeChanged(QDnsLookup* self, intptr_t slot) {
    void (*slotFunc)(QDnsLookup*, int) = reinterpret_cast<void (*)(QDnsLookup*, int)>(slot);
    QDnsLookup::connect(self, &QDnsLookup::typeChanged, [self, slotFunc](QDnsLookup::Type typeVal) {
        int sigval1 = static_cast<int>(typeVal);
        slotFunc(self, sigval1);
    });
}

void QDnsLookup_NameserverChanged(QDnsLookup* self, QHostAddress* nameserver) {
    self->nameserverChanged(*nameserver);
}

void QDnsLookup_Connect_NameserverChanged(QDnsLookup* self, intptr_t slot) {
    void (*slotFunc)(QDnsLookup*, QHostAddress*) = reinterpret_cast<void (*)(QDnsLookup*, QHostAddress*)>(slot);
    QDnsLookup::connect(self, &QDnsLookup::nameserverChanged, [self, slotFunc](const QHostAddress& nameserver) {
        const QHostAddress& nameserver_ret = nameserver;
        // Cast returned reference into pointer
        QHostAddress* sigval1 = const_cast<QHostAddress*>(&nameserver_ret);
        slotFunc(self, sigval1);
    });
}

libqt_string QDnsLookup_Tr2(const char* s, const char* c) {
    QString _ret = QDnsLookup::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QDnsLookup_Tr3(const char* s, const char* c, int n) {
    QString _ret = QDnsLookup::tr(s, c, static_cast<int>(n));
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
bool QDnsLookup_Event(QDnsLookup* self, QEvent* event) {
    if (auto* vqdnslookup = dynamic_cast<VirtualQDnsLookup*>(self)) {
        return vqdnslookup->event(event);
    } else {
        return vqdnslookup->event(event);
    }
}

// Base class handler implementation
bool QDnsLookup_QBaseEvent(QDnsLookup* self, QEvent* event) {
    if (auto* vqdnslookup = dynamic_cast<VirtualQDnsLookup*>(self)) {
        vqdnslookup->setQDnsLookup_Event_IsBase(true);
        return vqdnslookup->event(event);
    } else {
        return vqdnslookup->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDnsLookup_OnEvent(QDnsLookup* self, intptr_t slot) {
    if (auto* vqdnslookup = dynamic_cast<VirtualQDnsLookup*>(self)) {
        vqdnslookup->setQDnsLookup_Event_Callback(reinterpret_cast<VirtualQDnsLookup::QDnsLookup_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDnsLookup_EventFilter(QDnsLookup* self, QObject* watched, QEvent* event) {
    if (auto* vqdnslookup = dynamic_cast<VirtualQDnsLookup*>(self)) {
        return vqdnslookup->eventFilter(watched, event);
    } else {
        return vqdnslookup->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QDnsLookup_QBaseEventFilter(QDnsLookup* self, QObject* watched, QEvent* event) {
    if (auto* vqdnslookup = dynamic_cast<VirtualQDnsLookup*>(self)) {
        vqdnslookup->setQDnsLookup_EventFilter_IsBase(true);
        return vqdnslookup->eventFilter(watched, event);
    } else {
        return vqdnslookup->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDnsLookup_OnEventFilter(QDnsLookup* self, intptr_t slot) {
    if (auto* vqdnslookup = dynamic_cast<VirtualQDnsLookup*>(self)) {
        vqdnslookup->setQDnsLookup_EventFilter_Callback(reinterpret_cast<VirtualQDnsLookup::QDnsLookup_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QDnsLookup_TimerEvent(QDnsLookup* self, QTimerEvent* event) {
    if (auto* vqdnslookup = dynamic_cast<VirtualQDnsLookup*>(self)) {
        vqdnslookup->timerEvent(event);
    } else {
        vqdnslookup->timerEvent(event);
    }
}

// Base class handler implementation
void QDnsLookup_QBaseTimerEvent(QDnsLookup* self, QTimerEvent* event) {
    if (auto* vqdnslookup = dynamic_cast<VirtualQDnsLookup*>(self)) {
        vqdnslookup->setQDnsLookup_TimerEvent_IsBase(true);
        vqdnslookup->timerEvent(event);
    } else {
        vqdnslookup->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDnsLookup_OnTimerEvent(QDnsLookup* self, intptr_t slot) {
    if (auto* vqdnslookup = dynamic_cast<VirtualQDnsLookup*>(self)) {
        vqdnslookup->setQDnsLookup_TimerEvent_Callback(reinterpret_cast<VirtualQDnsLookup::QDnsLookup_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDnsLookup_ChildEvent(QDnsLookup* self, QChildEvent* event) {
    if (auto* vqdnslookup = dynamic_cast<VirtualQDnsLookup*>(self)) {
        vqdnslookup->childEvent(event);
    } else {
        vqdnslookup->childEvent(event);
    }
}

// Base class handler implementation
void QDnsLookup_QBaseChildEvent(QDnsLookup* self, QChildEvent* event) {
    if (auto* vqdnslookup = dynamic_cast<VirtualQDnsLookup*>(self)) {
        vqdnslookup->setQDnsLookup_ChildEvent_IsBase(true);
        vqdnslookup->childEvent(event);
    } else {
        vqdnslookup->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDnsLookup_OnChildEvent(QDnsLookup* self, intptr_t slot) {
    if (auto* vqdnslookup = dynamic_cast<VirtualQDnsLookup*>(self)) {
        vqdnslookup->setQDnsLookup_ChildEvent_Callback(reinterpret_cast<VirtualQDnsLookup::QDnsLookup_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDnsLookup_CustomEvent(QDnsLookup* self, QEvent* event) {
    if (auto* vqdnslookup = dynamic_cast<VirtualQDnsLookup*>(self)) {
        vqdnslookup->customEvent(event);
    } else {
        vqdnslookup->customEvent(event);
    }
}

// Base class handler implementation
void QDnsLookup_QBaseCustomEvent(QDnsLookup* self, QEvent* event) {
    if (auto* vqdnslookup = dynamic_cast<VirtualQDnsLookup*>(self)) {
        vqdnslookup->setQDnsLookup_CustomEvent_IsBase(true);
        vqdnslookup->customEvent(event);
    } else {
        vqdnslookup->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QDnsLookup_OnCustomEvent(QDnsLookup* self, intptr_t slot) {
    if (auto* vqdnslookup = dynamic_cast<VirtualQDnsLookup*>(self)) {
        vqdnslookup->setQDnsLookup_CustomEvent_Callback(reinterpret_cast<VirtualQDnsLookup::QDnsLookup_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QDnsLookup_ConnectNotify(QDnsLookup* self, QMetaMethod* signal) {
    if (auto* vqdnslookup = dynamic_cast<VirtualQDnsLookup*>(self)) {
        vqdnslookup->connectNotify(*signal);
    } else {
        vqdnslookup->connectNotify(*signal);
    }
}

// Base class handler implementation
void QDnsLookup_QBaseConnectNotify(QDnsLookup* self, QMetaMethod* signal) {
    if (auto* vqdnslookup = dynamic_cast<VirtualQDnsLookup*>(self)) {
        vqdnslookup->setQDnsLookup_ConnectNotify_IsBase(true);
        vqdnslookup->connectNotify(*signal);
    } else {
        vqdnslookup->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDnsLookup_OnConnectNotify(QDnsLookup* self, intptr_t slot) {
    if (auto* vqdnslookup = dynamic_cast<VirtualQDnsLookup*>(self)) {
        vqdnslookup->setQDnsLookup_ConnectNotify_Callback(reinterpret_cast<VirtualQDnsLookup::QDnsLookup_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QDnsLookup_DisconnectNotify(QDnsLookup* self, QMetaMethod* signal) {
    if (auto* vqdnslookup = dynamic_cast<VirtualQDnsLookup*>(self)) {
        vqdnslookup->disconnectNotify(*signal);
    } else {
        vqdnslookup->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QDnsLookup_QBaseDisconnectNotify(QDnsLookup* self, QMetaMethod* signal) {
    if (auto* vqdnslookup = dynamic_cast<VirtualQDnsLookup*>(self)) {
        vqdnslookup->setQDnsLookup_DisconnectNotify_IsBase(true);
        vqdnslookup->disconnectNotify(*signal);
    } else {
        vqdnslookup->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDnsLookup_OnDisconnectNotify(QDnsLookup* self, intptr_t slot) {
    if (auto* vqdnslookup = dynamic_cast<VirtualQDnsLookup*>(self)) {
        vqdnslookup->setQDnsLookup_DisconnectNotify_Callback(reinterpret_cast<VirtualQDnsLookup::QDnsLookup_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QDnsLookup_Sender(const QDnsLookup* self) {
    if (auto* vqdnslookup = const_cast<VirtualQDnsLookup*>(dynamic_cast<const VirtualQDnsLookup*>(self))) {
        return vqdnslookup->sender();
    } else {
        return vqdnslookup->sender();
    }
}

// Base class handler implementation
QObject* QDnsLookup_QBaseSender(const QDnsLookup* self) {
    if (auto* vqdnslookup = const_cast<VirtualQDnsLookup*>(dynamic_cast<const VirtualQDnsLookup*>(self))) {
        vqdnslookup->setQDnsLookup_Sender_IsBase(true);
        return vqdnslookup->sender();
    } else {
        return vqdnslookup->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QDnsLookup_OnSender(const QDnsLookup* self, intptr_t slot) {
    if (auto* vqdnslookup = const_cast<VirtualQDnsLookup*>(dynamic_cast<const VirtualQDnsLookup*>(self))) {
        vqdnslookup->setQDnsLookup_Sender_Callback(reinterpret_cast<VirtualQDnsLookup::QDnsLookup_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QDnsLookup_SenderSignalIndex(const QDnsLookup* self) {
    if (auto* vqdnslookup = const_cast<VirtualQDnsLookup*>(dynamic_cast<const VirtualQDnsLookup*>(self))) {
        return vqdnslookup->senderSignalIndex();
    } else {
        return vqdnslookup->senderSignalIndex();
    }
}

// Base class handler implementation
int QDnsLookup_QBaseSenderSignalIndex(const QDnsLookup* self) {
    if (auto* vqdnslookup = const_cast<VirtualQDnsLookup*>(dynamic_cast<const VirtualQDnsLookup*>(self))) {
        vqdnslookup->setQDnsLookup_SenderSignalIndex_IsBase(true);
        return vqdnslookup->senderSignalIndex();
    } else {
        return vqdnslookup->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QDnsLookup_OnSenderSignalIndex(const QDnsLookup* self, intptr_t slot) {
    if (auto* vqdnslookup = const_cast<VirtualQDnsLookup*>(dynamic_cast<const VirtualQDnsLookup*>(self))) {
        vqdnslookup->setQDnsLookup_SenderSignalIndex_Callback(reinterpret_cast<VirtualQDnsLookup::QDnsLookup_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QDnsLookup_Receivers(const QDnsLookup* self, const char* signal) {
    if (auto* vqdnslookup = const_cast<VirtualQDnsLookup*>(dynamic_cast<const VirtualQDnsLookup*>(self))) {
        return vqdnslookup->receivers(signal);
    } else {
        return vqdnslookup->receivers(signal);
    }
}

// Base class handler implementation
int QDnsLookup_QBaseReceivers(const QDnsLookup* self, const char* signal) {
    if (auto* vqdnslookup = const_cast<VirtualQDnsLookup*>(dynamic_cast<const VirtualQDnsLookup*>(self))) {
        vqdnslookup->setQDnsLookup_Receivers_IsBase(true);
        return vqdnslookup->receivers(signal);
    } else {
        return vqdnslookup->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDnsLookup_OnReceivers(const QDnsLookup* self, intptr_t slot) {
    if (auto* vqdnslookup = const_cast<VirtualQDnsLookup*>(dynamic_cast<const VirtualQDnsLookup*>(self))) {
        vqdnslookup->setQDnsLookup_Receivers_Callback(reinterpret_cast<VirtualQDnsLookup::QDnsLookup_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QDnsLookup_IsSignalConnected(const QDnsLookup* self, QMetaMethod* signal) {
    if (auto* vqdnslookup = const_cast<VirtualQDnsLookup*>(dynamic_cast<const VirtualQDnsLookup*>(self))) {
        return vqdnslookup->isSignalConnected(*signal);
    } else {
        return vqdnslookup->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QDnsLookup_QBaseIsSignalConnected(const QDnsLookup* self, QMetaMethod* signal) {
    if (auto* vqdnslookup = const_cast<VirtualQDnsLookup*>(dynamic_cast<const VirtualQDnsLookup*>(self))) {
        vqdnslookup->setQDnsLookup_IsSignalConnected_IsBase(true);
        return vqdnslookup->isSignalConnected(*signal);
    } else {
        return vqdnslookup->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QDnsLookup_OnIsSignalConnected(const QDnsLookup* self, intptr_t slot) {
    if (auto* vqdnslookup = const_cast<VirtualQDnsLookup*>(dynamic_cast<const VirtualQDnsLookup*>(self))) {
        vqdnslookup->setQDnsLookup_IsSignalConnected_Callback(reinterpret_cast<VirtualQDnsLookup::QDnsLookup_IsSignalConnected_Callback>(slot));
    }
}

void QDnsLookup_Delete(QDnsLookup* self) {
    delete self;
}
