#pragma once
#ifndef SRCC_LIBVIRTUALQSTACKEDWIDGET_H
#define SRCC_LIBVIRTUALQSTACKEDWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QStackedWidget so that we can call protected methods
class VirtualQStackedWidget : public QStackedWidget {

  public:
    // Virtual class public types (including callbacks)
    using QStackedWidget_Metacall_Callback = int (*)(QStackedWidget*, QMetaObject::Call, int, void**);
    using QStackedWidget_Event_Callback = bool (*)(QStackedWidget*, QEvent*);
    using QStackedWidget_SizeHint_Callback = QSize (*)();
    using QStackedWidget_PaintEvent_Callback = void (*)(QStackedWidget*, QPaintEvent*);
    using QStackedWidget_ChangeEvent_Callback = void (*)(QStackedWidget*, QEvent*);
    using QStackedWidget_InitStyleOption_Callback = void (*)(const QStackedWidget*, QStyleOptionFrame*);
    using QStackedWidget_DevType_Callback = int (*)();
    using QStackedWidget_SetVisible_Callback = void (*)(QStackedWidget*, bool);
    using QStackedWidget_MinimumSizeHint_Callback = QSize (*)();
    using QStackedWidget_HeightForWidth_Callback = int (*)(const QStackedWidget*, int);
    using QStackedWidget_HasHeightForWidth_Callback = bool (*)();
    using QStackedWidget_PaintEngine_Callback = QPaintEngine* (*)();
    using QStackedWidget_MousePressEvent_Callback = void (*)(QStackedWidget*, QMouseEvent*);
    using QStackedWidget_MouseReleaseEvent_Callback = void (*)(QStackedWidget*, QMouseEvent*);
    using QStackedWidget_MouseDoubleClickEvent_Callback = void (*)(QStackedWidget*, QMouseEvent*);
    using QStackedWidget_MouseMoveEvent_Callback = void (*)(QStackedWidget*, QMouseEvent*);
    using QStackedWidget_WheelEvent_Callback = void (*)(QStackedWidget*, QWheelEvent*);
    using QStackedWidget_KeyPressEvent_Callback = void (*)(QStackedWidget*, QKeyEvent*);
    using QStackedWidget_KeyReleaseEvent_Callback = void (*)(QStackedWidget*, QKeyEvent*);
    using QStackedWidget_FocusInEvent_Callback = void (*)(QStackedWidget*, QFocusEvent*);
    using QStackedWidget_FocusOutEvent_Callback = void (*)(QStackedWidget*, QFocusEvent*);
    using QStackedWidget_EnterEvent_Callback = void (*)(QStackedWidget*, QEnterEvent*);
    using QStackedWidget_LeaveEvent_Callback = void (*)(QStackedWidget*, QEvent*);
    using QStackedWidget_MoveEvent_Callback = void (*)(QStackedWidget*, QMoveEvent*);
    using QStackedWidget_ResizeEvent_Callback = void (*)(QStackedWidget*, QResizeEvent*);
    using QStackedWidget_CloseEvent_Callback = void (*)(QStackedWidget*, QCloseEvent*);
    using QStackedWidget_ContextMenuEvent_Callback = void (*)(QStackedWidget*, QContextMenuEvent*);
    using QStackedWidget_TabletEvent_Callback = void (*)(QStackedWidget*, QTabletEvent*);
    using QStackedWidget_ActionEvent_Callback = void (*)(QStackedWidget*, QActionEvent*);
    using QStackedWidget_DragEnterEvent_Callback = void (*)(QStackedWidget*, QDragEnterEvent*);
    using QStackedWidget_DragMoveEvent_Callback = void (*)(QStackedWidget*, QDragMoveEvent*);
    using QStackedWidget_DragLeaveEvent_Callback = void (*)(QStackedWidget*, QDragLeaveEvent*);
    using QStackedWidget_DropEvent_Callback = void (*)(QStackedWidget*, QDropEvent*);
    using QStackedWidget_ShowEvent_Callback = void (*)(QStackedWidget*, QShowEvent*);
    using QStackedWidget_HideEvent_Callback = void (*)(QStackedWidget*, QHideEvent*);
    using QStackedWidget_NativeEvent_Callback = bool (*)(QStackedWidget*, const QByteArray&, void*, qintptr*);
    using QStackedWidget_Metric_Callback = int (*)(const QStackedWidget*, QPaintDevice::PaintDeviceMetric);
    using QStackedWidget_InitPainter_Callback = void (*)(const QStackedWidget*, QPainter*);
    using QStackedWidget_Redirected_Callback = QPaintDevice* (*)(const QStackedWidget*, QPoint*);
    using QStackedWidget_SharedPainter_Callback = QPainter* (*)();
    using QStackedWidget_InputMethodEvent_Callback = void (*)(QStackedWidget*, QInputMethodEvent*);
    using QStackedWidget_InputMethodQuery_Callback = QVariant (*)(const QStackedWidget*, Qt::InputMethodQuery);
    using QStackedWidget_FocusNextPrevChild_Callback = bool (*)(QStackedWidget*, bool);
    using QStackedWidget_EventFilter_Callback = bool (*)(QStackedWidget*, QObject*, QEvent*);
    using QStackedWidget_TimerEvent_Callback = void (*)(QStackedWidget*, QTimerEvent*);
    using QStackedWidget_ChildEvent_Callback = void (*)(QStackedWidget*, QChildEvent*);
    using QStackedWidget_CustomEvent_Callback = void (*)(QStackedWidget*, QEvent*);
    using QStackedWidget_ConnectNotify_Callback = void (*)(QStackedWidget*, const QMetaMethod&);
    using QStackedWidget_DisconnectNotify_Callback = void (*)(QStackedWidget*, const QMetaMethod&);
    using QStackedWidget_DrawFrame_Callback = void (*)(QStackedWidget*, QPainter*);
    using QStackedWidget_UpdateMicroFocus_Callback = void (*)();
    using QStackedWidget_Create_Callback = void (*)();
    using QStackedWidget_Destroy_Callback = void (*)();
    using QStackedWidget_FocusNextChild_Callback = bool (*)();
    using QStackedWidget_FocusPreviousChild_Callback = bool (*)();
    using QStackedWidget_Sender_Callback = QObject* (*)();
    using QStackedWidget_SenderSignalIndex_Callback = int (*)();
    using QStackedWidget_Receivers_Callback = int (*)(const QStackedWidget*, const char*);
    using QStackedWidget_IsSignalConnected_Callback = bool (*)(const QStackedWidget*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QStackedWidget_Metacall_Callback qstackedwidget_metacall_callback = nullptr;
    QStackedWidget_Event_Callback qstackedwidget_event_callback = nullptr;
    QStackedWidget_SizeHint_Callback qstackedwidget_sizehint_callback = nullptr;
    QStackedWidget_PaintEvent_Callback qstackedwidget_paintevent_callback = nullptr;
    QStackedWidget_ChangeEvent_Callback qstackedwidget_changeevent_callback = nullptr;
    QStackedWidget_InitStyleOption_Callback qstackedwidget_initstyleoption_callback = nullptr;
    QStackedWidget_DevType_Callback qstackedwidget_devtype_callback = nullptr;
    QStackedWidget_SetVisible_Callback qstackedwidget_setvisible_callback = nullptr;
    QStackedWidget_MinimumSizeHint_Callback qstackedwidget_minimumsizehint_callback = nullptr;
    QStackedWidget_HeightForWidth_Callback qstackedwidget_heightforwidth_callback = nullptr;
    QStackedWidget_HasHeightForWidth_Callback qstackedwidget_hasheightforwidth_callback = nullptr;
    QStackedWidget_PaintEngine_Callback qstackedwidget_paintengine_callback = nullptr;
    QStackedWidget_MousePressEvent_Callback qstackedwidget_mousepressevent_callback = nullptr;
    QStackedWidget_MouseReleaseEvent_Callback qstackedwidget_mousereleaseevent_callback = nullptr;
    QStackedWidget_MouseDoubleClickEvent_Callback qstackedwidget_mousedoubleclickevent_callback = nullptr;
    QStackedWidget_MouseMoveEvent_Callback qstackedwidget_mousemoveevent_callback = nullptr;
    QStackedWidget_WheelEvent_Callback qstackedwidget_wheelevent_callback = nullptr;
    QStackedWidget_KeyPressEvent_Callback qstackedwidget_keypressevent_callback = nullptr;
    QStackedWidget_KeyReleaseEvent_Callback qstackedwidget_keyreleaseevent_callback = nullptr;
    QStackedWidget_FocusInEvent_Callback qstackedwidget_focusinevent_callback = nullptr;
    QStackedWidget_FocusOutEvent_Callback qstackedwidget_focusoutevent_callback = nullptr;
    QStackedWidget_EnterEvent_Callback qstackedwidget_enterevent_callback = nullptr;
    QStackedWidget_LeaveEvent_Callback qstackedwidget_leaveevent_callback = nullptr;
    QStackedWidget_MoveEvent_Callback qstackedwidget_moveevent_callback = nullptr;
    QStackedWidget_ResizeEvent_Callback qstackedwidget_resizeevent_callback = nullptr;
    QStackedWidget_CloseEvent_Callback qstackedwidget_closeevent_callback = nullptr;
    QStackedWidget_ContextMenuEvent_Callback qstackedwidget_contextmenuevent_callback = nullptr;
    QStackedWidget_TabletEvent_Callback qstackedwidget_tabletevent_callback = nullptr;
    QStackedWidget_ActionEvent_Callback qstackedwidget_actionevent_callback = nullptr;
    QStackedWidget_DragEnterEvent_Callback qstackedwidget_dragenterevent_callback = nullptr;
    QStackedWidget_DragMoveEvent_Callback qstackedwidget_dragmoveevent_callback = nullptr;
    QStackedWidget_DragLeaveEvent_Callback qstackedwidget_dragleaveevent_callback = nullptr;
    QStackedWidget_DropEvent_Callback qstackedwidget_dropevent_callback = nullptr;
    QStackedWidget_ShowEvent_Callback qstackedwidget_showevent_callback = nullptr;
    QStackedWidget_HideEvent_Callback qstackedwidget_hideevent_callback = nullptr;
    QStackedWidget_NativeEvent_Callback qstackedwidget_nativeevent_callback = nullptr;
    QStackedWidget_Metric_Callback qstackedwidget_metric_callback = nullptr;
    QStackedWidget_InitPainter_Callback qstackedwidget_initpainter_callback = nullptr;
    QStackedWidget_Redirected_Callback qstackedwidget_redirected_callback = nullptr;
    QStackedWidget_SharedPainter_Callback qstackedwidget_sharedpainter_callback = nullptr;
    QStackedWidget_InputMethodEvent_Callback qstackedwidget_inputmethodevent_callback = nullptr;
    QStackedWidget_InputMethodQuery_Callback qstackedwidget_inputmethodquery_callback = nullptr;
    QStackedWidget_FocusNextPrevChild_Callback qstackedwidget_focusnextprevchild_callback = nullptr;
    QStackedWidget_EventFilter_Callback qstackedwidget_eventfilter_callback = nullptr;
    QStackedWidget_TimerEvent_Callback qstackedwidget_timerevent_callback = nullptr;
    QStackedWidget_ChildEvent_Callback qstackedwidget_childevent_callback = nullptr;
    QStackedWidget_CustomEvent_Callback qstackedwidget_customevent_callback = nullptr;
    QStackedWidget_ConnectNotify_Callback qstackedwidget_connectnotify_callback = nullptr;
    QStackedWidget_DisconnectNotify_Callback qstackedwidget_disconnectnotify_callback = nullptr;
    QStackedWidget_DrawFrame_Callback qstackedwidget_drawframe_callback = nullptr;
    QStackedWidget_UpdateMicroFocus_Callback qstackedwidget_updatemicrofocus_callback = nullptr;
    QStackedWidget_Create_Callback qstackedwidget_create_callback = nullptr;
    QStackedWidget_Destroy_Callback qstackedwidget_destroy_callback = nullptr;
    QStackedWidget_FocusNextChild_Callback qstackedwidget_focusnextchild_callback = nullptr;
    QStackedWidget_FocusPreviousChild_Callback qstackedwidget_focuspreviouschild_callback = nullptr;
    QStackedWidget_Sender_Callback qstackedwidget_sender_callback = nullptr;
    QStackedWidget_SenderSignalIndex_Callback qstackedwidget_sendersignalindex_callback = nullptr;
    QStackedWidget_Receivers_Callback qstackedwidget_receivers_callback = nullptr;
    QStackedWidget_IsSignalConnected_Callback qstackedwidget_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qstackedwidget_metacall_isbase = false;
    mutable bool qstackedwidget_event_isbase = false;
    mutable bool qstackedwidget_sizehint_isbase = false;
    mutable bool qstackedwidget_paintevent_isbase = false;
    mutable bool qstackedwidget_changeevent_isbase = false;
    mutable bool qstackedwidget_initstyleoption_isbase = false;
    mutable bool qstackedwidget_devtype_isbase = false;
    mutable bool qstackedwidget_setvisible_isbase = false;
    mutable bool qstackedwidget_minimumsizehint_isbase = false;
    mutable bool qstackedwidget_heightforwidth_isbase = false;
    mutable bool qstackedwidget_hasheightforwidth_isbase = false;
    mutable bool qstackedwidget_paintengine_isbase = false;
    mutable bool qstackedwidget_mousepressevent_isbase = false;
    mutable bool qstackedwidget_mousereleaseevent_isbase = false;
    mutable bool qstackedwidget_mousedoubleclickevent_isbase = false;
    mutable bool qstackedwidget_mousemoveevent_isbase = false;
    mutable bool qstackedwidget_wheelevent_isbase = false;
    mutable bool qstackedwidget_keypressevent_isbase = false;
    mutable bool qstackedwidget_keyreleaseevent_isbase = false;
    mutable bool qstackedwidget_focusinevent_isbase = false;
    mutable bool qstackedwidget_focusoutevent_isbase = false;
    mutable bool qstackedwidget_enterevent_isbase = false;
    mutable bool qstackedwidget_leaveevent_isbase = false;
    mutable bool qstackedwidget_moveevent_isbase = false;
    mutable bool qstackedwidget_resizeevent_isbase = false;
    mutable bool qstackedwidget_closeevent_isbase = false;
    mutable bool qstackedwidget_contextmenuevent_isbase = false;
    mutable bool qstackedwidget_tabletevent_isbase = false;
    mutable bool qstackedwidget_actionevent_isbase = false;
    mutable bool qstackedwidget_dragenterevent_isbase = false;
    mutable bool qstackedwidget_dragmoveevent_isbase = false;
    mutable bool qstackedwidget_dragleaveevent_isbase = false;
    mutable bool qstackedwidget_dropevent_isbase = false;
    mutable bool qstackedwidget_showevent_isbase = false;
    mutable bool qstackedwidget_hideevent_isbase = false;
    mutable bool qstackedwidget_nativeevent_isbase = false;
    mutable bool qstackedwidget_metric_isbase = false;
    mutable bool qstackedwidget_initpainter_isbase = false;
    mutable bool qstackedwidget_redirected_isbase = false;
    mutable bool qstackedwidget_sharedpainter_isbase = false;
    mutable bool qstackedwidget_inputmethodevent_isbase = false;
    mutable bool qstackedwidget_inputmethodquery_isbase = false;
    mutable bool qstackedwidget_focusnextprevchild_isbase = false;
    mutable bool qstackedwidget_eventfilter_isbase = false;
    mutable bool qstackedwidget_timerevent_isbase = false;
    mutable bool qstackedwidget_childevent_isbase = false;
    mutable bool qstackedwidget_customevent_isbase = false;
    mutable bool qstackedwidget_connectnotify_isbase = false;
    mutable bool qstackedwidget_disconnectnotify_isbase = false;
    mutable bool qstackedwidget_drawframe_isbase = false;
    mutable bool qstackedwidget_updatemicrofocus_isbase = false;
    mutable bool qstackedwidget_create_isbase = false;
    mutable bool qstackedwidget_destroy_isbase = false;
    mutable bool qstackedwidget_focusnextchild_isbase = false;
    mutable bool qstackedwidget_focuspreviouschild_isbase = false;
    mutable bool qstackedwidget_sender_isbase = false;
    mutable bool qstackedwidget_sendersignalindex_isbase = false;
    mutable bool qstackedwidget_receivers_isbase = false;
    mutable bool qstackedwidget_issignalconnected_isbase = false;

  public:
    VirtualQStackedWidget(QWidget* parent) : QStackedWidget(parent){};
    VirtualQStackedWidget() : QStackedWidget(){};

    ~VirtualQStackedWidget() {
        qstackedwidget_metacall_callback = nullptr;
        qstackedwidget_event_callback = nullptr;
        qstackedwidget_sizehint_callback = nullptr;
        qstackedwidget_paintevent_callback = nullptr;
        qstackedwidget_changeevent_callback = nullptr;
        qstackedwidget_initstyleoption_callback = nullptr;
        qstackedwidget_devtype_callback = nullptr;
        qstackedwidget_setvisible_callback = nullptr;
        qstackedwidget_minimumsizehint_callback = nullptr;
        qstackedwidget_heightforwidth_callback = nullptr;
        qstackedwidget_hasheightforwidth_callback = nullptr;
        qstackedwidget_paintengine_callback = nullptr;
        qstackedwidget_mousepressevent_callback = nullptr;
        qstackedwidget_mousereleaseevent_callback = nullptr;
        qstackedwidget_mousedoubleclickevent_callback = nullptr;
        qstackedwidget_mousemoveevent_callback = nullptr;
        qstackedwidget_wheelevent_callback = nullptr;
        qstackedwidget_keypressevent_callback = nullptr;
        qstackedwidget_keyreleaseevent_callback = nullptr;
        qstackedwidget_focusinevent_callback = nullptr;
        qstackedwidget_focusoutevent_callback = nullptr;
        qstackedwidget_enterevent_callback = nullptr;
        qstackedwidget_leaveevent_callback = nullptr;
        qstackedwidget_moveevent_callback = nullptr;
        qstackedwidget_resizeevent_callback = nullptr;
        qstackedwidget_closeevent_callback = nullptr;
        qstackedwidget_contextmenuevent_callback = nullptr;
        qstackedwidget_tabletevent_callback = nullptr;
        qstackedwidget_actionevent_callback = nullptr;
        qstackedwidget_dragenterevent_callback = nullptr;
        qstackedwidget_dragmoveevent_callback = nullptr;
        qstackedwidget_dragleaveevent_callback = nullptr;
        qstackedwidget_dropevent_callback = nullptr;
        qstackedwidget_showevent_callback = nullptr;
        qstackedwidget_hideevent_callback = nullptr;
        qstackedwidget_nativeevent_callback = nullptr;
        qstackedwidget_metric_callback = nullptr;
        qstackedwidget_initpainter_callback = nullptr;
        qstackedwidget_redirected_callback = nullptr;
        qstackedwidget_sharedpainter_callback = nullptr;
        qstackedwidget_inputmethodevent_callback = nullptr;
        qstackedwidget_inputmethodquery_callback = nullptr;
        qstackedwidget_focusnextprevchild_callback = nullptr;
        qstackedwidget_eventfilter_callback = nullptr;
        qstackedwidget_timerevent_callback = nullptr;
        qstackedwidget_childevent_callback = nullptr;
        qstackedwidget_customevent_callback = nullptr;
        qstackedwidget_connectnotify_callback = nullptr;
        qstackedwidget_disconnectnotify_callback = nullptr;
        qstackedwidget_drawframe_callback = nullptr;
        qstackedwidget_updatemicrofocus_callback = nullptr;
        qstackedwidget_create_callback = nullptr;
        qstackedwidget_destroy_callback = nullptr;
        qstackedwidget_focusnextchild_callback = nullptr;
        qstackedwidget_focuspreviouschild_callback = nullptr;
        qstackedwidget_sender_callback = nullptr;
        qstackedwidget_sendersignalindex_callback = nullptr;
        qstackedwidget_receivers_callback = nullptr;
        qstackedwidget_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQStackedWidget_Metacall_Callback(QStackedWidget_Metacall_Callback cb) { qstackedwidget_metacall_callback = cb; }
    void setQStackedWidget_Event_Callback(QStackedWidget_Event_Callback cb) { qstackedwidget_event_callback = cb; }
    void setQStackedWidget_SizeHint_Callback(QStackedWidget_SizeHint_Callback cb) { qstackedwidget_sizehint_callback = cb; }
    void setQStackedWidget_PaintEvent_Callback(QStackedWidget_PaintEvent_Callback cb) { qstackedwidget_paintevent_callback = cb; }
    void setQStackedWidget_ChangeEvent_Callback(QStackedWidget_ChangeEvent_Callback cb) { qstackedwidget_changeevent_callback = cb; }
    void setQStackedWidget_InitStyleOption_Callback(QStackedWidget_InitStyleOption_Callback cb) { qstackedwidget_initstyleoption_callback = cb; }
    void setQStackedWidget_DevType_Callback(QStackedWidget_DevType_Callback cb) { qstackedwidget_devtype_callback = cb; }
    void setQStackedWidget_SetVisible_Callback(QStackedWidget_SetVisible_Callback cb) { qstackedwidget_setvisible_callback = cb; }
    void setQStackedWidget_MinimumSizeHint_Callback(QStackedWidget_MinimumSizeHint_Callback cb) { qstackedwidget_minimumsizehint_callback = cb; }
    void setQStackedWidget_HeightForWidth_Callback(QStackedWidget_HeightForWidth_Callback cb) { qstackedwidget_heightforwidth_callback = cb; }
    void setQStackedWidget_HasHeightForWidth_Callback(QStackedWidget_HasHeightForWidth_Callback cb) { qstackedwidget_hasheightforwidth_callback = cb; }
    void setQStackedWidget_PaintEngine_Callback(QStackedWidget_PaintEngine_Callback cb) { qstackedwidget_paintengine_callback = cb; }
    void setQStackedWidget_MousePressEvent_Callback(QStackedWidget_MousePressEvent_Callback cb) { qstackedwidget_mousepressevent_callback = cb; }
    void setQStackedWidget_MouseReleaseEvent_Callback(QStackedWidget_MouseReleaseEvent_Callback cb) { qstackedwidget_mousereleaseevent_callback = cb; }
    void setQStackedWidget_MouseDoubleClickEvent_Callback(QStackedWidget_MouseDoubleClickEvent_Callback cb) { qstackedwidget_mousedoubleclickevent_callback = cb; }
    void setQStackedWidget_MouseMoveEvent_Callback(QStackedWidget_MouseMoveEvent_Callback cb) { qstackedwidget_mousemoveevent_callback = cb; }
    void setQStackedWidget_WheelEvent_Callback(QStackedWidget_WheelEvent_Callback cb) { qstackedwidget_wheelevent_callback = cb; }
    void setQStackedWidget_KeyPressEvent_Callback(QStackedWidget_KeyPressEvent_Callback cb) { qstackedwidget_keypressevent_callback = cb; }
    void setQStackedWidget_KeyReleaseEvent_Callback(QStackedWidget_KeyReleaseEvent_Callback cb) { qstackedwidget_keyreleaseevent_callback = cb; }
    void setQStackedWidget_FocusInEvent_Callback(QStackedWidget_FocusInEvent_Callback cb) { qstackedwidget_focusinevent_callback = cb; }
    void setQStackedWidget_FocusOutEvent_Callback(QStackedWidget_FocusOutEvent_Callback cb) { qstackedwidget_focusoutevent_callback = cb; }
    void setQStackedWidget_EnterEvent_Callback(QStackedWidget_EnterEvent_Callback cb) { qstackedwidget_enterevent_callback = cb; }
    void setQStackedWidget_LeaveEvent_Callback(QStackedWidget_LeaveEvent_Callback cb) { qstackedwidget_leaveevent_callback = cb; }
    void setQStackedWidget_MoveEvent_Callback(QStackedWidget_MoveEvent_Callback cb) { qstackedwidget_moveevent_callback = cb; }
    void setQStackedWidget_ResizeEvent_Callback(QStackedWidget_ResizeEvent_Callback cb) { qstackedwidget_resizeevent_callback = cb; }
    void setQStackedWidget_CloseEvent_Callback(QStackedWidget_CloseEvent_Callback cb) { qstackedwidget_closeevent_callback = cb; }
    void setQStackedWidget_ContextMenuEvent_Callback(QStackedWidget_ContextMenuEvent_Callback cb) { qstackedwidget_contextmenuevent_callback = cb; }
    void setQStackedWidget_TabletEvent_Callback(QStackedWidget_TabletEvent_Callback cb) { qstackedwidget_tabletevent_callback = cb; }
    void setQStackedWidget_ActionEvent_Callback(QStackedWidget_ActionEvent_Callback cb) { qstackedwidget_actionevent_callback = cb; }
    void setQStackedWidget_DragEnterEvent_Callback(QStackedWidget_DragEnterEvent_Callback cb) { qstackedwidget_dragenterevent_callback = cb; }
    void setQStackedWidget_DragMoveEvent_Callback(QStackedWidget_DragMoveEvent_Callback cb) { qstackedwidget_dragmoveevent_callback = cb; }
    void setQStackedWidget_DragLeaveEvent_Callback(QStackedWidget_DragLeaveEvent_Callback cb) { qstackedwidget_dragleaveevent_callback = cb; }
    void setQStackedWidget_DropEvent_Callback(QStackedWidget_DropEvent_Callback cb) { qstackedwidget_dropevent_callback = cb; }
    void setQStackedWidget_ShowEvent_Callback(QStackedWidget_ShowEvent_Callback cb) { qstackedwidget_showevent_callback = cb; }
    void setQStackedWidget_HideEvent_Callback(QStackedWidget_HideEvent_Callback cb) { qstackedwidget_hideevent_callback = cb; }
    void setQStackedWidget_NativeEvent_Callback(QStackedWidget_NativeEvent_Callback cb) { qstackedwidget_nativeevent_callback = cb; }
    void setQStackedWidget_Metric_Callback(QStackedWidget_Metric_Callback cb) { qstackedwidget_metric_callback = cb; }
    void setQStackedWidget_InitPainter_Callback(QStackedWidget_InitPainter_Callback cb) { qstackedwidget_initpainter_callback = cb; }
    void setQStackedWidget_Redirected_Callback(QStackedWidget_Redirected_Callback cb) { qstackedwidget_redirected_callback = cb; }
    void setQStackedWidget_SharedPainter_Callback(QStackedWidget_SharedPainter_Callback cb) { qstackedwidget_sharedpainter_callback = cb; }
    void setQStackedWidget_InputMethodEvent_Callback(QStackedWidget_InputMethodEvent_Callback cb) { qstackedwidget_inputmethodevent_callback = cb; }
    void setQStackedWidget_InputMethodQuery_Callback(QStackedWidget_InputMethodQuery_Callback cb) { qstackedwidget_inputmethodquery_callback = cb; }
    void setQStackedWidget_FocusNextPrevChild_Callback(QStackedWidget_FocusNextPrevChild_Callback cb) { qstackedwidget_focusnextprevchild_callback = cb; }
    void setQStackedWidget_EventFilter_Callback(QStackedWidget_EventFilter_Callback cb) { qstackedwidget_eventfilter_callback = cb; }
    void setQStackedWidget_TimerEvent_Callback(QStackedWidget_TimerEvent_Callback cb) { qstackedwidget_timerevent_callback = cb; }
    void setQStackedWidget_ChildEvent_Callback(QStackedWidget_ChildEvent_Callback cb) { qstackedwidget_childevent_callback = cb; }
    void setQStackedWidget_CustomEvent_Callback(QStackedWidget_CustomEvent_Callback cb) { qstackedwidget_customevent_callback = cb; }
    void setQStackedWidget_ConnectNotify_Callback(QStackedWidget_ConnectNotify_Callback cb) { qstackedwidget_connectnotify_callback = cb; }
    void setQStackedWidget_DisconnectNotify_Callback(QStackedWidget_DisconnectNotify_Callback cb) { qstackedwidget_disconnectnotify_callback = cb; }
    void setQStackedWidget_DrawFrame_Callback(QStackedWidget_DrawFrame_Callback cb) { qstackedwidget_drawframe_callback = cb; }
    void setQStackedWidget_UpdateMicroFocus_Callback(QStackedWidget_UpdateMicroFocus_Callback cb) { qstackedwidget_updatemicrofocus_callback = cb; }
    void setQStackedWidget_Create_Callback(QStackedWidget_Create_Callback cb) { qstackedwidget_create_callback = cb; }
    void setQStackedWidget_Destroy_Callback(QStackedWidget_Destroy_Callback cb) { qstackedwidget_destroy_callback = cb; }
    void setQStackedWidget_FocusNextChild_Callback(QStackedWidget_FocusNextChild_Callback cb) { qstackedwidget_focusnextchild_callback = cb; }
    void setQStackedWidget_FocusPreviousChild_Callback(QStackedWidget_FocusPreviousChild_Callback cb) { qstackedwidget_focuspreviouschild_callback = cb; }
    void setQStackedWidget_Sender_Callback(QStackedWidget_Sender_Callback cb) { qstackedwidget_sender_callback = cb; }
    void setQStackedWidget_SenderSignalIndex_Callback(QStackedWidget_SenderSignalIndex_Callback cb) { qstackedwidget_sendersignalindex_callback = cb; }
    void setQStackedWidget_Receivers_Callback(QStackedWidget_Receivers_Callback cb) { qstackedwidget_receivers_callback = cb; }
    void setQStackedWidget_IsSignalConnected_Callback(QStackedWidget_IsSignalConnected_Callback cb) { qstackedwidget_issignalconnected_callback = cb; }

    // Base flag setters
    void setQStackedWidget_Metacall_IsBase(bool value) const { qstackedwidget_metacall_isbase = value; }
    void setQStackedWidget_Event_IsBase(bool value) const { qstackedwidget_event_isbase = value; }
    void setQStackedWidget_SizeHint_IsBase(bool value) const { qstackedwidget_sizehint_isbase = value; }
    void setQStackedWidget_PaintEvent_IsBase(bool value) const { qstackedwidget_paintevent_isbase = value; }
    void setQStackedWidget_ChangeEvent_IsBase(bool value) const { qstackedwidget_changeevent_isbase = value; }
    void setQStackedWidget_InitStyleOption_IsBase(bool value) const { qstackedwidget_initstyleoption_isbase = value; }
    void setQStackedWidget_DevType_IsBase(bool value) const { qstackedwidget_devtype_isbase = value; }
    void setQStackedWidget_SetVisible_IsBase(bool value) const { qstackedwidget_setvisible_isbase = value; }
    void setQStackedWidget_MinimumSizeHint_IsBase(bool value) const { qstackedwidget_minimumsizehint_isbase = value; }
    void setQStackedWidget_HeightForWidth_IsBase(bool value) const { qstackedwidget_heightforwidth_isbase = value; }
    void setQStackedWidget_HasHeightForWidth_IsBase(bool value) const { qstackedwidget_hasheightforwidth_isbase = value; }
    void setQStackedWidget_PaintEngine_IsBase(bool value) const { qstackedwidget_paintengine_isbase = value; }
    void setQStackedWidget_MousePressEvent_IsBase(bool value) const { qstackedwidget_mousepressevent_isbase = value; }
    void setQStackedWidget_MouseReleaseEvent_IsBase(bool value) const { qstackedwidget_mousereleaseevent_isbase = value; }
    void setQStackedWidget_MouseDoubleClickEvent_IsBase(bool value) const { qstackedwidget_mousedoubleclickevent_isbase = value; }
    void setQStackedWidget_MouseMoveEvent_IsBase(bool value) const { qstackedwidget_mousemoveevent_isbase = value; }
    void setQStackedWidget_WheelEvent_IsBase(bool value) const { qstackedwidget_wheelevent_isbase = value; }
    void setQStackedWidget_KeyPressEvent_IsBase(bool value) const { qstackedwidget_keypressevent_isbase = value; }
    void setQStackedWidget_KeyReleaseEvent_IsBase(bool value) const { qstackedwidget_keyreleaseevent_isbase = value; }
    void setQStackedWidget_FocusInEvent_IsBase(bool value) const { qstackedwidget_focusinevent_isbase = value; }
    void setQStackedWidget_FocusOutEvent_IsBase(bool value) const { qstackedwidget_focusoutevent_isbase = value; }
    void setQStackedWidget_EnterEvent_IsBase(bool value) const { qstackedwidget_enterevent_isbase = value; }
    void setQStackedWidget_LeaveEvent_IsBase(bool value) const { qstackedwidget_leaveevent_isbase = value; }
    void setQStackedWidget_MoveEvent_IsBase(bool value) const { qstackedwidget_moveevent_isbase = value; }
    void setQStackedWidget_ResizeEvent_IsBase(bool value) const { qstackedwidget_resizeevent_isbase = value; }
    void setQStackedWidget_CloseEvent_IsBase(bool value) const { qstackedwidget_closeevent_isbase = value; }
    void setQStackedWidget_ContextMenuEvent_IsBase(bool value) const { qstackedwidget_contextmenuevent_isbase = value; }
    void setQStackedWidget_TabletEvent_IsBase(bool value) const { qstackedwidget_tabletevent_isbase = value; }
    void setQStackedWidget_ActionEvent_IsBase(bool value) const { qstackedwidget_actionevent_isbase = value; }
    void setQStackedWidget_DragEnterEvent_IsBase(bool value) const { qstackedwidget_dragenterevent_isbase = value; }
    void setQStackedWidget_DragMoveEvent_IsBase(bool value) const { qstackedwidget_dragmoveevent_isbase = value; }
    void setQStackedWidget_DragLeaveEvent_IsBase(bool value) const { qstackedwidget_dragleaveevent_isbase = value; }
    void setQStackedWidget_DropEvent_IsBase(bool value) const { qstackedwidget_dropevent_isbase = value; }
    void setQStackedWidget_ShowEvent_IsBase(bool value) const { qstackedwidget_showevent_isbase = value; }
    void setQStackedWidget_HideEvent_IsBase(bool value) const { qstackedwidget_hideevent_isbase = value; }
    void setQStackedWidget_NativeEvent_IsBase(bool value) const { qstackedwidget_nativeevent_isbase = value; }
    void setQStackedWidget_Metric_IsBase(bool value) const { qstackedwidget_metric_isbase = value; }
    void setQStackedWidget_InitPainter_IsBase(bool value) const { qstackedwidget_initpainter_isbase = value; }
    void setQStackedWidget_Redirected_IsBase(bool value) const { qstackedwidget_redirected_isbase = value; }
    void setQStackedWidget_SharedPainter_IsBase(bool value) const { qstackedwidget_sharedpainter_isbase = value; }
    void setQStackedWidget_InputMethodEvent_IsBase(bool value) const { qstackedwidget_inputmethodevent_isbase = value; }
    void setQStackedWidget_InputMethodQuery_IsBase(bool value) const { qstackedwidget_inputmethodquery_isbase = value; }
    void setQStackedWidget_FocusNextPrevChild_IsBase(bool value) const { qstackedwidget_focusnextprevchild_isbase = value; }
    void setQStackedWidget_EventFilter_IsBase(bool value) const { qstackedwidget_eventfilter_isbase = value; }
    void setQStackedWidget_TimerEvent_IsBase(bool value) const { qstackedwidget_timerevent_isbase = value; }
    void setQStackedWidget_ChildEvent_IsBase(bool value) const { qstackedwidget_childevent_isbase = value; }
    void setQStackedWidget_CustomEvent_IsBase(bool value) const { qstackedwidget_customevent_isbase = value; }
    void setQStackedWidget_ConnectNotify_IsBase(bool value) const { qstackedwidget_connectnotify_isbase = value; }
    void setQStackedWidget_DisconnectNotify_IsBase(bool value) const { qstackedwidget_disconnectnotify_isbase = value; }
    void setQStackedWidget_DrawFrame_IsBase(bool value) const { qstackedwidget_drawframe_isbase = value; }
    void setQStackedWidget_UpdateMicroFocus_IsBase(bool value) const { qstackedwidget_updatemicrofocus_isbase = value; }
    void setQStackedWidget_Create_IsBase(bool value) const { qstackedwidget_create_isbase = value; }
    void setQStackedWidget_Destroy_IsBase(bool value) const { qstackedwidget_destroy_isbase = value; }
    void setQStackedWidget_FocusNextChild_IsBase(bool value) const { qstackedwidget_focusnextchild_isbase = value; }
    void setQStackedWidget_FocusPreviousChild_IsBase(bool value) const { qstackedwidget_focuspreviouschild_isbase = value; }
    void setQStackedWidget_Sender_IsBase(bool value) const { qstackedwidget_sender_isbase = value; }
    void setQStackedWidget_SenderSignalIndex_IsBase(bool value) const { qstackedwidget_sendersignalindex_isbase = value; }
    void setQStackedWidget_Receivers_IsBase(bool value) const { qstackedwidget_receivers_isbase = value; }
    void setQStackedWidget_IsSignalConnected_IsBase(bool value) const { qstackedwidget_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qstackedwidget_metacall_isbase) {
            qstackedwidget_metacall_isbase = false;
            return QStackedWidget::qt_metacall(param1, param2, param3);
        } else if (qstackedwidget_metacall_callback != nullptr) {
            return qstackedwidget_metacall_callback(this, param1, param2, param3);
        } else {
            return QStackedWidget::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qstackedwidget_event_isbase) {
            qstackedwidget_event_isbase = false;
            return QStackedWidget::event(e);
        } else if (qstackedwidget_event_callback != nullptr) {
            return qstackedwidget_event_callback(this, e);
        } else {
            return QStackedWidget::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qstackedwidget_sizehint_isbase) {
            qstackedwidget_sizehint_isbase = false;
            return QStackedWidget::sizeHint();
        } else if (qstackedwidget_sizehint_callback != nullptr) {
            return qstackedwidget_sizehint_callback();
        } else {
            return QStackedWidget::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qstackedwidget_paintevent_isbase) {
            qstackedwidget_paintevent_isbase = false;
            QStackedWidget::paintEvent(param1);
        } else if (qstackedwidget_paintevent_callback != nullptr) {
            qstackedwidget_paintevent_callback(this, param1);
        } else {
            QStackedWidget::paintEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qstackedwidget_changeevent_isbase) {
            qstackedwidget_changeevent_isbase = false;
            QStackedWidget::changeEvent(param1);
        } else if (qstackedwidget_changeevent_callback != nullptr) {
            qstackedwidget_changeevent_callback(this, param1);
        } else {
            QStackedWidget::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qstackedwidget_initstyleoption_isbase) {
            qstackedwidget_initstyleoption_isbase = false;
            QStackedWidget::initStyleOption(option);
        } else if (qstackedwidget_initstyleoption_callback != nullptr) {
            qstackedwidget_initstyleoption_callback(this, option);
        } else {
            QStackedWidget::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qstackedwidget_devtype_isbase) {
            qstackedwidget_devtype_isbase = false;
            return QStackedWidget::devType();
        } else if (qstackedwidget_devtype_callback != nullptr) {
            return qstackedwidget_devtype_callback();
        } else {
            return QStackedWidget::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qstackedwidget_setvisible_isbase) {
            qstackedwidget_setvisible_isbase = false;
            QStackedWidget::setVisible(visible);
        } else if (qstackedwidget_setvisible_callback != nullptr) {
            qstackedwidget_setvisible_callback(this, visible);
        } else {
            QStackedWidget::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qstackedwidget_minimumsizehint_isbase) {
            qstackedwidget_minimumsizehint_isbase = false;
            return QStackedWidget::minimumSizeHint();
        } else if (qstackedwidget_minimumsizehint_callback != nullptr) {
            return qstackedwidget_minimumsizehint_callback();
        } else {
            return QStackedWidget::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qstackedwidget_heightforwidth_isbase) {
            qstackedwidget_heightforwidth_isbase = false;
            return QStackedWidget::heightForWidth(param1);
        } else if (qstackedwidget_heightforwidth_callback != nullptr) {
            return qstackedwidget_heightforwidth_callback(this, param1);
        } else {
            return QStackedWidget::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qstackedwidget_hasheightforwidth_isbase) {
            qstackedwidget_hasheightforwidth_isbase = false;
            return QStackedWidget::hasHeightForWidth();
        } else if (qstackedwidget_hasheightforwidth_callback != nullptr) {
            return qstackedwidget_hasheightforwidth_callback();
        } else {
            return QStackedWidget::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qstackedwidget_paintengine_isbase) {
            qstackedwidget_paintengine_isbase = false;
            return QStackedWidget::paintEngine();
        } else if (qstackedwidget_paintengine_callback != nullptr) {
            return qstackedwidget_paintengine_callback();
        } else {
            return QStackedWidget::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qstackedwidget_mousepressevent_isbase) {
            qstackedwidget_mousepressevent_isbase = false;
            QStackedWidget::mousePressEvent(event);
        } else if (qstackedwidget_mousepressevent_callback != nullptr) {
            qstackedwidget_mousepressevent_callback(this, event);
        } else {
            QStackedWidget::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qstackedwidget_mousereleaseevent_isbase) {
            qstackedwidget_mousereleaseevent_isbase = false;
            QStackedWidget::mouseReleaseEvent(event);
        } else if (qstackedwidget_mousereleaseevent_callback != nullptr) {
            qstackedwidget_mousereleaseevent_callback(this, event);
        } else {
            QStackedWidget::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qstackedwidget_mousedoubleclickevent_isbase) {
            qstackedwidget_mousedoubleclickevent_isbase = false;
            QStackedWidget::mouseDoubleClickEvent(event);
        } else if (qstackedwidget_mousedoubleclickevent_callback != nullptr) {
            qstackedwidget_mousedoubleclickevent_callback(this, event);
        } else {
            QStackedWidget::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qstackedwidget_mousemoveevent_isbase) {
            qstackedwidget_mousemoveevent_isbase = false;
            QStackedWidget::mouseMoveEvent(event);
        } else if (qstackedwidget_mousemoveevent_callback != nullptr) {
            qstackedwidget_mousemoveevent_callback(this, event);
        } else {
            QStackedWidget::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qstackedwidget_wheelevent_isbase) {
            qstackedwidget_wheelevent_isbase = false;
            QStackedWidget::wheelEvent(event);
        } else if (qstackedwidget_wheelevent_callback != nullptr) {
            qstackedwidget_wheelevent_callback(this, event);
        } else {
            QStackedWidget::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qstackedwidget_keypressevent_isbase) {
            qstackedwidget_keypressevent_isbase = false;
            QStackedWidget::keyPressEvent(event);
        } else if (qstackedwidget_keypressevent_callback != nullptr) {
            qstackedwidget_keypressevent_callback(this, event);
        } else {
            QStackedWidget::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qstackedwidget_keyreleaseevent_isbase) {
            qstackedwidget_keyreleaseevent_isbase = false;
            QStackedWidget::keyReleaseEvent(event);
        } else if (qstackedwidget_keyreleaseevent_callback != nullptr) {
            qstackedwidget_keyreleaseevent_callback(this, event);
        } else {
            QStackedWidget::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qstackedwidget_focusinevent_isbase) {
            qstackedwidget_focusinevent_isbase = false;
            QStackedWidget::focusInEvent(event);
        } else if (qstackedwidget_focusinevent_callback != nullptr) {
            qstackedwidget_focusinevent_callback(this, event);
        } else {
            QStackedWidget::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qstackedwidget_focusoutevent_isbase) {
            qstackedwidget_focusoutevent_isbase = false;
            QStackedWidget::focusOutEvent(event);
        } else if (qstackedwidget_focusoutevent_callback != nullptr) {
            qstackedwidget_focusoutevent_callback(this, event);
        } else {
            QStackedWidget::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qstackedwidget_enterevent_isbase) {
            qstackedwidget_enterevent_isbase = false;
            QStackedWidget::enterEvent(event);
        } else if (qstackedwidget_enterevent_callback != nullptr) {
            qstackedwidget_enterevent_callback(this, event);
        } else {
            QStackedWidget::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qstackedwidget_leaveevent_isbase) {
            qstackedwidget_leaveevent_isbase = false;
            QStackedWidget::leaveEvent(event);
        } else if (qstackedwidget_leaveevent_callback != nullptr) {
            qstackedwidget_leaveevent_callback(this, event);
        } else {
            QStackedWidget::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qstackedwidget_moveevent_isbase) {
            qstackedwidget_moveevent_isbase = false;
            QStackedWidget::moveEvent(event);
        } else if (qstackedwidget_moveevent_callback != nullptr) {
            qstackedwidget_moveevent_callback(this, event);
        } else {
            QStackedWidget::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qstackedwidget_resizeevent_isbase) {
            qstackedwidget_resizeevent_isbase = false;
            QStackedWidget::resizeEvent(event);
        } else if (qstackedwidget_resizeevent_callback != nullptr) {
            qstackedwidget_resizeevent_callback(this, event);
        } else {
            QStackedWidget::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qstackedwidget_closeevent_isbase) {
            qstackedwidget_closeevent_isbase = false;
            QStackedWidget::closeEvent(event);
        } else if (qstackedwidget_closeevent_callback != nullptr) {
            qstackedwidget_closeevent_callback(this, event);
        } else {
            QStackedWidget::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qstackedwidget_contextmenuevent_isbase) {
            qstackedwidget_contextmenuevent_isbase = false;
            QStackedWidget::contextMenuEvent(event);
        } else if (qstackedwidget_contextmenuevent_callback != nullptr) {
            qstackedwidget_contextmenuevent_callback(this, event);
        } else {
            QStackedWidget::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qstackedwidget_tabletevent_isbase) {
            qstackedwidget_tabletevent_isbase = false;
            QStackedWidget::tabletEvent(event);
        } else if (qstackedwidget_tabletevent_callback != nullptr) {
            qstackedwidget_tabletevent_callback(this, event);
        } else {
            QStackedWidget::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qstackedwidget_actionevent_isbase) {
            qstackedwidget_actionevent_isbase = false;
            QStackedWidget::actionEvent(event);
        } else if (qstackedwidget_actionevent_callback != nullptr) {
            qstackedwidget_actionevent_callback(this, event);
        } else {
            QStackedWidget::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qstackedwidget_dragenterevent_isbase) {
            qstackedwidget_dragenterevent_isbase = false;
            QStackedWidget::dragEnterEvent(event);
        } else if (qstackedwidget_dragenterevent_callback != nullptr) {
            qstackedwidget_dragenterevent_callback(this, event);
        } else {
            QStackedWidget::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qstackedwidget_dragmoveevent_isbase) {
            qstackedwidget_dragmoveevent_isbase = false;
            QStackedWidget::dragMoveEvent(event);
        } else if (qstackedwidget_dragmoveevent_callback != nullptr) {
            qstackedwidget_dragmoveevent_callback(this, event);
        } else {
            QStackedWidget::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qstackedwidget_dragleaveevent_isbase) {
            qstackedwidget_dragleaveevent_isbase = false;
            QStackedWidget::dragLeaveEvent(event);
        } else if (qstackedwidget_dragleaveevent_callback != nullptr) {
            qstackedwidget_dragleaveevent_callback(this, event);
        } else {
            QStackedWidget::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qstackedwidget_dropevent_isbase) {
            qstackedwidget_dropevent_isbase = false;
            QStackedWidget::dropEvent(event);
        } else if (qstackedwidget_dropevent_callback != nullptr) {
            qstackedwidget_dropevent_callback(this, event);
        } else {
            QStackedWidget::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qstackedwidget_showevent_isbase) {
            qstackedwidget_showevent_isbase = false;
            QStackedWidget::showEvent(event);
        } else if (qstackedwidget_showevent_callback != nullptr) {
            qstackedwidget_showevent_callback(this, event);
        } else {
            QStackedWidget::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qstackedwidget_hideevent_isbase) {
            qstackedwidget_hideevent_isbase = false;
            QStackedWidget::hideEvent(event);
        } else if (qstackedwidget_hideevent_callback != nullptr) {
            qstackedwidget_hideevent_callback(this, event);
        } else {
            QStackedWidget::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qstackedwidget_nativeevent_isbase) {
            qstackedwidget_nativeevent_isbase = false;
            return QStackedWidget::nativeEvent(eventType, message, result);
        } else if (qstackedwidget_nativeevent_callback != nullptr) {
            return qstackedwidget_nativeevent_callback(this, eventType, message, result);
        } else {
            return QStackedWidget::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qstackedwidget_metric_isbase) {
            qstackedwidget_metric_isbase = false;
            return QStackedWidget::metric(param1);
        } else if (qstackedwidget_metric_callback != nullptr) {
            return qstackedwidget_metric_callback(this, param1);
        } else {
            return QStackedWidget::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qstackedwidget_initpainter_isbase) {
            qstackedwidget_initpainter_isbase = false;
            QStackedWidget::initPainter(painter);
        } else if (qstackedwidget_initpainter_callback != nullptr) {
            qstackedwidget_initpainter_callback(this, painter);
        } else {
            QStackedWidget::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qstackedwidget_redirected_isbase) {
            qstackedwidget_redirected_isbase = false;
            return QStackedWidget::redirected(offset);
        } else if (qstackedwidget_redirected_callback != nullptr) {
            return qstackedwidget_redirected_callback(this, offset);
        } else {
            return QStackedWidget::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qstackedwidget_sharedpainter_isbase) {
            qstackedwidget_sharedpainter_isbase = false;
            return QStackedWidget::sharedPainter();
        } else if (qstackedwidget_sharedpainter_callback != nullptr) {
            return qstackedwidget_sharedpainter_callback();
        } else {
            return QStackedWidget::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qstackedwidget_inputmethodevent_isbase) {
            qstackedwidget_inputmethodevent_isbase = false;
            QStackedWidget::inputMethodEvent(param1);
        } else if (qstackedwidget_inputmethodevent_callback != nullptr) {
            qstackedwidget_inputmethodevent_callback(this, param1);
        } else {
            QStackedWidget::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qstackedwidget_inputmethodquery_isbase) {
            qstackedwidget_inputmethodquery_isbase = false;
            return QStackedWidget::inputMethodQuery(param1);
        } else if (qstackedwidget_inputmethodquery_callback != nullptr) {
            return qstackedwidget_inputmethodquery_callback(this, param1);
        } else {
            return QStackedWidget::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qstackedwidget_focusnextprevchild_isbase) {
            qstackedwidget_focusnextprevchild_isbase = false;
            return QStackedWidget::focusNextPrevChild(next);
        } else if (qstackedwidget_focusnextprevchild_callback != nullptr) {
            return qstackedwidget_focusnextprevchild_callback(this, next);
        } else {
            return QStackedWidget::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qstackedwidget_eventfilter_isbase) {
            qstackedwidget_eventfilter_isbase = false;
            return QStackedWidget::eventFilter(watched, event);
        } else if (qstackedwidget_eventfilter_callback != nullptr) {
            return qstackedwidget_eventfilter_callback(this, watched, event);
        } else {
            return QStackedWidget::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qstackedwidget_timerevent_isbase) {
            qstackedwidget_timerevent_isbase = false;
            QStackedWidget::timerEvent(event);
        } else if (qstackedwidget_timerevent_callback != nullptr) {
            qstackedwidget_timerevent_callback(this, event);
        } else {
            QStackedWidget::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qstackedwidget_childevent_isbase) {
            qstackedwidget_childevent_isbase = false;
            QStackedWidget::childEvent(event);
        } else if (qstackedwidget_childevent_callback != nullptr) {
            qstackedwidget_childevent_callback(this, event);
        } else {
            QStackedWidget::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qstackedwidget_customevent_isbase) {
            qstackedwidget_customevent_isbase = false;
            QStackedWidget::customEvent(event);
        } else if (qstackedwidget_customevent_callback != nullptr) {
            qstackedwidget_customevent_callback(this, event);
        } else {
            QStackedWidget::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qstackedwidget_connectnotify_isbase) {
            qstackedwidget_connectnotify_isbase = false;
            QStackedWidget::connectNotify(signal);
        } else if (qstackedwidget_connectnotify_callback != nullptr) {
            qstackedwidget_connectnotify_callback(this, signal);
        } else {
            QStackedWidget::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qstackedwidget_disconnectnotify_isbase) {
            qstackedwidget_disconnectnotify_isbase = false;
            QStackedWidget::disconnectNotify(signal);
        } else if (qstackedwidget_disconnectnotify_callback != nullptr) {
            qstackedwidget_disconnectnotify_callback(this, signal);
        } else {
            QStackedWidget::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (qstackedwidget_drawframe_isbase) {
            qstackedwidget_drawframe_isbase = false;
            QStackedWidget::drawFrame(param1);
        } else if (qstackedwidget_drawframe_callback != nullptr) {
            qstackedwidget_drawframe_callback(this, param1);
        } else {
            QStackedWidget::drawFrame(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qstackedwidget_updatemicrofocus_isbase) {
            qstackedwidget_updatemicrofocus_isbase = false;
            QStackedWidget::updateMicroFocus();
        } else if (qstackedwidget_updatemicrofocus_callback != nullptr) {
            qstackedwidget_updatemicrofocus_callback();
        } else {
            QStackedWidget::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qstackedwidget_create_isbase) {
            qstackedwidget_create_isbase = false;
            QStackedWidget::create();
        } else if (qstackedwidget_create_callback != nullptr) {
            qstackedwidget_create_callback();
        } else {
            QStackedWidget::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qstackedwidget_destroy_isbase) {
            qstackedwidget_destroy_isbase = false;
            QStackedWidget::destroy();
        } else if (qstackedwidget_destroy_callback != nullptr) {
            qstackedwidget_destroy_callback();
        } else {
            QStackedWidget::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qstackedwidget_focusnextchild_isbase) {
            qstackedwidget_focusnextchild_isbase = false;
            return QStackedWidget::focusNextChild();
        } else if (qstackedwidget_focusnextchild_callback != nullptr) {
            return qstackedwidget_focusnextchild_callback();
        } else {
            return QStackedWidget::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qstackedwidget_focuspreviouschild_isbase) {
            qstackedwidget_focuspreviouschild_isbase = false;
            return QStackedWidget::focusPreviousChild();
        } else if (qstackedwidget_focuspreviouschild_callback != nullptr) {
            return qstackedwidget_focuspreviouschild_callback();
        } else {
            return QStackedWidget::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qstackedwidget_sender_isbase) {
            qstackedwidget_sender_isbase = false;
            return QStackedWidget::sender();
        } else if (qstackedwidget_sender_callback != nullptr) {
            return qstackedwidget_sender_callback();
        } else {
            return QStackedWidget::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qstackedwidget_sendersignalindex_isbase) {
            qstackedwidget_sendersignalindex_isbase = false;
            return QStackedWidget::senderSignalIndex();
        } else if (qstackedwidget_sendersignalindex_callback != nullptr) {
            return qstackedwidget_sendersignalindex_callback();
        } else {
            return QStackedWidget::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qstackedwidget_receivers_isbase) {
            qstackedwidget_receivers_isbase = false;
            return QStackedWidget::receivers(signal);
        } else if (qstackedwidget_receivers_callback != nullptr) {
            return qstackedwidget_receivers_callback(this, signal);
        } else {
            return QStackedWidget::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qstackedwidget_issignalconnected_isbase) {
            qstackedwidget_issignalconnected_isbase = false;
            return QStackedWidget::isSignalConnected(signal);
        } else if (qstackedwidget_issignalconnected_callback != nullptr) {
            return qstackedwidget_issignalconnected_callback(this, signal);
        } else {
            return QStackedWidget::isSignalConnected(signal);
        }
    }
};

#endif
