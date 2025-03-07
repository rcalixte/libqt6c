#pragma once
#ifndef SRCC_LIBVIRTUALQGROUPBOX_H
#define SRCC_LIBVIRTUALQGROUPBOX_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QGroupBox so that we can call protected methods
class VirtualQGroupBox : public QGroupBox {

  public:
    // Virtual class public types (including callbacks)
    using QGroupBox_Metacall_Callback = int (*)(QGroupBox*, QMetaObject::Call, int, void**);
    using QGroupBox_MinimumSizeHint_Callback = QSize (*)();
    using QGroupBox_Event_Callback = bool (*)(QGroupBox*, QEvent*);
    using QGroupBox_ChildEvent_Callback = void (*)(QGroupBox*, QChildEvent*);
    using QGroupBox_ResizeEvent_Callback = void (*)(QGroupBox*, QResizeEvent*);
    using QGroupBox_PaintEvent_Callback = void (*)(QGroupBox*, QPaintEvent*);
    using QGroupBox_FocusInEvent_Callback = void (*)(QGroupBox*, QFocusEvent*);
    using QGroupBox_ChangeEvent_Callback = void (*)(QGroupBox*, QEvent*);
    using QGroupBox_MousePressEvent_Callback = void (*)(QGroupBox*, QMouseEvent*);
    using QGroupBox_MouseMoveEvent_Callback = void (*)(QGroupBox*, QMouseEvent*);
    using QGroupBox_MouseReleaseEvent_Callback = void (*)(QGroupBox*, QMouseEvent*);
    using QGroupBox_InitStyleOption_Callback = void (*)(const QGroupBox*, QStyleOptionGroupBox*);
    using QGroupBox_DevType_Callback = int (*)();
    using QGroupBox_SetVisible_Callback = void (*)(QGroupBox*, bool);
    using QGroupBox_SizeHint_Callback = QSize (*)();
    using QGroupBox_HeightForWidth_Callback = int (*)(const QGroupBox*, int);
    using QGroupBox_HasHeightForWidth_Callback = bool (*)();
    using QGroupBox_PaintEngine_Callback = QPaintEngine* (*)();
    using QGroupBox_MouseDoubleClickEvent_Callback = void (*)(QGroupBox*, QMouseEvent*);
    using QGroupBox_WheelEvent_Callback = void (*)(QGroupBox*, QWheelEvent*);
    using QGroupBox_KeyPressEvent_Callback = void (*)(QGroupBox*, QKeyEvent*);
    using QGroupBox_KeyReleaseEvent_Callback = void (*)(QGroupBox*, QKeyEvent*);
    using QGroupBox_FocusOutEvent_Callback = void (*)(QGroupBox*, QFocusEvent*);
    using QGroupBox_EnterEvent_Callback = void (*)(QGroupBox*, QEnterEvent*);
    using QGroupBox_LeaveEvent_Callback = void (*)(QGroupBox*, QEvent*);
    using QGroupBox_MoveEvent_Callback = void (*)(QGroupBox*, QMoveEvent*);
    using QGroupBox_CloseEvent_Callback = void (*)(QGroupBox*, QCloseEvent*);
    using QGroupBox_ContextMenuEvent_Callback = void (*)(QGroupBox*, QContextMenuEvent*);
    using QGroupBox_TabletEvent_Callback = void (*)(QGroupBox*, QTabletEvent*);
    using QGroupBox_ActionEvent_Callback = void (*)(QGroupBox*, QActionEvent*);
    using QGroupBox_DragEnterEvent_Callback = void (*)(QGroupBox*, QDragEnterEvent*);
    using QGroupBox_DragMoveEvent_Callback = void (*)(QGroupBox*, QDragMoveEvent*);
    using QGroupBox_DragLeaveEvent_Callback = void (*)(QGroupBox*, QDragLeaveEvent*);
    using QGroupBox_DropEvent_Callback = void (*)(QGroupBox*, QDropEvent*);
    using QGroupBox_ShowEvent_Callback = void (*)(QGroupBox*, QShowEvent*);
    using QGroupBox_HideEvent_Callback = void (*)(QGroupBox*, QHideEvent*);
    using QGroupBox_NativeEvent_Callback = bool (*)(QGroupBox*, const QByteArray&, void*, qintptr*);
    using QGroupBox_Metric_Callback = int (*)(const QGroupBox*, QPaintDevice::PaintDeviceMetric);
    using QGroupBox_InitPainter_Callback = void (*)(const QGroupBox*, QPainter*);
    using QGroupBox_Redirected_Callback = QPaintDevice* (*)(const QGroupBox*, QPoint*);
    using QGroupBox_SharedPainter_Callback = QPainter* (*)();
    using QGroupBox_InputMethodEvent_Callback = void (*)(QGroupBox*, QInputMethodEvent*);
    using QGroupBox_InputMethodQuery_Callback = QVariant (*)(const QGroupBox*, Qt::InputMethodQuery);
    using QGroupBox_FocusNextPrevChild_Callback = bool (*)(QGroupBox*, bool);
    using QGroupBox_EventFilter_Callback = bool (*)(QGroupBox*, QObject*, QEvent*);
    using QGroupBox_TimerEvent_Callback = void (*)(QGroupBox*, QTimerEvent*);
    using QGroupBox_CustomEvent_Callback = void (*)(QGroupBox*, QEvent*);
    using QGroupBox_ConnectNotify_Callback = void (*)(QGroupBox*, const QMetaMethod&);
    using QGroupBox_DisconnectNotify_Callback = void (*)(QGroupBox*, const QMetaMethod&);
    using QGroupBox_UpdateMicroFocus_Callback = void (*)();
    using QGroupBox_Create_Callback = void (*)();
    using QGroupBox_Destroy_Callback = void (*)();
    using QGroupBox_FocusNextChild_Callback = bool (*)();
    using QGroupBox_FocusPreviousChild_Callback = bool (*)();
    using QGroupBox_Sender_Callback = QObject* (*)();
    using QGroupBox_SenderSignalIndex_Callback = int (*)();
    using QGroupBox_Receivers_Callback = int (*)(const QGroupBox*, const char*);
    using QGroupBox_IsSignalConnected_Callback = bool (*)(const QGroupBox*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QGroupBox_Metacall_Callback qgroupbox_metacall_callback = nullptr;
    QGroupBox_MinimumSizeHint_Callback qgroupbox_minimumsizehint_callback = nullptr;
    QGroupBox_Event_Callback qgroupbox_event_callback = nullptr;
    QGroupBox_ChildEvent_Callback qgroupbox_childevent_callback = nullptr;
    QGroupBox_ResizeEvent_Callback qgroupbox_resizeevent_callback = nullptr;
    QGroupBox_PaintEvent_Callback qgroupbox_paintevent_callback = nullptr;
    QGroupBox_FocusInEvent_Callback qgroupbox_focusinevent_callback = nullptr;
    QGroupBox_ChangeEvent_Callback qgroupbox_changeevent_callback = nullptr;
    QGroupBox_MousePressEvent_Callback qgroupbox_mousepressevent_callback = nullptr;
    QGroupBox_MouseMoveEvent_Callback qgroupbox_mousemoveevent_callback = nullptr;
    QGroupBox_MouseReleaseEvent_Callback qgroupbox_mousereleaseevent_callback = nullptr;
    QGroupBox_InitStyleOption_Callback qgroupbox_initstyleoption_callback = nullptr;
    QGroupBox_DevType_Callback qgroupbox_devtype_callback = nullptr;
    QGroupBox_SetVisible_Callback qgroupbox_setvisible_callback = nullptr;
    QGroupBox_SizeHint_Callback qgroupbox_sizehint_callback = nullptr;
    QGroupBox_HeightForWidth_Callback qgroupbox_heightforwidth_callback = nullptr;
    QGroupBox_HasHeightForWidth_Callback qgroupbox_hasheightforwidth_callback = nullptr;
    QGroupBox_PaintEngine_Callback qgroupbox_paintengine_callback = nullptr;
    QGroupBox_MouseDoubleClickEvent_Callback qgroupbox_mousedoubleclickevent_callback = nullptr;
    QGroupBox_WheelEvent_Callback qgroupbox_wheelevent_callback = nullptr;
    QGroupBox_KeyPressEvent_Callback qgroupbox_keypressevent_callback = nullptr;
    QGroupBox_KeyReleaseEvent_Callback qgroupbox_keyreleaseevent_callback = nullptr;
    QGroupBox_FocusOutEvent_Callback qgroupbox_focusoutevent_callback = nullptr;
    QGroupBox_EnterEvent_Callback qgroupbox_enterevent_callback = nullptr;
    QGroupBox_LeaveEvent_Callback qgroupbox_leaveevent_callback = nullptr;
    QGroupBox_MoveEvent_Callback qgroupbox_moveevent_callback = nullptr;
    QGroupBox_CloseEvent_Callback qgroupbox_closeevent_callback = nullptr;
    QGroupBox_ContextMenuEvent_Callback qgroupbox_contextmenuevent_callback = nullptr;
    QGroupBox_TabletEvent_Callback qgroupbox_tabletevent_callback = nullptr;
    QGroupBox_ActionEvent_Callback qgroupbox_actionevent_callback = nullptr;
    QGroupBox_DragEnterEvent_Callback qgroupbox_dragenterevent_callback = nullptr;
    QGroupBox_DragMoveEvent_Callback qgroupbox_dragmoveevent_callback = nullptr;
    QGroupBox_DragLeaveEvent_Callback qgroupbox_dragleaveevent_callback = nullptr;
    QGroupBox_DropEvent_Callback qgroupbox_dropevent_callback = nullptr;
    QGroupBox_ShowEvent_Callback qgroupbox_showevent_callback = nullptr;
    QGroupBox_HideEvent_Callback qgroupbox_hideevent_callback = nullptr;
    QGroupBox_NativeEvent_Callback qgroupbox_nativeevent_callback = nullptr;
    QGroupBox_Metric_Callback qgroupbox_metric_callback = nullptr;
    QGroupBox_InitPainter_Callback qgroupbox_initpainter_callback = nullptr;
    QGroupBox_Redirected_Callback qgroupbox_redirected_callback = nullptr;
    QGroupBox_SharedPainter_Callback qgroupbox_sharedpainter_callback = nullptr;
    QGroupBox_InputMethodEvent_Callback qgroupbox_inputmethodevent_callback = nullptr;
    QGroupBox_InputMethodQuery_Callback qgroupbox_inputmethodquery_callback = nullptr;
    QGroupBox_FocusNextPrevChild_Callback qgroupbox_focusnextprevchild_callback = nullptr;
    QGroupBox_EventFilter_Callback qgroupbox_eventfilter_callback = nullptr;
    QGroupBox_TimerEvent_Callback qgroupbox_timerevent_callback = nullptr;
    QGroupBox_CustomEvent_Callback qgroupbox_customevent_callback = nullptr;
    QGroupBox_ConnectNotify_Callback qgroupbox_connectnotify_callback = nullptr;
    QGroupBox_DisconnectNotify_Callback qgroupbox_disconnectnotify_callback = nullptr;
    QGroupBox_UpdateMicroFocus_Callback qgroupbox_updatemicrofocus_callback = nullptr;
    QGroupBox_Create_Callback qgroupbox_create_callback = nullptr;
    QGroupBox_Destroy_Callback qgroupbox_destroy_callback = nullptr;
    QGroupBox_FocusNextChild_Callback qgroupbox_focusnextchild_callback = nullptr;
    QGroupBox_FocusPreviousChild_Callback qgroupbox_focuspreviouschild_callback = nullptr;
    QGroupBox_Sender_Callback qgroupbox_sender_callback = nullptr;
    QGroupBox_SenderSignalIndex_Callback qgroupbox_sendersignalindex_callback = nullptr;
    QGroupBox_Receivers_Callback qgroupbox_receivers_callback = nullptr;
    QGroupBox_IsSignalConnected_Callback qgroupbox_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qgroupbox_metacall_isbase = false;
    mutable bool qgroupbox_minimumsizehint_isbase = false;
    mutable bool qgroupbox_event_isbase = false;
    mutable bool qgroupbox_childevent_isbase = false;
    mutable bool qgroupbox_resizeevent_isbase = false;
    mutable bool qgroupbox_paintevent_isbase = false;
    mutable bool qgroupbox_focusinevent_isbase = false;
    mutable bool qgroupbox_changeevent_isbase = false;
    mutable bool qgroupbox_mousepressevent_isbase = false;
    mutable bool qgroupbox_mousemoveevent_isbase = false;
    mutable bool qgroupbox_mousereleaseevent_isbase = false;
    mutable bool qgroupbox_initstyleoption_isbase = false;
    mutable bool qgroupbox_devtype_isbase = false;
    mutable bool qgroupbox_setvisible_isbase = false;
    mutable bool qgroupbox_sizehint_isbase = false;
    mutable bool qgroupbox_heightforwidth_isbase = false;
    mutable bool qgroupbox_hasheightforwidth_isbase = false;
    mutable bool qgroupbox_paintengine_isbase = false;
    mutable bool qgroupbox_mousedoubleclickevent_isbase = false;
    mutable bool qgroupbox_wheelevent_isbase = false;
    mutable bool qgroupbox_keypressevent_isbase = false;
    mutable bool qgroupbox_keyreleaseevent_isbase = false;
    mutable bool qgroupbox_focusoutevent_isbase = false;
    mutable bool qgroupbox_enterevent_isbase = false;
    mutable bool qgroupbox_leaveevent_isbase = false;
    mutable bool qgroupbox_moveevent_isbase = false;
    mutable bool qgroupbox_closeevent_isbase = false;
    mutable bool qgroupbox_contextmenuevent_isbase = false;
    mutable bool qgroupbox_tabletevent_isbase = false;
    mutable bool qgroupbox_actionevent_isbase = false;
    mutable bool qgroupbox_dragenterevent_isbase = false;
    mutable bool qgroupbox_dragmoveevent_isbase = false;
    mutable bool qgroupbox_dragleaveevent_isbase = false;
    mutable bool qgroupbox_dropevent_isbase = false;
    mutable bool qgroupbox_showevent_isbase = false;
    mutable bool qgroupbox_hideevent_isbase = false;
    mutable bool qgroupbox_nativeevent_isbase = false;
    mutable bool qgroupbox_metric_isbase = false;
    mutable bool qgroupbox_initpainter_isbase = false;
    mutable bool qgroupbox_redirected_isbase = false;
    mutable bool qgroupbox_sharedpainter_isbase = false;
    mutable bool qgroupbox_inputmethodevent_isbase = false;
    mutable bool qgroupbox_inputmethodquery_isbase = false;
    mutable bool qgroupbox_focusnextprevchild_isbase = false;
    mutable bool qgroupbox_eventfilter_isbase = false;
    mutable bool qgroupbox_timerevent_isbase = false;
    mutable bool qgroupbox_customevent_isbase = false;
    mutable bool qgroupbox_connectnotify_isbase = false;
    mutable bool qgroupbox_disconnectnotify_isbase = false;
    mutable bool qgroupbox_updatemicrofocus_isbase = false;
    mutable bool qgroupbox_create_isbase = false;
    mutable bool qgroupbox_destroy_isbase = false;
    mutable bool qgroupbox_focusnextchild_isbase = false;
    mutable bool qgroupbox_focuspreviouschild_isbase = false;
    mutable bool qgroupbox_sender_isbase = false;
    mutable bool qgroupbox_sendersignalindex_isbase = false;
    mutable bool qgroupbox_receivers_isbase = false;
    mutable bool qgroupbox_issignalconnected_isbase = false;

  public:
    VirtualQGroupBox(QWidget* parent) : QGroupBox(parent){};
    VirtualQGroupBox() : QGroupBox(){};
    VirtualQGroupBox(const QString& title) : QGroupBox(title){};
    VirtualQGroupBox(const QString& title, QWidget* parent) : QGroupBox(title, parent){};

    ~VirtualQGroupBox() {
        qgroupbox_metacall_callback = nullptr;
        qgroupbox_minimumsizehint_callback = nullptr;
        qgroupbox_event_callback = nullptr;
        qgroupbox_childevent_callback = nullptr;
        qgroupbox_resizeevent_callback = nullptr;
        qgroupbox_paintevent_callback = nullptr;
        qgroupbox_focusinevent_callback = nullptr;
        qgroupbox_changeevent_callback = nullptr;
        qgroupbox_mousepressevent_callback = nullptr;
        qgroupbox_mousemoveevent_callback = nullptr;
        qgroupbox_mousereleaseevent_callback = nullptr;
        qgroupbox_initstyleoption_callback = nullptr;
        qgroupbox_devtype_callback = nullptr;
        qgroupbox_setvisible_callback = nullptr;
        qgroupbox_sizehint_callback = nullptr;
        qgroupbox_heightforwidth_callback = nullptr;
        qgroupbox_hasheightforwidth_callback = nullptr;
        qgroupbox_paintengine_callback = nullptr;
        qgroupbox_mousedoubleclickevent_callback = nullptr;
        qgroupbox_wheelevent_callback = nullptr;
        qgroupbox_keypressevent_callback = nullptr;
        qgroupbox_keyreleaseevent_callback = nullptr;
        qgroupbox_focusoutevent_callback = nullptr;
        qgroupbox_enterevent_callback = nullptr;
        qgroupbox_leaveevent_callback = nullptr;
        qgroupbox_moveevent_callback = nullptr;
        qgroupbox_closeevent_callback = nullptr;
        qgroupbox_contextmenuevent_callback = nullptr;
        qgroupbox_tabletevent_callback = nullptr;
        qgroupbox_actionevent_callback = nullptr;
        qgroupbox_dragenterevent_callback = nullptr;
        qgroupbox_dragmoveevent_callback = nullptr;
        qgroupbox_dragleaveevent_callback = nullptr;
        qgroupbox_dropevent_callback = nullptr;
        qgroupbox_showevent_callback = nullptr;
        qgroupbox_hideevent_callback = nullptr;
        qgroupbox_nativeevent_callback = nullptr;
        qgroupbox_metric_callback = nullptr;
        qgroupbox_initpainter_callback = nullptr;
        qgroupbox_redirected_callback = nullptr;
        qgroupbox_sharedpainter_callback = nullptr;
        qgroupbox_inputmethodevent_callback = nullptr;
        qgroupbox_inputmethodquery_callback = nullptr;
        qgroupbox_focusnextprevchild_callback = nullptr;
        qgroupbox_eventfilter_callback = nullptr;
        qgroupbox_timerevent_callback = nullptr;
        qgroupbox_customevent_callback = nullptr;
        qgroupbox_connectnotify_callback = nullptr;
        qgroupbox_disconnectnotify_callback = nullptr;
        qgroupbox_updatemicrofocus_callback = nullptr;
        qgroupbox_create_callback = nullptr;
        qgroupbox_destroy_callback = nullptr;
        qgroupbox_focusnextchild_callback = nullptr;
        qgroupbox_focuspreviouschild_callback = nullptr;
        qgroupbox_sender_callback = nullptr;
        qgroupbox_sendersignalindex_callback = nullptr;
        qgroupbox_receivers_callback = nullptr;
        qgroupbox_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQGroupBox_Metacall_Callback(QGroupBox_Metacall_Callback cb) { qgroupbox_metacall_callback = cb; }
    void setQGroupBox_MinimumSizeHint_Callback(QGroupBox_MinimumSizeHint_Callback cb) { qgroupbox_minimumsizehint_callback = cb; }
    void setQGroupBox_Event_Callback(QGroupBox_Event_Callback cb) { qgroupbox_event_callback = cb; }
    void setQGroupBox_ChildEvent_Callback(QGroupBox_ChildEvent_Callback cb) { qgroupbox_childevent_callback = cb; }
    void setQGroupBox_ResizeEvent_Callback(QGroupBox_ResizeEvent_Callback cb) { qgroupbox_resizeevent_callback = cb; }
    void setQGroupBox_PaintEvent_Callback(QGroupBox_PaintEvent_Callback cb) { qgroupbox_paintevent_callback = cb; }
    void setQGroupBox_FocusInEvent_Callback(QGroupBox_FocusInEvent_Callback cb) { qgroupbox_focusinevent_callback = cb; }
    void setQGroupBox_ChangeEvent_Callback(QGroupBox_ChangeEvent_Callback cb) { qgroupbox_changeevent_callback = cb; }
    void setQGroupBox_MousePressEvent_Callback(QGroupBox_MousePressEvent_Callback cb) { qgroupbox_mousepressevent_callback = cb; }
    void setQGroupBox_MouseMoveEvent_Callback(QGroupBox_MouseMoveEvent_Callback cb) { qgroupbox_mousemoveevent_callback = cb; }
    void setQGroupBox_MouseReleaseEvent_Callback(QGroupBox_MouseReleaseEvent_Callback cb) { qgroupbox_mousereleaseevent_callback = cb; }
    void setQGroupBox_InitStyleOption_Callback(QGroupBox_InitStyleOption_Callback cb) { qgroupbox_initstyleoption_callback = cb; }
    void setQGroupBox_DevType_Callback(QGroupBox_DevType_Callback cb) { qgroupbox_devtype_callback = cb; }
    void setQGroupBox_SetVisible_Callback(QGroupBox_SetVisible_Callback cb) { qgroupbox_setvisible_callback = cb; }
    void setQGroupBox_SizeHint_Callback(QGroupBox_SizeHint_Callback cb) { qgroupbox_sizehint_callback = cb; }
    void setQGroupBox_HeightForWidth_Callback(QGroupBox_HeightForWidth_Callback cb) { qgroupbox_heightforwidth_callback = cb; }
    void setQGroupBox_HasHeightForWidth_Callback(QGroupBox_HasHeightForWidth_Callback cb) { qgroupbox_hasheightforwidth_callback = cb; }
    void setQGroupBox_PaintEngine_Callback(QGroupBox_PaintEngine_Callback cb) { qgroupbox_paintengine_callback = cb; }
    void setQGroupBox_MouseDoubleClickEvent_Callback(QGroupBox_MouseDoubleClickEvent_Callback cb) { qgroupbox_mousedoubleclickevent_callback = cb; }
    void setQGroupBox_WheelEvent_Callback(QGroupBox_WheelEvent_Callback cb) { qgroupbox_wheelevent_callback = cb; }
    void setQGroupBox_KeyPressEvent_Callback(QGroupBox_KeyPressEvent_Callback cb) { qgroupbox_keypressevent_callback = cb; }
    void setQGroupBox_KeyReleaseEvent_Callback(QGroupBox_KeyReleaseEvent_Callback cb) { qgroupbox_keyreleaseevent_callback = cb; }
    void setQGroupBox_FocusOutEvent_Callback(QGroupBox_FocusOutEvent_Callback cb) { qgroupbox_focusoutevent_callback = cb; }
    void setQGroupBox_EnterEvent_Callback(QGroupBox_EnterEvent_Callback cb) { qgroupbox_enterevent_callback = cb; }
    void setQGroupBox_LeaveEvent_Callback(QGroupBox_LeaveEvent_Callback cb) { qgroupbox_leaveevent_callback = cb; }
    void setQGroupBox_MoveEvent_Callback(QGroupBox_MoveEvent_Callback cb) { qgroupbox_moveevent_callback = cb; }
    void setQGroupBox_CloseEvent_Callback(QGroupBox_CloseEvent_Callback cb) { qgroupbox_closeevent_callback = cb; }
    void setQGroupBox_ContextMenuEvent_Callback(QGroupBox_ContextMenuEvent_Callback cb) { qgroupbox_contextmenuevent_callback = cb; }
    void setQGroupBox_TabletEvent_Callback(QGroupBox_TabletEvent_Callback cb) { qgroupbox_tabletevent_callback = cb; }
    void setQGroupBox_ActionEvent_Callback(QGroupBox_ActionEvent_Callback cb) { qgroupbox_actionevent_callback = cb; }
    void setQGroupBox_DragEnterEvent_Callback(QGroupBox_DragEnterEvent_Callback cb) { qgroupbox_dragenterevent_callback = cb; }
    void setQGroupBox_DragMoveEvent_Callback(QGroupBox_DragMoveEvent_Callback cb) { qgroupbox_dragmoveevent_callback = cb; }
    void setQGroupBox_DragLeaveEvent_Callback(QGroupBox_DragLeaveEvent_Callback cb) { qgroupbox_dragleaveevent_callback = cb; }
    void setQGroupBox_DropEvent_Callback(QGroupBox_DropEvent_Callback cb) { qgroupbox_dropevent_callback = cb; }
    void setQGroupBox_ShowEvent_Callback(QGroupBox_ShowEvent_Callback cb) { qgroupbox_showevent_callback = cb; }
    void setQGroupBox_HideEvent_Callback(QGroupBox_HideEvent_Callback cb) { qgroupbox_hideevent_callback = cb; }
    void setQGroupBox_NativeEvent_Callback(QGroupBox_NativeEvent_Callback cb) { qgroupbox_nativeevent_callback = cb; }
    void setQGroupBox_Metric_Callback(QGroupBox_Metric_Callback cb) { qgroupbox_metric_callback = cb; }
    void setQGroupBox_InitPainter_Callback(QGroupBox_InitPainter_Callback cb) { qgroupbox_initpainter_callback = cb; }
    void setQGroupBox_Redirected_Callback(QGroupBox_Redirected_Callback cb) { qgroupbox_redirected_callback = cb; }
    void setQGroupBox_SharedPainter_Callback(QGroupBox_SharedPainter_Callback cb) { qgroupbox_sharedpainter_callback = cb; }
    void setQGroupBox_InputMethodEvent_Callback(QGroupBox_InputMethodEvent_Callback cb) { qgroupbox_inputmethodevent_callback = cb; }
    void setQGroupBox_InputMethodQuery_Callback(QGroupBox_InputMethodQuery_Callback cb) { qgroupbox_inputmethodquery_callback = cb; }
    void setQGroupBox_FocusNextPrevChild_Callback(QGroupBox_FocusNextPrevChild_Callback cb) { qgroupbox_focusnextprevchild_callback = cb; }
    void setQGroupBox_EventFilter_Callback(QGroupBox_EventFilter_Callback cb) { qgroupbox_eventfilter_callback = cb; }
    void setQGroupBox_TimerEvent_Callback(QGroupBox_TimerEvent_Callback cb) { qgroupbox_timerevent_callback = cb; }
    void setQGroupBox_CustomEvent_Callback(QGroupBox_CustomEvent_Callback cb) { qgroupbox_customevent_callback = cb; }
    void setQGroupBox_ConnectNotify_Callback(QGroupBox_ConnectNotify_Callback cb) { qgroupbox_connectnotify_callback = cb; }
    void setQGroupBox_DisconnectNotify_Callback(QGroupBox_DisconnectNotify_Callback cb) { qgroupbox_disconnectnotify_callback = cb; }
    void setQGroupBox_UpdateMicroFocus_Callback(QGroupBox_UpdateMicroFocus_Callback cb) { qgroupbox_updatemicrofocus_callback = cb; }
    void setQGroupBox_Create_Callback(QGroupBox_Create_Callback cb) { qgroupbox_create_callback = cb; }
    void setQGroupBox_Destroy_Callback(QGroupBox_Destroy_Callback cb) { qgroupbox_destroy_callback = cb; }
    void setQGroupBox_FocusNextChild_Callback(QGroupBox_FocusNextChild_Callback cb) { qgroupbox_focusnextchild_callback = cb; }
    void setQGroupBox_FocusPreviousChild_Callback(QGroupBox_FocusPreviousChild_Callback cb) { qgroupbox_focuspreviouschild_callback = cb; }
    void setQGroupBox_Sender_Callback(QGroupBox_Sender_Callback cb) { qgroupbox_sender_callback = cb; }
    void setQGroupBox_SenderSignalIndex_Callback(QGroupBox_SenderSignalIndex_Callback cb) { qgroupbox_sendersignalindex_callback = cb; }
    void setQGroupBox_Receivers_Callback(QGroupBox_Receivers_Callback cb) { qgroupbox_receivers_callback = cb; }
    void setQGroupBox_IsSignalConnected_Callback(QGroupBox_IsSignalConnected_Callback cb) { qgroupbox_issignalconnected_callback = cb; }

    // Base flag setters
    void setQGroupBox_Metacall_IsBase(bool value) const { qgroupbox_metacall_isbase = value; }
    void setQGroupBox_MinimumSizeHint_IsBase(bool value) const { qgroupbox_minimumsizehint_isbase = value; }
    void setQGroupBox_Event_IsBase(bool value) const { qgroupbox_event_isbase = value; }
    void setQGroupBox_ChildEvent_IsBase(bool value) const { qgroupbox_childevent_isbase = value; }
    void setQGroupBox_ResizeEvent_IsBase(bool value) const { qgroupbox_resizeevent_isbase = value; }
    void setQGroupBox_PaintEvent_IsBase(bool value) const { qgroupbox_paintevent_isbase = value; }
    void setQGroupBox_FocusInEvent_IsBase(bool value) const { qgroupbox_focusinevent_isbase = value; }
    void setQGroupBox_ChangeEvent_IsBase(bool value) const { qgroupbox_changeevent_isbase = value; }
    void setQGroupBox_MousePressEvent_IsBase(bool value) const { qgroupbox_mousepressevent_isbase = value; }
    void setQGroupBox_MouseMoveEvent_IsBase(bool value) const { qgroupbox_mousemoveevent_isbase = value; }
    void setQGroupBox_MouseReleaseEvent_IsBase(bool value) const { qgroupbox_mousereleaseevent_isbase = value; }
    void setQGroupBox_InitStyleOption_IsBase(bool value) const { qgroupbox_initstyleoption_isbase = value; }
    void setQGroupBox_DevType_IsBase(bool value) const { qgroupbox_devtype_isbase = value; }
    void setQGroupBox_SetVisible_IsBase(bool value) const { qgroupbox_setvisible_isbase = value; }
    void setQGroupBox_SizeHint_IsBase(bool value) const { qgroupbox_sizehint_isbase = value; }
    void setQGroupBox_HeightForWidth_IsBase(bool value) const { qgroupbox_heightforwidth_isbase = value; }
    void setQGroupBox_HasHeightForWidth_IsBase(bool value) const { qgroupbox_hasheightforwidth_isbase = value; }
    void setQGroupBox_PaintEngine_IsBase(bool value) const { qgroupbox_paintengine_isbase = value; }
    void setQGroupBox_MouseDoubleClickEvent_IsBase(bool value) const { qgroupbox_mousedoubleclickevent_isbase = value; }
    void setQGroupBox_WheelEvent_IsBase(bool value) const { qgroupbox_wheelevent_isbase = value; }
    void setQGroupBox_KeyPressEvent_IsBase(bool value) const { qgroupbox_keypressevent_isbase = value; }
    void setQGroupBox_KeyReleaseEvent_IsBase(bool value) const { qgroupbox_keyreleaseevent_isbase = value; }
    void setQGroupBox_FocusOutEvent_IsBase(bool value) const { qgroupbox_focusoutevent_isbase = value; }
    void setQGroupBox_EnterEvent_IsBase(bool value) const { qgroupbox_enterevent_isbase = value; }
    void setQGroupBox_LeaveEvent_IsBase(bool value) const { qgroupbox_leaveevent_isbase = value; }
    void setQGroupBox_MoveEvent_IsBase(bool value) const { qgroupbox_moveevent_isbase = value; }
    void setQGroupBox_CloseEvent_IsBase(bool value) const { qgroupbox_closeevent_isbase = value; }
    void setQGroupBox_ContextMenuEvent_IsBase(bool value) const { qgroupbox_contextmenuevent_isbase = value; }
    void setQGroupBox_TabletEvent_IsBase(bool value) const { qgroupbox_tabletevent_isbase = value; }
    void setQGroupBox_ActionEvent_IsBase(bool value) const { qgroupbox_actionevent_isbase = value; }
    void setQGroupBox_DragEnterEvent_IsBase(bool value) const { qgroupbox_dragenterevent_isbase = value; }
    void setQGroupBox_DragMoveEvent_IsBase(bool value) const { qgroupbox_dragmoveevent_isbase = value; }
    void setQGroupBox_DragLeaveEvent_IsBase(bool value) const { qgroupbox_dragleaveevent_isbase = value; }
    void setQGroupBox_DropEvent_IsBase(bool value) const { qgroupbox_dropevent_isbase = value; }
    void setQGroupBox_ShowEvent_IsBase(bool value) const { qgroupbox_showevent_isbase = value; }
    void setQGroupBox_HideEvent_IsBase(bool value) const { qgroupbox_hideevent_isbase = value; }
    void setQGroupBox_NativeEvent_IsBase(bool value) const { qgroupbox_nativeevent_isbase = value; }
    void setQGroupBox_Metric_IsBase(bool value) const { qgroupbox_metric_isbase = value; }
    void setQGroupBox_InitPainter_IsBase(bool value) const { qgroupbox_initpainter_isbase = value; }
    void setQGroupBox_Redirected_IsBase(bool value) const { qgroupbox_redirected_isbase = value; }
    void setQGroupBox_SharedPainter_IsBase(bool value) const { qgroupbox_sharedpainter_isbase = value; }
    void setQGroupBox_InputMethodEvent_IsBase(bool value) const { qgroupbox_inputmethodevent_isbase = value; }
    void setQGroupBox_InputMethodQuery_IsBase(bool value) const { qgroupbox_inputmethodquery_isbase = value; }
    void setQGroupBox_FocusNextPrevChild_IsBase(bool value) const { qgroupbox_focusnextprevchild_isbase = value; }
    void setQGroupBox_EventFilter_IsBase(bool value) const { qgroupbox_eventfilter_isbase = value; }
    void setQGroupBox_TimerEvent_IsBase(bool value) const { qgroupbox_timerevent_isbase = value; }
    void setQGroupBox_CustomEvent_IsBase(bool value) const { qgroupbox_customevent_isbase = value; }
    void setQGroupBox_ConnectNotify_IsBase(bool value) const { qgroupbox_connectnotify_isbase = value; }
    void setQGroupBox_DisconnectNotify_IsBase(bool value) const { qgroupbox_disconnectnotify_isbase = value; }
    void setQGroupBox_UpdateMicroFocus_IsBase(bool value) const { qgroupbox_updatemicrofocus_isbase = value; }
    void setQGroupBox_Create_IsBase(bool value) const { qgroupbox_create_isbase = value; }
    void setQGroupBox_Destroy_IsBase(bool value) const { qgroupbox_destroy_isbase = value; }
    void setQGroupBox_FocusNextChild_IsBase(bool value) const { qgroupbox_focusnextchild_isbase = value; }
    void setQGroupBox_FocusPreviousChild_IsBase(bool value) const { qgroupbox_focuspreviouschild_isbase = value; }
    void setQGroupBox_Sender_IsBase(bool value) const { qgroupbox_sender_isbase = value; }
    void setQGroupBox_SenderSignalIndex_IsBase(bool value) const { qgroupbox_sendersignalindex_isbase = value; }
    void setQGroupBox_Receivers_IsBase(bool value) const { qgroupbox_receivers_isbase = value; }
    void setQGroupBox_IsSignalConnected_IsBase(bool value) const { qgroupbox_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgroupbox_metacall_isbase) {
            qgroupbox_metacall_isbase = false;
            return QGroupBox::qt_metacall(param1, param2, param3);
        } else if (qgroupbox_metacall_callback != nullptr) {
            return qgroupbox_metacall_callback(this, param1, param2, param3);
        } else {
            return QGroupBox::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qgroupbox_minimumsizehint_isbase) {
            qgroupbox_minimumsizehint_isbase = false;
            return QGroupBox::minimumSizeHint();
        } else if (qgroupbox_minimumsizehint_callback != nullptr) {
            return qgroupbox_minimumsizehint_callback();
        } else {
            return QGroupBox::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgroupbox_event_isbase) {
            qgroupbox_event_isbase = false;
            return QGroupBox::event(event);
        } else if (qgroupbox_event_callback != nullptr) {
            return qgroupbox_event_callback(this, event);
        } else {
            return QGroupBox::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgroupbox_childevent_isbase) {
            qgroupbox_childevent_isbase = false;
            QGroupBox::childEvent(event);
        } else if (qgroupbox_childevent_callback != nullptr) {
            qgroupbox_childevent_callback(this, event);
        } else {
            QGroupBox::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qgroupbox_resizeevent_isbase) {
            qgroupbox_resizeevent_isbase = false;
            QGroupBox::resizeEvent(event);
        } else if (qgroupbox_resizeevent_callback != nullptr) {
            qgroupbox_resizeevent_callback(this, event);
        } else {
            QGroupBox::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qgroupbox_paintevent_isbase) {
            qgroupbox_paintevent_isbase = false;
            QGroupBox::paintEvent(event);
        } else if (qgroupbox_paintevent_callback != nullptr) {
            qgroupbox_paintevent_callback(this, event);
        } else {
            QGroupBox::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qgroupbox_focusinevent_isbase) {
            qgroupbox_focusinevent_isbase = false;
            QGroupBox::focusInEvent(event);
        } else if (qgroupbox_focusinevent_callback != nullptr) {
            qgroupbox_focusinevent_callback(this, event);
        } else {
            QGroupBox::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (qgroupbox_changeevent_isbase) {
            qgroupbox_changeevent_isbase = false;
            QGroupBox::changeEvent(event);
        } else if (qgroupbox_changeevent_callback != nullptr) {
            qgroupbox_changeevent_callback(this, event);
        } else {
            QGroupBox::changeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qgroupbox_mousepressevent_isbase) {
            qgroupbox_mousepressevent_isbase = false;
            QGroupBox::mousePressEvent(event);
        } else if (qgroupbox_mousepressevent_callback != nullptr) {
            qgroupbox_mousepressevent_callback(this, event);
        } else {
            QGroupBox::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qgroupbox_mousemoveevent_isbase) {
            qgroupbox_mousemoveevent_isbase = false;
            QGroupBox::mouseMoveEvent(event);
        } else if (qgroupbox_mousemoveevent_callback != nullptr) {
            qgroupbox_mousemoveevent_callback(this, event);
        } else {
            QGroupBox::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qgroupbox_mousereleaseevent_isbase) {
            qgroupbox_mousereleaseevent_isbase = false;
            QGroupBox::mouseReleaseEvent(event);
        } else if (qgroupbox_mousereleaseevent_callback != nullptr) {
            qgroupbox_mousereleaseevent_callback(this, event);
        } else {
            QGroupBox::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionGroupBox* option) const override {
        if (qgroupbox_initstyleoption_isbase) {
            qgroupbox_initstyleoption_isbase = false;
            QGroupBox::initStyleOption(option);
        } else if (qgroupbox_initstyleoption_callback != nullptr) {
            qgroupbox_initstyleoption_callback(this, option);
        } else {
            QGroupBox::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qgroupbox_devtype_isbase) {
            qgroupbox_devtype_isbase = false;
            return QGroupBox::devType();
        } else if (qgroupbox_devtype_callback != nullptr) {
            return qgroupbox_devtype_callback();
        } else {
            return QGroupBox::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qgroupbox_setvisible_isbase) {
            qgroupbox_setvisible_isbase = false;
            QGroupBox::setVisible(visible);
        } else if (qgroupbox_setvisible_callback != nullptr) {
            qgroupbox_setvisible_callback(this, visible);
        } else {
            QGroupBox::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qgroupbox_sizehint_isbase) {
            qgroupbox_sizehint_isbase = false;
            return QGroupBox::sizeHint();
        } else if (qgroupbox_sizehint_callback != nullptr) {
            return qgroupbox_sizehint_callback();
        } else {
            return QGroupBox::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qgroupbox_heightforwidth_isbase) {
            qgroupbox_heightforwidth_isbase = false;
            return QGroupBox::heightForWidth(param1);
        } else if (qgroupbox_heightforwidth_callback != nullptr) {
            return qgroupbox_heightforwidth_callback(this, param1);
        } else {
            return QGroupBox::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qgroupbox_hasheightforwidth_isbase) {
            qgroupbox_hasheightforwidth_isbase = false;
            return QGroupBox::hasHeightForWidth();
        } else if (qgroupbox_hasheightforwidth_callback != nullptr) {
            return qgroupbox_hasheightforwidth_callback();
        } else {
            return QGroupBox::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qgroupbox_paintengine_isbase) {
            qgroupbox_paintengine_isbase = false;
            return QGroupBox::paintEngine();
        } else if (qgroupbox_paintengine_callback != nullptr) {
            return qgroupbox_paintengine_callback();
        } else {
            return QGroupBox::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qgroupbox_mousedoubleclickevent_isbase) {
            qgroupbox_mousedoubleclickevent_isbase = false;
            QGroupBox::mouseDoubleClickEvent(event);
        } else if (qgroupbox_mousedoubleclickevent_callback != nullptr) {
            qgroupbox_mousedoubleclickevent_callback(this, event);
        } else {
            QGroupBox::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qgroupbox_wheelevent_isbase) {
            qgroupbox_wheelevent_isbase = false;
            QGroupBox::wheelEvent(event);
        } else if (qgroupbox_wheelevent_callback != nullptr) {
            qgroupbox_wheelevent_callback(this, event);
        } else {
            QGroupBox::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qgroupbox_keypressevent_isbase) {
            qgroupbox_keypressevent_isbase = false;
            QGroupBox::keyPressEvent(event);
        } else if (qgroupbox_keypressevent_callback != nullptr) {
            qgroupbox_keypressevent_callback(this, event);
        } else {
            QGroupBox::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qgroupbox_keyreleaseevent_isbase) {
            qgroupbox_keyreleaseevent_isbase = false;
            QGroupBox::keyReleaseEvent(event);
        } else if (qgroupbox_keyreleaseevent_callback != nullptr) {
            qgroupbox_keyreleaseevent_callback(this, event);
        } else {
            QGroupBox::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qgroupbox_focusoutevent_isbase) {
            qgroupbox_focusoutevent_isbase = false;
            QGroupBox::focusOutEvent(event);
        } else if (qgroupbox_focusoutevent_callback != nullptr) {
            qgroupbox_focusoutevent_callback(this, event);
        } else {
            QGroupBox::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qgroupbox_enterevent_isbase) {
            qgroupbox_enterevent_isbase = false;
            QGroupBox::enterEvent(event);
        } else if (qgroupbox_enterevent_callback != nullptr) {
            qgroupbox_enterevent_callback(this, event);
        } else {
            QGroupBox::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qgroupbox_leaveevent_isbase) {
            qgroupbox_leaveevent_isbase = false;
            QGroupBox::leaveEvent(event);
        } else if (qgroupbox_leaveevent_callback != nullptr) {
            qgroupbox_leaveevent_callback(this, event);
        } else {
            QGroupBox::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qgroupbox_moveevent_isbase) {
            qgroupbox_moveevent_isbase = false;
            QGroupBox::moveEvent(event);
        } else if (qgroupbox_moveevent_callback != nullptr) {
            qgroupbox_moveevent_callback(this, event);
        } else {
            QGroupBox::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qgroupbox_closeevent_isbase) {
            qgroupbox_closeevent_isbase = false;
            QGroupBox::closeEvent(event);
        } else if (qgroupbox_closeevent_callback != nullptr) {
            qgroupbox_closeevent_callback(this, event);
        } else {
            QGroupBox::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qgroupbox_contextmenuevent_isbase) {
            qgroupbox_contextmenuevent_isbase = false;
            QGroupBox::contextMenuEvent(event);
        } else if (qgroupbox_contextmenuevent_callback != nullptr) {
            qgroupbox_contextmenuevent_callback(this, event);
        } else {
            QGroupBox::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qgroupbox_tabletevent_isbase) {
            qgroupbox_tabletevent_isbase = false;
            QGroupBox::tabletEvent(event);
        } else if (qgroupbox_tabletevent_callback != nullptr) {
            qgroupbox_tabletevent_callback(this, event);
        } else {
            QGroupBox::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qgroupbox_actionevent_isbase) {
            qgroupbox_actionevent_isbase = false;
            QGroupBox::actionEvent(event);
        } else if (qgroupbox_actionevent_callback != nullptr) {
            qgroupbox_actionevent_callback(this, event);
        } else {
            QGroupBox::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qgroupbox_dragenterevent_isbase) {
            qgroupbox_dragenterevent_isbase = false;
            QGroupBox::dragEnterEvent(event);
        } else if (qgroupbox_dragenterevent_callback != nullptr) {
            qgroupbox_dragenterevent_callback(this, event);
        } else {
            QGroupBox::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qgroupbox_dragmoveevent_isbase) {
            qgroupbox_dragmoveevent_isbase = false;
            QGroupBox::dragMoveEvent(event);
        } else if (qgroupbox_dragmoveevent_callback != nullptr) {
            qgroupbox_dragmoveevent_callback(this, event);
        } else {
            QGroupBox::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qgroupbox_dragleaveevent_isbase) {
            qgroupbox_dragleaveevent_isbase = false;
            QGroupBox::dragLeaveEvent(event);
        } else if (qgroupbox_dragleaveevent_callback != nullptr) {
            qgroupbox_dragleaveevent_callback(this, event);
        } else {
            QGroupBox::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qgroupbox_dropevent_isbase) {
            qgroupbox_dropevent_isbase = false;
            QGroupBox::dropEvent(event);
        } else if (qgroupbox_dropevent_callback != nullptr) {
            qgroupbox_dropevent_callback(this, event);
        } else {
            QGroupBox::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qgroupbox_showevent_isbase) {
            qgroupbox_showevent_isbase = false;
            QGroupBox::showEvent(event);
        } else if (qgroupbox_showevent_callback != nullptr) {
            qgroupbox_showevent_callback(this, event);
        } else {
            QGroupBox::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qgroupbox_hideevent_isbase) {
            qgroupbox_hideevent_isbase = false;
            QGroupBox::hideEvent(event);
        } else if (qgroupbox_hideevent_callback != nullptr) {
            qgroupbox_hideevent_callback(this, event);
        } else {
            QGroupBox::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qgroupbox_nativeevent_isbase) {
            qgroupbox_nativeevent_isbase = false;
            return QGroupBox::nativeEvent(eventType, message, result);
        } else if (qgroupbox_nativeevent_callback != nullptr) {
            return qgroupbox_nativeevent_callback(this, eventType, message, result);
        } else {
            return QGroupBox::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qgroupbox_metric_isbase) {
            qgroupbox_metric_isbase = false;
            return QGroupBox::metric(param1);
        } else if (qgroupbox_metric_callback != nullptr) {
            return qgroupbox_metric_callback(this, param1);
        } else {
            return QGroupBox::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qgroupbox_initpainter_isbase) {
            qgroupbox_initpainter_isbase = false;
            QGroupBox::initPainter(painter);
        } else if (qgroupbox_initpainter_callback != nullptr) {
            qgroupbox_initpainter_callback(this, painter);
        } else {
            QGroupBox::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qgroupbox_redirected_isbase) {
            qgroupbox_redirected_isbase = false;
            return QGroupBox::redirected(offset);
        } else if (qgroupbox_redirected_callback != nullptr) {
            return qgroupbox_redirected_callback(this, offset);
        } else {
            return QGroupBox::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qgroupbox_sharedpainter_isbase) {
            qgroupbox_sharedpainter_isbase = false;
            return QGroupBox::sharedPainter();
        } else if (qgroupbox_sharedpainter_callback != nullptr) {
            return qgroupbox_sharedpainter_callback();
        } else {
            return QGroupBox::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qgroupbox_inputmethodevent_isbase) {
            qgroupbox_inputmethodevent_isbase = false;
            QGroupBox::inputMethodEvent(param1);
        } else if (qgroupbox_inputmethodevent_callback != nullptr) {
            qgroupbox_inputmethodevent_callback(this, param1);
        } else {
            QGroupBox::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qgroupbox_inputmethodquery_isbase) {
            qgroupbox_inputmethodquery_isbase = false;
            return QGroupBox::inputMethodQuery(param1);
        } else if (qgroupbox_inputmethodquery_callback != nullptr) {
            return qgroupbox_inputmethodquery_callback(this, param1);
        } else {
            return QGroupBox::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qgroupbox_focusnextprevchild_isbase) {
            qgroupbox_focusnextprevchild_isbase = false;
            return QGroupBox::focusNextPrevChild(next);
        } else if (qgroupbox_focusnextprevchild_callback != nullptr) {
            return qgroupbox_focusnextprevchild_callback(this, next);
        } else {
            return QGroupBox::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgroupbox_eventfilter_isbase) {
            qgroupbox_eventfilter_isbase = false;
            return QGroupBox::eventFilter(watched, event);
        } else if (qgroupbox_eventfilter_callback != nullptr) {
            return qgroupbox_eventfilter_callback(this, watched, event);
        } else {
            return QGroupBox::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgroupbox_timerevent_isbase) {
            qgroupbox_timerevent_isbase = false;
            QGroupBox::timerEvent(event);
        } else if (qgroupbox_timerevent_callback != nullptr) {
            qgroupbox_timerevent_callback(this, event);
        } else {
            QGroupBox::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgroupbox_customevent_isbase) {
            qgroupbox_customevent_isbase = false;
            QGroupBox::customEvent(event);
        } else if (qgroupbox_customevent_callback != nullptr) {
            qgroupbox_customevent_callback(this, event);
        } else {
            QGroupBox::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgroupbox_connectnotify_isbase) {
            qgroupbox_connectnotify_isbase = false;
            QGroupBox::connectNotify(signal);
        } else if (qgroupbox_connectnotify_callback != nullptr) {
            qgroupbox_connectnotify_callback(this, signal);
        } else {
            QGroupBox::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgroupbox_disconnectnotify_isbase) {
            qgroupbox_disconnectnotify_isbase = false;
            QGroupBox::disconnectNotify(signal);
        } else if (qgroupbox_disconnectnotify_callback != nullptr) {
            qgroupbox_disconnectnotify_callback(this, signal);
        } else {
            QGroupBox::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qgroupbox_updatemicrofocus_isbase) {
            qgroupbox_updatemicrofocus_isbase = false;
            QGroupBox::updateMicroFocus();
        } else if (qgroupbox_updatemicrofocus_callback != nullptr) {
            qgroupbox_updatemicrofocus_callback();
        } else {
            QGroupBox::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qgroupbox_create_isbase) {
            qgroupbox_create_isbase = false;
            QGroupBox::create();
        } else if (qgroupbox_create_callback != nullptr) {
            qgroupbox_create_callback();
        } else {
            QGroupBox::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qgroupbox_destroy_isbase) {
            qgroupbox_destroy_isbase = false;
            QGroupBox::destroy();
        } else if (qgroupbox_destroy_callback != nullptr) {
            qgroupbox_destroy_callback();
        } else {
            QGroupBox::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qgroupbox_focusnextchild_isbase) {
            qgroupbox_focusnextchild_isbase = false;
            return QGroupBox::focusNextChild();
        } else if (qgroupbox_focusnextchild_callback != nullptr) {
            return qgroupbox_focusnextchild_callback();
        } else {
            return QGroupBox::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qgroupbox_focuspreviouschild_isbase) {
            qgroupbox_focuspreviouschild_isbase = false;
            return QGroupBox::focusPreviousChild();
        } else if (qgroupbox_focuspreviouschild_callback != nullptr) {
            return qgroupbox_focuspreviouschild_callback();
        } else {
            return QGroupBox::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qgroupbox_sender_isbase) {
            qgroupbox_sender_isbase = false;
            return QGroupBox::sender();
        } else if (qgroupbox_sender_callback != nullptr) {
            return qgroupbox_sender_callback();
        } else {
            return QGroupBox::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qgroupbox_sendersignalindex_isbase) {
            qgroupbox_sendersignalindex_isbase = false;
            return QGroupBox::senderSignalIndex();
        } else if (qgroupbox_sendersignalindex_callback != nullptr) {
            return qgroupbox_sendersignalindex_callback();
        } else {
            return QGroupBox::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qgroupbox_receivers_isbase) {
            qgroupbox_receivers_isbase = false;
            return QGroupBox::receivers(signal);
        } else if (qgroupbox_receivers_callback != nullptr) {
            return qgroupbox_receivers_callback(this, signal);
        } else {
            return QGroupBox::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qgroupbox_issignalconnected_isbase) {
            qgroupbox_issignalconnected_isbase = false;
            return QGroupBox::isSignalConnected(signal);
        } else if (qgroupbox_issignalconnected_callback != nullptr) {
            return qgroupbox_issignalconnected_callback(this, signal);
        } else {
            return QGroupBox::isSignalConnected(signal);
        }
    }
};

#endif
