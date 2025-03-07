#pragma once
#ifndef SRCC_LIBVIRTUALQTOOLBAR_H
#define SRCC_LIBVIRTUALQTOOLBAR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QToolBar so that we can call protected methods
class VirtualQToolBar : public QToolBar {

  public:
    // Virtual class public types (including callbacks)
    using QToolBar_Metacall_Callback = int (*)(QToolBar*, QMetaObject::Call, int, void**);
    using QToolBar_ActionEvent_Callback = void (*)(QToolBar*, QActionEvent*);
    using QToolBar_ChangeEvent_Callback = void (*)(QToolBar*, QEvent*);
    using QToolBar_PaintEvent_Callback = void (*)(QToolBar*, QPaintEvent*);
    using QToolBar_Event_Callback = bool (*)(QToolBar*, QEvent*);
    using QToolBar_InitStyleOption_Callback = void (*)(const QToolBar*, QStyleOptionToolBar*);
    using QToolBar_DevType_Callback = int (*)();
    using QToolBar_SetVisible_Callback = void (*)(QToolBar*, bool);
    using QToolBar_SizeHint_Callback = QSize (*)();
    using QToolBar_MinimumSizeHint_Callback = QSize (*)();
    using QToolBar_HeightForWidth_Callback = int (*)(const QToolBar*, int);
    using QToolBar_HasHeightForWidth_Callback = bool (*)();
    using QToolBar_PaintEngine_Callback = QPaintEngine* (*)();
    using QToolBar_MousePressEvent_Callback = void (*)(QToolBar*, QMouseEvent*);
    using QToolBar_MouseReleaseEvent_Callback = void (*)(QToolBar*, QMouseEvent*);
    using QToolBar_MouseDoubleClickEvent_Callback = void (*)(QToolBar*, QMouseEvent*);
    using QToolBar_MouseMoveEvent_Callback = void (*)(QToolBar*, QMouseEvent*);
    using QToolBar_WheelEvent_Callback = void (*)(QToolBar*, QWheelEvent*);
    using QToolBar_KeyPressEvent_Callback = void (*)(QToolBar*, QKeyEvent*);
    using QToolBar_KeyReleaseEvent_Callback = void (*)(QToolBar*, QKeyEvent*);
    using QToolBar_FocusInEvent_Callback = void (*)(QToolBar*, QFocusEvent*);
    using QToolBar_FocusOutEvent_Callback = void (*)(QToolBar*, QFocusEvent*);
    using QToolBar_EnterEvent_Callback = void (*)(QToolBar*, QEnterEvent*);
    using QToolBar_LeaveEvent_Callback = void (*)(QToolBar*, QEvent*);
    using QToolBar_MoveEvent_Callback = void (*)(QToolBar*, QMoveEvent*);
    using QToolBar_ResizeEvent_Callback = void (*)(QToolBar*, QResizeEvent*);
    using QToolBar_CloseEvent_Callback = void (*)(QToolBar*, QCloseEvent*);
    using QToolBar_ContextMenuEvent_Callback = void (*)(QToolBar*, QContextMenuEvent*);
    using QToolBar_TabletEvent_Callback = void (*)(QToolBar*, QTabletEvent*);
    using QToolBar_DragEnterEvent_Callback = void (*)(QToolBar*, QDragEnterEvent*);
    using QToolBar_DragMoveEvent_Callback = void (*)(QToolBar*, QDragMoveEvent*);
    using QToolBar_DragLeaveEvent_Callback = void (*)(QToolBar*, QDragLeaveEvent*);
    using QToolBar_DropEvent_Callback = void (*)(QToolBar*, QDropEvent*);
    using QToolBar_ShowEvent_Callback = void (*)(QToolBar*, QShowEvent*);
    using QToolBar_HideEvent_Callback = void (*)(QToolBar*, QHideEvent*);
    using QToolBar_NativeEvent_Callback = bool (*)(QToolBar*, const QByteArray&, void*, qintptr*);
    using QToolBar_Metric_Callback = int (*)(const QToolBar*, QPaintDevice::PaintDeviceMetric);
    using QToolBar_InitPainter_Callback = void (*)(const QToolBar*, QPainter*);
    using QToolBar_Redirected_Callback = QPaintDevice* (*)(const QToolBar*, QPoint*);
    using QToolBar_SharedPainter_Callback = QPainter* (*)();
    using QToolBar_InputMethodEvent_Callback = void (*)(QToolBar*, QInputMethodEvent*);
    using QToolBar_InputMethodQuery_Callback = QVariant (*)(const QToolBar*, Qt::InputMethodQuery);
    using QToolBar_FocusNextPrevChild_Callback = bool (*)(QToolBar*, bool);
    using QToolBar_EventFilter_Callback = bool (*)(QToolBar*, QObject*, QEvent*);
    using QToolBar_TimerEvent_Callback = void (*)(QToolBar*, QTimerEvent*);
    using QToolBar_ChildEvent_Callback = void (*)(QToolBar*, QChildEvent*);
    using QToolBar_CustomEvent_Callback = void (*)(QToolBar*, QEvent*);
    using QToolBar_ConnectNotify_Callback = void (*)(QToolBar*, const QMetaMethod&);
    using QToolBar_DisconnectNotify_Callback = void (*)(QToolBar*, const QMetaMethod&);
    using QToolBar_UpdateMicroFocus_Callback = void (*)();
    using QToolBar_Create_Callback = void (*)();
    using QToolBar_Destroy_Callback = void (*)();
    using QToolBar_FocusNextChild_Callback = bool (*)();
    using QToolBar_FocusPreviousChild_Callback = bool (*)();
    using QToolBar_Sender_Callback = QObject* (*)();
    using QToolBar_SenderSignalIndex_Callback = int (*)();
    using QToolBar_Receivers_Callback = int (*)(const QToolBar*, const char*);
    using QToolBar_IsSignalConnected_Callback = bool (*)(const QToolBar*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QToolBar_Metacall_Callback qtoolbar_metacall_callback = nullptr;
    QToolBar_ActionEvent_Callback qtoolbar_actionevent_callback = nullptr;
    QToolBar_ChangeEvent_Callback qtoolbar_changeevent_callback = nullptr;
    QToolBar_PaintEvent_Callback qtoolbar_paintevent_callback = nullptr;
    QToolBar_Event_Callback qtoolbar_event_callback = nullptr;
    QToolBar_InitStyleOption_Callback qtoolbar_initstyleoption_callback = nullptr;
    QToolBar_DevType_Callback qtoolbar_devtype_callback = nullptr;
    QToolBar_SetVisible_Callback qtoolbar_setvisible_callback = nullptr;
    QToolBar_SizeHint_Callback qtoolbar_sizehint_callback = nullptr;
    QToolBar_MinimumSizeHint_Callback qtoolbar_minimumsizehint_callback = nullptr;
    QToolBar_HeightForWidth_Callback qtoolbar_heightforwidth_callback = nullptr;
    QToolBar_HasHeightForWidth_Callback qtoolbar_hasheightforwidth_callback = nullptr;
    QToolBar_PaintEngine_Callback qtoolbar_paintengine_callback = nullptr;
    QToolBar_MousePressEvent_Callback qtoolbar_mousepressevent_callback = nullptr;
    QToolBar_MouseReleaseEvent_Callback qtoolbar_mousereleaseevent_callback = nullptr;
    QToolBar_MouseDoubleClickEvent_Callback qtoolbar_mousedoubleclickevent_callback = nullptr;
    QToolBar_MouseMoveEvent_Callback qtoolbar_mousemoveevent_callback = nullptr;
    QToolBar_WheelEvent_Callback qtoolbar_wheelevent_callback = nullptr;
    QToolBar_KeyPressEvent_Callback qtoolbar_keypressevent_callback = nullptr;
    QToolBar_KeyReleaseEvent_Callback qtoolbar_keyreleaseevent_callback = nullptr;
    QToolBar_FocusInEvent_Callback qtoolbar_focusinevent_callback = nullptr;
    QToolBar_FocusOutEvent_Callback qtoolbar_focusoutevent_callback = nullptr;
    QToolBar_EnterEvent_Callback qtoolbar_enterevent_callback = nullptr;
    QToolBar_LeaveEvent_Callback qtoolbar_leaveevent_callback = nullptr;
    QToolBar_MoveEvent_Callback qtoolbar_moveevent_callback = nullptr;
    QToolBar_ResizeEvent_Callback qtoolbar_resizeevent_callback = nullptr;
    QToolBar_CloseEvent_Callback qtoolbar_closeevent_callback = nullptr;
    QToolBar_ContextMenuEvent_Callback qtoolbar_contextmenuevent_callback = nullptr;
    QToolBar_TabletEvent_Callback qtoolbar_tabletevent_callback = nullptr;
    QToolBar_DragEnterEvent_Callback qtoolbar_dragenterevent_callback = nullptr;
    QToolBar_DragMoveEvent_Callback qtoolbar_dragmoveevent_callback = nullptr;
    QToolBar_DragLeaveEvent_Callback qtoolbar_dragleaveevent_callback = nullptr;
    QToolBar_DropEvent_Callback qtoolbar_dropevent_callback = nullptr;
    QToolBar_ShowEvent_Callback qtoolbar_showevent_callback = nullptr;
    QToolBar_HideEvent_Callback qtoolbar_hideevent_callback = nullptr;
    QToolBar_NativeEvent_Callback qtoolbar_nativeevent_callback = nullptr;
    QToolBar_Metric_Callback qtoolbar_metric_callback = nullptr;
    QToolBar_InitPainter_Callback qtoolbar_initpainter_callback = nullptr;
    QToolBar_Redirected_Callback qtoolbar_redirected_callback = nullptr;
    QToolBar_SharedPainter_Callback qtoolbar_sharedpainter_callback = nullptr;
    QToolBar_InputMethodEvent_Callback qtoolbar_inputmethodevent_callback = nullptr;
    QToolBar_InputMethodQuery_Callback qtoolbar_inputmethodquery_callback = nullptr;
    QToolBar_FocusNextPrevChild_Callback qtoolbar_focusnextprevchild_callback = nullptr;
    QToolBar_EventFilter_Callback qtoolbar_eventfilter_callback = nullptr;
    QToolBar_TimerEvent_Callback qtoolbar_timerevent_callback = nullptr;
    QToolBar_ChildEvent_Callback qtoolbar_childevent_callback = nullptr;
    QToolBar_CustomEvent_Callback qtoolbar_customevent_callback = nullptr;
    QToolBar_ConnectNotify_Callback qtoolbar_connectnotify_callback = nullptr;
    QToolBar_DisconnectNotify_Callback qtoolbar_disconnectnotify_callback = nullptr;
    QToolBar_UpdateMicroFocus_Callback qtoolbar_updatemicrofocus_callback = nullptr;
    QToolBar_Create_Callback qtoolbar_create_callback = nullptr;
    QToolBar_Destroy_Callback qtoolbar_destroy_callback = nullptr;
    QToolBar_FocusNextChild_Callback qtoolbar_focusnextchild_callback = nullptr;
    QToolBar_FocusPreviousChild_Callback qtoolbar_focuspreviouschild_callback = nullptr;
    QToolBar_Sender_Callback qtoolbar_sender_callback = nullptr;
    QToolBar_SenderSignalIndex_Callback qtoolbar_sendersignalindex_callback = nullptr;
    QToolBar_Receivers_Callback qtoolbar_receivers_callback = nullptr;
    QToolBar_IsSignalConnected_Callback qtoolbar_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qtoolbar_metacall_isbase = false;
    mutable bool qtoolbar_actionevent_isbase = false;
    mutable bool qtoolbar_changeevent_isbase = false;
    mutable bool qtoolbar_paintevent_isbase = false;
    mutable bool qtoolbar_event_isbase = false;
    mutable bool qtoolbar_initstyleoption_isbase = false;
    mutable bool qtoolbar_devtype_isbase = false;
    mutable bool qtoolbar_setvisible_isbase = false;
    mutable bool qtoolbar_sizehint_isbase = false;
    mutable bool qtoolbar_minimumsizehint_isbase = false;
    mutable bool qtoolbar_heightforwidth_isbase = false;
    mutable bool qtoolbar_hasheightforwidth_isbase = false;
    mutable bool qtoolbar_paintengine_isbase = false;
    mutable bool qtoolbar_mousepressevent_isbase = false;
    mutable bool qtoolbar_mousereleaseevent_isbase = false;
    mutable bool qtoolbar_mousedoubleclickevent_isbase = false;
    mutable bool qtoolbar_mousemoveevent_isbase = false;
    mutable bool qtoolbar_wheelevent_isbase = false;
    mutable bool qtoolbar_keypressevent_isbase = false;
    mutable bool qtoolbar_keyreleaseevent_isbase = false;
    mutable bool qtoolbar_focusinevent_isbase = false;
    mutable bool qtoolbar_focusoutevent_isbase = false;
    mutable bool qtoolbar_enterevent_isbase = false;
    mutable bool qtoolbar_leaveevent_isbase = false;
    mutable bool qtoolbar_moveevent_isbase = false;
    mutable bool qtoolbar_resizeevent_isbase = false;
    mutable bool qtoolbar_closeevent_isbase = false;
    mutable bool qtoolbar_contextmenuevent_isbase = false;
    mutable bool qtoolbar_tabletevent_isbase = false;
    mutable bool qtoolbar_dragenterevent_isbase = false;
    mutable bool qtoolbar_dragmoveevent_isbase = false;
    mutable bool qtoolbar_dragleaveevent_isbase = false;
    mutable bool qtoolbar_dropevent_isbase = false;
    mutable bool qtoolbar_showevent_isbase = false;
    mutable bool qtoolbar_hideevent_isbase = false;
    mutable bool qtoolbar_nativeevent_isbase = false;
    mutable bool qtoolbar_metric_isbase = false;
    mutable bool qtoolbar_initpainter_isbase = false;
    mutable bool qtoolbar_redirected_isbase = false;
    mutable bool qtoolbar_sharedpainter_isbase = false;
    mutable bool qtoolbar_inputmethodevent_isbase = false;
    mutable bool qtoolbar_inputmethodquery_isbase = false;
    mutable bool qtoolbar_focusnextprevchild_isbase = false;
    mutable bool qtoolbar_eventfilter_isbase = false;
    mutable bool qtoolbar_timerevent_isbase = false;
    mutable bool qtoolbar_childevent_isbase = false;
    mutable bool qtoolbar_customevent_isbase = false;
    mutable bool qtoolbar_connectnotify_isbase = false;
    mutable bool qtoolbar_disconnectnotify_isbase = false;
    mutable bool qtoolbar_updatemicrofocus_isbase = false;
    mutable bool qtoolbar_create_isbase = false;
    mutable bool qtoolbar_destroy_isbase = false;
    mutable bool qtoolbar_focusnextchild_isbase = false;
    mutable bool qtoolbar_focuspreviouschild_isbase = false;
    mutable bool qtoolbar_sender_isbase = false;
    mutable bool qtoolbar_sendersignalindex_isbase = false;
    mutable bool qtoolbar_receivers_isbase = false;
    mutable bool qtoolbar_issignalconnected_isbase = false;

  public:
    VirtualQToolBar(QWidget* parent) : QToolBar(parent){};
    VirtualQToolBar(const QString& title) : QToolBar(title){};
    VirtualQToolBar() : QToolBar(){};
    VirtualQToolBar(const QString& title, QWidget* parent) : QToolBar(title, parent){};

    ~VirtualQToolBar() {
        qtoolbar_metacall_callback = nullptr;
        qtoolbar_actionevent_callback = nullptr;
        qtoolbar_changeevent_callback = nullptr;
        qtoolbar_paintevent_callback = nullptr;
        qtoolbar_event_callback = nullptr;
        qtoolbar_initstyleoption_callback = nullptr;
        qtoolbar_devtype_callback = nullptr;
        qtoolbar_setvisible_callback = nullptr;
        qtoolbar_sizehint_callback = nullptr;
        qtoolbar_minimumsizehint_callback = nullptr;
        qtoolbar_heightforwidth_callback = nullptr;
        qtoolbar_hasheightforwidth_callback = nullptr;
        qtoolbar_paintengine_callback = nullptr;
        qtoolbar_mousepressevent_callback = nullptr;
        qtoolbar_mousereleaseevent_callback = nullptr;
        qtoolbar_mousedoubleclickevent_callback = nullptr;
        qtoolbar_mousemoveevent_callback = nullptr;
        qtoolbar_wheelevent_callback = nullptr;
        qtoolbar_keypressevent_callback = nullptr;
        qtoolbar_keyreleaseevent_callback = nullptr;
        qtoolbar_focusinevent_callback = nullptr;
        qtoolbar_focusoutevent_callback = nullptr;
        qtoolbar_enterevent_callback = nullptr;
        qtoolbar_leaveevent_callback = nullptr;
        qtoolbar_moveevent_callback = nullptr;
        qtoolbar_resizeevent_callback = nullptr;
        qtoolbar_closeevent_callback = nullptr;
        qtoolbar_contextmenuevent_callback = nullptr;
        qtoolbar_tabletevent_callback = nullptr;
        qtoolbar_dragenterevent_callback = nullptr;
        qtoolbar_dragmoveevent_callback = nullptr;
        qtoolbar_dragleaveevent_callback = nullptr;
        qtoolbar_dropevent_callback = nullptr;
        qtoolbar_showevent_callback = nullptr;
        qtoolbar_hideevent_callback = nullptr;
        qtoolbar_nativeevent_callback = nullptr;
        qtoolbar_metric_callback = nullptr;
        qtoolbar_initpainter_callback = nullptr;
        qtoolbar_redirected_callback = nullptr;
        qtoolbar_sharedpainter_callback = nullptr;
        qtoolbar_inputmethodevent_callback = nullptr;
        qtoolbar_inputmethodquery_callback = nullptr;
        qtoolbar_focusnextprevchild_callback = nullptr;
        qtoolbar_eventfilter_callback = nullptr;
        qtoolbar_timerevent_callback = nullptr;
        qtoolbar_childevent_callback = nullptr;
        qtoolbar_customevent_callback = nullptr;
        qtoolbar_connectnotify_callback = nullptr;
        qtoolbar_disconnectnotify_callback = nullptr;
        qtoolbar_updatemicrofocus_callback = nullptr;
        qtoolbar_create_callback = nullptr;
        qtoolbar_destroy_callback = nullptr;
        qtoolbar_focusnextchild_callback = nullptr;
        qtoolbar_focuspreviouschild_callback = nullptr;
        qtoolbar_sender_callback = nullptr;
        qtoolbar_sendersignalindex_callback = nullptr;
        qtoolbar_receivers_callback = nullptr;
        qtoolbar_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQToolBar_Metacall_Callback(QToolBar_Metacall_Callback cb) { qtoolbar_metacall_callback = cb; }
    void setQToolBar_ActionEvent_Callback(QToolBar_ActionEvent_Callback cb) { qtoolbar_actionevent_callback = cb; }
    void setQToolBar_ChangeEvent_Callback(QToolBar_ChangeEvent_Callback cb) { qtoolbar_changeevent_callback = cb; }
    void setQToolBar_PaintEvent_Callback(QToolBar_PaintEvent_Callback cb) { qtoolbar_paintevent_callback = cb; }
    void setQToolBar_Event_Callback(QToolBar_Event_Callback cb) { qtoolbar_event_callback = cb; }
    void setQToolBar_InitStyleOption_Callback(QToolBar_InitStyleOption_Callback cb) { qtoolbar_initstyleoption_callback = cb; }
    void setQToolBar_DevType_Callback(QToolBar_DevType_Callback cb) { qtoolbar_devtype_callback = cb; }
    void setQToolBar_SetVisible_Callback(QToolBar_SetVisible_Callback cb) { qtoolbar_setvisible_callback = cb; }
    void setQToolBar_SizeHint_Callback(QToolBar_SizeHint_Callback cb) { qtoolbar_sizehint_callback = cb; }
    void setQToolBar_MinimumSizeHint_Callback(QToolBar_MinimumSizeHint_Callback cb) { qtoolbar_minimumsizehint_callback = cb; }
    void setQToolBar_HeightForWidth_Callback(QToolBar_HeightForWidth_Callback cb) { qtoolbar_heightforwidth_callback = cb; }
    void setQToolBar_HasHeightForWidth_Callback(QToolBar_HasHeightForWidth_Callback cb) { qtoolbar_hasheightforwidth_callback = cb; }
    void setQToolBar_PaintEngine_Callback(QToolBar_PaintEngine_Callback cb) { qtoolbar_paintengine_callback = cb; }
    void setQToolBar_MousePressEvent_Callback(QToolBar_MousePressEvent_Callback cb) { qtoolbar_mousepressevent_callback = cb; }
    void setQToolBar_MouseReleaseEvent_Callback(QToolBar_MouseReleaseEvent_Callback cb) { qtoolbar_mousereleaseevent_callback = cb; }
    void setQToolBar_MouseDoubleClickEvent_Callback(QToolBar_MouseDoubleClickEvent_Callback cb) { qtoolbar_mousedoubleclickevent_callback = cb; }
    void setQToolBar_MouseMoveEvent_Callback(QToolBar_MouseMoveEvent_Callback cb) { qtoolbar_mousemoveevent_callback = cb; }
    void setQToolBar_WheelEvent_Callback(QToolBar_WheelEvent_Callback cb) { qtoolbar_wheelevent_callback = cb; }
    void setQToolBar_KeyPressEvent_Callback(QToolBar_KeyPressEvent_Callback cb) { qtoolbar_keypressevent_callback = cb; }
    void setQToolBar_KeyReleaseEvent_Callback(QToolBar_KeyReleaseEvent_Callback cb) { qtoolbar_keyreleaseevent_callback = cb; }
    void setQToolBar_FocusInEvent_Callback(QToolBar_FocusInEvent_Callback cb) { qtoolbar_focusinevent_callback = cb; }
    void setQToolBar_FocusOutEvent_Callback(QToolBar_FocusOutEvent_Callback cb) { qtoolbar_focusoutevent_callback = cb; }
    void setQToolBar_EnterEvent_Callback(QToolBar_EnterEvent_Callback cb) { qtoolbar_enterevent_callback = cb; }
    void setQToolBar_LeaveEvent_Callback(QToolBar_LeaveEvent_Callback cb) { qtoolbar_leaveevent_callback = cb; }
    void setQToolBar_MoveEvent_Callback(QToolBar_MoveEvent_Callback cb) { qtoolbar_moveevent_callback = cb; }
    void setQToolBar_ResizeEvent_Callback(QToolBar_ResizeEvent_Callback cb) { qtoolbar_resizeevent_callback = cb; }
    void setQToolBar_CloseEvent_Callback(QToolBar_CloseEvent_Callback cb) { qtoolbar_closeevent_callback = cb; }
    void setQToolBar_ContextMenuEvent_Callback(QToolBar_ContextMenuEvent_Callback cb) { qtoolbar_contextmenuevent_callback = cb; }
    void setQToolBar_TabletEvent_Callback(QToolBar_TabletEvent_Callback cb) { qtoolbar_tabletevent_callback = cb; }
    void setQToolBar_DragEnterEvent_Callback(QToolBar_DragEnterEvent_Callback cb) { qtoolbar_dragenterevent_callback = cb; }
    void setQToolBar_DragMoveEvent_Callback(QToolBar_DragMoveEvent_Callback cb) { qtoolbar_dragmoveevent_callback = cb; }
    void setQToolBar_DragLeaveEvent_Callback(QToolBar_DragLeaveEvent_Callback cb) { qtoolbar_dragleaveevent_callback = cb; }
    void setQToolBar_DropEvent_Callback(QToolBar_DropEvent_Callback cb) { qtoolbar_dropevent_callback = cb; }
    void setQToolBar_ShowEvent_Callback(QToolBar_ShowEvent_Callback cb) { qtoolbar_showevent_callback = cb; }
    void setQToolBar_HideEvent_Callback(QToolBar_HideEvent_Callback cb) { qtoolbar_hideevent_callback = cb; }
    void setQToolBar_NativeEvent_Callback(QToolBar_NativeEvent_Callback cb) { qtoolbar_nativeevent_callback = cb; }
    void setQToolBar_Metric_Callback(QToolBar_Metric_Callback cb) { qtoolbar_metric_callback = cb; }
    void setQToolBar_InitPainter_Callback(QToolBar_InitPainter_Callback cb) { qtoolbar_initpainter_callback = cb; }
    void setQToolBar_Redirected_Callback(QToolBar_Redirected_Callback cb) { qtoolbar_redirected_callback = cb; }
    void setQToolBar_SharedPainter_Callback(QToolBar_SharedPainter_Callback cb) { qtoolbar_sharedpainter_callback = cb; }
    void setQToolBar_InputMethodEvent_Callback(QToolBar_InputMethodEvent_Callback cb) { qtoolbar_inputmethodevent_callback = cb; }
    void setQToolBar_InputMethodQuery_Callback(QToolBar_InputMethodQuery_Callback cb) { qtoolbar_inputmethodquery_callback = cb; }
    void setQToolBar_FocusNextPrevChild_Callback(QToolBar_FocusNextPrevChild_Callback cb) { qtoolbar_focusnextprevchild_callback = cb; }
    void setQToolBar_EventFilter_Callback(QToolBar_EventFilter_Callback cb) { qtoolbar_eventfilter_callback = cb; }
    void setQToolBar_TimerEvent_Callback(QToolBar_TimerEvent_Callback cb) { qtoolbar_timerevent_callback = cb; }
    void setQToolBar_ChildEvent_Callback(QToolBar_ChildEvent_Callback cb) { qtoolbar_childevent_callback = cb; }
    void setQToolBar_CustomEvent_Callback(QToolBar_CustomEvent_Callback cb) { qtoolbar_customevent_callback = cb; }
    void setQToolBar_ConnectNotify_Callback(QToolBar_ConnectNotify_Callback cb) { qtoolbar_connectnotify_callback = cb; }
    void setQToolBar_DisconnectNotify_Callback(QToolBar_DisconnectNotify_Callback cb) { qtoolbar_disconnectnotify_callback = cb; }
    void setQToolBar_UpdateMicroFocus_Callback(QToolBar_UpdateMicroFocus_Callback cb) { qtoolbar_updatemicrofocus_callback = cb; }
    void setQToolBar_Create_Callback(QToolBar_Create_Callback cb) { qtoolbar_create_callback = cb; }
    void setQToolBar_Destroy_Callback(QToolBar_Destroy_Callback cb) { qtoolbar_destroy_callback = cb; }
    void setQToolBar_FocusNextChild_Callback(QToolBar_FocusNextChild_Callback cb) { qtoolbar_focusnextchild_callback = cb; }
    void setQToolBar_FocusPreviousChild_Callback(QToolBar_FocusPreviousChild_Callback cb) { qtoolbar_focuspreviouschild_callback = cb; }
    void setQToolBar_Sender_Callback(QToolBar_Sender_Callback cb) { qtoolbar_sender_callback = cb; }
    void setQToolBar_SenderSignalIndex_Callback(QToolBar_SenderSignalIndex_Callback cb) { qtoolbar_sendersignalindex_callback = cb; }
    void setQToolBar_Receivers_Callback(QToolBar_Receivers_Callback cb) { qtoolbar_receivers_callback = cb; }
    void setQToolBar_IsSignalConnected_Callback(QToolBar_IsSignalConnected_Callback cb) { qtoolbar_issignalconnected_callback = cb; }

    // Base flag setters
    void setQToolBar_Metacall_IsBase(bool value) const { qtoolbar_metacall_isbase = value; }
    void setQToolBar_ActionEvent_IsBase(bool value) const { qtoolbar_actionevent_isbase = value; }
    void setQToolBar_ChangeEvent_IsBase(bool value) const { qtoolbar_changeevent_isbase = value; }
    void setQToolBar_PaintEvent_IsBase(bool value) const { qtoolbar_paintevent_isbase = value; }
    void setQToolBar_Event_IsBase(bool value) const { qtoolbar_event_isbase = value; }
    void setQToolBar_InitStyleOption_IsBase(bool value) const { qtoolbar_initstyleoption_isbase = value; }
    void setQToolBar_DevType_IsBase(bool value) const { qtoolbar_devtype_isbase = value; }
    void setQToolBar_SetVisible_IsBase(bool value) const { qtoolbar_setvisible_isbase = value; }
    void setQToolBar_SizeHint_IsBase(bool value) const { qtoolbar_sizehint_isbase = value; }
    void setQToolBar_MinimumSizeHint_IsBase(bool value) const { qtoolbar_minimumsizehint_isbase = value; }
    void setQToolBar_HeightForWidth_IsBase(bool value) const { qtoolbar_heightforwidth_isbase = value; }
    void setQToolBar_HasHeightForWidth_IsBase(bool value) const { qtoolbar_hasheightforwidth_isbase = value; }
    void setQToolBar_PaintEngine_IsBase(bool value) const { qtoolbar_paintengine_isbase = value; }
    void setQToolBar_MousePressEvent_IsBase(bool value) const { qtoolbar_mousepressevent_isbase = value; }
    void setQToolBar_MouseReleaseEvent_IsBase(bool value) const { qtoolbar_mousereleaseevent_isbase = value; }
    void setQToolBar_MouseDoubleClickEvent_IsBase(bool value) const { qtoolbar_mousedoubleclickevent_isbase = value; }
    void setQToolBar_MouseMoveEvent_IsBase(bool value) const { qtoolbar_mousemoveevent_isbase = value; }
    void setQToolBar_WheelEvent_IsBase(bool value) const { qtoolbar_wheelevent_isbase = value; }
    void setQToolBar_KeyPressEvent_IsBase(bool value) const { qtoolbar_keypressevent_isbase = value; }
    void setQToolBar_KeyReleaseEvent_IsBase(bool value) const { qtoolbar_keyreleaseevent_isbase = value; }
    void setQToolBar_FocusInEvent_IsBase(bool value) const { qtoolbar_focusinevent_isbase = value; }
    void setQToolBar_FocusOutEvent_IsBase(bool value) const { qtoolbar_focusoutevent_isbase = value; }
    void setQToolBar_EnterEvent_IsBase(bool value) const { qtoolbar_enterevent_isbase = value; }
    void setQToolBar_LeaveEvent_IsBase(bool value) const { qtoolbar_leaveevent_isbase = value; }
    void setQToolBar_MoveEvent_IsBase(bool value) const { qtoolbar_moveevent_isbase = value; }
    void setQToolBar_ResizeEvent_IsBase(bool value) const { qtoolbar_resizeevent_isbase = value; }
    void setQToolBar_CloseEvent_IsBase(bool value) const { qtoolbar_closeevent_isbase = value; }
    void setQToolBar_ContextMenuEvent_IsBase(bool value) const { qtoolbar_contextmenuevent_isbase = value; }
    void setQToolBar_TabletEvent_IsBase(bool value) const { qtoolbar_tabletevent_isbase = value; }
    void setQToolBar_DragEnterEvent_IsBase(bool value) const { qtoolbar_dragenterevent_isbase = value; }
    void setQToolBar_DragMoveEvent_IsBase(bool value) const { qtoolbar_dragmoveevent_isbase = value; }
    void setQToolBar_DragLeaveEvent_IsBase(bool value) const { qtoolbar_dragleaveevent_isbase = value; }
    void setQToolBar_DropEvent_IsBase(bool value) const { qtoolbar_dropevent_isbase = value; }
    void setQToolBar_ShowEvent_IsBase(bool value) const { qtoolbar_showevent_isbase = value; }
    void setQToolBar_HideEvent_IsBase(bool value) const { qtoolbar_hideevent_isbase = value; }
    void setQToolBar_NativeEvent_IsBase(bool value) const { qtoolbar_nativeevent_isbase = value; }
    void setQToolBar_Metric_IsBase(bool value) const { qtoolbar_metric_isbase = value; }
    void setQToolBar_InitPainter_IsBase(bool value) const { qtoolbar_initpainter_isbase = value; }
    void setQToolBar_Redirected_IsBase(bool value) const { qtoolbar_redirected_isbase = value; }
    void setQToolBar_SharedPainter_IsBase(bool value) const { qtoolbar_sharedpainter_isbase = value; }
    void setQToolBar_InputMethodEvent_IsBase(bool value) const { qtoolbar_inputmethodevent_isbase = value; }
    void setQToolBar_InputMethodQuery_IsBase(bool value) const { qtoolbar_inputmethodquery_isbase = value; }
    void setQToolBar_FocusNextPrevChild_IsBase(bool value) const { qtoolbar_focusnextprevchild_isbase = value; }
    void setQToolBar_EventFilter_IsBase(bool value) const { qtoolbar_eventfilter_isbase = value; }
    void setQToolBar_TimerEvent_IsBase(bool value) const { qtoolbar_timerevent_isbase = value; }
    void setQToolBar_ChildEvent_IsBase(bool value) const { qtoolbar_childevent_isbase = value; }
    void setQToolBar_CustomEvent_IsBase(bool value) const { qtoolbar_customevent_isbase = value; }
    void setQToolBar_ConnectNotify_IsBase(bool value) const { qtoolbar_connectnotify_isbase = value; }
    void setQToolBar_DisconnectNotify_IsBase(bool value) const { qtoolbar_disconnectnotify_isbase = value; }
    void setQToolBar_UpdateMicroFocus_IsBase(bool value) const { qtoolbar_updatemicrofocus_isbase = value; }
    void setQToolBar_Create_IsBase(bool value) const { qtoolbar_create_isbase = value; }
    void setQToolBar_Destroy_IsBase(bool value) const { qtoolbar_destroy_isbase = value; }
    void setQToolBar_FocusNextChild_IsBase(bool value) const { qtoolbar_focusnextchild_isbase = value; }
    void setQToolBar_FocusPreviousChild_IsBase(bool value) const { qtoolbar_focuspreviouschild_isbase = value; }
    void setQToolBar_Sender_IsBase(bool value) const { qtoolbar_sender_isbase = value; }
    void setQToolBar_SenderSignalIndex_IsBase(bool value) const { qtoolbar_sendersignalindex_isbase = value; }
    void setQToolBar_Receivers_IsBase(bool value) const { qtoolbar_receivers_isbase = value; }
    void setQToolBar_IsSignalConnected_IsBase(bool value) const { qtoolbar_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtoolbar_metacall_isbase) {
            qtoolbar_metacall_isbase = false;
            return QToolBar::qt_metacall(param1, param2, param3);
        } else if (qtoolbar_metacall_callback != nullptr) {
            return qtoolbar_metacall_callback(this, param1, param2, param3);
        } else {
            return QToolBar::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qtoolbar_actionevent_isbase) {
            qtoolbar_actionevent_isbase = false;
            QToolBar::actionEvent(event);
        } else if (qtoolbar_actionevent_callback != nullptr) {
            qtoolbar_actionevent_callback(this, event);
        } else {
            QToolBar::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (qtoolbar_changeevent_isbase) {
            qtoolbar_changeevent_isbase = false;
            QToolBar::changeEvent(event);
        } else if (qtoolbar_changeevent_callback != nullptr) {
            qtoolbar_changeevent_callback(this, event);
        } else {
            QToolBar::changeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qtoolbar_paintevent_isbase) {
            qtoolbar_paintevent_isbase = false;
            QToolBar::paintEvent(event);
        } else if (qtoolbar_paintevent_callback != nullptr) {
            qtoolbar_paintevent_callback(this, event);
        } else {
            QToolBar::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qtoolbar_event_isbase) {
            qtoolbar_event_isbase = false;
            return QToolBar::event(event);
        } else if (qtoolbar_event_callback != nullptr) {
            return qtoolbar_event_callback(this, event);
        } else {
            return QToolBar::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionToolBar* option) const override {
        if (qtoolbar_initstyleoption_isbase) {
            qtoolbar_initstyleoption_isbase = false;
            QToolBar::initStyleOption(option);
        } else if (qtoolbar_initstyleoption_callback != nullptr) {
            qtoolbar_initstyleoption_callback(this, option);
        } else {
            QToolBar::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qtoolbar_devtype_isbase) {
            qtoolbar_devtype_isbase = false;
            return QToolBar::devType();
        } else if (qtoolbar_devtype_callback != nullptr) {
            return qtoolbar_devtype_callback();
        } else {
            return QToolBar::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qtoolbar_setvisible_isbase) {
            qtoolbar_setvisible_isbase = false;
            QToolBar::setVisible(visible);
        } else if (qtoolbar_setvisible_callback != nullptr) {
            qtoolbar_setvisible_callback(this, visible);
        } else {
            QToolBar::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qtoolbar_sizehint_isbase) {
            qtoolbar_sizehint_isbase = false;
            return QToolBar::sizeHint();
        } else if (qtoolbar_sizehint_callback != nullptr) {
            return qtoolbar_sizehint_callback();
        } else {
            return QToolBar::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qtoolbar_minimumsizehint_isbase) {
            qtoolbar_minimumsizehint_isbase = false;
            return QToolBar::minimumSizeHint();
        } else if (qtoolbar_minimumsizehint_callback != nullptr) {
            return qtoolbar_minimumsizehint_callback();
        } else {
            return QToolBar::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qtoolbar_heightforwidth_isbase) {
            qtoolbar_heightforwidth_isbase = false;
            return QToolBar::heightForWidth(param1);
        } else if (qtoolbar_heightforwidth_callback != nullptr) {
            return qtoolbar_heightforwidth_callback(this, param1);
        } else {
            return QToolBar::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qtoolbar_hasheightforwidth_isbase) {
            qtoolbar_hasheightforwidth_isbase = false;
            return QToolBar::hasHeightForWidth();
        } else if (qtoolbar_hasheightforwidth_callback != nullptr) {
            return qtoolbar_hasheightforwidth_callback();
        } else {
            return QToolBar::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qtoolbar_paintengine_isbase) {
            qtoolbar_paintengine_isbase = false;
            return QToolBar::paintEngine();
        } else if (qtoolbar_paintengine_callback != nullptr) {
            return qtoolbar_paintengine_callback();
        } else {
            return QToolBar::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qtoolbar_mousepressevent_isbase) {
            qtoolbar_mousepressevent_isbase = false;
            QToolBar::mousePressEvent(event);
        } else if (qtoolbar_mousepressevent_callback != nullptr) {
            qtoolbar_mousepressevent_callback(this, event);
        } else {
            QToolBar::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qtoolbar_mousereleaseevent_isbase) {
            qtoolbar_mousereleaseevent_isbase = false;
            QToolBar::mouseReleaseEvent(event);
        } else if (qtoolbar_mousereleaseevent_callback != nullptr) {
            qtoolbar_mousereleaseevent_callback(this, event);
        } else {
            QToolBar::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qtoolbar_mousedoubleclickevent_isbase) {
            qtoolbar_mousedoubleclickevent_isbase = false;
            QToolBar::mouseDoubleClickEvent(event);
        } else if (qtoolbar_mousedoubleclickevent_callback != nullptr) {
            qtoolbar_mousedoubleclickevent_callback(this, event);
        } else {
            QToolBar::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qtoolbar_mousemoveevent_isbase) {
            qtoolbar_mousemoveevent_isbase = false;
            QToolBar::mouseMoveEvent(event);
        } else if (qtoolbar_mousemoveevent_callback != nullptr) {
            qtoolbar_mousemoveevent_callback(this, event);
        } else {
            QToolBar::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qtoolbar_wheelevent_isbase) {
            qtoolbar_wheelevent_isbase = false;
            QToolBar::wheelEvent(event);
        } else if (qtoolbar_wheelevent_callback != nullptr) {
            qtoolbar_wheelevent_callback(this, event);
        } else {
            QToolBar::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qtoolbar_keypressevent_isbase) {
            qtoolbar_keypressevent_isbase = false;
            QToolBar::keyPressEvent(event);
        } else if (qtoolbar_keypressevent_callback != nullptr) {
            qtoolbar_keypressevent_callback(this, event);
        } else {
            QToolBar::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qtoolbar_keyreleaseevent_isbase) {
            qtoolbar_keyreleaseevent_isbase = false;
            QToolBar::keyReleaseEvent(event);
        } else if (qtoolbar_keyreleaseevent_callback != nullptr) {
            qtoolbar_keyreleaseevent_callback(this, event);
        } else {
            QToolBar::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qtoolbar_focusinevent_isbase) {
            qtoolbar_focusinevent_isbase = false;
            QToolBar::focusInEvent(event);
        } else if (qtoolbar_focusinevent_callback != nullptr) {
            qtoolbar_focusinevent_callback(this, event);
        } else {
            QToolBar::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qtoolbar_focusoutevent_isbase) {
            qtoolbar_focusoutevent_isbase = false;
            QToolBar::focusOutEvent(event);
        } else if (qtoolbar_focusoutevent_callback != nullptr) {
            qtoolbar_focusoutevent_callback(this, event);
        } else {
            QToolBar::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qtoolbar_enterevent_isbase) {
            qtoolbar_enterevent_isbase = false;
            QToolBar::enterEvent(event);
        } else if (qtoolbar_enterevent_callback != nullptr) {
            qtoolbar_enterevent_callback(this, event);
        } else {
            QToolBar::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qtoolbar_leaveevent_isbase) {
            qtoolbar_leaveevent_isbase = false;
            QToolBar::leaveEvent(event);
        } else if (qtoolbar_leaveevent_callback != nullptr) {
            qtoolbar_leaveevent_callback(this, event);
        } else {
            QToolBar::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qtoolbar_moveevent_isbase) {
            qtoolbar_moveevent_isbase = false;
            QToolBar::moveEvent(event);
        } else if (qtoolbar_moveevent_callback != nullptr) {
            qtoolbar_moveevent_callback(this, event);
        } else {
            QToolBar::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qtoolbar_resizeevent_isbase) {
            qtoolbar_resizeevent_isbase = false;
            QToolBar::resizeEvent(event);
        } else if (qtoolbar_resizeevent_callback != nullptr) {
            qtoolbar_resizeevent_callback(this, event);
        } else {
            QToolBar::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qtoolbar_closeevent_isbase) {
            qtoolbar_closeevent_isbase = false;
            QToolBar::closeEvent(event);
        } else if (qtoolbar_closeevent_callback != nullptr) {
            qtoolbar_closeevent_callback(this, event);
        } else {
            QToolBar::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qtoolbar_contextmenuevent_isbase) {
            qtoolbar_contextmenuevent_isbase = false;
            QToolBar::contextMenuEvent(event);
        } else if (qtoolbar_contextmenuevent_callback != nullptr) {
            qtoolbar_contextmenuevent_callback(this, event);
        } else {
            QToolBar::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qtoolbar_tabletevent_isbase) {
            qtoolbar_tabletevent_isbase = false;
            QToolBar::tabletEvent(event);
        } else if (qtoolbar_tabletevent_callback != nullptr) {
            qtoolbar_tabletevent_callback(this, event);
        } else {
            QToolBar::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qtoolbar_dragenterevent_isbase) {
            qtoolbar_dragenterevent_isbase = false;
            QToolBar::dragEnterEvent(event);
        } else if (qtoolbar_dragenterevent_callback != nullptr) {
            qtoolbar_dragenterevent_callback(this, event);
        } else {
            QToolBar::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qtoolbar_dragmoveevent_isbase) {
            qtoolbar_dragmoveevent_isbase = false;
            QToolBar::dragMoveEvent(event);
        } else if (qtoolbar_dragmoveevent_callback != nullptr) {
            qtoolbar_dragmoveevent_callback(this, event);
        } else {
            QToolBar::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qtoolbar_dragleaveevent_isbase) {
            qtoolbar_dragleaveevent_isbase = false;
            QToolBar::dragLeaveEvent(event);
        } else if (qtoolbar_dragleaveevent_callback != nullptr) {
            qtoolbar_dragleaveevent_callback(this, event);
        } else {
            QToolBar::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qtoolbar_dropevent_isbase) {
            qtoolbar_dropevent_isbase = false;
            QToolBar::dropEvent(event);
        } else if (qtoolbar_dropevent_callback != nullptr) {
            qtoolbar_dropevent_callback(this, event);
        } else {
            QToolBar::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qtoolbar_showevent_isbase) {
            qtoolbar_showevent_isbase = false;
            QToolBar::showEvent(event);
        } else if (qtoolbar_showevent_callback != nullptr) {
            qtoolbar_showevent_callback(this, event);
        } else {
            QToolBar::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qtoolbar_hideevent_isbase) {
            qtoolbar_hideevent_isbase = false;
            QToolBar::hideEvent(event);
        } else if (qtoolbar_hideevent_callback != nullptr) {
            qtoolbar_hideevent_callback(this, event);
        } else {
            QToolBar::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qtoolbar_nativeevent_isbase) {
            qtoolbar_nativeevent_isbase = false;
            return QToolBar::nativeEvent(eventType, message, result);
        } else if (qtoolbar_nativeevent_callback != nullptr) {
            return qtoolbar_nativeevent_callback(this, eventType, message, result);
        } else {
            return QToolBar::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qtoolbar_metric_isbase) {
            qtoolbar_metric_isbase = false;
            return QToolBar::metric(param1);
        } else if (qtoolbar_metric_callback != nullptr) {
            return qtoolbar_metric_callback(this, param1);
        } else {
            return QToolBar::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qtoolbar_initpainter_isbase) {
            qtoolbar_initpainter_isbase = false;
            QToolBar::initPainter(painter);
        } else if (qtoolbar_initpainter_callback != nullptr) {
            qtoolbar_initpainter_callback(this, painter);
        } else {
            QToolBar::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qtoolbar_redirected_isbase) {
            qtoolbar_redirected_isbase = false;
            return QToolBar::redirected(offset);
        } else if (qtoolbar_redirected_callback != nullptr) {
            return qtoolbar_redirected_callback(this, offset);
        } else {
            return QToolBar::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qtoolbar_sharedpainter_isbase) {
            qtoolbar_sharedpainter_isbase = false;
            return QToolBar::sharedPainter();
        } else if (qtoolbar_sharedpainter_callback != nullptr) {
            return qtoolbar_sharedpainter_callback();
        } else {
            return QToolBar::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qtoolbar_inputmethodevent_isbase) {
            qtoolbar_inputmethodevent_isbase = false;
            QToolBar::inputMethodEvent(param1);
        } else if (qtoolbar_inputmethodevent_callback != nullptr) {
            qtoolbar_inputmethodevent_callback(this, param1);
        } else {
            QToolBar::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qtoolbar_inputmethodquery_isbase) {
            qtoolbar_inputmethodquery_isbase = false;
            return QToolBar::inputMethodQuery(param1);
        } else if (qtoolbar_inputmethodquery_callback != nullptr) {
            return qtoolbar_inputmethodquery_callback(this, param1);
        } else {
            return QToolBar::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qtoolbar_focusnextprevchild_isbase) {
            qtoolbar_focusnextprevchild_isbase = false;
            return QToolBar::focusNextPrevChild(next);
        } else if (qtoolbar_focusnextprevchild_callback != nullptr) {
            return qtoolbar_focusnextprevchild_callback(this, next);
        } else {
            return QToolBar::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qtoolbar_eventfilter_isbase) {
            qtoolbar_eventfilter_isbase = false;
            return QToolBar::eventFilter(watched, event);
        } else if (qtoolbar_eventfilter_callback != nullptr) {
            return qtoolbar_eventfilter_callback(this, watched, event);
        } else {
            return QToolBar::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qtoolbar_timerevent_isbase) {
            qtoolbar_timerevent_isbase = false;
            QToolBar::timerEvent(event);
        } else if (qtoolbar_timerevent_callback != nullptr) {
            qtoolbar_timerevent_callback(this, event);
        } else {
            QToolBar::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtoolbar_childevent_isbase) {
            qtoolbar_childevent_isbase = false;
            QToolBar::childEvent(event);
        } else if (qtoolbar_childevent_callback != nullptr) {
            qtoolbar_childevent_callback(this, event);
        } else {
            QToolBar::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtoolbar_customevent_isbase) {
            qtoolbar_customevent_isbase = false;
            QToolBar::customEvent(event);
        } else if (qtoolbar_customevent_callback != nullptr) {
            qtoolbar_customevent_callback(this, event);
        } else {
            QToolBar::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtoolbar_connectnotify_isbase) {
            qtoolbar_connectnotify_isbase = false;
            QToolBar::connectNotify(signal);
        } else if (qtoolbar_connectnotify_callback != nullptr) {
            qtoolbar_connectnotify_callback(this, signal);
        } else {
            QToolBar::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtoolbar_disconnectnotify_isbase) {
            qtoolbar_disconnectnotify_isbase = false;
            QToolBar::disconnectNotify(signal);
        } else if (qtoolbar_disconnectnotify_callback != nullptr) {
            qtoolbar_disconnectnotify_callback(this, signal);
        } else {
            QToolBar::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qtoolbar_updatemicrofocus_isbase) {
            qtoolbar_updatemicrofocus_isbase = false;
            QToolBar::updateMicroFocus();
        } else if (qtoolbar_updatemicrofocus_callback != nullptr) {
            qtoolbar_updatemicrofocus_callback();
        } else {
            QToolBar::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qtoolbar_create_isbase) {
            qtoolbar_create_isbase = false;
            QToolBar::create();
        } else if (qtoolbar_create_callback != nullptr) {
            qtoolbar_create_callback();
        } else {
            QToolBar::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qtoolbar_destroy_isbase) {
            qtoolbar_destroy_isbase = false;
            QToolBar::destroy();
        } else if (qtoolbar_destroy_callback != nullptr) {
            qtoolbar_destroy_callback();
        } else {
            QToolBar::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qtoolbar_focusnextchild_isbase) {
            qtoolbar_focusnextchild_isbase = false;
            return QToolBar::focusNextChild();
        } else if (qtoolbar_focusnextchild_callback != nullptr) {
            return qtoolbar_focusnextchild_callback();
        } else {
            return QToolBar::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qtoolbar_focuspreviouschild_isbase) {
            qtoolbar_focuspreviouschild_isbase = false;
            return QToolBar::focusPreviousChild();
        } else if (qtoolbar_focuspreviouschild_callback != nullptr) {
            return qtoolbar_focuspreviouschild_callback();
        } else {
            return QToolBar::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qtoolbar_sender_isbase) {
            qtoolbar_sender_isbase = false;
            return QToolBar::sender();
        } else if (qtoolbar_sender_callback != nullptr) {
            return qtoolbar_sender_callback();
        } else {
            return QToolBar::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qtoolbar_sendersignalindex_isbase) {
            qtoolbar_sendersignalindex_isbase = false;
            return QToolBar::senderSignalIndex();
        } else if (qtoolbar_sendersignalindex_callback != nullptr) {
            return qtoolbar_sendersignalindex_callback();
        } else {
            return QToolBar::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qtoolbar_receivers_isbase) {
            qtoolbar_receivers_isbase = false;
            return QToolBar::receivers(signal);
        } else if (qtoolbar_receivers_callback != nullptr) {
            return qtoolbar_receivers_callback(this, signal);
        } else {
            return QToolBar::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qtoolbar_issignalconnected_isbase) {
            qtoolbar_issignalconnected_isbase = false;
            return QToolBar::isSignalConnected(signal);
        } else if (qtoolbar_issignalconnected_callback != nullptr) {
            return qtoolbar_issignalconnected_callback(this, signal);
        } else {
            return QToolBar::isSignalConnected(signal);
        }
    }
};

#endif
