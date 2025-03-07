#pragma once
#ifndef SRCC_LIBVIRTUALQCOLORDIALOG_H
#define SRCC_LIBVIRTUALQCOLORDIALOG_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QColorDialog so that we can call protected methods
class VirtualQColorDialog : public QColorDialog {

  public:
    // Virtual class public types (including callbacks)
    using QColorDialog_Metacall_Callback = int (*)(QColorDialog*, QMetaObject::Call, int, void**);
    using QColorDialog_SetVisible_Callback = void (*)(QColorDialog*, bool);
    using QColorDialog_ChangeEvent_Callback = void (*)(QColorDialog*, QEvent*);
    using QColorDialog_Done_Callback = void (*)(QColorDialog*, int);
    using QColorDialog_SizeHint_Callback = QSize (*)();
    using QColorDialog_MinimumSizeHint_Callback = QSize (*)();
    using QColorDialog_Open_Callback = void (*)();
    using QColorDialog_Exec_Callback = int (*)();
    using QColorDialog_Accept_Callback = void (*)();
    using QColorDialog_Reject_Callback = void (*)();
    using QColorDialog_KeyPressEvent_Callback = void (*)(QColorDialog*, QKeyEvent*);
    using QColorDialog_CloseEvent_Callback = void (*)(QColorDialog*, QCloseEvent*);
    using QColorDialog_ShowEvent_Callback = void (*)(QColorDialog*, QShowEvent*);
    using QColorDialog_ResizeEvent_Callback = void (*)(QColorDialog*, QResizeEvent*);
    using QColorDialog_ContextMenuEvent_Callback = void (*)(QColorDialog*, QContextMenuEvent*);
    using QColorDialog_EventFilter_Callback = bool (*)(QColorDialog*, QObject*, QEvent*);
    using QColorDialog_DevType_Callback = int (*)();
    using QColorDialog_HeightForWidth_Callback = int (*)(const QColorDialog*, int);
    using QColorDialog_HasHeightForWidth_Callback = bool (*)();
    using QColorDialog_PaintEngine_Callback = QPaintEngine* (*)();
    using QColorDialog_Event_Callback = bool (*)(QColorDialog*, QEvent*);
    using QColorDialog_MousePressEvent_Callback = void (*)(QColorDialog*, QMouseEvent*);
    using QColorDialog_MouseReleaseEvent_Callback = void (*)(QColorDialog*, QMouseEvent*);
    using QColorDialog_MouseDoubleClickEvent_Callback = void (*)(QColorDialog*, QMouseEvent*);
    using QColorDialog_MouseMoveEvent_Callback = void (*)(QColorDialog*, QMouseEvent*);
    using QColorDialog_WheelEvent_Callback = void (*)(QColorDialog*, QWheelEvent*);
    using QColorDialog_KeyReleaseEvent_Callback = void (*)(QColorDialog*, QKeyEvent*);
    using QColorDialog_FocusInEvent_Callback = void (*)(QColorDialog*, QFocusEvent*);
    using QColorDialog_FocusOutEvent_Callback = void (*)(QColorDialog*, QFocusEvent*);
    using QColorDialog_EnterEvent_Callback = void (*)(QColorDialog*, QEnterEvent*);
    using QColorDialog_LeaveEvent_Callback = void (*)(QColorDialog*, QEvent*);
    using QColorDialog_PaintEvent_Callback = void (*)(QColorDialog*, QPaintEvent*);
    using QColorDialog_MoveEvent_Callback = void (*)(QColorDialog*, QMoveEvent*);
    using QColorDialog_TabletEvent_Callback = void (*)(QColorDialog*, QTabletEvent*);
    using QColorDialog_ActionEvent_Callback = void (*)(QColorDialog*, QActionEvent*);
    using QColorDialog_DragEnterEvent_Callback = void (*)(QColorDialog*, QDragEnterEvent*);
    using QColorDialog_DragMoveEvent_Callback = void (*)(QColorDialog*, QDragMoveEvent*);
    using QColorDialog_DragLeaveEvent_Callback = void (*)(QColorDialog*, QDragLeaveEvent*);
    using QColorDialog_DropEvent_Callback = void (*)(QColorDialog*, QDropEvent*);
    using QColorDialog_HideEvent_Callback = void (*)(QColorDialog*, QHideEvent*);
    using QColorDialog_NativeEvent_Callback = bool (*)(QColorDialog*, const QByteArray&, void*, qintptr*);
    using QColorDialog_Metric_Callback = int (*)(const QColorDialog*, QPaintDevice::PaintDeviceMetric);
    using QColorDialog_InitPainter_Callback = void (*)(const QColorDialog*, QPainter*);
    using QColorDialog_Redirected_Callback = QPaintDevice* (*)(const QColorDialog*, QPoint*);
    using QColorDialog_SharedPainter_Callback = QPainter* (*)();
    using QColorDialog_InputMethodEvent_Callback = void (*)(QColorDialog*, QInputMethodEvent*);
    using QColorDialog_InputMethodQuery_Callback = QVariant (*)(const QColorDialog*, Qt::InputMethodQuery);
    using QColorDialog_FocusNextPrevChild_Callback = bool (*)(QColorDialog*, bool);
    using QColorDialog_TimerEvent_Callback = void (*)(QColorDialog*, QTimerEvent*);
    using QColorDialog_ChildEvent_Callback = void (*)(QColorDialog*, QChildEvent*);
    using QColorDialog_CustomEvent_Callback = void (*)(QColorDialog*, QEvent*);
    using QColorDialog_ConnectNotify_Callback = void (*)(QColorDialog*, const QMetaMethod&);
    using QColorDialog_DisconnectNotify_Callback = void (*)(QColorDialog*, const QMetaMethod&);
    using QColorDialog_AdjustPosition_Callback = void (*)(QColorDialog*, QWidget*);
    using QColorDialog_UpdateMicroFocus_Callback = void (*)();
    using QColorDialog_Create_Callback = void (*)();
    using QColorDialog_Destroy_Callback = void (*)();
    using QColorDialog_FocusNextChild_Callback = bool (*)();
    using QColorDialog_FocusPreviousChild_Callback = bool (*)();
    using QColorDialog_Sender_Callback = QObject* (*)();
    using QColorDialog_SenderSignalIndex_Callback = int (*)();
    using QColorDialog_Receivers_Callback = int (*)(const QColorDialog*, const char*);
    using QColorDialog_IsSignalConnected_Callback = bool (*)(const QColorDialog*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QColorDialog_Metacall_Callback qcolordialog_metacall_callback = nullptr;
    QColorDialog_SetVisible_Callback qcolordialog_setvisible_callback = nullptr;
    QColorDialog_ChangeEvent_Callback qcolordialog_changeevent_callback = nullptr;
    QColorDialog_Done_Callback qcolordialog_done_callback = nullptr;
    QColorDialog_SizeHint_Callback qcolordialog_sizehint_callback = nullptr;
    QColorDialog_MinimumSizeHint_Callback qcolordialog_minimumsizehint_callback = nullptr;
    QColorDialog_Open_Callback qcolordialog_open_callback = nullptr;
    QColorDialog_Exec_Callback qcolordialog_exec_callback = nullptr;
    QColorDialog_Accept_Callback qcolordialog_accept_callback = nullptr;
    QColorDialog_Reject_Callback qcolordialog_reject_callback = nullptr;
    QColorDialog_KeyPressEvent_Callback qcolordialog_keypressevent_callback = nullptr;
    QColorDialog_CloseEvent_Callback qcolordialog_closeevent_callback = nullptr;
    QColorDialog_ShowEvent_Callback qcolordialog_showevent_callback = nullptr;
    QColorDialog_ResizeEvent_Callback qcolordialog_resizeevent_callback = nullptr;
    QColorDialog_ContextMenuEvent_Callback qcolordialog_contextmenuevent_callback = nullptr;
    QColorDialog_EventFilter_Callback qcolordialog_eventfilter_callback = nullptr;
    QColorDialog_DevType_Callback qcolordialog_devtype_callback = nullptr;
    QColorDialog_HeightForWidth_Callback qcolordialog_heightforwidth_callback = nullptr;
    QColorDialog_HasHeightForWidth_Callback qcolordialog_hasheightforwidth_callback = nullptr;
    QColorDialog_PaintEngine_Callback qcolordialog_paintengine_callback = nullptr;
    QColorDialog_Event_Callback qcolordialog_event_callback = nullptr;
    QColorDialog_MousePressEvent_Callback qcolordialog_mousepressevent_callback = nullptr;
    QColorDialog_MouseReleaseEvent_Callback qcolordialog_mousereleaseevent_callback = nullptr;
    QColorDialog_MouseDoubleClickEvent_Callback qcolordialog_mousedoubleclickevent_callback = nullptr;
    QColorDialog_MouseMoveEvent_Callback qcolordialog_mousemoveevent_callback = nullptr;
    QColorDialog_WheelEvent_Callback qcolordialog_wheelevent_callback = nullptr;
    QColorDialog_KeyReleaseEvent_Callback qcolordialog_keyreleaseevent_callback = nullptr;
    QColorDialog_FocusInEvent_Callback qcolordialog_focusinevent_callback = nullptr;
    QColorDialog_FocusOutEvent_Callback qcolordialog_focusoutevent_callback = nullptr;
    QColorDialog_EnterEvent_Callback qcolordialog_enterevent_callback = nullptr;
    QColorDialog_LeaveEvent_Callback qcolordialog_leaveevent_callback = nullptr;
    QColorDialog_PaintEvent_Callback qcolordialog_paintevent_callback = nullptr;
    QColorDialog_MoveEvent_Callback qcolordialog_moveevent_callback = nullptr;
    QColorDialog_TabletEvent_Callback qcolordialog_tabletevent_callback = nullptr;
    QColorDialog_ActionEvent_Callback qcolordialog_actionevent_callback = nullptr;
    QColorDialog_DragEnterEvent_Callback qcolordialog_dragenterevent_callback = nullptr;
    QColorDialog_DragMoveEvent_Callback qcolordialog_dragmoveevent_callback = nullptr;
    QColorDialog_DragLeaveEvent_Callback qcolordialog_dragleaveevent_callback = nullptr;
    QColorDialog_DropEvent_Callback qcolordialog_dropevent_callback = nullptr;
    QColorDialog_HideEvent_Callback qcolordialog_hideevent_callback = nullptr;
    QColorDialog_NativeEvent_Callback qcolordialog_nativeevent_callback = nullptr;
    QColorDialog_Metric_Callback qcolordialog_metric_callback = nullptr;
    QColorDialog_InitPainter_Callback qcolordialog_initpainter_callback = nullptr;
    QColorDialog_Redirected_Callback qcolordialog_redirected_callback = nullptr;
    QColorDialog_SharedPainter_Callback qcolordialog_sharedpainter_callback = nullptr;
    QColorDialog_InputMethodEvent_Callback qcolordialog_inputmethodevent_callback = nullptr;
    QColorDialog_InputMethodQuery_Callback qcolordialog_inputmethodquery_callback = nullptr;
    QColorDialog_FocusNextPrevChild_Callback qcolordialog_focusnextprevchild_callback = nullptr;
    QColorDialog_TimerEvent_Callback qcolordialog_timerevent_callback = nullptr;
    QColorDialog_ChildEvent_Callback qcolordialog_childevent_callback = nullptr;
    QColorDialog_CustomEvent_Callback qcolordialog_customevent_callback = nullptr;
    QColorDialog_ConnectNotify_Callback qcolordialog_connectnotify_callback = nullptr;
    QColorDialog_DisconnectNotify_Callback qcolordialog_disconnectnotify_callback = nullptr;
    QColorDialog_AdjustPosition_Callback qcolordialog_adjustposition_callback = nullptr;
    QColorDialog_UpdateMicroFocus_Callback qcolordialog_updatemicrofocus_callback = nullptr;
    QColorDialog_Create_Callback qcolordialog_create_callback = nullptr;
    QColorDialog_Destroy_Callback qcolordialog_destroy_callback = nullptr;
    QColorDialog_FocusNextChild_Callback qcolordialog_focusnextchild_callback = nullptr;
    QColorDialog_FocusPreviousChild_Callback qcolordialog_focuspreviouschild_callback = nullptr;
    QColorDialog_Sender_Callback qcolordialog_sender_callback = nullptr;
    QColorDialog_SenderSignalIndex_Callback qcolordialog_sendersignalindex_callback = nullptr;
    QColorDialog_Receivers_Callback qcolordialog_receivers_callback = nullptr;
    QColorDialog_IsSignalConnected_Callback qcolordialog_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qcolordialog_metacall_isbase = false;
    mutable bool qcolordialog_setvisible_isbase = false;
    mutable bool qcolordialog_changeevent_isbase = false;
    mutable bool qcolordialog_done_isbase = false;
    mutable bool qcolordialog_sizehint_isbase = false;
    mutable bool qcolordialog_minimumsizehint_isbase = false;
    mutable bool qcolordialog_open_isbase = false;
    mutable bool qcolordialog_exec_isbase = false;
    mutable bool qcolordialog_accept_isbase = false;
    mutable bool qcolordialog_reject_isbase = false;
    mutable bool qcolordialog_keypressevent_isbase = false;
    mutable bool qcolordialog_closeevent_isbase = false;
    mutable bool qcolordialog_showevent_isbase = false;
    mutable bool qcolordialog_resizeevent_isbase = false;
    mutable bool qcolordialog_contextmenuevent_isbase = false;
    mutable bool qcolordialog_eventfilter_isbase = false;
    mutable bool qcolordialog_devtype_isbase = false;
    mutable bool qcolordialog_heightforwidth_isbase = false;
    mutable bool qcolordialog_hasheightforwidth_isbase = false;
    mutable bool qcolordialog_paintengine_isbase = false;
    mutable bool qcolordialog_event_isbase = false;
    mutable bool qcolordialog_mousepressevent_isbase = false;
    mutable bool qcolordialog_mousereleaseevent_isbase = false;
    mutable bool qcolordialog_mousedoubleclickevent_isbase = false;
    mutable bool qcolordialog_mousemoveevent_isbase = false;
    mutable bool qcolordialog_wheelevent_isbase = false;
    mutable bool qcolordialog_keyreleaseevent_isbase = false;
    mutable bool qcolordialog_focusinevent_isbase = false;
    mutable bool qcolordialog_focusoutevent_isbase = false;
    mutable bool qcolordialog_enterevent_isbase = false;
    mutable bool qcolordialog_leaveevent_isbase = false;
    mutable bool qcolordialog_paintevent_isbase = false;
    mutable bool qcolordialog_moveevent_isbase = false;
    mutable bool qcolordialog_tabletevent_isbase = false;
    mutable bool qcolordialog_actionevent_isbase = false;
    mutable bool qcolordialog_dragenterevent_isbase = false;
    mutable bool qcolordialog_dragmoveevent_isbase = false;
    mutable bool qcolordialog_dragleaveevent_isbase = false;
    mutable bool qcolordialog_dropevent_isbase = false;
    mutable bool qcolordialog_hideevent_isbase = false;
    mutable bool qcolordialog_nativeevent_isbase = false;
    mutable bool qcolordialog_metric_isbase = false;
    mutable bool qcolordialog_initpainter_isbase = false;
    mutable bool qcolordialog_redirected_isbase = false;
    mutable bool qcolordialog_sharedpainter_isbase = false;
    mutable bool qcolordialog_inputmethodevent_isbase = false;
    mutable bool qcolordialog_inputmethodquery_isbase = false;
    mutable bool qcolordialog_focusnextprevchild_isbase = false;
    mutable bool qcolordialog_timerevent_isbase = false;
    mutable bool qcolordialog_childevent_isbase = false;
    mutable bool qcolordialog_customevent_isbase = false;
    mutable bool qcolordialog_connectnotify_isbase = false;
    mutable bool qcolordialog_disconnectnotify_isbase = false;
    mutable bool qcolordialog_adjustposition_isbase = false;
    mutable bool qcolordialog_updatemicrofocus_isbase = false;
    mutable bool qcolordialog_create_isbase = false;
    mutable bool qcolordialog_destroy_isbase = false;
    mutable bool qcolordialog_focusnextchild_isbase = false;
    mutable bool qcolordialog_focuspreviouschild_isbase = false;
    mutable bool qcolordialog_sender_isbase = false;
    mutable bool qcolordialog_sendersignalindex_isbase = false;
    mutable bool qcolordialog_receivers_isbase = false;
    mutable bool qcolordialog_issignalconnected_isbase = false;

  public:
    VirtualQColorDialog(QWidget* parent) : QColorDialog(parent){};
    VirtualQColorDialog() : QColorDialog(){};
    VirtualQColorDialog(const QColor& initial) : QColorDialog(initial){};
    VirtualQColorDialog(const QColor& initial, QWidget* parent) : QColorDialog(initial, parent){};

    ~VirtualQColorDialog() {
        qcolordialog_metacall_callback = nullptr;
        qcolordialog_setvisible_callback = nullptr;
        qcolordialog_changeevent_callback = nullptr;
        qcolordialog_done_callback = nullptr;
        qcolordialog_sizehint_callback = nullptr;
        qcolordialog_minimumsizehint_callback = nullptr;
        qcolordialog_open_callback = nullptr;
        qcolordialog_exec_callback = nullptr;
        qcolordialog_accept_callback = nullptr;
        qcolordialog_reject_callback = nullptr;
        qcolordialog_keypressevent_callback = nullptr;
        qcolordialog_closeevent_callback = nullptr;
        qcolordialog_showevent_callback = nullptr;
        qcolordialog_resizeevent_callback = nullptr;
        qcolordialog_contextmenuevent_callback = nullptr;
        qcolordialog_eventfilter_callback = nullptr;
        qcolordialog_devtype_callback = nullptr;
        qcolordialog_heightforwidth_callback = nullptr;
        qcolordialog_hasheightforwidth_callback = nullptr;
        qcolordialog_paintengine_callback = nullptr;
        qcolordialog_event_callback = nullptr;
        qcolordialog_mousepressevent_callback = nullptr;
        qcolordialog_mousereleaseevent_callback = nullptr;
        qcolordialog_mousedoubleclickevent_callback = nullptr;
        qcolordialog_mousemoveevent_callback = nullptr;
        qcolordialog_wheelevent_callback = nullptr;
        qcolordialog_keyreleaseevent_callback = nullptr;
        qcolordialog_focusinevent_callback = nullptr;
        qcolordialog_focusoutevent_callback = nullptr;
        qcolordialog_enterevent_callback = nullptr;
        qcolordialog_leaveevent_callback = nullptr;
        qcolordialog_paintevent_callback = nullptr;
        qcolordialog_moveevent_callback = nullptr;
        qcolordialog_tabletevent_callback = nullptr;
        qcolordialog_actionevent_callback = nullptr;
        qcolordialog_dragenterevent_callback = nullptr;
        qcolordialog_dragmoveevent_callback = nullptr;
        qcolordialog_dragleaveevent_callback = nullptr;
        qcolordialog_dropevent_callback = nullptr;
        qcolordialog_hideevent_callback = nullptr;
        qcolordialog_nativeevent_callback = nullptr;
        qcolordialog_metric_callback = nullptr;
        qcolordialog_initpainter_callback = nullptr;
        qcolordialog_redirected_callback = nullptr;
        qcolordialog_sharedpainter_callback = nullptr;
        qcolordialog_inputmethodevent_callback = nullptr;
        qcolordialog_inputmethodquery_callback = nullptr;
        qcolordialog_focusnextprevchild_callback = nullptr;
        qcolordialog_timerevent_callback = nullptr;
        qcolordialog_childevent_callback = nullptr;
        qcolordialog_customevent_callback = nullptr;
        qcolordialog_connectnotify_callback = nullptr;
        qcolordialog_disconnectnotify_callback = nullptr;
        qcolordialog_adjustposition_callback = nullptr;
        qcolordialog_updatemicrofocus_callback = nullptr;
        qcolordialog_create_callback = nullptr;
        qcolordialog_destroy_callback = nullptr;
        qcolordialog_focusnextchild_callback = nullptr;
        qcolordialog_focuspreviouschild_callback = nullptr;
        qcolordialog_sender_callback = nullptr;
        qcolordialog_sendersignalindex_callback = nullptr;
        qcolordialog_receivers_callback = nullptr;
        qcolordialog_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQColorDialog_Metacall_Callback(QColorDialog_Metacall_Callback cb) { qcolordialog_metacall_callback = cb; }
    void setQColorDialog_SetVisible_Callback(QColorDialog_SetVisible_Callback cb) { qcolordialog_setvisible_callback = cb; }
    void setQColorDialog_ChangeEvent_Callback(QColorDialog_ChangeEvent_Callback cb) { qcolordialog_changeevent_callback = cb; }
    void setQColorDialog_Done_Callback(QColorDialog_Done_Callback cb) { qcolordialog_done_callback = cb; }
    void setQColorDialog_SizeHint_Callback(QColorDialog_SizeHint_Callback cb) { qcolordialog_sizehint_callback = cb; }
    void setQColorDialog_MinimumSizeHint_Callback(QColorDialog_MinimumSizeHint_Callback cb) { qcolordialog_minimumsizehint_callback = cb; }
    void setQColorDialog_Open_Callback(QColorDialog_Open_Callback cb) { qcolordialog_open_callback = cb; }
    void setQColorDialog_Exec_Callback(QColorDialog_Exec_Callback cb) { qcolordialog_exec_callback = cb; }
    void setQColorDialog_Accept_Callback(QColorDialog_Accept_Callback cb) { qcolordialog_accept_callback = cb; }
    void setQColorDialog_Reject_Callback(QColorDialog_Reject_Callback cb) { qcolordialog_reject_callback = cb; }
    void setQColorDialog_KeyPressEvent_Callback(QColorDialog_KeyPressEvent_Callback cb) { qcolordialog_keypressevent_callback = cb; }
    void setQColorDialog_CloseEvent_Callback(QColorDialog_CloseEvent_Callback cb) { qcolordialog_closeevent_callback = cb; }
    void setQColorDialog_ShowEvent_Callback(QColorDialog_ShowEvent_Callback cb) { qcolordialog_showevent_callback = cb; }
    void setQColorDialog_ResizeEvent_Callback(QColorDialog_ResizeEvent_Callback cb) { qcolordialog_resizeevent_callback = cb; }
    void setQColorDialog_ContextMenuEvent_Callback(QColorDialog_ContextMenuEvent_Callback cb) { qcolordialog_contextmenuevent_callback = cb; }
    void setQColorDialog_EventFilter_Callback(QColorDialog_EventFilter_Callback cb) { qcolordialog_eventfilter_callback = cb; }
    void setQColorDialog_DevType_Callback(QColorDialog_DevType_Callback cb) { qcolordialog_devtype_callback = cb; }
    void setQColorDialog_HeightForWidth_Callback(QColorDialog_HeightForWidth_Callback cb) { qcolordialog_heightforwidth_callback = cb; }
    void setQColorDialog_HasHeightForWidth_Callback(QColorDialog_HasHeightForWidth_Callback cb) { qcolordialog_hasheightforwidth_callback = cb; }
    void setQColorDialog_PaintEngine_Callback(QColorDialog_PaintEngine_Callback cb) { qcolordialog_paintengine_callback = cb; }
    void setQColorDialog_Event_Callback(QColorDialog_Event_Callback cb) { qcolordialog_event_callback = cb; }
    void setQColorDialog_MousePressEvent_Callback(QColorDialog_MousePressEvent_Callback cb) { qcolordialog_mousepressevent_callback = cb; }
    void setQColorDialog_MouseReleaseEvent_Callback(QColorDialog_MouseReleaseEvent_Callback cb) { qcolordialog_mousereleaseevent_callback = cb; }
    void setQColorDialog_MouseDoubleClickEvent_Callback(QColorDialog_MouseDoubleClickEvent_Callback cb) { qcolordialog_mousedoubleclickevent_callback = cb; }
    void setQColorDialog_MouseMoveEvent_Callback(QColorDialog_MouseMoveEvent_Callback cb) { qcolordialog_mousemoveevent_callback = cb; }
    void setQColorDialog_WheelEvent_Callback(QColorDialog_WheelEvent_Callback cb) { qcolordialog_wheelevent_callback = cb; }
    void setQColorDialog_KeyReleaseEvent_Callback(QColorDialog_KeyReleaseEvent_Callback cb) { qcolordialog_keyreleaseevent_callback = cb; }
    void setQColorDialog_FocusInEvent_Callback(QColorDialog_FocusInEvent_Callback cb) { qcolordialog_focusinevent_callback = cb; }
    void setQColorDialog_FocusOutEvent_Callback(QColorDialog_FocusOutEvent_Callback cb) { qcolordialog_focusoutevent_callback = cb; }
    void setQColorDialog_EnterEvent_Callback(QColorDialog_EnterEvent_Callback cb) { qcolordialog_enterevent_callback = cb; }
    void setQColorDialog_LeaveEvent_Callback(QColorDialog_LeaveEvent_Callback cb) { qcolordialog_leaveevent_callback = cb; }
    void setQColorDialog_PaintEvent_Callback(QColorDialog_PaintEvent_Callback cb) { qcolordialog_paintevent_callback = cb; }
    void setQColorDialog_MoveEvent_Callback(QColorDialog_MoveEvent_Callback cb) { qcolordialog_moveevent_callback = cb; }
    void setQColorDialog_TabletEvent_Callback(QColorDialog_TabletEvent_Callback cb) { qcolordialog_tabletevent_callback = cb; }
    void setQColorDialog_ActionEvent_Callback(QColorDialog_ActionEvent_Callback cb) { qcolordialog_actionevent_callback = cb; }
    void setQColorDialog_DragEnterEvent_Callback(QColorDialog_DragEnterEvent_Callback cb) { qcolordialog_dragenterevent_callback = cb; }
    void setQColorDialog_DragMoveEvent_Callback(QColorDialog_DragMoveEvent_Callback cb) { qcolordialog_dragmoveevent_callback = cb; }
    void setQColorDialog_DragLeaveEvent_Callback(QColorDialog_DragLeaveEvent_Callback cb) { qcolordialog_dragleaveevent_callback = cb; }
    void setQColorDialog_DropEvent_Callback(QColorDialog_DropEvent_Callback cb) { qcolordialog_dropevent_callback = cb; }
    void setQColorDialog_HideEvent_Callback(QColorDialog_HideEvent_Callback cb) { qcolordialog_hideevent_callback = cb; }
    void setQColorDialog_NativeEvent_Callback(QColorDialog_NativeEvent_Callback cb) { qcolordialog_nativeevent_callback = cb; }
    void setQColorDialog_Metric_Callback(QColorDialog_Metric_Callback cb) { qcolordialog_metric_callback = cb; }
    void setQColorDialog_InitPainter_Callback(QColorDialog_InitPainter_Callback cb) { qcolordialog_initpainter_callback = cb; }
    void setQColorDialog_Redirected_Callback(QColorDialog_Redirected_Callback cb) { qcolordialog_redirected_callback = cb; }
    void setQColorDialog_SharedPainter_Callback(QColorDialog_SharedPainter_Callback cb) { qcolordialog_sharedpainter_callback = cb; }
    void setQColorDialog_InputMethodEvent_Callback(QColorDialog_InputMethodEvent_Callback cb) { qcolordialog_inputmethodevent_callback = cb; }
    void setQColorDialog_InputMethodQuery_Callback(QColorDialog_InputMethodQuery_Callback cb) { qcolordialog_inputmethodquery_callback = cb; }
    void setQColorDialog_FocusNextPrevChild_Callback(QColorDialog_FocusNextPrevChild_Callback cb) { qcolordialog_focusnextprevchild_callback = cb; }
    void setQColorDialog_TimerEvent_Callback(QColorDialog_TimerEvent_Callback cb) { qcolordialog_timerevent_callback = cb; }
    void setQColorDialog_ChildEvent_Callback(QColorDialog_ChildEvent_Callback cb) { qcolordialog_childevent_callback = cb; }
    void setQColorDialog_CustomEvent_Callback(QColorDialog_CustomEvent_Callback cb) { qcolordialog_customevent_callback = cb; }
    void setQColorDialog_ConnectNotify_Callback(QColorDialog_ConnectNotify_Callback cb) { qcolordialog_connectnotify_callback = cb; }
    void setQColorDialog_DisconnectNotify_Callback(QColorDialog_DisconnectNotify_Callback cb) { qcolordialog_disconnectnotify_callback = cb; }
    void setQColorDialog_AdjustPosition_Callback(QColorDialog_AdjustPosition_Callback cb) { qcolordialog_adjustposition_callback = cb; }
    void setQColorDialog_UpdateMicroFocus_Callback(QColorDialog_UpdateMicroFocus_Callback cb) { qcolordialog_updatemicrofocus_callback = cb; }
    void setQColorDialog_Create_Callback(QColorDialog_Create_Callback cb) { qcolordialog_create_callback = cb; }
    void setQColorDialog_Destroy_Callback(QColorDialog_Destroy_Callback cb) { qcolordialog_destroy_callback = cb; }
    void setQColorDialog_FocusNextChild_Callback(QColorDialog_FocusNextChild_Callback cb) { qcolordialog_focusnextchild_callback = cb; }
    void setQColorDialog_FocusPreviousChild_Callback(QColorDialog_FocusPreviousChild_Callback cb) { qcolordialog_focuspreviouschild_callback = cb; }
    void setQColorDialog_Sender_Callback(QColorDialog_Sender_Callback cb) { qcolordialog_sender_callback = cb; }
    void setQColorDialog_SenderSignalIndex_Callback(QColorDialog_SenderSignalIndex_Callback cb) { qcolordialog_sendersignalindex_callback = cb; }
    void setQColorDialog_Receivers_Callback(QColorDialog_Receivers_Callback cb) { qcolordialog_receivers_callback = cb; }
    void setQColorDialog_IsSignalConnected_Callback(QColorDialog_IsSignalConnected_Callback cb) { qcolordialog_issignalconnected_callback = cb; }

    // Base flag setters
    void setQColorDialog_Metacall_IsBase(bool value) const { qcolordialog_metacall_isbase = value; }
    void setQColorDialog_SetVisible_IsBase(bool value) const { qcolordialog_setvisible_isbase = value; }
    void setQColorDialog_ChangeEvent_IsBase(bool value) const { qcolordialog_changeevent_isbase = value; }
    void setQColorDialog_Done_IsBase(bool value) const { qcolordialog_done_isbase = value; }
    void setQColorDialog_SizeHint_IsBase(bool value) const { qcolordialog_sizehint_isbase = value; }
    void setQColorDialog_MinimumSizeHint_IsBase(bool value) const { qcolordialog_minimumsizehint_isbase = value; }
    void setQColorDialog_Open_IsBase(bool value) const { qcolordialog_open_isbase = value; }
    void setQColorDialog_Exec_IsBase(bool value) const { qcolordialog_exec_isbase = value; }
    void setQColorDialog_Accept_IsBase(bool value) const { qcolordialog_accept_isbase = value; }
    void setQColorDialog_Reject_IsBase(bool value) const { qcolordialog_reject_isbase = value; }
    void setQColorDialog_KeyPressEvent_IsBase(bool value) const { qcolordialog_keypressevent_isbase = value; }
    void setQColorDialog_CloseEvent_IsBase(bool value) const { qcolordialog_closeevent_isbase = value; }
    void setQColorDialog_ShowEvent_IsBase(bool value) const { qcolordialog_showevent_isbase = value; }
    void setQColorDialog_ResizeEvent_IsBase(bool value) const { qcolordialog_resizeevent_isbase = value; }
    void setQColorDialog_ContextMenuEvent_IsBase(bool value) const { qcolordialog_contextmenuevent_isbase = value; }
    void setQColorDialog_EventFilter_IsBase(bool value) const { qcolordialog_eventfilter_isbase = value; }
    void setQColorDialog_DevType_IsBase(bool value) const { qcolordialog_devtype_isbase = value; }
    void setQColorDialog_HeightForWidth_IsBase(bool value) const { qcolordialog_heightforwidth_isbase = value; }
    void setQColorDialog_HasHeightForWidth_IsBase(bool value) const { qcolordialog_hasheightforwidth_isbase = value; }
    void setQColorDialog_PaintEngine_IsBase(bool value) const { qcolordialog_paintengine_isbase = value; }
    void setQColorDialog_Event_IsBase(bool value) const { qcolordialog_event_isbase = value; }
    void setQColorDialog_MousePressEvent_IsBase(bool value) const { qcolordialog_mousepressevent_isbase = value; }
    void setQColorDialog_MouseReleaseEvent_IsBase(bool value) const { qcolordialog_mousereleaseevent_isbase = value; }
    void setQColorDialog_MouseDoubleClickEvent_IsBase(bool value) const { qcolordialog_mousedoubleclickevent_isbase = value; }
    void setQColorDialog_MouseMoveEvent_IsBase(bool value) const { qcolordialog_mousemoveevent_isbase = value; }
    void setQColorDialog_WheelEvent_IsBase(bool value) const { qcolordialog_wheelevent_isbase = value; }
    void setQColorDialog_KeyReleaseEvent_IsBase(bool value) const { qcolordialog_keyreleaseevent_isbase = value; }
    void setQColorDialog_FocusInEvent_IsBase(bool value) const { qcolordialog_focusinevent_isbase = value; }
    void setQColorDialog_FocusOutEvent_IsBase(bool value) const { qcolordialog_focusoutevent_isbase = value; }
    void setQColorDialog_EnterEvent_IsBase(bool value) const { qcolordialog_enterevent_isbase = value; }
    void setQColorDialog_LeaveEvent_IsBase(bool value) const { qcolordialog_leaveevent_isbase = value; }
    void setQColorDialog_PaintEvent_IsBase(bool value) const { qcolordialog_paintevent_isbase = value; }
    void setQColorDialog_MoveEvent_IsBase(bool value) const { qcolordialog_moveevent_isbase = value; }
    void setQColorDialog_TabletEvent_IsBase(bool value) const { qcolordialog_tabletevent_isbase = value; }
    void setQColorDialog_ActionEvent_IsBase(bool value) const { qcolordialog_actionevent_isbase = value; }
    void setQColorDialog_DragEnterEvent_IsBase(bool value) const { qcolordialog_dragenterevent_isbase = value; }
    void setQColorDialog_DragMoveEvent_IsBase(bool value) const { qcolordialog_dragmoveevent_isbase = value; }
    void setQColorDialog_DragLeaveEvent_IsBase(bool value) const { qcolordialog_dragleaveevent_isbase = value; }
    void setQColorDialog_DropEvent_IsBase(bool value) const { qcolordialog_dropevent_isbase = value; }
    void setQColorDialog_HideEvent_IsBase(bool value) const { qcolordialog_hideevent_isbase = value; }
    void setQColorDialog_NativeEvent_IsBase(bool value) const { qcolordialog_nativeevent_isbase = value; }
    void setQColorDialog_Metric_IsBase(bool value) const { qcolordialog_metric_isbase = value; }
    void setQColorDialog_InitPainter_IsBase(bool value) const { qcolordialog_initpainter_isbase = value; }
    void setQColorDialog_Redirected_IsBase(bool value) const { qcolordialog_redirected_isbase = value; }
    void setQColorDialog_SharedPainter_IsBase(bool value) const { qcolordialog_sharedpainter_isbase = value; }
    void setQColorDialog_InputMethodEvent_IsBase(bool value) const { qcolordialog_inputmethodevent_isbase = value; }
    void setQColorDialog_InputMethodQuery_IsBase(bool value) const { qcolordialog_inputmethodquery_isbase = value; }
    void setQColorDialog_FocusNextPrevChild_IsBase(bool value) const { qcolordialog_focusnextprevchild_isbase = value; }
    void setQColorDialog_TimerEvent_IsBase(bool value) const { qcolordialog_timerevent_isbase = value; }
    void setQColorDialog_ChildEvent_IsBase(bool value) const { qcolordialog_childevent_isbase = value; }
    void setQColorDialog_CustomEvent_IsBase(bool value) const { qcolordialog_customevent_isbase = value; }
    void setQColorDialog_ConnectNotify_IsBase(bool value) const { qcolordialog_connectnotify_isbase = value; }
    void setQColorDialog_DisconnectNotify_IsBase(bool value) const { qcolordialog_disconnectnotify_isbase = value; }
    void setQColorDialog_AdjustPosition_IsBase(bool value) const { qcolordialog_adjustposition_isbase = value; }
    void setQColorDialog_UpdateMicroFocus_IsBase(bool value) const { qcolordialog_updatemicrofocus_isbase = value; }
    void setQColorDialog_Create_IsBase(bool value) const { qcolordialog_create_isbase = value; }
    void setQColorDialog_Destroy_IsBase(bool value) const { qcolordialog_destroy_isbase = value; }
    void setQColorDialog_FocusNextChild_IsBase(bool value) const { qcolordialog_focusnextchild_isbase = value; }
    void setQColorDialog_FocusPreviousChild_IsBase(bool value) const { qcolordialog_focuspreviouschild_isbase = value; }
    void setQColorDialog_Sender_IsBase(bool value) const { qcolordialog_sender_isbase = value; }
    void setQColorDialog_SenderSignalIndex_IsBase(bool value) const { qcolordialog_sendersignalindex_isbase = value; }
    void setQColorDialog_Receivers_IsBase(bool value) const { qcolordialog_receivers_isbase = value; }
    void setQColorDialog_IsSignalConnected_IsBase(bool value) const { qcolordialog_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qcolordialog_metacall_isbase) {
            qcolordialog_metacall_isbase = false;
            return QColorDialog::qt_metacall(param1, param2, param3);
        } else if (qcolordialog_metacall_callback != nullptr) {
            return qcolordialog_metacall_callback(this, param1, param2, param3);
        } else {
            return QColorDialog::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qcolordialog_setvisible_isbase) {
            qcolordialog_setvisible_isbase = false;
            QColorDialog::setVisible(visible);
        } else if (qcolordialog_setvisible_callback != nullptr) {
            qcolordialog_setvisible_callback(this, visible);
        } else {
            QColorDialog::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (qcolordialog_changeevent_isbase) {
            qcolordialog_changeevent_isbase = false;
            QColorDialog::changeEvent(event);
        } else if (qcolordialog_changeevent_callback != nullptr) {
            qcolordialog_changeevent_callback(this, event);
        } else {
            QColorDialog::changeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int result) override {
        if (qcolordialog_done_isbase) {
            qcolordialog_done_isbase = false;
            QColorDialog::done(result);
        } else if (qcolordialog_done_callback != nullptr) {
            qcolordialog_done_callback(this, result);
        } else {
            QColorDialog::done(result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qcolordialog_sizehint_isbase) {
            qcolordialog_sizehint_isbase = false;
            return QColorDialog::sizeHint();
        } else if (qcolordialog_sizehint_callback != nullptr) {
            return qcolordialog_sizehint_callback();
        } else {
            return QColorDialog::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qcolordialog_minimumsizehint_isbase) {
            qcolordialog_minimumsizehint_isbase = false;
            return QColorDialog::minimumSizeHint();
        } else if (qcolordialog_minimumsizehint_callback != nullptr) {
            return qcolordialog_minimumsizehint_callback();
        } else {
            return QColorDialog::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (qcolordialog_open_isbase) {
            qcolordialog_open_isbase = false;
            QColorDialog::open();
        } else if (qcolordialog_open_callback != nullptr) {
            qcolordialog_open_callback();
        } else {
            QColorDialog::open();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (qcolordialog_exec_isbase) {
            qcolordialog_exec_isbase = false;
            return QColorDialog::exec();
        } else if (qcolordialog_exec_callback != nullptr) {
            return qcolordialog_exec_callback();
        } else {
            return QColorDialog::exec();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (qcolordialog_accept_isbase) {
            qcolordialog_accept_isbase = false;
            QColorDialog::accept();
        } else if (qcolordialog_accept_callback != nullptr) {
            qcolordialog_accept_callback();
        } else {
            QColorDialog::accept();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (qcolordialog_reject_isbase) {
            qcolordialog_reject_isbase = false;
            QColorDialog::reject();
        } else if (qcolordialog_reject_callback != nullptr) {
            qcolordialog_reject_callback();
        } else {
            QColorDialog::reject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qcolordialog_keypressevent_isbase) {
            qcolordialog_keypressevent_isbase = false;
            QColorDialog::keyPressEvent(param1);
        } else if (qcolordialog_keypressevent_callback != nullptr) {
            qcolordialog_keypressevent_callback(this, param1);
        } else {
            QColorDialog::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (qcolordialog_closeevent_isbase) {
            qcolordialog_closeevent_isbase = false;
            QColorDialog::closeEvent(param1);
        } else if (qcolordialog_closeevent_callback != nullptr) {
            qcolordialog_closeevent_callback(this, param1);
        } else {
            QColorDialog::closeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qcolordialog_showevent_isbase) {
            qcolordialog_showevent_isbase = false;
            QColorDialog::showEvent(param1);
        } else if (qcolordialog_showevent_callback != nullptr) {
            qcolordialog_showevent_callback(this, param1);
        } else {
            QColorDialog::showEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qcolordialog_resizeevent_isbase) {
            qcolordialog_resizeevent_isbase = false;
            QColorDialog::resizeEvent(param1);
        } else if (qcolordialog_resizeevent_callback != nullptr) {
            qcolordialog_resizeevent_callback(this, param1);
        } else {
            QColorDialog::resizeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qcolordialog_contextmenuevent_isbase) {
            qcolordialog_contextmenuevent_isbase = false;
            QColorDialog::contextMenuEvent(param1);
        } else if (qcolordialog_contextmenuevent_callback != nullptr) {
            qcolordialog_contextmenuevent_callback(this, param1);
        } else {
            QColorDialog::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qcolordialog_eventfilter_isbase) {
            qcolordialog_eventfilter_isbase = false;
            return QColorDialog::eventFilter(param1, param2);
        } else if (qcolordialog_eventfilter_callback != nullptr) {
            return qcolordialog_eventfilter_callback(this, param1, param2);
        } else {
            return QColorDialog::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qcolordialog_devtype_isbase) {
            qcolordialog_devtype_isbase = false;
            return QColorDialog::devType();
        } else if (qcolordialog_devtype_callback != nullptr) {
            return qcolordialog_devtype_callback();
        } else {
            return QColorDialog::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qcolordialog_heightforwidth_isbase) {
            qcolordialog_heightforwidth_isbase = false;
            return QColorDialog::heightForWidth(param1);
        } else if (qcolordialog_heightforwidth_callback != nullptr) {
            return qcolordialog_heightforwidth_callback(this, param1);
        } else {
            return QColorDialog::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qcolordialog_hasheightforwidth_isbase) {
            qcolordialog_hasheightforwidth_isbase = false;
            return QColorDialog::hasHeightForWidth();
        } else if (qcolordialog_hasheightforwidth_callback != nullptr) {
            return qcolordialog_hasheightforwidth_callback();
        } else {
            return QColorDialog::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qcolordialog_paintengine_isbase) {
            qcolordialog_paintengine_isbase = false;
            return QColorDialog::paintEngine();
        } else if (qcolordialog_paintengine_callback != nullptr) {
            return qcolordialog_paintengine_callback();
        } else {
            return QColorDialog::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qcolordialog_event_isbase) {
            qcolordialog_event_isbase = false;
            return QColorDialog::event(event);
        } else if (qcolordialog_event_callback != nullptr) {
            return qcolordialog_event_callback(this, event);
        } else {
            return QColorDialog::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qcolordialog_mousepressevent_isbase) {
            qcolordialog_mousepressevent_isbase = false;
            QColorDialog::mousePressEvent(event);
        } else if (qcolordialog_mousepressevent_callback != nullptr) {
            qcolordialog_mousepressevent_callback(this, event);
        } else {
            QColorDialog::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qcolordialog_mousereleaseevent_isbase) {
            qcolordialog_mousereleaseevent_isbase = false;
            QColorDialog::mouseReleaseEvent(event);
        } else if (qcolordialog_mousereleaseevent_callback != nullptr) {
            qcolordialog_mousereleaseevent_callback(this, event);
        } else {
            QColorDialog::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qcolordialog_mousedoubleclickevent_isbase) {
            qcolordialog_mousedoubleclickevent_isbase = false;
            QColorDialog::mouseDoubleClickEvent(event);
        } else if (qcolordialog_mousedoubleclickevent_callback != nullptr) {
            qcolordialog_mousedoubleclickevent_callback(this, event);
        } else {
            QColorDialog::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qcolordialog_mousemoveevent_isbase) {
            qcolordialog_mousemoveevent_isbase = false;
            QColorDialog::mouseMoveEvent(event);
        } else if (qcolordialog_mousemoveevent_callback != nullptr) {
            qcolordialog_mousemoveevent_callback(this, event);
        } else {
            QColorDialog::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qcolordialog_wheelevent_isbase) {
            qcolordialog_wheelevent_isbase = false;
            QColorDialog::wheelEvent(event);
        } else if (qcolordialog_wheelevent_callback != nullptr) {
            qcolordialog_wheelevent_callback(this, event);
        } else {
            QColorDialog::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qcolordialog_keyreleaseevent_isbase) {
            qcolordialog_keyreleaseevent_isbase = false;
            QColorDialog::keyReleaseEvent(event);
        } else if (qcolordialog_keyreleaseevent_callback != nullptr) {
            qcolordialog_keyreleaseevent_callback(this, event);
        } else {
            QColorDialog::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qcolordialog_focusinevent_isbase) {
            qcolordialog_focusinevent_isbase = false;
            QColorDialog::focusInEvent(event);
        } else if (qcolordialog_focusinevent_callback != nullptr) {
            qcolordialog_focusinevent_callback(this, event);
        } else {
            QColorDialog::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qcolordialog_focusoutevent_isbase) {
            qcolordialog_focusoutevent_isbase = false;
            QColorDialog::focusOutEvent(event);
        } else if (qcolordialog_focusoutevent_callback != nullptr) {
            qcolordialog_focusoutevent_callback(this, event);
        } else {
            QColorDialog::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qcolordialog_enterevent_isbase) {
            qcolordialog_enterevent_isbase = false;
            QColorDialog::enterEvent(event);
        } else if (qcolordialog_enterevent_callback != nullptr) {
            qcolordialog_enterevent_callback(this, event);
        } else {
            QColorDialog::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qcolordialog_leaveevent_isbase) {
            qcolordialog_leaveevent_isbase = false;
            QColorDialog::leaveEvent(event);
        } else if (qcolordialog_leaveevent_callback != nullptr) {
            qcolordialog_leaveevent_callback(this, event);
        } else {
            QColorDialog::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qcolordialog_paintevent_isbase) {
            qcolordialog_paintevent_isbase = false;
            QColorDialog::paintEvent(event);
        } else if (qcolordialog_paintevent_callback != nullptr) {
            qcolordialog_paintevent_callback(this, event);
        } else {
            QColorDialog::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qcolordialog_moveevent_isbase) {
            qcolordialog_moveevent_isbase = false;
            QColorDialog::moveEvent(event);
        } else if (qcolordialog_moveevent_callback != nullptr) {
            qcolordialog_moveevent_callback(this, event);
        } else {
            QColorDialog::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qcolordialog_tabletevent_isbase) {
            qcolordialog_tabletevent_isbase = false;
            QColorDialog::tabletEvent(event);
        } else if (qcolordialog_tabletevent_callback != nullptr) {
            qcolordialog_tabletevent_callback(this, event);
        } else {
            QColorDialog::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qcolordialog_actionevent_isbase) {
            qcolordialog_actionevent_isbase = false;
            QColorDialog::actionEvent(event);
        } else if (qcolordialog_actionevent_callback != nullptr) {
            qcolordialog_actionevent_callback(this, event);
        } else {
            QColorDialog::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qcolordialog_dragenterevent_isbase) {
            qcolordialog_dragenterevent_isbase = false;
            QColorDialog::dragEnterEvent(event);
        } else if (qcolordialog_dragenterevent_callback != nullptr) {
            qcolordialog_dragenterevent_callback(this, event);
        } else {
            QColorDialog::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qcolordialog_dragmoveevent_isbase) {
            qcolordialog_dragmoveevent_isbase = false;
            QColorDialog::dragMoveEvent(event);
        } else if (qcolordialog_dragmoveevent_callback != nullptr) {
            qcolordialog_dragmoveevent_callback(this, event);
        } else {
            QColorDialog::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qcolordialog_dragleaveevent_isbase) {
            qcolordialog_dragleaveevent_isbase = false;
            QColorDialog::dragLeaveEvent(event);
        } else if (qcolordialog_dragleaveevent_callback != nullptr) {
            qcolordialog_dragleaveevent_callback(this, event);
        } else {
            QColorDialog::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qcolordialog_dropevent_isbase) {
            qcolordialog_dropevent_isbase = false;
            QColorDialog::dropEvent(event);
        } else if (qcolordialog_dropevent_callback != nullptr) {
            qcolordialog_dropevent_callback(this, event);
        } else {
            QColorDialog::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qcolordialog_hideevent_isbase) {
            qcolordialog_hideevent_isbase = false;
            QColorDialog::hideEvent(event);
        } else if (qcolordialog_hideevent_callback != nullptr) {
            qcolordialog_hideevent_callback(this, event);
        } else {
            QColorDialog::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qcolordialog_nativeevent_isbase) {
            qcolordialog_nativeevent_isbase = false;
            return QColorDialog::nativeEvent(eventType, message, result);
        } else if (qcolordialog_nativeevent_callback != nullptr) {
            return qcolordialog_nativeevent_callback(this, eventType, message, result);
        } else {
            return QColorDialog::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qcolordialog_metric_isbase) {
            qcolordialog_metric_isbase = false;
            return QColorDialog::metric(param1);
        } else if (qcolordialog_metric_callback != nullptr) {
            return qcolordialog_metric_callback(this, param1);
        } else {
            return QColorDialog::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qcolordialog_initpainter_isbase) {
            qcolordialog_initpainter_isbase = false;
            QColorDialog::initPainter(painter);
        } else if (qcolordialog_initpainter_callback != nullptr) {
            qcolordialog_initpainter_callback(this, painter);
        } else {
            QColorDialog::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qcolordialog_redirected_isbase) {
            qcolordialog_redirected_isbase = false;
            return QColorDialog::redirected(offset);
        } else if (qcolordialog_redirected_callback != nullptr) {
            return qcolordialog_redirected_callback(this, offset);
        } else {
            return QColorDialog::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qcolordialog_sharedpainter_isbase) {
            qcolordialog_sharedpainter_isbase = false;
            return QColorDialog::sharedPainter();
        } else if (qcolordialog_sharedpainter_callback != nullptr) {
            return qcolordialog_sharedpainter_callback();
        } else {
            return QColorDialog::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qcolordialog_inputmethodevent_isbase) {
            qcolordialog_inputmethodevent_isbase = false;
            QColorDialog::inputMethodEvent(param1);
        } else if (qcolordialog_inputmethodevent_callback != nullptr) {
            qcolordialog_inputmethodevent_callback(this, param1);
        } else {
            QColorDialog::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qcolordialog_inputmethodquery_isbase) {
            qcolordialog_inputmethodquery_isbase = false;
            return QColorDialog::inputMethodQuery(param1);
        } else if (qcolordialog_inputmethodquery_callback != nullptr) {
            return qcolordialog_inputmethodquery_callback(this, param1);
        } else {
            return QColorDialog::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qcolordialog_focusnextprevchild_isbase) {
            qcolordialog_focusnextprevchild_isbase = false;
            return QColorDialog::focusNextPrevChild(next);
        } else if (qcolordialog_focusnextprevchild_callback != nullptr) {
            return qcolordialog_focusnextprevchild_callback(this, next);
        } else {
            return QColorDialog::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qcolordialog_timerevent_isbase) {
            qcolordialog_timerevent_isbase = false;
            QColorDialog::timerEvent(event);
        } else if (qcolordialog_timerevent_callback != nullptr) {
            qcolordialog_timerevent_callback(this, event);
        } else {
            QColorDialog::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qcolordialog_childevent_isbase) {
            qcolordialog_childevent_isbase = false;
            QColorDialog::childEvent(event);
        } else if (qcolordialog_childevent_callback != nullptr) {
            qcolordialog_childevent_callback(this, event);
        } else {
            QColorDialog::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qcolordialog_customevent_isbase) {
            qcolordialog_customevent_isbase = false;
            QColorDialog::customEvent(event);
        } else if (qcolordialog_customevent_callback != nullptr) {
            qcolordialog_customevent_callback(this, event);
        } else {
            QColorDialog::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qcolordialog_connectnotify_isbase) {
            qcolordialog_connectnotify_isbase = false;
            QColorDialog::connectNotify(signal);
        } else if (qcolordialog_connectnotify_callback != nullptr) {
            qcolordialog_connectnotify_callback(this, signal);
        } else {
            QColorDialog::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qcolordialog_disconnectnotify_isbase) {
            qcolordialog_disconnectnotify_isbase = false;
            QColorDialog::disconnectNotify(signal);
        } else if (qcolordialog_disconnectnotify_callback != nullptr) {
            qcolordialog_disconnectnotify_callback(this, signal);
        } else {
            QColorDialog::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (qcolordialog_adjustposition_isbase) {
            qcolordialog_adjustposition_isbase = false;
            QColorDialog::adjustPosition(param1);
        } else if (qcolordialog_adjustposition_callback != nullptr) {
            qcolordialog_adjustposition_callback(this, param1);
        } else {
            QColorDialog::adjustPosition(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qcolordialog_updatemicrofocus_isbase) {
            qcolordialog_updatemicrofocus_isbase = false;
            QColorDialog::updateMicroFocus();
        } else if (qcolordialog_updatemicrofocus_callback != nullptr) {
            qcolordialog_updatemicrofocus_callback();
        } else {
            QColorDialog::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qcolordialog_create_isbase) {
            qcolordialog_create_isbase = false;
            QColorDialog::create();
        } else if (qcolordialog_create_callback != nullptr) {
            qcolordialog_create_callback();
        } else {
            QColorDialog::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qcolordialog_destroy_isbase) {
            qcolordialog_destroy_isbase = false;
            QColorDialog::destroy();
        } else if (qcolordialog_destroy_callback != nullptr) {
            qcolordialog_destroy_callback();
        } else {
            QColorDialog::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qcolordialog_focusnextchild_isbase) {
            qcolordialog_focusnextchild_isbase = false;
            return QColorDialog::focusNextChild();
        } else if (qcolordialog_focusnextchild_callback != nullptr) {
            return qcolordialog_focusnextchild_callback();
        } else {
            return QColorDialog::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qcolordialog_focuspreviouschild_isbase) {
            qcolordialog_focuspreviouschild_isbase = false;
            return QColorDialog::focusPreviousChild();
        } else if (qcolordialog_focuspreviouschild_callback != nullptr) {
            return qcolordialog_focuspreviouschild_callback();
        } else {
            return QColorDialog::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qcolordialog_sender_isbase) {
            qcolordialog_sender_isbase = false;
            return QColorDialog::sender();
        } else if (qcolordialog_sender_callback != nullptr) {
            return qcolordialog_sender_callback();
        } else {
            return QColorDialog::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qcolordialog_sendersignalindex_isbase) {
            qcolordialog_sendersignalindex_isbase = false;
            return QColorDialog::senderSignalIndex();
        } else if (qcolordialog_sendersignalindex_callback != nullptr) {
            return qcolordialog_sendersignalindex_callback();
        } else {
            return QColorDialog::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qcolordialog_receivers_isbase) {
            qcolordialog_receivers_isbase = false;
            return QColorDialog::receivers(signal);
        } else if (qcolordialog_receivers_callback != nullptr) {
            return qcolordialog_receivers_callback(this, signal);
        } else {
            return QColorDialog::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qcolordialog_issignalconnected_isbase) {
            qcolordialog_issignalconnected_isbase = false;
            return QColorDialog::isSignalConnected(signal);
        } else if (qcolordialog_issignalconnected_callback != nullptr) {
            return qcolordialog_issignalconnected_callback(this, signal);
        } else {
            return QColorDialog::isSignalConnected(signal);
        }
    }
};

#endif
