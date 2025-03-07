#pragma once
#ifndef SRCC_LIBVIRTUALQABSTRACTITEMDELEGATE_H
#define SRCC_LIBVIRTUALQABSTRACTITEMDELEGATE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QAbstractItemDelegate so that we can call protected methods
class VirtualQAbstractItemDelegate : public QAbstractItemDelegate {

  public:
    // Virtual class public types (including callbacks)
    using QAbstractItemDelegate_Metacall_Callback = int (*)(QAbstractItemDelegate*, QMetaObject::Call, int, void**);
    using QAbstractItemDelegate_Paint_Callback = void (*)(const QAbstractItemDelegate*, QPainter*, const QStyleOptionViewItem&, const QModelIndex&);
    using QAbstractItemDelegate_SizeHint_Callback = QSize (*)(const QAbstractItemDelegate*, const QStyleOptionViewItem&, const QModelIndex&);
    using QAbstractItemDelegate_CreateEditor_Callback = QWidget* (*)(const QAbstractItemDelegate*, QWidget*, const QStyleOptionViewItem&, const QModelIndex&);
    using QAbstractItemDelegate_DestroyEditor_Callback = void (*)(const QAbstractItemDelegate*, QWidget*, const QModelIndex&);
    using QAbstractItemDelegate_SetEditorData_Callback = void (*)(const QAbstractItemDelegate*, QWidget*, const QModelIndex&);
    using QAbstractItemDelegate_SetModelData_Callback = void (*)(const QAbstractItemDelegate*, QWidget*, QAbstractItemModel*, const QModelIndex&);
    using QAbstractItemDelegate_UpdateEditorGeometry_Callback = void (*)(const QAbstractItemDelegate*, QWidget*, const QStyleOptionViewItem&, const QModelIndex&);
    using QAbstractItemDelegate_EditorEvent_Callback = bool (*)(QAbstractItemDelegate*, QEvent*, QAbstractItemModel*, const QStyleOptionViewItem&, const QModelIndex&);
    using QAbstractItemDelegate_HelpEvent_Callback = bool (*)(QAbstractItemDelegate*, QHelpEvent*, QAbstractItemView*, const QStyleOptionViewItem&, const QModelIndex&);
    using QAbstractItemDelegate_PaintingRoles_Callback = QList<int> (*)();
    using QAbstractItemDelegate_Event_Callback = bool (*)(QAbstractItemDelegate*, QEvent*);
    using QAbstractItemDelegate_EventFilter_Callback = bool (*)(QAbstractItemDelegate*, QObject*, QEvent*);
    using QAbstractItemDelegate_TimerEvent_Callback = void (*)(QAbstractItemDelegate*, QTimerEvent*);
    using QAbstractItemDelegate_ChildEvent_Callback = void (*)(QAbstractItemDelegate*, QChildEvent*);
    using QAbstractItemDelegate_CustomEvent_Callback = void (*)(QAbstractItemDelegate*, QEvent*);
    using QAbstractItemDelegate_ConnectNotify_Callback = void (*)(QAbstractItemDelegate*, const QMetaMethod&);
    using QAbstractItemDelegate_DisconnectNotify_Callback = void (*)(QAbstractItemDelegate*, const QMetaMethod&);
    using QAbstractItemDelegate_Sender_Callback = QObject* (*)();
    using QAbstractItemDelegate_SenderSignalIndex_Callback = int (*)();
    using QAbstractItemDelegate_Receivers_Callback = int (*)(const QAbstractItemDelegate*, const char*);
    using QAbstractItemDelegate_IsSignalConnected_Callback = bool (*)(const QAbstractItemDelegate*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QAbstractItemDelegate_Metacall_Callback qabstractitemdelegate_metacall_callback = nullptr;
    QAbstractItemDelegate_Paint_Callback qabstractitemdelegate_paint_callback = nullptr;
    QAbstractItemDelegate_SizeHint_Callback qabstractitemdelegate_sizehint_callback = nullptr;
    QAbstractItemDelegate_CreateEditor_Callback qabstractitemdelegate_createeditor_callback = nullptr;
    QAbstractItemDelegate_DestroyEditor_Callback qabstractitemdelegate_destroyeditor_callback = nullptr;
    QAbstractItemDelegate_SetEditorData_Callback qabstractitemdelegate_seteditordata_callback = nullptr;
    QAbstractItemDelegate_SetModelData_Callback qabstractitemdelegate_setmodeldata_callback = nullptr;
    QAbstractItemDelegate_UpdateEditorGeometry_Callback qabstractitemdelegate_updateeditorgeometry_callback = nullptr;
    QAbstractItemDelegate_EditorEvent_Callback qabstractitemdelegate_editorevent_callback = nullptr;
    QAbstractItemDelegate_HelpEvent_Callback qabstractitemdelegate_helpevent_callback = nullptr;
    QAbstractItemDelegate_PaintingRoles_Callback qabstractitemdelegate_paintingroles_callback = nullptr;
    QAbstractItemDelegate_Event_Callback qabstractitemdelegate_event_callback = nullptr;
    QAbstractItemDelegate_EventFilter_Callback qabstractitemdelegate_eventfilter_callback = nullptr;
    QAbstractItemDelegate_TimerEvent_Callback qabstractitemdelegate_timerevent_callback = nullptr;
    QAbstractItemDelegate_ChildEvent_Callback qabstractitemdelegate_childevent_callback = nullptr;
    QAbstractItemDelegate_CustomEvent_Callback qabstractitemdelegate_customevent_callback = nullptr;
    QAbstractItemDelegate_ConnectNotify_Callback qabstractitemdelegate_connectnotify_callback = nullptr;
    QAbstractItemDelegate_DisconnectNotify_Callback qabstractitemdelegate_disconnectnotify_callback = nullptr;
    QAbstractItemDelegate_Sender_Callback qabstractitemdelegate_sender_callback = nullptr;
    QAbstractItemDelegate_SenderSignalIndex_Callback qabstractitemdelegate_sendersignalindex_callback = nullptr;
    QAbstractItemDelegate_Receivers_Callback qabstractitemdelegate_receivers_callback = nullptr;
    QAbstractItemDelegate_IsSignalConnected_Callback qabstractitemdelegate_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qabstractitemdelegate_metacall_isbase = false;
    mutable bool qabstractitemdelegate_paint_isbase = false;
    mutable bool qabstractitemdelegate_sizehint_isbase = false;
    mutable bool qabstractitemdelegate_createeditor_isbase = false;
    mutable bool qabstractitemdelegate_destroyeditor_isbase = false;
    mutable bool qabstractitemdelegate_seteditordata_isbase = false;
    mutable bool qabstractitemdelegate_setmodeldata_isbase = false;
    mutable bool qabstractitemdelegate_updateeditorgeometry_isbase = false;
    mutable bool qabstractitemdelegate_editorevent_isbase = false;
    mutable bool qabstractitemdelegate_helpevent_isbase = false;
    mutable bool qabstractitemdelegate_paintingroles_isbase = false;
    mutable bool qabstractitemdelegate_event_isbase = false;
    mutable bool qabstractitemdelegate_eventfilter_isbase = false;
    mutable bool qabstractitemdelegate_timerevent_isbase = false;
    mutable bool qabstractitemdelegate_childevent_isbase = false;
    mutable bool qabstractitemdelegate_customevent_isbase = false;
    mutable bool qabstractitemdelegate_connectnotify_isbase = false;
    mutable bool qabstractitemdelegate_disconnectnotify_isbase = false;
    mutable bool qabstractitemdelegate_sender_isbase = false;
    mutable bool qabstractitemdelegate_sendersignalindex_isbase = false;
    mutable bool qabstractitemdelegate_receivers_isbase = false;
    mutable bool qabstractitemdelegate_issignalconnected_isbase = false;

  public:
    VirtualQAbstractItemDelegate() : QAbstractItemDelegate(){};
    VirtualQAbstractItemDelegate(QObject* parent) : QAbstractItemDelegate(parent){};

    ~VirtualQAbstractItemDelegate() {
        qabstractitemdelegate_metacall_callback = nullptr;
        qabstractitemdelegate_paint_callback = nullptr;
        qabstractitemdelegate_sizehint_callback = nullptr;
        qabstractitemdelegate_createeditor_callback = nullptr;
        qabstractitemdelegate_destroyeditor_callback = nullptr;
        qabstractitemdelegate_seteditordata_callback = nullptr;
        qabstractitemdelegate_setmodeldata_callback = nullptr;
        qabstractitemdelegate_updateeditorgeometry_callback = nullptr;
        qabstractitemdelegate_editorevent_callback = nullptr;
        qabstractitemdelegate_helpevent_callback = nullptr;
        qabstractitemdelegate_paintingroles_callback = nullptr;
        qabstractitemdelegate_event_callback = nullptr;
        qabstractitemdelegate_eventfilter_callback = nullptr;
        qabstractitemdelegate_timerevent_callback = nullptr;
        qabstractitemdelegate_childevent_callback = nullptr;
        qabstractitemdelegate_customevent_callback = nullptr;
        qabstractitemdelegate_connectnotify_callback = nullptr;
        qabstractitemdelegate_disconnectnotify_callback = nullptr;
        qabstractitemdelegate_sender_callback = nullptr;
        qabstractitemdelegate_sendersignalindex_callback = nullptr;
        qabstractitemdelegate_receivers_callback = nullptr;
        qabstractitemdelegate_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQAbstractItemDelegate_Metacall_Callback(QAbstractItemDelegate_Metacall_Callback cb) { qabstractitemdelegate_metacall_callback = cb; }
    void setQAbstractItemDelegate_Paint_Callback(QAbstractItemDelegate_Paint_Callback cb) { qabstractitemdelegate_paint_callback = cb; }
    void setQAbstractItemDelegate_SizeHint_Callback(QAbstractItemDelegate_SizeHint_Callback cb) { qabstractitemdelegate_sizehint_callback = cb; }
    void setQAbstractItemDelegate_CreateEditor_Callback(QAbstractItemDelegate_CreateEditor_Callback cb) { qabstractitemdelegate_createeditor_callback = cb; }
    void setQAbstractItemDelegate_DestroyEditor_Callback(QAbstractItemDelegate_DestroyEditor_Callback cb) { qabstractitemdelegate_destroyeditor_callback = cb; }
    void setQAbstractItemDelegate_SetEditorData_Callback(QAbstractItemDelegate_SetEditorData_Callback cb) { qabstractitemdelegate_seteditordata_callback = cb; }
    void setQAbstractItemDelegate_SetModelData_Callback(QAbstractItemDelegate_SetModelData_Callback cb) { qabstractitemdelegate_setmodeldata_callback = cb; }
    void setQAbstractItemDelegate_UpdateEditorGeometry_Callback(QAbstractItemDelegate_UpdateEditorGeometry_Callback cb) { qabstractitemdelegate_updateeditorgeometry_callback = cb; }
    void setQAbstractItemDelegate_EditorEvent_Callback(QAbstractItemDelegate_EditorEvent_Callback cb) { qabstractitemdelegate_editorevent_callback = cb; }
    void setQAbstractItemDelegate_HelpEvent_Callback(QAbstractItemDelegate_HelpEvent_Callback cb) { qabstractitemdelegate_helpevent_callback = cb; }
    void setQAbstractItemDelegate_PaintingRoles_Callback(QAbstractItemDelegate_PaintingRoles_Callback cb) { qabstractitemdelegate_paintingroles_callback = cb; }
    void setQAbstractItemDelegate_Event_Callback(QAbstractItemDelegate_Event_Callback cb) { qabstractitemdelegate_event_callback = cb; }
    void setQAbstractItemDelegate_EventFilter_Callback(QAbstractItemDelegate_EventFilter_Callback cb) { qabstractitemdelegate_eventfilter_callback = cb; }
    void setQAbstractItemDelegate_TimerEvent_Callback(QAbstractItemDelegate_TimerEvent_Callback cb) { qabstractitemdelegate_timerevent_callback = cb; }
    void setQAbstractItemDelegate_ChildEvent_Callback(QAbstractItemDelegate_ChildEvent_Callback cb) { qabstractitemdelegate_childevent_callback = cb; }
    void setQAbstractItemDelegate_CustomEvent_Callback(QAbstractItemDelegate_CustomEvent_Callback cb) { qabstractitemdelegate_customevent_callback = cb; }
    void setQAbstractItemDelegate_ConnectNotify_Callback(QAbstractItemDelegate_ConnectNotify_Callback cb) { qabstractitemdelegate_connectnotify_callback = cb; }
    void setQAbstractItemDelegate_DisconnectNotify_Callback(QAbstractItemDelegate_DisconnectNotify_Callback cb) { qabstractitemdelegate_disconnectnotify_callback = cb; }
    void setQAbstractItemDelegate_Sender_Callback(QAbstractItemDelegate_Sender_Callback cb) { qabstractitemdelegate_sender_callback = cb; }
    void setQAbstractItemDelegate_SenderSignalIndex_Callback(QAbstractItemDelegate_SenderSignalIndex_Callback cb) { qabstractitemdelegate_sendersignalindex_callback = cb; }
    void setQAbstractItemDelegate_Receivers_Callback(QAbstractItemDelegate_Receivers_Callback cb) { qabstractitemdelegate_receivers_callback = cb; }
    void setQAbstractItemDelegate_IsSignalConnected_Callback(QAbstractItemDelegate_IsSignalConnected_Callback cb) { qabstractitemdelegate_issignalconnected_callback = cb; }

    // Base flag setters
    void setQAbstractItemDelegate_Metacall_IsBase(bool value) const { qabstractitemdelegate_metacall_isbase = value; }
    void setQAbstractItemDelegate_Paint_IsBase(bool value) const { qabstractitemdelegate_paint_isbase = value; }
    void setQAbstractItemDelegate_SizeHint_IsBase(bool value) const { qabstractitemdelegate_sizehint_isbase = value; }
    void setQAbstractItemDelegate_CreateEditor_IsBase(bool value) const { qabstractitemdelegate_createeditor_isbase = value; }
    void setQAbstractItemDelegate_DestroyEditor_IsBase(bool value) const { qabstractitemdelegate_destroyeditor_isbase = value; }
    void setQAbstractItemDelegate_SetEditorData_IsBase(bool value) const { qabstractitemdelegate_seteditordata_isbase = value; }
    void setQAbstractItemDelegate_SetModelData_IsBase(bool value) const { qabstractitemdelegate_setmodeldata_isbase = value; }
    void setQAbstractItemDelegate_UpdateEditorGeometry_IsBase(bool value) const { qabstractitemdelegate_updateeditorgeometry_isbase = value; }
    void setQAbstractItemDelegate_EditorEvent_IsBase(bool value) const { qabstractitemdelegate_editorevent_isbase = value; }
    void setQAbstractItemDelegate_HelpEvent_IsBase(bool value) const { qabstractitemdelegate_helpevent_isbase = value; }
    void setQAbstractItemDelegate_PaintingRoles_IsBase(bool value) const { qabstractitemdelegate_paintingroles_isbase = value; }
    void setQAbstractItemDelegate_Event_IsBase(bool value) const { qabstractitemdelegate_event_isbase = value; }
    void setQAbstractItemDelegate_EventFilter_IsBase(bool value) const { qabstractitemdelegate_eventfilter_isbase = value; }
    void setQAbstractItemDelegate_TimerEvent_IsBase(bool value) const { qabstractitemdelegate_timerevent_isbase = value; }
    void setQAbstractItemDelegate_ChildEvent_IsBase(bool value) const { qabstractitemdelegate_childevent_isbase = value; }
    void setQAbstractItemDelegate_CustomEvent_IsBase(bool value) const { qabstractitemdelegate_customevent_isbase = value; }
    void setQAbstractItemDelegate_ConnectNotify_IsBase(bool value) const { qabstractitemdelegate_connectnotify_isbase = value; }
    void setQAbstractItemDelegate_DisconnectNotify_IsBase(bool value) const { qabstractitemdelegate_disconnectnotify_isbase = value; }
    void setQAbstractItemDelegate_Sender_IsBase(bool value) const { qabstractitemdelegate_sender_isbase = value; }
    void setQAbstractItemDelegate_SenderSignalIndex_IsBase(bool value) const { qabstractitemdelegate_sendersignalindex_isbase = value; }
    void setQAbstractItemDelegate_Receivers_IsBase(bool value) const { qabstractitemdelegate_receivers_isbase = value; }
    void setQAbstractItemDelegate_IsSignalConnected_IsBase(bool value) const { qabstractitemdelegate_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qabstractitemdelegate_metacall_isbase) {
            qabstractitemdelegate_metacall_isbase = false;
            return QAbstractItemDelegate::qt_metacall(param1, param2, param3);
        } else if (qabstractitemdelegate_metacall_callback != nullptr) {
            return qabstractitemdelegate_metacall_callback(this, param1, param2, param3);
        } else {
            return QAbstractItemDelegate::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        qabstractitemdelegate_paint_callback(this, painter, option, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint(const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        return qabstractitemdelegate_sizehint_callback(this, option, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createEditor(QWidget* parent, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        if (qabstractitemdelegate_createeditor_isbase) {
            qabstractitemdelegate_createeditor_isbase = false;
            return QAbstractItemDelegate::createEditor(parent, option, index);
        } else if (qabstractitemdelegate_createeditor_callback != nullptr) {
            return qabstractitemdelegate_createeditor_callback(this, parent, option, index);
        } else {
            return QAbstractItemDelegate::createEditor(parent, option, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void destroyEditor(QWidget* editor, const QModelIndex& index) const override {
        if (qabstractitemdelegate_destroyeditor_isbase) {
            qabstractitemdelegate_destroyeditor_isbase = false;
            QAbstractItemDelegate::destroyEditor(editor, index);
        } else if (qabstractitemdelegate_destroyeditor_callback != nullptr) {
            qabstractitemdelegate_destroyeditor_callback(this, editor, index);
        } else {
            QAbstractItemDelegate::destroyEditor(editor, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditorData(QWidget* editor, const QModelIndex& index) const override {
        if (qabstractitemdelegate_seteditordata_isbase) {
            qabstractitemdelegate_seteditordata_isbase = false;
            QAbstractItemDelegate::setEditorData(editor, index);
        } else if (qabstractitemdelegate_seteditordata_callback != nullptr) {
            qabstractitemdelegate_seteditordata_callback(this, editor, index);
        } else {
            QAbstractItemDelegate::setEditorData(editor, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModelData(QWidget* editor, QAbstractItemModel* model, const QModelIndex& index) const override {
        if (qabstractitemdelegate_setmodeldata_isbase) {
            qabstractitemdelegate_setmodeldata_isbase = false;
            QAbstractItemDelegate::setModelData(editor, model, index);
        } else if (qabstractitemdelegate_setmodeldata_callback != nullptr) {
            qabstractitemdelegate_setmodeldata_callback(this, editor, model, index);
        } else {
            QAbstractItemDelegate::setModelData(editor, model, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorGeometry(QWidget* editor, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        if (qabstractitemdelegate_updateeditorgeometry_isbase) {
            qabstractitemdelegate_updateeditorgeometry_isbase = false;
            QAbstractItemDelegate::updateEditorGeometry(editor, option, index);
        } else if (qabstractitemdelegate_updateeditorgeometry_callback != nullptr) {
            qabstractitemdelegate_updateeditorgeometry_callback(this, editor, option, index);
        } else {
            QAbstractItemDelegate::updateEditorGeometry(editor, option, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool editorEvent(QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem& option, const QModelIndex& index) override {
        if (qabstractitemdelegate_editorevent_isbase) {
            qabstractitemdelegate_editorevent_isbase = false;
            return QAbstractItemDelegate::editorEvent(event, model, option, index);
        } else if (qabstractitemdelegate_editorevent_callback != nullptr) {
            return qabstractitemdelegate_editorevent_callback(this, event, model, option, index);
        } else {
            return QAbstractItemDelegate::editorEvent(event, model, option, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool helpEvent(QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem& option, const QModelIndex& index) override {
        if (qabstractitemdelegate_helpevent_isbase) {
            qabstractitemdelegate_helpevent_isbase = false;
            return QAbstractItemDelegate::helpEvent(event, view, option, index);
        } else if (qabstractitemdelegate_helpevent_callback != nullptr) {
            return qabstractitemdelegate_helpevent_callback(this, event, view, option, index);
        } else {
            return QAbstractItemDelegate::helpEvent(event, view, option, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<int> paintingRoles() const override {
        if (qabstractitemdelegate_paintingroles_isbase) {
            qabstractitemdelegate_paintingroles_isbase = false;
            return QAbstractItemDelegate::paintingRoles();
        } else if (qabstractitemdelegate_paintingroles_callback != nullptr) {
            return qabstractitemdelegate_paintingroles_callback();
        } else {
            return QAbstractItemDelegate::paintingRoles();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qabstractitemdelegate_event_isbase) {
            qabstractitemdelegate_event_isbase = false;
            return QAbstractItemDelegate::event(event);
        } else if (qabstractitemdelegate_event_callback != nullptr) {
            return qabstractitemdelegate_event_callback(this, event);
        } else {
            return QAbstractItemDelegate::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qabstractitemdelegate_eventfilter_isbase) {
            qabstractitemdelegate_eventfilter_isbase = false;
            return QAbstractItemDelegate::eventFilter(watched, event);
        } else if (qabstractitemdelegate_eventfilter_callback != nullptr) {
            return qabstractitemdelegate_eventfilter_callback(this, watched, event);
        } else {
            return QAbstractItemDelegate::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qabstractitemdelegate_timerevent_isbase) {
            qabstractitemdelegate_timerevent_isbase = false;
            QAbstractItemDelegate::timerEvent(event);
        } else if (qabstractitemdelegate_timerevent_callback != nullptr) {
            qabstractitemdelegate_timerevent_callback(this, event);
        } else {
            QAbstractItemDelegate::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qabstractitemdelegate_childevent_isbase) {
            qabstractitemdelegate_childevent_isbase = false;
            QAbstractItemDelegate::childEvent(event);
        } else if (qabstractitemdelegate_childevent_callback != nullptr) {
            qabstractitemdelegate_childevent_callback(this, event);
        } else {
            QAbstractItemDelegate::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qabstractitemdelegate_customevent_isbase) {
            qabstractitemdelegate_customevent_isbase = false;
            QAbstractItemDelegate::customEvent(event);
        } else if (qabstractitemdelegate_customevent_callback != nullptr) {
            qabstractitemdelegate_customevent_callback(this, event);
        } else {
            QAbstractItemDelegate::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qabstractitemdelegate_connectnotify_isbase) {
            qabstractitemdelegate_connectnotify_isbase = false;
            QAbstractItemDelegate::connectNotify(signal);
        } else if (qabstractitemdelegate_connectnotify_callback != nullptr) {
            qabstractitemdelegate_connectnotify_callback(this, signal);
        } else {
            QAbstractItemDelegate::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qabstractitemdelegate_disconnectnotify_isbase) {
            qabstractitemdelegate_disconnectnotify_isbase = false;
            QAbstractItemDelegate::disconnectNotify(signal);
        } else if (qabstractitemdelegate_disconnectnotify_callback != nullptr) {
            qabstractitemdelegate_disconnectnotify_callback(this, signal);
        } else {
            QAbstractItemDelegate::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qabstractitemdelegate_sender_isbase) {
            qabstractitemdelegate_sender_isbase = false;
            return QAbstractItemDelegate::sender();
        } else if (qabstractitemdelegate_sender_callback != nullptr) {
            return qabstractitemdelegate_sender_callback();
        } else {
            return QAbstractItemDelegate::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qabstractitemdelegate_sendersignalindex_isbase) {
            qabstractitemdelegate_sendersignalindex_isbase = false;
            return QAbstractItemDelegate::senderSignalIndex();
        } else if (qabstractitemdelegate_sendersignalindex_callback != nullptr) {
            return qabstractitemdelegate_sendersignalindex_callback();
        } else {
            return QAbstractItemDelegate::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qabstractitemdelegate_receivers_isbase) {
            qabstractitemdelegate_receivers_isbase = false;
            return QAbstractItemDelegate::receivers(signal);
        } else if (qabstractitemdelegate_receivers_callback != nullptr) {
            return qabstractitemdelegate_receivers_callback(this, signal);
        } else {
            return QAbstractItemDelegate::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qabstractitemdelegate_issignalconnected_isbase) {
            qabstractitemdelegate_issignalconnected_isbase = false;
            return QAbstractItemDelegate::isSignalConnected(signal);
        } else if (qabstractitemdelegate_issignalconnected_callback != nullptr) {
            return qabstractitemdelegate_issignalconnected_callback(this, signal);
        } else {
            return QAbstractItemDelegate::isSignalConnected(signal);
        }
    }
};

#endif
