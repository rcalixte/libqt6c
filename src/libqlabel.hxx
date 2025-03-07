#pragma once
#ifndef SRCC_LIBVIRTUALQLABEL_H
#define SRCC_LIBVIRTUALQLABEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QLabel so that we can call protected methods
class VirtualQLabel : public QLabel {

  public:
    // Virtual class public types (including callbacks)
    using QLabel_Metacall_Callback = int (*)(QLabel*, QMetaObject::Call, int, void**);
    using QLabel_SizeHint_Callback = QSize (*)();
    using QLabel_MinimumSizeHint_Callback = QSize (*)();
    using QLabel_HeightForWidth_Callback = int (*)(const QLabel*, int);
    using QLabel_Event_Callback = bool (*)(QLabel*, QEvent*);
    using QLabel_KeyPressEvent_Callback = void (*)(QLabel*, QKeyEvent*);
    using QLabel_PaintEvent_Callback = void (*)(QLabel*, QPaintEvent*);
    using QLabel_ChangeEvent_Callback = void (*)(QLabel*, QEvent*);
    using QLabel_MousePressEvent_Callback = void (*)(QLabel*, QMouseEvent*);
    using QLabel_MouseMoveEvent_Callback = void (*)(QLabel*, QMouseEvent*);
    using QLabel_MouseReleaseEvent_Callback = void (*)(QLabel*, QMouseEvent*);
    using QLabel_ContextMenuEvent_Callback = void (*)(QLabel*, QContextMenuEvent*);
    using QLabel_FocusInEvent_Callback = void (*)(QLabel*, QFocusEvent*);
    using QLabel_FocusOutEvent_Callback = void (*)(QLabel*, QFocusEvent*);
    using QLabel_FocusNextPrevChild_Callback = bool (*)(QLabel*, bool);
    using QLabel_InitStyleOption_Callback = void (*)(const QLabel*, QStyleOptionFrame*);
    using QLabel_DevType_Callback = int (*)();
    using QLabel_SetVisible_Callback = void (*)(QLabel*, bool);
    using QLabel_HasHeightForWidth_Callback = bool (*)();
    using QLabel_PaintEngine_Callback = QPaintEngine* (*)();
    using QLabel_MouseDoubleClickEvent_Callback = void (*)(QLabel*, QMouseEvent*);
    using QLabel_WheelEvent_Callback = void (*)(QLabel*, QWheelEvent*);
    using QLabel_KeyReleaseEvent_Callback = void (*)(QLabel*, QKeyEvent*);
    using QLabel_EnterEvent_Callback = void (*)(QLabel*, QEnterEvent*);
    using QLabel_LeaveEvent_Callback = void (*)(QLabel*, QEvent*);
    using QLabel_MoveEvent_Callback = void (*)(QLabel*, QMoveEvent*);
    using QLabel_ResizeEvent_Callback = void (*)(QLabel*, QResizeEvent*);
    using QLabel_CloseEvent_Callback = void (*)(QLabel*, QCloseEvent*);
    using QLabel_TabletEvent_Callback = void (*)(QLabel*, QTabletEvent*);
    using QLabel_ActionEvent_Callback = void (*)(QLabel*, QActionEvent*);
    using QLabel_DragEnterEvent_Callback = void (*)(QLabel*, QDragEnterEvent*);
    using QLabel_DragMoveEvent_Callback = void (*)(QLabel*, QDragMoveEvent*);
    using QLabel_DragLeaveEvent_Callback = void (*)(QLabel*, QDragLeaveEvent*);
    using QLabel_DropEvent_Callback = void (*)(QLabel*, QDropEvent*);
    using QLabel_ShowEvent_Callback = void (*)(QLabel*, QShowEvent*);
    using QLabel_HideEvent_Callback = void (*)(QLabel*, QHideEvent*);
    using QLabel_NativeEvent_Callback = bool (*)(QLabel*, const QByteArray&, void*, qintptr*);
    using QLabel_Metric_Callback = int (*)(const QLabel*, QPaintDevice::PaintDeviceMetric);
    using QLabel_InitPainter_Callback = void (*)(const QLabel*, QPainter*);
    using QLabel_Redirected_Callback = QPaintDevice* (*)(const QLabel*, QPoint*);
    using QLabel_SharedPainter_Callback = QPainter* (*)();
    using QLabel_InputMethodEvent_Callback = void (*)(QLabel*, QInputMethodEvent*);
    using QLabel_InputMethodQuery_Callback = QVariant (*)(const QLabel*, Qt::InputMethodQuery);
    using QLabel_EventFilter_Callback = bool (*)(QLabel*, QObject*, QEvent*);
    using QLabel_TimerEvent_Callback = void (*)(QLabel*, QTimerEvent*);
    using QLabel_ChildEvent_Callback = void (*)(QLabel*, QChildEvent*);
    using QLabel_CustomEvent_Callback = void (*)(QLabel*, QEvent*);
    using QLabel_ConnectNotify_Callback = void (*)(QLabel*, const QMetaMethod&);
    using QLabel_DisconnectNotify_Callback = void (*)(QLabel*, const QMetaMethod&);
    using QLabel_DrawFrame_Callback = void (*)(QLabel*, QPainter*);
    using QLabel_UpdateMicroFocus_Callback = void (*)();
    using QLabel_Create_Callback = void (*)();
    using QLabel_Destroy_Callback = void (*)();
    using QLabel_FocusNextChild_Callback = bool (*)();
    using QLabel_FocusPreviousChild_Callback = bool (*)();
    using QLabel_Sender_Callback = QObject* (*)();
    using QLabel_SenderSignalIndex_Callback = int (*)();
    using QLabel_Receivers_Callback = int (*)(const QLabel*, const char*);
    using QLabel_IsSignalConnected_Callback = bool (*)(const QLabel*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QLabel_Metacall_Callback qlabel_metacall_callback = nullptr;
    QLabel_SizeHint_Callback qlabel_sizehint_callback = nullptr;
    QLabel_MinimumSizeHint_Callback qlabel_minimumsizehint_callback = nullptr;
    QLabel_HeightForWidth_Callback qlabel_heightforwidth_callback = nullptr;
    QLabel_Event_Callback qlabel_event_callback = nullptr;
    QLabel_KeyPressEvent_Callback qlabel_keypressevent_callback = nullptr;
    QLabel_PaintEvent_Callback qlabel_paintevent_callback = nullptr;
    QLabel_ChangeEvent_Callback qlabel_changeevent_callback = nullptr;
    QLabel_MousePressEvent_Callback qlabel_mousepressevent_callback = nullptr;
    QLabel_MouseMoveEvent_Callback qlabel_mousemoveevent_callback = nullptr;
    QLabel_MouseReleaseEvent_Callback qlabel_mousereleaseevent_callback = nullptr;
    QLabel_ContextMenuEvent_Callback qlabel_contextmenuevent_callback = nullptr;
    QLabel_FocusInEvent_Callback qlabel_focusinevent_callback = nullptr;
    QLabel_FocusOutEvent_Callback qlabel_focusoutevent_callback = nullptr;
    QLabel_FocusNextPrevChild_Callback qlabel_focusnextprevchild_callback = nullptr;
    QLabel_InitStyleOption_Callback qlabel_initstyleoption_callback = nullptr;
    QLabel_DevType_Callback qlabel_devtype_callback = nullptr;
    QLabel_SetVisible_Callback qlabel_setvisible_callback = nullptr;
    QLabel_HasHeightForWidth_Callback qlabel_hasheightforwidth_callback = nullptr;
    QLabel_PaintEngine_Callback qlabel_paintengine_callback = nullptr;
    QLabel_MouseDoubleClickEvent_Callback qlabel_mousedoubleclickevent_callback = nullptr;
    QLabel_WheelEvent_Callback qlabel_wheelevent_callback = nullptr;
    QLabel_KeyReleaseEvent_Callback qlabel_keyreleaseevent_callback = nullptr;
    QLabel_EnterEvent_Callback qlabel_enterevent_callback = nullptr;
    QLabel_LeaveEvent_Callback qlabel_leaveevent_callback = nullptr;
    QLabel_MoveEvent_Callback qlabel_moveevent_callback = nullptr;
    QLabel_ResizeEvent_Callback qlabel_resizeevent_callback = nullptr;
    QLabel_CloseEvent_Callback qlabel_closeevent_callback = nullptr;
    QLabel_TabletEvent_Callback qlabel_tabletevent_callback = nullptr;
    QLabel_ActionEvent_Callback qlabel_actionevent_callback = nullptr;
    QLabel_DragEnterEvent_Callback qlabel_dragenterevent_callback = nullptr;
    QLabel_DragMoveEvent_Callback qlabel_dragmoveevent_callback = nullptr;
    QLabel_DragLeaveEvent_Callback qlabel_dragleaveevent_callback = nullptr;
    QLabel_DropEvent_Callback qlabel_dropevent_callback = nullptr;
    QLabel_ShowEvent_Callback qlabel_showevent_callback = nullptr;
    QLabel_HideEvent_Callback qlabel_hideevent_callback = nullptr;
    QLabel_NativeEvent_Callback qlabel_nativeevent_callback = nullptr;
    QLabel_Metric_Callback qlabel_metric_callback = nullptr;
    QLabel_InitPainter_Callback qlabel_initpainter_callback = nullptr;
    QLabel_Redirected_Callback qlabel_redirected_callback = nullptr;
    QLabel_SharedPainter_Callback qlabel_sharedpainter_callback = nullptr;
    QLabel_InputMethodEvent_Callback qlabel_inputmethodevent_callback = nullptr;
    QLabel_InputMethodQuery_Callback qlabel_inputmethodquery_callback = nullptr;
    QLabel_EventFilter_Callback qlabel_eventfilter_callback = nullptr;
    QLabel_TimerEvent_Callback qlabel_timerevent_callback = nullptr;
    QLabel_ChildEvent_Callback qlabel_childevent_callback = nullptr;
    QLabel_CustomEvent_Callback qlabel_customevent_callback = nullptr;
    QLabel_ConnectNotify_Callback qlabel_connectnotify_callback = nullptr;
    QLabel_DisconnectNotify_Callback qlabel_disconnectnotify_callback = nullptr;
    QLabel_DrawFrame_Callback qlabel_drawframe_callback = nullptr;
    QLabel_UpdateMicroFocus_Callback qlabel_updatemicrofocus_callback = nullptr;
    QLabel_Create_Callback qlabel_create_callback = nullptr;
    QLabel_Destroy_Callback qlabel_destroy_callback = nullptr;
    QLabel_FocusNextChild_Callback qlabel_focusnextchild_callback = nullptr;
    QLabel_FocusPreviousChild_Callback qlabel_focuspreviouschild_callback = nullptr;
    QLabel_Sender_Callback qlabel_sender_callback = nullptr;
    QLabel_SenderSignalIndex_Callback qlabel_sendersignalindex_callback = nullptr;
    QLabel_Receivers_Callback qlabel_receivers_callback = nullptr;
    QLabel_IsSignalConnected_Callback qlabel_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qlabel_metacall_isbase = false;
    mutable bool qlabel_sizehint_isbase = false;
    mutable bool qlabel_minimumsizehint_isbase = false;
    mutable bool qlabel_heightforwidth_isbase = false;
    mutable bool qlabel_event_isbase = false;
    mutable bool qlabel_keypressevent_isbase = false;
    mutable bool qlabel_paintevent_isbase = false;
    mutable bool qlabel_changeevent_isbase = false;
    mutable bool qlabel_mousepressevent_isbase = false;
    mutable bool qlabel_mousemoveevent_isbase = false;
    mutable bool qlabel_mousereleaseevent_isbase = false;
    mutable bool qlabel_contextmenuevent_isbase = false;
    mutable bool qlabel_focusinevent_isbase = false;
    mutable bool qlabel_focusoutevent_isbase = false;
    mutable bool qlabel_focusnextprevchild_isbase = false;
    mutable bool qlabel_initstyleoption_isbase = false;
    mutable bool qlabel_devtype_isbase = false;
    mutable bool qlabel_setvisible_isbase = false;
    mutable bool qlabel_hasheightforwidth_isbase = false;
    mutable bool qlabel_paintengine_isbase = false;
    mutable bool qlabel_mousedoubleclickevent_isbase = false;
    mutable bool qlabel_wheelevent_isbase = false;
    mutable bool qlabel_keyreleaseevent_isbase = false;
    mutable bool qlabel_enterevent_isbase = false;
    mutable bool qlabel_leaveevent_isbase = false;
    mutable bool qlabel_moveevent_isbase = false;
    mutable bool qlabel_resizeevent_isbase = false;
    mutable bool qlabel_closeevent_isbase = false;
    mutable bool qlabel_tabletevent_isbase = false;
    mutable bool qlabel_actionevent_isbase = false;
    mutable bool qlabel_dragenterevent_isbase = false;
    mutable bool qlabel_dragmoveevent_isbase = false;
    mutable bool qlabel_dragleaveevent_isbase = false;
    mutable bool qlabel_dropevent_isbase = false;
    mutable bool qlabel_showevent_isbase = false;
    mutable bool qlabel_hideevent_isbase = false;
    mutable bool qlabel_nativeevent_isbase = false;
    mutable bool qlabel_metric_isbase = false;
    mutable bool qlabel_initpainter_isbase = false;
    mutable bool qlabel_redirected_isbase = false;
    mutable bool qlabel_sharedpainter_isbase = false;
    mutable bool qlabel_inputmethodevent_isbase = false;
    mutable bool qlabel_inputmethodquery_isbase = false;
    mutable bool qlabel_eventfilter_isbase = false;
    mutable bool qlabel_timerevent_isbase = false;
    mutable bool qlabel_childevent_isbase = false;
    mutable bool qlabel_customevent_isbase = false;
    mutable bool qlabel_connectnotify_isbase = false;
    mutable bool qlabel_disconnectnotify_isbase = false;
    mutable bool qlabel_drawframe_isbase = false;
    mutable bool qlabel_updatemicrofocus_isbase = false;
    mutable bool qlabel_create_isbase = false;
    mutable bool qlabel_destroy_isbase = false;
    mutable bool qlabel_focusnextchild_isbase = false;
    mutable bool qlabel_focuspreviouschild_isbase = false;
    mutable bool qlabel_sender_isbase = false;
    mutable bool qlabel_sendersignalindex_isbase = false;
    mutable bool qlabel_receivers_isbase = false;
    mutable bool qlabel_issignalconnected_isbase = false;

  public:
    VirtualQLabel(QWidget* parent) : QLabel(parent){};
    VirtualQLabel() : QLabel(){};
    VirtualQLabel(const QString& text) : QLabel(text){};
    VirtualQLabel(QWidget* parent, Qt::WindowFlags f) : QLabel(parent, f){};
    VirtualQLabel(const QString& text, QWidget* parent) : QLabel(text, parent){};
    VirtualQLabel(const QString& text, QWidget* parent, Qt::WindowFlags f) : QLabel(text, parent, f){};

    ~VirtualQLabel() {
        qlabel_metacall_callback = nullptr;
        qlabel_sizehint_callback = nullptr;
        qlabel_minimumsizehint_callback = nullptr;
        qlabel_heightforwidth_callback = nullptr;
        qlabel_event_callback = nullptr;
        qlabel_keypressevent_callback = nullptr;
        qlabel_paintevent_callback = nullptr;
        qlabel_changeevent_callback = nullptr;
        qlabel_mousepressevent_callback = nullptr;
        qlabel_mousemoveevent_callback = nullptr;
        qlabel_mousereleaseevent_callback = nullptr;
        qlabel_contextmenuevent_callback = nullptr;
        qlabel_focusinevent_callback = nullptr;
        qlabel_focusoutevent_callback = nullptr;
        qlabel_focusnextprevchild_callback = nullptr;
        qlabel_initstyleoption_callback = nullptr;
        qlabel_devtype_callback = nullptr;
        qlabel_setvisible_callback = nullptr;
        qlabel_hasheightforwidth_callback = nullptr;
        qlabel_paintengine_callback = nullptr;
        qlabel_mousedoubleclickevent_callback = nullptr;
        qlabel_wheelevent_callback = nullptr;
        qlabel_keyreleaseevent_callback = nullptr;
        qlabel_enterevent_callback = nullptr;
        qlabel_leaveevent_callback = nullptr;
        qlabel_moveevent_callback = nullptr;
        qlabel_resizeevent_callback = nullptr;
        qlabel_closeevent_callback = nullptr;
        qlabel_tabletevent_callback = nullptr;
        qlabel_actionevent_callback = nullptr;
        qlabel_dragenterevent_callback = nullptr;
        qlabel_dragmoveevent_callback = nullptr;
        qlabel_dragleaveevent_callback = nullptr;
        qlabel_dropevent_callback = nullptr;
        qlabel_showevent_callback = nullptr;
        qlabel_hideevent_callback = nullptr;
        qlabel_nativeevent_callback = nullptr;
        qlabel_metric_callback = nullptr;
        qlabel_initpainter_callback = nullptr;
        qlabel_redirected_callback = nullptr;
        qlabel_sharedpainter_callback = nullptr;
        qlabel_inputmethodevent_callback = nullptr;
        qlabel_inputmethodquery_callback = nullptr;
        qlabel_eventfilter_callback = nullptr;
        qlabel_timerevent_callback = nullptr;
        qlabel_childevent_callback = nullptr;
        qlabel_customevent_callback = nullptr;
        qlabel_connectnotify_callback = nullptr;
        qlabel_disconnectnotify_callback = nullptr;
        qlabel_drawframe_callback = nullptr;
        qlabel_updatemicrofocus_callback = nullptr;
        qlabel_create_callback = nullptr;
        qlabel_destroy_callback = nullptr;
        qlabel_focusnextchild_callback = nullptr;
        qlabel_focuspreviouschild_callback = nullptr;
        qlabel_sender_callback = nullptr;
        qlabel_sendersignalindex_callback = nullptr;
        qlabel_receivers_callback = nullptr;
        qlabel_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQLabel_Metacall_Callback(QLabel_Metacall_Callback cb) { qlabel_metacall_callback = cb; }
    void setQLabel_SizeHint_Callback(QLabel_SizeHint_Callback cb) { qlabel_sizehint_callback = cb; }
    void setQLabel_MinimumSizeHint_Callback(QLabel_MinimumSizeHint_Callback cb) { qlabel_minimumsizehint_callback = cb; }
    void setQLabel_HeightForWidth_Callback(QLabel_HeightForWidth_Callback cb) { qlabel_heightforwidth_callback = cb; }
    void setQLabel_Event_Callback(QLabel_Event_Callback cb) { qlabel_event_callback = cb; }
    void setQLabel_KeyPressEvent_Callback(QLabel_KeyPressEvent_Callback cb) { qlabel_keypressevent_callback = cb; }
    void setQLabel_PaintEvent_Callback(QLabel_PaintEvent_Callback cb) { qlabel_paintevent_callback = cb; }
    void setQLabel_ChangeEvent_Callback(QLabel_ChangeEvent_Callback cb) { qlabel_changeevent_callback = cb; }
    void setQLabel_MousePressEvent_Callback(QLabel_MousePressEvent_Callback cb) { qlabel_mousepressevent_callback = cb; }
    void setQLabel_MouseMoveEvent_Callback(QLabel_MouseMoveEvent_Callback cb) { qlabel_mousemoveevent_callback = cb; }
    void setQLabel_MouseReleaseEvent_Callback(QLabel_MouseReleaseEvent_Callback cb) { qlabel_mousereleaseevent_callback = cb; }
    void setQLabel_ContextMenuEvent_Callback(QLabel_ContextMenuEvent_Callback cb) { qlabel_contextmenuevent_callback = cb; }
    void setQLabel_FocusInEvent_Callback(QLabel_FocusInEvent_Callback cb) { qlabel_focusinevent_callback = cb; }
    void setQLabel_FocusOutEvent_Callback(QLabel_FocusOutEvent_Callback cb) { qlabel_focusoutevent_callback = cb; }
    void setQLabel_FocusNextPrevChild_Callback(QLabel_FocusNextPrevChild_Callback cb) { qlabel_focusnextprevchild_callback = cb; }
    void setQLabel_InitStyleOption_Callback(QLabel_InitStyleOption_Callback cb) { qlabel_initstyleoption_callback = cb; }
    void setQLabel_DevType_Callback(QLabel_DevType_Callback cb) { qlabel_devtype_callback = cb; }
    void setQLabel_SetVisible_Callback(QLabel_SetVisible_Callback cb) { qlabel_setvisible_callback = cb; }
    void setQLabel_HasHeightForWidth_Callback(QLabel_HasHeightForWidth_Callback cb) { qlabel_hasheightforwidth_callback = cb; }
    void setQLabel_PaintEngine_Callback(QLabel_PaintEngine_Callback cb) { qlabel_paintengine_callback = cb; }
    void setQLabel_MouseDoubleClickEvent_Callback(QLabel_MouseDoubleClickEvent_Callback cb) { qlabel_mousedoubleclickevent_callback = cb; }
    void setQLabel_WheelEvent_Callback(QLabel_WheelEvent_Callback cb) { qlabel_wheelevent_callback = cb; }
    void setQLabel_KeyReleaseEvent_Callback(QLabel_KeyReleaseEvent_Callback cb) { qlabel_keyreleaseevent_callback = cb; }
    void setQLabel_EnterEvent_Callback(QLabel_EnterEvent_Callback cb) { qlabel_enterevent_callback = cb; }
    void setQLabel_LeaveEvent_Callback(QLabel_LeaveEvent_Callback cb) { qlabel_leaveevent_callback = cb; }
    void setQLabel_MoveEvent_Callback(QLabel_MoveEvent_Callback cb) { qlabel_moveevent_callback = cb; }
    void setQLabel_ResizeEvent_Callback(QLabel_ResizeEvent_Callback cb) { qlabel_resizeevent_callback = cb; }
    void setQLabel_CloseEvent_Callback(QLabel_CloseEvent_Callback cb) { qlabel_closeevent_callback = cb; }
    void setQLabel_TabletEvent_Callback(QLabel_TabletEvent_Callback cb) { qlabel_tabletevent_callback = cb; }
    void setQLabel_ActionEvent_Callback(QLabel_ActionEvent_Callback cb) { qlabel_actionevent_callback = cb; }
    void setQLabel_DragEnterEvent_Callback(QLabel_DragEnterEvent_Callback cb) { qlabel_dragenterevent_callback = cb; }
    void setQLabel_DragMoveEvent_Callback(QLabel_DragMoveEvent_Callback cb) { qlabel_dragmoveevent_callback = cb; }
    void setQLabel_DragLeaveEvent_Callback(QLabel_DragLeaveEvent_Callback cb) { qlabel_dragleaveevent_callback = cb; }
    void setQLabel_DropEvent_Callback(QLabel_DropEvent_Callback cb) { qlabel_dropevent_callback = cb; }
    void setQLabel_ShowEvent_Callback(QLabel_ShowEvent_Callback cb) { qlabel_showevent_callback = cb; }
    void setQLabel_HideEvent_Callback(QLabel_HideEvent_Callback cb) { qlabel_hideevent_callback = cb; }
    void setQLabel_NativeEvent_Callback(QLabel_NativeEvent_Callback cb) { qlabel_nativeevent_callback = cb; }
    void setQLabel_Metric_Callback(QLabel_Metric_Callback cb) { qlabel_metric_callback = cb; }
    void setQLabel_InitPainter_Callback(QLabel_InitPainter_Callback cb) { qlabel_initpainter_callback = cb; }
    void setQLabel_Redirected_Callback(QLabel_Redirected_Callback cb) { qlabel_redirected_callback = cb; }
    void setQLabel_SharedPainter_Callback(QLabel_SharedPainter_Callback cb) { qlabel_sharedpainter_callback = cb; }
    void setQLabel_InputMethodEvent_Callback(QLabel_InputMethodEvent_Callback cb) { qlabel_inputmethodevent_callback = cb; }
    void setQLabel_InputMethodQuery_Callback(QLabel_InputMethodQuery_Callback cb) { qlabel_inputmethodquery_callback = cb; }
    void setQLabel_EventFilter_Callback(QLabel_EventFilter_Callback cb) { qlabel_eventfilter_callback = cb; }
    void setQLabel_TimerEvent_Callback(QLabel_TimerEvent_Callback cb) { qlabel_timerevent_callback = cb; }
    void setQLabel_ChildEvent_Callback(QLabel_ChildEvent_Callback cb) { qlabel_childevent_callback = cb; }
    void setQLabel_CustomEvent_Callback(QLabel_CustomEvent_Callback cb) { qlabel_customevent_callback = cb; }
    void setQLabel_ConnectNotify_Callback(QLabel_ConnectNotify_Callback cb) { qlabel_connectnotify_callback = cb; }
    void setQLabel_DisconnectNotify_Callback(QLabel_DisconnectNotify_Callback cb) { qlabel_disconnectnotify_callback = cb; }
    void setQLabel_DrawFrame_Callback(QLabel_DrawFrame_Callback cb) { qlabel_drawframe_callback = cb; }
    void setQLabel_UpdateMicroFocus_Callback(QLabel_UpdateMicroFocus_Callback cb) { qlabel_updatemicrofocus_callback = cb; }
    void setQLabel_Create_Callback(QLabel_Create_Callback cb) { qlabel_create_callback = cb; }
    void setQLabel_Destroy_Callback(QLabel_Destroy_Callback cb) { qlabel_destroy_callback = cb; }
    void setQLabel_FocusNextChild_Callback(QLabel_FocusNextChild_Callback cb) { qlabel_focusnextchild_callback = cb; }
    void setQLabel_FocusPreviousChild_Callback(QLabel_FocusPreviousChild_Callback cb) { qlabel_focuspreviouschild_callback = cb; }
    void setQLabel_Sender_Callback(QLabel_Sender_Callback cb) { qlabel_sender_callback = cb; }
    void setQLabel_SenderSignalIndex_Callback(QLabel_SenderSignalIndex_Callback cb) { qlabel_sendersignalindex_callback = cb; }
    void setQLabel_Receivers_Callback(QLabel_Receivers_Callback cb) { qlabel_receivers_callback = cb; }
    void setQLabel_IsSignalConnected_Callback(QLabel_IsSignalConnected_Callback cb) { qlabel_issignalconnected_callback = cb; }

    // Base flag setters
    void setQLabel_Metacall_IsBase(bool value) const { qlabel_metacall_isbase = value; }
    void setQLabel_SizeHint_IsBase(bool value) const { qlabel_sizehint_isbase = value; }
    void setQLabel_MinimumSizeHint_IsBase(bool value) const { qlabel_minimumsizehint_isbase = value; }
    void setQLabel_HeightForWidth_IsBase(bool value) const { qlabel_heightforwidth_isbase = value; }
    void setQLabel_Event_IsBase(bool value) const { qlabel_event_isbase = value; }
    void setQLabel_KeyPressEvent_IsBase(bool value) const { qlabel_keypressevent_isbase = value; }
    void setQLabel_PaintEvent_IsBase(bool value) const { qlabel_paintevent_isbase = value; }
    void setQLabel_ChangeEvent_IsBase(bool value) const { qlabel_changeevent_isbase = value; }
    void setQLabel_MousePressEvent_IsBase(bool value) const { qlabel_mousepressevent_isbase = value; }
    void setQLabel_MouseMoveEvent_IsBase(bool value) const { qlabel_mousemoveevent_isbase = value; }
    void setQLabel_MouseReleaseEvent_IsBase(bool value) const { qlabel_mousereleaseevent_isbase = value; }
    void setQLabel_ContextMenuEvent_IsBase(bool value) const { qlabel_contextmenuevent_isbase = value; }
    void setQLabel_FocusInEvent_IsBase(bool value) const { qlabel_focusinevent_isbase = value; }
    void setQLabel_FocusOutEvent_IsBase(bool value) const { qlabel_focusoutevent_isbase = value; }
    void setQLabel_FocusNextPrevChild_IsBase(bool value) const { qlabel_focusnextprevchild_isbase = value; }
    void setQLabel_InitStyleOption_IsBase(bool value) const { qlabel_initstyleoption_isbase = value; }
    void setQLabel_DevType_IsBase(bool value) const { qlabel_devtype_isbase = value; }
    void setQLabel_SetVisible_IsBase(bool value) const { qlabel_setvisible_isbase = value; }
    void setQLabel_HasHeightForWidth_IsBase(bool value) const { qlabel_hasheightforwidth_isbase = value; }
    void setQLabel_PaintEngine_IsBase(bool value) const { qlabel_paintengine_isbase = value; }
    void setQLabel_MouseDoubleClickEvent_IsBase(bool value) const { qlabel_mousedoubleclickevent_isbase = value; }
    void setQLabel_WheelEvent_IsBase(bool value) const { qlabel_wheelevent_isbase = value; }
    void setQLabel_KeyReleaseEvent_IsBase(bool value) const { qlabel_keyreleaseevent_isbase = value; }
    void setQLabel_EnterEvent_IsBase(bool value) const { qlabel_enterevent_isbase = value; }
    void setQLabel_LeaveEvent_IsBase(bool value) const { qlabel_leaveevent_isbase = value; }
    void setQLabel_MoveEvent_IsBase(bool value) const { qlabel_moveevent_isbase = value; }
    void setQLabel_ResizeEvent_IsBase(bool value) const { qlabel_resizeevent_isbase = value; }
    void setQLabel_CloseEvent_IsBase(bool value) const { qlabel_closeevent_isbase = value; }
    void setQLabel_TabletEvent_IsBase(bool value) const { qlabel_tabletevent_isbase = value; }
    void setQLabel_ActionEvent_IsBase(bool value) const { qlabel_actionevent_isbase = value; }
    void setQLabel_DragEnterEvent_IsBase(bool value) const { qlabel_dragenterevent_isbase = value; }
    void setQLabel_DragMoveEvent_IsBase(bool value) const { qlabel_dragmoveevent_isbase = value; }
    void setQLabel_DragLeaveEvent_IsBase(bool value) const { qlabel_dragleaveevent_isbase = value; }
    void setQLabel_DropEvent_IsBase(bool value) const { qlabel_dropevent_isbase = value; }
    void setQLabel_ShowEvent_IsBase(bool value) const { qlabel_showevent_isbase = value; }
    void setQLabel_HideEvent_IsBase(bool value) const { qlabel_hideevent_isbase = value; }
    void setQLabel_NativeEvent_IsBase(bool value) const { qlabel_nativeevent_isbase = value; }
    void setQLabel_Metric_IsBase(bool value) const { qlabel_metric_isbase = value; }
    void setQLabel_InitPainter_IsBase(bool value) const { qlabel_initpainter_isbase = value; }
    void setQLabel_Redirected_IsBase(bool value) const { qlabel_redirected_isbase = value; }
    void setQLabel_SharedPainter_IsBase(bool value) const { qlabel_sharedpainter_isbase = value; }
    void setQLabel_InputMethodEvent_IsBase(bool value) const { qlabel_inputmethodevent_isbase = value; }
    void setQLabel_InputMethodQuery_IsBase(bool value) const { qlabel_inputmethodquery_isbase = value; }
    void setQLabel_EventFilter_IsBase(bool value) const { qlabel_eventfilter_isbase = value; }
    void setQLabel_TimerEvent_IsBase(bool value) const { qlabel_timerevent_isbase = value; }
    void setQLabel_ChildEvent_IsBase(bool value) const { qlabel_childevent_isbase = value; }
    void setQLabel_CustomEvent_IsBase(bool value) const { qlabel_customevent_isbase = value; }
    void setQLabel_ConnectNotify_IsBase(bool value) const { qlabel_connectnotify_isbase = value; }
    void setQLabel_DisconnectNotify_IsBase(bool value) const { qlabel_disconnectnotify_isbase = value; }
    void setQLabel_DrawFrame_IsBase(bool value) const { qlabel_drawframe_isbase = value; }
    void setQLabel_UpdateMicroFocus_IsBase(bool value) const { qlabel_updatemicrofocus_isbase = value; }
    void setQLabel_Create_IsBase(bool value) const { qlabel_create_isbase = value; }
    void setQLabel_Destroy_IsBase(bool value) const { qlabel_destroy_isbase = value; }
    void setQLabel_FocusNextChild_IsBase(bool value) const { qlabel_focusnextchild_isbase = value; }
    void setQLabel_FocusPreviousChild_IsBase(bool value) const { qlabel_focuspreviouschild_isbase = value; }
    void setQLabel_Sender_IsBase(bool value) const { qlabel_sender_isbase = value; }
    void setQLabel_SenderSignalIndex_IsBase(bool value) const { qlabel_sendersignalindex_isbase = value; }
    void setQLabel_Receivers_IsBase(bool value) const { qlabel_receivers_isbase = value; }
    void setQLabel_IsSignalConnected_IsBase(bool value) const { qlabel_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qlabel_metacall_isbase) {
            qlabel_metacall_isbase = false;
            return QLabel::qt_metacall(param1, param2, param3);
        } else if (qlabel_metacall_callback != nullptr) {
            return qlabel_metacall_callback(this, param1, param2, param3);
        } else {
            return QLabel::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qlabel_sizehint_isbase) {
            qlabel_sizehint_isbase = false;
            return QLabel::sizeHint();
        } else if (qlabel_sizehint_callback != nullptr) {
            return qlabel_sizehint_callback();
        } else {
            return QLabel::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qlabel_minimumsizehint_isbase) {
            qlabel_minimumsizehint_isbase = false;
            return QLabel::minimumSizeHint();
        } else if (qlabel_minimumsizehint_callback != nullptr) {
            return qlabel_minimumsizehint_callback();
        } else {
            return QLabel::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qlabel_heightforwidth_isbase) {
            qlabel_heightforwidth_isbase = false;
            return QLabel::heightForWidth(param1);
        } else if (qlabel_heightforwidth_callback != nullptr) {
            return qlabel_heightforwidth_callback(this, param1);
        } else {
            return QLabel::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qlabel_event_isbase) {
            qlabel_event_isbase = false;
            return QLabel::event(e);
        } else if (qlabel_event_callback != nullptr) {
            return qlabel_event_callback(this, e);
        } else {
            return QLabel::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* ev) override {
        if (qlabel_keypressevent_isbase) {
            qlabel_keypressevent_isbase = false;
            QLabel::keyPressEvent(ev);
        } else if (qlabel_keypressevent_callback != nullptr) {
            qlabel_keypressevent_callback(this, ev);
        } else {
            QLabel::keyPressEvent(ev);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qlabel_paintevent_isbase) {
            qlabel_paintevent_isbase = false;
            QLabel::paintEvent(param1);
        } else if (qlabel_paintevent_callback != nullptr) {
            qlabel_paintevent_callback(this, param1);
        } else {
            QLabel::paintEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qlabel_changeevent_isbase) {
            qlabel_changeevent_isbase = false;
            QLabel::changeEvent(param1);
        } else if (qlabel_changeevent_callback != nullptr) {
            qlabel_changeevent_callback(this, param1);
        } else {
            QLabel::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* ev) override {
        if (qlabel_mousepressevent_isbase) {
            qlabel_mousepressevent_isbase = false;
            QLabel::mousePressEvent(ev);
        } else if (qlabel_mousepressevent_callback != nullptr) {
            qlabel_mousepressevent_callback(this, ev);
        } else {
            QLabel::mousePressEvent(ev);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* ev) override {
        if (qlabel_mousemoveevent_isbase) {
            qlabel_mousemoveevent_isbase = false;
            QLabel::mouseMoveEvent(ev);
        } else if (qlabel_mousemoveevent_callback != nullptr) {
            qlabel_mousemoveevent_callback(this, ev);
        } else {
            QLabel::mouseMoveEvent(ev);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* ev) override {
        if (qlabel_mousereleaseevent_isbase) {
            qlabel_mousereleaseevent_isbase = false;
            QLabel::mouseReleaseEvent(ev);
        } else if (qlabel_mousereleaseevent_callback != nullptr) {
            qlabel_mousereleaseevent_callback(this, ev);
        } else {
            QLabel::mouseReleaseEvent(ev);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* ev) override {
        if (qlabel_contextmenuevent_isbase) {
            qlabel_contextmenuevent_isbase = false;
            QLabel::contextMenuEvent(ev);
        } else if (qlabel_contextmenuevent_callback != nullptr) {
            qlabel_contextmenuevent_callback(this, ev);
        } else {
            QLabel::contextMenuEvent(ev);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* ev) override {
        if (qlabel_focusinevent_isbase) {
            qlabel_focusinevent_isbase = false;
            QLabel::focusInEvent(ev);
        } else if (qlabel_focusinevent_callback != nullptr) {
            qlabel_focusinevent_callback(this, ev);
        } else {
            QLabel::focusInEvent(ev);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* ev) override {
        if (qlabel_focusoutevent_isbase) {
            qlabel_focusoutevent_isbase = false;
            QLabel::focusOutEvent(ev);
        } else if (qlabel_focusoutevent_callback != nullptr) {
            qlabel_focusoutevent_callback(this, ev);
        } else {
            QLabel::focusOutEvent(ev);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qlabel_focusnextprevchild_isbase) {
            qlabel_focusnextprevchild_isbase = false;
            return QLabel::focusNextPrevChild(next);
        } else if (qlabel_focusnextprevchild_callback != nullptr) {
            return qlabel_focusnextprevchild_callback(this, next);
        } else {
            return QLabel::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qlabel_initstyleoption_isbase) {
            qlabel_initstyleoption_isbase = false;
            QLabel::initStyleOption(option);
        } else if (qlabel_initstyleoption_callback != nullptr) {
            qlabel_initstyleoption_callback(this, option);
        } else {
            QLabel::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qlabel_devtype_isbase) {
            qlabel_devtype_isbase = false;
            return QLabel::devType();
        } else if (qlabel_devtype_callback != nullptr) {
            return qlabel_devtype_callback();
        } else {
            return QLabel::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qlabel_setvisible_isbase) {
            qlabel_setvisible_isbase = false;
            QLabel::setVisible(visible);
        } else if (qlabel_setvisible_callback != nullptr) {
            qlabel_setvisible_callback(this, visible);
        } else {
            QLabel::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qlabel_hasheightforwidth_isbase) {
            qlabel_hasheightforwidth_isbase = false;
            return QLabel::hasHeightForWidth();
        } else if (qlabel_hasheightforwidth_callback != nullptr) {
            return qlabel_hasheightforwidth_callback();
        } else {
            return QLabel::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qlabel_paintengine_isbase) {
            qlabel_paintengine_isbase = false;
            return QLabel::paintEngine();
        } else if (qlabel_paintengine_callback != nullptr) {
            return qlabel_paintengine_callback();
        } else {
            return QLabel::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qlabel_mousedoubleclickevent_isbase) {
            qlabel_mousedoubleclickevent_isbase = false;
            QLabel::mouseDoubleClickEvent(event);
        } else if (qlabel_mousedoubleclickevent_callback != nullptr) {
            qlabel_mousedoubleclickevent_callback(this, event);
        } else {
            QLabel::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qlabel_wheelevent_isbase) {
            qlabel_wheelevent_isbase = false;
            QLabel::wheelEvent(event);
        } else if (qlabel_wheelevent_callback != nullptr) {
            qlabel_wheelevent_callback(this, event);
        } else {
            QLabel::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qlabel_keyreleaseevent_isbase) {
            qlabel_keyreleaseevent_isbase = false;
            QLabel::keyReleaseEvent(event);
        } else if (qlabel_keyreleaseevent_callback != nullptr) {
            qlabel_keyreleaseevent_callback(this, event);
        } else {
            QLabel::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qlabel_enterevent_isbase) {
            qlabel_enterevent_isbase = false;
            QLabel::enterEvent(event);
        } else if (qlabel_enterevent_callback != nullptr) {
            qlabel_enterevent_callback(this, event);
        } else {
            QLabel::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qlabel_leaveevent_isbase) {
            qlabel_leaveevent_isbase = false;
            QLabel::leaveEvent(event);
        } else if (qlabel_leaveevent_callback != nullptr) {
            qlabel_leaveevent_callback(this, event);
        } else {
            QLabel::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qlabel_moveevent_isbase) {
            qlabel_moveevent_isbase = false;
            QLabel::moveEvent(event);
        } else if (qlabel_moveevent_callback != nullptr) {
            qlabel_moveevent_callback(this, event);
        } else {
            QLabel::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qlabel_resizeevent_isbase) {
            qlabel_resizeevent_isbase = false;
            QLabel::resizeEvent(event);
        } else if (qlabel_resizeevent_callback != nullptr) {
            qlabel_resizeevent_callback(this, event);
        } else {
            QLabel::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qlabel_closeevent_isbase) {
            qlabel_closeevent_isbase = false;
            QLabel::closeEvent(event);
        } else if (qlabel_closeevent_callback != nullptr) {
            qlabel_closeevent_callback(this, event);
        } else {
            QLabel::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qlabel_tabletevent_isbase) {
            qlabel_tabletevent_isbase = false;
            QLabel::tabletEvent(event);
        } else if (qlabel_tabletevent_callback != nullptr) {
            qlabel_tabletevent_callback(this, event);
        } else {
            QLabel::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qlabel_actionevent_isbase) {
            qlabel_actionevent_isbase = false;
            QLabel::actionEvent(event);
        } else if (qlabel_actionevent_callback != nullptr) {
            qlabel_actionevent_callback(this, event);
        } else {
            QLabel::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qlabel_dragenterevent_isbase) {
            qlabel_dragenterevent_isbase = false;
            QLabel::dragEnterEvent(event);
        } else if (qlabel_dragenterevent_callback != nullptr) {
            qlabel_dragenterevent_callback(this, event);
        } else {
            QLabel::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qlabel_dragmoveevent_isbase) {
            qlabel_dragmoveevent_isbase = false;
            QLabel::dragMoveEvent(event);
        } else if (qlabel_dragmoveevent_callback != nullptr) {
            qlabel_dragmoveevent_callback(this, event);
        } else {
            QLabel::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qlabel_dragleaveevent_isbase) {
            qlabel_dragleaveevent_isbase = false;
            QLabel::dragLeaveEvent(event);
        } else if (qlabel_dragleaveevent_callback != nullptr) {
            qlabel_dragleaveevent_callback(this, event);
        } else {
            QLabel::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qlabel_dropevent_isbase) {
            qlabel_dropevent_isbase = false;
            QLabel::dropEvent(event);
        } else if (qlabel_dropevent_callback != nullptr) {
            qlabel_dropevent_callback(this, event);
        } else {
            QLabel::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qlabel_showevent_isbase) {
            qlabel_showevent_isbase = false;
            QLabel::showEvent(event);
        } else if (qlabel_showevent_callback != nullptr) {
            qlabel_showevent_callback(this, event);
        } else {
            QLabel::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qlabel_hideevent_isbase) {
            qlabel_hideevent_isbase = false;
            QLabel::hideEvent(event);
        } else if (qlabel_hideevent_callback != nullptr) {
            qlabel_hideevent_callback(this, event);
        } else {
            QLabel::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qlabel_nativeevent_isbase) {
            qlabel_nativeevent_isbase = false;
            return QLabel::nativeEvent(eventType, message, result);
        } else if (qlabel_nativeevent_callback != nullptr) {
            return qlabel_nativeevent_callback(this, eventType, message, result);
        } else {
            return QLabel::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qlabel_metric_isbase) {
            qlabel_metric_isbase = false;
            return QLabel::metric(param1);
        } else if (qlabel_metric_callback != nullptr) {
            return qlabel_metric_callback(this, param1);
        } else {
            return QLabel::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qlabel_initpainter_isbase) {
            qlabel_initpainter_isbase = false;
            QLabel::initPainter(painter);
        } else if (qlabel_initpainter_callback != nullptr) {
            qlabel_initpainter_callback(this, painter);
        } else {
            QLabel::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qlabel_redirected_isbase) {
            qlabel_redirected_isbase = false;
            return QLabel::redirected(offset);
        } else if (qlabel_redirected_callback != nullptr) {
            return qlabel_redirected_callback(this, offset);
        } else {
            return QLabel::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qlabel_sharedpainter_isbase) {
            qlabel_sharedpainter_isbase = false;
            return QLabel::sharedPainter();
        } else if (qlabel_sharedpainter_callback != nullptr) {
            return qlabel_sharedpainter_callback();
        } else {
            return QLabel::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qlabel_inputmethodevent_isbase) {
            qlabel_inputmethodevent_isbase = false;
            QLabel::inputMethodEvent(param1);
        } else if (qlabel_inputmethodevent_callback != nullptr) {
            qlabel_inputmethodevent_callback(this, param1);
        } else {
            QLabel::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qlabel_inputmethodquery_isbase) {
            qlabel_inputmethodquery_isbase = false;
            return QLabel::inputMethodQuery(param1);
        } else if (qlabel_inputmethodquery_callback != nullptr) {
            return qlabel_inputmethodquery_callback(this, param1);
        } else {
            return QLabel::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qlabel_eventfilter_isbase) {
            qlabel_eventfilter_isbase = false;
            return QLabel::eventFilter(watched, event);
        } else if (qlabel_eventfilter_callback != nullptr) {
            return qlabel_eventfilter_callback(this, watched, event);
        } else {
            return QLabel::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qlabel_timerevent_isbase) {
            qlabel_timerevent_isbase = false;
            QLabel::timerEvent(event);
        } else if (qlabel_timerevent_callback != nullptr) {
            qlabel_timerevent_callback(this, event);
        } else {
            QLabel::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qlabel_childevent_isbase) {
            qlabel_childevent_isbase = false;
            QLabel::childEvent(event);
        } else if (qlabel_childevent_callback != nullptr) {
            qlabel_childevent_callback(this, event);
        } else {
            QLabel::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qlabel_customevent_isbase) {
            qlabel_customevent_isbase = false;
            QLabel::customEvent(event);
        } else if (qlabel_customevent_callback != nullptr) {
            qlabel_customevent_callback(this, event);
        } else {
            QLabel::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qlabel_connectnotify_isbase) {
            qlabel_connectnotify_isbase = false;
            QLabel::connectNotify(signal);
        } else if (qlabel_connectnotify_callback != nullptr) {
            qlabel_connectnotify_callback(this, signal);
        } else {
            QLabel::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qlabel_disconnectnotify_isbase) {
            qlabel_disconnectnotify_isbase = false;
            QLabel::disconnectNotify(signal);
        } else if (qlabel_disconnectnotify_callback != nullptr) {
            qlabel_disconnectnotify_callback(this, signal);
        } else {
            QLabel::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (qlabel_drawframe_isbase) {
            qlabel_drawframe_isbase = false;
            QLabel::drawFrame(param1);
        } else if (qlabel_drawframe_callback != nullptr) {
            qlabel_drawframe_callback(this, param1);
        } else {
            QLabel::drawFrame(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qlabel_updatemicrofocus_isbase) {
            qlabel_updatemicrofocus_isbase = false;
            QLabel::updateMicroFocus();
        } else if (qlabel_updatemicrofocus_callback != nullptr) {
            qlabel_updatemicrofocus_callback();
        } else {
            QLabel::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qlabel_create_isbase) {
            qlabel_create_isbase = false;
            QLabel::create();
        } else if (qlabel_create_callback != nullptr) {
            qlabel_create_callback();
        } else {
            QLabel::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qlabel_destroy_isbase) {
            qlabel_destroy_isbase = false;
            QLabel::destroy();
        } else if (qlabel_destroy_callback != nullptr) {
            qlabel_destroy_callback();
        } else {
            QLabel::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qlabel_focusnextchild_isbase) {
            qlabel_focusnextchild_isbase = false;
            return QLabel::focusNextChild();
        } else if (qlabel_focusnextchild_callback != nullptr) {
            return qlabel_focusnextchild_callback();
        } else {
            return QLabel::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qlabel_focuspreviouschild_isbase) {
            qlabel_focuspreviouschild_isbase = false;
            return QLabel::focusPreviousChild();
        } else if (qlabel_focuspreviouschild_callback != nullptr) {
            return qlabel_focuspreviouschild_callback();
        } else {
            return QLabel::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qlabel_sender_isbase) {
            qlabel_sender_isbase = false;
            return QLabel::sender();
        } else if (qlabel_sender_callback != nullptr) {
            return qlabel_sender_callback();
        } else {
            return QLabel::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qlabel_sendersignalindex_isbase) {
            qlabel_sendersignalindex_isbase = false;
            return QLabel::senderSignalIndex();
        } else if (qlabel_sendersignalindex_callback != nullptr) {
            return qlabel_sendersignalindex_callback();
        } else {
            return QLabel::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qlabel_receivers_isbase) {
            qlabel_receivers_isbase = false;
            return QLabel::receivers(signal);
        } else if (qlabel_receivers_callback != nullptr) {
            return qlabel_receivers_callback(this, signal);
        } else {
            return QLabel::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qlabel_issignalconnected_isbase) {
            qlabel_issignalconnected_isbase = false;
            return QLabel::isSignalConnected(signal);
        } else if (qlabel_issignalconnected_callback != nullptr) {
            return qlabel_issignalconnected_callback(this, signal);
        } else {
            return QLabel::isSignalConnected(signal);
        }
    }
};

#endif
