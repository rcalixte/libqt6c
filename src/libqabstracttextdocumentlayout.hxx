#pragma once
#ifndef SRCC_LIBVIRTUALQABSTRACTTEXTDOCUMENTLAYOUT_H
#define SRCC_LIBVIRTUALQABSTRACTTEXTDOCUMENTLAYOUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QAbstractTextDocumentLayout so that we can call protected methods
class VirtualQAbstractTextDocumentLayout : public QAbstractTextDocumentLayout {

  public:
    // Virtual class public types (including callbacks)
    using QAbstractTextDocumentLayout_Metacall_Callback = int (*)(QAbstractTextDocumentLayout*, QMetaObject::Call, int, void**);
    using QAbstractTextDocumentLayout_Draw_Callback = void (*)(QAbstractTextDocumentLayout*, QPainter*, const QAbstractTextDocumentLayout::PaintContext&);
    using QAbstractTextDocumentLayout_HitTest_Callback = int (*)(const QAbstractTextDocumentLayout*, const QPointF&, Qt::HitTestAccuracy);
    using QAbstractTextDocumentLayout_PageCount_Callback = int (*)();
    using QAbstractTextDocumentLayout_DocumentSize_Callback = QSizeF (*)();
    using QAbstractTextDocumentLayout_FrameBoundingRect_Callback = QRectF (*)(const QAbstractTextDocumentLayout*, QTextFrame*);
    using QAbstractTextDocumentLayout_BlockBoundingRect_Callback = QRectF (*)(const QAbstractTextDocumentLayout*, const QTextBlock&);
    using QAbstractTextDocumentLayout_DocumentChanged_Callback = void (*)(QAbstractTextDocumentLayout*, int, int, int);
    using QAbstractTextDocumentLayout_ResizeInlineObject_Callback = void (*)(QAbstractTextDocumentLayout*, QTextInlineObject, int, const QTextFormat&);
    using QAbstractTextDocumentLayout_PositionInlineObject_Callback = void (*)(QAbstractTextDocumentLayout*, QTextInlineObject, int, const QTextFormat&);
    using QAbstractTextDocumentLayout_DrawInlineObject_Callback = void (*)(QAbstractTextDocumentLayout*, QPainter*, const QRectF&, QTextInlineObject, int, const QTextFormat&);
    using QAbstractTextDocumentLayout_Event_Callback = bool (*)(QAbstractTextDocumentLayout*, QEvent*);
    using QAbstractTextDocumentLayout_EventFilter_Callback = bool (*)(QAbstractTextDocumentLayout*, QObject*, QEvent*);
    using QAbstractTextDocumentLayout_TimerEvent_Callback = void (*)(QAbstractTextDocumentLayout*, QTimerEvent*);
    using QAbstractTextDocumentLayout_ChildEvent_Callback = void (*)(QAbstractTextDocumentLayout*, QChildEvent*);
    using QAbstractTextDocumentLayout_CustomEvent_Callback = void (*)(QAbstractTextDocumentLayout*, QEvent*);
    using QAbstractTextDocumentLayout_ConnectNotify_Callback = void (*)(QAbstractTextDocumentLayout*, const QMetaMethod&);
    using QAbstractTextDocumentLayout_DisconnectNotify_Callback = void (*)(QAbstractTextDocumentLayout*, const QMetaMethod&);
    using QAbstractTextDocumentLayout_FormatIndex_Callback = int (*)(QAbstractTextDocumentLayout*, int);
    using QAbstractTextDocumentLayout_Format_Callback = QTextCharFormat (*)(QAbstractTextDocumentLayout*, int);
    using QAbstractTextDocumentLayout_Sender_Callback = QObject* (*)();
    using QAbstractTextDocumentLayout_SenderSignalIndex_Callback = int (*)();
    using QAbstractTextDocumentLayout_Receivers_Callback = int (*)(const QAbstractTextDocumentLayout*, const char*);
    using QAbstractTextDocumentLayout_IsSignalConnected_Callback = bool (*)(const QAbstractTextDocumentLayout*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QAbstractTextDocumentLayout_Metacall_Callback qabstracttextdocumentlayout_metacall_callback = nullptr;
    QAbstractTextDocumentLayout_Draw_Callback qabstracttextdocumentlayout_draw_callback = nullptr;
    QAbstractTextDocumentLayout_HitTest_Callback qabstracttextdocumentlayout_hittest_callback = nullptr;
    QAbstractTextDocumentLayout_PageCount_Callback qabstracttextdocumentlayout_pagecount_callback = nullptr;
    QAbstractTextDocumentLayout_DocumentSize_Callback qabstracttextdocumentlayout_documentsize_callback = nullptr;
    QAbstractTextDocumentLayout_FrameBoundingRect_Callback qabstracttextdocumentlayout_frameboundingrect_callback = nullptr;
    QAbstractTextDocumentLayout_BlockBoundingRect_Callback qabstracttextdocumentlayout_blockboundingrect_callback = nullptr;
    QAbstractTextDocumentLayout_DocumentChanged_Callback qabstracttextdocumentlayout_documentchanged_callback = nullptr;
    QAbstractTextDocumentLayout_ResizeInlineObject_Callback qabstracttextdocumentlayout_resizeinlineobject_callback = nullptr;
    QAbstractTextDocumentLayout_PositionInlineObject_Callback qabstracttextdocumentlayout_positioninlineobject_callback = nullptr;
    QAbstractTextDocumentLayout_DrawInlineObject_Callback qabstracttextdocumentlayout_drawinlineobject_callback = nullptr;
    QAbstractTextDocumentLayout_Event_Callback qabstracttextdocumentlayout_event_callback = nullptr;
    QAbstractTextDocumentLayout_EventFilter_Callback qabstracttextdocumentlayout_eventfilter_callback = nullptr;
    QAbstractTextDocumentLayout_TimerEvent_Callback qabstracttextdocumentlayout_timerevent_callback = nullptr;
    QAbstractTextDocumentLayout_ChildEvent_Callback qabstracttextdocumentlayout_childevent_callback = nullptr;
    QAbstractTextDocumentLayout_CustomEvent_Callback qabstracttextdocumentlayout_customevent_callback = nullptr;
    QAbstractTextDocumentLayout_ConnectNotify_Callback qabstracttextdocumentlayout_connectnotify_callback = nullptr;
    QAbstractTextDocumentLayout_DisconnectNotify_Callback qabstracttextdocumentlayout_disconnectnotify_callback = nullptr;
    QAbstractTextDocumentLayout_FormatIndex_Callback qabstracttextdocumentlayout_formatindex_callback = nullptr;
    QAbstractTextDocumentLayout_Format_Callback qabstracttextdocumentlayout_format_callback = nullptr;
    QAbstractTextDocumentLayout_Sender_Callback qabstracttextdocumentlayout_sender_callback = nullptr;
    QAbstractTextDocumentLayout_SenderSignalIndex_Callback qabstracttextdocumentlayout_sendersignalindex_callback = nullptr;
    QAbstractTextDocumentLayout_Receivers_Callback qabstracttextdocumentlayout_receivers_callback = nullptr;
    QAbstractTextDocumentLayout_IsSignalConnected_Callback qabstracttextdocumentlayout_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qabstracttextdocumentlayout_metacall_isbase = false;
    mutable bool qabstracttextdocumentlayout_draw_isbase = false;
    mutable bool qabstracttextdocumentlayout_hittest_isbase = false;
    mutable bool qabstracttextdocumentlayout_pagecount_isbase = false;
    mutable bool qabstracttextdocumentlayout_documentsize_isbase = false;
    mutable bool qabstracttextdocumentlayout_frameboundingrect_isbase = false;
    mutable bool qabstracttextdocumentlayout_blockboundingrect_isbase = false;
    mutable bool qabstracttextdocumentlayout_documentchanged_isbase = false;
    mutable bool qabstracttextdocumentlayout_resizeinlineobject_isbase = false;
    mutable bool qabstracttextdocumentlayout_positioninlineobject_isbase = false;
    mutable bool qabstracttextdocumentlayout_drawinlineobject_isbase = false;
    mutable bool qabstracttextdocumentlayout_event_isbase = false;
    mutable bool qabstracttextdocumentlayout_eventfilter_isbase = false;
    mutable bool qabstracttextdocumentlayout_timerevent_isbase = false;
    mutable bool qabstracttextdocumentlayout_childevent_isbase = false;
    mutable bool qabstracttextdocumentlayout_customevent_isbase = false;
    mutable bool qabstracttextdocumentlayout_connectnotify_isbase = false;
    mutable bool qabstracttextdocumentlayout_disconnectnotify_isbase = false;
    mutable bool qabstracttextdocumentlayout_formatindex_isbase = false;
    mutable bool qabstracttextdocumentlayout_format_isbase = false;
    mutable bool qabstracttextdocumentlayout_sender_isbase = false;
    mutable bool qabstracttextdocumentlayout_sendersignalindex_isbase = false;
    mutable bool qabstracttextdocumentlayout_receivers_isbase = false;
    mutable bool qabstracttextdocumentlayout_issignalconnected_isbase = false;

  public:
    VirtualQAbstractTextDocumentLayout(QTextDocument* doc) : QAbstractTextDocumentLayout(doc){};

    ~VirtualQAbstractTextDocumentLayout() {
        qabstracttextdocumentlayout_metacall_callback = nullptr;
        qabstracttextdocumentlayout_draw_callback = nullptr;
        qabstracttextdocumentlayout_hittest_callback = nullptr;
        qabstracttextdocumentlayout_pagecount_callback = nullptr;
        qabstracttextdocumentlayout_documentsize_callback = nullptr;
        qabstracttextdocumentlayout_frameboundingrect_callback = nullptr;
        qabstracttextdocumentlayout_blockboundingrect_callback = nullptr;
        qabstracttextdocumentlayout_documentchanged_callback = nullptr;
        qabstracttextdocumentlayout_resizeinlineobject_callback = nullptr;
        qabstracttextdocumentlayout_positioninlineobject_callback = nullptr;
        qabstracttextdocumentlayout_drawinlineobject_callback = nullptr;
        qabstracttextdocumentlayout_event_callback = nullptr;
        qabstracttextdocumentlayout_eventfilter_callback = nullptr;
        qabstracttextdocumentlayout_timerevent_callback = nullptr;
        qabstracttextdocumentlayout_childevent_callback = nullptr;
        qabstracttextdocumentlayout_customevent_callback = nullptr;
        qabstracttextdocumentlayout_connectnotify_callback = nullptr;
        qabstracttextdocumentlayout_disconnectnotify_callback = nullptr;
        qabstracttextdocumentlayout_formatindex_callback = nullptr;
        qabstracttextdocumentlayout_format_callback = nullptr;
        qabstracttextdocumentlayout_sender_callback = nullptr;
        qabstracttextdocumentlayout_sendersignalindex_callback = nullptr;
        qabstracttextdocumentlayout_receivers_callback = nullptr;
        qabstracttextdocumentlayout_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQAbstractTextDocumentLayout_Metacall_Callback(QAbstractTextDocumentLayout_Metacall_Callback cb) { qabstracttextdocumentlayout_metacall_callback = cb; }
    void setQAbstractTextDocumentLayout_Draw_Callback(QAbstractTextDocumentLayout_Draw_Callback cb) { qabstracttextdocumentlayout_draw_callback = cb; }
    void setQAbstractTextDocumentLayout_HitTest_Callback(QAbstractTextDocumentLayout_HitTest_Callback cb) { qabstracttextdocumentlayout_hittest_callback = cb; }
    void setQAbstractTextDocumentLayout_PageCount_Callback(QAbstractTextDocumentLayout_PageCount_Callback cb) { qabstracttextdocumentlayout_pagecount_callback = cb; }
    void setQAbstractTextDocumentLayout_DocumentSize_Callback(QAbstractTextDocumentLayout_DocumentSize_Callback cb) { qabstracttextdocumentlayout_documentsize_callback = cb; }
    void setQAbstractTextDocumentLayout_FrameBoundingRect_Callback(QAbstractTextDocumentLayout_FrameBoundingRect_Callback cb) { qabstracttextdocumentlayout_frameboundingrect_callback = cb; }
    void setQAbstractTextDocumentLayout_BlockBoundingRect_Callback(QAbstractTextDocumentLayout_BlockBoundingRect_Callback cb) { qabstracttextdocumentlayout_blockboundingrect_callback = cb; }
    void setQAbstractTextDocumentLayout_DocumentChanged_Callback(QAbstractTextDocumentLayout_DocumentChanged_Callback cb) { qabstracttextdocumentlayout_documentchanged_callback = cb; }
    void setQAbstractTextDocumentLayout_ResizeInlineObject_Callback(QAbstractTextDocumentLayout_ResizeInlineObject_Callback cb) { qabstracttextdocumentlayout_resizeinlineobject_callback = cb; }
    void setQAbstractTextDocumentLayout_PositionInlineObject_Callback(QAbstractTextDocumentLayout_PositionInlineObject_Callback cb) { qabstracttextdocumentlayout_positioninlineobject_callback = cb; }
    void setQAbstractTextDocumentLayout_DrawInlineObject_Callback(QAbstractTextDocumentLayout_DrawInlineObject_Callback cb) { qabstracttextdocumentlayout_drawinlineobject_callback = cb; }
    void setQAbstractTextDocumentLayout_Event_Callback(QAbstractTextDocumentLayout_Event_Callback cb) { qabstracttextdocumentlayout_event_callback = cb; }
    void setQAbstractTextDocumentLayout_EventFilter_Callback(QAbstractTextDocumentLayout_EventFilter_Callback cb) { qabstracttextdocumentlayout_eventfilter_callback = cb; }
    void setQAbstractTextDocumentLayout_TimerEvent_Callback(QAbstractTextDocumentLayout_TimerEvent_Callback cb) { qabstracttextdocumentlayout_timerevent_callback = cb; }
    void setQAbstractTextDocumentLayout_ChildEvent_Callback(QAbstractTextDocumentLayout_ChildEvent_Callback cb) { qabstracttextdocumentlayout_childevent_callback = cb; }
    void setQAbstractTextDocumentLayout_CustomEvent_Callback(QAbstractTextDocumentLayout_CustomEvent_Callback cb) { qabstracttextdocumentlayout_customevent_callback = cb; }
    void setQAbstractTextDocumentLayout_ConnectNotify_Callback(QAbstractTextDocumentLayout_ConnectNotify_Callback cb) { qabstracttextdocumentlayout_connectnotify_callback = cb; }
    void setQAbstractTextDocumentLayout_DisconnectNotify_Callback(QAbstractTextDocumentLayout_DisconnectNotify_Callback cb) { qabstracttextdocumentlayout_disconnectnotify_callback = cb; }
    void setQAbstractTextDocumentLayout_FormatIndex_Callback(QAbstractTextDocumentLayout_FormatIndex_Callback cb) { qabstracttextdocumentlayout_formatindex_callback = cb; }
    void setQAbstractTextDocumentLayout_Format_Callback(QAbstractTextDocumentLayout_Format_Callback cb) { qabstracttextdocumentlayout_format_callback = cb; }
    void setQAbstractTextDocumentLayout_Sender_Callback(QAbstractTextDocumentLayout_Sender_Callback cb) { qabstracttextdocumentlayout_sender_callback = cb; }
    void setQAbstractTextDocumentLayout_SenderSignalIndex_Callback(QAbstractTextDocumentLayout_SenderSignalIndex_Callback cb) { qabstracttextdocumentlayout_sendersignalindex_callback = cb; }
    void setQAbstractTextDocumentLayout_Receivers_Callback(QAbstractTextDocumentLayout_Receivers_Callback cb) { qabstracttextdocumentlayout_receivers_callback = cb; }
    void setQAbstractTextDocumentLayout_IsSignalConnected_Callback(QAbstractTextDocumentLayout_IsSignalConnected_Callback cb) { qabstracttextdocumentlayout_issignalconnected_callback = cb; }

    // Base flag setters
    void setQAbstractTextDocumentLayout_Metacall_IsBase(bool value) const { qabstracttextdocumentlayout_metacall_isbase = value; }
    void setQAbstractTextDocumentLayout_Draw_IsBase(bool value) const { qabstracttextdocumentlayout_draw_isbase = value; }
    void setQAbstractTextDocumentLayout_HitTest_IsBase(bool value) const { qabstracttextdocumentlayout_hittest_isbase = value; }
    void setQAbstractTextDocumentLayout_PageCount_IsBase(bool value) const { qabstracttextdocumentlayout_pagecount_isbase = value; }
    void setQAbstractTextDocumentLayout_DocumentSize_IsBase(bool value) const { qabstracttextdocumentlayout_documentsize_isbase = value; }
    void setQAbstractTextDocumentLayout_FrameBoundingRect_IsBase(bool value) const { qabstracttextdocumentlayout_frameboundingrect_isbase = value; }
    void setQAbstractTextDocumentLayout_BlockBoundingRect_IsBase(bool value) const { qabstracttextdocumentlayout_blockboundingrect_isbase = value; }
    void setQAbstractTextDocumentLayout_DocumentChanged_IsBase(bool value) const { qabstracttextdocumentlayout_documentchanged_isbase = value; }
    void setQAbstractTextDocumentLayout_ResizeInlineObject_IsBase(bool value) const { qabstracttextdocumentlayout_resizeinlineobject_isbase = value; }
    void setQAbstractTextDocumentLayout_PositionInlineObject_IsBase(bool value) const { qabstracttextdocumentlayout_positioninlineobject_isbase = value; }
    void setQAbstractTextDocumentLayout_DrawInlineObject_IsBase(bool value) const { qabstracttextdocumentlayout_drawinlineobject_isbase = value; }
    void setQAbstractTextDocumentLayout_Event_IsBase(bool value) const { qabstracttextdocumentlayout_event_isbase = value; }
    void setQAbstractTextDocumentLayout_EventFilter_IsBase(bool value) const { qabstracttextdocumentlayout_eventfilter_isbase = value; }
    void setQAbstractTextDocumentLayout_TimerEvent_IsBase(bool value) const { qabstracttextdocumentlayout_timerevent_isbase = value; }
    void setQAbstractTextDocumentLayout_ChildEvent_IsBase(bool value) const { qabstracttextdocumentlayout_childevent_isbase = value; }
    void setQAbstractTextDocumentLayout_CustomEvent_IsBase(bool value) const { qabstracttextdocumentlayout_customevent_isbase = value; }
    void setQAbstractTextDocumentLayout_ConnectNotify_IsBase(bool value) const { qabstracttextdocumentlayout_connectnotify_isbase = value; }
    void setQAbstractTextDocumentLayout_DisconnectNotify_IsBase(bool value) const { qabstracttextdocumentlayout_disconnectnotify_isbase = value; }
    void setQAbstractTextDocumentLayout_FormatIndex_IsBase(bool value) const { qabstracttextdocumentlayout_formatindex_isbase = value; }
    void setQAbstractTextDocumentLayout_Format_IsBase(bool value) const { qabstracttextdocumentlayout_format_isbase = value; }
    void setQAbstractTextDocumentLayout_Sender_IsBase(bool value) const { qabstracttextdocumentlayout_sender_isbase = value; }
    void setQAbstractTextDocumentLayout_SenderSignalIndex_IsBase(bool value) const { qabstracttextdocumentlayout_sendersignalindex_isbase = value; }
    void setQAbstractTextDocumentLayout_Receivers_IsBase(bool value) const { qabstracttextdocumentlayout_receivers_isbase = value; }
    void setQAbstractTextDocumentLayout_IsSignalConnected_IsBase(bool value) const { qabstracttextdocumentlayout_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qabstracttextdocumentlayout_metacall_isbase) {
            qabstracttextdocumentlayout_metacall_isbase = false;
            return QAbstractTextDocumentLayout::qt_metacall(param1, param2, param3);
        } else if (qabstracttextdocumentlayout_metacall_callback != nullptr) {
            return qabstracttextdocumentlayout_metacall_callback(this, param1, param2, param3);
        } else {
            return QAbstractTextDocumentLayout::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void draw(QPainter* painter, const QAbstractTextDocumentLayout::PaintContext& context) override {
        qabstracttextdocumentlayout_draw_callback(this, painter, context);
    }

    // Virtual method for C ABI access and custom callback
    virtual int hitTest(const QPointF& point, Qt::HitTestAccuracy accuracy) const override {
        return qabstracttextdocumentlayout_hittest_callback(this, point, accuracy);
    }

    // Virtual method for C ABI access and custom callback
    virtual int pageCount() const override {
        return qabstracttextdocumentlayout_pagecount_callback();
    }

    // Virtual method for C ABI access and custom callback
    virtual QSizeF documentSize() const override {
        return qabstracttextdocumentlayout_documentsize_callback();
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF frameBoundingRect(QTextFrame* frame) const override {
        return qabstracttextdocumentlayout_frameboundingrect_callback(this, frame);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF blockBoundingRect(const QTextBlock& block) const override {
        return qabstracttextdocumentlayout_blockboundingrect_callback(this, block);
    }

    // Virtual method for C ABI access and custom callback
    virtual void documentChanged(int from, int charsRemoved, int charsAdded) override {
        qabstracttextdocumentlayout_documentchanged_callback(this, from, charsRemoved, charsAdded);
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeInlineObject(QTextInlineObject item, int posInDocument, const QTextFormat& format) override {
        if (qabstracttextdocumentlayout_resizeinlineobject_isbase) {
            qabstracttextdocumentlayout_resizeinlineobject_isbase = false;
            QAbstractTextDocumentLayout::resizeInlineObject(item, posInDocument, format);
        } else if (qabstracttextdocumentlayout_resizeinlineobject_callback != nullptr) {
            qabstracttextdocumentlayout_resizeinlineobject_callback(this, item, posInDocument, format);
        } else {
            QAbstractTextDocumentLayout::resizeInlineObject(item, posInDocument, format);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void positionInlineObject(QTextInlineObject item, int posInDocument, const QTextFormat& format) override {
        if (qabstracttextdocumentlayout_positioninlineobject_isbase) {
            qabstracttextdocumentlayout_positioninlineobject_isbase = false;
            QAbstractTextDocumentLayout::positionInlineObject(item, posInDocument, format);
        } else if (qabstracttextdocumentlayout_positioninlineobject_callback != nullptr) {
            qabstracttextdocumentlayout_positioninlineobject_callback(this, item, posInDocument, format);
        } else {
            QAbstractTextDocumentLayout::positionInlineObject(item, posInDocument, format);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawInlineObject(QPainter* painter, const QRectF& rect, QTextInlineObject object, int posInDocument, const QTextFormat& format) override {
        if (qabstracttextdocumentlayout_drawinlineobject_isbase) {
            qabstracttextdocumentlayout_drawinlineobject_isbase = false;
            QAbstractTextDocumentLayout::drawInlineObject(painter, rect, object, posInDocument, format);
        } else if (qabstracttextdocumentlayout_drawinlineobject_callback != nullptr) {
            qabstracttextdocumentlayout_drawinlineobject_callback(this, painter, rect, object, posInDocument, format);
        } else {
            QAbstractTextDocumentLayout::drawInlineObject(painter, rect, object, posInDocument, format);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qabstracttextdocumentlayout_event_isbase) {
            qabstracttextdocumentlayout_event_isbase = false;
            return QAbstractTextDocumentLayout::event(event);
        } else if (qabstracttextdocumentlayout_event_callback != nullptr) {
            return qabstracttextdocumentlayout_event_callback(this, event);
        } else {
            return QAbstractTextDocumentLayout::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qabstracttextdocumentlayout_eventfilter_isbase) {
            qabstracttextdocumentlayout_eventfilter_isbase = false;
            return QAbstractTextDocumentLayout::eventFilter(watched, event);
        } else if (qabstracttextdocumentlayout_eventfilter_callback != nullptr) {
            return qabstracttextdocumentlayout_eventfilter_callback(this, watched, event);
        } else {
            return QAbstractTextDocumentLayout::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qabstracttextdocumentlayout_timerevent_isbase) {
            qabstracttextdocumentlayout_timerevent_isbase = false;
            QAbstractTextDocumentLayout::timerEvent(event);
        } else if (qabstracttextdocumentlayout_timerevent_callback != nullptr) {
            qabstracttextdocumentlayout_timerevent_callback(this, event);
        } else {
            QAbstractTextDocumentLayout::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qabstracttextdocumentlayout_childevent_isbase) {
            qabstracttextdocumentlayout_childevent_isbase = false;
            QAbstractTextDocumentLayout::childEvent(event);
        } else if (qabstracttextdocumentlayout_childevent_callback != nullptr) {
            qabstracttextdocumentlayout_childevent_callback(this, event);
        } else {
            QAbstractTextDocumentLayout::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qabstracttextdocumentlayout_customevent_isbase) {
            qabstracttextdocumentlayout_customevent_isbase = false;
            QAbstractTextDocumentLayout::customEvent(event);
        } else if (qabstracttextdocumentlayout_customevent_callback != nullptr) {
            qabstracttextdocumentlayout_customevent_callback(this, event);
        } else {
            QAbstractTextDocumentLayout::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qabstracttextdocumentlayout_connectnotify_isbase) {
            qabstracttextdocumentlayout_connectnotify_isbase = false;
            QAbstractTextDocumentLayout::connectNotify(signal);
        } else if (qabstracttextdocumentlayout_connectnotify_callback != nullptr) {
            qabstracttextdocumentlayout_connectnotify_callback(this, signal);
        } else {
            QAbstractTextDocumentLayout::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qabstracttextdocumentlayout_disconnectnotify_isbase) {
            qabstracttextdocumentlayout_disconnectnotify_isbase = false;
            QAbstractTextDocumentLayout::disconnectNotify(signal);
        } else if (qabstracttextdocumentlayout_disconnectnotify_callback != nullptr) {
            qabstracttextdocumentlayout_disconnectnotify_callback(this, signal);
        } else {
            QAbstractTextDocumentLayout::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    int formatIndex(int pos) {
        if (qabstracttextdocumentlayout_formatindex_isbase) {
            qabstracttextdocumentlayout_formatindex_isbase = false;
            return QAbstractTextDocumentLayout::formatIndex(pos);
        } else if (qabstracttextdocumentlayout_formatindex_callback != nullptr) {
            return qabstracttextdocumentlayout_formatindex_callback(this, pos);
        } else {
            return QAbstractTextDocumentLayout::formatIndex(pos);
        }
    }

    // Virtual method for C ABI access and custom callback
    QTextCharFormat format(int pos) {
        if (qabstracttextdocumentlayout_format_isbase) {
            qabstracttextdocumentlayout_format_isbase = false;
            return QAbstractTextDocumentLayout::format(pos);
        } else if (qabstracttextdocumentlayout_format_callback != nullptr) {
            return qabstracttextdocumentlayout_format_callback(this, pos);
        } else {
            return QAbstractTextDocumentLayout::format(pos);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qabstracttextdocumentlayout_sender_isbase) {
            qabstracttextdocumentlayout_sender_isbase = false;
            return QAbstractTextDocumentLayout::sender();
        } else if (qabstracttextdocumentlayout_sender_callback != nullptr) {
            return qabstracttextdocumentlayout_sender_callback();
        } else {
            return QAbstractTextDocumentLayout::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qabstracttextdocumentlayout_sendersignalindex_isbase) {
            qabstracttextdocumentlayout_sendersignalindex_isbase = false;
            return QAbstractTextDocumentLayout::senderSignalIndex();
        } else if (qabstracttextdocumentlayout_sendersignalindex_callback != nullptr) {
            return qabstracttextdocumentlayout_sendersignalindex_callback();
        } else {
            return QAbstractTextDocumentLayout::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qabstracttextdocumentlayout_receivers_isbase) {
            qabstracttextdocumentlayout_receivers_isbase = false;
            return QAbstractTextDocumentLayout::receivers(signal);
        } else if (qabstracttextdocumentlayout_receivers_callback != nullptr) {
            return qabstracttextdocumentlayout_receivers_callback(this, signal);
        } else {
            return QAbstractTextDocumentLayout::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qabstracttextdocumentlayout_issignalconnected_isbase) {
            qabstracttextdocumentlayout_issignalconnected_isbase = false;
            return QAbstractTextDocumentLayout::isSignalConnected(signal);
        } else if (qabstracttextdocumentlayout_issignalconnected_callback != nullptr) {
            return qabstracttextdocumentlayout_issignalconnected_callback(this, signal);
        } else {
            return QAbstractTextDocumentLayout::isSignalConnected(signal);
        }
    }
};

#endif
