#pragma once
#ifndef SRCC_LIBVIRTUALQPDFWRITER_H
#define SRCC_LIBVIRTUALQPDFWRITER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QPdfWriter so that we can call protected methods
class VirtualQPdfWriter : public QPdfWriter {

  public:
    // Virtual class public types (including callbacks)
    using QPdfWriter_Metacall_Callback = int (*)(QPdfWriter*, QMetaObject::Call, int, void**);
    using QPdfWriter_NewPage_Callback = bool (*)();
    using QPdfWriter_PaintEngine_Callback = QPaintEngine* (*)();
    using QPdfWriter_Metric_Callback = int (*)(const QPdfWriter*, QPaintDevice::PaintDeviceMetric);
    using QPdfWriter_Event_Callback = bool (*)(QPdfWriter*, QEvent*);
    using QPdfWriter_EventFilter_Callback = bool (*)(QPdfWriter*, QObject*, QEvent*);
    using QPdfWriter_TimerEvent_Callback = void (*)(QPdfWriter*, QTimerEvent*);
    using QPdfWriter_ChildEvent_Callback = void (*)(QPdfWriter*, QChildEvent*);
    using QPdfWriter_CustomEvent_Callback = void (*)(QPdfWriter*, QEvent*);
    using QPdfWriter_ConnectNotify_Callback = void (*)(QPdfWriter*, const QMetaMethod&);
    using QPdfWriter_DisconnectNotify_Callback = void (*)(QPdfWriter*, const QMetaMethod&);
    using QPdfWriter_SetPageLayout_Callback = bool (*)(QPdfWriter*, const QPageLayout&);
    using QPdfWriter_SetPageSize_Callback = bool (*)(QPdfWriter*, const QPageSize&);
    using QPdfWriter_SetPageOrientation_Callback = bool (*)(QPdfWriter*, QPageLayout::Orientation);
    using QPdfWriter_SetPageMargins_Callback = bool (*)(QPdfWriter*, const QMarginsF&, QPageLayout::Unit);
    using QPdfWriter_SetPageRanges_Callback = void (*)(QPdfWriter*, const QPageRanges&);
    using QPdfWriter_DevType_Callback = int (*)();
    using QPdfWriter_InitPainter_Callback = void (*)(const QPdfWriter*, QPainter*);
    using QPdfWriter_Redirected_Callback = QPaintDevice* (*)(const QPdfWriter*, QPoint*);
    using QPdfWriter_SharedPainter_Callback = QPainter* (*)();
    using QPdfWriter_Sender_Callback = QObject* (*)();
    using QPdfWriter_SenderSignalIndex_Callback = int (*)();
    using QPdfWriter_Receivers_Callback = int (*)(const QPdfWriter*, const char*);
    using QPdfWriter_IsSignalConnected_Callback = bool (*)(const QPdfWriter*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QPdfWriter_Metacall_Callback qpdfwriter_metacall_callback = nullptr;
    QPdfWriter_NewPage_Callback qpdfwriter_newpage_callback = nullptr;
    QPdfWriter_PaintEngine_Callback qpdfwriter_paintengine_callback = nullptr;
    QPdfWriter_Metric_Callback qpdfwriter_metric_callback = nullptr;
    QPdfWriter_Event_Callback qpdfwriter_event_callback = nullptr;
    QPdfWriter_EventFilter_Callback qpdfwriter_eventfilter_callback = nullptr;
    QPdfWriter_TimerEvent_Callback qpdfwriter_timerevent_callback = nullptr;
    QPdfWriter_ChildEvent_Callback qpdfwriter_childevent_callback = nullptr;
    QPdfWriter_CustomEvent_Callback qpdfwriter_customevent_callback = nullptr;
    QPdfWriter_ConnectNotify_Callback qpdfwriter_connectnotify_callback = nullptr;
    QPdfWriter_DisconnectNotify_Callback qpdfwriter_disconnectnotify_callback = nullptr;
    QPdfWriter_SetPageLayout_Callback qpdfwriter_setpagelayout_callback = nullptr;
    QPdfWriter_SetPageSize_Callback qpdfwriter_setpagesize_callback = nullptr;
    QPdfWriter_SetPageOrientation_Callback qpdfwriter_setpageorientation_callback = nullptr;
    QPdfWriter_SetPageMargins_Callback qpdfwriter_setpagemargins_callback = nullptr;
    QPdfWriter_SetPageRanges_Callback qpdfwriter_setpageranges_callback = nullptr;
    QPdfWriter_DevType_Callback qpdfwriter_devtype_callback = nullptr;
    QPdfWriter_InitPainter_Callback qpdfwriter_initpainter_callback = nullptr;
    QPdfWriter_Redirected_Callback qpdfwriter_redirected_callback = nullptr;
    QPdfWriter_SharedPainter_Callback qpdfwriter_sharedpainter_callback = nullptr;
    QPdfWriter_Sender_Callback qpdfwriter_sender_callback = nullptr;
    QPdfWriter_SenderSignalIndex_Callback qpdfwriter_sendersignalindex_callback = nullptr;
    QPdfWriter_Receivers_Callback qpdfwriter_receivers_callback = nullptr;
    QPdfWriter_IsSignalConnected_Callback qpdfwriter_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qpdfwriter_metacall_isbase = false;
    mutable bool qpdfwriter_newpage_isbase = false;
    mutable bool qpdfwriter_paintengine_isbase = false;
    mutable bool qpdfwriter_metric_isbase = false;
    mutable bool qpdfwriter_event_isbase = false;
    mutable bool qpdfwriter_eventfilter_isbase = false;
    mutable bool qpdfwriter_timerevent_isbase = false;
    mutable bool qpdfwriter_childevent_isbase = false;
    mutable bool qpdfwriter_customevent_isbase = false;
    mutable bool qpdfwriter_connectnotify_isbase = false;
    mutable bool qpdfwriter_disconnectnotify_isbase = false;
    mutable bool qpdfwriter_setpagelayout_isbase = false;
    mutable bool qpdfwriter_setpagesize_isbase = false;
    mutable bool qpdfwriter_setpageorientation_isbase = false;
    mutable bool qpdfwriter_setpagemargins_isbase = false;
    mutable bool qpdfwriter_setpageranges_isbase = false;
    mutable bool qpdfwriter_devtype_isbase = false;
    mutable bool qpdfwriter_initpainter_isbase = false;
    mutable bool qpdfwriter_redirected_isbase = false;
    mutable bool qpdfwriter_sharedpainter_isbase = false;
    mutable bool qpdfwriter_sender_isbase = false;
    mutable bool qpdfwriter_sendersignalindex_isbase = false;
    mutable bool qpdfwriter_receivers_isbase = false;
    mutable bool qpdfwriter_issignalconnected_isbase = false;

  public:
    VirtualQPdfWriter(const QString& filename) : QPdfWriter(filename){};
    VirtualQPdfWriter(QIODevice* device) : QPdfWriter(device){};

    ~VirtualQPdfWriter() {
        qpdfwriter_metacall_callback = nullptr;
        qpdfwriter_newpage_callback = nullptr;
        qpdfwriter_paintengine_callback = nullptr;
        qpdfwriter_metric_callback = nullptr;
        qpdfwriter_event_callback = nullptr;
        qpdfwriter_eventfilter_callback = nullptr;
        qpdfwriter_timerevent_callback = nullptr;
        qpdfwriter_childevent_callback = nullptr;
        qpdfwriter_customevent_callback = nullptr;
        qpdfwriter_connectnotify_callback = nullptr;
        qpdfwriter_disconnectnotify_callback = nullptr;
        qpdfwriter_setpagelayout_callback = nullptr;
        qpdfwriter_setpagesize_callback = nullptr;
        qpdfwriter_setpageorientation_callback = nullptr;
        qpdfwriter_setpagemargins_callback = nullptr;
        qpdfwriter_setpageranges_callback = nullptr;
        qpdfwriter_devtype_callback = nullptr;
        qpdfwriter_initpainter_callback = nullptr;
        qpdfwriter_redirected_callback = nullptr;
        qpdfwriter_sharedpainter_callback = nullptr;
        qpdfwriter_sender_callback = nullptr;
        qpdfwriter_sendersignalindex_callback = nullptr;
        qpdfwriter_receivers_callback = nullptr;
        qpdfwriter_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQPdfWriter_Metacall_Callback(QPdfWriter_Metacall_Callback cb) { qpdfwriter_metacall_callback = cb; }
    void setQPdfWriter_NewPage_Callback(QPdfWriter_NewPage_Callback cb) { qpdfwriter_newpage_callback = cb; }
    void setQPdfWriter_PaintEngine_Callback(QPdfWriter_PaintEngine_Callback cb) { qpdfwriter_paintengine_callback = cb; }
    void setQPdfWriter_Metric_Callback(QPdfWriter_Metric_Callback cb) { qpdfwriter_metric_callback = cb; }
    void setQPdfWriter_Event_Callback(QPdfWriter_Event_Callback cb) { qpdfwriter_event_callback = cb; }
    void setQPdfWriter_EventFilter_Callback(QPdfWriter_EventFilter_Callback cb) { qpdfwriter_eventfilter_callback = cb; }
    void setQPdfWriter_TimerEvent_Callback(QPdfWriter_TimerEvent_Callback cb) { qpdfwriter_timerevent_callback = cb; }
    void setQPdfWriter_ChildEvent_Callback(QPdfWriter_ChildEvent_Callback cb) { qpdfwriter_childevent_callback = cb; }
    void setQPdfWriter_CustomEvent_Callback(QPdfWriter_CustomEvent_Callback cb) { qpdfwriter_customevent_callback = cb; }
    void setQPdfWriter_ConnectNotify_Callback(QPdfWriter_ConnectNotify_Callback cb) { qpdfwriter_connectnotify_callback = cb; }
    void setQPdfWriter_DisconnectNotify_Callback(QPdfWriter_DisconnectNotify_Callback cb) { qpdfwriter_disconnectnotify_callback = cb; }
    void setQPdfWriter_SetPageLayout_Callback(QPdfWriter_SetPageLayout_Callback cb) { qpdfwriter_setpagelayout_callback = cb; }
    void setQPdfWriter_SetPageSize_Callback(QPdfWriter_SetPageSize_Callback cb) { qpdfwriter_setpagesize_callback = cb; }
    void setQPdfWriter_SetPageOrientation_Callback(QPdfWriter_SetPageOrientation_Callback cb) { qpdfwriter_setpageorientation_callback = cb; }
    void setQPdfWriter_SetPageMargins_Callback(QPdfWriter_SetPageMargins_Callback cb) { qpdfwriter_setpagemargins_callback = cb; }
    void setQPdfWriter_SetPageRanges_Callback(QPdfWriter_SetPageRanges_Callback cb) { qpdfwriter_setpageranges_callback = cb; }
    void setQPdfWriter_DevType_Callback(QPdfWriter_DevType_Callback cb) { qpdfwriter_devtype_callback = cb; }
    void setQPdfWriter_InitPainter_Callback(QPdfWriter_InitPainter_Callback cb) { qpdfwriter_initpainter_callback = cb; }
    void setQPdfWriter_Redirected_Callback(QPdfWriter_Redirected_Callback cb) { qpdfwriter_redirected_callback = cb; }
    void setQPdfWriter_SharedPainter_Callback(QPdfWriter_SharedPainter_Callback cb) { qpdfwriter_sharedpainter_callback = cb; }
    void setQPdfWriter_Sender_Callback(QPdfWriter_Sender_Callback cb) { qpdfwriter_sender_callback = cb; }
    void setQPdfWriter_SenderSignalIndex_Callback(QPdfWriter_SenderSignalIndex_Callback cb) { qpdfwriter_sendersignalindex_callback = cb; }
    void setQPdfWriter_Receivers_Callback(QPdfWriter_Receivers_Callback cb) { qpdfwriter_receivers_callback = cb; }
    void setQPdfWriter_IsSignalConnected_Callback(QPdfWriter_IsSignalConnected_Callback cb) { qpdfwriter_issignalconnected_callback = cb; }

    // Base flag setters
    void setQPdfWriter_Metacall_IsBase(bool value) const { qpdfwriter_metacall_isbase = value; }
    void setQPdfWriter_NewPage_IsBase(bool value) const { qpdfwriter_newpage_isbase = value; }
    void setQPdfWriter_PaintEngine_IsBase(bool value) const { qpdfwriter_paintengine_isbase = value; }
    void setQPdfWriter_Metric_IsBase(bool value) const { qpdfwriter_metric_isbase = value; }
    void setQPdfWriter_Event_IsBase(bool value) const { qpdfwriter_event_isbase = value; }
    void setQPdfWriter_EventFilter_IsBase(bool value) const { qpdfwriter_eventfilter_isbase = value; }
    void setQPdfWriter_TimerEvent_IsBase(bool value) const { qpdfwriter_timerevent_isbase = value; }
    void setQPdfWriter_ChildEvent_IsBase(bool value) const { qpdfwriter_childevent_isbase = value; }
    void setQPdfWriter_CustomEvent_IsBase(bool value) const { qpdfwriter_customevent_isbase = value; }
    void setQPdfWriter_ConnectNotify_IsBase(bool value) const { qpdfwriter_connectnotify_isbase = value; }
    void setQPdfWriter_DisconnectNotify_IsBase(bool value) const { qpdfwriter_disconnectnotify_isbase = value; }
    void setQPdfWriter_SetPageLayout_IsBase(bool value) const { qpdfwriter_setpagelayout_isbase = value; }
    void setQPdfWriter_SetPageSize_IsBase(bool value) const { qpdfwriter_setpagesize_isbase = value; }
    void setQPdfWriter_SetPageOrientation_IsBase(bool value) const { qpdfwriter_setpageorientation_isbase = value; }
    void setQPdfWriter_SetPageMargins_IsBase(bool value) const { qpdfwriter_setpagemargins_isbase = value; }
    void setQPdfWriter_SetPageRanges_IsBase(bool value) const { qpdfwriter_setpageranges_isbase = value; }
    void setQPdfWriter_DevType_IsBase(bool value) const { qpdfwriter_devtype_isbase = value; }
    void setQPdfWriter_InitPainter_IsBase(bool value) const { qpdfwriter_initpainter_isbase = value; }
    void setQPdfWriter_Redirected_IsBase(bool value) const { qpdfwriter_redirected_isbase = value; }
    void setQPdfWriter_SharedPainter_IsBase(bool value) const { qpdfwriter_sharedpainter_isbase = value; }
    void setQPdfWriter_Sender_IsBase(bool value) const { qpdfwriter_sender_isbase = value; }
    void setQPdfWriter_SenderSignalIndex_IsBase(bool value) const { qpdfwriter_sendersignalindex_isbase = value; }
    void setQPdfWriter_Receivers_IsBase(bool value) const { qpdfwriter_receivers_isbase = value; }
    void setQPdfWriter_IsSignalConnected_IsBase(bool value) const { qpdfwriter_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qpdfwriter_metacall_isbase) {
            qpdfwriter_metacall_isbase = false;
            return QPdfWriter::qt_metacall(param1, param2, param3);
        } else if (qpdfwriter_metacall_callback != nullptr) {
            return qpdfwriter_metacall_callback(this, param1, param2, param3);
        } else {
            return QPdfWriter::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool newPage() override {
        if (qpdfwriter_newpage_isbase) {
            qpdfwriter_newpage_isbase = false;
            return QPdfWriter::newPage();
        } else if (qpdfwriter_newpage_callback != nullptr) {
            return qpdfwriter_newpage_callback();
        } else {
            return QPdfWriter::newPage();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qpdfwriter_paintengine_isbase) {
            qpdfwriter_paintengine_isbase = false;
            return QPdfWriter::paintEngine();
        } else if (qpdfwriter_paintengine_callback != nullptr) {
            return qpdfwriter_paintengine_callback();
        } else {
            return QPdfWriter::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric id) const override {
        if (qpdfwriter_metric_isbase) {
            qpdfwriter_metric_isbase = false;
            return QPdfWriter::metric(id);
        } else if (qpdfwriter_metric_callback != nullptr) {
            return qpdfwriter_metric_callback(this, id);
        } else {
            return QPdfWriter::metric(id);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qpdfwriter_event_isbase) {
            qpdfwriter_event_isbase = false;
            return QPdfWriter::event(event);
        } else if (qpdfwriter_event_callback != nullptr) {
            return qpdfwriter_event_callback(this, event);
        } else {
            return QPdfWriter::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qpdfwriter_eventfilter_isbase) {
            qpdfwriter_eventfilter_isbase = false;
            return QPdfWriter::eventFilter(watched, event);
        } else if (qpdfwriter_eventfilter_callback != nullptr) {
            return qpdfwriter_eventfilter_callback(this, watched, event);
        } else {
            return QPdfWriter::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qpdfwriter_timerevent_isbase) {
            qpdfwriter_timerevent_isbase = false;
            QPdfWriter::timerEvent(event);
        } else if (qpdfwriter_timerevent_callback != nullptr) {
            qpdfwriter_timerevent_callback(this, event);
        } else {
            QPdfWriter::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qpdfwriter_childevent_isbase) {
            qpdfwriter_childevent_isbase = false;
            QPdfWriter::childEvent(event);
        } else if (qpdfwriter_childevent_callback != nullptr) {
            qpdfwriter_childevent_callback(this, event);
        } else {
            QPdfWriter::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qpdfwriter_customevent_isbase) {
            qpdfwriter_customevent_isbase = false;
            QPdfWriter::customEvent(event);
        } else if (qpdfwriter_customevent_callback != nullptr) {
            qpdfwriter_customevent_callback(this, event);
        } else {
            QPdfWriter::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qpdfwriter_connectnotify_isbase) {
            qpdfwriter_connectnotify_isbase = false;
            QPdfWriter::connectNotify(signal);
        } else if (qpdfwriter_connectnotify_callback != nullptr) {
            qpdfwriter_connectnotify_callback(this, signal);
        } else {
            QPdfWriter::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qpdfwriter_disconnectnotify_isbase) {
            qpdfwriter_disconnectnotify_isbase = false;
            QPdfWriter::disconnectNotify(signal);
        } else if (qpdfwriter_disconnectnotify_callback != nullptr) {
            qpdfwriter_disconnectnotify_callback(this, signal);
        } else {
            QPdfWriter::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setPageLayout(const QPageLayout& pageLayout) override {
        if (qpdfwriter_setpagelayout_isbase) {
            qpdfwriter_setpagelayout_isbase = false;
            return QPdfWriter::setPageLayout(pageLayout);
        } else if (qpdfwriter_setpagelayout_callback != nullptr) {
            return qpdfwriter_setpagelayout_callback(this, pageLayout);
        } else {
            return QPdfWriter::setPageLayout(pageLayout);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setPageSize(const QPageSize& pageSize) override {
        if (qpdfwriter_setpagesize_isbase) {
            qpdfwriter_setpagesize_isbase = false;
            return QPdfWriter::setPageSize(pageSize);
        } else if (qpdfwriter_setpagesize_callback != nullptr) {
            return qpdfwriter_setpagesize_callback(this, pageSize);
        } else {
            return QPdfWriter::setPageSize(pageSize);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setPageOrientation(QPageLayout::Orientation orientation) override {
        if (qpdfwriter_setpageorientation_isbase) {
            qpdfwriter_setpageorientation_isbase = false;
            return QPdfWriter::setPageOrientation(orientation);
        } else if (qpdfwriter_setpageorientation_callback != nullptr) {
            return qpdfwriter_setpageorientation_callback(this, orientation);
        } else {
            return QPdfWriter::setPageOrientation(orientation);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setPageMargins(const QMarginsF& margins, QPageLayout::Unit units) override {
        if (qpdfwriter_setpagemargins_isbase) {
            qpdfwriter_setpagemargins_isbase = false;
            return QPdfWriter::setPageMargins(margins, units);
        } else if (qpdfwriter_setpagemargins_callback != nullptr) {
            return qpdfwriter_setpagemargins_callback(this, margins, units);
        } else {
            return QPdfWriter::setPageMargins(margins, units);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPageRanges(const QPageRanges& ranges) override {
        if (qpdfwriter_setpageranges_isbase) {
            qpdfwriter_setpageranges_isbase = false;
            QPdfWriter::setPageRanges(ranges);
        } else if (qpdfwriter_setpageranges_callback != nullptr) {
            qpdfwriter_setpageranges_callback(this, ranges);
        } else {
            QPdfWriter::setPageRanges(ranges);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qpdfwriter_devtype_isbase) {
            qpdfwriter_devtype_isbase = false;
            return QPdfWriter::devType();
        } else if (qpdfwriter_devtype_callback != nullptr) {
            return qpdfwriter_devtype_callback();
        } else {
            return QPdfWriter::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qpdfwriter_initpainter_isbase) {
            qpdfwriter_initpainter_isbase = false;
            QPdfWriter::initPainter(painter);
        } else if (qpdfwriter_initpainter_callback != nullptr) {
            qpdfwriter_initpainter_callback(this, painter);
        } else {
            QPdfWriter::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qpdfwriter_redirected_isbase) {
            qpdfwriter_redirected_isbase = false;
            return QPdfWriter::redirected(offset);
        } else if (qpdfwriter_redirected_callback != nullptr) {
            return qpdfwriter_redirected_callback(this, offset);
        } else {
            return QPdfWriter::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qpdfwriter_sharedpainter_isbase) {
            qpdfwriter_sharedpainter_isbase = false;
            return QPdfWriter::sharedPainter();
        } else if (qpdfwriter_sharedpainter_callback != nullptr) {
            return qpdfwriter_sharedpainter_callback();
        } else {
            return QPdfWriter::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qpdfwriter_sender_isbase) {
            qpdfwriter_sender_isbase = false;
            return QPdfWriter::sender();
        } else if (qpdfwriter_sender_callback != nullptr) {
            return qpdfwriter_sender_callback();
        } else {
            return QPdfWriter::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qpdfwriter_sendersignalindex_isbase) {
            qpdfwriter_sendersignalindex_isbase = false;
            return QPdfWriter::senderSignalIndex();
        } else if (qpdfwriter_sendersignalindex_callback != nullptr) {
            return qpdfwriter_sendersignalindex_callback();
        } else {
            return QPdfWriter::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qpdfwriter_receivers_isbase) {
            qpdfwriter_receivers_isbase = false;
            return QPdfWriter::receivers(signal);
        } else if (qpdfwriter_receivers_callback != nullptr) {
            return qpdfwriter_receivers_callback(this, signal);
        } else {
            return QPdfWriter::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qpdfwriter_issignalconnected_isbase) {
            qpdfwriter_issignalconnected_isbase = false;
            return QPdfWriter::isSignalConnected(signal);
        } else if (qpdfwriter_issignalconnected_callback != nullptr) {
            return qpdfwriter_issignalconnected_callback(this, signal);
        } else {
            return QPdfWriter::isSignalConnected(signal);
        }
    }
};

#endif
