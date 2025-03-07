#pragma once
#ifndef SRCC_LIBVIRTUALQDIALOG_H
#define SRCC_LIBVIRTUALQDIALOG_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QDialog so that we can call protected methods
class VirtualQDialog : public QDialog {

  public:
    // Virtual class public types (including callbacks)
    using QDialog_Metacall_Callback = int (*)(QDialog*, QMetaObject::Call, int, void**);
    using QDialog_SetVisible_Callback = void (*)(QDialog*, bool);
    using QDialog_SizeHint_Callback = QSize (*)();
    using QDialog_MinimumSizeHint_Callback = QSize (*)();
    using QDialog_Open_Callback = void (*)();
    using QDialog_Exec_Callback = int (*)();
    using QDialog_Done_Callback = void (*)(QDialog*, int);
    using QDialog_Accept_Callback = void (*)();
    using QDialog_Reject_Callback = void (*)();
    using QDialog_KeyPressEvent_Callback = void (*)(QDialog*, QKeyEvent*);
    using QDialog_CloseEvent_Callback = void (*)(QDialog*, QCloseEvent*);
    using QDialog_ShowEvent_Callback = void (*)(QDialog*, QShowEvent*);
    using QDialog_ResizeEvent_Callback = void (*)(QDialog*, QResizeEvent*);
    using QDialog_ContextMenuEvent_Callback = void (*)(QDialog*, QContextMenuEvent*);
    using QDialog_EventFilter_Callback = bool (*)(QDialog*, QObject*, QEvent*);
    using QDialog_DevType_Callback = int (*)();
    using QDialog_HeightForWidth_Callback = int (*)(const QDialog*, int);
    using QDialog_HasHeightForWidth_Callback = bool (*)();
    using QDialog_PaintEngine_Callback = QPaintEngine* (*)();
    using QDialog_Event_Callback = bool (*)(QDialog*, QEvent*);
    using QDialog_MousePressEvent_Callback = void (*)(QDialog*, QMouseEvent*);
    using QDialog_MouseReleaseEvent_Callback = void (*)(QDialog*, QMouseEvent*);
    using QDialog_MouseDoubleClickEvent_Callback = void (*)(QDialog*, QMouseEvent*);
    using QDialog_MouseMoveEvent_Callback = void (*)(QDialog*, QMouseEvent*);
    using QDialog_WheelEvent_Callback = void (*)(QDialog*, QWheelEvent*);
    using QDialog_KeyReleaseEvent_Callback = void (*)(QDialog*, QKeyEvent*);
    using QDialog_FocusInEvent_Callback = void (*)(QDialog*, QFocusEvent*);
    using QDialog_FocusOutEvent_Callback = void (*)(QDialog*, QFocusEvent*);
    using QDialog_EnterEvent_Callback = void (*)(QDialog*, QEnterEvent*);
    using QDialog_LeaveEvent_Callback = void (*)(QDialog*, QEvent*);
    using QDialog_PaintEvent_Callback = void (*)(QDialog*, QPaintEvent*);
    using QDialog_MoveEvent_Callback = void (*)(QDialog*, QMoveEvent*);
    using QDialog_TabletEvent_Callback = void (*)(QDialog*, QTabletEvent*);
    using QDialog_ActionEvent_Callback = void (*)(QDialog*, QActionEvent*);
    using QDialog_DragEnterEvent_Callback = void (*)(QDialog*, QDragEnterEvent*);
    using QDialog_DragMoveEvent_Callback = void (*)(QDialog*, QDragMoveEvent*);
    using QDialog_DragLeaveEvent_Callback = void (*)(QDialog*, QDragLeaveEvent*);
    using QDialog_DropEvent_Callback = void (*)(QDialog*, QDropEvent*);
    using QDialog_HideEvent_Callback = void (*)(QDialog*, QHideEvent*);
    using QDialog_NativeEvent_Callback = bool (*)(QDialog*, const QByteArray&, void*, qintptr*);
    using QDialog_ChangeEvent_Callback = void (*)(QDialog*, QEvent*);
    using QDialog_Metric_Callback = int (*)(const QDialog*, QPaintDevice::PaintDeviceMetric);
    using QDialog_InitPainter_Callback = void (*)(const QDialog*, QPainter*);
    using QDialog_Redirected_Callback = QPaintDevice* (*)(const QDialog*, QPoint*);
    using QDialog_SharedPainter_Callback = QPainter* (*)();
    using QDialog_InputMethodEvent_Callback = void (*)(QDialog*, QInputMethodEvent*);
    using QDialog_InputMethodQuery_Callback = QVariant (*)(const QDialog*, Qt::InputMethodQuery);
    using QDialog_FocusNextPrevChild_Callback = bool (*)(QDialog*, bool);
    using QDialog_TimerEvent_Callback = void (*)(QDialog*, QTimerEvent*);
    using QDialog_ChildEvent_Callback = void (*)(QDialog*, QChildEvent*);
    using QDialog_CustomEvent_Callback = void (*)(QDialog*, QEvent*);
    using QDialog_ConnectNotify_Callback = void (*)(QDialog*, const QMetaMethod&);
    using QDialog_DisconnectNotify_Callback = void (*)(QDialog*, const QMetaMethod&);
    using QDialog_AdjustPosition_Callback = void (*)(QDialog*, QWidget*);
    using QDialog_UpdateMicroFocus_Callback = void (*)();
    using QDialog_Create_Callback = void (*)();
    using QDialog_Destroy_Callback = void (*)();
    using QDialog_FocusNextChild_Callback = bool (*)();
    using QDialog_FocusPreviousChild_Callback = bool (*)();
    using QDialog_Sender_Callback = QObject* (*)();
    using QDialog_SenderSignalIndex_Callback = int (*)();
    using QDialog_Receivers_Callback = int (*)(const QDialog*, const char*);
    using QDialog_IsSignalConnected_Callback = bool (*)(const QDialog*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QDialog_Metacall_Callback qdialog_metacall_callback = nullptr;
    QDialog_SetVisible_Callback qdialog_setvisible_callback = nullptr;
    QDialog_SizeHint_Callback qdialog_sizehint_callback = nullptr;
    QDialog_MinimumSizeHint_Callback qdialog_minimumsizehint_callback = nullptr;
    QDialog_Open_Callback qdialog_open_callback = nullptr;
    QDialog_Exec_Callback qdialog_exec_callback = nullptr;
    QDialog_Done_Callback qdialog_done_callback = nullptr;
    QDialog_Accept_Callback qdialog_accept_callback = nullptr;
    QDialog_Reject_Callback qdialog_reject_callback = nullptr;
    QDialog_KeyPressEvent_Callback qdialog_keypressevent_callback = nullptr;
    QDialog_CloseEvent_Callback qdialog_closeevent_callback = nullptr;
    QDialog_ShowEvent_Callback qdialog_showevent_callback = nullptr;
    QDialog_ResizeEvent_Callback qdialog_resizeevent_callback = nullptr;
    QDialog_ContextMenuEvent_Callback qdialog_contextmenuevent_callback = nullptr;
    QDialog_EventFilter_Callback qdialog_eventfilter_callback = nullptr;
    QDialog_DevType_Callback qdialog_devtype_callback = nullptr;
    QDialog_HeightForWidth_Callback qdialog_heightforwidth_callback = nullptr;
    QDialog_HasHeightForWidth_Callback qdialog_hasheightforwidth_callback = nullptr;
    QDialog_PaintEngine_Callback qdialog_paintengine_callback = nullptr;
    QDialog_Event_Callback qdialog_event_callback = nullptr;
    QDialog_MousePressEvent_Callback qdialog_mousepressevent_callback = nullptr;
    QDialog_MouseReleaseEvent_Callback qdialog_mousereleaseevent_callback = nullptr;
    QDialog_MouseDoubleClickEvent_Callback qdialog_mousedoubleclickevent_callback = nullptr;
    QDialog_MouseMoveEvent_Callback qdialog_mousemoveevent_callback = nullptr;
    QDialog_WheelEvent_Callback qdialog_wheelevent_callback = nullptr;
    QDialog_KeyReleaseEvent_Callback qdialog_keyreleaseevent_callback = nullptr;
    QDialog_FocusInEvent_Callback qdialog_focusinevent_callback = nullptr;
    QDialog_FocusOutEvent_Callback qdialog_focusoutevent_callback = nullptr;
    QDialog_EnterEvent_Callback qdialog_enterevent_callback = nullptr;
    QDialog_LeaveEvent_Callback qdialog_leaveevent_callback = nullptr;
    QDialog_PaintEvent_Callback qdialog_paintevent_callback = nullptr;
    QDialog_MoveEvent_Callback qdialog_moveevent_callback = nullptr;
    QDialog_TabletEvent_Callback qdialog_tabletevent_callback = nullptr;
    QDialog_ActionEvent_Callback qdialog_actionevent_callback = nullptr;
    QDialog_DragEnterEvent_Callback qdialog_dragenterevent_callback = nullptr;
    QDialog_DragMoveEvent_Callback qdialog_dragmoveevent_callback = nullptr;
    QDialog_DragLeaveEvent_Callback qdialog_dragleaveevent_callback = nullptr;
    QDialog_DropEvent_Callback qdialog_dropevent_callback = nullptr;
    QDialog_HideEvent_Callback qdialog_hideevent_callback = nullptr;
    QDialog_NativeEvent_Callback qdialog_nativeevent_callback = nullptr;
    QDialog_ChangeEvent_Callback qdialog_changeevent_callback = nullptr;
    QDialog_Metric_Callback qdialog_metric_callback = nullptr;
    QDialog_InitPainter_Callback qdialog_initpainter_callback = nullptr;
    QDialog_Redirected_Callback qdialog_redirected_callback = nullptr;
    QDialog_SharedPainter_Callback qdialog_sharedpainter_callback = nullptr;
    QDialog_InputMethodEvent_Callback qdialog_inputmethodevent_callback = nullptr;
    QDialog_InputMethodQuery_Callback qdialog_inputmethodquery_callback = nullptr;
    QDialog_FocusNextPrevChild_Callback qdialog_focusnextprevchild_callback = nullptr;
    QDialog_TimerEvent_Callback qdialog_timerevent_callback = nullptr;
    QDialog_ChildEvent_Callback qdialog_childevent_callback = nullptr;
    QDialog_CustomEvent_Callback qdialog_customevent_callback = nullptr;
    QDialog_ConnectNotify_Callback qdialog_connectnotify_callback = nullptr;
    QDialog_DisconnectNotify_Callback qdialog_disconnectnotify_callback = nullptr;
    QDialog_AdjustPosition_Callback qdialog_adjustposition_callback = nullptr;
    QDialog_UpdateMicroFocus_Callback qdialog_updatemicrofocus_callback = nullptr;
    QDialog_Create_Callback qdialog_create_callback = nullptr;
    QDialog_Destroy_Callback qdialog_destroy_callback = nullptr;
    QDialog_FocusNextChild_Callback qdialog_focusnextchild_callback = nullptr;
    QDialog_FocusPreviousChild_Callback qdialog_focuspreviouschild_callback = nullptr;
    QDialog_Sender_Callback qdialog_sender_callback = nullptr;
    QDialog_SenderSignalIndex_Callback qdialog_sendersignalindex_callback = nullptr;
    QDialog_Receivers_Callback qdialog_receivers_callback = nullptr;
    QDialog_IsSignalConnected_Callback qdialog_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qdialog_metacall_isbase = false;
    mutable bool qdialog_setvisible_isbase = false;
    mutable bool qdialog_sizehint_isbase = false;
    mutable bool qdialog_minimumsizehint_isbase = false;
    mutable bool qdialog_open_isbase = false;
    mutable bool qdialog_exec_isbase = false;
    mutable bool qdialog_done_isbase = false;
    mutable bool qdialog_accept_isbase = false;
    mutable bool qdialog_reject_isbase = false;
    mutable bool qdialog_keypressevent_isbase = false;
    mutable bool qdialog_closeevent_isbase = false;
    mutable bool qdialog_showevent_isbase = false;
    mutable bool qdialog_resizeevent_isbase = false;
    mutable bool qdialog_contextmenuevent_isbase = false;
    mutable bool qdialog_eventfilter_isbase = false;
    mutable bool qdialog_devtype_isbase = false;
    mutable bool qdialog_heightforwidth_isbase = false;
    mutable bool qdialog_hasheightforwidth_isbase = false;
    mutable bool qdialog_paintengine_isbase = false;
    mutable bool qdialog_event_isbase = false;
    mutable bool qdialog_mousepressevent_isbase = false;
    mutable bool qdialog_mousereleaseevent_isbase = false;
    mutable bool qdialog_mousedoubleclickevent_isbase = false;
    mutable bool qdialog_mousemoveevent_isbase = false;
    mutable bool qdialog_wheelevent_isbase = false;
    mutable bool qdialog_keyreleaseevent_isbase = false;
    mutable bool qdialog_focusinevent_isbase = false;
    mutable bool qdialog_focusoutevent_isbase = false;
    mutable bool qdialog_enterevent_isbase = false;
    mutable bool qdialog_leaveevent_isbase = false;
    mutable bool qdialog_paintevent_isbase = false;
    mutable bool qdialog_moveevent_isbase = false;
    mutable bool qdialog_tabletevent_isbase = false;
    mutable bool qdialog_actionevent_isbase = false;
    mutable bool qdialog_dragenterevent_isbase = false;
    mutable bool qdialog_dragmoveevent_isbase = false;
    mutable bool qdialog_dragleaveevent_isbase = false;
    mutable bool qdialog_dropevent_isbase = false;
    mutable bool qdialog_hideevent_isbase = false;
    mutable bool qdialog_nativeevent_isbase = false;
    mutable bool qdialog_changeevent_isbase = false;
    mutable bool qdialog_metric_isbase = false;
    mutable bool qdialog_initpainter_isbase = false;
    mutable bool qdialog_redirected_isbase = false;
    mutable bool qdialog_sharedpainter_isbase = false;
    mutable bool qdialog_inputmethodevent_isbase = false;
    mutable bool qdialog_inputmethodquery_isbase = false;
    mutable bool qdialog_focusnextprevchild_isbase = false;
    mutable bool qdialog_timerevent_isbase = false;
    mutable bool qdialog_childevent_isbase = false;
    mutable bool qdialog_customevent_isbase = false;
    mutable bool qdialog_connectnotify_isbase = false;
    mutable bool qdialog_disconnectnotify_isbase = false;
    mutable bool qdialog_adjustposition_isbase = false;
    mutable bool qdialog_updatemicrofocus_isbase = false;
    mutable bool qdialog_create_isbase = false;
    mutable bool qdialog_destroy_isbase = false;
    mutable bool qdialog_focusnextchild_isbase = false;
    mutable bool qdialog_focuspreviouschild_isbase = false;
    mutable bool qdialog_sender_isbase = false;
    mutable bool qdialog_sendersignalindex_isbase = false;
    mutable bool qdialog_receivers_isbase = false;
    mutable bool qdialog_issignalconnected_isbase = false;

  public:
    VirtualQDialog(QWidget* parent) : QDialog(parent){};
    VirtualQDialog() : QDialog(){};
    VirtualQDialog(QWidget* parent, Qt::WindowFlags f) : QDialog(parent, f){};

    ~VirtualQDialog() {
        qdialog_metacall_callback = nullptr;
        qdialog_setvisible_callback = nullptr;
        qdialog_sizehint_callback = nullptr;
        qdialog_minimumsizehint_callback = nullptr;
        qdialog_open_callback = nullptr;
        qdialog_exec_callback = nullptr;
        qdialog_done_callback = nullptr;
        qdialog_accept_callback = nullptr;
        qdialog_reject_callback = nullptr;
        qdialog_keypressevent_callback = nullptr;
        qdialog_closeevent_callback = nullptr;
        qdialog_showevent_callback = nullptr;
        qdialog_resizeevent_callback = nullptr;
        qdialog_contextmenuevent_callback = nullptr;
        qdialog_eventfilter_callback = nullptr;
        qdialog_devtype_callback = nullptr;
        qdialog_heightforwidth_callback = nullptr;
        qdialog_hasheightforwidth_callback = nullptr;
        qdialog_paintengine_callback = nullptr;
        qdialog_event_callback = nullptr;
        qdialog_mousepressevent_callback = nullptr;
        qdialog_mousereleaseevent_callback = nullptr;
        qdialog_mousedoubleclickevent_callback = nullptr;
        qdialog_mousemoveevent_callback = nullptr;
        qdialog_wheelevent_callback = nullptr;
        qdialog_keyreleaseevent_callback = nullptr;
        qdialog_focusinevent_callback = nullptr;
        qdialog_focusoutevent_callback = nullptr;
        qdialog_enterevent_callback = nullptr;
        qdialog_leaveevent_callback = nullptr;
        qdialog_paintevent_callback = nullptr;
        qdialog_moveevent_callback = nullptr;
        qdialog_tabletevent_callback = nullptr;
        qdialog_actionevent_callback = nullptr;
        qdialog_dragenterevent_callback = nullptr;
        qdialog_dragmoveevent_callback = nullptr;
        qdialog_dragleaveevent_callback = nullptr;
        qdialog_dropevent_callback = nullptr;
        qdialog_hideevent_callback = nullptr;
        qdialog_nativeevent_callback = nullptr;
        qdialog_changeevent_callback = nullptr;
        qdialog_metric_callback = nullptr;
        qdialog_initpainter_callback = nullptr;
        qdialog_redirected_callback = nullptr;
        qdialog_sharedpainter_callback = nullptr;
        qdialog_inputmethodevent_callback = nullptr;
        qdialog_inputmethodquery_callback = nullptr;
        qdialog_focusnextprevchild_callback = nullptr;
        qdialog_timerevent_callback = nullptr;
        qdialog_childevent_callback = nullptr;
        qdialog_customevent_callback = nullptr;
        qdialog_connectnotify_callback = nullptr;
        qdialog_disconnectnotify_callback = nullptr;
        qdialog_adjustposition_callback = nullptr;
        qdialog_updatemicrofocus_callback = nullptr;
        qdialog_create_callback = nullptr;
        qdialog_destroy_callback = nullptr;
        qdialog_focusnextchild_callback = nullptr;
        qdialog_focuspreviouschild_callback = nullptr;
        qdialog_sender_callback = nullptr;
        qdialog_sendersignalindex_callback = nullptr;
        qdialog_receivers_callback = nullptr;
        qdialog_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQDialog_Metacall_Callback(QDialog_Metacall_Callback cb) { qdialog_metacall_callback = cb; }
    void setQDialog_SetVisible_Callback(QDialog_SetVisible_Callback cb) { qdialog_setvisible_callback = cb; }
    void setQDialog_SizeHint_Callback(QDialog_SizeHint_Callback cb) { qdialog_sizehint_callback = cb; }
    void setQDialog_MinimumSizeHint_Callback(QDialog_MinimumSizeHint_Callback cb) { qdialog_minimumsizehint_callback = cb; }
    void setQDialog_Open_Callback(QDialog_Open_Callback cb) { qdialog_open_callback = cb; }
    void setQDialog_Exec_Callback(QDialog_Exec_Callback cb) { qdialog_exec_callback = cb; }
    void setQDialog_Done_Callback(QDialog_Done_Callback cb) { qdialog_done_callback = cb; }
    void setQDialog_Accept_Callback(QDialog_Accept_Callback cb) { qdialog_accept_callback = cb; }
    void setQDialog_Reject_Callback(QDialog_Reject_Callback cb) { qdialog_reject_callback = cb; }
    void setQDialog_KeyPressEvent_Callback(QDialog_KeyPressEvent_Callback cb) { qdialog_keypressevent_callback = cb; }
    void setQDialog_CloseEvent_Callback(QDialog_CloseEvent_Callback cb) { qdialog_closeevent_callback = cb; }
    void setQDialog_ShowEvent_Callback(QDialog_ShowEvent_Callback cb) { qdialog_showevent_callback = cb; }
    void setQDialog_ResizeEvent_Callback(QDialog_ResizeEvent_Callback cb) { qdialog_resizeevent_callback = cb; }
    void setQDialog_ContextMenuEvent_Callback(QDialog_ContextMenuEvent_Callback cb) { qdialog_contextmenuevent_callback = cb; }
    void setQDialog_EventFilter_Callback(QDialog_EventFilter_Callback cb) { qdialog_eventfilter_callback = cb; }
    void setQDialog_DevType_Callback(QDialog_DevType_Callback cb) { qdialog_devtype_callback = cb; }
    void setQDialog_HeightForWidth_Callback(QDialog_HeightForWidth_Callback cb) { qdialog_heightforwidth_callback = cb; }
    void setQDialog_HasHeightForWidth_Callback(QDialog_HasHeightForWidth_Callback cb) { qdialog_hasheightforwidth_callback = cb; }
    void setQDialog_PaintEngine_Callback(QDialog_PaintEngine_Callback cb) { qdialog_paintengine_callback = cb; }
    void setQDialog_Event_Callback(QDialog_Event_Callback cb) { qdialog_event_callback = cb; }
    void setQDialog_MousePressEvent_Callback(QDialog_MousePressEvent_Callback cb) { qdialog_mousepressevent_callback = cb; }
    void setQDialog_MouseReleaseEvent_Callback(QDialog_MouseReleaseEvent_Callback cb) { qdialog_mousereleaseevent_callback = cb; }
    void setQDialog_MouseDoubleClickEvent_Callback(QDialog_MouseDoubleClickEvent_Callback cb) { qdialog_mousedoubleclickevent_callback = cb; }
    void setQDialog_MouseMoveEvent_Callback(QDialog_MouseMoveEvent_Callback cb) { qdialog_mousemoveevent_callback = cb; }
    void setQDialog_WheelEvent_Callback(QDialog_WheelEvent_Callback cb) { qdialog_wheelevent_callback = cb; }
    void setQDialog_KeyReleaseEvent_Callback(QDialog_KeyReleaseEvent_Callback cb) { qdialog_keyreleaseevent_callback = cb; }
    void setQDialog_FocusInEvent_Callback(QDialog_FocusInEvent_Callback cb) { qdialog_focusinevent_callback = cb; }
    void setQDialog_FocusOutEvent_Callback(QDialog_FocusOutEvent_Callback cb) { qdialog_focusoutevent_callback = cb; }
    void setQDialog_EnterEvent_Callback(QDialog_EnterEvent_Callback cb) { qdialog_enterevent_callback = cb; }
    void setQDialog_LeaveEvent_Callback(QDialog_LeaveEvent_Callback cb) { qdialog_leaveevent_callback = cb; }
    void setQDialog_PaintEvent_Callback(QDialog_PaintEvent_Callback cb) { qdialog_paintevent_callback = cb; }
    void setQDialog_MoveEvent_Callback(QDialog_MoveEvent_Callback cb) { qdialog_moveevent_callback = cb; }
    void setQDialog_TabletEvent_Callback(QDialog_TabletEvent_Callback cb) { qdialog_tabletevent_callback = cb; }
    void setQDialog_ActionEvent_Callback(QDialog_ActionEvent_Callback cb) { qdialog_actionevent_callback = cb; }
    void setQDialog_DragEnterEvent_Callback(QDialog_DragEnterEvent_Callback cb) { qdialog_dragenterevent_callback = cb; }
    void setQDialog_DragMoveEvent_Callback(QDialog_DragMoveEvent_Callback cb) { qdialog_dragmoveevent_callback = cb; }
    void setQDialog_DragLeaveEvent_Callback(QDialog_DragLeaveEvent_Callback cb) { qdialog_dragleaveevent_callback = cb; }
    void setQDialog_DropEvent_Callback(QDialog_DropEvent_Callback cb) { qdialog_dropevent_callback = cb; }
    void setQDialog_HideEvent_Callback(QDialog_HideEvent_Callback cb) { qdialog_hideevent_callback = cb; }
    void setQDialog_NativeEvent_Callback(QDialog_NativeEvent_Callback cb) { qdialog_nativeevent_callback = cb; }
    void setQDialog_ChangeEvent_Callback(QDialog_ChangeEvent_Callback cb) { qdialog_changeevent_callback = cb; }
    void setQDialog_Metric_Callback(QDialog_Metric_Callback cb) { qdialog_metric_callback = cb; }
    void setQDialog_InitPainter_Callback(QDialog_InitPainter_Callback cb) { qdialog_initpainter_callback = cb; }
    void setQDialog_Redirected_Callback(QDialog_Redirected_Callback cb) { qdialog_redirected_callback = cb; }
    void setQDialog_SharedPainter_Callback(QDialog_SharedPainter_Callback cb) { qdialog_sharedpainter_callback = cb; }
    void setQDialog_InputMethodEvent_Callback(QDialog_InputMethodEvent_Callback cb) { qdialog_inputmethodevent_callback = cb; }
    void setQDialog_InputMethodQuery_Callback(QDialog_InputMethodQuery_Callback cb) { qdialog_inputmethodquery_callback = cb; }
    void setQDialog_FocusNextPrevChild_Callback(QDialog_FocusNextPrevChild_Callback cb) { qdialog_focusnextprevchild_callback = cb; }
    void setQDialog_TimerEvent_Callback(QDialog_TimerEvent_Callback cb) { qdialog_timerevent_callback = cb; }
    void setQDialog_ChildEvent_Callback(QDialog_ChildEvent_Callback cb) { qdialog_childevent_callback = cb; }
    void setQDialog_CustomEvent_Callback(QDialog_CustomEvent_Callback cb) { qdialog_customevent_callback = cb; }
    void setQDialog_ConnectNotify_Callback(QDialog_ConnectNotify_Callback cb) { qdialog_connectnotify_callback = cb; }
    void setQDialog_DisconnectNotify_Callback(QDialog_DisconnectNotify_Callback cb) { qdialog_disconnectnotify_callback = cb; }
    void setQDialog_AdjustPosition_Callback(QDialog_AdjustPosition_Callback cb) { qdialog_adjustposition_callback = cb; }
    void setQDialog_UpdateMicroFocus_Callback(QDialog_UpdateMicroFocus_Callback cb) { qdialog_updatemicrofocus_callback = cb; }
    void setQDialog_Create_Callback(QDialog_Create_Callback cb) { qdialog_create_callback = cb; }
    void setQDialog_Destroy_Callback(QDialog_Destroy_Callback cb) { qdialog_destroy_callback = cb; }
    void setQDialog_FocusNextChild_Callback(QDialog_FocusNextChild_Callback cb) { qdialog_focusnextchild_callback = cb; }
    void setQDialog_FocusPreviousChild_Callback(QDialog_FocusPreviousChild_Callback cb) { qdialog_focuspreviouschild_callback = cb; }
    void setQDialog_Sender_Callback(QDialog_Sender_Callback cb) { qdialog_sender_callback = cb; }
    void setQDialog_SenderSignalIndex_Callback(QDialog_SenderSignalIndex_Callback cb) { qdialog_sendersignalindex_callback = cb; }
    void setQDialog_Receivers_Callback(QDialog_Receivers_Callback cb) { qdialog_receivers_callback = cb; }
    void setQDialog_IsSignalConnected_Callback(QDialog_IsSignalConnected_Callback cb) { qdialog_issignalconnected_callback = cb; }

    // Base flag setters
    void setQDialog_Metacall_IsBase(bool value) const { qdialog_metacall_isbase = value; }
    void setQDialog_SetVisible_IsBase(bool value) const { qdialog_setvisible_isbase = value; }
    void setQDialog_SizeHint_IsBase(bool value) const { qdialog_sizehint_isbase = value; }
    void setQDialog_MinimumSizeHint_IsBase(bool value) const { qdialog_minimumsizehint_isbase = value; }
    void setQDialog_Open_IsBase(bool value) const { qdialog_open_isbase = value; }
    void setQDialog_Exec_IsBase(bool value) const { qdialog_exec_isbase = value; }
    void setQDialog_Done_IsBase(bool value) const { qdialog_done_isbase = value; }
    void setQDialog_Accept_IsBase(bool value) const { qdialog_accept_isbase = value; }
    void setQDialog_Reject_IsBase(bool value) const { qdialog_reject_isbase = value; }
    void setQDialog_KeyPressEvent_IsBase(bool value) const { qdialog_keypressevent_isbase = value; }
    void setQDialog_CloseEvent_IsBase(bool value) const { qdialog_closeevent_isbase = value; }
    void setQDialog_ShowEvent_IsBase(bool value) const { qdialog_showevent_isbase = value; }
    void setQDialog_ResizeEvent_IsBase(bool value) const { qdialog_resizeevent_isbase = value; }
    void setQDialog_ContextMenuEvent_IsBase(bool value) const { qdialog_contextmenuevent_isbase = value; }
    void setQDialog_EventFilter_IsBase(bool value) const { qdialog_eventfilter_isbase = value; }
    void setQDialog_DevType_IsBase(bool value) const { qdialog_devtype_isbase = value; }
    void setQDialog_HeightForWidth_IsBase(bool value) const { qdialog_heightforwidth_isbase = value; }
    void setQDialog_HasHeightForWidth_IsBase(bool value) const { qdialog_hasheightforwidth_isbase = value; }
    void setQDialog_PaintEngine_IsBase(bool value) const { qdialog_paintengine_isbase = value; }
    void setQDialog_Event_IsBase(bool value) const { qdialog_event_isbase = value; }
    void setQDialog_MousePressEvent_IsBase(bool value) const { qdialog_mousepressevent_isbase = value; }
    void setQDialog_MouseReleaseEvent_IsBase(bool value) const { qdialog_mousereleaseevent_isbase = value; }
    void setQDialog_MouseDoubleClickEvent_IsBase(bool value) const { qdialog_mousedoubleclickevent_isbase = value; }
    void setQDialog_MouseMoveEvent_IsBase(bool value) const { qdialog_mousemoveevent_isbase = value; }
    void setQDialog_WheelEvent_IsBase(bool value) const { qdialog_wheelevent_isbase = value; }
    void setQDialog_KeyReleaseEvent_IsBase(bool value) const { qdialog_keyreleaseevent_isbase = value; }
    void setQDialog_FocusInEvent_IsBase(bool value) const { qdialog_focusinevent_isbase = value; }
    void setQDialog_FocusOutEvent_IsBase(bool value) const { qdialog_focusoutevent_isbase = value; }
    void setQDialog_EnterEvent_IsBase(bool value) const { qdialog_enterevent_isbase = value; }
    void setQDialog_LeaveEvent_IsBase(bool value) const { qdialog_leaveevent_isbase = value; }
    void setQDialog_PaintEvent_IsBase(bool value) const { qdialog_paintevent_isbase = value; }
    void setQDialog_MoveEvent_IsBase(bool value) const { qdialog_moveevent_isbase = value; }
    void setQDialog_TabletEvent_IsBase(bool value) const { qdialog_tabletevent_isbase = value; }
    void setQDialog_ActionEvent_IsBase(bool value) const { qdialog_actionevent_isbase = value; }
    void setQDialog_DragEnterEvent_IsBase(bool value) const { qdialog_dragenterevent_isbase = value; }
    void setQDialog_DragMoveEvent_IsBase(bool value) const { qdialog_dragmoveevent_isbase = value; }
    void setQDialog_DragLeaveEvent_IsBase(bool value) const { qdialog_dragleaveevent_isbase = value; }
    void setQDialog_DropEvent_IsBase(bool value) const { qdialog_dropevent_isbase = value; }
    void setQDialog_HideEvent_IsBase(bool value) const { qdialog_hideevent_isbase = value; }
    void setQDialog_NativeEvent_IsBase(bool value) const { qdialog_nativeevent_isbase = value; }
    void setQDialog_ChangeEvent_IsBase(bool value) const { qdialog_changeevent_isbase = value; }
    void setQDialog_Metric_IsBase(bool value) const { qdialog_metric_isbase = value; }
    void setQDialog_InitPainter_IsBase(bool value) const { qdialog_initpainter_isbase = value; }
    void setQDialog_Redirected_IsBase(bool value) const { qdialog_redirected_isbase = value; }
    void setQDialog_SharedPainter_IsBase(bool value) const { qdialog_sharedpainter_isbase = value; }
    void setQDialog_InputMethodEvent_IsBase(bool value) const { qdialog_inputmethodevent_isbase = value; }
    void setQDialog_InputMethodQuery_IsBase(bool value) const { qdialog_inputmethodquery_isbase = value; }
    void setQDialog_FocusNextPrevChild_IsBase(bool value) const { qdialog_focusnextprevchild_isbase = value; }
    void setQDialog_TimerEvent_IsBase(bool value) const { qdialog_timerevent_isbase = value; }
    void setQDialog_ChildEvent_IsBase(bool value) const { qdialog_childevent_isbase = value; }
    void setQDialog_CustomEvent_IsBase(bool value) const { qdialog_customevent_isbase = value; }
    void setQDialog_ConnectNotify_IsBase(bool value) const { qdialog_connectnotify_isbase = value; }
    void setQDialog_DisconnectNotify_IsBase(bool value) const { qdialog_disconnectnotify_isbase = value; }
    void setQDialog_AdjustPosition_IsBase(bool value) const { qdialog_adjustposition_isbase = value; }
    void setQDialog_UpdateMicroFocus_IsBase(bool value) const { qdialog_updatemicrofocus_isbase = value; }
    void setQDialog_Create_IsBase(bool value) const { qdialog_create_isbase = value; }
    void setQDialog_Destroy_IsBase(bool value) const { qdialog_destroy_isbase = value; }
    void setQDialog_FocusNextChild_IsBase(bool value) const { qdialog_focusnextchild_isbase = value; }
    void setQDialog_FocusPreviousChild_IsBase(bool value) const { qdialog_focuspreviouschild_isbase = value; }
    void setQDialog_Sender_IsBase(bool value) const { qdialog_sender_isbase = value; }
    void setQDialog_SenderSignalIndex_IsBase(bool value) const { qdialog_sendersignalindex_isbase = value; }
    void setQDialog_Receivers_IsBase(bool value) const { qdialog_receivers_isbase = value; }
    void setQDialog_IsSignalConnected_IsBase(bool value) const { qdialog_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdialog_metacall_isbase) {
            qdialog_metacall_isbase = false;
            return QDialog::qt_metacall(param1, param2, param3);
        } else if (qdialog_metacall_callback != nullptr) {
            return qdialog_metacall_callback(this, param1, param2, param3);
        } else {
            return QDialog::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qdialog_setvisible_isbase) {
            qdialog_setvisible_isbase = false;
            QDialog::setVisible(visible);
        } else if (qdialog_setvisible_callback != nullptr) {
            qdialog_setvisible_callback(this, visible);
        } else {
            QDialog::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qdialog_sizehint_isbase) {
            qdialog_sizehint_isbase = false;
            return QDialog::sizeHint();
        } else if (qdialog_sizehint_callback != nullptr) {
            return qdialog_sizehint_callback();
        } else {
            return QDialog::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qdialog_minimumsizehint_isbase) {
            qdialog_minimumsizehint_isbase = false;
            return QDialog::minimumSizeHint();
        } else if (qdialog_minimumsizehint_callback != nullptr) {
            return qdialog_minimumsizehint_callback();
        } else {
            return QDialog::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (qdialog_open_isbase) {
            qdialog_open_isbase = false;
            QDialog::open();
        } else if (qdialog_open_callback != nullptr) {
            qdialog_open_callback();
        } else {
            QDialog::open();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (qdialog_exec_isbase) {
            qdialog_exec_isbase = false;
            return QDialog::exec();
        } else if (qdialog_exec_callback != nullptr) {
            return qdialog_exec_callback();
        } else {
            return QDialog::exec();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (qdialog_done_isbase) {
            qdialog_done_isbase = false;
            QDialog::done(param1);
        } else if (qdialog_done_callback != nullptr) {
            qdialog_done_callback(this, param1);
        } else {
            QDialog::done(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (qdialog_accept_isbase) {
            qdialog_accept_isbase = false;
            QDialog::accept();
        } else if (qdialog_accept_callback != nullptr) {
            qdialog_accept_callback();
        } else {
            QDialog::accept();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (qdialog_reject_isbase) {
            qdialog_reject_isbase = false;
            QDialog::reject();
        } else if (qdialog_reject_callback != nullptr) {
            qdialog_reject_callback();
        } else {
            QDialog::reject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qdialog_keypressevent_isbase) {
            qdialog_keypressevent_isbase = false;
            QDialog::keyPressEvent(param1);
        } else if (qdialog_keypressevent_callback != nullptr) {
            qdialog_keypressevent_callback(this, param1);
        } else {
            QDialog::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (qdialog_closeevent_isbase) {
            qdialog_closeevent_isbase = false;
            QDialog::closeEvent(param1);
        } else if (qdialog_closeevent_callback != nullptr) {
            qdialog_closeevent_callback(this, param1);
        } else {
            QDialog::closeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qdialog_showevent_isbase) {
            qdialog_showevent_isbase = false;
            QDialog::showEvent(param1);
        } else if (qdialog_showevent_callback != nullptr) {
            qdialog_showevent_callback(this, param1);
        } else {
            QDialog::showEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qdialog_resizeevent_isbase) {
            qdialog_resizeevent_isbase = false;
            QDialog::resizeEvent(param1);
        } else if (qdialog_resizeevent_callback != nullptr) {
            qdialog_resizeevent_callback(this, param1);
        } else {
            QDialog::resizeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qdialog_contextmenuevent_isbase) {
            qdialog_contextmenuevent_isbase = false;
            QDialog::contextMenuEvent(param1);
        } else if (qdialog_contextmenuevent_callback != nullptr) {
            qdialog_contextmenuevent_callback(this, param1);
        } else {
            QDialog::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qdialog_eventfilter_isbase) {
            qdialog_eventfilter_isbase = false;
            return QDialog::eventFilter(param1, param2);
        } else if (qdialog_eventfilter_callback != nullptr) {
            return qdialog_eventfilter_callback(this, param1, param2);
        } else {
            return QDialog::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qdialog_devtype_isbase) {
            qdialog_devtype_isbase = false;
            return QDialog::devType();
        } else if (qdialog_devtype_callback != nullptr) {
            return qdialog_devtype_callback();
        } else {
            return QDialog::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qdialog_heightforwidth_isbase) {
            qdialog_heightforwidth_isbase = false;
            return QDialog::heightForWidth(param1);
        } else if (qdialog_heightforwidth_callback != nullptr) {
            return qdialog_heightforwidth_callback(this, param1);
        } else {
            return QDialog::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qdialog_hasheightforwidth_isbase) {
            qdialog_hasheightforwidth_isbase = false;
            return QDialog::hasHeightForWidth();
        } else if (qdialog_hasheightforwidth_callback != nullptr) {
            return qdialog_hasheightforwidth_callback();
        } else {
            return QDialog::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qdialog_paintengine_isbase) {
            qdialog_paintengine_isbase = false;
            return QDialog::paintEngine();
        } else if (qdialog_paintengine_callback != nullptr) {
            return qdialog_paintengine_callback();
        } else {
            return QDialog::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdialog_event_isbase) {
            qdialog_event_isbase = false;
            return QDialog::event(event);
        } else if (qdialog_event_callback != nullptr) {
            return qdialog_event_callback(this, event);
        } else {
            return QDialog::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qdialog_mousepressevent_isbase) {
            qdialog_mousepressevent_isbase = false;
            QDialog::mousePressEvent(event);
        } else if (qdialog_mousepressevent_callback != nullptr) {
            qdialog_mousepressevent_callback(this, event);
        } else {
            QDialog::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qdialog_mousereleaseevent_isbase) {
            qdialog_mousereleaseevent_isbase = false;
            QDialog::mouseReleaseEvent(event);
        } else if (qdialog_mousereleaseevent_callback != nullptr) {
            qdialog_mousereleaseevent_callback(this, event);
        } else {
            QDialog::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qdialog_mousedoubleclickevent_isbase) {
            qdialog_mousedoubleclickevent_isbase = false;
            QDialog::mouseDoubleClickEvent(event);
        } else if (qdialog_mousedoubleclickevent_callback != nullptr) {
            qdialog_mousedoubleclickevent_callback(this, event);
        } else {
            QDialog::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qdialog_mousemoveevent_isbase) {
            qdialog_mousemoveevent_isbase = false;
            QDialog::mouseMoveEvent(event);
        } else if (qdialog_mousemoveevent_callback != nullptr) {
            qdialog_mousemoveevent_callback(this, event);
        } else {
            QDialog::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qdialog_wheelevent_isbase) {
            qdialog_wheelevent_isbase = false;
            QDialog::wheelEvent(event);
        } else if (qdialog_wheelevent_callback != nullptr) {
            qdialog_wheelevent_callback(this, event);
        } else {
            QDialog::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qdialog_keyreleaseevent_isbase) {
            qdialog_keyreleaseevent_isbase = false;
            QDialog::keyReleaseEvent(event);
        } else if (qdialog_keyreleaseevent_callback != nullptr) {
            qdialog_keyreleaseevent_callback(this, event);
        } else {
            QDialog::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qdialog_focusinevent_isbase) {
            qdialog_focusinevent_isbase = false;
            QDialog::focusInEvent(event);
        } else if (qdialog_focusinevent_callback != nullptr) {
            qdialog_focusinevent_callback(this, event);
        } else {
            QDialog::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qdialog_focusoutevent_isbase) {
            qdialog_focusoutevent_isbase = false;
            QDialog::focusOutEvent(event);
        } else if (qdialog_focusoutevent_callback != nullptr) {
            qdialog_focusoutevent_callback(this, event);
        } else {
            QDialog::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qdialog_enterevent_isbase) {
            qdialog_enterevent_isbase = false;
            QDialog::enterEvent(event);
        } else if (qdialog_enterevent_callback != nullptr) {
            qdialog_enterevent_callback(this, event);
        } else {
            QDialog::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qdialog_leaveevent_isbase) {
            qdialog_leaveevent_isbase = false;
            QDialog::leaveEvent(event);
        } else if (qdialog_leaveevent_callback != nullptr) {
            qdialog_leaveevent_callback(this, event);
        } else {
            QDialog::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qdialog_paintevent_isbase) {
            qdialog_paintevent_isbase = false;
            QDialog::paintEvent(event);
        } else if (qdialog_paintevent_callback != nullptr) {
            qdialog_paintevent_callback(this, event);
        } else {
            QDialog::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qdialog_moveevent_isbase) {
            qdialog_moveevent_isbase = false;
            QDialog::moveEvent(event);
        } else if (qdialog_moveevent_callback != nullptr) {
            qdialog_moveevent_callback(this, event);
        } else {
            QDialog::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qdialog_tabletevent_isbase) {
            qdialog_tabletevent_isbase = false;
            QDialog::tabletEvent(event);
        } else if (qdialog_tabletevent_callback != nullptr) {
            qdialog_tabletevent_callback(this, event);
        } else {
            QDialog::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qdialog_actionevent_isbase) {
            qdialog_actionevent_isbase = false;
            QDialog::actionEvent(event);
        } else if (qdialog_actionevent_callback != nullptr) {
            qdialog_actionevent_callback(this, event);
        } else {
            QDialog::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qdialog_dragenterevent_isbase) {
            qdialog_dragenterevent_isbase = false;
            QDialog::dragEnterEvent(event);
        } else if (qdialog_dragenterevent_callback != nullptr) {
            qdialog_dragenterevent_callback(this, event);
        } else {
            QDialog::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qdialog_dragmoveevent_isbase) {
            qdialog_dragmoveevent_isbase = false;
            QDialog::dragMoveEvent(event);
        } else if (qdialog_dragmoveevent_callback != nullptr) {
            qdialog_dragmoveevent_callback(this, event);
        } else {
            QDialog::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qdialog_dragleaveevent_isbase) {
            qdialog_dragleaveevent_isbase = false;
            QDialog::dragLeaveEvent(event);
        } else if (qdialog_dragleaveevent_callback != nullptr) {
            qdialog_dragleaveevent_callback(this, event);
        } else {
            QDialog::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qdialog_dropevent_isbase) {
            qdialog_dropevent_isbase = false;
            QDialog::dropEvent(event);
        } else if (qdialog_dropevent_callback != nullptr) {
            qdialog_dropevent_callback(this, event);
        } else {
            QDialog::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qdialog_hideevent_isbase) {
            qdialog_hideevent_isbase = false;
            QDialog::hideEvent(event);
        } else if (qdialog_hideevent_callback != nullptr) {
            qdialog_hideevent_callback(this, event);
        } else {
            QDialog::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qdialog_nativeevent_isbase) {
            qdialog_nativeevent_isbase = false;
            return QDialog::nativeEvent(eventType, message, result);
        } else if (qdialog_nativeevent_callback != nullptr) {
            return qdialog_nativeevent_callback(this, eventType, message, result);
        } else {
            return QDialog::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qdialog_changeevent_isbase) {
            qdialog_changeevent_isbase = false;
            QDialog::changeEvent(param1);
        } else if (qdialog_changeevent_callback != nullptr) {
            qdialog_changeevent_callback(this, param1);
        } else {
            QDialog::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qdialog_metric_isbase) {
            qdialog_metric_isbase = false;
            return QDialog::metric(param1);
        } else if (qdialog_metric_callback != nullptr) {
            return qdialog_metric_callback(this, param1);
        } else {
            return QDialog::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qdialog_initpainter_isbase) {
            qdialog_initpainter_isbase = false;
            QDialog::initPainter(painter);
        } else if (qdialog_initpainter_callback != nullptr) {
            qdialog_initpainter_callback(this, painter);
        } else {
            QDialog::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qdialog_redirected_isbase) {
            qdialog_redirected_isbase = false;
            return QDialog::redirected(offset);
        } else if (qdialog_redirected_callback != nullptr) {
            return qdialog_redirected_callback(this, offset);
        } else {
            return QDialog::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qdialog_sharedpainter_isbase) {
            qdialog_sharedpainter_isbase = false;
            return QDialog::sharedPainter();
        } else if (qdialog_sharedpainter_callback != nullptr) {
            return qdialog_sharedpainter_callback();
        } else {
            return QDialog::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qdialog_inputmethodevent_isbase) {
            qdialog_inputmethodevent_isbase = false;
            QDialog::inputMethodEvent(param1);
        } else if (qdialog_inputmethodevent_callback != nullptr) {
            qdialog_inputmethodevent_callback(this, param1);
        } else {
            QDialog::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qdialog_inputmethodquery_isbase) {
            qdialog_inputmethodquery_isbase = false;
            return QDialog::inputMethodQuery(param1);
        } else if (qdialog_inputmethodquery_callback != nullptr) {
            return qdialog_inputmethodquery_callback(this, param1);
        } else {
            return QDialog::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qdialog_focusnextprevchild_isbase) {
            qdialog_focusnextprevchild_isbase = false;
            return QDialog::focusNextPrevChild(next);
        } else if (qdialog_focusnextprevchild_callback != nullptr) {
            return qdialog_focusnextprevchild_callback(this, next);
        } else {
            return QDialog::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdialog_timerevent_isbase) {
            qdialog_timerevent_isbase = false;
            QDialog::timerEvent(event);
        } else if (qdialog_timerevent_callback != nullptr) {
            qdialog_timerevent_callback(this, event);
        } else {
            QDialog::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdialog_childevent_isbase) {
            qdialog_childevent_isbase = false;
            QDialog::childEvent(event);
        } else if (qdialog_childevent_callback != nullptr) {
            qdialog_childevent_callback(this, event);
        } else {
            QDialog::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdialog_customevent_isbase) {
            qdialog_customevent_isbase = false;
            QDialog::customEvent(event);
        } else if (qdialog_customevent_callback != nullptr) {
            qdialog_customevent_callback(this, event);
        } else {
            QDialog::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdialog_connectnotify_isbase) {
            qdialog_connectnotify_isbase = false;
            QDialog::connectNotify(signal);
        } else if (qdialog_connectnotify_callback != nullptr) {
            qdialog_connectnotify_callback(this, signal);
        } else {
            QDialog::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdialog_disconnectnotify_isbase) {
            qdialog_disconnectnotify_isbase = false;
            QDialog::disconnectNotify(signal);
        } else if (qdialog_disconnectnotify_callback != nullptr) {
            qdialog_disconnectnotify_callback(this, signal);
        } else {
            QDialog::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (qdialog_adjustposition_isbase) {
            qdialog_adjustposition_isbase = false;
            QDialog::adjustPosition(param1);
        } else if (qdialog_adjustposition_callback != nullptr) {
            qdialog_adjustposition_callback(this, param1);
        } else {
            QDialog::adjustPosition(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qdialog_updatemicrofocus_isbase) {
            qdialog_updatemicrofocus_isbase = false;
            QDialog::updateMicroFocus();
        } else if (qdialog_updatemicrofocus_callback != nullptr) {
            qdialog_updatemicrofocus_callback();
        } else {
            QDialog::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qdialog_create_isbase) {
            qdialog_create_isbase = false;
            QDialog::create();
        } else if (qdialog_create_callback != nullptr) {
            qdialog_create_callback();
        } else {
            QDialog::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qdialog_destroy_isbase) {
            qdialog_destroy_isbase = false;
            QDialog::destroy();
        } else if (qdialog_destroy_callback != nullptr) {
            qdialog_destroy_callback();
        } else {
            QDialog::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qdialog_focusnextchild_isbase) {
            qdialog_focusnextchild_isbase = false;
            return QDialog::focusNextChild();
        } else if (qdialog_focusnextchild_callback != nullptr) {
            return qdialog_focusnextchild_callback();
        } else {
            return QDialog::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qdialog_focuspreviouschild_isbase) {
            qdialog_focuspreviouschild_isbase = false;
            return QDialog::focusPreviousChild();
        } else if (qdialog_focuspreviouschild_callback != nullptr) {
            return qdialog_focuspreviouschild_callback();
        } else {
            return QDialog::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qdialog_sender_isbase) {
            qdialog_sender_isbase = false;
            return QDialog::sender();
        } else if (qdialog_sender_callback != nullptr) {
            return qdialog_sender_callback();
        } else {
            return QDialog::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qdialog_sendersignalindex_isbase) {
            qdialog_sendersignalindex_isbase = false;
            return QDialog::senderSignalIndex();
        } else if (qdialog_sendersignalindex_callback != nullptr) {
            return qdialog_sendersignalindex_callback();
        } else {
            return QDialog::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qdialog_receivers_isbase) {
            qdialog_receivers_isbase = false;
            return QDialog::receivers(signal);
        } else if (qdialog_receivers_callback != nullptr) {
            return qdialog_receivers_callback(this, signal);
        } else {
            return QDialog::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qdialog_issignalconnected_isbase) {
            qdialog_issignalconnected_isbase = false;
            return QDialog::isSignalConnected(signal);
        } else if (qdialog_issignalconnected_callback != nullptr) {
            return qdialog_issignalconnected_callback(this, signal);
        } else {
            return QDialog::isSignalConnected(signal);
        }
    }
};

#endif
