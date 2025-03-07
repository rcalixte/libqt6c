#pragma once
#ifndef SRCC_LIBVIRTUALQFOCUSFRAME_H
#define SRCC_LIBVIRTUALQFOCUSFRAME_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QFocusFrame so that we can call protected methods
class VirtualQFocusFrame : public QFocusFrame {

  public:
    // Virtual class public types (including callbacks)
    using QFocusFrame_Metacall_Callback = int (*)(QFocusFrame*, QMetaObject::Call, int, void**);
    using QFocusFrame_Event_Callback = bool (*)(QFocusFrame*, QEvent*);
    using QFocusFrame_EventFilter_Callback = bool (*)(QFocusFrame*, QObject*, QEvent*);
    using QFocusFrame_PaintEvent_Callback = void (*)(QFocusFrame*, QPaintEvent*);
    using QFocusFrame_InitStyleOption_Callback = void (*)(const QFocusFrame*, QStyleOption*);
    using QFocusFrame_DevType_Callback = int (*)();
    using QFocusFrame_SetVisible_Callback = void (*)(QFocusFrame*, bool);
    using QFocusFrame_SizeHint_Callback = QSize (*)();
    using QFocusFrame_MinimumSizeHint_Callback = QSize (*)();
    using QFocusFrame_HeightForWidth_Callback = int (*)(const QFocusFrame*, int);
    using QFocusFrame_HasHeightForWidth_Callback = bool (*)();
    using QFocusFrame_PaintEngine_Callback = QPaintEngine* (*)();
    using QFocusFrame_MousePressEvent_Callback = void (*)(QFocusFrame*, QMouseEvent*);
    using QFocusFrame_MouseReleaseEvent_Callback = void (*)(QFocusFrame*, QMouseEvent*);
    using QFocusFrame_MouseDoubleClickEvent_Callback = void (*)(QFocusFrame*, QMouseEvent*);
    using QFocusFrame_MouseMoveEvent_Callback = void (*)(QFocusFrame*, QMouseEvent*);
    using QFocusFrame_WheelEvent_Callback = void (*)(QFocusFrame*, QWheelEvent*);
    using QFocusFrame_KeyPressEvent_Callback = void (*)(QFocusFrame*, QKeyEvent*);
    using QFocusFrame_KeyReleaseEvent_Callback = void (*)(QFocusFrame*, QKeyEvent*);
    using QFocusFrame_FocusInEvent_Callback = void (*)(QFocusFrame*, QFocusEvent*);
    using QFocusFrame_FocusOutEvent_Callback = void (*)(QFocusFrame*, QFocusEvent*);
    using QFocusFrame_EnterEvent_Callback = void (*)(QFocusFrame*, QEnterEvent*);
    using QFocusFrame_LeaveEvent_Callback = void (*)(QFocusFrame*, QEvent*);
    using QFocusFrame_MoveEvent_Callback = void (*)(QFocusFrame*, QMoveEvent*);
    using QFocusFrame_ResizeEvent_Callback = void (*)(QFocusFrame*, QResizeEvent*);
    using QFocusFrame_CloseEvent_Callback = void (*)(QFocusFrame*, QCloseEvent*);
    using QFocusFrame_ContextMenuEvent_Callback = void (*)(QFocusFrame*, QContextMenuEvent*);
    using QFocusFrame_TabletEvent_Callback = void (*)(QFocusFrame*, QTabletEvent*);
    using QFocusFrame_ActionEvent_Callback = void (*)(QFocusFrame*, QActionEvent*);
    using QFocusFrame_DragEnterEvent_Callback = void (*)(QFocusFrame*, QDragEnterEvent*);
    using QFocusFrame_DragMoveEvent_Callback = void (*)(QFocusFrame*, QDragMoveEvent*);
    using QFocusFrame_DragLeaveEvent_Callback = void (*)(QFocusFrame*, QDragLeaveEvent*);
    using QFocusFrame_DropEvent_Callback = void (*)(QFocusFrame*, QDropEvent*);
    using QFocusFrame_ShowEvent_Callback = void (*)(QFocusFrame*, QShowEvent*);
    using QFocusFrame_HideEvent_Callback = void (*)(QFocusFrame*, QHideEvent*);
    using QFocusFrame_NativeEvent_Callback = bool (*)(QFocusFrame*, const QByteArray&, void*, qintptr*);
    using QFocusFrame_ChangeEvent_Callback = void (*)(QFocusFrame*, QEvent*);
    using QFocusFrame_Metric_Callback = int (*)(const QFocusFrame*, QPaintDevice::PaintDeviceMetric);
    using QFocusFrame_InitPainter_Callback = void (*)(const QFocusFrame*, QPainter*);
    using QFocusFrame_Redirected_Callback = QPaintDevice* (*)(const QFocusFrame*, QPoint*);
    using QFocusFrame_SharedPainter_Callback = QPainter* (*)();
    using QFocusFrame_InputMethodEvent_Callback = void (*)(QFocusFrame*, QInputMethodEvent*);
    using QFocusFrame_InputMethodQuery_Callback = QVariant (*)(const QFocusFrame*, Qt::InputMethodQuery);
    using QFocusFrame_FocusNextPrevChild_Callback = bool (*)(QFocusFrame*, bool);
    using QFocusFrame_TimerEvent_Callback = void (*)(QFocusFrame*, QTimerEvent*);
    using QFocusFrame_ChildEvent_Callback = void (*)(QFocusFrame*, QChildEvent*);
    using QFocusFrame_CustomEvent_Callback = void (*)(QFocusFrame*, QEvent*);
    using QFocusFrame_ConnectNotify_Callback = void (*)(QFocusFrame*, const QMetaMethod&);
    using QFocusFrame_DisconnectNotify_Callback = void (*)(QFocusFrame*, const QMetaMethod&);
    using QFocusFrame_UpdateMicroFocus_Callback = void (*)();
    using QFocusFrame_Create_Callback = void (*)();
    using QFocusFrame_Destroy_Callback = void (*)();
    using QFocusFrame_FocusNextChild_Callback = bool (*)();
    using QFocusFrame_FocusPreviousChild_Callback = bool (*)();
    using QFocusFrame_Sender_Callback = QObject* (*)();
    using QFocusFrame_SenderSignalIndex_Callback = int (*)();
    using QFocusFrame_Receivers_Callback = int (*)(const QFocusFrame*, const char*);
    using QFocusFrame_IsSignalConnected_Callback = bool (*)(const QFocusFrame*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QFocusFrame_Metacall_Callback qfocusframe_metacall_callback = nullptr;
    QFocusFrame_Event_Callback qfocusframe_event_callback = nullptr;
    QFocusFrame_EventFilter_Callback qfocusframe_eventfilter_callback = nullptr;
    QFocusFrame_PaintEvent_Callback qfocusframe_paintevent_callback = nullptr;
    QFocusFrame_InitStyleOption_Callback qfocusframe_initstyleoption_callback = nullptr;
    QFocusFrame_DevType_Callback qfocusframe_devtype_callback = nullptr;
    QFocusFrame_SetVisible_Callback qfocusframe_setvisible_callback = nullptr;
    QFocusFrame_SizeHint_Callback qfocusframe_sizehint_callback = nullptr;
    QFocusFrame_MinimumSizeHint_Callback qfocusframe_minimumsizehint_callback = nullptr;
    QFocusFrame_HeightForWidth_Callback qfocusframe_heightforwidth_callback = nullptr;
    QFocusFrame_HasHeightForWidth_Callback qfocusframe_hasheightforwidth_callback = nullptr;
    QFocusFrame_PaintEngine_Callback qfocusframe_paintengine_callback = nullptr;
    QFocusFrame_MousePressEvent_Callback qfocusframe_mousepressevent_callback = nullptr;
    QFocusFrame_MouseReleaseEvent_Callback qfocusframe_mousereleaseevent_callback = nullptr;
    QFocusFrame_MouseDoubleClickEvent_Callback qfocusframe_mousedoubleclickevent_callback = nullptr;
    QFocusFrame_MouseMoveEvent_Callback qfocusframe_mousemoveevent_callback = nullptr;
    QFocusFrame_WheelEvent_Callback qfocusframe_wheelevent_callback = nullptr;
    QFocusFrame_KeyPressEvent_Callback qfocusframe_keypressevent_callback = nullptr;
    QFocusFrame_KeyReleaseEvent_Callback qfocusframe_keyreleaseevent_callback = nullptr;
    QFocusFrame_FocusInEvent_Callback qfocusframe_focusinevent_callback = nullptr;
    QFocusFrame_FocusOutEvent_Callback qfocusframe_focusoutevent_callback = nullptr;
    QFocusFrame_EnterEvent_Callback qfocusframe_enterevent_callback = nullptr;
    QFocusFrame_LeaveEvent_Callback qfocusframe_leaveevent_callback = nullptr;
    QFocusFrame_MoveEvent_Callback qfocusframe_moveevent_callback = nullptr;
    QFocusFrame_ResizeEvent_Callback qfocusframe_resizeevent_callback = nullptr;
    QFocusFrame_CloseEvent_Callback qfocusframe_closeevent_callback = nullptr;
    QFocusFrame_ContextMenuEvent_Callback qfocusframe_contextmenuevent_callback = nullptr;
    QFocusFrame_TabletEvent_Callback qfocusframe_tabletevent_callback = nullptr;
    QFocusFrame_ActionEvent_Callback qfocusframe_actionevent_callback = nullptr;
    QFocusFrame_DragEnterEvent_Callback qfocusframe_dragenterevent_callback = nullptr;
    QFocusFrame_DragMoveEvent_Callback qfocusframe_dragmoveevent_callback = nullptr;
    QFocusFrame_DragLeaveEvent_Callback qfocusframe_dragleaveevent_callback = nullptr;
    QFocusFrame_DropEvent_Callback qfocusframe_dropevent_callback = nullptr;
    QFocusFrame_ShowEvent_Callback qfocusframe_showevent_callback = nullptr;
    QFocusFrame_HideEvent_Callback qfocusframe_hideevent_callback = nullptr;
    QFocusFrame_NativeEvent_Callback qfocusframe_nativeevent_callback = nullptr;
    QFocusFrame_ChangeEvent_Callback qfocusframe_changeevent_callback = nullptr;
    QFocusFrame_Metric_Callback qfocusframe_metric_callback = nullptr;
    QFocusFrame_InitPainter_Callback qfocusframe_initpainter_callback = nullptr;
    QFocusFrame_Redirected_Callback qfocusframe_redirected_callback = nullptr;
    QFocusFrame_SharedPainter_Callback qfocusframe_sharedpainter_callback = nullptr;
    QFocusFrame_InputMethodEvent_Callback qfocusframe_inputmethodevent_callback = nullptr;
    QFocusFrame_InputMethodQuery_Callback qfocusframe_inputmethodquery_callback = nullptr;
    QFocusFrame_FocusNextPrevChild_Callback qfocusframe_focusnextprevchild_callback = nullptr;
    QFocusFrame_TimerEvent_Callback qfocusframe_timerevent_callback = nullptr;
    QFocusFrame_ChildEvent_Callback qfocusframe_childevent_callback = nullptr;
    QFocusFrame_CustomEvent_Callback qfocusframe_customevent_callback = nullptr;
    QFocusFrame_ConnectNotify_Callback qfocusframe_connectnotify_callback = nullptr;
    QFocusFrame_DisconnectNotify_Callback qfocusframe_disconnectnotify_callback = nullptr;
    QFocusFrame_UpdateMicroFocus_Callback qfocusframe_updatemicrofocus_callback = nullptr;
    QFocusFrame_Create_Callback qfocusframe_create_callback = nullptr;
    QFocusFrame_Destroy_Callback qfocusframe_destroy_callback = nullptr;
    QFocusFrame_FocusNextChild_Callback qfocusframe_focusnextchild_callback = nullptr;
    QFocusFrame_FocusPreviousChild_Callback qfocusframe_focuspreviouschild_callback = nullptr;
    QFocusFrame_Sender_Callback qfocusframe_sender_callback = nullptr;
    QFocusFrame_SenderSignalIndex_Callback qfocusframe_sendersignalindex_callback = nullptr;
    QFocusFrame_Receivers_Callback qfocusframe_receivers_callback = nullptr;
    QFocusFrame_IsSignalConnected_Callback qfocusframe_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qfocusframe_metacall_isbase = false;
    mutable bool qfocusframe_event_isbase = false;
    mutable bool qfocusframe_eventfilter_isbase = false;
    mutable bool qfocusframe_paintevent_isbase = false;
    mutable bool qfocusframe_initstyleoption_isbase = false;
    mutable bool qfocusframe_devtype_isbase = false;
    mutable bool qfocusframe_setvisible_isbase = false;
    mutable bool qfocusframe_sizehint_isbase = false;
    mutable bool qfocusframe_minimumsizehint_isbase = false;
    mutable bool qfocusframe_heightforwidth_isbase = false;
    mutable bool qfocusframe_hasheightforwidth_isbase = false;
    mutable bool qfocusframe_paintengine_isbase = false;
    mutable bool qfocusframe_mousepressevent_isbase = false;
    mutable bool qfocusframe_mousereleaseevent_isbase = false;
    mutable bool qfocusframe_mousedoubleclickevent_isbase = false;
    mutable bool qfocusframe_mousemoveevent_isbase = false;
    mutable bool qfocusframe_wheelevent_isbase = false;
    mutable bool qfocusframe_keypressevent_isbase = false;
    mutable bool qfocusframe_keyreleaseevent_isbase = false;
    mutable bool qfocusframe_focusinevent_isbase = false;
    mutable bool qfocusframe_focusoutevent_isbase = false;
    mutable bool qfocusframe_enterevent_isbase = false;
    mutable bool qfocusframe_leaveevent_isbase = false;
    mutable bool qfocusframe_moveevent_isbase = false;
    mutable bool qfocusframe_resizeevent_isbase = false;
    mutable bool qfocusframe_closeevent_isbase = false;
    mutable bool qfocusframe_contextmenuevent_isbase = false;
    mutable bool qfocusframe_tabletevent_isbase = false;
    mutable bool qfocusframe_actionevent_isbase = false;
    mutable bool qfocusframe_dragenterevent_isbase = false;
    mutable bool qfocusframe_dragmoveevent_isbase = false;
    mutable bool qfocusframe_dragleaveevent_isbase = false;
    mutable bool qfocusframe_dropevent_isbase = false;
    mutable bool qfocusframe_showevent_isbase = false;
    mutable bool qfocusframe_hideevent_isbase = false;
    mutable bool qfocusframe_nativeevent_isbase = false;
    mutable bool qfocusframe_changeevent_isbase = false;
    mutable bool qfocusframe_metric_isbase = false;
    mutable bool qfocusframe_initpainter_isbase = false;
    mutable bool qfocusframe_redirected_isbase = false;
    mutable bool qfocusframe_sharedpainter_isbase = false;
    mutable bool qfocusframe_inputmethodevent_isbase = false;
    mutable bool qfocusframe_inputmethodquery_isbase = false;
    mutable bool qfocusframe_focusnextprevchild_isbase = false;
    mutable bool qfocusframe_timerevent_isbase = false;
    mutable bool qfocusframe_childevent_isbase = false;
    mutable bool qfocusframe_customevent_isbase = false;
    mutable bool qfocusframe_connectnotify_isbase = false;
    mutable bool qfocusframe_disconnectnotify_isbase = false;
    mutable bool qfocusframe_updatemicrofocus_isbase = false;
    mutable bool qfocusframe_create_isbase = false;
    mutable bool qfocusframe_destroy_isbase = false;
    mutable bool qfocusframe_focusnextchild_isbase = false;
    mutable bool qfocusframe_focuspreviouschild_isbase = false;
    mutable bool qfocusframe_sender_isbase = false;
    mutable bool qfocusframe_sendersignalindex_isbase = false;
    mutable bool qfocusframe_receivers_isbase = false;
    mutable bool qfocusframe_issignalconnected_isbase = false;

  public:
    VirtualQFocusFrame(QWidget* parent) : QFocusFrame(parent){};
    VirtualQFocusFrame() : QFocusFrame(){};

    ~VirtualQFocusFrame() {
        qfocusframe_metacall_callback = nullptr;
        qfocusframe_event_callback = nullptr;
        qfocusframe_eventfilter_callback = nullptr;
        qfocusframe_paintevent_callback = nullptr;
        qfocusframe_initstyleoption_callback = nullptr;
        qfocusframe_devtype_callback = nullptr;
        qfocusframe_setvisible_callback = nullptr;
        qfocusframe_sizehint_callback = nullptr;
        qfocusframe_minimumsizehint_callback = nullptr;
        qfocusframe_heightforwidth_callback = nullptr;
        qfocusframe_hasheightforwidth_callback = nullptr;
        qfocusframe_paintengine_callback = nullptr;
        qfocusframe_mousepressevent_callback = nullptr;
        qfocusframe_mousereleaseevent_callback = nullptr;
        qfocusframe_mousedoubleclickevent_callback = nullptr;
        qfocusframe_mousemoveevent_callback = nullptr;
        qfocusframe_wheelevent_callback = nullptr;
        qfocusframe_keypressevent_callback = nullptr;
        qfocusframe_keyreleaseevent_callback = nullptr;
        qfocusframe_focusinevent_callback = nullptr;
        qfocusframe_focusoutevent_callback = nullptr;
        qfocusframe_enterevent_callback = nullptr;
        qfocusframe_leaveevent_callback = nullptr;
        qfocusframe_moveevent_callback = nullptr;
        qfocusframe_resizeevent_callback = nullptr;
        qfocusframe_closeevent_callback = nullptr;
        qfocusframe_contextmenuevent_callback = nullptr;
        qfocusframe_tabletevent_callback = nullptr;
        qfocusframe_actionevent_callback = nullptr;
        qfocusframe_dragenterevent_callback = nullptr;
        qfocusframe_dragmoveevent_callback = nullptr;
        qfocusframe_dragleaveevent_callback = nullptr;
        qfocusframe_dropevent_callback = nullptr;
        qfocusframe_showevent_callback = nullptr;
        qfocusframe_hideevent_callback = nullptr;
        qfocusframe_nativeevent_callback = nullptr;
        qfocusframe_changeevent_callback = nullptr;
        qfocusframe_metric_callback = nullptr;
        qfocusframe_initpainter_callback = nullptr;
        qfocusframe_redirected_callback = nullptr;
        qfocusframe_sharedpainter_callback = nullptr;
        qfocusframe_inputmethodevent_callback = nullptr;
        qfocusframe_inputmethodquery_callback = nullptr;
        qfocusframe_focusnextprevchild_callback = nullptr;
        qfocusframe_timerevent_callback = nullptr;
        qfocusframe_childevent_callback = nullptr;
        qfocusframe_customevent_callback = nullptr;
        qfocusframe_connectnotify_callback = nullptr;
        qfocusframe_disconnectnotify_callback = nullptr;
        qfocusframe_updatemicrofocus_callback = nullptr;
        qfocusframe_create_callback = nullptr;
        qfocusframe_destroy_callback = nullptr;
        qfocusframe_focusnextchild_callback = nullptr;
        qfocusframe_focuspreviouschild_callback = nullptr;
        qfocusframe_sender_callback = nullptr;
        qfocusframe_sendersignalindex_callback = nullptr;
        qfocusframe_receivers_callback = nullptr;
        qfocusframe_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQFocusFrame_Metacall_Callback(QFocusFrame_Metacall_Callback cb) { qfocusframe_metacall_callback = cb; }
    void setQFocusFrame_Event_Callback(QFocusFrame_Event_Callback cb) { qfocusframe_event_callback = cb; }
    void setQFocusFrame_EventFilter_Callback(QFocusFrame_EventFilter_Callback cb) { qfocusframe_eventfilter_callback = cb; }
    void setQFocusFrame_PaintEvent_Callback(QFocusFrame_PaintEvent_Callback cb) { qfocusframe_paintevent_callback = cb; }
    void setQFocusFrame_InitStyleOption_Callback(QFocusFrame_InitStyleOption_Callback cb) { qfocusframe_initstyleoption_callback = cb; }
    void setQFocusFrame_DevType_Callback(QFocusFrame_DevType_Callback cb) { qfocusframe_devtype_callback = cb; }
    void setQFocusFrame_SetVisible_Callback(QFocusFrame_SetVisible_Callback cb) { qfocusframe_setvisible_callback = cb; }
    void setQFocusFrame_SizeHint_Callback(QFocusFrame_SizeHint_Callback cb) { qfocusframe_sizehint_callback = cb; }
    void setQFocusFrame_MinimumSizeHint_Callback(QFocusFrame_MinimumSizeHint_Callback cb) { qfocusframe_minimumsizehint_callback = cb; }
    void setQFocusFrame_HeightForWidth_Callback(QFocusFrame_HeightForWidth_Callback cb) { qfocusframe_heightforwidth_callback = cb; }
    void setQFocusFrame_HasHeightForWidth_Callback(QFocusFrame_HasHeightForWidth_Callback cb) { qfocusframe_hasheightforwidth_callback = cb; }
    void setQFocusFrame_PaintEngine_Callback(QFocusFrame_PaintEngine_Callback cb) { qfocusframe_paintengine_callback = cb; }
    void setQFocusFrame_MousePressEvent_Callback(QFocusFrame_MousePressEvent_Callback cb) { qfocusframe_mousepressevent_callback = cb; }
    void setQFocusFrame_MouseReleaseEvent_Callback(QFocusFrame_MouseReleaseEvent_Callback cb) { qfocusframe_mousereleaseevent_callback = cb; }
    void setQFocusFrame_MouseDoubleClickEvent_Callback(QFocusFrame_MouseDoubleClickEvent_Callback cb) { qfocusframe_mousedoubleclickevent_callback = cb; }
    void setQFocusFrame_MouseMoveEvent_Callback(QFocusFrame_MouseMoveEvent_Callback cb) { qfocusframe_mousemoveevent_callback = cb; }
    void setQFocusFrame_WheelEvent_Callback(QFocusFrame_WheelEvent_Callback cb) { qfocusframe_wheelevent_callback = cb; }
    void setQFocusFrame_KeyPressEvent_Callback(QFocusFrame_KeyPressEvent_Callback cb) { qfocusframe_keypressevent_callback = cb; }
    void setQFocusFrame_KeyReleaseEvent_Callback(QFocusFrame_KeyReleaseEvent_Callback cb) { qfocusframe_keyreleaseevent_callback = cb; }
    void setQFocusFrame_FocusInEvent_Callback(QFocusFrame_FocusInEvent_Callback cb) { qfocusframe_focusinevent_callback = cb; }
    void setQFocusFrame_FocusOutEvent_Callback(QFocusFrame_FocusOutEvent_Callback cb) { qfocusframe_focusoutevent_callback = cb; }
    void setQFocusFrame_EnterEvent_Callback(QFocusFrame_EnterEvent_Callback cb) { qfocusframe_enterevent_callback = cb; }
    void setQFocusFrame_LeaveEvent_Callback(QFocusFrame_LeaveEvent_Callback cb) { qfocusframe_leaveevent_callback = cb; }
    void setQFocusFrame_MoveEvent_Callback(QFocusFrame_MoveEvent_Callback cb) { qfocusframe_moveevent_callback = cb; }
    void setQFocusFrame_ResizeEvent_Callback(QFocusFrame_ResizeEvent_Callback cb) { qfocusframe_resizeevent_callback = cb; }
    void setQFocusFrame_CloseEvent_Callback(QFocusFrame_CloseEvent_Callback cb) { qfocusframe_closeevent_callback = cb; }
    void setQFocusFrame_ContextMenuEvent_Callback(QFocusFrame_ContextMenuEvent_Callback cb) { qfocusframe_contextmenuevent_callback = cb; }
    void setQFocusFrame_TabletEvent_Callback(QFocusFrame_TabletEvent_Callback cb) { qfocusframe_tabletevent_callback = cb; }
    void setQFocusFrame_ActionEvent_Callback(QFocusFrame_ActionEvent_Callback cb) { qfocusframe_actionevent_callback = cb; }
    void setQFocusFrame_DragEnterEvent_Callback(QFocusFrame_DragEnterEvent_Callback cb) { qfocusframe_dragenterevent_callback = cb; }
    void setQFocusFrame_DragMoveEvent_Callback(QFocusFrame_DragMoveEvent_Callback cb) { qfocusframe_dragmoveevent_callback = cb; }
    void setQFocusFrame_DragLeaveEvent_Callback(QFocusFrame_DragLeaveEvent_Callback cb) { qfocusframe_dragleaveevent_callback = cb; }
    void setQFocusFrame_DropEvent_Callback(QFocusFrame_DropEvent_Callback cb) { qfocusframe_dropevent_callback = cb; }
    void setQFocusFrame_ShowEvent_Callback(QFocusFrame_ShowEvent_Callback cb) { qfocusframe_showevent_callback = cb; }
    void setQFocusFrame_HideEvent_Callback(QFocusFrame_HideEvent_Callback cb) { qfocusframe_hideevent_callback = cb; }
    void setQFocusFrame_NativeEvent_Callback(QFocusFrame_NativeEvent_Callback cb) { qfocusframe_nativeevent_callback = cb; }
    void setQFocusFrame_ChangeEvent_Callback(QFocusFrame_ChangeEvent_Callback cb) { qfocusframe_changeevent_callback = cb; }
    void setQFocusFrame_Metric_Callback(QFocusFrame_Metric_Callback cb) { qfocusframe_metric_callback = cb; }
    void setQFocusFrame_InitPainter_Callback(QFocusFrame_InitPainter_Callback cb) { qfocusframe_initpainter_callback = cb; }
    void setQFocusFrame_Redirected_Callback(QFocusFrame_Redirected_Callback cb) { qfocusframe_redirected_callback = cb; }
    void setQFocusFrame_SharedPainter_Callback(QFocusFrame_SharedPainter_Callback cb) { qfocusframe_sharedpainter_callback = cb; }
    void setQFocusFrame_InputMethodEvent_Callback(QFocusFrame_InputMethodEvent_Callback cb) { qfocusframe_inputmethodevent_callback = cb; }
    void setQFocusFrame_InputMethodQuery_Callback(QFocusFrame_InputMethodQuery_Callback cb) { qfocusframe_inputmethodquery_callback = cb; }
    void setQFocusFrame_FocusNextPrevChild_Callback(QFocusFrame_FocusNextPrevChild_Callback cb) { qfocusframe_focusnextprevchild_callback = cb; }
    void setQFocusFrame_TimerEvent_Callback(QFocusFrame_TimerEvent_Callback cb) { qfocusframe_timerevent_callback = cb; }
    void setQFocusFrame_ChildEvent_Callback(QFocusFrame_ChildEvent_Callback cb) { qfocusframe_childevent_callback = cb; }
    void setQFocusFrame_CustomEvent_Callback(QFocusFrame_CustomEvent_Callback cb) { qfocusframe_customevent_callback = cb; }
    void setQFocusFrame_ConnectNotify_Callback(QFocusFrame_ConnectNotify_Callback cb) { qfocusframe_connectnotify_callback = cb; }
    void setQFocusFrame_DisconnectNotify_Callback(QFocusFrame_DisconnectNotify_Callback cb) { qfocusframe_disconnectnotify_callback = cb; }
    void setQFocusFrame_UpdateMicroFocus_Callback(QFocusFrame_UpdateMicroFocus_Callback cb) { qfocusframe_updatemicrofocus_callback = cb; }
    void setQFocusFrame_Create_Callback(QFocusFrame_Create_Callback cb) { qfocusframe_create_callback = cb; }
    void setQFocusFrame_Destroy_Callback(QFocusFrame_Destroy_Callback cb) { qfocusframe_destroy_callback = cb; }
    void setQFocusFrame_FocusNextChild_Callback(QFocusFrame_FocusNextChild_Callback cb) { qfocusframe_focusnextchild_callback = cb; }
    void setQFocusFrame_FocusPreviousChild_Callback(QFocusFrame_FocusPreviousChild_Callback cb) { qfocusframe_focuspreviouschild_callback = cb; }
    void setQFocusFrame_Sender_Callback(QFocusFrame_Sender_Callback cb) { qfocusframe_sender_callback = cb; }
    void setQFocusFrame_SenderSignalIndex_Callback(QFocusFrame_SenderSignalIndex_Callback cb) { qfocusframe_sendersignalindex_callback = cb; }
    void setQFocusFrame_Receivers_Callback(QFocusFrame_Receivers_Callback cb) { qfocusframe_receivers_callback = cb; }
    void setQFocusFrame_IsSignalConnected_Callback(QFocusFrame_IsSignalConnected_Callback cb) { qfocusframe_issignalconnected_callback = cb; }

    // Base flag setters
    void setQFocusFrame_Metacall_IsBase(bool value) const { qfocusframe_metacall_isbase = value; }
    void setQFocusFrame_Event_IsBase(bool value) const { qfocusframe_event_isbase = value; }
    void setQFocusFrame_EventFilter_IsBase(bool value) const { qfocusframe_eventfilter_isbase = value; }
    void setQFocusFrame_PaintEvent_IsBase(bool value) const { qfocusframe_paintevent_isbase = value; }
    void setQFocusFrame_InitStyleOption_IsBase(bool value) const { qfocusframe_initstyleoption_isbase = value; }
    void setQFocusFrame_DevType_IsBase(bool value) const { qfocusframe_devtype_isbase = value; }
    void setQFocusFrame_SetVisible_IsBase(bool value) const { qfocusframe_setvisible_isbase = value; }
    void setQFocusFrame_SizeHint_IsBase(bool value) const { qfocusframe_sizehint_isbase = value; }
    void setQFocusFrame_MinimumSizeHint_IsBase(bool value) const { qfocusframe_minimumsizehint_isbase = value; }
    void setQFocusFrame_HeightForWidth_IsBase(bool value) const { qfocusframe_heightforwidth_isbase = value; }
    void setQFocusFrame_HasHeightForWidth_IsBase(bool value) const { qfocusframe_hasheightforwidth_isbase = value; }
    void setQFocusFrame_PaintEngine_IsBase(bool value) const { qfocusframe_paintengine_isbase = value; }
    void setQFocusFrame_MousePressEvent_IsBase(bool value) const { qfocusframe_mousepressevent_isbase = value; }
    void setQFocusFrame_MouseReleaseEvent_IsBase(bool value) const { qfocusframe_mousereleaseevent_isbase = value; }
    void setQFocusFrame_MouseDoubleClickEvent_IsBase(bool value) const { qfocusframe_mousedoubleclickevent_isbase = value; }
    void setQFocusFrame_MouseMoveEvent_IsBase(bool value) const { qfocusframe_mousemoveevent_isbase = value; }
    void setQFocusFrame_WheelEvent_IsBase(bool value) const { qfocusframe_wheelevent_isbase = value; }
    void setQFocusFrame_KeyPressEvent_IsBase(bool value) const { qfocusframe_keypressevent_isbase = value; }
    void setQFocusFrame_KeyReleaseEvent_IsBase(bool value) const { qfocusframe_keyreleaseevent_isbase = value; }
    void setQFocusFrame_FocusInEvent_IsBase(bool value) const { qfocusframe_focusinevent_isbase = value; }
    void setQFocusFrame_FocusOutEvent_IsBase(bool value) const { qfocusframe_focusoutevent_isbase = value; }
    void setQFocusFrame_EnterEvent_IsBase(bool value) const { qfocusframe_enterevent_isbase = value; }
    void setQFocusFrame_LeaveEvent_IsBase(bool value) const { qfocusframe_leaveevent_isbase = value; }
    void setQFocusFrame_MoveEvent_IsBase(bool value) const { qfocusframe_moveevent_isbase = value; }
    void setQFocusFrame_ResizeEvent_IsBase(bool value) const { qfocusframe_resizeevent_isbase = value; }
    void setQFocusFrame_CloseEvent_IsBase(bool value) const { qfocusframe_closeevent_isbase = value; }
    void setQFocusFrame_ContextMenuEvent_IsBase(bool value) const { qfocusframe_contextmenuevent_isbase = value; }
    void setQFocusFrame_TabletEvent_IsBase(bool value) const { qfocusframe_tabletevent_isbase = value; }
    void setQFocusFrame_ActionEvent_IsBase(bool value) const { qfocusframe_actionevent_isbase = value; }
    void setQFocusFrame_DragEnterEvent_IsBase(bool value) const { qfocusframe_dragenterevent_isbase = value; }
    void setQFocusFrame_DragMoveEvent_IsBase(bool value) const { qfocusframe_dragmoveevent_isbase = value; }
    void setQFocusFrame_DragLeaveEvent_IsBase(bool value) const { qfocusframe_dragleaveevent_isbase = value; }
    void setQFocusFrame_DropEvent_IsBase(bool value) const { qfocusframe_dropevent_isbase = value; }
    void setQFocusFrame_ShowEvent_IsBase(bool value) const { qfocusframe_showevent_isbase = value; }
    void setQFocusFrame_HideEvent_IsBase(bool value) const { qfocusframe_hideevent_isbase = value; }
    void setQFocusFrame_NativeEvent_IsBase(bool value) const { qfocusframe_nativeevent_isbase = value; }
    void setQFocusFrame_ChangeEvent_IsBase(bool value) const { qfocusframe_changeevent_isbase = value; }
    void setQFocusFrame_Metric_IsBase(bool value) const { qfocusframe_metric_isbase = value; }
    void setQFocusFrame_InitPainter_IsBase(bool value) const { qfocusframe_initpainter_isbase = value; }
    void setQFocusFrame_Redirected_IsBase(bool value) const { qfocusframe_redirected_isbase = value; }
    void setQFocusFrame_SharedPainter_IsBase(bool value) const { qfocusframe_sharedpainter_isbase = value; }
    void setQFocusFrame_InputMethodEvent_IsBase(bool value) const { qfocusframe_inputmethodevent_isbase = value; }
    void setQFocusFrame_InputMethodQuery_IsBase(bool value) const { qfocusframe_inputmethodquery_isbase = value; }
    void setQFocusFrame_FocusNextPrevChild_IsBase(bool value) const { qfocusframe_focusnextprevchild_isbase = value; }
    void setQFocusFrame_TimerEvent_IsBase(bool value) const { qfocusframe_timerevent_isbase = value; }
    void setQFocusFrame_ChildEvent_IsBase(bool value) const { qfocusframe_childevent_isbase = value; }
    void setQFocusFrame_CustomEvent_IsBase(bool value) const { qfocusframe_customevent_isbase = value; }
    void setQFocusFrame_ConnectNotify_IsBase(bool value) const { qfocusframe_connectnotify_isbase = value; }
    void setQFocusFrame_DisconnectNotify_IsBase(bool value) const { qfocusframe_disconnectnotify_isbase = value; }
    void setQFocusFrame_UpdateMicroFocus_IsBase(bool value) const { qfocusframe_updatemicrofocus_isbase = value; }
    void setQFocusFrame_Create_IsBase(bool value) const { qfocusframe_create_isbase = value; }
    void setQFocusFrame_Destroy_IsBase(bool value) const { qfocusframe_destroy_isbase = value; }
    void setQFocusFrame_FocusNextChild_IsBase(bool value) const { qfocusframe_focusnextchild_isbase = value; }
    void setQFocusFrame_FocusPreviousChild_IsBase(bool value) const { qfocusframe_focuspreviouschild_isbase = value; }
    void setQFocusFrame_Sender_IsBase(bool value) const { qfocusframe_sender_isbase = value; }
    void setQFocusFrame_SenderSignalIndex_IsBase(bool value) const { qfocusframe_sendersignalindex_isbase = value; }
    void setQFocusFrame_Receivers_IsBase(bool value) const { qfocusframe_receivers_isbase = value; }
    void setQFocusFrame_IsSignalConnected_IsBase(bool value) const { qfocusframe_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qfocusframe_metacall_isbase) {
            qfocusframe_metacall_isbase = false;
            return QFocusFrame::qt_metacall(param1, param2, param3);
        } else if (qfocusframe_metacall_callback != nullptr) {
            return qfocusframe_metacall_callback(this, param1, param2, param3);
        } else {
            return QFocusFrame::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qfocusframe_event_isbase) {
            qfocusframe_event_isbase = false;
            return QFocusFrame::event(e);
        } else if (qfocusframe_event_callback != nullptr) {
            return qfocusframe_event_callback(this, e);
        } else {
            return QFocusFrame::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qfocusframe_eventfilter_isbase) {
            qfocusframe_eventfilter_isbase = false;
            return QFocusFrame::eventFilter(param1, param2);
        } else if (qfocusframe_eventfilter_callback != nullptr) {
            return qfocusframe_eventfilter_callback(this, param1, param2);
        } else {
            return QFocusFrame::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qfocusframe_paintevent_isbase) {
            qfocusframe_paintevent_isbase = false;
            QFocusFrame::paintEvent(param1);
        } else if (qfocusframe_paintevent_callback != nullptr) {
            qfocusframe_paintevent_callback(this, param1);
        } else {
            QFocusFrame::paintEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOption* option) const override {
        if (qfocusframe_initstyleoption_isbase) {
            qfocusframe_initstyleoption_isbase = false;
            QFocusFrame::initStyleOption(option);
        } else if (qfocusframe_initstyleoption_callback != nullptr) {
            qfocusframe_initstyleoption_callback(this, option);
        } else {
            QFocusFrame::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qfocusframe_devtype_isbase) {
            qfocusframe_devtype_isbase = false;
            return QFocusFrame::devType();
        } else if (qfocusframe_devtype_callback != nullptr) {
            return qfocusframe_devtype_callback();
        } else {
            return QFocusFrame::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qfocusframe_setvisible_isbase) {
            qfocusframe_setvisible_isbase = false;
            QFocusFrame::setVisible(visible);
        } else if (qfocusframe_setvisible_callback != nullptr) {
            qfocusframe_setvisible_callback(this, visible);
        } else {
            QFocusFrame::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qfocusframe_sizehint_isbase) {
            qfocusframe_sizehint_isbase = false;
            return QFocusFrame::sizeHint();
        } else if (qfocusframe_sizehint_callback != nullptr) {
            return qfocusframe_sizehint_callback();
        } else {
            return QFocusFrame::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qfocusframe_minimumsizehint_isbase) {
            qfocusframe_minimumsizehint_isbase = false;
            return QFocusFrame::minimumSizeHint();
        } else if (qfocusframe_minimumsizehint_callback != nullptr) {
            return qfocusframe_minimumsizehint_callback();
        } else {
            return QFocusFrame::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qfocusframe_heightforwidth_isbase) {
            qfocusframe_heightforwidth_isbase = false;
            return QFocusFrame::heightForWidth(param1);
        } else if (qfocusframe_heightforwidth_callback != nullptr) {
            return qfocusframe_heightforwidth_callback(this, param1);
        } else {
            return QFocusFrame::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qfocusframe_hasheightforwidth_isbase) {
            qfocusframe_hasheightforwidth_isbase = false;
            return QFocusFrame::hasHeightForWidth();
        } else if (qfocusframe_hasheightforwidth_callback != nullptr) {
            return qfocusframe_hasheightforwidth_callback();
        } else {
            return QFocusFrame::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qfocusframe_paintengine_isbase) {
            qfocusframe_paintengine_isbase = false;
            return QFocusFrame::paintEngine();
        } else if (qfocusframe_paintengine_callback != nullptr) {
            return qfocusframe_paintengine_callback();
        } else {
            return QFocusFrame::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qfocusframe_mousepressevent_isbase) {
            qfocusframe_mousepressevent_isbase = false;
            QFocusFrame::mousePressEvent(event);
        } else if (qfocusframe_mousepressevent_callback != nullptr) {
            qfocusframe_mousepressevent_callback(this, event);
        } else {
            QFocusFrame::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qfocusframe_mousereleaseevent_isbase) {
            qfocusframe_mousereleaseevent_isbase = false;
            QFocusFrame::mouseReleaseEvent(event);
        } else if (qfocusframe_mousereleaseevent_callback != nullptr) {
            qfocusframe_mousereleaseevent_callback(this, event);
        } else {
            QFocusFrame::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qfocusframe_mousedoubleclickevent_isbase) {
            qfocusframe_mousedoubleclickevent_isbase = false;
            QFocusFrame::mouseDoubleClickEvent(event);
        } else if (qfocusframe_mousedoubleclickevent_callback != nullptr) {
            qfocusframe_mousedoubleclickevent_callback(this, event);
        } else {
            QFocusFrame::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qfocusframe_mousemoveevent_isbase) {
            qfocusframe_mousemoveevent_isbase = false;
            QFocusFrame::mouseMoveEvent(event);
        } else if (qfocusframe_mousemoveevent_callback != nullptr) {
            qfocusframe_mousemoveevent_callback(this, event);
        } else {
            QFocusFrame::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qfocusframe_wheelevent_isbase) {
            qfocusframe_wheelevent_isbase = false;
            QFocusFrame::wheelEvent(event);
        } else if (qfocusframe_wheelevent_callback != nullptr) {
            qfocusframe_wheelevent_callback(this, event);
        } else {
            QFocusFrame::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qfocusframe_keypressevent_isbase) {
            qfocusframe_keypressevent_isbase = false;
            QFocusFrame::keyPressEvent(event);
        } else if (qfocusframe_keypressevent_callback != nullptr) {
            qfocusframe_keypressevent_callback(this, event);
        } else {
            QFocusFrame::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qfocusframe_keyreleaseevent_isbase) {
            qfocusframe_keyreleaseevent_isbase = false;
            QFocusFrame::keyReleaseEvent(event);
        } else if (qfocusframe_keyreleaseevent_callback != nullptr) {
            qfocusframe_keyreleaseevent_callback(this, event);
        } else {
            QFocusFrame::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qfocusframe_focusinevent_isbase) {
            qfocusframe_focusinevent_isbase = false;
            QFocusFrame::focusInEvent(event);
        } else if (qfocusframe_focusinevent_callback != nullptr) {
            qfocusframe_focusinevent_callback(this, event);
        } else {
            QFocusFrame::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qfocusframe_focusoutevent_isbase) {
            qfocusframe_focusoutevent_isbase = false;
            QFocusFrame::focusOutEvent(event);
        } else if (qfocusframe_focusoutevent_callback != nullptr) {
            qfocusframe_focusoutevent_callback(this, event);
        } else {
            QFocusFrame::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qfocusframe_enterevent_isbase) {
            qfocusframe_enterevent_isbase = false;
            QFocusFrame::enterEvent(event);
        } else if (qfocusframe_enterevent_callback != nullptr) {
            qfocusframe_enterevent_callback(this, event);
        } else {
            QFocusFrame::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qfocusframe_leaveevent_isbase) {
            qfocusframe_leaveevent_isbase = false;
            QFocusFrame::leaveEvent(event);
        } else if (qfocusframe_leaveevent_callback != nullptr) {
            qfocusframe_leaveevent_callback(this, event);
        } else {
            QFocusFrame::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qfocusframe_moveevent_isbase) {
            qfocusframe_moveevent_isbase = false;
            QFocusFrame::moveEvent(event);
        } else if (qfocusframe_moveevent_callback != nullptr) {
            qfocusframe_moveevent_callback(this, event);
        } else {
            QFocusFrame::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qfocusframe_resizeevent_isbase) {
            qfocusframe_resizeevent_isbase = false;
            QFocusFrame::resizeEvent(event);
        } else if (qfocusframe_resizeevent_callback != nullptr) {
            qfocusframe_resizeevent_callback(this, event);
        } else {
            QFocusFrame::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qfocusframe_closeevent_isbase) {
            qfocusframe_closeevent_isbase = false;
            QFocusFrame::closeEvent(event);
        } else if (qfocusframe_closeevent_callback != nullptr) {
            qfocusframe_closeevent_callback(this, event);
        } else {
            QFocusFrame::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qfocusframe_contextmenuevent_isbase) {
            qfocusframe_contextmenuevent_isbase = false;
            QFocusFrame::contextMenuEvent(event);
        } else if (qfocusframe_contextmenuevent_callback != nullptr) {
            qfocusframe_contextmenuevent_callback(this, event);
        } else {
            QFocusFrame::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qfocusframe_tabletevent_isbase) {
            qfocusframe_tabletevent_isbase = false;
            QFocusFrame::tabletEvent(event);
        } else if (qfocusframe_tabletevent_callback != nullptr) {
            qfocusframe_tabletevent_callback(this, event);
        } else {
            QFocusFrame::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qfocusframe_actionevent_isbase) {
            qfocusframe_actionevent_isbase = false;
            QFocusFrame::actionEvent(event);
        } else if (qfocusframe_actionevent_callback != nullptr) {
            qfocusframe_actionevent_callback(this, event);
        } else {
            QFocusFrame::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qfocusframe_dragenterevent_isbase) {
            qfocusframe_dragenterevent_isbase = false;
            QFocusFrame::dragEnterEvent(event);
        } else if (qfocusframe_dragenterevent_callback != nullptr) {
            qfocusframe_dragenterevent_callback(this, event);
        } else {
            QFocusFrame::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qfocusframe_dragmoveevent_isbase) {
            qfocusframe_dragmoveevent_isbase = false;
            QFocusFrame::dragMoveEvent(event);
        } else if (qfocusframe_dragmoveevent_callback != nullptr) {
            qfocusframe_dragmoveevent_callback(this, event);
        } else {
            QFocusFrame::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qfocusframe_dragleaveevent_isbase) {
            qfocusframe_dragleaveevent_isbase = false;
            QFocusFrame::dragLeaveEvent(event);
        } else if (qfocusframe_dragleaveevent_callback != nullptr) {
            qfocusframe_dragleaveevent_callback(this, event);
        } else {
            QFocusFrame::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qfocusframe_dropevent_isbase) {
            qfocusframe_dropevent_isbase = false;
            QFocusFrame::dropEvent(event);
        } else if (qfocusframe_dropevent_callback != nullptr) {
            qfocusframe_dropevent_callback(this, event);
        } else {
            QFocusFrame::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qfocusframe_showevent_isbase) {
            qfocusframe_showevent_isbase = false;
            QFocusFrame::showEvent(event);
        } else if (qfocusframe_showevent_callback != nullptr) {
            qfocusframe_showevent_callback(this, event);
        } else {
            QFocusFrame::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qfocusframe_hideevent_isbase) {
            qfocusframe_hideevent_isbase = false;
            QFocusFrame::hideEvent(event);
        } else if (qfocusframe_hideevent_callback != nullptr) {
            qfocusframe_hideevent_callback(this, event);
        } else {
            QFocusFrame::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qfocusframe_nativeevent_isbase) {
            qfocusframe_nativeevent_isbase = false;
            return QFocusFrame::nativeEvent(eventType, message, result);
        } else if (qfocusframe_nativeevent_callback != nullptr) {
            return qfocusframe_nativeevent_callback(this, eventType, message, result);
        } else {
            return QFocusFrame::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qfocusframe_changeevent_isbase) {
            qfocusframe_changeevent_isbase = false;
            QFocusFrame::changeEvent(param1);
        } else if (qfocusframe_changeevent_callback != nullptr) {
            qfocusframe_changeevent_callback(this, param1);
        } else {
            QFocusFrame::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qfocusframe_metric_isbase) {
            qfocusframe_metric_isbase = false;
            return QFocusFrame::metric(param1);
        } else if (qfocusframe_metric_callback != nullptr) {
            return qfocusframe_metric_callback(this, param1);
        } else {
            return QFocusFrame::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qfocusframe_initpainter_isbase) {
            qfocusframe_initpainter_isbase = false;
            QFocusFrame::initPainter(painter);
        } else if (qfocusframe_initpainter_callback != nullptr) {
            qfocusframe_initpainter_callback(this, painter);
        } else {
            QFocusFrame::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qfocusframe_redirected_isbase) {
            qfocusframe_redirected_isbase = false;
            return QFocusFrame::redirected(offset);
        } else if (qfocusframe_redirected_callback != nullptr) {
            return qfocusframe_redirected_callback(this, offset);
        } else {
            return QFocusFrame::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qfocusframe_sharedpainter_isbase) {
            qfocusframe_sharedpainter_isbase = false;
            return QFocusFrame::sharedPainter();
        } else if (qfocusframe_sharedpainter_callback != nullptr) {
            return qfocusframe_sharedpainter_callback();
        } else {
            return QFocusFrame::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qfocusframe_inputmethodevent_isbase) {
            qfocusframe_inputmethodevent_isbase = false;
            QFocusFrame::inputMethodEvent(param1);
        } else if (qfocusframe_inputmethodevent_callback != nullptr) {
            qfocusframe_inputmethodevent_callback(this, param1);
        } else {
            QFocusFrame::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qfocusframe_inputmethodquery_isbase) {
            qfocusframe_inputmethodquery_isbase = false;
            return QFocusFrame::inputMethodQuery(param1);
        } else if (qfocusframe_inputmethodquery_callback != nullptr) {
            return qfocusframe_inputmethodquery_callback(this, param1);
        } else {
            return QFocusFrame::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qfocusframe_focusnextprevchild_isbase) {
            qfocusframe_focusnextprevchild_isbase = false;
            return QFocusFrame::focusNextPrevChild(next);
        } else if (qfocusframe_focusnextprevchild_callback != nullptr) {
            return qfocusframe_focusnextprevchild_callback(this, next);
        } else {
            return QFocusFrame::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qfocusframe_timerevent_isbase) {
            qfocusframe_timerevent_isbase = false;
            QFocusFrame::timerEvent(event);
        } else if (qfocusframe_timerevent_callback != nullptr) {
            qfocusframe_timerevent_callback(this, event);
        } else {
            QFocusFrame::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qfocusframe_childevent_isbase) {
            qfocusframe_childevent_isbase = false;
            QFocusFrame::childEvent(event);
        } else if (qfocusframe_childevent_callback != nullptr) {
            qfocusframe_childevent_callback(this, event);
        } else {
            QFocusFrame::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qfocusframe_customevent_isbase) {
            qfocusframe_customevent_isbase = false;
            QFocusFrame::customEvent(event);
        } else if (qfocusframe_customevent_callback != nullptr) {
            qfocusframe_customevent_callback(this, event);
        } else {
            QFocusFrame::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qfocusframe_connectnotify_isbase) {
            qfocusframe_connectnotify_isbase = false;
            QFocusFrame::connectNotify(signal);
        } else if (qfocusframe_connectnotify_callback != nullptr) {
            qfocusframe_connectnotify_callback(this, signal);
        } else {
            QFocusFrame::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qfocusframe_disconnectnotify_isbase) {
            qfocusframe_disconnectnotify_isbase = false;
            QFocusFrame::disconnectNotify(signal);
        } else if (qfocusframe_disconnectnotify_callback != nullptr) {
            qfocusframe_disconnectnotify_callback(this, signal);
        } else {
            QFocusFrame::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qfocusframe_updatemicrofocus_isbase) {
            qfocusframe_updatemicrofocus_isbase = false;
            QFocusFrame::updateMicroFocus();
        } else if (qfocusframe_updatemicrofocus_callback != nullptr) {
            qfocusframe_updatemicrofocus_callback();
        } else {
            QFocusFrame::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qfocusframe_create_isbase) {
            qfocusframe_create_isbase = false;
            QFocusFrame::create();
        } else if (qfocusframe_create_callback != nullptr) {
            qfocusframe_create_callback();
        } else {
            QFocusFrame::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qfocusframe_destroy_isbase) {
            qfocusframe_destroy_isbase = false;
            QFocusFrame::destroy();
        } else if (qfocusframe_destroy_callback != nullptr) {
            qfocusframe_destroy_callback();
        } else {
            QFocusFrame::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qfocusframe_focusnextchild_isbase) {
            qfocusframe_focusnextchild_isbase = false;
            return QFocusFrame::focusNextChild();
        } else if (qfocusframe_focusnextchild_callback != nullptr) {
            return qfocusframe_focusnextchild_callback();
        } else {
            return QFocusFrame::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qfocusframe_focuspreviouschild_isbase) {
            qfocusframe_focuspreviouschild_isbase = false;
            return QFocusFrame::focusPreviousChild();
        } else if (qfocusframe_focuspreviouschild_callback != nullptr) {
            return qfocusframe_focuspreviouschild_callback();
        } else {
            return QFocusFrame::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qfocusframe_sender_isbase) {
            qfocusframe_sender_isbase = false;
            return QFocusFrame::sender();
        } else if (qfocusframe_sender_callback != nullptr) {
            return qfocusframe_sender_callback();
        } else {
            return QFocusFrame::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qfocusframe_sendersignalindex_isbase) {
            qfocusframe_sendersignalindex_isbase = false;
            return QFocusFrame::senderSignalIndex();
        } else if (qfocusframe_sendersignalindex_callback != nullptr) {
            return qfocusframe_sendersignalindex_callback();
        } else {
            return QFocusFrame::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qfocusframe_receivers_isbase) {
            qfocusframe_receivers_isbase = false;
            return QFocusFrame::receivers(signal);
        } else if (qfocusframe_receivers_callback != nullptr) {
            return qfocusframe_receivers_callback(this, signal);
        } else {
            return QFocusFrame::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qfocusframe_issignalconnected_isbase) {
            qfocusframe_issignalconnected_isbase = false;
            return QFocusFrame::isSignalConnected(signal);
        } else if (qfocusframe_issignalconnected_callback != nullptr) {
            return qfocusframe_issignalconnected_callback(this, signal);
        } else {
            return QFocusFrame::isSignalConnected(signal);
        }
    }
};

#endif
