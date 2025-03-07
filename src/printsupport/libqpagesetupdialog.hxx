#pragma once
#ifndef SRC_PRINTSUPPORTC_LIBVIRTUALQPAGESETUPDIALOG_H
#define SRC_PRINTSUPPORTC_LIBVIRTUALQPAGESETUPDIALOG_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPageSetupDialog so that we can call protected methods
class VirtualQPageSetupDialog : public QPageSetupDialog {

  public:
    // Virtual class public types (including callbacks)
    using QPageSetupDialog_Metacall_Callback = int (*)(QPageSetupDialog*, QMetaObject::Call, int, void**);
    using QPageSetupDialog_Exec_Callback = int (*)();
    using QPageSetupDialog_Done_Callback = void (*)(QPageSetupDialog*, int);
    using QPageSetupDialog_SetVisible_Callback = void (*)(QPageSetupDialog*, bool);
    using QPageSetupDialog_SizeHint_Callback = QSize (*)();
    using QPageSetupDialog_MinimumSizeHint_Callback = QSize (*)();
    using QPageSetupDialog_Open_Callback = void (*)();
    using QPageSetupDialog_Accept_Callback = void (*)();
    using QPageSetupDialog_Reject_Callback = void (*)();
    using QPageSetupDialog_KeyPressEvent_Callback = void (*)(QPageSetupDialog*, QKeyEvent*);
    using QPageSetupDialog_CloseEvent_Callback = void (*)(QPageSetupDialog*, QCloseEvent*);
    using QPageSetupDialog_ShowEvent_Callback = void (*)(QPageSetupDialog*, QShowEvent*);
    using QPageSetupDialog_ResizeEvent_Callback = void (*)(QPageSetupDialog*, QResizeEvent*);
    using QPageSetupDialog_ContextMenuEvent_Callback = void (*)(QPageSetupDialog*, QContextMenuEvent*);
    using QPageSetupDialog_EventFilter_Callback = bool (*)(QPageSetupDialog*, QObject*, QEvent*);
    using QPageSetupDialog_DevType_Callback = int (*)();
    using QPageSetupDialog_HeightForWidth_Callback = int (*)(const QPageSetupDialog*, int);
    using QPageSetupDialog_HasHeightForWidth_Callback = bool (*)();
    using QPageSetupDialog_PaintEngine_Callback = QPaintEngine* (*)();
    using QPageSetupDialog_Event_Callback = bool (*)(QPageSetupDialog*, QEvent*);
    using QPageSetupDialog_MousePressEvent_Callback = void (*)(QPageSetupDialog*, QMouseEvent*);
    using QPageSetupDialog_MouseReleaseEvent_Callback = void (*)(QPageSetupDialog*, QMouseEvent*);
    using QPageSetupDialog_MouseDoubleClickEvent_Callback = void (*)(QPageSetupDialog*, QMouseEvent*);
    using QPageSetupDialog_MouseMoveEvent_Callback = void (*)(QPageSetupDialog*, QMouseEvent*);
    using QPageSetupDialog_WheelEvent_Callback = void (*)(QPageSetupDialog*, QWheelEvent*);
    using QPageSetupDialog_KeyReleaseEvent_Callback = void (*)(QPageSetupDialog*, QKeyEvent*);
    using QPageSetupDialog_FocusInEvent_Callback = void (*)(QPageSetupDialog*, QFocusEvent*);
    using QPageSetupDialog_FocusOutEvent_Callback = void (*)(QPageSetupDialog*, QFocusEvent*);
    using QPageSetupDialog_EnterEvent_Callback = void (*)(QPageSetupDialog*, QEnterEvent*);
    using QPageSetupDialog_LeaveEvent_Callback = void (*)(QPageSetupDialog*, QEvent*);
    using QPageSetupDialog_PaintEvent_Callback = void (*)(QPageSetupDialog*, QPaintEvent*);
    using QPageSetupDialog_MoveEvent_Callback = void (*)(QPageSetupDialog*, QMoveEvent*);
    using QPageSetupDialog_TabletEvent_Callback = void (*)(QPageSetupDialog*, QTabletEvent*);
    using QPageSetupDialog_ActionEvent_Callback = void (*)(QPageSetupDialog*, QActionEvent*);
    using QPageSetupDialog_DragEnterEvent_Callback = void (*)(QPageSetupDialog*, QDragEnterEvent*);
    using QPageSetupDialog_DragMoveEvent_Callback = void (*)(QPageSetupDialog*, QDragMoveEvent*);
    using QPageSetupDialog_DragLeaveEvent_Callback = void (*)(QPageSetupDialog*, QDragLeaveEvent*);
    using QPageSetupDialog_DropEvent_Callback = void (*)(QPageSetupDialog*, QDropEvent*);
    using QPageSetupDialog_HideEvent_Callback = void (*)(QPageSetupDialog*, QHideEvent*);
    using QPageSetupDialog_NativeEvent_Callback = bool (*)(QPageSetupDialog*, const QByteArray&, void*, qintptr*);
    using QPageSetupDialog_ChangeEvent_Callback = void (*)(QPageSetupDialog*, QEvent*);
    using QPageSetupDialog_Metric_Callback = int (*)(const QPageSetupDialog*, QPaintDevice::PaintDeviceMetric);
    using QPageSetupDialog_InitPainter_Callback = void (*)(const QPageSetupDialog*, QPainter*);
    using QPageSetupDialog_Redirected_Callback = QPaintDevice* (*)(const QPageSetupDialog*, QPoint*);
    using QPageSetupDialog_SharedPainter_Callback = QPainter* (*)();
    using QPageSetupDialog_InputMethodEvent_Callback = void (*)(QPageSetupDialog*, QInputMethodEvent*);
    using QPageSetupDialog_InputMethodQuery_Callback = QVariant (*)(const QPageSetupDialog*, Qt::InputMethodQuery);
    using QPageSetupDialog_FocusNextPrevChild_Callback = bool (*)(QPageSetupDialog*, bool);
    using QPageSetupDialog_TimerEvent_Callback = void (*)(QPageSetupDialog*, QTimerEvent*);
    using QPageSetupDialog_ChildEvent_Callback = void (*)(QPageSetupDialog*, QChildEvent*);
    using QPageSetupDialog_CustomEvent_Callback = void (*)(QPageSetupDialog*, QEvent*);
    using QPageSetupDialog_ConnectNotify_Callback = void (*)(QPageSetupDialog*, const QMetaMethod&);
    using QPageSetupDialog_DisconnectNotify_Callback = void (*)(QPageSetupDialog*, const QMetaMethod&);
    using QPageSetupDialog_AdjustPosition_Callback = void (*)(QPageSetupDialog*, QWidget*);
    using QPageSetupDialog_UpdateMicroFocus_Callback = void (*)();
    using QPageSetupDialog_Create_Callback = void (*)();
    using QPageSetupDialog_Destroy_Callback = void (*)();
    using QPageSetupDialog_FocusNextChild_Callback = bool (*)();
    using QPageSetupDialog_FocusPreviousChild_Callback = bool (*)();
    using QPageSetupDialog_Sender_Callback = QObject* (*)();
    using QPageSetupDialog_SenderSignalIndex_Callback = int (*)();
    using QPageSetupDialog_Receivers_Callback = int (*)(const QPageSetupDialog*, const char*);
    using QPageSetupDialog_IsSignalConnected_Callback = bool (*)(const QPageSetupDialog*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QPageSetupDialog_Metacall_Callback qpagesetupdialog_metacall_callback = nullptr;
    QPageSetupDialog_Exec_Callback qpagesetupdialog_exec_callback = nullptr;
    QPageSetupDialog_Done_Callback qpagesetupdialog_done_callback = nullptr;
    QPageSetupDialog_SetVisible_Callback qpagesetupdialog_setvisible_callback = nullptr;
    QPageSetupDialog_SizeHint_Callback qpagesetupdialog_sizehint_callback = nullptr;
    QPageSetupDialog_MinimumSizeHint_Callback qpagesetupdialog_minimumsizehint_callback = nullptr;
    QPageSetupDialog_Open_Callback qpagesetupdialog_open_callback = nullptr;
    QPageSetupDialog_Accept_Callback qpagesetupdialog_accept_callback = nullptr;
    QPageSetupDialog_Reject_Callback qpagesetupdialog_reject_callback = nullptr;
    QPageSetupDialog_KeyPressEvent_Callback qpagesetupdialog_keypressevent_callback = nullptr;
    QPageSetupDialog_CloseEvent_Callback qpagesetupdialog_closeevent_callback = nullptr;
    QPageSetupDialog_ShowEvent_Callback qpagesetupdialog_showevent_callback = nullptr;
    QPageSetupDialog_ResizeEvent_Callback qpagesetupdialog_resizeevent_callback = nullptr;
    QPageSetupDialog_ContextMenuEvent_Callback qpagesetupdialog_contextmenuevent_callback = nullptr;
    QPageSetupDialog_EventFilter_Callback qpagesetupdialog_eventfilter_callback = nullptr;
    QPageSetupDialog_DevType_Callback qpagesetupdialog_devtype_callback = nullptr;
    QPageSetupDialog_HeightForWidth_Callback qpagesetupdialog_heightforwidth_callback = nullptr;
    QPageSetupDialog_HasHeightForWidth_Callback qpagesetupdialog_hasheightforwidth_callback = nullptr;
    QPageSetupDialog_PaintEngine_Callback qpagesetupdialog_paintengine_callback = nullptr;
    QPageSetupDialog_Event_Callback qpagesetupdialog_event_callback = nullptr;
    QPageSetupDialog_MousePressEvent_Callback qpagesetupdialog_mousepressevent_callback = nullptr;
    QPageSetupDialog_MouseReleaseEvent_Callback qpagesetupdialog_mousereleaseevent_callback = nullptr;
    QPageSetupDialog_MouseDoubleClickEvent_Callback qpagesetupdialog_mousedoubleclickevent_callback = nullptr;
    QPageSetupDialog_MouseMoveEvent_Callback qpagesetupdialog_mousemoveevent_callback = nullptr;
    QPageSetupDialog_WheelEvent_Callback qpagesetupdialog_wheelevent_callback = nullptr;
    QPageSetupDialog_KeyReleaseEvent_Callback qpagesetupdialog_keyreleaseevent_callback = nullptr;
    QPageSetupDialog_FocusInEvent_Callback qpagesetupdialog_focusinevent_callback = nullptr;
    QPageSetupDialog_FocusOutEvent_Callback qpagesetupdialog_focusoutevent_callback = nullptr;
    QPageSetupDialog_EnterEvent_Callback qpagesetupdialog_enterevent_callback = nullptr;
    QPageSetupDialog_LeaveEvent_Callback qpagesetupdialog_leaveevent_callback = nullptr;
    QPageSetupDialog_PaintEvent_Callback qpagesetupdialog_paintevent_callback = nullptr;
    QPageSetupDialog_MoveEvent_Callback qpagesetupdialog_moveevent_callback = nullptr;
    QPageSetupDialog_TabletEvent_Callback qpagesetupdialog_tabletevent_callback = nullptr;
    QPageSetupDialog_ActionEvent_Callback qpagesetupdialog_actionevent_callback = nullptr;
    QPageSetupDialog_DragEnterEvent_Callback qpagesetupdialog_dragenterevent_callback = nullptr;
    QPageSetupDialog_DragMoveEvent_Callback qpagesetupdialog_dragmoveevent_callback = nullptr;
    QPageSetupDialog_DragLeaveEvent_Callback qpagesetupdialog_dragleaveevent_callback = nullptr;
    QPageSetupDialog_DropEvent_Callback qpagesetupdialog_dropevent_callback = nullptr;
    QPageSetupDialog_HideEvent_Callback qpagesetupdialog_hideevent_callback = nullptr;
    QPageSetupDialog_NativeEvent_Callback qpagesetupdialog_nativeevent_callback = nullptr;
    QPageSetupDialog_ChangeEvent_Callback qpagesetupdialog_changeevent_callback = nullptr;
    QPageSetupDialog_Metric_Callback qpagesetupdialog_metric_callback = nullptr;
    QPageSetupDialog_InitPainter_Callback qpagesetupdialog_initpainter_callback = nullptr;
    QPageSetupDialog_Redirected_Callback qpagesetupdialog_redirected_callback = nullptr;
    QPageSetupDialog_SharedPainter_Callback qpagesetupdialog_sharedpainter_callback = nullptr;
    QPageSetupDialog_InputMethodEvent_Callback qpagesetupdialog_inputmethodevent_callback = nullptr;
    QPageSetupDialog_InputMethodQuery_Callback qpagesetupdialog_inputmethodquery_callback = nullptr;
    QPageSetupDialog_FocusNextPrevChild_Callback qpagesetupdialog_focusnextprevchild_callback = nullptr;
    QPageSetupDialog_TimerEvent_Callback qpagesetupdialog_timerevent_callback = nullptr;
    QPageSetupDialog_ChildEvent_Callback qpagesetupdialog_childevent_callback = nullptr;
    QPageSetupDialog_CustomEvent_Callback qpagesetupdialog_customevent_callback = nullptr;
    QPageSetupDialog_ConnectNotify_Callback qpagesetupdialog_connectnotify_callback = nullptr;
    QPageSetupDialog_DisconnectNotify_Callback qpagesetupdialog_disconnectnotify_callback = nullptr;
    QPageSetupDialog_AdjustPosition_Callback qpagesetupdialog_adjustposition_callback = nullptr;
    QPageSetupDialog_UpdateMicroFocus_Callback qpagesetupdialog_updatemicrofocus_callback = nullptr;
    QPageSetupDialog_Create_Callback qpagesetupdialog_create_callback = nullptr;
    QPageSetupDialog_Destroy_Callback qpagesetupdialog_destroy_callback = nullptr;
    QPageSetupDialog_FocusNextChild_Callback qpagesetupdialog_focusnextchild_callback = nullptr;
    QPageSetupDialog_FocusPreviousChild_Callback qpagesetupdialog_focuspreviouschild_callback = nullptr;
    QPageSetupDialog_Sender_Callback qpagesetupdialog_sender_callback = nullptr;
    QPageSetupDialog_SenderSignalIndex_Callback qpagesetupdialog_sendersignalindex_callback = nullptr;
    QPageSetupDialog_Receivers_Callback qpagesetupdialog_receivers_callback = nullptr;
    QPageSetupDialog_IsSignalConnected_Callback qpagesetupdialog_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qpagesetupdialog_metacall_isbase = false;
    mutable bool qpagesetupdialog_exec_isbase = false;
    mutable bool qpagesetupdialog_done_isbase = false;
    mutable bool qpagesetupdialog_setvisible_isbase = false;
    mutable bool qpagesetupdialog_sizehint_isbase = false;
    mutable bool qpagesetupdialog_minimumsizehint_isbase = false;
    mutable bool qpagesetupdialog_open_isbase = false;
    mutable bool qpagesetupdialog_accept_isbase = false;
    mutable bool qpagesetupdialog_reject_isbase = false;
    mutable bool qpagesetupdialog_keypressevent_isbase = false;
    mutable bool qpagesetupdialog_closeevent_isbase = false;
    mutable bool qpagesetupdialog_showevent_isbase = false;
    mutable bool qpagesetupdialog_resizeevent_isbase = false;
    mutable bool qpagesetupdialog_contextmenuevent_isbase = false;
    mutable bool qpagesetupdialog_eventfilter_isbase = false;
    mutable bool qpagesetupdialog_devtype_isbase = false;
    mutable bool qpagesetupdialog_heightforwidth_isbase = false;
    mutable bool qpagesetupdialog_hasheightforwidth_isbase = false;
    mutable bool qpagesetupdialog_paintengine_isbase = false;
    mutable bool qpagesetupdialog_event_isbase = false;
    mutable bool qpagesetupdialog_mousepressevent_isbase = false;
    mutable bool qpagesetupdialog_mousereleaseevent_isbase = false;
    mutable bool qpagesetupdialog_mousedoubleclickevent_isbase = false;
    mutable bool qpagesetupdialog_mousemoveevent_isbase = false;
    mutable bool qpagesetupdialog_wheelevent_isbase = false;
    mutable bool qpagesetupdialog_keyreleaseevent_isbase = false;
    mutable bool qpagesetupdialog_focusinevent_isbase = false;
    mutable bool qpagesetupdialog_focusoutevent_isbase = false;
    mutable bool qpagesetupdialog_enterevent_isbase = false;
    mutable bool qpagesetupdialog_leaveevent_isbase = false;
    mutable bool qpagesetupdialog_paintevent_isbase = false;
    mutable bool qpagesetupdialog_moveevent_isbase = false;
    mutable bool qpagesetupdialog_tabletevent_isbase = false;
    mutable bool qpagesetupdialog_actionevent_isbase = false;
    mutable bool qpagesetupdialog_dragenterevent_isbase = false;
    mutable bool qpagesetupdialog_dragmoveevent_isbase = false;
    mutable bool qpagesetupdialog_dragleaveevent_isbase = false;
    mutable bool qpagesetupdialog_dropevent_isbase = false;
    mutable bool qpagesetupdialog_hideevent_isbase = false;
    mutable bool qpagesetupdialog_nativeevent_isbase = false;
    mutable bool qpagesetupdialog_changeevent_isbase = false;
    mutable bool qpagesetupdialog_metric_isbase = false;
    mutable bool qpagesetupdialog_initpainter_isbase = false;
    mutable bool qpagesetupdialog_redirected_isbase = false;
    mutable bool qpagesetupdialog_sharedpainter_isbase = false;
    mutable bool qpagesetupdialog_inputmethodevent_isbase = false;
    mutable bool qpagesetupdialog_inputmethodquery_isbase = false;
    mutable bool qpagesetupdialog_focusnextprevchild_isbase = false;
    mutable bool qpagesetupdialog_timerevent_isbase = false;
    mutable bool qpagesetupdialog_childevent_isbase = false;
    mutable bool qpagesetupdialog_customevent_isbase = false;
    mutable bool qpagesetupdialog_connectnotify_isbase = false;
    mutable bool qpagesetupdialog_disconnectnotify_isbase = false;
    mutable bool qpagesetupdialog_adjustposition_isbase = false;
    mutable bool qpagesetupdialog_updatemicrofocus_isbase = false;
    mutable bool qpagesetupdialog_create_isbase = false;
    mutable bool qpagesetupdialog_destroy_isbase = false;
    mutable bool qpagesetupdialog_focusnextchild_isbase = false;
    mutable bool qpagesetupdialog_focuspreviouschild_isbase = false;
    mutable bool qpagesetupdialog_sender_isbase = false;
    mutable bool qpagesetupdialog_sendersignalindex_isbase = false;
    mutable bool qpagesetupdialog_receivers_isbase = false;
    mutable bool qpagesetupdialog_issignalconnected_isbase = false;

  public:
    VirtualQPageSetupDialog(QWidget* parent) : QPageSetupDialog(parent){};
    VirtualQPageSetupDialog(QPrinter* printer) : QPageSetupDialog(printer){};
    VirtualQPageSetupDialog() : QPageSetupDialog(){};
    VirtualQPageSetupDialog(QPrinter* printer, QWidget* parent) : QPageSetupDialog(printer, parent){};

    ~VirtualQPageSetupDialog() {
        qpagesetupdialog_metacall_callback = nullptr;
        qpagesetupdialog_exec_callback = nullptr;
        qpagesetupdialog_done_callback = nullptr;
        qpagesetupdialog_setvisible_callback = nullptr;
        qpagesetupdialog_sizehint_callback = nullptr;
        qpagesetupdialog_minimumsizehint_callback = nullptr;
        qpagesetupdialog_open_callback = nullptr;
        qpagesetupdialog_accept_callback = nullptr;
        qpagesetupdialog_reject_callback = nullptr;
        qpagesetupdialog_keypressevent_callback = nullptr;
        qpagesetupdialog_closeevent_callback = nullptr;
        qpagesetupdialog_showevent_callback = nullptr;
        qpagesetupdialog_resizeevent_callback = nullptr;
        qpagesetupdialog_contextmenuevent_callback = nullptr;
        qpagesetupdialog_eventfilter_callback = nullptr;
        qpagesetupdialog_devtype_callback = nullptr;
        qpagesetupdialog_heightforwidth_callback = nullptr;
        qpagesetupdialog_hasheightforwidth_callback = nullptr;
        qpagesetupdialog_paintengine_callback = nullptr;
        qpagesetupdialog_event_callback = nullptr;
        qpagesetupdialog_mousepressevent_callback = nullptr;
        qpagesetupdialog_mousereleaseevent_callback = nullptr;
        qpagesetupdialog_mousedoubleclickevent_callback = nullptr;
        qpagesetupdialog_mousemoveevent_callback = nullptr;
        qpagesetupdialog_wheelevent_callback = nullptr;
        qpagesetupdialog_keyreleaseevent_callback = nullptr;
        qpagesetupdialog_focusinevent_callback = nullptr;
        qpagesetupdialog_focusoutevent_callback = nullptr;
        qpagesetupdialog_enterevent_callback = nullptr;
        qpagesetupdialog_leaveevent_callback = nullptr;
        qpagesetupdialog_paintevent_callback = nullptr;
        qpagesetupdialog_moveevent_callback = nullptr;
        qpagesetupdialog_tabletevent_callback = nullptr;
        qpagesetupdialog_actionevent_callback = nullptr;
        qpagesetupdialog_dragenterevent_callback = nullptr;
        qpagesetupdialog_dragmoveevent_callback = nullptr;
        qpagesetupdialog_dragleaveevent_callback = nullptr;
        qpagesetupdialog_dropevent_callback = nullptr;
        qpagesetupdialog_hideevent_callback = nullptr;
        qpagesetupdialog_nativeevent_callback = nullptr;
        qpagesetupdialog_changeevent_callback = nullptr;
        qpagesetupdialog_metric_callback = nullptr;
        qpagesetupdialog_initpainter_callback = nullptr;
        qpagesetupdialog_redirected_callback = nullptr;
        qpagesetupdialog_sharedpainter_callback = nullptr;
        qpagesetupdialog_inputmethodevent_callback = nullptr;
        qpagesetupdialog_inputmethodquery_callback = nullptr;
        qpagesetupdialog_focusnextprevchild_callback = nullptr;
        qpagesetupdialog_timerevent_callback = nullptr;
        qpagesetupdialog_childevent_callback = nullptr;
        qpagesetupdialog_customevent_callback = nullptr;
        qpagesetupdialog_connectnotify_callback = nullptr;
        qpagesetupdialog_disconnectnotify_callback = nullptr;
        qpagesetupdialog_adjustposition_callback = nullptr;
        qpagesetupdialog_updatemicrofocus_callback = nullptr;
        qpagesetupdialog_create_callback = nullptr;
        qpagesetupdialog_destroy_callback = nullptr;
        qpagesetupdialog_focusnextchild_callback = nullptr;
        qpagesetupdialog_focuspreviouschild_callback = nullptr;
        qpagesetupdialog_sender_callback = nullptr;
        qpagesetupdialog_sendersignalindex_callback = nullptr;
        qpagesetupdialog_receivers_callback = nullptr;
        qpagesetupdialog_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQPageSetupDialog_Metacall_Callback(QPageSetupDialog_Metacall_Callback cb) { qpagesetupdialog_metacall_callback = cb; }
    void setQPageSetupDialog_Exec_Callback(QPageSetupDialog_Exec_Callback cb) { qpagesetupdialog_exec_callback = cb; }
    void setQPageSetupDialog_Done_Callback(QPageSetupDialog_Done_Callback cb) { qpagesetupdialog_done_callback = cb; }
    void setQPageSetupDialog_SetVisible_Callback(QPageSetupDialog_SetVisible_Callback cb) { qpagesetupdialog_setvisible_callback = cb; }
    void setQPageSetupDialog_SizeHint_Callback(QPageSetupDialog_SizeHint_Callback cb) { qpagesetupdialog_sizehint_callback = cb; }
    void setQPageSetupDialog_MinimumSizeHint_Callback(QPageSetupDialog_MinimumSizeHint_Callback cb) { qpagesetupdialog_minimumsizehint_callback = cb; }
    void setQPageSetupDialog_Open_Callback(QPageSetupDialog_Open_Callback cb) { qpagesetupdialog_open_callback = cb; }
    void setQPageSetupDialog_Accept_Callback(QPageSetupDialog_Accept_Callback cb) { qpagesetupdialog_accept_callback = cb; }
    void setQPageSetupDialog_Reject_Callback(QPageSetupDialog_Reject_Callback cb) { qpagesetupdialog_reject_callback = cb; }
    void setQPageSetupDialog_KeyPressEvent_Callback(QPageSetupDialog_KeyPressEvent_Callback cb) { qpagesetupdialog_keypressevent_callback = cb; }
    void setQPageSetupDialog_CloseEvent_Callback(QPageSetupDialog_CloseEvent_Callback cb) { qpagesetupdialog_closeevent_callback = cb; }
    void setQPageSetupDialog_ShowEvent_Callback(QPageSetupDialog_ShowEvent_Callback cb) { qpagesetupdialog_showevent_callback = cb; }
    void setQPageSetupDialog_ResizeEvent_Callback(QPageSetupDialog_ResizeEvent_Callback cb) { qpagesetupdialog_resizeevent_callback = cb; }
    void setQPageSetupDialog_ContextMenuEvent_Callback(QPageSetupDialog_ContextMenuEvent_Callback cb) { qpagesetupdialog_contextmenuevent_callback = cb; }
    void setQPageSetupDialog_EventFilter_Callback(QPageSetupDialog_EventFilter_Callback cb) { qpagesetupdialog_eventfilter_callback = cb; }
    void setQPageSetupDialog_DevType_Callback(QPageSetupDialog_DevType_Callback cb) { qpagesetupdialog_devtype_callback = cb; }
    void setQPageSetupDialog_HeightForWidth_Callback(QPageSetupDialog_HeightForWidth_Callback cb) { qpagesetupdialog_heightforwidth_callback = cb; }
    void setQPageSetupDialog_HasHeightForWidth_Callback(QPageSetupDialog_HasHeightForWidth_Callback cb) { qpagesetupdialog_hasheightforwidth_callback = cb; }
    void setQPageSetupDialog_PaintEngine_Callback(QPageSetupDialog_PaintEngine_Callback cb) { qpagesetupdialog_paintengine_callback = cb; }
    void setQPageSetupDialog_Event_Callback(QPageSetupDialog_Event_Callback cb) { qpagesetupdialog_event_callback = cb; }
    void setQPageSetupDialog_MousePressEvent_Callback(QPageSetupDialog_MousePressEvent_Callback cb) { qpagesetupdialog_mousepressevent_callback = cb; }
    void setQPageSetupDialog_MouseReleaseEvent_Callback(QPageSetupDialog_MouseReleaseEvent_Callback cb) { qpagesetupdialog_mousereleaseevent_callback = cb; }
    void setQPageSetupDialog_MouseDoubleClickEvent_Callback(QPageSetupDialog_MouseDoubleClickEvent_Callback cb) { qpagesetupdialog_mousedoubleclickevent_callback = cb; }
    void setQPageSetupDialog_MouseMoveEvent_Callback(QPageSetupDialog_MouseMoveEvent_Callback cb) { qpagesetupdialog_mousemoveevent_callback = cb; }
    void setQPageSetupDialog_WheelEvent_Callback(QPageSetupDialog_WheelEvent_Callback cb) { qpagesetupdialog_wheelevent_callback = cb; }
    void setQPageSetupDialog_KeyReleaseEvent_Callback(QPageSetupDialog_KeyReleaseEvent_Callback cb) { qpagesetupdialog_keyreleaseevent_callback = cb; }
    void setQPageSetupDialog_FocusInEvent_Callback(QPageSetupDialog_FocusInEvent_Callback cb) { qpagesetupdialog_focusinevent_callback = cb; }
    void setQPageSetupDialog_FocusOutEvent_Callback(QPageSetupDialog_FocusOutEvent_Callback cb) { qpagesetupdialog_focusoutevent_callback = cb; }
    void setQPageSetupDialog_EnterEvent_Callback(QPageSetupDialog_EnterEvent_Callback cb) { qpagesetupdialog_enterevent_callback = cb; }
    void setQPageSetupDialog_LeaveEvent_Callback(QPageSetupDialog_LeaveEvent_Callback cb) { qpagesetupdialog_leaveevent_callback = cb; }
    void setQPageSetupDialog_PaintEvent_Callback(QPageSetupDialog_PaintEvent_Callback cb) { qpagesetupdialog_paintevent_callback = cb; }
    void setQPageSetupDialog_MoveEvent_Callback(QPageSetupDialog_MoveEvent_Callback cb) { qpagesetupdialog_moveevent_callback = cb; }
    void setQPageSetupDialog_TabletEvent_Callback(QPageSetupDialog_TabletEvent_Callback cb) { qpagesetupdialog_tabletevent_callback = cb; }
    void setQPageSetupDialog_ActionEvent_Callback(QPageSetupDialog_ActionEvent_Callback cb) { qpagesetupdialog_actionevent_callback = cb; }
    void setQPageSetupDialog_DragEnterEvent_Callback(QPageSetupDialog_DragEnterEvent_Callback cb) { qpagesetupdialog_dragenterevent_callback = cb; }
    void setQPageSetupDialog_DragMoveEvent_Callback(QPageSetupDialog_DragMoveEvent_Callback cb) { qpagesetupdialog_dragmoveevent_callback = cb; }
    void setQPageSetupDialog_DragLeaveEvent_Callback(QPageSetupDialog_DragLeaveEvent_Callback cb) { qpagesetupdialog_dragleaveevent_callback = cb; }
    void setQPageSetupDialog_DropEvent_Callback(QPageSetupDialog_DropEvent_Callback cb) { qpagesetupdialog_dropevent_callback = cb; }
    void setQPageSetupDialog_HideEvent_Callback(QPageSetupDialog_HideEvent_Callback cb) { qpagesetupdialog_hideevent_callback = cb; }
    void setQPageSetupDialog_NativeEvent_Callback(QPageSetupDialog_NativeEvent_Callback cb) { qpagesetupdialog_nativeevent_callback = cb; }
    void setQPageSetupDialog_ChangeEvent_Callback(QPageSetupDialog_ChangeEvent_Callback cb) { qpagesetupdialog_changeevent_callback = cb; }
    void setQPageSetupDialog_Metric_Callback(QPageSetupDialog_Metric_Callback cb) { qpagesetupdialog_metric_callback = cb; }
    void setQPageSetupDialog_InitPainter_Callback(QPageSetupDialog_InitPainter_Callback cb) { qpagesetupdialog_initpainter_callback = cb; }
    void setQPageSetupDialog_Redirected_Callback(QPageSetupDialog_Redirected_Callback cb) { qpagesetupdialog_redirected_callback = cb; }
    void setQPageSetupDialog_SharedPainter_Callback(QPageSetupDialog_SharedPainter_Callback cb) { qpagesetupdialog_sharedpainter_callback = cb; }
    void setQPageSetupDialog_InputMethodEvent_Callback(QPageSetupDialog_InputMethodEvent_Callback cb) { qpagesetupdialog_inputmethodevent_callback = cb; }
    void setQPageSetupDialog_InputMethodQuery_Callback(QPageSetupDialog_InputMethodQuery_Callback cb) { qpagesetupdialog_inputmethodquery_callback = cb; }
    void setQPageSetupDialog_FocusNextPrevChild_Callback(QPageSetupDialog_FocusNextPrevChild_Callback cb) { qpagesetupdialog_focusnextprevchild_callback = cb; }
    void setQPageSetupDialog_TimerEvent_Callback(QPageSetupDialog_TimerEvent_Callback cb) { qpagesetupdialog_timerevent_callback = cb; }
    void setQPageSetupDialog_ChildEvent_Callback(QPageSetupDialog_ChildEvent_Callback cb) { qpagesetupdialog_childevent_callback = cb; }
    void setQPageSetupDialog_CustomEvent_Callback(QPageSetupDialog_CustomEvent_Callback cb) { qpagesetupdialog_customevent_callback = cb; }
    void setQPageSetupDialog_ConnectNotify_Callback(QPageSetupDialog_ConnectNotify_Callback cb) { qpagesetupdialog_connectnotify_callback = cb; }
    void setQPageSetupDialog_DisconnectNotify_Callback(QPageSetupDialog_DisconnectNotify_Callback cb) { qpagesetupdialog_disconnectnotify_callback = cb; }
    void setQPageSetupDialog_AdjustPosition_Callback(QPageSetupDialog_AdjustPosition_Callback cb) { qpagesetupdialog_adjustposition_callback = cb; }
    void setQPageSetupDialog_UpdateMicroFocus_Callback(QPageSetupDialog_UpdateMicroFocus_Callback cb) { qpagesetupdialog_updatemicrofocus_callback = cb; }
    void setQPageSetupDialog_Create_Callback(QPageSetupDialog_Create_Callback cb) { qpagesetupdialog_create_callback = cb; }
    void setQPageSetupDialog_Destroy_Callback(QPageSetupDialog_Destroy_Callback cb) { qpagesetupdialog_destroy_callback = cb; }
    void setQPageSetupDialog_FocusNextChild_Callback(QPageSetupDialog_FocusNextChild_Callback cb) { qpagesetupdialog_focusnextchild_callback = cb; }
    void setQPageSetupDialog_FocusPreviousChild_Callback(QPageSetupDialog_FocusPreviousChild_Callback cb) { qpagesetupdialog_focuspreviouschild_callback = cb; }
    void setQPageSetupDialog_Sender_Callback(QPageSetupDialog_Sender_Callback cb) { qpagesetupdialog_sender_callback = cb; }
    void setQPageSetupDialog_SenderSignalIndex_Callback(QPageSetupDialog_SenderSignalIndex_Callback cb) { qpagesetupdialog_sendersignalindex_callback = cb; }
    void setQPageSetupDialog_Receivers_Callback(QPageSetupDialog_Receivers_Callback cb) { qpagesetupdialog_receivers_callback = cb; }
    void setQPageSetupDialog_IsSignalConnected_Callback(QPageSetupDialog_IsSignalConnected_Callback cb) { qpagesetupdialog_issignalconnected_callback = cb; }

    // Base flag setters
    void setQPageSetupDialog_Metacall_IsBase(bool value) const { qpagesetupdialog_metacall_isbase = value; }
    void setQPageSetupDialog_Exec_IsBase(bool value) const { qpagesetupdialog_exec_isbase = value; }
    void setQPageSetupDialog_Done_IsBase(bool value) const { qpagesetupdialog_done_isbase = value; }
    void setQPageSetupDialog_SetVisible_IsBase(bool value) const { qpagesetupdialog_setvisible_isbase = value; }
    void setQPageSetupDialog_SizeHint_IsBase(bool value) const { qpagesetupdialog_sizehint_isbase = value; }
    void setQPageSetupDialog_MinimumSizeHint_IsBase(bool value) const { qpagesetupdialog_minimumsizehint_isbase = value; }
    void setQPageSetupDialog_Open_IsBase(bool value) const { qpagesetupdialog_open_isbase = value; }
    void setQPageSetupDialog_Accept_IsBase(bool value) const { qpagesetupdialog_accept_isbase = value; }
    void setQPageSetupDialog_Reject_IsBase(bool value) const { qpagesetupdialog_reject_isbase = value; }
    void setQPageSetupDialog_KeyPressEvent_IsBase(bool value) const { qpagesetupdialog_keypressevent_isbase = value; }
    void setQPageSetupDialog_CloseEvent_IsBase(bool value) const { qpagesetupdialog_closeevent_isbase = value; }
    void setQPageSetupDialog_ShowEvent_IsBase(bool value) const { qpagesetupdialog_showevent_isbase = value; }
    void setQPageSetupDialog_ResizeEvent_IsBase(bool value) const { qpagesetupdialog_resizeevent_isbase = value; }
    void setQPageSetupDialog_ContextMenuEvent_IsBase(bool value) const { qpagesetupdialog_contextmenuevent_isbase = value; }
    void setQPageSetupDialog_EventFilter_IsBase(bool value) const { qpagesetupdialog_eventfilter_isbase = value; }
    void setQPageSetupDialog_DevType_IsBase(bool value) const { qpagesetupdialog_devtype_isbase = value; }
    void setQPageSetupDialog_HeightForWidth_IsBase(bool value) const { qpagesetupdialog_heightforwidth_isbase = value; }
    void setQPageSetupDialog_HasHeightForWidth_IsBase(bool value) const { qpagesetupdialog_hasheightforwidth_isbase = value; }
    void setQPageSetupDialog_PaintEngine_IsBase(bool value) const { qpagesetupdialog_paintengine_isbase = value; }
    void setQPageSetupDialog_Event_IsBase(bool value) const { qpagesetupdialog_event_isbase = value; }
    void setQPageSetupDialog_MousePressEvent_IsBase(bool value) const { qpagesetupdialog_mousepressevent_isbase = value; }
    void setQPageSetupDialog_MouseReleaseEvent_IsBase(bool value) const { qpagesetupdialog_mousereleaseevent_isbase = value; }
    void setQPageSetupDialog_MouseDoubleClickEvent_IsBase(bool value) const { qpagesetupdialog_mousedoubleclickevent_isbase = value; }
    void setQPageSetupDialog_MouseMoveEvent_IsBase(bool value) const { qpagesetupdialog_mousemoveevent_isbase = value; }
    void setQPageSetupDialog_WheelEvent_IsBase(bool value) const { qpagesetupdialog_wheelevent_isbase = value; }
    void setQPageSetupDialog_KeyReleaseEvent_IsBase(bool value) const { qpagesetupdialog_keyreleaseevent_isbase = value; }
    void setQPageSetupDialog_FocusInEvent_IsBase(bool value) const { qpagesetupdialog_focusinevent_isbase = value; }
    void setQPageSetupDialog_FocusOutEvent_IsBase(bool value) const { qpagesetupdialog_focusoutevent_isbase = value; }
    void setQPageSetupDialog_EnterEvent_IsBase(bool value) const { qpagesetupdialog_enterevent_isbase = value; }
    void setQPageSetupDialog_LeaveEvent_IsBase(bool value) const { qpagesetupdialog_leaveevent_isbase = value; }
    void setQPageSetupDialog_PaintEvent_IsBase(bool value) const { qpagesetupdialog_paintevent_isbase = value; }
    void setQPageSetupDialog_MoveEvent_IsBase(bool value) const { qpagesetupdialog_moveevent_isbase = value; }
    void setQPageSetupDialog_TabletEvent_IsBase(bool value) const { qpagesetupdialog_tabletevent_isbase = value; }
    void setQPageSetupDialog_ActionEvent_IsBase(bool value) const { qpagesetupdialog_actionevent_isbase = value; }
    void setQPageSetupDialog_DragEnterEvent_IsBase(bool value) const { qpagesetupdialog_dragenterevent_isbase = value; }
    void setQPageSetupDialog_DragMoveEvent_IsBase(bool value) const { qpagesetupdialog_dragmoveevent_isbase = value; }
    void setQPageSetupDialog_DragLeaveEvent_IsBase(bool value) const { qpagesetupdialog_dragleaveevent_isbase = value; }
    void setQPageSetupDialog_DropEvent_IsBase(bool value) const { qpagesetupdialog_dropevent_isbase = value; }
    void setQPageSetupDialog_HideEvent_IsBase(bool value) const { qpagesetupdialog_hideevent_isbase = value; }
    void setQPageSetupDialog_NativeEvent_IsBase(bool value) const { qpagesetupdialog_nativeevent_isbase = value; }
    void setQPageSetupDialog_ChangeEvent_IsBase(bool value) const { qpagesetupdialog_changeevent_isbase = value; }
    void setQPageSetupDialog_Metric_IsBase(bool value) const { qpagesetupdialog_metric_isbase = value; }
    void setQPageSetupDialog_InitPainter_IsBase(bool value) const { qpagesetupdialog_initpainter_isbase = value; }
    void setQPageSetupDialog_Redirected_IsBase(bool value) const { qpagesetupdialog_redirected_isbase = value; }
    void setQPageSetupDialog_SharedPainter_IsBase(bool value) const { qpagesetupdialog_sharedpainter_isbase = value; }
    void setQPageSetupDialog_InputMethodEvent_IsBase(bool value) const { qpagesetupdialog_inputmethodevent_isbase = value; }
    void setQPageSetupDialog_InputMethodQuery_IsBase(bool value) const { qpagesetupdialog_inputmethodquery_isbase = value; }
    void setQPageSetupDialog_FocusNextPrevChild_IsBase(bool value) const { qpagesetupdialog_focusnextprevchild_isbase = value; }
    void setQPageSetupDialog_TimerEvent_IsBase(bool value) const { qpagesetupdialog_timerevent_isbase = value; }
    void setQPageSetupDialog_ChildEvent_IsBase(bool value) const { qpagesetupdialog_childevent_isbase = value; }
    void setQPageSetupDialog_CustomEvent_IsBase(bool value) const { qpagesetupdialog_customevent_isbase = value; }
    void setQPageSetupDialog_ConnectNotify_IsBase(bool value) const { qpagesetupdialog_connectnotify_isbase = value; }
    void setQPageSetupDialog_DisconnectNotify_IsBase(bool value) const { qpagesetupdialog_disconnectnotify_isbase = value; }
    void setQPageSetupDialog_AdjustPosition_IsBase(bool value) const { qpagesetupdialog_adjustposition_isbase = value; }
    void setQPageSetupDialog_UpdateMicroFocus_IsBase(bool value) const { qpagesetupdialog_updatemicrofocus_isbase = value; }
    void setQPageSetupDialog_Create_IsBase(bool value) const { qpagesetupdialog_create_isbase = value; }
    void setQPageSetupDialog_Destroy_IsBase(bool value) const { qpagesetupdialog_destroy_isbase = value; }
    void setQPageSetupDialog_FocusNextChild_IsBase(bool value) const { qpagesetupdialog_focusnextchild_isbase = value; }
    void setQPageSetupDialog_FocusPreviousChild_IsBase(bool value) const { qpagesetupdialog_focuspreviouschild_isbase = value; }
    void setQPageSetupDialog_Sender_IsBase(bool value) const { qpagesetupdialog_sender_isbase = value; }
    void setQPageSetupDialog_SenderSignalIndex_IsBase(bool value) const { qpagesetupdialog_sendersignalindex_isbase = value; }
    void setQPageSetupDialog_Receivers_IsBase(bool value) const { qpagesetupdialog_receivers_isbase = value; }
    void setQPageSetupDialog_IsSignalConnected_IsBase(bool value) const { qpagesetupdialog_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qpagesetupdialog_metacall_isbase) {
            qpagesetupdialog_metacall_isbase = false;
            return QPageSetupDialog::qt_metacall(param1, param2, param3);
        } else if (qpagesetupdialog_metacall_callback != nullptr) {
            return qpagesetupdialog_metacall_callback(this, param1, param2, param3);
        } else {
            return QPageSetupDialog::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (qpagesetupdialog_exec_isbase) {
            qpagesetupdialog_exec_isbase = false;
            return QPageSetupDialog::exec();
        } else if (qpagesetupdialog_exec_callback != nullptr) {
            return qpagesetupdialog_exec_callback();
        } else {
            return QPageSetupDialog::exec();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int result) override {
        if (qpagesetupdialog_done_isbase) {
            qpagesetupdialog_done_isbase = false;
            QPageSetupDialog::done(result);
        } else if (qpagesetupdialog_done_callback != nullptr) {
            qpagesetupdialog_done_callback(this, result);
        } else {
            QPageSetupDialog::done(result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qpagesetupdialog_setvisible_isbase) {
            qpagesetupdialog_setvisible_isbase = false;
            QPageSetupDialog::setVisible(visible);
        } else if (qpagesetupdialog_setvisible_callback != nullptr) {
            qpagesetupdialog_setvisible_callback(this, visible);
        } else {
            QPageSetupDialog::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qpagesetupdialog_sizehint_isbase) {
            qpagesetupdialog_sizehint_isbase = false;
            return QPageSetupDialog::sizeHint();
        } else if (qpagesetupdialog_sizehint_callback != nullptr) {
            return qpagesetupdialog_sizehint_callback();
        } else {
            return QPageSetupDialog::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qpagesetupdialog_minimumsizehint_isbase) {
            qpagesetupdialog_minimumsizehint_isbase = false;
            return QPageSetupDialog::minimumSizeHint();
        } else if (qpagesetupdialog_minimumsizehint_callback != nullptr) {
            return qpagesetupdialog_minimumsizehint_callback();
        } else {
            return QPageSetupDialog::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (qpagesetupdialog_open_isbase) {
            qpagesetupdialog_open_isbase = false;
            QPageSetupDialog::open();
        } else if (qpagesetupdialog_open_callback != nullptr) {
            qpagesetupdialog_open_callback();
        } else {
            QPageSetupDialog::open();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (qpagesetupdialog_accept_isbase) {
            qpagesetupdialog_accept_isbase = false;
            QPageSetupDialog::accept();
        } else if (qpagesetupdialog_accept_callback != nullptr) {
            qpagesetupdialog_accept_callback();
        } else {
            QPageSetupDialog::accept();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (qpagesetupdialog_reject_isbase) {
            qpagesetupdialog_reject_isbase = false;
            QPageSetupDialog::reject();
        } else if (qpagesetupdialog_reject_callback != nullptr) {
            qpagesetupdialog_reject_callback();
        } else {
            QPageSetupDialog::reject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qpagesetupdialog_keypressevent_isbase) {
            qpagesetupdialog_keypressevent_isbase = false;
            QPageSetupDialog::keyPressEvent(param1);
        } else if (qpagesetupdialog_keypressevent_callback != nullptr) {
            qpagesetupdialog_keypressevent_callback(this, param1);
        } else {
            QPageSetupDialog::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (qpagesetupdialog_closeevent_isbase) {
            qpagesetupdialog_closeevent_isbase = false;
            QPageSetupDialog::closeEvent(param1);
        } else if (qpagesetupdialog_closeevent_callback != nullptr) {
            qpagesetupdialog_closeevent_callback(this, param1);
        } else {
            QPageSetupDialog::closeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qpagesetupdialog_showevent_isbase) {
            qpagesetupdialog_showevent_isbase = false;
            QPageSetupDialog::showEvent(param1);
        } else if (qpagesetupdialog_showevent_callback != nullptr) {
            qpagesetupdialog_showevent_callback(this, param1);
        } else {
            QPageSetupDialog::showEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qpagesetupdialog_resizeevent_isbase) {
            qpagesetupdialog_resizeevent_isbase = false;
            QPageSetupDialog::resizeEvent(param1);
        } else if (qpagesetupdialog_resizeevent_callback != nullptr) {
            qpagesetupdialog_resizeevent_callback(this, param1);
        } else {
            QPageSetupDialog::resizeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qpagesetupdialog_contextmenuevent_isbase) {
            qpagesetupdialog_contextmenuevent_isbase = false;
            QPageSetupDialog::contextMenuEvent(param1);
        } else if (qpagesetupdialog_contextmenuevent_callback != nullptr) {
            qpagesetupdialog_contextmenuevent_callback(this, param1);
        } else {
            QPageSetupDialog::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qpagesetupdialog_eventfilter_isbase) {
            qpagesetupdialog_eventfilter_isbase = false;
            return QPageSetupDialog::eventFilter(param1, param2);
        } else if (qpagesetupdialog_eventfilter_callback != nullptr) {
            return qpagesetupdialog_eventfilter_callback(this, param1, param2);
        } else {
            return QPageSetupDialog::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qpagesetupdialog_devtype_isbase) {
            qpagesetupdialog_devtype_isbase = false;
            return QPageSetupDialog::devType();
        } else if (qpagesetupdialog_devtype_callback != nullptr) {
            return qpagesetupdialog_devtype_callback();
        } else {
            return QPageSetupDialog::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qpagesetupdialog_heightforwidth_isbase) {
            qpagesetupdialog_heightforwidth_isbase = false;
            return QPageSetupDialog::heightForWidth(param1);
        } else if (qpagesetupdialog_heightforwidth_callback != nullptr) {
            return qpagesetupdialog_heightforwidth_callback(this, param1);
        } else {
            return QPageSetupDialog::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qpagesetupdialog_hasheightforwidth_isbase) {
            qpagesetupdialog_hasheightforwidth_isbase = false;
            return QPageSetupDialog::hasHeightForWidth();
        } else if (qpagesetupdialog_hasheightforwidth_callback != nullptr) {
            return qpagesetupdialog_hasheightforwidth_callback();
        } else {
            return QPageSetupDialog::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qpagesetupdialog_paintengine_isbase) {
            qpagesetupdialog_paintengine_isbase = false;
            return QPageSetupDialog::paintEngine();
        } else if (qpagesetupdialog_paintengine_callback != nullptr) {
            return qpagesetupdialog_paintengine_callback();
        } else {
            return QPageSetupDialog::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qpagesetupdialog_event_isbase) {
            qpagesetupdialog_event_isbase = false;
            return QPageSetupDialog::event(event);
        } else if (qpagesetupdialog_event_callback != nullptr) {
            return qpagesetupdialog_event_callback(this, event);
        } else {
            return QPageSetupDialog::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qpagesetupdialog_mousepressevent_isbase) {
            qpagesetupdialog_mousepressevent_isbase = false;
            QPageSetupDialog::mousePressEvent(event);
        } else if (qpagesetupdialog_mousepressevent_callback != nullptr) {
            qpagesetupdialog_mousepressevent_callback(this, event);
        } else {
            QPageSetupDialog::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qpagesetupdialog_mousereleaseevent_isbase) {
            qpagesetupdialog_mousereleaseevent_isbase = false;
            QPageSetupDialog::mouseReleaseEvent(event);
        } else if (qpagesetupdialog_mousereleaseevent_callback != nullptr) {
            qpagesetupdialog_mousereleaseevent_callback(this, event);
        } else {
            QPageSetupDialog::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qpagesetupdialog_mousedoubleclickevent_isbase) {
            qpagesetupdialog_mousedoubleclickevent_isbase = false;
            QPageSetupDialog::mouseDoubleClickEvent(event);
        } else if (qpagesetupdialog_mousedoubleclickevent_callback != nullptr) {
            qpagesetupdialog_mousedoubleclickevent_callback(this, event);
        } else {
            QPageSetupDialog::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qpagesetupdialog_mousemoveevent_isbase) {
            qpagesetupdialog_mousemoveevent_isbase = false;
            QPageSetupDialog::mouseMoveEvent(event);
        } else if (qpagesetupdialog_mousemoveevent_callback != nullptr) {
            qpagesetupdialog_mousemoveevent_callback(this, event);
        } else {
            QPageSetupDialog::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qpagesetupdialog_wheelevent_isbase) {
            qpagesetupdialog_wheelevent_isbase = false;
            QPageSetupDialog::wheelEvent(event);
        } else if (qpagesetupdialog_wheelevent_callback != nullptr) {
            qpagesetupdialog_wheelevent_callback(this, event);
        } else {
            QPageSetupDialog::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qpagesetupdialog_keyreleaseevent_isbase) {
            qpagesetupdialog_keyreleaseevent_isbase = false;
            QPageSetupDialog::keyReleaseEvent(event);
        } else if (qpagesetupdialog_keyreleaseevent_callback != nullptr) {
            qpagesetupdialog_keyreleaseevent_callback(this, event);
        } else {
            QPageSetupDialog::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qpagesetupdialog_focusinevent_isbase) {
            qpagesetupdialog_focusinevent_isbase = false;
            QPageSetupDialog::focusInEvent(event);
        } else if (qpagesetupdialog_focusinevent_callback != nullptr) {
            qpagesetupdialog_focusinevent_callback(this, event);
        } else {
            QPageSetupDialog::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qpagesetupdialog_focusoutevent_isbase) {
            qpagesetupdialog_focusoutevent_isbase = false;
            QPageSetupDialog::focusOutEvent(event);
        } else if (qpagesetupdialog_focusoutevent_callback != nullptr) {
            qpagesetupdialog_focusoutevent_callback(this, event);
        } else {
            QPageSetupDialog::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qpagesetupdialog_enterevent_isbase) {
            qpagesetupdialog_enterevent_isbase = false;
            QPageSetupDialog::enterEvent(event);
        } else if (qpagesetupdialog_enterevent_callback != nullptr) {
            qpagesetupdialog_enterevent_callback(this, event);
        } else {
            QPageSetupDialog::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qpagesetupdialog_leaveevent_isbase) {
            qpagesetupdialog_leaveevent_isbase = false;
            QPageSetupDialog::leaveEvent(event);
        } else if (qpagesetupdialog_leaveevent_callback != nullptr) {
            qpagesetupdialog_leaveevent_callback(this, event);
        } else {
            QPageSetupDialog::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qpagesetupdialog_paintevent_isbase) {
            qpagesetupdialog_paintevent_isbase = false;
            QPageSetupDialog::paintEvent(event);
        } else if (qpagesetupdialog_paintevent_callback != nullptr) {
            qpagesetupdialog_paintevent_callback(this, event);
        } else {
            QPageSetupDialog::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qpagesetupdialog_moveevent_isbase) {
            qpagesetupdialog_moveevent_isbase = false;
            QPageSetupDialog::moveEvent(event);
        } else if (qpagesetupdialog_moveevent_callback != nullptr) {
            qpagesetupdialog_moveevent_callback(this, event);
        } else {
            QPageSetupDialog::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qpagesetupdialog_tabletevent_isbase) {
            qpagesetupdialog_tabletevent_isbase = false;
            QPageSetupDialog::tabletEvent(event);
        } else if (qpagesetupdialog_tabletevent_callback != nullptr) {
            qpagesetupdialog_tabletevent_callback(this, event);
        } else {
            QPageSetupDialog::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qpagesetupdialog_actionevent_isbase) {
            qpagesetupdialog_actionevent_isbase = false;
            QPageSetupDialog::actionEvent(event);
        } else if (qpagesetupdialog_actionevent_callback != nullptr) {
            qpagesetupdialog_actionevent_callback(this, event);
        } else {
            QPageSetupDialog::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qpagesetupdialog_dragenterevent_isbase) {
            qpagesetupdialog_dragenterevent_isbase = false;
            QPageSetupDialog::dragEnterEvent(event);
        } else if (qpagesetupdialog_dragenterevent_callback != nullptr) {
            qpagesetupdialog_dragenterevent_callback(this, event);
        } else {
            QPageSetupDialog::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qpagesetupdialog_dragmoveevent_isbase) {
            qpagesetupdialog_dragmoveevent_isbase = false;
            QPageSetupDialog::dragMoveEvent(event);
        } else if (qpagesetupdialog_dragmoveevent_callback != nullptr) {
            qpagesetupdialog_dragmoveevent_callback(this, event);
        } else {
            QPageSetupDialog::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qpagesetupdialog_dragleaveevent_isbase) {
            qpagesetupdialog_dragleaveevent_isbase = false;
            QPageSetupDialog::dragLeaveEvent(event);
        } else if (qpagesetupdialog_dragleaveevent_callback != nullptr) {
            qpagesetupdialog_dragleaveevent_callback(this, event);
        } else {
            QPageSetupDialog::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qpagesetupdialog_dropevent_isbase) {
            qpagesetupdialog_dropevent_isbase = false;
            QPageSetupDialog::dropEvent(event);
        } else if (qpagesetupdialog_dropevent_callback != nullptr) {
            qpagesetupdialog_dropevent_callback(this, event);
        } else {
            QPageSetupDialog::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qpagesetupdialog_hideevent_isbase) {
            qpagesetupdialog_hideevent_isbase = false;
            QPageSetupDialog::hideEvent(event);
        } else if (qpagesetupdialog_hideevent_callback != nullptr) {
            qpagesetupdialog_hideevent_callback(this, event);
        } else {
            QPageSetupDialog::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qpagesetupdialog_nativeevent_isbase) {
            qpagesetupdialog_nativeevent_isbase = false;
            return QPageSetupDialog::nativeEvent(eventType, message, result);
        } else if (qpagesetupdialog_nativeevent_callback != nullptr) {
            return qpagesetupdialog_nativeevent_callback(this, eventType, message, result);
        } else {
            return QPageSetupDialog::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qpagesetupdialog_changeevent_isbase) {
            qpagesetupdialog_changeevent_isbase = false;
            QPageSetupDialog::changeEvent(param1);
        } else if (qpagesetupdialog_changeevent_callback != nullptr) {
            qpagesetupdialog_changeevent_callback(this, param1);
        } else {
            QPageSetupDialog::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qpagesetupdialog_metric_isbase) {
            qpagesetupdialog_metric_isbase = false;
            return QPageSetupDialog::metric(param1);
        } else if (qpagesetupdialog_metric_callback != nullptr) {
            return qpagesetupdialog_metric_callback(this, param1);
        } else {
            return QPageSetupDialog::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qpagesetupdialog_initpainter_isbase) {
            qpagesetupdialog_initpainter_isbase = false;
            QPageSetupDialog::initPainter(painter);
        } else if (qpagesetupdialog_initpainter_callback != nullptr) {
            qpagesetupdialog_initpainter_callback(this, painter);
        } else {
            QPageSetupDialog::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qpagesetupdialog_redirected_isbase) {
            qpagesetupdialog_redirected_isbase = false;
            return QPageSetupDialog::redirected(offset);
        } else if (qpagesetupdialog_redirected_callback != nullptr) {
            return qpagesetupdialog_redirected_callback(this, offset);
        } else {
            return QPageSetupDialog::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qpagesetupdialog_sharedpainter_isbase) {
            qpagesetupdialog_sharedpainter_isbase = false;
            return QPageSetupDialog::sharedPainter();
        } else if (qpagesetupdialog_sharedpainter_callback != nullptr) {
            return qpagesetupdialog_sharedpainter_callback();
        } else {
            return QPageSetupDialog::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qpagesetupdialog_inputmethodevent_isbase) {
            qpagesetupdialog_inputmethodevent_isbase = false;
            QPageSetupDialog::inputMethodEvent(param1);
        } else if (qpagesetupdialog_inputmethodevent_callback != nullptr) {
            qpagesetupdialog_inputmethodevent_callback(this, param1);
        } else {
            QPageSetupDialog::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qpagesetupdialog_inputmethodquery_isbase) {
            qpagesetupdialog_inputmethodquery_isbase = false;
            return QPageSetupDialog::inputMethodQuery(param1);
        } else if (qpagesetupdialog_inputmethodquery_callback != nullptr) {
            return qpagesetupdialog_inputmethodquery_callback(this, param1);
        } else {
            return QPageSetupDialog::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qpagesetupdialog_focusnextprevchild_isbase) {
            qpagesetupdialog_focusnextprevchild_isbase = false;
            return QPageSetupDialog::focusNextPrevChild(next);
        } else if (qpagesetupdialog_focusnextprevchild_callback != nullptr) {
            return qpagesetupdialog_focusnextprevchild_callback(this, next);
        } else {
            return QPageSetupDialog::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qpagesetupdialog_timerevent_isbase) {
            qpagesetupdialog_timerevent_isbase = false;
            QPageSetupDialog::timerEvent(event);
        } else if (qpagesetupdialog_timerevent_callback != nullptr) {
            qpagesetupdialog_timerevent_callback(this, event);
        } else {
            QPageSetupDialog::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qpagesetupdialog_childevent_isbase) {
            qpagesetupdialog_childevent_isbase = false;
            QPageSetupDialog::childEvent(event);
        } else if (qpagesetupdialog_childevent_callback != nullptr) {
            qpagesetupdialog_childevent_callback(this, event);
        } else {
            QPageSetupDialog::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qpagesetupdialog_customevent_isbase) {
            qpagesetupdialog_customevent_isbase = false;
            QPageSetupDialog::customEvent(event);
        } else if (qpagesetupdialog_customevent_callback != nullptr) {
            qpagesetupdialog_customevent_callback(this, event);
        } else {
            QPageSetupDialog::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qpagesetupdialog_connectnotify_isbase) {
            qpagesetupdialog_connectnotify_isbase = false;
            QPageSetupDialog::connectNotify(signal);
        } else if (qpagesetupdialog_connectnotify_callback != nullptr) {
            qpagesetupdialog_connectnotify_callback(this, signal);
        } else {
            QPageSetupDialog::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qpagesetupdialog_disconnectnotify_isbase) {
            qpagesetupdialog_disconnectnotify_isbase = false;
            QPageSetupDialog::disconnectNotify(signal);
        } else if (qpagesetupdialog_disconnectnotify_callback != nullptr) {
            qpagesetupdialog_disconnectnotify_callback(this, signal);
        } else {
            QPageSetupDialog::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (qpagesetupdialog_adjustposition_isbase) {
            qpagesetupdialog_adjustposition_isbase = false;
            QPageSetupDialog::adjustPosition(param1);
        } else if (qpagesetupdialog_adjustposition_callback != nullptr) {
            qpagesetupdialog_adjustposition_callback(this, param1);
        } else {
            QPageSetupDialog::adjustPosition(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qpagesetupdialog_updatemicrofocus_isbase) {
            qpagesetupdialog_updatemicrofocus_isbase = false;
            QPageSetupDialog::updateMicroFocus();
        } else if (qpagesetupdialog_updatemicrofocus_callback != nullptr) {
            qpagesetupdialog_updatemicrofocus_callback();
        } else {
            QPageSetupDialog::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qpagesetupdialog_create_isbase) {
            qpagesetupdialog_create_isbase = false;
            QPageSetupDialog::create();
        } else if (qpagesetupdialog_create_callback != nullptr) {
            qpagesetupdialog_create_callback();
        } else {
            QPageSetupDialog::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qpagesetupdialog_destroy_isbase) {
            qpagesetupdialog_destroy_isbase = false;
            QPageSetupDialog::destroy();
        } else if (qpagesetupdialog_destroy_callback != nullptr) {
            qpagesetupdialog_destroy_callback();
        } else {
            QPageSetupDialog::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qpagesetupdialog_focusnextchild_isbase) {
            qpagesetupdialog_focusnextchild_isbase = false;
            return QPageSetupDialog::focusNextChild();
        } else if (qpagesetupdialog_focusnextchild_callback != nullptr) {
            return qpagesetupdialog_focusnextchild_callback();
        } else {
            return QPageSetupDialog::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qpagesetupdialog_focuspreviouschild_isbase) {
            qpagesetupdialog_focuspreviouschild_isbase = false;
            return QPageSetupDialog::focusPreviousChild();
        } else if (qpagesetupdialog_focuspreviouschild_callback != nullptr) {
            return qpagesetupdialog_focuspreviouschild_callback();
        } else {
            return QPageSetupDialog::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qpagesetupdialog_sender_isbase) {
            qpagesetupdialog_sender_isbase = false;
            return QPageSetupDialog::sender();
        } else if (qpagesetupdialog_sender_callback != nullptr) {
            return qpagesetupdialog_sender_callback();
        } else {
            return QPageSetupDialog::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qpagesetupdialog_sendersignalindex_isbase) {
            qpagesetupdialog_sendersignalindex_isbase = false;
            return QPageSetupDialog::senderSignalIndex();
        } else if (qpagesetupdialog_sendersignalindex_callback != nullptr) {
            return qpagesetupdialog_sendersignalindex_callback();
        } else {
            return QPageSetupDialog::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qpagesetupdialog_receivers_isbase) {
            qpagesetupdialog_receivers_isbase = false;
            return QPageSetupDialog::receivers(signal);
        } else if (qpagesetupdialog_receivers_callback != nullptr) {
            return qpagesetupdialog_receivers_callback(this, signal);
        } else {
            return QPageSetupDialog::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qpagesetupdialog_issignalconnected_isbase) {
            qpagesetupdialog_issignalconnected_isbase = false;
            return QPageSetupDialog::isSignalConnected(signal);
        } else if (qpagesetupdialog_issignalconnected_callback != nullptr) {
            return qpagesetupdialog_issignalconnected_callback(this, signal);
        } else {
            return QPageSetupDialog::isSignalConnected(signal);
        }
    }
};

#endif
