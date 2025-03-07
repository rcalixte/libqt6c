#pragma once
#ifndef SRC_MULTIMEDIAC_LIBVIRTUALQVIDEOWIDGET_H
#define SRC_MULTIMEDIAC_LIBVIRTUALQVIDEOWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QVideoWidget so that we can call protected methods
class VirtualQVideoWidget : public QVideoWidget {

  public:
    // Virtual class public types (including callbacks)
    using QVideoWidget_Metacall_Callback = int (*)(QVideoWidget*, QMetaObject::Call, int, void**);
    using QVideoWidget_SizeHint_Callback = QSize (*)();
    using QVideoWidget_Event_Callback = bool (*)(QVideoWidget*, QEvent*);
    using QVideoWidget_ShowEvent_Callback = void (*)(QVideoWidget*, QShowEvent*);
    using QVideoWidget_HideEvent_Callback = void (*)(QVideoWidget*, QHideEvent*);
    using QVideoWidget_ResizeEvent_Callback = void (*)(QVideoWidget*, QResizeEvent*);
    using QVideoWidget_MoveEvent_Callback = void (*)(QVideoWidget*, QMoveEvent*);
    using QVideoWidget_DevType_Callback = int (*)();
    using QVideoWidget_SetVisible_Callback = void (*)(QVideoWidget*, bool);
    using QVideoWidget_MinimumSizeHint_Callback = QSize (*)();
    using QVideoWidget_HeightForWidth_Callback = int (*)(const QVideoWidget*, int);
    using QVideoWidget_HasHeightForWidth_Callback = bool (*)();
    using QVideoWidget_PaintEngine_Callback = QPaintEngine* (*)();
    using QVideoWidget_MousePressEvent_Callback = void (*)(QVideoWidget*, QMouseEvent*);
    using QVideoWidget_MouseReleaseEvent_Callback = void (*)(QVideoWidget*, QMouseEvent*);
    using QVideoWidget_MouseDoubleClickEvent_Callback = void (*)(QVideoWidget*, QMouseEvent*);
    using QVideoWidget_MouseMoveEvent_Callback = void (*)(QVideoWidget*, QMouseEvent*);
    using QVideoWidget_WheelEvent_Callback = void (*)(QVideoWidget*, QWheelEvent*);
    using QVideoWidget_KeyPressEvent_Callback = void (*)(QVideoWidget*, QKeyEvent*);
    using QVideoWidget_KeyReleaseEvent_Callback = void (*)(QVideoWidget*, QKeyEvent*);
    using QVideoWidget_FocusInEvent_Callback = void (*)(QVideoWidget*, QFocusEvent*);
    using QVideoWidget_FocusOutEvent_Callback = void (*)(QVideoWidget*, QFocusEvent*);
    using QVideoWidget_EnterEvent_Callback = void (*)(QVideoWidget*, QEnterEvent*);
    using QVideoWidget_LeaveEvent_Callback = void (*)(QVideoWidget*, QEvent*);
    using QVideoWidget_PaintEvent_Callback = void (*)(QVideoWidget*, QPaintEvent*);
    using QVideoWidget_CloseEvent_Callback = void (*)(QVideoWidget*, QCloseEvent*);
    using QVideoWidget_ContextMenuEvent_Callback = void (*)(QVideoWidget*, QContextMenuEvent*);
    using QVideoWidget_TabletEvent_Callback = void (*)(QVideoWidget*, QTabletEvent*);
    using QVideoWidget_ActionEvent_Callback = void (*)(QVideoWidget*, QActionEvent*);
    using QVideoWidget_DragEnterEvent_Callback = void (*)(QVideoWidget*, QDragEnterEvent*);
    using QVideoWidget_DragMoveEvent_Callback = void (*)(QVideoWidget*, QDragMoveEvent*);
    using QVideoWidget_DragLeaveEvent_Callback = void (*)(QVideoWidget*, QDragLeaveEvent*);
    using QVideoWidget_DropEvent_Callback = void (*)(QVideoWidget*, QDropEvent*);
    using QVideoWidget_NativeEvent_Callback = bool (*)(QVideoWidget*, const QByteArray&, void*, qintptr*);
    using QVideoWidget_ChangeEvent_Callback = void (*)(QVideoWidget*, QEvent*);
    using QVideoWidget_Metric_Callback = int (*)(const QVideoWidget*, QPaintDevice::PaintDeviceMetric);
    using QVideoWidget_InitPainter_Callback = void (*)(const QVideoWidget*, QPainter*);
    using QVideoWidget_Redirected_Callback = QPaintDevice* (*)(const QVideoWidget*, QPoint*);
    using QVideoWidget_SharedPainter_Callback = QPainter* (*)();
    using QVideoWidget_InputMethodEvent_Callback = void (*)(QVideoWidget*, QInputMethodEvent*);
    using QVideoWidget_InputMethodQuery_Callback = QVariant (*)(const QVideoWidget*, Qt::InputMethodQuery);
    using QVideoWidget_FocusNextPrevChild_Callback = bool (*)(QVideoWidget*, bool);
    using QVideoWidget_EventFilter_Callback = bool (*)(QVideoWidget*, QObject*, QEvent*);
    using QVideoWidget_TimerEvent_Callback = void (*)(QVideoWidget*, QTimerEvent*);
    using QVideoWidget_ChildEvent_Callback = void (*)(QVideoWidget*, QChildEvent*);
    using QVideoWidget_CustomEvent_Callback = void (*)(QVideoWidget*, QEvent*);
    using QVideoWidget_ConnectNotify_Callback = void (*)(QVideoWidget*, const QMetaMethod&);
    using QVideoWidget_DisconnectNotify_Callback = void (*)(QVideoWidget*, const QMetaMethod&);
    using QVideoWidget_UpdateMicroFocus_Callback = void (*)();
    using QVideoWidget_Create_Callback = void (*)();
    using QVideoWidget_Destroy_Callback = void (*)();
    using QVideoWidget_FocusNextChild_Callback = bool (*)();
    using QVideoWidget_FocusPreviousChild_Callback = bool (*)();
    using QVideoWidget_Sender_Callback = QObject* (*)();
    using QVideoWidget_SenderSignalIndex_Callback = int (*)();
    using QVideoWidget_Receivers_Callback = int (*)(const QVideoWidget*, const char*);
    using QVideoWidget_IsSignalConnected_Callback = bool (*)(const QVideoWidget*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QVideoWidget_Metacall_Callback qvideowidget_metacall_callback = nullptr;
    QVideoWidget_SizeHint_Callback qvideowidget_sizehint_callback = nullptr;
    QVideoWidget_Event_Callback qvideowidget_event_callback = nullptr;
    QVideoWidget_ShowEvent_Callback qvideowidget_showevent_callback = nullptr;
    QVideoWidget_HideEvent_Callback qvideowidget_hideevent_callback = nullptr;
    QVideoWidget_ResizeEvent_Callback qvideowidget_resizeevent_callback = nullptr;
    QVideoWidget_MoveEvent_Callback qvideowidget_moveevent_callback = nullptr;
    QVideoWidget_DevType_Callback qvideowidget_devtype_callback = nullptr;
    QVideoWidget_SetVisible_Callback qvideowidget_setvisible_callback = nullptr;
    QVideoWidget_MinimumSizeHint_Callback qvideowidget_minimumsizehint_callback = nullptr;
    QVideoWidget_HeightForWidth_Callback qvideowidget_heightforwidth_callback = nullptr;
    QVideoWidget_HasHeightForWidth_Callback qvideowidget_hasheightforwidth_callback = nullptr;
    QVideoWidget_PaintEngine_Callback qvideowidget_paintengine_callback = nullptr;
    QVideoWidget_MousePressEvent_Callback qvideowidget_mousepressevent_callback = nullptr;
    QVideoWidget_MouseReleaseEvent_Callback qvideowidget_mousereleaseevent_callback = nullptr;
    QVideoWidget_MouseDoubleClickEvent_Callback qvideowidget_mousedoubleclickevent_callback = nullptr;
    QVideoWidget_MouseMoveEvent_Callback qvideowidget_mousemoveevent_callback = nullptr;
    QVideoWidget_WheelEvent_Callback qvideowidget_wheelevent_callback = nullptr;
    QVideoWidget_KeyPressEvent_Callback qvideowidget_keypressevent_callback = nullptr;
    QVideoWidget_KeyReleaseEvent_Callback qvideowidget_keyreleaseevent_callback = nullptr;
    QVideoWidget_FocusInEvent_Callback qvideowidget_focusinevent_callback = nullptr;
    QVideoWidget_FocusOutEvent_Callback qvideowidget_focusoutevent_callback = nullptr;
    QVideoWidget_EnterEvent_Callback qvideowidget_enterevent_callback = nullptr;
    QVideoWidget_LeaveEvent_Callback qvideowidget_leaveevent_callback = nullptr;
    QVideoWidget_PaintEvent_Callback qvideowidget_paintevent_callback = nullptr;
    QVideoWidget_CloseEvent_Callback qvideowidget_closeevent_callback = nullptr;
    QVideoWidget_ContextMenuEvent_Callback qvideowidget_contextmenuevent_callback = nullptr;
    QVideoWidget_TabletEvent_Callback qvideowidget_tabletevent_callback = nullptr;
    QVideoWidget_ActionEvent_Callback qvideowidget_actionevent_callback = nullptr;
    QVideoWidget_DragEnterEvent_Callback qvideowidget_dragenterevent_callback = nullptr;
    QVideoWidget_DragMoveEvent_Callback qvideowidget_dragmoveevent_callback = nullptr;
    QVideoWidget_DragLeaveEvent_Callback qvideowidget_dragleaveevent_callback = nullptr;
    QVideoWidget_DropEvent_Callback qvideowidget_dropevent_callback = nullptr;
    QVideoWidget_NativeEvent_Callback qvideowidget_nativeevent_callback = nullptr;
    QVideoWidget_ChangeEvent_Callback qvideowidget_changeevent_callback = nullptr;
    QVideoWidget_Metric_Callback qvideowidget_metric_callback = nullptr;
    QVideoWidget_InitPainter_Callback qvideowidget_initpainter_callback = nullptr;
    QVideoWidget_Redirected_Callback qvideowidget_redirected_callback = nullptr;
    QVideoWidget_SharedPainter_Callback qvideowidget_sharedpainter_callback = nullptr;
    QVideoWidget_InputMethodEvent_Callback qvideowidget_inputmethodevent_callback = nullptr;
    QVideoWidget_InputMethodQuery_Callback qvideowidget_inputmethodquery_callback = nullptr;
    QVideoWidget_FocusNextPrevChild_Callback qvideowidget_focusnextprevchild_callback = nullptr;
    QVideoWidget_EventFilter_Callback qvideowidget_eventfilter_callback = nullptr;
    QVideoWidget_TimerEvent_Callback qvideowidget_timerevent_callback = nullptr;
    QVideoWidget_ChildEvent_Callback qvideowidget_childevent_callback = nullptr;
    QVideoWidget_CustomEvent_Callback qvideowidget_customevent_callback = nullptr;
    QVideoWidget_ConnectNotify_Callback qvideowidget_connectnotify_callback = nullptr;
    QVideoWidget_DisconnectNotify_Callback qvideowidget_disconnectnotify_callback = nullptr;
    QVideoWidget_UpdateMicroFocus_Callback qvideowidget_updatemicrofocus_callback = nullptr;
    QVideoWidget_Create_Callback qvideowidget_create_callback = nullptr;
    QVideoWidget_Destroy_Callback qvideowidget_destroy_callback = nullptr;
    QVideoWidget_FocusNextChild_Callback qvideowidget_focusnextchild_callback = nullptr;
    QVideoWidget_FocusPreviousChild_Callback qvideowidget_focuspreviouschild_callback = nullptr;
    QVideoWidget_Sender_Callback qvideowidget_sender_callback = nullptr;
    QVideoWidget_SenderSignalIndex_Callback qvideowidget_sendersignalindex_callback = nullptr;
    QVideoWidget_Receivers_Callback qvideowidget_receivers_callback = nullptr;
    QVideoWidget_IsSignalConnected_Callback qvideowidget_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qvideowidget_metacall_isbase = false;
    mutable bool qvideowidget_sizehint_isbase = false;
    mutable bool qvideowidget_event_isbase = false;
    mutable bool qvideowidget_showevent_isbase = false;
    mutable bool qvideowidget_hideevent_isbase = false;
    mutable bool qvideowidget_resizeevent_isbase = false;
    mutable bool qvideowidget_moveevent_isbase = false;
    mutable bool qvideowidget_devtype_isbase = false;
    mutable bool qvideowidget_setvisible_isbase = false;
    mutable bool qvideowidget_minimumsizehint_isbase = false;
    mutable bool qvideowidget_heightforwidth_isbase = false;
    mutable bool qvideowidget_hasheightforwidth_isbase = false;
    mutable bool qvideowidget_paintengine_isbase = false;
    mutable bool qvideowidget_mousepressevent_isbase = false;
    mutable bool qvideowidget_mousereleaseevent_isbase = false;
    mutable bool qvideowidget_mousedoubleclickevent_isbase = false;
    mutable bool qvideowidget_mousemoveevent_isbase = false;
    mutable bool qvideowidget_wheelevent_isbase = false;
    mutable bool qvideowidget_keypressevent_isbase = false;
    mutable bool qvideowidget_keyreleaseevent_isbase = false;
    mutable bool qvideowidget_focusinevent_isbase = false;
    mutable bool qvideowidget_focusoutevent_isbase = false;
    mutable bool qvideowidget_enterevent_isbase = false;
    mutable bool qvideowidget_leaveevent_isbase = false;
    mutable bool qvideowidget_paintevent_isbase = false;
    mutable bool qvideowidget_closeevent_isbase = false;
    mutable bool qvideowidget_contextmenuevent_isbase = false;
    mutable bool qvideowidget_tabletevent_isbase = false;
    mutable bool qvideowidget_actionevent_isbase = false;
    mutable bool qvideowidget_dragenterevent_isbase = false;
    mutable bool qvideowidget_dragmoveevent_isbase = false;
    mutable bool qvideowidget_dragleaveevent_isbase = false;
    mutable bool qvideowidget_dropevent_isbase = false;
    mutable bool qvideowidget_nativeevent_isbase = false;
    mutable bool qvideowidget_changeevent_isbase = false;
    mutable bool qvideowidget_metric_isbase = false;
    mutable bool qvideowidget_initpainter_isbase = false;
    mutable bool qvideowidget_redirected_isbase = false;
    mutable bool qvideowidget_sharedpainter_isbase = false;
    mutable bool qvideowidget_inputmethodevent_isbase = false;
    mutable bool qvideowidget_inputmethodquery_isbase = false;
    mutable bool qvideowidget_focusnextprevchild_isbase = false;
    mutable bool qvideowidget_eventfilter_isbase = false;
    mutable bool qvideowidget_timerevent_isbase = false;
    mutable bool qvideowidget_childevent_isbase = false;
    mutable bool qvideowidget_customevent_isbase = false;
    mutable bool qvideowidget_connectnotify_isbase = false;
    mutable bool qvideowidget_disconnectnotify_isbase = false;
    mutable bool qvideowidget_updatemicrofocus_isbase = false;
    mutable bool qvideowidget_create_isbase = false;
    mutable bool qvideowidget_destroy_isbase = false;
    mutable bool qvideowidget_focusnextchild_isbase = false;
    mutable bool qvideowidget_focuspreviouschild_isbase = false;
    mutable bool qvideowidget_sender_isbase = false;
    mutable bool qvideowidget_sendersignalindex_isbase = false;
    mutable bool qvideowidget_receivers_isbase = false;
    mutable bool qvideowidget_issignalconnected_isbase = false;

  public:
    VirtualQVideoWidget(QWidget* parent) : QVideoWidget(parent){};
    VirtualQVideoWidget() : QVideoWidget(){};

    ~VirtualQVideoWidget() {
        qvideowidget_metacall_callback = nullptr;
        qvideowidget_sizehint_callback = nullptr;
        qvideowidget_event_callback = nullptr;
        qvideowidget_showevent_callback = nullptr;
        qvideowidget_hideevent_callback = nullptr;
        qvideowidget_resizeevent_callback = nullptr;
        qvideowidget_moveevent_callback = nullptr;
        qvideowidget_devtype_callback = nullptr;
        qvideowidget_setvisible_callback = nullptr;
        qvideowidget_minimumsizehint_callback = nullptr;
        qvideowidget_heightforwidth_callback = nullptr;
        qvideowidget_hasheightforwidth_callback = nullptr;
        qvideowidget_paintengine_callback = nullptr;
        qvideowidget_mousepressevent_callback = nullptr;
        qvideowidget_mousereleaseevent_callback = nullptr;
        qvideowidget_mousedoubleclickevent_callback = nullptr;
        qvideowidget_mousemoveevent_callback = nullptr;
        qvideowidget_wheelevent_callback = nullptr;
        qvideowidget_keypressevent_callback = nullptr;
        qvideowidget_keyreleaseevent_callback = nullptr;
        qvideowidget_focusinevent_callback = nullptr;
        qvideowidget_focusoutevent_callback = nullptr;
        qvideowidget_enterevent_callback = nullptr;
        qvideowidget_leaveevent_callback = nullptr;
        qvideowidget_paintevent_callback = nullptr;
        qvideowidget_closeevent_callback = nullptr;
        qvideowidget_contextmenuevent_callback = nullptr;
        qvideowidget_tabletevent_callback = nullptr;
        qvideowidget_actionevent_callback = nullptr;
        qvideowidget_dragenterevent_callback = nullptr;
        qvideowidget_dragmoveevent_callback = nullptr;
        qvideowidget_dragleaveevent_callback = nullptr;
        qvideowidget_dropevent_callback = nullptr;
        qvideowidget_nativeevent_callback = nullptr;
        qvideowidget_changeevent_callback = nullptr;
        qvideowidget_metric_callback = nullptr;
        qvideowidget_initpainter_callback = nullptr;
        qvideowidget_redirected_callback = nullptr;
        qvideowidget_sharedpainter_callback = nullptr;
        qvideowidget_inputmethodevent_callback = nullptr;
        qvideowidget_inputmethodquery_callback = nullptr;
        qvideowidget_focusnextprevchild_callback = nullptr;
        qvideowidget_eventfilter_callback = nullptr;
        qvideowidget_timerevent_callback = nullptr;
        qvideowidget_childevent_callback = nullptr;
        qvideowidget_customevent_callback = nullptr;
        qvideowidget_connectnotify_callback = nullptr;
        qvideowidget_disconnectnotify_callback = nullptr;
        qvideowidget_updatemicrofocus_callback = nullptr;
        qvideowidget_create_callback = nullptr;
        qvideowidget_destroy_callback = nullptr;
        qvideowidget_focusnextchild_callback = nullptr;
        qvideowidget_focuspreviouschild_callback = nullptr;
        qvideowidget_sender_callback = nullptr;
        qvideowidget_sendersignalindex_callback = nullptr;
        qvideowidget_receivers_callback = nullptr;
        qvideowidget_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQVideoWidget_Metacall_Callback(QVideoWidget_Metacall_Callback cb) { qvideowidget_metacall_callback = cb; }
    void setQVideoWidget_SizeHint_Callback(QVideoWidget_SizeHint_Callback cb) { qvideowidget_sizehint_callback = cb; }
    void setQVideoWidget_Event_Callback(QVideoWidget_Event_Callback cb) { qvideowidget_event_callback = cb; }
    void setQVideoWidget_ShowEvent_Callback(QVideoWidget_ShowEvent_Callback cb) { qvideowidget_showevent_callback = cb; }
    void setQVideoWidget_HideEvent_Callback(QVideoWidget_HideEvent_Callback cb) { qvideowidget_hideevent_callback = cb; }
    void setQVideoWidget_ResizeEvent_Callback(QVideoWidget_ResizeEvent_Callback cb) { qvideowidget_resizeevent_callback = cb; }
    void setQVideoWidget_MoveEvent_Callback(QVideoWidget_MoveEvent_Callback cb) { qvideowidget_moveevent_callback = cb; }
    void setQVideoWidget_DevType_Callback(QVideoWidget_DevType_Callback cb) { qvideowidget_devtype_callback = cb; }
    void setQVideoWidget_SetVisible_Callback(QVideoWidget_SetVisible_Callback cb) { qvideowidget_setvisible_callback = cb; }
    void setQVideoWidget_MinimumSizeHint_Callback(QVideoWidget_MinimumSizeHint_Callback cb) { qvideowidget_minimumsizehint_callback = cb; }
    void setQVideoWidget_HeightForWidth_Callback(QVideoWidget_HeightForWidth_Callback cb) { qvideowidget_heightforwidth_callback = cb; }
    void setQVideoWidget_HasHeightForWidth_Callback(QVideoWidget_HasHeightForWidth_Callback cb) { qvideowidget_hasheightforwidth_callback = cb; }
    void setQVideoWidget_PaintEngine_Callback(QVideoWidget_PaintEngine_Callback cb) { qvideowidget_paintengine_callback = cb; }
    void setQVideoWidget_MousePressEvent_Callback(QVideoWidget_MousePressEvent_Callback cb) { qvideowidget_mousepressevent_callback = cb; }
    void setQVideoWidget_MouseReleaseEvent_Callback(QVideoWidget_MouseReleaseEvent_Callback cb) { qvideowidget_mousereleaseevent_callback = cb; }
    void setQVideoWidget_MouseDoubleClickEvent_Callback(QVideoWidget_MouseDoubleClickEvent_Callback cb) { qvideowidget_mousedoubleclickevent_callback = cb; }
    void setQVideoWidget_MouseMoveEvent_Callback(QVideoWidget_MouseMoveEvent_Callback cb) { qvideowidget_mousemoveevent_callback = cb; }
    void setQVideoWidget_WheelEvent_Callback(QVideoWidget_WheelEvent_Callback cb) { qvideowidget_wheelevent_callback = cb; }
    void setQVideoWidget_KeyPressEvent_Callback(QVideoWidget_KeyPressEvent_Callback cb) { qvideowidget_keypressevent_callback = cb; }
    void setQVideoWidget_KeyReleaseEvent_Callback(QVideoWidget_KeyReleaseEvent_Callback cb) { qvideowidget_keyreleaseevent_callback = cb; }
    void setQVideoWidget_FocusInEvent_Callback(QVideoWidget_FocusInEvent_Callback cb) { qvideowidget_focusinevent_callback = cb; }
    void setQVideoWidget_FocusOutEvent_Callback(QVideoWidget_FocusOutEvent_Callback cb) { qvideowidget_focusoutevent_callback = cb; }
    void setQVideoWidget_EnterEvent_Callback(QVideoWidget_EnterEvent_Callback cb) { qvideowidget_enterevent_callback = cb; }
    void setQVideoWidget_LeaveEvent_Callback(QVideoWidget_LeaveEvent_Callback cb) { qvideowidget_leaveevent_callback = cb; }
    void setQVideoWidget_PaintEvent_Callback(QVideoWidget_PaintEvent_Callback cb) { qvideowidget_paintevent_callback = cb; }
    void setQVideoWidget_CloseEvent_Callback(QVideoWidget_CloseEvent_Callback cb) { qvideowidget_closeevent_callback = cb; }
    void setQVideoWidget_ContextMenuEvent_Callback(QVideoWidget_ContextMenuEvent_Callback cb) { qvideowidget_contextmenuevent_callback = cb; }
    void setQVideoWidget_TabletEvent_Callback(QVideoWidget_TabletEvent_Callback cb) { qvideowidget_tabletevent_callback = cb; }
    void setQVideoWidget_ActionEvent_Callback(QVideoWidget_ActionEvent_Callback cb) { qvideowidget_actionevent_callback = cb; }
    void setQVideoWidget_DragEnterEvent_Callback(QVideoWidget_DragEnterEvent_Callback cb) { qvideowidget_dragenterevent_callback = cb; }
    void setQVideoWidget_DragMoveEvent_Callback(QVideoWidget_DragMoveEvent_Callback cb) { qvideowidget_dragmoveevent_callback = cb; }
    void setQVideoWidget_DragLeaveEvent_Callback(QVideoWidget_DragLeaveEvent_Callback cb) { qvideowidget_dragleaveevent_callback = cb; }
    void setQVideoWidget_DropEvent_Callback(QVideoWidget_DropEvent_Callback cb) { qvideowidget_dropevent_callback = cb; }
    void setQVideoWidget_NativeEvent_Callback(QVideoWidget_NativeEvent_Callback cb) { qvideowidget_nativeevent_callback = cb; }
    void setQVideoWidget_ChangeEvent_Callback(QVideoWidget_ChangeEvent_Callback cb) { qvideowidget_changeevent_callback = cb; }
    void setQVideoWidget_Metric_Callback(QVideoWidget_Metric_Callback cb) { qvideowidget_metric_callback = cb; }
    void setQVideoWidget_InitPainter_Callback(QVideoWidget_InitPainter_Callback cb) { qvideowidget_initpainter_callback = cb; }
    void setQVideoWidget_Redirected_Callback(QVideoWidget_Redirected_Callback cb) { qvideowidget_redirected_callback = cb; }
    void setQVideoWidget_SharedPainter_Callback(QVideoWidget_SharedPainter_Callback cb) { qvideowidget_sharedpainter_callback = cb; }
    void setQVideoWidget_InputMethodEvent_Callback(QVideoWidget_InputMethodEvent_Callback cb) { qvideowidget_inputmethodevent_callback = cb; }
    void setQVideoWidget_InputMethodQuery_Callback(QVideoWidget_InputMethodQuery_Callback cb) { qvideowidget_inputmethodquery_callback = cb; }
    void setQVideoWidget_FocusNextPrevChild_Callback(QVideoWidget_FocusNextPrevChild_Callback cb) { qvideowidget_focusnextprevchild_callback = cb; }
    void setQVideoWidget_EventFilter_Callback(QVideoWidget_EventFilter_Callback cb) { qvideowidget_eventfilter_callback = cb; }
    void setQVideoWidget_TimerEvent_Callback(QVideoWidget_TimerEvent_Callback cb) { qvideowidget_timerevent_callback = cb; }
    void setQVideoWidget_ChildEvent_Callback(QVideoWidget_ChildEvent_Callback cb) { qvideowidget_childevent_callback = cb; }
    void setQVideoWidget_CustomEvent_Callback(QVideoWidget_CustomEvent_Callback cb) { qvideowidget_customevent_callback = cb; }
    void setQVideoWidget_ConnectNotify_Callback(QVideoWidget_ConnectNotify_Callback cb) { qvideowidget_connectnotify_callback = cb; }
    void setQVideoWidget_DisconnectNotify_Callback(QVideoWidget_DisconnectNotify_Callback cb) { qvideowidget_disconnectnotify_callback = cb; }
    void setQVideoWidget_UpdateMicroFocus_Callback(QVideoWidget_UpdateMicroFocus_Callback cb) { qvideowidget_updatemicrofocus_callback = cb; }
    void setQVideoWidget_Create_Callback(QVideoWidget_Create_Callback cb) { qvideowidget_create_callback = cb; }
    void setQVideoWidget_Destroy_Callback(QVideoWidget_Destroy_Callback cb) { qvideowidget_destroy_callback = cb; }
    void setQVideoWidget_FocusNextChild_Callback(QVideoWidget_FocusNextChild_Callback cb) { qvideowidget_focusnextchild_callback = cb; }
    void setQVideoWidget_FocusPreviousChild_Callback(QVideoWidget_FocusPreviousChild_Callback cb) { qvideowidget_focuspreviouschild_callback = cb; }
    void setQVideoWidget_Sender_Callback(QVideoWidget_Sender_Callback cb) { qvideowidget_sender_callback = cb; }
    void setQVideoWidget_SenderSignalIndex_Callback(QVideoWidget_SenderSignalIndex_Callback cb) { qvideowidget_sendersignalindex_callback = cb; }
    void setQVideoWidget_Receivers_Callback(QVideoWidget_Receivers_Callback cb) { qvideowidget_receivers_callback = cb; }
    void setQVideoWidget_IsSignalConnected_Callback(QVideoWidget_IsSignalConnected_Callback cb) { qvideowidget_issignalconnected_callback = cb; }

    // Base flag setters
    void setQVideoWidget_Metacall_IsBase(bool value) const { qvideowidget_metacall_isbase = value; }
    void setQVideoWidget_SizeHint_IsBase(bool value) const { qvideowidget_sizehint_isbase = value; }
    void setQVideoWidget_Event_IsBase(bool value) const { qvideowidget_event_isbase = value; }
    void setQVideoWidget_ShowEvent_IsBase(bool value) const { qvideowidget_showevent_isbase = value; }
    void setQVideoWidget_HideEvent_IsBase(bool value) const { qvideowidget_hideevent_isbase = value; }
    void setQVideoWidget_ResizeEvent_IsBase(bool value) const { qvideowidget_resizeevent_isbase = value; }
    void setQVideoWidget_MoveEvent_IsBase(bool value) const { qvideowidget_moveevent_isbase = value; }
    void setQVideoWidget_DevType_IsBase(bool value) const { qvideowidget_devtype_isbase = value; }
    void setQVideoWidget_SetVisible_IsBase(bool value) const { qvideowidget_setvisible_isbase = value; }
    void setQVideoWidget_MinimumSizeHint_IsBase(bool value) const { qvideowidget_minimumsizehint_isbase = value; }
    void setQVideoWidget_HeightForWidth_IsBase(bool value) const { qvideowidget_heightforwidth_isbase = value; }
    void setQVideoWidget_HasHeightForWidth_IsBase(bool value) const { qvideowidget_hasheightforwidth_isbase = value; }
    void setQVideoWidget_PaintEngine_IsBase(bool value) const { qvideowidget_paintengine_isbase = value; }
    void setQVideoWidget_MousePressEvent_IsBase(bool value) const { qvideowidget_mousepressevent_isbase = value; }
    void setQVideoWidget_MouseReleaseEvent_IsBase(bool value) const { qvideowidget_mousereleaseevent_isbase = value; }
    void setQVideoWidget_MouseDoubleClickEvent_IsBase(bool value) const { qvideowidget_mousedoubleclickevent_isbase = value; }
    void setQVideoWidget_MouseMoveEvent_IsBase(bool value) const { qvideowidget_mousemoveevent_isbase = value; }
    void setQVideoWidget_WheelEvent_IsBase(bool value) const { qvideowidget_wheelevent_isbase = value; }
    void setQVideoWidget_KeyPressEvent_IsBase(bool value) const { qvideowidget_keypressevent_isbase = value; }
    void setQVideoWidget_KeyReleaseEvent_IsBase(bool value) const { qvideowidget_keyreleaseevent_isbase = value; }
    void setQVideoWidget_FocusInEvent_IsBase(bool value) const { qvideowidget_focusinevent_isbase = value; }
    void setQVideoWidget_FocusOutEvent_IsBase(bool value) const { qvideowidget_focusoutevent_isbase = value; }
    void setQVideoWidget_EnterEvent_IsBase(bool value) const { qvideowidget_enterevent_isbase = value; }
    void setQVideoWidget_LeaveEvent_IsBase(bool value) const { qvideowidget_leaveevent_isbase = value; }
    void setQVideoWidget_PaintEvent_IsBase(bool value) const { qvideowidget_paintevent_isbase = value; }
    void setQVideoWidget_CloseEvent_IsBase(bool value) const { qvideowidget_closeevent_isbase = value; }
    void setQVideoWidget_ContextMenuEvent_IsBase(bool value) const { qvideowidget_contextmenuevent_isbase = value; }
    void setQVideoWidget_TabletEvent_IsBase(bool value) const { qvideowidget_tabletevent_isbase = value; }
    void setQVideoWidget_ActionEvent_IsBase(bool value) const { qvideowidget_actionevent_isbase = value; }
    void setQVideoWidget_DragEnterEvent_IsBase(bool value) const { qvideowidget_dragenterevent_isbase = value; }
    void setQVideoWidget_DragMoveEvent_IsBase(bool value) const { qvideowidget_dragmoveevent_isbase = value; }
    void setQVideoWidget_DragLeaveEvent_IsBase(bool value) const { qvideowidget_dragleaveevent_isbase = value; }
    void setQVideoWidget_DropEvent_IsBase(bool value) const { qvideowidget_dropevent_isbase = value; }
    void setQVideoWidget_NativeEvent_IsBase(bool value) const { qvideowidget_nativeevent_isbase = value; }
    void setQVideoWidget_ChangeEvent_IsBase(bool value) const { qvideowidget_changeevent_isbase = value; }
    void setQVideoWidget_Metric_IsBase(bool value) const { qvideowidget_metric_isbase = value; }
    void setQVideoWidget_InitPainter_IsBase(bool value) const { qvideowidget_initpainter_isbase = value; }
    void setQVideoWidget_Redirected_IsBase(bool value) const { qvideowidget_redirected_isbase = value; }
    void setQVideoWidget_SharedPainter_IsBase(bool value) const { qvideowidget_sharedpainter_isbase = value; }
    void setQVideoWidget_InputMethodEvent_IsBase(bool value) const { qvideowidget_inputmethodevent_isbase = value; }
    void setQVideoWidget_InputMethodQuery_IsBase(bool value) const { qvideowidget_inputmethodquery_isbase = value; }
    void setQVideoWidget_FocusNextPrevChild_IsBase(bool value) const { qvideowidget_focusnextprevchild_isbase = value; }
    void setQVideoWidget_EventFilter_IsBase(bool value) const { qvideowidget_eventfilter_isbase = value; }
    void setQVideoWidget_TimerEvent_IsBase(bool value) const { qvideowidget_timerevent_isbase = value; }
    void setQVideoWidget_ChildEvent_IsBase(bool value) const { qvideowidget_childevent_isbase = value; }
    void setQVideoWidget_CustomEvent_IsBase(bool value) const { qvideowidget_customevent_isbase = value; }
    void setQVideoWidget_ConnectNotify_IsBase(bool value) const { qvideowidget_connectnotify_isbase = value; }
    void setQVideoWidget_DisconnectNotify_IsBase(bool value) const { qvideowidget_disconnectnotify_isbase = value; }
    void setQVideoWidget_UpdateMicroFocus_IsBase(bool value) const { qvideowidget_updatemicrofocus_isbase = value; }
    void setQVideoWidget_Create_IsBase(bool value) const { qvideowidget_create_isbase = value; }
    void setQVideoWidget_Destroy_IsBase(bool value) const { qvideowidget_destroy_isbase = value; }
    void setQVideoWidget_FocusNextChild_IsBase(bool value) const { qvideowidget_focusnextchild_isbase = value; }
    void setQVideoWidget_FocusPreviousChild_IsBase(bool value) const { qvideowidget_focuspreviouschild_isbase = value; }
    void setQVideoWidget_Sender_IsBase(bool value) const { qvideowidget_sender_isbase = value; }
    void setQVideoWidget_SenderSignalIndex_IsBase(bool value) const { qvideowidget_sendersignalindex_isbase = value; }
    void setQVideoWidget_Receivers_IsBase(bool value) const { qvideowidget_receivers_isbase = value; }
    void setQVideoWidget_IsSignalConnected_IsBase(bool value) const { qvideowidget_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qvideowidget_metacall_isbase) {
            qvideowidget_metacall_isbase = false;
            return QVideoWidget::qt_metacall(param1, param2, param3);
        } else if (qvideowidget_metacall_callback != nullptr) {
            return qvideowidget_metacall_callback(this, param1, param2, param3);
        } else {
            return QVideoWidget::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qvideowidget_sizehint_isbase) {
            qvideowidget_sizehint_isbase = false;
            return QVideoWidget::sizeHint();
        } else if (qvideowidget_sizehint_callback != nullptr) {
            return qvideowidget_sizehint_callback();
        } else {
            return QVideoWidget::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qvideowidget_event_isbase) {
            qvideowidget_event_isbase = false;
            return QVideoWidget::event(event);
        } else if (qvideowidget_event_callback != nullptr) {
            return qvideowidget_event_callback(this, event);
        } else {
            return QVideoWidget::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qvideowidget_showevent_isbase) {
            qvideowidget_showevent_isbase = false;
            QVideoWidget::showEvent(event);
        } else if (qvideowidget_showevent_callback != nullptr) {
            qvideowidget_showevent_callback(this, event);
        } else {
            QVideoWidget::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qvideowidget_hideevent_isbase) {
            qvideowidget_hideevent_isbase = false;
            QVideoWidget::hideEvent(event);
        } else if (qvideowidget_hideevent_callback != nullptr) {
            qvideowidget_hideevent_callback(this, event);
        } else {
            QVideoWidget::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qvideowidget_resizeevent_isbase) {
            qvideowidget_resizeevent_isbase = false;
            QVideoWidget::resizeEvent(event);
        } else if (qvideowidget_resizeevent_callback != nullptr) {
            qvideowidget_resizeevent_callback(this, event);
        } else {
            QVideoWidget::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qvideowidget_moveevent_isbase) {
            qvideowidget_moveevent_isbase = false;
            QVideoWidget::moveEvent(event);
        } else if (qvideowidget_moveevent_callback != nullptr) {
            qvideowidget_moveevent_callback(this, event);
        } else {
            QVideoWidget::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qvideowidget_devtype_isbase) {
            qvideowidget_devtype_isbase = false;
            return QVideoWidget::devType();
        } else if (qvideowidget_devtype_callback != nullptr) {
            return qvideowidget_devtype_callback();
        } else {
            return QVideoWidget::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qvideowidget_setvisible_isbase) {
            qvideowidget_setvisible_isbase = false;
            QVideoWidget::setVisible(visible);
        } else if (qvideowidget_setvisible_callback != nullptr) {
            qvideowidget_setvisible_callback(this, visible);
        } else {
            QVideoWidget::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qvideowidget_minimumsizehint_isbase) {
            qvideowidget_minimumsizehint_isbase = false;
            return QVideoWidget::minimumSizeHint();
        } else if (qvideowidget_minimumsizehint_callback != nullptr) {
            return qvideowidget_minimumsizehint_callback();
        } else {
            return QVideoWidget::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qvideowidget_heightforwidth_isbase) {
            qvideowidget_heightforwidth_isbase = false;
            return QVideoWidget::heightForWidth(param1);
        } else if (qvideowidget_heightforwidth_callback != nullptr) {
            return qvideowidget_heightforwidth_callback(this, param1);
        } else {
            return QVideoWidget::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qvideowidget_hasheightforwidth_isbase) {
            qvideowidget_hasheightforwidth_isbase = false;
            return QVideoWidget::hasHeightForWidth();
        } else if (qvideowidget_hasheightforwidth_callback != nullptr) {
            return qvideowidget_hasheightforwidth_callback();
        } else {
            return QVideoWidget::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qvideowidget_paintengine_isbase) {
            qvideowidget_paintengine_isbase = false;
            return QVideoWidget::paintEngine();
        } else if (qvideowidget_paintengine_callback != nullptr) {
            return qvideowidget_paintengine_callback();
        } else {
            return QVideoWidget::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qvideowidget_mousepressevent_isbase) {
            qvideowidget_mousepressevent_isbase = false;
            QVideoWidget::mousePressEvent(event);
        } else if (qvideowidget_mousepressevent_callback != nullptr) {
            qvideowidget_mousepressevent_callback(this, event);
        } else {
            QVideoWidget::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qvideowidget_mousereleaseevent_isbase) {
            qvideowidget_mousereleaseevent_isbase = false;
            QVideoWidget::mouseReleaseEvent(event);
        } else if (qvideowidget_mousereleaseevent_callback != nullptr) {
            qvideowidget_mousereleaseevent_callback(this, event);
        } else {
            QVideoWidget::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qvideowidget_mousedoubleclickevent_isbase) {
            qvideowidget_mousedoubleclickevent_isbase = false;
            QVideoWidget::mouseDoubleClickEvent(event);
        } else if (qvideowidget_mousedoubleclickevent_callback != nullptr) {
            qvideowidget_mousedoubleclickevent_callback(this, event);
        } else {
            QVideoWidget::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qvideowidget_mousemoveevent_isbase) {
            qvideowidget_mousemoveevent_isbase = false;
            QVideoWidget::mouseMoveEvent(event);
        } else if (qvideowidget_mousemoveevent_callback != nullptr) {
            qvideowidget_mousemoveevent_callback(this, event);
        } else {
            QVideoWidget::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qvideowidget_wheelevent_isbase) {
            qvideowidget_wheelevent_isbase = false;
            QVideoWidget::wheelEvent(event);
        } else if (qvideowidget_wheelevent_callback != nullptr) {
            qvideowidget_wheelevent_callback(this, event);
        } else {
            QVideoWidget::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qvideowidget_keypressevent_isbase) {
            qvideowidget_keypressevent_isbase = false;
            QVideoWidget::keyPressEvent(event);
        } else if (qvideowidget_keypressevent_callback != nullptr) {
            qvideowidget_keypressevent_callback(this, event);
        } else {
            QVideoWidget::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qvideowidget_keyreleaseevent_isbase) {
            qvideowidget_keyreleaseevent_isbase = false;
            QVideoWidget::keyReleaseEvent(event);
        } else if (qvideowidget_keyreleaseevent_callback != nullptr) {
            qvideowidget_keyreleaseevent_callback(this, event);
        } else {
            QVideoWidget::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qvideowidget_focusinevent_isbase) {
            qvideowidget_focusinevent_isbase = false;
            QVideoWidget::focusInEvent(event);
        } else if (qvideowidget_focusinevent_callback != nullptr) {
            qvideowidget_focusinevent_callback(this, event);
        } else {
            QVideoWidget::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qvideowidget_focusoutevent_isbase) {
            qvideowidget_focusoutevent_isbase = false;
            QVideoWidget::focusOutEvent(event);
        } else if (qvideowidget_focusoutevent_callback != nullptr) {
            qvideowidget_focusoutevent_callback(this, event);
        } else {
            QVideoWidget::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qvideowidget_enterevent_isbase) {
            qvideowidget_enterevent_isbase = false;
            QVideoWidget::enterEvent(event);
        } else if (qvideowidget_enterevent_callback != nullptr) {
            qvideowidget_enterevent_callback(this, event);
        } else {
            QVideoWidget::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qvideowidget_leaveevent_isbase) {
            qvideowidget_leaveevent_isbase = false;
            QVideoWidget::leaveEvent(event);
        } else if (qvideowidget_leaveevent_callback != nullptr) {
            qvideowidget_leaveevent_callback(this, event);
        } else {
            QVideoWidget::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qvideowidget_paintevent_isbase) {
            qvideowidget_paintevent_isbase = false;
            QVideoWidget::paintEvent(event);
        } else if (qvideowidget_paintevent_callback != nullptr) {
            qvideowidget_paintevent_callback(this, event);
        } else {
            QVideoWidget::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qvideowidget_closeevent_isbase) {
            qvideowidget_closeevent_isbase = false;
            QVideoWidget::closeEvent(event);
        } else if (qvideowidget_closeevent_callback != nullptr) {
            qvideowidget_closeevent_callback(this, event);
        } else {
            QVideoWidget::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qvideowidget_contextmenuevent_isbase) {
            qvideowidget_contextmenuevent_isbase = false;
            QVideoWidget::contextMenuEvent(event);
        } else if (qvideowidget_contextmenuevent_callback != nullptr) {
            qvideowidget_contextmenuevent_callback(this, event);
        } else {
            QVideoWidget::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qvideowidget_tabletevent_isbase) {
            qvideowidget_tabletevent_isbase = false;
            QVideoWidget::tabletEvent(event);
        } else if (qvideowidget_tabletevent_callback != nullptr) {
            qvideowidget_tabletevent_callback(this, event);
        } else {
            QVideoWidget::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qvideowidget_actionevent_isbase) {
            qvideowidget_actionevent_isbase = false;
            QVideoWidget::actionEvent(event);
        } else if (qvideowidget_actionevent_callback != nullptr) {
            qvideowidget_actionevent_callback(this, event);
        } else {
            QVideoWidget::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qvideowidget_dragenterevent_isbase) {
            qvideowidget_dragenterevent_isbase = false;
            QVideoWidget::dragEnterEvent(event);
        } else if (qvideowidget_dragenterevent_callback != nullptr) {
            qvideowidget_dragenterevent_callback(this, event);
        } else {
            QVideoWidget::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qvideowidget_dragmoveevent_isbase) {
            qvideowidget_dragmoveevent_isbase = false;
            QVideoWidget::dragMoveEvent(event);
        } else if (qvideowidget_dragmoveevent_callback != nullptr) {
            qvideowidget_dragmoveevent_callback(this, event);
        } else {
            QVideoWidget::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qvideowidget_dragleaveevent_isbase) {
            qvideowidget_dragleaveevent_isbase = false;
            QVideoWidget::dragLeaveEvent(event);
        } else if (qvideowidget_dragleaveevent_callback != nullptr) {
            qvideowidget_dragleaveevent_callback(this, event);
        } else {
            QVideoWidget::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qvideowidget_dropevent_isbase) {
            qvideowidget_dropevent_isbase = false;
            QVideoWidget::dropEvent(event);
        } else if (qvideowidget_dropevent_callback != nullptr) {
            qvideowidget_dropevent_callback(this, event);
        } else {
            QVideoWidget::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qvideowidget_nativeevent_isbase) {
            qvideowidget_nativeevent_isbase = false;
            return QVideoWidget::nativeEvent(eventType, message, result);
        } else if (qvideowidget_nativeevent_callback != nullptr) {
            return qvideowidget_nativeevent_callback(this, eventType, message, result);
        } else {
            return QVideoWidget::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qvideowidget_changeevent_isbase) {
            qvideowidget_changeevent_isbase = false;
            QVideoWidget::changeEvent(param1);
        } else if (qvideowidget_changeevent_callback != nullptr) {
            qvideowidget_changeevent_callback(this, param1);
        } else {
            QVideoWidget::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qvideowidget_metric_isbase) {
            qvideowidget_metric_isbase = false;
            return QVideoWidget::metric(param1);
        } else if (qvideowidget_metric_callback != nullptr) {
            return qvideowidget_metric_callback(this, param1);
        } else {
            return QVideoWidget::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qvideowidget_initpainter_isbase) {
            qvideowidget_initpainter_isbase = false;
            QVideoWidget::initPainter(painter);
        } else if (qvideowidget_initpainter_callback != nullptr) {
            qvideowidget_initpainter_callback(this, painter);
        } else {
            QVideoWidget::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qvideowidget_redirected_isbase) {
            qvideowidget_redirected_isbase = false;
            return QVideoWidget::redirected(offset);
        } else if (qvideowidget_redirected_callback != nullptr) {
            return qvideowidget_redirected_callback(this, offset);
        } else {
            return QVideoWidget::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qvideowidget_sharedpainter_isbase) {
            qvideowidget_sharedpainter_isbase = false;
            return QVideoWidget::sharedPainter();
        } else if (qvideowidget_sharedpainter_callback != nullptr) {
            return qvideowidget_sharedpainter_callback();
        } else {
            return QVideoWidget::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qvideowidget_inputmethodevent_isbase) {
            qvideowidget_inputmethodevent_isbase = false;
            QVideoWidget::inputMethodEvent(param1);
        } else if (qvideowidget_inputmethodevent_callback != nullptr) {
            qvideowidget_inputmethodevent_callback(this, param1);
        } else {
            QVideoWidget::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qvideowidget_inputmethodquery_isbase) {
            qvideowidget_inputmethodquery_isbase = false;
            return QVideoWidget::inputMethodQuery(param1);
        } else if (qvideowidget_inputmethodquery_callback != nullptr) {
            return qvideowidget_inputmethodquery_callback(this, param1);
        } else {
            return QVideoWidget::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qvideowidget_focusnextprevchild_isbase) {
            qvideowidget_focusnextprevchild_isbase = false;
            return QVideoWidget::focusNextPrevChild(next);
        } else if (qvideowidget_focusnextprevchild_callback != nullptr) {
            return qvideowidget_focusnextprevchild_callback(this, next);
        } else {
            return QVideoWidget::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qvideowidget_eventfilter_isbase) {
            qvideowidget_eventfilter_isbase = false;
            return QVideoWidget::eventFilter(watched, event);
        } else if (qvideowidget_eventfilter_callback != nullptr) {
            return qvideowidget_eventfilter_callback(this, watched, event);
        } else {
            return QVideoWidget::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qvideowidget_timerevent_isbase) {
            qvideowidget_timerevent_isbase = false;
            QVideoWidget::timerEvent(event);
        } else if (qvideowidget_timerevent_callback != nullptr) {
            qvideowidget_timerevent_callback(this, event);
        } else {
            QVideoWidget::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qvideowidget_childevent_isbase) {
            qvideowidget_childevent_isbase = false;
            QVideoWidget::childEvent(event);
        } else if (qvideowidget_childevent_callback != nullptr) {
            qvideowidget_childevent_callback(this, event);
        } else {
            QVideoWidget::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qvideowidget_customevent_isbase) {
            qvideowidget_customevent_isbase = false;
            QVideoWidget::customEvent(event);
        } else if (qvideowidget_customevent_callback != nullptr) {
            qvideowidget_customevent_callback(this, event);
        } else {
            QVideoWidget::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qvideowidget_connectnotify_isbase) {
            qvideowidget_connectnotify_isbase = false;
            QVideoWidget::connectNotify(signal);
        } else if (qvideowidget_connectnotify_callback != nullptr) {
            qvideowidget_connectnotify_callback(this, signal);
        } else {
            QVideoWidget::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qvideowidget_disconnectnotify_isbase) {
            qvideowidget_disconnectnotify_isbase = false;
            QVideoWidget::disconnectNotify(signal);
        } else if (qvideowidget_disconnectnotify_callback != nullptr) {
            qvideowidget_disconnectnotify_callback(this, signal);
        } else {
            QVideoWidget::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qvideowidget_updatemicrofocus_isbase) {
            qvideowidget_updatemicrofocus_isbase = false;
            QVideoWidget::updateMicroFocus();
        } else if (qvideowidget_updatemicrofocus_callback != nullptr) {
            qvideowidget_updatemicrofocus_callback();
        } else {
            QVideoWidget::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qvideowidget_create_isbase) {
            qvideowidget_create_isbase = false;
            QVideoWidget::create();
        } else if (qvideowidget_create_callback != nullptr) {
            qvideowidget_create_callback();
        } else {
            QVideoWidget::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qvideowidget_destroy_isbase) {
            qvideowidget_destroy_isbase = false;
            QVideoWidget::destroy();
        } else if (qvideowidget_destroy_callback != nullptr) {
            qvideowidget_destroy_callback();
        } else {
            QVideoWidget::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qvideowidget_focusnextchild_isbase) {
            qvideowidget_focusnextchild_isbase = false;
            return QVideoWidget::focusNextChild();
        } else if (qvideowidget_focusnextchild_callback != nullptr) {
            return qvideowidget_focusnextchild_callback();
        } else {
            return QVideoWidget::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qvideowidget_focuspreviouschild_isbase) {
            qvideowidget_focuspreviouschild_isbase = false;
            return QVideoWidget::focusPreviousChild();
        } else if (qvideowidget_focuspreviouschild_callback != nullptr) {
            return qvideowidget_focuspreviouschild_callback();
        } else {
            return QVideoWidget::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qvideowidget_sender_isbase) {
            qvideowidget_sender_isbase = false;
            return QVideoWidget::sender();
        } else if (qvideowidget_sender_callback != nullptr) {
            return qvideowidget_sender_callback();
        } else {
            return QVideoWidget::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qvideowidget_sendersignalindex_isbase) {
            qvideowidget_sendersignalindex_isbase = false;
            return QVideoWidget::senderSignalIndex();
        } else if (qvideowidget_sendersignalindex_callback != nullptr) {
            return qvideowidget_sendersignalindex_callback();
        } else {
            return QVideoWidget::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qvideowidget_receivers_isbase) {
            qvideowidget_receivers_isbase = false;
            return QVideoWidget::receivers(signal);
        } else if (qvideowidget_receivers_callback != nullptr) {
            return qvideowidget_receivers_callback(this, signal);
        } else {
            return QVideoWidget::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qvideowidget_issignalconnected_isbase) {
            qvideowidget_issignalconnected_isbase = false;
            return QVideoWidget::isSignalConnected(signal);
        } else if (qvideowidget_issignalconnected_callback != nullptr) {
            return qvideowidget_issignalconnected_callback(this, signal);
        } else {
            return QVideoWidget::isSignalConnected(signal);
        }
    }
};

#endif
