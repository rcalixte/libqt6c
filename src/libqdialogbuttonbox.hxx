#pragma once
#ifndef SRCC_LIBVIRTUALQDIALOGBUTTONBOX_H
#define SRCC_LIBVIRTUALQDIALOGBUTTONBOX_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QDialogButtonBox so that we can call protected methods
class VirtualQDialogButtonBox : public QDialogButtonBox {

  public:
    // Virtual class public types (including callbacks)
    using QDialogButtonBox_Metacall_Callback = int (*)(QDialogButtonBox*, QMetaObject::Call, int, void**);
    using QDialogButtonBox_ChangeEvent_Callback = void (*)(QDialogButtonBox*, QEvent*);
    using QDialogButtonBox_Event_Callback = bool (*)(QDialogButtonBox*, QEvent*);
    using QDialogButtonBox_DevType_Callback = int (*)();
    using QDialogButtonBox_SetVisible_Callback = void (*)(QDialogButtonBox*, bool);
    using QDialogButtonBox_SizeHint_Callback = QSize (*)();
    using QDialogButtonBox_MinimumSizeHint_Callback = QSize (*)();
    using QDialogButtonBox_HeightForWidth_Callback = int (*)(const QDialogButtonBox*, int);
    using QDialogButtonBox_HasHeightForWidth_Callback = bool (*)();
    using QDialogButtonBox_PaintEngine_Callback = QPaintEngine* (*)();
    using QDialogButtonBox_MousePressEvent_Callback = void (*)(QDialogButtonBox*, QMouseEvent*);
    using QDialogButtonBox_MouseReleaseEvent_Callback = void (*)(QDialogButtonBox*, QMouseEvent*);
    using QDialogButtonBox_MouseDoubleClickEvent_Callback = void (*)(QDialogButtonBox*, QMouseEvent*);
    using QDialogButtonBox_MouseMoveEvent_Callback = void (*)(QDialogButtonBox*, QMouseEvent*);
    using QDialogButtonBox_WheelEvent_Callback = void (*)(QDialogButtonBox*, QWheelEvent*);
    using QDialogButtonBox_KeyPressEvent_Callback = void (*)(QDialogButtonBox*, QKeyEvent*);
    using QDialogButtonBox_KeyReleaseEvent_Callback = void (*)(QDialogButtonBox*, QKeyEvent*);
    using QDialogButtonBox_FocusInEvent_Callback = void (*)(QDialogButtonBox*, QFocusEvent*);
    using QDialogButtonBox_FocusOutEvent_Callback = void (*)(QDialogButtonBox*, QFocusEvent*);
    using QDialogButtonBox_EnterEvent_Callback = void (*)(QDialogButtonBox*, QEnterEvent*);
    using QDialogButtonBox_LeaveEvent_Callback = void (*)(QDialogButtonBox*, QEvent*);
    using QDialogButtonBox_PaintEvent_Callback = void (*)(QDialogButtonBox*, QPaintEvent*);
    using QDialogButtonBox_MoveEvent_Callback = void (*)(QDialogButtonBox*, QMoveEvent*);
    using QDialogButtonBox_ResizeEvent_Callback = void (*)(QDialogButtonBox*, QResizeEvent*);
    using QDialogButtonBox_CloseEvent_Callback = void (*)(QDialogButtonBox*, QCloseEvent*);
    using QDialogButtonBox_ContextMenuEvent_Callback = void (*)(QDialogButtonBox*, QContextMenuEvent*);
    using QDialogButtonBox_TabletEvent_Callback = void (*)(QDialogButtonBox*, QTabletEvent*);
    using QDialogButtonBox_ActionEvent_Callback = void (*)(QDialogButtonBox*, QActionEvent*);
    using QDialogButtonBox_DragEnterEvent_Callback = void (*)(QDialogButtonBox*, QDragEnterEvent*);
    using QDialogButtonBox_DragMoveEvent_Callback = void (*)(QDialogButtonBox*, QDragMoveEvent*);
    using QDialogButtonBox_DragLeaveEvent_Callback = void (*)(QDialogButtonBox*, QDragLeaveEvent*);
    using QDialogButtonBox_DropEvent_Callback = void (*)(QDialogButtonBox*, QDropEvent*);
    using QDialogButtonBox_ShowEvent_Callback = void (*)(QDialogButtonBox*, QShowEvent*);
    using QDialogButtonBox_HideEvent_Callback = void (*)(QDialogButtonBox*, QHideEvent*);
    using QDialogButtonBox_NativeEvent_Callback = bool (*)(QDialogButtonBox*, const QByteArray&, void*, qintptr*);
    using QDialogButtonBox_Metric_Callback = int (*)(const QDialogButtonBox*, QPaintDevice::PaintDeviceMetric);
    using QDialogButtonBox_InitPainter_Callback = void (*)(const QDialogButtonBox*, QPainter*);
    using QDialogButtonBox_Redirected_Callback = QPaintDevice* (*)(const QDialogButtonBox*, QPoint*);
    using QDialogButtonBox_SharedPainter_Callback = QPainter* (*)();
    using QDialogButtonBox_InputMethodEvent_Callback = void (*)(QDialogButtonBox*, QInputMethodEvent*);
    using QDialogButtonBox_InputMethodQuery_Callback = QVariant (*)(const QDialogButtonBox*, Qt::InputMethodQuery);
    using QDialogButtonBox_FocusNextPrevChild_Callback = bool (*)(QDialogButtonBox*, bool);
    using QDialogButtonBox_EventFilter_Callback = bool (*)(QDialogButtonBox*, QObject*, QEvent*);
    using QDialogButtonBox_TimerEvent_Callback = void (*)(QDialogButtonBox*, QTimerEvent*);
    using QDialogButtonBox_ChildEvent_Callback = void (*)(QDialogButtonBox*, QChildEvent*);
    using QDialogButtonBox_CustomEvent_Callback = void (*)(QDialogButtonBox*, QEvent*);
    using QDialogButtonBox_ConnectNotify_Callback = void (*)(QDialogButtonBox*, const QMetaMethod&);
    using QDialogButtonBox_DisconnectNotify_Callback = void (*)(QDialogButtonBox*, const QMetaMethod&);
    using QDialogButtonBox_UpdateMicroFocus_Callback = void (*)();
    using QDialogButtonBox_Create_Callback = void (*)();
    using QDialogButtonBox_Destroy_Callback = void (*)();
    using QDialogButtonBox_FocusNextChild_Callback = bool (*)();
    using QDialogButtonBox_FocusPreviousChild_Callback = bool (*)();
    using QDialogButtonBox_Sender_Callback = QObject* (*)();
    using QDialogButtonBox_SenderSignalIndex_Callback = int (*)();
    using QDialogButtonBox_Receivers_Callback = int (*)(const QDialogButtonBox*, const char*);
    using QDialogButtonBox_IsSignalConnected_Callback = bool (*)(const QDialogButtonBox*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QDialogButtonBox_Metacall_Callback qdialogbuttonbox_metacall_callback = nullptr;
    QDialogButtonBox_ChangeEvent_Callback qdialogbuttonbox_changeevent_callback = nullptr;
    QDialogButtonBox_Event_Callback qdialogbuttonbox_event_callback = nullptr;
    QDialogButtonBox_DevType_Callback qdialogbuttonbox_devtype_callback = nullptr;
    QDialogButtonBox_SetVisible_Callback qdialogbuttonbox_setvisible_callback = nullptr;
    QDialogButtonBox_SizeHint_Callback qdialogbuttonbox_sizehint_callback = nullptr;
    QDialogButtonBox_MinimumSizeHint_Callback qdialogbuttonbox_minimumsizehint_callback = nullptr;
    QDialogButtonBox_HeightForWidth_Callback qdialogbuttonbox_heightforwidth_callback = nullptr;
    QDialogButtonBox_HasHeightForWidth_Callback qdialogbuttonbox_hasheightforwidth_callback = nullptr;
    QDialogButtonBox_PaintEngine_Callback qdialogbuttonbox_paintengine_callback = nullptr;
    QDialogButtonBox_MousePressEvent_Callback qdialogbuttonbox_mousepressevent_callback = nullptr;
    QDialogButtonBox_MouseReleaseEvent_Callback qdialogbuttonbox_mousereleaseevent_callback = nullptr;
    QDialogButtonBox_MouseDoubleClickEvent_Callback qdialogbuttonbox_mousedoubleclickevent_callback = nullptr;
    QDialogButtonBox_MouseMoveEvent_Callback qdialogbuttonbox_mousemoveevent_callback = nullptr;
    QDialogButtonBox_WheelEvent_Callback qdialogbuttonbox_wheelevent_callback = nullptr;
    QDialogButtonBox_KeyPressEvent_Callback qdialogbuttonbox_keypressevent_callback = nullptr;
    QDialogButtonBox_KeyReleaseEvent_Callback qdialogbuttonbox_keyreleaseevent_callback = nullptr;
    QDialogButtonBox_FocusInEvent_Callback qdialogbuttonbox_focusinevent_callback = nullptr;
    QDialogButtonBox_FocusOutEvent_Callback qdialogbuttonbox_focusoutevent_callback = nullptr;
    QDialogButtonBox_EnterEvent_Callback qdialogbuttonbox_enterevent_callback = nullptr;
    QDialogButtonBox_LeaveEvent_Callback qdialogbuttonbox_leaveevent_callback = nullptr;
    QDialogButtonBox_PaintEvent_Callback qdialogbuttonbox_paintevent_callback = nullptr;
    QDialogButtonBox_MoveEvent_Callback qdialogbuttonbox_moveevent_callback = nullptr;
    QDialogButtonBox_ResizeEvent_Callback qdialogbuttonbox_resizeevent_callback = nullptr;
    QDialogButtonBox_CloseEvent_Callback qdialogbuttonbox_closeevent_callback = nullptr;
    QDialogButtonBox_ContextMenuEvent_Callback qdialogbuttonbox_contextmenuevent_callback = nullptr;
    QDialogButtonBox_TabletEvent_Callback qdialogbuttonbox_tabletevent_callback = nullptr;
    QDialogButtonBox_ActionEvent_Callback qdialogbuttonbox_actionevent_callback = nullptr;
    QDialogButtonBox_DragEnterEvent_Callback qdialogbuttonbox_dragenterevent_callback = nullptr;
    QDialogButtonBox_DragMoveEvent_Callback qdialogbuttonbox_dragmoveevent_callback = nullptr;
    QDialogButtonBox_DragLeaveEvent_Callback qdialogbuttonbox_dragleaveevent_callback = nullptr;
    QDialogButtonBox_DropEvent_Callback qdialogbuttonbox_dropevent_callback = nullptr;
    QDialogButtonBox_ShowEvent_Callback qdialogbuttonbox_showevent_callback = nullptr;
    QDialogButtonBox_HideEvent_Callback qdialogbuttonbox_hideevent_callback = nullptr;
    QDialogButtonBox_NativeEvent_Callback qdialogbuttonbox_nativeevent_callback = nullptr;
    QDialogButtonBox_Metric_Callback qdialogbuttonbox_metric_callback = nullptr;
    QDialogButtonBox_InitPainter_Callback qdialogbuttonbox_initpainter_callback = nullptr;
    QDialogButtonBox_Redirected_Callback qdialogbuttonbox_redirected_callback = nullptr;
    QDialogButtonBox_SharedPainter_Callback qdialogbuttonbox_sharedpainter_callback = nullptr;
    QDialogButtonBox_InputMethodEvent_Callback qdialogbuttonbox_inputmethodevent_callback = nullptr;
    QDialogButtonBox_InputMethodQuery_Callback qdialogbuttonbox_inputmethodquery_callback = nullptr;
    QDialogButtonBox_FocusNextPrevChild_Callback qdialogbuttonbox_focusnextprevchild_callback = nullptr;
    QDialogButtonBox_EventFilter_Callback qdialogbuttonbox_eventfilter_callback = nullptr;
    QDialogButtonBox_TimerEvent_Callback qdialogbuttonbox_timerevent_callback = nullptr;
    QDialogButtonBox_ChildEvent_Callback qdialogbuttonbox_childevent_callback = nullptr;
    QDialogButtonBox_CustomEvent_Callback qdialogbuttonbox_customevent_callback = nullptr;
    QDialogButtonBox_ConnectNotify_Callback qdialogbuttonbox_connectnotify_callback = nullptr;
    QDialogButtonBox_DisconnectNotify_Callback qdialogbuttonbox_disconnectnotify_callback = nullptr;
    QDialogButtonBox_UpdateMicroFocus_Callback qdialogbuttonbox_updatemicrofocus_callback = nullptr;
    QDialogButtonBox_Create_Callback qdialogbuttonbox_create_callback = nullptr;
    QDialogButtonBox_Destroy_Callback qdialogbuttonbox_destroy_callback = nullptr;
    QDialogButtonBox_FocusNextChild_Callback qdialogbuttonbox_focusnextchild_callback = nullptr;
    QDialogButtonBox_FocusPreviousChild_Callback qdialogbuttonbox_focuspreviouschild_callback = nullptr;
    QDialogButtonBox_Sender_Callback qdialogbuttonbox_sender_callback = nullptr;
    QDialogButtonBox_SenderSignalIndex_Callback qdialogbuttonbox_sendersignalindex_callback = nullptr;
    QDialogButtonBox_Receivers_Callback qdialogbuttonbox_receivers_callback = nullptr;
    QDialogButtonBox_IsSignalConnected_Callback qdialogbuttonbox_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qdialogbuttonbox_metacall_isbase = false;
    mutable bool qdialogbuttonbox_changeevent_isbase = false;
    mutable bool qdialogbuttonbox_event_isbase = false;
    mutable bool qdialogbuttonbox_devtype_isbase = false;
    mutable bool qdialogbuttonbox_setvisible_isbase = false;
    mutable bool qdialogbuttonbox_sizehint_isbase = false;
    mutable bool qdialogbuttonbox_minimumsizehint_isbase = false;
    mutable bool qdialogbuttonbox_heightforwidth_isbase = false;
    mutable bool qdialogbuttonbox_hasheightforwidth_isbase = false;
    mutable bool qdialogbuttonbox_paintengine_isbase = false;
    mutable bool qdialogbuttonbox_mousepressevent_isbase = false;
    mutable bool qdialogbuttonbox_mousereleaseevent_isbase = false;
    mutable bool qdialogbuttonbox_mousedoubleclickevent_isbase = false;
    mutable bool qdialogbuttonbox_mousemoveevent_isbase = false;
    mutable bool qdialogbuttonbox_wheelevent_isbase = false;
    mutable bool qdialogbuttonbox_keypressevent_isbase = false;
    mutable bool qdialogbuttonbox_keyreleaseevent_isbase = false;
    mutable bool qdialogbuttonbox_focusinevent_isbase = false;
    mutable bool qdialogbuttonbox_focusoutevent_isbase = false;
    mutable bool qdialogbuttonbox_enterevent_isbase = false;
    mutable bool qdialogbuttonbox_leaveevent_isbase = false;
    mutable bool qdialogbuttonbox_paintevent_isbase = false;
    mutable bool qdialogbuttonbox_moveevent_isbase = false;
    mutable bool qdialogbuttonbox_resizeevent_isbase = false;
    mutable bool qdialogbuttonbox_closeevent_isbase = false;
    mutable bool qdialogbuttonbox_contextmenuevent_isbase = false;
    mutable bool qdialogbuttonbox_tabletevent_isbase = false;
    mutable bool qdialogbuttonbox_actionevent_isbase = false;
    mutable bool qdialogbuttonbox_dragenterevent_isbase = false;
    mutable bool qdialogbuttonbox_dragmoveevent_isbase = false;
    mutable bool qdialogbuttonbox_dragleaveevent_isbase = false;
    mutable bool qdialogbuttonbox_dropevent_isbase = false;
    mutable bool qdialogbuttonbox_showevent_isbase = false;
    mutable bool qdialogbuttonbox_hideevent_isbase = false;
    mutable bool qdialogbuttonbox_nativeevent_isbase = false;
    mutable bool qdialogbuttonbox_metric_isbase = false;
    mutable bool qdialogbuttonbox_initpainter_isbase = false;
    mutable bool qdialogbuttonbox_redirected_isbase = false;
    mutable bool qdialogbuttonbox_sharedpainter_isbase = false;
    mutable bool qdialogbuttonbox_inputmethodevent_isbase = false;
    mutable bool qdialogbuttonbox_inputmethodquery_isbase = false;
    mutable bool qdialogbuttonbox_focusnextprevchild_isbase = false;
    mutable bool qdialogbuttonbox_eventfilter_isbase = false;
    mutable bool qdialogbuttonbox_timerevent_isbase = false;
    mutable bool qdialogbuttonbox_childevent_isbase = false;
    mutable bool qdialogbuttonbox_customevent_isbase = false;
    mutable bool qdialogbuttonbox_connectnotify_isbase = false;
    mutable bool qdialogbuttonbox_disconnectnotify_isbase = false;
    mutable bool qdialogbuttonbox_updatemicrofocus_isbase = false;
    mutable bool qdialogbuttonbox_create_isbase = false;
    mutable bool qdialogbuttonbox_destroy_isbase = false;
    mutable bool qdialogbuttonbox_focusnextchild_isbase = false;
    mutable bool qdialogbuttonbox_focuspreviouschild_isbase = false;
    mutable bool qdialogbuttonbox_sender_isbase = false;
    mutable bool qdialogbuttonbox_sendersignalindex_isbase = false;
    mutable bool qdialogbuttonbox_receivers_isbase = false;
    mutable bool qdialogbuttonbox_issignalconnected_isbase = false;

  public:
    VirtualQDialogButtonBox(QWidget* parent) : QDialogButtonBox(parent){};
    VirtualQDialogButtonBox() : QDialogButtonBox(){};
    VirtualQDialogButtonBox(Qt::Orientation orientation) : QDialogButtonBox(orientation){};
    VirtualQDialogButtonBox(QDialogButtonBox::StandardButtons buttons) : QDialogButtonBox(buttons){};
    VirtualQDialogButtonBox(QDialogButtonBox::StandardButtons buttons, Qt::Orientation orientation) : QDialogButtonBox(buttons, orientation){};
    VirtualQDialogButtonBox(Qt::Orientation orientation, QWidget* parent) : QDialogButtonBox(orientation, parent){};
    VirtualQDialogButtonBox(QDialogButtonBox::StandardButtons buttons, QWidget* parent) : QDialogButtonBox(buttons, parent){};
    VirtualQDialogButtonBox(QDialogButtonBox::StandardButtons buttons, Qt::Orientation orientation, QWidget* parent) : QDialogButtonBox(buttons, orientation, parent){};

    ~VirtualQDialogButtonBox() {
        qdialogbuttonbox_metacall_callback = nullptr;
        qdialogbuttonbox_changeevent_callback = nullptr;
        qdialogbuttonbox_event_callback = nullptr;
        qdialogbuttonbox_devtype_callback = nullptr;
        qdialogbuttonbox_setvisible_callback = nullptr;
        qdialogbuttonbox_sizehint_callback = nullptr;
        qdialogbuttonbox_minimumsizehint_callback = nullptr;
        qdialogbuttonbox_heightforwidth_callback = nullptr;
        qdialogbuttonbox_hasheightforwidth_callback = nullptr;
        qdialogbuttonbox_paintengine_callback = nullptr;
        qdialogbuttonbox_mousepressevent_callback = nullptr;
        qdialogbuttonbox_mousereleaseevent_callback = nullptr;
        qdialogbuttonbox_mousedoubleclickevent_callback = nullptr;
        qdialogbuttonbox_mousemoveevent_callback = nullptr;
        qdialogbuttonbox_wheelevent_callback = nullptr;
        qdialogbuttonbox_keypressevent_callback = nullptr;
        qdialogbuttonbox_keyreleaseevent_callback = nullptr;
        qdialogbuttonbox_focusinevent_callback = nullptr;
        qdialogbuttonbox_focusoutevent_callback = nullptr;
        qdialogbuttonbox_enterevent_callback = nullptr;
        qdialogbuttonbox_leaveevent_callback = nullptr;
        qdialogbuttonbox_paintevent_callback = nullptr;
        qdialogbuttonbox_moveevent_callback = nullptr;
        qdialogbuttonbox_resizeevent_callback = nullptr;
        qdialogbuttonbox_closeevent_callback = nullptr;
        qdialogbuttonbox_contextmenuevent_callback = nullptr;
        qdialogbuttonbox_tabletevent_callback = nullptr;
        qdialogbuttonbox_actionevent_callback = nullptr;
        qdialogbuttonbox_dragenterevent_callback = nullptr;
        qdialogbuttonbox_dragmoveevent_callback = nullptr;
        qdialogbuttonbox_dragleaveevent_callback = nullptr;
        qdialogbuttonbox_dropevent_callback = nullptr;
        qdialogbuttonbox_showevent_callback = nullptr;
        qdialogbuttonbox_hideevent_callback = nullptr;
        qdialogbuttonbox_nativeevent_callback = nullptr;
        qdialogbuttonbox_metric_callback = nullptr;
        qdialogbuttonbox_initpainter_callback = nullptr;
        qdialogbuttonbox_redirected_callback = nullptr;
        qdialogbuttonbox_sharedpainter_callback = nullptr;
        qdialogbuttonbox_inputmethodevent_callback = nullptr;
        qdialogbuttonbox_inputmethodquery_callback = nullptr;
        qdialogbuttonbox_focusnextprevchild_callback = nullptr;
        qdialogbuttonbox_eventfilter_callback = nullptr;
        qdialogbuttonbox_timerevent_callback = nullptr;
        qdialogbuttonbox_childevent_callback = nullptr;
        qdialogbuttonbox_customevent_callback = nullptr;
        qdialogbuttonbox_connectnotify_callback = nullptr;
        qdialogbuttonbox_disconnectnotify_callback = nullptr;
        qdialogbuttonbox_updatemicrofocus_callback = nullptr;
        qdialogbuttonbox_create_callback = nullptr;
        qdialogbuttonbox_destroy_callback = nullptr;
        qdialogbuttonbox_focusnextchild_callback = nullptr;
        qdialogbuttonbox_focuspreviouschild_callback = nullptr;
        qdialogbuttonbox_sender_callback = nullptr;
        qdialogbuttonbox_sendersignalindex_callback = nullptr;
        qdialogbuttonbox_receivers_callback = nullptr;
        qdialogbuttonbox_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQDialogButtonBox_Metacall_Callback(QDialogButtonBox_Metacall_Callback cb) { qdialogbuttonbox_metacall_callback = cb; }
    void setQDialogButtonBox_ChangeEvent_Callback(QDialogButtonBox_ChangeEvent_Callback cb) { qdialogbuttonbox_changeevent_callback = cb; }
    void setQDialogButtonBox_Event_Callback(QDialogButtonBox_Event_Callback cb) { qdialogbuttonbox_event_callback = cb; }
    void setQDialogButtonBox_DevType_Callback(QDialogButtonBox_DevType_Callback cb) { qdialogbuttonbox_devtype_callback = cb; }
    void setQDialogButtonBox_SetVisible_Callback(QDialogButtonBox_SetVisible_Callback cb) { qdialogbuttonbox_setvisible_callback = cb; }
    void setQDialogButtonBox_SizeHint_Callback(QDialogButtonBox_SizeHint_Callback cb) { qdialogbuttonbox_sizehint_callback = cb; }
    void setQDialogButtonBox_MinimumSizeHint_Callback(QDialogButtonBox_MinimumSizeHint_Callback cb) { qdialogbuttonbox_minimumsizehint_callback = cb; }
    void setQDialogButtonBox_HeightForWidth_Callback(QDialogButtonBox_HeightForWidth_Callback cb) { qdialogbuttonbox_heightforwidth_callback = cb; }
    void setQDialogButtonBox_HasHeightForWidth_Callback(QDialogButtonBox_HasHeightForWidth_Callback cb) { qdialogbuttonbox_hasheightforwidth_callback = cb; }
    void setQDialogButtonBox_PaintEngine_Callback(QDialogButtonBox_PaintEngine_Callback cb) { qdialogbuttonbox_paintengine_callback = cb; }
    void setQDialogButtonBox_MousePressEvent_Callback(QDialogButtonBox_MousePressEvent_Callback cb) { qdialogbuttonbox_mousepressevent_callback = cb; }
    void setQDialogButtonBox_MouseReleaseEvent_Callback(QDialogButtonBox_MouseReleaseEvent_Callback cb) { qdialogbuttonbox_mousereleaseevent_callback = cb; }
    void setQDialogButtonBox_MouseDoubleClickEvent_Callback(QDialogButtonBox_MouseDoubleClickEvent_Callback cb) { qdialogbuttonbox_mousedoubleclickevent_callback = cb; }
    void setQDialogButtonBox_MouseMoveEvent_Callback(QDialogButtonBox_MouseMoveEvent_Callback cb) { qdialogbuttonbox_mousemoveevent_callback = cb; }
    void setQDialogButtonBox_WheelEvent_Callback(QDialogButtonBox_WheelEvent_Callback cb) { qdialogbuttonbox_wheelevent_callback = cb; }
    void setQDialogButtonBox_KeyPressEvent_Callback(QDialogButtonBox_KeyPressEvent_Callback cb) { qdialogbuttonbox_keypressevent_callback = cb; }
    void setQDialogButtonBox_KeyReleaseEvent_Callback(QDialogButtonBox_KeyReleaseEvent_Callback cb) { qdialogbuttonbox_keyreleaseevent_callback = cb; }
    void setQDialogButtonBox_FocusInEvent_Callback(QDialogButtonBox_FocusInEvent_Callback cb) { qdialogbuttonbox_focusinevent_callback = cb; }
    void setQDialogButtonBox_FocusOutEvent_Callback(QDialogButtonBox_FocusOutEvent_Callback cb) { qdialogbuttonbox_focusoutevent_callback = cb; }
    void setQDialogButtonBox_EnterEvent_Callback(QDialogButtonBox_EnterEvent_Callback cb) { qdialogbuttonbox_enterevent_callback = cb; }
    void setQDialogButtonBox_LeaveEvent_Callback(QDialogButtonBox_LeaveEvent_Callback cb) { qdialogbuttonbox_leaveevent_callback = cb; }
    void setQDialogButtonBox_PaintEvent_Callback(QDialogButtonBox_PaintEvent_Callback cb) { qdialogbuttonbox_paintevent_callback = cb; }
    void setQDialogButtonBox_MoveEvent_Callback(QDialogButtonBox_MoveEvent_Callback cb) { qdialogbuttonbox_moveevent_callback = cb; }
    void setQDialogButtonBox_ResizeEvent_Callback(QDialogButtonBox_ResizeEvent_Callback cb) { qdialogbuttonbox_resizeevent_callback = cb; }
    void setQDialogButtonBox_CloseEvent_Callback(QDialogButtonBox_CloseEvent_Callback cb) { qdialogbuttonbox_closeevent_callback = cb; }
    void setQDialogButtonBox_ContextMenuEvent_Callback(QDialogButtonBox_ContextMenuEvent_Callback cb) { qdialogbuttonbox_contextmenuevent_callback = cb; }
    void setQDialogButtonBox_TabletEvent_Callback(QDialogButtonBox_TabletEvent_Callback cb) { qdialogbuttonbox_tabletevent_callback = cb; }
    void setQDialogButtonBox_ActionEvent_Callback(QDialogButtonBox_ActionEvent_Callback cb) { qdialogbuttonbox_actionevent_callback = cb; }
    void setQDialogButtonBox_DragEnterEvent_Callback(QDialogButtonBox_DragEnterEvent_Callback cb) { qdialogbuttonbox_dragenterevent_callback = cb; }
    void setQDialogButtonBox_DragMoveEvent_Callback(QDialogButtonBox_DragMoveEvent_Callback cb) { qdialogbuttonbox_dragmoveevent_callback = cb; }
    void setQDialogButtonBox_DragLeaveEvent_Callback(QDialogButtonBox_DragLeaveEvent_Callback cb) { qdialogbuttonbox_dragleaveevent_callback = cb; }
    void setQDialogButtonBox_DropEvent_Callback(QDialogButtonBox_DropEvent_Callback cb) { qdialogbuttonbox_dropevent_callback = cb; }
    void setQDialogButtonBox_ShowEvent_Callback(QDialogButtonBox_ShowEvent_Callback cb) { qdialogbuttonbox_showevent_callback = cb; }
    void setQDialogButtonBox_HideEvent_Callback(QDialogButtonBox_HideEvent_Callback cb) { qdialogbuttonbox_hideevent_callback = cb; }
    void setQDialogButtonBox_NativeEvent_Callback(QDialogButtonBox_NativeEvent_Callback cb) { qdialogbuttonbox_nativeevent_callback = cb; }
    void setQDialogButtonBox_Metric_Callback(QDialogButtonBox_Metric_Callback cb) { qdialogbuttonbox_metric_callback = cb; }
    void setQDialogButtonBox_InitPainter_Callback(QDialogButtonBox_InitPainter_Callback cb) { qdialogbuttonbox_initpainter_callback = cb; }
    void setQDialogButtonBox_Redirected_Callback(QDialogButtonBox_Redirected_Callback cb) { qdialogbuttonbox_redirected_callback = cb; }
    void setQDialogButtonBox_SharedPainter_Callback(QDialogButtonBox_SharedPainter_Callback cb) { qdialogbuttonbox_sharedpainter_callback = cb; }
    void setQDialogButtonBox_InputMethodEvent_Callback(QDialogButtonBox_InputMethodEvent_Callback cb) { qdialogbuttonbox_inputmethodevent_callback = cb; }
    void setQDialogButtonBox_InputMethodQuery_Callback(QDialogButtonBox_InputMethodQuery_Callback cb) { qdialogbuttonbox_inputmethodquery_callback = cb; }
    void setQDialogButtonBox_FocusNextPrevChild_Callback(QDialogButtonBox_FocusNextPrevChild_Callback cb) { qdialogbuttonbox_focusnextprevchild_callback = cb; }
    void setQDialogButtonBox_EventFilter_Callback(QDialogButtonBox_EventFilter_Callback cb) { qdialogbuttonbox_eventfilter_callback = cb; }
    void setQDialogButtonBox_TimerEvent_Callback(QDialogButtonBox_TimerEvent_Callback cb) { qdialogbuttonbox_timerevent_callback = cb; }
    void setQDialogButtonBox_ChildEvent_Callback(QDialogButtonBox_ChildEvent_Callback cb) { qdialogbuttonbox_childevent_callback = cb; }
    void setQDialogButtonBox_CustomEvent_Callback(QDialogButtonBox_CustomEvent_Callback cb) { qdialogbuttonbox_customevent_callback = cb; }
    void setQDialogButtonBox_ConnectNotify_Callback(QDialogButtonBox_ConnectNotify_Callback cb) { qdialogbuttonbox_connectnotify_callback = cb; }
    void setQDialogButtonBox_DisconnectNotify_Callback(QDialogButtonBox_DisconnectNotify_Callback cb) { qdialogbuttonbox_disconnectnotify_callback = cb; }
    void setQDialogButtonBox_UpdateMicroFocus_Callback(QDialogButtonBox_UpdateMicroFocus_Callback cb) { qdialogbuttonbox_updatemicrofocus_callback = cb; }
    void setQDialogButtonBox_Create_Callback(QDialogButtonBox_Create_Callback cb) { qdialogbuttonbox_create_callback = cb; }
    void setQDialogButtonBox_Destroy_Callback(QDialogButtonBox_Destroy_Callback cb) { qdialogbuttonbox_destroy_callback = cb; }
    void setQDialogButtonBox_FocusNextChild_Callback(QDialogButtonBox_FocusNextChild_Callback cb) { qdialogbuttonbox_focusnextchild_callback = cb; }
    void setQDialogButtonBox_FocusPreviousChild_Callback(QDialogButtonBox_FocusPreviousChild_Callback cb) { qdialogbuttonbox_focuspreviouschild_callback = cb; }
    void setQDialogButtonBox_Sender_Callback(QDialogButtonBox_Sender_Callback cb) { qdialogbuttonbox_sender_callback = cb; }
    void setQDialogButtonBox_SenderSignalIndex_Callback(QDialogButtonBox_SenderSignalIndex_Callback cb) { qdialogbuttonbox_sendersignalindex_callback = cb; }
    void setQDialogButtonBox_Receivers_Callback(QDialogButtonBox_Receivers_Callback cb) { qdialogbuttonbox_receivers_callback = cb; }
    void setQDialogButtonBox_IsSignalConnected_Callback(QDialogButtonBox_IsSignalConnected_Callback cb) { qdialogbuttonbox_issignalconnected_callback = cb; }

    // Base flag setters
    void setQDialogButtonBox_Metacall_IsBase(bool value) const { qdialogbuttonbox_metacall_isbase = value; }
    void setQDialogButtonBox_ChangeEvent_IsBase(bool value) const { qdialogbuttonbox_changeevent_isbase = value; }
    void setQDialogButtonBox_Event_IsBase(bool value) const { qdialogbuttonbox_event_isbase = value; }
    void setQDialogButtonBox_DevType_IsBase(bool value) const { qdialogbuttonbox_devtype_isbase = value; }
    void setQDialogButtonBox_SetVisible_IsBase(bool value) const { qdialogbuttonbox_setvisible_isbase = value; }
    void setQDialogButtonBox_SizeHint_IsBase(bool value) const { qdialogbuttonbox_sizehint_isbase = value; }
    void setQDialogButtonBox_MinimumSizeHint_IsBase(bool value) const { qdialogbuttonbox_minimumsizehint_isbase = value; }
    void setQDialogButtonBox_HeightForWidth_IsBase(bool value) const { qdialogbuttonbox_heightforwidth_isbase = value; }
    void setQDialogButtonBox_HasHeightForWidth_IsBase(bool value) const { qdialogbuttonbox_hasheightforwidth_isbase = value; }
    void setQDialogButtonBox_PaintEngine_IsBase(bool value) const { qdialogbuttonbox_paintengine_isbase = value; }
    void setQDialogButtonBox_MousePressEvent_IsBase(bool value) const { qdialogbuttonbox_mousepressevent_isbase = value; }
    void setQDialogButtonBox_MouseReleaseEvent_IsBase(bool value) const { qdialogbuttonbox_mousereleaseevent_isbase = value; }
    void setQDialogButtonBox_MouseDoubleClickEvent_IsBase(bool value) const { qdialogbuttonbox_mousedoubleclickevent_isbase = value; }
    void setQDialogButtonBox_MouseMoveEvent_IsBase(bool value) const { qdialogbuttonbox_mousemoveevent_isbase = value; }
    void setQDialogButtonBox_WheelEvent_IsBase(bool value) const { qdialogbuttonbox_wheelevent_isbase = value; }
    void setQDialogButtonBox_KeyPressEvent_IsBase(bool value) const { qdialogbuttonbox_keypressevent_isbase = value; }
    void setQDialogButtonBox_KeyReleaseEvent_IsBase(bool value) const { qdialogbuttonbox_keyreleaseevent_isbase = value; }
    void setQDialogButtonBox_FocusInEvent_IsBase(bool value) const { qdialogbuttonbox_focusinevent_isbase = value; }
    void setQDialogButtonBox_FocusOutEvent_IsBase(bool value) const { qdialogbuttonbox_focusoutevent_isbase = value; }
    void setQDialogButtonBox_EnterEvent_IsBase(bool value) const { qdialogbuttonbox_enterevent_isbase = value; }
    void setQDialogButtonBox_LeaveEvent_IsBase(bool value) const { qdialogbuttonbox_leaveevent_isbase = value; }
    void setQDialogButtonBox_PaintEvent_IsBase(bool value) const { qdialogbuttonbox_paintevent_isbase = value; }
    void setQDialogButtonBox_MoveEvent_IsBase(bool value) const { qdialogbuttonbox_moveevent_isbase = value; }
    void setQDialogButtonBox_ResizeEvent_IsBase(bool value) const { qdialogbuttonbox_resizeevent_isbase = value; }
    void setQDialogButtonBox_CloseEvent_IsBase(bool value) const { qdialogbuttonbox_closeevent_isbase = value; }
    void setQDialogButtonBox_ContextMenuEvent_IsBase(bool value) const { qdialogbuttonbox_contextmenuevent_isbase = value; }
    void setQDialogButtonBox_TabletEvent_IsBase(bool value) const { qdialogbuttonbox_tabletevent_isbase = value; }
    void setQDialogButtonBox_ActionEvent_IsBase(bool value) const { qdialogbuttonbox_actionevent_isbase = value; }
    void setQDialogButtonBox_DragEnterEvent_IsBase(bool value) const { qdialogbuttonbox_dragenterevent_isbase = value; }
    void setQDialogButtonBox_DragMoveEvent_IsBase(bool value) const { qdialogbuttonbox_dragmoveevent_isbase = value; }
    void setQDialogButtonBox_DragLeaveEvent_IsBase(bool value) const { qdialogbuttonbox_dragleaveevent_isbase = value; }
    void setQDialogButtonBox_DropEvent_IsBase(bool value) const { qdialogbuttonbox_dropevent_isbase = value; }
    void setQDialogButtonBox_ShowEvent_IsBase(bool value) const { qdialogbuttonbox_showevent_isbase = value; }
    void setQDialogButtonBox_HideEvent_IsBase(bool value) const { qdialogbuttonbox_hideevent_isbase = value; }
    void setQDialogButtonBox_NativeEvent_IsBase(bool value) const { qdialogbuttonbox_nativeevent_isbase = value; }
    void setQDialogButtonBox_Metric_IsBase(bool value) const { qdialogbuttonbox_metric_isbase = value; }
    void setQDialogButtonBox_InitPainter_IsBase(bool value) const { qdialogbuttonbox_initpainter_isbase = value; }
    void setQDialogButtonBox_Redirected_IsBase(bool value) const { qdialogbuttonbox_redirected_isbase = value; }
    void setQDialogButtonBox_SharedPainter_IsBase(bool value) const { qdialogbuttonbox_sharedpainter_isbase = value; }
    void setQDialogButtonBox_InputMethodEvent_IsBase(bool value) const { qdialogbuttonbox_inputmethodevent_isbase = value; }
    void setQDialogButtonBox_InputMethodQuery_IsBase(bool value) const { qdialogbuttonbox_inputmethodquery_isbase = value; }
    void setQDialogButtonBox_FocusNextPrevChild_IsBase(bool value) const { qdialogbuttonbox_focusnextprevchild_isbase = value; }
    void setQDialogButtonBox_EventFilter_IsBase(bool value) const { qdialogbuttonbox_eventfilter_isbase = value; }
    void setQDialogButtonBox_TimerEvent_IsBase(bool value) const { qdialogbuttonbox_timerevent_isbase = value; }
    void setQDialogButtonBox_ChildEvent_IsBase(bool value) const { qdialogbuttonbox_childevent_isbase = value; }
    void setQDialogButtonBox_CustomEvent_IsBase(bool value) const { qdialogbuttonbox_customevent_isbase = value; }
    void setQDialogButtonBox_ConnectNotify_IsBase(bool value) const { qdialogbuttonbox_connectnotify_isbase = value; }
    void setQDialogButtonBox_DisconnectNotify_IsBase(bool value) const { qdialogbuttonbox_disconnectnotify_isbase = value; }
    void setQDialogButtonBox_UpdateMicroFocus_IsBase(bool value) const { qdialogbuttonbox_updatemicrofocus_isbase = value; }
    void setQDialogButtonBox_Create_IsBase(bool value) const { qdialogbuttonbox_create_isbase = value; }
    void setQDialogButtonBox_Destroy_IsBase(bool value) const { qdialogbuttonbox_destroy_isbase = value; }
    void setQDialogButtonBox_FocusNextChild_IsBase(bool value) const { qdialogbuttonbox_focusnextchild_isbase = value; }
    void setQDialogButtonBox_FocusPreviousChild_IsBase(bool value) const { qdialogbuttonbox_focuspreviouschild_isbase = value; }
    void setQDialogButtonBox_Sender_IsBase(bool value) const { qdialogbuttonbox_sender_isbase = value; }
    void setQDialogButtonBox_SenderSignalIndex_IsBase(bool value) const { qdialogbuttonbox_sendersignalindex_isbase = value; }
    void setQDialogButtonBox_Receivers_IsBase(bool value) const { qdialogbuttonbox_receivers_isbase = value; }
    void setQDialogButtonBox_IsSignalConnected_IsBase(bool value) const { qdialogbuttonbox_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdialogbuttonbox_metacall_isbase) {
            qdialogbuttonbox_metacall_isbase = false;
            return QDialogButtonBox::qt_metacall(param1, param2, param3);
        } else if (qdialogbuttonbox_metacall_callback != nullptr) {
            return qdialogbuttonbox_metacall_callback(this, param1, param2, param3);
        } else {
            return QDialogButtonBox::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (qdialogbuttonbox_changeevent_isbase) {
            qdialogbuttonbox_changeevent_isbase = false;
            QDialogButtonBox::changeEvent(event);
        } else if (qdialogbuttonbox_changeevent_callback != nullptr) {
            qdialogbuttonbox_changeevent_callback(this, event);
        } else {
            QDialogButtonBox::changeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdialogbuttonbox_event_isbase) {
            qdialogbuttonbox_event_isbase = false;
            return QDialogButtonBox::event(event);
        } else if (qdialogbuttonbox_event_callback != nullptr) {
            return qdialogbuttonbox_event_callback(this, event);
        } else {
            return QDialogButtonBox::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qdialogbuttonbox_devtype_isbase) {
            qdialogbuttonbox_devtype_isbase = false;
            return QDialogButtonBox::devType();
        } else if (qdialogbuttonbox_devtype_callback != nullptr) {
            return qdialogbuttonbox_devtype_callback();
        } else {
            return QDialogButtonBox::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qdialogbuttonbox_setvisible_isbase) {
            qdialogbuttonbox_setvisible_isbase = false;
            QDialogButtonBox::setVisible(visible);
        } else if (qdialogbuttonbox_setvisible_callback != nullptr) {
            qdialogbuttonbox_setvisible_callback(this, visible);
        } else {
            QDialogButtonBox::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qdialogbuttonbox_sizehint_isbase) {
            qdialogbuttonbox_sizehint_isbase = false;
            return QDialogButtonBox::sizeHint();
        } else if (qdialogbuttonbox_sizehint_callback != nullptr) {
            return qdialogbuttonbox_sizehint_callback();
        } else {
            return QDialogButtonBox::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qdialogbuttonbox_minimumsizehint_isbase) {
            qdialogbuttonbox_minimumsizehint_isbase = false;
            return QDialogButtonBox::minimumSizeHint();
        } else if (qdialogbuttonbox_minimumsizehint_callback != nullptr) {
            return qdialogbuttonbox_minimumsizehint_callback();
        } else {
            return QDialogButtonBox::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qdialogbuttonbox_heightforwidth_isbase) {
            qdialogbuttonbox_heightforwidth_isbase = false;
            return QDialogButtonBox::heightForWidth(param1);
        } else if (qdialogbuttonbox_heightforwidth_callback != nullptr) {
            return qdialogbuttonbox_heightforwidth_callback(this, param1);
        } else {
            return QDialogButtonBox::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qdialogbuttonbox_hasheightforwidth_isbase) {
            qdialogbuttonbox_hasheightforwidth_isbase = false;
            return QDialogButtonBox::hasHeightForWidth();
        } else if (qdialogbuttonbox_hasheightforwidth_callback != nullptr) {
            return qdialogbuttonbox_hasheightforwidth_callback();
        } else {
            return QDialogButtonBox::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qdialogbuttonbox_paintengine_isbase) {
            qdialogbuttonbox_paintengine_isbase = false;
            return QDialogButtonBox::paintEngine();
        } else if (qdialogbuttonbox_paintengine_callback != nullptr) {
            return qdialogbuttonbox_paintengine_callback();
        } else {
            return QDialogButtonBox::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qdialogbuttonbox_mousepressevent_isbase) {
            qdialogbuttonbox_mousepressevent_isbase = false;
            QDialogButtonBox::mousePressEvent(event);
        } else if (qdialogbuttonbox_mousepressevent_callback != nullptr) {
            qdialogbuttonbox_mousepressevent_callback(this, event);
        } else {
            QDialogButtonBox::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qdialogbuttonbox_mousereleaseevent_isbase) {
            qdialogbuttonbox_mousereleaseevent_isbase = false;
            QDialogButtonBox::mouseReleaseEvent(event);
        } else if (qdialogbuttonbox_mousereleaseevent_callback != nullptr) {
            qdialogbuttonbox_mousereleaseevent_callback(this, event);
        } else {
            QDialogButtonBox::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qdialogbuttonbox_mousedoubleclickevent_isbase) {
            qdialogbuttonbox_mousedoubleclickevent_isbase = false;
            QDialogButtonBox::mouseDoubleClickEvent(event);
        } else if (qdialogbuttonbox_mousedoubleclickevent_callback != nullptr) {
            qdialogbuttonbox_mousedoubleclickevent_callback(this, event);
        } else {
            QDialogButtonBox::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qdialogbuttonbox_mousemoveevent_isbase) {
            qdialogbuttonbox_mousemoveevent_isbase = false;
            QDialogButtonBox::mouseMoveEvent(event);
        } else if (qdialogbuttonbox_mousemoveevent_callback != nullptr) {
            qdialogbuttonbox_mousemoveevent_callback(this, event);
        } else {
            QDialogButtonBox::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qdialogbuttonbox_wheelevent_isbase) {
            qdialogbuttonbox_wheelevent_isbase = false;
            QDialogButtonBox::wheelEvent(event);
        } else if (qdialogbuttonbox_wheelevent_callback != nullptr) {
            qdialogbuttonbox_wheelevent_callback(this, event);
        } else {
            QDialogButtonBox::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qdialogbuttonbox_keypressevent_isbase) {
            qdialogbuttonbox_keypressevent_isbase = false;
            QDialogButtonBox::keyPressEvent(event);
        } else if (qdialogbuttonbox_keypressevent_callback != nullptr) {
            qdialogbuttonbox_keypressevent_callback(this, event);
        } else {
            QDialogButtonBox::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qdialogbuttonbox_keyreleaseevent_isbase) {
            qdialogbuttonbox_keyreleaseevent_isbase = false;
            QDialogButtonBox::keyReleaseEvent(event);
        } else if (qdialogbuttonbox_keyreleaseevent_callback != nullptr) {
            qdialogbuttonbox_keyreleaseevent_callback(this, event);
        } else {
            QDialogButtonBox::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qdialogbuttonbox_focusinevent_isbase) {
            qdialogbuttonbox_focusinevent_isbase = false;
            QDialogButtonBox::focusInEvent(event);
        } else if (qdialogbuttonbox_focusinevent_callback != nullptr) {
            qdialogbuttonbox_focusinevent_callback(this, event);
        } else {
            QDialogButtonBox::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qdialogbuttonbox_focusoutevent_isbase) {
            qdialogbuttonbox_focusoutevent_isbase = false;
            QDialogButtonBox::focusOutEvent(event);
        } else if (qdialogbuttonbox_focusoutevent_callback != nullptr) {
            qdialogbuttonbox_focusoutevent_callback(this, event);
        } else {
            QDialogButtonBox::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qdialogbuttonbox_enterevent_isbase) {
            qdialogbuttonbox_enterevent_isbase = false;
            QDialogButtonBox::enterEvent(event);
        } else if (qdialogbuttonbox_enterevent_callback != nullptr) {
            qdialogbuttonbox_enterevent_callback(this, event);
        } else {
            QDialogButtonBox::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qdialogbuttonbox_leaveevent_isbase) {
            qdialogbuttonbox_leaveevent_isbase = false;
            QDialogButtonBox::leaveEvent(event);
        } else if (qdialogbuttonbox_leaveevent_callback != nullptr) {
            qdialogbuttonbox_leaveevent_callback(this, event);
        } else {
            QDialogButtonBox::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qdialogbuttonbox_paintevent_isbase) {
            qdialogbuttonbox_paintevent_isbase = false;
            QDialogButtonBox::paintEvent(event);
        } else if (qdialogbuttonbox_paintevent_callback != nullptr) {
            qdialogbuttonbox_paintevent_callback(this, event);
        } else {
            QDialogButtonBox::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qdialogbuttonbox_moveevent_isbase) {
            qdialogbuttonbox_moveevent_isbase = false;
            QDialogButtonBox::moveEvent(event);
        } else if (qdialogbuttonbox_moveevent_callback != nullptr) {
            qdialogbuttonbox_moveevent_callback(this, event);
        } else {
            QDialogButtonBox::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qdialogbuttonbox_resizeevent_isbase) {
            qdialogbuttonbox_resizeevent_isbase = false;
            QDialogButtonBox::resizeEvent(event);
        } else if (qdialogbuttonbox_resizeevent_callback != nullptr) {
            qdialogbuttonbox_resizeevent_callback(this, event);
        } else {
            QDialogButtonBox::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qdialogbuttonbox_closeevent_isbase) {
            qdialogbuttonbox_closeevent_isbase = false;
            QDialogButtonBox::closeEvent(event);
        } else if (qdialogbuttonbox_closeevent_callback != nullptr) {
            qdialogbuttonbox_closeevent_callback(this, event);
        } else {
            QDialogButtonBox::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qdialogbuttonbox_contextmenuevent_isbase) {
            qdialogbuttonbox_contextmenuevent_isbase = false;
            QDialogButtonBox::contextMenuEvent(event);
        } else if (qdialogbuttonbox_contextmenuevent_callback != nullptr) {
            qdialogbuttonbox_contextmenuevent_callback(this, event);
        } else {
            QDialogButtonBox::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qdialogbuttonbox_tabletevent_isbase) {
            qdialogbuttonbox_tabletevent_isbase = false;
            QDialogButtonBox::tabletEvent(event);
        } else if (qdialogbuttonbox_tabletevent_callback != nullptr) {
            qdialogbuttonbox_tabletevent_callback(this, event);
        } else {
            QDialogButtonBox::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qdialogbuttonbox_actionevent_isbase) {
            qdialogbuttonbox_actionevent_isbase = false;
            QDialogButtonBox::actionEvent(event);
        } else if (qdialogbuttonbox_actionevent_callback != nullptr) {
            qdialogbuttonbox_actionevent_callback(this, event);
        } else {
            QDialogButtonBox::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qdialogbuttonbox_dragenterevent_isbase) {
            qdialogbuttonbox_dragenterevent_isbase = false;
            QDialogButtonBox::dragEnterEvent(event);
        } else if (qdialogbuttonbox_dragenterevent_callback != nullptr) {
            qdialogbuttonbox_dragenterevent_callback(this, event);
        } else {
            QDialogButtonBox::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qdialogbuttonbox_dragmoveevent_isbase) {
            qdialogbuttonbox_dragmoveevent_isbase = false;
            QDialogButtonBox::dragMoveEvent(event);
        } else if (qdialogbuttonbox_dragmoveevent_callback != nullptr) {
            qdialogbuttonbox_dragmoveevent_callback(this, event);
        } else {
            QDialogButtonBox::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qdialogbuttonbox_dragleaveevent_isbase) {
            qdialogbuttonbox_dragleaveevent_isbase = false;
            QDialogButtonBox::dragLeaveEvent(event);
        } else if (qdialogbuttonbox_dragleaveevent_callback != nullptr) {
            qdialogbuttonbox_dragleaveevent_callback(this, event);
        } else {
            QDialogButtonBox::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qdialogbuttonbox_dropevent_isbase) {
            qdialogbuttonbox_dropevent_isbase = false;
            QDialogButtonBox::dropEvent(event);
        } else if (qdialogbuttonbox_dropevent_callback != nullptr) {
            qdialogbuttonbox_dropevent_callback(this, event);
        } else {
            QDialogButtonBox::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qdialogbuttonbox_showevent_isbase) {
            qdialogbuttonbox_showevent_isbase = false;
            QDialogButtonBox::showEvent(event);
        } else if (qdialogbuttonbox_showevent_callback != nullptr) {
            qdialogbuttonbox_showevent_callback(this, event);
        } else {
            QDialogButtonBox::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qdialogbuttonbox_hideevent_isbase) {
            qdialogbuttonbox_hideevent_isbase = false;
            QDialogButtonBox::hideEvent(event);
        } else if (qdialogbuttonbox_hideevent_callback != nullptr) {
            qdialogbuttonbox_hideevent_callback(this, event);
        } else {
            QDialogButtonBox::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qdialogbuttonbox_nativeevent_isbase) {
            qdialogbuttonbox_nativeevent_isbase = false;
            return QDialogButtonBox::nativeEvent(eventType, message, result);
        } else if (qdialogbuttonbox_nativeevent_callback != nullptr) {
            return qdialogbuttonbox_nativeevent_callback(this, eventType, message, result);
        } else {
            return QDialogButtonBox::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qdialogbuttonbox_metric_isbase) {
            qdialogbuttonbox_metric_isbase = false;
            return QDialogButtonBox::metric(param1);
        } else if (qdialogbuttonbox_metric_callback != nullptr) {
            return qdialogbuttonbox_metric_callback(this, param1);
        } else {
            return QDialogButtonBox::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qdialogbuttonbox_initpainter_isbase) {
            qdialogbuttonbox_initpainter_isbase = false;
            QDialogButtonBox::initPainter(painter);
        } else if (qdialogbuttonbox_initpainter_callback != nullptr) {
            qdialogbuttonbox_initpainter_callback(this, painter);
        } else {
            QDialogButtonBox::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qdialogbuttonbox_redirected_isbase) {
            qdialogbuttonbox_redirected_isbase = false;
            return QDialogButtonBox::redirected(offset);
        } else if (qdialogbuttonbox_redirected_callback != nullptr) {
            return qdialogbuttonbox_redirected_callback(this, offset);
        } else {
            return QDialogButtonBox::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qdialogbuttonbox_sharedpainter_isbase) {
            qdialogbuttonbox_sharedpainter_isbase = false;
            return QDialogButtonBox::sharedPainter();
        } else if (qdialogbuttonbox_sharedpainter_callback != nullptr) {
            return qdialogbuttonbox_sharedpainter_callback();
        } else {
            return QDialogButtonBox::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qdialogbuttonbox_inputmethodevent_isbase) {
            qdialogbuttonbox_inputmethodevent_isbase = false;
            QDialogButtonBox::inputMethodEvent(param1);
        } else if (qdialogbuttonbox_inputmethodevent_callback != nullptr) {
            qdialogbuttonbox_inputmethodevent_callback(this, param1);
        } else {
            QDialogButtonBox::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qdialogbuttonbox_inputmethodquery_isbase) {
            qdialogbuttonbox_inputmethodquery_isbase = false;
            return QDialogButtonBox::inputMethodQuery(param1);
        } else if (qdialogbuttonbox_inputmethodquery_callback != nullptr) {
            return qdialogbuttonbox_inputmethodquery_callback(this, param1);
        } else {
            return QDialogButtonBox::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qdialogbuttonbox_focusnextprevchild_isbase) {
            qdialogbuttonbox_focusnextprevchild_isbase = false;
            return QDialogButtonBox::focusNextPrevChild(next);
        } else if (qdialogbuttonbox_focusnextprevchild_callback != nullptr) {
            return qdialogbuttonbox_focusnextprevchild_callback(this, next);
        } else {
            return QDialogButtonBox::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdialogbuttonbox_eventfilter_isbase) {
            qdialogbuttonbox_eventfilter_isbase = false;
            return QDialogButtonBox::eventFilter(watched, event);
        } else if (qdialogbuttonbox_eventfilter_callback != nullptr) {
            return qdialogbuttonbox_eventfilter_callback(this, watched, event);
        } else {
            return QDialogButtonBox::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdialogbuttonbox_timerevent_isbase) {
            qdialogbuttonbox_timerevent_isbase = false;
            QDialogButtonBox::timerEvent(event);
        } else if (qdialogbuttonbox_timerevent_callback != nullptr) {
            qdialogbuttonbox_timerevent_callback(this, event);
        } else {
            QDialogButtonBox::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdialogbuttonbox_childevent_isbase) {
            qdialogbuttonbox_childevent_isbase = false;
            QDialogButtonBox::childEvent(event);
        } else if (qdialogbuttonbox_childevent_callback != nullptr) {
            qdialogbuttonbox_childevent_callback(this, event);
        } else {
            QDialogButtonBox::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdialogbuttonbox_customevent_isbase) {
            qdialogbuttonbox_customevent_isbase = false;
            QDialogButtonBox::customEvent(event);
        } else if (qdialogbuttonbox_customevent_callback != nullptr) {
            qdialogbuttonbox_customevent_callback(this, event);
        } else {
            QDialogButtonBox::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdialogbuttonbox_connectnotify_isbase) {
            qdialogbuttonbox_connectnotify_isbase = false;
            QDialogButtonBox::connectNotify(signal);
        } else if (qdialogbuttonbox_connectnotify_callback != nullptr) {
            qdialogbuttonbox_connectnotify_callback(this, signal);
        } else {
            QDialogButtonBox::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdialogbuttonbox_disconnectnotify_isbase) {
            qdialogbuttonbox_disconnectnotify_isbase = false;
            QDialogButtonBox::disconnectNotify(signal);
        } else if (qdialogbuttonbox_disconnectnotify_callback != nullptr) {
            qdialogbuttonbox_disconnectnotify_callback(this, signal);
        } else {
            QDialogButtonBox::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qdialogbuttonbox_updatemicrofocus_isbase) {
            qdialogbuttonbox_updatemicrofocus_isbase = false;
            QDialogButtonBox::updateMicroFocus();
        } else if (qdialogbuttonbox_updatemicrofocus_callback != nullptr) {
            qdialogbuttonbox_updatemicrofocus_callback();
        } else {
            QDialogButtonBox::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qdialogbuttonbox_create_isbase) {
            qdialogbuttonbox_create_isbase = false;
            QDialogButtonBox::create();
        } else if (qdialogbuttonbox_create_callback != nullptr) {
            qdialogbuttonbox_create_callback();
        } else {
            QDialogButtonBox::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qdialogbuttonbox_destroy_isbase) {
            qdialogbuttonbox_destroy_isbase = false;
            QDialogButtonBox::destroy();
        } else if (qdialogbuttonbox_destroy_callback != nullptr) {
            qdialogbuttonbox_destroy_callback();
        } else {
            QDialogButtonBox::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qdialogbuttonbox_focusnextchild_isbase) {
            qdialogbuttonbox_focusnextchild_isbase = false;
            return QDialogButtonBox::focusNextChild();
        } else if (qdialogbuttonbox_focusnextchild_callback != nullptr) {
            return qdialogbuttonbox_focusnextchild_callback();
        } else {
            return QDialogButtonBox::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qdialogbuttonbox_focuspreviouschild_isbase) {
            qdialogbuttonbox_focuspreviouschild_isbase = false;
            return QDialogButtonBox::focusPreviousChild();
        } else if (qdialogbuttonbox_focuspreviouschild_callback != nullptr) {
            return qdialogbuttonbox_focuspreviouschild_callback();
        } else {
            return QDialogButtonBox::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qdialogbuttonbox_sender_isbase) {
            qdialogbuttonbox_sender_isbase = false;
            return QDialogButtonBox::sender();
        } else if (qdialogbuttonbox_sender_callback != nullptr) {
            return qdialogbuttonbox_sender_callback();
        } else {
            return QDialogButtonBox::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qdialogbuttonbox_sendersignalindex_isbase) {
            qdialogbuttonbox_sendersignalindex_isbase = false;
            return QDialogButtonBox::senderSignalIndex();
        } else if (qdialogbuttonbox_sendersignalindex_callback != nullptr) {
            return qdialogbuttonbox_sendersignalindex_callback();
        } else {
            return QDialogButtonBox::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qdialogbuttonbox_receivers_isbase) {
            qdialogbuttonbox_receivers_isbase = false;
            return QDialogButtonBox::receivers(signal);
        } else if (qdialogbuttonbox_receivers_callback != nullptr) {
            return qdialogbuttonbox_receivers_callback(this, signal);
        } else {
            return QDialogButtonBox::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qdialogbuttonbox_issignalconnected_isbase) {
            qdialogbuttonbox_issignalconnected_isbase = false;
            return QDialogButtonBox::isSignalConnected(signal);
        } else if (qdialogbuttonbox_issignalconnected_callback != nullptr) {
            return qdialogbuttonbox_issignalconnected_callback(this, signal);
        } else {
            return QDialogButtonBox::isSignalConnected(signal);
        }
    }
};

#endif
