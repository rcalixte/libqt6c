#pragma once
#ifndef SRC_NETWORKC_LIBVIRTUALQNETWORKDISKCACHE_H
#define SRC_NETWORKC_LIBVIRTUALQNETWORKDISKCACHE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QNetworkDiskCache so that we can call protected methods
class VirtualQNetworkDiskCache : public QNetworkDiskCache {

  public:
    // Virtual class public types (including callbacks)
    using QNetworkDiskCache_Metacall_Callback = int (*)(QNetworkDiskCache*, QMetaObject::Call, int, void**);
    using QNetworkDiskCache_CacheSize_Callback = qint64 (*)();
    using QNetworkDiskCache_MetaData_Callback = QNetworkCacheMetaData (*)(QNetworkDiskCache*, const QUrl&);
    using QNetworkDiskCache_UpdateMetaData_Callback = void (*)(QNetworkDiskCache*, const QNetworkCacheMetaData&);
    using QNetworkDiskCache_Data_Callback = QIODevice* (*)(QNetworkDiskCache*, const QUrl&);
    using QNetworkDiskCache_Remove_Callback = bool (*)(QNetworkDiskCache*, const QUrl&);
    using QNetworkDiskCache_Prepare_Callback = QIODevice* (*)(QNetworkDiskCache*, const QNetworkCacheMetaData&);
    using QNetworkDiskCache_Insert_Callback = void (*)(QNetworkDiskCache*, QIODevice*);
    using QNetworkDiskCache_Clear_Callback = void (*)();
    using QNetworkDiskCache_Expire_Callback = qint64 (*)();
    using QNetworkDiskCache_Event_Callback = bool (*)(QNetworkDiskCache*, QEvent*);
    using QNetworkDiskCache_EventFilter_Callback = bool (*)(QNetworkDiskCache*, QObject*, QEvent*);
    using QNetworkDiskCache_TimerEvent_Callback = void (*)(QNetworkDiskCache*, QTimerEvent*);
    using QNetworkDiskCache_ChildEvent_Callback = void (*)(QNetworkDiskCache*, QChildEvent*);
    using QNetworkDiskCache_CustomEvent_Callback = void (*)(QNetworkDiskCache*, QEvent*);
    using QNetworkDiskCache_ConnectNotify_Callback = void (*)(QNetworkDiskCache*, const QMetaMethod&);
    using QNetworkDiskCache_DisconnectNotify_Callback = void (*)(QNetworkDiskCache*, const QMetaMethod&);
    using QNetworkDiskCache_Sender_Callback = QObject* (*)();
    using QNetworkDiskCache_SenderSignalIndex_Callback = int (*)();
    using QNetworkDiskCache_Receivers_Callback = int (*)(const QNetworkDiskCache*, const char*);
    using QNetworkDiskCache_IsSignalConnected_Callback = bool (*)(const QNetworkDiskCache*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QNetworkDiskCache_Metacall_Callback qnetworkdiskcache_metacall_callback = nullptr;
    QNetworkDiskCache_CacheSize_Callback qnetworkdiskcache_cachesize_callback = nullptr;
    QNetworkDiskCache_MetaData_Callback qnetworkdiskcache_metadata_callback = nullptr;
    QNetworkDiskCache_UpdateMetaData_Callback qnetworkdiskcache_updatemetadata_callback = nullptr;
    QNetworkDiskCache_Data_Callback qnetworkdiskcache_data_callback = nullptr;
    QNetworkDiskCache_Remove_Callback qnetworkdiskcache_remove_callback = nullptr;
    QNetworkDiskCache_Prepare_Callback qnetworkdiskcache_prepare_callback = nullptr;
    QNetworkDiskCache_Insert_Callback qnetworkdiskcache_insert_callback = nullptr;
    QNetworkDiskCache_Clear_Callback qnetworkdiskcache_clear_callback = nullptr;
    QNetworkDiskCache_Expire_Callback qnetworkdiskcache_expire_callback = nullptr;
    QNetworkDiskCache_Event_Callback qnetworkdiskcache_event_callback = nullptr;
    QNetworkDiskCache_EventFilter_Callback qnetworkdiskcache_eventfilter_callback = nullptr;
    QNetworkDiskCache_TimerEvent_Callback qnetworkdiskcache_timerevent_callback = nullptr;
    QNetworkDiskCache_ChildEvent_Callback qnetworkdiskcache_childevent_callback = nullptr;
    QNetworkDiskCache_CustomEvent_Callback qnetworkdiskcache_customevent_callback = nullptr;
    QNetworkDiskCache_ConnectNotify_Callback qnetworkdiskcache_connectnotify_callback = nullptr;
    QNetworkDiskCache_DisconnectNotify_Callback qnetworkdiskcache_disconnectnotify_callback = nullptr;
    QNetworkDiskCache_Sender_Callback qnetworkdiskcache_sender_callback = nullptr;
    QNetworkDiskCache_SenderSignalIndex_Callback qnetworkdiskcache_sendersignalindex_callback = nullptr;
    QNetworkDiskCache_Receivers_Callback qnetworkdiskcache_receivers_callback = nullptr;
    QNetworkDiskCache_IsSignalConnected_Callback qnetworkdiskcache_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qnetworkdiskcache_metacall_isbase = false;
    mutable bool qnetworkdiskcache_cachesize_isbase = false;
    mutable bool qnetworkdiskcache_metadata_isbase = false;
    mutable bool qnetworkdiskcache_updatemetadata_isbase = false;
    mutable bool qnetworkdiskcache_data_isbase = false;
    mutable bool qnetworkdiskcache_remove_isbase = false;
    mutable bool qnetworkdiskcache_prepare_isbase = false;
    mutable bool qnetworkdiskcache_insert_isbase = false;
    mutable bool qnetworkdiskcache_clear_isbase = false;
    mutable bool qnetworkdiskcache_expire_isbase = false;
    mutable bool qnetworkdiskcache_event_isbase = false;
    mutable bool qnetworkdiskcache_eventfilter_isbase = false;
    mutable bool qnetworkdiskcache_timerevent_isbase = false;
    mutable bool qnetworkdiskcache_childevent_isbase = false;
    mutable bool qnetworkdiskcache_customevent_isbase = false;
    mutable bool qnetworkdiskcache_connectnotify_isbase = false;
    mutable bool qnetworkdiskcache_disconnectnotify_isbase = false;
    mutable bool qnetworkdiskcache_sender_isbase = false;
    mutable bool qnetworkdiskcache_sendersignalindex_isbase = false;
    mutable bool qnetworkdiskcache_receivers_isbase = false;
    mutable bool qnetworkdiskcache_issignalconnected_isbase = false;

  public:
    VirtualQNetworkDiskCache() : QNetworkDiskCache(){};
    VirtualQNetworkDiskCache(QObject* parent) : QNetworkDiskCache(parent){};

    ~VirtualQNetworkDiskCache() {
        qnetworkdiskcache_metacall_callback = nullptr;
        qnetworkdiskcache_cachesize_callback = nullptr;
        qnetworkdiskcache_metadata_callback = nullptr;
        qnetworkdiskcache_updatemetadata_callback = nullptr;
        qnetworkdiskcache_data_callback = nullptr;
        qnetworkdiskcache_remove_callback = nullptr;
        qnetworkdiskcache_prepare_callback = nullptr;
        qnetworkdiskcache_insert_callback = nullptr;
        qnetworkdiskcache_clear_callback = nullptr;
        qnetworkdiskcache_expire_callback = nullptr;
        qnetworkdiskcache_event_callback = nullptr;
        qnetworkdiskcache_eventfilter_callback = nullptr;
        qnetworkdiskcache_timerevent_callback = nullptr;
        qnetworkdiskcache_childevent_callback = nullptr;
        qnetworkdiskcache_customevent_callback = nullptr;
        qnetworkdiskcache_connectnotify_callback = nullptr;
        qnetworkdiskcache_disconnectnotify_callback = nullptr;
        qnetworkdiskcache_sender_callback = nullptr;
        qnetworkdiskcache_sendersignalindex_callback = nullptr;
        qnetworkdiskcache_receivers_callback = nullptr;
        qnetworkdiskcache_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQNetworkDiskCache_Metacall_Callback(QNetworkDiskCache_Metacall_Callback cb) { qnetworkdiskcache_metacall_callback = cb; }
    void setQNetworkDiskCache_CacheSize_Callback(QNetworkDiskCache_CacheSize_Callback cb) { qnetworkdiskcache_cachesize_callback = cb; }
    void setQNetworkDiskCache_MetaData_Callback(QNetworkDiskCache_MetaData_Callback cb) { qnetworkdiskcache_metadata_callback = cb; }
    void setQNetworkDiskCache_UpdateMetaData_Callback(QNetworkDiskCache_UpdateMetaData_Callback cb) { qnetworkdiskcache_updatemetadata_callback = cb; }
    void setQNetworkDiskCache_Data_Callback(QNetworkDiskCache_Data_Callback cb) { qnetworkdiskcache_data_callback = cb; }
    void setQNetworkDiskCache_Remove_Callback(QNetworkDiskCache_Remove_Callback cb) { qnetworkdiskcache_remove_callback = cb; }
    void setQNetworkDiskCache_Prepare_Callback(QNetworkDiskCache_Prepare_Callback cb) { qnetworkdiskcache_prepare_callback = cb; }
    void setQNetworkDiskCache_Insert_Callback(QNetworkDiskCache_Insert_Callback cb) { qnetworkdiskcache_insert_callback = cb; }
    void setQNetworkDiskCache_Clear_Callback(QNetworkDiskCache_Clear_Callback cb) { qnetworkdiskcache_clear_callback = cb; }
    void setQNetworkDiskCache_Expire_Callback(QNetworkDiskCache_Expire_Callback cb) { qnetworkdiskcache_expire_callback = cb; }
    void setQNetworkDiskCache_Event_Callback(QNetworkDiskCache_Event_Callback cb) { qnetworkdiskcache_event_callback = cb; }
    void setQNetworkDiskCache_EventFilter_Callback(QNetworkDiskCache_EventFilter_Callback cb) { qnetworkdiskcache_eventfilter_callback = cb; }
    void setQNetworkDiskCache_TimerEvent_Callback(QNetworkDiskCache_TimerEvent_Callback cb) { qnetworkdiskcache_timerevent_callback = cb; }
    void setQNetworkDiskCache_ChildEvent_Callback(QNetworkDiskCache_ChildEvent_Callback cb) { qnetworkdiskcache_childevent_callback = cb; }
    void setQNetworkDiskCache_CustomEvent_Callback(QNetworkDiskCache_CustomEvent_Callback cb) { qnetworkdiskcache_customevent_callback = cb; }
    void setQNetworkDiskCache_ConnectNotify_Callback(QNetworkDiskCache_ConnectNotify_Callback cb) { qnetworkdiskcache_connectnotify_callback = cb; }
    void setQNetworkDiskCache_DisconnectNotify_Callback(QNetworkDiskCache_DisconnectNotify_Callback cb) { qnetworkdiskcache_disconnectnotify_callback = cb; }
    void setQNetworkDiskCache_Sender_Callback(QNetworkDiskCache_Sender_Callback cb) { qnetworkdiskcache_sender_callback = cb; }
    void setQNetworkDiskCache_SenderSignalIndex_Callback(QNetworkDiskCache_SenderSignalIndex_Callback cb) { qnetworkdiskcache_sendersignalindex_callback = cb; }
    void setQNetworkDiskCache_Receivers_Callback(QNetworkDiskCache_Receivers_Callback cb) { qnetworkdiskcache_receivers_callback = cb; }
    void setQNetworkDiskCache_IsSignalConnected_Callback(QNetworkDiskCache_IsSignalConnected_Callback cb) { qnetworkdiskcache_issignalconnected_callback = cb; }

    // Base flag setters
    void setQNetworkDiskCache_Metacall_IsBase(bool value) const { qnetworkdiskcache_metacall_isbase = value; }
    void setQNetworkDiskCache_CacheSize_IsBase(bool value) const { qnetworkdiskcache_cachesize_isbase = value; }
    void setQNetworkDiskCache_MetaData_IsBase(bool value) const { qnetworkdiskcache_metadata_isbase = value; }
    void setQNetworkDiskCache_UpdateMetaData_IsBase(bool value) const { qnetworkdiskcache_updatemetadata_isbase = value; }
    void setQNetworkDiskCache_Data_IsBase(bool value) const { qnetworkdiskcache_data_isbase = value; }
    void setQNetworkDiskCache_Remove_IsBase(bool value) const { qnetworkdiskcache_remove_isbase = value; }
    void setQNetworkDiskCache_Prepare_IsBase(bool value) const { qnetworkdiskcache_prepare_isbase = value; }
    void setQNetworkDiskCache_Insert_IsBase(bool value) const { qnetworkdiskcache_insert_isbase = value; }
    void setQNetworkDiskCache_Clear_IsBase(bool value) const { qnetworkdiskcache_clear_isbase = value; }
    void setQNetworkDiskCache_Expire_IsBase(bool value) const { qnetworkdiskcache_expire_isbase = value; }
    void setQNetworkDiskCache_Event_IsBase(bool value) const { qnetworkdiskcache_event_isbase = value; }
    void setQNetworkDiskCache_EventFilter_IsBase(bool value) const { qnetworkdiskcache_eventfilter_isbase = value; }
    void setQNetworkDiskCache_TimerEvent_IsBase(bool value) const { qnetworkdiskcache_timerevent_isbase = value; }
    void setQNetworkDiskCache_ChildEvent_IsBase(bool value) const { qnetworkdiskcache_childevent_isbase = value; }
    void setQNetworkDiskCache_CustomEvent_IsBase(bool value) const { qnetworkdiskcache_customevent_isbase = value; }
    void setQNetworkDiskCache_ConnectNotify_IsBase(bool value) const { qnetworkdiskcache_connectnotify_isbase = value; }
    void setQNetworkDiskCache_DisconnectNotify_IsBase(bool value) const { qnetworkdiskcache_disconnectnotify_isbase = value; }
    void setQNetworkDiskCache_Sender_IsBase(bool value) const { qnetworkdiskcache_sender_isbase = value; }
    void setQNetworkDiskCache_SenderSignalIndex_IsBase(bool value) const { qnetworkdiskcache_sendersignalindex_isbase = value; }
    void setQNetworkDiskCache_Receivers_IsBase(bool value) const { qnetworkdiskcache_receivers_isbase = value; }
    void setQNetworkDiskCache_IsSignalConnected_IsBase(bool value) const { qnetworkdiskcache_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qnetworkdiskcache_metacall_isbase) {
            qnetworkdiskcache_metacall_isbase = false;
            return QNetworkDiskCache::qt_metacall(param1, param2, param3);
        } else if (qnetworkdiskcache_metacall_callback != nullptr) {
            return qnetworkdiskcache_metacall_callback(this, param1, param2, param3);
        } else {
            return QNetworkDiskCache::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 cacheSize() const override {
        if (qnetworkdiskcache_cachesize_isbase) {
            qnetworkdiskcache_cachesize_isbase = false;
            return QNetworkDiskCache::cacheSize();
        } else if (qnetworkdiskcache_cachesize_callback != nullptr) {
            return qnetworkdiskcache_cachesize_callback();
        } else {
            return QNetworkDiskCache::cacheSize();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QNetworkCacheMetaData metaData(const QUrl& url) override {
        if (qnetworkdiskcache_metadata_isbase) {
            qnetworkdiskcache_metadata_isbase = false;
            return QNetworkDiskCache::metaData(url);
        } else if (qnetworkdiskcache_metadata_callback != nullptr) {
            return qnetworkdiskcache_metadata_callback(this, url);
        } else {
            return QNetworkDiskCache::metaData(url);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateMetaData(const QNetworkCacheMetaData& metaData) override {
        if (qnetworkdiskcache_updatemetadata_isbase) {
            qnetworkdiskcache_updatemetadata_isbase = false;
            QNetworkDiskCache::updateMetaData(metaData);
        } else if (qnetworkdiskcache_updatemetadata_callback != nullptr) {
            qnetworkdiskcache_updatemetadata_callback(this, metaData);
        } else {
            QNetworkDiskCache::updateMetaData(metaData);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QIODevice* data(const QUrl& url) override {
        if (qnetworkdiskcache_data_isbase) {
            qnetworkdiskcache_data_isbase = false;
            return QNetworkDiskCache::data(url);
        } else if (qnetworkdiskcache_data_callback != nullptr) {
            return qnetworkdiskcache_data_callback(this, url);
        } else {
            return QNetworkDiskCache::data(url);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool remove(const QUrl& url) override {
        if (qnetworkdiskcache_remove_isbase) {
            qnetworkdiskcache_remove_isbase = false;
            return QNetworkDiskCache::remove(url);
        } else if (qnetworkdiskcache_remove_callback != nullptr) {
            return qnetworkdiskcache_remove_callback(this, url);
        } else {
            return QNetworkDiskCache::remove(url);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QIODevice* prepare(const QNetworkCacheMetaData& metaData) override {
        if (qnetworkdiskcache_prepare_isbase) {
            qnetworkdiskcache_prepare_isbase = false;
            return QNetworkDiskCache::prepare(metaData);
        } else if (qnetworkdiskcache_prepare_callback != nullptr) {
            return qnetworkdiskcache_prepare_callback(this, metaData);
        } else {
            return QNetworkDiskCache::prepare(metaData);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void insert(QIODevice* device) override {
        if (qnetworkdiskcache_insert_isbase) {
            qnetworkdiskcache_insert_isbase = false;
            QNetworkDiskCache::insert(device);
        } else if (qnetworkdiskcache_insert_callback != nullptr) {
            qnetworkdiskcache_insert_callback(this, device);
        } else {
            QNetworkDiskCache::insert(device);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void clear() override {
        if (qnetworkdiskcache_clear_isbase) {
            qnetworkdiskcache_clear_isbase = false;
            QNetworkDiskCache::clear();
        } else if (qnetworkdiskcache_clear_callback != nullptr) {
            qnetworkdiskcache_clear_callback();
        } else {
            QNetworkDiskCache::clear();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual qint64 expire() override {
        if (qnetworkdiskcache_expire_isbase) {
            qnetworkdiskcache_expire_isbase = false;
            return QNetworkDiskCache::expire();
        } else if (qnetworkdiskcache_expire_callback != nullptr) {
            return qnetworkdiskcache_expire_callback();
        } else {
            return QNetworkDiskCache::expire();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qnetworkdiskcache_event_isbase) {
            qnetworkdiskcache_event_isbase = false;
            return QNetworkDiskCache::event(event);
        } else if (qnetworkdiskcache_event_callback != nullptr) {
            return qnetworkdiskcache_event_callback(this, event);
        } else {
            return QNetworkDiskCache::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qnetworkdiskcache_eventfilter_isbase) {
            qnetworkdiskcache_eventfilter_isbase = false;
            return QNetworkDiskCache::eventFilter(watched, event);
        } else if (qnetworkdiskcache_eventfilter_callback != nullptr) {
            return qnetworkdiskcache_eventfilter_callback(this, watched, event);
        } else {
            return QNetworkDiskCache::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qnetworkdiskcache_timerevent_isbase) {
            qnetworkdiskcache_timerevent_isbase = false;
            QNetworkDiskCache::timerEvent(event);
        } else if (qnetworkdiskcache_timerevent_callback != nullptr) {
            qnetworkdiskcache_timerevent_callback(this, event);
        } else {
            QNetworkDiskCache::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qnetworkdiskcache_childevent_isbase) {
            qnetworkdiskcache_childevent_isbase = false;
            QNetworkDiskCache::childEvent(event);
        } else if (qnetworkdiskcache_childevent_callback != nullptr) {
            qnetworkdiskcache_childevent_callback(this, event);
        } else {
            QNetworkDiskCache::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qnetworkdiskcache_customevent_isbase) {
            qnetworkdiskcache_customevent_isbase = false;
            QNetworkDiskCache::customEvent(event);
        } else if (qnetworkdiskcache_customevent_callback != nullptr) {
            qnetworkdiskcache_customevent_callback(this, event);
        } else {
            QNetworkDiskCache::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qnetworkdiskcache_connectnotify_isbase) {
            qnetworkdiskcache_connectnotify_isbase = false;
            QNetworkDiskCache::connectNotify(signal);
        } else if (qnetworkdiskcache_connectnotify_callback != nullptr) {
            qnetworkdiskcache_connectnotify_callback(this, signal);
        } else {
            QNetworkDiskCache::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qnetworkdiskcache_disconnectnotify_isbase) {
            qnetworkdiskcache_disconnectnotify_isbase = false;
            QNetworkDiskCache::disconnectNotify(signal);
        } else if (qnetworkdiskcache_disconnectnotify_callback != nullptr) {
            qnetworkdiskcache_disconnectnotify_callback(this, signal);
        } else {
            QNetworkDiskCache::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qnetworkdiskcache_sender_isbase) {
            qnetworkdiskcache_sender_isbase = false;
            return QNetworkDiskCache::sender();
        } else if (qnetworkdiskcache_sender_callback != nullptr) {
            return qnetworkdiskcache_sender_callback();
        } else {
            return QNetworkDiskCache::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qnetworkdiskcache_sendersignalindex_isbase) {
            qnetworkdiskcache_sendersignalindex_isbase = false;
            return QNetworkDiskCache::senderSignalIndex();
        } else if (qnetworkdiskcache_sendersignalindex_callback != nullptr) {
            return qnetworkdiskcache_sendersignalindex_callback();
        } else {
            return QNetworkDiskCache::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qnetworkdiskcache_receivers_isbase) {
            qnetworkdiskcache_receivers_isbase = false;
            return QNetworkDiskCache::receivers(signal);
        } else if (qnetworkdiskcache_receivers_callback != nullptr) {
            return qnetworkdiskcache_receivers_callback(this, signal);
        } else {
            return QNetworkDiskCache::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qnetworkdiskcache_issignalconnected_isbase) {
            qnetworkdiskcache_issignalconnected_isbase = false;
            return QNetworkDiskCache::isSignalConnected(signal);
        } else if (qnetworkdiskcache_issignalconnected_callback != nullptr) {
            return qnetworkdiskcache_issignalconnected_callback(this, signal);
        } else {
            return QNetworkDiskCache::isSignalConnected(signal);
        }
    }
};

#endif
