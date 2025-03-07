#pragma once
#ifndef SRCC_LIBVIRTUALQDIAL_H
#define SRCC_LIBVIRTUALQDIAL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QDial so that we can call protected methods
class VirtualQDial : public QDial {

  public:
    // Virtual class public types (including callbacks)
    using QAbstractSlider::SliderChange;
    using QDial_Metacall_Callback = int (*)(QDial*, QMetaObject::Call, int, void**);
    using QDial_SizeHint_Callback = QSize (*)();
    using QDial_MinimumSizeHint_Callback = QSize (*)();
    using QDial_Event_Callback = bool (*)(QDial*, QEvent*);
    using QDial_ResizeEvent_Callback = void (*)(QDial*, QResizeEvent*);
    using QDial_PaintEvent_Callback = void (*)(QDial*, QPaintEvent*);
    using QDial_MousePressEvent_Callback = void (*)(QDial*, QMouseEvent*);
    using QDial_MouseReleaseEvent_Callback = void (*)(QDial*, QMouseEvent*);
    using QDial_MouseMoveEvent_Callback = void (*)(QDial*, QMouseEvent*);
    using QDial_SliderChange_Callback = void (*)(QDial*, int);
    using QDial_InitStyleOption_Callback = void (*)(const QDial*, QStyleOptionSlider*);
    using QDial_KeyPressEvent_Callback = void (*)(QDial*, QKeyEvent*);
    using QDial_TimerEvent_Callback = void (*)(QDial*, QTimerEvent*);
    using QDial_WheelEvent_Callback = void (*)(QDial*, QWheelEvent*);
    using QDial_ChangeEvent_Callback = void (*)(QDial*, QEvent*);
    using QDial_DevType_Callback = int (*)();
    using QDial_SetVisible_Callback = void (*)(QDial*, bool);
    using QDial_HeightForWidth_Callback = int (*)(const QDial*, int);
    using QDial_HasHeightForWidth_Callback = bool (*)();
    using QDial_PaintEngine_Callback = QPaintEngine* (*)();
    using QDial_MouseDoubleClickEvent_Callback = void (*)(QDial*, QMouseEvent*);
    using QDial_KeyReleaseEvent_Callback = void (*)(QDial*, QKeyEvent*);
    using QDial_FocusInEvent_Callback = void (*)(QDial*, QFocusEvent*);
    using QDial_FocusOutEvent_Callback = void (*)(QDial*, QFocusEvent*);
    using QDial_EnterEvent_Callback = void (*)(QDial*, QEnterEvent*);
    using QDial_LeaveEvent_Callback = void (*)(QDial*, QEvent*);
    using QDial_MoveEvent_Callback = void (*)(QDial*, QMoveEvent*);
    using QDial_CloseEvent_Callback = void (*)(QDial*, QCloseEvent*);
    using QDial_ContextMenuEvent_Callback = void (*)(QDial*, QContextMenuEvent*);
    using QDial_TabletEvent_Callback = void (*)(QDial*, QTabletEvent*);
    using QDial_ActionEvent_Callback = void (*)(QDial*, QActionEvent*);
    using QDial_DragEnterEvent_Callback = void (*)(QDial*, QDragEnterEvent*);
    using QDial_DragMoveEvent_Callback = void (*)(QDial*, QDragMoveEvent*);
    using QDial_DragLeaveEvent_Callback = void (*)(QDial*, QDragLeaveEvent*);
    using QDial_DropEvent_Callback = void (*)(QDial*, QDropEvent*);
    using QDial_ShowEvent_Callback = void (*)(QDial*, QShowEvent*);
    using QDial_HideEvent_Callback = void (*)(QDial*, QHideEvent*);
    using QDial_NativeEvent_Callback = bool (*)(QDial*, const QByteArray&, void*, qintptr*);
    using QDial_Metric_Callback = int (*)(const QDial*, QPaintDevice::PaintDeviceMetric);
    using QDial_InitPainter_Callback = void (*)(const QDial*, QPainter*);
    using QDial_Redirected_Callback = QPaintDevice* (*)(const QDial*, QPoint*);
    using QDial_SharedPainter_Callback = QPainter* (*)();
    using QDial_InputMethodEvent_Callback = void (*)(QDial*, QInputMethodEvent*);
    using QDial_InputMethodQuery_Callback = QVariant (*)(const QDial*, Qt::InputMethodQuery);
    using QDial_FocusNextPrevChild_Callback = bool (*)(QDial*, bool);
    using QDial_EventFilter_Callback = bool (*)(QDial*, QObject*, QEvent*);
    using QDial_ChildEvent_Callback = void (*)(QDial*, QChildEvent*);
    using QDial_CustomEvent_Callback = void (*)(QDial*, QEvent*);
    using QDial_ConnectNotify_Callback = void (*)(QDial*, const QMetaMethod&);
    using QDial_DisconnectNotify_Callback = void (*)(QDial*, const QMetaMethod&);
    using QDial_SetRepeatAction_Callback = void (*)(QDial*, QAbstractSlider::SliderAction);
    using QDial_RepeatAction_Callback = QAbstractSlider::SliderAction (*)();
    using QDial_UpdateMicroFocus_Callback = void (*)();
    using QDial_Create_Callback = void (*)();
    using QDial_Destroy_Callback = void (*)();
    using QDial_FocusNextChild_Callback = bool (*)();
    using QDial_FocusPreviousChild_Callback = bool (*)();
    using QDial_Sender_Callback = QObject* (*)();
    using QDial_SenderSignalIndex_Callback = int (*)();
    using QDial_Receivers_Callback = int (*)(const QDial*, const char*);
    using QDial_IsSignalConnected_Callback = bool (*)(const QDial*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QDial_Metacall_Callback qdial_metacall_callback = nullptr;
    QDial_SizeHint_Callback qdial_sizehint_callback = nullptr;
    QDial_MinimumSizeHint_Callback qdial_minimumsizehint_callback = nullptr;
    QDial_Event_Callback qdial_event_callback = nullptr;
    QDial_ResizeEvent_Callback qdial_resizeevent_callback = nullptr;
    QDial_PaintEvent_Callback qdial_paintevent_callback = nullptr;
    QDial_MousePressEvent_Callback qdial_mousepressevent_callback = nullptr;
    QDial_MouseReleaseEvent_Callback qdial_mousereleaseevent_callback = nullptr;
    QDial_MouseMoveEvent_Callback qdial_mousemoveevent_callback = nullptr;
    QDial_SliderChange_Callback qdial_sliderchange_callback = nullptr;
    QDial_InitStyleOption_Callback qdial_initstyleoption_callback = nullptr;
    QDial_KeyPressEvent_Callback qdial_keypressevent_callback = nullptr;
    QDial_TimerEvent_Callback qdial_timerevent_callback = nullptr;
    QDial_WheelEvent_Callback qdial_wheelevent_callback = nullptr;
    QDial_ChangeEvent_Callback qdial_changeevent_callback = nullptr;
    QDial_DevType_Callback qdial_devtype_callback = nullptr;
    QDial_SetVisible_Callback qdial_setvisible_callback = nullptr;
    QDial_HeightForWidth_Callback qdial_heightforwidth_callback = nullptr;
    QDial_HasHeightForWidth_Callback qdial_hasheightforwidth_callback = nullptr;
    QDial_PaintEngine_Callback qdial_paintengine_callback = nullptr;
    QDial_MouseDoubleClickEvent_Callback qdial_mousedoubleclickevent_callback = nullptr;
    QDial_KeyReleaseEvent_Callback qdial_keyreleaseevent_callback = nullptr;
    QDial_FocusInEvent_Callback qdial_focusinevent_callback = nullptr;
    QDial_FocusOutEvent_Callback qdial_focusoutevent_callback = nullptr;
    QDial_EnterEvent_Callback qdial_enterevent_callback = nullptr;
    QDial_LeaveEvent_Callback qdial_leaveevent_callback = nullptr;
    QDial_MoveEvent_Callback qdial_moveevent_callback = nullptr;
    QDial_CloseEvent_Callback qdial_closeevent_callback = nullptr;
    QDial_ContextMenuEvent_Callback qdial_contextmenuevent_callback = nullptr;
    QDial_TabletEvent_Callback qdial_tabletevent_callback = nullptr;
    QDial_ActionEvent_Callback qdial_actionevent_callback = nullptr;
    QDial_DragEnterEvent_Callback qdial_dragenterevent_callback = nullptr;
    QDial_DragMoveEvent_Callback qdial_dragmoveevent_callback = nullptr;
    QDial_DragLeaveEvent_Callback qdial_dragleaveevent_callback = nullptr;
    QDial_DropEvent_Callback qdial_dropevent_callback = nullptr;
    QDial_ShowEvent_Callback qdial_showevent_callback = nullptr;
    QDial_HideEvent_Callback qdial_hideevent_callback = nullptr;
    QDial_NativeEvent_Callback qdial_nativeevent_callback = nullptr;
    QDial_Metric_Callback qdial_metric_callback = nullptr;
    QDial_InitPainter_Callback qdial_initpainter_callback = nullptr;
    QDial_Redirected_Callback qdial_redirected_callback = nullptr;
    QDial_SharedPainter_Callback qdial_sharedpainter_callback = nullptr;
    QDial_InputMethodEvent_Callback qdial_inputmethodevent_callback = nullptr;
    QDial_InputMethodQuery_Callback qdial_inputmethodquery_callback = nullptr;
    QDial_FocusNextPrevChild_Callback qdial_focusnextprevchild_callback = nullptr;
    QDial_EventFilter_Callback qdial_eventfilter_callback = nullptr;
    QDial_ChildEvent_Callback qdial_childevent_callback = nullptr;
    QDial_CustomEvent_Callback qdial_customevent_callback = nullptr;
    QDial_ConnectNotify_Callback qdial_connectnotify_callback = nullptr;
    QDial_DisconnectNotify_Callback qdial_disconnectnotify_callback = nullptr;
    QDial_SetRepeatAction_Callback qdial_setrepeataction_callback = nullptr;
    QDial_RepeatAction_Callback qdial_repeataction_callback = nullptr;
    QDial_UpdateMicroFocus_Callback qdial_updatemicrofocus_callback = nullptr;
    QDial_Create_Callback qdial_create_callback = nullptr;
    QDial_Destroy_Callback qdial_destroy_callback = nullptr;
    QDial_FocusNextChild_Callback qdial_focusnextchild_callback = nullptr;
    QDial_FocusPreviousChild_Callback qdial_focuspreviouschild_callback = nullptr;
    QDial_Sender_Callback qdial_sender_callback = nullptr;
    QDial_SenderSignalIndex_Callback qdial_sendersignalindex_callback = nullptr;
    QDial_Receivers_Callback qdial_receivers_callback = nullptr;
    QDial_IsSignalConnected_Callback qdial_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qdial_metacall_isbase = false;
    mutable bool qdial_sizehint_isbase = false;
    mutable bool qdial_minimumsizehint_isbase = false;
    mutable bool qdial_event_isbase = false;
    mutable bool qdial_resizeevent_isbase = false;
    mutable bool qdial_paintevent_isbase = false;
    mutable bool qdial_mousepressevent_isbase = false;
    mutable bool qdial_mousereleaseevent_isbase = false;
    mutable bool qdial_mousemoveevent_isbase = false;
    mutable bool qdial_sliderchange_isbase = false;
    mutable bool qdial_initstyleoption_isbase = false;
    mutable bool qdial_keypressevent_isbase = false;
    mutable bool qdial_timerevent_isbase = false;
    mutable bool qdial_wheelevent_isbase = false;
    mutable bool qdial_changeevent_isbase = false;
    mutable bool qdial_devtype_isbase = false;
    mutable bool qdial_setvisible_isbase = false;
    mutable bool qdial_heightforwidth_isbase = false;
    mutable bool qdial_hasheightforwidth_isbase = false;
    mutable bool qdial_paintengine_isbase = false;
    mutable bool qdial_mousedoubleclickevent_isbase = false;
    mutable bool qdial_keyreleaseevent_isbase = false;
    mutable bool qdial_focusinevent_isbase = false;
    mutable bool qdial_focusoutevent_isbase = false;
    mutable bool qdial_enterevent_isbase = false;
    mutable bool qdial_leaveevent_isbase = false;
    mutable bool qdial_moveevent_isbase = false;
    mutable bool qdial_closeevent_isbase = false;
    mutable bool qdial_contextmenuevent_isbase = false;
    mutable bool qdial_tabletevent_isbase = false;
    mutable bool qdial_actionevent_isbase = false;
    mutable bool qdial_dragenterevent_isbase = false;
    mutable bool qdial_dragmoveevent_isbase = false;
    mutable bool qdial_dragleaveevent_isbase = false;
    mutable bool qdial_dropevent_isbase = false;
    mutable bool qdial_showevent_isbase = false;
    mutable bool qdial_hideevent_isbase = false;
    mutable bool qdial_nativeevent_isbase = false;
    mutable bool qdial_metric_isbase = false;
    mutable bool qdial_initpainter_isbase = false;
    mutable bool qdial_redirected_isbase = false;
    mutable bool qdial_sharedpainter_isbase = false;
    mutable bool qdial_inputmethodevent_isbase = false;
    mutable bool qdial_inputmethodquery_isbase = false;
    mutable bool qdial_focusnextprevchild_isbase = false;
    mutable bool qdial_eventfilter_isbase = false;
    mutable bool qdial_childevent_isbase = false;
    mutable bool qdial_customevent_isbase = false;
    mutable bool qdial_connectnotify_isbase = false;
    mutable bool qdial_disconnectnotify_isbase = false;
    mutable bool qdial_setrepeataction_isbase = false;
    mutable bool qdial_repeataction_isbase = false;
    mutable bool qdial_updatemicrofocus_isbase = false;
    mutable bool qdial_create_isbase = false;
    mutable bool qdial_destroy_isbase = false;
    mutable bool qdial_focusnextchild_isbase = false;
    mutable bool qdial_focuspreviouschild_isbase = false;
    mutable bool qdial_sender_isbase = false;
    mutable bool qdial_sendersignalindex_isbase = false;
    mutable bool qdial_receivers_isbase = false;
    mutable bool qdial_issignalconnected_isbase = false;

  public:
    VirtualQDial(QWidget* parent) : QDial(parent){};
    VirtualQDial() : QDial(){};

    ~VirtualQDial() {
        qdial_metacall_callback = nullptr;
        qdial_sizehint_callback = nullptr;
        qdial_minimumsizehint_callback = nullptr;
        qdial_event_callback = nullptr;
        qdial_resizeevent_callback = nullptr;
        qdial_paintevent_callback = nullptr;
        qdial_mousepressevent_callback = nullptr;
        qdial_mousereleaseevent_callback = nullptr;
        qdial_mousemoveevent_callback = nullptr;
        qdial_sliderchange_callback = nullptr;
        qdial_initstyleoption_callback = nullptr;
        qdial_keypressevent_callback = nullptr;
        qdial_timerevent_callback = nullptr;
        qdial_wheelevent_callback = nullptr;
        qdial_changeevent_callback = nullptr;
        qdial_devtype_callback = nullptr;
        qdial_setvisible_callback = nullptr;
        qdial_heightforwidth_callback = nullptr;
        qdial_hasheightforwidth_callback = nullptr;
        qdial_paintengine_callback = nullptr;
        qdial_mousedoubleclickevent_callback = nullptr;
        qdial_keyreleaseevent_callback = nullptr;
        qdial_focusinevent_callback = nullptr;
        qdial_focusoutevent_callback = nullptr;
        qdial_enterevent_callback = nullptr;
        qdial_leaveevent_callback = nullptr;
        qdial_moveevent_callback = nullptr;
        qdial_closeevent_callback = nullptr;
        qdial_contextmenuevent_callback = nullptr;
        qdial_tabletevent_callback = nullptr;
        qdial_actionevent_callback = nullptr;
        qdial_dragenterevent_callback = nullptr;
        qdial_dragmoveevent_callback = nullptr;
        qdial_dragleaveevent_callback = nullptr;
        qdial_dropevent_callback = nullptr;
        qdial_showevent_callback = nullptr;
        qdial_hideevent_callback = nullptr;
        qdial_nativeevent_callback = nullptr;
        qdial_metric_callback = nullptr;
        qdial_initpainter_callback = nullptr;
        qdial_redirected_callback = nullptr;
        qdial_sharedpainter_callback = nullptr;
        qdial_inputmethodevent_callback = nullptr;
        qdial_inputmethodquery_callback = nullptr;
        qdial_focusnextprevchild_callback = nullptr;
        qdial_eventfilter_callback = nullptr;
        qdial_childevent_callback = nullptr;
        qdial_customevent_callback = nullptr;
        qdial_connectnotify_callback = nullptr;
        qdial_disconnectnotify_callback = nullptr;
        qdial_setrepeataction_callback = nullptr;
        qdial_repeataction_callback = nullptr;
        qdial_updatemicrofocus_callback = nullptr;
        qdial_create_callback = nullptr;
        qdial_destroy_callback = nullptr;
        qdial_focusnextchild_callback = nullptr;
        qdial_focuspreviouschild_callback = nullptr;
        qdial_sender_callback = nullptr;
        qdial_sendersignalindex_callback = nullptr;
        qdial_receivers_callback = nullptr;
        qdial_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQDial_Metacall_Callback(QDial_Metacall_Callback cb) { qdial_metacall_callback = cb; }
    void setQDial_SizeHint_Callback(QDial_SizeHint_Callback cb) { qdial_sizehint_callback = cb; }
    void setQDial_MinimumSizeHint_Callback(QDial_MinimumSizeHint_Callback cb) { qdial_minimumsizehint_callback = cb; }
    void setQDial_Event_Callback(QDial_Event_Callback cb) { qdial_event_callback = cb; }
    void setQDial_ResizeEvent_Callback(QDial_ResizeEvent_Callback cb) { qdial_resizeevent_callback = cb; }
    void setQDial_PaintEvent_Callback(QDial_PaintEvent_Callback cb) { qdial_paintevent_callback = cb; }
    void setQDial_MousePressEvent_Callback(QDial_MousePressEvent_Callback cb) { qdial_mousepressevent_callback = cb; }
    void setQDial_MouseReleaseEvent_Callback(QDial_MouseReleaseEvent_Callback cb) { qdial_mousereleaseevent_callback = cb; }
    void setQDial_MouseMoveEvent_Callback(QDial_MouseMoveEvent_Callback cb) { qdial_mousemoveevent_callback = cb; }
    void setQDial_SliderChange_Callback(QDial_SliderChange_Callback cb) { qdial_sliderchange_callback = cb; }
    void setQDial_InitStyleOption_Callback(QDial_InitStyleOption_Callback cb) { qdial_initstyleoption_callback = cb; }
    void setQDial_KeyPressEvent_Callback(QDial_KeyPressEvent_Callback cb) { qdial_keypressevent_callback = cb; }
    void setQDial_TimerEvent_Callback(QDial_TimerEvent_Callback cb) { qdial_timerevent_callback = cb; }
    void setQDial_WheelEvent_Callback(QDial_WheelEvent_Callback cb) { qdial_wheelevent_callback = cb; }
    void setQDial_ChangeEvent_Callback(QDial_ChangeEvent_Callback cb) { qdial_changeevent_callback = cb; }
    void setQDial_DevType_Callback(QDial_DevType_Callback cb) { qdial_devtype_callback = cb; }
    void setQDial_SetVisible_Callback(QDial_SetVisible_Callback cb) { qdial_setvisible_callback = cb; }
    void setQDial_HeightForWidth_Callback(QDial_HeightForWidth_Callback cb) { qdial_heightforwidth_callback = cb; }
    void setQDial_HasHeightForWidth_Callback(QDial_HasHeightForWidth_Callback cb) { qdial_hasheightforwidth_callback = cb; }
    void setQDial_PaintEngine_Callback(QDial_PaintEngine_Callback cb) { qdial_paintengine_callback = cb; }
    void setQDial_MouseDoubleClickEvent_Callback(QDial_MouseDoubleClickEvent_Callback cb) { qdial_mousedoubleclickevent_callback = cb; }
    void setQDial_KeyReleaseEvent_Callback(QDial_KeyReleaseEvent_Callback cb) { qdial_keyreleaseevent_callback = cb; }
    void setQDial_FocusInEvent_Callback(QDial_FocusInEvent_Callback cb) { qdial_focusinevent_callback = cb; }
    void setQDial_FocusOutEvent_Callback(QDial_FocusOutEvent_Callback cb) { qdial_focusoutevent_callback = cb; }
    void setQDial_EnterEvent_Callback(QDial_EnterEvent_Callback cb) { qdial_enterevent_callback = cb; }
    void setQDial_LeaveEvent_Callback(QDial_LeaveEvent_Callback cb) { qdial_leaveevent_callback = cb; }
    void setQDial_MoveEvent_Callback(QDial_MoveEvent_Callback cb) { qdial_moveevent_callback = cb; }
    void setQDial_CloseEvent_Callback(QDial_CloseEvent_Callback cb) { qdial_closeevent_callback = cb; }
    void setQDial_ContextMenuEvent_Callback(QDial_ContextMenuEvent_Callback cb) { qdial_contextmenuevent_callback = cb; }
    void setQDial_TabletEvent_Callback(QDial_TabletEvent_Callback cb) { qdial_tabletevent_callback = cb; }
    void setQDial_ActionEvent_Callback(QDial_ActionEvent_Callback cb) { qdial_actionevent_callback = cb; }
    void setQDial_DragEnterEvent_Callback(QDial_DragEnterEvent_Callback cb) { qdial_dragenterevent_callback = cb; }
    void setQDial_DragMoveEvent_Callback(QDial_DragMoveEvent_Callback cb) { qdial_dragmoveevent_callback = cb; }
    void setQDial_DragLeaveEvent_Callback(QDial_DragLeaveEvent_Callback cb) { qdial_dragleaveevent_callback = cb; }
    void setQDial_DropEvent_Callback(QDial_DropEvent_Callback cb) { qdial_dropevent_callback = cb; }
    void setQDial_ShowEvent_Callback(QDial_ShowEvent_Callback cb) { qdial_showevent_callback = cb; }
    void setQDial_HideEvent_Callback(QDial_HideEvent_Callback cb) { qdial_hideevent_callback = cb; }
    void setQDial_NativeEvent_Callback(QDial_NativeEvent_Callback cb) { qdial_nativeevent_callback = cb; }
    void setQDial_Metric_Callback(QDial_Metric_Callback cb) { qdial_metric_callback = cb; }
    void setQDial_InitPainter_Callback(QDial_InitPainter_Callback cb) { qdial_initpainter_callback = cb; }
    void setQDial_Redirected_Callback(QDial_Redirected_Callback cb) { qdial_redirected_callback = cb; }
    void setQDial_SharedPainter_Callback(QDial_SharedPainter_Callback cb) { qdial_sharedpainter_callback = cb; }
    void setQDial_InputMethodEvent_Callback(QDial_InputMethodEvent_Callback cb) { qdial_inputmethodevent_callback = cb; }
    void setQDial_InputMethodQuery_Callback(QDial_InputMethodQuery_Callback cb) { qdial_inputmethodquery_callback = cb; }
    void setQDial_FocusNextPrevChild_Callback(QDial_FocusNextPrevChild_Callback cb) { qdial_focusnextprevchild_callback = cb; }
    void setQDial_EventFilter_Callback(QDial_EventFilter_Callback cb) { qdial_eventfilter_callback = cb; }
    void setQDial_ChildEvent_Callback(QDial_ChildEvent_Callback cb) { qdial_childevent_callback = cb; }
    void setQDial_CustomEvent_Callback(QDial_CustomEvent_Callback cb) { qdial_customevent_callback = cb; }
    void setQDial_ConnectNotify_Callback(QDial_ConnectNotify_Callback cb) { qdial_connectnotify_callback = cb; }
    void setQDial_DisconnectNotify_Callback(QDial_DisconnectNotify_Callback cb) { qdial_disconnectnotify_callback = cb; }
    void setQDial_SetRepeatAction_Callback(QDial_SetRepeatAction_Callback cb) { qdial_setrepeataction_callback = cb; }
    void setQDial_RepeatAction_Callback(QDial_RepeatAction_Callback cb) { qdial_repeataction_callback = cb; }
    void setQDial_UpdateMicroFocus_Callback(QDial_UpdateMicroFocus_Callback cb) { qdial_updatemicrofocus_callback = cb; }
    void setQDial_Create_Callback(QDial_Create_Callback cb) { qdial_create_callback = cb; }
    void setQDial_Destroy_Callback(QDial_Destroy_Callback cb) { qdial_destroy_callback = cb; }
    void setQDial_FocusNextChild_Callback(QDial_FocusNextChild_Callback cb) { qdial_focusnextchild_callback = cb; }
    void setQDial_FocusPreviousChild_Callback(QDial_FocusPreviousChild_Callback cb) { qdial_focuspreviouschild_callback = cb; }
    void setQDial_Sender_Callback(QDial_Sender_Callback cb) { qdial_sender_callback = cb; }
    void setQDial_SenderSignalIndex_Callback(QDial_SenderSignalIndex_Callback cb) { qdial_sendersignalindex_callback = cb; }
    void setQDial_Receivers_Callback(QDial_Receivers_Callback cb) { qdial_receivers_callback = cb; }
    void setQDial_IsSignalConnected_Callback(QDial_IsSignalConnected_Callback cb) { qdial_issignalconnected_callback = cb; }

    // Base flag setters
    void setQDial_Metacall_IsBase(bool value) const { qdial_metacall_isbase = value; }
    void setQDial_SizeHint_IsBase(bool value) const { qdial_sizehint_isbase = value; }
    void setQDial_MinimumSizeHint_IsBase(bool value) const { qdial_minimumsizehint_isbase = value; }
    void setQDial_Event_IsBase(bool value) const { qdial_event_isbase = value; }
    void setQDial_ResizeEvent_IsBase(bool value) const { qdial_resizeevent_isbase = value; }
    void setQDial_PaintEvent_IsBase(bool value) const { qdial_paintevent_isbase = value; }
    void setQDial_MousePressEvent_IsBase(bool value) const { qdial_mousepressevent_isbase = value; }
    void setQDial_MouseReleaseEvent_IsBase(bool value) const { qdial_mousereleaseevent_isbase = value; }
    void setQDial_MouseMoveEvent_IsBase(bool value) const { qdial_mousemoveevent_isbase = value; }
    void setQDial_SliderChange_IsBase(bool value) const { qdial_sliderchange_isbase = value; }
    void setQDial_InitStyleOption_IsBase(bool value) const { qdial_initstyleoption_isbase = value; }
    void setQDial_KeyPressEvent_IsBase(bool value) const { qdial_keypressevent_isbase = value; }
    void setQDial_TimerEvent_IsBase(bool value) const { qdial_timerevent_isbase = value; }
    void setQDial_WheelEvent_IsBase(bool value) const { qdial_wheelevent_isbase = value; }
    void setQDial_ChangeEvent_IsBase(bool value) const { qdial_changeevent_isbase = value; }
    void setQDial_DevType_IsBase(bool value) const { qdial_devtype_isbase = value; }
    void setQDial_SetVisible_IsBase(bool value) const { qdial_setvisible_isbase = value; }
    void setQDial_HeightForWidth_IsBase(bool value) const { qdial_heightforwidth_isbase = value; }
    void setQDial_HasHeightForWidth_IsBase(bool value) const { qdial_hasheightforwidth_isbase = value; }
    void setQDial_PaintEngine_IsBase(bool value) const { qdial_paintengine_isbase = value; }
    void setQDial_MouseDoubleClickEvent_IsBase(bool value) const { qdial_mousedoubleclickevent_isbase = value; }
    void setQDial_KeyReleaseEvent_IsBase(bool value) const { qdial_keyreleaseevent_isbase = value; }
    void setQDial_FocusInEvent_IsBase(bool value) const { qdial_focusinevent_isbase = value; }
    void setQDial_FocusOutEvent_IsBase(bool value) const { qdial_focusoutevent_isbase = value; }
    void setQDial_EnterEvent_IsBase(bool value) const { qdial_enterevent_isbase = value; }
    void setQDial_LeaveEvent_IsBase(bool value) const { qdial_leaveevent_isbase = value; }
    void setQDial_MoveEvent_IsBase(bool value) const { qdial_moveevent_isbase = value; }
    void setQDial_CloseEvent_IsBase(bool value) const { qdial_closeevent_isbase = value; }
    void setQDial_ContextMenuEvent_IsBase(bool value) const { qdial_contextmenuevent_isbase = value; }
    void setQDial_TabletEvent_IsBase(bool value) const { qdial_tabletevent_isbase = value; }
    void setQDial_ActionEvent_IsBase(bool value) const { qdial_actionevent_isbase = value; }
    void setQDial_DragEnterEvent_IsBase(bool value) const { qdial_dragenterevent_isbase = value; }
    void setQDial_DragMoveEvent_IsBase(bool value) const { qdial_dragmoveevent_isbase = value; }
    void setQDial_DragLeaveEvent_IsBase(bool value) const { qdial_dragleaveevent_isbase = value; }
    void setQDial_DropEvent_IsBase(bool value) const { qdial_dropevent_isbase = value; }
    void setQDial_ShowEvent_IsBase(bool value) const { qdial_showevent_isbase = value; }
    void setQDial_HideEvent_IsBase(bool value) const { qdial_hideevent_isbase = value; }
    void setQDial_NativeEvent_IsBase(bool value) const { qdial_nativeevent_isbase = value; }
    void setQDial_Metric_IsBase(bool value) const { qdial_metric_isbase = value; }
    void setQDial_InitPainter_IsBase(bool value) const { qdial_initpainter_isbase = value; }
    void setQDial_Redirected_IsBase(bool value) const { qdial_redirected_isbase = value; }
    void setQDial_SharedPainter_IsBase(bool value) const { qdial_sharedpainter_isbase = value; }
    void setQDial_InputMethodEvent_IsBase(bool value) const { qdial_inputmethodevent_isbase = value; }
    void setQDial_InputMethodQuery_IsBase(bool value) const { qdial_inputmethodquery_isbase = value; }
    void setQDial_FocusNextPrevChild_IsBase(bool value) const { qdial_focusnextprevchild_isbase = value; }
    void setQDial_EventFilter_IsBase(bool value) const { qdial_eventfilter_isbase = value; }
    void setQDial_ChildEvent_IsBase(bool value) const { qdial_childevent_isbase = value; }
    void setQDial_CustomEvent_IsBase(bool value) const { qdial_customevent_isbase = value; }
    void setQDial_ConnectNotify_IsBase(bool value) const { qdial_connectnotify_isbase = value; }
    void setQDial_DisconnectNotify_IsBase(bool value) const { qdial_disconnectnotify_isbase = value; }
    void setQDial_SetRepeatAction_IsBase(bool value) const { qdial_setrepeataction_isbase = value; }
    void setQDial_RepeatAction_IsBase(bool value) const { qdial_repeataction_isbase = value; }
    void setQDial_UpdateMicroFocus_IsBase(bool value) const { qdial_updatemicrofocus_isbase = value; }
    void setQDial_Create_IsBase(bool value) const { qdial_create_isbase = value; }
    void setQDial_Destroy_IsBase(bool value) const { qdial_destroy_isbase = value; }
    void setQDial_FocusNextChild_IsBase(bool value) const { qdial_focusnextchild_isbase = value; }
    void setQDial_FocusPreviousChild_IsBase(bool value) const { qdial_focuspreviouschild_isbase = value; }
    void setQDial_Sender_IsBase(bool value) const { qdial_sender_isbase = value; }
    void setQDial_SenderSignalIndex_IsBase(bool value) const { qdial_sendersignalindex_isbase = value; }
    void setQDial_Receivers_IsBase(bool value) const { qdial_receivers_isbase = value; }
    void setQDial_IsSignalConnected_IsBase(bool value) const { qdial_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdial_metacall_isbase) {
            qdial_metacall_isbase = false;
            return QDial::qt_metacall(param1, param2, param3);
        } else if (qdial_metacall_callback != nullptr) {
            return qdial_metacall_callback(this, param1, param2, param3);
        } else {
            return QDial::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qdial_sizehint_isbase) {
            qdial_sizehint_isbase = false;
            return QDial::sizeHint();
        } else if (qdial_sizehint_callback != nullptr) {
            return qdial_sizehint_callback();
        } else {
            return QDial::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qdial_minimumsizehint_isbase) {
            qdial_minimumsizehint_isbase = false;
            return QDial::minimumSizeHint();
        } else if (qdial_minimumsizehint_callback != nullptr) {
            return qdial_minimumsizehint_callback();
        } else {
            return QDial::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qdial_event_isbase) {
            qdial_event_isbase = false;
            return QDial::event(e);
        } else if (qdial_event_callback != nullptr) {
            return qdial_event_callback(this, e);
        } else {
            return QDial::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* re) override {
        if (qdial_resizeevent_isbase) {
            qdial_resizeevent_isbase = false;
            QDial::resizeEvent(re);
        } else if (qdial_resizeevent_callback != nullptr) {
            qdial_resizeevent_callback(this, re);
        } else {
            QDial::resizeEvent(re);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* pe) override {
        if (qdial_paintevent_isbase) {
            qdial_paintevent_isbase = false;
            QDial::paintEvent(pe);
        } else if (qdial_paintevent_callback != nullptr) {
            qdial_paintevent_callback(this, pe);
        } else {
            QDial::paintEvent(pe);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* me) override {
        if (qdial_mousepressevent_isbase) {
            qdial_mousepressevent_isbase = false;
            QDial::mousePressEvent(me);
        } else if (qdial_mousepressevent_callback != nullptr) {
            qdial_mousepressevent_callback(this, me);
        } else {
            QDial::mousePressEvent(me);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* me) override {
        if (qdial_mousereleaseevent_isbase) {
            qdial_mousereleaseevent_isbase = false;
            QDial::mouseReleaseEvent(me);
        } else if (qdial_mousereleaseevent_callback != nullptr) {
            qdial_mousereleaseevent_callback(this, me);
        } else {
            QDial::mouseReleaseEvent(me);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* me) override {
        if (qdial_mousemoveevent_isbase) {
            qdial_mousemoveevent_isbase = false;
            QDial::mouseMoveEvent(me);
        } else if (qdial_mousemoveevent_callback != nullptr) {
            qdial_mousemoveevent_callback(this, me);
        } else {
            QDial::mouseMoveEvent(me);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void sliderChange(QAbstractSlider::SliderChange change) override {
        if (qdial_sliderchange_isbase) {
            qdial_sliderchange_isbase = false;
            QDial::sliderChange(change);
        } else if (qdial_sliderchange_callback != nullptr) {
            qdial_sliderchange_callback(this, change);
        } else {
            QDial::sliderChange(change);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionSlider* option) const override {
        if (qdial_initstyleoption_isbase) {
            qdial_initstyleoption_isbase = false;
            QDial::initStyleOption(option);
        } else if (qdial_initstyleoption_callback != nullptr) {
            qdial_initstyleoption_callback(this, option);
        } else {
            QDial::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* ev) override {
        if (qdial_keypressevent_isbase) {
            qdial_keypressevent_isbase = false;
            QDial::keyPressEvent(ev);
        } else if (qdial_keypressevent_callback != nullptr) {
            qdial_keypressevent_callback(this, ev);
        } else {
            QDial::keyPressEvent(ev);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (qdial_timerevent_isbase) {
            qdial_timerevent_isbase = false;
            QDial::timerEvent(param1);
        } else if (qdial_timerevent_callback != nullptr) {
            qdial_timerevent_callback(this, param1);
        } else {
            QDial::timerEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (qdial_wheelevent_isbase) {
            qdial_wheelevent_isbase = false;
            QDial::wheelEvent(e);
        } else if (qdial_wheelevent_callback != nullptr) {
            qdial_wheelevent_callback(this, e);
        } else {
            QDial::wheelEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (qdial_changeevent_isbase) {
            qdial_changeevent_isbase = false;
            QDial::changeEvent(e);
        } else if (qdial_changeevent_callback != nullptr) {
            qdial_changeevent_callback(this, e);
        } else {
            QDial::changeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qdial_devtype_isbase) {
            qdial_devtype_isbase = false;
            return QDial::devType();
        } else if (qdial_devtype_callback != nullptr) {
            return qdial_devtype_callback();
        } else {
            return QDial::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qdial_setvisible_isbase) {
            qdial_setvisible_isbase = false;
            QDial::setVisible(visible);
        } else if (qdial_setvisible_callback != nullptr) {
            qdial_setvisible_callback(this, visible);
        } else {
            QDial::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qdial_heightforwidth_isbase) {
            qdial_heightforwidth_isbase = false;
            return QDial::heightForWidth(param1);
        } else if (qdial_heightforwidth_callback != nullptr) {
            return qdial_heightforwidth_callback(this, param1);
        } else {
            return QDial::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qdial_hasheightforwidth_isbase) {
            qdial_hasheightforwidth_isbase = false;
            return QDial::hasHeightForWidth();
        } else if (qdial_hasheightforwidth_callback != nullptr) {
            return qdial_hasheightforwidth_callback();
        } else {
            return QDial::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qdial_paintengine_isbase) {
            qdial_paintengine_isbase = false;
            return QDial::paintEngine();
        } else if (qdial_paintengine_callback != nullptr) {
            return qdial_paintengine_callback();
        } else {
            return QDial::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qdial_mousedoubleclickevent_isbase) {
            qdial_mousedoubleclickevent_isbase = false;
            QDial::mouseDoubleClickEvent(event);
        } else if (qdial_mousedoubleclickevent_callback != nullptr) {
            qdial_mousedoubleclickevent_callback(this, event);
        } else {
            QDial::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qdial_keyreleaseevent_isbase) {
            qdial_keyreleaseevent_isbase = false;
            QDial::keyReleaseEvent(event);
        } else if (qdial_keyreleaseevent_callback != nullptr) {
            qdial_keyreleaseevent_callback(this, event);
        } else {
            QDial::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qdial_focusinevent_isbase) {
            qdial_focusinevent_isbase = false;
            QDial::focusInEvent(event);
        } else if (qdial_focusinevent_callback != nullptr) {
            qdial_focusinevent_callback(this, event);
        } else {
            QDial::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qdial_focusoutevent_isbase) {
            qdial_focusoutevent_isbase = false;
            QDial::focusOutEvent(event);
        } else if (qdial_focusoutevent_callback != nullptr) {
            qdial_focusoutevent_callback(this, event);
        } else {
            QDial::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qdial_enterevent_isbase) {
            qdial_enterevent_isbase = false;
            QDial::enterEvent(event);
        } else if (qdial_enterevent_callback != nullptr) {
            qdial_enterevent_callback(this, event);
        } else {
            QDial::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qdial_leaveevent_isbase) {
            qdial_leaveevent_isbase = false;
            QDial::leaveEvent(event);
        } else if (qdial_leaveevent_callback != nullptr) {
            qdial_leaveevent_callback(this, event);
        } else {
            QDial::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qdial_moveevent_isbase) {
            qdial_moveevent_isbase = false;
            QDial::moveEvent(event);
        } else if (qdial_moveevent_callback != nullptr) {
            qdial_moveevent_callback(this, event);
        } else {
            QDial::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qdial_closeevent_isbase) {
            qdial_closeevent_isbase = false;
            QDial::closeEvent(event);
        } else if (qdial_closeevent_callback != nullptr) {
            qdial_closeevent_callback(this, event);
        } else {
            QDial::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qdial_contextmenuevent_isbase) {
            qdial_contextmenuevent_isbase = false;
            QDial::contextMenuEvent(event);
        } else if (qdial_contextmenuevent_callback != nullptr) {
            qdial_contextmenuevent_callback(this, event);
        } else {
            QDial::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qdial_tabletevent_isbase) {
            qdial_tabletevent_isbase = false;
            QDial::tabletEvent(event);
        } else if (qdial_tabletevent_callback != nullptr) {
            qdial_tabletevent_callback(this, event);
        } else {
            QDial::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qdial_actionevent_isbase) {
            qdial_actionevent_isbase = false;
            QDial::actionEvent(event);
        } else if (qdial_actionevent_callback != nullptr) {
            qdial_actionevent_callback(this, event);
        } else {
            QDial::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qdial_dragenterevent_isbase) {
            qdial_dragenterevent_isbase = false;
            QDial::dragEnterEvent(event);
        } else if (qdial_dragenterevent_callback != nullptr) {
            qdial_dragenterevent_callback(this, event);
        } else {
            QDial::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qdial_dragmoveevent_isbase) {
            qdial_dragmoveevent_isbase = false;
            QDial::dragMoveEvent(event);
        } else if (qdial_dragmoveevent_callback != nullptr) {
            qdial_dragmoveevent_callback(this, event);
        } else {
            QDial::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qdial_dragleaveevent_isbase) {
            qdial_dragleaveevent_isbase = false;
            QDial::dragLeaveEvent(event);
        } else if (qdial_dragleaveevent_callback != nullptr) {
            qdial_dragleaveevent_callback(this, event);
        } else {
            QDial::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qdial_dropevent_isbase) {
            qdial_dropevent_isbase = false;
            QDial::dropEvent(event);
        } else if (qdial_dropevent_callback != nullptr) {
            qdial_dropevent_callback(this, event);
        } else {
            QDial::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qdial_showevent_isbase) {
            qdial_showevent_isbase = false;
            QDial::showEvent(event);
        } else if (qdial_showevent_callback != nullptr) {
            qdial_showevent_callback(this, event);
        } else {
            QDial::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qdial_hideevent_isbase) {
            qdial_hideevent_isbase = false;
            QDial::hideEvent(event);
        } else if (qdial_hideevent_callback != nullptr) {
            qdial_hideevent_callback(this, event);
        } else {
            QDial::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qdial_nativeevent_isbase) {
            qdial_nativeevent_isbase = false;
            return QDial::nativeEvent(eventType, message, result);
        } else if (qdial_nativeevent_callback != nullptr) {
            return qdial_nativeevent_callback(this, eventType, message, result);
        } else {
            return QDial::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qdial_metric_isbase) {
            qdial_metric_isbase = false;
            return QDial::metric(param1);
        } else if (qdial_metric_callback != nullptr) {
            return qdial_metric_callback(this, param1);
        } else {
            return QDial::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qdial_initpainter_isbase) {
            qdial_initpainter_isbase = false;
            QDial::initPainter(painter);
        } else if (qdial_initpainter_callback != nullptr) {
            qdial_initpainter_callback(this, painter);
        } else {
            QDial::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qdial_redirected_isbase) {
            qdial_redirected_isbase = false;
            return QDial::redirected(offset);
        } else if (qdial_redirected_callback != nullptr) {
            return qdial_redirected_callback(this, offset);
        } else {
            return QDial::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qdial_sharedpainter_isbase) {
            qdial_sharedpainter_isbase = false;
            return QDial::sharedPainter();
        } else if (qdial_sharedpainter_callback != nullptr) {
            return qdial_sharedpainter_callback();
        } else {
            return QDial::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qdial_inputmethodevent_isbase) {
            qdial_inputmethodevent_isbase = false;
            QDial::inputMethodEvent(param1);
        } else if (qdial_inputmethodevent_callback != nullptr) {
            qdial_inputmethodevent_callback(this, param1);
        } else {
            QDial::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qdial_inputmethodquery_isbase) {
            qdial_inputmethodquery_isbase = false;
            return QDial::inputMethodQuery(param1);
        } else if (qdial_inputmethodquery_callback != nullptr) {
            return qdial_inputmethodquery_callback(this, param1);
        } else {
            return QDial::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qdial_focusnextprevchild_isbase) {
            qdial_focusnextprevchild_isbase = false;
            return QDial::focusNextPrevChild(next);
        } else if (qdial_focusnextprevchild_callback != nullptr) {
            return qdial_focusnextprevchild_callback(this, next);
        } else {
            return QDial::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdial_eventfilter_isbase) {
            qdial_eventfilter_isbase = false;
            return QDial::eventFilter(watched, event);
        } else if (qdial_eventfilter_callback != nullptr) {
            return qdial_eventfilter_callback(this, watched, event);
        } else {
            return QDial::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdial_childevent_isbase) {
            qdial_childevent_isbase = false;
            QDial::childEvent(event);
        } else if (qdial_childevent_callback != nullptr) {
            qdial_childevent_callback(this, event);
        } else {
            QDial::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdial_customevent_isbase) {
            qdial_customevent_isbase = false;
            QDial::customEvent(event);
        } else if (qdial_customevent_callback != nullptr) {
            qdial_customevent_callback(this, event);
        } else {
            QDial::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdial_connectnotify_isbase) {
            qdial_connectnotify_isbase = false;
            QDial::connectNotify(signal);
        } else if (qdial_connectnotify_callback != nullptr) {
            qdial_connectnotify_callback(this, signal);
        } else {
            QDial::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdial_disconnectnotify_isbase) {
            qdial_disconnectnotify_isbase = false;
            QDial::disconnectNotify(signal);
        } else if (qdial_disconnectnotify_callback != nullptr) {
            qdial_disconnectnotify_callback(this, signal);
        } else {
            QDial::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setRepeatAction(QAbstractSlider::SliderAction action) {
        if (qdial_setrepeataction_isbase) {
            qdial_setrepeataction_isbase = false;
            QDial::setRepeatAction(action);
        } else if (qdial_setrepeataction_callback != nullptr) {
            qdial_setrepeataction_callback(this, action);
        } else {
            QDial::setRepeatAction(action);
        }
    }

    // Virtual method for C ABI access and custom callback
    QAbstractSlider::SliderAction repeatAction() const {
        if (qdial_repeataction_isbase) {
            qdial_repeataction_isbase = false;
            return QDial::repeatAction();
        } else if (qdial_repeataction_callback != nullptr) {
            return qdial_repeataction_callback();
        } else {
            return QDial::repeatAction();
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qdial_updatemicrofocus_isbase) {
            qdial_updatemicrofocus_isbase = false;
            QDial::updateMicroFocus();
        } else if (qdial_updatemicrofocus_callback != nullptr) {
            qdial_updatemicrofocus_callback();
        } else {
            QDial::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qdial_create_isbase) {
            qdial_create_isbase = false;
            QDial::create();
        } else if (qdial_create_callback != nullptr) {
            qdial_create_callback();
        } else {
            QDial::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qdial_destroy_isbase) {
            qdial_destroy_isbase = false;
            QDial::destroy();
        } else if (qdial_destroy_callback != nullptr) {
            qdial_destroy_callback();
        } else {
            QDial::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qdial_focusnextchild_isbase) {
            qdial_focusnextchild_isbase = false;
            return QDial::focusNextChild();
        } else if (qdial_focusnextchild_callback != nullptr) {
            return qdial_focusnextchild_callback();
        } else {
            return QDial::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qdial_focuspreviouschild_isbase) {
            qdial_focuspreviouschild_isbase = false;
            return QDial::focusPreviousChild();
        } else if (qdial_focuspreviouschild_callback != nullptr) {
            return qdial_focuspreviouschild_callback();
        } else {
            return QDial::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qdial_sender_isbase) {
            qdial_sender_isbase = false;
            return QDial::sender();
        } else if (qdial_sender_callback != nullptr) {
            return qdial_sender_callback();
        } else {
            return QDial::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qdial_sendersignalindex_isbase) {
            qdial_sendersignalindex_isbase = false;
            return QDial::senderSignalIndex();
        } else if (qdial_sendersignalindex_callback != nullptr) {
            return qdial_sendersignalindex_callback();
        } else {
            return QDial::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qdial_receivers_isbase) {
            qdial_receivers_isbase = false;
            return QDial::receivers(signal);
        } else if (qdial_receivers_callback != nullptr) {
            return qdial_receivers_callback(this, signal);
        } else {
            return QDial::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qdial_issignalconnected_isbase) {
            qdial_issignalconnected_isbase = false;
            return QDial::isSignalConnected(signal);
        } else if (qdial_issignalconnected_callback != nullptr) {
            return qdial_issignalconnected_callback(this, signal);
        } else {
            return QDial::isSignalConnected(signal);
        }
    }
};

#endif
