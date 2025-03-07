#pragma once
#ifndef SRCC_LIBVIRTUALQTOOLBUTTON_H
#define SRCC_LIBVIRTUALQTOOLBUTTON_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QToolButton so that we can call protected methods
class VirtualQToolButton : public QToolButton {

  public:
    // Virtual class public types (including callbacks)
    using QToolButton_Metacall_Callback = int (*)(QToolButton*, QMetaObject::Call, int, void**);
    using QToolButton_SizeHint_Callback = QSize (*)();
    using QToolButton_MinimumSizeHint_Callback = QSize (*)();
    using QToolButton_Event_Callback = bool (*)(QToolButton*, QEvent*);
    using QToolButton_MousePressEvent_Callback = void (*)(QToolButton*, QMouseEvent*);
    using QToolButton_MouseReleaseEvent_Callback = void (*)(QToolButton*, QMouseEvent*);
    using QToolButton_PaintEvent_Callback = void (*)(QToolButton*, QPaintEvent*);
    using QToolButton_ActionEvent_Callback = void (*)(QToolButton*, QActionEvent*);
    using QToolButton_EnterEvent_Callback = void (*)(QToolButton*, QEnterEvent*);
    using QToolButton_LeaveEvent_Callback = void (*)(QToolButton*, QEvent*);
    using QToolButton_TimerEvent_Callback = void (*)(QToolButton*, QTimerEvent*);
    using QToolButton_ChangeEvent_Callback = void (*)(QToolButton*, QEvent*);
    using QToolButton_HitButton_Callback = bool (*)(const QToolButton*, const QPoint&);
    using QToolButton_CheckStateSet_Callback = void (*)();
    using QToolButton_NextCheckState_Callback = void (*)();
    using QToolButton_InitStyleOption_Callback = void (*)(const QToolButton*, QStyleOptionToolButton*);
    using QToolButton_KeyPressEvent_Callback = void (*)(QToolButton*, QKeyEvent*);
    using QToolButton_KeyReleaseEvent_Callback = void (*)(QToolButton*, QKeyEvent*);
    using QToolButton_MouseMoveEvent_Callback = void (*)(QToolButton*, QMouseEvent*);
    using QToolButton_FocusInEvent_Callback = void (*)(QToolButton*, QFocusEvent*);
    using QToolButton_FocusOutEvent_Callback = void (*)(QToolButton*, QFocusEvent*);
    using QToolButton_DevType_Callback = int (*)();
    using QToolButton_SetVisible_Callback = void (*)(QToolButton*, bool);
    using QToolButton_HeightForWidth_Callback = int (*)(const QToolButton*, int);
    using QToolButton_HasHeightForWidth_Callback = bool (*)();
    using QToolButton_PaintEngine_Callback = QPaintEngine* (*)();
    using QToolButton_MouseDoubleClickEvent_Callback = void (*)(QToolButton*, QMouseEvent*);
    using QToolButton_WheelEvent_Callback = void (*)(QToolButton*, QWheelEvent*);
    using QToolButton_MoveEvent_Callback = void (*)(QToolButton*, QMoveEvent*);
    using QToolButton_ResizeEvent_Callback = void (*)(QToolButton*, QResizeEvent*);
    using QToolButton_CloseEvent_Callback = void (*)(QToolButton*, QCloseEvent*);
    using QToolButton_ContextMenuEvent_Callback = void (*)(QToolButton*, QContextMenuEvent*);
    using QToolButton_TabletEvent_Callback = void (*)(QToolButton*, QTabletEvent*);
    using QToolButton_DragEnterEvent_Callback = void (*)(QToolButton*, QDragEnterEvent*);
    using QToolButton_DragMoveEvent_Callback = void (*)(QToolButton*, QDragMoveEvent*);
    using QToolButton_DragLeaveEvent_Callback = void (*)(QToolButton*, QDragLeaveEvent*);
    using QToolButton_DropEvent_Callback = void (*)(QToolButton*, QDropEvent*);
    using QToolButton_ShowEvent_Callback = void (*)(QToolButton*, QShowEvent*);
    using QToolButton_HideEvent_Callback = void (*)(QToolButton*, QHideEvent*);
    using QToolButton_NativeEvent_Callback = bool (*)(QToolButton*, const QByteArray&, void*, qintptr*);
    using QToolButton_Metric_Callback = int (*)(const QToolButton*, QPaintDevice::PaintDeviceMetric);
    using QToolButton_InitPainter_Callback = void (*)(const QToolButton*, QPainter*);
    using QToolButton_Redirected_Callback = QPaintDevice* (*)(const QToolButton*, QPoint*);
    using QToolButton_SharedPainter_Callback = QPainter* (*)();
    using QToolButton_InputMethodEvent_Callback = void (*)(QToolButton*, QInputMethodEvent*);
    using QToolButton_InputMethodQuery_Callback = QVariant (*)(const QToolButton*, Qt::InputMethodQuery);
    using QToolButton_FocusNextPrevChild_Callback = bool (*)(QToolButton*, bool);
    using QToolButton_EventFilter_Callback = bool (*)(QToolButton*, QObject*, QEvent*);
    using QToolButton_ChildEvent_Callback = void (*)(QToolButton*, QChildEvent*);
    using QToolButton_CustomEvent_Callback = void (*)(QToolButton*, QEvent*);
    using QToolButton_ConnectNotify_Callback = void (*)(QToolButton*, const QMetaMethod&);
    using QToolButton_DisconnectNotify_Callback = void (*)(QToolButton*, const QMetaMethod&);
    using QToolButton_UpdateMicroFocus_Callback = void (*)();
    using QToolButton_Create_Callback = void (*)();
    using QToolButton_Destroy_Callback = void (*)();
    using QToolButton_FocusNextChild_Callback = bool (*)();
    using QToolButton_FocusPreviousChild_Callback = bool (*)();
    using QToolButton_Sender_Callback = QObject* (*)();
    using QToolButton_SenderSignalIndex_Callback = int (*)();
    using QToolButton_Receivers_Callback = int (*)(const QToolButton*, const char*);
    using QToolButton_IsSignalConnected_Callback = bool (*)(const QToolButton*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QToolButton_Metacall_Callback qtoolbutton_metacall_callback = nullptr;
    QToolButton_SizeHint_Callback qtoolbutton_sizehint_callback = nullptr;
    QToolButton_MinimumSizeHint_Callback qtoolbutton_minimumsizehint_callback = nullptr;
    QToolButton_Event_Callback qtoolbutton_event_callback = nullptr;
    QToolButton_MousePressEvent_Callback qtoolbutton_mousepressevent_callback = nullptr;
    QToolButton_MouseReleaseEvent_Callback qtoolbutton_mousereleaseevent_callback = nullptr;
    QToolButton_PaintEvent_Callback qtoolbutton_paintevent_callback = nullptr;
    QToolButton_ActionEvent_Callback qtoolbutton_actionevent_callback = nullptr;
    QToolButton_EnterEvent_Callback qtoolbutton_enterevent_callback = nullptr;
    QToolButton_LeaveEvent_Callback qtoolbutton_leaveevent_callback = nullptr;
    QToolButton_TimerEvent_Callback qtoolbutton_timerevent_callback = nullptr;
    QToolButton_ChangeEvent_Callback qtoolbutton_changeevent_callback = nullptr;
    QToolButton_HitButton_Callback qtoolbutton_hitbutton_callback = nullptr;
    QToolButton_CheckStateSet_Callback qtoolbutton_checkstateset_callback = nullptr;
    QToolButton_NextCheckState_Callback qtoolbutton_nextcheckstate_callback = nullptr;
    QToolButton_InitStyleOption_Callback qtoolbutton_initstyleoption_callback = nullptr;
    QToolButton_KeyPressEvent_Callback qtoolbutton_keypressevent_callback = nullptr;
    QToolButton_KeyReleaseEvent_Callback qtoolbutton_keyreleaseevent_callback = nullptr;
    QToolButton_MouseMoveEvent_Callback qtoolbutton_mousemoveevent_callback = nullptr;
    QToolButton_FocusInEvent_Callback qtoolbutton_focusinevent_callback = nullptr;
    QToolButton_FocusOutEvent_Callback qtoolbutton_focusoutevent_callback = nullptr;
    QToolButton_DevType_Callback qtoolbutton_devtype_callback = nullptr;
    QToolButton_SetVisible_Callback qtoolbutton_setvisible_callback = nullptr;
    QToolButton_HeightForWidth_Callback qtoolbutton_heightforwidth_callback = nullptr;
    QToolButton_HasHeightForWidth_Callback qtoolbutton_hasheightforwidth_callback = nullptr;
    QToolButton_PaintEngine_Callback qtoolbutton_paintengine_callback = nullptr;
    QToolButton_MouseDoubleClickEvent_Callback qtoolbutton_mousedoubleclickevent_callback = nullptr;
    QToolButton_WheelEvent_Callback qtoolbutton_wheelevent_callback = nullptr;
    QToolButton_MoveEvent_Callback qtoolbutton_moveevent_callback = nullptr;
    QToolButton_ResizeEvent_Callback qtoolbutton_resizeevent_callback = nullptr;
    QToolButton_CloseEvent_Callback qtoolbutton_closeevent_callback = nullptr;
    QToolButton_ContextMenuEvent_Callback qtoolbutton_contextmenuevent_callback = nullptr;
    QToolButton_TabletEvent_Callback qtoolbutton_tabletevent_callback = nullptr;
    QToolButton_DragEnterEvent_Callback qtoolbutton_dragenterevent_callback = nullptr;
    QToolButton_DragMoveEvent_Callback qtoolbutton_dragmoveevent_callback = nullptr;
    QToolButton_DragLeaveEvent_Callback qtoolbutton_dragleaveevent_callback = nullptr;
    QToolButton_DropEvent_Callback qtoolbutton_dropevent_callback = nullptr;
    QToolButton_ShowEvent_Callback qtoolbutton_showevent_callback = nullptr;
    QToolButton_HideEvent_Callback qtoolbutton_hideevent_callback = nullptr;
    QToolButton_NativeEvent_Callback qtoolbutton_nativeevent_callback = nullptr;
    QToolButton_Metric_Callback qtoolbutton_metric_callback = nullptr;
    QToolButton_InitPainter_Callback qtoolbutton_initpainter_callback = nullptr;
    QToolButton_Redirected_Callback qtoolbutton_redirected_callback = nullptr;
    QToolButton_SharedPainter_Callback qtoolbutton_sharedpainter_callback = nullptr;
    QToolButton_InputMethodEvent_Callback qtoolbutton_inputmethodevent_callback = nullptr;
    QToolButton_InputMethodQuery_Callback qtoolbutton_inputmethodquery_callback = nullptr;
    QToolButton_FocusNextPrevChild_Callback qtoolbutton_focusnextprevchild_callback = nullptr;
    QToolButton_EventFilter_Callback qtoolbutton_eventfilter_callback = nullptr;
    QToolButton_ChildEvent_Callback qtoolbutton_childevent_callback = nullptr;
    QToolButton_CustomEvent_Callback qtoolbutton_customevent_callback = nullptr;
    QToolButton_ConnectNotify_Callback qtoolbutton_connectnotify_callback = nullptr;
    QToolButton_DisconnectNotify_Callback qtoolbutton_disconnectnotify_callback = nullptr;
    QToolButton_UpdateMicroFocus_Callback qtoolbutton_updatemicrofocus_callback = nullptr;
    QToolButton_Create_Callback qtoolbutton_create_callback = nullptr;
    QToolButton_Destroy_Callback qtoolbutton_destroy_callback = nullptr;
    QToolButton_FocusNextChild_Callback qtoolbutton_focusnextchild_callback = nullptr;
    QToolButton_FocusPreviousChild_Callback qtoolbutton_focuspreviouschild_callback = nullptr;
    QToolButton_Sender_Callback qtoolbutton_sender_callback = nullptr;
    QToolButton_SenderSignalIndex_Callback qtoolbutton_sendersignalindex_callback = nullptr;
    QToolButton_Receivers_Callback qtoolbutton_receivers_callback = nullptr;
    QToolButton_IsSignalConnected_Callback qtoolbutton_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qtoolbutton_metacall_isbase = false;
    mutable bool qtoolbutton_sizehint_isbase = false;
    mutable bool qtoolbutton_minimumsizehint_isbase = false;
    mutable bool qtoolbutton_event_isbase = false;
    mutable bool qtoolbutton_mousepressevent_isbase = false;
    mutable bool qtoolbutton_mousereleaseevent_isbase = false;
    mutable bool qtoolbutton_paintevent_isbase = false;
    mutable bool qtoolbutton_actionevent_isbase = false;
    mutable bool qtoolbutton_enterevent_isbase = false;
    mutable bool qtoolbutton_leaveevent_isbase = false;
    mutable bool qtoolbutton_timerevent_isbase = false;
    mutable bool qtoolbutton_changeevent_isbase = false;
    mutable bool qtoolbutton_hitbutton_isbase = false;
    mutable bool qtoolbutton_checkstateset_isbase = false;
    mutable bool qtoolbutton_nextcheckstate_isbase = false;
    mutable bool qtoolbutton_initstyleoption_isbase = false;
    mutable bool qtoolbutton_keypressevent_isbase = false;
    mutable bool qtoolbutton_keyreleaseevent_isbase = false;
    mutable bool qtoolbutton_mousemoveevent_isbase = false;
    mutable bool qtoolbutton_focusinevent_isbase = false;
    mutable bool qtoolbutton_focusoutevent_isbase = false;
    mutable bool qtoolbutton_devtype_isbase = false;
    mutable bool qtoolbutton_setvisible_isbase = false;
    mutable bool qtoolbutton_heightforwidth_isbase = false;
    mutable bool qtoolbutton_hasheightforwidth_isbase = false;
    mutable bool qtoolbutton_paintengine_isbase = false;
    mutable bool qtoolbutton_mousedoubleclickevent_isbase = false;
    mutable bool qtoolbutton_wheelevent_isbase = false;
    mutable bool qtoolbutton_moveevent_isbase = false;
    mutable bool qtoolbutton_resizeevent_isbase = false;
    mutable bool qtoolbutton_closeevent_isbase = false;
    mutable bool qtoolbutton_contextmenuevent_isbase = false;
    mutable bool qtoolbutton_tabletevent_isbase = false;
    mutable bool qtoolbutton_dragenterevent_isbase = false;
    mutable bool qtoolbutton_dragmoveevent_isbase = false;
    mutable bool qtoolbutton_dragleaveevent_isbase = false;
    mutable bool qtoolbutton_dropevent_isbase = false;
    mutable bool qtoolbutton_showevent_isbase = false;
    mutable bool qtoolbutton_hideevent_isbase = false;
    mutable bool qtoolbutton_nativeevent_isbase = false;
    mutable bool qtoolbutton_metric_isbase = false;
    mutable bool qtoolbutton_initpainter_isbase = false;
    mutable bool qtoolbutton_redirected_isbase = false;
    mutable bool qtoolbutton_sharedpainter_isbase = false;
    mutable bool qtoolbutton_inputmethodevent_isbase = false;
    mutable bool qtoolbutton_inputmethodquery_isbase = false;
    mutable bool qtoolbutton_focusnextprevchild_isbase = false;
    mutable bool qtoolbutton_eventfilter_isbase = false;
    mutable bool qtoolbutton_childevent_isbase = false;
    mutable bool qtoolbutton_customevent_isbase = false;
    mutable bool qtoolbutton_connectnotify_isbase = false;
    mutable bool qtoolbutton_disconnectnotify_isbase = false;
    mutable bool qtoolbutton_updatemicrofocus_isbase = false;
    mutable bool qtoolbutton_create_isbase = false;
    mutable bool qtoolbutton_destroy_isbase = false;
    mutable bool qtoolbutton_focusnextchild_isbase = false;
    mutable bool qtoolbutton_focuspreviouschild_isbase = false;
    mutable bool qtoolbutton_sender_isbase = false;
    mutable bool qtoolbutton_sendersignalindex_isbase = false;
    mutable bool qtoolbutton_receivers_isbase = false;
    mutable bool qtoolbutton_issignalconnected_isbase = false;

  public:
    VirtualQToolButton(QWidget* parent) : QToolButton(parent){};
    VirtualQToolButton() : QToolButton(){};

    ~VirtualQToolButton() {
        qtoolbutton_metacall_callback = nullptr;
        qtoolbutton_sizehint_callback = nullptr;
        qtoolbutton_minimumsizehint_callback = nullptr;
        qtoolbutton_event_callback = nullptr;
        qtoolbutton_mousepressevent_callback = nullptr;
        qtoolbutton_mousereleaseevent_callback = nullptr;
        qtoolbutton_paintevent_callback = nullptr;
        qtoolbutton_actionevent_callback = nullptr;
        qtoolbutton_enterevent_callback = nullptr;
        qtoolbutton_leaveevent_callback = nullptr;
        qtoolbutton_timerevent_callback = nullptr;
        qtoolbutton_changeevent_callback = nullptr;
        qtoolbutton_hitbutton_callback = nullptr;
        qtoolbutton_checkstateset_callback = nullptr;
        qtoolbutton_nextcheckstate_callback = nullptr;
        qtoolbutton_initstyleoption_callback = nullptr;
        qtoolbutton_keypressevent_callback = nullptr;
        qtoolbutton_keyreleaseevent_callback = nullptr;
        qtoolbutton_mousemoveevent_callback = nullptr;
        qtoolbutton_focusinevent_callback = nullptr;
        qtoolbutton_focusoutevent_callback = nullptr;
        qtoolbutton_devtype_callback = nullptr;
        qtoolbutton_setvisible_callback = nullptr;
        qtoolbutton_heightforwidth_callback = nullptr;
        qtoolbutton_hasheightforwidth_callback = nullptr;
        qtoolbutton_paintengine_callback = nullptr;
        qtoolbutton_mousedoubleclickevent_callback = nullptr;
        qtoolbutton_wheelevent_callback = nullptr;
        qtoolbutton_moveevent_callback = nullptr;
        qtoolbutton_resizeevent_callback = nullptr;
        qtoolbutton_closeevent_callback = nullptr;
        qtoolbutton_contextmenuevent_callback = nullptr;
        qtoolbutton_tabletevent_callback = nullptr;
        qtoolbutton_dragenterevent_callback = nullptr;
        qtoolbutton_dragmoveevent_callback = nullptr;
        qtoolbutton_dragleaveevent_callback = nullptr;
        qtoolbutton_dropevent_callback = nullptr;
        qtoolbutton_showevent_callback = nullptr;
        qtoolbutton_hideevent_callback = nullptr;
        qtoolbutton_nativeevent_callback = nullptr;
        qtoolbutton_metric_callback = nullptr;
        qtoolbutton_initpainter_callback = nullptr;
        qtoolbutton_redirected_callback = nullptr;
        qtoolbutton_sharedpainter_callback = nullptr;
        qtoolbutton_inputmethodevent_callback = nullptr;
        qtoolbutton_inputmethodquery_callback = nullptr;
        qtoolbutton_focusnextprevchild_callback = nullptr;
        qtoolbutton_eventfilter_callback = nullptr;
        qtoolbutton_childevent_callback = nullptr;
        qtoolbutton_customevent_callback = nullptr;
        qtoolbutton_connectnotify_callback = nullptr;
        qtoolbutton_disconnectnotify_callback = nullptr;
        qtoolbutton_updatemicrofocus_callback = nullptr;
        qtoolbutton_create_callback = nullptr;
        qtoolbutton_destroy_callback = nullptr;
        qtoolbutton_focusnextchild_callback = nullptr;
        qtoolbutton_focuspreviouschild_callback = nullptr;
        qtoolbutton_sender_callback = nullptr;
        qtoolbutton_sendersignalindex_callback = nullptr;
        qtoolbutton_receivers_callback = nullptr;
        qtoolbutton_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQToolButton_Metacall_Callback(QToolButton_Metacall_Callback cb) { qtoolbutton_metacall_callback = cb; }
    void setQToolButton_SizeHint_Callback(QToolButton_SizeHint_Callback cb) { qtoolbutton_sizehint_callback = cb; }
    void setQToolButton_MinimumSizeHint_Callback(QToolButton_MinimumSizeHint_Callback cb) { qtoolbutton_minimumsizehint_callback = cb; }
    void setQToolButton_Event_Callback(QToolButton_Event_Callback cb) { qtoolbutton_event_callback = cb; }
    void setQToolButton_MousePressEvent_Callback(QToolButton_MousePressEvent_Callback cb) { qtoolbutton_mousepressevent_callback = cb; }
    void setQToolButton_MouseReleaseEvent_Callback(QToolButton_MouseReleaseEvent_Callback cb) { qtoolbutton_mousereleaseevent_callback = cb; }
    void setQToolButton_PaintEvent_Callback(QToolButton_PaintEvent_Callback cb) { qtoolbutton_paintevent_callback = cb; }
    void setQToolButton_ActionEvent_Callback(QToolButton_ActionEvent_Callback cb) { qtoolbutton_actionevent_callback = cb; }
    void setQToolButton_EnterEvent_Callback(QToolButton_EnterEvent_Callback cb) { qtoolbutton_enterevent_callback = cb; }
    void setQToolButton_LeaveEvent_Callback(QToolButton_LeaveEvent_Callback cb) { qtoolbutton_leaveevent_callback = cb; }
    void setQToolButton_TimerEvent_Callback(QToolButton_TimerEvent_Callback cb) { qtoolbutton_timerevent_callback = cb; }
    void setQToolButton_ChangeEvent_Callback(QToolButton_ChangeEvent_Callback cb) { qtoolbutton_changeevent_callback = cb; }
    void setQToolButton_HitButton_Callback(QToolButton_HitButton_Callback cb) { qtoolbutton_hitbutton_callback = cb; }
    void setQToolButton_CheckStateSet_Callback(QToolButton_CheckStateSet_Callback cb) { qtoolbutton_checkstateset_callback = cb; }
    void setQToolButton_NextCheckState_Callback(QToolButton_NextCheckState_Callback cb) { qtoolbutton_nextcheckstate_callback = cb; }
    void setQToolButton_InitStyleOption_Callback(QToolButton_InitStyleOption_Callback cb) { qtoolbutton_initstyleoption_callback = cb; }
    void setQToolButton_KeyPressEvent_Callback(QToolButton_KeyPressEvent_Callback cb) { qtoolbutton_keypressevent_callback = cb; }
    void setQToolButton_KeyReleaseEvent_Callback(QToolButton_KeyReleaseEvent_Callback cb) { qtoolbutton_keyreleaseevent_callback = cb; }
    void setQToolButton_MouseMoveEvent_Callback(QToolButton_MouseMoveEvent_Callback cb) { qtoolbutton_mousemoveevent_callback = cb; }
    void setQToolButton_FocusInEvent_Callback(QToolButton_FocusInEvent_Callback cb) { qtoolbutton_focusinevent_callback = cb; }
    void setQToolButton_FocusOutEvent_Callback(QToolButton_FocusOutEvent_Callback cb) { qtoolbutton_focusoutevent_callback = cb; }
    void setQToolButton_DevType_Callback(QToolButton_DevType_Callback cb) { qtoolbutton_devtype_callback = cb; }
    void setQToolButton_SetVisible_Callback(QToolButton_SetVisible_Callback cb) { qtoolbutton_setvisible_callback = cb; }
    void setQToolButton_HeightForWidth_Callback(QToolButton_HeightForWidth_Callback cb) { qtoolbutton_heightforwidth_callback = cb; }
    void setQToolButton_HasHeightForWidth_Callback(QToolButton_HasHeightForWidth_Callback cb) { qtoolbutton_hasheightforwidth_callback = cb; }
    void setQToolButton_PaintEngine_Callback(QToolButton_PaintEngine_Callback cb) { qtoolbutton_paintengine_callback = cb; }
    void setQToolButton_MouseDoubleClickEvent_Callback(QToolButton_MouseDoubleClickEvent_Callback cb) { qtoolbutton_mousedoubleclickevent_callback = cb; }
    void setQToolButton_WheelEvent_Callback(QToolButton_WheelEvent_Callback cb) { qtoolbutton_wheelevent_callback = cb; }
    void setQToolButton_MoveEvent_Callback(QToolButton_MoveEvent_Callback cb) { qtoolbutton_moveevent_callback = cb; }
    void setQToolButton_ResizeEvent_Callback(QToolButton_ResizeEvent_Callback cb) { qtoolbutton_resizeevent_callback = cb; }
    void setQToolButton_CloseEvent_Callback(QToolButton_CloseEvent_Callback cb) { qtoolbutton_closeevent_callback = cb; }
    void setQToolButton_ContextMenuEvent_Callback(QToolButton_ContextMenuEvent_Callback cb) { qtoolbutton_contextmenuevent_callback = cb; }
    void setQToolButton_TabletEvent_Callback(QToolButton_TabletEvent_Callback cb) { qtoolbutton_tabletevent_callback = cb; }
    void setQToolButton_DragEnterEvent_Callback(QToolButton_DragEnterEvent_Callback cb) { qtoolbutton_dragenterevent_callback = cb; }
    void setQToolButton_DragMoveEvent_Callback(QToolButton_DragMoveEvent_Callback cb) { qtoolbutton_dragmoveevent_callback = cb; }
    void setQToolButton_DragLeaveEvent_Callback(QToolButton_DragLeaveEvent_Callback cb) { qtoolbutton_dragleaveevent_callback = cb; }
    void setQToolButton_DropEvent_Callback(QToolButton_DropEvent_Callback cb) { qtoolbutton_dropevent_callback = cb; }
    void setQToolButton_ShowEvent_Callback(QToolButton_ShowEvent_Callback cb) { qtoolbutton_showevent_callback = cb; }
    void setQToolButton_HideEvent_Callback(QToolButton_HideEvent_Callback cb) { qtoolbutton_hideevent_callback = cb; }
    void setQToolButton_NativeEvent_Callback(QToolButton_NativeEvent_Callback cb) { qtoolbutton_nativeevent_callback = cb; }
    void setQToolButton_Metric_Callback(QToolButton_Metric_Callback cb) { qtoolbutton_metric_callback = cb; }
    void setQToolButton_InitPainter_Callback(QToolButton_InitPainter_Callback cb) { qtoolbutton_initpainter_callback = cb; }
    void setQToolButton_Redirected_Callback(QToolButton_Redirected_Callback cb) { qtoolbutton_redirected_callback = cb; }
    void setQToolButton_SharedPainter_Callback(QToolButton_SharedPainter_Callback cb) { qtoolbutton_sharedpainter_callback = cb; }
    void setQToolButton_InputMethodEvent_Callback(QToolButton_InputMethodEvent_Callback cb) { qtoolbutton_inputmethodevent_callback = cb; }
    void setQToolButton_InputMethodQuery_Callback(QToolButton_InputMethodQuery_Callback cb) { qtoolbutton_inputmethodquery_callback = cb; }
    void setQToolButton_FocusNextPrevChild_Callback(QToolButton_FocusNextPrevChild_Callback cb) { qtoolbutton_focusnextprevchild_callback = cb; }
    void setQToolButton_EventFilter_Callback(QToolButton_EventFilter_Callback cb) { qtoolbutton_eventfilter_callback = cb; }
    void setQToolButton_ChildEvent_Callback(QToolButton_ChildEvent_Callback cb) { qtoolbutton_childevent_callback = cb; }
    void setQToolButton_CustomEvent_Callback(QToolButton_CustomEvent_Callback cb) { qtoolbutton_customevent_callback = cb; }
    void setQToolButton_ConnectNotify_Callback(QToolButton_ConnectNotify_Callback cb) { qtoolbutton_connectnotify_callback = cb; }
    void setQToolButton_DisconnectNotify_Callback(QToolButton_DisconnectNotify_Callback cb) { qtoolbutton_disconnectnotify_callback = cb; }
    void setQToolButton_UpdateMicroFocus_Callback(QToolButton_UpdateMicroFocus_Callback cb) { qtoolbutton_updatemicrofocus_callback = cb; }
    void setQToolButton_Create_Callback(QToolButton_Create_Callback cb) { qtoolbutton_create_callback = cb; }
    void setQToolButton_Destroy_Callback(QToolButton_Destroy_Callback cb) { qtoolbutton_destroy_callback = cb; }
    void setQToolButton_FocusNextChild_Callback(QToolButton_FocusNextChild_Callback cb) { qtoolbutton_focusnextchild_callback = cb; }
    void setQToolButton_FocusPreviousChild_Callback(QToolButton_FocusPreviousChild_Callback cb) { qtoolbutton_focuspreviouschild_callback = cb; }
    void setQToolButton_Sender_Callback(QToolButton_Sender_Callback cb) { qtoolbutton_sender_callback = cb; }
    void setQToolButton_SenderSignalIndex_Callback(QToolButton_SenderSignalIndex_Callback cb) { qtoolbutton_sendersignalindex_callback = cb; }
    void setQToolButton_Receivers_Callback(QToolButton_Receivers_Callback cb) { qtoolbutton_receivers_callback = cb; }
    void setQToolButton_IsSignalConnected_Callback(QToolButton_IsSignalConnected_Callback cb) { qtoolbutton_issignalconnected_callback = cb; }

    // Base flag setters
    void setQToolButton_Metacall_IsBase(bool value) const { qtoolbutton_metacall_isbase = value; }
    void setQToolButton_SizeHint_IsBase(bool value) const { qtoolbutton_sizehint_isbase = value; }
    void setQToolButton_MinimumSizeHint_IsBase(bool value) const { qtoolbutton_minimumsizehint_isbase = value; }
    void setQToolButton_Event_IsBase(bool value) const { qtoolbutton_event_isbase = value; }
    void setQToolButton_MousePressEvent_IsBase(bool value) const { qtoolbutton_mousepressevent_isbase = value; }
    void setQToolButton_MouseReleaseEvent_IsBase(bool value) const { qtoolbutton_mousereleaseevent_isbase = value; }
    void setQToolButton_PaintEvent_IsBase(bool value) const { qtoolbutton_paintevent_isbase = value; }
    void setQToolButton_ActionEvent_IsBase(bool value) const { qtoolbutton_actionevent_isbase = value; }
    void setQToolButton_EnterEvent_IsBase(bool value) const { qtoolbutton_enterevent_isbase = value; }
    void setQToolButton_LeaveEvent_IsBase(bool value) const { qtoolbutton_leaveevent_isbase = value; }
    void setQToolButton_TimerEvent_IsBase(bool value) const { qtoolbutton_timerevent_isbase = value; }
    void setQToolButton_ChangeEvent_IsBase(bool value) const { qtoolbutton_changeevent_isbase = value; }
    void setQToolButton_HitButton_IsBase(bool value) const { qtoolbutton_hitbutton_isbase = value; }
    void setQToolButton_CheckStateSet_IsBase(bool value) const { qtoolbutton_checkstateset_isbase = value; }
    void setQToolButton_NextCheckState_IsBase(bool value) const { qtoolbutton_nextcheckstate_isbase = value; }
    void setQToolButton_InitStyleOption_IsBase(bool value) const { qtoolbutton_initstyleoption_isbase = value; }
    void setQToolButton_KeyPressEvent_IsBase(bool value) const { qtoolbutton_keypressevent_isbase = value; }
    void setQToolButton_KeyReleaseEvent_IsBase(bool value) const { qtoolbutton_keyreleaseevent_isbase = value; }
    void setQToolButton_MouseMoveEvent_IsBase(bool value) const { qtoolbutton_mousemoveevent_isbase = value; }
    void setQToolButton_FocusInEvent_IsBase(bool value) const { qtoolbutton_focusinevent_isbase = value; }
    void setQToolButton_FocusOutEvent_IsBase(bool value) const { qtoolbutton_focusoutevent_isbase = value; }
    void setQToolButton_DevType_IsBase(bool value) const { qtoolbutton_devtype_isbase = value; }
    void setQToolButton_SetVisible_IsBase(bool value) const { qtoolbutton_setvisible_isbase = value; }
    void setQToolButton_HeightForWidth_IsBase(bool value) const { qtoolbutton_heightforwidth_isbase = value; }
    void setQToolButton_HasHeightForWidth_IsBase(bool value) const { qtoolbutton_hasheightforwidth_isbase = value; }
    void setQToolButton_PaintEngine_IsBase(bool value) const { qtoolbutton_paintengine_isbase = value; }
    void setQToolButton_MouseDoubleClickEvent_IsBase(bool value) const { qtoolbutton_mousedoubleclickevent_isbase = value; }
    void setQToolButton_WheelEvent_IsBase(bool value) const { qtoolbutton_wheelevent_isbase = value; }
    void setQToolButton_MoveEvent_IsBase(bool value) const { qtoolbutton_moveevent_isbase = value; }
    void setQToolButton_ResizeEvent_IsBase(bool value) const { qtoolbutton_resizeevent_isbase = value; }
    void setQToolButton_CloseEvent_IsBase(bool value) const { qtoolbutton_closeevent_isbase = value; }
    void setQToolButton_ContextMenuEvent_IsBase(bool value) const { qtoolbutton_contextmenuevent_isbase = value; }
    void setQToolButton_TabletEvent_IsBase(bool value) const { qtoolbutton_tabletevent_isbase = value; }
    void setQToolButton_DragEnterEvent_IsBase(bool value) const { qtoolbutton_dragenterevent_isbase = value; }
    void setQToolButton_DragMoveEvent_IsBase(bool value) const { qtoolbutton_dragmoveevent_isbase = value; }
    void setQToolButton_DragLeaveEvent_IsBase(bool value) const { qtoolbutton_dragleaveevent_isbase = value; }
    void setQToolButton_DropEvent_IsBase(bool value) const { qtoolbutton_dropevent_isbase = value; }
    void setQToolButton_ShowEvent_IsBase(bool value) const { qtoolbutton_showevent_isbase = value; }
    void setQToolButton_HideEvent_IsBase(bool value) const { qtoolbutton_hideevent_isbase = value; }
    void setQToolButton_NativeEvent_IsBase(bool value) const { qtoolbutton_nativeevent_isbase = value; }
    void setQToolButton_Metric_IsBase(bool value) const { qtoolbutton_metric_isbase = value; }
    void setQToolButton_InitPainter_IsBase(bool value) const { qtoolbutton_initpainter_isbase = value; }
    void setQToolButton_Redirected_IsBase(bool value) const { qtoolbutton_redirected_isbase = value; }
    void setQToolButton_SharedPainter_IsBase(bool value) const { qtoolbutton_sharedpainter_isbase = value; }
    void setQToolButton_InputMethodEvent_IsBase(bool value) const { qtoolbutton_inputmethodevent_isbase = value; }
    void setQToolButton_InputMethodQuery_IsBase(bool value) const { qtoolbutton_inputmethodquery_isbase = value; }
    void setQToolButton_FocusNextPrevChild_IsBase(bool value) const { qtoolbutton_focusnextprevchild_isbase = value; }
    void setQToolButton_EventFilter_IsBase(bool value) const { qtoolbutton_eventfilter_isbase = value; }
    void setQToolButton_ChildEvent_IsBase(bool value) const { qtoolbutton_childevent_isbase = value; }
    void setQToolButton_CustomEvent_IsBase(bool value) const { qtoolbutton_customevent_isbase = value; }
    void setQToolButton_ConnectNotify_IsBase(bool value) const { qtoolbutton_connectnotify_isbase = value; }
    void setQToolButton_DisconnectNotify_IsBase(bool value) const { qtoolbutton_disconnectnotify_isbase = value; }
    void setQToolButton_UpdateMicroFocus_IsBase(bool value) const { qtoolbutton_updatemicrofocus_isbase = value; }
    void setQToolButton_Create_IsBase(bool value) const { qtoolbutton_create_isbase = value; }
    void setQToolButton_Destroy_IsBase(bool value) const { qtoolbutton_destroy_isbase = value; }
    void setQToolButton_FocusNextChild_IsBase(bool value) const { qtoolbutton_focusnextchild_isbase = value; }
    void setQToolButton_FocusPreviousChild_IsBase(bool value) const { qtoolbutton_focuspreviouschild_isbase = value; }
    void setQToolButton_Sender_IsBase(bool value) const { qtoolbutton_sender_isbase = value; }
    void setQToolButton_SenderSignalIndex_IsBase(bool value) const { qtoolbutton_sendersignalindex_isbase = value; }
    void setQToolButton_Receivers_IsBase(bool value) const { qtoolbutton_receivers_isbase = value; }
    void setQToolButton_IsSignalConnected_IsBase(bool value) const { qtoolbutton_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtoolbutton_metacall_isbase) {
            qtoolbutton_metacall_isbase = false;
            return QToolButton::qt_metacall(param1, param2, param3);
        } else if (qtoolbutton_metacall_callback != nullptr) {
            return qtoolbutton_metacall_callback(this, param1, param2, param3);
        } else {
            return QToolButton::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qtoolbutton_sizehint_isbase) {
            qtoolbutton_sizehint_isbase = false;
            return QToolButton::sizeHint();
        } else if (qtoolbutton_sizehint_callback != nullptr) {
            return qtoolbutton_sizehint_callback();
        } else {
            return QToolButton::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qtoolbutton_minimumsizehint_isbase) {
            qtoolbutton_minimumsizehint_isbase = false;
            return QToolButton::minimumSizeHint();
        } else if (qtoolbutton_minimumsizehint_callback != nullptr) {
            return qtoolbutton_minimumsizehint_callback();
        } else {
            return QToolButton::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qtoolbutton_event_isbase) {
            qtoolbutton_event_isbase = false;
            return QToolButton::event(e);
        } else if (qtoolbutton_event_callback != nullptr) {
            return qtoolbutton_event_callback(this, e);
        } else {
            return QToolButton::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (qtoolbutton_mousepressevent_isbase) {
            qtoolbutton_mousepressevent_isbase = false;
            QToolButton::mousePressEvent(param1);
        } else if (qtoolbutton_mousepressevent_callback != nullptr) {
            qtoolbutton_mousepressevent_callback(this, param1);
        } else {
            QToolButton::mousePressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (qtoolbutton_mousereleaseevent_isbase) {
            qtoolbutton_mousereleaseevent_isbase = false;
            QToolButton::mouseReleaseEvent(param1);
        } else if (qtoolbutton_mousereleaseevent_callback != nullptr) {
            qtoolbutton_mousereleaseevent_callback(this, param1);
        } else {
            QToolButton::mouseReleaseEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qtoolbutton_paintevent_isbase) {
            qtoolbutton_paintevent_isbase = false;
            QToolButton::paintEvent(param1);
        } else if (qtoolbutton_paintevent_callback != nullptr) {
            qtoolbutton_paintevent_callback(this, param1);
        } else {
            QToolButton::paintEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* param1) override {
        if (qtoolbutton_actionevent_isbase) {
            qtoolbutton_actionevent_isbase = false;
            QToolButton::actionEvent(param1);
        } else if (qtoolbutton_actionevent_callback != nullptr) {
            qtoolbutton_actionevent_callback(this, param1);
        } else {
            QToolButton::actionEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* param1) override {
        if (qtoolbutton_enterevent_isbase) {
            qtoolbutton_enterevent_isbase = false;
            QToolButton::enterEvent(param1);
        } else if (qtoolbutton_enterevent_callback != nullptr) {
            qtoolbutton_enterevent_callback(this, param1);
        } else {
            QToolButton::enterEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* param1) override {
        if (qtoolbutton_leaveevent_isbase) {
            qtoolbutton_leaveevent_isbase = false;
            QToolButton::leaveEvent(param1);
        } else if (qtoolbutton_leaveevent_callback != nullptr) {
            qtoolbutton_leaveevent_callback(this, param1);
        } else {
            QToolButton::leaveEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (qtoolbutton_timerevent_isbase) {
            qtoolbutton_timerevent_isbase = false;
            QToolButton::timerEvent(param1);
        } else if (qtoolbutton_timerevent_callback != nullptr) {
            qtoolbutton_timerevent_callback(this, param1);
        } else {
            QToolButton::timerEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qtoolbutton_changeevent_isbase) {
            qtoolbutton_changeevent_isbase = false;
            QToolButton::changeEvent(param1);
        } else if (qtoolbutton_changeevent_callback != nullptr) {
            qtoolbutton_changeevent_callback(this, param1);
        } else {
            QToolButton::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hitButton(const QPoint& pos) const override {
        if (qtoolbutton_hitbutton_isbase) {
            qtoolbutton_hitbutton_isbase = false;
            return QToolButton::hitButton(pos);
        } else if (qtoolbutton_hitbutton_callback != nullptr) {
            return qtoolbutton_hitbutton_callback(this, pos);
        } else {
            return QToolButton::hitButton(pos);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void checkStateSet() override {
        if (qtoolbutton_checkstateset_isbase) {
            qtoolbutton_checkstateset_isbase = false;
            QToolButton::checkStateSet();
        } else if (qtoolbutton_checkstateset_callback != nullptr) {
            qtoolbutton_checkstateset_callback();
        } else {
            QToolButton::checkStateSet();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void nextCheckState() override {
        if (qtoolbutton_nextcheckstate_isbase) {
            qtoolbutton_nextcheckstate_isbase = false;
            QToolButton::nextCheckState();
        } else if (qtoolbutton_nextcheckstate_callback != nullptr) {
            qtoolbutton_nextcheckstate_callback();
        } else {
            QToolButton::nextCheckState();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionToolButton* option) const override {
        if (qtoolbutton_initstyleoption_isbase) {
            qtoolbutton_initstyleoption_isbase = false;
            QToolButton::initStyleOption(option);
        } else if (qtoolbutton_initstyleoption_callback != nullptr) {
            qtoolbutton_initstyleoption_callback(this, option);
        } else {
            QToolButton::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (qtoolbutton_keypressevent_isbase) {
            qtoolbutton_keypressevent_isbase = false;
            QToolButton::keyPressEvent(e);
        } else if (qtoolbutton_keypressevent_callback != nullptr) {
            qtoolbutton_keypressevent_callback(this, e);
        } else {
            QToolButton::keyPressEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (qtoolbutton_keyreleaseevent_isbase) {
            qtoolbutton_keyreleaseevent_isbase = false;
            QToolButton::keyReleaseEvent(e);
        } else if (qtoolbutton_keyreleaseevent_callback != nullptr) {
            qtoolbutton_keyreleaseevent_callback(this, e);
        } else {
            QToolButton::keyReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (qtoolbutton_mousemoveevent_isbase) {
            qtoolbutton_mousemoveevent_isbase = false;
            QToolButton::mouseMoveEvent(e);
        } else if (qtoolbutton_mousemoveevent_callback != nullptr) {
            qtoolbutton_mousemoveevent_callback(this, e);
        } else {
            QToolButton::mouseMoveEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (qtoolbutton_focusinevent_isbase) {
            qtoolbutton_focusinevent_isbase = false;
            QToolButton::focusInEvent(e);
        } else if (qtoolbutton_focusinevent_callback != nullptr) {
            qtoolbutton_focusinevent_callback(this, e);
        } else {
            QToolButton::focusInEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (qtoolbutton_focusoutevent_isbase) {
            qtoolbutton_focusoutevent_isbase = false;
            QToolButton::focusOutEvent(e);
        } else if (qtoolbutton_focusoutevent_callback != nullptr) {
            qtoolbutton_focusoutevent_callback(this, e);
        } else {
            QToolButton::focusOutEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qtoolbutton_devtype_isbase) {
            qtoolbutton_devtype_isbase = false;
            return QToolButton::devType();
        } else if (qtoolbutton_devtype_callback != nullptr) {
            return qtoolbutton_devtype_callback();
        } else {
            return QToolButton::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qtoolbutton_setvisible_isbase) {
            qtoolbutton_setvisible_isbase = false;
            QToolButton::setVisible(visible);
        } else if (qtoolbutton_setvisible_callback != nullptr) {
            qtoolbutton_setvisible_callback(this, visible);
        } else {
            QToolButton::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qtoolbutton_heightforwidth_isbase) {
            qtoolbutton_heightforwidth_isbase = false;
            return QToolButton::heightForWidth(param1);
        } else if (qtoolbutton_heightforwidth_callback != nullptr) {
            return qtoolbutton_heightforwidth_callback(this, param1);
        } else {
            return QToolButton::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qtoolbutton_hasheightforwidth_isbase) {
            qtoolbutton_hasheightforwidth_isbase = false;
            return QToolButton::hasHeightForWidth();
        } else if (qtoolbutton_hasheightforwidth_callback != nullptr) {
            return qtoolbutton_hasheightforwidth_callback();
        } else {
            return QToolButton::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qtoolbutton_paintengine_isbase) {
            qtoolbutton_paintengine_isbase = false;
            return QToolButton::paintEngine();
        } else if (qtoolbutton_paintengine_callback != nullptr) {
            return qtoolbutton_paintengine_callback();
        } else {
            return QToolButton::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qtoolbutton_mousedoubleclickevent_isbase) {
            qtoolbutton_mousedoubleclickevent_isbase = false;
            QToolButton::mouseDoubleClickEvent(event);
        } else if (qtoolbutton_mousedoubleclickevent_callback != nullptr) {
            qtoolbutton_mousedoubleclickevent_callback(this, event);
        } else {
            QToolButton::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qtoolbutton_wheelevent_isbase) {
            qtoolbutton_wheelevent_isbase = false;
            QToolButton::wheelEvent(event);
        } else if (qtoolbutton_wheelevent_callback != nullptr) {
            qtoolbutton_wheelevent_callback(this, event);
        } else {
            QToolButton::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qtoolbutton_moveevent_isbase) {
            qtoolbutton_moveevent_isbase = false;
            QToolButton::moveEvent(event);
        } else if (qtoolbutton_moveevent_callback != nullptr) {
            qtoolbutton_moveevent_callback(this, event);
        } else {
            QToolButton::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qtoolbutton_resizeevent_isbase) {
            qtoolbutton_resizeevent_isbase = false;
            QToolButton::resizeEvent(event);
        } else if (qtoolbutton_resizeevent_callback != nullptr) {
            qtoolbutton_resizeevent_callback(this, event);
        } else {
            QToolButton::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qtoolbutton_closeevent_isbase) {
            qtoolbutton_closeevent_isbase = false;
            QToolButton::closeEvent(event);
        } else if (qtoolbutton_closeevent_callback != nullptr) {
            qtoolbutton_closeevent_callback(this, event);
        } else {
            QToolButton::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qtoolbutton_contextmenuevent_isbase) {
            qtoolbutton_contextmenuevent_isbase = false;
            QToolButton::contextMenuEvent(event);
        } else if (qtoolbutton_contextmenuevent_callback != nullptr) {
            qtoolbutton_contextmenuevent_callback(this, event);
        } else {
            QToolButton::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qtoolbutton_tabletevent_isbase) {
            qtoolbutton_tabletevent_isbase = false;
            QToolButton::tabletEvent(event);
        } else if (qtoolbutton_tabletevent_callback != nullptr) {
            qtoolbutton_tabletevent_callback(this, event);
        } else {
            QToolButton::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qtoolbutton_dragenterevent_isbase) {
            qtoolbutton_dragenterevent_isbase = false;
            QToolButton::dragEnterEvent(event);
        } else if (qtoolbutton_dragenterevent_callback != nullptr) {
            qtoolbutton_dragenterevent_callback(this, event);
        } else {
            QToolButton::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qtoolbutton_dragmoveevent_isbase) {
            qtoolbutton_dragmoveevent_isbase = false;
            QToolButton::dragMoveEvent(event);
        } else if (qtoolbutton_dragmoveevent_callback != nullptr) {
            qtoolbutton_dragmoveevent_callback(this, event);
        } else {
            QToolButton::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qtoolbutton_dragleaveevent_isbase) {
            qtoolbutton_dragleaveevent_isbase = false;
            QToolButton::dragLeaveEvent(event);
        } else if (qtoolbutton_dragleaveevent_callback != nullptr) {
            qtoolbutton_dragleaveevent_callback(this, event);
        } else {
            QToolButton::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qtoolbutton_dropevent_isbase) {
            qtoolbutton_dropevent_isbase = false;
            QToolButton::dropEvent(event);
        } else if (qtoolbutton_dropevent_callback != nullptr) {
            qtoolbutton_dropevent_callback(this, event);
        } else {
            QToolButton::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qtoolbutton_showevent_isbase) {
            qtoolbutton_showevent_isbase = false;
            QToolButton::showEvent(event);
        } else if (qtoolbutton_showevent_callback != nullptr) {
            qtoolbutton_showevent_callback(this, event);
        } else {
            QToolButton::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qtoolbutton_hideevent_isbase) {
            qtoolbutton_hideevent_isbase = false;
            QToolButton::hideEvent(event);
        } else if (qtoolbutton_hideevent_callback != nullptr) {
            qtoolbutton_hideevent_callback(this, event);
        } else {
            QToolButton::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qtoolbutton_nativeevent_isbase) {
            qtoolbutton_nativeevent_isbase = false;
            return QToolButton::nativeEvent(eventType, message, result);
        } else if (qtoolbutton_nativeevent_callback != nullptr) {
            return qtoolbutton_nativeevent_callback(this, eventType, message, result);
        } else {
            return QToolButton::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qtoolbutton_metric_isbase) {
            qtoolbutton_metric_isbase = false;
            return QToolButton::metric(param1);
        } else if (qtoolbutton_metric_callback != nullptr) {
            return qtoolbutton_metric_callback(this, param1);
        } else {
            return QToolButton::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qtoolbutton_initpainter_isbase) {
            qtoolbutton_initpainter_isbase = false;
            QToolButton::initPainter(painter);
        } else if (qtoolbutton_initpainter_callback != nullptr) {
            qtoolbutton_initpainter_callback(this, painter);
        } else {
            QToolButton::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qtoolbutton_redirected_isbase) {
            qtoolbutton_redirected_isbase = false;
            return QToolButton::redirected(offset);
        } else if (qtoolbutton_redirected_callback != nullptr) {
            return qtoolbutton_redirected_callback(this, offset);
        } else {
            return QToolButton::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qtoolbutton_sharedpainter_isbase) {
            qtoolbutton_sharedpainter_isbase = false;
            return QToolButton::sharedPainter();
        } else if (qtoolbutton_sharedpainter_callback != nullptr) {
            return qtoolbutton_sharedpainter_callback();
        } else {
            return QToolButton::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qtoolbutton_inputmethodevent_isbase) {
            qtoolbutton_inputmethodevent_isbase = false;
            QToolButton::inputMethodEvent(param1);
        } else if (qtoolbutton_inputmethodevent_callback != nullptr) {
            qtoolbutton_inputmethodevent_callback(this, param1);
        } else {
            QToolButton::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qtoolbutton_inputmethodquery_isbase) {
            qtoolbutton_inputmethodquery_isbase = false;
            return QToolButton::inputMethodQuery(param1);
        } else if (qtoolbutton_inputmethodquery_callback != nullptr) {
            return qtoolbutton_inputmethodquery_callback(this, param1);
        } else {
            return QToolButton::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qtoolbutton_focusnextprevchild_isbase) {
            qtoolbutton_focusnextprevchild_isbase = false;
            return QToolButton::focusNextPrevChild(next);
        } else if (qtoolbutton_focusnextprevchild_callback != nullptr) {
            return qtoolbutton_focusnextprevchild_callback(this, next);
        } else {
            return QToolButton::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qtoolbutton_eventfilter_isbase) {
            qtoolbutton_eventfilter_isbase = false;
            return QToolButton::eventFilter(watched, event);
        } else if (qtoolbutton_eventfilter_callback != nullptr) {
            return qtoolbutton_eventfilter_callback(this, watched, event);
        } else {
            return QToolButton::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtoolbutton_childevent_isbase) {
            qtoolbutton_childevent_isbase = false;
            QToolButton::childEvent(event);
        } else if (qtoolbutton_childevent_callback != nullptr) {
            qtoolbutton_childevent_callback(this, event);
        } else {
            QToolButton::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtoolbutton_customevent_isbase) {
            qtoolbutton_customevent_isbase = false;
            QToolButton::customEvent(event);
        } else if (qtoolbutton_customevent_callback != nullptr) {
            qtoolbutton_customevent_callback(this, event);
        } else {
            QToolButton::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtoolbutton_connectnotify_isbase) {
            qtoolbutton_connectnotify_isbase = false;
            QToolButton::connectNotify(signal);
        } else if (qtoolbutton_connectnotify_callback != nullptr) {
            qtoolbutton_connectnotify_callback(this, signal);
        } else {
            QToolButton::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtoolbutton_disconnectnotify_isbase) {
            qtoolbutton_disconnectnotify_isbase = false;
            QToolButton::disconnectNotify(signal);
        } else if (qtoolbutton_disconnectnotify_callback != nullptr) {
            qtoolbutton_disconnectnotify_callback(this, signal);
        } else {
            QToolButton::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qtoolbutton_updatemicrofocus_isbase) {
            qtoolbutton_updatemicrofocus_isbase = false;
            QToolButton::updateMicroFocus();
        } else if (qtoolbutton_updatemicrofocus_callback != nullptr) {
            qtoolbutton_updatemicrofocus_callback();
        } else {
            QToolButton::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qtoolbutton_create_isbase) {
            qtoolbutton_create_isbase = false;
            QToolButton::create();
        } else if (qtoolbutton_create_callback != nullptr) {
            qtoolbutton_create_callback();
        } else {
            QToolButton::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qtoolbutton_destroy_isbase) {
            qtoolbutton_destroy_isbase = false;
            QToolButton::destroy();
        } else if (qtoolbutton_destroy_callback != nullptr) {
            qtoolbutton_destroy_callback();
        } else {
            QToolButton::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qtoolbutton_focusnextchild_isbase) {
            qtoolbutton_focusnextchild_isbase = false;
            return QToolButton::focusNextChild();
        } else if (qtoolbutton_focusnextchild_callback != nullptr) {
            return qtoolbutton_focusnextchild_callback();
        } else {
            return QToolButton::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qtoolbutton_focuspreviouschild_isbase) {
            qtoolbutton_focuspreviouschild_isbase = false;
            return QToolButton::focusPreviousChild();
        } else if (qtoolbutton_focuspreviouschild_callback != nullptr) {
            return qtoolbutton_focuspreviouschild_callback();
        } else {
            return QToolButton::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qtoolbutton_sender_isbase) {
            qtoolbutton_sender_isbase = false;
            return QToolButton::sender();
        } else if (qtoolbutton_sender_callback != nullptr) {
            return qtoolbutton_sender_callback();
        } else {
            return QToolButton::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qtoolbutton_sendersignalindex_isbase) {
            qtoolbutton_sendersignalindex_isbase = false;
            return QToolButton::senderSignalIndex();
        } else if (qtoolbutton_sendersignalindex_callback != nullptr) {
            return qtoolbutton_sendersignalindex_callback();
        } else {
            return QToolButton::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qtoolbutton_receivers_isbase) {
            qtoolbutton_receivers_isbase = false;
            return QToolButton::receivers(signal);
        } else if (qtoolbutton_receivers_callback != nullptr) {
            return qtoolbutton_receivers_callback(this, signal);
        } else {
            return QToolButton::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qtoolbutton_issignalconnected_isbase) {
            qtoolbutton_issignalconnected_isbase = false;
            return QToolButton::isSignalConnected(signal);
        } else if (qtoolbutton_issignalconnected_callback != nullptr) {
            return qtoolbutton_issignalconnected_callback(this, signal);
        } else {
            return QToolButton::isSignalConnected(signal);
        }
    }
};

#endif
