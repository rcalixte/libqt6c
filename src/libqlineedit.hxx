#pragma once
#ifndef SRCC_LIBVIRTUALQLINEEDIT_H
#define SRCC_LIBVIRTUALQLINEEDIT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QLineEdit so that we can call protected methods
class VirtualQLineEdit : public QLineEdit {

  public:
    // Virtual class public types (including callbacks)
    using QLineEdit_Metacall_Callback = int (*)(QLineEdit*, QMetaObject::Call, int, void**);
    using QLineEdit_SizeHint_Callback = QSize (*)();
    using QLineEdit_MinimumSizeHint_Callback = QSize (*)();
    using QLineEdit_MousePressEvent_Callback = void (*)(QLineEdit*, QMouseEvent*);
    using QLineEdit_MouseMoveEvent_Callback = void (*)(QLineEdit*, QMouseEvent*);
    using QLineEdit_MouseReleaseEvent_Callback = void (*)(QLineEdit*, QMouseEvent*);
    using QLineEdit_MouseDoubleClickEvent_Callback = void (*)(QLineEdit*, QMouseEvent*);
    using QLineEdit_KeyPressEvent_Callback = void (*)(QLineEdit*, QKeyEvent*);
    using QLineEdit_KeyReleaseEvent_Callback = void (*)(QLineEdit*, QKeyEvent*);
    using QLineEdit_FocusInEvent_Callback = void (*)(QLineEdit*, QFocusEvent*);
    using QLineEdit_FocusOutEvent_Callback = void (*)(QLineEdit*, QFocusEvent*);
    using QLineEdit_PaintEvent_Callback = void (*)(QLineEdit*, QPaintEvent*);
    using QLineEdit_DragEnterEvent_Callback = void (*)(QLineEdit*, QDragEnterEvent*);
    using QLineEdit_DragMoveEvent_Callback = void (*)(QLineEdit*, QDragMoveEvent*);
    using QLineEdit_DragLeaveEvent_Callback = void (*)(QLineEdit*, QDragLeaveEvent*);
    using QLineEdit_DropEvent_Callback = void (*)(QLineEdit*, QDropEvent*);
    using QLineEdit_ChangeEvent_Callback = void (*)(QLineEdit*, QEvent*);
    using QLineEdit_ContextMenuEvent_Callback = void (*)(QLineEdit*, QContextMenuEvent*);
    using QLineEdit_InputMethodEvent_Callback = void (*)(QLineEdit*, QInputMethodEvent*);
    using QLineEdit_InitStyleOption_Callback = void (*)(const QLineEdit*, QStyleOptionFrame*);
    using QLineEdit_InputMethodQuery_Callback = QVariant (*)(const QLineEdit*, Qt::InputMethodQuery);
    using QLineEdit_TimerEvent_Callback = void (*)(QLineEdit*, QTimerEvent*);
    using QLineEdit_Event_Callback = bool (*)(QLineEdit*, QEvent*);
    using QLineEdit_DevType_Callback = int (*)();
    using QLineEdit_SetVisible_Callback = void (*)(QLineEdit*, bool);
    using QLineEdit_HeightForWidth_Callback = int (*)(const QLineEdit*, int);
    using QLineEdit_HasHeightForWidth_Callback = bool (*)();
    using QLineEdit_PaintEngine_Callback = QPaintEngine* (*)();
    using QLineEdit_WheelEvent_Callback = void (*)(QLineEdit*, QWheelEvent*);
    using QLineEdit_EnterEvent_Callback = void (*)(QLineEdit*, QEnterEvent*);
    using QLineEdit_LeaveEvent_Callback = void (*)(QLineEdit*, QEvent*);
    using QLineEdit_MoveEvent_Callback = void (*)(QLineEdit*, QMoveEvent*);
    using QLineEdit_ResizeEvent_Callback = void (*)(QLineEdit*, QResizeEvent*);
    using QLineEdit_CloseEvent_Callback = void (*)(QLineEdit*, QCloseEvent*);
    using QLineEdit_TabletEvent_Callback = void (*)(QLineEdit*, QTabletEvent*);
    using QLineEdit_ActionEvent_Callback = void (*)(QLineEdit*, QActionEvent*);
    using QLineEdit_ShowEvent_Callback = void (*)(QLineEdit*, QShowEvent*);
    using QLineEdit_HideEvent_Callback = void (*)(QLineEdit*, QHideEvent*);
    using QLineEdit_NativeEvent_Callback = bool (*)(QLineEdit*, const QByteArray&, void*, qintptr*);
    using QLineEdit_Metric_Callback = int (*)(const QLineEdit*, QPaintDevice::PaintDeviceMetric);
    using QLineEdit_InitPainter_Callback = void (*)(const QLineEdit*, QPainter*);
    using QLineEdit_Redirected_Callback = QPaintDevice* (*)(const QLineEdit*, QPoint*);
    using QLineEdit_SharedPainter_Callback = QPainter* (*)();
    using QLineEdit_FocusNextPrevChild_Callback = bool (*)(QLineEdit*, bool);
    using QLineEdit_EventFilter_Callback = bool (*)(QLineEdit*, QObject*, QEvent*);
    using QLineEdit_ChildEvent_Callback = void (*)(QLineEdit*, QChildEvent*);
    using QLineEdit_CustomEvent_Callback = void (*)(QLineEdit*, QEvent*);
    using QLineEdit_ConnectNotify_Callback = void (*)(QLineEdit*, const QMetaMethod&);
    using QLineEdit_DisconnectNotify_Callback = void (*)(QLineEdit*, const QMetaMethod&);
    using QLineEdit_CursorRect_Callback = QRect (*)();
    using QLineEdit_UpdateMicroFocus_Callback = void (*)();
    using QLineEdit_Create_Callback = void (*)();
    using QLineEdit_Destroy_Callback = void (*)();
    using QLineEdit_FocusNextChild_Callback = bool (*)();
    using QLineEdit_FocusPreviousChild_Callback = bool (*)();
    using QLineEdit_Sender_Callback = QObject* (*)();
    using QLineEdit_SenderSignalIndex_Callback = int (*)();
    using QLineEdit_Receivers_Callback = int (*)(const QLineEdit*, const char*);
    using QLineEdit_IsSignalConnected_Callback = bool (*)(const QLineEdit*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QLineEdit_Metacall_Callback qlineedit_metacall_callback = nullptr;
    QLineEdit_SizeHint_Callback qlineedit_sizehint_callback = nullptr;
    QLineEdit_MinimumSizeHint_Callback qlineedit_minimumsizehint_callback = nullptr;
    QLineEdit_MousePressEvent_Callback qlineedit_mousepressevent_callback = nullptr;
    QLineEdit_MouseMoveEvent_Callback qlineedit_mousemoveevent_callback = nullptr;
    QLineEdit_MouseReleaseEvent_Callback qlineedit_mousereleaseevent_callback = nullptr;
    QLineEdit_MouseDoubleClickEvent_Callback qlineedit_mousedoubleclickevent_callback = nullptr;
    QLineEdit_KeyPressEvent_Callback qlineedit_keypressevent_callback = nullptr;
    QLineEdit_KeyReleaseEvent_Callback qlineedit_keyreleaseevent_callback = nullptr;
    QLineEdit_FocusInEvent_Callback qlineedit_focusinevent_callback = nullptr;
    QLineEdit_FocusOutEvent_Callback qlineedit_focusoutevent_callback = nullptr;
    QLineEdit_PaintEvent_Callback qlineedit_paintevent_callback = nullptr;
    QLineEdit_DragEnterEvent_Callback qlineedit_dragenterevent_callback = nullptr;
    QLineEdit_DragMoveEvent_Callback qlineedit_dragmoveevent_callback = nullptr;
    QLineEdit_DragLeaveEvent_Callback qlineedit_dragleaveevent_callback = nullptr;
    QLineEdit_DropEvent_Callback qlineedit_dropevent_callback = nullptr;
    QLineEdit_ChangeEvent_Callback qlineedit_changeevent_callback = nullptr;
    QLineEdit_ContextMenuEvent_Callback qlineedit_contextmenuevent_callback = nullptr;
    QLineEdit_InputMethodEvent_Callback qlineedit_inputmethodevent_callback = nullptr;
    QLineEdit_InitStyleOption_Callback qlineedit_initstyleoption_callback = nullptr;
    QLineEdit_InputMethodQuery_Callback qlineedit_inputmethodquery_callback = nullptr;
    QLineEdit_TimerEvent_Callback qlineedit_timerevent_callback = nullptr;
    QLineEdit_Event_Callback qlineedit_event_callback = nullptr;
    QLineEdit_DevType_Callback qlineedit_devtype_callback = nullptr;
    QLineEdit_SetVisible_Callback qlineedit_setvisible_callback = nullptr;
    QLineEdit_HeightForWidth_Callback qlineedit_heightforwidth_callback = nullptr;
    QLineEdit_HasHeightForWidth_Callback qlineedit_hasheightforwidth_callback = nullptr;
    QLineEdit_PaintEngine_Callback qlineedit_paintengine_callback = nullptr;
    QLineEdit_WheelEvent_Callback qlineedit_wheelevent_callback = nullptr;
    QLineEdit_EnterEvent_Callback qlineedit_enterevent_callback = nullptr;
    QLineEdit_LeaveEvent_Callback qlineedit_leaveevent_callback = nullptr;
    QLineEdit_MoveEvent_Callback qlineedit_moveevent_callback = nullptr;
    QLineEdit_ResizeEvent_Callback qlineedit_resizeevent_callback = nullptr;
    QLineEdit_CloseEvent_Callback qlineedit_closeevent_callback = nullptr;
    QLineEdit_TabletEvent_Callback qlineedit_tabletevent_callback = nullptr;
    QLineEdit_ActionEvent_Callback qlineedit_actionevent_callback = nullptr;
    QLineEdit_ShowEvent_Callback qlineedit_showevent_callback = nullptr;
    QLineEdit_HideEvent_Callback qlineedit_hideevent_callback = nullptr;
    QLineEdit_NativeEvent_Callback qlineedit_nativeevent_callback = nullptr;
    QLineEdit_Metric_Callback qlineedit_metric_callback = nullptr;
    QLineEdit_InitPainter_Callback qlineedit_initpainter_callback = nullptr;
    QLineEdit_Redirected_Callback qlineedit_redirected_callback = nullptr;
    QLineEdit_SharedPainter_Callback qlineedit_sharedpainter_callback = nullptr;
    QLineEdit_FocusNextPrevChild_Callback qlineedit_focusnextprevchild_callback = nullptr;
    QLineEdit_EventFilter_Callback qlineedit_eventfilter_callback = nullptr;
    QLineEdit_ChildEvent_Callback qlineedit_childevent_callback = nullptr;
    QLineEdit_CustomEvent_Callback qlineedit_customevent_callback = nullptr;
    QLineEdit_ConnectNotify_Callback qlineedit_connectnotify_callback = nullptr;
    QLineEdit_DisconnectNotify_Callback qlineedit_disconnectnotify_callback = nullptr;
    QLineEdit_CursorRect_Callback qlineedit_cursorrect_callback = nullptr;
    QLineEdit_UpdateMicroFocus_Callback qlineedit_updatemicrofocus_callback = nullptr;
    QLineEdit_Create_Callback qlineedit_create_callback = nullptr;
    QLineEdit_Destroy_Callback qlineedit_destroy_callback = nullptr;
    QLineEdit_FocusNextChild_Callback qlineedit_focusnextchild_callback = nullptr;
    QLineEdit_FocusPreviousChild_Callback qlineedit_focuspreviouschild_callback = nullptr;
    QLineEdit_Sender_Callback qlineedit_sender_callback = nullptr;
    QLineEdit_SenderSignalIndex_Callback qlineedit_sendersignalindex_callback = nullptr;
    QLineEdit_Receivers_Callback qlineedit_receivers_callback = nullptr;
    QLineEdit_IsSignalConnected_Callback qlineedit_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qlineedit_metacall_isbase = false;
    mutable bool qlineedit_sizehint_isbase = false;
    mutable bool qlineedit_minimumsizehint_isbase = false;
    mutable bool qlineedit_mousepressevent_isbase = false;
    mutable bool qlineedit_mousemoveevent_isbase = false;
    mutable bool qlineedit_mousereleaseevent_isbase = false;
    mutable bool qlineedit_mousedoubleclickevent_isbase = false;
    mutable bool qlineedit_keypressevent_isbase = false;
    mutable bool qlineedit_keyreleaseevent_isbase = false;
    mutable bool qlineedit_focusinevent_isbase = false;
    mutable bool qlineedit_focusoutevent_isbase = false;
    mutable bool qlineedit_paintevent_isbase = false;
    mutable bool qlineedit_dragenterevent_isbase = false;
    mutable bool qlineedit_dragmoveevent_isbase = false;
    mutable bool qlineedit_dragleaveevent_isbase = false;
    mutable bool qlineedit_dropevent_isbase = false;
    mutable bool qlineedit_changeevent_isbase = false;
    mutable bool qlineedit_contextmenuevent_isbase = false;
    mutable bool qlineedit_inputmethodevent_isbase = false;
    mutable bool qlineedit_initstyleoption_isbase = false;
    mutable bool qlineedit_inputmethodquery_isbase = false;
    mutable bool qlineedit_timerevent_isbase = false;
    mutable bool qlineedit_event_isbase = false;
    mutable bool qlineedit_devtype_isbase = false;
    mutable bool qlineedit_setvisible_isbase = false;
    mutable bool qlineedit_heightforwidth_isbase = false;
    mutable bool qlineedit_hasheightforwidth_isbase = false;
    mutable bool qlineedit_paintengine_isbase = false;
    mutable bool qlineedit_wheelevent_isbase = false;
    mutable bool qlineedit_enterevent_isbase = false;
    mutable bool qlineedit_leaveevent_isbase = false;
    mutable bool qlineedit_moveevent_isbase = false;
    mutable bool qlineedit_resizeevent_isbase = false;
    mutable bool qlineedit_closeevent_isbase = false;
    mutable bool qlineedit_tabletevent_isbase = false;
    mutable bool qlineedit_actionevent_isbase = false;
    mutable bool qlineedit_showevent_isbase = false;
    mutable bool qlineedit_hideevent_isbase = false;
    mutable bool qlineedit_nativeevent_isbase = false;
    mutable bool qlineedit_metric_isbase = false;
    mutable bool qlineedit_initpainter_isbase = false;
    mutable bool qlineedit_redirected_isbase = false;
    mutable bool qlineedit_sharedpainter_isbase = false;
    mutable bool qlineedit_focusnextprevchild_isbase = false;
    mutable bool qlineedit_eventfilter_isbase = false;
    mutable bool qlineedit_childevent_isbase = false;
    mutable bool qlineedit_customevent_isbase = false;
    mutable bool qlineedit_connectnotify_isbase = false;
    mutable bool qlineedit_disconnectnotify_isbase = false;
    mutable bool qlineedit_cursorrect_isbase = false;
    mutable bool qlineedit_updatemicrofocus_isbase = false;
    mutable bool qlineedit_create_isbase = false;
    mutable bool qlineedit_destroy_isbase = false;
    mutable bool qlineedit_focusnextchild_isbase = false;
    mutable bool qlineedit_focuspreviouschild_isbase = false;
    mutable bool qlineedit_sender_isbase = false;
    mutable bool qlineedit_sendersignalindex_isbase = false;
    mutable bool qlineedit_receivers_isbase = false;
    mutable bool qlineedit_issignalconnected_isbase = false;

  public:
    VirtualQLineEdit(QWidget* parent) : QLineEdit(parent){};
    VirtualQLineEdit() : QLineEdit(){};
    VirtualQLineEdit(const QString& param1) : QLineEdit(param1){};
    VirtualQLineEdit(const QString& param1, QWidget* parent) : QLineEdit(param1, parent){};

    ~VirtualQLineEdit() {
        qlineedit_metacall_callback = nullptr;
        qlineedit_sizehint_callback = nullptr;
        qlineedit_minimumsizehint_callback = nullptr;
        qlineedit_mousepressevent_callback = nullptr;
        qlineedit_mousemoveevent_callback = nullptr;
        qlineedit_mousereleaseevent_callback = nullptr;
        qlineedit_mousedoubleclickevent_callback = nullptr;
        qlineedit_keypressevent_callback = nullptr;
        qlineedit_keyreleaseevent_callback = nullptr;
        qlineedit_focusinevent_callback = nullptr;
        qlineedit_focusoutevent_callback = nullptr;
        qlineedit_paintevent_callback = nullptr;
        qlineedit_dragenterevent_callback = nullptr;
        qlineedit_dragmoveevent_callback = nullptr;
        qlineedit_dragleaveevent_callback = nullptr;
        qlineedit_dropevent_callback = nullptr;
        qlineedit_changeevent_callback = nullptr;
        qlineedit_contextmenuevent_callback = nullptr;
        qlineedit_inputmethodevent_callback = nullptr;
        qlineedit_initstyleoption_callback = nullptr;
        qlineedit_inputmethodquery_callback = nullptr;
        qlineedit_timerevent_callback = nullptr;
        qlineedit_event_callback = nullptr;
        qlineedit_devtype_callback = nullptr;
        qlineedit_setvisible_callback = nullptr;
        qlineedit_heightforwidth_callback = nullptr;
        qlineedit_hasheightforwidth_callback = nullptr;
        qlineedit_paintengine_callback = nullptr;
        qlineedit_wheelevent_callback = nullptr;
        qlineedit_enterevent_callback = nullptr;
        qlineedit_leaveevent_callback = nullptr;
        qlineedit_moveevent_callback = nullptr;
        qlineedit_resizeevent_callback = nullptr;
        qlineedit_closeevent_callback = nullptr;
        qlineedit_tabletevent_callback = nullptr;
        qlineedit_actionevent_callback = nullptr;
        qlineedit_showevent_callback = nullptr;
        qlineedit_hideevent_callback = nullptr;
        qlineedit_nativeevent_callback = nullptr;
        qlineedit_metric_callback = nullptr;
        qlineedit_initpainter_callback = nullptr;
        qlineedit_redirected_callback = nullptr;
        qlineedit_sharedpainter_callback = nullptr;
        qlineedit_focusnextprevchild_callback = nullptr;
        qlineedit_eventfilter_callback = nullptr;
        qlineedit_childevent_callback = nullptr;
        qlineedit_customevent_callback = nullptr;
        qlineedit_connectnotify_callback = nullptr;
        qlineedit_disconnectnotify_callback = nullptr;
        qlineedit_cursorrect_callback = nullptr;
        qlineedit_updatemicrofocus_callback = nullptr;
        qlineedit_create_callback = nullptr;
        qlineedit_destroy_callback = nullptr;
        qlineedit_focusnextchild_callback = nullptr;
        qlineedit_focuspreviouschild_callback = nullptr;
        qlineedit_sender_callback = nullptr;
        qlineedit_sendersignalindex_callback = nullptr;
        qlineedit_receivers_callback = nullptr;
        qlineedit_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQLineEdit_Metacall_Callback(QLineEdit_Metacall_Callback cb) { qlineedit_metacall_callback = cb; }
    void setQLineEdit_SizeHint_Callback(QLineEdit_SizeHint_Callback cb) { qlineedit_sizehint_callback = cb; }
    void setQLineEdit_MinimumSizeHint_Callback(QLineEdit_MinimumSizeHint_Callback cb) { qlineedit_minimumsizehint_callback = cb; }
    void setQLineEdit_MousePressEvent_Callback(QLineEdit_MousePressEvent_Callback cb) { qlineedit_mousepressevent_callback = cb; }
    void setQLineEdit_MouseMoveEvent_Callback(QLineEdit_MouseMoveEvent_Callback cb) { qlineedit_mousemoveevent_callback = cb; }
    void setQLineEdit_MouseReleaseEvent_Callback(QLineEdit_MouseReleaseEvent_Callback cb) { qlineedit_mousereleaseevent_callback = cb; }
    void setQLineEdit_MouseDoubleClickEvent_Callback(QLineEdit_MouseDoubleClickEvent_Callback cb) { qlineedit_mousedoubleclickevent_callback = cb; }
    void setQLineEdit_KeyPressEvent_Callback(QLineEdit_KeyPressEvent_Callback cb) { qlineedit_keypressevent_callback = cb; }
    void setQLineEdit_KeyReleaseEvent_Callback(QLineEdit_KeyReleaseEvent_Callback cb) { qlineedit_keyreleaseevent_callback = cb; }
    void setQLineEdit_FocusInEvent_Callback(QLineEdit_FocusInEvent_Callback cb) { qlineedit_focusinevent_callback = cb; }
    void setQLineEdit_FocusOutEvent_Callback(QLineEdit_FocusOutEvent_Callback cb) { qlineedit_focusoutevent_callback = cb; }
    void setQLineEdit_PaintEvent_Callback(QLineEdit_PaintEvent_Callback cb) { qlineedit_paintevent_callback = cb; }
    void setQLineEdit_DragEnterEvent_Callback(QLineEdit_DragEnterEvent_Callback cb) { qlineedit_dragenterevent_callback = cb; }
    void setQLineEdit_DragMoveEvent_Callback(QLineEdit_DragMoveEvent_Callback cb) { qlineedit_dragmoveevent_callback = cb; }
    void setQLineEdit_DragLeaveEvent_Callback(QLineEdit_DragLeaveEvent_Callback cb) { qlineedit_dragleaveevent_callback = cb; }
    void setQLineEdit_DropEvent_Callback(QLineEdit_DropEvent_Callback cb) { qlineedit_dropevent_callback = cb; }
    void setQLineEdit_ChangeEvent_Callback(QLineEdit_ChangeEvent_Callback cb) { qlineedit_changeevent_callback = cb; }
    void setQLineEdit_ContextMenuEvent_Callback(QLineEdit_ContextMenuEvent_Callback cb) { qlineedit_contextmenuevent_callback = cb; }
    void setQLineEdit_InputMethodEvent_Callback(QLineEdit_InputMethodEvent_Callback cb) { qlineedit_inputmethodevent_callback = cb; }
    void setQLineEdit_InitStyleOption_Callback(QLineEdit_InitStyleOption_Callback cb) { qlineedit_initstyleoption_callback = cb; }
    void setQLineEdit_InputMethodQuery_Callback(QLineEdit_InputMethodQuery_Callback cb) { qlineedit_inputmethodquery_callback = cb; }
    void setQLineEdit_TimerEvent_Callback(QLineEdit_TimerEvent_Callback cb) { qlineedit_timerevent_callback = cb; }
    void setQLineEdit_Event_Callback(QLineEdit_Event_Callback cb) { qlineedit_event_callback = cb; }
    void setQLineEdit_DevType_Callback(QLineEdit_DevType_Callback cb) { qlineedit_devtype_callback = cb; }
    void setQLineEdit_SetVisible_Callback(QLineEdit_SetVisible_Callback cb) { qlineedit_setvisible_callback = cb; }
    void setQLineEdit_HeightForWidth_Callback(QLineEdit_HeightForWidth_Callback cb) { qlineedit_heightforwidth_callback = cb; }
    void setQLineEdit_HasHeightForWidth_Callback(QLineEdit_HasHeightForWidth_Callback cb) { qlineedit_hasheightforwidth_callback = cb; }
    void setQLineEdit_PaintEngine_Callback(QLineEdit_PaintEngine_Callback cb) { qlineedit_paintengine_callback = cb; }
    void setQLineEdit_WheelEvent_Callback(QLineEdit_WheelEvent_Callback cb) { qlineedit_wheelevent_callback = cb; }
    void setQLineEdit_EnterEvent_Callback(QLineEdit_EnterEvent_Callback cb) { qlineedit_enterevent_callback = cb; }
    void setQLineEdit_LeaveEvent_Callback(QLineEdit_LeaveEvent_Callback cb) { qlineedit_leaveevent_callback = cb; }
    void setQLineEdit_MoveEvent_Callback(QLineEdit_MoveEvent_Callback cb) { qlineedit_moveevent_callback = cb; }
    void setQLineEdit_ResizeEvent_Callback(QLineEdit_ResizeEvent_Callback cb) { qlineedit_resizeevent_callback = cb; }
    void setQLineEdit_CloseEvent_Callback(QLineEdit_CloseEvent_Callback cb) { qlineedit_closeevent_callback = cb; }
    void setQLineEdit_TabletEvent_Callback(QLineEdit_TabletEvent_Callback cb) { qlineedit_tabletevent_callback = cb; }
    void setQLineEdit_ActionEvent_Callback(QLineEdit_ActionEvent_Callback cb) { qlineedit_actionevent_callback = cb; }
    void setQLineEdit_ShowEvent_Callback(QLineEdit_ShowEvent_Callback cb) { qlineedit_showevent_callback = cb; }
    void setQLineEdit_HideEvent_Callback(QLineEdit_HideEvent_Callback cb) { qlineedit_hideevent_callback = cb; }
    void setQLineEdit_NativeEvent_Callback(QLineEdit_NativeEvent_Callback cb) { qlineedit_nativeevent_callback = cb; }
    void setQLineEdit_Metric_Callback(QLineEdit_Metric_Callback cb) { qlineedit_metric_callback = cb; }
    void setQLineEdit_InitPainter_Callback(QLineEdit_InitPainter_Callback cb) { qlineedit_initpainter_callback = cb; }
    void setQLineEdit_Redirected_Callback(QLineEdit_Redirected_Callback cb) { qlineedit_redirected_callback = cb; }
    void setQLineEdit_SharedPainter_Callback(QLineEdit_SharedPainter_Callback cb) { qlineedit_sharedpainter_callback = cb; }
    void setQLineEdit_FocusNextPrevChild_Callback(QLineEdit_FocusNextPrevChild_Callback cb) { qlineedit_focusnextprevchild_callback = cb; }
    void setQLineEdit_EventFilter_Callback(QLineEdit_EventFilter_Callback cb) { qlineedit_eventfilter_callback = cb; }
    void setQLineEdit_ChildEvent_Callback(QLineEdit_ChildEvent_Callback cb) { qlineedit_childevent_callback = cb; }
    void setQLineEdit_CustomEvent_Callback(QLineEdit_CustomEvent_Callback cb) { qlineedit_customevent_callback = cb; }
    void setQLineEdit_ConnectNotify_Callback(QLineEdit_ConnectNotify_Callback cb) { qlineedit_connectnotify_callback = cb; }
    void setQLineEdit_DisconnectNotify_Callback(QLineEdit_DisconnectNotify_Callback cb) { qlineedit_disconnectnotify_callback = cb; }
    void setQLineEdit_CursorRect_Callback(QLineEdit_CursorRect_Callback cb) { qlineedit_cursorrect_callback = cb; }
    void setQLineEdit_UpdateMicroFocus_Callback(QLineEdit_UpdateMicroFocus_Callback cb) { qlineedit_updatemicrofocus_callback = cb; }
    void setQLineEdit_Create_Callback(QLineEdit_Create_Callback cb) { qlineedit_create_callback = cb; }
    void setQLineEdit_Destroy_Callback(QLineEdit_Destroy_Callback cb) { qlineedit_destroy_callback = cb; }
    void setQLineEdit_FocusNextChild_Callback(QLineEdit_FocusNextChild_Callback cb) { qlineedit_focusnextchild_callback = cb; }
    void setQLineEdit_FocusPreviousChild_Callback(QLineEdit_FocusPreviousChild_Callback cb) { qlineedit_focuspreviouschild_callback = cb; }
    void setQLineEdit_Sender_Callback(QLineEdit_Sender_Callback cb) { qlineedit_sender_callback = cb; }
    void setQLineEdit_SenderSignalIndex_Callback(QLineEdit_SenderSignalIndex_Callback cb) { qlineedit_sendersignalindex_callback = cb; }
    void setQLineEdit_Receivers_Callback(QLineEdit_Receivers_Callback cb) { qlineedit_receivers_callback = cb; }
    void setQLineEdit_IsSignalConnected_Callback(QLineEdit_IsSignalConnected_Callback cb) { qlineedit_issignalconnected_callback = cb; }

    // Base flag setters
    void setQLineEdit_Metacall_IsBase(bool value) const { qlineedit_metacall_isbase = value; }
    void setQLineEdit_SizeHint_IsBase(bool value) const { qlineedit_sizehint_isbase = value; }
    void setQLineEdit_MinimumSizeHint_IsBase(bool value) const { qlineedit_minimumsizehint_isbase = value; }
    void setQLineEdit_MousePressEvent_IsBase(bool value) const { qlineedit_mousepressevent_isbase = value; }
    void setQLineEdit_MouseMoveEvent_IsBase(bool value) const { qlineedit_mousemoveevent_isbase = value; }
    void setQLineEdit_MouseReleaseEvent_IsBase(bool value) const { qlineedit_mousereleaseevent_isbase = value; }
    void setQLineEdit_MouseDoubleClickEvent_IsBase(bool value) const { qlineedit_mousedoubleclickevent_isbase = value; }
    void setQLineEdit_KeyPressEvent_IsBase(bool value) const { qlineedit_keypressevent_isbase = value; }
    void setQLineEdit_KeyReleaseEvent_IsBase(bool value) const { qlineedit_keyreleaseevent_isbase = value; }
    void setQLineEdit_FocusInEvent_IsBase(bool value) const { qlineedit_focusinevent_isbase = value; }
    void setQLineEdit_FocusOutEvent_IsBase(bool value) const { qlineedit_focusoutevent_isbase = value; }
    void setQLineEdit_PaintEvent_IsBase(bool value) const { qlineedit_paintevent_isbase = value; }
    void setQLineEdit_DragEnterEvent_IsBase(bool value) const { qlineedit_dragenterevent_isbase = value; }
    void setQLineEdit_DragMoveEvent_IsBase(bool value) const { qlineedit_dragmoveevent_isbase = value; }
    void setQLineEdit_DragLeaveEvent_IsBase(bool value) const { qlineedit_dragleaveevent_isbase = value; }
    void setQLineEdit_DropEvent_IsBase(bool value) const { qlineedit_dropevent_isbase = value; }
    void setQLineEdit_ChangeEvent_IsBase(bool value) const { qlineedit_changeevent_isbase = value; }
    void setQLineEdit_ContextMenuEvent_IsBase(bool value) const { qlineedit_contextmenuevent_isbase = value; }
    void setQLineEdit_InputMethodEvent_IsBase(bool value) const { qlineedit_inputmethodevent_isbase = value; }
    void setQLineEdit_InitStyleOption_IsBase(bool value) const { qlineedit_initstyleoption_isbase = value; }
    void setQLineEdit_InputMethodQuery_IsBase(bool value) const { qlineedit_inputmethodquery_isbase = value; }
    void setQLineEdit_TimerEvent_IsBase(bool value) const { qlineedit_timerevent_isbase = value; }
    void setQLineEdit_Event_IsBase(bool value) const { qlineedit_event_isbase = value; }
    void setQLineEdit_DevType_IsBase(bool value) const { qlineedit_devtype_isbase = value; }
    void setQLineEdit_SetVisible_IsBase(bool value) const { qlineedit_setvisible_isbase = value; }
    void setQLineEdit_HeightForWidth_IsBase(bool value) const { qlineedit_heightforwidth_isbase = value; }
    void setQLineEdit_HasHeightForWidth_IsBase(bool value) const { qlineedit_hasheightforwidth_isbase = value; }
    void setQLineEdit_PaintEngine_IsBase(bool value) const { qlineedit_paintengine_isbase = value; }
    void setQLineEdit_WheelEvent_IsBase(bool value) const { qlineedit_wheelevent_isbase = value; }
    void setQLineEdit_EnterEvent_IsBase(bool value) const { qlineedit_enterevent_isbase = value; }
    void setQLineEdit_LeaveEvent_IsBase(bool value) const { qlineedit_leaveevent_isbase = value; }
    void setQLineEdit_MoveEvent_IsBase(bool value) const { qlineedit_moveevent_isbase = value; }
    void setQLineEdit_ResizeEvent_IsBase(bool value) const { qlineedit_resizeevent_isbase = value; }
    void setQLineEdit_CloseEvent_IsBase(bool value) const { qlineedit_closeevent_isbase = value; }
    void setQLineEdit_TabletEvent_IsBase(bool value) const { qlineedit_tabletevent_isbase = value; }
    void setQLineEdit_ActionEvent_IsBase(bool value) const { qlineedit_actionevent_isbase = value; }
    void setQLineEdit_ShowEvent_IsBase(bool value) const { qlineedit_showevent_isbase = value; }
    void setQLineEdit_HideEvent_IsBase(bool value) const { qlineedit_hideevent_isbase = value; }
    void setQLineEdit_NativeEvent_IsBase(bool value) const { qlineedit_nativeevent_isbase = value; }
    void setQLineEdit_Metric_IsBase(bool value) const { qlineedit_metric_isbase = value; }
    void setQLineEdit_InitPainter_IsBase(bool value) const { qlineedit_initpainter_isbase = value; }
    void setQLineEdit_Redirected_IsBase(bool value) const { qlineedit_redirected_isbase = value; }
    void setQLineEdit_SharedPainter_IsBase(bool value) const { qlineedit_sharedpainter_isbase = value; }
    void setQLineEdit_FocusNextPrevChild_IsBase(bool value) const { qlineedit_focusnextprevchild_isbase = value; }
    void setQLineEdit_EventFilter_IsBase(bool value) const { qlineedit_eventfilter_isbase = value; }
    void setQLineEdit_ChildEvent_IsBase(bool value) const { qlineedit_childevent_isbase = value; }
    void setQLineEdit_CustomEvent_IsBase(bool value) const { qlineedit_customevent_isbase = value; }
    void setQLineEdit_ConnectNotify_IsBase(bool value) const { qlineedit_connectnotify_isbase = value; }
    void setQLineEdit_DisconnectNotify_IsBase(bool value) const { qlineedit_disconnectnotify_isbase = value; }
    void setQLineEdit_CursorRect_IsBase(bool value) const { qlineedit_cursorrect_isbase = value; }
    void setQLineEdit_UpdateMicroFocus_IsBase(bool value) const { qlineedit_updatemicrofocus_isbase = value; }
    void setQLineEdit_Create_IsBase(bool value) const { qlineedit_create_isbase = value; }
    void setQLineEdit_Destroy_IsBase(bool value) const { qlineedit_destroy_isbase = value; }
    void setQLineEdit_FocusNextChild_IsBase(bool value) const { qlineedit_focusnextchild_isbase = value; }
    void setQLineEdit_FocusPreviousChild_IsBase(bool value) const { qlineedit_focuspreviouschild_isbase = value; }
    void setQLineEdit_Sender_IsBase(bool value) const { qlineedit_sender_isbase = value; }
    void setQLineEdit_SenderSignalIndex_IsBase(bool value) const { qlineedit_sendersignalindex_isbase = value; }
    void setQLineEdit_Receivers_IsBase(bool value) const { qlineedit_receivers_isbase = value; }
    void setQLineEdit_IsSignalConnected_IsBase(bool value) const { qlineedit_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qlineedit_metacall_isbase) {
            qlineedit_metacall_isbase = false;
            return QLineEdit::qt_metacall(param1, param2, param3);
        } else if (qlineedit_metacall_callback != nullptr) {
            return qlineedit_metacall_callback(this, param1, param2, param3);
        } else {
            return QLineEdit::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qlineedit_sizehint_isbase) {
            qlineedit_sizehint_isbase = false;
            return QLineEdit::sizeHint();
        } else if (qlineedit_sizehint_callback != nullptr) {
            return qlineedit_sizehint_callback();
        } else {
            return QLineEdit::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qlineedit_minimumsizehint_isbase) {
            qlineedit_minimumsizehint_isbase = false;
            return QLineEdit::minimumSizeHint();
        } else if (qlineedit_minimumsizehint_callback != nullptr) {
            return qlineedit_minimumsizehint_callback();
        } else {
            return QLineEdit::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (qlineedit_mousepressevent_isbase) {
            qlineedit_mousepressevent_isbase = false;
            QLineEdit::mousePressEvent(param1);
        } else if (qlineedit_mousepressevent_callback != nullptr) {
            qlineedit_mousepressevent_callback(this, param1);
        } else {
            QLineEdit::mousePressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (qlineedit_mousemoveevent_isbase) {
            qlineedit_mousemoveevent_isbase = false;
            QLineEdit::mouseMoveEvent(param1);
        } else if (qlineedit_mousemoveevent_callback != nullptr) {
            qlineedit_mousemoveevent_callback(this, param1);
        } else {
            QLineEdit::mouseMoveEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (qlineedit_mousereleaseevent_isbase) {
            qlineedit_mousereleaseevent_isbase = false;
            QLineEdit::mouseReleaseEvent(param1);
        } else if (qlineedit_mousereleaseevent_callback != nullptr) {
            qlineedit_mousereleaseevent_callback(this, param1);
        } else {
            QLineEdit::mouseReleaseEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
        if (qlineedit_mousedoubleclickevent_isbase) {
            qlineedit_mousedoubleclickevent_isbase = false;
            QLineEdit::mouseDoubleClickEvent(param1);
        } else if (qlineedit_mousedoubleclickevent_callback != nullptr) {
            qlineedit_mousedoubleclickevent_callback(this, param1);
        } else {
            QLineEdit::mouseDoubleClickEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qlineedit_keypressevent_isbase) {
            qlineedit_keypressevent_isbase = false;
            QLineEdit::keyPressEvent(param1);
        } else if (qlineedit_keypressevent_callback != nullptr) {
            qlineedit_keypressevent_callback(this, param1);
        } else {
            QLineEdit::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* param1) override {
        if (qlineedit_keyreleaseevent_isbase) {
            qlineedit_keyreleaseevent_isbase = false;
            QLineEdit::keyReleaseEvent(param1);
        } else if (qlineedit_keyreleaseevent_callback != nullptr) {
            qlineedit_keyreleaseevent_callback(this, param1);
        } else {
            QLineEdit::keyReleaseEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* param1) override {
        if (qlineedit_focusinevent_isbase) {
            qlineedit_focusinevent_isbase = false;
            QLineEdit::focusInEvent(param1);
        } else if (qlineedit_focusinevent_callback != nullptr) {
            qlineedit_focusinevent_callback(this, param1);
        } else {
            QLineEdit::focusInEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* param1) override {
        if (qlineedit_focusoutevent_isbase) {
            qlineedit_focusoutevent_isbase = false;
            QLineEdit::focusOutEvent(param1);
        } else if (qlineedit_focusoutevent_callback != nullptr) {
            qlineedit_focusoutevent_callback(this, param1);
        } else {
            QLineEdit::focusOutEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qlineedit_paintevent_isbase) {
            qlineedit_paintevent_isbase = false;
            QLineEdit::paintEvent(param1);
        } else if (qlineedit_paintevent_callback != nullptr) {
            qlineedit_paintevent_callback(this, param1);
        } else {
            QLineEdit::paintEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* param1) override {
        if (qlineedit_dragenterevent_isbase) {
            qlineedit_dragenterevent_isbase = false;
            QLineEdit::dragEnterEvent(param1);
        } else if (qlineedit_dragenterevent_callback != nullptr) {
            qlineedit_dragenterevent_callback(this, param1);
        } else {
            QLineEdit::dragEnterEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* e) override {
        if (qlineedit_dragmoveevent_isbase) {
            qlineedit_dragmoveevent_isbase = false;
            QLineEdit::dragMoveEvent(e);
        } else if (qlineedit_dragmoveevent_callback != nullptr) {
            qlineedit_dragmoveevent_callback(this, e);
        } else {
            QLineEdit::dragMoveEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
        if (qlineedit_dragleaveevent_isbase) {
            qlineedit_dragleaveevent_isbase = false;
            QLineEdit::dragLeaveEvent(e);
        } else if (qlineedit_dragleaveevent_callback != nullptr) {
            qlineedit_dragleaveevent_callback(this, e);
        } else {
            QLineEdit::dragLeaveEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* param1) override {
        if (qlineedit_dropevent_isbase) {
            qlineedit_dropevent_isbase = false;
            QLineEdit::dropEvent(param1);
        } else if (qlineedit_dropevent_callback != nullptr) {
            qlineedit_dropevent_callback(this, param1);
        } else {
            QLineEdit::dropEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qlineedit_changeevent_isbase) {
            qlineedit_changeevent_isbase = false;
            QLineEdit::changeEvent(param1);
        } else if (qlineedit_changeevent_callback != nullptr) {
            qlineedit_changeevent_callback(this, param1);
        } else {
            QLineEdit::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qlineedit_contextmenuevent_isbase) {
            qlineedit_contextmenuevent_isbase = false;
            QLineEdit::contextMenuEvent(param1);
        } else if (qlineedit_contextmenuevent_callback != nullptr) {
            qlineedit_contextmenuevent_callback(this, param1);
        } else {
            QLineEdit::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qlineedit_inputmethodevent_isbase) {
            qlineedit_inputmethodevent_isbase = false;
            QLineEdit::inputMethodEvent(param1);
        } else if (qlineedit_inputmethodevent_callback != nullptr) {
            qlineedit_inputmethodevent_callback(this, param1);
        } else {
            QLineEdit::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qlineedit_initstyleoption_isbase) {
            qlineedit_initstyleoption_isbase = false;
            QLineEdit::initStyleOption(option);
        } else if (qlineedit_initstyleoption_callback != nullptr) {
            qlineedit_initstyleoption_callback(this, option);
        } else {
            QLineEdit::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qlineedit_inputmethodquery_isbase) {
            qlineedit_inputmethodquery_isbase = false;
            return QLineEdit::inputMethodQuery(param1);
        } else if (qlineedit_inputmethodquery_callback != nullptr) {
            return qlineedit_inputmethodquery_callback(this, param1);
        } else {
            return QLineEdit::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (qlineedit_timerevent_isbase) {
            qlineedit_timerevent_isbase = false;
            QLineEdit::timerEvent(param1);
        } else if (qlineedit_timerevent_callback != nullptr) {
            qlineedit_timerevent_callback(this, param1);
        } else {
            QLineEdit::timerEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qlineedit_event_isbase) {
            qlineedit_event_isbase = false;
            return QLineEdit::event(param1);
        } else if (qlineedit_event_callback != nullptr) {
            return qlineedit_event_callback(this, param1);
        } else {
            return QLineEdit::event(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qlineedit_devtype_isbase) {
            qlineedit_devtype_isbase = false;
            return QLineEdit::devType();
        } else if (qlineedit_devtype_callback != nullptr) {
            return qlineedit_devtype_callback();
        } else {
            return QLineEdit::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qlineedit_setvisible_isbase) {
            qlineedit_setvisible_isbase = false;
            QLineEdit::setVisible(visible);
        } else if (qlineedit_setvisible_callback != nullptr) {
            qlineedit_setvisible_callback(this, visible);
        } else {
            QLineEdit::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qlineedit_heightforwidth_isbase) {
            qlineedit_heightforwidth_isbase = false;
            return QLineEdit::heightForWidth(param1);
        } else if (qlineedit_heightforwidth_callback != nullptr) {
            return qlineedit_heightforwidth_callback(this, param1);
        } else {
            return QLineEdit::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qlineedit_hasheightforwidth_isbase) {
            qlineedit_hasheightforwidth_isbase = false;
            return QLineEdit::hasHeightForWidth();
        } else if (qlineedit_hasheightforwidth_callback != nullptr) {
            return qlineedit_hasheightforwidth_callback();
        } else {
            return QLineEdit::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qlineedit_paintengine_isbase) {
            qlineedit_paintengine_isbase = false;
            return QLineEdit::paintEngine();
        } else if (qlineedit_paintengine_callback != nullptr) {
            return qlineedit_paintengine_callback();
        } else {
            return QLineEdit::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qlineedit_wheelevent_isbase) {
            qlineedit_wheelevent_isbase = false;
            QLineEdit::wheelEvent(event);
        } else if (qlineedit_wheelevent_callback != nullptr) {
            qlineedit_wheelevent_callback(this, event);
        } else {
            QLineEdit::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qlineedit_enterevent_isbase) {
            qlineedit_enterevent_isbase = false;
            QLineEdit::enterEvent(event);
        } else if (qlineedit_enterevent_callback != nullptr) {
            qlineedit_enterevent_callback(this, event);
        } else {
            QLineEdit::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qlineedit_leaveevent_isbase) {
            qlineedit_leaveevent_isbase = false;
            QLineEdit::leaveEvent(event);
        } else if (qlineedit_leaveevent_callback != nullptr) {
            qlineedit_leaveevent_callback(this, event);
        } else {
            QLineEdit::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qlineedit_moveevent_isbase) {
            qlineedit_moveevent_isbase = false;
            QLineEdit::moveEvent(event);
        } else if (qlineedit_moveevent_callback != nullptr) {
            qlineedit_moveevent_callback(this, event);
        } else {
            QLineEdit::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qlineedit_resizeevent_isbase) {
            qlineedit_resizeevent_isbase = false;
            QLineEdit::resizeEvent(event);
        } else if (qlineedit_resizeevent_callback != nullptr) {
            qlineedit_resizeevent_callback(this, event);
        } else {
            QLineEdit::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qlineedit_closeevent_isbase) {
            qlineedit_closeevent_isbase = false;
            QLineEdit::closeEvent(event);
        } else if (qlineedit_closeevent_callback != nullptr) {
            qlineedit_closeevent_callback(this, event);
        } else {
            QLineEdit::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qlineedit_tabletevent_isbase) {
            qlineedit_tabletevent_isbase = false;
            QLineEdit::tabletEvent(event);
        } else if (qlineedit_tabletevent_callback != nullptr) {
            qlineedit_tabletevent_callback(this, event);
        } else {
            QLineEdit::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qlineedit_actionevent_isbase) {
            qlineedit_actionevent_isbase = false;
            QLineEdit::actionEvent(event);
        } else if (qlineedit_actionevent_callback != nullptr) {
            qlineedit_actionevent_callback(this, event);
        } else {
            QLineEdit::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qlineedit_showevent_isbase) {
            qlineedit_showevent_isbase = false;
            QLineEdit::showEvent(event);
        } else if (qlineedit_showevent_callback != nullptr) {
            qlineedit_showevent_callback(this, event);
        } else {
            QLineEdit::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qlineedit_hideevent_isbase) {
            qlineedit_hideevent_isbase = false;
            QLineEdit::hideEvent(event);
        } else if (qlineedit_hideevent_callback != nullptr) {
            qlineedit_hideevent_callback(this, event);
        } else {
            QLineEdit::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qlineedit_nativeevent_isbase) {
            qlineedit_nativeevent_isbase = false;
            return QLineEdit::nativeEvent(eventType, message, result);
        } else if (qlineedit_nativeevent_callback != nullptr) {
            return qlineedit_nativeevent_callback(this, eventType, message, result);
        } else {
            return QLineEdit::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qlineedit_metric_isbase) {
            qlineedit_metric_isbase = false;
            return QLineEdit::metric(param1);
        } else if (qlineedit_metric_callback != nullptr) {
            return qlineedit_metric_callback(this, param1);
        } else {
            return QLineEdit::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qlineedit_initpainter_isbase) {
            qlineedit_initpainter_isbase = false;
            QLineEdit::initPainter(painter);
        } else if (qlineedit_initpainter_callback != nullptr) {
            qlineedit_initpainter_callback(this, painter);
        } else {
            QLineEdit::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qlineedit_redirected_isbase) {
            qlineedit_redirected_isbase = false;
            return QLineEdit::redirected(offset);
        } else if (qlineedit_redirected_callback != nullptr) {
            return qlineedit_redirected_callback(this, offset);
        } else {
            return QLineEdit::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qlineedit_sharedpainter_isbase) {
            qlineedit_sharedpainter_isbase = false;
            return QLineEdit::sharedPainter();
        } else if (qlineedit_sharedpainter_callback != nullptr) {
            return qlineedit_sharedpainter_callback();
        } else {
            return QLineEdit::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qlineedit_focusnextprevchild_isbase) {
            qlineedit_focusnextprevchild_isbase = false;
            return QLineEdit::focusNextPrevChild(next);
        } else if (qlineedit_focusnextprevchild_callback != nullptr) {
            return qlineedit_focusnextprevchild_callback(this, next);
        } else {
            return QLineEdit::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qlineedit_eventfilter_isbase) {
            qlineedit_eventfilter_isbase = false;
            return QLineEdit::eventFilter(watched, event);
        } else if (qlineedit_eventfilter_callback != nullptr) {
            return qlineedit_eventfilter_callback(this, watched, event);
        } else {
            return QLineEdit::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qlineedit_childevent_isbase) {
            qlineedit_childevent_isbase = false;
            QLineEdit::childEvent(event);
        } else if (qlineedit_childevent_callback != nullptr) {
            qlineedit_childevent_callback(this, event);
        } else {
            QLineEdit::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qlineedit_customevent_isbase) {
            qlineedit_customevent_isbase = false;
            QLineEdit::customEvent(event);
        } else if (qlineedit_customevent_callback != nullptr) {
            qlineedit_customevent_callback(this, event);
        } else {
            QLineEdit::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qlineedit_connectnotify_isbase) {
            qlineedit_connectnotify_isbase = false;
            QLineEdit::connectNotify(signal);
        } else if (qlineedit_connectnotify_callback != nullptr) {
            qlineedit_connectnotify_callback(this, signal);
        } else {
            QLineEdit::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qlineedit_disconnectnotify_isbase) {
            qlineedit_disconnectnotify_isbase = false;
            QLineEdit::disconnectNotify(signal);
        } else if (qlineedit_disconnectnotify_callback != nullptr) {
            qlineedit_disconnectnotify_callback(this, signal);
        } else {
            QLineEdit::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QRect cursorRect() const {
        if (qlineedit_cursorrect_isbase) {
            qlineedit_cursorrect_isbase = false;
            return QLineEdit::cursorRect();
        } else if (qlineedit_cursorrect_callback != nullptr) {
            return qlineedit_cursorrect_callback();
        } else {
            return QLineEdit::cursorRect();
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qlineedit_updatemicrofocus_isbase) {
            qlineedit_updatemicrofocus_isbase = false;
            QLineEdit::updateMicroFocus();
        } else if (qlineedit_updatemicrofocus_callback != nullptr) {
            qlineedit_updatemicrofocus_callback();
        } else {
            QLineEdit::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qlineedit_create_isbase) {
            qlineedit_create_isbase = false;
            QLineEdit::create();
        } else if (qlineedit_create_callback != nullptr) {
            qlineedit_create_callback();
        } else {
            QLineEdit::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qlineedit_destroy_isbase) {
            qlineedit_destroy_isbase = false;
            QLineEdit::destroy();
        } else if (qlineedit_destroy_callback != nullptr) {
            qlineedit_destroy_callback();
        } else {
            QLineEdit::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qlineedit_focusnextchild_isbase) {
            qlineedit_focusnextchild_isbase = false;
            return QLineEdit::focusNextChild();
        } else if (qlineedit_focusnextchild_callback != nullptr) {
            return qlineedit_focusnextchild_callback();
        } else {
            return QLineEdit::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qlineedit_focuspreviouschild_isbase) {
            qlineedit_focuspreviouschild_isbase = false;
            return QLineEdit::focusPreviousChild();
        } else if (qlineedit_focuspreviouschild_callback != nullptr) {
            return qlineedit_focuspreviouschild_callback();
        } else {
            return QLineEdit::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qlineedit_sender_isbase) {
            qlineedit_sender_isbase = false;
            return QLineEdit::sender();
        } else if (qlineedit_sender_callback != nullptr) {
            return qlineedit_sender_callback();
        } else {
            return QLineEdit::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qlineedit_sendersignalindex_isbase) {
            qlineedit_sendersignalindex_isbase = false;
            return QLineEdit::senderSignalIndex();
        } else if (qlineedit_sendersignalindex_callback != nullptr) {
            return qlineedit_sendersignalindex_callback();
        } else {
            return QLineEdit::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qlineedit_receivers_isbase) {
            qlineedit_receivers_isbase = false;
            return QLineEdit::receivers(signal);
        } else if (qlineedit_receivers_callback != nullptr) {
            return qlineedit_receivers_callback(this, signal);
        } else {
            return QLineEdit::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qlineedit_issignalconnected_isbase) {
            qlineedit_issignalconnected_isbase = false;
            return QLineEdit::isSignalConnected(signal);
        } else if (qlineedit_issignalconnected_callback != nullptr) {
            return qlineedit_issignalconnected_callback(this, signal);
        } else {
            return QLineEdit::isSignalConnected(signal);
        }
    }
};

#endif
