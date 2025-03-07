#pragma once
#ifndef SRCC_LIBVIRTUALQITEMDELEGATE_H
#define SRCC_LIBVIRTUALQITEMDELEGATE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QItemDelegate so that we can call protected methods
class VirtualQItemDelegate : public QItemDelegate {

  public:
    // Virtual class public types (including callbacks)
    using QItemDelegate_Metacall_Callback = int (*)(QItemDelegate*, QMetaObject::Call, int, void**);
    using QItemDelegate_Paint_Callback = void (*)(const QItemDelegate*, QPainter*, const QStyleOptionViewItem&, const QModelIndex&);
    using QItemDelegate_SizeHint_Callback = QSize (*)(const QItemDelegate*, const QStyleOptionViewItem&, const QModelIndex&);
    using QItemDelegate_CreateEditor_Callback = QWidget* (*)(const QItemDelegate*, QWidget*, const QStyleOptionViewItem&, const QModelIndex&);
    using QItemDelegate_SetEditorData_Callback = void (*)(const QItemDelegate*, QWidget*, const QModelIndex&);
    using QItemDelegate_SetModelData_Callback = void (*)(const QItemDelegate*, QWidget*, QAbstractItemModel*, const QModelIndex&);
    using QItemDelegate_UpdateEditorGeometry_Callback = void (*)(const QItemDelegate*, QWidget*, const QStyleOptionViewItem&, const QModelIndex&);
    using QItemDelegate_DrawDisplay_Callback = void (*)(const QItemDelegate*, QPainter*, const QStyleOptionViewItem&, const QRect&, const QString&);
    using QItemDelegate_DrawDecoration_Callback = void (*)(const QItemDelegate*, QPainter*, const QStyleOptionViewItem&, const QRect&, const QPixmap&);
    using QItemDelegate_DrawFocus_Callback = void (*)(const QItemDelegate*, QPainter*, const QStyleOptionViewItem&, const QRect&);
    using QItemDelegate_DrawCheck_Callback = void (*)(const QItemDelegate*, QPainter*, const QStyleOptionViewItem&, const QRect&, Qt::CheckState);
    using QItemDelegate_EventFilter_Callback = bool (*)(QItemDelegate*, QObject*, QEvent*);
    using QItemDelegate_EditorEvent_Callback = bool (*)(QItemDelegate*, QEvent*, QAbstractItemModel*, const QStyleOptionViewItem&, const QModelIndex&);
    using QItemDelegate_DestroyEditor_Callback = void (*)(const QItemDelegate*, QWidget*, const QModelIndex&);
    using QItemDelegate_HelpEvent_Callback = bool (*)(QItemDelegate*, QHelpEvent*, QAbstractItemView*, const QStyleOptionViewItem&, const QModelIndex&);
    using QItemDelegate_PaintingRoles_Callback = QList<int> (*)();
    using QItemDelegate_Event_Callback = bool (*)(QItemDelegate*, QEvent*);
    using QItemDelegate_TimerEvent_Callback = void (*)(QItemDelegate*, QTimerEvent*);
    using QItemDelegate_ChildEvent_Callback = void (*)(QItemDelegate*, QChildEvent*);
    using QItemDelegate_CustomEvent_Callback = void (*)(QItemDelegate*, QEvent*);
    using QItemDelegate_ConnectNotify_Callback = void (*)(QItemDelegate*, const QMetaMethod&);
    using QItemDelegate_DisconnectNotify_Callback = void (*)(QItemDelegate*, const QMetaMethod&);
    using QItemDelegate_DrawBackground_Callback = void (*)(const QItemDelegate*, QPainter*, const QStyleOptionViewItem&, const QModelIndex&);
    using QItemDelegate_DoLayout_Callback = void (*)(const QItemDelegate*, const QStyleOptionViewItem&, QRect*, QRect*, QRect*, bool);
    using QItemDelegate_Rect_Callback = QRect (*)(const QItemDelegate*, const QStyleOptionViewItem&, const QModelIndex&, int);
    using QItemDelegate_SetOptions_Callback = QStyleOptionViewItem (*)(const QItemDelegate*, const QModelIndex&, const QStyleOptionViewItem&);
    using QItemDelegate_Decoration_Callback = QPixmap (*)(const QItemDelegate*, const QStyleOptionViewItem&, const QVariant&);
    using QItemDelegate_DoCheck_Callback = QRect (*)(const QItemDelegate*, const QStyleOptionViewItem&, const QRect&, const QVariant&);
    using QItemDelegate_TextRectangle_Callback = QRect (*)(const QItemDelegate*, QPainter*, const QRect&, const QFont&, const QString&);
    using QItemDelegate_Sender_Callback = QObject* (*)();
    using QItemDelegate_SenderSignalIndex_Callback = int (*)();
    using QItemDelegate_Receivers_Callback = int (*)(const QItemDelegate*, const char*);
    using QItemDelegate_IsSignalConnected_Callback = bool (*)(const QItemDelegate*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QItemDelegate_Metacall_Callback qitemdelegate_metacall_callback = nullptr;
    QItemDelegate_Paint_Callback qitemdelegate_paint_callback = nullptr;
    QItemDelegate_SizeHint_Callback qitemdelegate_sizehint_callback = nullptr;
    QItemDelegate_CreateEditor_Callback qitemdelegate_createeditor_callback = nullptr;
    QItemDelegate_SetEditorData_Callback qitemdelegate_seteditordata_callback = nullptr;
    QItemDelegate_SetModelData_Callback qitemdelegate_setmodeldata_callback = nullptr;
    QItemDelegate_UpdateEditorGeometry_Callback qitemdelegate_updateeditorgeometry_callback = nullptr;
    QItemDelegate_DrawDisplay_Callback qitemdelegate_drawdisplay_callback = nullptr;
    QItemDelegate_DrawDecoration_Callback qitemdelegate_drawdecoration_callback = nullptr;
    QItemDelegate_DrawFocus_Callback qitemdelegate_drawfocus_callback = nullptr;
    QItemDelegate_DrawCheck_Callback qitemdelegate_drawcheck_callback = nullptr;
    QItemDelegate_EventFilter_Callback qitemdelegate_eventfilter_callback = nullptr;
    QItemDelegate_EditorEvent_Callback qitemdelegate_editorevent_callback = nullptr;
    QItemDelegate_DestroyEditor_Callback qitemdelegate_destroyeditor_callback = nullptr;
    QItemDelegate_HelpEvent_Callback qitemdelegate_helpevent_callback = nullptr;
    QItemDelegate_PaintingRoles_Callback qitemdelegate_paintingroles_callback = nullptr;
    QItemDelegate_Event_Callback qitemdelegate_event_callback = nullptr;
    QItemDelegate_TimerEvent_Callback qitemdelegate_timerevent_callback = nullptr;
    QItemDelegate_ChildEvent_Callback qitemdelegate_childevent_callback = nullptr;
    QItemDelegate_CustomEvent_Callback qitemdelegate_customevent_callback = nullptr;
    QItemDelegate_ConnectNotify_Callback qitemdelegate_connectnotify_callback = nullptr;
    QItemDelegate_DisconnectNotify_Callback qitemdelegate_disconnectnotify_callback = nullptr;
    QItemDelegate_DrawBackground_Callback qitemdelegate_drawbackground_callback = nullptr;
    QItemDelegate_DoLayout_Callback qitemdelegate_dolayout_callback = nullptr;
    QItemDelegate_Rect_Callback qitemdelegate_rect_callback = nullptr;
    QItemDelegate_SetOptions_Callback qitemdelegate_setoptions_callback = nullptr;
    QItemDelegate_Decoration_Callback qitemdelegate_decoration_callback = nullptr;
    QItemDelegate_DoCheck_Callback qitemdelegate_docheck_callback = nullptr;
    QItemDelegate_TextRectangle_Callback qitemdelegate_textrectangle_callback = nullptr;
    QItemDelegate_Sender_Callback qitemdelegate_sender_callback = nullptr;
    QItemDelegate_SenderSignalIndex_Callback qitemdelegate_sendersignalindex_callback = nullptr;
    QItemDelegate_Receivers_Callback qitemdelegate_receivers_callback = nullptr;
    QItemDelegate_IsSignalConnected_Callback qitemdelegate_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qitemdelegate_metacall_isbase = false;
    mutable bool qitemdelegate_paint_isbase = false;
    mutable bool qitemdelegate_sizehint_isbase = false;
    mutable bool qitemdelegate_createeditor_isbase = false;
    mutable bool qitemdelegate_seteditordata_isbase = false;
    mutable bool qitemdelegate_setmodeldata_isbase = false;
    mutable bool qitemdelegate_updateeditorgeometry_isbase = false;
    mutable bool qitemdelegate_drawdisplay_isbase = false;
    mutable bool qitemdelegate_drawdecoration_isbase = false;
    mutable bool qitemdelegate_drawfocus_isbase = false;
    mutable bool qitemdelegate_drawcheck_isbase = false;
    mutable bool qitemdelegate_eventfilter_isbase = false;
    mutable bool qitemdelegate_editorevent_isbase = false;
    mutable bool qitemdelegate_destroyeditor_isbase = false;
    mutable bool qitemdelegate_helpevent_isbase = false;
    mutable bool qitemdelegate_paintingroles_isbase = false;
    mutable bool qitemdelegate_event_isbase = false;
    mutable bool qitemdelegate_timerevent_isbase = false;
    mutable bool qitemdelegate_childevent_isbase = false;
    mutable bool qitemdelegate_customevent_isbase = false;
    mutable bool qitemdelegate_connectnotify_isbase = false;
    mutable bool qitemdelegate_disconnectnotify_isbase = false;
    mutable bool qitemdelegate_drawbackground_isbase = false;
    mutable bool qitemdelegate_dolayout_isbase = false;
    mutable bool qitemdelegate_rect_isbase = false;
    mutable bool qitemdelegate_setoptions_isbase = false;
    mutable bool qitemdelegate_decoration_isbase = false;
    mutable bool qitemdelegate_docheck_isbase = false;
    mutable bool qitemdelegate_textrectangle_isbase = false;
    mutable bool qitemdelegate_sender_isbase = false;
    mutable bool qitemdelegate_sendersignalindex_isbase = false;
    mutable bool qitemdelegate_receivers_isbase = false;
    mutable bool qitemdelegate_issignalconnected_isbase = false;

  public:
    VirtualQItemDelegate() : QItemDelegate(){};
    VirtualQItemDelegate(QObject* parent) : QItemDelegate(parent){};

    ~VirtualQItemDelegate() {
        qitemdelegate_metacall_callback = nullptr;
        qitemdelegate_paint_callback = nullptr;
        qitemdelegate_sizehint_callback = nullptr;
        qitemdelegate_createeditor_callback = nullptr;
        qitemdelegate_seteditordata_callback = nullptr;
        qitemdelegate_setmodeldata_callback = nullptr;
        qitemdelegate_updateeditorgeometry_callback = nullptr;
        qitemdelegate_drawdisplay_callback = nullptr;
        qitemdelegate_drawdecoration_callback = nullptr;
        qitemdelegate_drawfocus_callback = nullptr;
        qitemdelegate_drawcheck_callback = nullptr;
        qitemdelegate_eventfilter_callback = nullptr;
        qitemdelegate_editorevent_callback = nullptr;
        qitemdelegate_destroyeditor_callback = nullptr;
        qitemdelegate_helpevent_callback = nullptr;
        qitemdelegate_paintingroles_callback = nullptr;
        qitemdelegate_event_callback = nullptr;
        qitemdelegate_timerevent_callback = nullptr;
        qitemdelegate_childevent_callback = nullptr;
        qitemdelegate_customevent_callback = nullptr;
        qitemdelegate_connectnotify_callback = nullptr;
        qitemdelegate_disconnectnotify_callback = nullptr;
        qitemdelegate_drawbackground_callback = nullptr;
        qitemdelegate_dolayout_callback = nullptr;
        qitemdelegate_rect_callback = nullptr;
        qitemdelegate_setoptions_callback = nullptr;
        qitemdelegate_decoration_callback = nullptr;
        qitemdelegate_docheck_callback = nullptr;
        qitemdelegate_textrectangle_callback = nullptr;
        qitemdelegate_sender_callback = nullptr;
        qitemdelegate_sendersignalindex_callback = nullptr;
        qitemdelegate_receivers_callback = nullptr;
        qitemdelegate_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQItemDelegate_Metacall_Callback(QItemDelegate_Metacall_Callback cb) { qitemdelegate_metacall_callback = cb; }
    void setQItemDelegate_Paint_Callback(QItemDelegate_Paint_Callback cb) { qitemdelegate_paint_callback = cb; }
    void setQItemDelegate_SizeHint_Callback(QItemDelegate_SizeHint_Callback cb) { qitemdelegate_sizehint_callback = cb; }
    void setQItemDelegate_CreateEditor_Callback(QItemDelegate_CreateEditor_Callback cb) { qitemdelegate_createeditor_callback = cb; }
    void setQItemDelegate_SetEditorData_Callback(QItemDelegate_SetEditorData_Callback cb) { qitemdelegate_seteditordata_callback = cb; }
    void setQItemDelegate_SetModelData_Callback(QItemDelegate_SetModelData_Callback cb) { qitemdelegate_setmodeldata_callback = cb; }
    void setQItemDelegate_UpdateEditorGeometry_Callback(QItemDelegate_UpdateEditorGeometry_Callback cb) { qitemdelegate_updateeditorgeometry_callback = cb; }
    void setQItemDelegate_DrawDisplay_Callback(QItemDelegate_DrawDisplay_Callback cb) { qitemdelegate_drawdisplay_callback = cb; }
    void setQItemDelegate_DrawDecoration_Callback(QItemDelegate_DrawDecoration_Callback cb) { qitemdelegate_drawdecoration_callback = cb; }
    void setQItemDelegate_DrawFocus_Callback(QItemDelegate_DrawFocus_Callback cb) { qitemdelegate_drawfocus_callback = cb; }
    void setQItemDelegate_DrawCheck_Callback(QItemDelegate_DrawCheck_Callback cb) { qitemdelegate_drawcheck_callback = cb; }
    void setQItemDelegate_EventFilter_Callback(QItemDelegate_EventFilter_Callback cb) { qitemdelegate_eventfilter_callback = cb; }
    void setQItemDelegate_EditorEvent_Callback(QItemDelegate_EditorEvent_Callback cb) { qitemdelegate_editorevent_callback = cb; }
    void setQItemDelegate_DestroyEditor_Callback(QItemDelegate_DestroyEditor_Callback cb) { qitemdelegate_destroyeditor_callback = cb; }
    void setQItemDelegate_HelpEvent_Callback(QItemDelegate_HelpEvent_Callback cb) { qitemdelegate_helpevent_callback = cb; }
    void setQItemDelegate_PaintingRoles_Callback(QItemDelegate_PaintingRoles_Callback cb) { qitemdelegate_paintingroles_callback = cb; }
    void setQItemDelegate_Event_Callback(QItemDelegate_Event_Callback cb) { qitemdelegate_event_callback = cb; }
    void setQItemDelegate_TimerEvent_Callback(QItemDelegate_TimerEvent_Callback cb) { qitemdelegate_timerevent_callback = cb; }
    void setQItemDelegate_ChildEvent_Callback(QItemDelegate_ChildEvent_Callback cb) { qitemdelegate_childevent_callback = cb; }
    void setQItemDelegate_CustomEvent_Callback(QItemDelegate_CustomEvent_Callback cb) { qitemdelegate_customevent_callback = cb; }
    void setQItemDelegate_ConnectNotify_Callback(QItemDelegate_ConnectNotify_Callback cb) { qitemdelegate_connectnotify_callback = cb; }
    void setQItemDelegate_DisconnectNotify_Callback(QItemDelegate_DisconnectNotify_Callback cb) { qitemdelegate_disconnectnotify_callback = cb; }
    void setQItemDelegate_DrawBackground_Callback(QItemDelegate_DrawBackground_Callback cb) { qitemdelegate_drawbackground_callback = cb; }
    void setQItemDelegate_DoLayout_Callback(QItemDelegate_DoLayout_Callback cb) { qitemdelegate_dolayout_callback = cb; }
    void setQItemDelegate_Rect_Callback(QItemDelegate_Rect_Callback cb) { qitemdelegate_rect_callback = cb; }
    void setQItemDelegate_SetOptions_Callback(QItemDelegate_SetOptions_Callback cb) { qitemdelegate_setoptions_callback = cb; }
    void setQItemDelegate_Decoration_Callback(QItemDelegate_Decoration_Callback cb) { qitemdelegate_decoration_callback = cb; }
    void setQItemDelegate_DoCheck_Callback(QItemDelegate_DoCheck_Callback cb) { qitemdelegate_docheck_callback = cb; }
    void setQItemDelegate_TextRectangle_Callback(QItemDelegate_TextRectangle_Callback cb) { qitemdelegate_textrectangle_callback = cb; }
    void setQItemDelegate_Sender_Callback(QItemDelegate_Sender_Callback cb) { qitemdelegate_sender_callback = cb; }
    void setQItemDelegate_SenderSignalIndex_Callback(QItemDelegate_SenderSignalIndex_Callback cb) { qitemdelegate_sendersignalindex_callback = cb; }
    void setQItemDelegate_Receivers_Callback(QItemDelegate_Receivers_Callback cb) { qitemdelegate_receivers_callback = cb; }
    void setQItemDelegate_IsSignalConnected_Callback(QItemDelegate_IsSignalConnected_Callback cb) { qitemdelegate_issignalconnected_callback = cb; }

    // Base flag setters
    void setQItemDelegate_Metacall_IsBase(bool value) const { qitemdelegate_metacall_isbase = value; }
    void setQItemDelegate_Paint_IsBase(bool value) const { qitemdelegate_paint_isbase = value; }
    void setQItemDelegate_SizeHint_IsBase(bool value) const { qitemdelegate_sizehint_isbase = value; }
    void setQItemDelegate_CreateEditor_IsBase(bool value) const { qitemdelegate_createeditor_isbase = value; }
    void setQItemDelegate_SetEditorData_IsBase(bool value) const { qitemdelegate_seteditordata_isbase = value; }
    void setQItemDelegate_SetModelData_IsBase(bool value) const { qitemdelegate_setmodeldata_isbase = value; }
    void setQItemDelegate_UpdateEditorGeometry_IsBase(bool value) const { qitemdelegate_updateeditorgeometry_isbase = value; }
    void setQItemDelegate_DrawDisplay_IsBase(bool value) const { qitemdelegate_drawdisplay_isbase = value; }
    void setQItemDelegate_DrawDecoration_IsBase(bool value) const { qitemdelegate_drawdecoration_isbase = value; }
    void setQItemDelegate_DrawFocus_IsBase(bool value) const { qitemdelegate_drawfocus_isbase = value; }
    void setQItemDelegate_DrawCheck_IsBase(bool value) const { qitemdelegate_drawcheck_isbase = value; }
    void setQItemDelegate_EventFilter_IsBase(bool value) const { qitemdelegate_eventfilter_isbase = value; }
    void setQItemDelegate_EditorEvent_IsBase(bool value) const { qitemdelegate_editorevent_isbase = value; }
    void setQItemDelegate_DestroyEditor_IsBase(bool value) const { qitemdelegate_destroyeditor_isbase = value; }
    void setQItemDelegate_HelpEvent_IsBase(bool value) const { qitemdelegate_helpevent_isbase = value; }
    void setQItemDelegate_PaintingRoles_IsBase(bool value) const { qitemdelegate_paintingroles_isbase = value; }
    void setQItemDelegate_Event_IsBase(bool value) const { qitemdelegate_event_isbase = value; }
    void setQItemDelegate_TimerEvent_IsBase(bool value) const { qitemdelegate_timerevent_isbase = value; }
    void setQItemDelegate_ChildEvent_IsBase(bool value) const { qitemdelegate_childevent_isbase = value; }
    void setQItemDelegate_CustomEvent_IsBase(bool value) const { qitemdelegate_customevent_isbase = value; }
    void setQItemDelegate_ConnectNotify_IsBase(bool value) const { qitemdelegate_connectnotify_isbase = value; }
    void setQItemDelegate_DisconnectNotify_IsBase(bool value) const { qitemdelegate_disconnectnotify_isbase = value; }
    void setQItemDelegate_DrawBackground_IsBase(bool value) const { qitemdelegate_drawbackground_isbase = value; }
    void setQItemDelegate_DoLayout_IsBase(bool value) const { qitemdelegate_dolayout_isbase = value; }
    void setQItemDelegate_Rect_IsBase(bool value) const { qitemdelegate_rect_isbase = value; }
    void setQItemDelegate_SetOptions_IsBase(bool value) const { qitemdelegate_setoptions_isbase = value; }
    void setQItemDelegate_Decoration_IsBase(bool value) const { qitemdelegate_decoration_isbase = value; }
    void setQItemDelegate_DoCheck_IsBase(bool value) const { qitemdelegate_docheck_isbase = value; }
    void setQItemDelegate_TextRectangle_IsBase(bool value) const { qitemdelegate_textrectangle_isbase = value; }
    void setQItemDelegate_Sender_IsBase(bool value) const { qitemdelegate_sender_isbase = value; }
    void setQItemDelegate_SenderSignalIndex_IsBase(bool value) const { qitemdelegate_sendersignalindex_isbase = value; }
    void setQItemDelegate_Receivers_IsBase(bool value) const { qitemdelegate_receivers_isbase = value; }
    void setQItemDelegate_IsSignalConnected_IsBase(bool value) const { qitemdelegate_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qitemdelegate_metacall_isbase) {
            qitemdelegate_metacall_isbase = false;
            return QItemDelegate::qt_metacall(param1, param2, param3);
        } else if (qitemdelegate_metacall_callback != nullptr) {
            return qitemdelegate_metacall_callback(this, param1, param2, param3);
        } else {
            return QItemDelegate::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        if (qitemdelegate_paint_isbase) {
            qitemdelegate_paint_isbase = false;
            QItemDelegate::paint(painter, option, index);
        } else if (qitemdelegate_paint_callback != nullptr) {
            qitemdelegate_paint_callback(this, painter, option, index);
        } else {
            QItemDelegate::paint(painter, option, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint(const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        if (qitemdelegate_sizehint_isbase) {
            qitemdelegate_sizehint_isbase = false;
            return QItemDelegate::sizeHint(option, index);
        } else if (qitemdelegate_sizehint_callback != nullptr) {
            return qitemdelegate_sizehint_callback(this, option, index);
        } else {
            return QItemDelegate::sizeHint(option, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createEditor(QWidget* parent, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        if (qitemdelegate_createeditor_isbase) {
            qitemdelegate_createeditor_isbase = false;
            return QItemDelegate::createEditor(parent, option, index);
        } else if (qitemdelegate_createeditor_callback != nullptr) {
            return qitemdelegate_createeditor_callback(this, parent, option, index);
        } else {
            return QItemDelegate::createEditor(parent, option, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditorData(QWidget* editor, const QModelIndex& index) const override {
        if (qitemdelegate_seteditordata_isbase) {
            qitemdelegate_seteditordata_isbase = false;
            QItemDelegate::setEditorData(editor, index);
        } else if (qitemdelegate_seteditordata_callback != nullptr) {
            qitemdelegate_seteditordata_callback(this, editor, index);
        } else {
            QItemDelegate::setEditorData(editor, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModelData(QWidget* editor, QAbstractItemModel* model, const QModelIndex& index) const override {
        if (qitemdelegate_setmodeldata_isbase) {
            qitemdelegate_setmodeldata_isbase = false;
            QItemDelegate::setModelData(editor, model, index);
        } else if (qitemdelegate_setmodeldata_callback != nullptr) {
            qitemdelegate_setmodeldata_callback(this, editor, model, index);
        } else {
            QItemDelegate::setModelData(editor, model, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorGeometry(QWidget* editor, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
        if (qitemdelegate_updateeditorgeometry_isbase) {
            qitemdelegate_updateeditorgeometry_isbase = false;
            QItemDelegate::updateEditorGeometry(editor, option, index);
        } else if (qitemdelegate_updateeditorgeometry_callback != nullptr) {
            qitemdelegate_updateeditorgeometry_callback(this, editor, option, index);
        } else {
            QItemDelegate::updateEditorGeometry(editor, option, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawDisplay(QPainter* painter, const QStyleOptionViewItem& option, const QRect& rect, const QString& text) const override {
        if (qitemdelegate_drawdisplay_isbase) {
            qitemdelegate_drawdisplay_isbase = false;
            QItemDelegate::drawDisplay(painter, option, rect, text);
        } else if (qitemdelegate_drawdisplay_callback != nullptr) {
            qitemdelegate_drawdisplay_callback(this, painter, option, rect, text);
        } else {
            QItemDelegate::drawDisplay(painter, option, rect, text);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawDecoration(QPainter* painter, const QStyleOptionViewItem& option, const QRect& rect, const QPixmap& pixmap) const override {
        if (qitemdelegate_drawdecoration_isbase) {
            qitemdelegate_drawdecoration_isbase = false;
            QItemDelegate::drawDecoration(painter, option, rect, pixmap);
        } else if (qitemdelegate_drawdecoration_callback != nullptr) {
            qitemdelegate_drawdecoration_callback(this, painter, option, rect, pixmap);
        } else {
            QItemDelegate::drawDecoration(painter, option, rect, pixmap);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawFocus(QPainter* painter, const QStyleOptionViewItem& option, const QRect& rect) const override {
        if (qitemdelegate_drawfocus_isbase) {
            qitemdelegate_drawfocus_isbase = false;
            QItemDelegate::drawFocus(painter, option, rect);
        } else if (qitemdelegate_drawfocus_callback != nullptr) {
            qitemdelegate_drawfocus_callback(this, painter, option, rect);
        } else {
            QItemDelegate::drawFocus(painter, option, rect);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawCheck(QPainter* painter, const QStyleOptionViewItem& option, const QRect& rect, Qt::CheckState state) const override {
        if (qitemdelegate_drawcheck_isbase) {
            qitemdelegate_drawcheck_isbase = false;
            QItemDelegate::drawCheck(painter, option, rect, state);
        } else if (qitemdelegate_drawcheck_callback != nullptr) {
            qitemdelegate_drawcheck_callback(this, painter, option, rect, state);
        } else {
            QItemDelegate::drawCheck(painter, option, rect, state);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (qitemdelegate_eventfilter_isbase) {
            qitemdelegate_eventfilter_isbase = false;
            return QItemDelegate::eventFilter(object, event);
        } else if (qitemdelegate_eventfilter_callback != nullptr) {
            return qitemdelegate_eventfilter_callback(this, object, event);
        } else {
            return QItemDelegate::eventFilter(object, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool editorEvent(QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem& option, const QModelIndex& index) override {
        if (qitemdelegate_editorevent_isbase) {
            qitemdelegate_editorevent_isbase = false;
            return QItemDelegate::editorEvent(event, model, option, index);
        } else if (qitemdelegate_editorevent_callback != nullptr) {
            return qitemdelegate_editorevent_callback(this, event, model, option, index);
        } else {
            return QItemDelegate::editorEvent(event, model, option, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void destroyEditor(QWidget* editor, const QModelIndex& index) const override {
        if (qitemdelegate_destroyeditor_isbase) {
            qitemdelegate_destroyeditor_isbase = false;
            QItemDelegate::destroyEditor(editor, index);
        } else if (qitemdelegate_destroyeditor_callback != nullptr) {
            qitemdelegate_destroyeditor_callback(this, editor, index);
        } else {
            QItemDelegate::destroyEditor(editor, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool helpEvent(QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem& option, const QModelIndex& index) override {
        if (qitemdelegate_helpevent_isbase) {
            qitemdelegate_helpevent_isbase = false;
            return QItemDelegate::helpEvent(event, view, option, index);
        } else if (qitemdelegate_helpevent_callback != nullptr) {
            return qitemdelegate_helpevent_callback(this, event, view, option, index);
        } else {
            return QItemDelegate::helpEvent(event, view, option, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<int> paintingRoles() const override {
        if (qitemdelegate_paintingroles_isbase) {
            qitemdelegate_paintingroles_isbase = false;
            return QItemDelegate::paintingRoles();
        } else if (qitemdelegate_paintingroles_callback != nullptr) {
            return qitemdelegate_paintingroles_callback();
        } else {
            return QItemDelegate::paintingRoles();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qitemdelegate_event_isbase) {
            qitemdelegate_event_isbase = false;
            return QItemDelegate::event(event);
        } else if (qitemdelegate_event_callback != nullptr) {
            return qitemdelegate_event_callback(this, event);
        } else {
            return QItemDelegate::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qitemdelegate_timerevent_isbase) {
            qitemdelegate_timerevent_isbase = false;
            QItemDelegate::timerEvent(event);
        } else if (qitemdelegate_timerevent_callback != nullptr) {
            qitemdelegate_timerevent_callback(this, event);
        } else {
            QItemDelegate::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qitemdelegate_childevent_isbase) {
            qitemdelegate_childevent_isbase = false;
            QItemDelegate::childEvent(event);
        } else if (qitemdelegate_childevent_callback != nullptr) {
            qitemdelegate_childevent_callback(this, event);
        } else {
            QItemDelegate::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qitemdelegate_customevent_isbase) {
            qitemdelegate_customevent_isbase = false;
            QItemDelegate::customEvent(event);
        } else if (qitemdelegate_customevent_callback != nullptr) {
            qitemdelegate_customevent_callback(this, event);
        } else {
            QItemDelegate::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qitemdelegate_connectnotify_isbase) {
            qitemdelegate_connectnotify_isbase = false;
            QItemDelegate::connectNotify(signal);
        } else if (qitemdelegate_connectnotify_callback != nullptr) {
            qitemdelegate_connectnotify_callback(this, signal);
        } else {
            QItemDelegate::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qitemdelegate_disconnectnotify_isbase) {
            qitemdelegate_disconnectnotify_isbase = false;
            QItemDelegate::disconnectNotify(signal);
        } else if (qitemdelegate_disconnectnotify_callback != nullptr) {
            qitemdelegate_disconnectnotify_callback(this, signal);
        } else {
            QItemDelegate::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void drawBackground(QPainter* painter, const QStyleOptionViewItem& option, const QModelIndex& index) const {
        if (qitemdelegate_drawbackground_isbase) {
            qitemdelegate_drawbackground_isbase = false;
            QItemDelegate::drawBackground(painter, option, index);
        } else if (qitemdelegate_drawbackground_callback != nullptr) {
            qitemdelegate_drawbackground_callback(this, painter, option, index);
        } else {
            QItemDelegate::drawBackground(painter, option, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    void doLayout(const QStyleOptionViewItem& option, QRect* checkRect, QRect* iconRect, QRect* textRect, bool hint) const {
        if (qitemdelegate_dolayout_isbase) {
            qitemdelegate_dolayout_isbase = false;
            QItemDelegate::doLayout(option, checkRect, iconRect, textRect, hint);
        } else if (qitemdelegate_dolayout_callback != nullptr) {
            qitemdelegate_dolayout_callback(this, option, checkRect, iconRect, textRect, hint);
        } else {
            QItemDelegate::doLayout(option, checkRect, iconRect, textRect, hint);
        }
    }

    // Virtual method for C ABI access and custom callback
    QRect rect(const QStyleOptionViewItem& option, const QModelIndex& index, int role) const {
        if (qitemdelegate_rect_isbase) {
            qitemdelegate_rect_isbase = false;
            return QItemDelegate::rect(option, index, role);
        } else if (qitemdelegate_rect_callback != nullptr) {
            return qitemdelegate_rect_callback(this, option, index, role);
        } else {
            return QItemDelegate::rect(option, index, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    QStyleOptionViewItem setOptions(const QModelIndex& index, const QStyleOptionViewItem& option) const {
        if (qitemdelegate_setoptions_isbase) {
            qitemdelegate_setoptions_isbase = false;
            return QItemDelegate::setOptions(index, option);
        } else if (qitemdelegate_setoptions_callback != nullptr) {
            return qitemdelegate_setoptions_callback(this, index, option);
        } else {
            return QItemDelegate::setOptions(index, option);
        }
    }

    // Virtual method for C ABI access and custom callback
    QPixmap decoration(const QStyleOptionViewItem& option, const QVariant& variant) const {
        if (qitemdelegate_decoration_isbase) {
            qitemdelegate_decoration_isbase = false;
            return QItemDelegate::decoration(option, variant);
        } else if (qitemdelegate_decoration_callback != nullptr) {
            return qitemdelegate_decoration_callback(this, option, variant);
        } else {
            return QItemDelegate::decoration(option, variant);
        }
    }

    // Virtual method for C ABI access and custom callback
    QRect doCheck(const QStyleOptionViewItem& option, const QRect& bounding, const QVariant& variant) const {
        if (qitemdelegate_docheck_isbase) {
            qitemdelegate_docheck_isbase = false;
            return QItemDelegate::doCheck(option, bounding, variant);
        } else if (qitemdelegate_docheck_callback != nullptr) {
            return qitemdelegate_docheck_callback(this, option, bounding, variant);
        } else {
            return QItemDelegate::doCheck(option, bounding, variant);
        }
    }

    // Virtual method for C ABI access and custom callback
    QRect textRectangle(QPainter* painter, const QRect& rect, const QFont& font, const QString& text) const {
        if (qitemdelegate_textrectangle_isbase) {
            qitemdelegate_textrectangle_isbase = false;
            return QItemDelegate::textRectangle(painter, rect, font, text);
        } else if (qitemdelegate_textrectangle_callback != nullptr) {
            return qitemdelegate_textrectangle_callback(this, painter, rect, font, text);
        } else {
            return QItemDelegate::textRectangle(painter, rect, font, text);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qitemdelegate_sender_isbase) {
            qitemdelegate_sender_isbase = false;
            return QItemDelegate::sender();
        } else if (qitemdelegate_sender_callback != nullptr) {
            return qitemdelegate_sender_callback();
        } else {
            return QItemDelegate::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qitemdelegate_sendersignalindex_isbase) {
            qitemdelegate_sendersignalindex_isbase = false;
            return QItemDelegate::senderSignalIndex();
        } else if (qitemdelegate_sendersignalindex_callback != nullptr) {
            return qitemdelegate_sendersignalindex_callback();
        } else {
            return QItemDelegate::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qitemdelegate_receivers_isbase) {
            qitemdelegate_receivers_isbase = false;
            return QItemDelegate::receivers(signal);
        } else if (qitemdelegate_receivers_callback != nullptr) {
            return qitemdelegate_receivers_callback(this, signal);
        } else {
            return QItemDelegate::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qitemdelegate_issignalconnected_isbase) {
            qitemdelegate_issignalconnected_isbase = false;
            return QItemDelegate::isSignalConnected(signal);
        } else if (qitemdelegate_issignalconnected_callback != nullptr) {
            return qitemdelegate_issignalconnected_callback(this, signal);
        } else {
            return QItemDelegate::isSignalConnected(signal);
        }
    }
};

#endif
