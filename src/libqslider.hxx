#pragma once
#ifndef SRCC_LIBVIRTUALQSLIDER_H
#define SRCC_LIBVIRTUALQSLIDER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QSlider so that we can call protected methods
class VirtualQSlider : public QSlider {

  public:
    // Virtual class public types (including callbacks)
    using QAbstractSlider::SliderChange;
    using QSlider_Metacall_Callback = int (*)(QSlider*, QMetaObject::Call, int, void**);
    using QSlider_SizeHint_Callback = QSize (*)();
    using QSlider_MinimumSizeHint_Callback = QSize (*)();
    using QSlider_Event_Callback = bool (*)(QSlider*, QEvent*);
    using QSlider_PaintEvent_Callback = void (*)(QSlider*, QPaintEvent*);
    using QSlider_MousePressEvent_Callback = void (*)(QSlider*, QMouseEvent*);
    using QSlider_MouseReleaseEvent_Callback = void (*)(QSlider*, QMouseEvent*);
    using QSlider_MouseMoveEvent_Callback = void (*)(QSlider*, QMouseEvent*);
    using QSlider_InitStyleOption_Callback = void (*)(const QSlider*, QStyleOptionSlider*);
    using QSlider_SliderChange_Callback = void (*)(QSlider*, int);
    using QSlider_KeyPressEvent_Callback = void (*)(QSlider*, QKeyEvent*);
    using QSlider_TimerEvent_Callback = void (*)(QSlider*, QTimerEvent*);
    using QSlider_WheelEvent_Callback = void (*)(QSlider*, QWheelEvent*);
    using QSlider_ChangeEvent_Callback = void (*)(QSlider*, QEvent*);
    using QSlider_DevType_Callback = int (*)();
    using QSlider_SetVisible_Callback = void (*)(QSlider*, bool);
    using QSlider_HeightForWidth_Callback = int (*)(const QSlider*, int);
    using QSlider_HasHeightForWidth_Callback = bool (*)();
    using QSlider_PaintEngine_Callback = QPaintEngine* (*)();
    using QSlider_MouseDoubleClickEvent_Callback = void (*)(QSlider*, QMouseEvent*);
    using QSlider_KeyReleaseEvent_Callback = void (*)(QSlider*, QKeyEvent*);
    using QSlider_FocusInEvent_Callback = void (*)(QSlider*, QFocusEvent*);
    using QSlider_FocusOutEvent_Callback = void (*)(QSlider*, QFocusEvent*);
    using QSlider_EnterEvent_Callback = void (*)(QSlider*, QEnterEvent*);
    using QSlider_LeaveEvent_Callback = void (*)(QSlider*, QEvent*);
    using QSlider_MoveEvent_Callback = void (*)(QSlider*, QMoveEvent*);
    using QSlider_ResizeEvent_Callback = void (*)(QSlider*, QResizeEvent*);
    using QSlider_CloseEvent_Callback = void (*)(QSlider*, QCloseEvent*);
    using QSlider_ContextMenuEvent_Callback = void (*)(QSlider*, QContextMenuEvent*);
    using QSlider_TabletEvent_Callback = void (*)(QSlider*, QTabletEvent*);
    using QSlider_ActionEvent_Callback = void (*)(QSlider*, QActionEvent*);
    using QSlider_DragEnterEvent_Callback = void (*)(QSlider*, QDragEnterEvent*);
    using QSlider_DragMoveEvent_Callback = void (*)(QSlider*, QDragMoveEvent*);
    using QSlider_DragLeaveEvent_Callback = void (*)(QSlider*, QDragLeaveEvent*);
    using QSlider_DropEvent_Callback = void (*)(QSlider*, QDropEvent*);
    using QSlider_ShowEvent_Callback = void (*)(QSlider*, QShowEvent*);
    using QSlider_HideEvent_Callback = void (*)(QSlider*, QHideEvent*);
    using QSlider_NativeEvent_Callback = bool (*)(QSlider*, const QByteArray&, void*, qintptr*);
    using QSlider_Metric_Callback = int (*)(const QSlider*, QPaintDevice::PaintDeviceMetric);
    using QSlider_InitPainter_Callback = void (*)(const QSlider*, QPainter*);
    using QSlider_Redirected_Callback = QPaintDevice* (*)(const QSlider*, QPoint*);
    using QSlider_SharedPainter_Callback = QPainter* (*)();
    using QSlider_InputMethodEvent_Callback = void (*)(QSlider*, QInputMethodEvent*);
    using QSlider_InputMethodQuery_Callback = QVariant (*)(const QSlider*, Qt::InputMethodQuery);
    using QSlider_FocusNextPrevChild_Callback = bool (*)(QSlider*, bool);
    using QSlider_EventFilter_Callback = bool (*)(QSlider*, QObject*, QEvent*);
    using QSlider_ChildEvent_Callback = void (*)(QSlider*, QChildEvent*);
    using QSlider_CustomEvent_Callback = void (*)(QSlider*, QEvent*);
    using QSlider_ConnectNotify_Callback = void (*)(QSlider*, const QMetaMethod&);
    using QSlider_DisconnectNotify_Callback = void (*)(QSlider*, const QMetaMethod&);
    using QSlider_SetRepeatAction_Callback = void (*)(QSlider*, QAbstractSlider::SliderAction);
    using QSlider_RepeatAction_Callback = QAbstractSlider::SliderAction (*)();
    using QSlider_UpdateMicroFocus_Callback = void (*)();
    using QSlider_Create_Callback = void (*)();
    using QSlider_Destroy_Callback = void (*)();
    using QSlider_FocusNextChild_Callback = bool (*)();
    using QSlider_FocusPreviousChild_Callback = bool (*)();
    using QSlider_Sender_Callback = QObject* (*)();
    using QSlider_SenderSignalIndex_Callback = int (*)();
    using QSlider_Receivers_Callback = int (*)(const QSlider*, const char*);
    using QSlider_IsSignalConnected_Callback = bool (*)(const QSlider*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QSlider_Metacall_Callback qslider_metacall_callback = nullptr;
    QSlider_SizeHint_Callback qslider_sizehint_callback = nullptr;
    QSlider_MinimumSizeHint_Callback qslider_minimumsizehint_callback = nullptr;
    QSlider_Event_Callback qslider_event_callback = nullptr;
    QSlider_PaintEvent_Callback qslider_paintevent_callback = nullptr;
    QSlider_MousePressEvent_Callback qslider_mousepressevent_callback = nullptr;
    QSlider_MouseReleaseEvent_Callback qslider_mousereleaseevent_callback = nullptr;
    QSlider_MouseMoveEvent_Callback qslider_mousemoveevent_callback = nullptr;
    QSlider_InitStyleOption_Callback qslider_initstyleoption_callback = nullptr;
    QSlider_SliderChange_Callback qslider_sliderchange_callback = nullptr;
    QSlider_KeyPressEvent_Callback qslider_keypressevent_callback = nullptr;
    QSlider_TimerEvent_Callback qslider_timerevent_callback = nullptr;
    QSlider_WheelEvent_Callback qslider_wheelevent_callback = nullptr;
    QSlider_ChangeEvent_Callback qslider_changeevent_callback = nullptr;
    QSlider_DevType_Callback qslider_devtype_callback = nullptr;
    QSlider_SetVisible_Callback qslider_setvisible_callback = nullptr;
    QSlider_HeightForWidth_Callback qslider_heightforwidth_callback = nullptr;
    QSlider_HasHeightForWidth_Callback qslider_hasheightforwidth_callback = nullptr;
    QSlider_PaintEngine_Callback qslider_paintengine_callback = nullptr;
    QSlider_MouseDoubleClickEvent_Callback qslider_mousedoubleclickevent_callback = nullptr;
    QSlider_KeyReleaseEvent_Callback qslider_keyreleaseevent_callback = nullptr;
    QSlider_FocusInEvent_Callback qslider_focusinevent_callback = nullptr;
    QSlider_FocusOutEvent_Callback qslider_focusoutevent_callback = nullptr;
    QSlider_EnterEvent_Callback qslider_enterevent_callback = nullptr;
    QSlider_LeaveEvent_Callback qslider_leaveevent_callback = nullptr;
    QSlider_MoveEvent_Callback qslider_moveevent_callback = nullptr;
    QSlider_ResizeEvent_Callback qslider_resizeevent_callback = nullptr;
    QSlider_CloseEvent_Callback qslider_closeevent_callback = nullptr;
    QSlider_ContextMenuEvent_Callback qslider_contextmenuevent_callback = nullptr;
    QSlider_TabletEvent_Callback qslider_tabletevent_callback = nullptr;
    QSlider_ActionEvent_Callback qslider_actionevent_callback = nullptr;
    QSlider_DragEnterEvent_Callback qslider_dragenterevent_callback = nullptr;
    QSlider_DragMoveEvent_Callback qslider_dragmoveevent_callback = nullptr;
    QSlider_DragLeaveEvent_Callback qslider_dragleaveevent_callback = nullptr;
    QSlider_DropEvent_Callback qslider_dropevent_callback = nullptr;
    QSlider_ShowEvent_Callback qslider_showevent_callback = nullptr;
    QSlider_HideEvent_Callback qslider_hideevent_callback = nullptr;
    QSlider_NativeEvent_Callback qslider_nativeevent_callback = nullptr;
    QSlider_Metric_Callback qslider_metric_callback = nullptr;
    QSlider_InitPainter_Callback qslider_initpainter_callback = nullptr;
    QSlider_Redirected_Callback qslider_redirected_callback = nullptr;
    QSlider_SharedPainter_Callback qslider_sharedpainter_callback = nullptr;
    QSlider_InputMethodEvent_Callback qslider_inputmethodevent_callback = nullptr;
    QSlider_InputMethodQuery_Callback qslider_inputmethodquery_callback = nullptr;
    QSlider_FocusNextPrevChild_Callback qslider_focusnextprevchild_callback = nullptr;
    QSlider_EventFilter_Callback qslider_eventfilter_callback = nullptr;
    QSlider_ChildEvent_Callback qslider_childevent_callback = nullptr;
    QSlider_CustomEvent_Callback qslider_customevent_callback = nullptr;
    QSlider_ConnectNotify_Callback qslider_connectnotify_callback = nullptr;
    QSlider_DisconnectNotify_Callback qslider_disconnectnotify_callback = nullptr;
    QSlider_SetRepeatAction_Callback qslider_setrepeataction_callback = nullptr;
    QSlider_RepeatAction_Callback qslider_repeataction_callback = nullptr;
    QSlider_UpdateMicroFocus_Callback qslider_updatemicrofocus_callback = nullptr;
    QSlider_Create_Callback qslider_create_callback = nullptr;
    QSlider_Destroy_Callback qslider_destroy_callback = nullptr;
    QSlider_FocusNextChild_Callback qslider_focusnextchild_callback = nullptr;
    QSlider_FocusPreviousChild_Callback qslider_focuspreviouschild_callback = nullptr;
    QSlider_Sender_Callback qslider_sender_callback = nullptr;
    QSlider_SenderSignalIndex_Callback qslider_sendersignalindex_callback = nullptr;
    QSlider_Receivers_Callback qslider_receivers_callback = nullptr;
    QSlider_IsSignalConnected_Callback qslider_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qslider_metacall_isbase = false;
    mutable bool qslider_sizehint_isbase = false;
    mutable bool qslider_minimumsizehint_isbase = false;
    mutable bool qslider_event_isbase = false;
    mutable bool qslider_paintevent_isbase = false;
    mutable bool qslider_mousepressevent_isbase = false;
    mutable bool qslider_mousereleaseevent_isbase = false;
    mutable bool qslider_mousemoveevent_isbase = false;
    mutable bool qslider_initstyleoption_isbase = false;
    mutable bool qslider_sliderchange_isbase = false;
    mutable bool qslider_keypressevent_isbase = false;
    mutable bool qslider_timerevent_isbase = false;
    mutable bool qslider_wheelevent_isbase = false;
    mutable bool qslider_changeevent_isbase = false;
    mutable bool qslider_devtype_isbase = false;
    mutable bool qslider_setvisible_isbase = false;
    mutable bool qslider_heightforwidth_isbase = false;
    mutable bool qslider_hasheightforwidth_isbase = false;
    mutable bool qslider_paintengine_isbase = false;
    mutable bool qslider_mousedoubleclickevent_isbase = false;
    mutable bool qslider_keyreleaseevent_isbase = false;
    mutable bool qslider_focusinevent_isbase = false;
    mutable bool qslider_focusoutevent_isbase = false;
    mutable bool qslider_enterevent_isbase = false;
    mutable bool qslider_leaveevent_isbase = false;
    mutable bool qslider_moveevent_isbase = false;
    mutable bool qslider_resizeevent_isbase = false;
    mutable bool qslider_closeevent_isbase = false;
    mutable bool qslider_contextmenuevent_isbase = false;
    mutable bool qslider_tabletevent_isbase = false;
    mutable bool qslider_actionevent_isbase = false;
    mutable bool qslider_dragenterevent_isbase = false;
    mutable bool qslider_dragmoveevent_isbase = false;
    mutable bool qslider_dragleaveevent_isbase = false;
    mutable bool qslider_dropevent_isbase = false;
    mutable bool qslider_showevent_isbase = false;
    mutable bool qslider_hideevent_isbase = false;
    mutable bool qslider_nativeevent_isbase = false;
    mutable bool qslider_metric_isbase = false;
    mutable bool qslider_initpainter_isbase = false;
    mutable bool qslider_redirected_isbase = false;
    mutable bool qslider_sharedpainter_isbase = false;
    mutable bool qslider_inputmethodevent_isbase = false;
    mutable bool qslider_inputmethodquery_isbase = false;
    mutable bool qslider_focusnextprevchild_isbase = false;
    mutable bool qslider_eventfilter_isbase = false;
    mutable bool qslider_childevent_isbase = false;
    mutable bool qslider_customevent_isbase = false;
    mutable bool qslider_connectnotify_isbase = false;
    mutable bool qslider_disconnectnotify_isbase = false;
    mutable bool qslider_setrepeataction_isbase = false;
    mutable bool qslider_repeataction_isbase = false;
    mutable bool qslider_updatemicrofocus_isbase = false;
    mutable bool qslider_create_isbase = false;
    mutable bool qslider_destroy_isbase = false;
    mutable bool qslider_focusnextchild_isbase = false;
    mutable bool qslider_focuspreviouschild_isbase = false;
    mutable bool qslider_sender_isbase = false;
    mutable bool qslider_sendersignalindex_isbase = false;
    mutable bool qslider_receivers_isbase = false;
    mutable bool qslider_issignalconnected_isbase = false;

  public:
    VirtualQSlider(QWidget* parent) : QSlider(parent){};
    VirtualQSlider() : QSlider(){};
    VirtualQSlider(Qt::Orientation orientation) : QSlider(orientation){};
    VirtualQSlider(Qt::Orientation orientation, QWidget* parent) : QSlider(orientation, parent){};

    ~VirtualQSlider() {
        qslider_metacall_callback = nullptr;
        qslider_sizehint_callback = nullptr;
        qslider_minimumsizehint_callback = nullptr;
        qslider_event_callback = nullptr;
        qslider_paintevent_callback = nullptr;
        qslider_mousepressevent_callback = nullptr;
        qslider_mousereleaseevent_callback = nullptr;
        qslider_mousemoveevent_callback = nullptr;
        qslider_initstyleoption_callback = nullptr;
        qslider_sliderchange_callback = nullptr;
        qslider_keypressevent_callback = nullptr;
        qslider_timerevent_callback = nullptr;
        qslider_wheelevent_callback = nullptr;
        qslider_changeevent_callback = nullptr;
        qslider_devtype_callback = nullptr;
        qslider_setvisible_callback = nullptr;
        qslider_heightforwidth_callback = nullptr;
        qslider_hasheightforwidth_callback = nullptr;
        qslider_paintengine_callback = nullptr;
        qslider_mousedoubleclickevent_callback = nullptr;
        qslider_keyreleaseevent_callback = nullptr;
        qslider_focusinevent_callback = nullptr;
        qslider_focusoutevent_callback = nullptr;
        qslider_enterevent_callback = nullptr;
        qslider_leaveevent_callback = nullptr;
        qslider_moveevent_callback = nullptr;
        qslider_resizeevent_callback = nullptr;
        qslider_closeevent_callback = nullptr;
        qslider_contextmenuevent_callback = nullptr;
        qslider_tabletevent_callback = nullptr;
        qslider_actionevent_callback = nullptr;
        qslider_dragenterevent_callback = nullptr;
        qslider_dragmoveevent_callback = nullptr;
        qslider_dragleaveevent_callback = nullptr;
        qslider_dropevent_callback = nullptr;
        qslider_showevent_callback = nullptr;
        qslider_hideevent_callback = nullptr;
        qslider_nativeevent_callback = nullptr;
        qslider_metric_callback = nullptr;
        qslider_initpainter_callback = nullptr;
        qslider_redirected_callback = nullptr;
        qslider_sharedpainter_callback = nullptr;
        qslider_inputmethodevent_callback = nullptr;
        qslider_inputmethodquery_callback = nullptr;
        qslider_focusnextprevchild_callback = nullptr;
        qslider_eventfilter_callback = nullptr;
        qslider_childevent_callback = nullptr;
        qslider_customevent_callback = nullptr;
        qslider_connectnotify_callback = nullptr;
        qslider_disconnectnotify_callback = nullptr;
        qslider_setrepeataction_callback = nullptr;
        qslider_repeataction_callback = nullptr;
        qslider_updatemicrofocus_callback = nullptr;
        qslider_create_callback = nullptr;
        qslider_destroy_callback = nullptr;
        qslider_focusnextchild_callback = nullptr;
        qslider_focuspreviouschild_callback = nullptr;
        qslider_sender_callback = nullptr;
        qslider_sendersignalindex_callback = nullptr;
        qslider_receivers_callback = nullptr;
        qslider_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQSlider_Metacall_Callback(QSlider_Metacall_Callback cb) { qslider_metacall_callback = cb; }
    void setQSlider_SizeHint_Callback(QSlider_SizeHint_Callback cb) { qslider_sizehint_callback = cb; }
    void setQSlider_MinimumSizeHint_Callback(QSlider_MinimumSizeHint_Callback cb) { qslider_minimumsizehint_callback = cb; }
    void setQSlider_Event_Callback(QSlider_Event_Callback cb) { qslider_event_callback = cb; }
    void setQSlider_PaintEvent_Callback(QSlider_PaintEvent_Callback cb) { qslider_paintevent_callback = cb; }
    void setQSlider_MousePressEvent_Callback(QSlider_MousePressEvent_Callback cb) { qslider_mousepressevent_callback = cb; }
    void setQSlider_MouseReleaseEvent_Callback(QSlider_MouseReleaseEvent_Callback cb) { qslider_mousereleaseevent_callback = cb; }
    void setQSlider_MouseMoveEvent_Callback(QSlider_MouseMoveEvent_Callback cb) { qslider_mousemoveevent_callback = cb; }
    void setQSlider_InitStyleOption_Callback(QSlider_InitStyleOption_Callback cb) { qslider_initstyleoption_callback = cb; }
    void setQSlider_SliderChange_Callback(QSlider_SliderChange_Callback cb) { qslider_sliderchange_callback = cb; }
    void setQSlider_KeyPressEvent_Callback(QSlider_KeyPressEvent_Callback cb) { qslider_keypressevent_callback = cb; }
    void setQSlider_TimerEvent_Callback(QSlider_TimerEvent_Callback cb) { qslider_timerevent_callback = cb; }
    void setQSlider_WheelEvent_Callback(QSlider_WheelEvent_Callback cb) { qslider_wheelevent_callback = cb; }
    void setQSlider_ChangeEvent_Callback(QSlider_ChangeEvent_Callback cb) { qslider_changeevent_callback = cb; }
    void setQSlider_DevType_Callback(QSlider_DevType_Callback cb) { qslider_devtype_callback = cb; }
    void setQSlider_SetVisible_Callback(QSlider_SetVisible_Callback cb) { qslider_setvisible_callback = cb; }
    void setQSlider_HeightForWidth_Callback(QSlider_HeightForWidth_Callback cb) { qslider_heightforwidth_callback = cb; }
    void setQSlider_HasHeightForWidth_Callback(QSlider_HasHeightForWidth_Callback cb) { qslider_hasheightforwidth_callback = cb; }
    void setQSlider_PaintEngine_Callback(QSlider_PaintEngine_Callback cb) { qslider_paintengine_callback = cb; }
    void setQSlider_MouseDoubleClickEvent_Callback(QSlider_MouseDoubleClickEvent_Callback cb) { qslider_mousedoubleclickevent_callback = cb; }
    void setQSlider_KeyReleaseEvent_Callback(QSlider_KeyReleaseEvent_Callback cb) { qslider_keyreleaseevent_callback = cb; }
    void setQSlider_FocusInEvent_Callback(QSlider_FocusInEvent_Callback cb) { qslider_focusinevent_callback = cb; }
    void setQSlider_FocusOutEvent_Callback(QSlider_FocusOutEvent_Callback cb) { qslider_focusoutevent_callback = cb; }
    void setQSlider_EnterEvent_Callback(QSlider_EnterEvent_Callback cb) { qslider_enterevent_callback = cb; }
    void setQSlider_LeaveEvent_Callback(QSlider_LeaveEvent_Callback cb) { qslider_leaveevent_callback = cb; }
    void setQSlider_MoveEvent_Callback(QSlider_MoveEvent_Callback cb) { qslider_moveevent_callback = cb; }
    void setQSlider_ResizeEvent_Callback(QSlider_ResizeEvent_Callback cb) { qslider_resizeevent_callback = cb; }
    void setQSlider_CloseEvent_Callback(QSlider_CloseEvent_Callback cb) { qslider_closeevent_callback = cb; }
    void setQSlider_ContextMenuEvent_Callback(QSlider_ContextMenuEvent_Callback cb) { qslider_contextmenuevent_callback = cb; }
    void setQSlider_TabletEvent_Callback(QSlider_TabletEvent_Callback cb) { qslider_tabletevent_callback = cb; }
    void setQSlider_ActionEvent_Callback(QSlider_ActionEvent_Callback cb) { qslider_actionevent_callback = cb; }
    void setQSlider_DragEnterEvent_Callback(QSlider_DragEnterEvent_Callback cb) { qslider_dragenterevent_callback = cb; }
    void setQSlider_DragMoveEvent_Callback(QSlider_DragMoveEvent_Callback cb) { qslider_dragmoveevent_callback = cb; }
    void setQSlider_DragLeaveEvent_Callback(QSlider_DragLeaveEvent_Callback cb) { qslider_dragleaveevent_callback = cb; }
    void setQSlider_DropEvent_Callback(QSlider_DropEvent_Callback cb) { qslider_dropevent_callback = cb; }
    void setQSlider_ShowEvent_Callback(QSlider_ShowEvent_Callback cb) { qslider_showevent_callback = cb; }
    void setQSlider_HideEvent_Callback(QSlider_HideEvent_Callback cb) { qslider_hideevent_callback = cb; }
    void setQSlider_NativeEvent_Callback(QSlider_NativeEvent_Callback cb) { qslider_nativeevent_callback = cb; }
    void setQSlider_Metric_Callback(QSlider_Metric_Callback cb) { qslider_metric_callback = cb; }
    void setQSlider_InitPainter_Callback(QSlider_InitPainter_Callback cb) { qslider_initpainter_callback = cb; }
    void setQSlider_Redirected_Callback(QSlider_Redirected_Callback cb) { qslider_redirected_callback = cb; }
    void setQSlider_SharedPainter_Callback(QSlider_SharedPainter_Callback cb) { qslider_sharedpainter_callback = cb; }
    void setQSlider_InputMethodEvent_Callback(QSlider_InputMethodEvent_Callback cb) { qslider_inputmethodevent_callback = cb; }
    void setQSlider_InputMethodQuery_Callback(QSlider_InputMethodQuery_Callback cb) { qslider_inputmethodquery_callback = cb; }
    void setQSlider_FocusNextPrevChild_Callback(QSlider_FocusNextPrevChild_Callback cb) { qslider_focusnextprevchild_callback = cb; }
    void setQSlider_EventFilter_Callback(QSlider_EventFilter_Callback cb) { qslider_eventfilter_callback = cb; }
    void setQSlider_ChildEvent_Callback(QSlider_ChildEvent_Callback cb) { qslider_childevent_callback = cb; }
    void setQSlider_CustomEvent_Callback(QSlider_CustomEvent_Callback cb) { qslider_customevent_callback = cb; }
    void setQSlider_ConnectNotify_Callback(QSlider_ConnectNotify_Callback cb) { qslider_connectnotify_callback = cb; }
    void setQSlider_DisconnectNotify_Callback(QSlider_DisconnectNotify_Callback cb) { qslider_disconnectnotify_callback = cb; }
    void setQSlider_SetRepeatAction_Callback(QSlider_SetRepeatAction_Callback cb) { qslider_setrepeataction_callback = cb; }
    void setQSlider_RepeatAction_Callback(QSlider_RepeatAction_Callback cb) { qslider_repeataction_callback = cb; }
    void setQSlider_UpdateMicroFocus_Callback(QSlider_UpdateMicroFocus_Callback cb) { qslider_updatemicrofocus_callback = cb; }
    void setQSlider_Create_Callback(QSlider_Create_Callback cb) { qslider_create_callback = cb; }
    void setQSlider_Destroy_Callback(QSlider_Destroy_Callback cb) { qslider_destroy_callback = cb; }
    void setQSlider_FocusNextChild_Callback(QSlider_FocusNextChild_Callback cb) { qslider_focusnextchild_callback = cb; }
    void setQSlider_FocusPreviousChild_Callback(QSlider_FocusPreviousChild_Callback cb) { qslider_focuspreviouschild_callback = cb; }
    void setQSlider_Sender_Callback(QSlider_Sender_Callback cb) { qslider_sender_callback = cb; }
    void setQSlider_SenderSignalIndex_Callback(QSlider_SenderSignalIndex_Callback cb) { qslider_sendersignalindex_callback = cb; }
    void setQSlider_Receivers_Callback(QSlider_Receivers_Callback cb) { qslider_receivers_callback = cb; }
    void setQSlider_IsSignalConnected_Callback(QSlider_IsSignalConnected_Callback cb) { qslider_issignalconnected_callback = cb; }

    // Base flag setters
    void setQSlider_Metacall_IsBase(bool value) const { qslider_metacall_isbase = value; }
    void setQSlider_SizeHint_IsBase(bool value) const { qslider_sizehint_isbase = value; }
    void setQSlider_MinimumSizeHint_IsBase(bool value) const { qslider_minimumsizehint_isbase = value; }
    void setQSlider_Event_IsBase(bool value) const { qslider_event_isbase = value; }
    void setQSlider_PaintEvent_IsBase(bool value) const { qslider_paintevent_isbase = value; }
    void setQSlider_MousePressEvent_IsBase(bool value) const { qslider_mousepressevent_isbase = value; }
    void setQSlider_MouseReleaseEvent_IsBase(bool value) const { qslider_mousereleaseevent_isbase = value; }
    void setQSlider_MouseMoveEvent_IsBase(bool value) const { qslider_mousemoveevent_isbase = value; }
    void setQSlider_InitStyleOption_IsBase(bool value) const { qslider_initstyleoption_isbase = value; }
    void setQSlider_SliderChange_IsBase(bool value) const { qslider_sliderchange_isbase = value; }
    void setQSlider_KeyPressEvent_IsBase(bool value) const { qslider_keypressevent_isbase = value; }
    void setQSlider_TimerEvent_IsBase(bool value) const { qslider_timerevent_isbase = value; }
    void setQSlider_WheelEvent_IsBase(bool value) const { qslider_wheelevent_isbase = value; }
    void setQSlider_ChangeEvent_IsBase(bool value) const { qslider_changeevent_isbase = value; }
    void setQSlider_DevType_IsBase(bool value) const { qslider_devtype_isbase = value; }
    void setQSlider_SetVisible_IsBase(bool value) const { qslider_setvisible_isbase = value; }
    void setQSlider_HeightForWidth_IsBase(bool value) const { qslider_heightforwidth_isbase = value; }
    void setQSlider_HasHeightForWidth_IsBase(bool value) const { qslider_hasheightforwidth_isbase = value; }
    void setQSlider_PaintEngine_IsBase(bool value) const { qslider_paintengine_isbase = value; }
    void setQSlider_MouseDoubleClickEvent_IsBase(bool value) const { qslider_mousedoubleclickevent_isbase = value; }
    void setQSlider_KeyReleaseEvent_IsBase(bool value) const { qslider_keyreleaseevent_isbase = value; }
    void setQSlider_FocusInEvent_IsBase(bool value) const { qslider_focusinevent_isbase = value; }
    void setQSlider_FocusOutEvent_IsBase(bool value) const { qslider_focusoutevent_isbase = value; }
    void setQSlider_EnterEvent_IsBase(bool value) const { qslider_enterevent_isbase = value; }
    void setQSlider_LeaveEvent_IsBase(bool value) const { qslider_leaveevent_isbase = value; }
    void setQSlider_MoveEvent_IsBase(bool value) const { qslider_moveevent_isbase = value; }
    void setQSlider_ResizeEvent_IsBase(bool value) const { qslider_resizeevent_isbase = value; }
    void setQSlider_CloseEvent_IsBase(bool value) const { qslider_closeevent_isbase = value; }
    void setQSlider_ContextMenuEvent_IsBase(bool value) const { qslider_contextmenuevent_isbase = value; }
    void setQSlider_TabletEvent_IsBase(bool value) const { qslider_tabletevent_isbase = value; }
    void setQSlider_ActionEvent_IsBase(bool value) const { qslider_actionevent_isbase = value; }
    void setQSlider_DragEnterEvent_IsBase(bool value) const { qslider_dragenterevent_isbase = value; }
    void setQSlider_DragMoveEvent_IsBase(bool value) const { qslider_dragmoveevent_isbase = value; }
    void setQSlider_DragLeaveEvent_IsBase(bool value) const { qslider_dragleaveevent_isbase = value; }
    void setQSlider_DropEvent_IsBase(bool value) const { qslider_dropevent_isbase = value; }
    void setQSlider_ShowEvent_IsBase(bool value) const { qslider_showevent_isbase = value; }
    void setQSlider_HideEvent_IsBase(bool value) const { qslider_hideevent_isbase = value; }
    void setQSlider_NativeEvent_IsBase(bool value) const { qslider_nativeevent_isbase = value; }
    void setQSlider_Metric_IsBase(bool value) const { qslider_metric_isbase = value; }
    void setQSlider_InitPainter_IsBase(bool value) const { qslider_initpainter_isbase = value; }
    void setQSlider_Redirected_IsBase(bool value) const { qslider_redirected_isbase = value; }
    void setQSlider_SharedPainter_IsBase(bool value) const { qslider_sharedpainter_isbase = value; }
    void setQSlider_InputMethodEvent_IsBase(bool value) const { qslider_inputmethodevent_isbase = value; }
    void setQSlider_InputMethodQuery_IsBase(bool value) const { qslider_inputmethodquery_isbase = value; }
    void setQSlider_FocusNextPrevChild_IsBase(bool value) const { qslider_focusnextprevchild_isbase = value; }
    void setQSlider_EventFilter_IsBase(bool value) const { qslider_eventfilter_isbase = value; }
    void setQSlider_ChildEvent_IsBase(bool value) const { qslider_childevent_isbase = value; }
    void setQSlider_CustomEvent_IsBase(bool value) const { qslider_customevent_isbase = value; }
    void setQSlider_ConnectNotify_IsBase(bool value) const { qslider_connectnotify_isbase = value; }
    void setQSlider_DisconnectNotify_IsBase(bool value) const { qslider_disconnectnotify_isbase = value; }
    void setQSlider_SetRepeatAction_IsBase(bool value) const { qslider_setrepeataction_isbase = value; }
    void setQSlider_RepeatAction_IsBase(bool value) const { qslider_repeataction_isbase = value; }
    void setQSlider_UpdateMicroFocus_IsBase(bool value) const { qslider_updatemicrofocus_isbase = value; }
    void setQSlider_Create_IsBase(bool value) const { qslider_create_isbase = value; }
    void setQSlider_Destroy_IsBase(bool value) const { qslider_destroy_isbase = value; }
    void setQSlider_FocusNextChild_IsBase(bool value) const { qslider_focusnextchild_isbase = value; }
    void setQSlider_FocusPreviousChild_IsBase(bool value) const { qslider_focuspreviouschild_isbase = value; }
    void setQSlider_Sender_IsBase(bool value) const { qslider_sender_isbase = value; }
    void setQSlider_SenderSignalIndex_IsBase(bool value) const { qslider_sendersignalindex_isbase = value; }
    void setQSlider_Receivers_IsBase(bool value) const { qslider_receivers_isbase = value; }
    void setQSlider_IsSignalConnected_IsBase(bool value) const { qslider_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qslider_metacall_isbase) {
            qslider_metacall_isbase = false;
            return QSlider::qt_metacall(param1, param2, param3);
        } else if (qslider_metacall_callback != nullptr) {
            return qslider_metacall_callback(this, param1, param2, param3);
        } else {
            return QSlider::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qslider_sizehint_isbase) {
            qslider_sizehint_isbase = false;
            return QSlider::sizeHint();
        } else if (qslider_sizehint_callback != nullptr) {
            return qslider_sizehint_callback();
        } else {
            return QSlider::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qslider_minimumsizehint_isbase) {
            qslider_minimumsizehint_isbase = false;
            return QSlider::minimumSizeHint();
        } else if (qslider_minimumsizehint_callback != nullptr) {
            return qslider_minimumsizehint_callback();
        } else {
            return QSlider::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qslider_event_isbase) {
            qslider_event_isbase = false;
            return QSlider::event(event);
        } else if (qslider_event_callback != nullptr) {
            return qslider_event_callback(this, event);
        } else {
            return QSlider::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* ev) override {
        if (qslider_paintevent_isbase) {
            qslider_paintevent_isbase = false;
            QSlider::paintEvent(ev);
        } else if (qslider_paintevent_callback != nullptr) {
            qslider_paintevent_callback(this, ev);
        } else {
            QSlider::paintEvent(ev);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* ev) override {
        if (qslider_mousepressevent_isbase) {
            qslider_mousepressevent_isbase = false;
            QSlider::mousePressEvent(ev);
        } else if (qslider_mousepressevent_callback != nullptr) {
            qslider_mousepressevent_callback(this, ev);
        } else {
            QSlider::mousePressEvent(ev);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* ev) override {
        if (qslider_mousereleaseevent_isbase) {
            qslider_mousereleaseevent_isbase = false;
            QSlider::mouseReleaseEvent(ev);
        } else if (qslider_mousereleaseevent_callback != nullptr) {
            qslider_mousereleaseevent_callback(this, ev);
        } else {
            QSlider::mouseReleaseEvent(ev);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* ev) override {
        if (qslider_mousemoveevent_isbase) {
            qslider_mousemoveevent_isbase = false;
            QSlider::mouseMoveEvent(ev);
        } else if (qslider_mousemoveevent_callback != nullptr) {
            qslider_mousemoveevent_callback(this, ev);
        } else {
            QSlider::mouseMoveEvent(ev);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionSlider* option) const override {
        if (qslider_initstyleoption_isbase) {
            qslider_initstyleoption_isbase = false;
            QSlider::initStyleOption(option);
        } else if (qslider_initstyleoption_callback != nullptr) {
            qslider_initstyleoption_callback(this, option);
        } else {
            QSlider::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void sliderChange(QAbstractSlider::SliderChange change) override {
        if (qslider_sliderchange_isbase) {
            qslider_sliderchange_isbase = false;
            QSlider::sliderChange(change);
        } else if (qslider_sliderchange_callback != nullptr) {
            qslider_sliderchange_callback(this, change);
        } else {
            QSlider::sliderChange(change);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* ev) override {
        if (qslider_keypressevent_isbase) {
            qslider_keypressevent_isbase = false;
            QSlider::keyPressEvent(ev);
        } else if (qslider_keypressevent_callback != nullptr) {
            qslider_keypressevent_callback(this, ev);
        } else {
            QSlider::keyPressEvent(ev);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (qslider_timerevent_isbase) {
            qslider_timerevent_isbase = false;
            QSlider::timerEvent(param1);
        } else if (qslider_timerevent_callback != nullptr) {
            qslider_timerevent_callback(this, param1);
        } else {
            QSlider::timerEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (qslider_wheelevent_isbase) {
            qslider_wheelevent_isbase = false;
            QSlider::wheelEvent(e);
        } else if (qslider_wheelevent_callback != nullptr) {
            qslider_wheelevent_callback(this, e);
        } else {
            QSlider::wheelEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (qslider_changeevent_isbase) {
            qslider_changeevent_isbase = false;
            QSlider::changeEvent(e);
        } else if (qslider_changeevent_callback != nullptr) {
            qslider_changeevent_callback(this, e);
        } else {
            QSlider::changeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qslider_devtype_isbase) {
            qslider_devtype_isbase = false;
            return QSlider::devType();
        } else if (qslider_devtype_callback != nullptr) {
            return qslider_devtype_callback();
        } else {
            return QSlider::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qslider_setvisible_isbase) {
            qslider_setvisible_isbase = false;
            QSlider::setVisible(visible);
        } else if (qslider_setvisible_callback != nullptr) {
            qslider_setvisible_callback(this, visible);
        } else {
            QSlider::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qslider_heightforwidth_isbase) {
            qslider_heightforwidth_isbase = false;
            return QSlider::heightForWidth(param1);
        } else if (qslider_heightforwidth_callback != nullptr) {
            return qslider_heightforwidth_callback(this, param1);
        } else {
            return QSlider::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qslider_hasheightforwidth_isbase) {
            qslider_hasheightforwidth_isbase = false;
            return QSlider::hasHeightForWidth();
        } else if (qslider_hasheightforwidth_callback != nullptr) {
            return qslider_hasheightforwidth_callback();
        } else {
            return QSlider::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qslider_paintengine_isbase) {
            qslider_paintengine_isbase = false;
            return QSlider::paintEngine();
        } else if (qslider_paintengine_callback != nullptr) {
            return qslider_paintengine_callback();
        } else {
            return QSlider::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qslider_mousedoubleclickevent_isbase) {
            qslider_mousedoubleclickevent_isbase = false;
            QSlider::mouseDoubleClickEvent(event);
        } else if (qslider_mousedoubleclickevent_callback != nullptr) {
            qslider_mousedoubleclickevent_callback(this, event);
        } else {
            QSlider::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qslider_keyreleaseevent_isbase) {
            qslider_keyreleaseevent_isbase = false;
            QSlider::keyReleaseEvent(event);
        } else if (qslider_keyreleaseevent_callback != nullptr) {
            qslider_keyreleaseevent_callback(this, event);
        } else {
            QSlider::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qslider_focusinevent_isbase) {
            qslider_focusinevent_isbase = false;
            QSlider::focusInEvent(event);
        } else if (qslider_focusinevent_callback != nullptr) {
            qslider_focusinevent_callback(this, event);
        } else {
            QSlider::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qslider_focusoutevent_isbase) {
            qslider_focusoutevent_isbase = false;
            QSlider::focusOutEvent(event);
        } else if (qslider_focusoutevent_callback != nullptr) {
            qslider_focusoutevent_callback(this, event);
        } else {
            QSlider::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qslider_enterevent_isbase) {
            qslider_enterevent_isbase = false;
            QSlider::enterEvent(event);
        } else if (qslider_enterevent_callback != nullptr) {
            qslider_enterevent_callback(this, event);
        } else {
            QSlider::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qslider_leaveevent_isbase) {
            qslider_leaveevent_isbase = false;
            QSlider::leaveEvent(event);
        } else if (qslider_leaveevent_callback != nullptr) {
            qslider_leaveevent_callback(this, event);
        } else {
            QSlider::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qslider_moveevent_isbase) {
            qslider_moveevent_isbase = false;
            QSlider::moveEvent(event);
        } else if (qslider_moveevent_callback != nullptr) {
            qslider_moveevent_callback(this, event);
        } else {
            QSlider::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qslider_resizeevent_isbase) {
            qslider_resizeevent_isbase = false;
            QSlider::resizeEvent(event);
        } else if (qslider_resizeevent_callback != nullptr) {
            qslider_resizeevent_callback(this, event);
        } else {
            QSlider::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qslider_closeevent_isbase) {
            qslider_closeevent_isbase = false;
            QSlider::closeEvent(event);
        } else if (qslider_closeevent_callback != nullptr) {
            qslider_closeevent_callback(this, event);
        } else {
            QSlider::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qslider_contextmenuevent_isbase) {
            qslider_contextmenuevent_isbase = false;
            QSlider::contextMenuEvent(event);
        } else if (qslider_contextmenuevent_callback != nullptr) {
            qslider_contextmenuevent_callback(this, event);
        } else {
            QSlider::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qslider_tabletevent_isbase) {
            qslider_tabletevent_isbase = false;
            QSlider::tabletEvent(event);
        } else if (qslider_tabletevent_callback != nullptr) {
            qslider_tabletevent_callback(this, event);
        } else {
            QSlider::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qslider_actionevent_isbase) {
            qslider_actionevent_isbase = false;
            QSlider::actionEvent(event);
        } else if (qslider_actionevent_callback != nullptr) {
            qslider_actionevent_callback(this, event);
        } else {
            QSlider::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qslider_dragenterevent_isbase) {
            qslider_dragenterevent_isbase = false;
            QSlider::dragEnterEvent(event);
        } else if (qslider_dragenterevent_callback != nullptr) {
            qslider_dragenterevent_callback(this, event);
        } else {
            QSlider::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qslider_dragmoveevent_isbase) {
            qslider_dragmoveevent_isbase = false;
            QSlider::dragMoveEvent(event);
        } else if (qslider_dragmoveevent_callback != nullptr) {
            qslider_dragmoveevent_callback(this, event);
        } else {
            QSlider::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qslider_dragleaveevent_isbase) {
            qslider_dragleaveevent_isbase = false;
            QSlider::dragLeaveEvent(event);
        } else if (qslider_dragleaveevent_callback != nullptr) {
            qslider_dragleaveevent_callback(this, event);
        } else {
            QSlider::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qslider_dropevent_isbase) {
            qslider_dropevent_isbase = false;
            QSlider::dropEvent(event);
        } else if (qslider_dropevent_callback != nullptr) {
            qslider_dropevent_callback(this, event);
        } else {
            QSlider::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qslider_showevent_isbase) {
            qslider_showevent_isbase = false;
            QSlider::showEvent(event);
        } else if (qslider_showevent_callback != nullptr) {
            qslider_showevent_callback(this, event);
        } else {
            QSlider::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qslider_hideevent_isbase) {
            qslider_hideevent_isbase = false;
            QSlider::hideEvent(event);
        } else if (qslider_hideevent_callback != nullptr) {
            qslider_hideevent_callback(this, event);
        } else {
            QSlider::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qslider_nativeevent_isbase) {
            qslider_nativeevent_isbase = false;
            return QSlider::nativeEvent(eventType, message, result);
        } else if (qslider_nativeevent_callback != nullptr) {
            return qslider_nativeevent_callback(this, eventType, message, result);
        } else {
            return QSlider::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qslider_metric_isbase) {
            qslider_metric_isbase = false;
            return QSlider::metric(param1);
        } else if (qslider_metric_callback != nullptr) {
            return qslider_metric_callback(this, param1);
        } else {
            return QSlider::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qslider_initpainter_isbase) {
            qslider_initpainter_isbase = false;
            QSlider::initPainter(painter);
        } else if (qslider_initpainter_callback != nullptr) {
            qslider_initpainter_callback(this, painter);
        } else {
            QSlider::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qslider_redirected_isbase) {
            qslider_redirected_isbase = false;
            return QSlider::redirected(offset);
        } else if (qslider_redirected_callback != nullptr) {
            return qslider_redirected_callback(this, offset);
        } else {
            return QSlider::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qslider_sharedpainter_isbase) {
            qslider_sharedpainter_isbase = false;
            return QSlider::sharedPainter();
        } else if (qslider_sharedpainter_callback != nullptr) {
            return qslider_sharedpainter_callback();
        } else {
            return QSlider::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qslider_inputmethodevent_isbase) {
            qslider_inputmethodevent_isbase = false;
            QSlider::inputMethodEvent(param1);
        } else if (qslider_inputmethodevent_callback != nullptr) {
            qslider_inputmethodevent_callback(this, param1);
        } else {
            QSlider::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qslider_inputmethodquery_isbase) {
            qslider_inputmethodquery_isbase = false;
            return QSlider::inputMethodQuery(param1);
        } else if (qslider_inputmethodquery_callback != nullptr) {
            return qslider_inputmethodquery_callback(this, param1);
        } else {
            return QSlider::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qslider_focusnextprevchild_isbase) {
            qslider_focusnextprevchild_isbase = false;
            return QSlider::focusNextPrevChild(next);
        } else if (qslider_focusnextprevchild_callback != nullptr) {
            return qslider_focusnextprevchild_callback(this, next);
        } else {
            return QSlider::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qslider_eventfilter_isbase) {
            qslider_eventfilter_isbase = false;
            return QSlider::eventFilter(watched, event);
        } else if (qslider_eventfilter_callback != nullptr) {
            return qslider_eventfilter_callback(this, watched, event);
        } else {
            return QSlider::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qslider_childevent_isbase) {
            qslider_childevent_isbase = false;
            QSlider::childEvent(event);
        } else if (qslider_childevent_callback != nullptr) {
            qslider_childevent_callback(this, event);
        } else {
            QSlider::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qslider_customevent_isbase) {
            qslider_customevent_isbase = false;
            QSlider::customEvent(event);
        } else if (qslider_customevent_callback != nullptr) {
            qslider_customevent_callback(this, event);
        } else {
            QSlider::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qslider_connectnotify_isbase) {
            qslider_connectnotify_isbase = false;
            QSlider::connectNotify(signal);
        } else if (qslider_connectnotify_callback != nullptr) {
            qslider_connectnotify_callback(this, signal);
        } else {
            QSlider::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qslider_disconnectnotify_isbase) {
            qslider_disconnectnotify_isbase = false;
            QSlider::disconnectNotify(signal);
        } else if (qslider_disconnectnotify_callback != nullptr) {
            qslider_disconnectnotify_callback(this, signal);
        } else {
            QSlider::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setRepeatAction(QAbstractSlider::SliderAction action) {
        if (qslider_setrepeataction_isbase) {
            qslider_setrepeataction_isbase = false;
            QSlider::setRepeatAction(action);
        } else if (qslider_setrepeataction_callback != nullptr) {
            qslider_setrepeataction_callback(this, action);
        } else {
            QSlider::setRepeatAction(action);
        }
    }

    // Virtual method for C ABI access and custom callback
    QAbstractSlider::SliderAction repeatAction() const {
        if (qslider_repeataction_isbase) {
            qslider_repeataction_isbase = false;
            return QSlider::repeatAction();
        } else if (qslider_repeataction_callback != nullptr) {
            return qslider_repeataction_callback();
        } else {
            return QSlider::repeatAction();
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qslider_updatemicrofocus_isbase) {
            qslider_updatemicrofocus_isbase = false;
            QSlider::updateMicroFocus();
        } else if (qslider_updatemicrofocus_callback != nullptr) {
            qslider_updatemicrofocus_callback();
        } else {
            QSlider::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qslider_create_isbase) {
            qslider_create_isbase = false;
            QSlider::create();
        } else if (qslider_create_callback != nullptr) {
            qslider_create_callback();
        } else {
            QSlider::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qslider_destroy_isbase) {
            qslider_destroy_isbase = false;
            QSlider::destroy();
        } else if (qslider_destroy_callback != nullptr) {
            qslider_destroy_callback();
        } else {
            QSlider::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qslider_focusnextchild_isbase) {
            qslider_focusnextchild_isbase = false;
            return QSlider::focusNextChild();
        } else if (qslider_focusnextchild_callback != nullptr) {
            return qslider_focusnextchild_callback();
        } else {
            return QSlider::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qslider_focuspreviouschild_isbase) {
            qslider_focuspreviouschild_isbase = false;
            return QSlider::focusPreviousChild();
        } else if (qslider_focuspreviouschild_callback != nullptr) {
            return qslider_focuspreviouschild_callback();
        } else {
            return QSlider::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qslider_sender_isbase) {
            qslider_sender_isbase = false;
            return QSlider::sender();
        } else if (qslider_sender_callback != nullptr) {
            return qslider_sender_callback();
        } else {
            return QSlider::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qslider_sendersignalindex_isbase) {
            qslider_sendersignalindex_isbase = false;
            return QSlider::senderSignalIndex();
        } else if (qslider_sendersignalindex_callback != nullptr) {
            return qslider_sendersignalindex_callback();
        } else {
            return QSlider::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qslider_receivers_isbase) {
            qslider_receivers_isbase = false;
            return QSlider::receivers(signal);
        } else if (qslider_receivers_callback != nullptr) {
            return qslider_receivers_callback(this, signal);
        } else {
            return QSlider::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qslider_issignalconnected_isbase) {
            qslider_issignalconnected_isbase = false;
            return QSlider::isSignalConnected(signal);
        } else if (qslider_issignalconnected_callback != nullptr) {
            return qslider_issignalconnected_callback(this, signal);
        } else {
            return QSlider::isSignalConnected(signal);
        }
    }
};

#endif
