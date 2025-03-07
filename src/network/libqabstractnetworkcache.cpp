#include <QAbstractNetworkCache>
#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QDateTime>
#include <QEvent>
#include <QIODevice>
#include <QList>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QNetworkCacheMetaData>
#include <QObject>
#include <QPair>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <qabstractnetworkcache.h>
#include "libqabstractnetworkcache.hpp"
#include "libqabstractnetworkcache.hxx"

QNetworkCacheMetaData* QNetworkCacheMetaData_new() {
    return new QNetworkCacheMetaData();
}

QNetworkCacheMetaData* QNetworkCacheMetaData_new2(QNetworkCacheMetaData* other) {
    return new QNetworkCacheMetaData(*other);
}

void QNetworkCacheMetaData_OperatorAssign(QNetworkCacheMetaData* self, QNetworkCacheMetaData* other) {
    self->operator=(*other);
}

void QNetworkCacheMetaData_Swap(QNetworkCacheMetaData* self, QNetworkCacheMetaData* other) {
    self->swap(*other);
}

bool QNetworkCacheMetaData_OperatorEqual(const QNetworkCacheMetaData* self, QNetworkCacheMetaData* other) {
    return (*self == *other);
}

bool QNetworkCacheMetaData_OperatorNotEqual(const QNetworkCacheMetaData* self, QNetworkCacheMetaData* other) {
    return (*self != *other);
}

bool QNetworkCacheMetaData_IsValid(const QNetworkCacheMetaData* self) {
    return self->isValid();
}

QUrl* QNetworkCacheMetaData_Url(const QNetworkCacheMetaData* self) {
    return new QUrl(self->url());
}

void QNetworkCacheMetaData_SetUrl(QNetworkCacheMetaData* self, QUrl* url) {
    self->setUrl(*url);
}

