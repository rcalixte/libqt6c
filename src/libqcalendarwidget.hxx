#pragma once
#ifndef SRCC_LIBVIRTUALQCALENDARWIDGET_H
#define SRCC_LIBVIRTUALQCALENDARWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QCalendarWidget so that we can call protected methods
class VirtualQCalendarWidget : public QCalendarWidget {

  public:
    // Virtual class public types (including callbacks)
    using QCalendarWidget_Metacall_Callback = int (*)(QCalendarWidget*, QMetaObject::Call, int, void**);
    using QCalendarWidget_SizeHint_Callback = QSize (*)();
    using QCalendarWidget_MinimumSizeHint_Callback = QSize (*)();
    using QCalendarWidget_Event_Callback = bool (*)(QCalendarWidget*, QEvent*);
    using QCalendarWidget_EventFilter_Callback = bool (*)(QCalendarWidget*, QObject*, QEvent*);
    using QCalendarWidget_MousePressEvent_Callback = void (*)(QCalendarWidget*, QMouseEvent*);
    using QCalendarWidget_ResizeEvent_Callback = void (*)(QCalendarWidget*, QResizeEvent*);
    using QCalendarWidget_KeyPressEvent_Callback = void (*)(QCalendarWidget*, QKeyEvent*);
    using QCalendarWidget_PaintCell_Callback = void (*)(const QCalendarWidget*, QPainter*, const QRect&, QDate);
    using QCalendarWidget_DevType_Callback = int (*)();
    using QCalendarWidget_SetVisible_Callback = void (*)(QCalendarWidget*, bool);
    using QCalendarWidget_HeightForWidth_Callback = int (*)(const QCalendarWidget*, int);
    using QCalendarWidget_HasHeightForWidth_Callback = bool (*)();
    using QCalendarWidget_PaintEngine_Callback = QPaintEngine* (*)();
    using QCalendarWidget_MouseReleaseEvent_Callback = void (*)(QCalendarWidget*, QMouseEvent*);
    using QCalendarWidget_MouseDoubleClickEvent_Callback = void (*)(QCalendarWidget*, QMouseEvent*);
    using QCalendarWidget_MouseMoveEvent_Callback = void (*)(QCalendarWidget*, QMouseEvent*);
    using QCalendarWidget_WheelEvent_Callback = void (*)(QCalendarWidget*, QWheelEvent*);
    using QCalendarWidget_KeyReleaseEvent_Callback = void (*)(QCalendarWidget*, QKeyEvent*);
    using QCalendarWidget_FocusInEvent_Callback = void (*)(QCalendarWidget*, QFocusEvent*);
    using QCalendarWidget_FocusOutEvent_Callback = void (*)(QCalendarWidget*, QFocusEvent*);
    using QCalendarWidget_EnterEvent_Callback = void (*)(QCalendarWidget*, QEnterEvent*);
    using QCalendarWidget_LeaveEvent_Callback = void (*)(QCalendarWidget*, QEvent*);
    using QCalendarWidget_PaintEvent_Callback = void (*)(QCalendarWidget*, QPaintEvent*);
    using QCalendarWidget_MoveEvent_Callback = void (*)(QCalendarWidget*, QMoveEvent*);
    using QCalendarWidget_CloseEvent_Callback = void (*)(QCalendarWidget*, QCloseEvent*);
    using QCalendarWidget_ContextMenuEvent_Callback = void (*)(QCalendarWidget*, QContextMenuEvent*);
    using QCalendarWidget_TabletEvent_Callback = void (*)(QCalendarWidget*, QTabletEvent*);
    using QCalendarWidget_ActionEvent_Callback = void (*)(QCalendarWidget*, QActionEvent*);
    using QCalendarWidget_DragEnterEvent_Callback = void (*)(QCalendarWidget*, QDragEnterEvent*);
    using QCalendarWidget_DragMoveEvent_Callback = void (*)(QCalendarWidget*, QDragMoveEvent*);
    using QCalendarWidget_DragLeaveEvent_Callback = void (*)(QCalendarWidget*, QDragLeaveEvent*);
    using QCalendarWidget_DropEvent_Callback = void (*)(QCalendarWidget*, QDropEvent*);
    using QCalendarWidget_ShowEvent_Callback = void (*)(QCalendarWidget*, QShowEvent*);
    using QCalendarWidget_HideEvent_Callback = void (*)(QCalendarWidget*, QHideEvent*);
    using QCalendarWidget_NativeEvent_Callback = bool (*)(QCalendarWidget*, const QByteArray&, void*, qintptr*);
    using QCalendarWidget_ChangeEvent_Callback = void (*)(QCalendarWidget*, QEvent*);
    using QCalendarWidget_Metric_Callback = int (*)(const QCalendarWidget*, QPaintDevice::PaintDeviceMetric);
    using QCalendarWidget_InitPainter_Callback = void (*)(const QCalendarWidget*, QPainter*);
    using QCalendarWidget_Redirected_Callback = QPaintDevice* (*)(const QCalendarWidget*, QPoint*);
    using QCalendarWidget_SharedPainter_Callback = QPainter* (*)();
    using QCalendarWidget_InputMethodEvent_Callback = void (*)(QCalendarWidget*, QInputMethodEvent*);
    using QCalendarWidget_InputMethodQuery_Callback = QVariant (*)(const QCalendarWidget*, Qt::InputMethodQuery);
    using QCalendarWidget_FocusNextPrevChild_Callback = bool (*)(QCalendarWidget*, bool);
    using QCalendarWidget_TimerEvent_Callback = void (*)(QCalendarWidget*, QTimerEvent*);
    using QCalendarWidget_ChildEvent_Callback = void (*)(QCalendarWidget*, QChildEvent*);
    using QCalendarWidget_CustomEvent_Callback = void (*)(QCalendarWidget*, QEvent*);
    using QCalendarWidget_ConnectNotify_Callback = void (*)(QCalendarWidget*, const QMetaMethod&);
    using QCalendarWidget_DisconnectNotify_Callback = void (*)(QCalendarWidget*, const QMetaMethod&);
    using QCalendarWidget_UpdateCell_Callback = void (*)(QCalendarWidget*, QDate);
    using QCalendarWidget_UpdateCells_Callback = void (*)();
    using QCalendarWidget_UpdateMicroFocus_Callback = void (*)();
    using QCalendarWidget_Create_Callback = void (*)();
    using QCalendarWidget_Destroy_Callback = void (*)();
    using QCalendarWidget_FocusNextChild_Callback = bool (*)();
    using QCalendarWidget_FocusPreviousChild_Callback = bool (*)();
    using QCalendarWidget_Sender_Callback = QObject* (*)();
    using QCalendarWidget_SenderSignalIndex_Callback = int (*)();
    using QCalendarWidget_Receivers_Callback = int (*)(const QCalendarWidget*, const char*);
    using QCalendarWidget_IsSignalConnected_Callback = bool (*)(const QCalendarWidget*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QCalendarWidget_Metacall_Callback qcalendarwidget_metacall_callback = nullptr;
    QCalendarWidget_SizeHint_Callback qcalendarwidget_sizehint_callback = nullptr;
    QCalendarWidget_MinimumSizeHint_Callback qcalendarwidget_minimumsizehint_callback = nullptr;
    QCalendarWidget_Event_Callback qcalendarwidget_event_callback = nullptr;
    QCalendarWidget_EventFilter_Callback qcalendarwidget_eventfilter_callback = nullptr;
    QCalendarWidget_MousePressEvent_Callback qcalendarwidget_mousepressevent_callback = nullptr;
    QCalendarWidget_ResizeEvent_Callback qcalendarwidget_resizeevent_callback = nullptr;
    QCalendarWidget_KeyPressEvent_Callback qcalendarwidget_keypressevent_callback = nullptr;
    QCalendarWidget_PaintCell_Callback qcalendarwidget_paintcell_callback = nullptr;
    QCalendarWidget_DevType_Callback qcalendarwidget_devtype_callback = nullptr;
    QCalendarWidget_SetVisible_Callback qcalendarwidget_setvisible_callback = nullptr;
    QCalendarWidget_HeightForWidth_Callback qcalendarwidget_heightforwidth_callback = nullptr;
    QCalendarWidget_HasHeightForWidth_Callback qcalendarwidget_hasheightforwidth_callback = nullptr;
    QCalendarWidget_PaintEngine_Callback qcalendarwidget_paintengine_callback = nullptr;
    QCalendarWidget_MouseReleaseEvent_Callback qcalendarwidget_mousereleaseevent_callback = nullptr;
    QCalendarWidget_MouseDoubleClickEvent_Callback qcalendarwidget_mousedoubleclickevent_callback = nullptr;
    QCalendarWidget_MouseMoveEvent_Callback qcalendarwidget_mousemoveevent_callback = nullptr;
    QCalendarWidget_WheelEvent_Callback qcalendarwidget_wheelevent_callback = nullptr;
    QCalendarWidget_KeyReleaseEvent_Callback qcalendarwidget_keyreleaseevent_callback = nullptr;
    QCalendarWidget_FocusInEvent_Callback qcalendarwidget_focusinevent_callback = nullptr;
    QCalendarWidget_FocusOutEvent_Callback qcalendarwidget_focusoutevent_callback = nullptr;
    QCalendarWidget_EnterEvent_Callback qcalendarwidget_enterevent_callback = nullptr;
    QCalendarWidget_LeaveEvent_Callback qcalendarwidget_leaveevent_callback = nullptr;
    QCalendarWidget_PaintEvent_Callback qcalendarwidget_paintevent_callback = nullptr;
    QCalendarWidget_MoveEvent_Callback qcalendarwidget_moveevent_callback = nullptr;
    QCalendarWidget_CloseEvent_Callback qcalendarwidget_closeevent_callback = nullptr;
    QCalendarWidget_ContextMenuEvent_Callback qcalendarwidget_contextmenuevent_callback = nullptr;
    QCalendarWidget_TabletEvent_Callback qcalendarwidget_tabletevent_callback = nullptr;
    QCalendarWidget_ActionEvent_Callback qcalendarwidget_actionevent_callback = nullptr;
    QCalendarWidget_DragEnterEvent_Callback qcalendarwidget_dragenterevent_callback = nullptr;
    QCalendarWidget_DragMoveEvent_Callback qcalendarwidget_dragmoveevent_callback = nullptr;
    QCalendarWidget_DragLeaveEvent_Callback qcalendarwidget_dragleaveevent_callback = nullptr;
    QCalendarWidget_DropEvent_Callback qcalendarwidget_dropevent_callback = nullptr;
    QCalendarWidget_ShowEvent_Callback qcalendarwidget_showevent_callback = nullptr;
    QCalendarWidget_HideEvent_Callback qcalendarwidget_hideevent_callback = nullptr;
    QCalendarWidget_NativeEvent_Callback qcalendarwidget_nativeevent_callback = nullptr;
    QCalendarWidget_ChangeEvent_Callback qcalendarwidget_changeevent_callback = nullptr;
    QCalendarWidget_Metric_Callback qcalendarwidget_metric_callback = nullptr;
    QCalendarWidget_InitPainter_Callback qcalendarwidget_initpainter_callback = nullptr;
    QCalendarWidget_Redirected_Callback qcalendarwidget_redirected_callback = nullptr;
    QCalendarWidget_SharedPainter_Callback qcalendarwidget_sharedpainter_callback = nullptr;
    QCalendarWidget_InputMethodEvent_Callback qcalendarwidget_inputmethodevent_callback = nullptr;
    QCalendarWidget_InputMethodQuery_Callback qcalendarwidget_inputmethodquery_callback = nullptr;
    QCalendarWidget_FocusNextPrevChild_Callback qcalendarwidget_focusnextprevchild_callback = nullptr;
    QCalendarWidget_TimerEvent_Callback qcalendarwidget_timerevent_callback = nullptr;
    QCalendarWidget_ChildEvent_Callback qcalendarwidget_childevent_callback = nullptr;
    QCalendarWidget_CustomEvent_Callback qcalendarwidget_customevent_callback = nullptr;
    QCalendarWidget_ConnectNotify_Callback qcalendarwidget_connectnotify_callback = nullptr;
    QCalendarWidget_DisconnectNotify_Callback qcalendarwidget_disconnectnotify_callback = nullptr;
    QCalendarWidget_UpdateCell_Callback qcalendarwidget_updatecell_callback = nullptr;
    QCalendarWidget_UpdateCells_Callback qcalendarwidget_updatecells_callback = nullptr;
    QCalendarWidget_UpdateMicroFocus_Callback qcalendarwidget_updatemicrofocus_callback = nullptr;
    QCalendarWidget_Create_Callback qcalendarwidget_create_callback = nullptr;
    QCalendarWidget_Destroy_Callback qcalendarwidget_destroy_callback = nullptr;
    QCalendarWidget_FocusNextChild_Callback qcalendarwidget_focusnextchild_callback = nullptr;
    QCalendarWidget_FocusPreviousChild_Callback qcalendarwidget_focuspreviouschild_callback = nullptr;
    QCalendarWidget_Sender_Callback qcalendarwidget_sender_callback = nullptr;
    QCalendarWidget_SenderSignalIndex_Callback qcalendarwidget_sendersignalindex_callback = nullptr;
    QCalendarWidget_Receivers_Callback qcalendarwidget_receivers_callback = nullptr;
    QCalendarWidget_IsSignalConnected_Callback qcalendarwidget_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qcalendarwidget_metacall_isbase = false;
    mutable bool qcalendarwidget_sizehint_isbase = false;
    mutable bool qcalendarwidget_minimumsizehint_isbase = false;
    mutable bool qcalendarwidget_event_isbase = false;
    mutable bool qcalendarwidget_eventfilter_isbase = false;
    mutable bool qcalendarwidget_mousepressevent_isbase = false;
    mutable bool qcalendarwidget_resizeevent_isbase = false;
    mutable bool qcalendarwidget_keypressevent_isbase = false;
    mutable bool qcalendarwidget_paintcell_isbase = false;
    mutable bool qcalendarwidget_devtype_isbase = false;
    mutable bool qcalendarwidget_setvisible_isbase = false;
    mutable bool qcalendarwidget_heightforwidth_isbase = false;
    mutable bool qcalendarwidget_hasheightforwidth_isbase = false;
    mutable bool qcalendarwidget_paintengine_isbase = false;
    mutable bool qcalendarwidget_mousereleaseevent_isbase = false;
    mutable bool qcalendarwidget_mousedoubleclickevent_isbase = false;
    mutable bool qcalendarwidget_mousemoveevent_isbase = false;
    mutable bool qcalendarwidget_wheelevent_isbase = false;
    mutable bool qcalendarwidget_keyreleaseevent_isbase = false;
    mutable bool qcalendarwidget_focusinevent_isbase = false;
    mutable bool qcalendarwidget_focusoutevent_isbase = false;
    mutable bool qcalendarwidget_enterevent_isbase = false;
    mutable bool qcalendarwidget_leaveevent_isbase = false;
    mutable bool qcalendarwidget_paintevent_isbase = false;
    mutable bool qcalendarwidget_moveevent_isbase = false;
    mutable bool qcalendarwidget_closeevent_isbase = false;
    mutable bool qcalendarwidget_contextmenuevent_isbase = false;
    mutable bool qcalendarwidget_tabletevent_isbase = false;
    mutable bool qcalendarwidget_actionevent_isbase = false;
    mutable bool qcalendarwidget_dragenterevent_isbase = false;
    mutable bool qcalendarwidget_dragmoveevent_isbase = false;
    mutable bool qcalendarwidget_dragleaveevent_isbase = false;
    mutable bool qcalendarwidget_dropevent_isbase = false;
    mutable bool qcalendarwidget_showevent_isbase = false;
    mutable bool qcalendarwidget_hideevent_isbase = false;
    mutable bool qcalendarwidget_nativeevent_isbase = false;
    mutable bool qcalendarwidget_changeevent_isbase = false;
    mutable bool qcalendarwidget_metric_isbase = false;
    mutable bool qcalendarwidget_initpainter_isbase = false;
    mutable bool qcalendarwidget_redirected_isbase = false;
    mutable bool qcalendarwidget_sharedpainter_isbase = false;
    mutable bool qcalendarwidget_inputmethodevent_isbase = false;
    mutable bool qcalendarwidget_inputmethodquery_isbase = false;
    mutable bool qcalendarwidget_focusnextprevchild_isbase = false;
    mutable bool qcalendarwidget_timerevent_isbase = false;
    mutable bool qcalendarwidget_childevent_isbase = false;
    mutable bool qcalendarwidget_customevent_isbase = false;
    mutable bool qcalendarwidget_connectnotify_isbase = false;
    mutable bool qcalendarwidget_disconnectnotify_isbase = false;
    mutable bool qcalendarwidget_updatecell_isbase = false;
    mutable bool qcalendarwidget_updatecells_isbase = false;
    mutable bool qcalendarwidget_updatemicrofocus_isbase = false;
    mutable bool qcalendarwidget_create_isbase = false;
    mutable bool qcalendarwidget_destroy_isbase = false;
    mutable bool qcalendarwidget_focusnextchild_isbase = false;
    mutable bool qcalendarwidget_focuspreviouschild_isbase = false;
    mutable bool qcalendarwidget_sender_isbase = false;
    mutable bool qcalendarwidget_sendersignalindex_isbase = false;
    mutable bool qcalendarwidget_receivers_isbase = false;
    mutable bool qcalendarwidget_issignalconnected_isbase = false;

  public:
    VirtualQCalendarWidget(QWidget* parent) : QCalendarWidget(parent){};
    VirtualQCalendarWidget() : QCalendarWidget(){};

    ~VirtualQCalendarWidget() {
        qcalendarwidget_metacall_callback = nullptr;
        qcalendarwidget_sizehint_callback = nullptr;
        qcalendarwidget_minimumsizehint_callback = nullptr;
        qcalendarwidget_event_callback = nullptr;
        qcalendarwidget_eventfilter_callback = nullptr;
        qcalendarwidget_mousepressevent_callback = nullptr;
        qcalendarwidget_resizeevent_callback = nullptr;
        qcalendarwidget_keypressevent_callback = nullptr;
        qcalendarwidget_paintcell_callback = nullptr;
        qcalendarwidget_devtype_callback = nullptr;
        qcalendarwidget_setvisible_callback = nullptr;
        qcalendarwidget_heightforwidth_callback = nullptr;
        qcalendarwidget_hasheightforwidth_callback = nullptr;
        qcalendarwidget_paintengine_callback = nullptr;
        qcalendarwidget_mousereleaseevent_callback = nullptr;
        qcalendarwidget_mousedoubleclickevent_callback = nullptr;
        qcalendarwidget_mousemoveevent_callback = nullptr;
        qcalendarwidget_wheelevent_callback = nullptr;
        qcalendarwidget_keyreleaseevent_callback = nullptr;
        qcalendarwidget_focusinevent_callback = nullptr;
        qcalendarwidget_focusoutevent_callback = nullptr;
        qcalendarwidget_enterevent_callback = nullptr;
        qcalendarwidget_leaveevent_callback = nullptr;
        qcalendarwidget_paintevent_callback = nullptr;
        qcalendarwidget_moveevent_callback = nullptr;
        qcalendarwidget_closeevent_callback = nullptr;
        qcalendarwidget_contextmenuevent_callback = nullptr;
        qcalendarwidget_tabletevent_callback = nullptr;
        qcalendarwidget_actionevent_callback = nullptr;
        qcalendarwidget_dragenterevent_callback = nullptr;
        qcalendarwidget_dragmoveevent_callback = nullptr;
        qcalendarwidget_dragleaveevent_callback = nullptr;
        qcalendarwidget_dropevent_callback = nullptr;
        qcalendarwidget_showevent_callback = nullptr;
        qcalendarwidget_hideevent_callback = nullptr;
        qcalendarwidget_nativeevent_callback = nullptr;
        qcalendarwidget_changeevent_callback = nullptr;
        qcalendarwidget_metric_callback = nullptr;
        qcalendarwidget_initpainter_callback = nullptr;
        qcalendarwidget_redirected_callback = nullptr;
        qcalendarwidget_sharedpainter_callback = nullptr;
        qcalendarwidget_inputmethodevent_callback = nullptr;
        qcalendarwidget_inputmethodquery_callback = nullptr;
        qcalendarwidget_focusnextprevchild_callback = nullptr;
        qcalendarwidget_timerevent_callback = nullptr;
        qcalendarwidget_childevent_callback = nullptr;
        qcalendarwidget_customevent_callback = nullptr;
        qcalendarwidget_connectnotify_callback = nullptr;
        qcalendarwidget_disconnectnotify_callback = nullptr;
        qcalendarwidget_updatecell_callback = nullptr;
        qcalendarwidget_updatecells_callback = nullptr;
        qcalendarwidget_updatemicrofocus_callback = nullptr;
        qcalendarwidget_create_callback = nullptr;
        qcalendarwidget_destroy_callback = nullptr;
        qcalendarwidget_focusnextchild_callback = nullptr;
        qcalendarwidget_focuspreviouschild_callback = nullptr;
        qcalendarwidget_sender_callback = nullptr;
        qcalendarwidget_sendersignalindex_callback = nullptr;
        qcalendarwidget_receivers_callback = nullptr;
        qcalendarwidget_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQCalendarWidget_Metacall_Callback(QCalendarWidget_Metacall_Callback cb) { qcalendarwidget_metacall_callback = cb; }
    void setQCalendarWidget_SizeHint_Callback(QCalendarWidget_SizeHint_Callback cb) { qcalendarwidget_sizehint_callback = cb; }
    void setQCalendarWidget_MinimumSizeHint_Callback(QCalendarWidget_MinimumSizeHint_Callback cb) { qcalendarwidget_minimumsizehint_callback = cb; }
    void setQCalendarWidget_Event_Callback(QCalendarWidget_Event_Callback cb) { qcalendarwidget_event_callback = cb; }
    void setQCalendarWidget_EventFilter_Callback(QCalendarWidget_EventFilter_Callback cb) { qcalendarwidget_eventfilter_callback = cb; }
    void setQCalendarWidget_MousePressEvent_Callback(QCalendarWidget_MousePressEvent_Callback cb) { qcalendarwidget_mousepressevent_callback = cb; }
    void setQCalendarWidget_ResizeEvent_Callback(QCalendarWidget_ResizeEvent_Callback cb) { qcalendarwidget_resizeevent_callback = cb; }
    void setQCalendarWidget_KeyPressEvent_Callback(QCalendarWidget_KeyPressEvent_Callback cb) { qcalendarwidget_keypressevent_callback = cb; }
    void setQCalendarWidget_PaintCell_Callback(QCalendarWidget_PaintCell_Callback cb) { qcalendarwidget_paintcell_callback = cb; }
    void setQCalendarWidget_DevType_Callback(QCalendarWidget_DevType_Callback cb) { qcalendarwidget_devtype_callback = cb; }
    void setQCalendarWidget_SetVisible_Callback(QCalendarWidget_SetVisible_Callback cb) { qcalendarwidget_setvisible_callback = cb; }
    void setQCalendarWidget_HeightForWidth_Callback(QCalendarWidget_HeightForWidth_Callback cb) { qcalendarwidget_heightforwidth_callback = cb; }
    void setQCalendarWidget_HasHeightForWidth_Callback(QCalendarWidget_HasHeightForWidth_Callback cb) { qcalendarwidget_hasheightforwidth_callback = cb; }
    void setQCalendarWidget_PaintEngine_Callback(QCalendarWidget_PaintEngine_Callback cb) { qcalendarwidget_paintengine_callback = cb; }
    void setQCalendarWidget_MouseReleaseEvent_Callback(QCalendarWidget_MouseReleaseEvent_Callback cb) { qcalendarwidget_mousereleaseevent_callback = cb; }
    void setQCalendarWidget_MouseDoubleClickEvent_Callback(QCalendarWidget_MouseDoubleClickEvent_Callback cb) { qcalendarwidget_mousedoubleclickevent_callback = cb; }
    void setQCalendarWidget_MouseMoveEvent_Callback(QCalendarWidget_MouseMoveEvent_Callback cb) { qcalendarwidget_mousemoveevent_callback = cb; }
    void setQCalendarWidget_WheelEvent_Callback(QCalendarWidget_WheelEvent_Callback cb) { qcalendarwidget_wheelevent_callback = cb; }
    void setQCalendarWidget_KeyReleaseEvent_Callback(QCalendarWidget_KeyReleaseEvent_Callback cb) { qcalendarwidget_keyreleaseevent_callback = cb; }
    void setQCalendarWidget_FocusInEvent_Callback(QCalendarWidget_FocusInEvent_Callback cb) { qcalendarwidget_focusinevent_callback = cb; }
    void setQCalendarWidget_FocusOutEvent_Callback(QCalendarWidget_FocusOutEvent_Callback cb) { qcalendarwidget_focusoutevent_callback = cb; }
    void setQCalendarWidget_EnterEvent_Callback(QCalendarWidget_EnterEvent_Callback cb) { qcalendarwidget_enterevent_callback = cb; }
    void setQCalendarWidget_LeaveEvent_Callback(QCalendarWidget_LeaveEvent_Callback cb) { qcalendarwidget_leaveevent_callback = cb; }
    void setQCalendarWidget_PaintEvent_Callback(QCalendarWidget_PaintEvent_Callback cb) { qcalendarwidget_paintevent_callback = cb; }
    void setQCalendarWidget_MoveEvent_Callback(QCalendarWidget_MoveEvent_Callback cb) { qcalendarwidget_moveevent_callback = cb; }
    void setQCalendarWidget_CloseEvent_Callback(QCalendarWidget_CloseEvent_Callback cb) { qcalendarwidget_closeevent_callback = cb; }
    void setQCalendarWidget_ContextMenuEvent_Callback(QCalendarWidget_ContextMenuEvent_Callback cb) { qcalendarwidget_contextmenuevent_callback = cb; }
    void setQCalendarWidget_TabletEvent_Callback(QCalendarWidget_TabletEvent_Callback cb) { qcalendarwidget_tabletevent_callback = cb; }
    void setQCalendarWidget_ActionEvent_Callback(QCalendarWidget_ActionEvent_Callback cb) { qcalendarwidget_actionevent_callback = cb; }
    void setQCalendarWidget_DragEnterEvent_Callback(QCalendarWidget_DragEnterEvent_Callback cb) { qcalendarwidget_dragenterevent_callback = cb; }
    void setQCalendarWidget_DragMoveEvent_Callback(QCalendarWidget_DragMoveEvent_Callback cb) { qcalendarwidget_dragmoveevent_callback = cb; }
    void setQCalendarWidget_DragLeaveEvent_Callback(QCalendarWidget_DragLeaveEvent_Callback cb) { qcalendarwidget_dragleaveevent_callback = cb; }
    void setQCalendarWidget_DropEvent_Callback(QCalendarWidget_DropEvent_Callback cb) { qcalendarwidget_dropevent_callback = cb; }
    void setQCalendarWidget_ShowEvent_Callback(QCalendarWidget_ShowEvent_Callback cb) { qcalendarwidget_showevent_callback = cb; }
    void setQCalendarWidget_HideEvent_Callback(QCalendarWidget_HideEvent_Callback cb) { qcalendarwidget_hideevent_callback = cb; }
    void setQCalendarWidget_NativeEvent_Callback(QCalendarWidget_NativeEvent_Callback cb) { qcalendarwidget_nativeevent_callback = cb; }
    void setQCalendarWidget_ChangeEvent_Callback(QCalendarWidget_ChangeEvent_Callback cb) { qcalendarwidget_changeevent_callback = cb; }
    void setQCalendarWidget_Metric_Callback(QCalendarWidget_Metric_Callback cb) { qcalendarwidget_metric_callback = cb; }
    void setQCalendarWidget_InitPainter_Callback(QCalendarWidget_InitPainter_Callback cb) { qcalendarwidget_initpainter_callback = cb; }
    void setQCalendarWidget_Redirected_Callback(QCalendarWidget_Redirected_Callback cb) { qcalendarwidget_redirected_callback = cb; }
    void setQCalendarWidget_SharedPainter_Callback(QCalendarWidget_SharedPainter_Callback cb) { qcalendarwidget_sharedpainter_callback = cb; }
    void setQCalendarWidget_InputMethodEvent_Callback(QCalendarWidget_InputMethodEvent_Callback cb) { qcalendarwidget_inputmethodevent_callback = cb; }
    void setQCalendarWidget_InputMethodQuery_Callback(QCalendarWidget_InputMethodQuery_Callback cb) { qcalendarwidget_inputmethodquery_callback = cb; }
    void setQCalendarWidget_FocusNextPrevChild_Callback(QCalendarWidget_FocusNextPrevChild_Callback cb) { qcalendarwidget_focusnextprevchild_callback = cb; }
    void setQCalendarWidget_TimerEvent_Callback(QCalendarWidget_TimerEvent_Callback cb) { qcalendarwidget_timerevent_callback = cb; }
    void setQCalendarWidget_ChildEvent_Callback(QCalendarWidget_ChildEvent_Callback cb) { qcalendarwidget_childevent_callback = cb; }
    void setQCalendarWidget_CustomEvent_Callback(QCalendarWidget_CustomEvent_Callback cb) { qcalendarwidget_customevent_callback = cb; }
    void setQCalendarWidget_ConnectNotify_Callback(QCalendarWidget_ConnectNotify_Callback cb) { qcalendarwidget_connectnotify_callback = cb; }
    void setQCalendarWidget_DisconnectNotify_Callback(QCalendarWidget_DisconnectNotify_Callback cb) { qcalendarwidget_disconnectnotify_callback = cb; }
    void setQCalendarWidget_UpdateCell_Callback(QCalendarWidget_UpdateCell_Callback cb) { qcalendarwidget_updatecell_callback = cb; }
    void setQCalendarWidget_UpdateCells_Callback(QCalendarWidget_UpdateCells_Callback cb) { qcalendarwidget_updatecells_callback = cb; }
    void setQCalendarWidget_UpdateMicroFocus_Callback(QCalendarWidget_UpdateMicroFocus_Callback cb) { qcalendarwidget_updatemicrofocus_callback = cb; }
    void setQCalendarWidget_Create_Callback(QCalendarWidget_Create_Callback cb) { qcalendarwidget_create_callback = cb; }
    void setQCalendarWidget_Destroy_Callback(QCalendarWidget_Destroy_Callback cb) { qcalendarwidget_destroy_callback = cb; }
    void setQCalendarWidget_FocusNextChild_Callback(QCalendarWidget_FocusNextChild_Callback cb) { qcalendarwidget_focusnextchild_callback = cb; }
    void setQCalendarWidget_FocusPreviousChild_Callback(QCalendarWidget_FocusPreviousChild_Callback cb) { qcalendarwidget_focuspreviouschild_callback = cb; }
    void setQCalendarWidget_Sender_Callback(QCalendarWidget_Sender_Callback cb) { qcalendarwidget_sender_callback = cb; }
    void setQCalendarWidget_SenderSignalIndex_Callback(QCalendarWidget_SenderSignalIndex_Callback cb) { qcalendarwidget_sendersignalindex_callback = cb; }
    void setQCalendarWidget_Receivers_Callback(QCalendarWidget_Receivers_Callback cb) { qcalendarwidget_receivers_callback = cb; }
    void setQCalendarWidget_IsSignalConnected_Callback(QCalendarWidget_IsSignalConnected_Callback cb) { qcalendarwidget_issignalconnected_callback = cb; }

    // Base flag setters
    void setQCalendarWidget_Metacall_IsBase(bool value) const { qcalendarwidget_metacall_isbase = value; }
    void setQCalendarWidget_SizeHint_IsBase(bool value) const { qcalendarwidget_sizehint_isbase = value; }
    void setQCalendarWidget_MinimumSizeHint_IsBase(bool value) const { qcalendarwidget_minimumsizehint_isbase = value; }
    void setQCalendarWidget_Event_IsBase(bool value) const { qcalendarwidget_event_isbase = value; }
    void setQCalendarWidget_EventFilter_IsBase(bool value) const { qcalendarwidget_eventfilter_isbase = value; }
    void setQCalendarWidget_MousePressEvent_IsBase(bool value) const { qcalendarwidget_mousepressevent_isbase = value; }
    void setQCalendarWidget_ResizeEvent_IsBase(bool value) const { qcalendarwidget_resizeevent_isbase = value; }
    void setQCalendarWidget_KeyPressEvent_IsBase(bool value) const { qcalendarwidget_keypressevent_isbase = value; }
    void setQCalendarWidget_PaintCell_IsBase(bool value) const { qcalendarwidget_paintcell_isbase = value; }
    void setQCalendarWidget_DevType_IsBase(bool value) const { qcalendarwidget_devtype_isbase = value; }
    void setQCalendarWidget_SetVisible_IsBase(bool value) const { qcalendarwidget_setvisible_isbase = value; }
    void setQCalendarWidget_HeightForWidth_IsBase(bool value) const { qcalendarwidget_heightforwidth_isbase = value; }
    void setQCalendarWidget_HasHeightForWidth_IsBase(bool value) const { qcalendarwidget_hasheightforwidth_isbase = value; }
    void setQCalendarWidget_PaintEngine_IsBase(bool value) const { qcalendarwidget_paintengine_isbase = value; }
    void setQCalendarWidget_MouseReleaseEvent_IsBase(bool value) const { qcalendarwidget_mousereleaseevent_isbase = value; }
    void setQCalendarWidget_MouseDoubleClickEvent_IsBase(bool value) const { qcalendarwidget_mousedoubleclickevent_isbase = value; }
    void setQCalendarWidget_MouseMoveEvent_IsBase(bool value) const { qcalendarwidget_mousemoveevent_isbase = value; }
    void setQCalendarWidget_WheelEvent_IsBase(bool value) const { qcalendarwidget_wheelevent_isbase = value; }
    void setQCalendarWidget_KeyReleaseEvent_IsBase(bool value) const { qcalendarwidget_keyreleaseevent_isbase = value; }
    void setQCalendarWidget_FocusInEvent_IsBase(bool value) const { qcalendarwidget_focusinevent_isbase = value; }
    void setQCalendarWidget_FocusOutEvent_IsBase(bool value) const { qcalendarwidget_focusoutevent_isbase = value; }
    void setQCalendarWidget_EnterEvent_IsBase(bool value) const { qcalendarwidget_enterevent_isbase = value; }
    void setQCalendarWidget_LeaveEvent_IsBase(bool value) const { qcalendarwidget_leaveevent_isbase = value; }
    void setQCalendarWidget_PaintEvent_IsBase(bool value) const { qcalendarwidget_paintevent_isbase = value; }
    void setQCalendarWidget_MoveEvent_IsBase(bool value) const { qcalendarwidget_moveevent_isbase = value; }
    void setQCalendarWidget_CloseEvent_IsBase(bool value) const { qcalendarwidget_closeevent_isbase = value; }
    void setQCalendarWidget_ContextMenuEvent_IsBase(bool value) const { qcalendarwidget_contextmenuevent_isbase = value; }
    void setQCalendarWidget_TabletEvent_IsBase(bool value) const { qcalendarwidget_tabletevent_isbase = value; }
    void setQCalendarWidget_ActionEvent_IsBase(bool value) const { qcalendarwidget_actionevent_isbase = value; }
    void setQCalendarWidget_DragEnterEvent_IsBase(bool value) const { qcalendarwidget_dragenterevent_isbase = value; }
    void setQCalendarWidget_DragMoveEvent_IsBase(bool value) const { qcalendarwidget_dragmoveevent_isbase = value; }
    void setQCalendarWidget_DragLeaveEvent_IsBase(bool value) const { qcalendarwidget_dragleaveevent_isbase = value; }
    void setQCalendarWidget_DropEvent_IsBase(bool value) const { qcalendarwidget_dropevent_isbase = value; }
    void setQCalendarWidget_ShowEvent_IsBase(bool value) const { qcalendarwidget_showevent_isbase = value; }
    void setQCalendarWidget_HideEvent_IsBase(bool value) const { qcalendarwidget_hideevent_isbase = value; }
    void setQCalendarWidget_NativeEvent_IsBase(bool value) const { qcalendarwidget_nativeevent_isbase = value; }
    void setQCalendarWidget_ChangeEvent_IsBase(bool value) const { qcalendarwidget_changeevent_isbase = value; }
    void setQCalendarWidget_Metric_IsBase(bool value) const { qcalendarwidget_metric_isbase = value; }
    void setQCalendarWidget_InitPainter_IsBase(bool value) const { qcalendarwidget_initpainter_isbase = value; }
    void setQCalendarWidget_Redirected_IsBase(bool value) const { qcalendarwidget_redirected_isbase = value; }
    void setQCalendarWidget_SharedPainter_IsBase(bool value) const { qcalendarwidget_sharedpainter_isbase = value; }
    void setQCalendarWidget_InputMethodEvent_IsBase(bool value) const { qcalendarwidget_inputmethodevent_isbase = value; }
    void setQCalendarWidget_InputMethodQuery_IsBase(bool value) const { qcalendarwidget_inputmethodquery_isbase = value; }
    void setQCalendarWidget_FocusNextPrevChild_IsBase(bool value) const { qcalendarwidget_focusnextprevchild_isbase = value; }
    void setQCalendarWidget_TimerEvent_IsBase(bool value) const { qcalendarwidget_timerevent_isbase = value; }
    void setQCalendarWidget_ChildEvent_IsBase(bool value) const { qcalendarwidget_childevent_isbase = value; }
    void setQCalendarWidget_CustomEvent_IsBase(bool value) const { qcalendarwidget_customevent_isbase = value; }
    void setQCalendarWidget_ConnectNotify_IsBase(bool value) const { qcalendarwidget_connectnotify_isbase = value; }
    void setQCalendarWidget_DisconnectNotify_IsBase(bool value) const { qcalendarwidget_disconnectnotify_isbase = value; }
    void setQCalendarWidget_UpdateCell_IsBase(bool value) const { qcalendarwidget_updatecell_isbase = value; }
    void setQCalendarWidget_UpdateCells_IsBase(bool value) const { qcalendarwidget_updatecells_isbase = value; }
    void setQCalendarWidget_UpdateMicroFocus_IsBase(bool value) const { qcalendarwidget_updatemicrofocus_isbase = value; }
    void setQCalendarWidget_Create_IsBase(bool value) const { qcalendarwidget_create_isbase = value; }
    void setQCalendarWidget_Destroy_IsBase(bool value) const { qcalendarwidget_destroy_isbase = value; }
    void setQCalendarWidget_FocusNextChild_IsBase(bool value) const { qcalendarwidget_focusnextchild_isbase = value; }
    void setQCalendarWidget_FocusPreviousChild_IsBase(bool value) const { qcalendarwidget_focuspreviouschild_isbase = value; }
    void setQCalendarWidget_Sender_IsBase(bool value) const { qcalendarwidget_sender_isbase = value; }
    void setQCalendarWidget_SenderSignalIndex_IsBase(bool value) const { qcalendarwidget_sendersignalindex_isbase = value; }
    void setQCalendarWidget_Receivers_IsBase(bool value) const { qcalendarwidget_receivers_isbase = value; }
    void setQCalendarWidget_IsSignalConnected_IsBase(bool value) const { qcalendarwidget_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qcalendarwidget_metacall_isbase) {
            qcalendarwidget_metacall_isbase = false;
            return QCalendarWidget::qt_metacall(param1, param2, param3);
        } else if (qcalendarwidget_metacall_callback != nullptr) {
            return qcalendarwidget_metacall_callback(this, param1, param2, param3);
        } else {
            return QCalendarWidget::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qcalendarwidget_sizehint_isbase) {
            qcalendarwidget_sizehint_isbase = false;
            return QCalendarWidget::sizeHint();
        } else if (qcalendarwidget_sizehint_callback != nullptr) {
            return qcalendarwidget_sizehint_callback();
        } else {
            return QCalendarWidget::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qcalendarwidget_minimumsizehint_isbase) {
            qcalendarwidget_minimumsizehint_isbase = false;
            return QCalendarWidget::minimumSizeHint();
        } else if (qcalendarwidget_minimumsizehint_callback != nullptr) {
            return qcalendarwidget_minimumsizehint_callback();
        } else {
            return QCalendarWidget::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qcalendarwidget_event_isbase) {
            qcalendarwidget_event_isbase = false;
            return QCalendarWidget::event(event);
        } else if (qcalendarwidget_event_callback != nullptr) {
            return qcalendarwidget_event_callback(this, event);
        } else {
            return QCalendarWidget::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qcalendarwidget_eventfilter_isbase) {
            qcalendarwidget_eventfilter_isbase = false;
            return QCalendarWidget::eventFilter(watched, event);
        } else if (qcalendarwidget_eventfilter_callback != nullptr) {
            return qcalendarwidget_eventfilter_callback(this, watched, event);
        } else {
            return QCalendarWidget::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qcalendarwidget_mousepressevent_isbase) {
            qcalendarwidget_mousepressevent_isbase = false;
            QCalendarWidget::mousePressEvent(event);
        } else if (qcalendarwidget_mousepressevent_callback != nullptr) {
            qcalendarwidget_mousepressevent_callback(this, event);
        } else {
            QCalendarWidget::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qcalendarwidget_resizeevent_isbase) {
            qcalendarwidget_resizeevent_isbase = false;
            QCalendarWidget::resizeEvent(event);
        } else if (qcalendarwidget_resizeevent_callback != nullptr) {
            qcalendarwidget_resizeevent_callback(this, event);
        } else {
            QCalendarWidget::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qcalendarwidget_keypressevent_isbase) {
            qcalendarwidget_keypressevent_isbase = false;
            QCalendarWidget::keyPressEvent(event);
        } else if (qcalendarwidget_keypressevent_callback != nullptr) {
            qcalendarwidget_keypressevent_callback(this, event);
        } else {
            QCalendarWidget::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintCell(QPainter* painter, const QRect& rect, QDate date) const override {
        if (qcalendarwidget_paintcell_isbase) {
            qcalendarwidget_paintcell_isbase = false;
            QCalendarWidget::paintCell(painter, rect, date);
        } else if (qcalendarwidget_paintcell_callback != nullptr) {
            qcalendarwidget_paintcell_callback(this, painter, rect, date);
        } else {
            QCalendarWidget::paintCell(painter, rect, date);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qcalendarwidget_devtype_isbase) {
            qcalendarwidget_devtype_isbase = false;
            return QCalendarWidget::devType();
        } else if (qcalendarwidget_devtype_callback != nullptr) {
            return qcalendarwidget_devtype_callback();
        } else {
            return QCalendarWidget::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qcalendarwidget_setvisible_isbase) {
            qcalendarwidget_setvisible_isbase = false;
            QCalendarWidget::setVisible(visible);
        } else if (qcalendarwidget_setvisible_callback != nullptr) {
            qcalendarwidget_setvisible_callback(this, visible);
        } else {
            QCalendarWidget::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qcalendarwidget_heightforwidth_isbase) {
            qcalendarwidget_heightforwidth_isbase = false;
            return QCalendarWidget::heightForWidth(param1);
        } else if (qcalendarwidget_heightforwidth_callback != nullptr) {
            return qcalendarwidget_heightforwidth_callback(this, param1);
        } else {
            return QCalendarWidget::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qcalendarwidget_hasheightforwidth_isbase) {
            qcalendarwidget_hasheightforwidth_isbase = false;
            return QCalendarWidget::hasHeightForWidth();
        } else if (qcalendarwidget_hasheightforwidth_callback != nullptr) {
            return qcalendarwidget_hasheightforwidth_callback();
        } else {
            return QCalendarWidget::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qcalendarwidget_paintengine_isbase) {
            qcalendarwidget_paintengine_isbase = false;
            return QCalendarWidget::paintEngine();
        } else if (qcalendarwidget_paintengine_callback != nullptr) {
            return qcalendarwidget_paintengine_callback();
        } else {
            return QCalendarWidget::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qcalendarwidget_mousereleaseevent_isbase) {
            qcalendarwidget_mousereleaseevent_isbase = false;
            QCalendarWidget::mouseReleaseEvent(event);
        } else if (qcalendarwidget_mousereleaseevent_callback != nullptr) {
            qcalendarwidget_mousereleaseevent_callback(this, event);
        } else {
            QCalendarWidget::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qcalendarwidget_mousedoubleclickevent_isbase) {
            qcalendarwidget_mousedoubleclickevent_isbase = false;
            QCalendarWidget::mouseDoubleClickEvent(event);
        } else if (qcalendarwidget_mousedoubleclickevent_callback != nullptr) {
            qcalendarwidget_mousedoubleclickevent_callback(this, event);
        } else {
            QCalendarWidget::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qcalendarwidget_mousemoveevent_isbase) {
            qcalendarwidget_mousemoveevent_isbase = false;
            QCalendarWidget::mouseMoveEvent(event);
        } else if (qcalendarwidget_mousemoveevent_callback != nullptr) {
            qcalendarwidget_mousemoveevent_callback(this, event);
        } else {
            QCalendarWidget::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qcalendarwidget_wheelevent_isbase) {
            qcalendarwidget_wheelevent_isbase = false;
            QCalendarWidget::wheelEvent(event);
        } else if (qcalendarwidget_wheelevent_callback != nullptr) {
            qcalendarwidget_wheelevent_callback(this, event);
        } else {
            QCalendarWidget::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qcalendarwidget_keyreleaseevent_isbase) {
            qcalendarwidget_keyreleaseevent_isbase = false;
            QCalendarWidget::keyReleaseEvent(event);
        } else if (qcalendarwidget_keyreleaseevent_callback != nullptr) {
            qcalendarwidget_keyreleaseevent_callback(this, event);
        } else {
            QCalendarWidget::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qcalendarwidget_focusinevent_isbase) {
            qcalendarwidget_focusinevent_isbase = false;
            QCalendarWidget::focusInEvent(event);
        } else if (qcalendarwidget_focusinevent_callback != nullptr) {
            qcalendarwidget_focusinevent_callback(this, event);
        } else {
            QCalendarWidget::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qcalendarwidget_focusoutevent_isbase) {
            qcalendarwidget_focusoutevent_isbase = false;
            QCalendarWidget::focusOutEvent(event);
        } else if (qcalendarwidget_focusoutevent_callback != nullptr) {
            qcalendarwidget_focusoutevent_callback(this, event);
        } else {
            QCalendarWidget::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qcalendarwidget_enterevent_isbase) {
            qcalendarwidget_enterevent_isbase = false;
            QCalendarWidget::enterEvent(event);
        } else if (qcalendarwidget_enterevent_callback != nullptr) {
            qcalendarwidget_enterevent_callback(this, event);
        } else {
            QCalendarWidget::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qcalendarwidget_leaveevent_isbase) {
            qcalendarwidget_leaveevent_isbase = false;
            QCalendarWidget::leaveEvent(event);
        } else if (qcalendarwidget_leaveevent_callback != nullptr) {
            qcalendarwidget_leaveevent_callback(this, event);
        } else {
            QCalendarWidget::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qcalendarwidget_paintevent_isbase) {
            qcalendarwidget_paintevent_isbase = false;
            QCalendarWidget::paintEvent(event);
        } else if (qcalendarwidget_paintevent_callback != nullptr) {
            qcalendarwidget_paintevent_callback(this, event);
        } else {
            QCalendarWidget::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qcalendarwidget_moveevent_isbase) {
            qcalendarwidget_moveevent_isbase = false;
            QCalendarWidget::moveEvent(event);
        } else if (qcalendarwidget_moveevent_callback != nullptr) {
            qcalendarwidget_moveevent_callback(this, event);
        } else {
            QCalendarWidget::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qcalendarwidget_closeevent_isbase) {
            qcalendarwidget_closeevent_isbase = false;
            QCalendarWidget::closeEvent(event);
        } else if (qcalendarwidget_closeevent_callback != nullptr) {
            qcalendarwidget_closeevent_callback(this, event);
        } else {
            QCalendarWidget::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qcalendarwidget_contextmenuevent_isbase) {
            qcalendarwidget_contextmenuevent_isbase = false;
            QCalendarWidget::contextMenuEvent(event);
        } else if (qcalendarwidget_contextmenuevent_callback != nullptr) {
            qcalendarwidget_contextmenuevent_callback(this, event);
        } else {
            QCalendarWidget::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qcalendarwidget_tabletevent_isbase) {
            qcalendarwidget_tabletevent_isbase = false;
            QCalendarWidget::tabletEvent(event);
        } else if (qcalendarwidget_tabletevent_callback != nullptr) {
            qcalendarwidget_tabletevent_callback(this, event);
        } else {
            QCalendarWidget::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qcalendarwidget_actionevent_isbase) {
            qcalendarwidget_actionevent_isbase = false;
            QCalendarWidget::actionEvent(event);
        } else if (qcalendarwidget_actionevent_callback != nullptr) {
            qcalendarwidget_actionevent_callback(this, event);
        } else {
            QCalendarWidget::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qcalendarwidget_dragenterevent_isbase) {
            qcalendarwidget_dragenterevent_isbase = false;
            QCalendarWidget::dragEnterEvent(event);
        } else if (qcalendarwidget_dragenterevent_callback != nullptr) {
            qcalendarwidget_dragenterevent_callback(this, event);
        } else {
            QCalendarWidget::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qcalendarwidget_dragmoveevent_isbase) {
            qcalendarwidget_dragmoveevent_isbase = false;
            QCalendarWidget::dragMoveEvent(event);
        } else if (qcalendarwidget_dragmoveevent_callback != nullptr) {
            qcalendarwidget_dragmoveevent_callback(this, event);
        } else {
            QCalendarWidget::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qcalendarwidget_dragleaveevent_isbase) {
            qcalendarwidget_dragleaveevent_isbase = false;
            QCalendarWidget::dragLeaveEvent(event);
        } else if (qcalendarwidget_dragleaveevent_callback != nullptr) {
            qcalendarwidget_dragleaveevent_callback(this, event);
        } else {
            QCalendarWidget::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qcalendarwidget_dropevent_isbase) {
            qcalendarwidget_dropevent_isbase = false;
            QCalendarWidget::dropEvent(event);
        } else if (qcalendarwidget_dropevent_callback != nullptr) {
            qcalendarwidget_dropevent_callback(this, event);
        } else {
            QCalendarWidget::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qcalendarwidget_showevent_isbase) {
            qcalendarwidget_showevent_isbase = false;
            QCalendarWidget::showEvent(event);
        } else if (qcalendarwidget_showevent_callback != nullptr) {
            qcalendarwidget_showevent_callback(this, event);
        } else {
            QCalendarWidget::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qcalendarwidget_hideevent_isbase) {
            qcalendarwidget_hideevent_isbase = false;
            QCalendarWidget::hideEvent(event);
        } else if (qcalendarwidget_hideevent_callback != nullptr) {
            qcalendarwidget_hideevent_callback(this, event);
        } else {
            QCalendarWidget::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qcalendarwidget_nativeevent_isbase) {
            qcalendarwidget_nativeevent_isbase = false;
            return QCalendarWidget::nativeEvent(eventType, message, result);
        } else if (qcalendarwidget_nativeevent_callback != nullptr) {
            return qcalendarwidget_nativeevent_callback(this, eventType, message, result);
        } else {
            return QCalendarWidget::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qcalendarwidget_changeevent_isbase) {
            qcalendarwidget_changeevent_isbase = false;
            QCalendarWidget::changeEvent(param1);
        } else if (qcalendarwidget_changeevent_callback != nullptr) {
            qcalendarwidget_changeevent_callback(this, param1);
        } else {
            QCalendarWidget::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qcalendarwidget_metric_isbase) {
            qcalendarwidget_metric_isbase = false;
            return QCalendarWidget::metric(param1);
        } else if (qcalendarwidget_metric_callback != nullptr) {
            return qcalendarwidget_metric_callback(this, param1);
        } else {
            return QCalendarWidget::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qcalendarwidget_initpainter_isbase) {
            qcalendarwidget_initpainter_isbase = false;
            QCalendarWidget::initPainter(painter);
        } else if (qcalendarwidget_initpainter_callback != nullptr) {
            qcalendarwidget_initpainter_callback(this, painter);
        } else {
            QCalendarWidget::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qcalendarwidget_redirected_isbase) {
            qcalendarwidget_redirected_isbase = false;
            return QCalendarWidget::redirected(offset);
        } else if (qcalendarwidget_redirected_callback != nullptr) {
            return qcalendarwidget_redirected_callback(this, offset);
        } else {
            return QCalendarWidget::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qcalendarwidget_sharedpainter_isbase) {
            qcalendarwidget_sharedpainter_isbase = false;
            return QCalendarWidget::sharedPainter();
        } else if (qcalendarwidget_sharedpainter_callback != nullptr) {
            return qcalendarwidget_sharedpainter_callback();
        } else {
            return QCalendarWidget::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qcalendarwidget_inputmethodevent_isbase) {
            qcalendarwidget_inputmethodevent_isbase = false;
            QCalendarWidget::inputMethodEvent(param1);
        } else if (qcalendarwidget_inputmethodevent_callback != nullptr) {
            qcalendarwidget_inputmethodevent_callback(this, param1);
        } else {
            QCalendarWidget::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qcalendarwidget_inputmethodquery_isbase) {
            qcalendarwidget_inputmethodquery_isbase = false;
            return QCalendarWidget::inputMethodQuery(param1);
        } else if (qcalendarwidget_inputmethodquery_callback != nullptr) {
            return qcalendarwidget_inputmethodquery_callback(this, param1);
        } else {
            return QCalendarWidget::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qcalendarwidget_focusnextprevchild_isbase) {
            qcalendarwidget_focusnextprevchild_isbase = false;
            return QCalendarWidget::focusNextPrevChild(next);
        } else if (qcalendarwidget_focusnextprevchild_callback != nullptr) {
            return qcalendarwidget_focusnextprevchild_callback(this, next);
        } else {
            return QCalendarWidget::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qcalendarwidget_timerevent_isbase) {
            qcalendarwidget_timerevent_isbase = false;
            QCalendarWidget::timerEvent(event);
        } else if (qcalendarwidget_timerevent_callback != nullptr) {
            qcalendarwidget_timerevent_callback(this, event);
        } else {
            QCalendarWidget::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qcalendarwidget_childevent_isbase) {
            qcalendarwidget_childevent_isbase = false;
            QCalendarWidget::childEvent(event);
        } else if (qcalendarwidget_childevent_callback != nullptr) {
            qcalendarwidget_childevent_callback(this, event);
        } else {
            QCalendarWidget::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qcalendarwidget_customevent_isbase) {
            qcalendarwidget_customevent_isbase = false;
            QCalendarWidget::customEvent(event);
        } else if (qcalendarwidget_customevent_callback != nullptr) {
            qcalendarwidget_customevent_callback(this, event);
        } else {
            QCalendarWidget::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qcalendarwidget_connectnotify_isbase) {
            qcalendarwidget_connectnotify_isbase = false;
            QCalendarWidget::connectNotify(signal);
        } else if (qcalendarwidget_connectnotify_callback != nullptr) {
            qcalendarwidget_connectnotify_callback(this, signal);
        } else {
            QCalendarWidget::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qcalendarwidget_disconnectnotify_isbase) {
            qcalendarwidget_disconnectnotify_isbase = false;
            QCalendarWidget::disconnectNotify(signal);
        } else if (qcalendarwidget_disconnectnotify_callback != nullptr) {
            qcalendarwidget_disconnectnotify_callback(this, signal);
        } else {
            QCalendarWidget::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateCell(QDate date) {
        if (qcalendarwidget_updatecell_isbase) {
            qcalendarwidget_updatecell_isbase = false;
            QCalendarWidget::updateCell(date);
        } else if (qcalendarwidget_updatecell_callback != nullptr) {
            qcalendarwidget_updatecell_callback(this, date);
        } else {
            QCalendarWidget::updateCell(date);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateCells() {
        if (qcalendarwidget_updatecells_isbase) {
            qcalendarwidget_updatecells_isbase = false;
            QCalendarWidget::updateCells();
        } else if (qcalendarwidget_updatecells_callback != nullptr) {
            qcalendarwidget_updatecells_callback();
        } else {
            QCalendarWidget::updateCells();
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qcalendarwidget_updatemicrofocus_isbase) {
            qcalendarwidget_updatemicrofocus_isbase = false;
            QCalendarWidget::updateMicroFocus();
        } else if (qcalendarwidget_updatemicrofocus_callback != nullptr) {
            qcalendarwidget_updatemicrofocus_callback();
        } else {
            QCalendarWidget::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qcalendarwidget_create_isbase) {
            qcalendarwidget_create_isbase = false;
            QCalendarWidget::create();
        } else if (qcalendarwidget_create_callback != nullptr) {
            qcalendarwidget_create_callback();
        } else {
            QCalendarWidget::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qcalendarwidget_destroy_isbase) {
            qcalendarwidget_destroy_isbase = false;
            QCalendarWidget::destroy();
        } else if (qcalendarwidget_destroy_callback != nullptr) {
            qcalendarwidget_destroy_callback();
        } else {
            QCalendarWidget::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qcalendarwidget_focusnextchild_isbase) {
            qcalendarwidget_focusnextchild_isbase = false;
            return QCalendarWidget::focusNextChild();
        } else if (qcalendarwidget_focusnextchild_callback != nullptr) {
            return qcalendarwidget_focusnextchild_callback();
        } else {
            return QCalendarWidget::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qcalendarwidget_focuspreviouschild_isbase) {
            qcalendarwidget_focuspreviouschild_isbase = false;
            return QCalendarWidget::focusPreviousChild();
        } else if (qcalendarwidget_focuspreviouschild_callback != nullptr) {
            return qcalendarwidget_focuspreviouschild_callback();
        } else {
            return QCalendarWidget::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qcalendarwidget_sender_isbase) {
            qcalendarwidget_sender_isbase = false;
            return QCalendarWidget::sender();
        } else if (qcalendarwidget_sender_callback != nullptr) {
            return qcalendarwidget_sender_callback();
        } else {
            return QCalendarWidget::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qcalendarwidget_sendersignalindex_isbase) {
            qcalendarwidget_sendersignalindex_isbase = false;
            return QCalendarWidget::senderSignalIndex();
        } else if (qcalendarwidget_sendersignalindex_callback != nullptr) {
            return qcalendarwidget_sendersignalindex_callback();
        } else {
            return QCalendarWidget::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qcalendarwidget_receivers_isbase) {
            qcalendarwidget_receivers_isbase = false;
            return QCalendarWidget::receivers(signal);
        } else if (qcalendarwidget_receivers_callback != nullptr) {
            return qcalendarwidget_receivers_callback(this, signal);
        } else {
            return QCalendarWidget::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qcalendarwidget_issignalconnected_isbase) {
            qcalendarwidget_issignalconnected_isbase = false;
            return QCalendarWidget::isSignalConnected(signal);
        } else if (qcalendarwidget_issignalconnected_callback != nullptr) {
            return qcalendarwidget_issignalconnected_callback(this, signal);
        } else {
            return QCalendarWidget::isSignalConnected(signal);
        }
    }
};

#endif
