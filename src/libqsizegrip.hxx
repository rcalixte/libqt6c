#pragma once
#ifndef SRCC_LIBVIRTUALQSIZEGRIP_H
#define SRCC_LIBVIRTUALQSIZEGRIP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QSizeGrip so that we can call protected methods
class VirtualQSizeGrip : public QSizeGrip {

  public:
    // Virtual class public types (including callbacks)
    using QSizeGrip_Metacall_Callback = int (*)(QSizeGrip*, QMetaObject::Call, int, void**);
    using QSizeGrip_SizeHint_Callback = QSize (*)();
    using QSizeGrip_SetVisible_Callback = void (*)(QSizeGrip*, bool);
    using QSizeGrip_PaintEvent_Callback = void (*)(QSizeGrip*, QPaintEvent*);
    using QSizeGrip_MousePressEvent_Callback = void (*)(QSizeGrip*, QMouseEvent*);
    using QSizeGrip_MouseMoveEvent_Callback = void (*)(QSizeGrip*, QMouseEvent*);
    using QSizeGrip_MouseReleaseEvent_Callback = void (*)(QSizeGrip*, QMouseEvent*);
    using QSizeGrip_MoveEvent_Callback = void (*)(QSizeGrip*, QMoveEvent*);
    using QSizeGrip_ShowEvent_Callback = void (*)(QSizeGrip*, QShowEvent*);
    using QSizeGrip_HideEvent_Callback = void (*)(QSizeGrip*, QHideEvent*);
    using QSizeGrip_EventFilter_Callback = bool (*)(QSizeGrip*, QObject*, QEvent*);
    using QSizeGrip_Event_Callback = bool (*)(QSizeGrip*, QEvent*);
    using QSizeGrip_DevType_Callback = int (*)();
    using QSizeGrip_MinimumSizeHint_Callback = QSize (*)();
    using QSizeGrip_HeightForWidth_Callback = int (*)(const QSizeGrip*, int);
    using QSizeGrip_HasHeightForWidth_Callback = bool (*)();
    using QSizeGrip_PaintEngine_Callback = QPaintEngine* (*)();
    using QSizeGrip_MouseDoubleClickEvent_Callback = void (*)(QSizeGrip*, QMouseEvent*);
    using QSizeGrip_WheelEvent_Callback = void (*)(QSizeGrip*, QWheelEvent*);
    using QSizeGrip_KeyPressEvent_Callback = void (*)(QSizeGrip*, QKeyEvent*);
    using QSizeGrip_KeyReleaseEvent_Callback = void (*)(QSizeGrip*, QKeyEvent*);
    using QSizeGrip_FocusInEvent_Callback = void (*)(QSizeGrip*, QFocusEvent*);
    using QSizeGrip_FocusOutEvent_Callback = void (*)(QSizeGrip*, QFocusEvent*);
    using QSizeGrip_EnterEvent_Callback = void (*)(QSizeGrip*, QEnterEvent*);
    using QSizeGrip_LeaveEvent_Callback = void (*)(QSizeGrip*, QEvent*);
    using QSizeGrip_ResizeEvent_Callback = void (*)(QSizeGrip*, QResizeEvent*);
    using QSizeGrip_CloseEvent_Callback = void (*)(QSizeGrip*, QCloseEvent*);
    using QSizeGrip_ContextMenuEvent_Callback = void (*)(QSizeGrip*, QContextMenuEvent*);
    using QSizeGrip_TabletEvent_Callback = void (*)(QSizeGrip*, QTabletEvent*);
    using QSizeGrip_ActionEvent_Callback = void (*)(QSizeGrip*, QActionEvent*);
    using QSizeGrip_DragEnterEvent_Callback = void (*)(QSizeGrip*, QDragEnterEvent*);
    using QSizeGrip_DragMoveEvent_Callback = void (*)(QSizeGrip*, QDragMoveEvent*);
    using QSizeGrip_DragLeaveEvent_Callback = void (*)(QSizeGrip*, QDragLeaveEvent*);
    using QSizeGrip_DropEvent_Callback = void (*)(QSizeGrip*, QDropEvent*);
    using QSizeGrip_NativeEvent_Callback = bool (*)(QSizeGrip*, const QByteArray&, void*, qintptr*);
    using QSizeGrip_ChangeEvent_Callback = void (*)(QSizeGrip*, QEvent*);
    using QSizeGrip_Metric_Callback = int (*)(const QSizeGrip*, QPaintDevice::PaintDeviceMetric);
    using QSizeGrip_InitPainter_Callback = void (*)(const QSizeGrip*, QPainter*);
    using QSizeGrip_Redirected_Callback = QPaintDevice* (*)(const QSizeGrip*, QPoint*);
    using QSizeGrip_SharedPainter_Callback = QPainter* (*)();
    using QSizeGrip_InputMethodEvent_Callback = void (*)(QSizeGrip*, QInputMethodEvent*);
    using QSizeGrip_InputMethodQuery_Callback = QVariant (*)(const QSizeGrip*, Qt::InputMethodQuery);
    using QSizeGrip_FocusNextPrevChild_Callback = bool (*)(QSizeGrip*, bool);
    using QSizeGrip_TimerEvent_Callback = void (*)(QSizeGrip*, QTimerEvent*);
    using QSizeGrip_ChildEvent_Callback = void (*)(QSizeGrip*, QChildEvent*);
    using QSizeGrip_CustomEvent_Callback = void (*)(QSizeGrip*, QEvent*);
    using QSizeGrip_ConnectNotify_Callback = void (*)(QSizeGrip*, const QMetaMethod&);
    using QSizeGrip_DisconnectNotify_Callback = void (*)(QSizeGrip*, const QMetaMethod&);
    using QSizeGrip_UpdateMicroFocus_Callback = void (*)();
    using QSizeGrip_Create_Callback = void (*)();
    using QSizeGrip_Destroy_Callback = void (*)();
    using QSizeGrip_FocusNextChild_Callback = bool (*)();
    using QSizeGrip_FocusPreviousChild_Callback = bool (*)();
    using QSizeGrip_Sender_Callback = QObject* (*)();
    using QSizeGrip_SenderSignalIndex_Callback = int (*)();
    using QSizeGrip_Receivers_Callback = int (*)(const QSizeGrip*, const char*);
    using QSizeGrip_IsSignalConnected_Callback = bool (*)(const QSizeGrip*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QSizeGrip_Metacall_Callback qsizegrip_metacall_callback = nullptr;
    QSizeGrip_SizeHint_Callback qsizegrip_sizehint_callback = nullptr;
    QSizeGrip_SetVisible_Callback qsizegrip_setvisible_callback = nullptr;
    QSizeGrip_PaintEvent_Callback qsizegrip_paintevent_callback = nullptr;
    QSizeGrip_MousePressEvent_Callback qsizegrip_mousepressevent_callback = nullptr;
    QSizeGrip_MouseMoveEvent_Callback qsizegrip_mousemoveevent_callback = nullptr;
    QSizeGrip_MouseReleaseEvent_Callback qsizegrip_mousereleaseevent_callback = nullptr;
    QSizeGrip_MoveEvent_Callback qsizegrip_moveevent_callback = nullptr;
    QSizeGrip_ShowEvent_Callback qsizegrip_showevent_callback = nullptr;
    QSizeGrip_HideEvent_Callback qsizegrip_hideevent_callback = nullptr;
    QSizeGrip_EventFilter_Callback qsizegrip_eventfilter_callback = nullptr;
    QSizeGrip_Event_Callback qsizegrip_event_callback = nullptr;
    QSizeGrip_DevType_Callback qsizegrip_devtype_callback = nullptr;
    QSizeGrip_MinimumSizeHint_Callback qsizegrip_minimumsizehint_callback = nullptr;
    QSizeGrip_HeightForWidth_Callback qsizegrip_heightforwidth_callback = nullptr;
    QSizeGrip_HasHeightForWidth_Callback qsizegrip_hasheightforwidth_callback = nullptr;
    QSizeGrip_PaintEngine_Callback qsizegrip_paintengine_callback = nullptr;
    QSizeGrip_MouseDoubleClickEvent_Callback qsizegrip_mousedoubleclickevent_callback = nullptr;
    QSizeGrip_WheelEvent_Callback qsizegrip_wheelevent_callback = nullptr;
    QSizeGrip_KeyPressEvent_Callback qsizegrip_keypressevent_callback = nullptr;
    QSizeGrip_KeyReleaseEvent_Callback qsizegrip_keyreleaseevent_callback = nullptr;
    QSizeGrip_FocusInEvent_Callback qsizegrip_focusinevent_callback = nullptr;
    QSizeGrip_FocusOutEvent_Callback qsizegrip_focusoutevent_callback = nullptr;
    QSizeGrip_EnterEvent_Callback qsizegrip_enterevent_callback = nullptr;
    QSizeGrip_LeaveEvent_Callback qsizegrip_leaveevent_callback = nullptr;
    QSizeGrip_ResizeEvent_Callback qsizegrip_resizeevent_callback = nullptr;
    QSizeGrip_CloseEvent_Callback qsizegrip_closeevent_callback = nullptr;
    QSizeGrip_ContextMenuEvent_Callback qsizegrip_contextmenuevent_callback = nullptr;
    QSizeGrip_TabletEvent_Callback qsizegrip_tabletevent_callback = nullptr;
    QSizeGrip_ActionEvent_Callback qsizegrip_actionevent_callback = nullptr;
    QSizeGrip_DragEnterEvent_Callback qsizegrip_dragenterevent_callback = nullptr;
    QSizeGrip_DragMoveEvent_Callback qsizegrip_dragmoveevent_callback = nullptr;
    QSizeGrip_DragLeaveEvent_Callback qsizegrip_dragleaveevent_callback = nullptr;
    QSizeGrip_DropEvent_Callback qsizegrip_dropevent_callback = nullptr;
    QSizeGrip_NativeEvent_Callback qsizegrip_nativeevent_callback = nullptr;
    QSizeGrip_ChangeEvent_Callback qsizegrip_changeevent_callback = nullptr;
    QSizeGrip_Metric_Callback qsizegrip_metric_callback = nullptr;
    QSizeGrip_InitPainter_Callback qsizegrip_initpainter_callback = nullptr;
    QSizeGrip_Redirected_Callback qsizegrip_redirected_callback = nullptr;
    QSizeGrip_SharedPainter_Callback qsizegrip_sharedpainter_callback = nullptr;
    QSizeGrip_InputMethodEvent_Callback qsizegrip_inputmethodevent_callback = nullptr;
    QSizeGrip_InputMethodQuery_Callback qsizegrip_inputmethodquery_callback = nullptr;
    QSizeGrip_FocusNextPrevChild_Callback qsizegrip_focusnextprevchild_callback = nullptr;
    QSizeGrip_TimerEvent_Callback qsizegrip_timerevent_callback = nullptr;
    QSizeGrip_ChildEvent_Callback qsizegrip_childevent_callback = nullptr;
    QSizeGrip_CustomEvent_Callback qsizegrip_customevent_callback = nullptr;
    QSizeGrip_ConnectNotify_Callback qsizegrip_connectnotify_callback = nullptr;
    QSizeGrip_DisconnectNotify_Callback qsizegrip_disconnectnotify_callback = nullptr;
    QSizeGrip_UpdateMicroFocus_Callback qsizegrip_updatemicrofocus_callback = nullptr;
    QSizeGrip_Create_Callback qsizegrip_create_callback = nullptr;
    QSizeGrip_Destroy_Callback qsizegrip_destroy_callback = nullptr;
    QSizeGrip_FocusNextChild_Callback qsizegrip_focusnextchild_callback = nullptr;
    QSizeGrip_FocusPreviousChild_Callback qsizegrip_focuspreviouschild_callback = nullptr;
    QSizeGrip_Sender_Callback qsizegrip_sender_callback = nullptr;
    QSizeGrip_SenderSignalIndex_Callback qsizegrip_sendersignalindex_callback = nullptr;
    QSizeGrip_Receivers_Callback qsizegrip_receivers_callback = nullptr;
    QSizeGrip_IsSignalConnected_Callback qsizegrip_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qsizegrip_metacall_isbase = false;
    mutable bool qsizegrip_sizehint_isbase = false;
    mutable bool qsizegrip_setvisible_isbase = false;
    mutable bool qsizegrip_paintevent_isbase = false;
    mutable bool qsizegrip_mousepressevent_isbase = false;
    mutable bool qsizegrip_mousemoveevent_isbase = false;
    mutable bool qsizegrip_mousereleaseevent_isbase = false;
    mutable bool qsizegrip_moveevent_isbase = false;
    mutable bool qsizegrip_showevent_isbase = false;
    mutable bool qsizegrip_hideevent_isbase = false;
    mutable bool qsizegrip_eventfilter_isbase = false;
    mutable bool qsizegrip_event_isbase = false;
    mutable bool qsizegrip_devtype_isbase = false;
    mutable bool qsizegrip_minimumsizehint_isbase = false;
    mutable bool qsizegrip_heightforwidth_isbase = false;
    mutable bool qsizegrip_hasheightforwidth_isbase = false;
    mutable bool qsizegrip_paintengine_isbase = false;
    mutable bool qsizegrip_mousedoubleclickevent_isbase = false;
    mutable bool qsizegrip_wheelevent_isbase = false;
    mutable bool qsizegrip_keypressevent_isbase = false;
    mutable bool qsizegrip_keyreleaseevent_isbase = false;
    mutable bool qsizegrip_focusinevent_isbase = false;
    mutable bool qsizegrip_focusoutevent_isbase = false;
    mutable bool qsizegrip_enterevent_isbase = false;
    mutable bool qsizegrip_leaveevent_isbase = false;
    mutable bool qsizegrip_resizeevent_isbase = false;
    mutable bool qsizegrip_closeevent_isbase = false;
    mutable bool qsizegrip_contextmenuevent_isbase = false;
    mutable bool qsizegrip_tabletevent_isbase = false;
    mutable bool qsizegrip_actionevent_isbase = false;
    mutable bool qsizegrip_dragenterevent_isbase = false;
    mutable bool qsizegrip_dragmoveevent_isbase = false;
    mutable bool qsizegrip_dragleaveevent_isbase = false;
    mutable bool qsizegrip_dropevent_isbase = false;
    mutable bool qsizegrip_nativeevent_isbase = false;
    mutable bool qsizegrip_changeevent_isbase = false;
    mutable bool qsizegrip_metric_isbase = false;
    mutable bool qsizegrip_initpainter_isbase = false;
    mutable bool qsizegrip_redirected_isbase = false;
    mutable bool qsizegrip_sharedpainter_isbase = false;
    mutable bool qsizegrip_inputmethodevent_isbase = false;
    mutable bool qsizegrip_inputmethodquery_isbase = false;
    mutable bool qsizegrip_focusnextprevchild_isbase = false;
    mutable bool qsizegrip_timerevent_isbase = false;
    mutable bool qsizegrip_childevent_isbase = false;
    mutable bool qsizegrip_customevent_isbase = false;
    mutable bool qsizegrip_connectnotify_isbase = false;
    mutable bool qsizegrip_disconnectnotify_isbase = false;
    mutable bool qsizegrip_updatemicrofocus_isbase = false;
    mutable bool qsizegrip_create_isbase = false;
    mutable bool qsizegrip_destroy_isbase = false;
    mutable bool qsizegrip_focusnextchild_isbase = false;
    mutable bool qsizegrip_focuspreviouschild_isbase = false;
    mutable bool qsizegrip_sender_isbase = false;
    mutable bool qsizegrip_sendersignalindex_isbase = false;
    mutable bool qsizegrip_receivers_isbase = false;
    mutable bool qsizegrip_issignalconnected_isbase = false;

  public:
    VirtualQSizeGrip(QWidget* parent) : QSizeGrip(parent){};

    ~VirtualQSizeGrip() {
        qsizegrip_metacall_callback = nullptr;
        qsizegrip_sizehint_callback = nullptr;
        qsizegrip_setvisible_callback = nullptr;
        qsizegrip_paintevent_callback = nullptr;
        qsizegrip_mousepressevent_callback = nullptr;
        qsizegrip_mousemoveevent_callback = nullptr;
        qsizegrip_mousereleaseevent_callback = nullptr;
        qsizegrip_moveevent_callback = nullptr;
        qsizegrip_showevent_callback = nullptr;
        qsizegrip_hideevent_callback = nullptr;
        qsizegrip_eventfilter_callback = nullptr;
        qsizegrip_event_callback = nullptr;
        qsizegrip_devtype_callback = nullptr;
        qsizegrip_minimumsizehint_callback = nullptr;
        qsizegrip_heightforwidth_callback = nullptr;
        qsizegrip_hasheightforwidth_callback = nullptr;
        qsizegrip_paintengine_callback = nullptr;
        qsizegrip_mousedoubleclickevent_callback = nullptr;
        qsizegrip_wheelevent_callback = nullptr;
        qsizegrip_keypressevent_callback = nullptr;
        qsizegrip_keyreleaseevent_callback = nullptr;
        qsizegrip_focusinevent_callback = nullptr;
        qsizegrip_focusoutevent_callback = nullptr;
        qsizegrip_enterevent_callback = nullptr;
        qsizegrip_leaveevent_callback = nullptr;
        qsizegrip_resizeevent_callback = nullptr;
        qsizegrip_closeevent_callback = nullptr;
        qsizegrip_contextmenuevent_callback = nullptr;
        qsizegrip_tabletevent_callback = nullptr;
        qsizegrip_actionevent_callback = nullptr;
        qsizegrip_dragenterevent_callback = nullptr;
        qsizegrip_dragmoveevent_callback = nullptr;
        qsizegrip_dragleaveevent_callback = nullptr;
        qsizegrip_dropevent_callback = nullptr;
        qsizegrip_nativeevent_callback = nullptr;
        qsizegrip_changeevent_callback = nullptr;
        qsizegrip_metric_callback = nullptr;
        qsizegrip_initpainter_callback = nullptr;
        qsizegrip_redirected_callback = nullptr;
        qsizegrip_sharedpainter_callback = nullptr;
        qsizegrip_inputmethodevent_callback = nullptr;
        qsizegrip_inputmethodquery_callback = nullptr;
        qsizegrip_focusnextprevchild_callback = nullptr;
        qsizegrip_timerevent_callback = nullptr;
        qsizegrip_childevent_callback = nullptr;
        qsizegrip_customevent_callback = nullptr;
        qsizegrip_connectnotify_callback = nullptr;
        qsizegrip_disconnectnotify_callback = nullptr;
        qsizegrip_updatemicrofocus_callback = nullptr;
        qsizegrip_create_callback = nullptr;
        qsizegrip_destroy_callback = nullptr;
        qsizegrip_focusnextchild_callback = nullptr;
        qsizegrip_focuspreviouschild_callback = nullptr;
        qsizegrip_sender_callback = nullptr;
        qsizegrip_sendersignalindex_callback = nullptr;
        qsizegrip_receivers_callback = nullptr;
        qsizegrip_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQSizeGrip_Metacall_Callback(QSizeGrip_Metacall_Callback cb) { qsizegrip_metacall_callback = cb; }
    void setQSizeGrip_SizeHint_Callback(QSizeGrip_SizeHint_Callback cb) { qsizegrip_sizehint_callback = cb; }
    void setQSizeGrip_SetVisible_Callback(QSizeGrip_SetVisible_Callback cb) { qsizegrip_setvisible_callback = cb; }
    void setQSizeGrip_PaintEvent_Callback(QSizeGrip_PaintEvent_Callback cb) { qsizegrip_paintevent_callback = cb; }
    void setQSizeGrip_MousePressEvent_Callback(QSizeGrip_MousePressEvent_Callback cb) { qsizegrip_mousepressevent_callback = cb; }
    void setQSizeGrip_MouseMoveEvent_Callback(QSizeGrip_MouseMoveEvent_Callback cb) { qsizegrip_mousemoveevent_callback = cb; }
    void setQSizeGrip_MouseReleaseEvent_Callback(QSizeGrip_MouseReleaseEvent_Callback cb) { qsizegrip_mousereleaseevent_callback = cb; }
    void setQSizeGrip_MoveEvent_Callback(QSizeGrip_MoveEvent_Callback cb) { qsizegrip_moveevent_callback = cb; }
    void setQSizeGrip_ShowEvent_Callback(QSizeGrip_ShowEvent_Callback cb) { qsizegrip_showevent_callback = cb; }
    void setQSizeGrip_HideEvent_Callback(QSizeGrip_HideEvent_Callback cb) { qsizegrip_hideevent_callback = cb; }
    void setQSizeGrip_EventFilter_Callback(QSizeGrip_EventFilter_Callback cb) { qsizegrip_eventfilter_callback = cb; }
    void setQSizeGrip_Event_Callback(QSizeGrip_Event_Callback cb) { qsizegrip_event_callback = cb; }
    void setQSizeGrip_DevType_Callback(QSizeGrip_DevType_Callback cb) { qsizegrip_devtype_callback = cb; }
    void setQSizeGrip_MinimumSizeHint_Callback(QSizeGrip_MinimumSizeHint_Callback cb) { qsizegrip_minimumsizehint_callback = cb; }
    void setQSizeGrip_HeightForWidth_Callback(QSizeGrip_HeightForWidth_Callback cb) { qsizegrip_heightforwidth_callback = cb; }
    void setQSizeGrip_HasHeightForWidth_Callback(QSizeGrip_HasHeightForWidth_Callback cb) { qsizegrip_hasheightforwidth_callback = cb; }
    void setQSizeGrip_PaintEngine_Callback(QSizeGrip_PaintEngine_Callback cb) { qsizegrip_paintengine_callback = cb; }
    void setQSizeGrip_MouseDoubleClickEvent_Callback(QSizeGrip_MouseDoubleClickEvent_Callback cb) { qsizegrip_mousedoubleclickevent_callback = cb; }
    void setQSizeGrip_WheelEvent_Callback(QSizeGrip_WheelEvent_Callback cb) { qsizegrip_wheelevent_callback = cb; }
    void setQSizeGrip_KeyPressEvent_Callback(QSizeGrip_KeyPressEvent_Callback cb) { qsizegrip_keypressevent_callback = cb; }
    void setQSizeGrip_KeyReleaseEvent_Callback(QSizeGrip_KeyReleaseEvent_Callback cb) { qsizegrip_keyreleaseevent_callback = cb; }
    void setQSizeGrip_FocusInEvent_Callback(QSizeGrip_FocusInEvent_Callback cb) { qsizegrip_focusinevent_callback = cb; }
    void setQSizeGrip_FocusOutEvent_Callback(QSizeGrip_FocusOutEvent_Callback cb) { qsizegrip_focusoutevent_callback = cb; }
    void setQSizeGrip_EnterEvent_Callback(QSizeGrip_EnterEvent_Callback cb) { qsizegrip_enterevent_callback = cb; }
    void setQSizeGrip_LeaveEvent_Callback(QSizeGrip_LeaveEvent_Callback cb) { qsizegrip_leaveevent_callback = cb; }
    void setQSizeGrip_ResizeEvent_Callback(QSizeGrip_ResizeEvent_Callback cb) { qsizegrip_resizeevent_callback = cb; }
    void setQSizeGrip_CloseEvent_Callback(QSizeGrip_CloseEvent_Callback cb) { qsizegrip_closeevent_callback = cb; }
    void setQSizeGrip_ContextMenuEvent_Callback(QSizeGrip_ContextMenuEvent_Callback cb) { qsizegrip_contextmenuevent_callback = cb; }
    void setQSizeGrip_TabletEvent_Callback(QSizeGrip_TabletEvent_Callback cb) { qsizegrip_tabletevent_callback = cb; }
    void setQSizeGrip_ActionEvent_Callback(QSizeGrip_ActionEvent_Callback cb) { qsizegrip_actionevent_callback = cb; }
    void setQSizeGrip_DragEnterEvent_Callback(QSizeGrip_DragEnterEvent_Callback cb) { qsizegrip_dragenterevent_callback = cb; }
    void setQSizeGrip_DragMoveEvent_Callback(QSizeGrip_DragMoveEvent_Callback cb) { qsizegrip_dragmoveevent_callback = cb; }
    void setQSizeGrip_DragLeaveEvent_Callback(QSizeGrip_DragLeaveEvent_Callback cb) { qsizegrip_dragleaveevent_callback = cb; }
    void setQSizeGrip_DropEvent_Callback(QSizeGrip_DropEvent_Callback cb) { qsizegrip_dropevent_callback = cb; }
    void setQSizeGrip_NativeEvent_Callback(QSizeGrip_NativeEvent_Callback cb) { qsizegrip_nativeevent_callback = cb; }
    void setQSizeGrip_ChangeEvent_Callback(QSizeGrip_ChangeEvent_Callback cb) { qsizegrip_changeevent_callback = cb; }
    void setQSizeGrip_Metric_Callback(QSizeGrip_Metric_Callback cb) { qsizegrip_metric_callback = cb; }
    void setQSizeGrip_InitPainter_Callback(QSizeGrip_InitPainter_Callback cb) { qsizegrip_initpainter_callback = cb; }
    void setQSizeGrip_Redirected_Callback(QSizeGrip_Redirected_Callback cb) { qsizegrip_redirected_callback = cb; }
    void setQSizeGrip_SharedPainter_Callback(QSizeGrip_SharedPainter_Callback cb) { qsizegrip_sharedpainter_callback = cb; }
    void setQSizeGrip_InputMethodEvent_Callback(QSizeGrip_InputMethodEvent_Callback cb) { qsizegrip_inputmethodevent_callback = cb; }
    void setQSizeGrip_InputMethodQuery_Callback(QSizeGrip_InputMethodQuery_Callback cb) { qsizegrip_inputmethodquery_callback = cb; }
    void setQSizeGrip_FocusNextPrevChild_Callback(QSizeGrip_FocusNextPrevChild_Callback cb) { qsizegrip_focusnextprevchild_callback = cb; }
    void setQSizeGrip_TimerEvent_Callback(QSizeGrip_TimerEvent_Callback cb) { qsizegrip_timerevent_callback = cb; }
    void setQSizeGrip_ChildEvent_Callback(QSizeGrip_ChildEvent_Callback cb) { qsizegrip_childevent_callback = cb; }
    void setQSizeGrip_CustomEvent_Callback(QSizeGrip_CustomEvent_Callback cb) { qsizegrip_customevent_callback = cb; }
    void setQSizeGrip_ConnectNotify_Callback(QSizeGrip_ConnectNotify_Callback cb) { qsizegrip_connectnotify_callback = cb; }
    void setQSizeGrip_DisconnectNotify_Callback(QSizeGrip_DisconnectNotify_Callback cb) { qsizegrip_disconnectnotify_callback = cb; }
    void setQSizeGrip_UpdateMicroFocus_Callback(QSizeGrip_UpdateMicroFocus_Callback cb) { qsizegrip_updatemicrofocus_callback = cb; }
    void setQSizeGrip_Create_Callback(QSizeGrip_Create_Callback cb) { qsizegrip_create_callback = cb; }
    void setQSizeGrip_Destroy_Callback(QSizeGrip_Destroy_Callback cb) { qsizegrip_destroy_callback = cb; }
    void setQSizeGrip_FocusNextChild_Callback(QSizeGrip_FocusNextChild_Callback cb) { qsizegrip_focusnextchild_callback = cb; }
    void setQSizeGrip_FocusPreviousChild_Callback(QSizeGrip_FocusPreviousChild_Callback cb) { qsizegrip_focuspreviouschild_callback = cb; }
    void setQSizeGrip_Sender_Callback(QSizeGrip_Sender_Callback cb) { qsizegrip_sender_callback = cb; }
    void setQSizeGrip_SenderSignalIndex_Callback(QSizeGrip_SenderSignalIndex_Callback cb) { qsizegrip_sendersignalindex_callback = cb; }
    void setQSizeGrip_Receivers_Callback(QSizeGrip_Receivers_Callback cb) { qsizegrip_receivers_callback = cb; }
    void setQSizeGrip_IsSignalConnected_Callback(QSizeGrip_IsSignalConnected_Callback cb) { qsizegrip_issignalconnected_callback = cb; }

    // Base flag setters
    void setQSizeGrip_Metacall_IsBase(bool value) const { qsizegrip_metacall_isbase = value; }
    void setQSizeGrip_SizeHint_IsBase(bool value) const { qsizegrip_sizehint_isbase = value; }
    void setQSizeGrip_SetVisible_IsBase(bool value) const { qsizegrip_setvisible_isbase = value; }
    void setQSizeGrip_PaintEvent_IsBase(bool value) const { qsizegrip_paintevent_isbase = value; }
    void setQSizeGrip_MousePressEvent_IsBase(bool value) const { qsizegrip_mousepressevent_isbase = value; }
    void setQSizeGrip_MouseMoveEvent_IsBase(bool value) const { qsizegrip_mousemoveevent_isbase = value; }
    void setQSizeGrip_MouseReleaseEvent_IsBase(bool value) const { qsizegrip_mousereleaseevent_isbase = value; }
    void setQSizeGrip_MoveEvent_IsBase(bool value) const { qsizegrip_moveevent_isbase = value; }
    void setQSizeGrip_ShowEvent_IsBase(bool value) const { qsizegrip_showevent_isbase = value; }
    void setQSizeGrip_HideEvent_IsBase(bool value) const { qsizegrip_hideevent_isbase = value; }
    void setQSizeGrip_EventFilter_IsBase(bool value) const { qsizegrip_eventfilter_isbase = value; }
    void setQSizeGrip_Event_IsBase(bool value) const { qsizegrip_event_isbase = value; }
    void setQSizeGrip_DevType_IsBase(bool value) const { qsizegrip_devtype_isbase = value; }
    void setQSizeGrip_MinimumSizeHint_IsBase(bool value) const { qsizegrip_minimumsizehint_isbase = value; }
    void setQSizeGrip_HeightForWidth_IsBase(bool value) const { qsizegrip_heightforwidth_isbase = value; }
    void setQSizeGrip_HasHeightForWidth_IsBase(bool value) const { qsizegrip_hasheightforwidth_isbase = value; }
    void setQSizeGrip_PaintEngine_IsBase(bool value) const { qsizegrip_paintengine_isbase = value; }
    void setQSizeGrip_MouseDoubleClickEvent_IsBase(bool value) const { qsizegrip_mousedoubleclickevent_isbase = value; }
    void setQSizeGrip_WheelEvent_IsBase(bool value) const { qsizegrip_wheelevent_isbase = value; }
    void setQSizeGrip_KeyPressEvent_IsBase(bool value) const { qsizegrip_keypressevent_isbase = value; }
    void setQSizeGrip_KeyReleaseEvent_IsBase(bool value) const { qsizegrip_keyreleaseevent_isbase = value; }
    void setQSizeGrip_FocusInEvent_IsBase(bool value) const { qsizegrip_focusinevent_isbase = value; }
    void setQSizeGrip_FocusOutEvent_IsBase(bool value) const { qsizegrip_focusoutevent_isbase = value; }
    void setQSizeGrip_EnterEvent_IsBase(bool value) const { qsizegrip_enterevent_isbase = value; }
    void setQSizeGrip_LeaveEvent_IsBase(bool value) const { qsizegrip_leaveevent_isbase = value; }
    void setQSizeGrip_ResizeEvent_IsBase(bool value) const { qsizegrip_resizeevent_isbase = value; }
    void setQSizeGrip_CloseEvent_IsBase(bool value) const { qsizegrip_closeevent_isbase = value; }
    void setQSizeGrip_ContextMenuEvent_IsBase(bool value) const { qsizegrip_contextmenuevent_isbase = value; }
    void setQSizeGrip_TabletEvent_IsBase(bool value) const { qsizegrip_tabletevent_isbase = value; }
    void setQSizeGrip_ActionEvent_IsBase(bool value) const { qsizegrip_actionevent_isbase = value; }
    void setQSizeGrip_DragEnterEvent_IsBase(bool value) const { qsizegrip_dragenterevent_isbase = value; }
    void setQSizeGrip_DragMoveEvent_IsBase(bool value) const { qsizegrip_dragmoveevent_isbase = value; }
    void setQSizeGrip_DragLeaveEvent_IsBase(bool value) const { qsizegrip_dragleaveevent_isbase = value; }
    void setQSizeGrip_DropEvent_IsBase(bool value) const { qsizegrip_dropevent_isbase = value; }
    void setQSizeGrip_NativeEvent_IsBase(bool value) const { qsizegrip_nativeevent_isbase = value; }
    void setQSizeGrip_ChangeEvent_IsBase(bool value) const { qsizegrip_changeevent_isbase = value; }
    void setQSizeGrip_Metric_IsBase(bool value) const { qsizegrip_metric_isbase = value; }
    void setQSizeGrip_InitPainter_IsBase(bool value) const { qsizegrip_initpainter_isbase = value; }
    void setQSizeGrip_Redirected_IsBase(bool value) const { qsizegrip_redirected_isbase = value; }
    void setQSizeGrip_SharedPainter_IsBase(bool value) const { qsizegrip_sharedpainter_isbase = value; }
    void setQSizeGrip_InputMethodEvent_IsBase(bool value) const { qsizegrip_inputmethodevent_isbase = value; }
    void setQSizeGrip_InputMethodQuery_IsBase(bool value) const { qsizegrip_inputmethodquery_isbase = value; }
    void setQSizeGrip_FocusNextPrevChild_IsBase(bool value) const { qsizegrip_focusnextprevchild_isbase = value; }
    void setQSizeGrip_TimerEvent_IsBase(bool value) const { qsizegrip_timerevent_isbase = value; }
    void setQSizeGrip_ChildEvent_IsBase(bool value) const { qsizegrip_childevent_isbase = value; }
    void setQSizeGrip_CustomEvent_IsBase(bool value) const { qsizegrip_customevent_isbase = value; }
    void setQSizeGrip_ConnectNotify_IsBase(bool value) const { qsizegrip_connectnotify_isbase = value; }
    void setQSizeGrip_DisconnectNotify_IsBase(bool value) const { qsizegrip_disconnectnotify_isbase = value; }
    void setQSizeGrip_UpdateMicroFocus_IsBase(bool value) const { qsizegrip_updatemicrofocus_isbase = value; }
    void setQSizeGrip_Create_IsBase(bool value) const { qsizegrip_create_isbase = value; }
    void setQSizeGrip_Destroy_IsBase(bool value) const { qsizegrip_destroy_isbase = value; }
    void setQSizeGrip_FocusNextChild_IsBase(bool value) const { qsizegrip_focusnextchild_isbase = value; }
    void setQSizeGrip_FocusPreviousChild_IsBase(bool value) const { qsizegrip_focuspreviouschild_isbase = value; }
    void setQSizeGrip_Sender_IsBase(bool value) const { qsizegrip_sender_isbase = value; }
    void setQSizeGrip_SenderSignalIndex_IsBase(bool value) const { qsizegrip_sendersignalindex_isbase = value; }
    void setQSizeGrip_Receivers_IsBase(bool value) const { qsizegrip_receivers_isbase = value; }
    void setQSizeGrip_IsSignalConnected_IsBase(bool value) const { qsizegrip_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsizegrip_metacall_isbase) {
            qsizegrip_metacall_isbase = false;
            return QSizeGrip::qt_metacall(param1, param2, param3);
        } else if (qsizegrip_metacall_callback != nullptr) {
            return qsizegrip_metacall_callback(this, param1, param2, param3);
        } else {
            return QSizeGrip::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qsizegrip_sizehint_isbase) {
            qsizegrip_sizehint_isbase = false;
            return QSizeGrip::sizeHint();
        } else if (qsizegrip_sizehint_callback != nullptr) {
            return qsizegrip_sizehint_callback();
        } else {
            return QSizeGrip::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qsizegrip_setvisible_isbase) {
            qsizegrip_setvisible_isbase = false;
            QSizeGrip::setVisible(visible);
        } else if (qsizegrip_setvisible_callback != nullptr) {
            qsizegrip_setvisible_callback(this, visible);
        } else {
            QSizeGrip::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qsizegrip_paintevent_isbase) {
            qsizegrip_paintevent_isbase = false;
            QSizeGrip::paintEvent(param1);
        } else if (qsizegrip_paintevent_callback != nullptr) {
            qsizegrip_paintevent_callback(this, param1);
        } else {
            QSizeGrip::paintEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (qsizegrip_mousepressevent_isbase) {
            qsizegrip_mousepressevent_isbase = false;
            QSizeGrip::mousePressEvent(param1);
        } else if (qsizegrip_mousepressevent_callback != nullptr) {
            qsizegrip_mousepressevent_callback(this, param1);
        } else {
            QSizeGrip::mousePressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (qsizegrip_mousemoveevent_isbase) {
            qsizegrip_mousemoveevent_isbase = false;
            QSizeGrip::mouseMoveEvent(param1);
        } else if (qsizegrip_mousemoveevent_callback != nullptr) {
            qsizegrip_mousemoveevent_callback(this, param1);
        } else {
            QSizeGrip::mouseMoveEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* mouseEvent) override {
        if (qsizegrip_mousereleaseevent_isbase) {
            qsizegrip_mousereleaseevent_isbase = false;
            QSizeGrip::mouseReleaseEvent(mouseEvent);
        } else if (qsizegrip_mousereleaseevent_callback != nullptr) {
            qsizegrip_mousereleaseevent_callback(this, mouseEvent);
        } else {
            QSizeGrip::mouseReleaseEvent(mouseEvent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* moveEvent) override {
        if (qsizegrip_moveevent_isbase) {
            qsizegrip_moveevent_isbase = false;
            QSizeGrip::moveEvent(moveEvent);
        } else if (qsizegrip_moveevent_callback != nullptr) {
            qsizegrip_moveevent_callback(this, moveEvent);
        } else {
            QSizeGrip::moveEvent(moveEvent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* showEvent) override {
        if (qsizegrip_showevent_isbase) {
            qsizegrip_showevent_isbase = false;
            QSizeGrip::showEvent(showEvent);
        } else if (qsizegrip_showevent_callback != nullptr) {
            qsizegrip_showevent_callback(this, showEvent);
        } else {
            QSizeGrip::showEvent(showEvent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* hideEvent) override {
        if (qsizegrip_hideevent_isbase) {
            qsizegrip_hideevent_isbase = false;
            QSizeGrip::hideEvent(hideEvent);
        } else if (qsizegrip_hideevent_callback != nullptr) {
            qsizegrip_hideevent_callback(this, hideEvent);
        } else {
            QSizeGrip::hideEvent(hideEvent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qsizegrip_eventfilter_isbase) {
            qsizegrip_eventfilter_isbase = false;
            return QSizeGrip::eventFilter(param1, param2);
        } else if (qsizegrip_eventfilter_callback != nullptr) {
            return qsizegrip_eventfilter_callback(this, param1, param2);
        } else {
            return QSizeGrip::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qsizegrip_event_isbase) {
            qsizegrip_event_isbase = false;
            return QSizeGrip::event(param1);
        } else if (qsizegrip_event_callback != nullptr) {
            return qsizegrip_event_callback(this, param1);
        } else {
            return QSizeGrip::event(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qsizegrip_devtype_isbase) {
            qsizegrip_devtype_isbase = false;
            return QSizeGrip::devType();
        } else if (qsizegrip_devtype_callback != nullptr) {
            return qsizegrip_devtype_callback();
        } else {
            return QSizeGrip::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qsizegrip_minimumsizehint_isbase) {
            qsizegrip_minimumsizehint_isbase = false;
            return QSizeGrip::minimumSizeHint();
        } else if (qsizegrip_minimumsizehint_callback != nullptr) {
            return qsizegrip_minimumsizehint_callback();
        } else {
            return QSizeGrip::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qsizegrip_heightforwidth_isbase) {
            qsizegrip_heightforwidth_isbase = false;
            return QSizeGrip::heightForWidth(param1);
        } else if (qsizegrip_heightforwidth_callback != nullptr) {
            return qsizegrip_heightforwidth_callback(this, param1);
        } else {
            return QSizeGrip::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qsizegrip_hasheightforwidth_isbase) {
            qsizegrip_hasheightforwidth_isbase = false;
            return QSizeGrip::hasHeightForWidth();
        } else if (qsizegrip_hasheightforwidth_callback != nullptr) {
            return qsizegrip_hasheightforwidth_callback();
        } else {
            return QSizeGrip::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qsizegrip_paintengine_isbase) {
            qsizegrip_paintengine_isbase = false;
            return QSizeGrip::paintEngine();
        } else if (qsizegrip_paintengine_callback != nullptr) {
            return qsizegrip_paintengine_callback();
        } else {
            return QSizeGrip::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qsizegrip_mousedoubleclickevent_isbase) {
            qsizegrip_mousedoubleclickevent_isbase = false;
            QSizeGrip::mouseDoubleClickEvent(event);
        } else if (qsizegrip_mousedoubleclickevent_callback != nullptr) {
            qsizegrip_mousedoubleclickevent_callback(this, event);
        } else {
            QSizeGrip::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qsizegrip_wheelevent_isbase) {
            qsizegrip_wheelevent_isbase = false;
            QSizeGrip::wheelEvent(event);
        } else if (qsizegrip_wheelevent_callback != nullptr) {
            qsizegrip_wheelevent_callback(this, event);
        } else {
            QSizeGrip::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qsizegrip_keypressevent_isbase) {
            qsizegrip_keypressevent_isbase = false;
            QSizeGrip::keyPressEvent(event);
        } else if (qsizegrip_keypressevent_callback != nullptr) {
            qsizegrip_keypressevent_callback(this, event);
        } else {
            QSizeGrip::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qsizegrip_keyreleaseevent_isbase) {
            qsizegrip_keyreleaseevent_isbase = false;
            QSizeGrip::keyReleaseEvent(event);
        } else if (qsizegrip_keyreleaseevent_callback != nullptr) {
            qsizegrip_keyreleaseevent_callback(this, event);
        } else {
            QSizeGrip::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qsizegrip_focusinevent_isbase) {
            qsizegrip_focusinevent_isbase = false;
            QSizeGrip::focusInEvent(event);
        } else if (qsizegrip_focusinevent_callback != nullptr) {
            qsizegrip_focusinevent_callback(this, event);
        } else {
            QSizeGrip::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qsizegrip_focusoutevent_isbase) {
            qsizegrip_focusoutevent_isbase = false;
            QSizeGrip::focusOutEvent(event);
        } else if (qsizegrip_focusoutevent_callback != nullptr) {
            qsizegrip_focusoutevent_callback(this, event);
        } else {
            QSizeGrip::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qsizegrip_enterevent_isbase) {
            qsizegrip_enterevent_isbase = false;
            QSizeGrip::enterEvent(event);
        } else if (qsizegrip_enterevent_callback != nullptr) {
            qsizegrip_enterevent_callback(this, event);
        } else {
            QSizeGrip::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qsizegrip_leaveevent_isbase) {
            qsizegrip_leaveevent_isbase = false;
            QSizeGrip::leaveEvent(event);
        } else if (qsizegrip_leaveevent_callback != nullptr) {
            qsizegrip_leaveevent_callback(this, event);
        } else {
            QSizeGrip::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qsizegrip_resizeevent_isbase) {
            qsizegrip_resizeevent_isbase = false;
            QSizeGrip::resizeEvent(event);
        } else if (qsizegrip_resizeevent_callback != nullptr) {
            qsizegrip_resizeevent_callback(this, event);
        } else {
            QSizeGrip::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qsizegrip_closeevent_isbase) {
            qsizegrip_closeevent_isbase = false;
            QSizeGrip::closeEvent(event);
        } else if (qsizegrip_closeevent_callback != nullptr) {
            qsizegrip_closeevent_callback(this, event);
        } else {
            QSizeGrip::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qsizegrip_contextmenuevent_isbase) {
            qsizegrip_contextmenuevent_isbase = false;
            QSizeGrip::contextMenuEvent(event);
        } else if (qsizegrip_contextmenuevent_callback != nullptr) {
            qsizegrip_contextmenuevent_callback(this, event);
        } else {
            QSizeGrip::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qsizegrip_tabletevent_isbase) {
            qsizegrip_tabletevent_isbase = false;
            QSizeGrip::tabletEvent(event);
        } else if (qsizegrip_tabletevent_callback != nullptr) {
            qsizegrip_tabletevent_callback(this, event);
        } else {
            QSizeGrip::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qsizegrip_actionevent_isbase) {
            qsizegrip_actionevent_isbase = false;
            QSizeGrip::actionEvent(event);
        } else if (qsizegrip_actionevent_callback != nullptr) {
            qsizegrip_actionevent_callback(this, event);
        } else {
            QSizeGrip::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qsizegrip_dragenterevent_isbase) {
            qsizegrip_dragenterevent_isbase = false;
            QSizeGrip::dragEnterEvent(event);
        } else if (qsizegrip_dragenterevent_callback != nullptr) {
            qsizegrip_dragenterevent_callback(this, event);
        } else {
            QSizeGrip::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qsizegrip_dragmoveevent_isbase) {
            qsizegrip_dragmoveevent_isbase = false;
            QSizeGrip::dragMoveEvent(event);
        } else if (qsizegrip_dragmoveevent_callback != nullptr) {
            qsizegrip_dragmoveevent_callback(this, event);
        } else {
            QSizeGrip::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qsizegrip_dragleaveevent_isbase) {
            qsizegrip_dragleaveevent_isbase = false;
            QSizeGrip::dragLeaveEvent(event);
        } else if (qsizegrip_dragleaveevent_callback != nullptr) {
            qsizegrip_dragleaveevent_callback(this, event);
        } else {
            QSizeGrip::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qsizegrip_dropevent_isbase) {
            qsizegrip_dropevent_isbase = false;
            QSizeGrip::dropEvent(event);
        } else if (qsizegrip_dropevent_callback != nullptr) {
            qsizegrip_dropevent_callback(this, event);
        } else {
            QSizeGrip::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qsizegrip_nativeevent_isbase) {
            qsizegrip_nativeevent_isbase = false;
            return QSizeGrip::nativeEvent(eventType, message, result);
        } else if (qsizegrip_nativeevent_callback != nullptr) {
            return qsizegrip_nativeevent_callback(this, eventType, message, result);
        } else {
            return QSizeGrip::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qsizegrip_changeevent_isbase) {
            qsizegrip_changeevent_isbase = false;
            QSizeGrip::changeEvent(param1);
        } else if (qsizegrip_changeevent_callback != nullptr) {
            qsizegrip_changeevent_callback(this, param1);
        } else {
            QSizeGrip::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qsizegrip_metric_isbase) {
            qsizegrip_metric_isbase = false;
            return QSizeGrip::metric(param1);
        } else if (qsizegrip_metric_callback != nullptr) {
            return qsizegrip_metric_callback(this, param1);
        } else {
            return QSizeGrip::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qsizegrip_initpainter_isbase) {
            qsizegrip_initpainter_isbase = false;
            QSizeGrip::initPainter(painter);
        } else if (qsizegrip_initpainter_callback != nullptr) {
            qsizegrip_initpainter_callback(this, painter);
        } else {
            QSizeGrip::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qsizegrip_redirected_isbase) {
            qsizegrip_redirected_isbase = false;
            return QSizeGrip::redirected(offset);
        } else if (qsizegrip_redirected_callback != nullptr) {
            return qsizegrip_redirected_callback(this, offset);
        } else {
            return QSizeGrip::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qsizegrip_sharedpainter_isbase) {
            qsizegrip_sharedpainter_isbase = false;
            return QSizeGrip::sharedPainter();
        } else if (qsizegrip_sharedpainter_callback != nullptr) {
            return qsizegrip_sharedpainter_callback();
        } else {
            return QSizeGrip::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qsizegrip_inputmethodevent_isbase) {
            qsizegrip_inputmethodevent_isbase = false;
            QSizeGrip::inputMethodEvent(param1);
        } else if (qsizegrip_inputmethodevent_callback != nullptr) {
            qsizegrip_inputmethodevent_callback(this, param1);
        } else {
            QSizeGrip::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qsizegrip_inputmethodquery_isbase) {
            qsizegrip_inputmethodquery_isbase = false;
            return QSizeGrip::inputMethodQuery(param1);
        } else if (qsizegrip_inputmethodquery_callback != nullptr) {
            return qsizegrip_inputmethodquery_callback(this, param1);
        } else {
            return QSizeGrip::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qsizegrip_focusnextprevchild_isbase) {
            qsizegrip_focusnextprevchild_isbase = false;
            return QSizeGrip::focusNextPrevChild(next);
        } else if (qsizegrip_focusnextprevchild_callback != nullptr) {
            return qsizegrip_focusnextprevchild_callback(this, next);
        } else {
            return QSizeGrip::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsizegrip_timerevent_isbase) {
            qsizegrip_timerevent_isbase = false;
            QSizeGrip::timerEvent(event);
        } else if (qsizegrip_timerevent_callback != nullptr) {
            qsizegrip_timerevent_callback(this, event);
        } else {
            QSizeGrip::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsizegrip_childevent_isbase) {
            qsizegrip_childevent_isbase = false;
            QSizeGrip::childEvent(event);
        } else if (qsizegrip_childevent_callback != nullptr) {
            qsizegrip_childevent_callback(this, event);
        } else {
            QSizeGrip::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsizegrip_customevent_isbase) {
            qsizegrip_customevent_isbase = false;
            QSizeGrip::customEvent(event);
        } else if (qsizegrip_customevent_callback != nullptr) {
            qsizegrip_customevent_callback(this, event);
        } else {
            QSizeGrip::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsizegrip_connectnotify_isbase) {
            qsizegrip_connectnotify_isbase = false;
            QSizeGrip::connectNotify(signal);
        } else if (qsizegrip_connectnotify_callback != nullptr) {
            qsizegrip_connectnotify_callback(this, signal);
        } else {
            QSizeGrip::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsizegrip_disconnectnotify_isbase) {
            qsizegrip_disconnectnotify_isbase = false;
            QSizeGrip::disconnectNotify(signal);
        } else if (qsizegrip_disconnectnotify_callback != nullptr) {
            qsizegrip_disconnectnotify_callback(this, signal);
        } else {
            QSizeGrip::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qsizegrip_updatemicrofocus_isbase) {
            qsizegrip_updatemicrofocus_isbase = false;
            QSizeGrip::updateMicroFocus();
        } else if (qsizegrip_updatemicrofocus_callback != nullptr) {
            qsizegrip_updatemicrofocus_callback();
        } else {
            QSizeGrip::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qsizegrip_create_isbase) {
            qsizegrip_create_isbase = false;
            QSizeGrip::create();
        } else if (qsizegrip_create_callback != nullptr) {
            qsizegrip_create_callback();
        } else {
            QSizeGrip::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qsizegrip_destroy_isbase) {
            qsizegrip_destroy_isbase = false;
            QSizeGrip::destroy();
        } else if (qsizegrip_destroy_callback != nullptr) {
            qsizegrip_destroy_callback();
        } else {
            QSizeGrip::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qsizegrip_focusnextchild_isbase) {
            qsizegrip_focusnextchild_isbase = false;
            return QSizeGrip::focusNextChild();
        } else if (qsizegrip_focusnextchild_callback != nullptr) {
            return qsizegrip_focusnextchild_callback();
        } else {
            return QSizeGrip::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qsizegrip_focuspreviouschild_isbase) {
            qsizegrip_focuspreviouschild_isbase = false;
            return QSizeGrip::focusPreviousChild();
        } else if (qsizegrip_focuspreviouschild_callback != nullptr) {
            return qsizegrip_focuspreviouschild_callback();
        } else {
            return QSizeGrip::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qsizegrip_sender_isbase) {
            qsizegrip_sender_isbase = false;
            return QSizeGrip::sender();
        } else if (qsizegrip_sender_callback != nullptr) {
            return qsizegrip_sender_callback();
        } else {
            return QSizeGrip::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qsizegrip_sendersignalindex_isbase) {
            qsizegrip_sendersignalindex_isbase = false;
            return QSizeGrip::senderSignalIndex();
        } else if (qsizegrip_sendersignalindex_callback != nullptr) {
            return qsizegrip_sendersignalindex_callback();
        } else {
            return QSizeGrip::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qsizegrip_receivers_isbase) {
            qsizegrip_receivers_isbase = false;
            return QSizeGrip::receivers(signal);
        } else if (qsizegrip_receivers_callback != nullptr) {
            return qsizegrip_receivers_callback(this, signal);
        } else {
            return QSizeGrip::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qsizegrip_issignalconnected_isbase) {
            qsizegrip_issignalconnected_isbase = false;
            return QSizeGrip::isSignalConnected(signal);
        } else if (qsizegrip_issignalconnected_callback != nullptr) {
            return qsizegrip_issignalconnected_callback(this, signal);
        } else {
            return QSizeGrip::isSignalConnected(signal);
        }
    }
};

#endif
