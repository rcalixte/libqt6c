#pragma once
#ifndef SRCC_LIBVIRTUALQSTYLEDITEMDELEGATE_H
#define SRCC_LIBVIRTUALQSTYLEDITEMDELEGATE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QStyledItemDelegate so that we can call protected methods
class VirtualQStyledItemDelegate : public QStyledItemDelegate {

  public:
    // Virtual class public types (including callbacks)
    using QStyledItemDelegate_Metacall_Callback = int (*)(QStyledItemDelegate*, QMetaObject::Call, int, void**);
    using QStyledItemDelegate_Paint_Callback = void (*)(const QStyledItemDelegate*, QPainter*, const QStyleOptionViewItem&, const QModelIndex&);
    using QStyledItemDelegate_SizeHint_Callback = QSize (*)(const QStyledItemDelegate*, const QStyleOptionViewItem&, const QModelIndex&);
    using QStyledItemDelegate_CreateEditor_Callback = QWidget* (*)(const QStyledItemDelegate*, QWidget*, const QStyleOptionViewItem&, const QModelIndex&);
    using QStyledItemDelegate_SetEditorData_Callback = void (*)(const QStyledItemDelegate*, QWidget*, const QModelIndex&);
    using QStyledItemDelegate_SetModelData_Callback = void (*)(const QStyledItemDelegate*, QWidget*, QAbstractItemModel*, const QModelIndex&);
    using QStyledItemDelegate_UpdateEditorGeometry_Callback = void (*)(const QStyledItemDelegate*, QWidget*, const QStyleOptionViewItem&, const QModelIndex&);
    using QStyledItemDelegate_DisplayText_Callback = QString (*)(const QStyledItemDelegate*, const QVariant&, const QLocale&);
    using QStyledItemDelegate_InitStyleOption_Callback = void (*)(const QStyledItemDelegate*, QStyleOptionViewItem*, const QModelIndex&);
    using QStyledItemDelegate_EventFilter_Callback = bool (*)(QStyledItemDelegate*, QObject*, QEvent*);
    using QStyledItemDelegate_EditorEvent_Callback = bool (*)(QStyledItemDelegate*, QEvent*, QAbstractItemModel*, const QStyleOptionViewItem&, const QModelIndex&);
    using QStyledItemDelegate_DestroyEditor_Callback = void (*)(const QStyledItemDelegate*, QWidget*, const QModelIndex&);
    using QStyledItemDelegate_HelpEvent_Callback = bool (*)(QStyledItemDelegate*, QHelpEvent*, QAbstractItemView*, const QStyleOptionViewItem&, const QModelIndex&);
    using QStyledItemDelegate_PaintingRoles_Callback = QList<int> (*)();
    using QStyledItemDelegate_Event_Callback = bool (*)(QStyledItemDelegate*, QEvent*);
    using QStyledItemDelegate_TimerEvent_Callback = void (*)(QStyledItemDelegate*, QTimerEvent*);
    using QStyledItemDelegate_ChildEvent_Callback = void (*)(QStyledItemDelegate*, QChildEvent*);
    using QStyledItemDelegate_CustomEvent_Callback = void (*)(QStyledItemDelegate*, QEvent*);
    using QStyledItemDelegate_ConnectNotify_Callback = void (*)(QStyledItemDelegate*, const QMetaMethod&);
    using QStyledItemDelegate_DisconnectNotify_Callback = void (*)(QStyledItemDelegate*, const QMetaMethod&);
    using QStyledItemDelegate_Sender_Callback = QObject* (*)();
    using QStyledItemDelegate_SenderSignalIndex_Callback = int (*)();
    using QStyledItemDelegate_Receivers_Callback = int (*)(const QStyledItemDelegate*, const char*);
    using QStyledItemDelegate_IsSignalConnected_Callback = bool (*)(const QStyledItemDelegate*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QStyledItemDelegate_Metacall_Callback qstyleditemdelegate_metacall_callback = nullptr;
    QStyledItemDelegate_Paint_Callback qstyleditemdelegate_paint_callback = nullptr;
    QStyledItemDelegate_SizeHint_Callback qstyleditemdelegate_sizehint_callback = nullptr;
    QStyledItemDelegate_CreateEditor_Callback qstyleditemdelegate_createeditor_callback = nullptr;
    QStyledItemDelegate_SetEditorData_Callback qstyleditemdelegate_seteditordata_callback = nullptr;
    QStyledItemDelegate_SetModelData_Callback qstyleditemdelegate_setmodeldata_callback = nullptr;
    QStyledItemDelegate_UpdateEditorGeometry_Callback qstyleditemdelegate_updateeditorgeometry_callback = nullptr;
    QStyledItemDelegate_DisplayText_Callback qstyleditemdelegate_displaytext_callback = nullptr;
    QStyledItemDelegate_InitStyleOption_Callback qstyleditemdelegate_initstyleoption_callback = nullptr;
    QStyledItemDelegate_EventFilter_Callback qstyleditemdelegate_eventfilter_callback = nullptr;
    QStyledItemDelegate_EditorEvent_Callback qstyleditemdelegate_editorevent_callback = nullptr;
    QStyledItemDelegate_DestroyEditor_Callback qstyleditemdelegate_destroyeditor_callback = nullptr;
    QStyledItemDelegate_HelpEvent_Callback qstyleditemdelegate_helpevent_callback = nullptr;
    QStyledItemDelegate_PaintingRoles_Callback qstyleditemdelegate_paintingroles_callback = nullptr;
    QStyledItemDelegate_Event_Callback qstyleditemdelegate_event_callback = nullptr;
    QStyledItemDelegate_TimerEvent_Callback qstyleditemdelegate_timerevent_callback = nullptr;
    QStyledItemDelegate_ChildEvent_Callback qstyleditemdelegate_childevent_callback = nullptr;
    QStyledItemDelegate_CustomEvent_Callback qstyleditemdelegate_customevent_callback = nullptr;
    QStyledItemDelegate_ConnectNotify_Callback qstyleditemdelegate_connectnotify_callback = nullptr;
    QStyledItemDelegate_DisconnectNotify_Callback qstyleditemdelegate_disconnectnotify_callback = nullptr;
    QStyledItemDelegate_Sender_Callback qstyleditemdelegate_sender_callback = nullptr;
    QStyledItemDelegate_SenderSignalIndex_Callback qstyleditemdelegate_sendersignalindex_callback = nullptr;
    QStyledItemDelegate_Receivers_Callback qstyleditemdelegate_receivers_callback = nullptr;
    QStyledItemDelegate_IsSignalConnected_Callback qstyleditemdelegate_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qstyleditemdelegate_metacall_isbase = false;
    mutable bool qstyleditemdelegate_paint_isbase = false;
    mutable bool qstyleditemdelegate_sizehint_isbase = false;
    mutable bool qstyleditemdelegate_createeditor_isbase = false;
    mutable bool qstyleditemdelegate_seteditordata_isbase = false;
    mutable bool qstyleditemdelegate_setmodeldata_isbase = false;
    mutable bool qstyleditemdelegate_updateeditorgeometry_isbase = false;
    mutable bool qstyleditemdelegate_displaytext_isbase = false;
    mutable bool qstyleditemdelegate_initstyleoption_isbase = false;
    mutable bool qstyleditemdelegate_eventfilter_isbase = false;
    mutable bool qstyleditemdelegate_editorevent_isbase = false;
    mutable bool qstyleditemdelegate_destroyeditor_isbase = false;
    mutable bool qstyleditemdelegate_helpevent_isbase = false;
    mutable bool qstyleditemdelegate_paintingroles_isbase = false;
    mutable bool qstyleditemdelegate_event_isbase = false;
    mutable bool qstyleditemdelegate_timerevent_isbase = false;
    mutable bool qstyleditemdelegate_childevent_isbase = false;
    mutable bool qstyleditemdelegate_customevent_isbase = false;
    mutable bool qstyleditemdelegate_connectnotify_isbase = false;
    mutable bool qstyleditemdelegate_disconnectnotify_isbase = false;
    mutable bool qstyleditemdelegate_sender_isbase = false;
    mutable bool qstyleditemdelegate_sendersignalindex_isbase = false;
    mutable bool qstyleditemdelegate_receivers_isbase = false;
    mutable bool qstyleditemdelegate_issignalconnected_isbase = false;

  public:
    VirtualQStyledItemDelegate() : QStyledItemDelegate(){};
    VirtualQStyledItemDelegate(QObject* parent) : QStyledItemDelegate(parent){};

    ~VirtualQStyledItemDelegate() {
        qstyleditemdelegate_metacall_callback = nullptr;
        qstyleditemdelegate_paint_callback = nullptr;
        qstyleditemdelegate_sizehint_callback = nullptr;
        qstyleditemdelegate_createeditor_callback = nullptr;
        qstyleditemdelegate_seteditordata_callback = nullptr;
        qstyleditemdelegate_setmodeldata_callback = nullptr;
        qstyleditemdelegate_updateeditorgeometry_callback = nullptr;
        qstyleditemdelegate_displaytext_callback = nullptr;
        qstyleditemdelegate_initstyleoption_callback = nullptr;
        qstyleditemdelegate_eventfilter_callback = nullptr;
        qstyleditemdelegate_editorevent_callback = nullptr;
        qstyleditemdelegate_destroyeditor_callback = nullptr;
        qstyleditemdelegate_helpevent_callback = nullptr;
        qstyleditemdelegate_paintingroles_callback = nullptr;
        qstyleditemdelegate_event_callback = nullptr;
        qstyleditemdelegate_timerevent_callback = nullptr;
        qstyleditemdelegate_childevent_callback = nullptr;
        qstyleditemdelegate_customevent_callback = nullptr;
        qstyleditemdelegate_connectnotify_callback = nullptr;
        qstyleditemdelegate_disconnectnotify_callback = nullptr;
        qstyleditemdelegate_sender_callback = nullptr;
        qstyleditemdelegate_sendersignalindex_callback = nullptr;
        qstyleditemdelegate_receivers_callback = nullptr;
        qstyleditemdelegate_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQStyledItemDelegate_Metacall_Callback(QStyledItemDelegate_Metacall_Callback cb) { qstyleditemdelegate_metacall_callback = cb; }
    void setQStyledItemDelegate_Paint_Callback(QStyledItemDelegate_Paint_Callback cb) { qstyleditemdelegate_paint_callback = cb; }
    void setQStyledItemDelegate_SizeHint_Callback(QStyledItemDelegate_SizeHint_Callback cb) { qstyleditemdelegate_sizehint_callback = cb; }
    void setQStyledItemDelegate_CreateEditor_Callback(QStyledItemDelegate_CreateEditor_Callback cb) { qstyleditemdelegate_createeditor_callback = cb; }
    void setQStyledItemDelegate_SetEditorData_Callback(QStyledItemDelegate_SetEditorData_Callback cb) { qstyleditemdelegate_seteditordata_callback = cb; }
    void setQStyledItemDelegate_SetModelData_Callback(QStyledItemDelegate_SetModelData_Callback cb) { qstyleditemdelegate_setmodeldata_callback = cb; }
    void setQStyledItemDelegate_UpdateEditorGeometry_Callback(QStyledItemDelegate_UpdateEditorGeometry_Callback cb) { qstyleditemdelegate_updateeditorgeometry_callback = cb; }
    void setQStyledItemDelegate_DisplayText_Callback(QStyledItemDelegate_DisplayText_Callback cb) { qstyleditemdelegate_displaytext_callback = cb; }
    void setQStyledItemDelegate_InitStyleOption_Callback(QStyledItemDelegate_InitStyleOption_Callback cb) { qstyleditemdelegate_initstyleoption_callback = cb; }
    void setQStyledItemDelegate_EventFilter_Callback(QStyledItemDelegate_EventFilter_Callback cb) { qstyleditemdelegate_eventfilter_callback = cb; }
    void setQStyledItemDelegate_EditorEvent_Callback(QStyledItemDelegate_EditorEvent_Callback cb) { qstyleditemdelegate_editorevent_callback = cb; }
    void setQStyledItemDelegate_DestroyEditor_Callback(QStyledItemDelegate_DestroyEditor_Callback cb) { qstyleditemdelegate_destroyeditor_callback = cb; }
    void setQStyledItemDelegate_HelpEvent_Callback(QStyledItemDelegate_HelpEvent_Callback cb) { qstyleditemdelegate_helpevent_callback = cb; }
    void setQStyledItemDelegate_PaintingRoles_Callback(QStyledItemDelegate_PaintingRoles_Callback cb) { qstyleditemdelegate_paintingroles_callback = cb; }
    void setQStyledItemDelegate_Event_Callback(QStyledItemDelegate_Event_Callback cb) { qstyleditemdelegate_event_callback = cb; }
    void setQStyledItemDelegate_TimerEvent_Callback(QStyledItemDelegate_TimerEvent_Callback cb) { qstyleditemdelegate_timerevent_callback = cb; }
    void setQStyledItemDelegate_ChildEvent_Callback(QStyledItemDelegate_ChildEvent_Callback cb) { qstyleditemdelegate_childevent_callback = cb; }
    void setQStyledItemDelegate_CustomEvent_Callback(QStyledItemDelegate_CustomEvent_Callback cb) { qstyleditemdelegate_customevent_callback = cb; }
    void setQStyledItemDelegate_ConnectNotify_Callback(QStyledItemDelegate_ConnectNotify_Callback cb) { qstyleditemdelegate_connectnotify_callback = cb; }
    void setQStyledItemDelegate_DisconnectNotify_Callback(QStyledItemDelegate_DisconnectNotify_Callback cb) { qstyleditemdelegate_disconnectnotify_callback = cb; }
    void setQStyledItemDelegate_Sender_Callback(QStyledItemDelegate_Sender_Callback cb) { qstyleditemdelegate_sender_callback = cb; }
    void setQStyledItemDelegate_SenderSignalIndex_Callback(QStyledItemDelegate_SenderSignalIndex_Callback cb) { qstyleditemdelegate_sendersignalindex_callback = cb; }
    void setQStyledItemDelegate_Receivers_Callback(QStyledItemDelegate_Receivers_Callback cb) { qstyleditemdelegate_receivers_callback = cb; }
    void setQStyledItemDelegate_IsSignalConnected_Callback(QStyledItemDelegate_IsSignalConnected_Callback cb) { qstyleditemdelegate_issignalconnected_callback = cb; }

    // Base flag setters
    void setQStyledItemDelegate_Metacall_IsBase(bool value) const { qstyleditemdelegate_metacall_isbase = value; }
    void setQStyledItemDelegate_Paint_IsBase(bool value) const { qstyleditemdelegate_paint_isbase = value; }
    void setQStyledItemDelegate_SizeHint_IsBase(bool value) const { qstyleditemdelegate_sizehint_isbase = value; }
    void setQStyledItemDelegate_CreateEditor_IsBase(bool value) const { qstyleditemdelegate_createeditor_isbase = value; }
    void setQStyledItemDelegate_SetEditorData_IsBase(bool value) const { qstyleditemdelegate_seteditordata_isbase = value; }
    void setQStyledItemDelegate_SetModelData_IsBase(bool value) const { qstyleditemdelegate_setmodeldata_isbase = value; }
    void setQStyledItemDelegate_UpdateEditorGeometry_IsBase(bool value) const { qstyleditemdelegate_updateeditorgeometry_isbase = value; }
    void setQStyledItemDelegate_DisplayText_IsBase(bool value) const { qstyleditemdelegate_displaytext_isbase = value; }
    void setQStyledItemDelegate_InitStyleOption_IsBase(bool value) const { qstyleditemdelegate_initstyleoption_isbase = value; }
    void setQStyledItemDelegate_EventFilter_IsBase(bool value) const { qstyleditemdelegate_eventfilter_isbase = value; }
    void setQStyledItemDelegate_EditorEvent_IsBase(bool value) const { qstyleditemdelegate_editorevent_isbase = value; }
    void setQStyledItemDelegate_DestroyEditor_IsBase(bool value) const { qstyleditemdelegate_destroyeditor_isbase = value; }
    void setQStyledItemDelegate_HelpEvent_IsBase(bool value) const { qstyleditemdelegate_helpevent_isbase = value; }
    void setQStyledItemDelegate_PaintingRoles_IsBase(bool value) const { qstyleditemdelegate_paintingroles_isbase = value; }
    void setQStyledItemDelegate_Event_IsBase(bool value) const { qstyleditemdelegate_event_isbase = value; }
    void setQStyledItemDelegate_TimerEvent_IsBase(bool value) const { qstyleditemdelegate_timerevent_isbase = value; }
    void setQStyledItemDelegate_ChildEvent_IsBase(bool value) const { qstyleditemdelegate_childevent_isbase = value; }
    void setQStyledItemDelegate_CustomEvent_IsBase(bool value) const { qstyleditemdelegate_customevent_isbase = value; }
    void setQStyledItemDelegate_ConnectNotify_IsBase(bool value) const { qstyleditemdelegate_connectnotify_isbase = value; }
    void setQStyledItemDelegate_DisconnectNotify_IsBase(bool value) const { qstyleditemdelegate_disconnectnotify_isbase = value; }
    void setQStyledItemDelegate_Sender_IsBase(bool value) const { qstyleditemdelegate_sender_isbase = value; }
    void setQStyledItemDelegate_SenderSignalIndex_IsBase(bool value) const { qstyleditemdelegate_sendersignalindex_isbase = value; }
    void setQStyledItemDelegate_Receivers_IsBase(bool value) const { qstyleditemdelegate_receivers_isbase = value; }
    void setQStyledItemDelegate_IsSignalConnected_IsBase(bool value) const { qstyleditemdelegate_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qstyleditemdelegate_metacall_isbase) {
            qstyleditemdelegate_metacall_isbase = false;
            return QStyledItemDelegate::qt_metacall(param1, param2, param3);
        } else if (qstyleditemdelegate_metacall_callback != nullptr) {
            return qstyleditemdelegate_metacall_callback(this, param1, param2, param3);
        } else {
            return QStyledItemDelegate::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        if (qstyleditemdelegate_paint_isbase) {
            qstyleditemdelegate_paint_isbase = false;
            QStyledItemDelegate::paint(painter, option, index);
        } else if (qstyleditemdelegate_paint_callback != nullptr) {
            qstyleditemdelegate_paint_callback(this, painter, option, index);
        } else {
            QStyledItemDelegate::paint(painter, option, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint(const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        if (qstyleditemdelegate_sizehint_isbase) {
            qstyleditemdelegate_sizehint_isbase = false;
            return QStyledItemDelegate::sizeHint(option, index);
        } else if (qstyleditemdelegate_sizehint_callback != nullptr) {
            return qstyleditemdelegate_sizehint_callback(this, option, index);
        } else {
            return QStyledItemDelegate::sizeHint(option, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createEditor(QWidget* parent, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        if (qstyleditemdelegate_createeditor_isbase) {
            qstyleditemdelegate_createeditor_isbase = false;
            return QStyledItemDelegate::createEditor(parent, option, index);
        } else if (qstyleditemdelegate_createeditor_callback != nullptr) {
            return qstyleditemdelegate_createeditor_callback(this, parent, option, index);
        } else {
            return QStyledItemDelegate::createEditor(parent, option, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditorData(QWidget* editor, const QModelIndex& index) const override {
        if (qstyleditemdelegate_seteditordata_isbase) {
            qstyleditemdelegate_seteditordata_isbase = false;
            QStyledItemDelegate::setEditorData(editor, index);
        } else if (qstyleditemdelegate_seteditordata_callback != nullptr) {
            qstyleditemdelegate_seteditordata_callback(this, editor, index);
        } else {
            QStyledItemDelegate::setEditorData(editor, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModelData(QWidget* editor, QAbstractItemModel* model, const QModelIndex& index) const override {
        if (qstyleditemdelegate_setmodeldata_isbase) {
            qstyleditemdelegate_setmodeldata_isbase = false;
            QStyledItemDelegate::setModelData(editor, model, index);
        } else if (qstyleditemdelegate_setmodeldata_callback != nullptr) {
            qstyleditemdelegate_setmodeldata_callback(this, editor, model, index);
        } else {
            QStyledItemDelegate::setModelData(editor, model, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorGeometry(QWidget* editor, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        if (qstyleditemdelegate_updateeditorgeometry_isbase) {
            qstyleditemdelegate_updateeditorgeometry_isbase = false;
            QStyledItemDelegate::updateEditorGeometry(editor, option, index);
        } else if (qstyleditemdelegate_updateeditorgeometry_callback != nullptr) {
            qstyleditemdelegate_updateeditorgeometry_callback(this, editor, option, index);
        } else {
            QStyledItemDelegate::updateEditorGeometry(editor, option, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString displayText(const QVariant& value, const QLocale& locale) const override {
        if (qstyleditemdelegate_displaytext_isbase) {
            qstyleditemdelegate_displaytext_isbase = false;
            return QStyledItemDelegate::displayText(value, locale);
        } else if (qstyleditemdelegate_displaytext_callback != nullptr) {
            return qstyleditemdelegate_displaytext_callback(this, value, locale);
        } else {
            return QStyledItemDelegate::displayText(value, locale);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionViewItem* option, const QModelIndex& index) const override {
        if (qstyleditemdelegate_initstyleoption_isbase) {
            qstyleditemdelegate_initstyleoption_isbase = false;
            QStyledItemDelegate::initStyleOption(option, index);
        } else if (qstyleditemdelegate_initstyleoption_callback != nullptr) {
            qstyleditemdelegate_initstyleoption_callback(this, option, index);
        } else {
            QStyledItemDelegate::initStyleOption(option, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (qstyleditemdelegate_eventfilter_isbase) {
            qstyleditemdelegate_eventfilter_isbase = false;
            return QStyledItemDelegate::eventFilter(object, event);
        } else if (qstyleditemdelegate_eventfilter_callback != nullptr) {
            return qstyleditemdelegate_eventfilter_callback(this, object, event);
        } else {
            return QStyledItemDelegate::eventFilter(object, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool editorEvent(QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem& option, const QModelIndex& index) override {
        if (qstyleditemdelegate_editorevent_isbase) {
            qstyleditemdelegate_editorevent_isbase = false;
            return QStyledItemDelegate::editorEvent(event, model, option, index);
        } else if (qstyleditemdelegate_editorevent_callback != nullptr) {
            return qstyleditemdelegate_editorevent_callback(this, event, model, option, index);
        } else {
            return QStyledItemDelegate::editorEvent(event, model, option, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void destroyEditor(QWidget* editor, const QModelIndex& index) const override {
        if (qstyleditemdelegate_destroyeditor_isbase) {
            qstyleditemdelegate_destroyeditor_isbase = false;
            QStyledItemDelegate::destroyEditor(editor, index);
        } else if (qstyleditemdelegate_destroyeditor_callback != nullptr) {
            qstyleditemdelegate_destroyeditor_callback(this, editor, index);
        } else {
            QStyledItemDelegate::destroyEditor(editor, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool helpEvent(QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem& option, const QModelIndex& index) override {
        if (qstyleditemdelegate_helpevent_isbase) {
            qstyleditemdelegate_helpevent_isbase = false;
            return QStyledItemDelegate::helpEvent(event, view, option, index);
        } else if (qstyleditemdelegate_helpevent_callback != nullptr) {
            return qstyleditemdelegate_helpevent_callback(this, event, view, option, index);
        } else {
            return QStyledItemDelegate::helpEvent(event, view, option, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<int> paintingRoles() const override {
        if (qstyleditemdelegate_paintingroles_isbase) {
            qstyleditemdelegate_paintingroles_isbase = false;
            return QStyledItemDelegate::paintingRoles();
        } else if (qstyleditemdelegate_paintingroles_callback != nullptr) {
            return qstyleditemdelegate_paintingroles_callback();
        } else {
            return QStyledItemDelegate::paintingRoles();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qstyleditemdelegate_event_isbase) {
            qstyleditemdelegate_event_isbase = false;
            return QStyledItemDelegate::event(event);
        } else if (qstyleditemdelegate_event_callback != nullptr) {
            return qstyleditemdelegate_event_callback(this, event);
        } else {
            return QStyledItemDelegate::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qstyleditemdelegate_timerevent_isbase) {
            qstyleditemdelegate_timerevent_isbase = false;
            QStyledItemDelegate::timerEvent(event);
        } else if (qstyleditemdelegate_timerevent_callback != nullptr) {
            qstyleditemdelegate_timerevent_callback(this, event);
        } else {
            QStyledItemDelegate::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qstyleditemdelegate_childevent_isbase) {
            qstyleditemdelegate_childevent_isbase = false;
            QStyledItemDelegate::childEvent(event);
        } else if (qstyleditemdelegate_childevent_callback != nullptr) {
            qstyleditemdelegate_childevent_callback(this, event);
        } else {
            QStyledItemDelegate::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qstyleditemdelegate_customevent_isbase) {
            qstyleditemdelegate_customevent_isbase = false;
            QStyledItemDelegate::customEvent(event);
        } else if (qstyleditemdelegate_customevent_callback != nullptr) {
            qstyleditemdelegate_customevent_callback(this, event);
        } else {
            QStyledItemDelegate::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qstyleditemdelegate_connectnotify_isbase) {
            qstyleditemdelegate_connectnotify_isbase = false;
            QStyledItemDelegate::connectNotify(signal);
        } else if (qstyleditemdelegate_connectnotify_callback != nullptr) {
            qstyleditemdelegate_connectnotify_callback(this, signal);
        } else {
            QStyledItemDelegate::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qstyleditemdelegate_disconnectnotify_isbase) {
            qstyleditemdelegate_disconnectnotify_isbase = false;
            QStyledItemDelegate::disconnectNotify(signal);
        } else if (qstyleditemdelegate_disconnectnotify_callback != nullptr) {
            qstyleditemdelegate_disconnectnotify_callback(this, signal);
        } else {
            QStyledItemDelegate::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qstyleditemdelegate_sender_isbase) {
            qstyleditemdelegate_sender_isbase = false;
            return QStyledItemDelegate::sender();
        } else if (qstyleditemdelegate_sender_callback != nullptr) {
            return qstyleditemdelegate_sender_callback();
        } else {
            return QStyledItemDelegate::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qstyleditemdelegate_sendersignalindex_isbase) {
            qstyleditemdelegate_sendersignalindex_isbase = false;
            return QStyledItemDelegate::senderSignalIndex();
        } else if (qstyleditemdelegate_sendersignalindex_callback != nullptr) {
            return qstyleditemdelegate_sendersignalindex_callback();
        } else {
            return QStyledItemDelegate::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qstyleditemdelegate_receivers_isbase) {
            qstyleditemdelegate_receivers_isbase = false;
            return QStyledItemDelegate::receivers(signal);
        } else if (qstyleditemdelegate_receivers_callback != nullptr) {
            return qstyleditemdelegate_receivers_callback(this, signal);
        } else {
            return QStyledItemDelegate::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qstyleditemdelegate_issignalconnected_isbase) {
            qstyleditemdelegate_issignalconnected_isbase = false;
            return QStyledItemDelegate::isSignalConnected(signal);
        } else if (qstyleditemdelegate_issignalconnected_callback != nullptr) {
            return qstyleditemdelegate_issignalconnected_callback(this, signal);
        } else {
            return QStyledItemDelegate::isSignalConnected(signal);
        }
    }
};

#endif
