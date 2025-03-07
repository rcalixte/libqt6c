#pragma once
#ifndef SRC_PRINTSUPPORTC_LIBVIRTUALQPRINTDIALOG_H
#define SRC_PRINTSUPPORTC_LIBVIRTUALQPRINTDIALOG_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPrintDialog so that we can call protected methods
class VirtualQPrintDialog : public QPrintDialog {

  public:
    // Virtual class public types (including callbacks)
    using QPrintDialog_Metacall_Callback = int (*)(QPrintDialog*, QMetaObject::Call, int, void**);
    using QPrintDialog_Exec_Callback = int (*)();
    using QPrintDialog_Accept_Callback = void (*)();
    using QPrintDialog_Done_Callback = void (*)(QPrintDialog*, int);
    using QPrintDialog_SetVisible_Callback = void (*)(QPrintDialog*, bool);
    using QPrintDialog_SizeHint_Callback = QSize (*)();
    using QPrintDialog_MinimumSizeHint_Callback = QSize (*)();
    using QPrintDialog_Open_Callback = void (*)();
    using QPrintDialog_Reject_Callback = void (*)();
    using QPrintDialog_KeyPressEvent_Callback = void (*)(QPrintDialog*, QKeyEvent*);
    using QPrintDialog_CloseEvent_Callback = void (*)(QPrintDialog*, QCloseEvent*);
    using QPrintDialog_ShowEvent_Callback = void (*)(QPrintDialog*, QShowEvent*);
    using QPrintDialog_ResizeEvent_Callback = void (*)(QPrintDialog*, QResizeEvent*);
    using QPrintDialog_ContextMenuEvent_Callback = void (*)(QPrintDialog*, QContextMenuEvent*);
    using QPrintDialog_EventFilter_Callback = bool (*)(QPrintDialog*, QObject*, QEvent*);
    using QPrintDialog_DevType_Callback = int (*)();
    using QPrintDialog_HeightForWidth_Callback = int (*)(const QPrintDialog*, int);
    using QPrintDialog_HasHeightForWidth_Callback = bool (*)();
    using QPrintDialog_PaintEngine_Callback = QPaintEngine* (*)();
    using QPrintDialog_Event_Callback = bool (*)(QPrintDialog*, QEvent*);
    using QPrintDialog_MousePressEvent_Callback = void (*)(QPrintDialog*, QMouseEvent*);
    using QPrintDialog_MouseReleaseEvent_Callback = void (*)(QPrintDialog*, QMouseEvent*);
    using QPrintDialog_MouseDoubleClickEvent_Callback = void (*)(QPrintDialog*, QMouseEvent*);
    using QPrintDialog_MouseMoveEvent_Callback = void (*)(QPrintDialog*, QMouseEvent*);
    using QPrintDialog_WheelEvent_Callback = void (*)(QPrintDialog*, QWheelEvent*);
    using QPrintDialog_KeyReleaseEvent_Callback = void (*)(QPrintDialog*, QKeyEvent*);
    using QPrintDialog_FocusInEvent_Callback = void (*)(QPrintDialog*, QFocusEvent*);
    using QPrintDialog_FocusOutEvent_Callback = void (*)(QPrintDialog*, QFocusEvent*);
    using QPrintDialog_EnterEvent_Callback = void (*)(QPrintDialog*, QEnterEvent*);
    using QPrintDialog_LeaveEvent_Callback = void (*)(QPrintDialog*, QEvent*);
    using QPrintDialog_PaintEvent_Callback = void (*)(QPrintDialog*, QPaintEvent*);
    using QPrintDialog_MoveEvent_Callback = void (*)(QPrintDialog*, QMoveEvent*);
    using QPrintDialog_TabletEvent_Callback = void (*)(QPrintDialog*, QTabletEvent*);
    using QPrintDialog_ActionEvent_Callback = void (*)(QPrintDialog*, QActionEvent*);
    using QPrintDialog_DragEnterEvent_Callback = void (*)(QPrintDialog*, QDragEnterEvent*);
    using QPrintDialog_DragMoveEvent_Callback = void (*)(QPrintDialog*, QDragMoveEvent*);
    using QPrintDialog_DragLeaveEvent_Callback = void (*)(QPrintDialog*, QDragLeaveEvent*);
    using QPrintDialog_DropEvent_Callback = void (*)(QPrintDialog*, QDropEvent*);
    using QPrintDialog_HideEvent_Callback = void (*)(QPrintDialog*, QHideEvent*);
    using QPrintDialog_NativeEvent_Callback = bool (*)(QPrintDialog*, const QByteArray&, void*, qintptr*);
    using QPrintDialog_ChangeEvent_Callback = void (*)(QPrintDialog*, QEvent*);
    using QPrintDialog_Metric_Callback = int (*)(const QPrintDialog*, QPaintDevice::PaintDeviceMetric);
    using QPrintDialog_InitPainter_Callback = void (*)(const QPrintDialog*, QPainter*);
    using QPrintDialog_Redirected_Callback = QPaintDevice* (*)(const QPrintDialog*, QPoint*);
    using QPrintDialog_SharedPainter_Callback = QPainter* (*)();
    using QPrintDialog_InputMethodEvent_Callback = void (*)(QPrintDialog*, QInputMethodEvent*);
    using QPrintDialog_InputMethodQuery_Callback = QVariant (*)(const QPrintDialog*, Qt::InputMethodQuery);
    using QPrintDialog_FocusNextPrevChild_Callback = bool (*)(QPrintDialog*, bool);
    using QPrintDialog_TimerEvent_Callback = void (*)(QPrintDialog*, QTimerEvent*);
    using QPrintDialog_ChildEvent_Callback = void (*)(QPrintDialog*, QChildEvent*);
    using QPrintDialog_CustomEvent_Callback = void (*)(QPrintDialog*, QEvent*);
    using QPrintDialog_ConnectNotify_Callback = void (*)(QPrintDialog*, const QMetaMethod&);
    using QPrintDialog_DisconnectNotify_Callback = void (*)(QPrintDialog*, const QMetaMethod&);
    using QPrintDialog_AdjustPosition_Callback = void (*)(QPrintDialog*, QWidget*);
    using QPrintDialog_UpdateMicroFocus_Callback = void (*)();
    using QPrintDialog_Create_Callback = void (*)();
    using QPrintDialog_Destroy_Callback = void (*)();
    using QPrintDialog_FocusNextChild_Callback = bool (*)();
    using QPrintDialog_FocusPreviousChild_Callback = bool (*)();
    using QPrintDialog_Sender_Callback = QObject* (*)();
    using QPrintDialog_SenderSignalIndex_Callback = int (*)();
    using QPrintDialog_Receivers_Callback = int (*)(const QPrintDialog*, const char*);
    using QPrintDialog_IsSignalConnected_Callback = bool (*)(const QPrintDialog*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QPrintDialog_Metacall_Callback qprintdialog_metacall_callback = nullptr;
    QPrintDialog_Exec_Callback qprintdialog_exec_callback = nullptr;
    QPrintDialog_Accept_Callback qprintdialog_accept_callback = nullptr;
    QPrintDialog_Done_Callback qprintdialog_done_callback = nullptr;
    QPrintDialog_SetVisible_Callback qprintdialog_setvisible_callback = nullptr;
    QPrintDialog_SizeHint_Callback qprintdialog_sizehint_callback = nullptr;
    QPrintDialog_MinimumSizeHint_Callback qprintdialog_minimumsizehint_callback = nullptr;
    QPrintDialog_Open_Callback qprintdialog_open_callback = nullptr;
    QPrintDialog_Reject_Callback qprintdialog_reject_callback = nullptr;
    QPrintDialog_KeyPressEvent_Callback qprintdialog_keypressevent_callback = nullptr;
    QPrintDialog_CloseEvent_Callback qprintdialog_closeevent_callback = nullptr;
    QPrintDialog_ShowEvent_Callback qprintdialog_showevent_callback = nullptr;
    QPrintDialog_ResizeEvent_Callback qprintdialog_resizeevent_callback = nullptr;
    QPrintDialog_ContextMenuEvent_Callback qprintdialog_contextmenuevent_callback = nullptr;
    QPrintDialog_EventFilter_Callback qprintdialog_eventfilter_callback = nullptr;
    QPrintDialog_DevType_Callback qprintdialog_devtype_callback = nullptr;
    QPrintDialog_HeightForWidth_Callback qprintdialog_heightforwidth_callback = nullptr;
    QPrintDialog_HasHeightForWidth_Callback qprintdialog_hasheightforwidth_callback = nullptr;
    QPrintDialog_PaintEngine_Callback qprintdialog_paintengine_callback = nullptr;
    QPrintDialog_Event_Callback qprintdialog_event_callback = nullptr;
    QPrintDialog_MousePressEvent_Callback qprintdialog_mousepressevent_callback = nullptr;
    QPrintDialog_MouseReleaseEvent_Callback qprintdialog_mousereleaseevent_callback = nullptr;
    QPrintDialog_MouseDoubleClickEvent_Callback qprintdialog_mousedoubleclickevent_callback = nullptr;
    QPrintDialog_MouseMoveEvent_Callback qprintdialog_mousemoveevent_callback = nullptr;
    QPrintDialog_WheelEvent_Callback qprintdialog_wheelevent_callback = nullptr;
    QPrintDialog_KeyReleaseEvent_Callback qprintdialog_keyreleaseevent_callback = nullptr;
    QPrintDialog_FocusInEvent_Callback qprintdialog_focusinevent_callback = nullptr;
    QPrintDialog_FocusOutEvent_Callback qprintdialog_focusoutevent_callback = nullptr;
    QPrintDialog_EnterEvent_Callback qprintdialog_enterevent_callback = nullptr;
    QPrintDialog_LeaveEvent_Callback qprintdialog_leaveevent_callback = nullptr;
    QPrintDialog_PaintEvent_Callback qprintdialog_paintevent_callback = nullptr;
    QPrintDialog_MoveEvent_Callback qprintdialog_moveevent_callback = nullptr;
    QPrintDialog_TabletEvent_Callback qprintdialog_tabletevent_callback = nullptr;
    QPrintDialog_ActionEvent_Callback qprintdialog_actionevent_callback = nullptr;
    QPrintDialog_DragEnterEvent_Callback qprintdialog_dragenterevent_callback = nullptr;
    QPrintDialog_DragMoveEvent_Callback qprintdialog_dragmoveevent_callback = nullptr;
    QPrintDialog_DragLeaveEvent_Callback qprintdialog_dragleaveevent_callback = nullptr;
    QPrintDialog_DropEvent_Callback qprintdialog_dropevent_callback = nullptr;
    QPrintDialog_HideEvent_Callback qprintdialog_hideevent_callback = nullptr;
    QPrintDialog_NativeEvent_Callback qprintdialog_nativeevent_callback = nullptr;
    QPrintDialog_ChangeEvent_Callback qprintdialog_changeevent_callback = nullptr;
    QPrintDialog_Metric_Callback qprintdialog_metric_callback = nullptr;
    QPrintDialog_InitPainter_Callback qprintdialog_initpainter_callback = nullptr;
    QPrintDialog_Redirected_Callback qprintdialog_redirected_callback = nullptr;
    QPrintDialog_SharedPainter_Callback qprintdialog_sharedpainter_callback = nullptr;
    QPrintDialog_InputMethodEvent_Callback qprintdialog_inputmethodevent_callback = nullptr;
    QPrintDialog_InputMethodQuery_Callback qprintdialog_inputmethodquery_callback = nullptr;
    QPrintDialog_FocusNextPrevChild_Callback qprintdialog_focusnextprevchild_callback = nullptr;
    QPrintDialog_TimerEvent_Callback qprintdialog_timerevent_callback = nullptr;
    QPrintDialog_ChildEvent_Callback qprintdialog_childevent_callback = nullptr;
    QPrintDialog_CustomEvent_Callback qprintdialog_customevent_callback = nullptr;
    QPrintDialog_ConnectNotify_Callback qprintdialog_connectnotify_callback = nullptr;
    QPrintDialog_DisconnectNotify_Callback qprintdialog_disconnectnotify_callback = nullptr;
    QPrintDialog_AdjustPosition_Callback qprintdialog_adjustposition_callback = nullptr;
    QPrintDialog_UpdateMicroFocus_Callback qprintdialog_updatemicrofocus_callback = nullptr;
    QPrintDialog_Create_Callback qprintdialog_create_callback = nullptr;
    QPrintDialog_Destroy_Callback qprintdialog_destroy_callback = nullptr;
    QPrintDialog_FocusNextChild_Callback qprintdialog_focusnextchild_callback = nullptr;
    QPrintDialog_FocusPreviousChild_Callback qprintdialog_focuspreviouschild_callback = nullptr;
    QPrintDialog_Sender_Callback qprintdialog_sender_callback = nullptr;
    QPrintDialog_SenderSignalIndex_Callback qprintdialog_sendersignalindex_callback = nullptr;
    QPrintDialog_Receivers_Callback qprintdialog_receivers_callback = nullptr;
    QPrintDialog_IsSignalConnected_Callback qprintdialog_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qprintdialog_metacall_isbase = false;
    mutable bool qprintdialog_exec_isbase = false;
    mutable bool qprintdialog_accept_isbase = false;
    mutable bool qprintdialog_done_isbase = false;
    mutable bool qprintdialog_setvisible_isbase = false;
    mutable bool qprintdialog_sizehint_isbase = false;
    mutable bool qprintdialog_minimumsizehint_isbase = false;
    mutable bool qprintdialog_open_isbase = false;
    mutable bool qprintdialog_reject_isbase = false;
    mutable bool qprintdialog_keypressevent_isbase = false;
    mutable bool qprintdialog_closeevent_isbase = false;
    mutable bool qprintdialog_showevent_isbase = false;
    mutable bool qprintdialog_resizeevent_isbase = false;
    mutable bool qprintdialog_contextmenuevent_isbase = false;
    mutable bool qprintdialog_eventfilter_isbase = false;
    mutable bool qprintdialog_devtype_isbase = false;
    mutable bool qprintdialog_heightforwidth_isbase = false;
    mutable bool qprintdialog_hasheightforwidth_isbase = false;
    mutable bool qprintdialog_paintengine_isbase = false;
    mutable bool qprintdialog_event_isbase = false;
    mutable bool qprintdialog_mousepressevent_isbase = false;
    mutable bool qprintdialog_mousereleaseevent_isbase = false;
    mutable bool qprintdialog_mousedoubleclickevent_isbase = false;
    mutable bool qprintdialog_mousemoveevent_isbase = false;
    mutable bool qprintdialog_wheelevent_isbase = false;
    mutable bool qprintdialog_keyreleaseevent_isbase = false;
    mutable bool qprintdialog_focusinevent_isbase = false;
    mutable bool qprintdialog_focusoutevent_isbase = false;
    mutable bool qprintdialog_enterevent_isbase = false;
    mutable bool qprintdialog_leaveevent_isbase = false;
    mutable bool qprintdialog_paintevent_isbase = false;
    mutable bool qprintdialog_moveevent_isbase = false;
    mutable bool qprintdialog_tabletevent_isbase = false;
    mutable bool qprintdialog_actionevent_isbase = false;
    mutable bool qprintdialog_dragenterevent_isbase = false;
    mutable bool qprintdialog_dragmoveevent_isbase = false;
    mutable bool qprintdialog_dragleaveevent_isbase = false;
    mutable bool qprintdialog_dropevent_isbase = false;
    mutable bool qprintdialog_hideevent_isbase = false;
    mutable bool qprintdialog_nativeevent_isbase = false;
    mutable bool qprintdialog_changeevent_isbase = false;
    mutable bool qprintdialog_metric_isbase = false;
    mutable bool qprintdialog_initpainter_isbase = false;
    mutable bool qprintdialog_redirected_isbase = false;
    mutable bool qprintdialog_sharedpainter_isbase = false;
    mutable bool qprintdialog_inputmethodevent_isbase = false;
    mutable bool qprintdialog_inputmethodquery_isbase = false;
    mutable bool qprintdialog_focusnextprevchild_isbase = false;
    mutable bool qprintdialog_timerevent_isbase = false;
    mutable bool qprintdialog_childevent_isbase = false;
    mutable bool qprintdialog_customevent_isbase = false;
    mutable bool qprintdialog_connectnotify_isbase = false;
    mutable bool qprintdialog_disconnectnotify_isbase = false;
    mutable bool qprintdialog_adjustposition_isbase = false;
    mutable bool qprintdialog_updatemicrofocus_isbase = false;
    mutable bool qprintdialog_create_isbase = false;
    mutable bool qprintdialog_destroy_isbase = false;
    mutable bool qprintdialog_focusnextchild_isbase = false;
    mutable bool qprintdialog_focuspreviouschild_isbase = false;
    mutable bool qprintdialog_sender_isbase = false;
    mutable bool qprintdialog_sendersignalindex_isbase = false;
    mutable bool qprintdialog_receivers_isbase = false;
    mutable bool qprintdialog_issignalconnected_isbase = false;

  public:
    VirtualQPrintDialog(QWidget* parent) : QPrintDialog(parent){};
    VirtualQPrintDialog(QPrinter* printer) : QPrintDialog(printer){};
    VirtualQPrintDialog() : QPrintDialog(){};
    VirtualQPrintDialog(QPrinter* printer, QWidget* parent) : QPrintDialog(printer, parent){};

    ~VirtualQPrintDialog() {
        qprintdialog_metacall_callback = nullptr;
        qprintdialog_exec_callback = nullptr;
        qprintdialog_accept_callback = nullptr;
        qprintdialog_done_callback = nullptr;
        qprintdialog_setvisible_callback = nullptr;
        qprintdialog_sizehint_callback = nullptr;
        qprintdialog_minimumsizehint_callback = nullptr;
        qprintdialog_open_callback = nullptr;
        qprintdialog_reject_callback = nullptr;
        qprintdialog_keypressevent_callback = nullptr;
        qprintdialog_closeevent_callback = nullptr;
        qprintdialog_showevent_callback = nullptr;
        qprintdialog_resizeevent_callback = nullptr;
        qprintdialog_contextmenuevent_callback = nullptr;
        qprintdialog_eventfilter_callback = nullptr;
        qprintdialog_devtype_callback = nullptr;
        qprintdialog_heightforwidth_callback = nullptr;
        qprintdialog_hasheightforwidth_callback = nullptr;
        qprintdialog_paintengine_callback = nullptr;
        qprintdialog_event_callback = nullptr;
        qprintdialog_mousepressevent_callback = nullptr;
        qprintdialog_mousereleaseevent_callback = nullptr;
        qprintdialog_mousedoubleclickevent_callback = nullptr;
        qprintdialog_mousemoveevent_callback = nullptr;
        qprintdialog_wheelevent_callback = nullptr;
        qprintdialog_keyreleaseevent_callback = nullptr;
        qprintdialog_focusinevent_callback = nullptr;
        qprintdialog_focusoutevent_callback = nullptr;
        qprintdialog_enterevent_callback = nullptr;
        qprintdialog_leaveevent_callback = nullptr;
        qprintdialog_paintevent_callback = nullptr;
        qprintdialog_moveevent_callback = nullptr;
        qprintdialog_tabletevent_callback = nullptr;
        qprintdialog_actionevent_callback = nullptr;
        qprintdialog_dragenterevent_callback = nullptr;
        qprintdialog_dragmoveevent_callback = nullptr;
        qprintdialog_dragleaveevent_callback = nullptr;
        qprintdialog_dropevent_callback = nullptr;
        qprintdialog_hideevent_callback = nullptr;
        qprintdialog_nativeevent_callback = nullptr;
        qprintdialog_changeevent_callback = nullptr;
        qprintdialog_metric_callback = nullptr;
        qprintdialog_initpainter_callback = nullptr;
        qprintdialog_redirected_callback = nullptr;
        qprintdialog_sharedpainter_callback = nullptr;
        qprintdialog_inputmethodevent_callback = nullptr;
        qprintdialog_inputmethodquery_callback = nullptr;
        qprintdialog_focusnextprevchild_callback = nullptr;
        qprintdialog_timerevent_callback = nullptr;
        qprintdialog_childevent_callback = nullptr;
        qprintdialog_customevent_callback = nullptr;
        qprintdialog_connectnotify_callback = nullptr;
        qprintdialog_disconnectnotify_callback = nullptr;
        qprintdialog_adjustposition_callback = nullptr;
        qprintdialog_updatemicrofocus_callback = nullptr;
        qprintdialog_create_callback = nullptr;
        qprintdialog_destroy_callback = nullptr;
        qprintdialog_focusnextchild_callback = nullptr;
        qprintdialog_focuspreviouschild_callback = nullptr;
        qprintdialog_sender_callback = nullptr;
        qprintdialog_sendersignalindex_callback = nullptr;
        qprintdialog_receivers_callback = nullptr;
        qprintdialog_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQPrintDialog_Metacall_Callback(QPrintDialog_Metacall_Callback cb) { qprintdialog_metacall_callback = cb; }
    void setQPrintDialog_Exec_Callback(QPrintDialog_Exec_Callback cb) { qprintdialog_exec_callback = cb; }
    void setQPrintDialog_Accept_Callback(QPrintDialog_Accept_Callback cb) { qprintdialog_accept_callback = cb; }
    void setQPrintDialog_Done_Callback(QPrintDialog_Done_Callback cb) { qprintdialog_done_callback = cb; }
    void setQPrintDialog_SetVisible_Callback(QPrintDialog_SetVisible_Callback cb) { qprintdialog_setvisible_callback = cb; }
    void setQPrintDialog_SizeHint_Callback(QPrintDialog_SizeHint_Callback cb) { qprintdialog_sizehint_callback = cb; }
    void setQPrintDialog_MinimumSizeHint_Callback(QPrintDialog_MinimumSizeHint_Callback cb) { qprintdialog_minimumsizehint_callback = cb; }
    void setQPrintDialog_Open_Callback(QPrintDialog_Open_Callback cb) { qprintdialog_open_callback = cb; }
    void setQPrintDialog_Reject_Callback(QPrintDialog_Reject_Callback cb) { qprintdialog_reject_callback = cb; }
    void setQPrintDialog_KeyPressEvent_Callback(QPrintDialog_KeyPressEvent_Callback cb) { qprintdialog_keypressevent_callback = cb; }
    void setQPrintDialog_CloseEvent_Callback(QPrintDialog_CloseEvent_Callback cb) { qprintdialog_closeevent_callback = cb; }
    void setQPrintDialog_ShowEvent_Callback(QPrintDialog_ShowEvent_Callback cb) { qprintdialog_showevent_callback = cb; }
    void setQPrintDialog_ResizeEvent_Callback(QPrintDialog_ResizeEvent_Callback cb) { qprintdialog_resizeevent_callback = cb; }
    void setQPrintDialog_ContextMenuEvent_Callback(QPrintDialog_ContextMenuEvent_Callback cb) { qprintdialog_contextmenuevent_callback = cb; }
    void setQPrintDialog_EventFilter_Callback(QPrintDialog_EventFilter_Callback cb) { qprintdialog_eventfilter_callback = cb; }
    void setQPrintDialog_DevType_Callback(QPrintDialog_DevType_Callback cb) { qprintdialog_devtype_callback = cb; }
    void setQPrintDialog_HeightForWidth_Callback(QPrintDialog_HeightForWidth_Callback cb) { qprintdialog_heightforwidth_callback = cb; }
    void setQPrintDialog_HasHeightForWidth_Callback(QPrintDialog_HasHeightForWidth_Callback cb) { qprintdialog_hasheightforwidth_callback = cb; }
    void setQPrintDialog_PaintEngine_Callback(QPrintDialog_PaintEngine_Callback cb) { qprintdialog_paintengine_callback = cb; }
    void setQPrintDialog_Event_Callback(QPrintDialog_Event_Callback cb) { qprintdialog_event_callback = cb; }
    void setQPrintDialog_MousePressEvent_Callback(QPrintDialog_MousePressEvent_Callback cb) { qprintdialog_mousepressevent_callback = cb; }
    void setQPrintDialog_MouseReleaseEvent_Callback(QPrintDialog_MouseReleaseEvent_Callback cb) { qprintdialog_mousereleaseevent_callback = cb; }
    void setQPrintDialog_MouseDoubleClickEvent_Callback(QPrintDialog_MouseDoubleClickEvent_Callback cb) { qprintdialog_mousedoubleclickevent_callback = cb; }
    void setQPrintDialog_MouseMoveEvent_Callback(QPrintDialog_MouseMoveEvent_Callback cb) { qprintdialog_mousemoveevent_callback = cb; }
    void setQPrintDialog_WheelEvent_Callback(QPrintDialog_WheelEvent_Callback cb) { qprintdialog_wheelevent_callback = cb; }
    void setQPrintDialog_KeyReleaseEvent_Callback(QPrintDialog_KeyReleaseEvent_Callback cb) { qprintdialog_keyreleaseevent_callback = cb; }
    void setQPrintDialog_FocusInEvent_Callback(QPrintDialog_FocusInEvent_Callback cb) { qprintdialog_focusinevent_callback = cb; }
    void setQPrintDialog_FocusOutEvent_Callback(QPrintDialog_FocusOutEvent_Callback cb) { qprintdialog_focusoutevent_callback = cb; }
    void setQPrintDialog_EnterEvent_Callback(QPrintDialog_EnterEvent_Callback cb) { qprintdialog_enterevent_callback = cb; }
    void setQPrintDialog_LeaveEvent_Callback(QPrintDialog_LeaveEvent_Callback cb) { qprintdialog_leaveevent_callback = cb; }
    void setQPrintDialog_PaintEvent_Callback(QPrintDialog_PaintEvent_Callback cb) { qprintdialog_paintevent_callback = cb; }
    void setQPrintDialog_MoveEvent_Callback(QPrintDialog_MoveEvent_Callback cb) { qprintdialog_moveevent_callback = cb; }
    void setQPrintDialog_TabletEvent_Callback(QPrintDialog_TabletEvent_Callback cb) { qprintdialog_tabletevent_callback = cb; }
    void setQPrintDialog_ActionEvent_Callback(QPrintDialog_ActionEvent_Callback cb) { qprintdialog_actionevent_callback = cb; }
    void setQPrintDialog_DragEnterEvent_Callback(QPrintDialog_DragEnterEvent_Callback cb) { qprintdialog_dragenterevent_callback = cb; }
    void setQPrintDialog_DragMoveEvent_Callback(QPrintDialog_DragMoveEvent_Callback cb) { qprintdialog_dragmoveevent_callback = cb; }
    void setQPrintDialog_DragLeaveEvent_Callback(QPrintDialog_DragLeaveEvent_Callback cb) { qprintdialog_dragleaveevent_callback = cb; }
    void setQPrintDialog_DropEvent_Callback(QPrintDialog_DropEvent_Callback cb) { qprintdialog_dropevent_callback = cb; }
    void setQPrintDialog_HideEvent_Callback(QPrintDialog_HideEvent_Callback cb) { qprintdialog_hideevent_callback = cb; }
    void setQPrintDialog_NativeEvent_Callback(QPrintDialog_NativeEvent_Callback cb) { qprintdialog_nativeevent_callback = cb; }
    void setQPrintDialog_ChangeEvent_Callback(QPrintDialog_ChangeEvent_Callback cb) { qprintdialog_changeevent_callback = cb; }
    void setQPrintDialog_Metric_Callback(QPrintDialog_Metric_Callback cb) { qprintdialog_metric_callback = cb; }
    void setQPrintDialog_InitPainter_Callback(QPrintDialog_InitPainter_Callback cb) { qprintdialog_initpainter_callback = cb; }
    void setQPrintDialog_Redirected_Callback(QPrintDialog_Redirected_Callback cb) { qprintdialog_redirected_callback = cb; }
    void setQPrintDialog_SharedPainter_Callback(QPrintDialog_SharedPainter_Callback cb) { qprintdialog_sharedpainter_callback = cb; }
    void setQPrintDialog_InputMethodEvent_Callback(QPrintDialog_InputMethodEvent_Callback cb) { qprintdialog_inputmethodevent_callback = cb; }
    void setQPrintDialog_InputMethodQuery_Callback(QPrintDialog_InputMethodQuery_Callback cb) { qprintdialog_inputmethodquery_callback = cb; }
    void setQPrintDialog_FocusNextPrevChild_Callback(QPrintDialog_FocusNextPrevChild_Callback cb) { qprintdialog_focusnextprevchild_callback = cb; }
    void setQPrintDialog_TimerEvent_Callback(QPrintDialog_TimerEvent_Callback cb) { qprintdialog_timerevent_callback = cb; }
    void setQPrintDialog_ChildEvent_Callback(QPrintDialog_ChildEvent_Callback cb) { qprintdialog_childevent_callback = cb; }
    void setQPrintDialog_CustomEvent_Callback(QPrintDialog_CustomEvent_Callback cb) { qprintdialog_customevent_callback = cb; }
    void setQPrintDialog_ConnectNotify_Callback(QPrintDialog_ConnectNotify_Callback cb) { qprintdialog_connectnotify_callback = cb; }
    void setQPrintDialog_DisconnectNotify_Callback(QPrintDialog_DisconnectNotify_Callback cb) { qprintdialog_disconnectnotify_callback = cb; }
    void setQPrintDialog_AdjustPosition_Callback(QPrintDialog_AdjustPosition_Callback cb) { qprintdialog_adjustposition_callback = cb; }
    void setQPrintDialog_UpdateMicroFocus_Callback(QPrintDialog_UpdateMicroFocus_Callback cb) { qprintdialog_updatemicrofocus_callback = cb; }
    void setQPrintDialog_Create_Callback(QPrintDialog_Create_Callback cb) { qprintdialog_create_callback = cb; }
    void setQPrintDialog_Destroy_Callback(QPrintDialog_Destroy_Callback cb) { qprintdialog_destroy_callback = cb; }
    void setQPrintDialog_FocusNextChild_Callback(QPrintDialog_FocusNextChild_Callback cb) { qprintdialog_focusnextchild_callback = cb; }
    void setQPrintDialog_FocusPreviousChild_Callback(QPrintDialog_FocusPreviousChild_Callback cb) { qprintdialog_focuspreviouschild_callback = cb; }
    void setQPrintDialog_Sender_Callback(QPrintDialog_Sender_Callback cb) { qprintdialog_sender_callback = cb; }
    void setQPrintDialog_SenderSignalIndex_Callback(QPrintDialog_SenderSignalIndex_Callback cb) { qprintdialog_sendersignalindex_callback = cb; }
    void setQPrintDialog_Receivers_Callback(QPrintDialog_Receivers_Callback cb) { qprintdialog_receivers_callback = cb; }
    void setQPrintDialog_IsSignalConnected_Callback(QPrintDialog_IsSignalConnected_Callback cb) { qprintdialog_issignalconnected_callback = cb; }

    // Base flag setters
    void setQPrintDialog_Metacall_IsBase(bool value) const { qprintdialog_metacall_isbase = value; }
    void setQPrintDialog_Exec_IsBase(bool value) const { qprintdialog_exec_isbase = value; }
    void setQPrintDialog_Accept_IsBase(bool value) const { qprintdialog_accept_isbase = value; }
    void setQPrintDialog_Done_IsBase(bool value) const { qprintdialog_done_isbase = value; }
    void setQPrintDialog_SetVisible_IsBase(bool value) const { qprintdialog_setvisible_isbase = value; }
    void setQPrintDialog_SizeHint_IsBase(bool value) const { qprintdialog_sizehint_isbase = value; }
    void setQPrintDialog_MinimumSizeHint_IsBase(bool value) const { qprintdialog_minimumsizehint_isbase = value; }
    void setQPrintDialog_Open_IsBase(bool value) const { qprintdialog_open_isbase = value; }
    void setQPrintDialog_Reject_IsBase(bool value) const { qprintdialog_reject_isbase = value; }
    void setQPrintDialog_KeyPressEvent_IsBase(bool value) const { qprintdialog_keypressevent_isbase = value; }
    void setQPrintDialog_CloseEvent_IsBase(bool value) const { qprintdialog_closeevent_isbase = value; }
    void setQPrintDialog_ShowEvent_IsBase(bool value) const { qprintdialog_showevent_isbase = value; }
    void setQPrintDialog_ResizeEvent_IsBase(bool value) const { qprintdialog_resizeevent_isbase = value; }
    void setQPrintDialog_ContextMenuEvent_IsBase(bool value) const { qprintdialog_contextmenuevent_isbase = value; }
    void setQPrintDialog_EventFilter_IsBase(bool value) const { qprintdialog_eventfilter_isbase = value; }
    void setQPrintDialog_DevType_IsBase(bool value) const { qprintdialog_devtype_isbase = value; }
    void setQPrintDialog_HeightForWidth_IsBase(bool value) const { qprintdialog_heightforwidth_isbase = value; }
    void setQPrintDialog_HasHeightForWidth_IsBase(bool value) const { qprintdialog_hasheightforwidth_isbase = value; }
    void setQPrintDialog_PaintEngine_IsBase(bool value) const { qprintdialog_paintengine_isbase = value; }
    void setQPrintDialog_Event_IsBase(bool value) const { qprintdialog_event_isbase = value; }
    void setQPrintDialog_MousePressEvent_IsBase(bool value) const { qprintdialog_mousepressevent_isbase = value; }
    void setQPrintDialog_MouseReleaseEvent_IsBase(bool value) const { qprintdialog_mousereleaseevent_isbase = value; }
    void setQPrintDialog_MouseDoubleClickEvent_IsBase(bool value) const { qprintdialog_mousedoubleclickevent_isbase = value; }
    void setQPrintDialog_MouseMoveEvent_IsBase(bool value) const { qprintdialog_mousemoveevent_isbase = value; }
    void setQPrintDialog_WheelEvent_IsBase(bool value) const { qprintdialog_wheelevent_isbase = value; }
    void setQPrintDialog_KeyReleaseEvent_IsBase(bool value) const { qprintdialog_keyreleaseevent_isbase = value; }
    void setQPrintDialog_FocusInEvent_IsBase(bool value) const { qprintdialog_focusinevent_isbase = value; }
    void setQPrintDialog_FocusOutEvent_IsBase(bool value) const { qprintdialog_focusoutevent_isbase = value; }
    void setQPrintDialog_EnterEvent_IsBase(bool value) const { qprintdialog_enterevent_isbase = value; }
    void setQPrintDialog_LeaveEvent_IsBase(bool value) const { qprintdialog_leaveevent_isbase = value; }
    void setQPrintDialog_PaintEvent_IsBase(bool value) const { qprintdialog_paintevent_isbase = value; }
    void setQPrintDialog_MoveEvent_IsBase(bool value) const { qprintdialog_moveevent_isbase = value; }
    void setQPrintDialog_TabletEvent_IsBase(bool value) const { qprintdialog_tabletevent_isbase = value; }
    void setQPrintDialog_ActionEvent_IsBase(bool value) const { qprintdialog_actionevent_isbase = value; }
    void setQPrintDialog_DragEnterEvent_IsBase(bool value) const { qprintdialog_dragenterevent_isbase = value; }
    void setQPrintDialog_DragMoveEvent_IsBase(bool value) const { qprintdialog_dragmoveevent_isbase = value; }
    void setQPrintDialog_DragLeaveEvent_IsBase(bool value) const { qprintdialog_dragleaveevent_isbase = value; }
    void setQPrintDialog_DropEvent_IsBase(bool value) const { qprintdialog_dropevent_isbase = value; }
    void setQPrintDialog_HideEvent_IsBase(bool value) const { qprintdialog_hideevent_isbase = value; }
    void setQPrintDialog_NativeEvent_IsBase(bool value) const { qprintdialog_nativeevent_isbase = value; }
    void setQPrintDialog_ChangeEvent_IsBase(bool value) const { qprintdialog_changeevent_isbase = value; }
    void setQPrintDialog_Metric_IsBase(bool value) const { qprintdialog_metric_isbase = value; }
    void setQPrintDialog_InitPainter_IsBase(bool value) const { qprintdialog_initpainter_isbase = value; }
    void setQPrintDialog_Redirected_IsBase(bool value) const { qprintdialog_redirected_isbase = value; }
    void setQPrintDialog_SharedPainter_IsBase(bool value) const { qprintdialog_sharedpainter_isbase = value; }
    void setQPrintDialog_InputMethodEvent_IsBase(bool value) const { qprintdialog_inputmethodevent_isbase = value; }
    void setQPrintDialog_InputMethodQuery_IsBase(bool value) const { qprintdialog_inputmethodquery_isbase = value; }
    void setQPrintDialog_FocusNextPrevChild_IsBase(bool value) const { qprintdialog_focusnextprevchild_isbase = value; }
    void setQPrintDialog_TimerEvent_IsBase(bool value) const { qprintdialog_timerevent_isbase = value; }
    void setQPrintDialog_ChildEvent_IsBase(bool value) const { qprintdialog_childevent_isbase = value; }
    void setQPrintDialog_CustomEvent_IsBase(bool value) const { qprintdialog_customevent_isbase = value; }
    void setQPrintDialog_ConnectNotify_IsBase(bool value) const { qprintdialog_connectnotify_isbase = value; }
    void setQPrintDialog_DisconnectNotify_IsBase(bool value) const { qprintdialog_disconnectnotify_isbase = value; }
    void setQPrintDialog_AdjustPosition_IsBase(bool value) const { qprintdialog_adjustposition_isbase = value; }
    void setQPrintDialog_UpdateMicroFocus_IsBase(bool value) const { qprintdialog_updatemicrofocus_isbase = value; }
    void setQPrintDialog_Create_IsBase(bool value) const { qprintdialog_create_isbase = value; }
    void setQPrintDialog_Destroy_IsBase(bool value) const { qprintdialog_destroy_isbase = value; }
    void setQPrintDialog_FocusNextChild_IsBase(bool value) const { qprintdialog_focusnextchild_isbase = value; }
    void setQPrintDialog_FocusPreviousChild_IsBase(bool value) const { qprintdialog_focuspreviouschild_isbase = value; }
    void setQPrintDialog_Sender_IsBase(bool value) const { qprintdialog_sender_isbase = value; }
    void setQPrintDialog_SenderSignalIndex_IsBase(bool value) const { qprintdialog_sendersignalindex_isbase = value; }
    void setQPrintDialog_Receivers_IsBase(bool value) const { qprintdialog_receivers_isbase = value; }
    void setQPrintDialog_IsSignalConnected_IsBase(bool value) const { qprintdialog_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qprintdialog_metacall_isbase) {
            qprintdialog_metacall_isbase = false;
            return QPrintDialog::qt_metacall(param1, param2, param3);
        } else if (qprintdialog_metacall_callback != nullptr) {
            return qprintdialog_metacall_callback(this, param1, param2, param3);
        } else {
            return QPrintDialog::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (qprintdialog_exec_isbase) {
            qprintdialog_exec_isbase = false;
            return QPrintDialog::exec();
        } else if (qprintdialog_exec_callback != nullptr) {
            return qprintdialog_exec_callback();
        } else {
            return QPrintDialog::exec();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (qprintdialog_accept_isbase) {
            qprintdialog_accept_isbase = false;
            QPrintDialog::accept();
        } else if (qprintdialog_accept_callback != nullptr) {
            qprintdialog_accept_callback();
        } else {
            QPrintDialog::accept();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int result) override {
        if (qprintdialog_done_isbase) {
            qprintdialog_done_isbase = false;
            QPrintDialog::done(result);
        } else if (qprintdialog_done_callback != nullptr) {
            qprintdialog_done_callback(this, result);
        } else {
            QPrintDialog::done(result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qprintdialog_setvisible_isbase) {
            qprintdialog_setvisible_isbase = false;
            QPrintDialog::setVisible(visible);
        } else if (qprintdialog_setvisible_callback != nullptr) {
            qprintdialog_setvisible_callback(this, visible);
        } else {
            QPrintDialog::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qprintdialog_sizehint_isbase) {
            qprintdialog_sizehint_isbase = false;
            return QPrintDialog::sizeHint();
        } else if (qprintdialog_sizehint_callback != nullptr) {
            return qprintdialog_sizehint_callback();
        } else {
            return QPrintDialog::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qprintdialog_minimumsizehint_isbase) {
            qprintdialog_minimumsizehint_isbase = false;
            return QPrintDialog::minimumSizeHint();
        } else if (qprintdialog_minimumsizehint_callback != nullptr) {
            return qprintdialog_minimumsizehint_callback();
        } else {
            return QPrintDialog::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (qprintdialog_open_isbase) {
            qprintdialog_open_isbase = false;
            QPrintDialog::open();
        } else if (qprintdialog_open_callback != nullptr) {
            qprintdialog_open_callback();
        } else {
            QPrintDialog::open();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (qprintdialog_reject_isbase) {
            qprintdialog_reject_isbase = false;
            QPrintDialog::reject();
        } else if (qprintdialog_reject_callback != nullptr) {
            qprintdialog_reject_callback();
        } else {
            QPrintDialog::reject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qprintdialog_keypressevent_isbase) {
            qprintdialog_keypressevent_isbase = false;
            QPrintDialog::keyPressEvent(param1);
        } else if (qprintdialog_keypressevent_callback != nullptr) {
            qprintdialog_keypressevent_callback(this, param1);
        } else {
            QPrintDialog::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (qprintdialog_closeevent_isbase) {
            qprintdialog_closeevent_isbase = false;
            QPrintDialog::closeEvent(param1);
        } else if (qprintdialog_closeevent_callback != nullptr) {
            qprintdialog_closeevent_callback(this, param1);
        } else {
            QPrintDialog::closeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qprintdialog_showevent_isbase) {
            qprintdialog_showevent_isbase = false;
            QPrintDialog::showEvent(param1);
        } else if (qprintdialog_showevent_callback != nullptr) {
            qprintdialog_showevent_callback(this, param1);
        } else {
            QPrintDialog::showEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qprintdialog_resizeevent_isbase) {
            qprintdialog_resizeevent_isbase = false;
            QPrintDialog::resizeEvent(param1);
        } else if (qprintdialog_resizeevent_callback != nullptr) {
            qprintdialog_resizeevent_callback(this, param1);
        } else {
            QPrintDialog::resizeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qprintdialog_contextmenuevent_isbase) {
            qprintdialog_contextmenuevent_isbase = false;
            QPrintDialog::contextMenuEvent(param1);
        } else if (qprintdialog_contextmenuevent_callback != nullptr) {
            qprintdialog_contextmenuevent_callback(this, param1);
        } else {
            QPrintDialog::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qprintdialog_eventfilter_isbase) {
            qprintdialog_eventfilter_isbase = false;
            return QPrintDialog::eventFilter(param1, param2);
        } else if (qprintdialog_eventfilter_callback != nullptr) {
            return qprintdialog_eventfilter_callback(this, param1, param2);
        } else {
            return QPrintDialog::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qprintdialog_devtype_isbase) {
            qprintdialog_devtype_isbase = false;
            return QPrintDialog::devType();
        } else if (qprintdialog_devtype_callback != nullptr) {
            return qprintdialog_devtype_callback();
        } else {
            return QPrintDialog::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qprintdialog_heightforwidth_isbase) {
            qprintdialog_heightforwidth_isbase = false;
            return QPrintDialog::heightForWidth(param1);
        } else if (qprintdialog_heightforwidth_callback != nullptr) {
            return qprintdialog_heightforwidth_callback(this, param1);
        } else {
            return QPrintDialog::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qprintdialog_hasheightforwidth_isbase) {
            qprintdialog_hasheightforwidth_isbase = false;
            return QPrintDialog::hasHeightForWidth();
        } else if (qprintdialog_hasheightforwidth_callback != nullptr) {
            return qprintdialog_hasheightforwidth_callback();
        } else {
            return QPrintDialog::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qprintdialog_paintengine_isbase) {
            qprintdialog_paintengine_isbase = false;
            return QPrintDialog::paintEngine();
        } else if (qprintdialog_paintengine_callback != nullptr) {
            return qprintdialog_paintengine_callback();
        } else {
            return QPrintDialog::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qprintdialog_event_isbase) {
            qprintdialog_event_isbase = false;
            return QPrintDialog::event(event);
        } else if (qprintdialog_event_callback != nullptr) {
            return qprintdialog_event_callback(this, event);
        } else {
            return QPrintDialog::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qprintdialog_mousepressevent_isbase) {
            qprintdialog_mousepressevent_isbase = false;
            QPrintDialog::mousePressEvent(event);
        } else if (qprintdialog_mousepressevent_callback != nullptr) {
            qprintdialog_mousepressevent_callback(this, event);
        } else {
            QPrintDialog::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qprintdialog_mousereleaseevent_isbase) {
            qprintdialog_mousereleaseevent_isbase = false;
            QPrintDialog::mouseReleaseEvent(event);
        } else if (qprintdialog_mousereleaseevent_callback != nullptr) {
            qprintdialog_mousereleaseevent_callback(this, event);
        } else {
            QPrintDialog::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qprintdialog_mousedoubleclickevent_isbase) {
            qprintdialog_mousedoubleclickevent_isbase = false;
            QPrintDialog::mouseDoubleClickEvent(event);
        } else if (qprintdialog_mousedoubleclickevent_callback != nullptr) {
            qprintdialog_mousedoubleclickevent_callback(this, event);
        } else {
            QPrintDialog::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qprintdialog_mousemoveevent_isbase) {
            qprintdialog_mousemoveevent_isbase = false;
            QPrintDialog::mouseMoveEvent(event);
        } else if (qprintdialog_mousemoveevent_callback != nullptr) {
            qprintdialog_mousemoveevent_callback(this, event);
        } else {
            QPrintDialog::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qprintdialog_wheelevent_isbase) {
            qprintdialog_wheelevent_isbase = false;
            QPrintDialog::wheelEvent(event);
        } else if (qprintdialog_wheelevent_callback != nullptr) {
            qprintdialog_wheelevent_callback(this, event);
        } else {
            QPrintDialog::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qprintdialog_keyreleaseevent_isbase) {
            qprintdialog_keyreleaseevent_isbase = false;
            QPrintDialog::keyReleaseEvent(event);
        } else if (qprintdialog_keyreleaseevent_callback != nullptr) {
            qprintdialog_keyreleaseevent_callback(this, event);
        } else {
            QPrintDialog::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qprintdialog_focusinevent_isbase) {
            qprintdialog_focusinevent_isbase = false;
            QPrintDialog::focusInEvent(event);
        } else if (qprintdialog_focusinevent_callback != nullptr) {
            qprintdialog_focusinevent_callback(this, event);
        } else {
            QPrintDialog::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qprintdialog_focusoutevent_isbase) {
            qprintdialog_focusoutevent_isbase = false;
            QPrintDialog::focusOutEvent(event);
        } else if (qprintdialog_focusoutevent_callback != nullptr) {
            qprintdialog_focusoutevent_callback(this, event);
        } else {
            QPrintDialog::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qprintdialog_enterevent_isbase) {
            qprintdialog_enterevent_isbase = false;
            QPrintDialog::enterEvent(event);
        } else if (qprintdialog_enterevent_callback != nullptr) {
            qprintdialog_enterevent_callback(this, event);
        } else {
            QPrintDialog::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qprintdialog_leaveevent_isbase) {
            qprintdialog_leaveevent_isbase = false;
            QPrintDialog::leaveEvent(event);
        } else if (qprintdialog_leaveevent_callback != nullptr) {
            qprintdialog_leaveevent_callback(this, event);
        } else {
            QPrintDialog::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qprintdialog_paintevent_isbase) {
            qprintdialog_paintevent_isbase = false;
            QPrintDialog::paintEvent(event);
        } else if (qprintdialog_paintevent_callback != nullptr) {
            qprintdialog_paintevent_callback(this, event);
        } else {
            QPrintDialog::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qprintdialog_moveevent_isbase) {
            qprintdialog_moveevent_isbase = false;
            QPrintDialog::moveEvent(event);
        } else if (qprintdialog_moveevent_callback != nullptr) {
            qprintdialog_moveevent_callback(this, event);
        } else {
            QPrintDialog::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qprintdialog_tabletevent_isbase) {
            qprintdialog_tabletevent_isbase = false;
            QPrintDialog::tabletEvent(event);
        } else if (qprintdialog_tabletevent_callback != nullptr) {
            qprintdialog_tabletevent_callback(this, event);
        } else {
            QPrintDialog::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qprintdialog_actionevent_isbase) {
            qprintdialog_actionevent_isbase = false;
            QPrintDialog::actionEvent(event);
        } else if (qprintdialog_actionevent_callback != nullptr) {
            qprintdialog_actionevent_callback(this, event);
        } else {
            QPrintDialog::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qprintdialog_dragenterevent_isbase) {
            qprintdialog_dragenterevent_isbase = false;
            QPrintDialog::dragEnterEvent(event);
        } else if (qprintdialog_dragenterevent_callback != nullptr) {
            qprintdialog_dragenterevent_callback(this, event);
        } else {
            QPrintDialog::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qprintdialog_dragmoveevent_isbase) {
            qprintdialog_dragmoveevent_isbase = false;
            QPrintDialog::dragMoveEvent(event);
        } else if (qprintdialog_dragmoveevent_callback != nullptr) {
            qprintdialog_dragmoveevent_callback(this, event);
        } else {
            QPrintDialog::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qprintdialog_dragleaveevent_isbase) {
            qprintdialog_dragleaveevent_isbase = false;
            QPrintDialog::dragLeaveEvent(event);
        } else if (qprintdialog_dragleaveevent_callback != nullptr) {
            qprintdialog_dragleaveevent_callback(this, event);
        } else {
            QPrintDialog::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qprintdialog_dropevent_isbase) {
            qprintdialog_dropevent_isbase = false;
            QPrintDialog::dropEvent(event);
        } else if (qprintdialog_dropevent_callback != nullptr) {
            qprintdialog_dropevent_callback(this, event);
        } else {
            QPrintDialog::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qprintdialog_hideevent_isbase) {
            qprintdialog_hideevent_isbase = false;
            QPrintDialog::hideEvent(event);
        } else if (qprintdialog_hideevent_callback != nullptr) {
            qprintdialog_hideevent_callback(this, event);
        } else {
            QPrintDialog::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qprintdialog_nativeevent_isbase) {
            qprintdialog_nativeevent_isbase = false;
            return QPrintDialog::nativeEvent(eventType, message, result);
        } else if (qprintdialog_nativeevent_callback != nullptr) {
            return qprintdialog_nativeevent_callback(this, eventType, message, result);
        } else {
            return QPrintDialog::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qprintdialog_changeevent_isbase) {
            qprintdialog_changeevent_isbase = false;
            QPrintDialog::changeEvent(param1);
        } else if (qprintdialog_changeevent_callback != nullptr) {
            qprintdialog_changeevent_callback(this, param1);
        } else {
            QPrintDialog::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qprintdialog_metric_isbase) {
            qprintdialog_metric_isbase = false;
            return QPrintDialog::metric(param1);
        } else if (qprintdialog_metric_callback != nullptr) {
            return qprintdialog_metric_callback(this, param1);
        } else {
            return QPrintDialog::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qprintdialog_initpainter_isbase) {
            qprintdialog_initpainter_isbase = false;
            QPrintDialog::initPainter(painter);
        } else if (qprintdialog_initpainter_callback != nullptr) {
            qprintdialog_initpainter_callback(this, painter);
        } else {
            QPrintDialog::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qprintdialog_redirected_isbase) {
            qprintdialog_redirected_isbase = false;
            return QPrintDialog::redirected(offset);
        } else if (qprintdialog_redirected_callback != nullptr) {
            return qprintdialog_redirected_callback(this, offset);
        } else {
            return QPrintDialog::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qprintdialog_sharedpainter_isbase) {
            qprintdialog_sharedpainter_isbase = false;
            return QPrintDialog::sharedPainter();
        } else if (qprintdialog_sharedpainter_callback != nullptr) {
            return qprintdialog_sharedpainter_callback();
        } else {
            return QPrintDialog::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qprintdialog_inputmethodevent_isbase) {
            qprintdialog_inputmethodevent_isbase = false;
            QPrintDialog::inputMethodEvent(param1);
        } else if (qprintdialog_inputmethodevent_callback != nullptr) {
            qprintdialog_inputmethodevent_callback(this, param1);
        } else {
            QPrintDialog::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qprintdialog_inputmethodquery_isbase) {
            qprintdialog_inputmethodquery_isbase = false;
            return QPrintDialog::inputMethodQuery(param1);
        } else if (qprintdialog_inputmethodquery_callback != nullptr) {
            return qprintdialog_inputmethodquery_callback(this, param1);
        } else {
            return QPrintDialog::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qprintdialog_focusnextprevchild_isbase) {
            qprintdialog_focusnextprevchild_isbase = false;
            return QPrintDialog::focusNextPrevChild(next);
        } else if (qprintdialog_focusnextprevchild_callback != nullptr) {
            return qprintdialog_focusnextprevchild_callback(this, next);
        } else {
            return QPrintDialog::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qprintdialog_timerevent_isbase) {
            qprintdialog_timerevent_isbase = false;
            QPrintDialog::timerEvent(event);
        } else if (qprintdialog_timerevent_callback != nullptr) {
            qprintdialog_timerevent_callback(this, event);
        } else {
            QPrintDialog::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qprintdialog_childevent_isbase) {
            qprintdialog_childevent_isbase = false;
            QPrintDialog::childEvent(event);
        } else if (qprintdialog_childevent_callback != nullptr) {
            qprintdialog_childevent_callback(this, event);
        } else {
            QPrintDialog::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qprintdialog_customevent_isbase) {
            qprintdialog_customevent_isbase = false;
            QPrintDialog::customEvent(event);
        } else if (qprintdialog_customevent_callback != nullptr) {
            qprintdialog_customevent_callback(this, event);
        } else {
            QPrintDialog::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qprintdialog_connectnotify_isbase) {
            qprintdialog_connectnotify_isbase = false;
            QPrintDialog::connectNotify(signal);
        } else if (qprintdialog_connectnotify_callback != nullptr) {
            qprintdialog_connectnotify_callback(this, signal);
        } else {
            QPrintDialog::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qprintdialog_disconnectnotify_isbase) {
            qprintdialog_disconnectnotify_isbase = false;
            QPrintDialog::disconnectNotify(signal);
        } else if (qprintdialog_disconnectnotify_callback != nullptr) {
            qprintdialog_disconnectnotify_callback(this, signal);
        } else {
            QPrintDialog::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (qprintdialog_adjustposition_isbase) {
            qprintdialog_adjustposition_isbase = false;
            QPrintDialog::adjustPosition(param1);
        } else if (qprintdialog_adjustposition_callback != nullptr) {
            qprintdialog_adjustposition_callback(this, param1);
        } else {
            QPrintDialog::adjustPosition(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qprintdialog_updatemicrofocus_isbase) {
            qprintdialog_updatemicrofocus_isbase = false;
            QPrintDialog::updateMicroFocus();
        } else if (qprintdialog_updatemicrofocus_callback != nullptr) {
            qprintdialog_updatemicrofocus_callback();
        } else {
            QPrintDialog::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qprintdialog_create_isbase) {
            qprintdialog_create_isbase = false;
            QPrintDialog::create();
        } else if (qprintdialog_create_callback != nullptr) {
            qprintdialog_create_callback();
        } else {
            QPrintDialog::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qprintdialog_destroy_isbase) {
            qprintdialog_destroy_isbase = false;
            QPrintDialog::destroy();
        } else if (qprintdialog_destroy_callback != nullptr) {
            qprintdialog_destroy_callback();
        } else {
            QPrintDialog::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qprintdialog_focusnextchild_isbase) {
            qprintdialog_focusnextchild_isbase = false;
            return QPrintDialog::focusNextChild();
        } else if (qprintdialog_focusnextchild_callback != nullptr) {
            return qprintdialog_focusnextchild_callback();
        } else {
            return QPrintDialog::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qprintdialog_focuspreviouschild_isbase) {
            qprintdialog_focuspreviouschild_isbase = false;
            return QPrintDialog::focusPreviousChild();
        } else if (qprintdialog_focuspreviouschild_callback != nullptr) {
            return qprintdialog_focuspreviouschild_callback();
        } else {
            return QPrintDialog::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qprintdialog_sender_isbase) {
            qprintdialog_sender_isbase = false;
            return QPrintDialog::sender();
        } else if (qprintdialog_sender_callback != nullptr) {
            return qprintdialog_sender_callback();
        } else {
            return QPrintDialog::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qprintdialog_sendersignalindex_isbase) {
            qprintdialog_sendersignalindex_isbase = false;
            return QPrintDialog::senderSignalIndex();
        } else if (qprintdialog_sendersignalindex_callback != nullptr) {
            return qprintdialog_sendersignalindex_callback();
        } else {
            return QPrintDialog::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qprintdialog_receivers_isbase) {
            qprintdialog_receivers_isbase = false;
            return QPrintDialog::receivers(signal);
        } else if (qprintdialog_receivers_callback != nullptr) {
            return qprintdialog_receivers_callback(this, signal);
        } else {
            return QPrintDialog::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qprintdialog_issignalconnected_isbase) {
            qprintdialog_issignalconnected_isbase = false;
            return QPrintDialog::isSignalConnected(signal);
        } else if (qprintdialog_issignalconnected_callback != nullptr) {
            return qprintdialog_issignalconnected_callback(this, signal);
        } else {
            return QPrintDialog::isSignalConnected(signal);
        }
    }
};

#endif
