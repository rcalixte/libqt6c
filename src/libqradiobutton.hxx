#pragma once
#ifndef SRCC_LIBVIRTUALQRADIOBUTTON_H
#define SRCC_LIBVIRTUALQRADIOBUTTON_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QRadioButton so that we can call protected methods
class VirtualQRadioButton : public QRadioButton {

  public:
    // Virtual class public types (including callbacks)
    using QRadioButton_Metacall_Callback = int (*)(QRadioButton*, QMetaObject::Call, int, void**);
    using QRadioButton_SizeHint_Callback = QSize (*)();
    using QRadioButton_MinimumSizeHint_Callback = QSize (*)();
    using QRadioButton_Event_Callback = bool (*)(QRadioButton*, QEvent*);
    using QRadioButton_HitButton_Callback = bool (*)(const QRadioButton*, const QPoint&);
    using QRadioButton_PaintEvent_Callback = void (*)(QRadioButton*, QPaintEvent*);
    using QRadioButton_MouseMoveEvent_Callback = void (*)(QRadioButton*, QMouseEvent*);
    using QRadioButton_InitStyleOption_Callback = void (*)(const QRadioButton*, QStyleOptionButton*);
    using QRadioButton_CheckStateSet_Callback = void (*)();
    using QRadioButton_NextCheckState_Callback = void (*)();
    using QRadioButton_KeyPressEvent_Callback = void (*)(QRadioButton*, QKeyEvent*);
    using QRadioButton_KeyReleaseEvent_Callback = void (*)(QRadioButton*, QKeyEvent*);
    using QRadioButton_MousePressEvent_Callback = void (*)(QRadioButton*, QMouseEvent*);
    using QRadioButton_MouseReleaseEvent_Callback = void (*)(QRadioButton*, QMouseEvent*);
    using QRadioButton_FocusInEvent_Callback = void (*)(QRadioButton*, QFocusEvent*);
    using QRadioButton_FocusOutEvent_Callback = void (*)(QRadioButton*, QFocusEvent*);
    using QRadioButton_ChangeEvent_Callback = void (*)(QRadioButton*, QEvent*);
    using QRadioButton_TimerEvent_Callback = void (*)(QRadioButton*, QTimerEvent*);
    using QRadioButton_DevType_Callback = int (*)();
    using QRadioButton_SetVisible_Callback = void (*)(QRadioButton*, bool);
    using QRadioButton_HeightForWidth_Callback = int (*)(const QRadioButton*, int);
    using QRadioButton_HasHeightForWidth_Callback = bool (*)();
    using QRadioButton_PaintEngine_Callback = QPaintEngine* (*)();
    using QRadioButton_MouseDoubleClickEvent_Callback = void (*)(QRadioButton*, QMouseEvent*);
    using QRadioButton_WheelEvent_Callback = void (*)(QRadioButton*, QWheelEvent*);
    using QRadioButton_EnterEvent_Callback = void (*)(QRadioButton*, QEnterEvent*);
    using QRadioButton_LeaveEvent_Callback = void (*)(QRadioButton*, QEvent*);
    using QRadioButton_MoveEvent_Callback = void (*)(QRadioButton*, QMoveEvent*);
    using QRadioButton_ResizeEvent_Callback = void (*)(QRadioButton*, QResizeEvent*);
    using QRadioButton_CloseEvent_Callback = void (*)(QRadioButton*, QCloseEvent*);
    using QRadioButton_ContextMenuEvent_Callback = void (*)(QRadioButton*, QContextMenuEvent*);
    using QRadioButton_TabletEvent_Callback = void (*)(QRadioButton*, QTabletEvent*);
    using QRadioButton_ActionEvent_Callback = void (*)(QRadioButton*, QActionEvent*);
    using QRadioButton_DragEnterEvent_Callback = void (*)(QRadioButton*, QDragEnterEvent*);
    using QRadioButton_DragMoveEvent_Callback = void (*)(QRadioButton*, QDragMoveEvent*);
    using QRadioButton_DragLeaveEvent_Callback = void (*)(QRadioButton*, QDragLeaveEvent*);
    using QRadioButton_DropEvent_Callback = void (*)(QRadioButton*, QDropEvent*);
    using QRadioButton_ShowEvent_Callback = void (*)(QRadioButton*, QShowEvent*);
    using QRadioButton_HideEvent_Callback = void (*)(QRadioButton*, QHideEvent*);
    using QRadioButton_NativeEvent_Callback = bool (*)(QRadioButton*, const QByteArray&, void*, qintptr*);
    using QRadioButton_Metric_Callback = int (*)(const QRadioButton*, QPaintDevice::PaintDeviceMetric);
    using QRadioButton_InitPainter_Callback = void (*)(const QRadioButton*, QPainter*);
    using QRadioButton_Redirected_Callback = QPaintDevice* (*)(const QRadioButton*, QPoint*);
    using QRadioButton_SharedPainter_Callback = QPainter* (*)();
    using QRadioButton_InputMethodEvent_Callback = void (*)(QRadioButton*, QInputMethodEvent*);
    using QRadioButton_InputMethodQuery_Callback = QVariant (*)(const QRadioButton*, Qt::InputMethodQuery);
    using QRadioButton_FocusNextPrevChild_Callback = bool (*)(QRadioButton*, bool);
    using QRadioButton_EventFilter_Callback = bool (*)(QRadioButton*, QObject*, QEvent*);
    using QRadioButton_ChildEvent_Callback = void (*)(QRadioButton*, QChildEvent*);
    using QRadioButton_CustomEvent_Callback = void (*)(QRadioButton*, QEvent*);
    using QRadioButton_ConnectNotify_Callback = void (*)(QRadioButton*, const QMetaMethod&);
    using QRadioButton_DisconnectNotify_Callback = void (*)(QRadioButton*, const QMetaMethod&);
    using QRadioButton_UpdateMicroFocus_Callback = void (*)();
    using QRadioButton_Create_Callback = void (*)();
    using QRadioButton_Destroy_Callback = void (*)();
    using QRadioButton_FocusNextChild_Callback = bool (*)();
    using QRadioButton_FocusPreviousChild_Callback = bool (*)();
    using QRadioButton_Sender_Callback = QObject* (*)();
    using QRadioButton_SenderSignalIndex_Callback = int (*)();
    using QRadioButton_Receivers_Callback = int (*)(const QRadioButton*, const char*);
    using QRadioButton_IsSignalConnected_Callback = bool (*)(const QRadioButton*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QRadioButton_Metacall_Callback qradiobutton_metacall_callback = nullptr;
    QRadioButton_SizeHint_Callback qradiobutton_sizehint_callback = nullptr;
    QRadioButton_MinimumSizeHint_Callback qradiobutton_minimumsizehint_callback = nullptr;
    QRadioButton_Event_Callback qradiobutton_event_callback = nullptr;
    QRadioButton_HitButton_Callback qradiobutton_hitbutton_callback = nullptr;
    QRadioButton_PaintEvent_Callback qradiobutton_paintevent_callback = nullptr;
    QRadioButton_MouseMoveEvent_Callback qradiobutton_mousemoveevent_callback = nullptr;
    QRadioButton_InitStyleOption_Callback qradiobutton_initstyleoption_callback = nullptr;
    QRadioButton_CheckStateSet_Callback qradiobutton_checkstateset_callback = nullptr;
    QRadioButton_NextCheckState_Callback qradiobutton_nextcheckstate_callback = nullptr;
    QRadioButton_KeyPressEvent_Callback qradiobutton_keypressevent_callback = nullptr;
    QRadioButton_KeyReleaseEvent_Callback qradiobutton_keyreleaseevent_callback = nullptr;
    QRadioButton_MousePressEvent_Callback qradiobutton_mousepressevent_callback = nullptr;
    QRadioButton_MouseReleaseEvent_Callback qradiobutton_mousereleaseevent_callback = nullptr;
    QRadioButton_FocusInEvent_Callback qradiobutton_focusinevent_callback = nullptr;
    QRadioButton_FocusOutEvent_Callback qradiobutton_focusoutevent_callback = nullptr;
    QRadioButton_ChangeEvent_Callback qradiobutton_changeevent_callback = nullptr;
    QRadioButton_TimerEvent_Callback qradiobutton_timerevent_callback = nullptr;
    QRadioButton_DevType_Callback qradiobutton_devtype_callback = nullptr;
    QRadioButton_SetVisible_Callback qradiobutton_setvisible_callback = nullptr;
    QRadioButton_HeightForWidth_Callback qradiobutton_heightforwidth_callback = nullptr;
    QRadioButton_HasHeightForWidth_Callback qradiobutton_hasheightforwidth_callback = nullptr;
    QRadioButton_PaintEngine_Callback qradiobutton_paintengine_callback = nullptr;
    QRadioButton_MouseDoubleClickEvent_Callback qradiobutton_mousedoubleclickevent_callback = nullptr;
    QRadioButton_WheelEvent_Callback qradiobutton_wheelevent_callback = nullptr;
    QRadioButton_EnterEvent_Callback qradiobutton_enterevent_callback = nullptr;
    QRadioButton_LeaveEvent_Callback qradiobutton_leaveevent_callback = nullptr;
    QRadioButton_MoveEvent_Callback qradiobutton_moveevent_callback = nullptr;
    QRadioButton_ResizeEvent_Callback qradiobutton_resizeevent_callback = nullptr;
    QRadioButton_CloseEvent_Callback qradiobutton_closeevent_callback = nullptr;
    QRadioButton_ContextMenuEvent_Callback qradiobutton_contextmenuevent_callback = nullptr;
    QRadioButton_TabletEvent_Callback qradiobutton_tabletevent_callback = nullptr;
    QRadioButton_ActionEvent_Callback qradiobutton_actionevent_callback = nullptr;
    QRadioButton_DragEnterEvent_Callback qradiobutton_dragenterevent_callback = nullptr;
    QRadioButton_DragMoveEvent_Callback qradiobutton_dragmoveevent_callback = nullptr;
    QRadioButton_DragLeaveEvent_Callback qradiobutton_dragleaveevent_callback = nullptr;
    QRadioButton_DropEvent_Callback qradiobutton_dropevent_callback = nullptr;
    QRadioButton_ShowEvent_Callback qradiobutton_showevent_callback = nullptr;
    QRadioButton_HideEvent_Callback qradiobutton_hideevent_callback = nullptr;
    QRadioButton_NativeEvent_Callback qradiobutton_nativeevent_callback = nullptr;
    QRadioButton_Metric_Callback qradiobutton_metric_callback = nullptr;
    QRadioButton_InitPainter_Callback qradiobutton_initpainter_callback = nullptr;
    QRadioButton_Redirected_Callback qradiobutton_redirected_callback = nullptr;
    QRadioButton_SharedPainter_Callback qradiobutton_sharedpainter_callback = nullptr;
    QRadioButton_InputMethodEvent_Callback qradiobutton_inputmethodevent_callback = nullptr;
    QRadioButton_InputMethodQuery_Callback qradiobutton_inputmethodquery_callback = nullptr;
    QRadioButton_FocusNextPrevChild_Callback qradiobutton_focusnextprevchild_callback = nullptr;
    QRadioButton_EventFilter_Callback qradiobutton_eventfilter_callback = nullptr;
    QRadioButton_ChildEvent_Callback qradiobutton_childevent_callback = nullptr;
    QRadioButton_CustomEvent_Callback qradiobutton_customevent_callback = nullptr;
    QRadioButton_ConnectNotify_Callback qradiobutton_connectnotify_callback = nullptr;
    QRadioButton_DisconnectNotify_Callback qradiobutton_disconnectnotify_callback = nullptr;
    QRadioButton_UpdateMicroFocus_Callback qradiobutton_updatemicrofocus_callback = nullptr;
    QRadioButton_Create_Callback qradiobutton_create_callback = nullptr;
    QRadioButton_Destroy_Callback qradiobutton_destroy_callback = nullptr;
    QRadioButton_FocusNextChild_Callback qradiobutton_focusnextchild_callback = nullptr;
    QRadioButton_FocusPreviousChild_Callback qradiobutton_focuspreviouschild_callback = nullptr;
    QRadioButton_Sender_Callback qradiobutton_sender_callback = nullptr;
    QRadioButton_SenderSignalIndex_Callback qradiobutton_sendersignalindex_callback = nullptr;
    QRadioButton_Receivers_Callback qradiobutton_receivers_callback = nullptr;
    QRadioButton_IsSignalConnected_Callback qradiobutton_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qradiobutton_metacall_isbase = false;
    mutable bool qradiobutton_sizehint_isbase = false;
    mutable bool qradiobutton_minimumsizehint_isbase = false;
    mutable bool qradiobutton_event_isbase = false;
    mutable bool qradiobutton_hitbutton_isbase = false;
    mutable bool qradiobutton_paintevent_isbase = false;
    mutable bool qradiobutton_mousemoveevent_isbase = false;
    mutable bool qradiobutton_initstyleoption_isbase = false;
    mutable bool qradiobutton_checkstateset_isbase = false;
    mutable bool qradiobutton_nextcheckstate_isbase = false;
    mutable bool qradiobutton_keypressevent_isbase = false;
    mutable bool qradiobutton_keyreleaseevent_isbase = false;
    mutable bool qradiobutton_mousepressevent_isbase = false;
    mutable bool qradiobutton_mousereleaseevent_isbase = false;
    mutable bool qradiobutton_focusinevent_isbase = false;
    mutable bool qradiobutton_focusoutevent_isbase = false;
    mutable bool qradiobutton_changeevent_isbase = false;
    mutable bool qradiobutton_timerevent_isbase = false;
    mutable bool qradiobutton_devtype_isbase = false;
    mutable bool qradiobutton_setvisible_isbase = false;
    mutable bool qradiobutton_heightforwidth_isbase = false;
    mutable bool qradiobutton_hasheightforwidth_isbase = false;
    mutable bool qradiobutton_paintengine_isbase = false;
    mutable bool qradiobutton_mousedoubleclickevent_isbase = false;
    mutable bool qradiobutton_wheelevent_isbase = false;
    mutable bool qradiobutton_enterevent_isbase = false;
    mutable bool qradiobutton_leaveevent_isbase = false;
    mutable bool qradiobutton_moveevent_isbase = false;
    mutable bool qradiobutton_resizeevent_isbase = false;
    mutable bool qradiobutton_closeevent_isbase = false;
    mutable bool qradiobutton_contextmenuevent_isbase = false;
    mutable bool qradiobutton_tabletevent_isbase = false;
    mutable bool qradiobutton_actionevent_isbase = false;
    mutable bool qradiobutton_dragenterevent_isbase = false;
    mutable bool qradiobutton_dragmoveevent_isbase = false;
    mutable bool qradiobutton_dragleaveevent_isbase = false;
    mutable bool qradiobutton_dropevent_isbase = false;
    mutable bool qradiobutton_showevent_isbase = false;
    mutable bool qradiobutton_hideevent_isbase = false;
    mutable bool qradiobutton_nativeevent_isbase = false;
    mutable bool qradiobutton_metric_isbase = false;
    mutable bool qradiobutton_initpainter_isbase = false;
    mutable bool qradiobutton_redirected_isbase = false;
    mutable bool qradiobutton_sharedpainter_isbase = false;
    mutable bool qradiobutton_inputmethodevent_isbase = false;
    mutable bool qradiobutton_inputmethodquery_isbase = false;
    mutable bool qradiobutton_focusnextprevchild_isbase = false;
    mutable bool qradiobutton_eventfilter_isbase = false;
    mutable bool qradiobutton_childevent_isbase = false;
    mutable bool qradiobutton_customevent_isbase = false;
    mutable bool qradiobutton_connectnotify_isbase = false;
    mutable bool qradiobutton_disconnectnotify_isbase = false;
    mutable bool qradiobutton_updatemicrofocus_isbase = false;
    mutable bool qradiobutton_create_isbase = false;
    mutable bool qradiobutton_destroy_isbase = false;
    mutable bool qradiobutton_focusnextchild_isbase = false;
    mutable bool qradiobutton_focuspreviouschild_isbase = false;
    mutable bool qradiobutton_sender_isbase = false;
    mutable bool qradiobutton_sendersignalindex_isbase = false;
    mutable bool qradiobutton_receivers_isbase = false;
    mutable bool qradiobutton_issignalconnected_isbase = false;

  public:
    VirtualQRadioButton(QWidget* parent) : QRadioButton(parent){};
    VirtualQRadioButton() : QRadioButton(){};
    VirtualQRadioButton(const QString& text) : QRadioButton(text){};
    VirtualQRadioButton(const QString& text, QWidget* parent) : QRadioButton(text, parent){};

    ~VirtualQRadioButton() {
        qradiobutton_metacall_callback = nullptr;
        qradiobutton_sizehint_callback = nullptr;
        qradiobutton_minimumsizehint_callback = nullptr;
        qradiobutton_event_callback = nullptr;
        qradiobutton_hitbutton_callback = nullptr;
        qradiobutton_paintevent_callback = nullptr;
        qradiobutton_mousemoveevent_callback = nullptr;
        qradiobutton_initstyleoption_callback = nullptr;
        qradiobutton_checkstateset_callback = nullptr;
        qradiobutton_nextcheckstate_callback = nullptr;
        qradiobutton_keypressevent_callback = nullptr;
        qradiobutton_keyreleaseevent_callback = nullptr;
        qradiobutton_mousepressevent_callback = nullptr;
        qradiobutton_mousereleaseevent_callback = nullptr;
        qradiobutton_focusinevent_callback = nullptr;
        qradiobutton_focusoutevent_callback = nullptr;
        qradiobutton_changeevent_callback = nullptr;
        qradiobutton_timerevent_callback = nullptr;
        qradiobutton_devtype_callback = nullptr;
        qradiobutton_setvisible_callback = nullptr;
        qradiobutton_heightforwidth_callback = nullptr;
        qradiobutton_hasheightforwidth_callback = nullptr;
        qradiobutton_paintengine_callback = nullptr;
        qradiobutton_mousedoubleclickevent_callback = nullptr;
        qradiobutton_wheelevent_callback = nullptr;
        qradiobutton_enterevent_callback = nullptr;
        qradiobutton_leaveevent_callback = nullptr;
        qradiobutton_moveevent_callback = nullptr;
        qradiobutton_resizeevent_callback = nullptr;
        qradiobutton_closeevent_callback = nullptr;
        qradiobutton_contextmenuevent_callback = nullptr;
        qradiobutton_tabletevent_callback = nullptr;
        qradiobutton_actionevent_callback = nullptr;
        qradiobutton_dragenterevent_callback = nullptr;
        qradiobutton_dragmoveevent_callback = nullptr;
        qradiobutton_dragleaveevent_callback = nullptr;
        qradiobutton_dropevent_callback = nullptr;
        qradiobutton_showevent_callback = nullptr;
        qradiobutton_hideevent_callback = nullptr;
        qradiobutton_nativeevent_callback = nullptr;
        qradiobutton_metric_callback = nullptr;
        qradiobutton_initpainter_callback = nullptr;
        qradiobutton_redirected_callback = nullptr;
        qradiobutton_sharedpainter_callback = nullptr;
        qradiobutton_inputmethodevent_callback = nullptr;
        qradiobutton_inputmethodquery_callback = nullptr;
        qradiobutton_focusnextprevchild_callback = nullptr;
        qradiobutton_eventfilter_callback = nullptr;
        qradiobutton_childevent_callback = nullptr;
        qradiobutton_customevent_callback = nullptr;
        qradiobutton_connectnotify_callback = nullptr;
        qradiobutton_disconnectnotify_callback = nullptr;
        qradiobutton_updatemicrofocus_callback = nullptr;
        qradiobutton_create_callback = nullptr;
        qradiobutton_destroy_callback = nullptr;
        qradiobutton_focusnextchild_callback = nullptr;
        qradiobutton_focuspreviouschild_callback = nullptr;
        qradiobutton_sender_callback = nullptr;
        qradiobutton_sendersignalindex_callback = nullptr;
        qradiobutton_receivers_callback = nullptr;
        qradiobutton_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQRadioButton_Metacall_Callback(QRadioButton_Metacall_Callback cb) { qradiobutton_metacall_callback = cb; }
    void setQRadioButton_SizeHint_Callback(QRadioButton_SizeHint_Callback cb) { qradiobutton_sizehint_callback = cb; }
    void setQRadioButton_MinimumSizeHint_Callback(QRadioButton_MinimumSizeHint_Callback cb) { qradiobutton_minimumsizehint_callback = cb; }
    void setQRadioButton_Event_Callback(QRadioButton_Event_Callback cb) { qradiobutton_event_callback = cb; }
    void setQRadioButton_HitButton_Callback(QRadioButton_HitButton_Callback cb) { qradiobutton_hitbutton_callback = cb; }
    void setQRadioButton_PaintEvent_Callback(QRadioButton_PaintEvent_Callback cb) { qradiobutton_paintevent_callback = cb; }
    void setQRadioButton_MouseMoveEvent_Callback(QRadioButton_MouseMoveEvent_Callback cb) { qradiobutton_mousemoveevent_callback = cb; }
    void setQRadioButton_InitStyleOption_Callback(QRadioButton_InitStyleOption_Callback cb) { qradiobutton_initstyleoption_callback = cb; }
    void setQRadioButton_CheckStateSet_Callback(QRadioButton_CheckStateSet_Callback cb) { qradiobutton_checkstateset_callback = cb; }
    void setQRadioButton_NextCheckState_Callback(QRadioButton_NextCheckState_Callback cb) { qradiobutton_nextcheckstate_callback = cb; }
    void setQRadioButton_KeyPressEvent_Callback(QRadioButton_KeyPressEvent_Callback cb) { qradiobutton_keypressevent_callback = cb; }
    void setQRadioButton_KeyReleaseEvent_Callback(QRadioButton_KeyReleaseEvent_Callback cb) { qradiobutton_keyreleaseevent_callback = cb; }
    void setQRadioButton_MousePressEvent_Callback(QRadioButton_MousePressEvent_Callback cb) { qradiobutton_mousepressevent_callback = cb; }
    void setQRadioButton_MouseReleaseEvent_Callback(QRadioButton_MouseReleaseEvent_Callback cb) { qradiobutton_mousereleaseevent_callback = cb; }
    void setQRadioButton_FocusInEvent_Callback(QRadioButton_FocusInEvent_Callback cb) { qradiobutton_focusinevent_callback = cb; }
    void setQRadioButton_FocusOutEvent_Callback(QRadioButton_FocusOutEvent_Callback cb) { qradiobutton_focusoutevent_callback = cb; }
    void setQRadioButton_ChangeEvent_Callback(QRadioButton_ChangeEvent_Callback cb) { qradiobutton_changeevent_callback = cb; }
    void setQRadioButton_TimerEvent_Callback(QRadioButton_TimerEvent_Callback cb) { qradiobutton_timerevent_callback = cb; }
    void setQRadioButton_DevType_Callback(QRadioButton_DevType_Callback cb) { qradiobutton_devtype_callback = cb; }
    void setQRadioButton_SetVisible_Callback(QRadioButton_SetVisible_Callback cb) { qradiobutton_setvisible_callback = cb; }
    void setQRadioButton_HeightForWidth_Callback(QRadioButton_HeightForWidth_Callback cb) { qradiobutton_heightforwidth_callback = cb; }
    void setQRadioButton_HasHeightForWidth_Callback(QRadioButton_HasHeightForWidth_Callback cb) { qradiobutton_hasheightforwidth_callback = cb; }
    void setQRadioButton_PaintEngine_Callback(QRadioButton_PaintEngine_Callback cb) { qradiobutton_paintengine_callback = cb; }
    void setQRadioButton_MouseDoubleClickEvent_Callback(QRadioButton_MouseDoubleClickEvent_Callback cb) { qradiobutton_mousedoubleclickevent_callback = cb; }
    void setQRadioButton_WheelEvent_Callback(QRadioButton_WheelEvent_Callback cb) { qradiobutton_wheelevent_callback = cb; }
    void setQRadioButton_EnterEvent_Callback(QRadioButton_EnterEvent_Callback cb) { qradiobutton_enterevent_callback = cb; }
    void setQRadioButton_LeaveEvent_Callback(QRadioButton_LeaveEvent_Callback cb) { qradiobutton_leaveevent_callback = cb; }
    void setQRadioButton_MoveEvent_Callback(QRadioButton_MoveEvent_Callback cb) { qradiobutton_moveevent_callback = cb; }
    void setQRadioButton_ResizeEvent_Callback(QRadioButton_ResizeEvent_Callback cb) { qradiobutton_resizeevent_callback = cb; }
    void setQRadioButton_CloseEvent_Callback(QRadioButton_CloseEvent_Callback cb) { qradiobutton_closeevent_callback = cb; }
    void setQRadioButton_ContextMenuEvent_Callback(QRadioButton_ContextMenuEvent_Callback cb) { qradiobutton_contextmenuevent_callback = cb; }
    void setQRadioButton_TabletEvent_Callback(QRadioButton_TabletEvent_Callback cb) { qradiobutton_tabletevent_callback = cb; }
    void setQRadioButton_ActionEvent_Callback(QRadioButton_ActionEvent_Callback cb) { qradiobutton_actionevent_callback = cb; }
    void setQRadioButton_DragEnterEvent_Callback(QRadioButton_DragEnterEvent_Callback cb) { qradiobutton_dragenterevent_callback = cb; }
    void setQRadioButton_DragMoveEvent_Callback(QRadioButton_DragMoveEvent_Callback cb) { qradiobutton_dragmoveevent_callback = cb; }
    void setQRadioButton_DragLeaveEvent_Callback(QRadioButton_DragLeaveEvent_Callback cb) { qradiobutton_dragleaveevent_callback = cb; }
    void setQRadioButton_DropEvent_Callback(QRadioButton_DropEvent_Callback cb) { qradiobutton_dropevent_callback = cb; }
    void setQRadioButton_ShowEvent_Callback(QRadioButton_ShowEvent_Callback cb) { qradiobutton_showevent_callback = cb; }
    void setQRadioButton_HideEvent_Callback(QRadioButton_HideEvent_Callback cb) { qradiobutton_hideevent_callback = cb; }
    void setQRadioButton_NativeEvent_Callback(QRadioButton_NativeEvent_Callback cb) { qradiobutton_nativeevent_callback = cb; }
    void setQRadioButton_Metric_Callback(QRadioButton_Metric_Callback cb) { qradiobutton_metric_callback = cb; }
    void setQRadioButton_InitPainter_Callback(QRadioButton_InitPainter_Callback cb) { qradiobutton_initpainter_callback = cb; }
    void setQRadioButton_Redirected_Callback(QRadioButton_Redirected_Callback cb) { qradiobutton_redirected_callback = cb; }
    void setQRadioButton_SharedPainter_Callback(QRadioButton_SharedPainter_Callback cb) { qradiobutton_sharedpainter_callback = cb; }
    void setQRadioButton_InputMethodEvent_Callback(QRadioButton_InputMethodEvent_Callback cb) { qradiobutton_inputmethodevent_callback = cb; }
    void setQRadioButton_InputMethodQuery_Callback(QRadioButton_InputMethodQuery_Callback cb) { qradiobutton_inputmethodquery_callback = cb; }
    void setQRadioButton_FocusNextPrevChild_Callback(QRadioButton_FocusNextPrevChild_Callback cb) { qradiobutton_focusnextprevchild_callback = cb; }
    void setQRadioButton_EventFilter_Callback(QRadioButton_EventFilter_Callback cb) { qradiobutton_eventfilter_callback = cb; }
    void setQRadioButton_ChildEvent_Callback(QRadioButton_ChildEvent_Callback cb) { qradiobutton_childevent_callback = cb; }
    void setQRadioButton_CustomEvent_Callback(QRadioButton_CustomEvent_Callback cb) { qradiobutton_customevent_callback = cb; }
    void setQRadioButton_ConnectNotify_Callback(QRadioButton_ConnectNotify_Callback cb) { qradiobutton_connectnotify_callback = cb; }
    void setQRadioButton_DisconnectNotify_Callback(QRadioButton_DisconnectNotify_Callback cb) { qradiobutton_disconnectnotify_callback = cb; }
    void setQRadioButton_UpdateMicroFocus_Callback(QRadioButton_UpdateMicroFocus_Callback cb) { qradiobutton_updatemicrofocus_callback = cb; }
    void setQRadioButton_Create_Callback(QRadioButton_Create_Callback cb) { qradiobutton_create_callback = cb; }
    void setQRadioButton_Destroy_Callback(QRadioButton_Destroy_Callback cb) { qradiobutton_destroy_callback = cb; }
    void setQRadioButton_FocusNextChild_Callback(QRadioButton_FocusNextChild_Callback cb) { qradiobutton_focusnextchild_callback = cb; }
    void setQRadioButton_FocusPreviousChild_Callback(QRadioButton_FocusPreviousChild_Callback cb) { qradiobutton_focuspreviouschild_callback = cb; }
    void setQRadioButton_Sender_Callback(QRadioButton_Sender_Callback cb) { qradiobutton_sender_callback = cb; }
    void setQRadioButton_SenderSignalIndex_Callback(QRadioButton_SenderSignalIndex_Callback cb) { qradiobutton_sendersignalindex_callback = cb; }
    void setQRadioButton_Receivers_Callback(QRadioButton_Receivers_Callback cb) { qradiobutton_receivers_callback = cb; }
    void setQRadioButton_IsSignalConnected_Callback(QRadioButton_IsSignalConnected_Callback cb) { qradiobutton_issignalconnected_callback = cb; }

    // Base flag setters
    void setQRadioButton_Metacall_IsBase(bool value) const { qradiobutton_metacall_isbase = value; }
    void setQRadioButton_SizeHint_IsBase(bool value) const { qradiobutton_sizehint_isbase = value; }
    void setQRadioButton_MinimumSizeHint_IsBase(bool value) const { qradiobutton_minimumsizehint_isbase = value; }
    void setQRadioButton_Event_IsBase(bool value) const { qradiobutton_event_isbase = value; }
    void setQRadioButton_HitButton_IsBase(bool value) const { qradiobutton_hitbutton_isbase = value; }
    void setQRadioButton_PaintEvent_IsBase(bool value) const { qradiobutton_paintevent_isbase = value; }
    void setQRadioButton_MouseMoveEvent_IsBase(bool value) const { qradiobutton_mousemoveevent_isbase = value; }
    void setQRadioButton_InitStyleOption_IsBase(bool value) const { qradiobutton_initstyleoption_isbase = value; }
    void setQRadioButton_CheckStateSet_IsBase(bool value) const { qradiobutton_checkstateset_isbase = value; }
    void setQRadioButton_NextCheckState_IsBase(bool value) const { qradiobutton_nextcheckstate_isbase = value; }
    void setQRadioButton_KeyPressEvent_IsBase(bool value) const { qradiobutton_keypressevent_isbase = value; }
    void setQRadioButton_KeyReleaseEvent_IsBase(bool value) const { qradiobutton_keyreleaseevent_isbase = value; }
    void setQRadioButton_MousePressEvent_IsBase(bool value) const { qradiobutton_mousepressevent_isbase = value; }
    void setQRadioButton_MouseReleaseEvent_IsBase(bool value) const { qradiobutton_mousereleaseevent_isbase = value; }
    void setQRadioButton_FocusInEvent_IsBase(bool value) const { qradiobutton_focusinevent_isbase = value; }
    void setQRadioButton_FocusOutEvent_IsBase(bool value) const { qradiobutton_focusoutevent_isbase = value; }
    void setQRadioButton_ChangeEvent_IsBase(bool value) const { qradiobutton_changeevent_isbase = value; }
    void setQRadioButton_TimerEvent_IsBase(bool value) const { qradiobutton_timerevent_isbase = value; }
    void setQRadioButton_DevType_IsBase(bool value) const { qradiobutton_devtype_isbase = value; }
    void setQRadioButton_SetVisible_IsBase(bool value) const { qradiobutton_setvisible_isbase = value; }
    void setQRadioButton_HeightForWidth_IsBase(bool value) const { qradiobutton_heightforwidth_isbase = value; }
    void setQRadioButton_HasHeightForWidth_IsBase(bool value) const { qradiobutton_hasheightforwidth_isbase = value; }
    void setQRadioButton_PaintEngine_IsBase(bool value) const { qradiobutton_paintengine_isbase = value; }
    void setQRadioButton_MouseDoubleClickEvent_IsBase(bool value) const { qradiobutton_mousedoubleclickevent_isbase = value; }
    void setQRadioButton_WheelEvent_IsBase(bool value) const { qradiobutton_wheelevent_isbase = value; }
    void setQRadioButton_EnterEvent_IsBase(bool value) const { qradiobutton_enterevent_isbase = value; }
    void setQRadioButton_LeaveEvent_IsBase(bool value) const { qradiobutton_leaveevent_isbase = value; }
    void setQRadioButton_MoveEvent_IsBase(bool value) const { qradiobutton_moveevent_isbase = value; }
    void setQRadioButton_ResizeEvent_IsBase(bool value) const { qradiobutton_resizeevent_isbase = value; }
    void setQRadioButton_CloseEvent_IsBase(bool value) const { qradiobutton_closeevent_isbase = value; }
    void setQRadioButton_ContextMenuEvent_IsBase(bool value) const { qradiobutton_contextmenuevent_isbase = value; }
    void setQRadioButton_TabletEvent_IsBase(bool value) const { qradiobutton_tabletevent_isbase = value; }
    void setQRadioButton_ActionEvent_IsBase(bool value) const { qradiobutton_actionevent_isbase = value; }
    void setQRadioButton_DragEnterEvent_IsBase(bool value) const { qradiobutton_dragenterevent_isbase = value; }
    void setQRadioButton_DragMoveEvent_IsBase(bool value) const { qradiobutton_dragmoveevent_isbase = value; }
    void setQRadioButton_DragLeaveEvent_IsBase(bool value) const { qradiobutton_dragleaveevent_isbase = value; }
    void setQRadioButton_DropEvent_IsBase(bool value) const { qradiobutton_dropevent_isbase = value; }
    void setQRadioButton_ShowEvent_IsBase(bool value) const { qradiobutton_showevent_isbase = value; }
    void setQRadioButton_HideEvent_IsBase(bool value) const { qradiobutton_hideevent_isbase = value; }
    void setQRadioButton_NativeEvent_IsBase(bool value) const { qradiobutton_nativeevent_isbase = value; }
    void setQRadioButton_Metric_IsBase(bool value) const { qradiobutton_metric_isbase = value; }
    void setQRadioButton_InitPainter_IsBase(bool value) const { qradiobutton_initpainter_isbase = value; }
    void setQRadioButton_Redirected_IsBase(bool value) const { qradiobutton_redirected_isbase = value; }
    void setQRadioButton_SharedPainter_IsBase(bool value) const { qradiobutton_sharedpainter_isbase = value; }
    void setQRadioButton_InputMethodEvent_IsBase(bool value) const { qradiobutton_inputmethodevent_isbase = value; }
    void setQRadioButton_InputMethodQuery_IsBase(bool value) const { qradiobutton_inputmethodquery_isbase = value; }
    void setQRadioButton_FocusNextPrevChild_IsBase(bool value) const { qradiobutton_focusnextprevchild_isbase = value; }
    void setQRadioButton_EventFilter_IsBase(bool value) const { qradiobutton_eventfilter_isbase = value; }
    void setQRadioButton_ChildEvent_IsBase(bool value) const { qradiobutton_childevent_isbase = value; }
    void setQRadioButton_CustomEvent_IsBase(bool value) const { qradiobutton_customevent_isbase = value; }
    void setQRadioButton_ConnectNotify_IsBase(bool value) const { qradiobutton_connectnotify_isbase = value; }
    void setQRadioButton_DisconnectNotify_IsBase(bool value) const { qradiobutton_disconnectnotify_isbase = value; }
    void setQRadioButton_UpdateMicroFocus_IsBase(bool value) const { qradiobutton_updatemicrofocus_isbase = value; }
    void setQRadioButton_Create_IsBase(bool value) const { qradiobutton_create_isbase = value; }
    void setQRadioButton_Destroy_IsBase(bool value) const { qradiobutton_destroy_isbase = value; }
    void setQRadioButton_FocusNextChild_IsBase(bool value) const { qradiobutton_focusnextchild_isbase = value; }
    void setQRadioButton_FocusPreviousChild_IsBase(bool value) const { qradiobutton_focuspreviouschild_isbase = value; }
    void setQRadioButton_Sender_IsBase(bool value) const { qradiobutton_sender_isbase = value; }
    void setQRadioButton_SenderSignalIndex_IsBase(bool value) const { qradiobutton_sendersignalindex_isbase = value; }
    void setQRadioButton_Receivers_IsBase(bool value) const { qradiobutton_receivers_isbase = value; }
    void setQRadioButton_IsSignalConnected_IsBase(bool value) const { qradiobutton_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qradiobutton_metacall_isbase) {
            qradiobutton_metacall_isbase = false;
            return QRadioButton::qt_metacall(param1, param2, param3);
        } else if (qradiobutton_metacall_callback != nullptr) {
            return qradiobutton_metacall_callback(this, param1, param2, param3);
        } else {
            return QRadioButton::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qradiobutton_sizehint_isbase) {
            qradiobutton_sizehint_isbase = false;
            return QRadioButton::sizeHint();
        } else if (qradiobutton_sizehint_callback != nullptr) {
            return qradiobutton_sizehint_callback();
        } else {
            return QRadioButton::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qradiobutton_minimumsizehint_isbase) {
            qradiobutton_minimumsizehint_isbase = false;
            return QRadioButton::minimumSizeHint();
        } else if (qradiobutton_minimumsizehint_callback != nullptr) {
            return qradiobutton_minimumsizehint_callback();
        } else {
            return QRadioButton::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qradiobutton_event_isbase) {
            qradiobutton_event_isbase = false;
            return QRadioButton::event(e);
        } else if (qradiobutton_event_callback != nullptr) {
            return qradiobutton_event_callback(this, e);
        } else {
            return QRadioButton::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hitButton(const QPoint& param1) const override {
        if (qradiobutton_hitbutton_isbase) {
            qradiobutton_hitbutton_isbase = false;
            return QRadioButton::hitButton(param1);
        } else if (qradiobutton_hitbutton_callback != nullptr) {
            return qradiobutton_hitbutton_callback(this, param1);
        } else {
            return QRadioButton::hitButton(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qradiobutton_paintevent_isbase) {
            qradiobutton_paintevent_isbase = false;
            QRadioButton::paintEvent(param1);
        } else if (qradiobutton_paintevent_callback != nullptr) {
            qradiobutton_paintevent_callback(this, param1);
        } else {
            QRadioButton::paintEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (qradiobutton_mousemoveevent_isbase) {
            qradiobutton_mousemoveevent_isbase = false;
            QRadioButton::mouseMoveEvent(param1);
        } else if (qradiobutton_mousemoveevent_callback != nullptr) {
            qradiobutton_mousemoveevent_callback(this, param1);
        } else {
            QRadioButton::mouseMoveEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionButton* button) const override {
        if (qradiobutton_initstyleoption_isbase) {
            qradiobutton_initstyleoption_isbase = false;
            QRadioButton::initStyleOption(button);
        } else if (qradiobutton_initstyleoption_callback != nullptr) {
            qradiobutton_initstyleoption_callback(this, button);
        } else {
            QRadioButton::initStyleOption(button);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void checkStateSet() override {
        if (qradiobutton_checkstateset_isbase) {
            qradiobutton_checkstateset_isbase = false;
            QRadioButton::checkStateSet();
        } else if (qradiobutton_checkstateset_callback != nullptr) {
            qradiobutton_checkstateset_callback();
        } else {
            QRadioButton::checkStateSet();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void nextCheckState() override {
        if (qradiobutton_nextcheckstate_isbase) {
            qradiobutton_nextcheckstate_isbase = false;
            QRadioButton::nextCheckState();
        } else if (qradiobutton_nextcheckstate_callback != nullptr) {
            qradiobutton_nextcheckstate_callback();
        } else {
            QRadioButton::nextCheckState();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (qradiobutton_keypressevent_isbase) {
            qradiobutton_keypressevent_isbase = false;
            QRadioButton::keyPressEvent(e);
        } else if (qradiobutton_keypressevent_callback != nullptr) {
            qradiobutton_keypressevent_callback(this, e);
        } else {
            QRadioButton::keyPressEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (qradiobutton_keyreleaseevent_isbase) {
            qradiobutton_keyreleaseevent_isbase = false;
            QRadioButton::keyReleaseEvent(e);
        } else if (qradiobutton_keyreleaseevent_callback != nullptr) {
            qradiobutton_keyreleaseevent_callback(this, e);
        } else {
            QRadioButton::keyReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (qradiobutton_mousepressevent_isbase) {
            qradiobutton_mousepressevent_isbase = false;
            QRadioButton::mousePressEvent(e);
        } else if (qradiobutton_mousepressevent_callback != nullptr) {
            qradiobutton_mousepressevent_callback(this, e);
        } else {
            QRadioButton::mousePressEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (qradiobutton_mousereleaseevent_isbase) {
            qradiobutton_mousereleaseevent_isbase = false;
            QRadioButton::mouseReleaseEvent(e);
        } else if (qradiobutton_mousereleaseevent_callback != nullptr) {
            qradiobutton_mousereleaseevent_callback(this, e);
        } else {
            QRadioButton::mouseReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (qradiobutton_focusinevent_isbase) {
            qradiobutton_focusinevent_isbase = false;
            QRadioButton::focusInEvent(e);
        } else if (qradiobutton_focusinevent_callback != nullptr) {
            qradiobutton_focusinevent_callback(this, e);
        } else {
            QRadioButton::focusInEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (qradiobutton_focusoutevent_isbase) {
            qradiobutton_focusoutevent_isbase = false;
            QRadioButton::focusOutEvent(e);
        } else if (qradiobutton_focusoutevent_callback != nullptr) {
            qradiobutton_focusoutevent_callback(this, e);
        } else {
            QRadioButton::focusOutEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (qradiobutton_changeevent_isbase) {
            qradiobutton_changeevent_isbase = false;
            QRadioButton::changeEvent(e);
        } else if (qradiobutton_changeevent_callback != nullptr) {
            qradiobutton_changeevent_callback(this, e);
        } else {
            QRadioButton::changeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (qradiobutton_timerevent_isbase) {
            qradiobutton_timerevent_isbase = false;
            QRadioButton::timerEvent(e);
        } else if (qradiobutton_timerevent_callback != nullptr) {
            qradiobutton_timerevent_callback(this, e);
        } else {
            QRadioButton::timerEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qradiobutton_devtype_isbase) {
            qradiobutton_devtype_isbase = false;
            return QRadioButton::devType();
        } else if (qradiobutton_devtype_callback != nullptr) {
            return qradiobutton_devtype_callback();
        } else {
            return QRadioButton::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qradiobutton_setvisible_isbase) {
            qradiobutton_setvisible_isbase = false;
            QRadioButton::setVisible(visible);
        } else if (qradiobutton_setvisible_callback != nullptr) {
            qradiobutton_setvisible_callback(this, visible);
        } else {
            QRadioButton::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qradiobutton_heightforwidth_isbase) {
            qradiobutton_heightforwidth_isbase = false;
            return QRadioButton::heightForWidth(param1);
        } else if (qradiobutton_heightforwidth_callback != nullptr) {
            return qradiobutton_heightforwidth_callback(this, param1);
        } else {
            return QRadioButton::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qradiobutton_hasheightforwidth_isbase) {
            qradiobutton_hasheightforwidth_isbase = false;
            return QRadioButton::hasHeightForWidth();
        } else if (qradiobutton_hasheightforwidth_callback != nullptr) {
            return qradiobutton_hasheightforwidth_callback();
        } else {
            return QRadioButton::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qradiobutton_paintengine_isbase) {
            qradiobutton_paintengine_isbase = false;
            return QRadioButton::paintEngine();
        } else if (qradiobutton_paintengine_callback != nullptr) {
            return qradiobutton_paintengine_callback();
        } else {
            return QRadioButton::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qradiobutton_mousedoubleclickevent_isbase) {
            qradiobutton_mousedoubleclickevent_isbase = false;
            QRadioButton::mouseDoubleClickEvent(event);
        } else if (qradiobutton_mousedoubleclickevent_callback != nullptr) {
            qradiobutton_mousedoubleclickevent_callback(this, event);
        } else {
            QRadioButton::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qradiobutton_wheelevent_isbase) {
            qradiobutton_wheelevent_isbase = false;
            QRadioButton::wheelEvent(event);
        } else if (qradiobutton_wheelevent_callback != nullptr) {
            qradiobutton_wheelevent_callback(this, event);
        } else {
            QRadioButton::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qradiobutton_enterevent_isbase) {
            qradiobutton_enterevent_isbase = false;
            QRadioButton::enterEvent(event);
        } else if (qradiobutton_enterevent_callback != nullptr) {
            qradiobutton_enterevent_callback(this, event);
        } else {
            QRadioButton::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qradiobutton_leaveevent_isbase) {
            qradiobutton_leaveevent_isbase = false;
            QRadioButton::leaveEvent(event);
        } else if (qradiobutton_leaveevent_callback != nullptr) {
            qradiobutton_leaveevent_callback(this, event);
        } else {
            QRadioButton::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qradiobutton_moveevent_isbase) {
            qradiobutton_moveevent_isbase = false;
            QRadioButton::moveEvent(event);
        } else if (qradiobutton_moveevent_callback != nullptr) {
            qradiobutton_moveevent_callback(this, event);
        } else {
            QRadioButton::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qradiobutton_resizeevent_isbase) {
            qradiobutton_resizeevent_isbase = false;
            QRadioButton::resizeEvent(event);
        } else if (qradiobutton_resizeevent_callback != nullptr) {
            qradiobutton_resizeevent_callback(this, event);
        } else {
            QRadioButton::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qradiobutton_closeevent_isbase) {
            qradiobutton_closeevent_isbase = false;
            QRadioButton::closeEvent(event);
        } else if (qradiobutton_closeevent_callback != nullptr) {
            qradiobutton_closeevent_callback(this, event);
        } else {
            QRadioButton::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qradiobutton_contextmenuevent_isbase) {
            qradiobutton_contextmenuevent_isbase = false;
            QRadioButton::contextMenuEvent(event);
        } else if (qradiobutton_contextmenuevent_callback != nullptr) {
            qradiobutton_contextmenuevent_callback(this, event);
        } else {
            QRadioButton::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qradiobutton_tabletevent_isbase) {
            qradiobutton_tabletevent_isbase = false;
            QRadioButton::tabletEvent(event);
        } else if (qradiobutton_tabletevent_callback != nullptr) {
            qradiobutton_tabletevent_callback(this, event);
        } else {
            QRadioButton::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qradiobutton_actionevent_isbase) {
            qradiobutton_actionevent_isbase = false;
            QRadioButton::actionEvent(event);
        } else if (qradiobutton_actionevent_callback != nullptr) {
            qradiobutton_actionevent_callback(this, event);
        } else {
            QRadioButton::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qradiobutton_dragenterevent_isbase) {
            qradiobutton_dragenterevent_isbase = false;
            QRadioButton::dragEnterEvent(event);
        } else if (qradiobutton_dragenterevent_callback != nullptr) {
            qradiobutton_dragenterevent_callback(this, event);
        } else {
            QRadioButton::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qradiobutton_dragmoveevent_isbase) {
            qradiobutton_dragmoveevent_isbase = false;
            QRadioButton::dragMoveEvent(event);
        } else if (qradiobutton_dragmoveevent_callback != nullptr) {
            qradiobutton_dragmoveevent_callback(this, event);
        } else {
            QRadioButton::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qradiobutton_dragleaveevent_isbase) {
            qradiobutton_dragleaveevent_isbase = false;
            QRadioButton::dragLeaveEvent(event);
        } else if (qradiobutton_dragleaveevent_callback != nullptr) {
            qradiobutton_dragleaveevent_callback(this, event);
        } else {
            QRadioButton::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qradiobutton_dropevent_isbase) {
            qradiobutton_dropevent_isbase = false;
            QRadioButton::dropEvent(event);
        } else if (qradiobutton_dropevent_callback != nullptr) {
            qradiobutton_dropevent_callback(this, event);
        } else {
            QRadioButton::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qradiobutton_showevent_isbase) {
            qradiobutton_showevent_isbase = false;
            QRadioButton::showEvent(event);
        } else if (qradiobutton_showevent_callback != nullptr) {
            qradiobutton_showevent_callback(this, event);
        } else {
            QRadioButton::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qradiobutton_hideevent_isbase) {
            qradiobutton_hideevent_isbase = false;
            QRadioButton::hideEvent(event);
        } else if (qradiobutton_hideevent_callback != nullptr) {
            qradiobutton_hideevent_callback(this, event);
        } else {
            QRadioButton::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qradiobutton_nativeevent_isbase) {
            qradiobutton_nativeevent_isbase = false;
            return QRadioButton::nativeEvent(eventType, message, result);
        } else if (qradiobutton_nativeevent_callback != nullptr) {
            return qradiobutton_nativeevent_callback(this, eventType, message, result);
        } else {
            return QRadioButton::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qradiobutton_metric_isbase) {
            qradiobutton_metric_isbase = false;
            return QRadioButton::metric(param1);
        } else if (qradiobutton_metric_callback != nullptr) {
            return qradiobutton_metric_callback(this, param1);
        } else {
            return QRadioButton::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qradiobutton_initpainter_isbase) {
            qradiobutton_initpainter_isbase = false;
            QRadioButton::initPainter(painter);
        } else if (qradiobutton_initpainter_callback != nullptr) {
            qradiobutton_initpainter_callback(this, painter);
        } else {
            QRadioButton::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qradiobutton_redirected_isbase) {
            qradiobutton_redirected_isbase = false;
            return QRadioButton::redirected(offset);
        } else if (qradiobutton_redirected_callback != nullptr) {
            return qradiobutton_redirected_callback(this, offset);
        } else {
            return QRadioButton::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qradiobutton_sharedpainter_isbase) {
            qradiobutton_sharedpainter_isbase = false;
            return QRadioButton::sharedPainter();
        } else if (qradiobutton_sharedpainter_callback != nullptr) {
            return qradiobutton_sharedpainter_callback();
        } else {
            return QRadioButton::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qradiobutton_inputmethodevent_isbase) {
            qradiobutton_inputmethodevent_isbase = false;
            QRadioButton::inputMethodEvent(param1);
        } else if (qradiobutton_inputmethodevent_callback != nullptr) {
            qradiobutton_inputmethodevent_callback(this, param1);
        } else {
            QRadioButton::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qradiobutton_inputmethodquery_isbase) {
            qradiobutton_inputmethodquery_isbase = false;
            return QRadioButton::inputMethodQuery(param1);
        } else if (qradiobutton_inputmethodquery_callback != nullptr) {
            return qradiobutton_inputmethodquery_callback(this, param1);
        } else {
            return QRadioButton::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qradiobutton_focusnextprevchild_isbase) {
            qradiobutton_focusnextprevchild_isbase = false;
            return QRadioButton::focusNextPrevChild(next);
        } else if (qradiobutton_focusnextprevchild_callback != nullptr) {
            return qradiobutton_focusnextprevchild_callback(this, next);
        } else {
            return QRadioButton::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qradiobutton_eventfilter_isbase) {
            qradiobutton_eventfilter_isbase = false;
            return QRadioButton::eventFilter(watched, event);
        } else if (qradiobutton_eventfilter_callback != nullptr) {
            return qradiobutton_eventfilter_callback(this, watched, event);
        } else {
            return QRadioButton::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qradiobutton_childevent_isbase) {
            qradiobutton_childevent_isbase = false;
            QRadioButton::childEvent(event);
        } else if (qradiobutton_childevent_callback != nullptr) {
            qradiobutton_childevent_callback(this, event);
        } else {
            QRadioButton::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qradiobutton_customevent_isbase) {
            qradiobutton_customevent_isbase = false;
            QRadioButton::customEvent(event);
        } else if (qradiobutton_customevent_callback != nullptr) {
            qradiobutton_customevent_callback(this, event);
        } else {
            QRadioButton::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qradiobutton_connectnotify_isbase) {
            qradiobutton_connectnotify_isbase = false;
            QRadioButton::connectNotify(signal);
        } else if (qradiobutton_connectnotify_callback != nullptr) {
            qradiobutton_connectnotify_callback(this, signal);
        } else {
            QRadioButton::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qradiobutton_disconnectnotify_isbase) {
            qradiobutton_disconnectnotify_isbase = false;
            QRadioButton::disconnectNotify(signal);
        } else if (qradiobutton_disconnectnotify_callback != nullptr) {
            qradiobutton_disconnectnotify_callback(this, signal);
        } else {
            QRadioButton::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qradiobutton_updatemicrofocus_isbase) {
            qradiobutton_updatemicrofocus_isbase = false;
            QRadioButton::updateMicroFocus();
        } else if (qradiobutton_updatemicrofocus_callback != nullptr) {
            qradiobutton_updatemicrofocus_callback();
        } else {
            QRadioButton::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qradiobutton_create_isbase) {
            qradiobutton_create_isbase = false;
            QRadioButton::create();
        } else if (qradiobutton_create_callback != nullptr) {
            qradiobutton_create_callback();
        } else {
            QRadioButton::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qradiobutton_destroy_isbase) {
            qradiobutton_destroy_isbase = false;
            QRadioButton::destroy();
        } else if (qradiobutton_destroy_callback != nullptr) {
            qradiobutton_destroy_callback();
        } else {
            QRadioButton::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qradiobutton_focusnextchild_isbase) {
            qradiobutton_focusnextchild_isbase = false;
            return QRadioButton::focusNextChild();
        } else if (qradiobutton_focusnextchild_callback != nullptr) {
            return qradiobutton_focusnextchild_callback();
        } else {
            return QRadioButton::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qradiobutton_focuspreviouschild_isbase) {
            qradiobutton_focuspreviouschild_isbase = false;
            return QRadioButton::focusPreviousChild();
        } else if (qradiobutton_focuspreviouschild_callback != nullptr) {
            return qradiobutton_focuspreviouschild_callback();
        } else {
            return QRadioButton::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qradiobutton_sender_isbase) {
            qradiobutton_sender_isbase = false;
            return QRadioButton::sender();
        } else if (qradiobutton_sender_callback != nullptr) {
            return qradiobutton_sender_callback();
        } else {
            return QRadioButton::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qradiobutton_sendersignalindex_isbase) {
            qradiobutton_sendersignalindex_isbase = false;
            return QRadioButton::senderSignalIndex();
        } else if (qradiobutton_sendersignalindex_callback != nullptr) {
            return qradiobutton_sendersignalindex_callback();
        } else {
            return QRadioButton::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qradiobutton_receivers_isbase) {
            qradiobutton_receivers_isbase = false;
            return QRadioButton::receivers(signal);
        } else if (qradiobutton_receivers_callback != nullptr) {
            return qradiobutton_receivers_callback(this, signal);
        } else {
            return QRadioButton::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qradiobutton_issignalconnected_isbase) {
            qradiobutton_issignalconnected_isbase = false;
            return QRadioButton::isSignalConnected(signal);
        } else if (qradiobutton_issignalconnected_callback != nullptr) {
            return qradiobutton_issignalconnected_callback(this, signal);
        } else {
            return QRadioButton::isSignalConnected(signal);
        }
    }
};

#endif
