#pragma once
#ifndef SRCC_LIBVIRTUALQGRAPHICSEFFECT_H
#define SRCC_LIBVIRTUALQGRAPHICSEFFECT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QGraphicsEffect so that we can call protected methods
class VirtualQGraphicsEffect : public QGraphicsEffect {

  public:
    // Virtual class public types (including callbacks)
    using QGraphicsEffect_Metacall_Callback = int (*)(QGraphicsEffect*, QMetaObject::Call, int, void**);
    using QGraphicsEffect_BoundingRectFor_Callback = QRectF (*)(const QGraphicsEffect*, const QRectF&);
    using QGraphicsEffect_Draw_Callback = void (*)(QGraphicsEffect*, QPainter*);
    using QGraphicsEffect_SourceChanged_Callback = void (*)(QGraphicsEffect*, QGraphicsEffect::ChangeFlags);
    using QGraphicsEffect_Event_Callback = bool (*)(QGraphicsEffect*, QEvent*);
    using QGraphicsEffect_EventFilter_Callback = bool (*)(QGraphicsEffect*, QObject*, QEvent*);
    using QGraphicsEffect_TimerEvent_Callback = void (*)(QGraphicsEffect*, QTimerEvent*);
    using QGraphicsEffect_ChildEvent_Callback = void (*)(QGraphicsEffect*, QChildEvent*);
    using QGraphicsEffect_CustomEvent_Callback = void (*)(QGraphicsEffect*, QEvent*);
    using QGraphicsEffect_ConnectNotify_Callback = void (*)(QGraphicsEffect*, const QMetaMethod&);
    using QGraphicsEffect_DisconnectNotify_Callback = void (*)(QGraphicsEffect*, const QMetaMethod&);
    using QGraphicsEffect_UpdateBoundingRect_Callback = void (*)();
    using QGraphicsEffect_SourceIsPixmap_Callback = bool (*)();
    using QGraphicsEffect_SourceBoundingRect_Callback = QRectF (*)();
    using QGraphicsEffect_DrawSource_Callback = void (*)(QGraphicsEffect*, QPainter*);
    using QGraphicsEffect_SourcePixmap_Callback = QPixmap (*)();
    using QGraphicsEffect_SourceBoundingRect1_Callback = QRectF (*)(const QGraphicsEffect*, Qt::CoordinateSystem);
    using QGraphicsEffect_SourcePixmap1_Callback = QPixmap (*)(const QGraphicsEffect*, Qt::CoordinateSystem);
    using QGraphicsEffect_SourcePixmap2_Callback = QPixmap (*)(const QGraphicsEffect*, Qt::CoordinateSystem, QPoint*);
    using QGraphicsEffect_SourcePixmap3_Callback = QPixmap (*)(const QGraphicsEffect*, Qt::CoordinateSystem, QPoint*, QGraphicsEffect::PixmapPadMode);
    using QGraphicsEffect_Sender_Callback = QObject* (*)();
    using QGraphicsEffect_SenderSignalIndex_Callback = int (*)();
    using QGraphicsEffect_Receivers_Callback = int (*)(const QGraphicsEffect*, const char*);
    using QGraphicsEffect_IsSignalConnected_Callback = bool (*)(const QGraphicsEffect*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QGraphicsEffect_Metacall_Callback qgraphicseffect_metacall_callback = nullptr;
    QGraphicsEffect_BoundingRectFor_Callback qgraphicseffect_boundingrectfor_callback = nullptr;
    QGraphicsEffect_Draw_Callback qgraphicseffect_draw_callback = nullptr;
    QGraphicsEffect_SourceChanged_Callback qgraphicseffect_sourcechanged_callback = nullptr;
    QGraphicsEffect_Event_Callback qgraphicseffect_event_callback = nullptr;
    QGraphicsEffect_EventFilter_Callback qgraphicseffect_eventfilter_callback = nullptr;
    QGraphicsEffect_TimerEvent_Callback qgraphicseffect_timerevent_callback = nullptr;
    QGraphicsEffect_ChildEvent_Callback qgraphicseffect_childevent_callback = nullptr;
    QGraphicsEffect_CustomEvent_Callback qgraphicseffect_customevent_callback = nullptr;
    QGraphicsEffect_ConnectNotify_Callback qgraphicseffect_connectnotify_callback = nullptr;
    QGraphicsEffect_DisconnectNotify_Callback qgraphicseffect_disconnectnotify_callback = nullptr;
    QGraphicsEffect_UpdateBoundingRect_Callback qgraphicseffect_updateboundingrect_callback = nullptr;
    QGraphicsEffect_SourceIsPixmap_Callback qgraphicseffect_sourceispixmap_callback = nullptr;
    QGraphicsEffect_SourceBoundingRect_Callback qgraphicseffect_sourceboundingrect_callback = nullptr;
    QGraphicsEffect_DrawSource_Callback qgraphicseffect_drawsource_callback = nullptr;
    QGraphicsEffect_SourcePixmap_Callback qgraphicseffect_sourcepixmap_callback = nullptr;
    QGraphicsEffect_SourceBoundingRect1_Callback qgraphicseffect_sourceboundingrect1_callback = nullptr;
    QGraphicsEffect_SourcePixmap1_Callback qgraphicseffect_sourcepixmap1_callback = nullptr;
    QGraphicsEffect_SourcePixmap2_Callback qgraphicseffect_sourcepixmap2_callback = nullptr;
    QGraphicsEffect_SourcePixmap3_Callback qgraphicseffect_sourcepixmap3_callback = nullptr;
    QGraphicsEffect_Sender_Callback qgraphicseffect_sender_callback = nullptr;
    QGraphicsEffect_SenderSignalIndex_Callback qgraphicseffect_sendersignalindex_callback = nullptr;
    QGraphicsEffect_Receivers_Callback qgraphicseffect_receivers_callback = nullptr;
    QGraphicsEffect_IsSignalConnected_Callback qgraphicseffect_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicseffect_metacall_isbase = false;
    mutable bool qgraphicseffect_boundingrectfor_isbase = false;
    mutable bool qgraphicseffect_draw_isbase = false;
    mutable bool qgraphicseffect_sourcechanged_isbase = false;
    mutable bool qgraphicseffect_event_isbase = false;
    mutable bool qgraphicseffect_eventfilter_isbase = false;
    mutable bool qgraphicseffect_timerevent_isbase = false;
    mutable bool qgraphicseffect_childevent_isbase = false;
    mutable bool qgraphicseffect_customevent_isbase = false;
    mutable bool qgraphicseffect_connectnotify_isbase = false;
    mutable bool qgraphicseffect_disconnectnotify_isbase = false;
    mutable bool qgraphicseffect_updateboundingrect_isbase = false;
    mutable bool qgraphicseffect_sourceispixmap_isbase = false;
    mutable bool qgraphicseffect_sourceboundingrect_isbase = false;
    mutable bool qgraphicseffect_drawsource_isbase = false;
    mutable bool qgraphicseffect_sourcepixmap_isbase = false;
    mutable bool qgraphicseffect_sourceboundingrect1_isbase = false;
    mutable bool qgraphicseffect_sourcepixmap1_isbase = false;
    mutable bool qgraphicseffect_sourcepixmap2_isbase = false;
    mutable bool qgraphicseffect_sourcepixmap3_isbase = false;
    mutable bool qgraphicseffect_sender_isbase = false;
    mutable bool qgraphicseffect_sendersignalindex_isbase = false;
    mutable bool qgraphicseffect_receivers_isbase = false;
    mutable bool qgraphicseffect_issignalconnected_isbase = false;

  public:
    VirtualQGraphicsEffect() : QGraphicsEffect(){};
    VirtualQGraphicsEffect(QObject* parent) : QGraphicsEffect(parent){};

    ~VirtualQGraphicsEffect() {
        qgraphicseffect_metacall_callback = nullptr;
        qgraphicseffect_boundingrectfor_callback = nullptr;
        qgraphicseffect_draw_callback = nullptr;
        qgraphicseffect_sourcechanged_callback = nullptr;
        qgraphicseffect_event_callback = nullptr;
        qgraphicseffect_eventfilter_callback = nullptr;
        qgraphicseffect_timerevent_callback = nullptr;
        qgraphicseffect_childevent_callback = nullptr;
        qgraphicseffect_customevent_callback = nullptr;
        qgraphicseffect_connectnotify_callback = nullptr;
        qgraphicseffect_disconnectnotify_callback = nullptr;
        qgraphicseffect_updateboundingrect_callback = nullptr;
        qgraphicseffect_sourceispixmap_callback = nullptr;
        qgraphicseffect_sourceboundingrect_callback = nullptr;
        qgraphicseffect_drawsource_callback = nullptr;
        qgraphicseffect_sourcepixmap_callback = nullptr;
        qgraphicseffect_sourceboundingrect1_callback = nullptr;
        qgraphicseffect_sourcepixmap1_callback = nullptr;
        qgraphicseffect_sourcepixmap2_callback = nullptr;
        qgraphicseffect_sourcepixmap3_callback = nullptr;
        qgraphicseffect_sender_callback = nullptr;
        qgraphicseffect_sendersignalindex_callback = nullptr;
        qgraphicseffect_receivers_callback = nullptr;
        qgraphicseffect_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQGraphicsEffect_Metacall_Callback(QGraphicsEffect_Metacall_Callback cb) { qgraphicseffect_metacall_callback = cb; }
    void setQGraphicsEffect_BoundingRectFor_Callback(QGraphicsEffect_BoundingRectFor_Callback cb) { qgraphicseffect_boundingrectfor_callback = cb; }
    void setQGraphicsEffect_Draw_Callback(QGraphicsEffect_Draw_Callback cb) { qgraphicseffect_draw_callback = cb; }
    void setQGraphicsEffect_SourceChanged_Callback(QGraphicsEffect_SourceChanged_Callback cb) { qgraphicseffect_sourcechanged_callback = cb; }
    void setQGraphicsEffect_Event_Callback(QGraphicsEffect_Event_Callback cb) { qgraphicseffect_event_callback = cb; }
    void setQGraphicsEffect_EventFilter_Callback(QGraphicsEffect_EventFilter_Callback cb) { qgraphicseffect_eventfilter_callback = cb; }
    void setQGraphicsEffect_TimerEvent_Callback(QGraphicsEffect_TimerEvent_Callback cb) { qgraphicseffect_timerevent_callback = cb; }
    void setQGraphicsEffect_ChildEvent_Callback(QGraphicsEffect_ChildEvent_Callback cb) { qgraphicseffect_childevent_callback = cb; }
    void setQGraphicsEffect_CustomEvent_Callback(QGraphicsEffect_CustomEvent_Callback cb) { qgraphicseffect_customevent_callback = cb; }
    void setQGraphicsEffect_ConnectNotify_Callback(QGraphicsEffect_ConnectNotify_Callback cb) { qgraphicseffect_connectnotify_callback = cb; }
    void setQGraphicsEffect_DisconnectNotify_Callback(QGraphicsEffect_DisconnectNotify_Callback cb) { qgraphicseffect_disconnectnotify_callback = cb; }
    void setQGraphicsEffect_UpdateBoundingRect_Callback(QGraphicsEffect_UpdateBoundingRect_Callback cb) { qgraphicseffect_updateboundingrect_callback = cb; }
    void setQGraphicsEffect_SourceIsPixmap_Callback(QGraphicsEffect_SourceIsPixmap_Callback cb) { qgraphicseffect_sourceispixmap_callback = cb; }
    void setQGraphicsEffect_SourceBoundingRect_Callback(QGraphicsEffect_SourceBoundingRect_Callback cb) { qgraphicseffect_sourceboundingrect_callback = cb; }
    void setQGraphicsEffect_DrawSource_Callback(QGraphicsEffect_DrawSource_Callback cb) { qgraphicseffect_drawsource_callback = cb; }
    void setQGraphicsEffect_SourcePixmap_Callback(QGraphicsEffect_SourcePixmap_Callback cb) { qgraphicseffect_sourcepixmap_callback = cb; }
    void setQGraphicsEffect_SourceBoundingRect1_Callback(QGraphicsEffect_SourceBoundingRect1_Callback cb) { qgraphicseffect_sourceboundingrect1_callback = cb; }
    void setQGraphicsEffect_SourcePixmap1_Callback(QGraphicsEffect_SourcePixmap1_Callback cb) { qgraphicseffect_sourcepixmap1_callback = cb; }
    void setQGraphicsEffect_SourcePixmap2_Callback(QGraphicsEffect_SourcePixmap2_Callback cb) { qgraphicseffect_sourcepixmap2_callback = cb; }
    void setQGraphicsEffect_SourcePixmap3_Callback(QGraphicsEffect_SourcePixmap3_Callback cb) { qgraphicseffect_sourcepixmap3_callback = cb; }
    void setQGraphicsEffect_Sender_Callback(QGraphicsEffect_Sender_Callback cb) { qgraphicseffect_sender_callback = cb; }
    void setQGraphicsEffect_SenderSignalIndex_Callback(QGraphicsEffect_SenderSignalIndex_Callback cb) { qgraphicseffect_sendersignalindex_callback = cb; }
    void setQGraphicsEffect_Receivers_Callback(QGraphicsEffect_Receivers_Callback cb) { qgraphicseffect_receivers_callback = cb; }
    void setQGraphicsEffect_IsSignalConnected_Callback(QGraphicsEffect_IsSignalConnected_Callback cb) { qgraphicseffect_issignalconnected_callback = cb; }

    // Base flag setters
    void setQGraphicsEffect_Metacall_IsBase(bool value) const { qgraphicseffect_metacall_isbase = value; }
    void setQGraphicsEffect_BoundingRectFor_IsBase(bool value) const { qgraphicseffect_boundingrectfor_isbase = value; }
    void setQGraphicsEffect_Draw_IsBase(bool value) const { qgraphicseffect_draw_isbase = value; }
    void setQGraphicsEffect_SourceChanged_IsBase(bool value) const { qgraphicseffect_sourcechanged_isbase = value; }
    void setQGraphicsEffect_Event_IsBase(bool value) const { qgraphicseffect_event_isbase = value; }
    void setQGraphicsEffect_EventFilter_IsBase(bool value) const { qgraphicseffect_eventfilter_isbase = value; }
    void setQGraphicsEffect_TimerEvent_IsBase(bool value) const { qgraphicseffect_timerevent_isbase = value; }
    void setQGraphicsEffect_ChildEvent_IsBase(bool value) const { qgraphicseffect_childevent_isbase = value; }
    void setQGraphicsEffect_CustomEvent_IsBase(bool value) const { qgraphicseffect_customevent_isbase = value; }
    void setQGraphicsEffect_ConnectNotify_IsBase(bool value) const { qgraphicseffect_connectnotify_isbase = value; }
    void setQGraphicsEffect_DisconnectNotify_IsBase(bool value) const { qgraphicseffect_disconnectnotify_isbase = value; }
    void setQGraphicsEffect_UpdateBoundingRect_IsBase(bool value) const { qgraphicseffect_updateboundingrect_isbase = value; }
    void setQGraphicsEffect_SourceIsPixmap_IsBase(bool value) const { qgraphicseffect_sourceispixmap_isbase = value; }
    void setQGraphicsEffect_SourceBoundingRect_IsBase(bool value) const { qgraphicseffect_sourceboundingrect_isbase = value; }
    void setQGraphicsEffect_DrawSource_IsBase(bool value) const { qgraphicseffect_drawsource_isbase = value; }
    void setQGraphicsEffect_SourcePixmap_IsBase(bool value) const { qgraphicseffect_sourcepixmap_isbase = value; }
    void setQGraphicsEffect_SourceBoundingRect1_IsBase(bool value) const { qgraphicseffect_sourceboundingrect1_isbase = value; }
    void setQGraphicsEffect_SourcePixmap1_IsBase(bool value) const { qgraphicseffect_sourcepixmap1_isbase = value; }
    void setQGraphicsEffect_SourcePixmap2_IsBase(bool value) const { qgraphicseffect_sourcepixmap2_isbase = value; }
    void setQGraphicsEffect_SourcePixmap3_IsBase(bool value) const { qgraphicseffect_sourcepixmap3_isbase = value; }
    void setQGraphicsEffect_Sender_IsBase(bool value) const { qgraphicseffect_sender_isbase = value; }
    void setQGraphicsEffect_SenderSignalIndex_IsBase(bool value) const { qgraphicseffect_sendersignalindex_isbase = value; }
    void setQGraphicsEffect_Receivers_IsBase(bool value) const { qgraphicseffect_receivers_isbase = value; }
    void setQGraphicsEffect_IsSignalConnected_IsBase(bool value) const { qgraphicseffect_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgraphicseffect_metacall_isbase) {
            qgraphicseffect_metacall_isbase = false;
            return QGraphicsEffect::qt_metacall(param1, param2, param3);
        } else if (qgraphicseffect_metacall_callback != nullptr) {
            return qgraphicseffect_metacall_callback(this, param1, param2, param3);
        } else {
            return QGraphicsEffect::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRectFor(const QRectF& sourceRect) const override {
        if (qgraphicseffect_boundingrectfor_isbase) {
            qgraphicseffect_boundingrectfor_isbase = false;
            return QGraphicsEffect::boundingRectFor(sourceRect);
        } else if (qgraphicseffect_boundingrectfor_callback != nullptr) {
            return qgraphicseffect_boundingrectfor_callback(this, sourceRect);
        } else {
            return QGraphicsEffect::boundingRectFor(sourceRect);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void draw(QPainter* painter) override {
        qgraphicseffect_draw_callback(this, painter);
    }

    // Virtual method for C ABI access and custom callback
    virtual void sourceChanged(QGraphicsEffect::ChangeFlags flags) override {
        if (qgraphicseffect_sourcechanged_isbase) {
            qgraphicseffect_sourcechanged_isbase = false;
            QGraphicsEffect::sourceChanged(flags);
        } else if (qgraphicseffect_sourcechanged_callback != nullptr) {
            qgraphicseffect_sourcechanged_callback(this, flags);
        } else {
            QGraphicsEffect::sourceChanged(flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgraphicseffect_event_isbase) {
            qgraphicseffect_event_isbase = false;
            return QGraphicsEffect::event(event);
        } else if (qgraphicseffect_event_callback != nullptr) {
            return qgraphicseffect_event_callback(this, event);
        } else {
            return QGraphicsEffect::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgraphicseffect_eventfilter_isbase) {
            qgraphicseffect_eventfilter_isbase = false;
            return QGraphicsEffect::eventFilter(watched, event);
        } else if (qgraphicseffect_eventfilter_callback != nullptr) {
            return qgraphicseffect_eventfilter_callback(this, watched, event);
        } else {
            return QGraphicsEffect::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgraphicseffect_timerevent_isbase) {
            qgraphicseffect_timerevent_isbase = false;
            QGraphicsEffect::timerEvent(event);
        } else if (qgraphicseffect_timerevent_callback != nullptr) {
            qgraphicseffect_timerevent_callback(this, event);
        } else {
            QGraphicsEffect::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgraphicseffect_childevent_isbase) {
            qgraphicseffect_childevent_isbase = false;
            QGraphicsEffect::childEvent(event);
        } else if (qgraphicseffect_childevent_callback != nullptr) {
            qgraphicseffect_childevent_callback(this, event);
        } else {
            QGraphicsEffect::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgraphicseffect_customevent_isbase) {
            qgraphicseffect_customevent_isbase = false;
            QGraphicsEffect::customEvent(event);
        } else if (qgraphicseffect_customevent_callback != nullptr) {
            qgraphicseffect_customevent_callback(this, event);
        } else {
            QGraphicsEffect::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgraphicseffect_connectnotify_isbase) {
            qgraphicseffect_connectnotify_isbase = false;
            QGraphicsEffect::connectNotify(signal);
        } else if (qgraphicseffect_connectnotify_callback != nullptr) {
            qgraphicseffect_connectnotify_callback(this, signal);
        } else {
            QGraphicsEffect::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgraphicseffect_disconnectnotify_isbase) {
            qgraphicseffect_disconnectnotify_isbase = false;
            QGraphicsEffect::disconnectNotify(signal);
        } else if (qgraphicseffect_disconnectnotify_callback != nullptr) {
            qgraphicseffect_disconnectnotify_callback(this, signal);
        } else {
            QGraphicsEffect::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateBoundingRect() {
        if (qgraphicseffect_updateboundingrect_isbase) {
            qgraphicseffect_updateboundingrect_isbase = false;
            QGraphicsEffect::updateBoundingRect();
        } else if (qgraphicseffect_updateboundingrect_callback != nullptr) {
            qgraphicseffect_updateboundingrect_callback();
        } else {
            QGraphicsEffect::updateBoundingRect();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool sourceIsPixmap() const {
        if (qgraphicseffect_sourceispixmap_isbase) {
            qgraphicseffect_sourceispixmap_isbase = false;
            return QGraphicsEffect::sourceIsPixmap();
        } else if (qgraphicseffect_sourceispixmap_callback != nullptr) {
            return qgraphicseffect_sourceispixmap_callback();
        } else {
            return QGraphicsEffect::sourceIsPixmap();
        }
    }

    // Virtual method for C ABI access and custom callback
    QRectF sourceBoundingRect() const {
        if (qgraphicseffect_sourceboundingrect_isbase) {
            qgraphicseffect_sourceboundingrect_isbase = false;
            return QGraphicsEffect::sourceBoundingRect();
        } else if (qgraphicseffect_sourceboundingrect_callback != nullptr) {
            return qgraphicseffect_sourceboundingrect_callback();
        } else {
            return QGraphicsEffect::sourceBoundingRect();
        }
    }

    // Virtual method for C ABI access and custom callback
    void drawSource(QPainter* painter) {
        if (qgraphicseffect_drawsource_isbase) {
            qgraphicseffect_drawsource_isbase = false;
            QGraphicsEffect::drawSource(painter);
        } else if (qgraphicseffect_drawsource_callback != nullptr) {
            qgraphicseffect_drawsource_callback(this, painter);
        } else {
            QGraphicsEffect::drawSource(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    QPixmap sourcePixmap() const {
        if (qgraphicseffect_sourcepixmap_isbase) {
            qgraphicseffect_sourcepixmap_isbase = false;
            return QGraphicsEffect::sourcePixmap();
        } else if (qgraphicseffect_sourcepixmap_callback != nullptr) {
            return qgraphicseffect_sourcepixmap_callback();
        } else {
            return QGraphicsEffect::sourcePixmap();
        }
    }

    // Virtual method for C ABI access and custom callback
    QRectF sourceBoundingRect(Qt::CoordinateSystem system) const {
        if (qgraphicseffect_sourceboundingrect1_isbase) {
            qgraphicseffect_sourceboundingrect1_isbase = false;
            return QGraphicsEffect::sourceBoundingRect(system);
        } else if (qgraphicseffect_sourceboundingrect1_callback != nullptr) {
            return qgraphicseffect_sourceboundingrect1_callback(this, system);
        } else {
            return QGraphicsEffect::sourceBoundingRect(system);
        }
    }

    // Virtual method for C ABI access and custom callback
    QPixmap sourcePixmap(Qt::CoordinateSystem system) const {
        if (qgraphicseffect_sourcepixmap1_isbase) {
            qgraphicseffect_sourcepixmap1_isbase = false;
            return QGraphicsEffect::sourcePixmap(system);
        } else if (qgraphicseffect_sourcepixmap1_callback != nullptr) {
            return qgraphicseffect_sourcepixmap1_callback(this, system);
        } else {
            return QGraphicsEffect::sourcePixmap(system);
        }
    }

    // Virtual method for C ABI access and custom callback
    QPixmap sourcePixmap(Qt::CoordinateSystem system, QPoint* offset) const {
        if (qgraphicseffect_sourcepixmap2_isbase) {
            qgraphicseffect_sourcepixmap2_isbase = false;
            return QGraphicsEffect::sourcePixmap(system, offset);
        } else if (qgraphicseffect_sourcepixmap2_callback != nullptr) {
            return qgraphicseffect_sourcepixmap2_callback(this, system, offset);
        } else {
            return QGraphicsEffect::sourcePixmap(system, offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    QPixmap sourcePixmap(Qt::CoordinateSystem system, QPoint* offset, QGraphicsEffect::PixmapPadMode mode) const {
        if (qgraphicseffect_sourcepixmap3_isbase) {
            qgraphicseffect_sourcepixmap3_isbase = false;
            return QGraphicsEffect::sourcePixmap(system, offset, mode);
        } else if (qgraphicseffect_sourcepixmap3_callback != nullptr) {
            return qgraphicseffect_sourcepixmap3_callback(this, system, offset, mode);
        } else {
            return QGraphicsEffect::sourcePixmap(system, offset, mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qgraphicseffect_sender_isbase) {
            qgraphicseffect_sender_isbase = false;
            return QGraphicsEffect::sender();
        } else if (qgraphicseffect_sender_callback != nullptr) {
            return qgraphicseffect_sender_callback();
        } else {
            return QGraphicsEffect::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qgraphicseffect_sendersignalindex_isbase) {
            qgraphicseffect_sendersignalindex_isbase = false;
            return QGraphicsEffect::senderSignalIndex();
        } else if (qgraphicseffect_sendersignalindex_callback != nullptr) {
            return qgraphicseffect_sendersignalindex_callback();
        } else {
            return QGraphicsEffect::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qgraphicseffect_receivers_isbase) {
            qgraphicseffect_receivers_isbase = false;
            return QGraphicsEffect::receivers(signal);
        } else if (qgraphicseffect_receivers_callback != nullptr) {
            return qgraphicseffect_receivers_callback(this, signal);
        } else {
            return QGraphicsEffect::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qgraphicseffect_issignalconnected_isbase) {
            qgraphicseffect_issignalconnected_isbase = false;
            return QGraphicsEffect::isSignalConnected(signal);
        } else if (qgraphicseffect_issignalconnected_callback != nullptr) {
            return qgraphicseffect_issignalconnected_callback(this, signal);
        } else {
            return QGraphicsEffect::isSignalConnected(signal);
        }
    }
};

// This class is a subclass of QGraphicsColorizeEffect so that we can call protected methods
class VirtualQGraphicsColorizeEffect : public QGraphicsColorizeEffect {

  public:
    // Virtual class public types (including callbacks)
    using QGraphicsColorizeEffect_Metacall_Callback = int (*)(QGraphicsColorizeEffect*, QMetaObject::Call, int, void**);
    using QGraphicsColorizeEffect_Draw_Callback = void (*)(QGraphicsColorizeEffect*, QPainter*);
    using QGraphicsColorizeEffect_BoundingRectFor_Callback = QRectF (*)(const QGraphicsColorizeEffect*, const QRectF&);
    using QGraphicsColorizeEffect_SourceChanged_Callback = void (*)(QGraphicsColorizeEffect*, QGraphicsEffect::ChangeFlags);
    using QGraphicsColorizeEffect_Event_Callback = bool (*)(QGraphicsColorizeEffect*, QEvent*);
    using QGraphicsColorizeEffect_EventFilter_Callback = bool (*)(QGraphicsColorizeEffect*, QObject*, QEvent*);
    using QGraphicsColorizeEffect_TimerEvent_Callback = void (*)(QGraphicsColorizeEffect*, QTimerEvent*);
    using QGraphicsColorizeEffect_ChildEvent_Callback = void (*)(QGraphicsColorizeEffect*, QChildEvent*);
    using QGraphicsColorizeEffect_CustomEvent_Callback = void (*)(QGraphicsColorizeEffect*, QEvent*);
    using QGraphicsColorizeEffect_ConnectNotify_Callback = void (*)(QGraphicsColorizeEffect*, const QMetaMethod&);
    using QGraphicsColorizeEffect_DisconnectNotify_Callback = void (*)(QGraphicsColorizeEffect*, const QMetaMethod&);
    using QGraphicsColorizeEffect_UpdateBoundingRect_Callback = void (*)();
    using QGraphicsColorizeEffect_SourceIsPixmap_Callback = bool (*)();
    using QGraphicsColorizeEffect_SourceBoundingRect_Callback = QRectF (*)();
    using QGraphicsColorizeEffect_DrawSource_Callback = void (*)(QGraphicsColorizeEffect*, QPainter*);
    using QGraphicsColorizeEffect_SourcePixmap_Callback = QPixmap (*)();
    using QGraphicsColorizeEffect_Sender_Callback = QObject* (*)();
    using QGraphicsColorizeEffect_SenderSignalIndex_Callback = int (*)();
    using QGraphicsColorizeEffect_Receivers_Callback = int (*)(const QGraphicsColorizeEffect*, const char*);
    using QGraphicsColorizeEffect_IsSignalConnected_Callback = bool (*)(const QGraphicsColorizeEffect*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QGraphicsColorizeEffect_Metacall_Callback qgraphicscolorizeeffect_metacall_callback = nullptr;
    QGraphicsColorizeEffect_Draw_Callback qgraphicscolorizeeffect_draw_callback = nullptr;
    QGraphicsColorizeEffect_BoundingRectFor_Callback qgraphicscolorizeeffect_boundingrectfor_callback = nullptr;
    QGraphicsColorizeEffect_SourceChanged_Callback qgraphicscolorizeeffect_sourcechanged_callback = nullptr;
    QGraphicsColorizeEffect_Event_Callback qgraphicscolorizeeffect_event_callback = nullptr;
    QGraphicsColorizeEffect_EventFilter_Callback qgraphicscolorizeeffect_eventfilter_callback = nullptr;
    QGraphicsColorizeEffect_TimerEvent_Callback qgraphicscolorizeeffect_timerevent_callback = nullptr;
    QGraphicsColorizeEffect_ChildEvent_Callback qgraphicscolorizeeffect_childevent_callback = nullptr;
    QGraphicsColorizeEffect_CustomEvent_Callback qgraphicscolorizeeffect_customevent_callback = nullptr;
    QGraphicsColorizeEffect_ConnectNotify_Callback qgraphicscolorizeeffect_connectnotify_callback = nullptr;
    QGraphicsColorizeEffect_DisconnectNotify_Callback qgraphicscolorizeeffect_disconnectnotify_callback = nullptr;
    QGraphicsColorizeEffect_UpdateBoundingRect_Callback qgraphicscolorizeeffect_updateboundingrect_callback = nullptr;
    QGraphicsColorizeEffect_SourceIsPixmap_Callback qgraphicscolorizeeffect_sourceispixmap_callback = nullptr;
    QGraphicsColorizeEffect_SourceBoundingRect_Callback qgraphicscolorizeeffect_sourceboundingrect_callback = nullptr;
    QGraphicsColorizeEffect_DrawSource_Callback qgraphicscolorizeeffect_drawsource_callback = nullptr;
    QGraphicsColorizeEffect_SourcePixmap_Callback qgraphicscolorizeeffect_sourcepixmap_callback = nullptr;
    QGraphicsColorizeEffect_Sender_Callback qgraphicscolorizeeffect_sender_callback = nullptr;
    QGraphicsColorizeEffect_SenderSignalIndex_Callback qgraphicscolorizeeffect_sendersignalindex_callback = nullptr;
    QGraphicsColorizeEffect_Receivers_Callback qgraphicscolorizeeffect_receivers_callback = nullptr;
    QGraphicsColorizeEffect_IsSignalConnected_Callback qgraphicscolorizeeffect_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicscolorizeeffect_metacall_isbase = false;
    mutable bool qgraphicscolorizeeffect_draw_isbase = false;
    mutable bool qgraphicscolorizeeffect_boundingrectfor_isbase = false;
    mutable bool qgraphicscolorizeeffect_sourcechanged_isbase = false;
    mutable bool qgraphicscolorizeeffect_event_isbase = false;
    mutable bool qgraphicscolorizeeffect_eventfilter_isbase = false;
    mutable bool qgraphicscolorizeeffect_timerevent_isbase = false;
    mutable bool qgraphicscolorizeeffect_childevent_isbase = false;
    mutable bool qgraphicscolorizeeffect_customevent_isbase = false;
    mutable bool qgraphicscolorizeeffect_connectnotify_isbase = false;
    mutable bool qgraphicscolorizeeffect_disconnectnotify_isbase = false;
    mutable bool qgraphicscolorizeeffect_updateboundingrect_isbase = false;
    mutable bool qgraphicscolorizeeffect_sourceispixmap_isbase = false;
    mutable bool qgraphicscolorizeeffect_sourceboundingrect_isbase = false;
    mutable bool qgraphicscolorizeeffect_drawsource_isbase = false;
    mutable bool qgraphicscolorizeeffect_sourcepixmap_isbase = false;
    mutable bool qgraphicscolorizeeffect_sender_isbase = false;
    mutable bool qgraphicscolorizeeffect_sendersignalindex_isbase = false;
    mutable bool qgraphicscolorizeeffect_receivers_isbase = false;
    mutable bool qgraphicscolorizeeffect_issignalconnected_isbase = false;

  public:
    VirtualQGraphicsColorizeEffect() : QGraphicsColorizeEffect(){};
    VirtualQGraphicsColorizeEffect(QObject* parent) : QGraphicsColorizeEffect(parent){};

    ~VirtualQGraphicsColorizeEffect() {
        qgraphicscolorizeeffect_metacall_callback = nullptr;
        qgraphicscolorizeeffect_draw_callback = nullptr;
        qgraphicscolorizeeffect_boundingrectfor_callback = nullptr;
        qgraphicscolorizeeffect_sourcechanged_callback = nullptr;
        qgraphicscolorizeeffect_event_callback = nullptr;
        qgraphicscolorizeeffect_eventfilter_callback = nullptr;
        qgraphicscolorizeeffect_timerevent_callback = nullptr;
        qgraphicscolorizeeffect_childevent_callback = nullptr;
        qgraphicscolorizeeffect_customevent_callback = nullptr;
        qgraphicscolorizeeffect_connectnotify_callback = nullptr;
        qgraphicscolorizeeffect_disconnectnotify_callback = nullptr;
        qgraphicscolorizeeffect_updateboundingrect_callback = nullptr;
        qgraphicscolorizeeffect_sourceispixmap_callback = nullptr;
        qgraphicscolorizeeffect_sourceboundingrect_callback = nullptr;
        qgraphicscolorizeeffect_drawsource_callback = nullptr;
        qgraphicscolorizeeffect_sourcepixmap_callback = nullptr;
        qgraphicscolorizeeffect_sender_callback = nullptr;
        qgraphicscolorizeeffect_sendersignalindex_callback = nullptr;
        qgraphicscolorizeeffect_receivers_callback = nullptr;
        qgraphicscolorizeeffect_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQGraphicsColorizeEffect_Metacall_Callback(QGraphicsColorizeEffect_Metacall_Callback cb) { qgraphicscolorizeeffect_metacall_callback = cb; }
    void setQGraphicsColorizeEffect_Draw_Callback(QGraphicsColorizeEffect_Draw_Callback cb) { qgraphicscolorizeeffect_draw_callback = cb; }
    void setQGraphicsColorizeEffect_BoundingRectFor_Callback(QGraphicsColorizeEffect_BoundingRectFor_Callback cb) { qgraphicscolorizeeffect_boundingrectfor_callback = cb; }
    void setQGraphicsColorizeEffect_SourceChanged_Callback(QGraphicsColorizeEffect_SourceChanged_Callback cb) { qgraphicscolorizeeffect_sourcechanged_callback = cb; }
    void setQGraphicsColorizeEffect_Event_Callback(QGraphicsColorizeEffect_Event_Callback cb) { qgraphicscolorizeeffect_event_callback = cb; }
    void setQGraphicsColorizeEffect_EventFilter_Callback(QGraphicsColorizeEffect_EventFilter_Callback cb) { qgraphicscolorizeeffect_eventfilter_callback = cb; }
    void setQGraphicsColorizeEffect_TimerEvent_Callback(QGraphicsColorizeEffect_TimerEvent_Callback cb) { qgraphicscolorizeeffect_timerevent_callback = cb; }
    void setQGraphicsColorizeEffect_ChildEvent_Callback(QGraphicsColorizeEffect_ChildEvent_Callback cb) { qgraphicscolorizeeffect_childevent_callback = cb; }
    void setQGraphicsColorizeEffect_CustomEvent_Callback(QGraphicsColorizeEffect_CustomEvent_Callback cb) { qgraphicscolorizeeffect_customevent_callback = cb; }
    void setQGraphicsColorizeEffect_ConnectNotify_Callback(QGraphicsColorizeEffect_ConnectNotify_Callback cb) { qgraphicscolorizeeffect_connectnotify_callback = cb; }
    void setQGraphicsColorizeEffect_DisconnectNotify_Callback(QGraphicsColorizeEffect_DisconnectNotify_Callback cb) { qgraphicscolorizeeffect_disconnectnotify_callback = cb; }
    void setQGraphicsColorizeEffect_UpdateBoundingRect_Callback(QGraphicsColorizeEffect_UpdateBoundingRect_Callback cb) { qgraphicscolorizeeffect_updateboundingrect_callback = cb; }
    void setQGraphicsColorizeEffect_SourceIsPixmap_Callback(QGraphicsColorizeEffect_SourceIsPixmap_Callback cb) { qgraphicscolorizeeffect_sourceispixmap_callback = cb; }
    void setQGraphicsColorizeEffect_SourceBoundingRect_Callback(QGraphicsColorizeEffect_SourceBoundingRect_Callback cb) { qgraphicscolorizeeffect_sourceboundingrect_callback = cb; }
    void setQGraphicsColorizeEffect_DrawSource_Callback(QGraphicsColorizeEffect_DrawSource_Callback cb) { qgraphicscolorizeeffect_drawsource_callback = cb; }
    void setQGraphicsColorizeEffect_SourcePixmap_Callback(QGraphicsColorizeEffect_SourcePixmap_Callback cb) { qgraphicscolorizeeffect_sourcepixmap_callback = cb; }
    void setQGraphicsColorizeEffect_Sender_Callback(QGraphicsColorizeEffect_Sender_Callback cb) { qgraphicscolorizeeffect_sender_callback = cb; }
    void setQGraphicsColorizeEffect_SenderSignalIndex_Callback(QGraphicsColorizeEffect_SenderSignalIndex_Callback cb) { qgraphicscolorizeeffect_sendersignalindex_callback = cb; }
    void setQGraphicsColorizeEffect_Receivers_Callback(QGraphicsColorizeEffect_Receivers_Callback cb) { qgraphicscolorizeeffect_receivers_callback = cb; }
    void setQGraphicsColorizeEffect_IsSignalConnected_Callback(QGraphicsColorizeEffect_IsSignalConnected_Callback cb) { qgraphicscolorizeeffect_issignalconnected_callback = cb; }

    // Base flag setters
    void setQGraphicsColorizeEffect_Metacall_IsBase(bool value) const { qgraphicscolorizeeffect_metacall_isbase = value; }
    void setQGraphicsColorizeEffect_Draw_IsBase(bool value) const { qgraphicscolorizeeffect_draw_isbase = value; }
    void setQGraphicsColorizeEffect_BoundingRectFor_IsBase(bool value) const { qgraphicscolorizeeffect_boundingrectfor_isbase = value; }
    void setQGraphicsColorizeEffect_SourceChanged_IsBase(bool value) const { qgraphicscolorizeeffect_sourcechanged_isbase = value; }
    void setQGraphicsColorizeEffect_Event_IsBase(bool value) const { qgraphicscolorizeeffect_event_isbase = value; }
    void setQGraphicsColorizeEffect_EventFilter_IsBase(bool value) const { qgraphicscolorizeeffect_eventfilter_isbase = value; }
    void setQGraphicsColorizeEffect_TimerEvent_IsBase(bool value) const { qgraphicscolorizeeffect_timerevent_isbase = value; }
    void setQGraphicsColorizeEffect_ChildEvent_IsBase(bool value) const { qgraphicscolorizeeffect_childevent_isbase = value; }
    void setQGraphicsColorizeEffect_CustomEvent_IsBase(bool value) const { qgraphicscolorizeeffect_customevent_isbase = value; }
    void setQGraphicsColorizeEffect_ConnectNotify_IsBase(bool value) const { qgraphicscolorizeeffect_connectnotify_isbase = value; }
    void setQGraphicsColorizeEffect_DisconnectNotify_IsBase(bool value) const { qgraphicscolorizeeffect_disconnectnotify_isbase = value; }
    void setQGraphicsColorizeEffect_UpdateBoundingRect_IsBase(bool value) const { qgraphicscolorizeeffect_updateboundingrect_isbase = value; }
    void setQGraphicsColorizeEffect_SourceIsPixmap_IsBase(bool value) const { qgraphicscolorizeeffect_sourceispixmap_isbase = value; }
    void setQGraphicsColorizeEffect_SourceBoundingRect_IsBase(bool value) const { qgraphicscolorizeeffect_sourceboundingrect_isbase = value; }
    void setQGraphicsColorizeEffect_DrawSource_IsBase(bool value) const { qgraphicscolorizeeffect_drawsource_isbase = value; }
    void setQGraphicsColorizeEffect_SourcePixmap_IsBase(bool value) const { qgraphicscolorizeeffect_sourcepixmap_isbase = value; }
    void setQGraphicsColorizeEffect_Sender_IsBase(bool value) const { qgraphicscolorizeeffect_sender_isbase = value; }
    void setQGraphicsColorizeEffect_SenderSignalIndex_IsBase(bool value) const { qgraphicscolorizeeffect_sendersignalindex_isbase = value; }
    void setQGraphicsColorizeEffect_Receivers_IsBase(bool value) const { qgraphicscolorizeeffect_receivers_isbase = value; }
    void setQGraphicsColorizeEffect_IsSignalConnected_IsBase(bool value) const { qgraphicscolorizeeffect_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgraphicscolorizeeffect_metacall_isbase) {
            qgraphicscolorizeeffect_metacall_isbase = false;
            return QGraphicsColorizeEffect::qt_metacall(param1, param2, param3);
        } else if (qgraphicscolorizeeffect_metacall_callback != nullptr) {
            return qgraphicscolorizeeffect_metacall_callback(this, param1, param2, param3);
        } else {
            return QGraphicsColorizeEffect::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void draw(QPainter* painter) override {
        if (qgraphicscolorizeeffect_draw_isbase) {
            qgraphicscolorizeeffect_draw_isbase = false;
            QGraphicsColorizeEffect::draw(painter);
        } else if (qgraphicscolorizeeffect_draw_callback != nullptr) {
            qgraphicscolorizeeffect_draw_callback(this, painter);
        } else {
            QGraphicsColorizeEffect::draw(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRectFor(const QRectF& sourceRect) const override {
        if (qgraphicscolorizeeffect_boundingrectfor_isbase) {
            qgraphicscolorizeeffect_boundingrectfor_isbase = false;
            return QGraphicsColorizeEffect::boundingRectFor(sourceRect);
        } else if (qgraphicscolorizeeffect_boundingrectfor_callback != nullptr) {
            return qgraphicscolorizeeffect_boundingrectfor_callback(this, sourceRect);
        } else {
            return QGraphicsColorizeEffect::boundingRectFor(sourceRect);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void sourceChanged(QGraphicsEffect::ChangeFlags flags) override {
        if (qgraphicscolorizeeffect_sourcechanged_isbase) {
            qgraphicscolorizeeffect_sourcechanged_isbase = false;
            QGraphicsColorizeEffect::sourceChanged(flags);
        } else if (qgraphicscolorizeeffect_sourcechanged_callback != nullptr) {
            qgraphicscolorizeeffect_sourcechanged_callback(this, flags);
        } else {
            QGraphicsColorizeEffect::sourceChanged(flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgraphicscolorizeeffect_event_isbase) {
            qgraphicscolorizeeffect_event_isbase = false;
            return QGraphicsColorizeEffect::event(event);
        } else if (qgraphicscolorizeeffect_event_callback != nullptr) {
            return qgraphicscolorizeeffect_event_callback(this, event);
        } else {
            return QGraphicsColorizeEffect::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgraphicscolorizeeffect_eventfilter_isbase) {
            qgraphicscolorizeeffect_eventfilter_isbase = false;
            return QGraphicsColorizeEffect::eventFilter(watched, event);
        } else if (qgraphicscolorizeeffect_eventfilter_callback != nullptr) {
            return qgraphicscolorizeeffect_eventfilter_callback(this, watched, event);
        } else {
            return QGraphicsColorizeEffect::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgraphicscolorizeeffect_timerevent_isbase) {
            qgraphicscolorizeeffect_timerevent_isbase = false;
            QGraphicsColorizeEffect::timerEvent(event);
        } else if (qgraphicscolorizeeffect_timerevent_callback != nullptr) {
            qgraphicscolorizeeffect_timerevent_callback(this, event);
        } else {
            QGraphicsColorizeEffect::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgraphicscolorizeeffect_childevent_isbase) {
            qgraphicscolorizeeffect_childevent_isbase = false;
            QGraphicsColorizeEffect::childEvent(event);
        } else if (qgraphicscolorizeeffect_childevent_callback != nullptr) {
            qgraphicscolorizeeffect_childevent_callback(this, event);
        } else {
            QGraphicsColorizeEffect::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgraphicscolorizeeffect_customevent_isbase) {
            qgraphicscolorizeeffect_customevent_isbase = false;
            QGraphicsColorizeEffect::customEvent(event);
        } else if (qgraphicscolorizeeffect_customevent_callback != nullptr) {
            qgraphicscolorizeeffect_customevent_callback(this, event);
        } else {
            QGraphicsColorizeEffect::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgraphicscolorizeeffect_connectnotify_isbase) {
            qgraphicscolorizeeffect_connectnotify_isbase = false;
            QGraphicsColorizeEffect::connectNotify(signal);
        } else if (qgraphicscolorizeeffect_connectnotify_callback != nullptr) {
            qgraphicscolorizeeffect_connectnotify_callback(this, signal);
        } else {
            QGraphicsColorizeEffect::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgraphicscolorizeeffect_disconnectnotify_isbase) {
            qgraphicscolorizeeffect_disconnectnotify_isbase = false;
            QGraphicsColorizeEffect::disconnectNotify(signal);
        } else if (qgraphicscolorizeeffect_disconnectnotify_callback != nullptr) {
            qgraphicscolorizeeffect_disconnectnotify_callback(this, signal);
        } else {
            QGraphicsColorizeEffect::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateBoundingRect() {
        if (qgraphicscolorizeeffect_updateboundingrect_isbase) {
            qgraphicscolorizeeffect_updateboundingrect_isbase = false;
            QGraphicsColorizeEffect::updateBoundingRect();
        } else if (qgraphicscolorizeeffect_updateboundingrect_callback != nullptr) {
            qgraphicscolorizeeffect_updateboundingrect_callback();
        } else {
            QGraphicsColorizeEffect::updateBoundingRect();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool sourceIsPixmap() const {
        if (qgraphicscolorizeeffect_sourceispixmap_isbase) {
            qgraphicscolorizeeffect_sourceispixmap_isbase = false;
            return QGraphicsColorizeEffect::sourceIsPixmap();
        } else if (qgraphicscolorizeeffect_sourceispixmap_callback != nullptr) {
            return qgraphicscolorizeeffect_sourceispixmap_callback();
        } else {
            return QGraphicsColorizeEffect::sourceIsPixmap();
        }
    }

    // Virtual method for C ABI access and custom callback
    QRectF sourceBoundingRect() const {
        if (qgraphicscolorizeeffect_sourceboundingrect_isbase) {
            qgraphicscolorizeeffect_sourceboundingrect_isbase = false;
            return QGraphicsColorizeEffect::sourceBoundingRect();
        } else if (qgraphicscolorizeeffect_sourceboundingrect_callback != nullptr) {
            return qgraphicscolorizeeffect_sourceboundingrect_callback();
        } else {
            return QGraphicsColorizeEffect::sourceBoundingRect();
        }
    }

    // Virtual method for C ABI access and custom callback
    void drawSource(QPainter* painter) {
        if (qgraphicscolorizeeffect_drawsource_isbase) {
            qgraphicscolorizeeffect_drawsource_isbase = false;
            QGraphicsColorizeEffect::drawSource(painter);
        } else if (qgraphicscolorizeeffect_drawsource_callback != nullptr) {
            qgraphicscolorizeeffect_drawsource_callback(this, painter);
        } else {
            QGraphicsColorizeEffect::drawSource(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    QPixmap sourcePixmap() const {
        if (qgraphicscolorizeeffect_sourcepixmap_isbase) {
            qgraphicscolorizeeffect_sourcepixmap_isbase = false;
            return QGraphicsColorizeEffect::sourcePixmap();
        } else if (qgraphicscolorizeeffect_sourcepixmap_callback != nullptr) {
            return qgraphicscolorizeeffect_sourcepixmap_callback();
        } else {
            return QGraphicsColorizeEffect::sourcePixmap();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qgraphicscolorizeeffect_sender_isbase) {
            qgraphicscolorizeeffect_sender_isbase = false;
            return QGraphicsColorizeEffect::sender();
        } else if (qgraphicscolorizeeffect_sender_callback != nullptr) {
            return qgraphicscolorizeeffect_sender_callback();
        } else {
            return QGraphicsColorizeEffect::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qgraphicscolorizeeffect_sendersignalindex_isbase) {
            qgraphicscolorizeeffect_sendersignalindex_isbase = false;
            return QGraphicsColorizeEffect::senderSignalIndex();
        } else if (qgraphicscolorizeeffect_sendersignalindex_callback != nullptr) {
            return qgraphicscolorizeeffect_sendersignalindex_callback();
        } else {
            return QGraphicsColorizeEffect::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qgraphicscolorizeeffect_receivers_isbase) {
            qgraphicscolorizeeffect_receivers_isbase = false;
            return QGraphicsColorizeEffect::receivers(signal);
        } else if (qgraphicscolorizeeffect_receivers_callback != nullptr) {
            return qgraphicscolorizeeffect_receivers_callback(this, signal);
        } else {
            return QGraphicsColorizeEffect::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qgraphicscolorizeeffect_issignalconnected_isbase) {
            qgraphicscolorizeeffect_issignalconnected_isbase = false;
            return QGraphicsColorizeEffect::isSignalConnected(signal);
        } else if (qgraphicscolorizeeffect_issignalconnected_callback != nullptr) {
            return qgraphicscolorizeeffect_issignalconnected_callback(this, signal);
        } else {
            return QGraphicsColorizeEffect::isSignalConnected(signal);
        }
    }
};

// This class is a subclass of QGraphicsBlurEffect so that we can call protected methods
class VirtualQGraphicsBlurEffect : public QGraphicsBlurEffect {

  public:
    // Virtual class public types (including callbacks)
    using QGraphicsBlurEffect_Metacall_Callback = int (*)(QGraphicsBlurEffect*, QMetaObject::Call, int, void**);
    using QGraphicsBlurEffect_BoundingRectFor_Callback = QRectF (*)(const QGraphicsBlurEffect*, const QRectF&);
    using QGraphicsBlurEffect_Draw_Callback = void (*)(QGraphicsBlurEffect*, QPainter*);
    using QGraphicsBlurEffect_SourceChanged_Callback = void (*)(QGraphicsBlurEffect*, QGraphicsEffect::ChangeFlags);
    using QGraphicsBlurEffect_Event_Callback = bool (*)(QGraphicsBlurEffect*, QEvent*);
    using QGraphicsBlurEffect_EventFilter_Callback = bool (*)(QGraphicsBlurEffect*, QObject*, QEvent*);
    using QGraphicsBlurEffect_TimerEvent_Callback = void (*)(QGraphicsBlurEffect*, QTimerEvent*);
    using QGraphicsBlurEffect_ChildEvent_Callback = void (*)(QGraphicsBlurEffect*, QChildEvent*);
    using QGraphicsBlurEffect_CustomEvent_Callback = void (*)(QGraphicsBlurEffect*, QEvent*);
    using QGraphicsBlurEffect_ConnectNotify_Callback = void (*)(QGraphicsBlurEffect*, const QMetaMethod&);
    using QGraphicsBlurEffect_DisconnectNotify_Callback = void (*)(QGraphicsBlurEffect*, const QMetaMethod&);
    using QGraphicsBlurEffect_UpdateBoundingRect_Callback = void (*)();
    using QGraphicsBlurEffect_SourceIsPixmap_Callback = bool (*)();
    using QGraphicsBlurEffect_SourceBoundingRect_Callback = QRectF (*)();
    using QGraphicsBlurEffect_DrawSource_Callback = void (*)(QGraphicsBlurEffect*, QPainter*);
    using QGraphicsBlurEffect_SourcePixmap_Callback = QPixmap (*)();
    using QGraphicsBlurEffect_Sender_Callback = QObject* (*)();
    using QGraphicsBlurEffect_SenderSignalIndex_Callback = int (*)();
    using QGraphicsBlurEffect_Receivers_Callback = int (*)(const QGraphicsBlurEffect*, const char*);
    using QGraphicsBlurEffect_IsSignalConnected_Callback = bool (*)(const QGraphicsBlurEffect*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QGraphicsBlurEffect_Metacall_Callback qgraphicsblureffect_metacall_callback = nullptr;
    QGraphicsBlurEffect_BoundingRectFor_Callback qgraphicsblureffect_boundingrectfor_callback = nullptr;
    QGraphicsBlurEffect_Draw_Callback qgraphicsblureffect_draw_callback = nullptr;
    QGraphicsBlurEffect_SourceChanged_Callback qgraphicsblureffect_sourcechanged_callback = nullptr;
    QGraphicsBlurEffect_Event_Callback qgraphicsblureffect_event_callback = nullptr;
    QGraphicsBlurEffect_EventFilter_Callback qgraphicsblureffect_eventfilter_callback = nullptr;
    QGraphicsBlurEffect_TimerEvent_Callback qgraphicsblureffect_timerevent_callback = nullptr;
    QGraphicsBlurEffect_ChildEvent_Callback qgraphicsblureffect_childevent_callback = nullptr;
    QGraphicsBlurEffect_CustomEvent_Callback qgraphicsblureffect_customevent_callback = nullptr;
    QGraphicsBlurEffect_ConnectNotify_Callback qgraphicsblureffect_connectnotify_callback = nullptr;
    QGraphicsBlurEffect_DisconnectNotify_Callback qgraphicsblureffect_disconnectnotify_callback = nullptr;
    QGraphicsBlurEffect_UpdateBoundingRect_Callback qgraphicsblureffect_updateboundingrect_callback = nullptr;
    QGraphicsBlurEffect_SourceIsPixmap_Callback qgraphicsblureffect_sourceispixmap_callback = nullptr;
    QGraphicsBlurEffect_SourceBoundingRect_Callback qgraphicsblureffect_sourceboundingrect_callback = nullptr;
    QGraphicsBlurEffect_DrawSource_Callback qgraphicsblureffect_drawsource_callback = nullptr;
    QGraphicsBlurEffect_SourcePixmap_Callback qgraphicsblureffect_sourcepixmap_callback = nullptr;
    QGraphicsBlurEffect_Sender_Callback qgraphicsblureffect_sender_callback = nullptr;
    QGraphicsBlurEffect_SenderSignalIndex_Callback qgraphicsblureffect_sendersignalindex_callback = nullptr;
    QGraphicsBlurEffect_Receivers_Callback qgraphicsblureffect_receivers_callback = nullptr;
    QGraphicsBlurEffect_IsSignalConnected_Callback qgraphicsblureffect_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicsblureffect_metacall_isbase = false;
    mutable bool qgraphicsblureffect_boundingrectfor_isbase = false;
    mutable bool qgraphicsblureffect_draw_isbase = false;
    mutable bool qgraphicsblureffect_sourcechanged_isbase = false;
    mutable bool qgraphicsblureffect_event_isbase = false;
    mutable bool qgraphicsblureffect_eventfilter_isbase = false;
    mutable bool qgraphicsblureffect_timerevent_isbase = false;
    mutable bool qgraphicsblureffect_childevent_isbase = false;
    mutable bool qgraphicsblureffect_customevent_isbase = false;
    mutable bool qgraphicsblureffect_connectnotify_isbase = false;
    mutable bool qgraphicsblureffect_disconnectnotify_isbase = false;
    mutable bool qgraphicsblureffect_updateboundingrect_isbase = false;
    mutable bool qgraphicsblureffect_sourceispixmap_isbase = false;
    mutable bool qgraphicsblureffect_sourceboundingrect_isbase = false;
    mutable bool qgraphicsblureffect_drawsource_isbase = false;
    mutable bool qgraphicsblureffect_sourcepixmap_isbase = false;
    mutable bool qgraphicsblureffect_sender_isbase = false;
    mutable bool qgraphicsblureffect_sendersignalindex_isbase = false;
    mutable bool qgraphicsblureffect_receivers_isbase = false;
    mutable bool qgraphicsblureffect_issignalconnected_isbase = false;

  public:
    VirtualQGraphicsBlurEffect() : QGraphicsBlurEffect(){};
    VirtualQGraphicsBlurEffect(QObject* parent) : QGraphicsBlurEffect(parent){};

    ~VirtualQGraphicsBlurEffect() {
        qgraphicsblureffect_metacall_callback = nullptr;
        qgraphicsblureffect_boundingrectfor_callback = nullptr;
        qgraphicsblureffect_draw_callback = nullptr;
        qgraphicsblureffect_sourcechanged_callback = nullptr;
        qgraphicsblureffect_event_callback = nullptr;
        qgraphicsblureffect_eventfilter_callback = nullptr;
        qgraphicsblureffect_timerevent_callback = nullptr;
        qgraphicsblureffect_childevent_callback = nullptr;
        qgraphicsblureffect_customevent_callback = nullptr;
        qgraphicsblureffect_connectnotify_callback = nullptr;
        qgraphicsblureffect_disconnectnotify_callback = nullptr;
        qgraphicsblureffect_updateboundingrect_callback = nullptr;
        qgraphicsblureffect_sourceispixmap_callback = nullptr;
        qgraphicsblureffect_sourceboundingrect_callback = nullptr;
        qgraphicsblureffect_drawsource_callback = nullptr;
        qgraphicsblureffect_sourcepixmap_callback = nullptr;
        qgraphicsblureffect_sender_callback = nullptr;
        qgraphicsblureffect_sendersignalindex_callback = nullptr;
        qgraphicsblureffect_receivers_callback = nullptr;
        qgraphicsblureffect_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQGraphicsBlurEffect_Metacall_Callback(QGraphicsBlurEffect_Metacall_Callback cb) { qgraphicsblureffect_metacall_callback = cb; }
    void setQGraphicsBlurEffect_BoundingRectFor_Callback(QGraphicsBlurEffect_BoundingRectFor_Callback cb) { qgraphicsblureffect_boundingrectfor_callback = cb; }
    void setQGraphicsBlurEffect_Draw_Callback(QGraphicsBlurEffect_Draw_Callback cb) { qgraphicsblureffect_draw_callback = cb; }
    void setQGraphicsBlurEffect_SourceChanged_Callback(QGraphicsBlurEffect_SourceChanged_Callback cb) { qgraphicsblureffect_sourcechanged_callback = cb; }
    void setQGraphicsBlurEffect_Event_Callback(QGraphicsBlurEffect_Event_Callback cb) { qgraphicsblureffect_event_callback = cb; }
    void setQGraphicsBlurEffect_EventFilter_Callback(QGraphicsBlurEffect_EventFilter_Callback cb) { qgraphicsblureffect_eventfilter_callback = cb; }
    void setQGraphicsBlurEffect_TimerEvent_Callback(QGraphicsBlurEffect_TimerEvent_Callback cb) { qgraphicsblureffect_timerevent_callback = cb; }
    void setQGraphicsBlurEffect_ChildEvent_Callback(QGraphicsBlurEffect_ChildEvent_Callback cb) { qgraphicsblureffect_childevent_callback = cb; }
    void setQGraphicsBlurEffect_CustomEvent_Callback(QGraphicsBlurEffect_CustomEvent_Callback cb) { qgraphicsblureffect_customevent_callback = cb; }
    void setQGraphicsBlurEffect_ConnectNotify_Callback(QGraphicsBlurEffect_ConnectNotify_Callback cb) { qgraphicsblureffect_connectnotify_callback = cb; }
    void setQGraphicsBlurEffect_DisconnectNotify_Callback(QGraphicsBlurEffect_DisconnectNotify_Callback cb) { qgraphicsblureffect_disconnectnotify_callback = cb; }
    void setQGraphicsBlurEffect_UpdateBoundingRect_Callback(QGraphicsBlurEffect_UpdateBoundingRect_Callback cb) { qgraphicsblureffect_updateboundingrect_callback = cb; }
    void setQGraphicsBlurEffect_SourceIsPixmap_Callback(QGraphicsBlurEffect_SourceIsPixmap_Callback cb) { qgraphicsblureffect_sourceispixmap_callback = cb; }
    void setQGraphicsBlurEffect_SourceBoundingRect_Callback(QGraphicsBlurEffect_SourceBoundingRect_Callback cb) { qgraphicsblureffect_sourceboundingrect_callback = cb; }
    void setQGraphicsBlurEffect_DrawSource_Callback(QGraphicsBlurEffect_DrawSource_Callback cb) { qgraphicsblureffect_drawsource_callback = cb; }
    void setQGraphicsBlurEffect_SourcePixmap_Callback(QGraphicsBlurEffect_SourcePixmap_Callback cb) { qgraphicsblureffect_sourcepixmap_callback = cb; }
    void setQGraphicsBlurEffect_Sender_Callback(QGraphicsBlurEffect_Sender_Callback cb) { qgraphicsblureffect_sender_callback = cb; }
    void setQGraphicsBlurEffect_SenderSignalIndex_Callback(QGraphicsBlurEffect_SenderSignalIndex_Callback cb) { qgraphicsblureffect_sendersignalindex_callback = cb; }
    void setQGraphicsBlurEffect_Receivers_Callback(QGraphicsBlurEffect_Receivers_Callback cb) { qgraphicsblureffect_receivers_callback = cb; }
    void setQGraphicsBlurEffect_IsSignalConnected_Callback(QGraphicsBlurEffect_IsSignalConnected_Callback cb) { qgraphicsblureffect_issignalconnected_callback = cb; }

    // Base flag setters
    void setQGraphicsBlurEffect_Metacall_IsBase(bool value) const { qgraphicsblureffect_metacall_isbase = value; }
    void setQGraphicsBlurEffect_BoundingRectFor_IsBase(bool value) const { qgraphicsblureffect_boundingrectfor_isbase = value; }
    void setQGraphicsBlurEffect_Draw_IsBase(bool value) const { qgraphicsblureffect_draw_isbase = value; }
    void setQGraphicsBlurEffect_SourceChanged_IsBase(bool value) const { qgraphicsblureffect_sourcechanged_isbase = value; }
    void setQGraphicsBlurEffect_Event_IsBase(bool value) const { qgraphicsblureffect_event_isbase = value; }
    void setQGraphicsBlurEffect_EventFilter_IsBase(bool value) const { qgraphicsblureffect_eventfilter_isbase = value; }
    void setQGraphicsBlurEffect_TimerEvent_IsBase(bool value) const { qgraphicsblureffect_timerevent_isbase = value; }
    void setQGraphicsBlurEffect_ChildEvent_IsBase(bool value) const { qgraphicsblureffect_childevent_isbase = value; }
    void setQGraphicsBlurEffect_CustomEvent_IsBase(bool value) const { qgraphicsblureffect_customevent_isbase = value; }
    void setQGraphicsBlurEffect_ConnectNotify_IsBase(bool value) const { qgraphicsblureffect_connectnotify_isbase = value; }
    void setQGraphicsBlurEffect_DisconnectNotify_IsBase(bool value) const { qgraphicsblureffect_disconnectnotify_isbase = value; }
    void setQGraphicsBlurEffect_UpdateBoundingRect_IsBase(bool value) const { qgraphicsblureffect_updateboundingrect_isbase = value; }
    void setQGraphicsBlurEffect_SourceIsPixmap_IsBase(bool value) const { qgraphicsblureffect_sourceispixmap_isbase = value; }
    void setQGraphicsBlurEffect_SourceBoundingRect_IsBase(bool value) const { qgraphicsblureffect_sourceboundingrect_isbase = value; }
    void setQGraphicsBlurEffect_DrawSource_IsBase(bool value) const { qgraphicsblureffect_drawsource_isbase = value; }
    void setQGraphicsBlurEffect_SourcePixmap_IsBase(bool value) const { qgraphicsblureffect_sourcepixmap_isbase = value; }
    void setQGraphicsBlurEffect_Sender_IsBase(bool value) const { qgraphicsblureffect_sender_isbase = value; }
    void setQGraphicsBlurEffect_SenderSignalIndex_IsBase(bool value) const { qgraphicsblureffect_sendersignalindex_isbase = value; }
    void setQGraphicsBlurEffect_Receivers_IsBase(bool value) const { qgraphicsblureffect_receivers_isbase = value; }
    void setQGraphicsBlurEffect_IsSignalConnected_IsBase(bool value) const { qgraphicsblureffect_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgraphicsblureffect_metacall_isbase) {
            qgraphicsblureffect_metacall_isbase = false;
            return QGraphicsBlurEffect::qt_metacall(param1, param2, param3);
        } else if (qgraphicsblureffect_metacall_callback != nullptr) {
            return qgraphicsblureffect_metacall_callback(this, param1, param2, param3);
        } else {
            return QGraphicsBlurEffect::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRectFor(const QRectF& rect) const override {
        if (qgraphicsblureffect_boundingrectfor_isbase) {
            qgraphicsblureffect_boundingrectfor_isbase = false;
            return QGraphicsBlurEffect::boundingRectFor(rect);
        } else if (qgraphicsblureffect_boundingrectfor_callback != nullptr) {
            return qgraphicsblureffect_boundingrectfor_callback(this, rect);
        } else {
            return QGraphicsBlurEffect::boundingRectFor(rect);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void draw(QPainter* painter) override {
        if (qgraphicsblureffect_draw_isbase) {
            qgraphicsblureffect_draw_isbase = false;
            QGraphicsBlurEffect::draw(painter);
        } else if (qgraphicsblureffect_draw_callback != nullptr) {
            qgraphicsblureffect_draw_callback(this, painter);
        } else {
            QGraphicsBlurEffect::draw(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void sourceChanged(QGraphicsEffect::ChangeFlags flags) override {
        if (qgraphicsblureffect_sourcechanged_isbase) {
            qgraphicsblureffect_sourcechanged_isbase = false;
            QGraphicsBlurEffect::sourceChanged(flags);
        } else if (qgraphicsblureffect_sourcechanged_callback != nullptr) {
            qgraphicsblureffect_sourcechanged_callback(this, flags);
        } else {
            QGraphicsBlurEffect::sourceChanged(flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgraphicsblureffect_event_isbase) {
            qgraphicsblureffect_event_isbase = false;
            return QGraphicsBlurEffect::event(event);
        } else if (qgraphicsblureffect_event_callback != nullptr) {
            return qgraphicsblureffect_event_callback(this, event);
        } else {
            return QGraphicsBlurEffect::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgraphicsblureffect_eventfilter_isbase) {
            qgraphicsblureffect_eventfilter_isbase = false;
            return QGraphicsBlurEffect::eventFilter(watched, event);
        } else if (qgraphicsblureffect_eventfilter_callback != nullptr) {
            return qgraphicsblureffect_eventfilter_callback(this, watched, event);
        } else {
            return QGraphicsBlurEffect::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgraphicsblureffect_timerevent_isbase) {
            qgraphicsblureffect_timerevent_isbase = false;
            QGraphicsBlurEffect::timerEvent(event);
        } else if (qgraphicsblureffect_timerevent_callback != nullptr) {
            qgraphicsblureffect_timerevent_callback(this, event);
        } else {
            QGraphicsBlurEffect::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgraphicsblureffect_childevent_isbase) {
            qgraphicsblureffect_childevent_isbase = false;
            QGraphicsBlurEffect::childEvent(event);
        } else if (qgraphicsblureffect_childevent_callback != nullptr) {
            qgraphicsblureffect_childevent_callback(this, event);
        } else {
            QGraphicsBlurEffect::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgraphicsblureffect_customevent_isbase) {
            qgraphicsblureffect_customevent_isbase = false;
            QGraphicsBlurEffect::customEvent(event);
        } else if (qgraphicsblureffect_customevent_callback != nullptr) {
            qgraphicsblureffect_customevent_callback(this, event);
        } else {
            QGraphicsBlurEffect::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgraphicsblureffect_connectnotify_isbase) {
            qgraphicsblureffect_connectnotify_isbase = false;
            QGraphicsBlurEffect::connectNotify(signal);
        } else if (qgraphicsblureffect_connectnotify_callback != nullptr) {
            qgraphicsblureffect_connectnotify_callback(this, signal);
        } else {
            QGraphicsBlurEffect::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgraphicsblureffect_disconnectnotify_isbase) {
            qgraphicsblureffect_disconnectnotify_isbase = false;
            QGraphicsBlurEffect::disconnectNotify(signal);
        } else if (qgraphicsblureffect_disconnectnotify_callback != nullptr) {
            qgraphicsblureffect_disconnectnotify_callback(this, signal);
        } else {
            QGraphicsBlurEffect::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateBoundingRect() {
        if (qgraphicsblureffect_updateboundingrect_isbase) {
            qgraphicsblureffect_updateboundingrect_isbase = false;
            QGraphicsBlurEffect::updateBoundingRect();
        } else if (qgraphicsblureffect_updateboundingrect_callback != nullptr) {
            qgraphicsblureffect_updateboundingrect_callback();
        } else {
            QGraphicsBlurEffect::updateBoundingRect();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool sourceIsPixmap() const {
        if (qgraphicsblureffect_sourceispixmap_isbase) {
            qgraphicsblureffect_sourceispixmap_isbase = false;
            return QGraphicsBlurEffect::sourceIsPixmap();
        } else if (qgraphicsblureffect_sourceispixmap_callback != nullptr) {
            return qgraphicsblureffect_sourceispixmap_callback();
        } else {
            return QGraphicsBlurEffect::sourceIsPixmap();
        }
    }

    // Virtual method for C ABI access and custom callback
    QRectF sourceBoundingRect() const {
        if (qgraphicsblureffect_sourceboundingrect_isbase) {
            qgraphicsblureffect_sourceboundingrect_isbase = false;
            return QGraphicsBlurEffect::sourceBoundingRect();
        } else if (qgraphicsblureffect_sourceboundingrect_callback != nullptr) {
            return qgraphicsblureffect_sourceboundingrect_callback();
        } else {
            return QGraphicsBlurEffect::sourceBoundingRect();
        }
    }

    // Virtual method for C ABI access and custom callback
    void drawSource(QPainter* painter) {
        if (qgraphicsblureffect_drawsource_isbase) {
            qgraphicsblureffect_drawsource_isbase = false;
            QGraphicsBlurEffect::drawSource(painter);
        } else if (qgraphicsblureffect_drawsource_callback != nullptr) {
            qgraphicsblureffect_drawsource_callback(this, painter);
        } else {
            QGraphicsBlurEffect::drawSource(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    QPixmap sourcePixmap() const {
        if (qgraphicsblureffect_sourcepixmap_isbase) {
            qgraphicsblureffect_sourcepixmap_isbase = false;
            return QGraphicsBlurEffect::sourcePixmap();
        } else if (qgraphicsblureffect_sourcepixmap_callback != nullptr) {
            return qgraphicsblureffect_sourcepixmap_callback();
        } else {
            return QGraphicsBlurEffect::sourcePixmap();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qgraphicsblureffect_sender_isbase) {
            qgraphicsblureffect_sender_isbase = false;
            return QGraphicsBlurEffect::sender();
        } else if (qgraphicsblureffect_sender_callback != nullptr) {
            return qgraphicsblureffect_sender_callback();
        } else {
            return QGraphicsBlurEffect::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qgraphicsblureffect_sendersignalindex_isbase) {
            qgraphicsblureffect_sendersignalindex_isbase = false;
            return QGraphicsBlurEffect::senderSignalIndex();
        } else if (qgraphicsblureffect_sendersignalindex_callback != nullptr) {
            return qgraphicsblureffect_sendersignalindex_callback();
        } else {
            return QGraphicsBlurEffect::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qgraphicsblureffect_receivers_isbase) {
            qgraphicsblureffect_receivers_isbase = false;
            return QGraphicsBlurEffect::receivers(signal);
        } else if (qgraphicsblureffect_receivers_callback != nullptr) {
            return qgraphicsblureffect_receivers_callback(this, signal);
        } else {
            return QGraphicsBlurEffect::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qgraphicsblureffect_issignalconnected_isbase) {
            qgraphicsblureffect_issignalconnected_isbase = false;
            return QGraphicsBlurEffect::isSignalConnected(signal);
        } else if (qgraphicsblureffect_issignalconnected_callback != nullptr) {
            return qgraphicsblureffect_issignalconnected_callback(this, signal);
        } else {
            return QGraphicsBlurEffect::isSignalConnected(signal);
        }
    }
};

// This class is a subclass of QGraphicsDropShadowEffect so that we can call protected methods
class VirtualQGraphicsDropShadowEffect : public QGraphicsDropShadowEffect {

  public:
    // Virtual class public types (including callbacks)
    using QGraphicsDropShadowEffect_Metacall_Callback = int (*)(QGraphicsDropShadowEffect*, QMetaObject::Call, int, void**);
    using QGraphicsDropShadowEffect_BoundingRectFor_Callback = QRectF (*)(const QGraphicsDropShadowEffect*, const QRectF&);
    using QGraphicsDropShadowEffect_Draw_Callback = void (*)(QGraphicsDropShadowEffect*, QPainter*);
    using QGraphicsDropShadowEffect_SourceChanged_Callback = void (*)(QGraphicsDropShadowEffect*, QGraphicsEffect::ChangeFlags);
    using QGraphicsDropShadowEffect_Event_Callback = bool (*)(QGraphicsDropShadowEffect*, QEvent*);
    using QGraphicsDropShadowEffect_EventFilter_Callback = bool (*)(QGraphicsDropShadowEffect*, QObject*, QEvent*);
    using QGraphicsDropShadowEffect_TimerEvent_Callback = void (*)(QGraphicsDropShadowEffect*, QTimerEvent*);
    using QGraphicsDropShadowEffect_ChildEvent_Callback = void (*)(QGraphicsDropShadowEffect*, QChildEvent*);
    using QGraphicsDropShadowEffect_CustomEvent_Callback = void (*)(QGraphicsDropShadowEffect*, QEvent*);
    using QGraphicsDropShadowEffect_ConnectNotify_Callback = void (*)(QGraphicsDropShadowEffect*, const QMetaMethod&);
    using QGraphicsDropShadowEffect_DisconnectNotify_Callback = void (*)(QGraphicsDropShadowEffect*, const QMetaMethod&);
    using QGraphicsDropShadowEffect_UpdateBoundingRect_Callback = void (*)();
    using QGraphicsDropShadowEffect_SourceIsPixmap_Callback = bool (*)();
    using QGraphicsDropShadowEffect_SourceBoundingRect_Callback = QRectF (*)();
    using QGraphicsDropShadowEffect_DrawSource_Callback = void (*)(QGraphicsDropShadowEffect*, QPainter*);
    using QGraphicsDropShadowEffect_SourcePixmap_Callback = QPixmap (*)();
    using QGraphicsDropShadowEffect_Sender_Callback = QObject* (*)();
    using QGraphicsDropShadowEffect_SenderSignalIndex_Callback = int (*)();
    using QGraphicsDropShadowEffect_Receivers_Callback = int (*)(const QGraphicsDropShadowEffect*, const char*);
    using QGraphicsDropShadowEffect_IsSignalConnected_Callback = bool (*)(const QGraphicsDropShadowEffect*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QGraphicsDropShadowEffect_Metacall_Callback qgraphicsdropshadoweffect_metacall_callback = nullptr;
    QGraphicsDropShadowEffect_BoundingRectFor_Callback qgraphicsdropshadoweffect_boundingrectfor_callback = nullptr;
    QGraphicsDropShadowEffect_Draw_Callback qgraphicsdropshadoweffect_draw_callback = nullptr;
    QGraphicsDropShadowEffect_SourceChanged_Callback qgraphicsdropshadoweffect_sourcechanged_callback = nullptr;
    QGraphicsDropShadowEffect_Event_Callback qgraphicsdropshadoweffect_event_callback = nullptr;
    QGraphicsDropShadowEffect_EventFilter_Callback qgraphicsdropshadoweffect_eventfilter_callback = nullptr;
    QGraphicsDropShadowEffect_TimerEvent_Callback qgraphicsdropshadoweffect_timerevent_callback = nullptr;
    QGraphicsDropShadowEffect_ChildEvent_Callback qgraphicsdropshadoweffect_childevent_callback = nullptr;
    QGraphicsDropShadowEffect_CustomEvent_Callback qgraphicsdropshadoweffect_customevent_callback = nullptr;
    QGraphicsDropShadowEffect_ConnectNotify_Callback qgraphicsdropshadoweffect_connectnotify_callback = nullptr;
    QGraphicsDropShadowEffect_DisconnectNotify_Callback qgraphicsdropshadoweffect_disconnectnotify_callback = nullptr;
    QGraphicsDropShadowEffect_UpdateBoundingRect_Callback qgraphicsdropshadoweffect_updateboundingrect_callback = nullptr;
    QGraphicsDropShadowEffect_SourceIsPixmap_Callback qgraphicsdropshadoweffect_sourceispixmap_callback = nullptr;
    QGraphicsDropShadowEffect_SourceBoundingRect_Callback qgraphicsdropshadoweffect_sourceboundingrect_callback = nullptr;
    QGraphicsDropShadowEffect_DrawSource_Callback qgraphicsdropshadoweffect_drawsource_callback = nullptr;
    QGraphicsDropShadowEffect_SourcePixmap_Callback qgraphicsdropshadoweffect_sourcepixmap_callback = nullptr;
    QGraphicsDropShadowEffect_Sender_Callback qgraphicsdropshadoweffect_sender_callback = nullptr;
    QGraphicsDropShadowEffect_SenderSignalIndex_Callback qgraphicsdropshadoweffect_sendersignalindex_callback = nullptr;
    QGraphicsDropShadowEffect_Receivers_Callback qgraphicsdropshadoweffect_receivers_callback = nullptr;
    QGraphicsDropShadowEffect_IsSignalConnected_Callback qgraphicsdropshadoweffect_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicsdropshadoweffect_metacall_isbase = false;
    mutable bool qgraphicsdropshadoweffect_boundingrectfor_isbase = false;
    mutable bool qgraphicsdropshadoweffect_draw_isbase = false;
    mutable bool qgraphicsdropshadoweffect_sourcechanged_isbase = false;
    mutable bool qgraphicsdropshadoweffect_event_isbase = false;
    mutable bool qgraphicsdropshadoweffect_eventfilter_isbase = false;
    mutable bool qgraphicsdropshadoweffect_timerevent_isbase = false;
    mutable bool qgraphicsdropshadoweffect_childevent_isbase = false;
    mutable bool qgraphicsdropshadoweffect_customevent_isbase = false;
    mutable bool qgraphicsdropshadoweffect_connectnotify_isbase = false;
    mutable bool qgraphicsdropshadoweffect_disconnectnotify_isbase = false;
    mutable bool qgraphicsdropshadoweffect_updateboundingrect_isbase = false;
    mutable bool qgraphicsdropshadoweffect_sourceispixmap_isbase = false;
    mutable bool qgraphicsdropshadoweffect_sourceboundingrect_isbase = false;
    mutable bool qgraphicsdropshadoweffect_drawsource_isbase = false;
    mutable bool qgraphicsdropshadoweffect_sourcepixmap_isbase = false;
    mutable bool qgraphicsdropshadoweffect_sender_isbase = false;
    mutable bool qgraphicsdropshadoweffect_sendersignalindex_isbase = false;
    mutable bool qgraphicsdropshadoweffect_receivers_isbase = false;
    mutable bool qgraphicsdropshadoweffect_issignalconnected_isbase = false;

  public:
    VirtualQGraphicsDropShadowEffect() : QGraphicsDropShadowEffect(){};
    VirtualQGraphicsDropShadowEffect(QObject* parent) : QGraphicsDropShadowEffect(parent){};

    ~VirtualQGraphicsDropShadowEffect() {
        qgraphicsdropshadoweffect_metacall_callback = nullptr;
        qgraphicsdropshadoweffect_boundingrectfor_callback = nullptr;
        qgraphicsdropshadoweffect_draw_callback = nullptr;
        qgraphicsdropshadoweffect_sourcechanged_callback = nullptr;
        qgraphicsdropshadoweffect_event_callback = nullptr;
        qgraphicsdropshadoweffect_eventfilter_callback = nullptr;
        qgraphicsdropshadoweffect_timerevent_callback = nullptr;
        qgraphicsdropshadoweffect_childevent_callback = nullptr;
        qgraphicsdropshadoweffect_customevent_callback = nullptr;
        qgraphicsdropshadoweffect_connectnotify_callback = nullptr;
        qgraphicsdropshadoweffect_disconnectnotify_callback = nullptr;
        qgraphicsdropshadoweffect_updateboundingrect_callback = nullptr;
        qgraphicsdropshadoweffect_sourceispixmap_callback = nullptr;
        qgraphicsdropshadoweffect_sourceboundingrect_callback = nullptr;
        qgraphicsdropshadoweffect_drawsource_callback = nullptr;
        qgraphicsdropshadoweffect_sourcepixmap_callback = nullptr;
        qgraphicsdropshadoweffect_sender_callback = nullptr;
        qgraphicsdropshadoweffect_sendersignalindex_callback = nullptr;
        qgraphicsdropshadoweffect_receivers_callback = nullptr;
        qgraphicsdropshadoweffect_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQGraphicsDropShadowEffect_Metacall_Callback(QGraphicsDropShadowEffect_Metacall_Callback cb) { qgraphicsdropshadoweffect_metacall_callback = cb; }
    void setQGraphicsDropShadowEffect_BoundingRectFor_Callback(QGraphicsDropShadowEffect_BoundingRectFor_Callback cb) { qgraphicsdropshadoweffect_boundingrectfor_callback = cb; }
    void setQGraphicsDropShadowEffect_Draw_Callback(QGraphicsDropShadowEffect_Draw_Callback cb) { qgraphicsdropshadoweffect_draw_callback = cb; }
    void setQGraphicsDropShadowEffect_SourceChanged_Callback(QGraphicsDropShadowEffect_SourceChanged_Callback cb) { qgraphicsdropshadoweffect_sourcechanged_callback = cb; }
    void setQGraphicsDropShadowEffect_Event_Callback(QGraphicsDropShadowEffect_Event_Callback cb) { qgraphicsdropshadoweffect_event_callback = cb; }
    void setQGraphicsDropShadowEffect_EventFilter_Callback(QGraphicsDropShadowEffect_EventFilter_Callback cb) { qgraphicsdropshadoweffect_eventfilter_callback = cb; }
    void setQGraphicsDropShadowEffect_TimerEvent_Callback(QGraphicsDropShadowEffect_TimerEvent_Callback cb) { qgraphicsdropshadoweffect_timerevent_callback = cb; }
    void setQGraphicsDropShadowEffect_ChildEvent_Callback(QGraphicsDropShadowEffect_ChildEvent_Callback cb) { qgraphicsdropshadoweffect_childevent_callback = cb; }
    void setQGraphicsDropShadowEffect_CustomEvent_Callback(QGraphicsDropShadowEffect_CustomEvent_Callback cb) { qgraphicsdropshadoweffect_customevent_callback = cb; }
    void setQGraphicsDropShadowEffect_ConnectNotify_Callback(QGraphicsDropShadowEffect_ConnectNotify_Callback cb) { qgraphicsdropshadoweffect_connectnotify_callback = cb; }
    void setQGraphicsDropShadowEffect_DisconnectNotify_Callback(QGraphicsDropShadowEffect_DisconnectNotify_Callback cb) { qgraphicsdropshadoweffect_disconnectnotify_callback = cb; }
    void setQGraphicsDropShadowEffect_UpdateBoundingRect_Callback(QGraphicsDropShadowEffect_UpdateBoundingRect_Callback cb) { qgraphicsdropshadoweffect_updateboundingrect_callback = cb; }
    void setQGraphicsDropShadowEffect_SourceIsPixmap_Callback(QGraphicsDropShadowEffect_SourceIsPixmap_Callback cb) { qgraphicsdropshadoweffect_sourceispixmap_callback = cb; }
    void setQGraphicsDropShadowEffect_SourceBoundingRect_Callback(QGraphicsDropShadowEffect_SourceBoundingRect_Callback cb) { qgraphicsdropshadoweffect_sourceboundingrect_callback = cb; }
    void setQGraphicsDropShadowEffect_DrawSource_Callback(QGraphicsDropShadowEffect_DrawSource_Callback cb) { qgraphicsdropshadoweffect_drawsource_callback = cb; }
    void setQGraphicsDropShadowEffect_SourcePixmap_Callback(QGraphicsDropShadowEffect_SourcePixmap_Callback cb) { qgraphicsdropshadoweffect_sourcepixmap_callback = cb; }
    void setQGraphicsDropShadowEffect_Sender_Callback(QGraphicsDropShadowEffect_Sender_Callback cb) { qgraphicsdropshadoweffect_sender_callback = cb; }
    void setQGraphicsDropShadowEffect_SenderSignalIndex_Callback(QGraphicsDropShadowEffect_SenderSignalIndex_Callback cb) { qgraphicsdropshadoweffect_sendersignalindex_callback = cb; }
    void setQGraphicsDropShadowEffect_Receivers_Callback(QGraphicsDropShadowEffect_Receivers_Callback cb) { qgraphicsdropshadoweffect_receivers_callback = cb; }
    void setQGraphicsDropShadowEffect_IsSignalConnected_Callback(QGraphicsDropShadowEffect_IsSignalConnected_Callback cb) { qgraphicsdropshadoweffect_issignalconnected_callback = cb; }

    // Base flag setters
    void setQGraphicsDropShadowEffect_Metacall_IsBase(bool value) const { qgraphicsdropshadoweffect_metacall_isbase = value; }
    void setQGraphicsDropShadowEffect_BoundingRectFor_IsBase(bool value) const { qgraphicsdropshadoweffect_boundingrectfor_isbase = value; }
    void setQGraphicsDropShadowEffect_Draw_IsBase(bool value) const { qgraphicsdropshadoweffect_draw_isbase = value; }
    void setQGraphicsDropShadowEffect_SourceChanged_IsBase(bool value) const { qgraphicsdropshadoweffect_sourcechanged_isbase = value; }
    void setQGraphicsDropShadowEffect_Event_IsBase(bool value) const { qgraphicsdropshadoweffect_event_isbase = value; }
    void setQGraphicsDropShadowEffect_EventFilter_IsBase(bool value) const { qgraphicsdropshadoweffect_eventfilter_isbase = value; }
    void setQGraphicsDropShadowEffect_TimerEvent_IsBase(bool value) const { qgraphicsdropshadoweffect_timerevent_isbase = value; }
    void setQGraphicsDropShadowEffect_ChildEvent_IsBase(bool value) const { qgraphicsdropshadoweffect_childevent_isbase = value; }
    void setQGraphicsDropShadowEffect_CustomEvent_IsBase(bool value) const { qgraphicsdropshadoweffect_customevent_isbase = value; }
    void setQGraphicsDropShadowEffect_ConnectNotify_IsBase(bool value) const { qgraphicsdropshadoweffect_connectnotify_isbase = value; }
    void setQGraphicsDropShadowEffect_DisconnectNotify_IsBase(bool value) const { qgraphicsdropshadoweffect_disconnectnotify_isbase = value; }
    void setQGraphicsDropShadowEffect_UpdateBoundingRect_IsBase(bool value) const { qgraphicsdropshadoweffect_updateboundingrect_isbase = value; }
    void setQGraphicsDropShadowEffect_SourceIsPixmap_IsBase(bool value) const { qgraphicsdropshadoweffect_sourceispixmap_isbase = value; }
    void setQGraphicsDropShadowEffect_SourceBoundingRect_IsBase(bool value) const { qgraphicsdropshadoweffect_sourceboundingrect_isbase = value; }
    void setQGraphicsDropShadowEffect_DrawSource_IsBase(bool value) const { qgraphicsdropshadoweffect_drawsource_isbase = value; }
    void setQGraphicsDropShadowEffect_SourcePixmap_IsBase(bool value) const { qgraphicsdropshadoweffect_sourcepixmap_isbase = value; }
    void setQGraphicsDropShadowEffect_Sender_IsBase(bool value) const { qgraphicsdropshadoweffect_sender_isbase = value; }
    void setQGraphicsDropShadowEffect_SenderSignalIndex_IsBase(bool value) const { qgraphicsdropshadoweffect_sendersignalindex_isbase = value; }
    void setQGraphicsDropShadowEffect_Receivers_IsBase(bool value) const { qgraphicsdropshadoweffect_receivers_isbase = value; }
    void setQGraphicsDropShadowEffect_IsSignalConnected_IsBase(bool value) const { qgraphicsdropshadoweffect_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgraphicsdropshadoweffect_metacall_isbase) {
            qgraphicsdropshadoweffect_metacall_isbase = false;
            return QGraphicsDropShadowEffect::qt_metacall(param1, param2, param3);
        } else if (qgraphicsdropshadoweffect_metacall_callback != nullptr) {
            return qgraphicsdropshadoweffect_metacall_callback(this, param1, param2, param3);
        } else {
            return QGraphicsDropShadowEffect::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRectFor(const QRectF& rect) const override {
        if (qgraphicsdropshadoweffect_boundingrectfor_isbase) {
            qgraphicsdropshadoweffect_boundingrectfor_isbase = false;
            return QGraphicsDropShadowEffect::boundingRectFor(rect);
        } else if (qgraphicsdropshadoweffect_boundingrectfor_callback != nullptr) {
            return qgraphicsdropshadoweffect_boundingrectfor_callback(this, rect);
        } else {
            return QGraphicsDropShadowEffect::boundingRectFor(rect);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void draw(QPainter* painter) override {
        if (qgraphicsdropshadoweffect_draw_isbase) {
            qgraphicsdropshadoweffect_draw_isbase = false;
            QGraphicsDropShadowEffect::draw(painter);
        } else if (qgraphicsdropshadoweffect_draw_callback != nullptr) {
            qgraphicsdropshadoweffect_draw_callback(this, painter);
        } else {
            QGraphicsDropShadowEffect::draw(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void sourceChanged(QGraphicsEffect::ChangeFlags flags) override {
        if (qgraphicsdropshadoweffect_sourcechanged_isbase) {
            qgraphicsdropshadoweffect_sourcechanged_isbase = false;
            QGraphicsDropShadowEffect::sourceChanged(flags);
        } else if (qgraphicsdropshadoweffect_sourcechanged_callback != nullptr) {
            qgraphicsdropshadoweffect_sourcechanged_callback(this, flags);
        } else {
            QGraphicsDropShadowEffect::sourceChanged(flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgraphicsdropshadoweffect_event_isbase) {
            qgraphicsdropshadoweffect_event_isbase = false;
            return QGraphicsDropShadowEffect::event(event);
        } else if (qgraphicsdropshadoweffect_event_callback != nullptr) {
            return qgraphicsdropshadoweffect_event_callback(this, event);
        } else {
            return QGraphicsDropShadowEffect::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgraphicsdropshadoweffect_eventfilter_isbase) {
            qgraphicsdropshadoweffect_eventfilter_isbase = false;
            return QGraphicsDropShadowEffect::eventFilter(watched, event);
        } else if (qgraphicsdropshadoweffect_eventfilter_callback != nullptr) {
            return qgraphicsdropshadoweffect_eventfilter_callback(this, watched, event);
        } else {
            return QGraphicsDropShadowEffect::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgraphicsdropshadoweffect_timerevent_isbase) {
            qgraphicsdropshadoweffect_timerevent_isbase = false;
            QGraphicsDropShadowEffect::timerEvent(event);
        } else if (qgraphicsdropshadoweffect_timerevent_callback != nullptr) {
            qgraphicsdropshadoweffect_timerevent_callback(this, event);
        } else {
            QGraphicsDropShadowEffect::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgraphicsdropshadoweffect_childevent_isbase) {
            qgraphicsdropshadoweffect_childevent_isbase = false;
            QGraphicsDropShadowEffect::childEvent(event);
        } else if (qgraphicsdropshadoweffect_childevent_callback != nullptr) {
            qgraphicsdropshadoweffect_childevent_callback(this, event);
        } else {
            QGraphicsDropShadowEffect::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgraphicsdropshadoweffect_customevent_isbase) {
            qgraphicsdropshadoweffect_customevent_isbase = false;
            QGraphicsDropShadowEffect::customEvent(event);
        } else if (qgraphicsdropshadoweffect_customevent_callback != nullptr) {
            qgraphicsdropshadoweffect_customevent_callback(this, event);
        } else {
            QGraphicsDropShadowEffect::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgraphicsdropshadoweffect_connectnotify_isbase) {
            qgraphicsdropshadoweffect_connectnotify_isbase = false;
            QGraphicsDropShadowEffect::connectNotify(signal);
        } else if (qgraphicsdropshadoweffect_connectnotify_callback != nullptr) {
            qgraphicsdropshadoweffect_connectnotify_callback(this, signal);
        } else {
            QGraphicsDropShadowEffect::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgraphicsdropshadoweffect_disconnectnotify_isbase) {
            qgraphicsdropshadoweffect_disconnectnotify_isbase = false;
            QGraphicsDropShadowEffect::disconnectNotify(signal);
        } else if (qgraphicsdropshadoweffect_disconnectnotify_callback != nullptr) {
            qgraphicsdropshadoweffect_disconnectnotify_callback(this, signal);
        } else {
            QGraphicsDropShadowEffect::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateBoundingRect() {
        if (qgraphicsdropshadoweffect_updateboundingrect_isbase) {
            qgraphicsdropshadoweffect_updateboundingrect_isbase = false;
            QGraphicsDropShadowEffect::updateBoundingRect();
        } else if (qgraphicsdropshadoweffect_updateboundingrect_callback != nullptr) {
            qgraphicsdropshadoweffect_updateboundingrect_callback();
        } else {
            QGraphicsDropShadowEffect::updateBoundingRect();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool sourceIsPixmap() const {
        if (qgraphicsdropshadoweffect_sourceispixmap_isbase) {
            qgraphicsdropshadoweffect_sourceispixmap_isbase = false;
            return QGraphicsDropShadowEffect::sourceIsPixmap();
        } else if (qgraphicsdropshadoweffect_sourceispixmap_callback != nullptr) {
            return qgraphicsdropshadoweffect_sourceispixmap_callback();
        } else {
            return QGraphicsDropShadowEffect::sourceIsPixmap();
        }
    }

    // Virtual method for C ABI access and custom callback
    QRectF sourceBoundingRect() const {
        if (qgraphicsdropshadoweffect_sourceboundingrect_isbase) {
            qgraphicsdropshadoweffect_sourceboundingrect_isbase = false;
            return QGraphicsDropShadowEffect::sourceBoundingRect();
        } else if (qgraphicsdropshadoweffect_sourceboundingrect_callback != nullptr) {
            return qgraphicsdropshadoweffect_sourceboundingrect_callback();
        } else {
            return QGraphicsDropShadowEffect::sourceBoundingRect();
        }
    }

    // Virtual method for C ABI access and custom callback
    void drawSource(QPainter* painter) {
        if (qgraphicsdropshadoweffect_drawsource_isbase) {
            qgraphicsdropshadoweffect_drawsource_isbase = false;
            QGraphicsDropShadowEffect::drawSource(painter);
        } else if (qgraphicsdropshadoweffect_drawsource_callback != nullptr) {
            qgraphicsdropshadoweffect_drawsource_callback(this, painter);
        } else {
            QGraphicsDropShadowEffect::drawSource(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    QPixmap sourcePixmap() const {
        if (qgraphicsdropshadoweffect_sourcepixmap_isbase) {
            qgraphicsdropshadoweffect_sourcepixmap_isbase = false;
            return QGraphicsDropShadowEffect::sourcePixmap();
        } else if (qgraphicsdropshadoweffect_sourcepixmap_callback != nullptr) {
            return qgraphicsdropshadoweffect_sourcepixmap_callback();
        } else {
            return QGraphicsDropShadowEffect::sourcePixmap();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qgraphicsdropshadoweffect_sender_isbase) {
            qgraphicsdropshadoweffect_sender_isbase = false;
            return QGraphicsDropShadowEffect::sender();
        } else if (qgraphicsdropshadoweffect_sender_callback != nullptr) {
            return qgraphicsdropshadoweffect_sender_callback();
        } else {
            return QGraphicsDropShadowEffect::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qgraphicsdropshadoweffect_sendersignalindex_isbase) {
            qgraphicsdropshadoweffect_sendersignalindex_isbase = false;
            return QGraphicsDropShadowEffect::senderSignalIndex();
        } else if (qgraphicsdropshadoweffect_sendersignalindex_callback != nullptr) {
            return qgraphicsdropshadoweffect_sendersignalindex_callback();
        } else {
            return QGraphicsDropShadowEffect::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qgraphicsdropshadoweffect_receivers_isbase) {
            qgraphicsdropshadoweffect_receivers_isbase = false;
            return QGraphicsDropShadowEffect::receivers(signal);
        } else if (qgraphicsdropshadoweffect_receivers_callback != nullptr) {
            return qgraphicsdropshadoweffect_receivers_callback(this, signal);
        } else {
            return QGraphicsDropShadowEffect::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qgraphicsdropshadoweffect_issignalconnected_isbase) {
            qgraphicsdropshadoweffect_issignalconnected_isbase = false;
            return QGraphicsDropShadowEffect::isSignalConnected(signal);
        } else if (qgraphicsdropshadoweffect_issignalconnected_callback != nullptr) {
            return qgraphicsdropshadoweffect_issignalconnected_callback(this, signal);
        } else {
            return QGraphicsDropShadowEffect::isSignalConnected(signal);
        }
    }
};

// This class is a subclass of QGraphicsOpacityEffect so that we can call protected methods
class VirtualQGraphicsOpacityEffect : public QGraphicsOpacityEffect {

  public:
    // Virtual class public types (including callbacks)
    using QGraphicsOpacityEffect_Metacall_Callback = int (*)(QGraphicsOpacityEffect*, QMetaObject::Call, int, void**);
    using QGraphicsOpacityEffect_Draw_Callback = void (*)(QGraphicsOpacityEffect*, QPainter*);
    using QGraphicsOpacityEffect_BoundingRectFor_Callback = QRectF (*)(const QGraphicsOpacityEffect*, const QRectF&);
    using QGraphicsOpacityEffect_SourceChanged_Callback = void (*)(QGraphicsOpacityEffect*, QGraphicsEffect::ChangeFlags);
    using QGraphicsOpacityEffect_Event_Callback = bool (*)(QGraphicsOpacityEffect*, QEvent*);
    using QGraphicsOpacityEffect_EventFilter_Callback = bool (*)(QGraphicsOpacityEffect*, QObject*, QEvent*);
    using QGraphicsOpacityEffect_TimerEvent_Callback = void (*)(QGraphicsOpacityEffect*, QTimerEvent*);
    using QGraphicsOpacityEffect_ChildEvent_Callback = void (*)(QGraphicsOpacityEffect*, QChildEvent*);
    using QGraphicsOpacityEffect_CustomEvent_Callback = void (*)(QGraphicsOpacityEffect*, QEvent*);
    using QGraphicsOpacityEffect_ConnectNotify_Callback = void (*)(QGraphicsOpacityEffect*, const QMetaMethod&);
    using QGraphicsOpacityEffect_DisconnectNotify_Callback = void (*)(QGraphicsOpacityEffect*, const QMetaMethod&);
    using QGraphicsOpacityEffect_UpdateBoundingRect_Callback = void (*)();
    using QGraphicsOpacityEffect_SourceIsPixmap_Callback = bool (*)();
    using QGraphicsOpacityEffect_SourceBoundingRect_Callback = QRectF (*)();
    using QGraphicsOpacityEffect_DrawSource_Callback = void (*)(QGraphicsOpacityEffect*, QPainter*);
    using QGraphicsOpacityEffect_SourcePixmap_Callback = QPixmap (*)();
    using QGraphicsOpacityEffect_Sender_Callback = QObject* (*)();
    using QGraphicsOpacityEffect_SenderSignalIndex_Callback = int (*)();
    using QGraphicsOpacityEffect_Receivers_Callback = int (*)(const QGraphicsOpacityEffect*, const char*);
    using QGraphicsOpacityEffect_IsSignalConnected_Callback = bool (*)(const QGraphicsOpacityEffect*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QGraphicsOpacityEffect_Metacall_Callback qgraphicsopacityeffect_metacall_callback = nullptr;
    QGraphicsOpacityEffect_Draw_Callback qgraphicsopacityeffect_draw_callback = nullptr;
    QGraphicsOpacityEffect_BoundingRectFor_Callback qgraphicsopacityeffect_boundingrectfor_callback = nullptr;
    QGraphicsOpacityEffect_SourceChanged_Callback qgraphicsopacityeffect_sourcechanged_callback = nullptr;
    QGraphicsOpacityEffect_Event_Callback qgraphicsopacityeffect_event_callback = nullptr;
    QGraphicsOpacityEffect_EventFilter_Callback qgraphicsopacityeffect_eventfilter_callback = nullptr;
    QGraphicsOpacityEffect_TimerEvent_Callback qgraphicsopacityeffect_timerevent_callback = nullptr;
    QGraphicsOpacityEffect_ChildEvent_Callback qgraphicsopacityeffect_childevent_callback = nullptr;
    QGraphicsOpacityEffect_CustomEvent_Callback qgraphicsopacityeffect_customevent_callback = nullptr;
    QGraphicsOpacityEffect_ConnectNotify_Callback qgraphicsopacityeffect_connectnotify_callback = nullptr;
    QGraphicsOpacityEffect_DisconnectNotify_Callback qgraphicsopacityeffect_disconnectnotify_callback = nullptr;
    QGraphicsOpacityEffect_UpdateBoundingRect_Callback qgraphicsopacityeffect_updateboundingrect_callback = nullptr;
    QGraphicsOpacityEffect_SourceIsPixmap_Callback qgraphicsopacityeffect_sourceispixmap_callback = nullptr;
    QGraphicsOpacityEffect_SourceBoundingRect_Callback qgraphicsopacityeffect_sourceboundingrect_callback = nullptr;
    QGraphicsOpacityEffect_DrawSource_Callback qgraphicsopacityeffect_drawsource_callback = nullptr;
    QGraphicsOpacityEffect_SourcePixmap_Callback qgraphicsopacityeffect_sourcepixmap_callback = nullptr;
    QGraphicsOpacityEffect_Sender_Callback qgraphicsopacityeffect_sender_callback = nullptr;
    QGraphicsOpacityEffect_SenderSignalIndex_Callback qgraphicsopacityeffect_sendersignalindex_callback = nullptr;
    QGraphicsOpacityEffect_Receivers_Callback qgraphicsopacityeffect_receivers_callback = nullptr;
    QGraphicsOpacityEffect_IsSignalConnected_Callback qgraphicsopacityeffect_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicsopacityeffect_metacall_isbase = false;
    mutable bool qgraphicsopacityeffect_draw_isbase = false;
    mutable bool qgraphicsopacityeffect_boundingrectfor_isbase = false;
    mutable bool qgraphicsopacityeffect_sourcechanged_isbase = false;
    mutable bool qgraphicsopacityeffect_event_isbase = false;
    mutable bool qgraphicsopacityeffect_eventfilter_isbase = false;
    mutable bool qgraphicsopacityeffect_timerevent_isbase = false;
    mutable bool qgraphicsopacityeffect_childevent_isbase = false;
    mutable bool qgraphicsopacityeffect_customevent_isbase = false;
    mutable bool qgraphicsopacityeffect_connectnotify_isbase = false;
    mutable bool qgraphicsopacityeffect_disconnectnotify_isbase = false;
    mutable bool qgraphicsopacityeffect_updateboundingrect_isbase = false;
    mutable bool qgraphicsopacityeffect_sourceispixmap_isbase = false;
    mutable bool qgraphicsopacityeffect_sourceboundingrect_isbase = false;
    mutable bool qgraphicsopacityeffect_drawsource_isbase = false;
    mutable bool qgraphicsopacityeffect_sourcepixmap_isbase = false;
    mutable bool qgraphicsopacityeffect_sender_isbase = false;
    mutable bool qgraphicsopacityeffect_sendersignalindex_isbase = false;
    mutable bool qgraphicsopacityeffect_receivers_isbase = false;
    mutable bool qgraphicsopacityeffect_issignalconnected_isbase = false;

  public:
    VirtualQGraphicsOpacityEffect() : QGraphicsOpacityEffect(){};
    VirtualQGraphicsOpacityEffect(QObject* parent) : QGraphicsOpacityEffect(parent){};

    ~VirtualQGraphicsOpacityEffect() {
        qgraphicsopacityeffect_metacall_callback = nullptr;
        qgraphicsopacityeffect_draw_callback = nullptr;
        qgraphicsopacityeffect_boundingrectfor_callback = nullptr;
        qgraphicsopacityeffect_sourcechanged_callback = nullptr;
        qgraphicsopacityeffect_event_callback = nullptr;
        qgraphicsopacityeffect_eventfilter_callback = nullptr;
        qgraphicsopacityeffect_timerevent_callback = nullptr;
        qgraphicsopacityeffect_childevent_callback = nullptr;
        qgraphicsopacityeffect_customevent_callback = nullptr;
        qgraphicsopacityeffect_connectnotify_callback = nullptr;
        qgraphicsopacityeffect_disconnectnotify_callback = nullptr;
        qgraphicsopacityeffect_updateboundingrect_callback = nullptr;
        qgraphicsopacityeffect_sourceispixmap_callback = nullptr;
        qgraphicsopacityeffect_sourceboundingrect_callback = nullptr;
        qgraphicsopacityeffect_drawsource_callback = nullptr;
        qgraphicsopacityeffect_sourcepixmap_callback = nullptr;
        qgraphicsopacityeffect_sender_callback = nullptr;
        qgraphicsopacityeffect_sendersignalindex_callback = nullptr;
        qgraphicsopacityeffect_receivers_callback = nullptr;
        qgraphicsopacityeffect_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQGraphicsOpacityEffect_Metacall_Callback(QGraphicsOpacityEffect_Metacall_Callback cb) { qgraphicsopacityeffect_metacall_callback = cb; }
    void setQGraphicsOpacityEffect_Draw_Callback(QGraphicsOpacityEffect_Draw_Callback cb) { qgraphicsopacityeffect_draw_callback = cb; }
    void setQGraphicsOpacityEffect_BoundingRectFor_Callback(QGraphicsOpacityEffect_BoundingRectFor_Callback cb) { qgraphicsopacityeffect_boundingrectfor_callback = cb; }
    void setQGraphicsOpacityEffect_SourceChanged_Callback(QGraphicsOpacityEffect_SourceChanged_Callback cb) { qgraphicsopacityeffect_sourcechanged_callback = cb; }
    void setQGraphicsOpacityEffect_Event_Callback(QGraphicsOpacityEffect_Event_Callback cb) { qgraphicsopacityeffect_event_callback = cb; }
    void setQGraphicsOpacityEffect_EventFilter_Callback(QGraphicsOpacityEffect_EventFilter_Callback cb) { qgraphicsopacityeffect_eventfilter_callback = cb; }
    void setQGraphicsOpacityEffect_TimerEvent_Callback(QGraphicsOpacityEffect_TimerEvent_Callback cb) { qgraphicsopacityeffect_timerevent_callback = cb; }
    void setQGraphicsOpacityEffect_ChildEvent_Callback(QGraphicsOpacityEffect_ChildEvent_Callback cb) { qgraphicsopacityeffect_childevent_callback = cb; }
    void setQGraphicsOpacityEffect_CustomEvent_Callback(QGraphicsOpacityEffect_CustomEvent_Callback cb) { qgraphicsopacityeffect_customevent_callback = cb; }
    void setQGraphicsOpacityEffect_ConnectNotify_Callback(QGraphicsOpacityEffect_ConnectNotify_Callback cb) { qgraphicsopacityeffect_connectnotify_callback = cb; }
    void setQGraphicsOpacityEffect_DisconnectNotify_Callback(QGraphicsOpacityEffect_DisconnectNotify_Callback cb) { qgraphicsopacityeffect_disconnectnotify_callback = cb; }
    void setQGraphicsOpacityEffect_UpdateBoundingRect_Callback(QGraphicsOpacityEffect_UpdateBoundingRect_Callback cb) { qgraphicsopacityeffect_updateboundingrect_callback = cb; }
    void setQGraphicsOpacityEffect_SourceIsPixmap_Callback(QGraphicsOpacityEffect_SourceIsPixmap_Callback cb) { qgraphicsopacityeffect_sourceispixmap_callback = cb; }
    void setQGraphicsOpacityEffect_SourceBoundingRect_Callback(QGraphicsOpacityEffect_SourceBoundingRect_Callback cb) { qgraphicsopacityeffect_sourceboundingrect_callback = cb; }
    void setQGraphicsOpacityEffect_DrawSource_Callback(QGraphicsOpacityEffect_DrawSource_Callback cb) { qgraphicsopacityeffect_drawsource_callback = cb; }
    void setQGraphicsOpacityEffect_SourcePixmap_Callback(QGraphicsOpacityEffect_SourcePixmap_Callback cb) { qgraphicsopacityeffect_sourcepixmap_callback = cb; }
    void setQGraphicsOpacityEffect_Sender_Callback(QGraphicsOpacityEffect_Sender_Callback cb) { qgraphicsopacityeffect_sender_callback = cb; }
    void setQGraphicsOpacityEffect_SenderSignalIndex_Callback(QGraphicsOpacityEffect_SenderSignalIndex_Callback cb) { qgraphicsopacityeffect_sendersignalindex_callback = cb; }
    void setQGraphicsOpacityEffect_Receivers_Callback(QGraphicsOpacityEffect_Receivers_Callback cb) { qgraphicsopacityeffect_receivers_callback = cb; }
    void setQGraphicsOpacityEffect_IsSignalConnected_Callback(QGraphicsOpacityEffect_IsSignalConnected_Callback cb) { qgraphicsopacityeffect_issignalconnected_callback = cb; }

    // Base flag setters
    void setQGraphicsOpacityEffect_Metacall_IsBase(bool value) const { qgraphicsopacityeffect_metacall_isbase = value; }
    void setQGraphicsOpacityEffect_Draw_IsBase(bool value) const { qgraphicsopacityeffect_draw_isbase = value; }
    void setQGraphicsOpacityEffect_BoundingRectFor_IsBase(bool value) const { qgraphicsopacityeffect_boundingrectfor_isbase = value; }
    void setQGraphicsOpacityEffect_SourceChanged_IsBase(bool value) const { qgraphicsopacityeffect_sourcechanged_isbase = value; }
    void setQGraphicsOpacityEffect_Event_IsBase(bool value) const { qgraphicsopacityeffect_event_isbase = value; }
    void setQGraphicsOpacityEffect_EventFilter_IsBase(bool value) const { qgraphicsopacityeffect_eventfilter_isbase = value; }
    void setQGraphicsOpacityEffect_TimerEvent_IsBase(bool value) const { qgraphicsopacityeffect_timerevent_isbase = value; }
    void setQGraphicsOpacityEffect_ChildEvent_IsBase(bool value) const { qgraphicsopacityeffect_childevent_isbase = value; }
    void setQGraphicsOpacityEffect_CustomEvent_IsBase(bool value) const { qgraphicsopacityeffect_customevent_isbase = value; }
    void setQGraphicsOpacityEffect_ConnectNotify_IsBase(bool value) const { qgraphicsopacityeffect_connectnotify_isbase = value; }
    void setQGraphicsOpacityEffect_DisconnectNotify_IsBase(bool value) const { qgraphicsopacityeffect_disconnectnotify_isbase = value; }
    void setQGraphicsOpacityEffect_UpdateBoundingRect_IsBase(bool value) const { qgraphicsopacityeffect_updateboundingrect_isbase = value; }
    void setQGraphicsOpacityEffect_SourceIsPixmap_IsBase(bool value) const { qgraphicsopacityeffect_sourceispixmap_isbase = value; }
    void setQGraphicsOpacityEffect_SourceBoundingRect_IsBase(bool value) const { qgraphicsopacityeffect_sourceboundingrect_isbase = value; }
    void setQGraphicsOpacityEffect_DrawSource_IsBase(bool value) const { qgraphicsopacityeffect_drawsource_isbase = value; }
    void setQGraphicsOpacityEffect_SourcePixmap_IsBase(bool value) const { qgraphicsopacityeffect_sourcepixmap_isbase = value; }
    void setQGraphicsOpacityEffect_Sender_IsBase(bool value) const { qgraphicsopacityeffect_sender_isbase = value; }
    void setQGraphicsOpacityEffect_SenderSignalIndex_IsBase(bool value) const { qgraphicsopacityeffect_sendersignalindex_isbase = value; }
    void setQGraphicsOpacityEffect_Receivers_IsBase(bool value) const { qgraphicsopacityeffect_receivers_isbase = value; }
    void setQGraphicsOpacityEffect_IsSignalConnected_IsBase(bool value) const { qgraphicsopacityeffect_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgraphicsopacityeffect_metacall_isbase) {
            qgraphicsopacityeffect_metacall_isbase = false;
            return QGraphicsOpacityEffect::qt_metacall(param1, param2, param3);
        } else if (qgraphicsopacityeffect_metacall_callback != nullptr) {
            return qgraphicsopacityeffect_metacall_callback(this, param1, param2, param3);
        } else {
            return QGraphicsOpacityEffect::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void draw(QPainter* painter) override {
        if (qgraphicsopacityeffect_draw_isbase) {
            qgraphicsopacityeffect_draw_isbase = false;
            QGraphicsOpacityEffect::draw(painter);
        } else if (qgraphicsopacityeffect_draw_callback != nullptr) {
            qgraphicsopacityeffect_draw_callback(this, painter);
        } else {
            QGraphicsOpacityEffect::draw(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRectFor(const QRectF& sourceRect) const override {
        if (qgraphicsopacityeffect_boundingrectfor_isbase) {
            qgraphicsopacityeffect_boundingrectfor_isbase = false;
            return QGraphicsOpacityEffect::boundingRectFor(sourceRect);
        } else if (qgraphicsopacityeffect_boundingrectfor_callback != nullptr) {
            return qgraphicsopacityeffect_boundingrectfor_callback(this, sourceRect);
        } else {
            return QGraphicsOpacityEffect::boundingRectFor(sourceRect);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void sourceChanged(QGraphicsEffect::ChangeFlags flags) override {
        if (qgraphicsopacityeffect_sourcechanged_isbase) {
            qgraphicsopacityeffect_sourcechanged_isbase = false;
            QGraphicsOpacityEffect::sourceChanged(flags);
        } else if (qgraphicsopacityeffect_sourcechanged_callback != nullptr) {
            qgraphicsopacityeffect_sourcechanged_callback(this, flags);
        } else {
            QGraphicsOpacityEffect::sourceChanged(flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgraphicsopacityeffect_event_isbase) {
            qgraphicsopacityeffect_event_isbase = false;
            return QGraphicsOpacityEffect::event(event);
        } else if (qgraphicsopacityeffect_event_callback != nullptr) {
            return qgraphicsopacityeffect_event_callback(this, event);
        } else {
            return QGraphicsOpacityEffect::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgraphicsopacityeffect_eventfilter_isbase) {
            qgraphicsopacityeffect_eventfilter_isbase = false;
            return QGraphicsOpacityEffect::eventFilter(watched, event);
        } else if (qgraphicsopacityeffect_eventfilter_callback != nullptr) {
            return qgraphicsopacityeffect_eventfilter_callback(this, watched, event);
        } else {
            return QGraphicsOpacityEffect::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgraphicsopacityeffect_timerevent_isbase) {
            qgraphicsopacityeffect_timerevent_isbase = false;
            QGraphicsOpacityEffect::timerEvent(event);
        } else if (qgraphicsopacityeffect_timerevent_callback != nullptr) {
            qgraphicsopacityeffect_timerevent_callback(this, event);
        } else {
            QGraphicsOpacityEffect::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgraphicsopacityeffect_childevent_isbase) {
            qgraphicsopacityeffect_childevent_isbase = false;
            QGraphicsOpacityEffect::childEvent(event);
        } else if (qgraphicsopacityeffect_childevent_callback != nullptr) {
            qgraphicsopacityeffect_childevent_callback(this, event);
        } else {
            QGraphicsOpacityEffect::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgraphicsopacityeffect_customevent_isbase) {
            qgraphicsopacityeffect_customevent_isbase = false;
            QGraphicsOpacityEffect::customEvent(event);
        } else if (qgraphicsopacityeffect_customevent_callback != nullptr) {
            qgraphicsopacityeffect_customevent_callback(this, event);
        } else {
            QGraphicsOpacityEffect::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgraphicsopacityeffect_connectnotify_isbase) {
            qgraphicsopacityeffect_connectnotify_isbase = false;
            QGraphicsOpacityEffect::connectNotify(signal);
        } else if (qgraphicsopacityeffect_connectnotify_callback != nullptr) {
            qgraphicsopacityeffect_connectnotify_callback(this, signal);
        } else {
            QGraphicsOpacityEffect::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgraphicsopacityeffect_disconnectnotify_isbase) {
            qgraphicsopacityeffect_disconnectnotify_isbase = false;
            QGraphicsOpacityEffect::disconnectNotify(signal);
        } else if (qgraphicsopacityeffect_disconnectnotify_callback != nullptr) {
            qgraphicsopacityeffect_disconnectnotify_callback(this, signal);
        } else {
            QGraphicsOpacityEffect::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateBoundingRect() {
        if (qgraphicsopacityeffect_updateboundingrect_isbase) {
            qgraphicsopacityeffect_updateboundingrect_isbase = false;
            QGraphicsOpacityEffect::updateBoundingRect();
        } else if (qgraphicsopacityeffect_updateboundingrect_callback != nullptr) {
            qgraphicsopacityeffect_updateboundingrect_callback();
        } else {
            QGraphicsOpacityEffect::updateBoundingRect();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool sourceIsPixmap() const {
        if (qgraphicsopacityeffect_sourceispixmap_isbase) {
            qgraphicsopacityeffect_sourceispixmap_isbase = false;
            return QGraphicsOpacityEffect::sourceIsPixmap();
        } else if (qgraphicsopacityeffect_sourceispixmap_callback != nullptr) {
            return qgraphicsopacityeffect_sourceispixmap_callback();
        } else {
            return QGraphicsOpacityEffect::sourceIsPixmap();
        }
    }

    // Virtual method for C ABI access and custom callback
    QRectF sourceBoundingRect() const {
        if (qgraphicsopacityeffect_sourceboundingrect_isbase) {
            qgraphicsopacityeffect_sourceboundingrect_isbase = false;
            return QGraphicsOpacityEffect::sourceBoundingRect();
        } else if (qgraphicsopacityeffect_sourceboundingrect_callback != nullptr) {
            return qgraphicsopacityeffect_sourceboundingrect_callback();
        } else {
            return QGraphicsOpacityEffect::sourceBoundingRect();
        }
    }

    // Virtual method for C ABI access and custom callback
    void drawSource(QPainter* painter) {
        if (qgraphicsopacityeffect_drawsource_isbase) {
            qgraphicsopacityeffect_drawsource_isbase = false;
            QGraphicsOpacityEffect::drawSource(painter);
        } else if (qgraphicsopacityeffect_drawsource_callback != nullptr) {
            qgraphicsopacityeffect_drawsource_callback(this, painter);
        } else {
            QGraphicsOpacityEffect::drawSource(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    QPixmap sourcePixmap() const {
        if (qgraphicsopacityeffect_sourcepixmap_isbase) {
            qgraphicsopacityeffect_sourcepixmap_isbase = false;
            return QGraphicsOpacityEffect::sourcePixmap();
        } else if (qgraphicsopacityeffect_sourcepixmap_callback != nullptr) {
            return qgraphicsopacityeffect_sourcepixmap_callback();
        } else {
            return QGraphicsOpacityEffect::sourcePixmap();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qgraphicsopacityeffect_sender_isbase) {
            qgraphicsopacityeffect_sender_isbase = false;
            return QGraphicsOpacityEffect::sender();
        } else if (qgraphicsopacityeffect_sender_callback != nullptr) {
            return qgraphicsopacityeffect_sender_callback();
        } else {
            return QGraphicsOpacityEffect::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qgraphicsopacityeffect_sendersignalindex_isbase) {
            qgraphicsopacityeffect_sendersignalindex_isbase = false;
            return QGraphicsOpacityEffect::senderSignalIndex();
        } else if (qgraphicsopacityeffect_sendersignalindex_callback != nullptr) {
            return qgraphicsopacityeffect_sendersignalindex_callback();
        } else {
            return QGraphicsOpacityEffect::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qgraphicsopacityeffect_receivers_isbase) {
            qgraphicsopacityeffect_receivers_isbase = false;
            return QGraphicsOpacityEffect::receivers(signal);
        } else if (qgraphicsopacityeffect_receivers_callback != nullptr) {
            return qgraphicsopacityeffect_receivers_callback(this, signal);
        } else {
            return QGraphicsOpacityEffect::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qgraphicsopacityeffect_issignalconnected_isbase) {
            qgraphicsopacityeffect_issignalconnected_isbase = false;
            return QGraphicsOpacityEffect::isSignalConnected(signal);
        } else if (qgraphicsopacityeffect_issignalconnected_callback != nullptr) {
            return qgraphicsopacityeffect_issignalconnected_callback(this, signal);
        } else {
            return QGraphicsOpacityEffect::isSignalConnected(signal);
        }
    }
};

#endif
