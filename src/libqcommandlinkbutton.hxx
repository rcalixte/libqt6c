#pragma once
#ifndef SRCC_LIBVIRTUALQCOMMANDLINKBUTTON_H
#define SRCC_LIBVIRTUALQCOMMANDLINKBUTTON_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QCommandLinkButton so that we can call protected methods
class VirtualQCommandLinkButton : public QCommandLinkButton {

  public:
    // Virtual class public types (including callbacks)
    using QCommandLinkButton_Metacall_Callback = int (*)(QCommandLinkButton*, QMetaObject::Call, int, void**);
    using QCommandLinkButton_SizeHint_Callback = QSize (*)();
    using QCommandLinkButton_HeightForWidth_Callback = int (*)(const QCommandLinkButton*, int);
    using QCommandLinkButton_MinimumSizeHint_Callback = QSize (*)();
    using QCommandLinkButton_InitStyleOption_Callback = void (*)(const QCommandLinkButton*, QStyleOptionButton*);
    using QCommandLinkButton_Event_Callback = bool (*)(QCommandLinkButton*, QEvent*);
    using QCommandLinkButton_PaintEvent_Callback = void (*)(QCommandLinkButton*, QPaintEvent*);
    using QCommandLinkButton_KeyPressEvent_Callback = void (*)(QCommandLinkButton*, QKeyEvent*);
    using QCommandLinkButton_FocusInEvent_Callback = void (*)(QCommandLinkButton*, QFocusEvent*);
    using QCommandLinkButton_FocusOutEvent_Callback = void (*)(QCommandLinkButton*, QFocusEvent*);
    using QCommandLinkButton_MouseMoveEvent_Callback = void (*)(QCommandLinkButton*, QMouseEvent*);
    using QCommandLinkButton_HitButton_Callback = bool (*)(const QCommandLinkButton*, const QPoint&);
    using QCommandLinkButton_CheckStateSet_Callback = void (*)();
    using QCommandLinkButton_NextCheckState_Callback = void (*)();
    using QCommandLinkButton_KeyReleaseEvent_Callback = void (*)(QCommandLinkButton*, QKeyEvent*);
    using QCommandLinkButton_MousePressEvent_Callback = void (*)(QCommandLinkButton*, QMouseEvent*);
    using QCommandLinkButton_MouseReleaseEvent_Callback = void (*)(QCommandLinkButton*, QMouseEvent*);
    using QCommandLinkButton_ChangeEvent_Callback = void (*)(QCommandLinkButton*, QEvent*);
    using QCommandLinkButton_TimerEvent_Callback = void (*)(QCommandLinkButton*, QTimerEvent*);
    using QCommandLinkButton_DevType_Callback = int (*)();
    using QCommandLinkButton_SetVisible_Callback = void (*)(QCommandLinkButton*, bool);
    using QCommandLinkButton_HasHeightForWidth_Callback = bool (*)();
    using QCommandLinkButton_PaintEngine_Callback = QPaintEngine* (*)();
    using QCommandLinkButton_MouseDoubleClickEvent_Callback = void (*)(QCommandLinkButton*, QMouseEvent*);
    using QCommandLinkButton_WheelEvent_Callback = void (*)(QCommandLinkButton*, QWheelEvent*);
    using QCommandLinkButton_EnterEvent_Callback = void (*)(QCommandLinkButton*, QEnterEvent*);
    using QCommandLinkButton_LeaveEvent_Callback = void (*)(QCommandLinkButton*, QEvent*);
    using QCommandLinkButton_MoveEvent_Callback = void (*)(QCommandLinkButton*, QMoveEvent*);
    using QCommandLinkButton_ResizeEvent_Callback = void (*)(QCommandLinkButton*, QResizeEvent*);
    using QCommandLinkButton_CloseEvent_Callback = void (*)(QCommandLinkButton*, QCloseEvent*);
    using QCommandLinkButton_ContextMenuEvent_Callback = void (*)(QCommandLinkButton*, QContextMenuEvent*);
    using QCommandLinkButton_TabletEvent_Callback = void (*)(QCommandLinkButton*, QTabletEvent*);
    using QCommandLinkButton_ActionEvent_Callback = void (*)(QCommandLinkButton*, QActionEvent*);
    using QCommandLinkButton_DragEnterEvent_Callback = void (*)(QCommandLinkButton*, QDragEnterEvent*);
    using QCommandLinkButton_DragMoveEvent_Callback = void (*)(QCommandLinkButton*, QDragMoveEvent*);
    using QCommandLinkButton_DragLeaveEvent_Callback = void (*)(QCommandLinkButton*, QDragLeaveEvent*);
    using QCommandLinkButton_DropEvent_Callback = void (*)(QCommandLinkButton*, QDropEvent*);
    using QCommandLinkButton_ShowEvent_Callback = void (*)(QCommandLinkButton*, QShowEvent*);
    using QCommandLinkButton_HideEvent_Callback = void (*)(QCommandLinkButton*, QHideEvent*);
    using QCommandLinkButton_NativeEvent_Callback = bool (*)(QCommandLinkButton*, const QByteArray&, void*, qintptr*);
    using QCommandLinkButton_Metric_Callback = int (*)(const QCommandLinkButton*, QPaintDevice::PaintDeviceMetric);
    using QCommandLinkButton_InitPainter_Callback = void (*)(const QCommandLinkButton*, QPainter*);
    using QCommandLinkButton_Redirected_Callback = QPaintDevice* (*)(const QCommandLinkButton*, QPoint*);
    using QCommandLinkButton_SharedPainter_Callback = QPainter* (*)();
    using QCommandLinkButton_InputMethodEvent_Callback = void (*)(QCommandLinkButton*, QInputMethodEvent*);
    using QCommandLinkButton_InputMethodQuery_Callback = QVariant (*)(const QCommandLinkButton*, Qt::InputMethodQuery);
    using QCommandLinkButton_FocusNextPrevChild_Callback = bool (*)(QCommandLinkButton*, bool);
    using QCommandLinkButton_EventFilter_Callback = bool (*)(QCommandLinkButton*, QObject*, QEvent*);
    using QCommandLinkButton_ChildEvent_Callback = void (*)(QCommandLinkButton*, QChildEvent*);
    using QCommandLinkButton_CustomEvent_Callback = void (*)(QCommandLinkButton*, QEvent*);
    using QCommandLinkButton_ConnectNotify_Callback = void (*)(QCommandLinkButton*, const QMetaMethod&);
    using QCommandLinkButton_DisconnectNotify_Callback = void (*)(QCommandLinkButton*, const QMetaMethod&);
    using QCommandLinkButton_UpdateMicroFocus_Callback = void (*)();
    using QCommandLinkButton_Create_Callback = void (*)();
    using QCommandLinkButton_Destroy_Callback = void (*)();
    using QCommandLinkButton_FocusNextChild_Callback = bool (*)();
    using QCommandLinkButton_FocusPreviousChild_Callback = bool (*)();
    using QCommandLinkButton_Sender_Callback = QObject* (*)();
    using QCommandLinkButton_SenderSignalIndex_Callback = int (*)();
    using QCommandLinkButton_Receivers_Callback = int (*)(const QCommandLinkButton*, const char*);
    using QCommandLinkButton_IsSignalConnected_Callback = bool (*)(const QCommandLinkButton*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QCommandLinkButton_Metacall_Callback qcommandlinkbutton_metacall_callback = nullptr;
    QCommandLinkButton_SizeHint_Callback qcommandlinkbutton_sizehint_callback = nullptr;
    QCommandLinkButton_HeightForWidth_Callback qcommandlinkbutton_heightforwidth_callback = nullptr;
    QCommandLinkButton_MinimumSizeHint_Callback qcommandlinkbutton_minimumsizehint_callback = nullptr;
    QCommandLinkButton_InitStyleOption_Callback qcommandlinkbutton_initstyleoption_callback = nullptr;
    QCommandLinkButton_Event_Callback qcommandlinkbutton_event_callback = nullptr;
    QCommandLinkButton_PaintEvent_Callback qcommandlinkbutton_paintevent_callback = nullptr;
    QCommandLinkButton_KeyPressEvent_Callback qcommandlinkbutton_keypressevent_callback = nullptr;
    QCommandLinkButton_FocusInEvent_Callback qcommandlinkbutton_focusinevent_callback = nullptr;
    QCommandLinkButton_FocusOutEvent_Callback qcommandlinkbutton_focusoutevent_callback = nullptr;
    QCommandLinkButton_MouseMoveEvent_Callback qcommandlinkbutton_mousemoveevent_callback = nullptr;
    QCommandLinkButton_HitButton_Callback qcommandlinkbutton_hitbutton_callback = nullptr;
    QCommandLinkButton_CheckStateSet_Callback qcommandlinkbutton_checkstateset_callback = nullptr;
    QCommandLinkButton_NextCheckState_Callback qcommandlinkbutton_nextcheckstate_callback = nullptr;
    QCommandLinkButton_KeyReleaseEvent_Callback qcommandlinkbutton_keyreleaseevent_callback = nullptr;
    QCommandLinkButton_MousePressEvent_Callback qcommandlinkbutton_mousepressevent_callback = nullptr;
    QCommandLinkButton_MouseReleaseEvent_Callback qcommandlinkbutton_mousereleaseevent_callback = nullptr;
    QCommandLinkButton_ChangeEvent_Callback qcommandlinkbutton_changeevent_callback = nullptr;
    QCommandLinkButton_TimerEvent_Callback qcommandlinkbutton_timerevent_callback = nullptr;
    QCommandLinkButton_DevType_Callback qcommandlinkbutton_devtype_callback = nullptr;
    QCommandLinkButton_SetVisible_Callback qcommandlinkbutton_setvisible_callback = nullptr;
    QCommandLinkButton_HasHeightForWidth_Callback qcommandlinkbutton_hasheightforwidth_callback = nullptr;
    QCommandLinkButton_PaintEngine_Callback qcommandlinkbutton_paintengine_callback = nullptr;
    QCommandLinkButton_MouseDoubleClickEvent_Callback qcommandlinkbutton_mousedoubleclickevent_callback = nullptr;
    QCommandLinkButton_WheelEvent_Callback qcommandlinkbutton_wheelevent_callback = nullptr;
    QCommandLinkButton_EnterEvent_Callback qcommandlinkbutton_enterevent_callback = nullptr;
    QCommandLinkButton_LeaveEvent_Callback qcommandlinkbutton_leaveevent_callback = nullptr;
    QCommandLinkButton_MoveEvent_Callback qcommandlinkbutton_moveevent_callback = nullptr;
    QCommandLinkButton_ResizeEvent_Callback qcommandlinkbutton_resizeevent_callback = nullptr;
    QCommandLinkButton_CloseEvent_Callback qcommandlinkbutton_closeevent_callback = nullptr;
    QCommandLinkButton_ContextMenuEvent_Callback qcommandlinkbutton_contextmenuevent_callback = nullptr;
    QCommandLinkButton_TabletEvent_Callback qcommandlinkbutton_tabletevent_callback = nullptr;
    QCommandLinkButton_ActionEvent_Callback qcommandlinkbutton_actionevent_callback = nullptr;
    QCommandLinkButton_DragEnterEvent_Callback qcommandlinkbutton_dragenterevent_callback = nullptr;
    QCommandLinkButton_DragMoveEvent_Callback qcommandlinkbutton_dragmoveevent_callback = nullptr;
    QCommandLinkButton_DragLeaveEvent_Callback qcommandlinkbutton_dragleaveevent_callback = nullptr;
    QCommandLinkButton_DropEvent_Callback qcommandlinkbutton_dropevent_callback = nullptr;
    QCommandLinkButton_ShowEvent_Callback qcommandlinkbutton_showevent_callback = nullptr;
    QCommandLinkButton_HideEvent_Callback qcommandlinkbutton_hideevent_callback = nullptr;
    QCommandLinkButton_NativeEvent_Callback qcommandlinkbutton_nativeevent_callback = nullptr;
    QCommandLinkButton_Metric_Callback qcommandlinkbutton_metric_callback = nullptr;
    QCommandLinkButton_InitPainter_Callback qcommandlinkbutton_initpainter_callback = nullptr;
    QCommandLinkButton_Redirected_Callback qcommandlinkbutton_redirected_callback = nullptr;
    QCommandLinkButton_SharedPainter_Callback qcommandlinkbutton_sharedpainter_callback = nullptr;
    QCommandLinkButton_InputMethodEvent_Callback qcommandlinkbutton_inputmethodevent_callback = nullptr;
    QCommandLinkButton_InputMethodQuery_Callback qcommandlinkbutton_inputmethodquery_callback = nullptr;
    QCommandLinkButton_FocusNextPrevChild_Callback qcommandlinkbutton_focusnextprevchild_callback = nullptr;
    QCommandLinkButton_EventFilter_Callback qcommandlinkbutton_eventfilter_callback = nullptr;
    QCommandLinkButton_ChildEvent_Callback qcommandlinkbutton_childevent_callback = nullptr;
    QCommandLinkButton_CustomEvent_Callback qcommandlinkbutton_customevent_callback = nullptr;
    QCommandLinkButton_ConnectNotify_Callback qcommandlinkbutton_connectnotify_callback = nullptr;
    QCommandLinkButton_DisconnectNotify_Callback qcommandlinkbutton_disconnectnotify_callback = nullptr;
    QCommandLinkButton_UpdateMicroFocus_Callback qcommandlinkbutton_updatemicrofocus_callback = nullptr;
    QCommandLinkButton_Create_Callback qcommandlinkbutton_create_callback = nullptr;
    QCommandLinkButton_Destroy_Callback qcommandlinkbutton_destroy_callback = nullptr;
    QCommandLinkButton_FocusNextChild_Callback qcommandlinkbutton_focusnextchild_callback = nullptr;
    QCommandLinkButton_FocusPreviousChild_Callback qcommandlinkbutton_focuspreviouschild_callback = nullptr;
    QCommandLinkButton_Sender_Callback qcommandlinkbutton_sender_callback = nullptr;
    QCommandLinkButton_SenderSignalIndex_Callback qcommandlinkbutton_sendersignalindex_callback = nullptr;
    QCommandLinkButton_Receivers_Callback qcommandlinkbutton_receivers_callback = nullptr;
    QCommandLinkButton_IsSignalConnected_Callback qcommandlinkbutton_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qcommandlinkbutton_metacall_isbase = false;
    mutable bool qcommandlinkbutton_sizehint_isbase = false;
    mutable bool qcommandlinkbutton_heightforwidth_isbase = false;
    mutable bool qcommandlinkbutton_minimumsizehint_isbase = false;
    mutable bool qcommandlinkbutton_initstyleoption_isbase = false;
    mutable bool qcommandlinkbutton_event_isbase = false;
    mutable bool qcommandlinkbutton_paintevent_isbase = false;
    mutable bool qcommandlinkbutton_keypressevent_isbase = false;
    mutable bool qcommandlinkbutton_focusinevent_isbase = false;
    mutable bool qcommandlinkbutton_focusoutevent_isbase = false;
    mutable bool qcommandlinkbutton_mousemoveevent_isbase = false;
    mutable bool qcommandlinkbutton_hitbutton_isbase = false;
    mutable bool qcommandlinkbutton_checkstateset_isbase = false;
    mutable bool qcommandlinkbutton_nextcheckstate_isbase = false;
    mutable bool qcommandlinkbutton_keyreleaseevent_isbase = false;
    mutable bool qcommandlinkbutton_mousepressevent_isbase = false;
    mutable bool qcommandlinkbutton_mousereleaseevent_isbase = false;
    mutable bool qcommandlinkbutton_changeevent_isbase = false;
    mutable bool qcommandlinkbutton_timerevent_isbase = false;
    mutable bool qcommandlinkbutton_devtype_isbase = false;
    mutable bool qcommandlinkbutton_setvisible_isbase = false;
    mutable bool qcommandlinkbutton_hasheightforwidth_isbase = false;
    mutable bool qcommandlinkbutton_paintengine_isbase = false;
    mutable bool qcommandlinkbutton_mousedoubleclickevent_isbase = false;
    mutable bool qcommandlinkbutton_wheelevent_isbase = false;
    mutable bool qcommandlinkbutton_enterevent_isbase = false;
    mutable bool qcommandlinkbutton_leaveevent_isbase = false;
    mutable bool qcommandlinkbutton_moveevent_isbase = false;
    mutable bool qcommandlinkbutton_resizeevent_isbase = false;
    mutable bool qcommandlinkbutton_closeevent_isbase = false;
    mutable bool qcommandlinkbutton_contextmenuevent_isbase = false;
    mutable bool qcommandlinkbutton_tabletevent_isbase = false;
    mutable bool qcommandlinkbutton_actionevent_isbase = false;
    mutable bool qcommandlinkbutton_dragenterevent_isbase = false;
    mutable bool qcommandlinkbutton_dragmoveevent_isbase = false;
    mutable bool qcommandlinkbutton_dragleaveevent_isbase = false;
    mutable bool qcommandlinkbutton_dropevent_isbase = false;
    mutable bool qcommandlinkbutton_showevent_isbase = false;
    mutable bool qcommandlinkbutton_hideevent_isbase = false;
    mutable bool qcommandlinkbutton_nativeevent_isbase = false;
    mutable bool qcommandlinkbutton_metric_isbase = false;
    mutable bool qcommandlinkbutton_initpainter_isbase = false;
    mutable bool qcommandlinkbutton_redirected_isbase = false;
    mutable bool qcommandlinkbutton_sharedpainter_isbase = false;
    mutable bool qcommandlinkbutton_inputmethodevent_isbase = false;
    mutable bool qcommandlinkbutton_inputmethodquery_isbase = false;
    mutable bool qcommandlinkbutton_focusnextprevchild_isbase = false;
    mutable bool qcommandlinkbutton_eventfilter_isbase = false;
    mutable bool qcommandlinkbutton_childevent_isbase = false;
    mutable bool qcommandlinkbutton_customevent_isbase = false;
    mutable bool qcommandlinkbutton_connectnotify_isbase = false;
    mutable bool qcommandlinkbutton_disconnectnotify_isbase = false;
    mutable bool qcommandlinkbutton_updatemicrofocus_isbase = false;
    mutable bool qcommandlinkbutton_create_isbase = false;
    mutable bool qcommandlinkbutton_destroy_isbase = false;
    mutable bool qcommandlinkbutton_focusnextchild_isbase = false;
    mutable bool qcommandlinkbutton_focuspreviouschild_isbase = false;
    mutable bool qcommandlinkbutton_sender_isbase = false;
    mutable bool qcommandlinkbutton_sendersignalindex_isbase = false;
    mutable bool qcommandlinkbutton_receivers_isbase = false;
    mutable bool qcommandlinkbutton_issignalconnected_isbase = false;

  public:
    VirtualQCommandLinkButton(QWidget* parent) : QCommandLinkButton(parent){};
    VirtualQCommandLinkButton() : QCommandLinkButton(){};
    VirtualQCommandLinkButton(const QString& text) : QCommandLinkButton(text){};
    VirtualQCommandLinkButton(const QString& text, const QString& description) : QCommandLinkButton(text, description){};
    VirtualQCommandLinkButton(const QString& text, QWidget* parent) : QCommandLinkButton(text, parent){};
    VirtualQCommandLinkButton(const QString& text, const QString& description, QWidget* parent) : QCommandLinkButton(text, description, parent){};

    ~VirtualQCommandLinkButton() {
        qcommandlinkbutton_metacall_callback = nullptr;
        qcommandlinkbutton_sizehint_callback = nullptr;
        qcommandlinkbutton_heightforwidth_callback = nullptr;
        qcommandlinkbutton_minimumsizehint_callback = nullptr;
        qcommandlinkbutton_initstyleoption_callback = nullptr;
        qcommandlinkbutton_event_callback = nullptr;
        qcommandlinkbutton_paintevent_callback = nullptr;
        qcommandlinkbutton_keypressevent_callback = nullptr;
        qcommandlinkbutton_focusinevent_callback = nullptr;
        qcommandlinkbutton_focusoutevent_callback = nullptr;
        qcommandlinkbutton_mousemoveevent_callback = nullptr;
        qcommandlinkbutton_hitbutton_callback = nullptr;
        qcommandlinkbutton_checkstateset_callback = nullptr;
        qcommandlinkbutton_nextcheckstate_callback = nullptr;
        qcommandlinkbutton_keyreleaseevent_callback = nullptr;
        qcommandlinkbutton_mousepressevent_callback = nullptr;
        qcommandlinkbutton_mousereleaseevent_callback = nullptr;
        qcommandlinkbutton_changeevent_callback = nullptr;
        qcommandlinkbutton_timerevent_callback = nullptr;
        qcommandlinkbutton_devtype_callback = nullptr;
        qcommandlinkbutton_setvisible_callback = nullptr;
        qcommandlinkbutton_hasheightforwidth_callback = nullptr;
        qcommandlinkbutton_paintengine_callback = nullptr;
        qcommandlinkbutton_mousedoubleclickevent_callback = nullptr;
        qcommandlinkbutton_wheelevent_callback = nullptr;
        qcommandlinkbutton_enterevent_callback = nullptr;
        qcommandlinkbutton_leaveevent_callback = nullptr;
        qcommandlinkbutton_moveevent_callback = nullptr;
        qcommandlinkbutton_resizeevent_callback = nullptr;
        qcommandlinkbutton_closeevent_callback = nullptr;
        qcommandlinkbutton_contextmenuevent_callback = nullptr;
        qcommandlinkbutton_tabletevent_callback = nullptr;
        qcommandlinkbutton_actionevent_callback = nullptr;
        qcommandlinkbutton_dragenterevent_callback = nullptr;
        qcommandlinkbutton_dragmoveevent_callback = nullptr;
        qcommandlinkbutton_dragleaveevent_callback = nullptr;
        qcommandlinkbutton_dropevent_callback = nullptr;
        qcommandlinkbutton_showevent_callback = nullptr;
        qcommandlinkbutton_hideevent_callback = nullptr;
        qcommandlinkbutton_nativeevent_callback = nullptr;
        qcommandlinkbutton_metric_callback = nullptr;
        qcommandlinkbutton_initpainter_callback = nullptr;
        qcommandlinkbutton_redirected_callback = nullptr;
        qcommandlinkbutton_sharedpainter_callback = nullptr;
        qcommandlinkbutton_inputmethodevent_callback = nullptr;
        qcommandlinkbutton_inputmethodquery_callback = nullptr;
        qcommandlinkbutton_focusnextprevchild_callback = nullptr;
        qcommandlinkbutton_eventfilter_callback = nullptr;
        qcommandlinkbutton_childevent_callback = nullptr;
        qcommandlinkbutton_customevent_callback = nullptr;
        qcommandlinkbutton_connectnotify_callback = nullptr;
        qcommandlinkbutton_disconnectnotify_callback = nullptr;
        qcommandlinkbutton_updatemicrofocus_callback = nullptr;
        qcommandlinkbutton_create_callback = nullptr;
        qcommandlinkbutton_destroy_callback = nullptr;
        qcommandlinkbutton_focusnextchild_callback = nullptr;
        qcommandlinkbutton_focuspreviouschild_callback = nullptr;
        qcommandlinkbutton_sender_callback = nullptr;
        qcommandlinkbutton_sendersignalindex_callback = nullptr;
        qcommandlinkbutton_receivers_callback = nullptr;
        qcommandlinkbutton_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQCommandLinkButton_Metacall_Callback(QCommandLinkButton_Metacall_Callback cb) { qcommandlinkbutton_metacall_callback = cb; }
    void setQCommandLinkButton_SizeHint_Callback(QCommandLinkButton_SizeHint_Callback cb) { qcommandlinkbutton_sizehint_callback = cb; }
    void setQCommandLinkButton_HeightForWidth_Callback(QCommandLinkButton_HeightForWidth_Callback cb) { qcommandlinkbutton_heightforwidth_callback = cb; }
    void setQCommandLinkButton_MinimumSizeHint_Callback(QCommandLinkButton_MinimumSizeHint_Callback cb) { qcommandlinkbutton_minimumsizehint_callback = cb; }
    void setQCommandLinkButton_InitStyleOption_Callback(QCommandLinkButton_InitStyleOption_Callback cb) { qcommandlinkbutton_initstyleoption_callback = cb; }
    void setQCommandLinkButton_Event_Callback(QCommandLinkButton_Event_Callback cb) { qcommandlinkbutton_event_callback = cb; }
    void setQCommandLinkButton_PaintEvent_Callback(QCommandLinkButton_PaintEvent_Callback cb) { qcommandlinkbutton_paintevent_callback = cb; }
    void setQCommandLinkButton_KeyPressEvent_Callback(QCommandLinkButton_KeyPressEvent_Callback cb) { qcommandlinkbutton_keypressevent_callback = cb; }
    void setQCommandLinkButton_FocusInEvent_Callback(QCommandLinkButton_FocusInEvent_Callback cb) { qcommandlinkbutton_focusinevent_callback = cb; }
    void setQCommandLinkButton_FocusOutEvent_Callback(QCommandLinkButton_FocusOutEvent_Callback cb) { qcommandlinkbutton_focusoutevent_callback = cb; }
    void setQCommandLinkButton_MouseMoveEvent_Callback(QCommandLinkButton_MouseMoveEvent_Callback cb) { qcommandlinkbutton_mousemoveevent_callback = cb; }
    void setQCommandLinkButton_HitButton_Callback(QCommandLinkButton_HitButton_Callback cb) { qcommandlinkbutton_hitbutton_callback = cb; }
    void setQCommandLinkButton_CheckStateSet_Callback(QCommandLinkButton_CheckStateSet_Callback cb) { qcommandlinkbutton_checkstateset_callback = cb; }
    void setQCommandLinkButton_NextCheckState_Callback(QCommandLinkButton_NextCheckState_Callback cb) { qcommandlinkbutton_nextcheckstate_callback = cb; }
    void setQCommandLinkButton_KeyReleaseEvent_Callback(QCommandLinkButton_KeyReleaseEvent_Callback cb) { qcommandlinkbutton_keyreleaseevent_callback = cb; }
    void setQCommandLinkButton_MousePressEvent_Callback(QCommandLinkButton_MousePressEvent_Callback cb) { qcommandlinkbutton_mousepressevent_callback = cb; }
    void setQCommandLinkButton_MouseReleaseEvent_Callback(QCommandLinkButton_MouseReleaseEvent_Callback cb) { qcommandlinkbutton_mousereleaseevent_callback = cb; }
    void setQCommandLinkButton_ChangeEvent_Callback(QCommandLinkButton_ChangeEvent_Callback cb) { qcommandlinkbutton_changeevent_callback = cb; }
    void setQCommandLinkButton_TimerEvent_Callback(QCommandLinkButton_TimerEvent_Callback cb) { qcommandlinkbutton_timerevent_callback = cb; }
    void setQCommandLinkButton_DevType_Callback(QCommandLinkButton_DevType_Callback cb) { qcommandlinkbutton_devtype_callback = cb; }
    void setQCommandLinkButton_SetVisible_Callback(QCommandLinkButton_SetVisible_Callback cb) { qcommandlinkbutton_setvisible_callback = cb; }
    void setQCommandLinkButton_HasHeightForWidth_Callback(QCommandLinkButton_HasHeightForWidth_Callback cb) { qcommandlinkbutton_hasheightforwidth_callback = cb; }
    void setQCommandLinkButton_PaintEngine_Callback(QCommandLinkButton_PaintEngine_Callback cb) { qcommandlinkbutton_paintengine_callback = cb; }
    void setQCommandLinkButton_MouseDoubleClickEvent_Callback(QCommandLinkButton_MouseDoubleClickEvent_Callback cb) { qcommandlinkbutton_mousedoubleclickevent_callback = cb; }
    void setQCommandLinkButton_WheelEvent_Callback(QCommandLinkButton_WheelEvent_Callback cb) { qcommandlinkbutton_wheelevent_callback = cb; }
    void setQCommandLinkButton_EnterEvent_Callback(QCommandLinkButton_EnterEvent_Callback cb) { qcommandlinkbutton_enterevent_callback = cb; }
    void setQCommandLinkButton_LeaveEvent_Callback(QCommandLinkButton_LeaveEvent_Callback cb) { qcommandlinkbutton_leaveevent_callback = cb; }
    void setQCommandLinkButton_MoveEvent_Callback(QCommandLinkButton_MoveEvent_Callback cb) { qcommandlinkbutton_moveevent_callback = cb; }
    void setQCommandLinkButton_ResizeEvent_Callback(QCommandLinkButton_ResizeEvent_Callback cb) { qcommandlinkbutton_resizeevent_callback = cb; }
    void setQCommandLinkButton_CloseEvent_Callback(QCommandLinkButton_CloseEvent_Callback cb) { qcommandlinkbutton_closeevent_callback = cb; }
    void setQCommandLinkButton_ContextMenuEvent_Callback(QCommandLinkButton_ContextMenuEvent_Callback cb) { qcommandlinkbutton_contextmenuevent_callback = cb; }
    void setQCommandLinkButton_TabletEvent_Callback(QCommandLinkButton_TabletEvent_Callback cb) { qcommandlinkbutton_tabletevent_callback = cb; }
    void setQCommandLinkButton_ActionEvent_Callback(QCommandLinkButton_ActionEvent_Callback cb) { qcommandlinkbutton_actionevent_callback = cb; }
    void setQCommandLinkButton_DragEnterEvent_Callback(QCommandLinkButton_DragEnterEvent_Callback cb) { qcommandlinkbutton_dragenterevent_callback = cb; }
    void setQCommandLinkButton_DragMoveEvent_Callback(QCommandLinkButton_DragMoveEvent_Callback cb) { qcommandlinkbutton_dragmoveevent_callback = cb; }
    void setQCommandLinkButton_DragLeaveEvent_Callback(QCommandLinkButton_DragLeaveEvent_Callback cb) { qcommandlinkbutton_dragleaveevent_callback = cb; }
    void setQCommandLinkButton_DropEvent_Callback(QCommandLinkButton_DropEvent_Callback cb) { qcommandlinkbutton_dropevent_callback = cb; }
    void setQCommandLinkButton_ShowEvent_Callback(QCommandLinkButton_ShowEvent_Callback cb) { qcommandlinkbutton_showevent_callback = cb; }
    void setQCommandLinkButton_HideEvent_Callback(QCommandLinkButton_HideEvent_Callback cb) { qcommandlinkbutton_hideevent_callback = cb; }
    void setQCommandLinkButton_NativeEvent_Callback(QCommandLinkButton_NativeEvent_Callback cb) { qcommandlinkbutton_nativeevent_callback = cb; }
    void setQCommandLinkButton_Metric_Callback(QCommandLinkButton_Metric_Callback cb) { qcommandlinkbutton_metric_callback = cb; }
    void setQCommandLinkButton_InitPainter_Callback(QCommandLinkButton_InitPainter_Callback cb) { qcommandlinkbutton_initpainter_callback = cb; }
    void setQCommandLinkButton_Redirected_Callback(QCommandLinkButton_Redirected_Callback cb) { qcommandlinkbutton_redirected_callback = cb; }
    void setQCommandLinkButton_SharedPainter_Callback(QCommandLinkButton_SharedPainter_Callback cb) { qcommandlinkbutton_sharedpainter_callback = cb; }
    void setQCommandLinkButton_InputMethodEvent_Callback(QCommandLinkButton_InputMethodEvent_Callback cb) { qcommandlinkbutton_inputmethodevent_callback = cb; }
    void setQCommandLinkButton_InputMethodQuery_Callback(QCommandLinkButton_InputMethodQuery_Callback cb) { qcommandlinkbutton_inputmethodquery_callback = cb; }
    void setQCommandLinkButton_FocusNextPrevChild_Callback(QCommandLinkButton_FocusNextPrevChild_Callback cb) { qcommandlinkbutton_focusnextprevchild_callback = cb; }
    void setQCommandLinkButton_EventFilter_Callback(QCommandLinkButton_EventFilter_Callback cb) { qcommandlinkbutton_eventfilter_callback = cb; }
    void setQCommandLinkButton_ChildEvent_Callback(QCommandLinkButton_ChildEvent_Callback cb) { qcommandlinkbutton_childevent_callback = cb; }
    void setQCommandLinkButton_CustomEvent_Callback(QCommandLinkButton_CustomEvent_Callback cb) { qcommandlinkbutton_customevent_callback = cb; }
    void setQCommandLinkButton_ConnectNotify_Callback(QCommandLinkButton_ConnectNotify_Callback cb) { qcommandlinkbutton_connectnotify_callback = cb; }
    void setQCommandLinkButton_DisconnectNotify_Callback(QCommandLinkButton_DisconnectNotify_Callback cb) { qcommandlinkbutton_disconnectnotify_callback = cb; }
    void setQCommandLinkButton_UpdateMicroFocus_Callback(QCommandLinkButton_UpdateMicroFocus_Callback cb) { qcommandlinkbutton_updatemicrofocus_callback = cb; }
    void setQCommandLinkButton_Create_Callback(QCommandLinkButton_Create_Callback cb) { qcommandlinkbutton_create_callback = cb; }
    void setQCommandLinkButton_Destroy_Callback(QCommandLinkButton_Destroy_Callback cb) { qcommandlinkbutton_destroy_callback = cb; }
    void setQCommandLinkButton_FocusNextChild_Callback(QCommandLinkButton_FocusNextChild_Callback cb) { qcommandlinkbutton_focusnextchild_callback = cb; }
    void setQCommandLinkButton_FocusPreviousChild_Callback(QCommandLinkButton_FocusPreviousChild_Callback cb) { qcommandlinkbutton_focuspreviouschild_callback = cb; }
    void setQCommandLinkButton_Sender_Callback(QCommandLinkButton_Sender_Callback cb) { qcommandlinkbutton_sender_callback = cb; }
    void setQCommandLinkButton_SenderSignalIndex_Callback(QCommandLinkButton_SenderSignalIndex_Callback cb) { qcommandlinkbutton_sendersignalindex_callback = cb; }
    void setQCommandLinkButton_Receivers_Callback(QCommandLinkButton_Receivers_Callback cb) { qcommandlinkbutton_receivers_callback = cb; }
    void setQCommandLinkButton_IsSignalConnected_Callback(QCommandLinkButton_IsSignalConnected_Callback cb) { qcommandlinkbutton_issignalconnected_callback = cb; }

    // Base flag setters
    void setQCommandLinkButton_Metacall_IsBase(bool value) const { qcommandlinkbutton_metacall_isbase = value; }
    void setQCommandLinkButton_SizeHint_IsBase(bool value) const { qcommandlinkbutton_sizehint_isbase = value; }
    void setQCommandLinkButton_HeightForWidth_IsBase(bool value) const { qcommandlinkbutton_heightforwidth_isbase = value; }
    void setQCommandLinkButton_MinimumSizeHint_IsBase(bool value) const { qcommandlinkbutton_minimumsizehint_isbase = value; }
    void setQCommandLinkButton_InitStyleOption_IsBase(bool value) const { qcommandlinkbutton_initstyleoption_isbase = value; }
    void setQCommandLinkButton_Event_IsBase(bool value) const { qcommandlinkbutton_event_isbase = value; }
    void setQCommandLinkButton_PaintEvent_IsBase(bool value) const { qcommandlinkbutton_paintevent_isbase = value; }
    void setQCommandLinkButton_KeyPressEvent_IsBase(bool value) const { qcommandlinkbutton_keypressevent_isbase = value; }
    void setQCommandLinkButton_FocusInEvent_IsBase(bool value) const { qcommandlinkbutton_focusinevent_isbase = value; }
    void setQCommandLinkButton_FocusOutEvent_IsBase(bool value) const { qcommandlinkbutton_focusoutevent_isbase = value; }
    void setQCommandLinkButton_MouseMoveEvent_IsBase(bool value) const { qcommandlinkbutton_mousemoveevent_isbase = value; }
    void setQCommandLinkButton_HitButton_IsBase(bool value) const { qcommandlinkbutton_hitbutton_isbase = value; }
    void setQCommandLinkButton_CheckStateSet_IsBase(bool value) const { qcommandlinkbutton_checkstateset_isbase = value; }
    void setQCommandLinkButton_NextCheckState_IsBase(bool value) const { qcommandlinkbutton_nextcheckstate_isbase = value; }
    void setQCommandLinkButton_KeyReleaseEvent_IsBase(bool value) const { qcommandlinkbutton_keyreleaseevent_isbase = value; }
    void setQCommandLinkButton_MousePressEvent_IsBase(bool value) const { qcommandlinkbutton_mousepressevent_isbase = value; }
    void setQCommandLinkButton_MouseReleaseEvent_IsBase(bool value) const { qcommandlinkbutton_mousereleaseevent_isbase = value; }
    void setQCommandLinkButton_ChangeEvent_IsBase(bool value) const { qcommandlinkbutton_changeevent_isbase = value; }
    void setQCommandLinkButton_TimerEvent_IsBase(bool value) const { qcommandlinkbutton_timerevent_isbase = value; }
    void setQCommandLinkButton_DevType_IsBase(bool value) const { qcommandlinkbutton_devtype_isbase = value; }
    void setQCommandLinkButton_SetVisible_IsBase(bool value) const { qcommandlinkbutton_setvisible_isbase = value; }
    void setQCommandLinkButton_HasHeightForWidth_IsBase(bool value) const { qcommandlinkbutton_hasheightforwidth_isbase = value; }
    void setQCommandLinkButton_PaintEngine_IsBase(bool value) const { qcommandlinkbutton_paintengine_isbase = value; }
    void setQCommandLinkButton_MouseDoubleClickEvent_IsBase(bool value) const { qcommandlinkbutton_mousedoubleclickevent_isbase = value; }
    void setQCommandLinkButton_WheelEvent_IsBase(bool value) const { qcommandlinkbutton_wheelevent_isbase = value; }
    void setQCommandLinkButton_EnterEvent_IsBase(bool value) const { qcommandlinkbutton_enterevent_isbase = value; }
    void setQCommandLinkButton_LeaveEvent_IsBase(bool value) const { qcommandlinkbutton_leaveevent_isbase = value; }
    void setQCommandLinkButton_MoveEvent_IsBase(bool value) const { qcommandlinkbutton_moveevent_isbase = value; }
    void setQCommandLinkButton_ResizeEvent_IsBase(bool value) const { qcommandlinkbutton_resizeevent_isbase = value; }
    void setQCommandLinkButton_CloseEvent_IsBase(bool value) const { qcommandlinkbutton_closeevent_isbase = value; }
    void setQCommandLinkButton_ContextMenuEvent_IsBase(bool value) const { qcommandlinkbutton_contextmenuevent_isbase = value; }
    void setQCommandLinkButton_TabletEvent_IsBase(bool value) const { qcommandlinkbutton_tabletevent_isbase = value; }
    void setQCommandLinkButton_ActionEvent_IsBase(bool value) const { qcommandlinkbutton_actionevent_isbase = value; }
    void setQCommandLinkButton_DragEnterEvent_IsBase(bool value) const { qcommandlinkbutton_dragenterevent_isbase = value; }
    void setQCommandLinkButton_DragMoveEvent_IsBase(bool value) const { qcommandlinkbutton_dragmoveevent_isbase = value; }
    void setQCommandLinkButton_DragLeaveEvent_IsBase(bool value) const { qcommandlinkbutton_dragleaveevent_isbase = value; }
    void setQCommandLinkButton_DropEvent_IsBase(bool value) const { qcommandlinkbutton_dropevent_isbase = value; }
    void setQCommandLinkButton_ShowEvent_IsBase(bool value) const { qcommandlinkbutton_showevent_isbase = value; }
    void setQCommandLinkButton_HideEvent_IsBase(bool value) const { qcommandlinkbutton_hideevent_isbase = value; }
    void setQCommandLinkButton_NativeEvent_IsBase(bool value) const { qcommandlinkbutton_nativeevent_isbase = value; }
    void setQCommandLinkButton_Metric_IsBase(bool value) const { qcommandlinkbutton_metric_isbase = value; }
    void setQCommandLinkButton_InitPainter_IsBase(bool value) const { qcommandlinkbutton_initpainter_isbase = value; }
    void setQCommandLinkButton_Redirected_IsBase(bool value) const { qcommandlinkbutton_redirected_isbase = value; }
    void setQCommandLinkButton_SharedPainter_IsBase(bool value) const { qcommandlinkbutton_sharedpainter_isbase = value; }
    void setQCommandLinkButton_InputMethodEvent_IsBase(bool value) const { qcommandlinkbutton_inputmethodevent_isbase = value; }
    void setQCommandLinkButton_InputMethodQuery_IsBase(bool value) const { qcommandlinkbutton_inputmethodquery_isbase = value; }
    void setQCommandLinkButton_FocusNextPrevChild_IsBase(bool value) const { qcommandlinkbutton_focusnextprevchild_isbase = value; }
    void setQCommandLinkButton_EventFilter_IsBase(bool value) const { qcommandlinkbutton_eventfilter_isbase = value; }
    void setQCommandLinkButton_ChildEvent_IsBase(bool value) const { qcommandlinkbutton_childevent_isbase = value; }
    void setQCommandLinkButton_CustomEvent_IsBase(bool value) const { qcommandlinkbutton_customevent_isbase = value; }
    void setQCommandLinkButton_ConnectNotify_IsBase(bool value) const { qcommandlinkbutton_connectnotify_isbase = value; }
    void setQCommandLinkButton_DisconnectNotify_IsBase(bool value) const { qcommandlinkbutton_disconnectnotify_isbase = value; }
    void setQCommandLinkButton_UpdateMicroFocus_IsBase(bool value) const { qcommandlinkbutton_updatemicrofocus_isbase = value; }
    void setQCommandLinkButton_Create_IsBase(bool value) const { qcommandlinkbutton_create_isbase = value; }
    void setQCommandLinkButton_Destroy_IsBase(bool value) const { qcommandlinkbutton_destroy_isbase = value; }
    void setQCommandLinkButton_FocusNextChild_IsBase(bool value) const { qcommandlinkbutton_focusnextchild_isbase = value; }
    void setQCommandLinkButton_FocusPreviousChild_IsBase(bool value) const { qcommandlinkbutton_focuspreviouschild_isbase = value; }
    void setQCommandLinkButton_Sender_IsBase(bool value) const { qcommandlinkbutton_sender_isbase = value; }
    void setQCommandLinkButton_SenderSignalIndex_IsBase(bool value) const { qcommandlinkbutton_sendersignalindex_isbase = value; }
    void setQCommandLinkButton_Receivers_IsBase(bool value) const { qcommandlinkbutton_receivers_isbase = value; }
    void setQCommandLinkButton_IsSignalConnected_IsBase(bool value) const { qcommandlinkbutton_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qcommandlinkbutton_metacall_isbase) {
            qcommandlinkbutton_metacall_isbase = false;
            return QCommandLinkButton::qt_metacall(param1, param2, param3);
        } else if (qcommandlinkbutton_metacall_callback != nullptr) {
            return qcommandlinkbutton_metacall_callback(this, param1, param2, param3);
        } else {
            return QCommandLinkButton::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qcommandlinkbutton_sizehint_isbase) {
            qcommandlinkbutton_sizehint_isbase = false;
            return QCommandLinkButton::sizeHint();
        } else if (qcommandlinkbutton_sizehint_callback != nullptr) {
            return qcommandlinkbutton_sizehint_callback();
        } else {
            return QCommandLinkButton::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qcommandlinkbutton_heightforwidth_isbase) {
            qcommandlinkbutton_heightforwidth_isbase = false;
            return QCommandLinkButton::heightForWidth(param1);
        } else if (qcommandlinkbutton_heightforwidth_callback != nullptr) {
            return qcommandlinkbutton_heightforwidth_callback(this, param1);
        } else {
            return QCommandLinkButton::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qcommandlinkbutton_minimumsizehint_isbase) {
            qcommandlinkbutton_minimumsizehint_isbase = false;
            return QCommandLinkButton::minimumSizeHint();
        } else if (qcommandlinkbutton_minimumsizehint_callback != nullptr) {
            return qcommandlinkbutton_minimumsizehint_callback();
        } else {
            return QCommandLinkButton::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionButton* option) const override {
        if (qcommandlinkbutton_initstyleoption_isbase) {
            qcommandlinkbutton_initstyleoption_isbase = false;
            QCommandLinkButton::initStyleOption(option);
        } else if (qcommandlinkbutton_initstyleoption_callback != nullptr) {
            qcommandlinkbutton_initstyleoption_callback(this, option);
        } else {
            QCommandLinkButton::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qcommandlinkbutton_event_isbase) {
            qcommandlinkbutton_event_isbase = false;
            return QCommandLinkButton::event(e);
        } else if (qcommandlinkbutton_event_callback != nullptr) {
            return qcommandlinkbutton_event_callback(this, e);
        } else {
            return QCommandLinkButton::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qcommandlinkbutton_paintevent_isbase) {
            qcommandlinkbutton_paintevent_isbase = false;
            QCommandLinkButton::paintEvent(param1);
        } else if (qcommandlinkbutton_paintevent_callback != nullptr) {
            qcommandlinkbutton_paintevent_callback(this, param1);
        } else {
            QCommandLinkButton::paintEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qcommandlinkbutton_keypressevent_isbase) {
            qcommandlinkbutton_keypressevent_isbase = false;
            QCommandLinkButton::keyPressEvent(param1);
        } else if (qcommandlinkbutton_keypressevent_callback != nullptr) {
            qcommandlinkbutton_keypressevent_callback(this, param1);
        } else {
            QCommandLinkButton::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* param1) override {
        if (qcommandlinkbutton_focusinevent_isbase) {
            qcommandlinkbutton_focusinevent_isbase = false;
            QCommandLinkButton::focusInEvent(param1);
        } else if (qcommandlinkbutton_focusinevent_callback != nullptr) {
            qcommandlinkbutton_focusinevent_callback(this, param1);
        } else {
            QCommandLinkButton::focusInEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* param1) override {
        if (qcommandlinkbutton_focusoutevent_isbase) {
            qcommandlinkbutton_focusoutevent_isbase = false;
            QCommandLinkButton::focusOutEvent(param1);
        } else if (qcommandlinkbutton_focusoutevent_callback != nullptr) {
            qcommandlinkbutton_focusoutevent_callback(this, param1);
        } else {
            QCommandLinkButton::focusOutEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (qcommandlinkbutton_mousemoveevent_isbase) {
            qcommandlinkbutton_mousemoveevent_isbase = false;
            QCommandLinkButton::mouseMoveEvent(param1);
        } else if (qcommandlinkbutton_mousemoveevent_callback != nullptr) {
            qcommandlinkbutton_mousemoveevent_callback(this, param1);
        } else {
            QCommandLinkButton::mouseMoveEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hitButton(const QPoint& pos) const override {
        if (qcommandlinkbutton_hitbutton_isbase) {
            qcommandlinkbutton_hitbutton_isbase = false;
            return QCommandLinkButton::hitButton(pos);
        } else if (qcommandlinkbutton_hitbutton_callback != nullptr) {
            return qcommandlinkbutton_hitbutton_callback(this, pos);
        } else {
            return QCommandLinkButton::hitButton(pos);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void checkStateSet() override {
        if (qcommandlinkbutton_checkstateset_isbase) {
            qcommandlinkbutton_checkstateset_isbase = false;
            QCommandLinkButton::checkStateSet();
        } else if (qcommandlinkbutton_checkstateset_callback != nullptr) {
            qcommandlinkbutton_checkstateset_callback();
        } else {
            QCommandLinkButton::checkStateSet();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void nextCheckState() override {
        if (qcommandlinkbutton_nextcheckstate_isbase) {
            qcommandlinkbutton_nextcheckstate_isbase = false;
            QCommandLinkButton::nextCheckState();
        } else if (qcommandlinkbutton_nextcheckstate_callback != nullptr) {
            qcommandlinkbutton_nextcheckstate_callback();
        } else {
            QCommandLinkButton::nextCheckState();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (qcommandlinkbutton_keyreleaseevent_isbase) {
            qcommandlinkbutton_keyreleaseevent_isbase = false;
            QCommandLinkButton::keyReleaseEvent(e);
        } else if (qcommandlinkbutton_keyreleaseevent_callback != nullptr) {
            qcommandlinkbutton_keyreleaseevent_callback(this, e);
        } else {
            QCommandLinkButton::keyReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (qcommandlinkbutton_mousepressevent_isbase) {
            qcommandlinkbutton_mousepressevent_isbase = false;
            QCommandLinkButton::mousePressEvent(e);
        } else if (qcommandlinkbutton_mousepressevent_callback != nullptr) {
            qcommandlinkbutton_mousepressevent_callback(this, e);
        } else {
            QCommandLinkButton::mousePressEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (qcommandlinkbutton_mousereleaseevent_isbase) {
            qcommandlinkbutton_mousereleaseevent_isbase = false;
            QCommandLinkButton::mouseReleaseEvent(e);
        } else if (qcommandlinkbutton_mousereleaseevent_callback != nullptr) {
            qcommandlinkbutton_mousereleaseevent_callback(this, e);
        } else {
            QCommandLinkButton::mouseReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (qcommandlinkbutton_changeevent_isbase) {
            qcommandlinkbutton_changeevent_isbase = false;
            QCommandLinkButton::changeEvent(e);
        } else if (qcommandlinkbutton_changeevent_callback != nullptr) {
            qcommandlinkbutton_changeevent_callback(this, e);
        } else {
            QCommandLinkButton::changeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (qcommandlinkbutton_timerevent_isbase) {
            qcommandlinkbutton_timerevent_isbase = false;
            QCommandLinkButton::timerEvent(e);
        } else if (qcommandlinkbutton_timerevent_callback != nullptr) {
            qcommandlinkbutton_timerevent_callback(this, e);
        } else {
            QCommandLinkButton::timerEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qcommandlinkbutton_devtype_isbase) {
            qcommandlinkbutton_devtype_isbase = false;
            return QCommandLinkButton::devType();
        } else if (qcommandlinkbutton_devtype_callback != nullptr) {
            return qcommandlinkbutton_devtype_callback();
        } else {
            return QCommandLinkButton::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qcommandlinkbutton_setvisible_isbase) {
            qcommandlinkbutton_setvisible_isbase = false;
            QCommandLinkButton::setVisible(visible);
        } else if (qcommandlinkbutton_setvisible_callback != nullptr) {
            qcommandlinkbutton_setvisible_callback(this, visible);
        } else {
            QCommandLinkButton::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qcommandlinkbutton_hasheightforwidth_isbase) {
            qcommandlinkbutton_hasheightforwidth_isbase = false;
            return QCommandLinkButton::hasHeightForWidth();
        } else if (qcommandlinkbutton_hasheightforwidth_callback != nullptr) {
            return qcommandlinkbutton_hasheightforwidth_callback();
        } else {
            return QCommandLinkButton::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qcommandlinkbutton_paintengine_isbase) {
            qcommandlinkbutton_paintengine_isbase = false;
            return QCommandLinkButton::paintEngine();
        } else if (qcommandlinkbutton_paintengine_callback != nullptr) {
            return qcommandlinkbutton_paintengine_callback();
        } else {
            return QCommandLinkButton::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qcommandlinkbutton_mousedoubleclickevent_isbase) {
            qcommandlinkbutton_mousedoubleclickevent_isbase = false;
            QCommandLinkButton::mouseDoubleClickEvent(event);
        } else if (qcommandlinkbutton_mousedoubleclickevent_callback != nullptr) {
            qcommandlinkbutton_mousedoubleclickevent_callback(this, event);
        } else {
            QCommandLinkButton::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qcommandlinkbutton_wheelevent_isbase) {
            qcommandlinkbutton_wheelevent_isbase = false;
            QCommandLinkButton::wheelEvent(event);
        } else if (qcommandlinkbutton_wheelevent_callback != nullptr) {
            qcommandlinkbutton_wheelevent_callback(this, event);
        } else {
            QCommandLinkButton::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qcommandlinkbutton_enterevent_isbase) {
            qcommandlinkbutton_enterevent_isbase = false;
            QCommandLinkButton::enterEvent(event);
        } else if (qcommandlinkbutton_enterevent_callback != nullptr) {
            qcommandlinkbutton_enterevent_callback(this, event);
        } else {
            QCommandLinkButton::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qcommandlinkbutton_leaveevent_isbase) {
            qcommandlinkbutton_leaveevent_isbase = false;
            QCommandLinkButton::leaveEvent(event);
        } else if (qcommandlinkbutton_leaveevent_callback != nullptr) {
            qcommandlinkbutton_leaveevent_callback(this, event);
        } else {
            QCommandLinkButton::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qcommandlinkbutton_moveevent_isbase) {
            qcommandlinkbutton_moveevent_isbase = false;
            QCommandLinkButton::moveEvent(event);
        } else if (qcommandlinkbutton_moveevent_callback != nullptr) {
            qcommandlinkbutton_moveevent_callback(this, event);
        } else {
            QCommandLinkButton::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qcommandlinkbutton_resizeevent_isbase) {
            qcommandlinkbutton_resizeevent_isbase = false;
            QCommandLinkButton::resizeEvent(event);
        } else if (qcommandlinkbutton_resizeevent_callback != nullptr) {
            qcommandlinkbutton_resizeevent_callback(this, event);
        } else {
            QCommandLinkButton::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qcommandlinkbutton_closeevent_isbase) {
            qcommandlinkbutton_closeevent_isbase = false;
            QCommandLinkButton::closeEvent(event);
        } else if (qcommandlinkbutton_closeevent_callback != nullptr) {
            qcommandlinkbutton_closeevent_callback(this, event);
        } else {
            QCommandLinkButton::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qcommandlinkbutton_contextmenuevent_isbase) {
            qcommandlinkbutton_contextmenuevent_isbase = false;
            QCommandLinkButton::contextMenuEvent(event);
        } else if (qcommandlinkbutton_contextmenuevent_callback != nullptr) {
            qcommandlinkbutton_contextmenuevent_callback(this, event);
        } else {
            QCommandLinkButton::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qcommandlinkbutton_tabletevent_isbase) {
            qcommandlinkbutton_tabletevent_isbase = false;
            QCommandLinkButton::tabletEvent(event);
        } else if (qcommandlinkbutton_tabletevent_callback != nullptr) {
            qcommandlinkbutton_tabletevent_callback(this, event);
        } else {
            QCommandLinkButton::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qcommandlinkbutton_actionevent_isbase) {
            qcommandlinkbutton_actionevent_isbase = false;
            QCommandLinkButton::actionEvent(event);
        } else if (qcommandlinkbutton_actionevent_callback != nullptr) {
            qcommandlinkbutton_actionevent_callback(this, event);
        } else {
            QCommandLinkButton::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qcommandlinkbutton_dragenterevent_isbase) {
            qcommandlinkbutton_dragenterevent_isbase = false;
            QCommandLinkButton::dragEnterEvent(event);
        } else if (qcommandlinkbutton_dragenterevent_callback != nullptr) {
            qcommandlinkbutton_dragenterevent_callback(this, event);
        } else {
            QCommandLinkButton::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qcommandlinkbutton_dragmoveevent_isbase) {
            qcommandlinkbutton_dragmoveevent_isbase = false;
            QCommandLinkButton::dragMoveEvent(event);
        } else if (qcommandlinkbutton_dragmoveevent_callback != nullptr) {
            qcommandlinkbutton_dragmoveevent_callback(this, event);
        } else {
            QCommandLinkButton::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qcommandlinkbutton_dragleaveevent_isbase) {
            qcommandlinkbutton_dragleaveevent_isbase = false;
            QCommandLinkButton::dragLeaveEvent(event);
        } else if (qcommandlinkbutton_dragleaveevent_callback != nullptr) {
            qcommandlinkbutton_dragleaveevent_callback(this, event);
        } else {
            QCommandLinkButton::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qcommandlinkbutton_dropevent_isbase) {
            qcommandlinkbutton_dropevent_isbase = false;
            QCommandLinkButton::dropEvent(event);
        } else if (qcommandlinkbutton_dropevent_callback != nullptr) {
            qcommandlinkbutton_dropevent_callback(this, event);
        } else {
            QCommandLinkButton::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qcommandlinkbutton_showevent_isbase) {
            qcommandlinkbutton_showevent_isbase = false;
            QCommandLinkButton::showEvent(event);
        } else if (qcommandlinkbutton_showevent_callback != nullptr) {
            qcommandlinkbutton_showevent_callback(this, event);
        } else {
            QCommandLinkButton::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qcommandlinkbutton_hideevent_isbase) {
            qcommandlinkbutton_hideevent_isbase = false;
            QCommandLinkButton::hideEvent(event);
        } else if (qcommandlinkbutton_hideevent_callback != nullptr) {
            qcommandlinkbutton_hideevent_callback(this, event);
        } else {
            QCommandLinkButton::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qcommandlinkbutton_nativeevent_isbase) {
            qcommandlinkbutton_nativeevent_isbase = false;
            return QCommandLinkButton::nativeEvent(eventType, message, result);
        } else if (qcommandlinkbutton_nativeevent_callback != nullptr) {
            return qcommandlinkbutton_nativeevent_callback(this, eventType, message, result);
        } else {
            return QCommandLinkButton::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qcommandlinkbutton_metric_isbase) {
            qcommandlinkbutton_metric_isbase = false;
            return QCommandLinkButton::metric(param1);
        } else if (qcommandlinkbutton_metric_callback != nullptr) {
            return qcommandlinkbutton_metric_callback(this, param1);
        } else {
            return QCommandLinkButton::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qcommandlinkbutton_initpainter_isbase) {
            qcommandlinkbutton_initpainter_isbase = false;
            QCommandLinkButton::initPainter(painter);
        } else if (qcommandlinkbutton_initpainter_callback != nullptr) {
            qcommandlinkbutton_initpainter_callback(this, painter);
        } else {
            QCommandLinkButton::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qcommandlinkbutton_redirected_isbase) {
            qcommandlinkbutton_redirected_isbase = false;
            return QCommandLinkButton::redirected(offset);
        } else if (qcommandlinkbutton_redirected_callback != nullptr) {
            return qcommandlinkbutton_redirected_callback(this, offset);
        } else {
            return QCommandLinkButton::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qcommandlinkbutton_sharedpainter_isbase) {
            qcommandlinkbutton_sharedpainter_isbase = false;
            return QCommandLinkButton::sharedPainter();
        } else if (qcommandlinkbutton_sharedpainter_callback != nullptr) {
            return qcommandlinkbutton_sharedpainter_callback();
        } else {
            return QCommandLinkButton::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qcommandlinkbutton_inputmethodevent_isbase) {
            qcommandlinkbutton_inputmethodevent_isbase = false;
            QCommandLinkButton::inputMethodEvent(param1);
        } else if (qcommandlinkbutton_inputmethodevent_callback != nullptr) {
            qcommandlinkbutton_inputmethodevent_callback(this, param1);
        } else {
            QCommandLinkButton::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qcommandlinkbutton_inputmethodquery_isbase) {
            qcommandlinkbutton_inputmethodquery_isbase = false;
            return QCommandLinkButton::inputMethodQuery(param1);
        } else if (qcommandlinkbutton_inputmethodquery_callback != nullptr) {
            return qcommandlinkbutton_inputmethodquery_callback(this, param1);
        } else {
            return QCommandLinkButton::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qcommandlinkbutton_focusnextprevchild_isbase) {
            qcommandlinkbutton_focusnextprevchild_isbase = false;
            return QCommandLinkButton::focusNextPrevChild(next);
        } else if (qcommandlinkbutton_focusnextprevchild_callback != nullptr) {
            return qcommandlinkbutton_focusnextprevchild_callback(this, next);
        } else {
            return QCommandLinkButton::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qcommandlinkbutton_eventfilter_isbase) {
            qcommandlinkbutton_eventfilter_isbase = false;
            return QCommandLinkButton::eventFilter(watched, event);
        } else if (qcommandlinkbutton_eventfilter_callback != nullptr) {
            return qcommandlinkbutton_eventfilter_callback(this, watched, event);
        } else {
            return QCommandLinkButton::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qcommandlinkbutton_childevent_isbase) {
            qcommandlinkbutton_childevent_isbase = false;
            QCommandLinkButton::childEvent(event);
        } else if (qcommandlinkbutton_childevent_callback != nullptr) {
            qcommandlinkbutton_childevent_callback(this, event);
        } else {
            QCommandLinkButton::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qcommandlinkbutton_customevent_isbase) {
            qcommandlinkbutton_customevent_isbase = false;
            QCommandLinkButton::customEvent(event);
        } else if (qcommandlinkbutton_customevent_callback != nullptr) {
            qcommandlinkbutton_customevent_callback(this, event);
        } else {
            QCommandLinkButton::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qcommandlinkbutton_connectnotify_isbase) {
            qcommandlinkbutton_connectnotify_isbase = false;
            QCommandLinkButton::connectNotify(signal);
        } else if (qcommandlinkbutton_connectnotify_callback != nullptr) {
            qcommandlinkbutton_connectnotify_callback(this, signal);
        } else {
            QCommandLinkButton::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qcommandlinkbutton_disconnectnotify_isbase) {
            qcommandlinkbutton_disconnectnotify_isbase = false;
            QCommandLinkButton::disconnectNotify(signal);
        } else if (qcommandlinkbutton_disconnectnotify_callback != nullptr) {
            qcommandlinkbutton_disconnectnotify_callback(this, signal);
        } else {
            QCommandLinkButton::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qcommandlinkbutton_updatemicrofocus_isbase) {
            qcommandlinkbutton_updatemicrofocus_isbase = false;
            QCommandLinkButton::updateMicroFocus();
        } else if (qcommandlinkbutton_updatemicrofocus_callback != nullptr) {
            qcommandlinkbutton_updatemicrofocus_callback();
        } else {
            QCommandLinkButton::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qcommandlinkbutton_create_isbase) {
            qcommandlinkbutton_create_isbase = false;
            QCommandLinkButton::create();
        } else if (qcommandlinkbutton_create_callback != nullptr) {
            qcommandlinkbutton_create_callback();
        } else {
            QCommandLinkButton::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qcommandlinkbutton_destroy_isbase) {
            qcommandlinkbutton_destroy_isbase = false;
            QCommandLinkButton::destroy();
        } else if (qcommandlinkbutton_destroy_callback != nullptr) {
            qcommandlinkbutton_destroy_callback();
        } else {
            QCommandLinkButton::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qcommandlinkbutton_focusnextchild_isbase) {
            qcommandlinkbutton_focusnextchild_isbase = false;
            return QCommandLinkButton::focusNextChild();
        } else if (qcommandlinkbutton_focusnextchild_callback != nullptr) {
            return qcommandlinkbutton_focusnextchild_callback();
        } else {
            return QCommandLinkButton::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qcommandlinkbutton_focuspreviouschild_isbase) {
            qcommandlinkbutton_focuspreviouschild_isbase = false;
            return QCommandLinkButton::focusPreviousChild();
        } else if (qcommandlinkbutton_focuspreviouschild_callback != nullptr) {
            return qcommandlinkbutton_focuspreviouschild_callback();
        } else {
            return QCommandLinkButton::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qcommandlinkbutton_sender_isbase) {
            qcommandlinkbutton_sender_isbase = false;
            return QCommandLinkButton::sender();
        } else if (qcommandlinkbutton_sender_callback != nullptr) {
            return qcommandlinkbutton_sender_callback();
        } else {
            return QCommandLinkButton::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qcommandlinkbutton_sendersignalindex_isbase) {
            qcommandlinkbutton_sendersignalindex_isbase = false;
            return QCommandLinkButton::senderSignalIndex();
        } else if (qcommandlinkbutton_sendersignalindex_callback != nullptr) {
            return qcommandlinkbutton_sendersignalindex_callback();
        } else {
            return QCommandLinkButton::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qcommandlinkbutton_receivers_isbase) {
            qcommandlinkbutton_receivers_isbase = false;
            return QCommandLinkButton::receivers(signal);
        } else if (qcommandlinkbutton_receivers_callback != nullptr) {
            return qcommandlinkbutton_receivers_callback(this, signal);
        } else {
            return QCommandLinkButton::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qcommandlinkbutton_issignalconnected_isbase) {
            qcommandlinkbutton_issignalconnected_isbase = false;
            return QCommandLinkButton::isSignalConnected(signal);
        } else if (qcommandlinkbutton_issignalconnected_callback != nullptr) {
            return qcommandlinkbutton_issignalconnected_callback(this, signal);
        } else {
            return QCommandLinkButton::isSignalConnected(signal);
        }
    }
};

#endif
