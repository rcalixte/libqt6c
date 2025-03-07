#pragma once
#ifndef SRCC_LIBVIRTUALQINPUTDIALOG_H
#define SRCC_LIBVIRTUALQINPUTDIALOG_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QInputDialog so that we can call protected methods
class VirtualQInputDialog : public QInputDialog {

  public:
    // Virtual class public types (including callbacks)
    using QInputDialog_Metacall_Callback = int (*)(QInputDialog*, QMetaObject::Call, int, void**);
    using QInputDialog_MinimumSizeHint_Callback = QSize (*)();
    using QInputDialog_SizeHint_Callback = QSize (*)();
    using QInputDialog_SetVisible_Callback = void (*)(QInputDialog*, bool);
    using QInputDialog_Done_Callback = void (*)(QInputDialog*, int);
    using QInputDialog_Open_Callback = void (*)();
    using QInputDialog_Exec_Callback = int (*)();
    using QInputDialog_Accept_Callback = void (*)();
    using QInputDialog_Reject_Callback = void (*)();
    using QInputDialog_KeyPressEvent_Callback = void (*)(QInputDialog*, QKeyEvent*);
    using QInputDialog_CloseEvent_Callback = void (*)(QInputDialog*, QCloseEvent*);
    using QInputDialog_ShowEvent_Callback = void (*)(QInputDialog*, QShowEvent*);
    using QInputDialog_ResizeEvent_Callback = void (*)(QInputDialog*, QResizeEvent*);
    using QInputDialog_ContextMenuEvent_Callback = void (*)(QInputDialog*, QContextMenuEvent*);
    using QInputDialog_EventFilter_Callback = bool (*)(QInputDialog*, QObject*, QEvent*);
    using QInputDialog_DevType_Callback = int (*)();
    using QInputDialog_HeightForWidth_Callback = int (*)(const QInputDialog*, int);
    using QInputDialog_HasHeightForWidth_Callback = bool (*)();
    using QInputDialog_PaintEngine_Callback = QPaintEngine* (*)();
    using QInputDialog_Event_Callback = bool (*)(QInputDialog*, QEvent*);
    using QInputDialog_MousePressEvent_Callback = void (*)(QInputDialog*, QMouseEvent*);
    using QInputDialog_MouseReleaseEvent_Callback = void (*)(QInputDialog*, QMouseEvent*);
    using QInputDialog_MouseDoubleClickEvent_Callback = void (*)(QInputDialog*, QMouseEvent*);
    using QInputDialog_MouseMoveEvent_Callback = void (*)(QInputDialog*, QMouseEvent*);
    using QInputDialog_WheelEvent_Callback = void (*)(QInputDialog*, QWheelEvent*);
    using QInputDialog_KeyReleaseEvent_Callback = void (*)(QInputDialog*, QKeyEvent*);
    using QInputDialog_FocusInEvent_Callback = void (*)(QInputDialog*, QFocusEvent*);
    using QInputDialog_FocusOutEvent_Callback = void (*)(QInputDialog*, QFocusEvent*);
    using QInputDialog_EnterEvent_Callback = void (*)(QInputDialog*, QEnterEvent*);
    using QInputDialog_LeaveEvent_Callback = void (*)(QInputDialog*, QEvent*);
    using QInputDialog_PaintEvent_Callback = void (*)(QInputDialog*, QPaintEvent*);
    using QInputDialog_MoveEvent_Callback = void (*)(QInputDialog*, QMoveEvent*);
    using QInputDialog_TabletEvent_Callback = void (*)(QInputDialog*, QTabletEvent*);
    using QInputDialog_ActionEvent_Callback = void (*)(QInputDialog*, QActionEvent*);
    using QInputDialog_DragEnterEvent_Callback = void (*)(QInputDialog*, QDragEnterEvent*);
    using QInputDialog_DragMoveEvent_Callback = void (*)(QInputDialog*, QDragMoveEvent*);
    using QInputDialog_DragLeaveEvent_Callback = void (*)(QInputDialog*, QDragLeaveEvent*);
    using QInputDialog_DropEvent_Callback = void (*)(QInputDialog*, QDropEvent*);
    using QInputDialog_HideEvent_Callback = void (*)(QInputDialog*, QHideEvent*);
    using QInputDialog_NativeEvent_Callback = bool (*)(QInputDialog*, const QByteArray&, void*, qintptr*);
    using QInputDialog_ChangeEvent_Callback = void (*)(QInputDialog*, QEvent*);
    using QInputDialog_Metric_Callback = int (*)(const QInputDialog*, QPaintDevice::PaintDeviceMetric);
    using QInputDialog_InitPainter_Callback = void (*)(const QInputDialog*, QPainter*);
    using QInputDialog_Redirected_Callback = QPaintDevice* (*)(const QInputDialog*, QPoint*);
    using QInputDialog_SharedPainter_Callback = QPainter* (*)();
    using QInputDialog_InputMethodEvent_Callback = void (*)(QInputDialog*, QInputMethodEvent*);
    using QInputDialog_InputMethodQuery_Callback = QVariant (*)(const QInputDialog*, Qt::InputMethodQuery);
    using QInputDialog_FocusNextPrevChild_Callback = bool (*)(QInputDialog*, bool);
    using QInputDialog_TimerEvent_Callback = void (*)(QInputDialog*, QTimerEvent*);
    using QInputDialog_ChildEvent_Callback = void (*)(QInputDialog*, QChildEvent*);
    using QInputDialog_CustomEvent_Callback = void (*)(QInputDialog*, QEvent*);
    using QInputDialog_ConnectNotify_Callback = void (*)(QInputDialog*, const QMetaMethod&);
    using QInputDialog_DisconnectNotify_Callback = void (*)(QInputDialog*, const QMetaMethod&);
    using QInputDialog_AdjustPosition_Callback = void (*)(QInputDialog*, QWidget*);
    using QInputDialog_UpdateMicroFocus_Callback = void (*)();
    using QInputDialog_Create_Callback = void (*)();
    using QInputDialog_Destroy_Callback = void (*)();
    using QInputDialog_FocusNextChild_Callback = bool (*)();
    using QInputDialog_FocusPreviousChild_Callback = bool (*)();
    using QInputDialog_Sender_Callback = QObject* (*)();
    using QInputDialog_SenderSignalIndex_Callback = int (*)();
    using QInputDialog_Receivers_Callback = int (*)(const QInputDialog*, const char*);
    using QInputDialog_IsSignalConnected_Callback = bool (*)(const QInputDialog*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QInputDialog_Metacall_Callback qinputdialog_metacall_callback = nullptr;
    QInputDialog_MinimumSizeHint_Callback qinputdialog_minimumsizehint_callback = nullptr;
    QInputDialog_SizeHint_Callback qinputdialog_sizehint_callback = nullptr;
    QInputDialog_SetVisible_Callback qinputdialog_setvisible_callback = nullptr;
    QInputDialog_Done_Callback qinputdialog_done_callback = nullptr;
    QInputDialog_Open_Callback qinputdialog_open_callback = nullptr;
    QInputDialog_Exec_Callback qinputdialog_exec_callback = nullptr;
    QInputDialog_Accept_Callback qinputdialog_accept_callback = nullptr;
    QInputDialog_Reject_Callback qinputdialog_reject_callback = nullptr;
    QInputDialog_KeyPressEvent_Callback qinputdialog_keypressevent_callback = nullptr;
    QInputDialog_CloseEvent_Callback qinputdialog_closeevent_callback = nullptr;
    QInputDialog_ShowEvent_Callback qinputdialog_showevent_callback = nullptr;
    QInputDialog_ResizeEvent_Callback qinputdialog_resizeevent_callback = nullptr;
    QInputDialog_ContextMenuEvent_Callback qinputdialog_contextmenuevent_callback = nullptr;
    QInputDialog_EventFilter_Callback qinputdialog_eventfilter_callback = nullptr;
    QInputDialog_DevType_Callback qinputdialog_devtype_callback = nullptr;
    QInputDialog_HeightForWidth_Callback qinputdialog_heightforwidth_callback = nullptr;
    QInputDialog_HasHeightForWidth_Callback qinputdialog_hasheightforwidth_callback = nullptr;
    QInputDialog_PaintEngine_Callback qinputdialog_paintengine_callback = nullptr;
    QInputDialog_Event_Callback qinputdialog_event_callback = nullptr;
    QInputDialog_MousePressEvent_Callback qinputdialog_mousepressevent_callback = nullptr;
    QInputDialog_MouseReleaseEvent_Callback qinputdialog_mousereleaseevent_callback = nullptr;
    QInputDialog_MouseDoubleClickEvent_Callback qinputdialog_mousedoubleclickevent_callback = nullptr;
    QInputDialog_MouseMoveEvent_Callback qinputdialog_mousemoveevent_callback = nullptr;
    QInputDialog_WheelEvent_Callback qinputdialog_wheelevent_callback = nullptr;
    QInputDialog_KeyReleaseEvent_Callback qinputdialog_keyreleaseevent_callback = nullptr;
    QInputDialog_FocusInEvent_Callback qinputdialog_focusinevent_callback = nullptr;
    QInputDialog_FocusOutEvent_Callback qinputdialog_focusoutevent_callback = nullptr;
    QInputDialog_EnterEvent_Callback qinputdialog_enterevent_callback = nullptr;
    QInputDialog_LeaveEvent_Callback qinputdialog_leaveevent_callback = nullptr;
    QInputDialog_PaintEvent_Callback qinputdialog_paintevent_callback = nullptr;
    QInputDialog_MoveEvent_Callback qinputdialog_moveevent_callback = nullptr;
    QInputDialog_TabletEvent_Callback qinputdialog_tabletevent_callback = nullptr;
    QInputDialog_ActionEvent_Callback qinputdialog_actionevent_callback = nullptr;
    QInputDialog_DragEnterEvent_Callback qinputdialog_dragenterevent_callback = nullptr;
    QInputDialog_DragMoveEvent_Callback qinputdialog_dragmoveevent_callback = nullptr;
    QInputDialog_DragLeaveEvent_Callback qinputdialog_dragleaveevent_callback = nullptr;
    QInputDialog_DropEvent_Callback qinputdialog_dropevent_callback = nullptr;
    QInputDialog_HideEvent_Callback qinputdialog_hideevent_callback = nullptr;
    QInputDialog_NativeEvent_Callback qinputdialog_nativeevent_callback = nullptr;
    QInputDialog_ChangeEvent_Callback qinputdialog_changeevent_callback = nullptr;
    QInputDialog_Metric_Callback qinputdialog_metric_callback = nullptr;
    QInputDialog_InitPainter_Callback qinputdialog_initpainter_callback = nullptr;
    QInputDialog_Redirected_Callback qinputdialog_redirected_callback = nullptr;
    QInputDialog_SharedPainter_Callback qinputdialog_sharedpainter_callback = nullptr;
    QInputDialog_InputMethodEvent_Callback qinputdialog_inputmethodevent_callback = nullptr;
    QInputDialog_InputMethodQuery_Callback qinputdialog_inputmethodquery_callback = nullptr;
    QInputDialog_FocusNextPrevChild_Callback qinputdialog_focusnextprevchild_callback = nullptr;
    QInputDialog_TimerEvent_Callback qinputdialog_timerevent_callback = nullptr;
    QInputDialog_ChildEvent_Callback qinputdialog_childevent_callback = nullptr;
    QInputDialog_CustomEvent_Callback qinputdialog_customevent_callback = nullptr;
    QInputDialog_ConnectNotify_Callback qinputdialog_connectnotify_callback = nullptr;
    QInputDialog_DisconnectNotify_Callback qinputdialog_disconnectnotify_callback = nullptr;
    QInputDialog_AdjustPosition_Callback qinputdialog_adjustposition_callback = nullptr;
    QInputDialog_UpdateMicroFocus_Callback qinputdialog_updatemicrofocus_callback = nullptr;
    QInputDialog_Create_Callback qinputdialog_create_callback = nullptr;
    QInputDialog_Destroy_Callback qinputdialog_destroy_callback = nullptr;
    QInputDialog_FocusNextChild_Callback qinputdialog_focusnextchild_callback = nullptr;
    QInputDialog_FocusPreviousChild_Callback qinputdialog_focuspreviouschild_callback = nullptr;
    QInputDialog_Sender_Callback qinputdialog_sender_callback = nullptr;
    QInputDialog_SenderSignalIndex_Callback qinputdialog_sendersignalindex_callback = nullptr;
    QInputDialog_Receivers_Callback qinputdialog_receivers_callback = nullptr;
    QInputDialog_IsSignalConnected_Callback qinputdialog_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qinputdialog_metacall_isbase = false;
    mutable bool qinputdialog_minimumsizehint_isbase = false;
    mutable bool qinputdialog_sizehint_isbase = false;
    mutable bool qinputdialog_setvisible_isbase = false;
    mutable bool qinputdialog_done_isbase = false;
    mutable bool qinputdialog_open_isbase = false;
    mutable bool qinputdialog_exec_isbase = false;
    mutable bool qinputdialog_accept_isbase = false;
    mutable bool qinputdialog_reject_isbase = false;
    mutable bool qinputdialog_keypressevent_isbase = false;
    mutable bool qinputdialog_closeevent_isbase = false;
    mutable bool qinputdialog_showevent_isbase = false;
    mutable bool qinputdialog_resizeevent_isbase = false;
    mutable bool qinputdialog_contextmenuevent_isbase = false;
    mutable bool qinputdialog_eventfilter_isbase = false;
    mutable bool qinputdialog_devtype_isbase = false;
    mutable bool qinputdialog_heightforwidth_isbase = false;
    mutable bool qinputdialog_hasheightforwidth_isbase = false;
    mutable bool qinputdialog_paintengine_isbase = false;
    mutable bool qinputdialog_event_isbase = false;
    mutable bool qinputdialog_mousepressevent_isbase = false;
    mutable bool qinputdialog_mousereleaseevent_isbase = false;
    mutable bool qinputdialog_mousedoubleclickevent_isbase = false;
    mutable bool qinputdialog_mousemoveevent_isbase = false;
    mutable bool qinputdialog_wheelevent_isbase = false;
    mutable bool qinputdialog_keyreleaseevent_isbase = false;
    mutable bool qinputdialog_focusinevent_isbase = false;
    mutable bool qinputdialog_focusoutevent_isbase = false;
    mutable bool qinputdialog_enterevent_isbase = false;
    mutable bool qinputdialog_leaveevent_isbase = false;
    mutable bool qinputdialog_paintevent_isbase = false;
    mutable bool qinputdialog_moveevent_isbase = false;
    mutable bool qinputdialog_tabletevent_isbase = false;
    mutable bool qinputdialog_actionevent_isbase = false;
    mutable bool qinputdialog_dragenterevent_isbase = false;
    mutable bool qinputdialog_dragmoveevent_isbase = false;
    mutable bool qinputdialog_dragleaveevent_isbase = false;
    mutable bool qinputdialog_dropevent_isbase = false;
    mutable bool qinputdialog_hideevent_isbase = false;
    mutable bool qinputdialog_nativeevent_isbase = false;
    mutable bool qinputdialog_changeevent_isbase = false;
    mutable bool qinputdialog_metric_isbase = false;
    mutable bool qinputdialog_initpainter_isbase = false;
    mutable bool qinputdialog_redirected_isbase = false;
    mutable bool qinputdialog_sharedpainter_isbase = false;
    mutable bool qinputdialog_inputmethodevent_isbase = false;
    mutable bool qinputdialog_inputmethodquery_isbase = false;
    mutable bool qinputdialog_focusnextprevchild_isbase = false;
    mutable bool qinputdialog_timerevent_isbase = false;
    mutable bool qinputdialog_childevent_isbase = false;
    mutable bool qinputdialog_customevent_isbase = false;
    mutable bool qinputdialog_connectnotify_isbase = false;
    mutable bool qinputdialog_disconnectnotify_isbase = false;
    mutable bool qinputdialog_adjustposition_isbase = false;
    mutable bool qinputdialog_updatemicrofocus_isbase = false;
    mutable bool qinputdialog_create_isbase = false;
    mutable bool qinputdialog_destroy_isbase = false;
    mutable bool qinputdialog_focusnextchild_isbase = false;
    mutable bool qinputdialog_focuspreviouschild_isbase = false;
    mutable bool qinputdialog_sender_isbase = false;
    mutable bool qinputdialog_sendersignalindex_isbase = false;
    mutable bool qinputdialog_receivers_isbase = false;
    mutable bool qinputdialog_issignalconnected_isbase = false;

  public:
    VirtualQInputDialog(QWidget* parent) : QInputDialog(parent){};
    VirtualQInputDialog() : QInputDialog(){};
    VirtualQInputDialog(QWidget* parent, Qt::WindowFlags flags) : QInputDialog(parent, flags){};

    ~VirtualQInputDialog() {
        qinputdialog_metacall_callback = nullptr;
        qinputdialog_minimumsizehint_callback = nullptr;
        qinputdialog_sizehint_callback = nullptr;
        qinputdialog_setvisible_callback = nullptr;
        qinputdialog_done_callback = nullptr;
        qinputdialog_open_callback = nullptr;
        qinputdialog_exec_callback = nullptr;
        qinputdialog_accept_callback = nullptr;
        qinputdialog_reject_callback = nullptr;
        qinputdialog_keypressevent_callback = nullptr;
        qinputdialog_closeevent_callback = nullptr;
        qinputdialog_showevent_callback = nullptr;
        qinputdialog_resizeevent_callback = nullptr;
        qinputdialog_contextmenuevent_callback = nullptr;
        qinputdialog_eventfilter_callback = nullptr;
        qinputdialog_devtype_callback = nullptr;
        qinputdialog_heightforwidth_callback = nullptr;
        qinputdialog_hasheightforwidth_callback = nullptr;
        qinputdialog_paintengine_callback = nullptr;
        qinputdialog_event_callback = nullptr;
        qinputdialog_mousepressevent_callback = nullptr;
        qinputdialog_mousereleaseevent_callback = nullptr;
        qinputdialog_mousedoubleclickevent_callback = nullptr;
        qinputdialog_mousemoveevent_callback = nullptr;
        qinputdialog_wheelevent_callback = nullptr;
        qinputdialog_keyreleaseevent_callback = nullptr;
        qinputdialog_focusinevent_callback = nullptr;
        qinputdialog_focusoutevent_callback = nullptr;
        qinputdialog_enterevent_callback = nullptr;
        qinputdialog_leaveevent_callback = nullptr;
        qinputdialog_paintevent_callback = nullptr;
        qinputdialog_moveevent_callback = nullptr;
        qinputdialog_tabletevent_callback = nullptr;
        qinputdialog_actionevent_callback = nullptr;
        qinputdialog_dragenterevent_callback = nullptr;
        qinputdialog_dragmoveevent_callback = nullptr;
        qinputdialog_dragleaveevent_callback = nullptr;
        qinputdialog_dropevent_callback = nullptr;
        qinputdialog_hideevent_callback = nullptr;
        qinputdialog_nativeevent_callback = nullptr;
        qinputdialog_changeevent_callback = nullptr;
        qinputdialog_metric_callback = nullptr;
        qinputdialog_initpainter_callback = nullptr;
        qinputdialog_redirected_callback = nullptr;
        qinputdialog_sharedpainter_callback = nullptr;
        qinputdialog_inputmethodevent_callback = nullptr;
        qinputdialog_inputmethodquery_callback = nullptr;
        qinputdialog_focusnextprevchild_callback = nullptr;
        qinputdialog_timerevent_callback = nullptr;
        qinputdialog_childevent_callback = nullptr;
        qinputdialog_customevent_callback = nullptr;
        qinputdialog_connectnotify_callback = nullptr;
        qinputdialog_disconnectnotify_callback = nullptr;
        qinputdialog_adjustposition_callback = nullptr;
        qinputdialog_updatemicrofocus_callback = nullptr;
        qinputdialog_create_callback = nullptr;
        qinputdialog_destroy_callback = nullptr;
        qinputdialog_focusnextchild_callback = nullptr;
        qinputdialog_focuspreviouschild_callback = nullptr;
        qinputdialog_sender_callback = nullptr;
        qinputdialog_sendersignalindex_callback = nullptr;
        qinputdialog_receivers_callback = nullptr;
        qinputdialog_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQInputDialog_Metacall_Callback(QInputDialog_Metacall_Callback cb) { qinputdialog_metacall_callback = cb; }
    void setQInputDialog_MinimumSizeHint_Callback(QInputDialog_MinimumSizeHint_Callback cb) { qinputdialog_minimumsizehint_callback = cb; }
    void setQInputDialog_SizeHint_Callback(QInputDialog_SizeHint_Callback cb) { qinputdialog_sizehint_callback = cb; }
    void setQInputDialog_SetVisible_Callback(QInputDialog_SetVisible_Callback cb) { qinputdialog_setvisible_callback = cb; }
    void setQInputDialog_Done_Callback(QInputDialog_Done_Callback cb) { qinputdialog_done_callback = cb; }
    void setQInputDialog_Open_Callback(QInputDialog_Open_Callback cb) { qinputdialog_open_callback = cb; }
    void setQInputDialog_Exec_Callback(QInputDialog_Exec_Callback cb) { qinputdialog_exec_callback = cb; }
    void setQInputDialog_Accept_Callback(QInputDialog_Accept_Callback cb) { qinputdialog_accept_callback = cb; }
    void setQInputDialog_Reject_Callback(QInputDialog_Reject_Callback cb) { qinputdialog_reject_callback = cb; }
    void setQInputDialog_KeyPressEvent_Callback(QInputDialog_KeyPressEvent_Callback cb) { qinputdialog_keypressevent_callback = cb; }
    void setQInputDialog_CloseEvent_Callback(QInputDialog_CloseEvent_Callback cb) { qinputdialog_closeevent_callback = cb; }
    void setQInputDialog_ShowEvent_Callback(QInputDialog_ShowEvent_Callback cb) { qinputdialog_showevent_callback = cb; }
    void setQInputDialog_ResizeEvent_Callback(QInputDialog_ResizeEvent_Callback cb) { qinputdialog_resizeevent_callback = cb; }
    void setQInputDialog_ContextMenuEvent_Callback(QInputDialog_ContextMenuEvent_Callback cb) { qinputdialog_contextmenuevent_callback = cb; }
    void setQInputDialog_EventFilter_Callback(QInputDialog_EventFilter_Callback cb) { qinputdialog_eventfilter_callback = cb; }
    void setQInputDialog_DevType_Callback(QInputDialog_DevType_Callback cb) { qinputdialog_devtype_callback = cb; }
    void setQInputDialog_HeightForWidth_Callback(QInputDialog_HeightForWidth_Callback cb) { qinputdialog_heightforwidth_callback = cb; }
    void setQInputDialog_HasHeightForWidth_Callback(QInputDialog_HasHeightForWidth_Callback cb) { qinputdialog_hasheightforwidth_callback = cb; }
    void setQInputDialog_PaintEngine_Callback(QInputDialog_PaintEngine_Callback cb) { qinputdialog_paintengine_callback = cb; }
    void setQInputDialog_Event_Callback(QInputDialog_Event_Callback cb) { qinputdialog_event_callback = cb; }
    void setQInputDialog_MousePressEvent_Callback(QInputDialog_MousePressEvent_Callback cb) { qinputdialog_mousepressevent_callback = cb; }
    void setQInputDialog_MouseReleaseEvent_Callback(QInputDialog_MouseReleaseEvent_Callback cb) { qinputdialog_mousereleaseevent_callback = cb; }
    void setQInputDialog_MouseDoubleClickEvent_Callback(QInputDialog_MouseDoubleClickEvent_Callback cb) { qinputdialog_mousedoubleclickevent_callback = cb; }
    void setQInputDialog_MouseMoveEvent_Callback(QInputDialog_MouseMoveEvent_Callback cb) { qinputdialog_mousemoveevent_callback = cb; }
    void setQInputDialog_WheelEvent_Callback(QInputDialog_WheelEvent_Callback cb) { qinputdialog_wheelevent_callback = cb; }
    void setQInputDialog_KeyReleaseEvent_Callback(QInputDialog_KeyReleaseEvent_Callback cb) { qinputdialog_keyreleaseevent_callback = cb; }
    void setQInputDialog_FocusInEvent_Callback(QInputDialog_FocusInEvent_Callback cb) { qinputdialog_focusinevent_callback = cb; }
    void setQInputDialog_FocusOutEvent_Callback(QInputDialog_FocusOutEvent_Callback cb) { qinputdialog_focusoutevent_callback = cb; }
    void setQInputDialog_EnterEvent_Callback(QInputDialog_EnterEvent_Callback cb) { qinputdialog_enterevent_callback = cb; }
    void setQInputDialog_LeaveEvent_Callback(QInputDialog_LeaveEvent_Callback cb) { qinputdialog_leaveevent_callback = cb; }
    void setQInputDialog_PaintEvent_Callback(QInputDialog_PaintEvent_Callback cb) { qinputdialog_paintevent_callback = cb; }
    void setQInputDialog_MoveEvent_Callback(QInputDialog_MoveEvent_Callback cb) { qinputdialog_moveevent_callback = cb; }
    void setQInputDialog_TabletEvent_Callback(QInputDialog_TabletEvent_Callback cb) { qinputdialog_tabletevent_callback = cb; }
    void setQInputDialog_ActionEvent_Callback(QInputDialog_ActionEvent_Callback cb) { qinputdialog_actionevent_callback = cb; }
    void setQInputDialog_DragEnterEvent_Callback(QInputDialog_DragEnterEvent_Callback cb) { qinputdialog_dragenterevent_callback = cb; }
    void setQInputDialog_DragMoveEvent_Callback(QInputDialog_DragMoveEvent_Callback cb) { qinputdialog_dragmoveevent_callback = cb; }
    void setQInputDialog_DragLeaveEvent_Callback(QInputDialog_DragLeaveEvent_Callback cb) { qinputdialog_dragleaveevent_callback = cb; }
    void setQInputDialog_DropEvent_Callback(QInputDialog_DropEvent_Callback cb) { qinputdialog_dropevent_callback = cb; }
    void setQInputDialog_HideEvent_Callback(QInputDialog_HideEvent_Callback cb) { qinputdialog_hideevent_callback = cb; }
    void setQInputDialog_NativeEvent_Callback(QInputDialog_NativeEvent_Callback cb) { qinputdialog_nativeevent_callback = cb; }
    void setQInputDialog_ChangeEvent_Callback(QInputDialog_ChangeEvent_Callback cb) { qinputdialog_changeevent_callback = cb; }
    void setQInputDialog_Metric_Callback(QInputDialog_Metric_Callback cb) { qinputdialog_metric_callback = cb; }
    void setQInputDialog_InitPainter_Callback(QInputDialog_InitPainter_Callback cb) { qinputdialog_initpainter_callback = cb; }
    void setQInputDialog_Redirected_Callback(QInputDialog_Redirected_Callback cb) { qinputdialog_redirected_callback = cb; }
    void setQInputDialog_SharedPainter_Callback(QInputDialog_SharedPainter_Callback cb) { qinputdialog_sharedpainter_callback = cb; }
    void setQInputDialog_InputMethodEvent_Callback(QInputDialog_InputMethodEvent_Callback cb) { qinputdialog_inputmethodevent_callback = cb; }
    void setQInputDialog_InputMethodQuery_Callback(QInputDialog_InputMethodQuery_Callback cb) { qinputdialog_inputmethodquery_callback = cb; }
    void setQInputDialog_FocusNextPrevChild_Callback(QInputDialog_FocusNextPrevChild_Callback cb) { qinputdialog_focusnextprevchild_callback = cb; }
    void setQInputDialog_TimerEvent_Callback(QInputDialog_TimerEvent_Callback cb) { qinputdialog_timerevent_callback = cb; }
    void setQInputDialog_ChildEvent_Callback(QInputDialog_ChildEvent_Callback cb) { qinputdialog_childevent_callback = cb; }
    void setQInputDialog_CustomEvent_Callback(QInputDialog_CustomEvent_Callback cb) { qinputdialog_customevent_callback = cb; }
    void setQInputDialog_ConnectNotify_Callback(QInputDialog_ConnectNotify_Callback cb) { qinputdialog_connectnotify_callback = cb; }
    void setQInputDialog_DisconnectNotify_Callback(QInputDialog_DisconnectNotify_Callback cb) { qinputdialog_disconnectnotify_callback = cb; }
    void setQInputDialog_AdjustPosition_Callback(QInputDialog_AdjustPosition_Callback cb) { qinputdialog_adjustposition_callback = cb; }
    void setQInputDialog_UpdateMicroFocus_Callback(QInputDialog_UpdateMicroFocus_Callback cb) { qinputdialog_updatemicrofocus_callback = cb; }
    void setQInputDialog_Create_Callback(QInputDialog_Create_Callback cb) { qinputdialog_create_callback = cb; }
    void setQInputDialog_Destroy_Callback(QInputDialog_Destroy_Callback cb) { qinputdialog_destroy_callback = cb; }
    void setQInputDialog_FocusNextChild_Callback(QInputDialog_FocusNextChild_Callback cb) { qinputdialog_focusnextchild_callback = cb; }
    void setQInputDialog_FocusPreviousChild_Callback(QInputDialog_FocusPreviousChild_Callback cb) { qinputdialog_focuspreviouschild_callback = cb; }
    void setQInputDialog_Sender_Callback(QInputDialog_Sender_Callback cb) { qinputdialog_sender_callback = cb; }
    void setQInputDialog_SenderSignalIndex_Callback(QInputDialog_SenderSignalIndex_Callback cb) { qinputdialog_sendersignalindex_callback = cb; }
    void setQInputDialog_Receivers_Callback(QInputDialog_Receivers_Callback cb) { qinputdialog_receivers_callback = cb; }
    void setQInputDialog_IsSignalConnected_Callback(QInputDialog_IsSignalConnected_Callback cb) { qinputdialog_issignalconnected_callback = cb; }

    // Base flag setters
    void setQInputDialog_Metacall_IsBase(bool value) const { qinputdialog_metacall_isbase = value; }
    void setQInputDialog_MinimumSizeHint_IsBase(bool value) const { qinputdialog_minimumsizehint_isbase = value; }
    void setQInputDialog_SizeHint_IsBase(bool value) const { qinputdialog_sizehint_isbase = value; }
    void setQInputDialog_SetVisible_IsBase(bool value) const { qinputdialog_setvisible_isbase = value; }
    void setQInputDialog_Done_IsBase(bool value) const { qinputdialog_done_isbase = value; }
    void setQInputDialog_Open_IsBase(bool value) const { qinputdialog_open_isbase = value; }
    void setQInputDialog_Exec_IsBase(bool value) const { qinputdialog_exec_isbase = value; }
    void setQInputDialog_Accept_IsBase(bool value) const { qinputdialog_accept_isbase = value; }
    void setQInputDialog_Reject_IsBase(bool value) const { qinputdialog_reject_isbase = value; }
    void setQInputDialog_KeyPressEvent_IsBase(bool value) const { qinputdialog_keypressevent_isbase = value; }
    void setQInputDialog_CloseEvent_IsBase(bool value) const { qinputdialog_closeevent_isbase = value; }
    void setQInputDialog_ShowEvent_IsBase(bool value) const { qinputdialog_showevent_isbase = value; }
    void setQInputDialog_ResizeEvent_IsBase(bool value) const { qinputdialog_resizeevent_isbase = value; }
    void setQInputDialog_ContextMenuEvent_IsBase(bool value) const { qinputdialog_contextmenuevent_isbase = value; }
    void setQInputDialog_EventFilter_IsBase(bool value) const { qinputdialog_eventfilter_isbase = value; }
    void setQInputDialog_DevType_IsBase(bool value) const { qinputdialog_devtype_isbase = value; }
    void setQInputDialog_HeightForWidth_IsBase(bool value) const { qinputdialog_heightforwidth_isbase = value; }
    void setQInputDialog_HasHeightForWidth_IsBase(bool value) const { qinputdialog_hasheightforwidth_isbase = value; }
    void setQInputDialog_PaintEngine_IsBase(bool value) const { qinputdialog_paintengine_isbase = value; }
    void setQInputDialog_Event_IsBase(bool value) const { qinputdialog_event_isbase = value; }
    void setQInputDialog_MousePressEvent_IsBase(bool value) const { qinputdialog_mousepressevent_isbase = value; }
    void setQInputDialog_MouseReleaseEvent_IsBase(bool value) const { qinputdialog_mousereleaseevent_isbase = value; }
    void setQInputDialog_MouseDoubleClickEvent_IsBase(bool value) const { qinputdialog_mousedoubleclickevent_isbase = value; }
    void setQInputDialog_MouseMoveEvent_IsBase(bool value) const { qinputdialog_mousemoveevent_isbase = value; }
    void setQInputDialog_WheelEvent_IsBase(bool value) const { qinputdialog_wheelevent_isbase = value; }
    void setQInputDialog_KeyReleaseEvent_IsBase(bool value) const { qinputdialog_keyreleaseevent_isbase = value; }
    void setQInputDialog_FocusInEvent_IsBase(bool value) const { qinputdialog_focusinevent_isbase = value; }
    void setQInputDialog_FocusOutEvent_IsBase(bool value) const { qinputdialog_focusoutevent_isbase = value; }
    void setQInputDialog_EnterEvent_IsBase(bool value) const { qinputdialog_enterevent_isbase = value; }
    void setQInputDialog_LeaveEvent_IsBase(bool value) const { qinputdialog_leaveevent_isbase = value; }
    void setQInputDialog_PaintEvent_IsBase(bool value) const { qinputdialog_paintevent_isbase = value; }
    void setQInputDialog_MoveEvent_IsBase(bool value) const { qinputdialog_moveevent_isbase = value; }
    void setQInputDialog_TabletEvent_IsBase(bool value) const { qinputdialog_tabletevent_isbase = value; }
    void setQInputDialog_ActionEvent_IsBase(bool value) const { qinputdialog_actionevent_isbase = value; }
    void setQInputDialog_DragEnterEvent_IsBase(bool value) const { qinputdialog_dragenterevent_isbase = value; }
    void setQInputDialog_DragMoveEvent_IsBase(bool value) const { qinputdialog_dragmoveevent_isbase = value; }
    void setQInputDialog_DragLeaveEvent_IsBase(bool value) const { qinputdialog_dragleaveevent_isbase = value; }
    void setQInputDialog_DropEvent_IsBase(bool value) const { qinputdialog_dropevent_isbase = value; }
    void setQInputDialog_HideEvent_IsBase(bool value) const { qinputdialog_hideevent_isbase = value; }
    void setQInputDialog_NativeEvent_IsBase(bool value) const { qinputdialog_nativeevent_isbase = value; }
    void setQInputDialog_ChangeEvent_IsBase(bool value) const { qinputdialog_changeevent_isbase = value; }
    void setQInputDialog_Metric_IsBase(bool value) const { qinputdialog_metric_isbase = value; }
    void setQInputDialog_InitPainter_IsBase(bool value) const { qinputdialog_initpainter_isbase = value; }
    void setQInputDialog_Redirected_IsBase(bool value) const { qinputdialog_redirected_isbase = value; }
    void setQInputDialog_SharedPainter_IsBase(bool value) const { qinputdialog_sharedpainter_isbase = value; }
    void setQInputDialog_InputMethodEvent_IsBase(bool value) const { qinputdialog_inputmethodevent_isbase = value; }
    void setQInputDialog_InputMethodQuery_IsBase(bool value) const { qinputdialog_inputmethodquery_isbase = value; }
    void setQInputDialog_FocusNextPrevChild_IsBase(bool value) const { qinputdialog_focusnextprevchild_isbase = value; }
    void setQInputDialog_TimerEvent_IsBase(bool value) const { qinputdialog_timerevent_isbase = value; }
    void setQInputDialog_ChildEvent_IsBase(bool value) const { qinputdialog_childevent_isbase = value; }
    void setQInputDialog_CustomEvent_IsBase(bool value) const { qinputdialog_customevent_isbase = value; }
    void setQInputDialog_ConnectNotify_IsBase(bool value) const { qinputdialog_connectnotify_isbase = value; }
    void setQInputDialog_DisconnectNotify_IsBase(bool value) const { qinputdialog_disconnectnotify_isbase = value; }
    void setQInputDialog_AdjustPosition_IsBase(bool value) const { qinputdialog_adjustposition_isbase = value; }
    void setQInputDialog_UpdateMicroFocus_IsBase(bool value) const { qinputdialog_updatemicrofocus_isbase = value; }
    void setQInputDialog_Create_IsBase(bool value) const { qinputdialog_create_isbase = value; }
    void setQInputDialog_Destroy_IsBase(bool value) const { qinputdialog_destroy_isbase = value; }
    void setQInputDialog_FocusNextChild_IsBase(bool value) const { qinputdialog_focusnextchild_isbase = value; }
    void setQInputDialog_FocusPreviousChild_IsBase(bool value) const { qinputdialog_focuspreviouschild_isbase = value; }
    void setQInputDialog_Sender_IsBase(bool value) const { qinputdialog_sender_isbase = value; }
    void setQInputDialog_SenderSignalIndex_IsBase(bool value) const { qinputdialog_sendersignalindex_isbase = value; }
    void setQInputDialog_Receivers_IsBase(bool value) const { qinputdialog_receivers_isbase = value; }
    void setQInputDialog_IsSignalConnected_IsBase(bool value) const { qinputdialog_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qinputdialog_metacall_isbase) {
            qinputdialog_metacall_isbase = false;
            return QInputDialog::qt_metacall(param1, param2, param3);
        } else if (qinputdialog_metacall_callback != nullptr) {
            return qinputdialog_metacall_callback(this, param1, param2, param3);
        } else {
            return QInputDialog::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qinputdialog_minimumsizehint_isbase) {
            qinputdialog_minimumsizehint_isbase = false;
            return QInputDialog::minimumSizeHint();
        } else if (qinputdialog_minimumsizehint_callback != nullptr) {
            return qinputdialog_minimumsizehint_callback();
        } else {
            return QInputDialog::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qinputdialog_sizehint_isbase) {
            qinputdialog_sizehint_isbase = false;
            return QInputDialog::sizeHint();
        } else if (qinputdialog_sizehint_callback != nullptr) {
            return qinputdialog_sizehint_callback();
        } else {
            return QInputDialog::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qinputdialog_setvisible_isbase) {
            qinputdialog_setvisible_isbase = false;
            QInputDialog::setVisible(visible);
        } else if (qinputdialog_setvisible_callback != nullptr) {
            qinputdialog_setvisible_callback(this, visible);
        } else {
            QInputDialog::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int result) override {
        if (qinputdialog_done_isbase) {
            qinputdialog_done_isbase = false;
            QInputDialog::done(result);
        } else if (qinputdialog_done_callback != nullptr) {
            qinputdialog_done_callback(this, result);
        } else {
            QInputDialog::done(result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (qinputdialog_open_isbase) {
            qinputdialog_open_isbase = false;
            QInputDialog::open();
        } else if (qinputdialog_open_callback != nullptr) {
            qinputdialog_open_callback();
        } else {
            QInputDialog::open();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (qinputdialog_exec_isbase) {
            qinputdialog_exec_isbase = false;
            return QInputDialog::exec();
        } else if (qinputdialog_exec_callback != nullptr) {
            return qinputdialog_exec_callback();
        } else {
            return QInputDialog::exec();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (qinputdialog_accept_isbase) {
            qinputdialog_accept_isbase = false;
            QInputDialog::accept();
        } else if (qinputdialog_accept_callback != nullptr) {
            qinputdialog_accept_callback();
        } else {
            QInputDialog::accept();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (qinputdialog_reject_isbase) {
            qinputdialog_reject_isbase = false;
            QInputDialog::reject();
        } else if (qinputdialog_reject_callback != nullptr) {
            qinputdialog_reject_callback();
        } else {
            QInputDialog::reject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qinputdialog_keypressevent_isbase) {
            qinputdialog_keypressevent_isbase = false;
            QInputDialog::keyPressEvent(param1);
        } else if (qinputdialog_keypressevent_callback != nullptr) {
            qinputdialog_keypressevent_callback(this, param1);
        } else {
            QInputDialog::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (qinputdialog_closeevent_isbase) {
            qinputdialog_closeevent_isbase = false;
            QInputDialog::closeEvent(param1);
        } else if (qinputdialog_closeevent_callback != nullptr) {
            qinputdialog_closeevent_callback(this, param1);
        } else {
            QInputDialog::closeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qinputdialog_showevent_isbase) {
            qinputdialog_showevent_isbase = false;
            QInputDialog::showEvent(param1);
        } else if (qinputdialog_showevent_callback != nullptr) {
            qinputdialog_showevent_callback(this, param1);
        } else {
            QInputDialog::showEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qinputdialog_resizeevent_isbase) {
            qinputdialog_resizeevent_isbase = false;
            QInputDialog::resizeEvent(param1);
        } else if (qinputdialog_resizeevent_callback != nullptr) {
            qinputdialog_resizeevent_callback(this, param1);
        } else {
            QInputDialog::resizeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qinputdialog_contextmenuevent_isbase) {
            qinputdialog_contextmenuevent_isbase = false;
            QInputDialog::contextMenuEvent(param1);
        } else if (qinputdialog_contextmenuevent_callback != nullptr) {
            qinputdialog_contextmenuevent_callback(this, param1);
        } else {
            QInputDialog::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qinputdialog_eventfilter_isbase) {
            qinputdialog_eventfilter_isbase = false;
            return QInputDialog::eventFilter(param1, param2);
        } else if (qinputdialog_eventfilter_callback != nullptr) {
            return qinputdialog_eventfilter_callback(this, param1, param2);
        } else {
            return QInputDialog::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qinputdialog_devtype_isbase) {
            qinputdialog_devtype_isbase = false;
            return QInputDialog::devType();
        } else if (qinputdialog_devtype_callback != nullptr) {
            return qinputdialog_devtype_callback();
        } else {
            return QInputDialog::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qinputdialog_heightforwidth_isbase) {
            qinputdialog_heightforwidth_isbase = false;
            return QInputDialog::heightForWidth(param1);
        } else if (qinputdialog_heightforwidth_callback != nullptr) {
            return qinputdialog_heightforwidth_callback(this, param1);
        } else {
            return QInputDialog::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qinputdialog_hasheightforwidth_isbase) {
            qinputdialog_hasheightforwidth_isbase = false;
            return QInputDialog::hasHeightForWidth();
        } else if (qinputdialog_hasheightforwidth_callback != nullptr) {
            return qinputdialog_hasheightforwidth_callback();
        } else {
            return QInputDialog::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qinputdialog_paintengine_isbase) {
            qinputdialog_paintengine_isbase = false;
            return QInputDialog::paintEngine();
        } else if (qinputdialog_paintengine_callback != nullptr) {
            return qinputdialog_paintengine_callback();
        } else {
            return QInputDialog::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qinputdialog_event_isbase) {
            qinputdialog_event_isbase = false;
            return QInputDialog::event(event);
        } else if (qinputdialog_event_callback != nullptr) {
            return qinputdialog_event_callback(this, event);
        } else {
            return QInputDialog::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qinputdialog_mousepressevent_isbase) {
            qinputdialog_mousepressevent_isbase = false;
            QInputDialog::mousePressEvent(event);
        } else if (qinputdialog_mousepressevent_callback != nullptr) {
            qinputdialog_mousepressevent_callback(this, event);
        } else {
            QInputDialog::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qinputdialog_mousereleaseevent_isbase) {
            qinputdialog_mousereleaseevent_isbase = false;
            QInputDialog::mouseReleaseEvent(event);
        } else if (qinputdialog_mousereleaseevent_callback != nullptr) {
            qinputdialog_mousereleaseevent_callback(this, event);
        } else {
            QInputDialog::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qinputdialog_mousedoubleclickevent_isbase) {
            qinputdialog_mousedoubleclickevent_isbase = false;
            QInputDialog::mouseDoubleClickEvent(event);
        } else if (qinputdialog_mousedoubleclickevent_callback != nullptr) {
            qinputdialog_mousedoubleclickevent_callback(this, event);
        } else {
            QInputDialog::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qinputdialog_mousemoveevent_isbase) {
            qinputdialog_mousemoveevent_isbase = false;
            QInputDialog::mouseMoveEvent(event);
        } else if (qinputdialog_mousemoveevent_callback != nullptr) {
            qinputdialog_mousemoveevent_callback(this, event);
        } else {
            QInputDialog::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qinputdialog_wheelevent_isbase) {
            qinputdialog_wheelevent_isbase = false;
            QInputDialog::wheelEvent(event);
        } else if (qinputdialog_wheelevent_callback != nullptr) {
            qinputdialog_wheelevent_callback(this, event);
        } else {
            QInputDialog::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qinputdialog_keyreleaseevent_isbase) {
            qinputdialog_keyreleaseevent_isbase = false;
            QInputDialog::keyReleaseEvent(event);
        } else if (qinputdialog_keyreleaseevent_callback != nullptr) {
            qinputdialog_keyreleaseevent_callback(this, event);
        } else {
            QInputDialog::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qinputdialog_focusinevent_isbase) {
            qinputdialog_focusinevent_isbase = false;
            QInputDialog::focusInEvent(event);
        } else if (qinputdialog_focusinevent_callback != nullptr) {
            qinputdialog_focusinevent_callback(this, event);
        } else {
            QInputDialog::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qinputdialog_focusoutevent_isbase) {
            qinputdialog_focusoutevent_isbase = false;
            QInputDialog::focusOutEvent(event);
        } else if (qinputdialog_focusoutevent_callback != nullptr) {
            qinputdialog_focusoutevent_callback(this, event);
        } else {
            QInputDialog::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qinputdialog_enterevent_isbase) {
            qinputdialog_enterevent_isbase = false;
            QInputDialog::enterEvent(event);
        } else if (qinputdialog_enterevent_callback != nullptr) {
            qinputdialog_enterevent_callback(this, event);
        } else {
            QInputDialog::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qinputdialog_leaveevent_isbase) {
            qinputdialog_leaveevent_isbase = false;
            QInputDialog::leaveEvent(event);
        } else if (qinputdialog_leaveevent_callback != nullptr) {
            qinputdialog_leaveevent_callback(this, event);
        } else {
            QInputDialog::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qinputdialog_paintevent_isbase) {
            qinputdialog_paintevent_isbase = false;
            QInputDialog::paintEvent(event);
        } else if (qinputdialog_paintevent_callback != nullptr) {
            qinputdialog_paintevent_callback(this, event);
        } else {
            QInputDialog::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qinputdialog_moveevent_isbase) {
            qinputdialog_moveevent_isbase = false;
            QInputDialog::moveEvent(event);
        } else if (qinputdialog_moveevent_callback != nullptr) {
            qinputdialog_moveevent_callback(this, event);
        } else {
            QInputDialog::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qinputdialog_tabletevent_isbase) {
            qinputdialog_tabletevent_isbase = false;
            QInputDialog::tabletEvent(event);
        } else if (qinputdialog_tabletevent_callback != nullptr) {
            qinputdialog_tabletevent_callback(this, event);
        } else {
            QInputDialog::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qinputdialog_actionevent_isbase) {
            qinputdialog_actionevent_isbase = false;
            QInputDialog::actionEvent(event);
        } else if (qinputdialog_actionevent_callback != nullptr) {
            qinputdialog_actionevent_callback(this, event);
        } else {
            QInputDialog::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qinputdialog_dragenterevent_isbase) {
            qinputdialog_dragenterevent_isbase = false;
            QInputDialog::dragEnterEvent(event);
        } else if (qinputdialog_dragenterevent_callback != nullptr) {
            qinputdialog_dragenterevent_callback(this, event);
        } else {
            QInputDialog::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qinputdialog_dragmoveevent_isbase) {
            qinputdialog_dragmoveevent_isbase = false;
            QInputDialog::dragMoveEvent(event);
        } else if (qinputdialog_dragmoveevent_callback != nullptr) {
            qinputdialog_dragmoveevent_callback(this, event);
        } else {
            QInputDialog::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qinputdialog_dragleaveevent_isbase) {
            qinputdialog_dragleaveevent_isbase = false;
            QInputDialog::dragLeaveEvent(event);
        } else if (qinputdialog_dragleaveevent_callback != nullptr) {
            qinputdialog_dragleaveevent_callback(this, event);
        } else {
            QInputDialog::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qinputdialog_dropevent_isbase) {
            qinputdialog_dropevent_isbase = false;
            QInputDialog::dropEvent(event);
        } else if (qinputdialog_dropevent_callback != nullptr) {
            qinputdialog_dropevent_callback(this, event);
        } else {
            QInputDialog::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qinputdialog_hideevent_isbase) {
            qinputdialog_hideevent_isbase = false;
            QInputDialog::hideEvent(event);
        } else if (qinputdialog_hideevent_callback != nullptr) {
            qinputdialog_hideevent_callback(this, event);
        } else {
            QInputDialog::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qinputdialog_nativeevent_isbase) {
            qinputdialog_nativeevent_isbase = false;
            return QInputDialog::nativeEvent(eventType, message, result);
        } else if (qinputdialog_nativeevent_callback != nullptr) {
            return qinputdialog_nativeevent_callback(this, eventType, message, result);
        } else {
            return QInputDialog::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qinputdialog_changeevent_isbase) {
            qinputdialog_changeevent_isbase = false;
            QInputDialog::changeEvent(param1);
        } else if (qinputdialog_changeevent_callback != nullptr) {
            qinputdialog_changeevent_callback(this, param1);
        } else {
            QInputDialog::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qinputdialog_metric_isbase) {
            qinputdialog_metric_isbase = false;
            return QInputDialog::metric(param1);
        } else if (qinputdialog_metric_callback != nullptr) {
            return qinputdialog_metric_callback(this, param1);
        } else {
            return QInputDialog::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qinputdialog_initpainter_isbase) {
            qinputdialog_initpainter_isbase = false;
            QInputDialog::initPainter(painter);
        } else if (qinputdialog_initpainter_callback != nullptr) {
            qinputdialog_initpainter_callback(this, painter);
        } else {
            QInputDialog::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qinputdialog_redirected_isbase) {
            qinputdialog_redirected_isbase = false;
            return QInputDialog::redirected(offset);
        } else if (qinputdialog_redirected_callback != nullptr) {
            return qinputdialog_redirected_callback(this, offset);
        } else {
            return QInputDialog::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qinputdialog_sharedpainter_isbase) {
            qinputdialog_sharedpainter_isbase = false;
            return QInputDialog::sharedPainter();
        } else if (qinputdialog_sharedpainter_callback != nullptr) {
            return qinputdialog_sharedpainter_callback();
        } else {
            return QInputDialog::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qinputdialog_inputmethodevent_isbase) {
            qinputdialog_inputmethodevent_isbase = false;
            QInputDialog::inputMethodEvent(param1);
        } else if (qinputdialog_inputmethodevent_callback != nullptr) {
            qinputdialog_inputmethodevent_callback(this, param1);
        } else {
            QInputDialog::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qinputdialog_inputmethodquery_isbase) {
            qinputdialog_inputmethodquery_isbase = false;
            return QInputDialog::inputMethodQuery(param1);
        } else if (qinputdialog_inputmethodquery_callback != nullptr) {
            return qinputdialog_inputmethodquery_callback(this, param1);
        } else {
            return QInputDialog::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qinputdialog_focusnextprevchild_isbase) {
            qinputdialog_focusnextprevchild_isbase = false;
            return QInputDialog::focusNextPrevChild(next);
        } else if (qinputdialog_focusnextprevchild_callback != nullptr) {
            return qinputdialog_focusnextprevchild_callback(this, next);
        } else {
            return QInputDialog::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qinputdialog_timerevent_isbase) {
            qinputdialog_timerevent_isbase = false;
            QInputDialog::timerEvent(event);
        } else if (qinputdialog_timerevent_callback != nullptr) {
            qinputdialog_timerevent_callback(this, event);
        } else {
            QInputDialog::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qinputdialog_childevent_isbase) {
            qinputdialog_childevent_isbase = false;
            QInputDialog::childEvent(event);
        } else if (qinputdialog_childevent_callback != nullptr) {
            qinputdialog_childevent_callback(this, event);
        } else {
            QInputDialog::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qinputdialog_customevent_isbase) {
            qinputdialog_customevent_isbase = false;
            QInputDialog::customEvent(event);
        } else if (qinputdialog_customevent_callback != nullptr) {
            qinputdialog_customevent_callback(this, event);
        } else {
            QInputDialog::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qinputdialog_connectnotify_isbase) {
            qinputdialog_connectnotify_isbase = false;
            QInputDialog::connectNotify(signal);
        } else if (qinputdialog_connectnotify_callback != nullptr) {
            qinputdialog_connectnotify_callback(this, signal);
        } else {
            QInputDialog::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qinputdialog_disconnectnotify_isbase) {
            qinputdialog_disconnectnotify_isbase = false;
            QInputDialog::disconnectNotify(signal);
        } else if (qinputdialog_disconnectnotify_callback != nullptr) {
            qinputdialog_disconnectnotify_callback(this, signal);
        } else {
            QInputDialog::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (qinputdialog_adjustposition_isbase) {
            qinputdialog_adjustposition_isbase = false;
            QInputDialog::adjustPosition(param1);
        } else if (qinputdialog_adjustposition_callback != nullptr) {
            qinputdialog_adjustposition_callback(this, param1);
        } else {
            QInputDialog::adjustPosition(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qinputdialog_updatemicrofocus_isbase) {
            qinputdialog_updatemicrofocus_isbase = false;
            QInputDialog::updateMicroFocus();
        } else if (qinputdialog_updatemicrofocus_callback != nullptr) {
            qinputdialog_updatemicrofocus_callback();
        } else {
            QInputDialog::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qinputdialog_create_isbase) {
            qinputdialog_create_isbase = false;
            QInputDialog::create();
        } else if (qinputdialog_create_callback != nullptr) {
            qinputdialog_create_callback();
        } else {
            QInputDialog::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qinputdialog_destroy_isbase) {
            qinputdialog_destroy_isbase = false;
            QInputDialog::destroy();
        } else if (qinputdialog_destroy_callback != nullptr) {
            qinputdialog_destroy_callback();
        } else {
            QInputDialog::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qinputdialog_focusnextchild_isbase) {
            qinputdialog_focusnextchild_isbase = false;
            return QInputDialog::focusNextChild();
        } else if (qinputdialog_focusnextchild_callback != nullptr) {
            return qinputdialog_focusnextchild_callback();
        } else {
            return QInputDialog::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qinputdialog_focuspreviouschild_isbase) {
            qinputdialog_focuspreviouschild_isbase = false;
            return QInputDialog::focusPreviousChild();
        } else if (qinputdialog_focuspreviouschild_callback != nullptr) {
            return qinputdialog_focuspreviouschild_callback();
        } else {
            return QInputDialog::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qinputdialog_sender_isbase) {
            qinputdialog_sender_isbase = false;
            return QInputDialog::sender();
        } else if (qinputdialog_sender_callback != nullptr) {
            return qinputdialog_sender_callback();
        } else {
            return QInputDialog::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qinputdialog_sendersignalindex_isbase) {
            qinputdialog_sendersignalindex_isbase = false;
            return QInputDialog::senderSignalIndex();
        } else if (qinputdialog_sendersignalindex_callback != nullptr) {
            return qinputdialog_sendersignalindex_callback();
        } else {
            return QInputDialog::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qinputdialog_receivers_isbase) {
            qinputdialog_receivers_isbase = false;
            return QInputDialog::receivers(signal);
        } else if (qinputdialog_receivers_callback != nullptr) {
            return qinputdialog_receivers_callback(this, signal);
        } else {
            return QInputDialog::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qinputdialog_issignalconnected_isbase) {
            qinputdialog_issignalconnected_isbase = false;
            return QInputDialog::isSignalConnected(signal);
        } else if (qinputdialog_issignalconnected_callback != nullptr) {
            return qinputdialog_issignalconnected_callback(this, signal);
        } else {
            return QInputDialog::isSignalConnected(signal);
        }
    }
};

#endif
