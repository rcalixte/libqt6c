#pragma once
#ifndef SRCC_LIBVIRTUALQDOCKWIDGET_H
#define SRCC_LIBVIRTUALQDOCKWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QDockWidget so that we can call protected methods
class VirtualQDockWidget : public QDockWidget {

  public:
    // Virtual class public types (including callbacks)
    using QDockWidget_Metacall_Callback = int (*)(QDockWidget*, QMetaObject::Call, int, void**);
    using QDockWidget_ChangeEvent_Callback = void (*)(QDockWidget*, QEvent*);
    using QDockWidget_CloseEvent_Callback = void (*)(QDockWidget*, QCloseEvent*);
    using QDockWidget_PaintEvent_Callback = void (*)(QDockWidget*, QPaintEvent*);
    using QDockWidget_Event_Callback = bool (*)(QDockWidget*, QEvent*);
    using QDockWidget_InitStyleOption_Callback = void (*)(const QDockWidget*, QStyleOptionDockWidget*);
    using QDockWidget_DevType_Callback = int (*)();
    using QDockWidget_SetVisible_Callback = void (*)(QDockWidget*, bool);
    using QDockWidget_SizeHint_Callback = QSize (*)();
    using QDockWidget_MinimumSizeHint_Callback = QSize (*)();
    using QDockWidget_HeightForWidth_Callback = int (*)(const QDockWidget*, int);
    using QDockWidget_HasHeightForWidth_Callback = bool (*)();
    using QDockWidget_PaintEngine_Callback = QPaintEngine* (*)();
    using QDockWidget_MousePressEvent_Callback = void (*)(QDockWidget*, QMouseEvent*);
    using QDockWidget_MouseReleaseEvent_Callback = void (*)(QDockWidget*, QMouseEvent*);
    using QDockWidget_MouseDoubleClickEvent_Callback = void (*)(QDockWidget*, QMouseEvent*);
    using QDockWidget_MouseMoveEvent_Callback = void (*)(QDockWidget*, QMouseEvent*);
    using QDockWidget_WheelEvent_Callback = void (*)(QDockWidget*, QWheelEvent*);
    using QDockWidget_KeyPressEvent_Callback = void (*)(QDockWidget*, QKeyEvent*);
    using QDockWidget_KeyReleaseEvent_Callback = void (*)(QDockWidget*, QKeyEvent*);
    using QDockWidget_FocusInEvent_Callback = void (*)(QDockWidget*, QFocusEvent*);
    using QDockWidget_FocusOutEvent_Callback = void (*)(QDockWidget*, QFocusEvent*);
    using QDockWidget_EnterEvent_Callback = void (*)(QDockWidget*, QEnterEvent*);
    using QDockWidget_LeaveEvent_Callback = void (*)(QDockWidget*, QEvent*);
    using QDockWidget_MoveEvent_Callback = void (*)(QDockWidget*, QMoveEvent*);
    using QDockWidget_ResizeEvent_Callback = void (*)(QDockWidget*, QResizeEvent*);
    using QDockWidget_ContextMenuEvent_Callback = void (*)(QDockWidget*, QContextMenuEvent*);
    using QDockWidget_TabletEvent_Callback = void (*)(QDockWidget*, QTabletEvent*);
    using QDockWidget_ActionEvent_Callback = void (*)(QDockWidget*, QActionEvent*);
    using QDockWidget_DragEnterEvent_Callback = void (*)(QDockWidget*, QDragEnterEvent*);
    using QDockWidget_DragMoveEvent_Callback = void (*)(QDockWidget*, QDragMoveEvent*);
    using QDockWidget_DragLeaveEvent_Callback = void (*)(QDockWidget*, QDragLeaveEvent*);
    using QDockWidget_DropEvent_Callback = void (*)(QDockWidget*, QDropEvent*);
    using QDockWidget_ShowEvent_Callback = void (*)(QDockWidget*, QShowEvent*);
    using QDockWidget_HideEvent_Callback = void (*)(QDockWidget*, QHideEvent*);
    using QDockWidget_NativeEvent_Callback = bool (*)(QDockWidget*, const QByteArray&, void*, qintptr*);
    using QDockWidget_Metric_Callback = int (*)(const QDockWidget*, QPaintDevice::PaintDeviceMetric);
    using QDockWidget_InitPainter_Callback = void (*)(const QDockWidget*, QPainter*);
    using QDockWidget_Redirected_Callback = QPaintDevice* (*)(const QDockWidget*, QPoint*);
    using QDockWidget_SharedPainter_Callback = QPainter* (*)();
    using QDockWidget_InputMethodEvent_Callback = void (*)(QDockWidget*, QInputMethodEvent*);
    using QDockWidget_InputMethodQuery_Callback = QVariant (*)(const QDockWidget*, Qt::InputMethodQuery);
    using QDockWidget_FocusNextPrevChild_Callback = bool (*)(QDockWidget*, bool);
    using QDockWidget_EventFilter_Callback = bool (*)(QDockWidget*, QObject*, QEvent*);
    using QDockWidget_TimerEvent_Callback = void (*)(QDockWidget*, QTimerEvent*);
    using QDockWidget_ChildEvent_Callback = void (*)(QDockWidget*, QChildEvent*);
    using QDockWidget_CustomEvent_Callback = void (*)(QDockWidget*, QEvent*);
    using QDockWidget_ConnectNotify_Callback = void (*)(QDockWidget*, const QMetaMethod&);
    using QDockWidget_DisconnectNotify_Callback = void (*)(QDockWidget*, const QMetaMethod&);
    using QDockWidget_UpdateMicroFocus_Callback = void (*)();
    using QDockWidget_Create_Callback = void (*)();
    using QDockWidget_Destroy_Callback = void (*)();
    using QDockWidget_FocusNextChild_Callback = bool (*)();
    using QDockWidget_FocusPreviousChild_Callback = bool (*)();
    using QDockWidget_Sender_Callback = QObject* (*)();
    using QDockWidget_SenderSignalIndex_Callback = int (*)();
    using QDockWidget_Receivers_Callback = int (*)(const QDockWidget*, const char*);
    using QDockWidget_IsSignalConnected_Callback = bool (*)(const QDockWidget*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QDockWidget_Metacall_Callback qdockwidget_metacall_callback = nullptr;
    QDockWidget_ChangeEvent_Callback qdockwidget_changeevent_callback = nullptr;
    QDockWidget_CloseEvent_Callback qdockwidget_closeevent_callback = nullptr;
    QDockWidget_PaintEvent_Callback qdockwidget_paintevent_callback = nullptr;
    QDockWidget_Event_Callback qdockwidget_event_callback = nullptr;
    QDockWidget_InitStyleOption_Callback qdockwidget_initstyleoption_callback = nullptr;
    QDockWidget_DevType_Callback qdockwidget_devtype_callback = nullptr;
    QDockWidget_SetVisible_Callback qdockwidget_setvisible_callback = nullptr;
    QDockWidget_SizeHint_Callback qdockwidget_sizehint_callback = nullptr;
    QDockWidget_MinimumSizeHint_Callback qdockwidget_minimumsizehint_callback = nullptr;
    QDockWidget_HeightForWidth_Callback qdockwidget_heightforwidth_callback = nullptr;
    QDockWidget_HasHeightForWidth_Callback qdockwidget_hasheightforwidth_callback = nullptr;
    QDockWidget_PaintEngine_Callback qdockwidget_paintengine_callback = nullptr;
    QDockWidget_MousePressEvent_Callback qdockwidget_mousepressevent_callback = nullptr;
    QDockWidget_MouseReleaseEvent_Callback qdockwidget_mousereleaseevent_callback = nullptr;
    QDockWidget_MouseDoubleClickEvent_Callback qdockwidget_mousedoubleclickevent_callback = nullptr;
    QDockWidget_MouseMoveEvent_Callback qdockwidget_mousemoveevent_callback = nullptr;
    QDockWidget_WheelEvent_Callback qdockwidget_wheelevent_callback = nullptr;
    QDockWidget_KeyPressEvent_Callback qdockwidget_keypressevent_callback = nullptr;
    QDockWidget_KeyReleaseEvent_Callback qdockwidget_keyreleaseevent_callback = nullptr;
    QDockWidget_FocusInEvent_Callback qdockwidget_focusinevent_callback = nullptr;
    QDockWidget_FocusOutEvent_Callback qdockwidget_focusoutevent_callback = nullptr;
    QDockWidget_EnterEvent_Callback qdockwidget_enterevent_callback = nullptr;
    QDockWidget_LeaveEvent_Callback qdockwidget_leaveevent_callback = nullptr;
    QDockWidget_MoveEvent_Callback qdockwidget_moveevent_callback = nullptr;
    QDockWidget_ResizeEvent_Callback qdockwidget_resizeevent_callback = nullptr;
    QDockWidget_ContextMenuEvent_Callback qdockwidget_contextmenuevent_callback = nullptr;
    QDockWidget_TabletEvent_Callback qdockwidget_tabletevent_callback = nullptr;
    QDockWidget_ActionEvent_Callback qdockwidget_actionevent_callback = nullptr;
    QDockWidget_DragEnterEvent_Callback qdockwidget_dragenterevent_callback = nullptr;
    QDockWidget_DragMoveEvent_Callback qdockwidget_dragmoveevent_callback = nullptr;
    QDockWidget_DragLeaveEvent_Callback qdockwidget_dragleaveevent_callback = nullptr;
    QDockWidget_DropEvent_Callback qdockwidget_dropevent_callback = nullptr;
    QDockWidget_ShowEvent_Callback qdockwidget_showevent_callback = nullptr;
    QDockWidget_HideEvent_Callback qdockwidget_hideevent_callback = nullptr;
    QDockWidget_NativeEvent_Callback qdockwidget_nativeevent_callback = nullptr;
    QDockWidget_Metric_Callback qdockwidget_metric_callback = nullptr;
    QDockWidget_InitPainter_Callback qdockwidget_initpainter_callback = nullptr;
    QDockWidget_Redirected_Callback qdockwidget_redirected_callback = nullptr;
    QDockWidget_SharedPainter_Callback qdockwidget_sharedpainter_callback = nullptr;
    QDockWidget_InputMethodEvent_Callback qdockwidget_inputmethodevent_callback = nullptr;
    QDockWidget_InputMethodQuery_Callback qdockwidget_inputmethodquery_callback = nullptr;
    QDockWidget_FocusNextPrevChild_Callback qdockwidget_focusnextprevchild_callback = nullptr;
    QDockWidget_EventFilter_Callback qdockwidget_eventfilter_callback = nullptr;
    QDockWidget_TimerEvent_Callback qdockwidget_timerevent_callback = nullptr;
    QDockWidget_ChildEvent_Callback qdockwidget_childevent_callback = nullptr;
    QDockWidget_CustomEvent_Callback qdockwidget_customevent_callback = nullptr;
    QDockWidget_ConnectNotify_Callback qdockwidget_connectnotify_callback = nullptr;
    QDockWidget_DisconnectNotify_Callback qdockwidget_disconnectnotify_callback = nullptr;
    QDockWidget_UpdateMicroFocus_Callback qdockwidget_updatemicrofocus_callback = nullptr;
    QDockWidget_Create_Callback qdockwidget_create_callback = nullptr;
    QDockWidget_Destroy_Callback qdockwidget_destroy_callback = nullptr;
    QDockWidget_FocusNextChild_Callback qdockwidget_focusnextchild_callback = nullptr;
    QDockWidget_FocusPreviousChild_Callback qdockwidget_focuspreviouschild_callback = nullptr;
    QDockWidget_Sender_Callback qdockwidget_sender_callback = nullptr;
    QDockWidget_SenderSignalIndex_Callback qdockwidget_sendersignalindex_callback = nullptr;
    QDockWidget_Receivers_Callback qdockwidget_receivers_callback = nullptr;
    QDockWidget_IsSignalConnected_Callback qdockwidget_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qdockwidget_metacall_isbase = false;
    mutable bool qdockwidget_changeevent_isbase = false;
    mutable bool qdockwidget_closeevent_isbase = false;
    mutable bool qdockwidget_paintevent_isbase = false;
    mutable bool qdockwidget_event_isbase = false;
    mutable bool qdockwidget_initstyleoption_isbase = false;
    mutable bool qdockwidget_devtype_isbase = false;
    mutable bool qdockwidget_setvisible_isbase = false;
    mutable bool qdockwidget_sizehint_isbase = false;
    mutable bool qdockwidget_minimumsizehint_isbase = false;
    mutable bool qdockwidget_heightforwidth_isbase = false;
    mutable bool qdockwidget_hasheightforwidth_isbase = false;
    mutable bool qdockwidget_paintengine_isbase = false;
    mutable bool qdockwidget_mousepressevent_isbase = false;
    mutable bool qdockwidget_mousereleaseevent_isbase = false;
    mutable bool qdockwidget_mousedoubleclickevent_isbase = false;
    mutable bool qdockwidget_mousemoveevent_isbase = false;
    mutable bool qdockwidget_wheelevent_isbase = false;
    mutable bool qdockwidget_keypressevent_isbase = false;
    mutable bool qdockwidget_keyreleaseevent_isbase = false;
    mutable bool qdockwidget_focusinevent_isbase = false;
    mutable bool qdockwidget_focusoutevent_isbase = false;
    mutable bool qdockwidget_enterevent_isbase = false;
    mutable bool qdockwidget_leaveevent_isbase = false;
    mutable bool qdockwidget_moveevent_isbase = false;
    mutable bool qdockwidget_resizeevent_isbase = false;
    mutable bool qdockwidget_contextmenuevent_isbase = false;
    mutable bool qdockwidget_tabletevent_isbase = false;
    mutable bool qdockwidget_actionevent_isbase = false;
    mutable bool qdockwidget_dragenterevent_isbase = false;
    mutable bool qdockwidget_dragmoveevent_isbase = false;
    mutable bool qdockwidget_dragleaveevent_isbase = false;
    mutable bool qdockwidget_dropevent_isbase = false;
    mutable bool qdockwidget_showevent_isbase = false;
    mutable bool qdockwidget_hideevent_isbase = false;
    mutable bool qdockwidget_nativeevent_isbase = false;
    mutable bool qdockwidget_metric_isbase = false;
    mutable bool qdockwidget_initpainter_isbase = false;
    mutable bool qdockwidget_redirected_isbase = false;
    mutable bool qdockwidget_sharedpainter_isbase = false;
    mutable bool qdockwidget_inputmethodevent_isbase = false;
    mutable bool qdockwidget_inputmethodquery_isbase = false;
    mutable bool qdockwidget_focusnextprevchild_isbase = false;
    mutable bool qdockwidget_eventfilter_isbase = false;
    mutable bool qdockwidget_timerevent_isbase = false;
    mutable bool qdockwidget_childevent_isbase = false;
    mutable bool qdockwidget_customevent_isbase = false;
    mutable bool qdockwidget_connectnotify_isbase = false;
    mutable bool qdockwidget_disconnectnotify_isbase = false;
    mutable bool qdockwidget_updatemicrofocus_isbase = false;
    mutable bool qdockwidget_create_isbase = false;
    mutable bool qdockwidget_destroy_isbase = false;
    mutable bool qdockwidget_focusnextchild_isbase = false;
    mutable bool qdockwidget_focuspreviouschild_isbase = false;
    mutable bool qdockwidget_sender_isbase = false;
    mutable bool qdockwidget_sendersignalindex_isbase = false;
    mutable bool qdockwidget_receivers_isbase = false;
    mutable bool qdockwidget_issignalconnected_isbase = false;

  public:
    VirtualQDockWidget(QWidget* parent) : QDockWidget(parent){};
    VirtualQDockWidget(const QString& title) : QDockWidget(title){};
    VirtualQDockWidget() : QDockWidget(){};
    VirtualQDockWidget(const QString& title, QWidget* parent) : QDockWidget(title, parent){};
    VirtualQDockWidget(const QString& title, QWidget* parent, Qt::WindowFlags flags) : QDockWidget(title, parent, flags){};
    VirtualQDockWidget(QWidget* parent, Qt::WindowFlags flags) : QDockWidget(parent, flags){};

    ~VirtualQDockWidget() {
        qdockwidget_metacall_callback = nullptr;
        qdockwidget_changeevent_callback = nullptr;
        qdockwidget_closeevent_callback = nullptr;
        qdockwidget_paintevent_callback = nullptr;
        qdockwidget_event_callback = nullptr;
        qdockwidget_initstyleoption_callback = nullptr;
        qdockwidget_devtype_callback = nullptr;
        qdockwidget_setvisible_callback = nullptr;
        qdockwidget_sizehint_callback = nullptr;
        qdockwidget_minimumsizehint_callback = nullptr;
        qdockwidget_heightforwidth_callback = nullptr;
        qdockwidget_hasheightforwidth_callback = nullptr;
        qdockwidget_paintengine_callback = nullptr;
        qdockwidget_mousepressevent_callback = nullptr;
        qdockwidget_mousereleaseevent_callback = nullptr;
        qdockwidget_mousedoubleclickevent_callback = nullptr;
        qdockwidget_mousemoveevent_callback = nullptr;
        qdockwidget_wheelevent_callback = nullptr;
        qdockwidget_keypressevent_callback = nullptr;
        qdockwidget_keyreleaseevent_callback = nullptr;
        qdockwidget_focusinevent_callback = nullptr;
        qdockwidget_focusoutevent_callback = nullptr;
        qdockwidget_enterevent_callback = nullptr;
        qdockwidget_leaveevent_callback = nullptr;
        qdockwidget_moveevent_callback = nullptr;
        qdockwidget_resizeevent_callback = nullptr;
        qdockwidget_contextmenuevent_callback = nullptr;
        qdockwidget_tabletevent_callback = nullptr;
        qdockwidget_actionevent_callback = nullptr;
        qdockwidget_dragenterevent_callback = nullptr;
        qdockwidget_dragmoveevent_callback = nullptr;
        qdockwidget_dragleaveevent_callback = nullptr;
        qdockwidget_dropevent_callback = nullptr;
        qdockwidget_showevent_callback = nullptr;
        qdockwidget_hideevent_callback = nullptr;
        qdockwidget_nativeevent_callback = nullptr;
        qdockwidget_metric_callback = nullptr;
        qdockwidget_initpainter_callback = nullptr;
        qdockwidget_redirected_callback = nullptr;
        qdockwidget_sharedpainter_callback = nullptr;
        qdockwidget_inputmethodevent_callback = nullptr;
        qdockwidget_inputmethodquery_callback = nullptr;
        qdockwidget_focusnextprevchild_callback = nullptr;
        qdockwidget_eventfilter_callback = nullptr;
        qdockwidget_timerevent_callback = nullptr;
        qdockwidget_childevent_callback = nullptr;
        qdockwidget_customevent_callback = nullptr;
        qdockwidget_connectnotify_callback = nullptr;
        qdockwidget_disconnectnotify_callback = nullptr;
        qdockwidget_updatemicrofocus_callback = nullptr;
        qdockwidget_create_callback = nullptr;
        qdockwidget_destroy_callback = nullptr;
        qdockwidget_focusnextchild_callback = nullptr;
        qdockwidget_focuspreviouschild_callback = nullptr;
        qdockwidget_sender_callback = nullptr;
        qdockwidget_sendersignalindex_callback = nullptr;
        qdockwidget_receivers_callback = nullptr;
        qdockwidget_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQDockWidget_Metacall_Callback(QDockWidget_Metacall_Callback cb) { qdockwidget_metacall_callback = cb; }
    void setQDockWidget_ChangeEvent_Callback(QDockWidget_ChangeEvent_Callback cb) { qdockwidget_changeevent_callback = cb; }
    void setQDockWidget_CloseEvent_Callback(QDockWidget_CloseEvent_Callback cb) { qdockwidget_closeevent_callback = cb; }
    void setQDockWidget_PaintEvent_Callback(QDockWidget_PaintEvent_Callback cb) { qdockwidget_paintevent_callback = cb; }
    void setQDockWidget_Event_Callback(QDockWidget_Event_Callback cb) { qdockwidget_event_callback = cb; }
    void setQDockWidget_InitStyleOption_Callback(QDockWidget_InitStyleOption_Callback cb) { qdockwidget_initstyleoption_callback = cb; }
    void setQDockWidget_DevType_Callback(QDockWidget_DevType_Callback cb) { qdockwidget_devtype_callback = cb; }
    void setQDockWidget_SetVisible_Callback(QDockWidget_SetVisible_Callback cb) { qdockwidget_setvisible_callback = cb; }
    void setQDockWidget_SizeHint_Callback(QDockWidget_SizeHint_Callback cb) { qdockwidget_sizehint_callback = cb; }
    void setQDockWidget_MinimumSizeHint_Callback(QDockWidget_MinimumSizeHint_Callback cb) { qdockwidget_minimumsizehint_callback = cb; }
    void setQDockWidget_HeightForWidth_Callback(QDockWidget_HeightForWidth_Callback cb) { qdockwidget_heightforwidth_callback = cb; }
    void setQDockWidget_HasHeightForWidth_Callback(QDockWidget_HasHeightForWidth_Callback cb) { qdockwidget_hasheightforwidth_callback = cb; }
    void setQDockWidget_PaintEngine_Callback(QDockWidget_PaintEngine_Callback cb) { qdockwidget_paintengine_callback = cb; }
    void setQDockWidget_MousePressEvent_Callback(QDockWidget_MousePressEvent_Callback cb) { qdockwidget_mousepressevent_callback = cb; }
    void setQDockWidget_MouseReleaseEvent_Callback(QDockWidget_MouseReleaseEvent_Callback cb) { qdockwidget_mousereleaseevent_callback = cb; }
    void setQDockWidget_MouseDoubleClickEvent_Callback(QDockWidget_MouseDoubleClickEvent_Callback cb) { qdockwidget_mousedoubleclickevent_callback = cb; }
    void setQDockWidget_MouseMoveEvent_Callback(QDockWidget_MouseMoveEvent_Callback cb) { qdockwidget_mousemoveevent_callback = cb; }
    void setQDockWidget_WheelEvent_Callback(QDockWidget_WheelEvent_Callback cb) { qdockwidget_wheelevent_callback = cb; }
    void setQDockWidget_KeyPressEvent_Callback(QDockWidget_KeyPressEvent_Callback cb) { qdockwidget_keypressevent_callback = cb; }
    void setQDockWidget_KeyReleaseEvent_Callback(QDockWidget_KeyReleaseEvent_Callback cb) { qdockwidget_keyreleaseevent_callback = cb; }
    void setQDockWidget_FocusInEvent_Callback(QDockWidget_FocusInEvent_Callback cb) { qdockwidget_focusinevent_callback = cb; }
    void setQDockWidget_FocusOutEvent_Callback(QDockWidget_FocusOutEvent_Callback cb) { qdockwidget_focusoutevent_callback = cb; }
    void setQDockWidget_EnterEvent_Callback(QDockWidget_EnterEvent_Callback cb) { qdockwidget_enterevent_callback = cb; }
    void setQDockWidget_LeaveEvent_Callback(QDockWidget_LeaveEvent_Callback cb) { qdockwidget_leaveevent_callback = cb; }
    void setQDockWidget_MoveEvent_Callback(QDockWidget_MoveEvent_Callback cb) { qdockwidget_moveevent_callback = cb; }
    void setQDockWidget_ResizeEvent_Callback(QDockWidget_ResizeEvent_Callback cb) { qdockwidget_resizeevent_callback = cb; }
    void setQDockWidget_ContextMenuEvent_Callback(QDockWidget_ContextMenuEvent_Callback cb) { qdockwidget_contextmenuevent_callback = cb; }
    void setQDockWidget_TabletEvent_Callback(QDockWidget_TabletEvent_Callback cb) { qdockwidget_tabletevent_callback = cb; }
    void setQDockWidget_ActionEvent_Callback(QDockWidget_ActionEvent_Callback cb) { qdockwidget_actionevent_callback = cb; }
    void setQDockWidget_DragEnterEvent_Callback(QDockWidget_DragEnterEvent_Callback cb) { qdockwidget_dragenterevent_callback = cb; }
    void setQDockWidget_DragMoveEvent_Callback(QDockWidget_DragMoveEvent_Callback cb) { qdockwidget_dragmoveevent_callback = cb; }
    void setQDockWidget_DragLeaveEvent_Callback(QDockWidget_DragLeaveEvent_Callback cb) { qdockwidget_dragleaveevent_callback = cb; }
    void setQDockWidget_DropEvent_Callback(QDockWidget_DropEvent_Callback cb) { qdockwidget_dropevent_callback = cb; }
    void setQDockWidget_ShowEvent_Callback(QDockWidget_ShowEvent_Callback cb) { qdockwidget_showevent_callback = cb; }
    void setQDockWidget_HideEvent_Callback(QDockWidget_HideEvent_Callback cb) { qdockwidget_hideevent_callback = cb; }
    void setQDockWidget_NativeEvent_Callback(QDockWidget_NativeEvent_Callback cb) { qdockwidget_nativeevent_callback = cb; }
    void setQDockWidget_Metric_Callback(QDockWidget_Metric_Callback cb) { qdockwidget_metric_callback = cb; }
    void setQDockWidget_InitPainter_Callback(QDockWidget_InitPainter_Callback cb) { qdockwidget_initpainter_callback = cb; }
    void setQDockWidget_Redirected_Callback(QDockWidget_Redirected_Callback cb) { qdockwidget_redirected_callback = cb; }
    void setQDockWidget_SharedPainter_Callback(QDockWidget_SharedPainter_Callback cb) { qdockwidget_sharedpainter_callback = cb; }
    void setQDockWidget_InputMethodEvent_Callback(QDockWidget_InputMethodEvent_Callback cb) { qdockwidget_inputmethodevent_callback = cb; }
    void setQDockWidget_InputMethodQuery_Callback(QDockWidget_InputMethodQuery_Callback cb) { qdockwidget_inputmethodquery_callback = cb; }
    void setQDockWidget_FocusNextPrevChild_Callback(QDockWidget_FocusNextPrevChild_Callback cb) { qdockwidget_focusnextprevchild_callback = cb; }
    void setQDockWidget_EventFilter_Callback(QDockWidget_EventFilter_Callback cb) { qdockwidget_eventfilter_callback = cb; }
    void setQDockWidget_TimerEvent_Callback(QDockWidget_TimerEvent_Callback cb) { qdockwidget_timerevent_callback = cb; }
    void setQDockWidget_ChildEvent_Callback(QDockWidget_ChildEvent_Callback cb) { qdockwidget_childevent_callback = cb; }
    void setQDockWidget_CustomEvent_Callback(QDockWidget_CustomEvent_Callback cb) { qdockwidget_customevent_callback = cb; }
    void setQDockWidget_ConnectNotify_Callback(QDockWidget_ConnectNotify_Callback cb) { qdockwidget_connectnotify_callback = cb; }
    void setQDockWidget_DisconnectNotify_Callback(QDockWidget_DisconnectNotify_Callback cb) { qdockwidget_disconnectnotify_callback = cb; }
    void setQDockWidget_UpdateMicroFocus_Callback(QDockWidget_UpdateMicroFocus_Callback cb) { qdockwidget_updatemicrofocus_callback = cb; }
    void setQDockWidget_Create_Callback(QDockWidget_Create_Callback cb) { qdockwidget_create_callback = cb; }
    void setQDockWidget_Destroy_Callback(QDockWidget_Destroy_Callback cb) { qdockwidget_destroy_callback = cb; }
    void setQDockWidget_FocusNextChild_Callback(QDockWidget_FocusNextChild_Callback cb) { qdockwidget_focusnextchild_callback = cb; }
    void setQDockWidget_FocusPreviousChild_Callback(QDockWidget_FocusPreviousChild_Callback cb) { qdockwidget_focuspreviouschild_callback = cb; }
    void setQDockWidget_Sender_Callback(QDockWidget_Sender_Callback cb) { qdockwidget_sender_callback = cb; }
    void setQDockWidget_SenderSignalIndex_Callback(QDockWidget_SenderSignalIndex_Callback cb) { qdockwidget_sendersignalindex_callback = cb; }
    void setQDockWidget_Receivers_Callback(QDockWidget_Receivers_Callback cb) { qdockwidget_receivers_callback = cb; }
    void setQDockWidget_IsSignalConnected_Callback(QDockWidget_IsSignalConnected_Callback cb) { qdockwidget_issignalconnected_callback = cb; }

    // Base flag setters
    void setQDockWidget_Metacall_IsBase(bool value) const { qdockwidget_metacall_isbase = value; }
    void setQDockWidget_ChangeEvent_IsBase(bool value) const { qdockwidget_changeevent_isbase = value; }
    void setQDockWidget_CloseEvent_IsBase(bool value) const { qdockwidget_closeevent_isbase = value; }
    void setQDockWidget_PaintEvent_IsBase(bool value) const { qdockwidget_paintevent_isbase = value; }
    void setQDockWidget_Event_IsBase(bool value) const { qdockwidget_event_isbase = value; }
    void setQDockWidget_InitStyleOption_IsBase(bool value) const { qdockwidget_initstyleoption_isbase = value; }
    void setQDockWidget_DevType_IsBase(bool value) const { qdockwidget_devtype_isbase = value; }
    void setQDockWidget_SetVisible_IsBase(bool value) const { qdockwidget_setvisible_isbase = value; }
    void setQDockWidget_SizeHint_IsBase(bool value) const { qdockwidget_sizehint_isbase = value; }
    void setQDockWidget_MinimumSizeHint_IsBase(bool value) const { qdockwidget_minimumsizehint_isbase = value; }
    void setQDockWidget_HeightForWidth_IsBase(bool value) const { qdockwidget_heightforwidth_isbase = value; }
    void setQDockWidget_HasHeightForWidth_IsBase(bool value) const { qdockwidget_hasheightforwidth_isbase = value; }
    void setQDockWidget_PaintEngine_IsBase(bool value) const { qdockwidget_paintengine_isbase = value; }
    void setQDockWidget_MousePressEvent_IsBase(bool value) const { qdockwidget_mousepressevent_isbase = value; }
    void setQDockWidget_MouseReleaseEvent_IsBase(bool value) const { qdockwidget_mousereleaseevent_isbase = value; }
    void setQDockWidget_MouseDoubleClickEvent_IsBase(bool value) const { qdockwidget_mousedoubleclickevent_isbase = value; }
    void setQDockWidget_MouseMoveEvent_IsBase(bool value) const { qdockwidget_mousemoveevent_isbase = value; }
    void setQDockWidget_WheelEvent_IsBase(bool value) const { qdockwidget_wheelevent_isbase = value; }
    void setQDockWidget_KeyPressEvent_IsBase(bool value) const { qdockwidget_keypressevent_isbase = value; }
    void setQDockWidget_KeyReleaseEvent_IsBase(bool value) const { qdockwidget_keyreleaseevent_isbase = value; }
    void setQDockWidget_FocusInEvent_IsBase(bool value) const { qdockwidget_focusinevent_isbase = value; }
    void setQDockWidget_FocusOutEvent_IsBase(bool value) const { qdockwidget_focusoutevent_isbase = value; }
    void setQDockWidget_EnterEvent_IsBase(bool value) const { qdockwidget_enterevent_isbase = value; }
    void setQDockWidget_LeaveEvent_IsBase(bool value) const { qdockwidget_leaveevent_isbase = value; }
    void setQDockWidget_MoveEvent_IsBase(bool value) const { qdockwidget_moveevent_isbase = value; }
    void setQDockWidget_ResizeEvent_IsBase(bool value) const { qdockwidget_resizeevent_isbase = value; }
    void setQDockWidget_ContextMenuEvent_IsBase(bool value) const { qdockwidget_contextmenuevent_isbase = value; }
    void setQDockWidget_TabletEvent_IsBase(bool value) const { qdockwidget_tabletevent_isbase = value; }
    void setQDockWidget_ActionEvent_IsBase(bool value) const { qdockwidget_actionevent_isbase = value; }
    void setQDockWidget_DragEnterEvent_IsBase(bool value) const { qdockwidget_dragenterevent_isbase = value; }
    void setQDockWidget_DragMoveEvent_IsBase(bool value) const { qdockwidget_dragmoveevent_isbase = value; }
    void setQDockWidget_DragLeaveEvent_IsBase(bool value) const { qdockwidget_dragleaveevent_isbase = value; }
    void setQDockWidget_DropEvent_IsBase(bool value) const { qdockwidget_dropevent_isbase = value; }
    void setQDockWidget_ShowEvent_IsBase(bool value) const { qdockwidget_showevent_isbase = value; }
    void setQDockWidget_HideEvent_IsBase(bool value) const { qdockwidget_hideevent_isbase = value; }
    void setQDockWidget_NativeEvent_IsBase(bool value) const { qdockwidget_nativeevent_isbase = value; }
    void setQDockWidget_Metric_IsBase(bool value) const { qdockwidget_metric_isbase = value; }
    void setQDockWidget_InitPainter_IsBase(bool value) const { qdockwidget_initpainter_isbase = value; }
    void setQDockWidget_Redirected_IsBase(bool value) const { qdockwidget_redirected_isbase = value; }
    void setQDockWidget_SharedPainter_IsBase(bool value) const { qdockwidget_sharedpainter_isbase = value; }
    void setQDockWidget_InputMethodEvent_IsBase(bool value) const { qdockwidget_inputmethodevent_isbase = value; }
    void setQDockWidget_InputMethodQuery_IsBase(bool value) const { qdockwidget_inputmethodquery_isbase = value; }
    void setQDockWidget_FocusNextPrevChild_IsBase(bool value) const { qdockwidget_focusnextprevchild_isbase = value; }
    void setQDockWidget_EventFilter_IsBase(bool value) const { qdockwidget_eventfilter_isbase = value; }
    void setQDockWidget_TimerEvent_IsBase(bool value) const { qdockwidget_timerevent_isbase = value; }
    void setQDockWidget_ChildEvent_IsBase(bool value) const { qdockwidget_childevent_isbase = value; }
    void setQDockWidget_CustomEvent_IsBase(bool value) const { qdockwidget_customevent_isbase = value; }
    void setQDockWidget_ConnectNotify_IsBase(bool value) const { qdockwidget_connectnotify_isbase = value; }
    void setQDockWidget_DisconnectNotify_IsBase(bool value) const { qdockwidget_disconnectnotify_isbase = value; }
    void setQDockWidget_UpdateMicroFocus_IsBase(bool value) const { qdockwidget_updatemicrofocus_isbase = value; }
    void setQDockWidget_Create_IsBase(bool value) const { qdockwidget_create_isbase = value; }
    void setQDockWidget_Destroy_IsBase(bool value) const { qdockwidget_destroy_isbase = value; }
    void setQDockWidget_FocusNextChild_IsBase(bool value) const { qdockwidget_focusnextchild_isbase = value; }
    void setQDockWidget_FocusPreviousChild_IsBase(bool value) const { qdockwidget_focuspreviouschild_isbase = value; }
    void setQDockWidget_Sender_IsBase(bool value) const { qdockwidget_sender_isbase = value; }
    void setQDockWidget_SenderSignalIndex_IsBase(bool value) const { qdockwidget_sendersignalindex_isbase = value; }
    void setQDockWidget_Receivers_IsBase(bool value) const { qdockwidget_receivers_isbase = value; }
    void setQDockWidget_IsSignalConnected_IsBase(bool value) const { qdockwidget_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdockwidget_metacall_isbase) {
            qdockwidget_metacall_isbase = false;
            return QDockWidget::qt_metacall(param1, param2, param3);
        } else if (qdockwidget_metacall_callback != nullptr) {
            return qdockwidget_metacall_callback(this, param1, param2, param3);
        } else {
            return QDockWidget::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (qdockwidget_changeevent_isbase) {
            qdockwidget_changeevent_isbase = false;
            QDockWidget::changeEvent(event);
        } else if (qdockwidget_changeevent_callback != nullptr) {
            qdockwidget_changeevent_callback(this, event);
        } else {
            QDockWidget::changeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qdockwidget_closeevent_isbase) {
            qdockwidget_closeevent_isbase = false;
            QDockWidget::closeEvent(event);
        } else if (qdockwidget_closeevent_callback != nullptr) {
            qdockwidget_closeevent_callback(this, event);
        } else {
            QDockWidget::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qdockwidget_paintevent_isbase) {
            qdockwidget_paintevent_isbase = false;
            QDockWidget::paintEvent(event);
        } else if (qdockwidget_paintevent_callback != nullptr) {
            qdockwidget_paintevent_callback(this, event);
        } else {
            QDockWidget::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdockwidget_event_isbase) {
            qdockwidget_event_isbase = false;
            return QDockWidget::event(event);
        } else if (qdockwidget_event_callback != nullptr) {
            return qdockwidget_event_callback(this, event);
        } else {
            return QDockWidget::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionDockWidget* option) const override {
        if (qdockwidget_initstyleoption_isbase) {
            qdockwidget_initstyleoption_isbase = false;
            QDockWidget::initStyleOption(option);
        } else if (qdockwidget_initstyleoption_callback != nullptr) {
            qdockwidget_initstyleoption_callback(this, option);
        } else {
            QDockWidget::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qdockwidget_devtype_isbase) {
            qdockwidget_devtype_isbase = false;
            return QDockWidget::devType();
        } else if (qdockwidget_devtype_callback != nullptr) {
            return qdockwidget_devtype_callback();
        } else {
            return QDockWidget::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qdockwidget_setvisible_isbase) {
            qdockwidget_setvisible_isbase = false;
            QDockWidget::setVisible(visible);
        } else if (qdockwidget_setvisible_callback != nullptr) {
            qdockwidget_setvisible_callback(this, visible);
        } else {
            QDockWidget::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qdockwidget_sizehint_isbase) {
            qdockwidget_sizehint_isbase = false;
            return QDockWidget::sizeHint();
        } else if (qdockwidget_sizehint_callback != nullptr) {
            return qdockwidget_sizehint_callback();
        } else {
            return QDockWidget::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qdockwidget_minimumsizehint_isbase) {
            qdockwidget_minimumsizehint_isbase = false;
            return QDockWidget::minimumSizeHint();
        } else if (qdockwidget_minimumsizehint_callback != nullptr) {
            return qdockwidget_minimumsizehint_callback();
        } else {
            return QDockWidget::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qdockwidget_heightforwidth_isbase) {
            qdockwidget_heightforwidth_isbase = false;
            return QDockWidget::heightForWidth(param1);
        } else if (qdockwidget_heightforwidth_callback != nullptr) {
            return qdockwidget_heightforwidth_callback(this, param1);
        } else {
            return QDockWidget::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qdockwidget_hasheightforwidth_isbase) {
            qdockwidget_hasheightforwidth_isbase = false;
            return QDockWidget::hasHeightForWidth();
        } else if (qdockwidget_hasheightforwidth_callback != nullptr) {
            return qdockwidget_hasheightforwidth_callback();
        } else {
            return QDockWidget::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qdockwidget_paintengine_isbase) {
            qdockwidget_paintengine_isbase = false;
            return QDockWidget::paintEngine();
        } else if (qdockwidget_paintengine_callback != nullptr) {
            return qdockwidget_paintengine_callback();
        } else {
            return QDockWidget::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qdockwidget_mousepressevent_isbase) {
            qdockwidget_mousepressevent_isbase = false;
            QDockWidget::mousePressEvent(event);
        } else if (qdockwidget_mousepressevent_callback != nullptr) {
            qdockwidget_mousepressevent_callback(this, event);
        } else {
            QDockWidget::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qdockwidget_mousereleaseevent_isbase) {
            qdockwidget_mousereleaseevent_isbase = false;
            QDockWidget::mouseReleaseEvent(event);
        } else if (qdockwidget_mousereleaseevent_callback != nullptr) {
            qdockwidget_mousereleaseevent_callback(this, event);
        } else {
            QDockWidget::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qdockwidget_mousedoubleclickevent_isbase) {
            qdockwidget_mousedoubleclickevent_isbase = false;
            QDockWidget::mouseDoubleClickEvent(event);
        } else if (qdockwidget_mousedoubleclickevent_callback != nullptr) {
            qdockwidget_mousedoubleclickevent_callback(this, event);
        } else {
            QDockWidget::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qdockwidget_mousemoveevent_isbase) {
            qdockwidget_mousemoveevent_isbase = false;
            QDockWidget::mouseMoveEvent(event);
        } else if (qdockwidget_mousemoveevent_callback != nullptr) {
            qdockwidget_mousemoveevent_callback(this, event);
        } else {
            QDockWidget::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qdockwidget_wheelevent_isbase) {
            qdockwidget_wheelevent_isbase = false;
            QDockWidget::wheelEvent(event);
        } else if (qdockwidget_wheelevent_callback != nullptr) {
            qdockwidget_wheelevent_callback(this, event);
        } else {
            QDockWidget::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qdockwidget_keypressevent_isbase) {
            qdockwidget_keypressevent_isbase = false;
            QDockWidget::keyPressEvent(event);
        } else if (qdockwidget_keypressevent_callback != nullptr) {
            qdockwidget_keypressevent_callback(this, event);
        } else {
            QDockWidget::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qdockwidget_keyreleaseevent_isbase) {
            qdockwidget_keyreleaseevent_isbase = false;
            QDockWidget::keyReleaseEvent(event);
        } else if (qdockwidget_keyreleaseevent_callback != nullptr) {
            qdockwidget_keyreleaseevent_callback(this, event);
        } else {
            QDockWidget::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qdockwidget_focusinevent_isbase) {
            qdockwidget_focusinevent_isbase = false;
            QDockWidget::focusInEvent(event);
        } else if (qdockwidget_focusinevent_callback != nullptr) {
            qdockwidget_focusinevent_callback(this, event);
        } else {
            QDockWidget::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qdockwidget_focusoutevent_isbase) {
            qdockwidget_focusoutevent_isbase = false;
            QDockWidget::focusOutEvent(event);
        } else if (qdockwidget_focusoutevent_callback != nullptr) {
            qdockwidget_focusoutevent_callback(this, event);
        } else {
            QDockWidget::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qdockwidget_enterevent_isbase) {
            qdockwidget_enterevent_isbase = false;
            QDockWidget::enterEvent(event);
        } else if (qdockwidget_enterevent_callback != nullptr) {
            qdockwidget_enterevent_callback(this, event);
        } else {
            QDockWidget::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qdockwidget_leaveevent_isbase) {
            qdockwidget_leaveevent_isbase = false;
            QDockWidget::leaveEvent(event);
        } else if (qdockwidget_leaveevent_callback != nullptr) {
            qdockwidget_leaveevent_callback(this, event);
        } else {
            QDockWidget::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qdockwidget_moveevent_isbase) {
            qdockwidget_moveevent_isbase = false;
            QDockWidget::moveEvent(event);
        } else if (qdockwidget_moveevent_callback != nullptr) {
            qdockwidget_moveevent_callback(this, event);
        } else {
            QDockWidget::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qdockwidget_resizeevent_isbase) {
            qdockwidget_resizeevent_isbase = false;
            QDockWidget::resizeEvent(event);
        } else if (qdockwidget_resizeevent_callback != nullptr) {
            qdockwidget_resizeevent_callback(this, event);
        } else {
            QDockWidget::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qdockwidget_contextmenuevent_isbase) {
            qdockwidget_contextmenuevent_isbase = false;
            QDockWidget::contextMenuEvent(event);
        } else if (qdockwidget_contextmenuevent_callback != nullptr) {
            qdockwidget_contextmenuevent_callback(this, event);
        } else {
            QDockWidget::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qdockwidget_tabletevent_isbase) {
            qdockwidget_tabletevent_isbase = false;
            QDockWidget::tabletEvent(event);
        } else if (qdockwidget_tabletevent_callback != nullptr) {
            qdockwidget_tabletevent_callback(this, event);
        } else {
            QDockWidget::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qdockwidget_actionevent_isbase) {
            qdockwidget_actionevent_isbase = false;
            QDockWidget::actionEvent(event);
        } else if (qdockwidget_actionevent_callback != nullptr) {
            qdockwidget_actionevent_callback(this, event);
        } else {
            QDockWidget::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qdockwidget_dragenterevent_isbase) {
            qdockwidget_dragenterevent_isbase = false;
            QDockWidget::dragEnterEvent(event);
        } else if (qdockwidget_dragenterevent_callback != nullptr) {
            qdockwidget_dragenterevent_callback(this, event);
        } else {
            QDockWidget::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qdockwidget_dragmoveevent_isbase) {
            qdockwidget_dragmoveevent_isbase = false;
            QDockWidget::dragMoveEvent(event);
        } else if (qdockwidget_dragmoveevent_callback != nullptr) {
            qdockwidget_dragmoveevent_callback(this, event);
        } else {
            QDockWidget::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qdockwidget_dragleaveevent_isbase) {
            qdockwidget_dragleaveevent_isbase = false;
            QDockWidget::dragLeaveEvent(event);
        } else if (qdockwidget_dragleaveevent_callback != nullptr) {
            qdockwidget_dragleaveevent_callback(this, event);
        } else {
            QDockWidget::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qdockwidget_dropevent_isbase) {
            qdockwidget_dropevent_isbase = false;
            QDockWidget::dropEvent(event);
        } else if (qdockwidget_dropevent_callback != nullptr) {
            qdockwidget_dropevent_callback(this, event);
        } else {
            QDockWidget::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qdockwidget_showevent_isbase) {
            qdockwidget_showevent_isbase = false;
            QDockWidget::showEvent(event);
        } else if (qdockwidget_showevent_callback != nullptr) {
            qdockwidget_showevent_callback(this, event);
        } else {
            QDockWidget::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qdockwidget_hideevent_isbase) {
            qdockwidget_hideevent_isbase = false;
            QDockWidget::hideEvent(event);
        } else if (qdockwidget_hideevent_callback != nullptr) {
            qdockwidget_hideevent_callback(this, event);
        } else {
            QDockWidget::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qdockwidget_nativeevent_isbase) {
            qdockwidget_nativeevent_isbase = false;
            return QDockWidget::nativeEvent(eventType, message, result);
        } else if (qdockwidget_nativeevent_callback != nullptr) {
            return qdockwidget_nativeevent_callback(this, eventType, message, result);
        } else {
            return QDockWidget::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qdockwidget_metric_isbase) {
            qdockwidget_metric_isbase = false;
            return QDockWidget::metric(param1);
        } else if (qdockwidget_metric_callback != nullptr) {
            return qdockwidget_metric_callback(this, param1);
        } else {
            return QDockWidget::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qdockwidget_initpainter_isbase) {
            qdockwidget_initpainter_isbase = false;
            QDockWidget::initPainter(painter);
        } else if (qdockwidget_initpainter_callback != nullptr) {
            qdockwidget_initpainter_callback(this, painter);
        } else {
            QDockWidget::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qdockwidget_redirected_isbase) {
            qdockwidget_redirected_isbase = false;
            return QDockWidget::redirected(offset);
        } else if (qdockwidget_redirected_callback != nullptr) {
            return qdockwidget_redirected_callback(this, offset);
        } else {
            return QDockWidget::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qdockwidget_sharedpainter_isbase) {
            qdockwidget_sharedpainter_isbase = false;
            return QDockWidget::sharedPainter();
        } else if (qdockwidget_sharedpainter_callback != nullptr) {
            return qdockwidget_sharedpainter_callback();
        } else {
            return QDockWidget::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qdockwidget_inputmethodevent_isbase) {
            qdockwidget_inputmethodevent_isbase = false;
            QDockWidget::inputMethodEvent(param1);
        } else if (qdockwidget_inputmethodevent_callback != nullptr) {
            qdockwidget_inputmethodevent_callback(this, param1);
        } else {
            QDockWidget::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qdockwidget_inputmethodquery_isbase) {
            qdockwidget_inputmethodquery_isbase = false;
            return QDockWidget::inputMethodQuery(param1);
        } else if (qdockwidget_inputmethodquery_callback != nullptr) {
            return qdockwidget_inputmethodquery_callback(this, param1);
        } else {
            return QDockWidget::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qdockwidget_focusnextprevchild_isbase) {
            qdockwidget_focusnextprevchild_isbase = false;
            return QDockWidget::focusNextPrevChild(next);
        } else if (qdockwidget_focusnextprevchild_callback != nullptr) {
            return qdockwidget_focusnextprevchild_callback(this, next);
        } else {
            return QDockWidget::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdockwidget_eventfilter_isbase) {
            qdockwidget_eventfilter_isbase = false;
            return QDockWidget::eventFilter(watched, event);
        } else if (qdockwidget_eventfilter_callback != nullptr) {
            return qdockwidget_eventfilter_callback(this, watched, event);
        } else {
            return QDockWidget::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdockwidget_timerevent_isbase) {
            qdockwidget_timerevent_isbase = false;
            QDockWidget::timerEvent(event);
        } else if (qdockwidget_timerevent_callback != nullptr) {
            qdockwidget_timerevent_callback(this, event);
        } else {
            QDockWidget::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdockwidget_childevent_isbase) {
            qdockwidget_childevent_isbase = false;
            QDockWidget::childEvent(event);
        } else if (qdockwidget_childevent_callback != nullptr) {
            qdockwidget_childevent_callback(this, event);
        } else {
            QDockWidget::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdockwidget_customevent_isbase) {
            qdockwidget_customevent_isbase = false;
            QDockWidget::customEvent(event);
        } else if (qdockwidget_customevent_callback != nullptr) {
            qdockwidget_customevent_callback(this, event);
        } else {
            QDockWidget::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdockwidget_connectnotify_isbase) {
            qdockwidget_connectnotify_isbase = false;
            QDockWidget::connectNotify(signal);
        } else if (qdockwidget_connectnotify_callback != nullptr) {
            qdockwidget_connectnotify_callback(this, signal);
        } else {
            QDockWidget::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdockwidget_disconnectnotify_isbase) {
            qdockwidget_disconnectnotify_isbase = false;
            QDockWidget::disconnectNotify(signal);
        } else if (qdockwidget_disconnectnotify_callback != nullptr) {
            qdockwidget_disconnectnotify_callback(this, signal);
        } else {
            QDockWidget::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qdockwidget_updatemicrofocus_isbase) {
            qdockwidget_updatemicrofocus_isbase = false;
            QDockWidget::updateMicroFocus();
        } else if (qdockwidget_updatemicrofocus_callback != nullptr) {
            qdockwidget_updatemicrofocus_callback();
        } else {
            QDockWidget::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qdockwidget_create_isbase) {
            qdockwidget_create_isbase = false;
            QDockWidget::create();
        } else if (qdockwidget_create_callback != nullptr) {
            qdockwidget_create_callback();
        } else {
            QDockWidget::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qdockwidget_destroy_isbase) {
            qdockwidget_destroy_isbase = false;
            QDockWidget::destroy();
        } else if (qdockwidget_destroy_callback != nullptr) {
            qdockwidget_destroy_callback();
        } else {
            QDockWidget::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qdockwidget_focusnextchild_isbase) {
            qdockwidget_focusnextchild_isbase = false;
            return QDockWidget::focusNextChild();
        } else if (qdockwidget_focusnextchild_callback != nullptr) {
            return qdockwidget_focusnextchild_callback();
        } else {
            return QDockWidget::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qdockwidget_focuspreviouschild_isbase) {
            qdockwidget_focuspreviouschild_isbase = false;
            return QDockWidget::focusPreviousChild();
        } else if (qdockwidget_focuspreviouschild_callback != nullptr) {
            return qdockwidget_focuspreviouschild_callback();
        } else {
            return QDockWidget::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qdockwidget_sender_isbase) {
            qdockwidget_sender_isbase = false;
            return QDockWidget::sender();
        } else if (qdockwidget_sender_callback != nullptr) {
            return qdockwidget_sender_callback();
        } else {
            return QDockWidget::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qdockwidget_sendersignalindex_isbase) {
            qdockwidget_sendersignalindex_isbase = false;
            return QDockWidget::senderSignalIndex();
        } else if (qdockwidget_sendersignalindex_callback != nullptr) {
            return qdockwidget_sendersignalindex_callback();
        } else {
            return QDockWidget::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qdockwidget_receivers_isbase) {
            qdockwidget_receivers_isbase = false;
            return QDockWidget::receivers(signal);
        } else if (qdockwidget_receivers_callback != nullptr) {
            return qdockwidget_receivers_callback(this, signal);
        } else {
            return QDockWidget::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qdockwidget_issignalconnected_isbase) {
            qdockwidget_issignalconnected_isbase = false;
            return QDockWidget::isSignalConnected(signal);
        } else if (qdockwidget_issignalconnected_callback != nullptr) {
            return qdockwidget_issignalconnected_callback(this, signal);
        } else {
            return QDockWidget::isSignalConnected(signal);
        }
    }
};

#endif
