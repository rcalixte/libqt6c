#pragma once
#ifndef SRC_PRINTSUPPORTC_LIBVIRTUALQPRINTPREVIEWWIDGET_H
#define SRC_PRINTSUPPORTC_LIBVIRTUALQPRINTPREVIEWWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QPrintPreviewWidget so that we can call protected methods
class VirtualQPrintPreviewWidget : public QPrintPreviewWidget {

  public:
    // Virtual class public types (including callbacks)
    using QPrintPreviewWidget_Metacall_Callback = int (*)(QPrintPreviewWidget*, QMetaObject::Call, int, void**);
    using QPrintPreviewWidget_SetVisible_Callback = void (*)(QPrintPreviewWidget*, bool);
    using QPrintPreviewWidget_DevType_Callback = int (*)();
    using QPrintPreviewWidget_SizeHint_Callback = QSize (*)();
    using QPrintPreviewWidget_MinimumSizeHint_Callback = QSize (*)();
    using QPrintPreviewWidget_HeightForWidth_Callback = int (*)(const QPrintPreviewWidget*, int);
    using QPrintPreviewWidget_HasHeightForWidth_Callback = bool (*)();
    using QPrintPreviewWidget_PaintEngine_Callback = QPaintEngine* (*)();
    using QPrintPreviewWidget_Event_Callback = bool (*)(QPrintPreviewWidget*, QEvent*);
    using QPrintPreviewWidget_MousePressEvent_Callback = void (*)(QPrintPreviewWidget*, QMouseEvent*);
    using QPrintPreviewWidget_MouseReleaseEvent_Callback = void (*)(QPrintPreviewWidget*, QMouseEvent*);
    using QPrintPreviewWidget_MouseDoubleClickEvent_Callback = void (*)(QPrintPreviewWidget*, QMouseEvent*);
    using QPrintPreviewWidget_MouseMoveEvent_Callback = void (*)(QPrintPreviewWidget*, QMouseEvent*);
    using QPrintPreviewWidget_WheelEvent_Callback = void (*)(QPrintPreviewWidget*, QWheelEvent*);
    using QPrintPreviewWidget_KeyPressEvent_Callback = void (*)(QPrintPreviewWidget*, QKeyEvent*);
    using QPrintPreviewWidget_KeyReleaseEvent_Callback = void (*)(QPrintPreviewWidget*, QKeyEvent*);
    using QPrintPreviewWidget_FocusInEvent_Callback = void (*)(QPrintPreviewWidget*, QFocusEvent*);
    using QPrintPreviewWidget_FocusOutEvent_Callback = void (*)(QPrintPreviewWidget*, QFocusEvent*);
    using QPrintPreviewWidget_EnterEvent_Callback = void (*)(QPrintPreviewWidget*, QEnterEvent*);
    using QPrintPreviewWidget_LeaveEvent_Callback = void (*)(QPrintPreviewWidget*, QEvent*);
    using QPrintPreviewWidget_PaintEvent_Callback = void (*)(QPrintPreviewWidget*, QPaintEvent*);
    using QPrintPreviewWidget_MoveEvent_Callback = void (*)(QPrintPreviewWidget*, QMoveEvent*);
    using QPrintPreviewWidget_ResizeEvent_Callback = void (*)(QPrintPreviewWidget*, QResizeEvent*);
    using QPrintPreviewWidget_CloseEvent_Callback = void (*)(QPrintPreviewWidget*, QCloseEvent*);
    using QPrintPreviewWidget_ContextMenuEvent_Callback = void (*)(QPrintPreviewWidget*, QContextMenuEvent*);
    using QPrintPreviewWidget_TabletEvent_Callback = void (*)(QPrintPreviewWidget*, QTabletEvent*);
    using QPrintPreviewWidget_ActionEvent_Callback = void (*)(QPrintPreviewWidget*, QActionEvent*);
    using QPrintPreviewWidget_DragEnterEvent_Callback = void (*)(QPrintPreviewWidget*, QDragEnterEvent*);
    using QPrintPreviewWidget_DragMoveEvent_Callback = void (*)(QPrintPreviewWidget*, QDragMoveEvent*);
    using QPrintPreviewWidget_DragLeaveEvent_Callback = void (*)(QPrintPreviewWidget*, QDragLeaveEvent*);
    using QPrintPreviewWidget_DropEvent_Callback = void (*)(QPrintPreviewWidget*, QDropEvent*);
    using QPrintPreviewWidget_ShowEvent_Callback = void (*)(QPrintPreviewWidget*, QShowEvent*);
    using QPrintPreviewWidget_HideEvent_Callback = void (*)(QPrintPreviewWidget*, QHideEvent*);
    using QPrintPreviewWidget_NativeEvent_Callback = bool (*)(QPrintPreviewWidget*, const QByteArray&, void*, qintptr*);
    using QPrintPreviewWidget_ChangeEvent_Callback = void (*)(QPrintPreviewWidget*, QEvent*);
    using QPrintPreviewWidget_Metric_Callback = int (*)(const QPrintPreviewWidget*, QPaintDevice::PaintDeviceMetric);
    using QPrintPreviewWidget_InitPainter_Callback = void (*)(const QPrintPreviewWidget*, QPainter*);
    using QPrintPreviewWidget_Redirected_Callback = QPaintDevice* (*)(const QPrintPreviewWidget*, QPoint*);
    using QPrintPreviewWidget_SharedPainter_Callback = QPainter* (*)();
    using QPrintPreviewWidget_InputMethodEvent_Callback = void (*)(QPrintPreviewWidget*, QInputMethodEvent*);
    using QPrintPreviewWidget_InputMethodQuery_Callback = QVariant (*)(const QPrintPreviewWidget*, Qt::InputMethodQuery);
    using QPrintPreviewWidget_FocusNextPrevChild_Callback = bool (*)(QPrintPreviewWidget*, bool);
    using QPrintPreviewWidget_EventFilter_Callback = bool (*)(QPrintPreviewWidget*, QObject*, QEvent*);
    using QPrintPreviewWidget_TimerEvent_Callback = void (*)(QPrintPreviewWidget*, QTimerEvent*);
    using QPrintPreviewWidget_ChildEvent_Callback = void (*)(QPrintPreviewWidget*, QChildEvent*);
    using QPrintPreviewWidget_CustomEvent_Callback = void (*)(QPrintPreviewWidget*, QEvent*);
    using QPrintPreviewWidget_ConnectNotify_Callback = void (*)(QPrintPreviewWidget*, const QMetaMethod&);
    using QPrintPreviewWidget_DisconnectNotify_Callback = void (*)(QPrintPreviewWidget*, const QMetaMethod&);
    using QPrintPreviewWidget_UpdateMicroFocus_Callback = void (*)();
    using QPrintPreviewWidget_Create_Callback = void (*)();
    using QPrintPreviewWidget_Destroy_Callback = void (*)();
    using QPrintPreviewWidget_FocusNextChild_Callback = bool (*)();
    using QPrintPreviewWidget_FocusPreviousChild_Callback = bool (*)();
    using QPrintPreviewWidget_Sender_Callback = QObject* (*)();
    using QPrintPreviewWidget_SenderSignalIndex_Callback = int (*)();
    using QPrintPreviewWidget_Receivers_Callback = int (*)(const QPrintPreviewWidget*, const char*);
    using QPrintPreviewWidget_IsSignalConnected_Callback = bool (*)(const QPrintPreviewWidget*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QPrintPreviewWidget_Metacall_Callback qprintpreviewwidget_metacall_callback = nullptr;
    QPrintPreviewWidget_SetVisible_Callback qprintpreviewwidget_setvisible_callback = nullptr;
    QPrintPreviewWidget_DevType_Callback qprintpreviewwidget_devtype_callback = nullptr;
    QPrintPreviewWidget_SizeHint_Callback qprintpreviewwidget_sizehint_callback = nullptr;
    QPrintPreviewWidget_MinimumSizeHint_Callback qprintpreviewwidget_minimumsizehint_callback = nullptr;
    QPrintPreviewWidget_HeightForWidth_Callback qprintpreviewwidget_heightforwidth_callback = nullptr;
    QPrintPreviewWidget_HasHeightForWidth_Callback qprintpreviewwidget_hasheightforwidth_callback = nullptr;
    QPrintPreviewWidget_PaintEngine_Callback qprintpreviewwidget_paintengine_callback = nullptr;
    QPrintPreviewWidget_Event_Callback qprintpreviewwidget_event_callback = nullptr;
    QPrintPreviewWidget_MousePressEvent_Callback qprintpreviewwidget_mousepressevent_callback = nullptr;
    QPrintPreviewWidget_MouseReleaseEvent_Callback qprintpreviewwidget_mousereleaseevent_callback = nullptr;
    QPrintPreviewWidget_MouseDoubleClickEvent_Callback qprintpreviewwidget_mousedoubleclickevent_callback = nullptr;
    QPrintPreviewWidget_MouseMoveEvent_Callback qprintpreviewwidget_mousemoveevent_callback = nullptr;
    QPrintPreviewWidget_WheelEvent_Callback qprintpreviewwidget_wheelevent_callback = nullptr;
    QPrintPreviewWidget_KeyPressEvent_Callback qprintpreviewwidget_keypressevent_callback = nullptr;
    QPrintPreviewWidget_KeyReleaseEvent_Callback qprintpreviewwidget_keyreleaseevent_callback = nullptr;
    QPrintPreviewWidget_FocusInEvent_Callback qprintpreviewwidget_focusinevent_callback = nullptr;
    QPrintPreviewWidget_FocusOutEvent_Callback qprintpreviewwidget_focusoutevent_callback = nullptr;
    QPrintPreviewWidget_EnterEvent_Callback qprintpreviewwidget_enterevent_callback = nullptr;
    QPrintPreviewWidget_LeaveEvent_Callback qprintpreviewwidget_leaveevent_callback = nullptr;
    QPrintPreviewWidget_PaintEvent_Callback qprintpreviewwidget_paintevent_callback = nullptr;
    QPrintPreviewWidget_MoveEvent_Callback qprintpreviewwidget_moveevent_callback = nullptr;
    QPrintPreviewWidget_ResizeEvent_Callback qprintpreviewwidget_resizeevent_callback = nullptr;
    QPrintPreviewWidget_CloseEvent_Callback qprintpreviewwidget_closeevent_callback = nullptr;
    QPrintPreviewWidget_ContextMenuEvent_Callback qprintpreviewwidget_contextmenuevent_callback = nullptr;
    QPrintPreviewWidget_TabletEvent_Callback qprintpreviewwidget_tabletevent_callback = nullptr;
    QPrintPreviewWidget_ActionEvent_Callback qprintpreviewwidget_actionevent_callback = nullptr;
    QPrintPreviewWidget_DragEnterEvent_Callback qprintpreviewwidget_dragenterevent_callback = nullptr;
    QPrintPreviewWidget_DragMoveEvent_Callback qprintpreviewwidget_dragmoveevent_callback = nullptr;
    QPrintPreviewWidget_DragLeaveEvent_Callback qprintpreviewwidget_dragleaveevent_callback = nullptr;
    QPrintPreviewWidget_DropEvent_Callback qprintpreviewwidget_dropevent_callback = nullptr;
    QPrintPreviewWidget_ShowEvent_Callback qprintpreviewwidget_showevent_callback = nullptr;
    QPrintPreviewWidget_HideEvent_Callback qprintpreviewwidget_hideevent_callback = nullptr;
    QPrintPreviewWidget_NativeEvent_Callback qprintpreviewwidget_nativeevent_callback = nullptr;
    QPrintPreviewWidget_ChangeEvent_Callback qprintpreviewwidget_changeevent_callback = nullptr;
    QPrintPreviewWidget_Metric_Callback qprintpreviewwidget_metric_callback = nullptr;
    QPrintPreviewWidget_InitPainter_Callback qprintpreviewwidget_initpainter_callback = nullptr;
    QPrintPreviewWidget_Redirected_Callback qprintpreviewwidget_redirected_callback = nullptr;
    QPrintPreviewWidget_SharedPainter_Callback qprintpreviewwidget_sharedpainter_callback = nullptr;
    QPrintPreviewWidget_InputMethodEvent_Callback qprintpreviewwidget_inputmethodevent_callback = nullptr;
    QPrintPreviewWidget_InputMethodQuery_Callback qprintpreviewwidget_inputmethodquery_callback = nullptr;
    QPrintPreviewWidget_FocusNextPrevChild_Callback qprintpreviewwidget_focusnextprevchild_callback = nullptr;
    QPrintPreviewWidget_EventFilter_Callback qprintpreviewwidget_eventfilter_callback = nullptr;
    QPrintPreviewWidget_TimerEvent_Callback qprintpreviewwidget_timerevent_callback = nullptr;
    QPrintPreviewWidget_ChildEvent_Callback qprintpreviewwidget_childevent_callback = nullptr;
    QPrintPreviewWidget_CustomEvent_Callback qprintpreviewwidget_customevent_callback = nullptr;
    QPrintPreviewWidget_ConnectNotify_Callback qprintpreviewwidget_connectnotify_callback = nullptr;
    QPrintPreviewWidget_DisconnectNotify_Callback qprintpreviewwidget_disconnectnotify_callback = nullptr;
    QPrintPreviewWidget_UpdateMicroFocus_Callback qprintpreviewwidget_updatemicrofocus_callback = nullptr;
    QPrintPreviewWidget_Create_Callback qprintpreviewwidget_create_callback = nullptr;
    QPrintPreviewWidget_Destroy_Callback qprintpreviewwidget_destroy_callback = nullptr;
    QPrintPreviewWidget_FocusNextChild_Callback qprintpreviewwidget_focusnextchild_callback = nullptr;
    QPrintPreviewWidget_FocusPreviousChild_Callback qprintpreviewwidget_focuspreviouschild_callback = nullptr;
    QPrintPreviewWidget_Sender_Callback qprintpreviewwidget_sender_callback = nullptr;
    QPrintPreviewWidget_SenderSignalIndex_Callback qprintpreviewwidget_sendersignalindex_callback = nullptr;
    QPrintPreviewWidget_Receivers_Callback qprintpreviewwidget_receivers_callback = nullptr;
    QPrintPreviewWidget_IsSignalConnected_Callback qprintpreviewwidget_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qprintpreviewwidget_metacall_isbase = false;
    mutable bool qprintpreviewwidget_setvisible_isbase = false;
    mutable bool qprintpreviewwidget_devtype_isbase = false;
    mutable bool qprintpreviewwidget_sizehint_isbase = false;
    mutable bool qprintpreviewwidget_minimumsizehint_isbase = false;
    mutable bool qprintpreviewwidget_heightforwidth_isbase = false;
    mutable bool qprintpreviewwidget_hasheightforwidth_isbase = false;
    mutable bool qprintpreviewwidget_paintengine_isbase = false;
    mutable bool qprintpreviewwidget_event_isbase = false;
    mutable bool qprintpreviewwidget_mousepressevent_isbase = false;
    mutable bool qprintpreviewwidget_mousereleaseevent_isbase = false;
    mutable bool qprintpreviewwidget_mousedoubleclickevent_isbase = false;
    mutable bool qprintpreviewwidget_mousemoveevent_isbase = false;
    mutable bool qprintpreviewwidget_wheelevent_isbase = false;
    mutable bool qprintpreviewwidget_keypressevent_isbase = false;
    mutable bool qprintpreviewwidget_keyreleaseevent_isbase = false;
    mutable bool qprintpreviewwidget_focusinevent_isbase = false;
    mutable bool qprintpreviewwidget_focusoutevent_isbase = false;
    mutable bool qprintpreviewwidget_enterevent_isbase = false;
    mutable bool qprintpreviewwidget_leaveevent_isbase = false;
    mutable bool qprintpreviewwidget_paintevent_isbase = false;
    mutable bool qprintpreviewwidget_moveevent_isbase = false;
    mutable bool qprintpreviewwidget_resizeevent_isbase = false;
    mutable bool qprintpreviewwidget_closeevent_isbase = false;
    mutable bool qprintpreviewwidget_contextmenuevent_isbase = false;
    mutable bool qprintpreviewwidget_tabletevent_isbase = false;
    mutable bool qprintpreviewwidget_actionevent_isbase = false;
    mutable bool qprintpreviewwidget_dragenterevent_isbase = false;
    mutable bool qprintpreviewwidget_dragmoveevent_isbase = false;
    mutable bool qprintpreviewwidget_dragleaveevent_isbase = false;
    mutable bool qprintpreviewwidget_dropevent_isbase = false;
    mutable bool qprintpreviewwidget_showevent_isbase = false;
    mutable bool qprintpreviewwidget_hideevent_isbase = false;
    mutable bool qprintpreviewwidget_nativeevent_isbase = false;
    mutable bool qprintpreviewwidget_changeevent_isbase = false;
    mutable bool qprintpreviewwidget_metric_isbase = false;
    mutable bool qprintpreviewwidget_initpainter_isbase = false;
    mutable bool qprintpreviewwidget_redirected_isbase = false;
    mutable bool qprintpreviewwidget_sharedpainter_isbase = false;
    mutable bool qprintpreviewwidget_inputmethodevent_isbase = false;
    mutable bool qprintpreviewwidget_inputmethodquery_isbase = false;
    mutable bool qprintpreviewwidget_focusnextprevchild_isbase = false;
    mutable bool qprintpreviewwidget_eventfilter_isbase = false;
    mutable bool qprintpreviewwidget_timerevent_isbase = false;
    mutable bool qprintpreviewwidget_childevent_isbase = false;
    mutable bool qprintpreviewwidget_customevent_isbase = false;
    mutable bool qprintpreviewwidget_connectnotify_isbase = false;
    mutable bool qprintpreviewwidget_disconnectnotify_isbase = false;
    mutable bool qprintpreviewwidget_updatemicrofocus_isbase = false;
    mutable bool qprintpreviewwidget_create_isbase = false;
    mutable bool qprintpreviewwidget_destroy_isbase = false;
    mutable bool qprintpreviewwidget_focusnextchild_isbase = false;
    mutable bool qprintpreviewwidget_focuspreviouschild_isbase = false;
    mutable bool qprintpreviewwidget_sender_isbase = false;
    mutable bool qprintpreviewwidget_sendersignalindex_isbase = false;
    mutable bool qprintpreviewwidget_receivers_isbase = false;
    mutable bool qprintpreviewwidget_issignalconnected_isbase = false;

  public:
    VirtualQPrintPreviewWidget(QWidget* parent) : QPrintPreviewWidget(parent){};
    VirtualQPrintPreviewWidget(QPrinter* printer) : QPrintPreviewWidget(printer){};
    VirtualQPrintPreviewWidget() : QPrintPreviewWidget(){};
    VirtualQPrintPreviewWidget(QPrinter* printer, QWidget* parent) : QPrintPreviewWidget(printer, parent){};
    VirtualQPrintPreviewWidget(QPrinter* printer, QWidget* parent, Qt::WindowFlags flags) : QPrintPreviewWidget(printer, parent, flags){};
    VirtualQPrintPreviewWidget(QWidget* parent, Qt::WindowFlags flags) : QPrintPreviewWidget(parent, flags){};

    ~VirtualQPrintPreviewWidget() {
        qprintpreviewwidget_metacall_callback = nullptr;
        qprintpreviewwidget_setvisible_callback = nullptr;
        qprintpreviewwidget_devtype_callback = nullptr;
        qprintpreviewwidget_sizehint_callback = nullptr;
        qprintpreviewwidget_minimumsizehint_callback = nullptr;
        qprintpreviewwidget_heightforwidth_callback = nullptr;
        qprintpreviewwidget_hasheightforwidth_callback = nullptr;
        qprintpreviewwidget_paintengine_callback = nullptr;
        qprintpreviewwidget_event_callback = nullptr;
        qprintpreviewwidget_mousepressevent_callback = nullptr;
        qprintpreviewwidget_mousereleaseevent_callback = nullptr;
        qprintpreviewwidget_mousedoubleclickevent_callback = nullptr;
        qprintpreviewwidget_mousemoveevent_callback = nullptr;
        qprintpreviewwidget_wheelevent_callback = nullptr;
        qprintpreviewwidget_keypressevent_callback = nullptr;
        qprintpreviewwidget_keyreleaseevent_callback = nullptr;
        qprintpreviewwidget_focusinevent_callback = nullptr;
        qprintpreviewwidget_focusoutevent_callback = nullptr;
        qprintpreviewwidget_enterevent_callback = nullptr;
        qprintpreviewwidget_leaveevent_callback = nullptr;
        qprintpreviewwidget_paintevent_callback = nullptr;
        qprintpreviewwidget_moveevent_callback = nullptr;
        qprintpreviewwidget_resizeevent_callback = nullptr;
        qprintpreviewwidget_closeevent_callback = nullptr;
        qprintpreviewwidget_contextmenuevent_callback = nullptr;
        qprintpreviewwidget_tabletevent_callback = nullptr;
        qprintpreviewwidget_actionevent_callback = nullptr;
        qprintpreviewwidget_dragenterevent_callback = nullptr;
        qprintpreviewwidget_dragmoveevent_callback = nullptr;
        qprintpreviewwidget_dragleaveevent_callback = nullptr;
        qprintpreviewwidget_dropevent_callback = nullptr;
        qprintpreviewwidget_showevent_callback = nullptr;
        qprintpreviewwidget_hideevent_callback = nullptr;
        qprintpreviewwidget_nativeevent_callback = nullptr;
        qprintpreviewwidget_changeevent_callback = nullptr;
        qprintpreviewwidget_metric_callback = nullptr;
        qprintpreviewwidget_initpainter_callback = nullptr;
        qprintpreviewwidget_redirected_callback = nullptr;
        qprintpreviewwidget_sharedpainter_callback = nullptr;
        qprintpreviewwidget_inputmethodevent_callback = nullptr;
        qprintpreviewwidget_inputmethodquery_callback = nullptr;
        qprintpreviewwidget_focusnextprevchild_callback = nullptr;
        qprintpreviewwidget_eventfilter_callback = nullptr;
        qprintpreviewwidget_timerevent_callback = nullptr;
        qprintpreviewwidget_childevent_callback = nullptr;
        qprintpreviewwidget_customevent_callback = nullptr;
        qprintpreviewwidget_connectnotify_callback = nullptr;
        qprintpreviewwidget_disconnectnotify_callback = nullptr;
        qprintpreviewwidget_updatemicrofocus_callback = nullptr;
        qprintpreviewwidget_create_callback = nullptr;
        qprintpreviewwidget_destroy_callback = nullptr;
        qprintpreviewwidget_focusnextchild_callback = nullptr;
        qprintpreviewwidget_focuspreviouschild_callback = nullptr;
        qprintpreviewwidget_sender_callback = nullptr;
        qprintpreviewwidget_sendersignalindex_callback = nullptr;
        qprintpreviewwidget_receivers_callback = nullptr;
        qprintpreviewwidget_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQPrintPreviewWidget_Metacall_Callback(QPrintPreviewWidget_Metacall_Callback cb) { qprintpreviewwidget_metacall_callback = cb; }
    void setQPrintPreviewWidget_SetVisible_Callback(QPrintPreviewWidget_SetVisible_Callback cb) { qprintpreviewwidget_setvisible_callback = cb; }
    void setQPrintPreviewWidget_DevType_Callback(QPrintPreviewWidget_DevType_Callback cb) { qprintpreviewwidget_devtype_callback = cb; }
    void setQPrintPreviewWidget_SizeHint_Callback(QPrintPreviewWidget_SizeHint_Callback cb) { qprintpreviewwidget_sizehint_callback = cb; }
    void setQPrintPreviewWidget_MinimumSizeHint_Callback(QPrintPreviewWidget_MinimumSizeHint_Callback cb) { qprintpreviewwidget_minimumsizehint_callback = cb; }
    void setQPrintPreviewWidget_HeightForWidth_Callback(QPrintPreviewWidget_HeightForWidth_Callback cb) { qprintpreviewwidget_heightforwidth_callback = cb; }
    void setQPrintPreviewWidget_HasHeightForWidth_Callback(QPrintPreviewWidget_HasHeightForWidth_Callback cb) { qprintpreviewwidget_hasheightforwidth_callback = cb; }
    void setQPrintPreviewWidget_PaintEngine_Callback(QPrintPreviewWidget_PaintEngine_Callback cb) { qprintpreviewwidget_paintengine_callback = cb; }
    void setQPrintPreviewWidget_Event_Callback(QPrintPreviewWidget_Event_Callback cb) { qprintpreviewwidget_event_callback = cb; }
    void setQPrintPreviewWidget_MousePressEvent_Callback(QPrintPreviewWidget_MousePressEvent_Callback cb) { qprintpreviewwidget_mousepressevent_callback = cb; }
    void setQPrintPreviewWidget_MouseReleaseEvent_Callback(QPrintPreviewWidget_MouseReleaseEvent_Callback cb) { qprintpreviewwidget_mousereleaseevent_callback = cb; }
    void setQPrintPreviewWidget_MouseDoubleClickEvent_Callback(QPrintPreviewWidget_MouseDoubleClickEvent_Callback cb) { qprintpreviewwidget_mousedoubleclickevent_callback = cb; }
    void setQPrintPreviewWidget_MouseMoveEvent_Callback(QPrintPreviewWidget_MouseMoveEvent_Callback cb) { qprintpreviewwidget_mousemoveevent_callback = cb; }
    void setQPrintPreviewWidget_WheelEvent_Callback(QPrintPreviewWidget_WheelEvent_Callback cb) { qprintpreviewwidget_wheelevent_callback = cb; }
    void setQPrintPreviewWidget_KeyPressEvent_Callback(QPrintPreviewWidget_KeyPressEvent_Callback cb) { qprintpreviewwidget_keypressevent_callback = cb; }
    void setQPrintPreviewWidget_KeyReleaseEvent_Callback(QPrintPreviewWidget_KeyReleaseEvent_Callback cb) { qprintpreviewwidget_keyreleaseevent_callback = cb; }
    void setQPrintPreviewWidget_FocusInEvent_Callback(QPrintPreviewWidget_FocusInEvent_Callback cb) { qprintpreviewwidget_focusinevent_callback = cb; }
    void setQPrintPreviewWidget_FocusOutEvent_Callback(QPrintPreviewWidget_FocusOutEvent_Callback cb) { qprintpreviewwidget_focusoutevent_callback = cb; }
    void setQPrintPreviewWidget_EnterEvent_Callback(QPrintPreviewWidget_EnterEvent_Callback cb) { qprintpreviewwidget_enterevent_callback = cb; }
    void setQPrintPreviewWidget_LeaveEvent_Callback(QPrintPreviewWidget_LeaveEvent_Callback cb) { qprintpreviewwidget_leaveevent_callback = cb; }
    void setQPrintPreviewWidget_PaintEvent_Callback(QPrintPreviewWidget_PaintEvent_Callback cb) { qprintpreviewwidget_paintevent_callback = cb; }
    void setQPrintPreviewWidget_MoveEvent_Callback(QPrintPreviewWidget_MoveEvent_Callback cb) { qprintpreviewwidget_moveevent_callback = cb; }
    void setQPrintPreviewWidget_ResizeEvent_Callback(QPrintPreviewWidget_ResizeEvent_Callback cb) { qprintpreviewwidget_resizeevent_callback = cb; }
    void setQPrintPreviewWidget_CloseEvent_Callback(QPrintPreviewWidget_CloseEvent_Callback cb) { qprintpreviewwidget_closeevent_callback = cb; }
    void setQPrintPreviewWidget_ContextMenuEvent_Callback(QPrintPreviewWidget_ContextMenuEvent_Callback cb) { qprintpreviewwidget_contextmenuevent_callback = cb; }
    void setQPrintPreviewWidget_TabletEvent_Callback(QPrintPreviewWidget_TabletEvent_Callback cb) { qprintpreviewwidget_tabletevent_callback = cb; }
    void setQPrintPreviewWidget_ActionEvent_Callback(QPrintPreviewWidget_ActionEvent_Callback cb) { qprintpreviewwidget_actionevent_callback = cb; }
    void setQPrintPreviewWidget_DragEnterEvent_Callback(QPrintPreviewWidget_DragEnterEvent_Callback cb) { qprintpreviewwidget_dragenterevent_callback = cb; }
    void setQPrintPreviewWidget_DragMoveEvent_Callback(QPrintPreviewWidget_DragMoveEvent_Callback cb) { qprintpreviewwidget_dragmoveevent_callback = cb; }
    void setQPrintPreviewWidget_DragLeaveEvent_Callback(QPrintPreviewWidget_DragLeaveEvent_Callback cb) { qprintpreviewwidget_dragleaveevent_callback = cb; }
    void setQPrintPreviewWidget_DropEvent_Callback(QPrintPreviewWidget_DropEvent_Callback cb) { qprintpreviewwidget_dropevent_callback = cb; }
    void setQPrintPreviewWidget_ShowEvent_Callback(QPrintPreviewWidget_ShowEvent_Callback cb) { qprintpreviewwidget_showevent_callback = cb; }
    void setQPrintPreviewWidget_HideEvent_Callback(QPrintPreviewWidget_HideEvent_Callback cb) { qprintpreviewwidget_hideevent_callback = cb; }
    void setQPrintPreviewWidget_NativeEvent_Callback(QPrintPreviewWidget_NativeEvent_Callback cb) { qprintpreviewwidget_nativeevent_callback = cb; }
    void setQPrintPreviewWidget_ChangeEvent_Callback(QPrintPreviewWidget_ChangeEvent_Callback cb) { qprintpreviewwidget_changeevent_callback = cb; }
    void setQPrintPreviewWidget_Metric_Callback(QPrintPreviewWidget_Metric_Callback cb) { qprintpreviewwidget_metric_callback = cb; }
    void setQPrintPreviewWidget_InitPainter_Callback(QPrintPreviewWidget_InitPainter_Callback cb) { qprintpreviewwidget_initpainter_callback = cb; }
    void setQPrintPreviewWidget_Redirected_Callback(QPrintPreviewWidget_Redirected_Callback cb) { qprintpreviewwidget_redirected_callback = cb; }
    void setQPrintPreviewWidget_SharedPainter_Callback(QPrintPreviewWidget_SharedPainter_Callback cb) { qprintpreviewwidget_sharedpainter_callback = cb; }
    void setQPrintPreviewWidget_InputMethodEvent_Callback(QPrintPreviewWidget_InputMethodEvent_Callback cb) { qprintpreviewwidget_inputmethodevent_callback = cb; }
    void setQPrintPreviewWidget_InputMethodQuery_Callback(QPrintPreviewWidget_InputMethodQuery_Callback cb) { qprintpreviewwidget_inputmethodquery_callback = cb; }
    void setQPrintPreviewWidget_FocusNextPrevChild_Callback(QPrintPreviewWidget_FocusNextPrevChild_Callback cb) { qprintpreviewwidget_focusnextprevchild_callback = cb; }
    void setQPrintPreviewWidget_EventFilter_Callback(QPrintPreviewWidget_EventFilter_Callback cb) { qprintpreviewwidget_eventfilter_callback = cb; }
    void setQPrintPreviewWidget_TimerEvent_Callback(QPrintPreviewWidget_TimerEvent_Callback cb) { qprintpreviewwidget_timerevent_callback = cb; }
    void setQPrintPreviewWidget_ChildEvent_Callback(QPrintPreviewWidget_ChildEvent_Callback cb) { qprintpreviewwidget_childevent_callback = cb; }
    void setQPrintPreviewWidget_CustomEvent_Callback(QPrintPreviewWidget_CustomEvent_Callback cb) { qprintpreviewwidget_customevent_callback = cb; }
    void setQPrintPreviewWidget_ConnectNotify_Callback(QPrintPreviewWidget_ConnectNotify_Callback cb) { qprintpreviewwidget_connectnotify_callback = cb; }
    void setQPrintPreviewWidget_DisconnectNotify_Callback(QPrintPreviewWidget_DisconnectNotify_Callback cb) { qprintpreviewwidget_disconnectnotify_callback = cb; }
    void setQPrintPreviewWidget_UpdateMicroFocus_Callback(QPrintPreviewWidget_UpdateMicroFocus_Callback cb) { qprintpreviewwidget_updatemicrofocus_callback = cb; }
    void setQPrintPreviewWidget_Create_Callback(QPrintPreviewWidget_Create_Callback cb) { qprintpreviewwidget_create_callback = cb; }
    void setQPrintPreviewWidget_Destroy_Callback(QPrintPreviewWidget_Destroy_Callback cb) { qprintpreviewwidget_destroy_callback = cb; }
    void setQPrintPreviewWidget_FocusNextChild_Callback(QPrintPreviewWidget_FocusNextChild_Callback cb) { qprintpreviewwidget_focusnextchild_callback = cb; }
    void setQPrintPreviewWidget_FocusPreviousChild_Callback(QPrintPreviewWidget_FocusPreviousChild_Callback cb) { qprintpreviewwidget_focuspreviouschild_callback = cb; }
    void setQPrintPreviewWidget_Sender_Callback(QPrintPreviewWidget_Sender_Callback cb) { qprintpreviewwidget_sender_callback = cb; }
    void setQPrintPreviewWidget_SenderSignalIndex_Callback(QPrintPreviewWidget_SenderSignalIndex_Callback cb) { qprintpreviewwidget_sendersignalindex_callback = cb; }
    void setQPrintPreviewWidget_Receivers_Callback(QPrintPreviewWidget_Receivers_Callback cb) { qprintpreviewwidget_receivers_callback = cb; }
    void setQPrintPreviewWidget_IsSignalConnected_Callback(QPrintPreviewWidget_IsSignalConnected_Callback cb) { qprintpreviewwidget_issignalconnected_callback = cb; }

    // Base flag setters
    void setQPrintPreviewWidget_Metacall_IsBase(bool value) const { qprintpreviewwidget_metacall_isbase = value; }
    void setQPrintPreviewWidget_SetVisible_IsBase(bool value) const { qprintpreviewwidget_setvisible_isbase = value; }
    void setQPrintPreviewWidget_DevType_IsBase(bool value) const { qprintpreviewwidget_devtype_isbase = value; }
    void setQPrintPreviewWidget_SizeHint_IsBase(bool value) const { qprintpreviewwidget_sizehint_isbase = value; }
    void setQPrintPreviewWidget_MinimumSizeHint_IsBase(bool value) const { qprintpreviewwidget_minimumsizehint_isbase = value; }
    void setQPrintPreviewWidget_HeightForWidth_IsBase(bool value) const { qprintpreviewwidget_heightforwidth_isbase = value; }
    void setQPrintPreviewWidget_HasHeightForWidth_IsBase(bool value) const { qprintpreviewwidget_hasheightforwidth_isbase = value; }
    void setQPrintPreviewWidget_PaintEngine_IsBase(bool value) const { qprintpreviewwidget_paintengine_isbase = value; }
    void setQPrintPreviewWidget_Event_IsBase(bool value) const { qprintpreviewwidget_event_isbase = value; }
    void setQPrintPreviewWidget_MousePressEvent_IsBase(bool value) const { qprintpreviewwidget_mousepressevent_isbase = value; }
    void setQPrintPreviewWidget_MouseReleaseEvent_IsBase(bool value) const { qprintpreviewwidget_mousereleaseevent_isbase = value; }
    void setQPrintPreviewWidget_MouseDoubleClickEvent_IsBase(bool value) const { qprintpreviewwidget_mousedoubleclickevent_isbase = value; }
    void setQPrintPreviewWidget_MouseMoveEvent_IsBase(bool value) const { qprintpreviewwidget_mousemoveevent_isbase = value; }
    void setQPrintPreviewWidget_WheelEvent_IsBase(bool value) const { qprintpreviewwidget_wheelevent_isbase = value; }
    void setQPrintPreviewWidget_KeyPressEvent_IsBase(bool value) const { qprintpreviewwidget_keypressevent_isbase = value; }
    void setQPrintPreviewWidget_KeyReleaseEvent_IsBase(bool value) const { qprintpreviewwidget_keyreleaseevent_isbase = value; }
    void setQPrintPreviewWidget_FocusInEvent_IsBase(bool value) const { qprintpreviewwidget_focusinevent_isbase = value; }
    void setQPrintPreviewWidget_FocusOutEvent_IsBase(bool value) const { qprintpreviewwidget_focusoutevent_isbase = value; }
    void setQPrintPreviewWidget_EnterEvent_IsBase(bool value) const { qprintpreviewwidget_enterevent_isbase = value; }
    void setQPrintPreviewWidget_LeaveEvent_IsBase(bool value) const { qprintpreviewwidget_leaveevent_isbase = value; }
    void setQPrintPreviewWidget_PaintEvent_IsBase(bool value) const { qprintpreviewwidget_paintevent_isbase = value; }
    void setQPrintPreviewWidget_MoveEvent_IsBase(bool value) const { qprintpreviewwidget_moveevent_isbase = value; }
    void setQPrintPreviewWidget_ResizeEvent_IsBase(bool value) const { qprintpreviewwidget_resizeevent_isbase = value; }
    void setQPrintPreviewWidget_CloseEvent_IsBase(bool value) const { qprintpreviewwidget_closeevent_isbase = value; }
    void setQPrintPreviewWidget_ContextMenuEvent_IsBase(bool value) const { qprintpreviewwidget_contextmenuevent_isbase = value; }
    void setQPrintPreviewWidget_TabletEvent_IsBase(bool value) const { qprintpreviewwidget_tabletevent_isbase = value; }
    void setQPrintPreviewWidget_ActionEvent_IsBase(bool value) const { qprintpreviewwidget_actionevent_isbase = value; }
    void setQPrintPreviewWidget_DragEnterEvent_IsBase(bool value) const { qprintpreviewwidget_dragenterevent_isbase = value; }
    void setQPrintPreviewWidget_DragMoveEvent_IsBase(bool value) const { qprintpreviewwidget_dragmoveevent_isbase = value; }
    void setQPrintPreviewWidget_DragLeaveEvent_IsBase(bool value) const { qprintpreviewwidget_dragleaveevent_isbase = value; }
    void setQPrintPreviewWidget_DropEvent_IsBase(bool value) const { qprintpreviewwidget_dropevent_isbase = value; }
    void setQPrintPreviewWidget_ShowEvent_IsBase(bool value) const { qprintpreviewwidget_showevent_isbase = value; }
    void setQPrintPreviewWidget_HideEvent_IsBase(bool value) const { qprintpreviewwidget_hideevent_isbase = value; }
    void setQPrintPreviewWidget_NativeEvent_IsBase(bool value) const { qprintpreviewwidget_nativeevent_isbase = value; }
    void setQPrintPreviewWidget_ChangeEvent_IsBase(bool value) const { qprintpreviewwidget_changeevent_isbase = value; }
    void setQPrintPreviewWidget_Metric_IsBase(bool value) const { qprintpreviewwidget_metric_isbase = value; }
    void setQPrintPreviewWidget_InitPainter_IsBase(bool value) const { qprintpreviewwidget_initpainter_isbase = value; }
    void setQPrintPreviewWidget_Redirected_IsBase(bool value) const { qprintpreviewwidget_redirected_isbase = value; }
    void setQPrintPreviewWidget_SharedPainter_IsBase(bool value) const { qprintpreviewwidget_sharedpainter_isbase = value; }
    void setQPrintPreviewWidget_InputMethodEvent_IsBase(bool value) const { qprintpreviewwidget_inputmethodevent_isbase = value; }
    void setQPrintPreviewWidget_InputMethodQuery_IsBase(bool value) const { qprintpreviewwidget_inputmethodquery_isbase = value; }
    void setQPrintPreviewWidget_FocusNextPrevChild_IsBase(bool value) const { qprintpreviewwidget_focusnextprevchild_isbase = value; }
    void setQPrintPreviewWidget_EventFilter_IsBase(bool value) const { qprintpreviewwidget_eventfilter_isbase = value; }
    void setQPrintPreviewWidget_TimerEvent_IsBase(bool value) const { qprintpreviewwidget_timerevent_isbase = value; }
    void setQPrintPreviewWidget_ChildEvent_IsBase(bool value) const { qprintpreviewwidget_childevent_isbase = value; }
    void setQPrintPreviewWidget_CustomEvent_IsBase(bool value) const { qprintpreviewwidget_customevent_isbase = value; }
    void setQPrintPreviewWidget_ConnectNotify_IsBase(bool value) const { qprintpreviewwidget_connectnotify_isbase = value; }
    void setQPrintPreviewWidget_DisconnectNotify_IsBase(bool value) const { qprintpreviewwidget_disconnectnotify_isbase = value; }
    void setQPrintPreviewWidget_UpdateMicroFocus_IsBase(bool value) const { qprintpreviewwidget_updatemicrofocus_isbase = value; }
    void setQPrintPreviewWidget_Create_IsBase(bool value) const { qprintpreviewwidget_create_isbase = value; }
    void setQPrintPreviewWidget_Destroy_IsBase(bool value) const { qprintpreviewwidget_destroy_isbase = value; }
    void setQPrintPreviewWidget_FocusNextChild_IsBase(bool value) const { qprintpreviewwidget_focusnextchild_isbase = value; }
    void setQPrintPreviewWidget_FocusPreviousChild_IsBase(bool value) const { qprintpreviewwidget_focuspreviouschild_isbase = value; }
    void setQPrintPreviewWidget_Sender_IsBase(bool value) const { qprintpreviewwidget_sender_isbase = value; }
    void setQPrintPreviewWidget_SenderSignalIndex_IsBase(bool value) const { qprintpreviewwidget_sendersignalindex_isbase = value; }
    void setQPrintPreviewWidget_Receivers_IsBase(bool value) const { qprintpreviewwidget_receivers_isbase = value; }
    void setQPrintPreviewWidget_IsSignalConnected_IsBase(bool value) const { qprintpreviewwidget_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qprintpreviewwidget_metacall_isbase) {
            qprintpreviewwidget_metacall_isbase = false;
            return QPrintPreviewWidget::qt_metacall(param1, param2, param3);
        } else if (qprintpreviewwidget_metacall_callback != nullptr) {
            return qprintpreviewwidget_metacall_callback(this, param1, param2, param3);
        } else {
            return QPrintPreviewWidget::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qprintpreviewwidget_setvisible_isbase) {
            qprintpreviewwidget_setvisible_isbase = false;
            QPrintPreviewWidget::setVisible(visible);
        } else if (qprintpreviewwidget_setvisible_callback != nullptr) {
            qprintpreviewwidget_setvisible_callback(this, visible);
        } else {
            QPrintPreviewWidget::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qprintpreviewwidget_devtype_isbase) {
            qprintpreviewwidget_devtype_isbase = false;
            return QPrintPreviewWidget::devType();
        } else if (qprintpreviewwidget_devtype_callback != nullptr) {
            return qprintpreviewwidget_devtype_callback();
        } else {
            return QPrintPreviewWidget::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qprintpreviewwidget_sizehint_isbase) {
            qprintpreviewwidget_sizehint_isbase = false;
            return QPrintPreviewWidget::sizeHint();
        } else if (qprintpreviewwidget_sizehint_callback != nullptr) {
            return qprintpreviewwidget_sizehint_callback();
        } else {
            return QPrintPreviewWidget::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qprintpreviewwidget_minimumsizehint_isbase) {
            qprintpreviewwidget_minimumsizehint_isbase = false;
            return QPrintPreviewWidget::minimumSizeHint();
        } else if (qprintpreviewwidget_minimumsizehint_callback != nullptr) {
            return qprintpreviewwidget_minimumsizehint_callback();
        } else {
            return QPrintPreviewWidget::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qprintpreviewwidget_heightforwidth_isbase) {
            qprintpreviewwidget_heightforwidth_isbase = false;
            return QPrintPreviewWidget::heightForWidth(param1);
        } else if (qprintpreviewwidget_heightforwidth_callback != nullptr) {
            return qprintpreviewwidget_heightforwidth_callback(this, param1);
        } else {
            return QPrintPreviewWidget::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qprintpreviewwidget_hasheightforwidth_isbase) {
            qprintpreviewwidget_hasheightforwidth_isbase = false;
            return QPrintPreviewWidget::hasHeightForWidth();
        } else if (qprintpreviewwidget_hasheightforwidth_callback != nullptr) {
            return qprintpreviewwidget_hasheightforwidth_callback();
        } else {
            return QPrintPreviewWidget::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qprintpreviewwidget_paintengine_isbase) {
            qprintpreviewwidget_paintengine_isbase = false;
            return QPrintPreviewWidget::paintEngine();
        } else if (qprintpreviewwidget_paintengine_callback != nullptr) {
            return qprintpreviewwidget_paintengine_callback();
        } else {
            return QPrintPreviewWidget::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qprintpreviewwidget_event_isbase) {
            qprintpreviewwidget_event_isbase = false;
            return QPrintPreviewWidget::event(event);
        } else if (qprintpreviewwidget_event_callback != nullptr) {
            return qprintpreviewwidget_event_callback(this, event);
        } else {
            return QPrintPreviewWidget::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qprintpreviewwidget_mousepressevent_isbase) {
            qprintpreviewwidget_mousepressevent_isbase = false;
            QPrintPreviewWidget::mousePressEvent(event);
        } else if (qprintpreviewwidget_mousepressevent_callback != nullptr) {
            qprintpreviewwidget_mousepressevent_callback(this, event);
        } else {
            QPrintPreviewWidget::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qprintpreviewwidget_mousereleaseevent_isbase) {
            qprintpreviewwidget_mousereleaseevent_isbase = false;
            QPrintPreviewWidget::mouseReleaseEvent(event);
        } else if (qprintpreviewwidget_mousereleaseevent_callback != nullptr) {
            qprintpreviewwidget_mousereleaseevent_callback(this, event);
        } else {
            QPrintPreviewWidget::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qprintpreviewwidget_mousedoubleclickevent_isbase) {
            qprintpreviewwidget_mousedoubleclickevent_isbase = false;
            QPrintPreviewWidget::mouseDoubleClickEvent(event);
        } else if (qprintpreviewwidget_mousedoubleclickevent_callback != nullptr) {
            qprintpreviewwidget_mousedoubleclickevent_callback(this, event);
        } else {
            QPrintPreviewWidget::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qprintpreviewwidget_mousemoveevent_isbase) {
            qprintpreviewwidget_mousemoveevent_isbase = false;
            QPrintPreviewWidget::mouseMoveEvent(event);
        } else if (qprintpreviewwidget_mousemoveevent_callback != nullptr) {
            qprintpreviewwidget_mousemoveevent_callback(this, event);
        } else {
            QPrintPreviewWidget::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qprintpreviewwidget_wheelevent_isbase) {
            qprintpreviewwidget_wheelevent_isbase = false;
            QPrintPreviewWidget::wheelEvent(event);
        } else if (qprintpreviewwidget_wheelevent_callback != nullptr) {
            qprintpreviewwidget_wheelevent_callback(this, event);
        } else {
            QPrintPreviewWidget::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qprintpreviewwidget_keypressevent_isbase) {
            qprintpreviewwidget_keypressevent_isbase = false;
            QPrintPreviewWidget::keyPressEvent(event);
        } else if (qprintpreviewwidget_keypressevent_callback != nullptr) {
            qprintpreviewwidget_keypressevent_callback(this, event);
        } else {
            QPrintPreviewWidget::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qprintpreviewwidget_keyreleaseevent_isbase) {
            qprintpreviewwidget_keyreleaseevent_isbase = false;
            QPrintPreviewWidget::keyReleaseEvent(event);
        } else if (qprintpreviewwidget_keyreleaseevent_callback != nullptr) {
            qprintpreviewwidget_keyreleaseevent_callback(this, event);
        } else {
            QPrintPreviewWidget::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qprintpreviewwidget_focusinevent_isbase) {
            qprintpreviewwidget_focusinevent_isbase = false;
            QPrintPreviewWidget::focusInEvent(event);
        } else if (qprintpreviewwidget_focusinevent_callback != nullptr) {
            qprintpreviewwidget_focusinevent_callback(this, event);
        } else {
            QPrintPreviewWidget::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qprintpreviewwidget_focusoutevent_isbase) {
            qprintpreviewwidget_focusoutevent_isbase = false;
            QPrintPreviewWidget::focusOutEvent(event);
        } else if (qprintpreviewwidget_focusoutevent_callback != nullptr) {
            qprintpreviewwidget_focusoutevent_callback(this, event);
        } else {
            QPrintPreviewWidget::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qprintpreviewwidget_enterevent_isbase) {
            qprintpreviewwidget_enterevent_isbase = false;
            QPrintPreviewWidget::enterEvent(event);
        } else if (qprintpreviewwidget_enterevent_callback != nullptr) {
            qprintpreviewwidget_enterevent_callback(this, event);
        } else {
            QPrintPreviewWidget::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qprintpreviewwidget_leaveevent_isbase) {
            qprintpreviewwidget_leaveevent_isbase = false;
            QPrintPreviewWidget::leaveEvent(event);
        } else if (qprintpreviewwidget_leaveevent_callback != nullptr) {
            qprintpreviewwidget_leaveevent_callback(this, event);
        } else {
            QPrintPreviewWidget::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qprintpreviewwidget_paintevent_isbase) {
            qprintpreviewwidget_paintevent_isbase = false;
            QPrintPreviewWidget::paintEvent(event);
        } else if (qprintpreviewwidget_paintevent_callback != nullptr) {
            qprintpreviewwidget_paintevent_callback(this, event);
        } else {
            QPrintPreviewWidget::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qprintpreviewwidget_moveevent_isbase) {
            qprintpreviewwidget_moveevent_isbase = false;
            QPrintPreviewWidget::moveEvent(event);
        } else if (qprintpreviewwidget_moveevent_callback != nullptr) {
            qprintpreviewwidget_moveevent_callback(this, event);
        } else {
            QPrintPreviewWidget::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qprintpreviewwidget_resizeevent_isbase) {
            qprintpreviewwidget_resizeevent_isbase = false;
            QPrintPreviewWidget::resizeEvent(event);
        } else if (qprintpreviewwidget_resizeevent_callback != nullptr) {
            qprintpreviewwidget_resizeevent_callback(this, event);
        } else {
            QPrintPreviewWidget::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qprintpreviewwidget_closeevent_isbase) {
            qprintpreviewwidget_closeevent_isbase = false;
            QPrintPreviewWidget::closeEvent(event);
        } else if (qprintpreviewwidget_closeevent_callback != nullptr) {
            qprintpreviewwidget_closeevent_callback(this, event);
        } else {
            QPrintPreviewWidget::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qprintpreviewwidget_contextmenuevent_isbase) {
            qprintpreviewwidget_contextmenuevent_isbase = false;
            QPrintPreviewWidget::contextMenuEvent(event);
        } else if (qprintpreviewwidget_contextmenuevent_callback != nullptr) {
            qprintpreviewwidget_contextmenuevent_callback(this, event);
        } else {
            QPrintPreviewWidget::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qprintpreviewwidget_tabletevent_isbase) {
            qprintpreviewwidget_tabletevent_isbase = false;
            QPrintPreviewWidget::tabletEvent(event);
        } else if (qprintpreviewwidget_tabletevent_callback != nullptr) {
            qprintpreviewwidget_tabletevent_callback(this, event);
        } else {
            QPrintPreviewWidget::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qprintpreviewwidget_actionevent_isbase) {
            qprintpreviewwidget_actionevent_isbase = false;
            QPrintPreviewWidget::actionEvent(event);
        } else if (qprintpreviewwidget_actionevent_callback != nullptr) {
            qprintpreviewwidget_actionevent_callback(this, event);
        } else {
            QPrintPreviewWidget::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qprintpreviewwidget_dragenterevent_isbase) {
            qprintpreviewwidget_dragenterevent_isbase = false;
            QPrintPreviewWidget::dragEnterEvent(event);
        } else if (qprintpreviewwidget_dragenterevent_callback != nullptr) {
            qprintpreviewwidget_dragenterevent_callback(this, event);
        } else {
            QPrintPreviewWidget::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qprintpreviewwidget_dragmoveevent_isbase) {
            qprintpreviewwidget_dragmoveevent_isbase = false;
            QPrintPreviewWidget::dragMoveEvent(event);
        } else if (qprintpreviewwidget_dragmoveevent_callback != nullptr) {
            qprintpreviewwidget_dragmoveevent_callback(this, event);
        } else {
            QPrintPreviewWidget::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qprintpreviewwidget_dragleaveevent_isbase) {
            qprintpreviewwidget_dragleaveevent_isbase = false;
            QPrintPreviewWidget::dragLeaveEvent(event);
        } else if (qprintpreviewwidget_dragleaveevent_callback != nullptr) {
            qprintpreviewwidget_dragleaveevent_callback(this, event);
        } else {
            QPrintPreviewWidget::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qprintpreviewwidget_dropevent_isbase) {
            qprintpreviewwidget_dropevent_isbase = false;
            QPrintPreviewWidget::dropEvent(event);
        } else if (qprintpreviewwidget_dropevent_callback != nullptr) {
            qprintpreviewwidget_dropevent_callback(this, event);
        } else {
            QPrintPreviewWidget::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qprintpreviewwidget_showevent_isbase) {
            qprintpreviewwidget_showevent_isbase = false;
            QPrintPreviewWidget::showEvent(event);
        } else if (qprintpreviewwidget_showevent_callback != nullptr) {
            qprintpreviewwidget_showevent_callback(this, event);
        } else {
            QPrintPreviewWidget::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qprintpreviewwidget_hideevent_isbase) {
            qprintpreviewwidget_hideevent_isbase = false;
            QPrintPreviewWidget::hideEvent(event);
        } else if (qprintpreviewwidget_hideevent_callback != nullptr) {
            qprintpreviewwidget_hideevent_callback(this, event);
        } else {
            QPrintPreviewWidget::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qprintpreviewwidget_nativeevent_isbase) {
            qprintpreviewwidget_nativeevent_isbase = false;
            return QPrintPreviewWidget::nativeEvent(eventType, message, result);
        } else if (qprintpreviewwidget_nativeevent_callback != nullptr) {
            return qprintpreviewwidget_nativeevent_callback(this, eventType, message, result);
        } else {
            return QPrintPreviewWidget::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qprintpreviewwidget_changeevent_isbase) {
            qprintpreviewwidget_changeevent_isbase = false;
            QPrintPreviewWidget::changeEvent(param1);
        } else if (qprintpreviewwidget_changeevent_callback != nullptr) {
            qprintpreviewwidget_changeevent_callback(this, param1);
        } else {
            QPrintPreviewWidget::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qprintpreviewwidget_metric_isbase) {
            qprintpreviewwidget_metric_isbase = false;
            return QPrintPreviewWidget::metric(param1);
        } else if (qprintpreviewwidget_metric_callback != nullptr) {
            return qprintpreviewwidget_metric_callback(this, param1);
        } else {
            return QPrintPreviewWidget::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qprintpreviewwidget_initpainter_isbase) {
            qprintpreviewwidget_initpainter_isbase = false;
            QPrintPreviewWidget::initPainter(painter);
        } else if (qprintpreviewwidget_initpainter_callback != nullptr) {
            qprintpreviewwidget_initpainter_callback(this, painter);
        } else {
            QPrintPreviewWidget::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qprintpreviewwidget_redirected_isbase) {
            qprintpreviewwidget_redirected_isbase = false;
            return QPrintPreviewWidget::redirected(offset);
        } else if (qprintpreviewwidget_redirected_callback != nullptr) {
            return qprintpreviewwidget_redirected_callback(this, offset);
        } else {
            return QPrintPreviewWidget::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qprintpreviewwidget_sharedpainter_isbase) {
            qprintpreviewwidget_sharedpainter_isbase = false;
            return QPrintPreviewWidget::sharedPainter();
        } else if (qprintpreviewwidget_sharedpainter_callback != nullptr) {
            return qprintpreviewwidget_sharedpainter_callback();
        } else {
            return QPrintPreviewWidget::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qprintpreviewwidget_inputmethodevent_isbase) {
            qprintpreviewwidget_inputmethodevent_isbase = false;
            QPrintPreviewWidget::inputMethodEvent(param1);
        } else if (qprintpreviewwidget_inputmethodevent_callback != nullptr) {
            qprintpreviewwidget_inputmethodevent_callback(this, param1);
        } else {
            QPrintPreviewWidget::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qprintpreviewwidget_inputmethodquery_isbase) {
            qprintpreviewwidget_inputmethodquery_isbase = false;
            return QPrintPreviewWidget::inputMethodQuery(param1);
        } else if (qprintpreviewwidget_inputmethodquery_callback != nullptr) {
            return qprintpreviewwidget_inputmethodquery_callback(this, param1);
        } else {
            return QPrintPreviewWidget::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qprintpreviewwidget_focusnextprevchild_isbase) {
            qprintpreviewwidget_focusnextprevchild_isbase = false;
            return QPrintPreviewWidget::focusNextPrevChild(next);
        } else if (qprintpreviewwidget_focusnextprevchild_callback != nullptr) {
            return qprintpreviewwidget_focusnextprevchild_callback(this, next);
        } else {
            return QPrintPreviewWidget::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qprintpreviewwidget_eventfilter_isbase) {
            qprintpreviewwidget_eventfilter_isbase = false;
            return QPrintPreviewWidget::eventFilter(watched, event);
        } else if (qprintpreviewwidget_eventfilter_callback != nullptr) {
            return qprintpreviewwidget_eventfilter_callback(this, watched, event);
        } else {
            return QPrintPreviewWidget::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qprintpreviewwidget_timerevent_isbase) {
            qprintpreviewwidget_timerevent_isbase = false;
            QPrintPreviewWidget::timerEvent(event);
        } else if (qprintpreviewwidget_timerevent_callback != nullptr) {
            qprintpreviewwidget_timerevent_callback(this, event);
        } else {
            QPrintPreviewWidget::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qprintpreviewwidget_childevent_isbase) {
            qprintpreviewwidget_childevent_isbase = false;
            QPrintPreviewWidget::childEvent(event);
        } else if (qprintpreviewwidget_childevent_callback != nullptr) {
            qprintpreviewwidget_childevent_callback(this, event);
        } else {
            QPrintPreviewWidget::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qprintpreviewwidget_customevent_isbase) {
            qprintpreviewwidget_customevent_isbase = false;
            QPrintPreviewWidget::customEvent(event);
        } else if (qprintpreviewwidget_customevent_callback != nullptr) {
            qprintpreviewwidget_customevent_callback(this, event);
        } else {
            QPrintPreviewWidget::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qprintpreviewwidget_connectnotify_isbase) {
            qprintpreviewwidget_connectnotify_isbase = false;
            QPrintPreviewWidget::connectNotify(signal);
        } else if (qprintpreviewwidget_connectnotify_callback != nullptr) {
            qprintpreviewwidget_connectnotify_callback(this, signal);
        } else {
            QPrintPreviewWidget::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qprintpreviewwidget_disconnectnotify_isbase) {
            qprintpreviewwidget_disconnectnotify_isbase = false;
            QPrintPreviewWidget::disconnectNotify(signal);
        } else if (qprintpreviewwidget_disconnectnotify_callback != nullptr) {
            qprintpreviewwidget_disconnectnotify_callback(this, signal);
        } else {
            QPrintPreviewWidget::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qprintpreviewwidget_updatemicrofocus_isbase) {
            qprintpreviewwidget_updatemicrofocus_isbase = false;
            QPrintPreviewWidget::updateMicroFocus();
        } else if (qprintpreviewwidget_updatemicrofocus_callback != nullptr) {
            qprintpreviewwidget_updatemicrofocus_callback();
        } else {
            QPrintPreviewWidget::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qprintpreviewwidget_create_isbase) {
            qprintpreviewwidget_create_isbase = false;
            QPrintPreviewWidget::create();
        } else if (qprintpreviewwidget_create_callback != nullptr) {
            qprintpreviewwidget_create_callback();
        } else {
            QPrintPreviewWidget::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qprintpreviewwidget_destroy_isbase) {
            qprintpreviewwidget_destroy_isbase = false;
            QPrintPreviewWidget::destroy();
        } else if (qprintpreviewwidget_destroy_callback != nullptr) {
            qprintpreviewwidget_destroy_callback();
        } else {
            QPrintPreviewWidget::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qprintpreviewwidget_focusnextchild_isbase) {
            qprintpreviewwidget_focusnextchild_isbase = false;
            return QPrintPreviewWidget::focusNextChild();
        } else if (qprintpreviewwidget_focusnextchild_callback != nullptr) {
            return qprintpreviewwidget_focusnextchild_callback();
        } else {
            return QPrintPreviewWidget::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qprintpreviewwidget_focuspreviouschild_isbase) {
            qprintpreviewwidget_focuspreviouschild_isbase = false;
            return QPrintPreviewWidget::focusPreviousChild();
        } else if (qprintpreviewwidget_focuspreviouschild_callback != nullptr) {
            return qprintpreviewwidget_focuspreviouschild_callback();
        } else {
            return QPrintPreviewWidget::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qprintpreviewwidget_sender_isbase) {
            qprintpreviewwidget_sender_isbase = false;
            return QPrintPreviewWidget::sender();
        } else if (qprintpreviewwidget_sender_callback != nullptr) {
            return qprintpreviewwidget_sender_callback();
        } else {
            return QPrintPreviewWidget::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qprintpreviewwidget_sendersignalindex_isbase) {
            qprintpreviewwidget_sendersignalindex_isbase = false;
            return QPrintPreviewWidget::senderSignalIndex();
        } else if (qprintpreviewwidget_sendersignalindex_callback != nullptr) {
            return qprintpreviewwidget_sendersignalindex_callback();
        } else {
            return QPrintPreviewWidget::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qprintpreviewwidget_receivers_isbase) {
            qprintpreviewwidget_receivers_isbase = false;
            return QPrintPreviewWidget::receivers(signal);
        } else if (qprintpreviewwidget_receivers_callback != nullptr) {
            return qprintpreviewwidget_receivers_callback(this, signal);
        } else {
            return QPrintPreviewWidget::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qprintpreviewwidget_issignalconnected_isbase) {
            qprintpreviewwidget_issignalconnected_isbase = false;
            return QPrintPreviewWidget::isSignalConnected(signal);
        } else if (qprintpreviewwidget_issignalconnected_callback != nullptr) {
            return qprintpreviewwidget_issignalconnected_callback(this, signal);
        } else {
            return QPrintPreviewWidget::isSignalConnected(signal);
        }
    }
};

#endif
