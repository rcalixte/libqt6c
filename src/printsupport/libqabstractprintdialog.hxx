#pragma once
#ifndef SRC_PRINTSUPPORTC_LIBVIRTUALQABSTRACTPRINTDIALOG_H
#define SRC_PRINTSUPPORTC_LIBVIRTUALQABSTRACTPRINTDIALOG_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QAbstractPrintDialog so that we can call protected methods
class VirtualQAbstractPrintDialog : public QAbstractPrintDialog {

  public:
    // Virtual class public types (including callbacks)
    using QAbstractPrintDialog_Metacall_Callback = int (*)(QAbstractPrintDialog*, QMetaObject::Call, int, void**);
    using QAbstractPrintDialog_SetVisible_Callback = void (*)(QAbstractPrintDialog*, bool);
    using QAbstractPrintDialog_SizeHint_Callback = QSize (*)();
    using QAbstractPrintDialog_MinimumSizeHint_Callback = QSize (*)();
    using QAbstractPrintDialog_Open_Callback = void (*)();
    using QAbstractPrintDialog_Exec_Callback = int (*)();
    using QAbstractPrintDialog_Done_Callback = void (*)(QAbstractPrintDialog*, int);
    using QAbstractPrintDialog_Accept_Callback = void (*)();
    using QAbstractPrintDialog_Reject_Callback = void (*)();
    using QAbstractPrintDialog_KeyPressEvent_Callback = void (*)(QAbstractPrintDialog*, QKeyEvent*);
    using QAbstractPrintDialog_CloseEvent_Callback = void (*)(QAbstractPrintDialog*, QCloseEvent*);
    using QAbstractPrintDialog_ShowEvent_Callback = void (*)(QAbstractPrintDialog*, QShowEvent*);
    using QAbstractPrintDialog_ResizeEvent_Callback = void (*)(QAbstractPrintDialog*, QResizeEvent*);
    using QAbstractPrintDialog_ContextMenuEvent_Callback = void (*)(QAbstractPrintDialog*, QContextMenuEvent*);
    using QAbstractPrintDialog_EventFilter_Callback = bool (*)(QAbstractPrintDialog*, QObject*, QEvent*);
    using QAbstractPrintDialog_DevType_Callback = int (*)();
    using QAbstractPrintDialog_HeightForWidth_Callback = int (*)(const QAbstractPrintDialog*, int);
    using QAbstractPrintDialog_HasHeightForWidth_Callback = bool (*)();
    using QAbstractPrintDialog_PaintEngine_Callback = QPaintEngine* (*)();
    using QAbstractPrintDialog_Event_Callback = bool (*)(QAbstractPrintDialog*, QEvent*);
    using QAbstractPrintDialog_MousePressEvent_Callback = void (*)(QAbstractPrintDialog*, QMouseEvent*);
    using QAbstractPrintDialog_MouseReleaseEvent_Callback = void (*)(QAbstractPrintDialog*, QMouseEvent*);
    using QAbstractPrintDialog_MouseDoubleClickEvent_Callback = void (*)(QAbstractPrintDialog*, QMouseEvent*);
    using QAbstractPrintDialog_MouseMoveEvent_Callback = void (*)(QAbstractPrintDialog*, QMouseEvent*);
    using QAbstractPrintDialog_WheelEvent_Callback = void (*)(QAbstractPrintDialog*, QWheelEvent*);
    using QAbstractPrintDialog_KeyReleaseEvent_Callback = void (*)(QAbstractPrintDialog*, QKeyEvent*);
    using QAbstractPrintDialog_FocusInEvent_Callback = void (*)(QAbstractPrintDialog*, QFocusEvent*);
    using QAbstractPrintDialog_FocusOutEvent_Callback = void (*)(QAbstractPrintDialog*, QFocusEvent*);
    using QAbstractPrintDialog_EnterEvent_Callback = void (*)(QAbstractPrintDialog*, QEnterEvent*);
    using QAbstractPrintDialog_LeaveEvent_Callback = void (*)(QAbstractPrintDialog*, QEvent*);
    using QAbstractPrintDialog_PaintEvent_Callback = void (*)(QAbstractPrintDialog*, QPaintEvent*);
    using QAbstractPrintDialog_MoveEvent_Callback = void (*)(QAbstractPrintDialog*, QMoveEvent*);
    using QAbstractPrintDialog_TabletEvent_Callback = void (*)(QAbstractPrintDialog*, QTabletEvent*);
    using QAbstractPrintDialog_ActionEvent_Callback = void (*)(QAbstractPrintDialog*, QActionEvent*);
    using QAbstractPrintDialog_DragEnterEvent_Callback = void (*)(QAbstractPrintDialog*, QDragEnterEvent*);
    using QAbstractPrintDialog_DragMoveEvent_Callback = void (*)(QAbstractPrintDialog*, QDragMoveEvent*);
    using QAbstractPrintDialog_DragLeaveEvent_Callback = void (*)(QAbstractPrintDialog*, QDragLeaveEvent*);
    using QAbstractPrintDialog_DropEvent_Callback = void (*)(QAbstractPrintDialog*, QDropEvent*);
    using QAbstractPrintDialog_HideEvent_Callback = void (*)(QAbstractPrintDialog*, QHideEvent*);
    using QAbstractPrintDialog_NativeEvent_Callback = bool (*)(QAbstractPrintDialog*, const QByteArray&, void*, qintptr*);
    using QAbstractPrintDialog_ChangeEvent_Callback = void (*)(QAbstractPrintDialog*, QEvent*);
    using QAbstractPrintDialog_Metric_Callback = int (*)(const QAbstractPrintDialog*, QPaintDevice::PaintDeviceMetric);
    using QAbstractPrintDialog_InitPainter_Callback = void (*)(const QAbstractPrintDialog*, QPainter*);
    using QAbstractPrintDialog_Redirected_Callback = QPaintDevice* (*)(const QAbstractPrintDialog*, QPoint*);
    using QAbstractPrintDialog_SharedPainter_Callback = QPainter* (*)();
    using QAbstractPrintDialog_InputMethodEvent_Callback = void (*)(QAbstractPrintDialog*, QInputMethodEvent*);
    using QAbstractPrintDialog_InputMethodQuery_Callback = QVariant (*)(const QAbstractPrintDialog*, Qt::InputMethodQuery);
    using QAbstractPrintDialog_FocusNextPrevChild_Callback = bool (*)(QAbstractPrintDialog*, bool);
    using QAbstractPrintDialog_TimerEvent_Callback = void (*)(QAbstractPrintDialog*, QTimerEvent*);
    using QAbstractPrintDialog_ChildEvent_Callback = void (*)(QAbstractPrintDialog*, QChildEvent*);
    using QAbstractPrintDialog_CustomEvent_Callback = void (*)(QAbstractPrintDialog*, QEvent*);
    using QAbstractPrintDialog_ConnectNotify_Callback = void (*)(QAbstractPrintDialog*, const QMetaMethod&);
    using QAbstractPrintDialog_DisconnectNotify_Callback = void (*)(QAbstractPrintDialog*, const QMetaMethod&);
    using QAbstractPrintDialog_AdjustPosition_Callback = void (*)(QAbstractPrintDialog*, QWidget*);
    using QAbstractPrintDialog_UpdateMicroFocus_Callback = void (*)();
    using QAbstractPrintDialog_Create_Callback = void (*)();
    using QAbstractPrintDialog_Destroy_Callback = void (*)();
    using QAbstractPrintDialog_FocusNextChild_Callback = bool (*)();
    using QAbstractPrintDialog_FocusPreviousChild_Callback = bool (*)();
    using QAbstractPrintDialog_Sender_Callback = QObject* (*)();
    using QAbstractPrintDialog_SenderSignalIndex_Callback = int (*)();
    using QAbstractPrintDialog_Receivers_Callback = int (*)(const QAbstractPrintDialog*, const char*);
    using QAbstractPrintDialog_IsSignalConnected_Callback = bool (*)(const QAbstractPrintDialog*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QAbstractPrintDialog_Metacall_Callback qabstractprintdialog_metacall_callback = nullptr;
    QAbstractPrintDialog_SetVisible_Callback qabstractprintdialog_setvisible_callback = nullptr;
    QAbstractPrintDialog_SizeHint_Callback qabstractprintdialog_sizehint_callback = nullptr;
    QAbstractPrintDialog_MinimumSizeHint_Callback qabstractprintdialog_minimumsizehint_callback = nullptr;
    QAbstractPrintDialog_Open_Callback qabstractprintdialog_open_callback = nullptr;
    QAbstractPrintDialog_Exec_Callback qabstractprintdialog_exec_callback = nullptr;
    QAbstractPrintDialog_Done_Callback qabstractprintdialog_done_callback = nullptr;
    QAbstractPrintDialog_Accept_Callback qabstractprintdialog_accept_callback = nullptr;
    QAbstractPrintDialog_Reject_Callback qabstractprintdialog_reject_callback = nullptr;
    QAbstractPrintDialog_KeyPressEvent_Callback qabstractprintdialog_keypressevent_callback = nullptr;
    QAbstractPrintDialog_CloseEvent_Callback qabstractprintdialog_closeevent_callback = nullptr;
    QAbstractPrintDialog_ShowEvent_Callback qabstractprintdialog_showevent_callback = nullptr;
    QAbstractPrintDialog_ResizeEvent_Callback qabstractprintdialog_resizeevent_callback = nullptr;
    QAbstractPrintDialog_ContextMenuEvent_Callback qabstractprintdialog_contextmenuevent_callback = nullptr;
    QAbstractPrintDialog_EventFilter_Callback qabstractprintdialog_eventfilter_callback = nullptr;
    QAbstractPrintDialog_DevType_Callback qabstractprintdialog_devtype_callback = nullptr;
    QAbstractPrintDialog_HeightForWidth_Callback qabstractprintdialog_heightforwidth_callback = nullptr;
    QAbstractPrintDialog_HasHeightForWidth_Callback qabstractprintdialog_hasheightforwidth_callback = nullptr;
    QAbstractPrintDialog_PaintEngine_Callback qabstractprintdialog_paintengine_callback = nullptr;
    QAbstractPrintDialog_Event_Callback qabstractprintdialog_event_callback = nullptr;
    QAbstractPrintDialog_MousePressEvent_Callback qabstractprintdialog_mousepressevent_callback = nullptr;
    QAbstractPrintDialog_MouseReleaseEvent_Callback qabstractprintdialog_mousereleaseevent_callback = nullptr;
    QAbstractPrintDialog_MouseDoubleClickEvent_Callback qabstractprintdialog_mousedoubleclickevent_callback = nullptr;
    QAbstractPrintDialog_MouseMoveEvent_Callback qabstractprintdialog_mousemoveevent_callback = nullptr;
    QAbstractPrintDialog_WheelEvent_Callback qabstractprintdialog_wheelevent_callback = nullptr;
    QAbstractPrintDialog_KeyReleaseEvent_Callback qabstractprintdialog_keyreleaseevent_callback = nullptr;
    QAbstractPrintDialog_FocusInEvent_Callback qabstractprintdialog_focusinevent_callback = nullptr;
    QAbstractPrintDialog_FocusOutEvent_Callback qabstractprintdialog_focusoutevent_callback = nullptr;
    QAbstractPrintDialog_EnterEvent_Callback qabstractprintdialog_enterevent_callback = nullptr;
    QAbstractPrintDialog_LeaveEvent_Callback qabstractprintdialog_leaveevent_callback = nullptr;
    QAbstractPrintDialog_PaintEvent_Callback qabstractprintdialog_paintevent_callback = nullptr;
    QAbstractPrintDialog_MoveEvent_Callback qabstractprintdialog_moveevent_callback = nullptr;
    QAbstractPrintDialog_TabletEvent_Callback qabstractprintdialog_tabletevent_callback = nullptr;
    QAbstractPrintDialog_ActionEvent_Callback qabstractprintdialog_actionevent_callback = nullptr;
    QAbstractPrintDialog_DragEnterEvent_Callback qabstractprintdialog_dragenterevent_callback = nullptr;
    QAbstractPrintDialog_DragMoveEvent_Callback qabstractprintdialog_dragmoveevent_callback = nullptr;
    QAbstractPrintDialog_DragLeaveEvent_Callback qabstractprintdialog_dragleaveevent_callback = nullptr;
    QAbstractPrintDialog_DropEvent_Callback qabstractprintdialog_dropevent_callback = nullptr;
    QAbstractPrintDialog_HideEvent_Callback qabstractprintdialog_hideevent_callback = nullptr;
    QAbstractPrintDialog_NativeEvent_Callback qabstractprintdialog_nativeevent_callback = nullptr;
    QAbstractPrintDialog_ChangeEvent_Callback qabstractprintdialog_changeevent_callback = nullptr;
    QAbstractPrintDialog_Metric_Callback qabstractprintdialog_metric_callback = nullptr;
    QAbstractPrintDialog_InitPainter_Callback qabstractprintdialog_initpainter_callback = nullptr;
    QAbstractPrintDialog_Redirected_Callback qabstractprintdialog_redirected_callback = nullptr;
    QAbstractPrintDialog_SharedPainter_Callback qabstractprintdialog_sharedpainter_callback = nullptr;
    QAbstractPrintDialog_InputMethodEvent_Callback qabstractprintdialog_inputmethodevent_callback = nullptr;
    QAbstractPrintDialog_InputMethodQuery_Callback qabstractprintdialog_inputmethodquery_callback = nullptr;
    QAbstractPrintDialog_FocusNextPrevChild_Callback qabstractprintdialog_focusnextprevchild_callback = nullptr;
    QAbstractPrintDialog_TimerEvent_Callback qabstractprintdialog_timerevent_callback = nullptr;
    QAbstractPrintDialog_ChildEvent_Callback qabstractprintdialog_childevent_callback = nullptr;
    QAbstractPrintDialog_CustomEvent_Callback qabstractprintdialog_customevent_callback = nullptr;
    QAbstractPrintDialog_ConnectNotify_Callback qabstractprintdialog_connectnotify_callback = nullptr;
    QAbstractPrintDialog_DisconnectNotify_Callback qabstractprintdialog_disconnectnotify_callback = nullptr;
    QAbstractPrintDialog_AdjustPosition_Callback qabstractprintdialog_adjustposition_callback = nullptr;
    QAbstractPrintDialog_UpdateMicroFocus_Callback qabstractprintdialog_updatemicrofocus_callback = nullptr;
    QAbstractPrintDialog_Create_Callback qabstractprintdialog_create_callback = nullptr;
    QAbstractPrintDialog_Destroy_Callback qabstractprintdialog_destroy_callback = nullptr;
    QAbstractPrintDialog_FocusNextChild_Callback qabstractprintdialog_focusnextchild_callback = nullptr;
    QAbstractPrintDialog_FocusPreviousChild_Callback qabstractprintdialog_focuspreviouschild_callback = nullptr;
    QAbstractPrintDialog_Sender_Callback qabstractprintdialog_sender_callback = nullptr;
    QAbstractPrintDialog_SenderSignalIndex_Callback qabstractprintdialog_sendersignalindex_callback = nullptr;
    QAbstractPrintDialog_Receivers_Callback qabstractprintdialog_receivers_callback = nullptr;
    QAbstractPrintDialog_IsSignalConnected_Callback qabstractprintdialog_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qabstractprintdialog_metacall_isbase = false;
    mutable bool qabstractprintdialog_setvisible_isbase = false;
    mutable bool qabstractprintdialog_sizehint_isbase = false;
    mutable bool qabstractprintdialog_minimumsizehint_isbase = false;
    mutable bool qabstractprintdialog_open_isbase = false;
    mutable bool qabstractprintdialog_exec_isbase = false;
    mutable bool qabstractprintdialog_done_isbase = false;
    mutable bool qabstractprintdialog_accept_isbase = false;
    mutable bool qabstractprintdialog_reject_isbase = false;
    mutable bool qabstractprintdialog_keypressevent_isbase = false;
    mutable bool qabstractprintdialog_closeevent_isbase = false;
    mutable bool qabstractprintdialog_showevent_isbase = false;
    mutable bool qabstractprintdialog_resizeevent_isbase = false;
    mutable bool qabstractprintdialog_contextmenuevent_isbase = false;
    mutable bool qabstractprintdialog_eventfilter_isbase = false;
    mutable bool qabstractprintdialog_devtype_isbase = false;
    mutable bool qabstractprintdialog_heightforwidth_isbase = false;
    mutable bool qabstractprintdialog_hasheightforwidth_isbase = false;
    mutable bool qabstractprintdialog_paintengine_isbase = false;
    mutable bool qabstractprintdialog_event_isbase = false;
    mutable bool qabstractprintdialog_mousepressevent_isbase = false;
    mutable bool qabstractprintdialog_mousereleaseevent_isbase = false;
    mutable bool qabstractprintdialog_mousedoubleclickevent_isbase = false;
    mutable bool qabstractprintdialog_mousemoveevent_isbase = false;
    mutable bool qabstractprintdialog_wheelevent_isbase = false;
    mutable bool qabstractprintdialog_keyreleaseevent_isbase = false;
    mutable bool qabstractprintdialog_focusinevent_isbase = false;
    mutable bool qabstractprintdialog_focusoutevent_isbase = false;
    mutable bool qabstractprintdialog_enterevent_isbase = false;
    mutable bool qabstractprintdialog_leaveevent_isbase = false;
    mutable bool qabstractprintdialog_paintevent_isbase = false;
    mutable bool qabstractprintdialog_moveevent_isbase = false;
    mutable bool qabstractprintdialog_tabletevent_isbase = false;
    mutable bool qabstractprintdialog_actionevent_isbase = false;
    mutable bool qabstractprintdialog_dragenterevent_isbase = false;
    mutable bool qabstractprintdialog_dragmoveevent_isbase = false;
    mutable bool qabstractprintdialog_dragleaveevent_isbase = false;
    mutable bool qabstractprintdialog_dropevent_isbase = false;
    mutable bool qabstractprintdialog_hideevent_isbase = false;
    mutable bool qabstractprintdialog_nativeevent_isbase = false;
    mutable bool qabstractprintdialog_changeevent_isbase = false;
    mutable bool qabstractprintdialog_metric_isbase = false;
    mutable bool qabstractprintdialog_initpainter_isbase = false;
    mutable bool qabstractprintdialog_redirected_isbase = false;
    mutable bool qabstractprintdialog_sharedpainter_isbase = false;
    mutable bool qabstractprintdialog_inputmethodevent_isbase = false;
    mutable bool qabstractprintdialog_inputmethodquery_isbase = false;
    mutable bool qabstractprintdialog_focusnextprevchild_isbase = false;
    mutable bool qabstractprintdialog_timerevent_isbase = false;
    mutable bool qabstractprintdialog_childevent_isbase = false;
    mutable bool qabstractprintdialog_customevent_isbase = false;
    mutable bool qabstractprintdialog_connectnotify_isbase = false;
    mutable bool qabstractprintdialog_disconnectnotify_isbase = false;
    mutable bool qabstractprintdialog_adjustposition_isbase = false;
    mutable bool qabstractprintdialog_updatemicrofocus_isbase = false;
    mutable bool qabstractprintdialog_create_isbase = false;
    mutable bool qabstractprintdialog_destroy_isbase = false;
    mutable bool qabstractprintdialog_focusnextchild_isbase = false;
    mutable bool qabstractprintdialog_focuspreviouschild_isbase = false;
    mutable bool qabstractprintdialog_sender_isbase = false;
    mutable bool qabstractprintdialog_sendersignalindex_isbase = false;
    mutable bool qabstractprintdialog_receivers_isbase = false;
    mutable bool qabstractprintdialog_issignalconnected_isbase = false;

  public:
    VirtualQAbstractPrintDialog(QPrinter* printer) : QAbstractPrintDialog(printer){};
    VirtualQAbstractPrintDialog(QPrinter* printer, QWidget* parent) : QAbstractPrintDialog(printer, parent){};

    ~VirtualQAbstractPrintDialog() {
        qabstractprintdialog_metacall_callback = nullptr;
        qabstractprintdialog_setvisible_callback = nullptr;
        qabstractprintdialog_sizehint_callback = nullptr;
        qabstractprintdialog_minimumsizehint_callback = nullptr;
        qabstractprintdialog_open_callback = nullptr;
        qabstractprintdialog_exec_callback = nullptr;
        qabstractprintdialog_done_callback = nullptr;
        qabstractprintdialog_accept_callback = nullptr;
        qabstractprintdialog_reject_callback = nullptr;
        qabstractprintdialog_keypressevent_callback = nullptr;
        qabstractprintdialog_closeevent_callback = nullptr;
        qabstractprintdialog_showevent_callback = nullptr;
        qabstractprintdialog_resizeevent_callback = nullptr;
        qabstractprintdialog_contextmenuevent_callback = nullptr;
        qabstractprintdialog_eventfilter_callback = nullptr;
        qabstractprintdialog_devtype_callback = nullptr;
        qabstractprintdialog_heightforwidth_callback = nullptr;
        qabstractprintdialog_hasheightforwidth_callback = nullptr;
        qabstractprintdialog_paintengine_callback = nullptr;
        qabstractprintdialog_event_callback = nullptr;
        qabstractprintdialog_mousepressevent_callback = nullptr;
        qabstractprintdialog_mousereleaseevent_callback = nullptr;
        qabstractprintdialog_mousedoubleclickevent_callback = nullptr;
        qabstractprintdialog_mousemoveevent_callback = nullptr;
        qabstractprintdialog_wheelevent_callback = nullptr;
        qabstractprintdialog_keyreleaseevent_callback = nullptr;
        qabstractprintdialog_focusinevent_callback = nullptr;
        qabstractprintdialog_focusoutevent_callback = nullptr;
        qabstractprintdialog_enterevent_callback = nullptr;
        qabstractprintdialog_leaveevent_callback = nullptr;
        qabstractprintdialog_paintevent_callback = nullptr;
        qabstractprintdialog_moveevent_callback = nullptr;
        qabstractprintdialog_tabletevent_callback = nullptr;
        qabstractprintdialog_actionevent_callback = nullptr;
        qabstractprintdialog_dragenterevent_callback = nullptr;
        qabstractprintdialog_dragmoveevent_callback = nullptr;
        qabstractprintdialog_dragleaveevent_callback = nullptr;
        qabstractprintdialog_dropevent_callback = nullptr;
        qabstractprintdialog_hideevent_callback = nullptr;
        qabstractprintdialog_nativeevent_callback = nullptr;
        qabstractprintdialog_changeevent_callback = nullptr;
        qabstractprintdialog_metric_callback = nullptr;
        qabstractprintdialog_initpainter_callback = nullptr;
        qabstractprintdialog_redirected_callback = nullptr;
        qabstractprintdialog_sharedpainter_callback = nullptr;
        qabstractprintdialog_inputmethodevent_callback = nullptr;
        qabstractprintdialog_inputmethodquery_callback = nullptr;
        qabstractprintdialog_focusnextprevchild_callback = nullptr;
        qabstractprintdialog_timerevent_callback = nullptr;
        qabstractprintdialog_childevent_callback = nullptr;
        qabstractprintdialog_customevent_callback = nullptr;
        qabstractprintdialog_connectnotify_callback = nullptr;
        qabstractprintdialog_disconnectnotify_callback = nullptr;
        qabstractprintdialog_adjustposition_callback = nullptr;
        qabstractprintdialog_updatemicrofocus_callback = nullptr;
        qabstractprintdialog_create_callback = nullptr;
        qabstractprintdialog_destroy_callback = nullptr;
        qabstractprintdialog_focusnextchild_callback = nullptr;
        qabstractprintdialog_focuspreviouschild_callback = nullptr;
        qabstractprintdialog_sender_callback = nullptr;
        qabstractprintdialog_sendersignalindex_callback = nullptr;
        qabstractprintdialog_receivers_callback = nullptr;
        qabstractprintdialog_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQAbstractPrintDialog_Metacall_Callback(QAbstractPrintDialog_Metacall_Callback cb) { qabstractprintdialog_metacall_callback = cb; }
    void setQAbstractPrintDialog_SetVisible_Callback(QAbstractPrintDialog_SetVisible_Callback cb) { qabstractprintdialog_setvisible_callback = cb; }
    void setQAbstractPrintDialog_SizeHint_Callback(QAbstractPrintDialog_SizeHint_Callback cb) { qabstractprintdialog_sizehint_callback = cb; }
    void setQAbstractPrintDialog_MinimumSizeHint_Callback(QAbstractPrintDialog_MinimumSizeHint_Callback cb) { qabstractprintdialog_minimumsizehint_callback = cb; }
    void setQAbstractPrintDialog_Open_Callback(QAbstractPrintDialog_Open_Callback cb) { qabstractprintdialog_open_callback = cb; }
    void setQAbstractPrintDialog_Exec_Callback(QAbstractPrintDialog_Exec_Callback cb) { qabstractprintdialog_exec_callback = cb; }
    void setQAbstractPrintDialog_Done_Callback(QAbstractPrintDialog_Done_Callback cb) { qabstractprintdialog_done_callback = cb; }
    void setQAbstractPrintDialog_Accept_Callback(QAbstractPrintDialog_Accept_Callback cb) { qabstractprintdialog_accept_callback = cb; }
    void setQAbstractPrintDialog_Reject_Callback(QAbstractPrintDialog_Reject_Callback cb) { qabstractprintdialog_reject_callback = cb; }
    void setQAbstractPrintDialog_KeyPressEvent_Callback(QAbstractPrintDialog_KeyPressEvent_Callback cb) { qabstractprintdialog_keypressevent_callback = cb; }
    void setQAbstractPrintDialog_CloseEvent_Callback(QAbstractPrintDialog_CloseEvent_Callback cb) { qabstractprintdialog_closeevent_callback = cb; }
    void setQAbstractPrintDialog_ShowEvent_Callback(QAbstractPrintDialog_ShowEvent_Callback cb) { qabstractprintdialog_showevent_callback = cb; }
    void setQAbstractPrintDialog_ResizeEvent_Callback(QAbstractPrintDialog_ResizeEvent_Callback cb) { qabstractprintdialog_resizeevent_callback = cb; }
    void setQAbstractPrintDialog_ContextMenuEvent_Callback(QAbstractPrintDialog_ContextMenuEvent_Callback cb) { qabstractprintdialog_contextmenuevent_callback = cb; }
    void setQAbstractPrintDialog_EventFilter_Callback(QAbstractPrintDialog_EventFilter_Callback cb) { qabstractprintdialog_eventfilter_callback = cb; }
    void setQAbstractPrintDialog_DevType_Callback(QAbstractPrintDialog_DevType_Callback cb) { qabstractprintdialog_devtype_callback = cb; }
    void setQAbstractPrintDialog_HeightForWidth_Callback(QAbstractPrintDialog_HeightForWidth_Callback cb) { qabstractprintdialog_heightforwidth_callback = cb; }
    void setQAbstractPrintDialog_HasHeightForWidth_Callback(QAbstractPrintDialog_HasHeightForWidth_Callback cb) { qabstractprintdialog_hasheightforwidth_callback = cb; }
    void setQAbstractPrintDialog_PaintEngine_Callback(QAbstractPrintDialog_PaintEngine_Callback cb) { qabstractprintdialog_paintengine_callback = cb; }
    void setQAbstractPrintDialog_Event_Callback(QAbstractPrintDialog_Event_Callback cb) { qabstractprintdialog_event_callback = cb; }
    void setQAbstractPrintDialog_MousePressEvent_Callback(QAbstractPrintDialog_MousePressEvent_Callback cb) { qabstractprintdialog_mousepressevent_callback = cb; }
    void setQAbstractPrintDialog_MouseReleaseEvent_Callback(QAbstractPrintDialog_MouseReleaseEvent_Callback cb) { qabstractprintdialog_mousereleaseevent_callback = cb; }
    void setQAbstractPrintDialog_MouseDoubleClickEvent_Callback(QAbstractPrintDialog_MouseDoubleClickEvent_Callback cb) { qabstractprintdialog_mousedoubleclickevent_callback = cb; }
    void setQAbstractPrintDialog_MouseMoveEvent_Callback(QAbstractPrintDialog_MouseMoveEvent_Callback cb) { qabstractprintdialog_mousemoveevent_callback = cb; }
    void setQAbstractPrintDialog_WheelEvent_Callback(QAbstractPrintDialog_WheelEvent_Callback cb) { qabstractprintdialog_wheelevent_callback = cb; }
    void setQAbstractPrintDialog_KeyReleaseEvent_Callback(QAbstractPrintDialog_KeyReleaseEvent_Callback cb) { qabstractprintdialog_keyreleaseevent_callback = cb; }
    void setQAbstractPrintDialog_FocusInEvent_Callback(QAbstractPrintDialog_FocusInEvent_Callback cb) { qabstractprintdialog_focusinevent_callback = cb; }
    void setQAbstractPrintDialog_FocusOutEvent_Callback(QAbstractPrintDialog_FocusOutEvent_Callback cb) { qabstractprintdialog_focusoutevent_callback = cb; }
    void setQAbstractPrintDialog_EnterEvent_Callback(QAbstractPrintDialog_EnterEvent_Callback cb) { qabstractprintdialog_enterevent_callback = cb; }
    void setQAbstractPrintDialog_LeaveEvent_Callback(QAbstractPrintDialog_LeaveEvent_Callback cb) { qabstractprintdialog_leaveevent_callback = cb; }
    void setQAbstractPrintDialog_PaintEvent_Callback(QAbstractPrintDialog_PaintEvent_Callback cb) { qabstractprintdialog_paintevent_callback = cb; }
    void setQAbstractPrintDialog_MoveEvent_Callback(QAbstractPrintDialog_MoveEvent_Callback cb) { qabstractprintdialog_moveevent_callback = cb; }
    void setQAbstractPrintDialog_TabletEvent_Callback(QAbstractPrintDialog_TabletEvent_Callback cb) { qabstractprintdialog_tabletevent_callback = cb; }
    void setQAbstractPrintDialog_ActionEvent_Callback(QAbstractPrintDialog_ActionEvent_Callback cb) { qabstractprintdialog_actionevent_callback = cb; }
    void setQAbstractPrintDialog_DragEnterEvent_Callback(QAbstractPrintDialog_DragEnterEvent_Callback cb) { qabstractprintdialog_dragenterevent_callback = cb; }
    void setQAbstractPrintDialog_DragMoveEvent_Callback(QAbstractPrintDialog_DragMoveEvent_Callback cb) { qabstractprintdialog_dragmoveevent_callback = cb; }
    void setQAbstractPrintDialog_DragLeaveEvent_Callback(QAbstractPrintDialog_DragLeaveEvent_Callback cb) { qabstractprintdialog_dragleaveevent_callback = cb; }
    void setQAbstractPrintDialog_DropEvent_Callback(QAbstractPrintDialog_DropEvent_Callback cb) { qabstractprintdialog_dropevent_callback = cb; }
    void setQAbstractPrintDialog_HideEvent_Callback(QAbstractPrintDialog_HideEvent_Callback cb) { qabstractprintdialog_hideevent_callback = cb; }
    void setQAbstractPrintDialog_NativeEvent_Callback(QAbstractPrintDialog_NativeEvent_Callback cb) { qabstractprintdialog_nativeevent_callback = cb; }
    void setQAbstractPrintDialog_ChangeEvent_Callback(QAbstractPrintDialog_ChangeEvent_Callback cb) { qabstractprintdialog_changeevent_callback = cb; }
    void setQAbstractPrintDialog_Metric_Callback(QAbstractPrintDialog_Metric_Callback cb) { qabstractprintdialog_metric_callback = cb; }
    void setQAbstractPrintDialog_InitPainter_Callback(QAbstractPrintDialog_InitPainter_Callback cb) { qabstractprintdialog_initpainter_callback = cb; }
    void setQAbstractPrintDialog_Redirected_Callback(QAbstractPrintDialog_Redirected_Callback cb) { qabstractprintdialog_redirected_callback = cb; }
    void setQAbstractPrintDialog_SharedPainter_Callback(QAbstractPrintDialog_SharedPainter_Callback cb) { qabstractprintdialog_sharedpainter_callback = cb; }
    void setQAbstractPrintDialog_InputMethodEvent_Callback(QAbstractPrintDialog_InputMethodEvent_Callback cb) { qabstractprintdialog_inputmethodevent_callback = cb; }
    void setQAbstractPrintDialog_InputMethodQuery_Callback(QAbstractPrintDialog_InputMethodQuery_Callback cb) { qabstractprintdialog_inputmethodquery_callback = cb; }
    void setQAbstractPrintDialog_FocusNextPrevChild_Callback(QAbstractPrintDialog_FocusNextPrevChild_Callback cb) { qabstractprintdialog_focusnextprevchild_callback = cb; }
    void setQAbstractPrintDialog_TimerEvent_Callback(QAbstractPrintDialog_TimerEvent_Callback cb) { qabstractprintdialog_timerevent_callback = cb; }
    void setQAbstractPrintDialog_ChildEvent_Callback(QAbstractPrintDialog_ChildEvent_Callback cb) { qabstractprintdialog_childevent_callback = cb; }
    void setQAbstractPrintDialog_CustomEvent_Callback(QAbstractPrintDialog_CustomEvent_Callback cb) { qabstractprintdialog_customevent_callback = cb; }
    void setQAbstractPrintDialog_ConnectNotify_Callback(QAbstractPrintDialog_ConnectNotify_Callback cb) { qabstractprintdialog_connectnotify_callback = cb; }
    void setQAbstractPrintDialog_DisconnectNotify_Callback(QAbstractPrintDialog_DisconnectNotify_Callback cb) { qabstractprintdialog_disconnectnotify_callback = cb; }
    void setQAbstractPrintDialog_AdjustPosition_Callback(QAbstractPrintDialog_AdjustPosition_Callback cb) { qabstractprintdialog_adjustposition_callback = cb; }
    void setQAbstractPrintDialog_UpdateMicroFocus_Callback(QAbstractPrintDialog_UpdateMicroFocus_Callback cb) { qabstractprintdialog_updatemicrofocus_callback = cb; }
    void setQAbstractPrintDialog_Create_Callback(QAbstractPrintDialog_Create_Callback cb) { qabstractprintdialog_create_callback = cb; }
    void setQAbstractPrintDialog_Destroy_Callback(QAbstractPrintDialog_Destroy_Callback cb) { qabstractprintdialog_destroy_callback = cb; }
    void setQAbstractPrintDialog_FocusNextChild_Callback(QAbstractPrintDialog_FocusNextChild_Callback cb) { qabstractprintdialog_focusnextchild_callback = cb; }
    void setQAbstractPrintDialog_FocusPreviousChild_Callback(QAbstractPrintDialog_FocusPreviousChild_Callback cb) { qabstractprintdialog_focuspreviouschild_callback = cb; }
    void setQAbstractPrintDialog_Sender_Callback(QAbstractPrintDialog_Sender_Callback cb) { qabstractprintdialog_sender_callback = cb; }
    void setQAbstractPrintDialog_SenderSignalIndex_Callback(QAbstractPrintDialog_SenderSignalIndex_Callback cb) { qabstractprintdialog_sendersignalindex_callback = cb; }
    void setQAbstractPrintDialog_Receivers_Callback(QAbstractPrintDialog_Receivers_Callback cb) { qabstractprintdialog_receivers_callback = cb; }
    void setQAbstractPrintDialog_IsSignalConnected_Callback(QAbstractPrintDialog_IsSignalConnected_Callback cb) { qabstractprintdialog_issignalconnected_callback = cb; }

    // Base flag setters
    void setQAbstractPrintDialog_Metacall_IsBase(bool value) const { qabstractprintdialog_metacall_isbase = value; }
    void setQAbstractPrintDialog_SetVisible_IsBase(bool value) const { qabstractprintdialog_setvisible_isbase = value; }
    void setQAbstractPrintDialog_SizeHint_IsBase(bool value) const { qabstractprintdialog_sizehint_isbase = value; }
    void setQAbstractPrintDialog_MinimumSizeHint_IsBase(bool value) const { qabstractprintdialog_minimumsizehint_isbase = value; }
    void setQAbstractPrintDialog_Open_IsBase(bool value) const { qabstractprintdialog_open_isbase = value; }
    void setQAbstractPrintDialog_Exec_IsBase(bool value) const { qabstractprintdialog_exec_isbase = value; }
    void setQAbstractPrintDialog_Done_IsBase(bool value) const { qabstractprintdialog_done_isbase = value; }
    void setQAbstractPrintDialog_Accept_IsBase(bool value) const { qabstractprintdialog_accept_isbase = value; }
    void setQAbstractPrintDialog_Reject_IsBase(bool value) const { qabstractprintdialog_reject_isbase = value; }
    void setQAbstractPrintDialog_KeyPressEvent_IsBase(bool value) const { qabstractprintdialog_keypressevent_isbase = value; }
    void setQAbstractPrintDialog_CloseEvent_IsBase(bool value) const { qabstractprintdialog_closeevent_isbase = value; }
    void setQAbstractPrintDialog_ShowEvent_IsBase(bool value) const { qabstractprintdialog_showevent_isbase = value; }
    void setQAbstractPrintDialog_ResizeEvent_IsBase(bool value) const { qabstractprintdialog_resizeevent_isbase = value; }
    void setQAbstractPrintDialog_ContextMenuEvent_IsBase(bool value) const { qabstractprintdialog_contextmenuevent_isbase = value; }
    void setQAbstractPrintDialog_EventFilter_IsBase(bool value) const { qabstractprintdialog_eventfilter_isbase = value; }
    void setQAbstractPrintDialog_DevType_IsBase(bool value) const { qabstractprintdialog_devtype_isbase = value; }
    void setQAbstractPrintDialog_HeightForWidth_IsBase(bool value) const { qabstractprintdialog_heightforwidth_isbase = value; }
    void setQAbstractPrintDialog_HasHeightForWidth_IsBase(bool value) const { qabstractprintdialog_hasheightforwidth_isbase = value; }
    void setQAbstractPrintDialog_PaintEngine_IsBase(bool value) const { qabstractprintdialog_paintengine_isbase = value; }
    void setQAbstractPrintDialog_Event_IsBase(bool value) const { qabstractprintdialog_event_isbase = value; }
    void setQAbstractPrintDialog_MousePressEvent_IsBase(bool value) const { qabstractprintdialog_mousepressevent_isbase = value; }
    void setQAbstractPrintDialog_MouseReleaseEvent_IsBase(bool value) const { qabstractprintdialog_mousereleaseevent_isbase = value; }
    void setQAbstractPrintDialog_MouseDoubleClickEvent_IsBase(bool value) const { qabstractprintdialog_mousedoubleclickevent_isbase = value; }
    void setQAbstractPrintDialog_MouseMoveEvent_IsBase(bool value) const { qabstractprintdialog_mousemoveevent_isbase = value; }
    void setQAbstractPrintDialog_WheelEvent_IsBase(bool value) const { qabstractprintdialog_wheelevent_isbase = value; }
    void setQAbstractPrintDialog_KeyReleaseEvent_IsBase(bool value) const { qabstractprintdialog_keyreleaseevent_isbase = value; }
    void setQAbstractPrintDialog_FocusInEvent_IsBase(bool value) const { qabstractprintdialog_focusinevent_isbase = value; }
    void setQAbstractPrintDialog_FocusOutEvent_IsBase(bool value) const { qabstractprintdialog_focusoutevent_isbase = value; }
    void setQAbstractPrintDialog_EnterEvent_IsBase(bool value) const { qabstractprintdialog_enterevent_isbase = value; }
    void setQAbstractPrintDialog_LeaveEvent_IsBase(bool value) const { qabstractprintdialog_leaveevent_isbase = value; }
    void setQAbstractPrintDialog_PaintEvent_IsBase(bool value) const { qabstractprintdialog_paintevent_isbase = value; }
    void setQAbstractPrintDialog_MoveEvent_IsBase(bool value) const { qabstractprintdialog_moveevent_isbase = value; }
    void setQAbstractPrintDialog_TabletEvent_IsBase(bool value) const { qabstractprintdialog_tabletevent_isbase = value; }
    void setQAbstractPrintDialog_ActionEvent_IsBase(bool value) const { qabstractprintdialog_actionevent_isbase = value; }
    void setQAbstractPrintDialog_DragEnterEvent_IsBase(bool value) const { qabstractprintdialog_dragenterevent_isbase = value; }
    void setQAbstractPrintDialog_DragMoveEvent_IsBase(bool value) const { qabstractprintdialog_dragmoveevent_isbase = value; }
    void setQAbstractPrintDialog_DragLeaveEvent_IsBase(bool value) const { qabstractprintdialog_dragleaveevent_isbase = value; }
    void setQAbstractPrintDialog_DropEvent_IsBase(bool value) const { qabstractprintdialog_dropevent_isbase = value; }
    void setQAbstractPrintDialog_HideEvent_IsBase(bool value) const { qabstractprintdialog_hideevent_isbase = value; }
    void setQAbstractPrintDialog_NativeEvent_IsBase(bool value) const { qabstractprintdialog_nativeevent_isbase = value; }
    void setQAbstractPrintDialog_ChangeEvent_IsBase(bool value) const { qabstractprintdialog_changeevent_isbase = value; }
    void setQAbstractPrintDialog_Metric_IsBase(bool value) const { qabstractprintdialog_metric_isbase = value; }
    void setQAbstractPrintDialog_InitPainter_IsBase(bool value) const { qabstractprintdialog_initpainter_isbase = value; }
    void setQAbstractPrintDialog_Redirected_IsBase(bool value) const { qabstractprintdialog_redirected_isbase = value; }
    void setQAbstractPrintDialog_SharedPainter_IsBase(bool value) const { qabstractprintdialog_sharedpainter_isbase = value; }
    void setQAbstractPrintDialog_InputMethodEvent_IsBase(bool value) const { qabstractprintdialog_inputmethodevent_isbase = value; }
    void setQAbstractPrintDialog_InputMethodQuery_IsBase(bool value) const { qabstractprintdialog_inputmethodquery_isbase = value; }
    void setQAbstractPrintDialog_FocusNextPrevChild_IsBase(bool value) const { qabstractprintdialog_focusnextprevchild_isbase = value; }
    void setQAbstractPrintDialog_TimerEvent_IsBase(bool value) const { qabstractprintdialog_timerevent_isbase = value; }
    void setQAbstractPrintDialog_ChildEvent_IsBase(bool value) const { qabstractprintdialog_childevent_isbase = value; }
    void setQAbstractPrintDialog_CustomEvent_IsBase(bool value) const { qabstractprintdialog_customevent_isbase = value; }
    void setQAbstractPrintDialog_ConnectNotify_IsBase(bool value) const { qabstractprintdialog_connectnotify_isbase = value; }
    void setQAbstractPrintDialog_DisconnectNotify_IsBase(bool value) const { qabstractprintdialog_disconnectnotify_isbase = value; }
    void setQAbstractPrintDialog_AdjustPosition_IsBase(bool value) const { qabstractprintdialog_adjustposition_isbase = value; }
    void setQAbstractPrintDialog_UpdateMicroFocus_IsBase(bool value) const { qabstractprintdialog_updatemicrofocus_isbase = value; }
    void setQAbstractPrintDialog_Create_IsBase(bool value) const { qabstractprintdialog_create_isbase = value; }
    void setQAbstractPrintDialog_Destroy_IsBase(bool value) const { qabstractprintdialog_destroy_isbase = value; }
    void setQAbstractPrintDialog_FocusNextChild_IsBase(bool value) const { qabstractprintdialog_focusnextchild_isbase = value; }
    void setQAbstractPrintDialog_FocusPreviousChild_IsBase(bool value) const { qabstractprintdialog_focuspreviouschild_isbase = value; }
    void setQAbstractPrintDialog_Sender_IsBase(bool value) const { qabstractprintdialog_sender_isbase = value; }
    void setQAbstractPrintDialog_SenderSignalIndex_IsBase(bool value) const { qabstractprintdialog_sendersignalindex_isbase = value; }
    void setQAbstractPrintDialog_Receivers_IsBase(bool value) const { qabstractprintdialog_receivers_isbase = value; }
    void setQAbstractPrintDialog_IsSignalConnected_IsBase(bool value) const { qabstractprintdialog_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qabstractprintdialog_metacall_isbase) {
            qabstractprintdialog_metacall_isbase = false;
            return QAbstractPrintDialog::qt_metacall(param1, param2, param3);
        } else if (qabstractprintdialog_metacall_callback != nullptr) {
            return qabstractprintdialog_metacall_callback(this, param1, param2, param3);
        } else {
            return QAbstractPrintDialog::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qabstractprintdialog_setvisible_isbase) {
            qabstractprintdialog_setvisible_isbase = false;
            QAbstractPrintDialog::setVisible(visible);
        } else if (qabstractprintdialog_setvisible_callback != nullptr) {
            qabstractprintdialog_setvisible_callback(this, visible);
        } else {
            QAbstractPrintDialog::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qabstractprintdialog_sizehint_isbase) {
            qabstractprintdialog_sizehint_isbase = false;
            return QAbstractPrintDialog::sizeHint();
        } else if (qabstractprintdialog_sizehint_callback != nullptr) {
            return qabstractprintdialog_sizehint_callback();
        } else {
            return QAbstractPrintDialog::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qabstractprintdialog_minimumsizehint_isbase) {
            qabstractprintdialog_minimumsizehint_isbase = false;
            return QAbstractPrintDialog::minimumSizeHint();
        } else if (qabstractprintdialog_minimumsizehint_callback != nullptr) {
            return qabstractprintdialog_minimumsizehint_callback();
        } else {
            return QAbstractPrintDialog::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (qabstractprintdialog_open_isbase) {
            qabstractprintdialog_open_isbase = false;
            QAbstractPrintDialog::open();
        } else if (qabstractprintdialog_open_callback != nullptr) {
            qabstractprintdialog_open_callback();
        } else {
            QAbstractPrintDialog::open();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (qabstractprintdialog_exec_isbase) {
            qabstractprintdialog_exec_isbase = false;
            return QAbstractPrintDialog::exec();
        } else if (qabstractprintdialog_exec_callback != nullptr) {
            return qabstractprintdialog_exec_callback();
        } else {
            return QAbstractPrintDialog::exec();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (qabstractprintdialog_done_isbase) {
            qabstractprintdialog_done_isbase = false;
            QAbstractPrintDialog::done(param1);
        } else if (qabstractprintdialog_done_callback != nullptr) {
            qabstractprintdialog_done_callback(this, param1);
        } else {
            QAbstractPrintDialog::done(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (qabstractprintdialog_accept_isbase) {
            qabstractprintdialog_accept_isbase = false;
            QAbstractPrintDialog::accept();
        } else if (qabstractprintdialog_accept_callback != nullptr) {
            qabstractprintdialog_accept_callback();
        } else {
            QAbstractPrintDialog::accept();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (qabstractprintdialog_reject_isbase) {
            qabstractprintdialog_reject_isbase = false;
            QAbstractPrintDialog::reject();
        } else if (qabstractprintdialog_reject_callback != nullptr) {
            qabstractprintdialog_reject_callback();
        } else {
            QAbstractPrintDialog::reject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qabstractprintdialog_keypressevent_isbase) {
            qabstractprintdialog_keypressevent_isbase = false;
            QAbstractPrintDialog::keyPressEvent(param1);
        } else if (qabstractprintdialog_keypressevent_callback != nullptr) {
            qabstractprintdialog_keypressevent_callback(this, param1);
        } else {
            QAbstractPrintDialog::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* param1) override {
        if (qabstractprintdialog_closeevent_isbase) {
            qabstractprintdialog_closeevent_isbase = false;
            QAbstractPrintDialog::closeEvent(param1);
        } else if (qabstractprintdialog_closeevent_callback != nullptr) {
            qabstractprintdialog_closeevent_callback(this, param1);
        } else {
            QAbstractPrintDialog::closeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qabstractprintdialog_showevent_isbase) {
            qabstractprintdialog_showevent_isbase = false;
            QAbstractPrintDialog::showEvent(param1);
        } else if (qabstractprintdialog_showevent_callback != nullptr) {
            qabstractprintdialog_showevent_callback(this, param1);
        } else {
            QAbstractPrintDialog::showEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* param1) override {
        if (qabstractprintdialog_resizeevent_isbase) {
            qabstractprintdialog_resizeevent_isbase = false;
            QAbstractPrintDialog::resizeEvent(param1);
        } else if (qabstractprintdialog_resizeevent_callback != nullptr) {
            qabstractprintdialog_resizeevent_callback(this, param1);
        } else {
            QAbstractPrintDialog::resizeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qabstractprintdialog_contextmenuevent_isbase) {
            qabstractprintdialog_contextmenuevent_isbase = false;
            QAbstractPrintDialog::contextMenuEvent(param1);
        } else if (qabstractprintdialog_contextmenuevent_callback != nullptr) {
            qabstractprintdialog_contextmenuevent_callback(this, param1);
        } else {
            QAbstractPrintDialog::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qabstractprintdialog_eventfilter_isbase) {
            qabstractprintdialog_eventfilter_isbase = false;
            return QAbstractPrintDialog::eventFilter(param1, param2);
        } else if (qabstractprintdialog_eventfilter_callback != nullptr) {
            return qabstractprintdialog_eventfilter_callback(this, param1, param2);
        } else {
            return QAbstractPrintDialog::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qabstractprintdialog_devtype_isbase) {
            qabstractprintdialog_devtype_isbase = false;
            return QAbstractPrintDialog::devType();
        } else if (qabstractprintdialog_devtype_callback != nullptr) {
            return qabstractprintdialog_devtype_callback();
        } else {
            return QAbstractPrintDialog::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qabstractprintdialog_heightforwidth_isbase) {
            qabstractprintdialog_heightforwidth_isbase = false;
            return QAbstractPrintDialog::heightForWidth(param1);
        } else if (qabstractprintdialog_heightforwidth_callback != nullptr) {
            return qabstractprintdialog_heightforwidth_callback(this, param1);
        } else {
            return QAbstractPrintDialog::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qabstractprintdialog_hasheightforwidth_isbase) {
            qabstractprintdialog_hasheightforwidth_isbase = false;
            return QAbstractPrintDialog::hasHeightForWidth();
        } else if (qabstractprintdialog_hasheightforwidth_callback != nullptr) {
            return qabstractprintdialog_hasheightforwidth_callback();
        } else {
            return QAbstractPrintDialog::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qabstractprintdialog_paintengine_isbase) {
            qabstractprintdialog_paintengine_isbase = false;
            return QAbstractPrintDialog::paintEngine();
        } else if (qabstractprintdialog_paintengine_callback != nullptr) {
            return qabstractprintdialog_paintengine_callback();
        } else {
            return QAbstractPrintDialog::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qabstractprintdialog_event_isbase) {
            qabstractprintdialog_event_isbase = false;
            return QAbstractPrintDialog::event(event);
        } else if (qabstractprintdialog_event_callback != nullptr) {
            return qabstractprintdialog_event_callback(this, event);
        } else {
            return QAbstractPrintDialog::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qabstractprintdialog_mousepressevent_isbase) {
            qabstractprintdialog_mousepressevent_isbase = false;
            QAbstractPrintDialog::mousePressEvent(event);
        } else if (qabstractprintdialog_mousepressevent_callback != nullptr) {
            qabstractprintdialog_mousepressevent_callback(this, event);
        } else {
            QAbstractPrintDialog::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qabstractprintdialog_mousereleaseevent_isbase) {
            qabstractprintdialog_mousereleaseevent_isbase = false;
            QAbstractPrintDialog::mouseReleaseEvent(event);
        } else if (qabstractprintdialog_mousereleaseevent_callback != nullptr) {
            qabstractprintdialog_mousereleaseevent_callback(this, event);
        } else {
            QAbstractPrintDialog::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qabstractprintdialog_mousedoubleclickevent_isbase) {
            qabstractprintdialog_mousedoubleclickevent_isbase = false;
            QAbstractPrintDialog::mouseDoubleClickEvent(event);
        } else if (qabstractprintdialog_mousedoubleclickevent_callback != nullptr) {
            qabstractprintdialog_mousedoubleclickevent_callback(this, event);
        } else {
            QAbstractPrintDialog::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qabstractprintdialog_mousemoveevent_isbase) {
            qabstractprintdialog_mousemoveevent_isbase = false;
            QAbstractPrintDialog::mouseMoveEvent(event);
        } else if (qabstractprintdialog_mousemoveevent_callback != nullptr) {
            qabstractprintdialog_mousemoveevent_callback(this, event);
        } else {
            QAbstractPrintDialog::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qabstractprintdialog_wheelevent_isbase) {
            qabstractprintdialog_wheelevent_isbase = false;
            QAbstractPrintDialog::wheelEvent(event);
        } else if (qabstractprintdialog_wheelevent_callback != nullptr) {
            qabstractprintdialog_wheelevent_callback(this, event);
        } else {
            QAbstractPrintDialog::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qabstractprintdialog_keyreleaseevent_isbase) {
            qabstractprintdialog_keyreleaseevent_isbase = false;
            QAbstractPrintDialog::keyReleaseEvent(event);
        } else if (qabstractprintdialog_keyreleaseevent_callback != nullptr) {
            qabstractprintdialog_keyreleaseevent_callback(this, event);
        } else {
            QAbstractPrintDialog::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qabstractprintdialog_focusinevent_isbase) {
            qabstractprintdialog_focusinevent_isbase = false;
            QAbstractPrintDialog::focusInEvent(event);
        } else if (qabstractprintdialog_focusinevent_callback != nullptr) {
            qabstractprintdialog_focusinevent_callback(this, event);
        } else {
            QAbstractPrintDialog::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qabstractprintdialog_focusoutevent_isbase) {
            qabstractprintdialog_focusoutevent_isbase = false;
            QAbstractPrintDialog::focusOutEvent(event);
        } else if (qabstractprintdialog_focusoutevent_callback != nullptr) {
            qabstractprintdialog_focusoutevent_callback(this, event);
        } else {
            QAbstractPrintDialog::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qabstractprintdialog_enterevent_isbase) {
            qabstractprintdialog_enterevent_isbase = false;
            QAbstractPrintDialog::enterEvent(event);
        } else if (qabstractprintdialog_enterevent_callback != nullptr) {
            qabstractprintdialog_enterevent_callback(this, event);
        } else {
            QAbstractPrintDialog::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qabstractprintdialog_leaveevent_isbase) {
            qabstractprintdialog_leaveevent_isbase = false;
            QAbstractPrintDialog::leaveEvent(event);
        } else if (qabstractprintdialog_leaveevent_callback != nullptr) {
            qabstractprintdialog_leaveevent_callback(this, event);
        } else {
            QAbstractPrintDialog::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qabstractprintdialog_paintevent_isbase) {
            qabstractprintdialog_paintevent_isbase = false;
            QAbstractPrintDialog::paintEvent(event);
        } else if (qabstractprintdialog_paintevent_callback != nullptr) {
            qabstractprintdialog_paintevent_callback(this, event);
        } else {
            QAbstractPrintDialog::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qabstractprintdialog_moveevent_isbase) {
            qabstractprintdialog_moveevent_isbase = false;
            QAbstractPrintDialog::moveEvent(event);
        } else if (qabstractprintdialog_moveevent_callback != nullptr) {
            qabstractprintdialog_moveevent_callback(this, event);
        } else {
            QAbstractPrintDialog::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qabstractprintdialog_tabletevent_isbase) {
            qabstractprintdialog_tabletevent_isbase = false;
            QAbstractPrintDialog::tabletEvent(event);
        } else if (qabstractprintdialog_tabletevent_callback != nullptr) {
            qabstractprintdialog_tabletevent_callback(this, event);
        } else {
            QAbstractPrintDialog::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qabstractprintdialog_actionevent_isbase) {
            qabstractprintdialog_actionevent_isbase = false;
            QAbstractPrintDialog::actionEvent(event);
        } else if (qabstractprintdialog_actionevent_callback != nullptr) {
            qabstractprintdialog_actionevent_callback(this, event);
        } else {
            QAbstractPrintDialog::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qabstractprintdialog_dragenterevent_isbase) {
            qabstractprintdialog_dragenterevent_isbase = false;
            QAbstractPrintDialog::dragEnterEvent(event);
        } else if (qabstractprintdialog_dragenterevent_callback != nullptr) {
            qabstractprintdialog_dragenterevent_callback(this, event);
        } else {
            QAbstractPrintDialog::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qabstractprintdialog_dragmoveevent_isbase) {
            qabstractprintdialog_dragmoveevent_isbase = false;
            QAbstractPrintDialog::dragMoveEvent(event);
        } else if (qabstractprintdialog_dragmoveevent_callback != nullptr) {
            qabstractprintdialog_dragmoveevent_callback(this, event);
        } else {
            QAbstractPrintDialog::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qabstractprintdialog_dragleaveevent_isbase) {
            qabstractprintdialog_dragleaveevent_isbase = false;
            QAbstractPrintDialog::dragLeaveEvent(event);
        } else if (qabstractprintdialog_dragleaveevent_callback != nullptr) {
            qabstractprintdialog_dragleaveevent_callback(this, event);
        } else {
            QAbstractPrintDialog::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qabstractprintdialog_dropevent_isbase) {
            qabstractprintdialog_dropevent_isbase = false;
            QAbstractPrintDialog::dropEvent(event);
        } else if (qabstractprintdialog_dropevent_callback != nullptr) {
            qabstractprintdialog_dropevent_callback(this, event);
        } else {
            QAbstractPrintDialog::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qabstractprintdialog_hideevent_isbase) {
            qabstractprintdialog_hideevent_isbase = false;
            QAbstractPrintDialog::hideEvent(event);
        } else if (qabstractprintdialog_hideevent_callback != nullptr) {
            qabstractprintdialog_hideevent_callback(this, event);
        } else {
            QAbstractPrintDialog::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qabstractprintdialog_nativeevent_isbase) {
            qabstractprintdialog_nativeevent_isbase = false;
            return QAbstractPrintDialog::nativeEvent(eventType, message, result);
        } else if (qabstractprintdialog_nativeevent_callback != nullptr) {
            return qabstractprintdialog_nativeevent_callback(this, eventType, message, result);
        } else {
            return QAbstractPrintDialog::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qabstractprintdialog_changeevent_isbase) {
            qabstractprintdialog_changeevent_isbase = false;
            QAbstractPrintDialog::changeEvent(param1);
        } else if (qabstractprintdialog_changeevent_callback != nullptr) {
            qabstractprintdialog_changeevent_callback(this, param1);
        } else {
            QAbstractPrintDialog::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qabstractprintdialog_metric_isbase) {
            qabstractprintdialog_metric_isbase = false;
            return QAbstractPrintDialog::metric(param1);
        } else if (qabstractprintdialog_metric_callback != nullptr) {
            return qabstractprintdialog_metric_callback(this, param1);
        } else {
            return QAbstractPrintDialog::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qabstractprintdialog_initpainter_isbase) {
            qabstractprintdialog_initpainter_isbase = false;
            QAbstractPrintDialog::initPainter(painter);
        } else if (qabstractprintdialog_initpainter_callback != nullptr) {
            qabstractprintdialog_initpainter_callback(this, painter);
        } else {
            QAbstractPrintDialog::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qabstractprintdialog_redirected_isbase) {
            qabstractprintdialog_redirected_isbase = false;
            return QAbstractPrintDialog::redirected(offset);
        } else if (qabstractprintdialog_redirected_callback != nullptr) {
            return qabstractprintdialog_redirected_callback(this, offset);
        } else {
            return QAbstractPrintDialog::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qabstractprintdialog_sharedpainter_isbase) {
            qabstractprintdialog_sharedpainter_isbase = false;
            return QAbstractPrintDialog::sharedPainter();
        } else if (qabstractprintdialog_sharedpainter_callback != nullptr) {
            return qabstractprintdialog_sharedpainter_callback();
        } else {
            return QAbstractPrintDialog::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qabstractprintdialog_inputmethodevent_isbase) {
            qabstractprintdialog_inputmethodevent_isbase = false;
            QAbstractPrintDialog::inputMethodEvent(param1);
        } else if (qabstractprintdialog_inputmethodevent_callback != nullptr) {
            qabstractprintdialog_inputmethodevent_callback(this, param1);
        } else {
            QAbstractPrintDialog::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qabstractprintdialog_inputmethodquery_isbase) {
            qabstractprintdialog_inputmethodquery_isbase = false;
            return QAbstractPrintDialog::inputMethodQuery(param1);
        } else if (qabstractprintdialog_inputmethodquery_callback != nullptr) {
            return qabstractprintdialog_inputmethodquery_callback(this, param1);
        } else {
            return QAbstractPrintDialog::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qabstractprintdialog_focusnextprevchild_isbase) {
            qabstractprintdialog_focusnextprevchild_isbase = false;
            return QAbstractPrintDialog::focusNextPrevChild(next);
        } else if (qabstractprintdialog_focusnextprevchild_callback != nullptr) {
            return qabstractprintdialog_focusnextprevchild_callback(this, next);
        } else {
            return QAbstractPrintDialog::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qabstractprintdialog_timerevent_isbase) {
            qabstractprintdialog_timerevent_isbase = false;
            QAbstractPrintDialog::timerEvent(event);
        } else if (qabstractprintdialog_timerevent_callback != nullptr) {
            qabstractprintdialog_timerevent_callback(this, event);
        } else {
            QAbstractPrintDialog::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qabstractprintdialog_childevent_isbase) {
            qabstractprintdialog_childevent_isbase = false;
            QAbstractPrintDialog::childEvent(event);
        } else if (qabstractprintdialog_childevent_callback != nullptr) {
            qabstractprintdialog_childevent_callback(this, event);
        } else {
            QAbstractPrintDialog::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qabstractprintdialog_customevent_isbase) {
            qabstractprintdialog_customevent_isbase = false;
            QAbstractPrintDialog::customEvent(event);
        } else if (qabstractprintdialog_customevent_callback != nullptr) {
            qabstractprintdialog_customevent_callback(this, event);
        } else {
            QAbstractPrintDialog::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qabstractprintdialog_connectnotify_isbase) {
            qabstractprintdialog_connectnotify_isbase = false;
            QAbstractPrintDialog::connectNotify(signal);
        } else if (qabstractprintdialog_connectnotify_callback != nullptr) {
            qabstractprintdialog_connectnotify_callback(this, signal);
        } else {
            QAbstractPrintDialog::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qabstractprintdialog_disconnectnotify_isbase) {
            qabstractprintdialog_disconnectnotify_isbase = false;
            QAbstractPrintDialog::disconnectNotify(signal);
        } else if (qabstractprintdialog_disconnectnotify_callback != nullptr) {
            qabstractprintdialog_disconnectnotify_callback(this, signal);
        } else {
            QAbstractPrintDialog::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (qabstractprintdialog_adjustposition_isbase) {
            qabstractprintdialog_adjustposition_isbase = false;
            QAbstractPrintDialog::adjustPosition(param1);
        } else if (qabstractprintdialog_adjustposition_callback != nullptr) {
            qabstractprintdialog_adjustposition_callback(this, param1);
        } else {
            QAbstractPrintDialog::adjustPosition(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qabstractprintdialog_updatemicrofocus_isbase) {
            qabstractprintdialog_updatemicrofocus_isbase = false;
            QAbstractPrintDialog::updateMicroFocus();
        } else if (qabstractprintdialog_updatemicrofocus_callback != nullptr) {
            qabstractprintdialog_updatemicrofocus_callback();
        } else {
            QAbstractPrintDialog::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qabstractprintdialog_create_isbase) {
            qabstractprintdialog_create_isbase = false;
            QAbstractPrintDialog::create();
        } else if (qabstractprintdialog_create_callback != nullptr) {
            qabstractprintdialog_create_callback();
        } else {
            QAbstractPrintDialog::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qabstractprintdialog_destroy_isbase) {
            qabstractprintdialog_destroy_isbase = false;
            QAbstractPrintDialog::destroy();
        } else if (qabstractprintdialog_destroy_callback != nullptr) {
            qabstractprintdialog_destroy_callback();
        } else {
            QAbstractPrintDialog::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qabstractprintdialog_focusnextchild_isbase) {
            qabstractprintdialog_focusnextchild_isbase = false;
            return QAbstractPrintDialog::focusNextChild();
        } else if (qabstractprintdialog_focusnextchild_callback != nullptr) {
            return qabstractprintdialog_focusnextchild_callback();
        } else {
            return QAbstractPrintDialog::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qabstractprintdialog_focuspreviouschild_isbase) {
            qabstractprintdialog_focuspreviouschild_isbase = false;
            return QAbstractPrintDialog::focusPreviousChild();
        } else if (qabstractprintdialog_focuspreviouschild_callback != nullptr) {
            return qabstractprintdialog_focuspreviouschild_callback();
        } else {
            return QAbstractPrintDialog::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qabstractprintdialog_sender_isbase) {
            qabstractprintdialog_sender_isbase = false;
            return QAbstractPrintDialog::sender();
        } else if (qabstractprintdialog_sender_callback != nullptr) {
            return qabstractprintdialog_sender_callback();
        } else {
            return QAbstractPrintDialog::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qabstractprintdialog_sendersignalindex_isbase) {
            qabstractprintdialog_sendersignalindex_isbase = false;
            return QAbstractPrintDialog::senderSignalIndex();
        } else if (qabstractprintdialog_sendersignalindex_callback != nullptr) {
            return qabstractprintdialog_sendersignalindex_callback();
        } else {
            return QAbstractPrintDialog::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qabstractprintdialog_receivers_isbase) {
            qabstractprintdialog_receivers_isbase = false;
            return QAbstractPrintDialog::receivers(signal);
        } else if (qabstractprintdialog_receivers_callback != nullptr) {
            return qabstractprintdialog_receivers_callback(this, signal);
        } else {
            return QAbstractPrintDialog::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qabstractprintdialog_issignalconnected_isbase) {
            qabstractprintdialog_issignalconnected_isbase = false;
            return QAbstractPrintDialog::isSignalConnected(signal);
        } else if (qabstractprintdialog_issignalconnected_callback != nullptr) {
            return qabstractprintdialog_issignalconnected_callback(this, signal);
        } else {
            return QAbstractPrintDialog::isSignalConnected(signal);
        }
    }
};

#endif
