#pragma once
#ifndef SRCC_LIBVIRTUALQGRAPHICSSCENE_H
#define SRCC_LIBVIRTUALQGRAPHICSSCENE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QGraphicsScene so that we can call protected methods
class VirtualQGraphicsScene : public QGraphicsScene {

  public:
    // Virtual class public types (including callbacks)
    using QGraphicsScene_Metacall_Callback = int (*)(QGraphicsScene*, QMetaObject::Call, int, void**);
    using QGraphicsScene_InputMethodQuery_Callback = QVariant (*)(const QGraphicsScene*, Qt::InputMethodQuery);
    using QGraphicsScene_Event_Callback = bool (*)(QGraphicsScene*, QEvent*);
    using QGraphicsScene_EventFilter_Callback = bool (*)(QGraphicsScene*, QObject*, QEvent*);
    using QGraphicsScene_ContextMenuEvent_Callback = void (*)(QGraphicsScene*, QGraphicsSceneContextMenuEvent*);
    using QGraphicsScene_DragEnterEvent_Callback = void (*)(QGraphicsScene*, QGraphicsSceneDragDropEvent*);
    using QGraphicsScene_DragMoveEvent_Callback = void (*)(QGraphicsScene*, QGraphicsSceneDragDropEvent*);
    using QGraphicsScene_DragLeaveEvent_Callback = void (*)(QGraphicsScene*, QGraphicsSceneDragDropEvent*);
    using QGraphicsScene_DropEvent_Callback = void (*)(QGraphicsScene*, QGraphicsSceneDragDropEvent*);
    using QGraphicsScene_FocusInEvent_Callback = void (*)(QGraphicsScene*, QFocusEvent*);
    using QGraphicsScene_FocusOutEvent_Callback = void (*)(QGraphicsScene*, QFocusEvent*);
    using QGraphicsScene_HelpEvent_Callback = void (*)(QGraphicsScene*, QGraphicsSceneHelpEvent*);
    using QGraphicsScene_KeyPressEvent_Callback = void (*)(QGraphicsScene*, QKeyEvent*);
    using QGraphicsScene_KeyReleaseEvent_Callback = void (*)(QGraphicsScene*, QKeyEvent*);
    using QGraphicsScene_MousePressEvent_Callback = void (*)(QGraphicsScene*, QGraphicsSceneMouseEvent*);
    using QGraphicsScene_MouseMoveEvent_Callback = void (*)(QGraphicsScene*, QGraphicsSceneMouseEvent*);
    using QGraphicsScene_MouseReleaseEvent_Callback = void (*)(QGraphicsScene*, QGraphicsSceneMouseEvent*);
    using QGraphicsScene_MouseDoubleClickEvent_Callback = void (*)(QGraphicsScene*, QGraphicsSceneMouseEvent*);
    using QGraphicsScene_WheelEvent_Callback = void (*)(QGraphicsScene*, QGraphicsSceneWheelEvent*);
    using QGraphicsScene_InputMethodEvent_Callback = void (*)(QGraphicsScene*, QInputMethodEvent*);
    using QGraphicsScene_DrawBackground_Callback = void (*)(QGraphicsScene*, QPainter*, const QRectF&);
    using QGraphicsScene_DrawForeground_Callback = void (*)(QGraphicsScene*, QPainter*, const QRectF&);
    using QGraphicsScene_FocusNextPrevChild_Callback = bool (*)(QGraphicsScene*, bool);
    using QGraphicsScene_TimerEvent_Callback = void (*)(QGraphicsScene*, QTimerEvent*);
    using QGraphicsScene_ChildEvent_Callback = void (*)(QGraphicsScene*, QChildEvent*);
    using QGraphicsScene_CustomEvent_Callback = void (*)(QGraphicsScene*, QEvent*);
    using QGraphicsScene_ConnectNotify_Callback = void (*)(QGraphicsScene*, const QMetaMethod&);
    using QGraphicsScene_DisconnectNotify_Callback = void (*)(QGraphicsScene*, const QMetaMethod&);
    using QGraphicsScene_Sender_Callback = QObject* (*)();
    using QGraphicsScene_SenderSignalIndex_Callback = int (*)();
    using QGraphicsScene_Receivers_Callback = int (*)(const QGraphicsScene*, const char*);
    using QGraphicsScene_IsSignalConnected_Callback = bool (*)(const QGraphicsScene*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QGraphicsScene_Metacall_Callback qgraphicsscene_metacall_callback = nullptr;
    QGraphicsScene_InputMethodQuery_Callback qgraphicsscene_inputmethodquery_callback = nullptr;
    QGraphicsScene_Event_Callback qgraphicsscene_event_callback = nullptr;
    QGraphicsScene_EventFilter_Callback qgraphicsscene_eventfilter_callback = nullptr;
    QGraphicsScene_ContextMenuEvent_Callback qgraphicsscene_contextmenuevent_callback = nullptr;
    QGraphicsScene_DragEnterEvent_Callback qgraphicsscene_dragenterevent_callback = nullptr;
    QGraphicsScene_DragMoveEvent_Callback qgraphicsscene_dragmoveevent_callback = nullptr;
    QGraphicsScene_DragLeaveEvent_Callback qgraphicsscene_dragleaveevent_callback = nullptr;
    QGraphicsScene_DropEvent_Callback qgraphicsscene_dropevent_callback = nullptr;
    QGraphicsScene_FocusInEvent_Callback qgraphicsscene_focusinevent_callback = nullptr;
    QGraphicsScene_FocusOutEvent_Callback qgraphicsscene_focusoutevent_callback = nullptr;
    QGraphicsScene_HelpEvent_Callback qgraphicsscene_helpevent_callback = nullptr;
    QGraphicsScene_KeyPressEvent_Callback qgraphicsscene_keypressevent_callback = nullptr;
    QGraphicsScene_KeyReleaseEvent_Callback qgraphicsscene_keyreleaseevent_callback = nullptr;
    QGraphicsScene_MousePressEvent_Callback qgraphicsscene_mousepressevent_callback = nullptr;
    QGraphicsScene_MouseMoveEvent_Callback qgraphicsscene_mousemoveevent_callback = nullptr;
    QGraphicsScene_MouseReleaseEvent_Callback qgraphicsscene_mousereleaseevent_callback = nullptr;
    QGraphicsScene_MouseDoubleClickEvent_Callback qgraphicsscene_mousedoubleclickevent_callback = nullptr;
    QGraphicsScene_WheelEvent_Callback qgraphicsscene_wheelevent_callback = nullptr;
    QGraphicsScene_InputMethodEvent_Callback qgraphicsscene_inputmethodevent_callback = nullptr;
    QGraphicsScene_DrawBackground_Callback qgraphicsscene_drawbackground_callback = nullptr;
    QGraphicsScene_DrawForeground_Callback qgraphicsscene_drawforeground_callback = nullptr;
    QGraphicsScene_FocusNextPrevChild_Callback qgraphicsscene_focusnextprevchild_callback = nullptr;
    QGraphicsScene_TimerEvent_Callback qgraphicsscene_timerevent_callback = nullptr;
    QGraphicsScene_ChildEvent_Callback qgraphicsscene_childevent_callback = nullptr;
    QGraphicsScene_CustomEvent_Callback qgraphicsscene_customevent_callback = nullptr;
    QGraphicsScene_ConnectNotify_Callback qgraphicsscene_connectnotify_callback = nullptr;
    QGraphicsScene_DisconnectNotify_Callback qgraphicsscene_disconnectnotify_callback = nullptr;
    QGraphicsScene_Sender_Callback qgraphicsscene_sender_callback = nullptr;
    QGraphicsScene_SenderSignalIndex_Callback qgraphicsscene_sendersignalindex_callback = nullptr;
    QGraphicsScene_Receivers_Callback qgraphicsscene_receivers_callback = nullptr;
    QGraphicsScene_IsSignalConnected_Callback qgraphicsscene_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicsscene_metacall_isbase = false;
    mutable bool qgraphicsscene_inputmethodquery_isbase = false;
    mutable bool qgraphicsscene_event_isbase = false;
    mutable bool qgraphicsscene_eventfilter_isbase = false;
    mutable bool qgraphicsscene_contextmenuevent_isbase = false;
    mutable bool qgraphicsscene_dragenterevent_isbase = false;
    mutable bool qgraphicsscene_dragmoveevent_isbase = false;
    mutable bool qgraphicsscene_dragleaveevent_isbase = false;
    mutable bool qgraphicsscene_dropevent_isbase = false;
    mutable bool qgraphicsscene_focusinevent_isbase = false;
    mutable bool qgraphicsscene_focusoutevent_isbase = false;
    mutable bool qgraphicsscene_helpevent_isbase = false;
    mutable bool qgraphicsscene_keypressevent_isbase = false;
    mutable bool qgraphicsscene_keyreleaseevent_isbase = false;
    mutable bool qgraphicsscene_mousepressevent_isbase = false;
    mutable bool qgraphicsscene_mousemoveevent_isbase = false;
    mutable bool qgraphicsscene_mousereleaseevent_isbase = false;
    mutable bool qgraphicsscene_mousedoubleclickevent_isbase = false;
    mutable bool qgraphicsscene_wheelevent_isbase = false;
    mutable bool qgraphicsscene_inputmethodevent_isbase = false;
    mutable bool qgraphicsscene_drawbackground_isbase = false;
    mutable bool qgraphicsscene_drawforeground_isbase = false;
    mutable bool qgraphicsscene_focusnextprevchild_isbase = false;
    mutable bool qgraphicsscene_timerevent_isbase = false;
    mutable bool qgraphicsscene_childevent_isbase = false;
    mutable bool qgraphicsscene_customevent_isbase = false;
    mutable bool qgraphicsscene_connectnotify_isbase = false;
    mutable bool qgraphicsscene_disconnectnotify_isbase = false;
    mutable bool qgraphicsscene_sender_isbase = false;
    mutable bool qgraphicsscene_sendersignalindex_isbase = false;
    mutable bool qgraphicsscene_receivers_isbase = false;
    mutable bool qgraphicsscene_issignalconnected_isbase = false;

  public:
    VirtualQGraphicsScene() : QGraphicsScene(){};
    VirtualQGraphicsScene(const QRectF& sceneRect) : QGraphicsScene(sceneRect){};
    VirtualQGraphicsScene(qreal x, qreal y, qreal width, qreal height) : QGraphicsScene(x, y, width, height){};
    VirtualQGraphicsScene(QObject* parent) : QGraphicsScene(parent){};
    VirtualQGraphicsScene(const QRectF& sceneRect, QObject* parent) : QGraphicsScene(sceneRect, parent){};
    VirtualQGraphicsScene(qreal x, qreal y, qreal width, qreal height, QObject* parent) : QGraphicsScene(x, y, width, height, parent){};

    ~VirtualQGraphicsScene() {
        qgraphicsscene_metacall_callback = nullptr;
        qgraphicsscene_inputmethodquery_callback = nullptr;
        qgraphicsscene_event_callback = nullptr;
        qgraphicsscene_eventfilter_callback = nullptr;
        qgraphicsscene_contextmenuevent_callback = nullptr;
        qgraphicsscene_dragenterevent_callback = nullptr;
        qgraphicsscene_dragmoveevent_callback = nullptr;
        qgraphicsscene_dragleaveevent_callback = nullptr;
        qgraphicsscene_dropevent_callback = nullptr;
        qgraphicsscene_focusinevent_callback = nullptr;
        qgraphicsscene_focusoutevent_callback = nullptr;
        qgraphicsscene_helpevent_callback = nullptr;
        qgraphicsscene_keypressevent_callback = nullptr;
        qgraphicsscene_keyreleaseevent_callback = nullptr;
        qgraphicsscene_mousepressevent_callback = nullptr;
        qgraphicsscene_mousemoveevent_callback = nullptr;
        qgraphicsscene_mousereleaseevent_callback = nullptr;
        qgraphicsscene_mousedoubleclickevent_callback = nullptr;
        qgraphicsscene_wheelevent_callback = nullptr;
        qgraphicsscene_inputmethodevent_callback = nullptr;
        qgraphicsscene_drawbackground_callback = nullptr;
        qgraphicsscene_drawforeground_callback = nullptr;
        qgraphicsscene_focusnextprevchild_callback = nullptr;
        qgraphicsscene_timerevent_callback = nullptr;
        qgraphicsscene_childevent_callback = nullptr;
        qgraphicsscene_customevent_callback = nullptr;
        qgraphicsscene_connectnotify_callback = nullptr;
        qgraphicsscene_disconnectnotify_callback = nullptr;
        qgraphicsscene_sender_callback = nullptr;
        qgraphicsscene_sendersignalindex_callback = nullptr;
        qgraphicsscene_receivers_callback = nullptr;
        qgraphicsscene_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQGraphicsScene_Metacall_Callback(QGraphicsScene_Metacall_Callback cb) { qgraphicsscene_metacall_callback = cb; }
    void setQGraphicsScene_InputMethodQuery_Callback(QGraphicsScene_InputMethodQuery_Callback cb) { qgraphicsscene_inputmethodquery_callback = cb; }
    void setQGraphicsScene_Event_Callback(QGraphicsScene_Event_Callback cb) { qgraphicsscene_event_callback = cb; }
    void setQGraphicsScene_EventFilter_Callback(QGraphicsScene_EventFilter_Callback cb) { qgraphicsscene_eventfilter_callback = cb; }
    void setQGraphicsScene_ContextMenuEvent_Callback(QGraphicsScene_ContextMenuEvent_Callback cb) { qgraphicsscene_contextmenuevent_callback = cb; }
    void setQGraphicsScene_DragEnterEvent_Callback(QGraphicsScene_DragEnterEvent_Callback cb) { qgraphicsscene_dragenterevent_callback = cb; }
    void setQGraphicsScene_DragMoveEvent_Callback(QGraphicsScene_DragMoveEvent_Callback cb) { qgraphicsscene_dragmoveevent_callback = cb; }
    void setQGraphicsScene_DragLeaveEvent_Callback(QGraphicsScene_DragLeaveEvent_Callback cb) { qgraphicsscene_dragleaveevent_callback = cb; }
    void setQGraphicsScene_DropEvent_Callback(QGraphicsScene_DropEvent_Callback cb) { qgraphicsscene_dropevent_callback = cb; }
    void setQGraphicsScene_FocusInEvent_Callback(QGraphicsScene_FocusInEvent_Callback cb) { qgraphicsscene_focusinevent_callback = cb; }
    void setQGraphicsScene_FocusOutEvent_Callback(QGraphicsScene_FocusOutEvent_Callback cb) { qgraphicsscene_focusoutevent_callback = cb; }
    void setQGraphicsScene_HelpEvent_Callback(QGraphicsScene_HelpEvent_Callback cb) { qgraphicsscene_helpevent_callback = cb; }
    void setQGraphicsScene_KeyPressEvent_Callback(QGraphicsScene_KeyPressEvent_Callback cb) { qgraphicsscene_keypressevent_callback = cb; }
    void setQGraphicsScene_KeyReleaseEvent_Callback(QGraphicsScene_KeyReleaseEvent_Callback cb) { qgraphicsscene_keyreleaseevent_callback = cb; }
    void setQGraphicsScene_MousePressEvent_Callback(QGraphicsScene_MousePressEvent_Callback cb) { qgraphicsscene_mousepressevent_callback = cb; }
    void setQGraphicsScene_MouseMoveEvent_Callback(QGraphicsScene_MouseMoveEvent_Callback cb) { qgraphicsscene_mousemoveevent_callback = cb; }
    void setQGraphicsScene_MouseReleaseEvent_Callback(QGraphicsScene_MouseReleaseEvent_Callback cb) { qgraphicsscene_mousereleaseevent_callback = cb; }
    void setQGraphicsScene_MouseDoubleClickEvent_Callback(QGraphicsScene_MouseDoubleClickEvent_Callback cb) { qgraphicsscene_mousedoubleclickevent_callback = cb; }
    void setQGraphicsScene_WheelEvent_Callback(QGraphicsScene_WheelEvent_Callback cb) { qgraphicsscene_wheelevent_callback = cb; }
    void setQGraphicsScene_InputMethodEvent_Callback(QGraphicsScene_InputMethodEvent_Callback cb) { qgraphicsscene_inputmethodevent_callback = cb; }
    void setQGraphicsScene_DrawBackground_Callback(QGraphicsScene_DrawBackground_Callback cb) { qgraphicsscene_drawbackground_callback = cb; }
    void setQGraphicsScene_DrawForeground_Callback(QGraphicsScene_DrawForeground_Callback cb) { qgraphicsscene_drawforeground_callback = cb; }
    void setQGraphicsScene_FocusNextPrevChild_Callback(QGraphicsScene_FocusNextPrevChild_Callback cb) { qgraphicsscene_focusnextprevchild_callback = cb; }
    void setQGraphicsScene_TimerEvent_Callback(QGraphicsScene_TimerEvent_Callback cb) { qgraphicsscene_timerevent_callback = cb; }
    void setQGraphicsScene_ChildEvent_Callback(QGraphicsScene_ChildEvent_Callback cb) { qgraphicsscene_childevent_callback = cb; }
    void setQGraphicsScene_CustomEvent_Callback(QGraphicsScene_CustomEvent_Callback cb) { qgraphicsscene_customevent_callback = cb; }
    void setQGraphicsScene_ConnectNotify_Callback(QGraphicsScene_ConnectNotify_Callback cb) { qgraphicsscene_connectnotify_callback = cb; }
    void setQGraphicsScene_DisconnectNotify_Callback(QGraphicsScene_DisconnectNotify_Callback cb) { qgraphicsscene_disconnectnotify_callback = cb; }
    void setQGraphicsScene_Sender_Callback(QGraphicsScene_Sender_Callback cb) { qgraphicsscene_sender_callback = cb; }
    void setQGraphicsScene_SenderSignalIndex_Callback(QGraphicsScene_SenderSignalIndex_Callback cb) { qgraphicsscene_sendersignalindex_callback = cb; }
    void setQGraphicsScene_Receivers_Callback(QGraphicsScene_Receivers_Callback cb) { qgraphicsscene_receivers_callback = cb; }
    void setQGraphicsScene_IsSignalConnected_Callback(QGraphicsScene_IsSignalConnected_Callback cb) { qgraphicsscene_issignalconnected_callback = cb; }

    // Base flag setters
    void setQGraphicsScene_Metacall_IsBase(bool value) const { qgraphicsscene_metacall_isbase = value; }
    void setQGraphicsScene_InputMethodQuery_IsBase(bool value) const { qgraphicsscene_inputmethodquery_isbase = value; }
    void setQGraphicsScene_Event_IsBase(bool value) const { qgraphicsscene_event_isbase = value; }
    void setQGraphicsScene_EventFilter_IsBase(bool value) const { qgraphicsscene_eventfilter_isbase = value; }
    void setQGraphicsScene_ContextMenuEvent_IsBase(bool value) const { qgraphicsscene_contextmenuevent_isbase = value; }
    void setQGraphicsScene_DragEnterEvent_IsBase(bool value) const { qgraphicsscene_dragenterevent_isbase = value; }
    void setQGraphicsScene_DragMoveEvent_IsBase(bool value) const { qgraphicsscene_dragmoveevent_isbase = value; }
    void setQGraphicsScene_DragLeaveEvent_IsBase(bool value) const { qgraphicsscene_dragleaveevent_isbase = value; }
    void setQGraphicsScene_DropEvent_IsBase(bool value) const { qgraphicsscene_dropevent_isbase = value; }
    void setQGraphicsScene_FocusInEvent_IsBase(bool value) const { qgraphicsscene_focusinevent_isbase = value; }
    void setQGraphicsScene_FocusOutEvent_IsBase(bool value) const { qgraphicsscene_focusoutevent_isbase = value; }
    void setQGraphicsScene_HelpEvent_IsBase(bool value) const { qgraphicsscene_helpevent_isbase = value; }
    void setQGraphicsScene_KeyPressEvent_IsBase(bool value) const { qgraphicsscene_keypressevent_isbase = value; }
    void setQGraphicsScene_KeyReleaseEvent_IsBase(bool value) const { qgraphicsscene_keyreleaseevent_isbase = value; }
    void setQGraphicsScene_MousePressEvent_IsBase(bool value) const { qgraphicsscene_mousepressevent_isbase = value; }
    void setQGraphicsScene_MouseMoveEvent_IsBase(bool value) const { qgraphicsscene_mousemoveevent_isbase = value; }
    void setQGraphicsScene_MouseReleaseEvent_IsBase(bool value) const { qgraphicsscene_mousereleaseevent_isbase = value; }
    void setQGraphicsScene_MouseDoubleClickEvent_IsBase(bool value) const { qgraphicsscene_mousedoubleclickevent_isbase = value; }
    void setQGraphicsScene_WheelEvent_IsBase(bool value) const { qgraphicsscene_wheelevent_isbase = value; }
    void setQGraphicsScene_InputMethodEvent_IsBase(bool value) const { qgraphicsscene_inputmethodevent_isbase = value; }
    void setQGraphicsScene_DrawBackground_IsBase(bool value) const { qgraphicsscene_drawbackground_isbase = value; }
    void setQGraphicsScene_DrawForeground_IsBase(bool value) const { qgraphicsscene_drawforeground_isbase = value; }
    void setQGraphicsScene_FocusNextPrevChild_IsBase(bool value) const { qgraphicsscene_focusnextprevchild_isbase = value; }
    void setQGraphicsScene_TimerEvent_IsBase(bool value) const { qgraphicsscene_timerevent_isbase = value; }
    void setQGraphicsScene_ChildEvent_IsBase(bool value) const { qgraphicsscene_childevent_isbase = value; }
    void setQGraphicsScene_CustomEvent_IsBase(bool value) const { qgraphicsscene_customevent_isbase = value; }
    void setQGraphicsScene_ConnectNotify_IsBase(bool value) const { qgraphicsscene_connectnotify_isbase = value; }
    void setQGraphicsScene_DisconnectNotify_IsBase(bool value) const { qgraphicsscene_disconnectnotify_isbase = value; }
    void setQGraphicsScene_Sender_IsBase(bool value) const { qgraphicsscene_sender_isbase = value; }
    void setQGraphicsScene_SenderSignalIndex_IsBase(bool value) const { qgraphicsscene_sendersignalindex_isbase = value; }
    void setQGraphicsScene_Receivers_IsBase(bool value) const { qgraphicsscene_receivers_isbase = value; }
    void setQGraphicsScene_IsSignalConnected_IsBase(bool value) const { qgraphicsscene_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgraphicsscene_metacall_isbase) {
            qgraphicsscene_metacall_isbase = false;
            return QGraphicsScene::qt_metacall(param1, param2, param3);
        } else if (qgraphicsscene_metacall_callback != nullptr) {
            return qgraphicsscene_metacall_callback(this, param1, param2, param3);
        } else {
            return QGraphicsScene::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qgraphicsscene_inputmethodquery_isbase) {
            qgraphicsscene_inputmethodquery_isbase = false;
            return QGraphicsScene::inputMethodQuery(query);
        } else if (qgraphicsscene_inputmethodquery_callback != nullptr) {
            return qgraphicsscene_inputmethodquery_callback(this, query);
        } else {
            return QGraphicsScene::inputMethodQuery(query);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgraphicsscene_event_isbase) {
            qgraphicsscene_event_isbase = false;
            return QGraphicsScene::event(event);
        } else if (qgraphicsscene_event_callback != nullptr) {
            return qgraphicsscene_event_callback(this, event);
        } else {
            return QGraphicsScene::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgraphicsscene_eventfilter_isbase) {
            qgraphicsscene_eventfilter_isbase = false;
            return QGraphicsScene::eventFilter(watched, event);
        } else if (qgraphicsscene_eventfilter_callback != nullptr) {
            return qgraphicsscene_eventfilter_callback(this, watched, event);
        } else {
            return QGraphicsScene::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
        if (qgraphicsscene_contextmenuevent_isbase) {
            qgraphicsscene_contextmenuevent_isbase = false;
            QGraphicsScene::contextMenuEvent(event);
        } else if (qgraphicsscene_contextmenuevent_callback != nullptr) {
            qgraphicsscene_contextmenuevent_callback(this, event);
        } else {
            QGraphicsScene::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsscene_dragenterevent_isbase) {
            qgraphicsscene_dragenterevent_isbase = false;
            QGraphicsScene::dragEnterEvent(event);
        } else if (qgraphicsscene_dragenterevent_callback != nullptr) {
            qgraphicsscene_dragenterevent_callback(this, event);
        } else {
            QGraphicsScene::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsscene_dragmoveevent_isbase) {
            qgraphicsscene_dragmoveevent_isbase = false;
            QGraphicsScene::dragMoveEvent(event);
        } else if (qgraphicsscene_dragmoveevent_callback != nullptr) {
            qgraphicsscene_dragmoveevent_callback(this, event);
        } else {
            QGraphicsScene::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsscene_dragleaveevent_isbase) {
            qgraphicsscene_dragleaveevent_isbase = false;
            QGraphicsScene::dragLeaveEvent(event);
        } else if (qgraphicsscene_dragleaveevent_callback != nullptr) {
            qgraphicsscene_dragleaveevent_callback(this, event);
        } else {
            QGraphicsScene::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsscene_dropevent_isbase) {
            qgraphicsscene_dropevent_isbase = false;
            QGraphicsScene::dropEvent(event);
        } else if (qgraphicsscene_dropevent_callback != nullptr) {
            qgraphicsscene_dropevent_callback(this, event);
        } else {
            QGraphicsScene::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qgraphicsscene_focusinevent_isbase) {
            qgraphicsscene_focusinevent_isbase = false;
            QGraphicsScene::focusInEvent(event);
        } else if (qgraphicsscene_focusinevent_callback != nullptr) {
            qgraphicsscene_focusinevent_callback(this, event);
        } else {
            QGraphicsScene::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qgraphicsscene_focusoutevent_isbase) {
            qgraphicsscene_focusoutevent_isbase = false;
            QGraphicsScene::focusOutEvent(event);
        } else if (qgraphicsscene_focusoutevent_callback != nullptr) {
            qgraphicsscene_focusoutevent_callback(this, event);
        } else {
            QGraphicsScene::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void helpEvent(QGraphicsSceneHelpEvent* event) override {
        if (qgraphicsscene_helpevent_isbase) {
            qgraphicsscene_helpevent_isbase = false;
            QGraphicsScene::helpEvent(event);
        } else if (qgraphicsscene_helpevent_callback != nullptr) {
            qgraphicsscene_helpevent_callback(this, event);
        } else {
            QGraphicsScene::helpEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qgraphicsscene_keypressevent_isbase) {
            qgraphicsscene_keypressevent_isbase = false;
            QGraphicsScene::keyPressEvent(event);
        } else if (qgraphicsscene_keypressevent_callback != nullptr) {
            qgraphicsscene_keypressevent_callback(this, event);
        } else {
            QGraphicsScene::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qgraphicsscene_keyreleaseevent_isbase) {
            qgraphicsscene_keyreleaseevent_isbase = false;
            QGraphicsScene::keyReleaseEvent(event);
        } else if (qgraphicsscene_keyreleaseevent_callback != nullptr) {
            qgraphicsscene_keyreleaseevent_callback(this, event);
        } else {
            QGraphicsScene::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsscene_mousepressevent_isbase) {
            qgraphicsscene_mousepressevent_isbase = false;
            QGraphicsScene::mousePressEvent(event);
        } else if (qgraphicsscene_mousepressevent_callback != nullptr) {
            qgraphicsscene_mousepressevent_callback(this, event);
        } else {
            QGraphicsScene::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsscene_mousemoveevent_isbase) {
            qgraphicsscene_mousemoveevent_isbase = false;
            QGraphicsScene::mouseMoveEvent(event);
        } else if (qgraphicsscene_mousemoveevent_callback != nullptr) {
            qgraphicsscene_mousemoveevent_callback(this, event);
        } else {
            QGraphicsScene::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsscene_mousereleaseevent_isbase) {
            qgraphicsscene_mousereleaseevent_isbase = false;
            QGraphicsScene::mouseReleaseEvent(event);
        } else if (qgraphicsscene_mousereleaseevent_callback != nullptr) {
            qgraphicsscene_mousereleaseevent_callback(this, event);
        } else {
            QGraphicsScene::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsscene_mousedoubleclickevent_isbase) {
            qgraphicsscene_mousedoubleclickevent_isbase = false;
            QGraphicsScene::mouseDoubleClickEvent(event);
        } else if (qgraphicsscene_mousedoubleclickevent_callback != nullptr) {
            qgraphicsscene_mousedoubleclickevent_callback(this, event);
        } else {
            QGraphicsScene::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
        if (qgraphicsscene_wheelevent_isbase) {
            qgraphicsscene_wheelevent_isbase = false;
            QGraphicsScene::wheelEvent(event);
        } else if (qgraphicsscene_wheelevent_callback != nullptr) {
            qgraphicsscene_wheelevent_callback(this, event);
        } else {
            QGraphicsScene::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qgraphicsscene_inputmethodevent_isbase) {
            qgraphicsscene_inputmethodevent_isbase = false;
            QGraphicsScene::inputMethodEvent(event);
        } else if (qgraphicsscene_inputmethodevent_callback != nullptr) {
            qgraphicsscene_inputmethodevent_callback(this, event);
        } else {
            QGraphicsScene::inputMethodEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawBackground(QPainter* painter, const QRectF& rect) override {
        if (qgraphicsscene_drawbackground_isbase) {
            qgraphicsscene_drawbackground_isbase = false;
            QGraphicsScene::drawBackground(painter, rect);
        } else if (qgraphicsscene_drawbackground_callback != nullptr) {
            qgraphicsscene_drawbackground_callback(this, painter, rect);
        } else {
            QGraphicsScene::drawBackground(painter, rect);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawForeground(QPainter* painter, const QRectF& rect) override {
        if (qgraphicsscene_drawforeground_isbase) {
            qgraphicsscene_drawforeground_isbase = false;
            QGraphicsScene::drawForeground(painter, rect);
        } else if (qgraphicsscene_drawforeground_callback != nullptr) {
            qgraphicsscene_drawforeground_callback(this, painter, rect);
        } else {
            QGraphicsScene::drawForeground(painter, rect);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qgraphicsscene_focusnextprevchild_isbase) {
            qgraphicsscene_focusnextprevchild_isbase = false;
            return QGraphicsScene::focusNextPrevChild(next);
        } else if (qgraphicsscene_focusnextprevchild_callback != nullptr) {
            return qgraphicsscene_focusnextprevchild_callback(this, next);
        } else {
            return QGraphicsScene::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgraphicsscene_timerevent_isbase) {
            qgraphicsscene_timerevent_isbase = false;
            QGraphicsScene::timerEvent(event);
        } else if (qgraphicsscene_timerevent_callback != nullptr) {
            qgraphicsscene_timerevent_callback(this, event);
        } else {
            QGraphicsScene::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgraphicsscene_childevent_isbase) {
            qgraphicsscene_childevent_isbase = false;
            QGraphicsScene::childEvent(event);
        } else if (qgraphicsscene_childevent_callback != nullptr) {
            qgraphicsscene_childevent_callback(this, event);
        } else {
            QGraphicsScene::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgraphicsscene_customevent_isbase) {
            qgraphicsscene_customevent_isbase = false;
            QGraphicsScene::customEvent(event);
        } else if (qgraphicsscene_customevent_callback != nullptr) {
            qgraphicsscene_customevent_callback(this, event);
        } else {
            QGraphicsScene::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgraphicsscene_connectnotify_isbase) {
            qgraphicsscene_connectnotify_isbase = false;
            QGraphicsScene::connectNotify(signal);
        } else if (qgraphicsscene_connectnotify_callback != nullptr) {
            qgraphicsscene_connectnotify_callback(this, signal);
        } else {
            QGraphicsScene::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgraphicsscene_disconnectnotify_isbase) {
            qgraphicsscene_disconnectnotify_isbase = false;
            QGraphicsScene::disconnectNotify(signal);
        } else if (qgraphicsscene_disconnectnotify_callback != nullptr) {
            qgraphicsscene_disconnectnotify_callback(this, signal);
        } else {
            QGraphicsScene::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qgraphicsscene_sender_isbase) {
            qgraphicsscene_sender_isbase = false;
            return QGraphicsScene::sender();
        } else if (qgraphicsscene_sender_callback != nullptr) {
            return qgraphicsscene_sender_callback();
        } else {
            return QGraphicsScene::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qgraphicsscene_sendersignalindex_isbase) {
            qgraphicsscene_sendersignalindex_isbase = false;
            return QGraphicsScene::senderSignalIndex();
        } else if (qgraphicsscene_sendersignalindex_callback != nullptr) {
            return qgraphicsscene_sendersignalindex_callback();
        } else {
            return QGraphicsScene::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qgraphicsscene_receivers_isbase) {
            qgraphicsscene_receivers_isbase = false;
            return QGraphicsScene::receivers(signal);
        } else if (qgraphicsscene_receivers_callback != nullptr) {
            return qgraphicsscene_receivers_callback(this, signal);
        } else {
            return QGraphicsScene::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qgraphicsscene_issignalconnected_isbase) {
            qgraphicsscene_issignalconnected_isbase = false;
            return QGraphicsScene::isSignalConnected(signal);
        } else if (qgraphicsscene_issignalconnected_callback != nullptr) {
            return qgraphicsscene_issignalconnected_callback(this, signal);
        } else {
            return QGraphicsScene::isSignalConnected(signal);
        }
    }
};

#endif
