#pragma once
#ifndef SRCC_LIBVIRTUALQFILEDIALOG_H
#define SRCC_LIBVIRTUALQFILEDIALOG_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QFileDialog so that we can call protected methods
class VirtualQFileDialog : public QFileDialog {

  public:
    // Virtual class public types (including callbacks)
    using QFileDialog_Metacall_Callback = int (*)(QFileDialog*, QMetaObject::Call, int, void**);
    using QFileDialog_SetVisible_Callback = void (*)(QFileDialog*, bool);
    using QFileDialog_Done_Callback = void (*)(QFileDialog*, int);
    using QFileDialog_Accept_Callback = void (*)();
    using QFileDialog_ChangeEvent_Callback = void (*)(QFileDialog*, QEvent*);
    using QFileDialog_SizeHint_Callback = QSize (*)();
    using QFileDialog_MinimumSizeHint_Callback = QSize (*)();
    using QFileDialog_Open_Callback = void (*)();
    using QFileDialog_Exec_Callback = int (*)();
    using QFileDialog_Reject_Callback = void (*)();
    using QFileDialog_KeyPressEvent_Callback = void (*)(QFileDialog*, QKeyEvent*);
    using QFileDialog_CloseEvent_Callback = void (*)(QFileDialog*, QCloseEvent*);
    using QFileDialog_ShowEvent_Callback = void (*)(QFileDialog*, QShowEvent*);
    using QFileDialog_ResizeEvent_Callback = void (*)(QFileDialog*, QResizeEvent*);
    using QFileDialog_ContextMenuEvent_Callback = void (*)(QFileDialog*, QContextMenuEvent*);
    using QFileDialog_EventFilter_Callback = bool (*)(QFileDialog*, QObject*, QEvent*);
    using QFileDialog_DevType_Callback = int (*)();
    using QFileDialog_HeightForWidth_Callback = int (*)(const QFileDialog*, int);
    using QFileDialog_HasHeightForWidth_Callback = bool (*)();
    using QFileDialog_PaintEngine_Callback = QPaintEngine* (*)();
    using QFileDialog_Event_Callback = bool (*)(QFileDialog*, QEvent*);
    using QFileDialog_MousePressEvent_Callback = void (*)(QFileDialog*, QMouseEvent*);
    using QFileDialog_MouseReleaseEvent_Callback = void (*)(QFileDialog*, QMouseEvent*);
    using QFileDialog_MouseDoubleClickEvent_Callback = void (*)(QFileDialog*, QMouseEvent*);
    using QFileDialog_MouseMoveEvent_Callback = void (*)(QFileDialog*, QMouseEvent*);
    using QFileDialog_WheelEvent_Callback = void (*)(QFileDialog*, QWheelEvent*);
    using QFileDialog_KeyReleaseEvent_Callback = void (*)(QFileDialog*, QKeyEvent*);
    using QFileDialog_FocusInEvent_Callback = void (*)(QFileDialog*, QFocusEvent*);
    using QFileDialog_FocusOutEvent_Callback = void (*)(QFileDialog*, QFocusEvent*);
    using QFileDialog_EnterEvent_Callback = void (*)(QFileDialog*, QEnterEvent*);
    using QFileDialog_LeaveEvent_Callback = void (*)(QFileDialog*, QEvent*);
    using QFileDialog_PaintEvent_Callback = void (*)(QFileDialog*, QPaintEvent*);
    using QFileDialog_MoveEvent_Callback = void (*)(QFileDialog*, QMoveEvent*);
    using QFileDialog_TabletEvent_Callback = void (*)(QFileDialog*, QTabletEvent*);
    using QFileDialog_ActionEvent_Callback = void (*)(QFileDialog*, QActionEvent*);
    using QFileDialog_DragEnterEvent_Callback = void (*)(QFileDialog*, QDragEnterEvent*);
    using QFileDialog_DragMoveEvent_Callback = void (*)(QFileDialog*, QDragMoveEvent*);
    using QFileDialog_DragLeaveEvent_Callback = void (*)(QFileDialog*, QDragLeaveEvent*);
    using QFileDialog_DropEvent_Callback = void (*)(QFileDialog*, QDropEvent*);
    using QFileDialog_HideEvent_Callback = void (*)(QFileDialog*, QHideEvent*);
    using QFileDialog_NativeEvent_Callback = bool (*)(QFileDialog*, const QByteArray&, void*, qintptr*);
    using QFileDialog_Metric_Callback = int (*)(const QFileDialog*, QPaintDevice::PaintDeviceMetric);
    using QFileDialog_InitPainter_Callback = void (*)(const QFileDialog*, QPainter*);
    using QFileDialog_Redirected_Callback = QPaintDevice* (*)(const QFileDialog*, QPoint*);
    using QFileDialog_SharedPainter_Callback = QPainter* (*)();
    using QFileDialog_InputMethodEvent_Callback = void (*)(QFileDialog*, QInputMethodEvent*);
    using QFileDialog_InputMethodQuery_Callback = QVariant (*)(const QFileDialog*, Qt::InputMethodQuery);
    using QFileDialog_FocusNextPrevChild_Callback = bool (*)(QFileDialog*, bool);
    using QFileDialog_TimerEvent_Callback = void (*)(QFileDialog*, QTimerEvent*);
    using QFileDialog_ChildEvent_Callback = void (*)(QFileDialog*, QChildEvent*);
    using QFileDialog_CustomEvent_Callback = void (*)(QFileDialog*, QEvent*);
    using QFileDialog_ConnectNotify_Callback = void (*)(QFileDialog*, const QMetaMethod&);
    using QFileDialog_DisconnectNotify_Callback = void (*)(QFileDialog*, const QMetaMethod&);
    using QFileDialog_AdjustPosition_Callback = void (*)(QFileDialog*, QWidget*);
    using QFileDialog_UpdateMicroFocus_Callback = void (*)();
    using QFileDialog_Create_Callback = void (*)();
    using QFileDialog_Destroy_Callback = void (*)();
    using QFileDialog_FocusNextChild_Callback = bool (*)();
    using QFileDialog_FocusPreviousChild_Callback = bool (*)();
    using QFileDialog_Sender_Callback = QObject* (*)();
    using QFileDialog_SenderSignalIndex_Callback = int (*)();
    using QFileDialog_Receivers_Callback = int (*)(const QFileDialog*, const char*);
    using QFileDialog_IsSignalConnected_Callback = bool (*)(const QFileDialog*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QFileDialog_Metacall_Callback qfiledialog_metacall_callback = nullptr;
    QFileDialog_SetVisible_Callback qfiledialog_setvisible_callback = nullptr;
    QFileDialog_Done_Callback qfiledialog_done_callback = nullptr;
    QFileDialog_Accept_Callback qfiledialog_accept_callback = nullptr;
    QFileDialog_ChangeEvent_Callback qfiledialog_changeevent_callback = nullptr;
    QFileDialog_SizeHint_Callback qfiledialog_sizehint_callback = nullptr;
    QFileDialog_MinimumSizeHint_Callback qfiledialog_minimumsizehint_callback = nullptr;
    QFileDialog_Open_Callback qfiledialog_open_callback = nullptr;
    QFileDialog_Exec_Callback qfiledialog_exec_callback = nullptr;
    QFileDialog_Reject_Callback qfiledialog_reject_callback = nullptr;
    QFileDialog_KeyPressEvent_Callback qfiledialog_keypressevent_callback = nullptr;
    QFileDialog_CloseEvent_Callback qfiledialog_closeevent_callback = nullptr;
    QFileDialog_ShowEvent_Callback qfiledialog_showevent_callback = nullptr;
    QFileDialog_ResizeEvent_Callback qfiledialog_resizeevent_callback = nullptr;
    QFileDialog_ContextMenuEvent_Callback qfiledialog_contextmenuevent_callback = nullptr;
    QFileDialog_EventFilter_Callback qfiledialog_eventfilter_callback = nullptr;
    QFileDialog_DevType_Callback qfiledialog_devtype_callback = nullptr;
    QFileDialog_HeightForWidth_Callback qfiledialog_heightforwidth_callback = nullptr;
    QFileDialog_HasHeightForWidth_Callback qfiledialog_hasheightforwidth_callback = nullptr;
    QFileDialog_PaintEngine_Callback qfiledialog_paintengine_callback = nullptr;
    QFileDialog_Event_Callback qfiledialog_event_callback = nullptr;
    QFileDialog_MousePressEvent_Callback qfiledialog_mousepressevent_callback = nullptr;
    QFileDialog_MouseReleaseEvent_Callback qfiledialog_mousereleaseevent_callback = nullptr;
    QFileDialog_MouseDoubleClickEvent_Callback qfiledialog_mousedoubleclickevent_callback = nullptr;
    QFileDialog_MouseMoveEvent_Callback qfiledialog_mousemoveevent_callback = nullptr;
    QFileDialog_WheelEvent_Callback qfiledialog_wheelevent_callback = nullptr;
    QFileDialog_KeyReleaseEvent_Callback qfiledialog_keyreleaseevent_callback = nullptr;
    QFileDialog_FocusInEvent_Callback qfiledialog_focusinevent_callback = nullptr;
    QFileDialog_FocusOutEvent_Callback qfiledialog_focusoutevent_callback = nullptr;
    QFileDialog_EnterEvent_Callback qfiledialog_enterevent_callback = nullptr;
    QFileDialog_LeaveEvent_Callback qfiledialog_leaveevent_callback = nullptr;
    QFileDialog_PaintEvent_Callback qfiledialog_paintevent_callback = nullptr;
    QFileDialog_MoveEvent_Callback qfiledialog_moveevent_callback = nullptr;
    QFileDialog_TabletEvent_Callback qfiledialog_tabletevent_callback = nullptr;
    QFileDialog_ActionEvent_Callback qfiledialog_actionevent_callback = nullptr;
    QFileDialog_DragEnterEvent_Callback qfiledialog_dragenterevent_callback = nullptr;
    QFileDialog_DragMoveEvent_Callback qfiledialog_dragmoveevent_callback = nullptr;
    QFileDialog_DragLeaveEvent_Callback qfiledialog_dragleaveevent_callback = nullptr;
    QFileDialog_DropEvent_Callback qfiledialog_dropevent_callback = nullptr;
    QFileDialog_HideEvent_Callback qfiledialog_hideevent_callback = nullptr;
    QFileDialog_NativeEvent_Callback qfiledialog_nativeevent_callback = nullptr;
    QFileDialog_Metric_Callback qfiledialog_metric_callback = nullptr;
    QFileDialog_InitPainter_Callback qfiledialog_initpainter_callback = nullptr;
    QFileDialog_Redirected_Callback qfiledialog_redirected_callback = nullptr;
    QFileDialog_SharedPainter_Callback qfiledialog_sharedpainter_callback = nullptr;
    QFileDialog_InputMethodEvent_Callback qfiledialog_inputmethodevent_callback = nullptr;
    QFileDialog_InputMethodQuery_Callback qfiledialog_inputmethodquery_callback = nullptr;
    QFileDialog_FocusNextPrevChild_Callback qfiledialog_focusnextprevchild_callback = nullptr;
    QFileDialog_TimerEvent_Callback qfiledialog_timerevent_callback = nullptr;
    QFileDialog_ChildEvent_Callback qfiledialog_childevent_callback = nullptr;
    QFileDialog_CustomEvent_Callback qfiledialog_customevent_callback = nullptr;
    QFileDialog_ConnectNotify_Callback qfiledialog_connectnotify_callback = nullptr;
    QFileDialog_DisconnectNotify_Callback qfiledialog_disconnectnotify_callback = nullptr;
    QFileDialog_AdjustPosition_Callback qfiledialog_adjustposition_callback = nullptr;
    QFileDialog_UpdateMicroFocus_Callback qfiledialog_updatemicrofocus_callback = nullptr;
    QFileDialog_Create_Callback qfiledialog_create_callback = nullptr;
    QFileDialog_Destroy_Callback qfiledialog_destroy_callback = nullptr;
    QFileDialog_FocusNextChild_Callback qfiledialog_focusnextchild_callback = nullptr;
    QFileDialog_FocusPreviousChild_Callback qfiledialog_focuspreviouschild_callback = nullptr;
    QFileDialog_Sender_Callback qfiledialog_sender_callback = nullptr;
    QFileDialog_SenderSignalIndex_Callback qfiledialog_sendersignalindex_callback = nullptr;
    QFileDialog_Receivers_Callback qfiledialog_receivers_callback = nullptr;
    QFileDialog_IsSignalConnected_Callback qfiledialog_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qfiledialog_metacall_isbase = false;
    mutable bool qfiledialog_setvisible_isbase = false;
    mutable bool qfiledialog_done_isbase = false;
    mutable bool qfiledialog_accept_isbase = false;
    mutable bool qfiledialog_changeevent_isbase = false;
    mutable bool qfiledialog_sizehint_isbase = false;
    mutable bool qfiledialog_minimumsizehint_isbase = false;
    mutable bool qfiledialog_open_isbase = false;
    mutable bool qfiledialog_exec_isbase = false;
    mutable bool qfiledialog_reject_isbase = false;
    mutable bool qfiledialog_keypressevent_isbase = false;
    mutable bool qfiledialog_closeevent_isbase = false;
    mutable bool qfiledialog_showevent_isbase = false;
    mutable bool qfiledialog_resizeevent_isbase = false;
    mutable bool qfiledialog_contextmenuevent_isbase = false;
    mutable bool qfiledialog_eventfilter_isbase = false;
    mutable bool qfiledialog_devtype_isbase = false;
    mutable bool qfiledialog_heightforwidth_isbase = false;
    mutable bool qfiledialog_hasheightforwidth_isbase = false;
    mutable bool qfiledialog_paintengine_isbase = false;
    mutable bool qfiledialog_event_isbase = false;
    mutable bool qfiledialog_mousepressevent_isbase = false;
    mutable bool qfiledialog_mousereleaseevent_isbase = false;
    mutable bool qfiledialog_mousedoubleclickevent_isbase = false;
    mutable bool qfiledialog_mousemoveevent_isbase = false;
    mutable bool qfiledialog_wheelevent_isbase = false;
    mutable bool qfiledialog_keyreleaseevent_isbase = false;
    mutable bool qfiledialog_focusinevent_isbase = false;
    mutable bool qfiledialog_focusoutevent_isbase = false;
    mutable bool qfiledialog_enterevent_isbase = false;
    mutable bool qfiledialog_leaveevent_isbase = false;
    mutable bool qfiledialog_paintevent_isbase = false;
    mutable bool qfiledialog_moveevent_isbase = false;
    mutable bool qfiledialog_tabletevent_isbase = false;
    mutable bool qfiledialog_actionevent_isbase = false;
    mutable bool qfiledialog_dragenterevent_isbase = false;
    mutable bool qfiledialog_dragmoveevent_isbase = false;
    mutable bool qfiledialog_dragleaveevent_isbase = false;
    mutable bool qfiledialog_dropevent_isbase = false;
    mutable bool qfiledialog_hideevent_isbase = false;
    mutable bool qfiledialog_nativeevent_isbase = false;
    mutable bool qfiledialog_metric_isbase = false;
    mutable bool qfiledialog_initpainter_isbase = false;
    mutable bool qfiledialog_redirected_isbase = false;
    mutable bool qfiledialog_sharedpainter_isbase = false;
    mutable bool qfiledialog_inputmethodevent_isbase = false;
    mutable bool qfiledialog_inputmethodquery_isbase = false;
    mutable bool qfiledialog_focusnextprevchild_isbase = false;
    mutable bool qfiledialog_timerevent_isbase = false;
    mutable bool qfiledialog_childevent_isbase = false;
    mutable bool qfiledialog_customevent_isbase = false;
    mutable bool qfiledialog_connectnotify_isbase = false;
    mutable bool qfiledialog_disconnectnotify_isbase = false;
    mutable bool qfiledialog_adjustposition_isbase = false;
    mutable bool qfiledialog_updatemicrofocus_isbase = false;
    mutable bool qfiledialog_create_isbase = false;
    mutable bool qfiledialog_destroy_isbase = false;
    mutable bool qfiledialog_focusnextchild_isbase = false;
    mutable bool qfiledialog_focuspreviouschild_isbase = false;
    mutable bool qfiledialog_sender_isbase = false;
    mutable bool qfiledialog_sendersignalindex_isbase = false;
    mutable bool qfiledialog_receivers_isbase = false;
    mutable bool qfiledialog_issignalconnected_isbase = false;

  public:
    VirtualQFileDialog(QWidget* parent) : QFileDialog(parent){};
    VirtualQFileDialog(QWidget* parent, Qt::WindowFlags f) : QFileDialog(parent, f){};
    VirtualQFileDialog() : QFileDialog(){};
    VirtualQFileDialog(QWidget* parent, const QString& caption) : QFileDialog(parent, caption){};
    VirtualQFileDialog(QWidget* parent, const QString& caption, const QString& directory) : QFileDialog(parent, caption, directory){};
    VirtualQFileDialog(QWidget* parent, const QString& caption, const QString& directory, const QString& filter) : QFileDialog(parent, caption, directory, filter){};

    ~VirtualQFileDialog() {
        qfiledialog_metacall_callback = nullptr;
        qfiledialog_setvisible_callback = nullptr;
        qfiledialog_done_callback = nullptr;
        qfiledialog_accept_callback = nullptr;
        qfiledialog_changeevent_callback = nullptr;
        qfiledialog_sizehint_callback = nullptr;
        qfiledialog_minimumsizehint_callback = nullptr;
        qfiledialog_open_callback = nullptr;
        qfiledialog_exec_callback = nullptr;
        qfiledialog_reject_callback = nullptr;
        qfiledialog_keypressevent_callback = nullptr;
        qfiledialog_closeevent_callback = nullptr;
        qfiledialog_showevent_callback = nullptr;
        qfiledialog_resizeevent_callback = nullptr;
        qfiledialog_contextmenuevent_callback = nullptr;
        qfiledialog_eventfilter_callback = nullptr;
        qfiledialog_devtype_callback = nullptr;
        qfiledialog_heightforwidth_callback = nullptr;
        qfiledialog_hasheightforwidth_callback = nullptr;
        qfiledialog_paintengine_callback = nullptr;
        qfiledialog_event_callback = nullptr;
        qfiledialog_mousepressevent_callback = nullptr;
        qfiledialog_mousereleaseevent_callback = nullptr;
        qfiledialog_mousedoubleclickevent_callback = nullptr;
        qfiledialog_mousemoveevent_callback = nullptr;
        qfiledialog_wheelevent_callback = nullptr;
        qfiledialog_keyreleaseevent_callback = nullptr;
        qfiledialog_focusinevent_callback = nullptr;
        qfiledialog_focusoutevent_callback = nullptr;
        qfiledialog_enterevent_callback = nullptr;
        qfiledialog_leaveevent_callback = nullptr;
        qfiledialog_paintevent_callback = nullptr;
        qfiledialog_moveevent_callback = nullptr;
        qfiledialog_tabletevent_callback = nullptr;
        qfiledialog_actionevent_callback = nullptr;
        qfiledialog_dragenterevent_callback = nullptr;
        qfiledialog_dragmoveevent_callback = nullptr;
        qfiledialog_dragleaveevent_callback = nullptr;
        qfiledialog_dropevent_callback = nullptr;
        qfiledialog_hideevent_callback = nullptr;
        qfiledialog_nativeevent_callback = nullptr;
        qfiledialog_metric_callback = nullptr;
        qfiledialog_initpainter_callback = nullptr;
        qfiledialog_redirected_callback = nullptr;
        qfiledialog_sharedpainter_callback = nullptr;
        qfiledialog_inputmethodevent_callback = nullptr;
        qfiledialog_inputmethodquery_callback = nullptr;
        qfiledialog_focusnextprevchild_callback = nullptr;
        qfiledialog_timerevent_callback = nullptr;
        qfiledialog_childevent_callback = nullptr;
        qfiledialog_customevent_callback = nullptr;
        qfiledialog_connectnotify_callback = nullptr;
        qfiledialog_disconnectnotify_callback = nullptr;
        qfiledialog_adjustposition_callback = nullptr;
        qfiledialog_updatemicrofocus_callback = nullptr;
        qfiledialog_create_callback = nullptr;
        qfiledialog_destroy_callback = nullptr;
        qfiledialog_focusnextchild_callback = nullptr;
        qfiledialog_focuspreviouschild_callback = nullptr;
        qfiledialog_sender_callback = nullptr;
        qfiledialog_sendersignalindex_callback = nullptr;
        qfiledialog_receivers_callback = nullptr;
        qfiledialog_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQFileDialog_Metacall_Callback(QFileDialog_Metacall_Callback cb) { qfiledialog_metacall_callback = cb; }
    void setQFileDialog_SetVisible_Callback(QFileDialog_SetVisible_Callback cb) { qfiledialog_setvisible_callback = cb; }
    void setQFileDialog_Done_Callback(QFileDialog_Done_Callback cb) { qfiledialog_done_callback = cb; }
    void setQFileDialog_Accept_Callback(QFileDialog_Accept_Callback cb) { qfiledialog_accept_callback = cb; }
    void setQFileDialog_ChangeEvent_Callback(QFileDialog_ChangeEvent_Callback cb) { qfiledialog_changeevent_callback = cb; }
    void setQFileDialog_SizeHint_Callback(QFileDialog_SizeHint_Callback cb) { qfiledialog_sizehint_callback = cb; }
    void setQFileDialog_MinimumSizeHint_Callback(QFileDialog_MinimumSizeHint_Callback cb) { qfiledialog_minimumsizehint_callback = cb; }
    void setQFileDialog_Open_Callback(QFileDialog_Open_Callback cb) { qfiledialog_open_callback = cb; }
    void setQFileDialog_Exec_Callback(QFileDialog_Exec_Callback cb) { qfiledialog_exec_callback = cb; }
    void setQFileDialog_Reject_Callback(QFileDialog_Reject_Callback cb) { qfiledialog_reject_callback = cb; }
    void setQFileDialog_KeyPressEvent_Callback(QFileDialog_KeyPressEvent_Callback cb) { qfiledialog_keypressevent_callback = cb; }
    void setQFileDialog_CloseEvent_Callback(QFileDialog_CloseEvent_Callback cb) { qfiledialog_closeevent_callback = cb; }
    void setQFileDialog_ShowEvent_Callback(QFileDialog_ShowEvent_Callback cb) { qfiledialog_showevent_callback = cb; }
    void setQFileDialog_ResizeEvent_Callback(QFileDialog_ResizeEvent_Callback cb) { qfiledialog_resizeevent_callback = cb; }
    void setQFileDialog_ContextMenuEvent_Callback(QFileDialog_ContextMenuEvent_Callback cb) { qfiledialog_contextmenuevent_callback = cb; }
    void setQFileDialog_EventFilter_Callback(QFileDialog_EventFilter_Callback cb) { qfiledialog_eventfilter_callback = cb; }
    void setQFileDialog_DevType_Callback(QFileDialog_DevType_Callback cb) { qfiledialog_devtype_callback = cb; }
    void setQFileDialog_HeightForWidth_Callback(QFileDialog_HeightForWidth_Callback cb) { qfiledialog_heightforwidth_callback = cb; }
    void setQFileDialog_HasHeightForWidth_Callback(QFileDialog_HasHeightForWidth_Callback cb) { qfiledialog_hasheightforwidth_callback = cb; }
    void setQFileDialog_PaintEngine_Callback(QFileDialog_PaintEngine_Callback cb) { qfiledialog_paintengine_callback = cb; }
    void setQFileDialog_Event_Callback(QFileDialog_Event_Callback cb) { qfiledialog_event_callback = cb; }
    void setQFileDialog_MousePressEvent_Callback(QFileDialog_MousePressEvent_Callback cb) { qfiledialog_mousepressevent_callback = cb; }
    void setQFileDialog_MouseReleaseEvent_Callback(QFileDialog_MouseReleaseEvent_Callback cb) { qfiledialog_mousereleaseevent_callback = cb; }
    void setQFileDialog_MouseDoubleClickEvent_Callback(QFileDialog_MouseDoubleClickEvent_Callback cb) { qfiledialog_mousedoubleclickevent_callback = cb; }
    void setQFileDialog_MouseMoveEvent_Callback(QFileDialog_MouseMoveEvent_Callback cb) { qfiledialog_mousemoveevent_callback = cb; }
    void setQFileDialog_WheelEvent_Callback(QFileDialog_WheelEvent_Callback cb) { qfiledialog_wheelevent_callback = cb; }
    void setQFileDialog_KeyReleaseEvent_Callback(QFileDialog_KeyReleaseEvent_Callback cb) { qfiledialog_keyreleaseevent_callback = cb; }
    void setQFileDialog_FocusInEvent_Callback(QFileDialog_FocusInEvent_Callback cb) { qfiledialog_focusinevent_callback = cb; }
    void setQFileDialog_FocusOutEvent_Callback(QFileDialog_FocusOutEvent_Callback cb) { qfiledialog_focusoutevent_callback = cb; }
    void setQFileDialog_EnterEvent_Callback(QFileDialog_EnterEvent_Callback cb) { qfiledialog_enterevent_callback = cb; }
    void setQFileDialog_LeaveEvent_Callback(QFileDialog_LeaveEvent_Callback cb) { qfiledialog_leaveevent_callback = cb; }
    void setQFileDialog_PaintEvent_Callback(QFileDialog_PaintEvent_Callback cb) { qfiledialog_paintevent_callback = cb; }
    void setQFileDialog_MoveEvent_Callback(QFileDialog_MoveEvent_Callback cb) { qfiledialog_moveevent_callback = cb; }
    void setQFileDialog_TabletEvent_Callback(QFileDialog_TabletEvent_Callback cb) { qfiledialog_tabletevent_callback = cb; }
    void setQFileDialog_ActionEvent_Callback(QFileDialog_ActionEvent_Callback cb) { qfiledialog_actionevent_callback = cb; }
    void setQFileDialog_DragEnterEvent_Callback(QFileDialog_DragEnterEvent_Callback cb) { qfiledialog_dragenterevent_callback = cb; }
    void setQFileDialog_DragMoveEvent_Callback(QFileDialog_DragMoveEvent_Callback cb) { qfiledialog_dragmoveevent_callback = cb; }
    void setQFileDialog_DragLeaveEvent_Callback(QFileDialog_DragLeaveEvent_Callback cb) { qfiledialog_dragleaveevent_callback = cb; }
    void setQFileDialog_DropEvent_Callback(QFileDialog_DropEvent_Callback cb) { qfiledialog_dropevent_callback = cb; }
    void setQFileDialog_HideEvent_Callback(QFileDialog_HideEvent_Callback cb) { qfiledialog_hideevent_callback = cb; }
    void setQFileDialog_NativeEvent_Callback(QFileDialog_NativeEvent_Callback cb) { qfiledialog_nativeevent_callback = cb; }
    void setQFileDialog_Metric_Callback(QFileDialog_Metric_Callback cb) { qfiledialog_metric_callback = cb; }
    void setQFileDialog_InitPainter_Callback(QFileDialog_InitPainter_Callback cb) { qfiledialog_initpainter_callback = cb; }
    void setQFileDialog_Redirected_Callback(QFileDialog_Redirected_Callback cb) { qfiledialog_redirected_callback = cb; }
    void setQFileDialog_SharedPainter_Callback(QFileDialog_SharedPainter_Callback cb) { qfiledialog_sharedpainter_callback = cb; }
    void setQFileDialog_InputMethodEvent_Callback(QFileDialog_InputMethodEvent_Callback cb) { qfiledialog_inputmethodevent_callback = cb; }
    void setQFileDialog_InputMethodQuery_Callback(QFileDialog_InputMethodQuery_Callback cb) { qfiledialog_inputmethodquery_callback = cb; }
    void setQFileDialog_FocusNextPrevChild_Callback(QFileDialog_FocusNextPrevChild_Callback cb) { qfiledialog_focusnextprevchild_callback = cb; }
    void setQFileDialog_TimerEvent_Callback(QFileDialog_TimerEvent_Callback cb) { qfiledialog_timerevent_callback = cb; }
    void setQFileDialog_ChildEvent_Callback(QFileDialog_ChildEvent_Callback cb) { qfiledialog_childevent_callback = cb; }
    void setQFileDialog_CustomEvent_Callback(QFileDialog_CustomEvent_Callback cb) { qfiledialog_customevent_callback = cb; }
    void setQFileDialog_ConnectNotify_Callback(QFileDialog_ConnectNotify_Callback cb) { qfiledialog_connectnotify_callback = cb; }
    void setQFileDialog_DisconnectNotify_Callback(QFileDialog_DisconnectNotify_Callback cb) { qfiledialog_disconnectnotify_callback = cb; }
    void setQFileDialog_AdjustPosition_Callback(QFileDialog_AdjustPosition_Callback cb) { qfiledialog_adjustposition_callback = cb; }
    void setQFileDialog_UpdateMicroFocus_Callback(QFileDialog_UpdateMicroFocus_Callback cb) { qfiledialog_updatemicrofocus_callback = cb; }
    void setQFileDialog_Create_Callback(QFileDialog_Create_Callback cb) { qfiledialog_create_callback = cb; }
    void setQFileDialog_Destroy_Callback(QFileDialog_Destroy_Callback cb) { qfiledialog_destroy_callback = cb; }
    void setQFileDialog_FocusNextChild_Callback(QFileDialog_FocusNextChild_Callback cb) { qfiledialog_focusnextchild_callback = cb; }
    void setQFileDialog_FocusPreviousChild_Callback(QFileDialog_FocusPreviousChild_Callback cb) { qfiledialog_focuspreviouschild_callback = cb; }
    void setQFileDialog_Sender_Callback(QFileDialog_Sender_Callback cb) { qfiledialog_sender_callback = cb; }
    void setQFileDialog_SenderSignalIndex_Callback(QFileDialog_SenderSignalIndex_Callback cb) { qfiledialog_sendersignalindex_callback = cb; }
    void setQFileDialog_Receivers_Callback(QFileDialog_Receivers_Callback cb) { qfiledialog_receivers_callback = cb; }
    void setQFileDialog_IsSignalConnected_Callback(QFileDialog_IsSignalConnected_Callback cb) { qfiledialog_issignalconnected_callback = cb; }

    // Base flag setters
    void setQFileDialog_Metacall_IsBase(bool value) const { qfiledialog_metacall_isbase = value; }
    void setQFileDialog_SetVisible_IsBase(bool value) const { qfiledialog_setvisible_isbase = value; }
    void setQFileDialog_Done_IsBase(bool value) const { qfiledialog_done_isbase = value; }
    void setQFileDialog_Accept_IsBase(bool value) const { qfiledialog_accept_isbase = value; }
    void setQFileDialog_ChangeEvent_IsBase(bool value) const { qfiledialog_changeevent_isbase = value; }
    void setQFileDialog_SizeHint_IsBase(bool value) const { qfiledialog_sizehint_isbase = value; }
    void setQFileDialog_MinimumSizeHint_IsBase(bool value) const { qfiledialog_minimumsizehint_isbase = value; }
    void setQFileDialog_Open_IsBase(bool value) const { qfiledialog_open_isbase = value; }
    void setQFileDialog_Exec_IsBase(bool value) const { qfiledialog_exec_isbase = value; }
    void setQFileDialog_Reject_IsBase(bool value) const { qfiledialog_reject_isbase = value; }
    void setQFileDialog_KeyPressEvent_IsBase(bool value) const { qfiledialog_keypressevent_isbase = value; }
    void setQFileDialog_CloseEvent_IsBase(bool value) const { qfiledialog_closeevent_isbase = value; }
    void setQFileDialog_ShowEvent_IsBase(bool value) const { qfiledialog_showevent_isbase = value; }
    void setQFileDialog_ResizeEvent_IsBase(bool value) const { qfiledialog_resizeevent_isbase = value; }
    void setQFileDialog_ContextMenuEvent_IsBase(bool value) const { qfiledialog_contextmenuevent_isbase = value; }
    void setQFileDialog_EventFilter_IsBase(bool value) const { qfiledialog_eventfilter_isbase = value; }
    void setQFileDialog_DevType_IsBase(bool value) const { qfiledialog_devtype_isbase = value; }
    void setQFileDialog_HeightForWidth_IsBase(bool value) const { qfiledialog_heightforwidth_isbase = value; }
    void setQFileDialog_HasHeightForWidth_IsBase(bool value) const { qfiledialog_hasheightforwidth_isbase = value; }
    void setQFileDialog_PaintEngine_IsBase(bool value) const { qfiledialog_paintengine_isbase = value; }
    void setQFileDialog_Event_IsBase(bool value) const { qfiledialog_event_isbase = value; }
    void setQFileDialog_MousePressEvent_IsBase(bool value) const { qfiledialog_mousepressevent_isbase = value; }
    void setQFileDialog_MouseReleaseEvent_IsBase(bool value) const { qfiledialog_mousereleaseevent_isbase = value; }
    void setQFileDialog_MouseDoubleClickEvent_IsBase(bool value) const { qfiledialog_mousedoubleclickevent_isbase = value; }
    void setQFileDialog_MouseMoveEvent_IsBase(bool value) const { qfiledialog_mousemoveevent_isbase = value; }
    void setQFileDialog_WheelEvent_IsBase(bool value) const { qfiledialog_wheelevent_isbase = value; }
    void setQFileDialog_KeyReleaseEvent_IsBase(bool value) const { qfiledialog_keyreleaseevent_isbase = value; }
    void setQFileDialog_FocusInEvent_IsBase(bool value) const { qfiledialog_focusinevent_isbase = value; }
    void setQFileDialog_FocusOutEvent_IsBase(bool value) const { qfiledialog_focusoutevent_isbase = value; }
    void setQFileDialog_EnterEvent_IsBase(bool value) const { qfiledialog_enterevent_isbase = value; }
    void setQFileDialog_LeaveEvent_IsBase(bool value) const { qfiledialog_leaveevent_isbase = value; }
    void setQFileDialog_PaintEvent_IsBase(bool value) const { qfiledialog_paintevent_isbase = value; }
    void setQFileDialog_MoveEvent_IsBase(bool value) const { qfiledialog_moveevent_isbase = value; }
    void setQFileDialog_TabletEvent_IsBase(bool value) const { qfiledialog_tabletevent_isbase = value; }
    void setQFileDialog_ActionEvent_IsBase(bool value) const { qfiledialog_actionevent_isbase = value; }
    void setQFileDialog_DragEnterEvent_IsBase(bool value) const { qfiledialog_dragenterevent_isbase = value; }
    void setQFileDialog_DragMoveEvent_IsBase(bool value) const { qfiledialog_dragmoveevent_isbase = value; }
    void setQFileDialog_DragLeaveEvent_IsBase(bool value) const { qfiledialog_dragleaveevent_isbase = value; }
    void setQFileDialog_DropEvent_IsBase(bool value) const { qfiledialog_dropevent_isbase = value; }
    void setQFileDialog_HideEvent_IsBase(bool value) const { qfiledialog_hideevent_isbase = value; }
    void setQFileDialog_NativeEvent_IsBase(bool value) const { qfiledialog_nativeevent_isbase = value; }
    void setQFileDialog_Metric_IsBase(bool value) const { qfiledialog_metric_isbase = value; }
    void setQFileDialog_InitPainter_IsBase(bool value) const { qfiledialog_initpainter_isbase = value; }
    void setQFileDialog_Redirected_IsBase(bool value) const { qfiledialog_redirected_isbase = value; }
    void setQFileDialog_SharedPainter_IsBase(bool value) const { qfiledialog_sharedpainter_isbase = value; }
    void setQFileDialog_InputMethodEvent_IsBase(bool value) const { qfiledialog_inputmethodevent_isbase = value; }
    void setQFileDialog_InputMethodQuery_IsBase(bool value) const { qfiledialog_inputmethodquery_isbase = value; }
    void setQFileDialog_FocusNextPrevChild_IsBase(bool value) const { qfiledialog_focusnextprevchild_isbase = value; }
    void setQFileDialog_TimerEvent_IsBase(bool value) const { qfiledialog_timerevent_isbase = value; }
    void setQFileDialog_ChildEvent_IsBase(bool value) const { qfiledialog_childevent_isbase = value; }
    void setQFileDialog_CustomEvent_IsBase(bool value) const { qfiledialog_customevent_isbase = value; }
    void setQFileDialog_ConnectNotify_IsBase(bool value) const { qfiledialog_connectnotify_isbase = value; }
    void setQFileDialog_DisconnectNotify_IsBase(bool value) const { qfiledialog_disconnectnotify_isbase = value; }
    void setQFileDialog_AdjustPosition_IsBase(bool value) const { qfiledialog_adjustposition_isbase = value; }
    void setQFileDialog_UpdateMicroFocus_IsBase(bool value) const { qfiledialog_updatemicrofocus_isbase = value; }
    void setQFileDialog_Create_IsBase(bool value) const { qfiledialog_create_isbase = value; }
    void setQFileDialog_Destroy_IsBase(bool value) const { qfiledialog_destroy_isbase = value; }
    void setQFileDialog_FocusNextChild_IsBase(bool value) const { qfiledialog_focusnextchild_isbase = value; }
    void setQFileDialog_FocusPreviousChild_IsBase(bool value) const { qfiledialog_focuspreviouschild_isbase = value; }
    void setQFileDialog_Sender_IsBase(bool value) const { qfiledialog_sender_isbase = value; }
    void setQFileDialog_SenderSignalIndex_IsBase(bool value) const { qfiledialog_sendersignalindex_isbase = value; }
    void setQFileDialog_Receivers_IsBase(bool value) const { qfiledialog_receivers_isbase = value; }
    void setQFileDialog_IsSignalConnected_IsBase(bool value) const { qfiledialog_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qfiledialog_metacall_isbase) {
            qfiledialog_metacall_isbase = false;
            return QFileDialog::qt_metacall(param1, param2, param3);
        } else if (qfiledialog_metacall_callback != nullptr) {
            return qfiledialog_metacall_callback(this, param1, param2, param3);
        } else {
            return QFileDialog::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qfiledialog_setvisible_isbase) {
            qfiledialog_setvisible_isbase = false;
            QFileDialog::setVisible(visible);
        } else if (qfiledialog_setvisible_callback != nullptr) {
            qfiledialog_setvisible_callback(this, visible);
        } else {
            QFileDialog::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int result) override {
        if (qfiledialog_done_isbase) {
            qfiledialog_done_isbase = false;
            QFileDialog::done(result);
        } else if (qfiledialog_done_callback != nullptr) {
            qfiledialog_done_callback(this, result);
        } else {
            QFileDialog::done(result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (qfiledialog_accept_isbase) {
            qfiledialog_accept_isbase = false;
            QFileDialog::accept();
        } else if (qfiledialog_accept_callback != nullptr) {
            qfiledialog_accept_callback();
        } else {
            QFileDialog::accept();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (qfiledialog_changeevent_isbase) {
            qfiledialog_changeevent_isbase = false;
            QFileDialog::changeEvent(e);
        } else if (qfiledialog_changeevent_callback != nullptr) {
            qfiledialog_changeevent_callback(this, e);
        } else {
            QFileDialog::changeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qfiledialog_sizehint_isbase) {
            qfiledialog_sizehint_isbase = false;
            return QFileDialog::sizeHint();
        } else if (qfiledialog_sizehint_callback != nullptr) {
            return qfiledialog_sizehint_callback();
        } else {
            return QFileDialog::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qfiledialog_minimumsizehint_isbase) {
            qfiledialog_minimumsizehint_isbase = false;
            return QFileDialog::minimumSizeHint();
        } else if (qfiledialog_minimumsizehint_callback != nullptr) {
            return qfiledialog_minimumsizehint_callback();
        } else {
            return QFileDialog::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (qfiledialog_open_isbase) {
            qfiledialog_open_isbase = false;
            QFileDialog::open();
        } else if (qfiledialog_open_callback != nullptr) {
            qfiledialog_open_callback();
        } else {
            QFileDialog::open();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (qfiledialog_exec_isbase) {
            qfiledialog_exec_isbase = false;
            return QFileDialog::exec();
        } else if (qfiledialog_exec_callback != nullptr) {
            return qfiledialog_exec_callback();
        } else {
            return QFileDialog::exec();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (qfiledialog_reject_isbase) {
            qfiledialog_reject_isbase = false;
            QFileDialog::reject();
        } else if (qfiledialog_reject_callback != nullptr) {
            qfiledialog_reject_callback();
        } else {
            QFileDialog::reject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qfiledialog_keypressevent_isbase) {
            qfiledialog_keypressevent_isbase = false;
            QFileDialog::keyPressEvent(param1);
        } else if (qfiledialog_keypressevent_callback != nullptr) {
            qfiledialog_keypressevent_callback(this, param1);
        } else {
            QFileDialog::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (qfiledialog_closeevent_isbase) {
            qfiledialog_closeevent_isbase = false;
            QFileDialog::closeEvent(param1);
        } else if (qfiledialog_closeevent_callback != nullptr) {
            qfiledialog_closeevent_callback(this, param1);
        } else {
            QFileDialog::closeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qfiledialog_showevent_isbase) {
            qfiledialog_showevent_isbase = false;
            QFileDialog::showEvent(param1);
        } else if (qfiledialog_showevent_callback != nullptr) {
            qfiledialog_showevent_callback(this, param1);
        } else {
            QFileDialog::showEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qfiledialog_resizeevent_isbase) {
            qfiledialog_resizeevent_isbase = false;
            QFileDialog::resizeEvent(param1);
        } else if (qfiledialog_resizeevent_callback != nullptr) {
            qfiledialog_resizeevent_callback(this, param1);
        } else {
            QFileDialog::resizeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qfiledialog_contextmenuevent_isbase) {
            qfiledialog_contextmenuevent_isbase = false;
            QFileDialog::contextMenuEvent(param1);
        } else if (qfiledialog_contextmenuevent_callback != nullptr) {
            qfiledialog_contextmenuevent_callback(this, param1);
        } else {
            QFileDialog::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qfiledialog_eventfilter_isbase) {
            qfiledialog_eventfilter_isbase = false;
            return QFileDialog::eventFilter(param1, param2);
        } else if (qfiledialog_eventfilter_callback != nullptr) {
            return qfiledialog_eventfilter_callback(this, param1, param2);
        } else {
            return QFileDialog::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qfiledialog_devtype_isbase) {
            qfiledialog_devtype_isbase = false;
            return QFileDialog::devType();
        } else if (qfiledialog_devtype_callback != nullptr) {
            return qfiledialog_devtype_callback();
        } else {
            return QFileDialog::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qfiledialog_heightforwidth_isbase) {
            qfiledialog_heightforwidth_isbase = false;
            return QFileDialog::heightForWidth(param1);
        } else if (qfiledialog_heightforwidth_callback != nullptr) {
            return qfiledialog_heightforwidth_callback(this, param1);
        } else {
            return QFileDialog::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qfiledialog_hasheightforwidth_isbase) {
            qfiledialog_hasheightforwidth_isbase = false;
            return QFileDialog::hasHeightForWidth();
        } else if (qfiledialog_hasheightforwidth_callback != nullptr) {
            return qfiledialog_hasheightforwidth_callback();
        } else {
            return QFileDialog::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qfiledialog_paintengine_isbase) {
            qfiledialog_paintengine_isbase = false;
            return QFileDialog::paintEngine();
        } else if (qfiledialog_paintengine_callback != nullptr) {
            return qfiledialog_paintengine_callback();
        } else {
            return QFileDialog::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qfiledialog_event_isbase) {
            qfiledialog_event_isbase = false;
            return QFileDialog::event(event);
        } else if (qfiledialog_event_callback != nullptr) {
            return qfiledialog_event_callback(this, event);
        } else {
            return QFileDialog::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qfiledialog_mousepressevent_isbase) {
            qfiledialog_mousepressevent_isbase = false;
            QFileDialog::mousePressEvent(event);
        } else if (qfiledialog_mousepressevent_callback != nullptr) {
            qfiledialog_mousepressevent_callback(this, event);
        } else {
            QFileDialog::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qfiledialog_mousereleaseevent_isbase) {
            qfiledialog_mousereleaseevent_isbase = false;
            QFileDialog::mouseReleaseEvent(event);
        } else if (qfiledialog_mousereleaseevent_callback != nullptr) {
            qfiledialog_mousereleaseevent_callback(this, event);
        } else {
            QFileDialog::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qfiledialog_mousedoubleclickevent_isbase) {
            qfiledialog_mousedoubleclickevent_isbase = false;
            QFileDialog::mouseDoubleClickEvent(event);
        } else if (qfiledialog_mousedoubleclickevent_callback != nullptr) {
            qfiledialog_mousedoubleclickevent_callback(this, event);
        } else {
            QFileDialog::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qfiledialog_mousemoveevent_isbase) {
            qfiledialog_mousemoveevent_isbase = false;
            QFileDialog::mouseMoveEvent(event);
        } else if (qfiledialog_mousemoveevent_callback != nullptr) {
            qfiledialog_mousemoveevent_callback(this, event);
        } else {
            QFileDialog::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qfiledialog_wheelevent_isbase) {
            qfiledialog_wheelevent_isbase = false;
            QFileDialog::wheelEvent(event);
        } else if (qfiledialog_wheelevent_callback != nullptr) {
            qfiledialog_wheelevent_callback(this, event);
        } else {
            QFileDialog::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qfiledialog_keyreleaseevent_isbase) {
            qfiledialog_keyreleaseevent_isbase = false;
            QFileDialog::keyReleaseEvent(event);
        } else if (qfiledialog_keyreleaseevent_callback != nullptr) {
            qfiledialog_keyreleaseevent_callback(this, event);
        } else {
            QFileDialog::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qfiledialog_focusinevent_isbase) {
            qfiledialog_focusinevent_isbase = false;
            QFileDialog::focusInEvent(event);
        } else if (qfiledialog_focusinevent_callback != nullptr) {
            qfiledialog_focusinevent_callback(this, event);
        } else {
            QFileDialog::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qfiledialog_focusoutevent_isbase) {
            qfiledialog_focusoutevent_isbase = false;
            QFileDialog::focusOutEvent(event);
        } else if (qfiledialog_focusoutevent_callback != nullptr) {
            qfiledialog_focusoutevent_callback(this, event);
        } else {
            QFileDialog::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qfiledialog_enterevent_isbase) {
            qfiledialog_enterevent_isbase = false;
            QFileDialog::enterEvent(event);
        } else if (qfiledialog_enterevent_callback != nullptr) {
            qfiledialog_enterevent_callback(this, event);
        } else {
            QFileDialog::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qfiledialog_leaveevent_isbase) {
            qfiledialog_leaveevent_isbase = false;
            QFileDialog::leaveEvent(event);
        } else if (qfiledialog_leaveevent_callback != nullptr) {
            qfiledialog_leaveevent_callback(this, event);
        } else {
            QFileDialog::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qfiledialog_paintevent_isbase) {
            qfiledialog_paintevent_isbase = false;
            QFileDialog::paintEvent(event);
        } else if (qfiledialog_paintevent_callback != nullptr) {
            qfiledialog_paintevent_callback(this, event);
        } else {
            QFileDialog::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qfiledialog_moveevent_isbase) {
            qfiledialog_moveevent_isbase = false;
            QFileDialog::moveEvent(event);
        } else if (qfiledialog_moveevent_callback != nullptr) {
            qfiledialog_moveevent_callback(this, event);
        } else {
            QFileDialog::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qfiledialog_tabletevent_isbase) {
            qfiledialog_tabletevent_isbase = false;
            QFileDialog::tabletEvent(event);
        } else if (qfiledialog_tabletevent_callback != nullptr) {
            qfiledialog_tabletevent_callback(this, event);
        } else {
            QFileDialog::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qfiledialog_actionevent_isbase) {
            qfiledialog_actionevent_isbase = false;
            QFileDialog::actionEvent(event);
        } else if (qfiledialog_actionevent_callback != nullptr) {
            qfiledialog_actionevent_callback(this, event);
        } else {
            QFileDialog::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qfiledialog_dragenterevent_isbase) {
            qfiledialog_dragenterevent_isbase = false;
            QFileDialog::dragEnterEvent(event);
        } else if (qfiledialog_dragenterevent_callback != nullptr) {
            qfiledialog_dragenterevent_callback(this, event);
        } else {
            QFileDialog::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qfiledialog_dragmoveevent_isbase) {
            qfiledialog_dragmoveevent_isbase = false;
            QFileDialog::dragMoveEvent(event);
        } else if (qfiledialog_dragmoveevent_callback != nullptr) {
            qfiledialog_dragmoveevent_callback(this, event);
        } else {
            QFileDialog::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qfiledialog_dragleaveevent_isbase) {
            qfiledialog_dragleaveevent_isbase = false;
            QFileDialog::dragLeaveEvent(event);
        } else if (qfiledialog_dragleaveevent_callback != nullptr) {
            qfiledialog_dragleaveevent_callback(this, event);
        } else {
            QFileDialog::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qfiledialog_dropevent_isbase) {
            qfiledialog_dropevent_isbase = false;
            QFileDialog::dropEvent(event);
        } else if (qfiledialog_dropevent_callback != nullptr) {
            qfiledialog_dropevent_callback(this, event);
        } else {
            QFileDialog::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qfiledialog_hideevent_isbase) {
            qfiledialog_hideevent_isbase = false;
            QFileDialog::hideEvent(event);
        } else if (qfiledialog_hideevent_callback != nullptr) {
            qfiledialog_hideevent_callback(this, event);
        } else {
            QFileDialog::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qfiledialog_nativeevent_isbase) {
            qfiledialog_nativeevent_isbase = false;
            return QFileDialog::nativeEvent(eventType, message, result);
        } else if (qfiledialog_nativeevent_callback != nullptr) {
            return qfiledialog_nativeevent_callback(this, eventType, message, result);
        } else {
            return QFileDialog::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qfiledialog_metric_isbase) {
            qfiledialog_metric_isbase = false;
            return QFileDialog::metric(param1);
        } else if (qfiledialog_metric_callback != nullptr) {
            return qfiledialog_metric_callback(this, param1);
        } else {
            return QFileDialog::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qfiledialog_initpainter_isbase) {
            qfiledialog_initpainter_isbase = false;
            QFileDialog::initPainter(painter);
        } else if (qfiledialog_initpainter_callback != nullptr) {
            qfiledialog_initpainter_callback(this, painter);
        } else {
            QFileDialog::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qfiledialog_redirected_isbase) {
            qfiledialog_redirected_isbase = false;
            return QFileDialog::redirected(offset);
        } else if (qfiledialog_redirected_callback != nullptr) {
            return qfiledialog_redirected_callback(this, offset);
        } else {
            return QFileDialog::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qfiledialog_sharedpainter_isbase) {
            qfiledialog_sharedpainter_isbase = false;
            return QFileDialog::sharedPainter();
        } else if (qfiledialog_sharedpainter_callback != nullptr) {
            return qfiledialog_sharedpainter_callback();
        } else {
            return QFileDialog::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qfiledialog_inputmethodevent_isbase) {
            qfiledialog_inputmethodevent_isbase = false;
            QFileDialog::inputMethodEvent(param1);
        } else if (qfiledialog_inputmethodevent_callback != nullptr) {
            qfiledialog_inputmethodevent_callback(this, param1);
        } else {
            QFileDialog::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qfiledialog_inputmethodquery_isbase) {
            qfiledialog_inputmethodquery_isbase = false;
            return QFileDialog::inputMethodQuery(param1);
        } else if (qfiledialog_inputmethodquery_callback != nullptr) {
            return qfiledialog_inputmethodquery_callback(this, param1);
        } else {
            return QFileDialog::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qfiledialog_focusnextprevchild_isbase) {
            qfiledialog_focusnextprevchild_isbase = false;
            return QFileDialog::focusNextPrevChild(next);
        } else if (qfiledialog_focusnextprevchild_callback != nullptr) {
            return qfiledialog_focusnextprevchild_callback(this, next);
        } else {
            return QFileDialog::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qfiledialog_timerevent_isbase) {
            qfiledialog_timerevent_isbase = false;
            QFileDialog::timerEvent(event);
        } else if (qfiledialog_timerevent_callback != nullptr) {
            qfiledialog_timerevent_callback(this, event);
        } else {
            QFileDialog::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qfiledialog_childevent_isbase) {
            qfiledialog_childevent_isbase = false;
            QFileDialog::childEvent(event);
        } else if (qfiledialog_childevent_callback != nullptr) {
            qfiledialog_childevent_callback(this, event);
        } else {
            QFileDialog::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qfiledialog_customevent_isbase) {
            qfiledialog_customevent_isbase = false;
            QFileDialog::customEvent(event);
        } else if (qfiledialog_customevent_callback != nullptr) {
            qfiledialog_customevent_callback(this, event);
        } else {
            QFileDialog::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qfiledialog_connectnotify_isbase) {
            qfiledialog_connectnotify_isbase = false;
            QFileDialog::connectNotify(signal);
        } else if (qfiledialog_connectnotify_callback != nullptr) {
            qfiledialog_connectnotify_callback(this, signal);
        } else {
            QFileDialog::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qfiledialog_disconnectnotify_isbase) {
            qfiledialog_disconnectnotify_isbase = false;
            QFileDialog::disconnectNotify(signal);
        } else if (qfiledialog_disconnectnotify_callback != nullptr) {
            qfiledialog_disconnectnotify_callback(this, signal);
        } else {
            QFileDialog::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (qfiledialog_adjustposition_isbase) {
            qfiledialog_adjustposition_isbase = false;
            QFileDialog::adjustPosition(param1);
        } else if (qfiledialog_adjustposition_callback != nullptr) {
            qfiledialog_adjustposition_callback(this, param1);
        } else {
            QFileDialog::adjustPosition(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qfiledialog_updatemicrofocus_isbase) {
            qfiledialog_updatemicrofocus_isbase = false;
            QFileDialog::updateMicroFocus();
        } else if (qfiledialog_updatemicrofocus_callback != nullptr) {
            qfiledialog_updatemicrofocus_callback();
        } else {
            QFileDialog::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qfiledialog_create_isbase) {
            qfiledialog_create_isbase = false;
            QFileDialog::create();
        } else if (qfiledialog_create_callback != nullptr) {
            qfiledialog_create_callback();
        } else {
            QFileDialog::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qfiledialog_destroy_isbase) {
            qfiledialog_destroy_isbase = false;
            QFileDialog::destroy();
        } else if (qfiledialog_destroy_callback != nullptr) {
            qfiledialog_destroy_callback();
        } else {
            QFileDialog::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qfiledialog_focusnextchild_isbase) {
            qfiledialog_focusnextchild_isbase = false;
            return QFileDialog::focusNextChild();
        } else if (qfiledialog_focusnextchild_callback != nullptr) {
            return qfiledialog_focusnextchild_callback();
        } else {
            return QFileDialog::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qfiledialog_focuspreviouschild_isbase) {
            qfiledialog_focuspreviouschild_isbase = false;
            return QFileDialog::focusPreviousChild();
        } else if (qfiledialog_focuspreviouschild_callback != nullptr) {
            return qfiledialog_focuspreviouschild_callback();
        } else {
            return QFileDialog::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qfiledialog_sender_isbase) {
            qfiledialog_sender_isbase = false;
            return QFileDialog::sender();
        } else if (qfiledialog_sender_callback != nullptr) {
            return qfiledialog_sender_callback();
        } else {
            return QFileDialog::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qfiledialog_sendersignalindex_isbase) {
            qfiledialog_sendersignalindex_isbase = false;
            return QFileDialog::senderSignalIndex();
        } else if (qfiledialog_sendersignalindex_callback != nullptr) {
            return qfiledialog_sendersignalindex_callback();
        } else {
            return QFileDialog::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qfiledialog_receivers_isbase) {
            qfiledialog_receivers_isbase = false;
            return QFileDialog::receivers(signal);
        } else if (qfiledialog_receivers_callback != nullptr) {
            return qfiledialog_receivers_callback(this, signal);
        } else {
            return QFileDialog::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qfiledialog_issignalconnected_isbase) {
            qfiledialog_issignalconnected_isbase = false;
            return QFileDialog::isSignalConnected(signal);
        } else if (qfiledialog_issignalconnected_callback != nullptr) {
            return qfiledialog_issignalconnected_callback(this, signal);
        } else {
            return QFileDialog::isSignalConnected(signal);
        }
    }
};

#endif