libqt_list /* of libqt_pair  tuple of libqt_string and libqt_string  */ QNetworkCacheMetaData_RawHeaders(const QNetworkCacheMetaData* self) {
    QNetworkCacheMetaData::RawHeaderList _ret = self->rawHeaders();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_pair /* tuple of libqt_string and libqt_string */* _arr = static_cast<libqt_pair /* tuple of libqt_string and libqt_string */*>(malloc(sizeof(libqt_pair /* tuple of libqt_string and libqt_string */) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        QPair<QByteArray, QByteArray> _lv_ret = _ret[i];
        // Convert QPair<> from C++ memory to manually-managed C memory
        libqt_string* _lv_first = static_cast<libqt_string*>(malloc(sizeof(libqt_string)));
        libqt_string* _lv_second = static_cast<libqt_string*>(malloc(sizeof(libqt_string)));
        QByteArray _lv_first_qb = _lv_ret.first;
        libqt_string _lv_first_str;
        _lv_first_str.len = _lv_first_qb.length();
        _lv_first_str.data = static_cast<char*>(malloc((_lv_first_str.len + 1) * sizeof(char)));
        memcpy(_lv_first_str.data, _lv_first_qb.data(), _lv_first_str.len);
        _lv_first_str.data[_lv_first_str.len] = '\0';
        *_lv_first = _lv_first_str;
        QByteArray _lv_second_qb = _lv_ret.second;
        libqt_string _lv_second_str;
        _lv_second_str.len = _lv_second_qb.length();
        _lv_second_str.data = static_cast<char*>(malloc((_lv_second_str.len + 1) * sizeof(char)));
        memcpy(_lv_second_str.data, _lv_second_qb.data(), _lv_second_str.len);
        _lv_second_str.data[_lv_second_str.len] = '\0';
        *_lv_second = _lv_second_str;
        libqt_pair _lv_out;
        _lv_out.first = static_cast<void*>(_lv_first);
        _lv_out.second = static_cast<void*>(_lv_second);
        _arr[i] = _lv_out;
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data.ptr = static_cast<void*>(_arr);
    return _out;
}

void QNetworkCacheMetaData_SetRawHeaders(QNetworkCacheMetaData* self, libqt_list /* of libqt_pair  tuple of libqt_string and libqt_string  */ headers) {
    QNetworkCacheMetaData::RawHeaderList headers_QList;
    headers_QList.reserve(headers.len);
    libqt_pair /* tuple of libqt_string and libqt_string */* headers_arr = static_cast<libqt_pair /* tuple of libqt_string and libqt_string */*>(headers.data.ptr);
    for (size_t i = 0; i < headers.len; ++i) {
        QPair<QByteArray, QByteArray> headers_arr_i_QPair;
        libqt_string* headers_arr_i_first = static_cast<libqt_string*>(headers_arr[i].first);
        libqt_string* headers_arr_i_second = static_cast<libqt_string*>(headers_arr[i].second);
        headers_arr_i_QPair.first = QByteArray::fromRawData(headers_arr_i_first->data, headers_arr_i_first->len);
        headers_arr_i_QPair.second = QByteArray::fromRawData(headers_arr_i_second->data, headers_arr_i_second->len);
        headers_QList.push_back(headers_arr_i_QPair);
    }
    self->setRawHeaders(headers_QList);
}

QDateTime* QNetworkCacheMetaData_LastModified(const QNetworkCacheMetaData* self) {
    return new QDateTime(self->lastModified());
}

void QNetworkCacheMetaData_SetLastModified(QNetworkCacheMetaData* self, QDateTime* dateTime) {
    self->setLastModified(*dateTime);
}

QDateTime* QNetworkCacheMetaData_ExpirationDate(const QNetworkCacheMetaData* self) {
    return new QDateTime(self->expirationDate());
}

void QNetworkCacheMetaData_SetExpirationDate(QNetworkCacheMetaData* self, QDateTime* dateTime) {
    self->setExpirationDate(*dateTime);
}

bool QNetworkCacheMetaData_SaveToDisk(const QNetworkCacheMetaData* self) {
    return self->saveToDisk();
}

void QNetworkCacheMetaData_SetSaveToDisk(QNetworkCacheMetaData* self, bool allow) {
    self->setSaveToDisk(allow);
}

libqt_map /* of int to QVariant* */ QNetworkCacheMetaData_Attributes(const QNetworkCacheMetaData* self) {
    QNetworkCacheMetaData::AttributesMap _ret = self->attributes();
    // Convert QMap<> from C++ memory to manually-managed C memory
    int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
    QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
    int _ctr = 0;
    for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
        _karr[_ctr] = static_cast<int>(_itr->first);
        _varr[_ctr] = new QVariant(_itr->second);
        _ctr++;
    }
    libqt_map _out;
    _out.len = _ret.size();
    _out.keys = static_cast<void*>(_karr);
    _out.values = static_cast<void*>(_varr);
    return _out;
}

void QNetworkCacheMetaData_SetAttributes(QNetworkCacheMetaData* self, libqt_map /* of int to QVariant* */ attributes) {
    QNetworkCacheMetaData::AttributesMap attributes_QMap;
    attributes_QMap.reserve(attributes.len);
    int* attributes_karr = static_cast<int*>(attributes.keys);
    QVariant** attributes_varr = static_cast<QVariant**>(attributes.values);
    for (size_t i = 0; i < attributes.len; ++i) {
        attributes_QMap[static_cast<QNetworkRequest::Attribute>(attributes_karr[i])] = *(attributes_varr[i]);
    }
    self->setAttributes(attributes_QMap);
}

void QNetworkCacheMetaData_Delete(QNetworkCacheMetaData* self) {
    delete self;
}

QMetaObject* QAbstractNetworkCache_MetaObject(const QAbstractNetworkCache* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAbstractNetworkCache_Metacast(QAbstractNetworkCache* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAbstractNetworkCache_Metacall(QAbstractNetworkCache* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QAbstractNetworkCache_Tr(const char* s) {
    QString _ret = QAbstractNetworkCache::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QNetworkCacheMetaData* QAbstractNetworkCache_MetaData(QAbstractNetworkCache* self, QUrl* url) {
    return new QNetworkCacheMetaData(self->metaData(*url));
}

void QAbstractNetworkCache_UpdateMetaData(QAbstractNetworkCache* self, QNetworkCacheMetaData* metaData) {
    self->updateMetaData(*metaData);
}

QIODevice* QAbstractNetworkCache_Data(QAbstractNetworkCache* self, QUrl* url) {
    return self->data(*url);
}

bool QAbstractNetworkCache_Remove(QAbstractNetworkCache* self, QUrl* url) {
    return self->remove(*url);
}

long long QAbstractNetworkCache_CacheSize(const QAbstractNetworkCache* self) {
    return static_cast<long long>(self->cacheSize());
}

QIODevice* QAbstractNetworkCache_Prepare(QAbstractNetworkCache* self, QNetworkCacheMetaData* metaData) {
    return self->prepare(*metaData);
}

void QAbstractNetworkCache_Insert(QAbstractNetworkCache* self, QIODevice* device) {
    self->insert(device);
}

void QAbstractNetworkCache_Clear(QAbstractNetworkCache* self) {
    self->clear();
}

libqt_string QAbstractNetworkCache_Tr2(const char* s, const char* c) {
    QString _ret = QAbstractNetworkCache::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QAbstractNetworkCache_Tr3(const char* s, const char* c, int n) {
    QString _ret = QAbstractNetworkCache::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QAbstractNetworkCache_Event(QAbstractNetworkCache* self, QEvent* event) {
    return self->event(event);
}

bool QAbstractNetworkCache_EventFilter(QAbstractNetworkCache* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

void QAbstractNetworkCache_Delete(QAbstractNetworkCache* self) {
    delete self;
}
