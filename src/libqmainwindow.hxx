#pragma once
#ifndef SRCC_LIBVIRTUALQMAINWINDOW_H
#define SRCC_LIBVIRTUALQMAINWINDOW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QMainWindow so that we can call protected methods
class VirtualQMainWindow : public QMainWindow {

  public:
    // Virtual class public types (including callbacks)
    using QMainWindow_Metacall_Callback = int (*)(QMainWindow*, QMetaObject::Call, int, void**);
    using QMainWindow_CreatePopupMenu_Callback = QMenu* (*)();
    using QMainWindow_ContextMenuEvent_Callback = void (*)(QMainWindow*, QContextMenuEvent*);
    using QMainWindow_Event_Callback = bool (*)(QMainWindow*, QEvent*);
    using QMainWindow_DevType_Callback = int (*)();
    using QMainWindow_SetVisible_Callback = void (*)(QMainWindow*, bool);
    using QMainWindow_SizeHint_Callback = QSize (*)();
    using QMainWindow_MinimumSizeHint_Callback = QSize (*)();
    using QMainWindow_HeightForWidth_Callback = int (*)(const QMainWindow*, int);
    using QMainWindow_HasHeightForWidth_Callback = bool (*)();
    using QMainWindow_PaintEngine_Callback = QPaintEngine* (*)();
    using QMainWindow_MousePressEvent_Callback = void (*)(QMainWindow*, QMouseEvent*);
    using QMainWindow_MouseReleaseEvent_Callback = void (*)(QMainWindow*, QMouseEvent*);
    using QMainWindow_MouseDoubleClickEvent_Callback = void (*)(QMainWindow*, QMouseEvent*);
    using QMainWindow_MouseMoveEvent_Callback = void (*)(QMainWindow*, QMouseEvent*);
    using QMainWindow_WheelEvent_Callback = void (*)(QMainWindow*, QWheelEvent*);
    using QMainWindow_KeyPressEvent_Callback = void (*)(QMainWindow*, QKeyEvent*);
    using QMainWindow_KeyReleaseEvent_Callback = void (*)(QMainWindow*, QKeyEvent*);
    using QMainWindow_FocusInEvent_Callback = void (*)(QMainWindow*, QFocusEvent*);
    using QMainWindow_FocusOutEvent_Callback = void (*)(QMainWindow*, QFocusEvent*);
    using QMainWindow_EnterEvent_Callback = void (*)(QMainWindow*, QEnterEvent*);
    using QMainWindow_LeaveEvent_Callback = void (*)(QMainWindow*, QEvent*);
    using QMainWindow_PaintEvent_Callback = void (*)(QMainWindow*, QPaintEvent*);
    using QMainWindow_MoveEvent_Callback = void (*)(QMainWindow*, QMoveEvent*);
    using QMainWindow_ResizeEvent_Callback = void (*)(QMainWindow*, QResizeEvent*);
    using QMainWindow_CloseEvent_Callback = void (*)(QMainWindow*, QCloseEvent*);
    using QMainWindow_TabletEvent_Callback = void (*)(QMainWindow*, QTabletEvent*);
    using QMainWindow_ActionEvent_Callback = void (*)(QMainWindow*, QActionEvent*);
    using QMainWindow_DragEnterEvent_Callback = void (*)(QMainWindow*, QDragEnterEvent*);
    using QMainWindow_DragMoveEvent_Callback = void (*)(QMainWindow*, QDragMoveEvent*);
    using QMainWindow_DragLeaveEvent_Callback = void (*)(QMainWindow*, QDragLeaveEvent*);
    using QMainWindow_DropEvent_Callback = void (*)(QMainWindow*, QDropEvent*);
    using QMainWindow_ShowEvent_Callback = void (*)(QMainWindow*, QShowEvent*);
    using QMainWindow_HideEvent_Callback = void (*)(QMainWindow*, QHideEvent*);
    using QMainWindow_NativeEvent_Callback = bool (*)(QMainWindow*, const QByteArray&, void*, qintptr*);
    using QMainWindow_ChangeEvent_Callback = void (*)(QMainWindow*, QEvent*);
    using QMainWindow_Metric_Callback = int (*)(const QMainWindow*, QPaintDevice::PaintDeviceMetric);
    using QMainWindow_InitPainter_Callback = void (*)(const QMainWindow*, QPainter*);
    using QMainWindow_Redirected_Callback = QPaintDevice* (*)(const QMainWindow*, QPoint*);
    using QMainWindow_SharedPainter_Callback = QPainter* (*)();
    using QMainWindow_InputMethodEvent_Callback = void (*)(QMainWindow*, QInputMethodEvent*);
    using QMainWindow_InputMethodQuery_Callback = QVariant (*)(const QMainWindow*, Qt::InputMethodQuery);
    using QMainWindow_FocusNextPrevChild_Callback = bool (*)(QMainWindow*, bool);
    using QMainWindow_EventFilter_Callback = bool (*)(QMainWindow*, QObject*, QEvent*);
    using QMainWindow_TimerEvent_Callback = void (*)(QMainWindow*, QTimerEvent*);
    using QMainWindow_ChildEvent_Callback = void (*)(QMainWindow*, QChildEvent*);
    using QMainWindow_CustomEvent_Callback = void (*)(QMainWindow*, QEvent*);
    using QMainWindow_ConnectNotify_Callback = void (*)(QMainWindow*, const QMetaMethod&);
    using QMainWindow_DisconnectNotify_Callback = void (*)(QMainWindow*, const QMetaMethod&);
    using QMainWindow_UpdateMicroFocus_Callback = void (*)();
    using QMainWindow_Create_Callback = void (*)();
    using QMainWindow_Destroy_Callback = void (*)();
    using QMainWindow_FocusNextChild_Callback = bool (*)();
    using QMainWindow_FocusPreviousChild_Callback = bool (*)();
    using QMainWindow_Sender_Callback = QObject* (*)();
    using QMainWindow_SenderSignalIndex_Callback = int (*)();
    using QMainWindow_Receivers_Callback = int (*)(const QMainWindow*, const char*);
    using QMainWindow_IsSignalConnected_Callback = bool (*)(const QMainWindow*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QMainWindow_Metacall_Callback qmainwindow_metacall_callback = nullptr;
    QMainWindow_CreatePopupMenu_Callback qmainwindow_createpopupmenu_callback = nullptr;
    QMainWindow_ContextMenuEvent_Callback qmainwindow_contextmenuevent_callback = nullptr;
    QMainWindow_Event_Callback qmainwindow_event_callback = nullptr;
    QMainWindow_DevType_Callback qmainwindow_devtype_callback = nullptr;
    QMainWindow_SetVisible_Callback qmainwindow_setvisible_callback = nullptr;
    QMainWindow_SizeHint_Callback qmainwindow_sizehint_callback = nullptr;
    QMainWindow_MinimumSizeHint_Callback qmainwindow_minimumsizehint_callback = nullptr;
    QMainWindow_HeightForWidth_Callback qmainwindow_heightforwidth_callback = nullptr;
    QMainWindow_HasHeightForWidth_Callback qmainwindow_hasheightforwidth_callback = nullptr;
    QMainWindow_PaintEngine_Callback qmainwindow_paintengine_callback = nullptr;
    QMainWindow_MousePressEvent_Callback qmainwindow_mousepressevent_callback = nullptr;
    QMainWindow_MouseReleaseEvent_Callback qmainwindow_mousereleaseevent_callback = nullptr;
    QMainWindow_MouseDoubleClickEvent_Callback qmainwindow_mousedoubleclickevent_callback = nullptr;
    QMainWindow_MouseMoveEvent_Callback qmainwindow_mousemoveevent_callback = nullptr;
    QMainWindow_WheelEvent_Callback qmainwindow_wheelevent_callback = nullptr;
    QMainWindow_KeyPressEvent_Callback qmainwindow_keypressevent_callback = nullptr;
    QMainWindow_KeyReleaseEvent_Callback qmainwindow_keyreleaseevent_callback = nullptr;
    QMainWindow_FocusInEvent_Callback qmainwindow_focusinevent_callback = nullptr;
    QMainWindow_FocusOutEvent_Callback qmainwindow_focusoutevent_callback = nullptr;
    QMainWindow_EnterEvent_Callback qmainwindow_enterevent_callback = nullptr;
    QMainWindow_LeaveEvent_Callback qmainwindow_leaveevent_callback = nullptr;
    QMainWindow_PaintEvent_Callback qmainwindow_paintevent_callback = nullptr;
    QMainWindow_MoveEvent_Callback qmainwindow_moveevent_callback = nullptr;
    QMainWindow_ResizeEvent_Callback qmainwindow_resizeevent_callback = nullptr;
    QMainWindow_CloseEvent_Callback qmainwindow_closeevent_callback = nullptr;
    QMainWindow_TabletEvent_Callback qmainwindow_tabletevent_callback = nullptr;
    QMainWindow_ActionEvent_Callback qmainwindow_actionevent_callback = nullptr;
    QMainWindow_DragEnterEvent_Callback qmainwindow_dragenterevent_callback = nullptr;
    QMainWindow_DragMoveEvent_Callback qmainwindow_dragmoveevent_callback = nullptr;
    QMainWindow_DragLeaveEvent_Callback qmainwindow_dragleaveevent_callback = nullptr;
    QMainWindow_DropEvent_Callback qmainwindow_dropevent_callback = nullptr;
    QMainWindow_ShowEvent_Callback qmainwindow_showevent_callback = nullptr;
    QMainWindow_HideEvent_Callback qmainwindow_hideevent_callback = nullptr;
    QMainWindow_NativeEvent_Callback qmainwindow_nativeevent_callback = nullptr;
    QMainWindow_ChangeEvent_Callback qmainwindow_changeevent_callback = nullptr;
    QMainWindow_Metric_Callback qmainwindow_metric_callback = nullptr;
    QMainWindow_InitPainter_Callback qmainwindow_initpainter_callback = nullptr;
    QMainWindow_Redirected_Callback qmainwindow_redirected_callback = nullptr;
    QMainWindow_SharedPainter_Callback qmainwindow_sharedpainter_callback = nullptr;
    QMainWindow_InputMethodEvent_Callback qmainwindow_inputmethodevent_callback = nullptr;
    QMainWindow_InputMethodQuery_Callback qmainwindow_inputmethodquery_callback = nullptr;
    QMainWindow_FocusNextPrevChild_Callback qmainwindow_focusnextprevchild_callback = nullptr;
    QMainWindow_EventFilter_Callback qmainwindow_eventfilter_callback = nullptr;
    QMainWindow_TimerEvent_Callback qmainwindow_timerevent_callback = nullptr;
    QMainWindow_ChildEvent_Callback qmainwindow_childevent_callback = nullptr;
    QMainWindow_CustomEvent_Callback qmainwindow_customevent_callback = nullptr;
    QMainWindow_ConnectNotify_Callback qmainwindow_connectnotify_callback = nullptr;
    QMainWindow_DisconnectNotify_Callback qmainwindow_disconnectnotify_callback = nullptr;
    QMainWindow_UpdateMicroFocus_Callback qmainwindow_updatemicrofocus_callback = nullptr;
    QMainWindow_Create_Callback qmainwindow_create_callback = nullptr;
    QMainWindow_Destroy_Callback qmainwindow_destroy_callback = nullptr;
    QMainWindow_FocusNextChild_Callback qmainwindow_focusnextchild_callback = nullptr;
    QMainWindow_FocusPreviousChild_Callback qmainwindow_focuspreviouschild_callback = nullptr;
    QMainWindow_Sender_Callback qmainwindow_sender_callback = nullptr;
    QMainWindow_SenderSignalIndex_Callback qmainwindow_sendersignalindex_callback = nullptr;
    QMainWindow_Receivers_Callback qmainwindow_receivers_callback = nullptr;
    QMainWindow_IsSignalConnected_Callback qmainwindow_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qmainwindow_metacall_isbase = false;
    mutable bool qmainwindow_createpopupmenu_isbase = false;
    mutable bool qmainwindow_contextmenuevent_isbase = false;
    mutable bool qmainwindow_event_isbase = false;
    mutable bool qmainwindow_devtype_isbase = false;
    mutable bool qmainwindow_setvisible_isbase = false;
    mutable bool qmainwindow_sizehint_isbase = false;
    mutable bool qmainwindow_minimumsizehint_isbase = false;
    mutable bool qmainwindow_heightforwidth_isbase = false;
    mutable bool qmainwindow_hasheightforwidth_isbase = false;
    mutable bool qmainwindow_paintengine_isbase = false;
    mutable bool qmainwindow_mousepressevent_isbase = false;
    mutable bool qmainwindow_mousereleaseevent_isbase = false;
    mutable bool qmainwindow_mousedoubleclickevent_isbase = false;
    mutable bool qmainwindow_mousemoveevent_isbase = false;
    mutable bool qmainwindow_wheelevent_isbase = false;
    mutable bool qmainwindow_keypressevent_isbase = false;
    mutable bool qmainwindow_keyreleaseevent_isbase = false;
    mutable bool qmainwindow_focusinevent_isbase = false;
    mutable bool qmainwindow_focusoutevent_isbase = false;
    mutable bool qmainwindow_enterevent_isbase = false;
    mutable bool qmainwindow_leaveevent_isbase = false;
    mutable bool qmainwindow_paintevent_isbase = false;
    mutable bool qmainwindow_moveevent_isbase = false;
    mutable bool qmainwindow_resizeevent_isbase = false;
    mutable bool qmainwindow_closeevent_isbase = false;
    mutable bool qmainwindow_tabletevent_isbase = false;
    mutable bool qmainwindow_actionevent_isbase = false;
    mutable bool qmainwindow_dragenterevent_isbase = false;
    mutable bool qmainwindow_dragmoveevent_isbase = false;
    mutable bool qmainwindow_dragleaveevent_isbase = false;
    mutable bool qmainwindow_dropevent_isbase = false;
    mutable bool qmainwindow_showevent_isbase = false;
    mutable bool qmainwindow_hideevent_isbase = false;
    mutable bool qmainwindow_nativeevent_isbase = false;
    mutable bool qmainwindow_changeevent_isbase = false;
    mutable bool qmainwindow_metric_isbase = false;
    mutable bool qmainwindow_initpainter_isbase = false;
    mutable bool qmainwindow_redirected_isbase = false;
    mutable bool qmainwindow_sharedpainter_isbase = false;
    mutable bool qmainwindow_inputmethodevent_isbase = false;
    mutable bool qmainwindow_inputmethodquery_isbase = false;
    mutable bool qmainwindow_focusnextprevchild_isbase = false;
    mutable bool qmainwindow_eventfilter_isbase = false;
    mutable bool qmainwindow_timerevent_isbase = false;
    mutable bool qmainwindow_childevent_isbase = false;
    mutable bool qmainwindow_customevent_isbase = false;
    mutable bool qmainwindow_connectnotify_isbase = false;
    mutable bool qmainwindow_disconnectnotify_isbase = false;
    mutable bool qmainwindow_updatemicrofocus_isbase = false;
    mutable bool qmainwindow_create_isbase = false;
    mutable bool qmainwindow_destroy_isbase = false;
    mutable bool qmainwindow_focusnextchild_isbase = false;
    mutable bool qmainwindow_focuspreviouschild_isbase = false;
    mutable bool qmainwindow_sender_isbase = false;
    mutable bool qmainwindow_sendersignalindex_isbase = false;
    mutable bool qmainwindow_receivers_isbase = false;
    mutable bool qmainwindow_issignalconnected_isbase = false;

  public:
    VirtualQMainWindow(QWidget* parent) : QMainWindow(parent){};
    VirtualQMainWindow() : QMainWindow(){};
    VirtualQMainWindow(QWidget* parent, Qt::WindowFlags flags) : QMainWindow(parent, flags){};

    ~VirtualQMainWindow() {
        qmainwindow_metacall_callback = nullptr;
        qmainwindow_createpopupmenu_callback = nullptr;
        qmainwindow_contextmenuevent_callback = nullptr;
        qmainwindow_event_callback = nullptr;
        qmainwindow_devtype_callback = nullptr;
        qmainwindow_setvisible_callback = nullptr;
        qmainwindow_sizehint_callback = nullptr;
        qmainwindow_minimumsizehint_callback = nullptr;
        qmainwindow_heightforwidth_callback = nullptr;
        qmainwindow_hasheightforwidth_callback = nullptr;
        qmainwindow_paintengine_callback = nullptr;
        qmainwindow_mousepressevent_callback = nullptr;
        qmainwindow_mousereleaseevent_callback = nullptr;
        qmainwindow_mousedoubleclickevent_callback = nullptr;
        qmainwindow_mousemoveevent_callback = nullptr;
        qmainwindow_wheelevent_callback = nullptr;
        qmainwindow_keypressevent_callback = nullptr;
        qmainwindow_keyreleaseevent_callback = nullptr;
        qmainwindow_focusinevent_callback = nullptr;
        qmainwindow_focusoutevent_callback = nullptr;
        qmainwindow_enterevent_callback = nullptr;
        qmainwindow_leaveevent_callback = nullptr;
        qmainwindow_paintevent_callback = nullptr;
        qmainwindow_moveevent_callback = nullptr;
        qmainwindow_resizeevent_callback = nullptr;
        qmainwindow_closeevent_callback = nullptr;
        qmainwindow_tabletevent_callback = nullptr;
        qmainwindow_actionevent_callback = nullptr;
        qmainwindow_dragenterevent_callback = nullptr;
        qmainwindow_dragmoveevent_callback = nullptr;
        qmainwindow_dragleaveevent_callback = nullptr;
        qmainwindow_dropevent_callback = nullptr;
        qmainwindow_showevent_callback = nullptr;
        qmainwindow_hideevent_callback = nullptr;
        qmainwindow_nativeevent_callback = nullptr;
        qmainwindow_changeevent_callback = nullptr;
        qmainwindow_metric_callback = nullptr;
        qmainwindow_initpainter_callback = nullptr;
        qmainwindow_redirected_callback = nullptr;
        qmainwindow_sharedpainter_callback = nullptr;
        qmainwindow_inputmethodevent_callback = nullptr;
        qmainwindow_inputmethodquery_callback = nullptr;
        qmainwindow_focusnextprevchild_callback = nullptr;
        qmainwindow_eventfilter_callback = nullptr;
        qmainwindow_timerevent_callback = nullptr;
        qmainwindow_childevent_callback = nullptr;
        qmainwindow_customevent_callback = nullptr;
        qmainwindow_connectnotify_callback = nullptr;
        qmainwindow_disconnectnotify_callback = nullptr;
        qmainwindow_updatemicrofocus_callback = nullptr;
        qmainwindow_create_callback = nullptr;
        qmainwindow_destroy_callback = nullptr;
        qmainwindow_focusnextchild_callback = nullptr;
        qmainwindow_focuspreviouschild_callback = nullptr;
        qmainwindow_sender_callback = nullptr;
        qmainwindow_sendersignalindex_callback = nullptr;
        qmainwindow_receivers_callback = nullptr;
        qmainwindow_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQMainWindow_Metacall_Callback(QMainWindow_Metacall_Callback cb) { qmainwindow_metacall_callback = cb; }
    void setQMainWindow_CreatePopupMenu_Callback(QMainWindow_CreatePopupMenu_Callback cb) { qmainwindow_createpopupmenu_callback = cb; }
    void setQMainWindow_ContextMenuEvent_Callback(QMainWindow_ContextMenuEvent_Callback cb) { qmainwindow_contextmenuevent_callback = cb; }
    void setQMainWindow_Event_Callback(QMainWindow_Event_Callback cb) { qmainwindow_event_callback = cb; }
    void setQMainWindow_DevType_Callback(QMainWindow_DevType_Callback cb) { qmainwindow_devtype_callback = cb; }
    void setQMainWindow_SetVisible_Callback(QMainWindow_SetVisible_Callback cb) { qmainwindow_setvisible_callback = cb; }
    void setQMainWindow_SizeHint_Callback(QMainWindow_SizeHint_Callback cb) { qmainwindow_sizehint_callback = cb; }
    void setQMainWindow_MinimumSizeHint_Callback(QMainWindow_MinimumSizeHint_Callback cb) { qmainwindow_minimumsizehint_callback = cb; }
    void setQMainWindow_HeightForWidth_Callback(QMainWindow_HeightForWidth_Callback cb) { qmainwindow_heightforwidth_callback = cb; }
    void setQMainWindow_HasHeightForWidth_Callback(QMainWindow_HasHeightForWidth_Callback cb) { qmainwindow_hasheightforwidth_callback = cb; }
    void setQMainWindow_PaintEngine_Callback(QMainWindow_PaintEngine_Callback cb) { qmainwindow_paintengine_callback = cb; }
    void setQMainWindow_MousePressEvent_Callback(QMainWindow_MousePressEvent_Callback cb) { qmainwindow_mousepressevent_callback = cb; }
    void setQMainWindow_MouseReleaseEvent_Callback(QMainWindow_MouseReleaseEvent_Callback cb) { qmainwindow_mousereleaseevent_callback = cb; }
    void setQMainWindow_MouseDoubleClickEvent_Callback(QMainWindow_MouseDoubleClickEvent_Callback cb) { qmainwindow_mousedoubleclickevent_callback = cb; }
    void setQMainWindow_MouseMoveEvent_Callback(QMainWindow_MouseMoveEvent_Callback cb) { qmainwindow_mousemoveevent_callback = cb; }
    void setQMainWindow_WheelEvent_Callback(QMainWindow_WheelEvent_Callback cb) { qmainwindow_wheelevent_callback = cb; }
    void setQMainWindow_KeyPressEvent_Callback(QMainWindow_KeyPressEvent_Callback cb) { qmainwindow_keypressevent_callback = cb; }
    void setQMainWindow_KeyReleaseEvent_Callback(QMainWindow_KeyReleaseEvent_Callback cb) { qmainwindow_keyreleaseevent_callback = cb; }
    void setQMainWindow_FocusInEvent_Callback(QMainWindow_FocusInEvent_Callback cb) { qmainwindow_focusinevent_callback = cb; }
    void setQMainWindow_FocusOutEvent_Callback(QMainWindow_FocusOutEvent_Callback cb) { qmainwindow_focusoutevent_callback = cb; }
    void setQMainWindow_EnterEvent_Callback(QMainWindow_EnterEvent_Callback cb) { qmainwindow_enterevent_callback = cb; }
    void setQMainWindow_LeaveEvent_Callback(QMainWindow_LeaveEvent_Callback cb) { qmainwindow_leaveevent_callback = cb; }
    void setQMainWindow_PaintEvent_Callback(QMainWindow_PaintEvent_Callback cb) { qmainwindow_paintevent_callback = cb; }
    void setQMainWindow_MoveEvent_Callback(QMainWindow_MoveEvent_Callback cb) { qmainwindow_moveevent_callback = cb; }
    void setQMainWindow_ResizeEvent_Callback(QMainWindow_ResizeEvent_Callback cb) { qmainwindow_resizeevent_callback = cb; }
    void setQMainWindow_CloseEvent_Callback(QMainWindow_CloseEvent_Callback cb) { qmainwindow_closeevent_callback = cb; }
    void setQMainWindow_TabletEvent_Callback(QMainWindow_TabletEvent_Callback cb) { qmainwindow_tabletevent_callback = cb; }
    void setQMainWindow_ActionEvent_Callback(QMainWindow_ActionEvent_Callback cb) { qmainwindow_actionevent_callback = cb; }
    void setQMainWindow_DragEnterEvent_Callback(QMainWindow_DragEnterEvent_Callback cb) { qmainwindow_dragenterevent_callback = cb; }
    void setQMainWindow_DragMoveEvent_Callback(QMainWindow_DragMoveEvent_Callback cb) { qmainwindow_dragmoveevent_callback = cb; }
    void setQMainWindow_DragLeaveEvent_Callback(QMainWindow_DragLeaveEvent_Callback cb) { qmainwindow_dragleaveevent_callback = cb; }
    void setQMainWindow_DropEvent_Callback(QMainWindow_DropEvent_Callback cb) { qmainwindow_dropevent_callback = cb; }
    void setQMainWindow_ShowEvent_Callback(QMainWindow_ShowEvent_Callback cb) { qmainwindow_showevent_callback = cb; }
    void setQMainWindow_HideEvent_Callback(QMainWindow_HideEvent_Callback cb) { qmainwindow_hideevent_callback = cb; }
    void setQMainWindow_NativeEvent_Callback(QMainWindow_NativeEvent_Callback cb) { qmainwindow_nativeevent_callback = cb; }
    void setQMainWindow_ChangeEvent_Callback(QMainWindow_ChangeEvent_Callback cb) { qmainwindow_changeevent_callback = cb; }
    void setQMainWindow_Metric_Callback(QMainWindow_Metric_Callback cb) { qmainwindow_metric_callback = cb; }
    void setQMainWindow_InitPainter_Callback(QMainWindow_InitPainter_Callback cb) { qmainwindow_initpainter_callback = cb; }
    void setQMainWindow_Redirected_Callback(QMainWindow_Redirected_Callback cb) { qmainwindow_redirected_callback = cb; }
    void setQMainWindow_SharedPainter_Callback(QMainWindow_SharedPainter_Callback cb) { qmainwindow_sharedpainter_callback = cb; }
    void setQMainWindow_InputMethodEvent_Callback(QMainWindow_InputMethodEvent_Callback cb) { qmainwindow_inputmethodevent_callback = cb; }
    void setQMainWindow_InputMethodQuery_Callback(QMainWindow_InputMethodQuery_Callback cb) { qmainwindow_inputmethodquery_callback = cb; }
    void setQMainWindow_FocusNextPrevChild_Callback(QMainWindow_FocusNextPrevChild_Callback cb) { qmainwindow_focusnextprevchild_callback = cb; }
    void setQMainWindow_EventFilter_Callback(QMainWindow_EventFilter_Callback cb) { qmainwindow_eventfilter_callback = cb; }
    void setQMainWindow_TimerEvent_Callback(QMainWindow_TimerEvent_Callback cb) { qmainwindow_timerevent_callback = cb; }
    void setQMainWindow_ChildEvent_Callback(QMainWindow_ChildEvent_Callback cb) { qmainwindow_childevent_callback = cb; }
    void setQMainWindow_CustomEvent_Callback(QMainWindow_CustomEvent_Callback cb) { qmainwindow_customevent_callback = cb; }
    void setQMainWindow_ConnectNotify_Callback(QMainWindow_ConnectNotify_Callback cb) { qmainwindow_connectnotify_callback = cb; }
    void setQMainWindow_DisconnectNotify_Callback(QMainWindow_DisconnectNotify_Callback cb) { qmainwindow_disconnectnotify_callback = cb; }
    void setQMainWindow_UpdateMicroFocus_Callback(QMainWindow_UpdateMicroFocus_Callback cb) { qmainwindow_updatemicrofocus_callback = cb; }
    void setQMainWindow_Create_Callback(QMainWindow_Create_Callback cb) { qmainwindow_create_callback = cb; }
    void setQMainWindow_Destroy_Callback(QMainWindow_Destroy_Callback cb) { qmainwindow_destroy_callback = cb; }
    void setQMainWindow_FocusNextChild_Callback(QMainWindow_FocusNextChild_Callback cb) { qmainwindow_focusnextchild_callback = cb; }
    void setQMainWindow_FocusPreviousChild_Callback(QMainWindow_FocusPreviousChild_Callback cb) { qmainwindow_focuspreviouschild_callback = cb; }
    void setQMainWindow_Sender_Callback(QMainWindow_Sender_Callback cb) { qmainwindow_sender_callback = cb; }
    void setQMainWindow_SenderSignalIndex_Callback(QMainWindow_SenderSignalIndex_Callback cb) { qmainwindow_sendersignalindex_callback = cb; }
    void setQMainWindow_Receivers_Callback(QMainWindow_Receivers_Callback cb) { qmainwindow_receivers_callback = cb; }
    void setQMainWindow_IsSignalConnected_Callback(QMainWindow_IsSignalConnected_Callback cb) { qmainwindow_issignalconnected_callback = cb; }

    // Base flag setters
    void setQMainWindow_Metacall_IsBase(bool value) const { qmainwindow_metacall_isbase = value; }
    void setQMainWindow_CreatePopupMenu_IsBase(bool value) const { qmainwindow_createpopupmenu_isbase = value; }
    void setQMainWindow_ContextMenuEvent_IsBase(bool value) const { qmainwindow_contextmenuevent_isbase = value; }
    void setQMainWindow_Event_IsBase(bool value) const { qmainwindow_event_isbase = value; }
    void setQMainWindow_DevType_IsBase(bool value) const { qmainwindow_devtype_isbase = value; }
    void setQMainWindow_SetVisible_IsBase(bool value) const { qmainwindow_setvisible_isbase = value; }
    void setQMainWindow_SizeHint_IsBase(bool value) const { qmainwindow_sizehint_isbase = value; }
    void setQMainWindow_MinimumSizeHint_IsBase(bool value) const { qmainwindow_minimumsizehint_isbase = value; }
    void setQMainWindow_HeightForWidth_IsBase(bool value) const { qmainwindow_heightforwidth_isbase = value; }
    void setQMainWindow_HasHeightForWidth_IsBase(bool value) const { qmainwindow_hasheightforwidth_isbase = value; }
    void setQMainWindow_PaintEngine_IsBase(bool value) const { qmainwindow_paintengine_isbase = value; }
    void setQMainWindow_MousePressEvent_IsBase(bool value) const { qmainwindow_mousepressevent_isbase = value; }
    void setQMainWindow_MouseReleaseEvent_IsBase(bool value) const { qmainwindow_mousereleaseevent_isbase = value; }
    void setQMainWindow_MouseDoubleClickEvent_IsBase(bool value) const { qmainwindow_mousedoubleclickevent_isbase = value; }
    void setQMainWindow_MouseMoveEvent_IsBase(bool value) const { qmainwindow_mousemoveevent_isbase = value; }
    void setQMainWindow_WheelEvent_IsBase(bool value) const { qmainwindow_wheelevent_isbase = value; }
    void setQMainWindow_KeyPressEvent_IsBase(bool value) const { qmainwindow_keypressevent_isbase = value; }
    void setQMainWindow_KeyReleaseEvent_IsBase(bool value) const { qmainwindow_keyreleaseevent_isbase = value; }
    void setQMainWindow_FocusInEvent_IsBase(bool value) const { qmainwindow_focusinevent_isbase = value; }
    void setQMainWindow_FocusOutEvent_IsBase(bool value) const { qmainwindow_focusoutevent_isbase = value; }
    void setQMainWindow_EnterEvent_IsBase(bool value) const { qmainwindow_enterevent_isbase = value; }
    void setQMainWindow_LeaveEvent_IsBase(bool value) const { qmainwindow_leaveevent_isbase = value; }
    void setQMainWindow_PaintEvent_IsBase(bool value) const { qmainwindow_paintevent_isbase = value; }
    void setQMainWindow_MoveEvent_IsBase(bool value) const { qmainwindow_moveevent_isbase = value; }
    void setQMainWindow_ResizeEvent_IsBase(bool value) const { qmainwindow_resizeevent_isbase = value; }
    void setQMainWindow_CloseEvent_IsBase(bool value) const { qmainwindow_closeevent_isbase = value; }
    void setQMainWindow_TabletEvent_IsBase(bool value) const { qmainwindow_tabletevent_isbase = value; }
    void setQMainWindow_ActionEvent_IsBase(bool value) const { qmainwindow_actionevent_isbase = value; }
    void setQMainWindow_DragEnterEvent_IsBase(bool value) const { qmainwindow_dragenterevent_isbase = value; }
    void setQMainWindow_DragMoveEvent_IsBase(bool value) const { qmainwindow_dragmoveevent_isbase = value; }
    void setQMainWindow_DragLeaveEvent_IsBase(bool value) const { qmainwindow_dragleaveevent_isbase = value; }
    void setQMainWindow_DropEvent_IsBase(bool value) const { qmainwindow_dropevent_isbase = value; }
    void setQMainWindow_ShowEvent_IsBase(bool value) const { qmainwindow_showevent_isbase = value; }
    void setQMainWindow_HideEvent_IsBase(bool value) const { qmainwindow_hideevent_isbase = value; }
    void setQMainWindow_NativeEvent_IsBase(bool value) const { qmainwindow_nativeevent_isbase = value; }
    void setQMainWindow_ChangeEvent_IsBase(bool value) const { qmainwindow_changeevent_isbase = value; }
    void setQMainWindow_Metric_IsBase(bool value) const { qmainwindow_metric_isbase = value; }
    void setQMainWindow_InitPainter_IsBase(bool value) const { qmainwindow_initpainter_isbase = value; }
    void setQMainWindow_Redirected_IsBase(bool value) const { qmainwindow_redirected_isbase = value; }
    void setQMainWindow_SharedPainter_IsBase(bool value) const { qmainwindow_sharedpainter_isbase = value; }
    void setQMainWindow_InputMethodEvent_IsBase(bool value) const { qmainwindow_inputmethodevent_isbase = value; }
    void setQMainWindow_InputMethodQuery_IsBase(bool value) const { qmainwindow_inputmethodquery_isbase = value; }
    void setQMainWindow_FocusNextPrevChild_IsBase(bool value) const { qmainwindow_focusnextprevchild_isbase = value; }
    void setQMainWindow_EventFilter_IsBase(bool value) const { qmainwindow_eventfilter_isbase = value; }
    void setQMainWindow_TimerEvent_IsBase(bool value) const { qmainwindow_timerevent_isbase = value; }
    void setQMainWindow_ChildEvent_IsBase(bool value) const { qmainwindow_childevent_isbase = value; }
    void setQMainWindow_CustomEvent_IsBase(bool value) const { qmainwindow_customevent_isbase = value; }
    void setQMainWindow_ConnectNotify_IsBase(bool value) const { qmainwindow_connectnotify_isbase = value; }
    void setQMainWindow_DisconnectNotify_IsBase(bool value) const { qmainwindow_disconnectnotify_isbase = value; }
    void setQMainWindow_UpdateMicroFocus_IsBase(bool value) const { qmainwindow_updatemicrofocus_isbase = value; }
    void setQMainWindow_Create_IsBase(bool value) const { qmainwindow_create_isbase = value; }
    void setQMainWindow_Destroy_IsBase(bool value) const { qmainwindow_destroy_isbase = value; }
    void setQMainWindow_FocusNextChild_IsBase(bool value) const { qmainwindow_focusnextchild_isbase = value; }
    void setQMainWindow_FocusPreviousChild_IsBase(bool value) const { qmainwindow_focuspreviouschild_isbase = value; }
    void setQMainWindow_Sender_IsBase(bool value) const { qmainwindow_sender_isbase = value; }
    void setQMainWindow_SenderSignalIndex_IsBase(bool value) const { qmainwindow_sendersignalindex_isbase = value; }
    void setQMainWindow_Receivers_IsBase(bool value) const { qmainwindow_receivers_isbase = value; }
    void setQMainWindow_IsSignalConnected_IsBase(bool value) const { qmainwindow_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qmainwindow_metacall_isbase) {
            qmainwindow_metacall_isbase = false;
            return QMainWindow::qt_metacall(param1, param2, param3);
        } else if (qmainwindow_metacall_callback != nullptr) {
            return qmainwindow_metacall_callback(this, param1, param2, param3);
        } else {
            return QMainWindow::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMenu* createPopupMenu() override {
        if (qmainwindow_createpopupmenu_isbase) {
            qmainwindow_createpopupmenu_isbase = false;
            return QMainWindow::createPopupMenu();
        } else if (qmainwindow_createpopupmenu_callback != nullptr) {
            return qmainwindow_createpopupmenu_callback();
        } else {
            return QMainWindow::createPopupMenu();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qmainwindow_contextmenuevent_isbase) {
            qmainwindow_contextmenuevent_isbase = false;
            QMainWindow::contextMenuEvent(event);
        } else if (qmainwindow_contextmenuevent_callback != nullptr) {
            qmainwindow_contextmenuevent_callback(this, event);
        } else {
            QMainWindow::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qmainwindow_event_isbase) {
            qmainwindow_event_isbase = false;
            return QMainWindow::event(event);
        } else if (qmainwindow_event_callback != nullptr) {
            return qmainwindow_event_callback(this, event);
        } else {
            return QMainWindow::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qmainwindow_devtype_isbase) {
            qmainwindow_devtype_isbase = false;
            return QMainWindow::devType();
        } else if (qmainwindow_devtype_callback != nullptr) {
            return qmainwindow_devtype_callback();
        } else {
            return QMainWindow::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qmainwindow_setvisible_isbase) {
            qmainwindow_setvisible_isbase = false;
            QMainWindow::setVisible(visible);
        } else if (qmainwindow_setvisible_callback != nullptr) {
            qmainwindow_setvisible_callback(this, visible);
        } else {
            QMainWindow::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qmainwindow_sizehint_isbase) {
            qmainwindow_sizehint_isbase = false;
            return QMainWindow::sizeHint();
        } else if (qmainwindow_sizehint_callback != nullptr) {
            return qmainwindow_sizehint_callback();
        } else {
            return QMainWindow::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qmainwindow_minimumsizehint_isbase) {
            qmainwindow_minimumsizehint_isbase = false;
            return QMainWindow::minimumSizeHint();
        } else if (qmainwindow_minimumsizehint_callback != nullptr) {
            return qmainwindow_minimumsizehint_callback();
        } else {
            return QMainWindow::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qmainwindow_heightforwidth_isbase) {
            qmainwindow_heightforwidth_isbase = false;
            return QMainWindow::heightForWidth(param1);
        } else if (qmainwindow_heightforwidth_callback != nullptr) {
            return qmainwindow_heightforwidth_callback(this, param1);
        } else {
            return QMainWindow::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qmainwindow_hasheightforwidth_isbase) {
            qmainwindow_hasheightforwidth_isbase = false;
            return QMainWindow::hasHeightForWidth();
        } else if (qmainwindow_hasheightforwidth_callback != nullptr) {
            return qmainwindow_hasheightforwidth_callback();
        } else {
            return QMainWindow::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qmainwindow_paintengine_isbase) {
            qmainwindow_paintengine_isbase = false;
            return QMainWindow::paintEngine();
        } else if (qmainwindow_paintengine_callback != nullptr) {
            return qmainwindow_paintengine_callback();
        } else {
            return QMainWindow::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qmainwindow_mousepressevent_isbase) {
            qmainwindow_mousepressevent_isbase = false;
            QMainWindow::mousePressEvent(event);
        } else if (qmainwindow_mousepressevent_callback != nullptr) {
            qmainwindow_mousepressevent_callback(this, event);
        } else {
            QMainWindow::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qmainwindow_mousereleaseevent_isbase) {
            qmainwindow_mousereleaseevent_isbase = false;
            QMainWindow::mouseReleaseEvent(event);
        } else if (qmainwindow_mousereleaseevent_callback != nullptr) {
            qmainwindow_mousereleaseevent_callback(this, event);
        } else {
            QMainWindow::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qmainwindow_mousedoubleclickevent_isbase) {
            qmainwindow_mousedoubleclickevent_isbase = false;
            QMainWindow::mouseDoubleClickEvent(event);
        } else if (qmainwindow_mousedoubleclickevent_callback != nullptr) {
            qmainwindow_mousedoubleclickevent_callback(this, event);
        } else {
            QMainWindow::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qmainwindow_mousemoveevent_isbase) {
            qmainwindow_mousemoveevent_isbase = false;
            QMainWindow::mouseMoveEvent(event);
        } else if (qmainwindow_mousemoveevent_callback != nullptr) {
            qmainwindow_mousemoveevent_callback(this, event);
        } else {
            QMainWindow::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qmainwindow_wheelevent_isbase) {
            qmainwindow_wheelevent_isbase = false;
            QMainWindow::wheelEvent(event);
        } else if (qmainwindow_wheelevent_callback != nullptr) {
            qmainwindow_wheelevent_callback(this, event);
        } else {
            QMainWindow::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qmainwindow_keypressevent_isbase) {
            qmainwindow_keypressevent_isbase = false;
            QMainWindow::keyPressEvent(event);
        } else if (qmainwindow_keypressevent_callback != nullptr) {
            qmainwindow_keypressevent_callback(this, event);
        } else {
            QMainWindow::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qmainwindow_keyreleaseevent_isbase) {
            qmainwindow_keyreleaseevent_isbase = false;
            QMainWindow::keyReleaseEvent(event);
        } else if (qmainwindow_keyreleaseevent_callback != nullptr) {
            qmainwindow_keyreleaseevent_callback(this, event);
        } else {
            QMainWindow::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qmainwindow_focusinevent_isbase) {
            qmainwindow_focusinevent_isbase = false;
            QMainWindow::focusInEvent(event);
        } else if (qmainwindow_focusinevent_callback != nullptr) {
            qmainwindow_focusinevent_callback(this, event);
        } else {
            QMainWindow::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qmainwindow_focusoutevent_isbase) {
            qmainwindow_focusoutevent_isbase = false;
            QMainWindow::focusOutEvent(event);
        } else if (qmainwindow_focusoutevent_callback != nullptr) {
            qmainwindow_focusoutevent_callback(this, event);
        } else {
            QMainWindow::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qmainwindow_enterevent_isbase) {
            qmainwindow_enterevent_isbase = false;
            QMainWindow::enterEvent(event);
        } else if (qmainwindow_enterevent_callback != nullptr) {
            qmainwindow_enterevent_callback(this, event);
        } else {
            QMainWindow::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qmainwindow_leaveevent_isbase) {
            qmainwindow_leaveevent_isbase = false;
            QMainWindow::leaveEvent(event);
        } else if (qmainwindow_leaveevent_callback != nullptr) {
            qmainwindow_leaveevent_callback(this, event);
        } else {
            QMainWindow::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qmainwindow_paintevent_isbase) {
            qmainwindow_paintevent_isbase = false;
            QMainWindow::paintEvent(event);
        } else if (qmainwindow_paintevent_callback != nullptr) {
            qmainwindow_paintevent_callback(this, event);
        } else {
            QMainWindow::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qmainwindow_moveevent_isbase) {
            qmainwindow_moveevent_isbase = false;
            QMainWindow::moveEvent(event);
        } else if (qmainwindow_moveevent_callback != nullptr) {
            qmainwindow_moveevent_callback(this, event);
        } else {
            QMainWindow::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qmainwindow_resizeevent_isbase) {
            qmainwindow_resizeevent_isbase = false;
            QMainWindow::resizeEvent(event);
        } else if (qmainwindow_resizeevent_callback != nullptr) {
            qmainwindow_resizeevent_callback(this, event);
        } else {
            QMainWindow::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qmainwindow_closeevent_isbase) {
            qmainwindow_closeevent_isbase = false;
            QMainWindow::closeEvent(event);
        } else if (qmainwindow_closeevent_callback != nullptr) {
            qmainwindow_closeevent_callback(this, event);
        } else {
            QMainWindow::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qmainwindow_tabletevent_isbase) {
            qmainwindow_tabletevent_isbase = false;
            QMainWindow::tabletEvent(event);
        } else if (qmainwindow_tabletevent_callback != nullptr) {
            qmainwindow_tabletevent_callback(this, event);
        } else {
            QMainWindow::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qmainwindow_actionevent_isbase) {
            qmainwindow_actionevent_isbase = false;
            QMainWindow::actionEvent(event);
        } else if (qmainwindow_actionevent_callback != nullptr) {
            qmainwindow_actionevent_callback(this, event);
        } else {
            QMainWindow::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qmainwindow_dragenterevent_isbase) {
            qmainwindow_dragenterevent_isbase = false;
            QMainWindow::dragEnterEvent(event);
        } else if (qmainwindow_dragenterevent_callback != nullptr) {
            qmainwindow_dragenterevent_callback(this, event);
        } else {
            QMainWindow::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qmainwindow_dragmoveevent_isbase) {
            qmainwindow_dragmoveevent_isbase = false;
            QMainWindow::dragMoveEvent(event);
        } else if (qmainwindow_dragmoveevent_callback != nullptr) {
            qmainwindow_dragmoveevent_callback(this, event);
        } else {
            QMainWindow::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qmainwindow_dragleaveevent_isbase) {
            qmainwindow_dragleaveevent_isbase = false;
            QMainWindow::dragLeaveEvent(event);
        } else if (qmainwindow_dragleaveevent_callback != nullptr) {
            qmainwindow_dragleaveevent_callback(this, event);
        } else {
            QMainWindow::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qmainwindow_dropevent_isbase) {
            qmainwindow_dropevent_isbase = false;
            QMainWindow::dropEvent(event);
        } else if (qmainwindow_dropevent_callback != nullptr) {
            qmainwindow_dropevent_callback(this, event);
        } else {
            QMainWindow::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qmainwindow_showevent_isbase) {
            qmainwindow_showevent_isbase = false;
            QMainWindow::showEvent(event);
        } else if (qmainwindow_showevent_callback != nullptr) {
            qmainwindow_showevent_callback(this, event);
        } else {
            QMainWindow::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qmainwindow_hideevent_isbase) {
            qmainwindow_hideevent_isbase = false;
            QMainWindow::hideEvent(event);
        } else if (qmainwindow_hideevent_callback != nullptr) {
            qmainwindow_hideevent_callback(this, event);
        } else {
            QMainWindow::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qmainwindow_nativeevent_isbase) {
            qmainwindow_nativeevent_isbase = false;
            return QMainWindow::nativeEvent(eventType, message, result);
        } else if (qmainwindow_nativeevent_callback != nullptr) {
            return qmainwindow_nativeevent_callback(this, eventType, message, result);
        } else {
            return QMainWindow::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qmainwindow_changeevent_isbase) {
            qmainwindow_changeevent_isbase = false;
            QMainWindow::changeEvent(param1);
        } else if (qmainwindow_changeevent_callback != nullptr) {
            qmainwindow_changeevent_callback(this, param1);
        } else {
            QMainWindow::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qmainwindow_metric_isbase) {
            qmainwindow_metric_isbase = false;
            return QMainWindow::metric(param1);
        } else if (qmainwindow_metric_callback != nullptr) {
            return qmainwindow_metric_callback(this, param1);
        } else {
            return QMainWindow::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qmainwindow_initpainter_isbase) {
            qmainwindow_initpainter_isbase = false;
            QMainWindow::initPainter(painter);
        } else if (qmainwindow_initpainter_callback != nullptr) {
            qmainwindow_initpainter_callback(this, painter);
        } else {
            QMainWindow::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qmainwindow_redirected_isbase) {
            qmainwindow_redirected_isbase = false;
            return QMainWindow::redirected(offset);
        } else if (qmainwindow_redirected_callback != nullptr) {
            return qmainwindow_redirected_callback(this, offset);
        } else {
            return QMainWindow::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qmainwindow_sharedpainter_isbase) {
            qmainwindow_sharedpainter_isbase = false;
            return QMainWindow::sharedPainter();
        } else if (qmainwindow_sharedpainter_callback != nullptr) {
            return qmainwindow_sharedpainter_callback();
        } else {
            return QMainWindow::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qmainwindow_inputmethodevent_isbase) {
            qmainwindow_inputmethodevent_isbase = false;
            QMainWindow::inputMethodEvent(param1);
        } else if (qmainwindow_inputmethodevent_callback != nullptr) {
            qmainwindow_inputmethodevent_callback(this, param1);
        } else {
            QMainWindow::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qmainwindow_inputmethodquery_isbase) {
            qmainwindow_inputmethodquery_isbase = false;
            return QMainWindow::inputMethodQuery(param1);
        } else if (qmainwindow_inputmethodquery_callback != nullptr) {
            return qmainwindow_inputmethodquery_callback(this, param1);
        } else {
            return QMainWindow::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qmainwindow_focusnextprevchild_isbase) {
            qmainwindow_focusnextprevchild_isbase = false;
            return QMainWindow::focusNextPrevChild(next);
        } else if (qmainwindow_focusnextprevchild_callback != nullptr) {
            return qmainwindow_focusnextprevchild_callback(this, next);
        } else {
            return QMainWindow::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qmainwindow_eventfilter_isbase) {
            qmainwindow_eventfilter_isbase = false;
            return QMainWindow::eventFilter(watched, event);
        } else if (qmainwindow_eventfilter_callback != nullptr) {
            return qmainwindow_eventfilter_callback(this, watched, event);
        } else {
            return QMainWindow::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qmainwindow_timerevent_isbase) {
            qmainwindow_timerevent_isbase = false;
            QMainWindow::timerEvent(event);
        } else if (qmainwindow_timerevent_callback != nullptr) {
            qmainwindow_timerevent_callback(this, event);
        } else {
            QMainWindow::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qmainwindow_childevent_isbase) {
            qmainwindow_childevent_isbase = false;
            QMainWindow::childEvent(event);
        } else if (qmainwindow_childevent_callback != nullptr) {
            qmainwindow_childevent_callback(this, event);
        } else {
            QMainWindow::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qmainwindow_customevent_isbase) {
            qmainwindow_customevent_isbase = false;
            QMainWindow::customEvent(event);
        } else if (qmainwindow_customevent_callback != nullptr) {
            qmainwindow_customevent_callback(this, event);
        } else {
            QMainWindow::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qmainwindow_connectnotify_isbase) {
            qmainwindow_connectnotify_isbase = false;
            QMainWindow::connectNotify(signal);
        } else if (qmainwindow_connectnotify_callback != nullptr) {
            qmainwindow_connectnotify_callback(this, signal);
        } else {
            QMainWindow::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qmainwindow_disconnectnotify_isbase) {
            qmainwindow_disconnectnotify_isbase = false;
            QMainWindow::disconnectNotify(signal);
        } else if (qmainwindow_disconnectnotify_callback != nullptr) {
            qmainwindow_disconnectnotify_callback(this, signal);
        } else {
            QMainWindow::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qmainwindow_updatemicrofocus_isbase) {
            qmainwindow_updatemicrofocus_isbase = false;
            QMainWindow::updateMicroFocus();
        } else if (qmainwindow_updatemicrofocus_callback != nullptr) {
            qmainwindow_updatemicrofocus_callback();
        } else {
            QMainWindow::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qmainwindow_create_isbase) {
            qmainwindow_create_isbase = false;
            QMainWindow::create();
        } else if (qmainwindow_create_callback != nullptr) {
            qmainwindow_create_callback();
        } else {
            QMainWindow::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qmainwindow_destroy_isbase) {
            qmainwindow_destroy_isbase = false;
            QMainWindow::destroy();
        } else if (qmainwindow_destroy_callback != nullptr) {
            qmainwindow_destroy_callback();
        } else {
            QMainWindow::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qmainwindow_focusnextchild_isbase) {
            qmainwindow_focusnextchild_isbase = false;
            return QMainWindow::focusNextChild();
        } else if (qmainwindow_focusnextchild_callback != nullptr) {
            return qmainwindow_focusnextchild_callback();
        } else {
            return QMainWindow::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qmainwindow_focuspreviouschild_isbase) {
            qmainwindow_focuspreviouschild_isbase = false;
            return QMainWindow::focusPreviousChild();
        } else if (qmainwindow_focuspreviouschild_callback != nullptr) {
            return qmainwindow_focuspreviouschild_callback();
        } else {
            return QMainWindow::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qmainwindow_sender_isbase) {
            qmainwindow_sender_isbase = false;
            return QMainWindow::sender();
        } else if (qmainwindow_sender_callback != nullptr) {
            return qmainwindow_sender_callback();
        } else {
            return QMainWindow::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qmainwindow_sendersignalindex_isbase) {
            qmainwindow_sendersignalindex_isbase = false;
            return QMainWindow::senderSignalIndex();
        } else if (qmainwindow_sendersignalindex_callback != nullptr) {
            return qmainwindow_sendersignalindex_callback();
        } else {
            return QMainWindow::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qmainwindow_receivers_isbase) {
            qmainwindow_receivers_isbase = false;
            return QMainWindow::receivers(signal);
        } else if (qmainwindow_receivers_callback != nullptr) {
            return qmainwindow_receivers_callback(this, signal);
        } else {
            return QMainWindow::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qmainwindow_issignalconnected_isbase) {
            qmainwindow_issignalconnected_isbase = false;
            return QMainWindow::isSignalConnected(signal);
        } else if (qmainwindow_issignalconnected_callback != nullptr) {
            return qmainwindow_issignalconnected_callback(this, signal);
        } else {
            return QMainWindow::isSignalConnected(signal);
        }
    }
};

#endif
