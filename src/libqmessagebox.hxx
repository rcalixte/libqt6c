#pragma once
#ifndef SRCC_LIBVIRTUALQMESSAGEBOX_H
#define SRCC_LIBVIRTUALQMESSAGEBOX_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QMessageBox so that we can call protected methods
class VirtualQMessageBox : public QMessageBox {

  public:
    // Virtual class public types (including callbacks)
    using QMessageBox_Metacall_Callback = int (*)(QMessageBox*, QMetaObject::Call, int, void**);
    using QMessageBox_Event_Callback = bool (*)(QMessageBox*, QEvent*);
    using QMessageBox_ResizeEvent_Callback = void (*)(QMessageBox*, QResizeEvent*);
    using QMessageBox_ShowEvent_Callback = void (*)(QMessageBox*, QShowEvent*);
    using QMessageBox_CloseEvent_Callback = void (*)(QMessageBox*, QCloseEvent*);
    using QMessageBox_KeyPressEvent_Callback = void (*)(QMessageBox*, QKeyEvent*);
    using QMessageBox_ChangeEvent_Callback = void (*)(QMessageBox*, QEvent*);
    using QMessageBox_SetVisible_Callback = void (*)(QMessageBox*, bool);
    using QMessageBox_SizeHint_Callback = QSize (*)();
    using QMessageBox_MinimumSizeHint_Callback = QSize (*)();
    using QMessageBox_Open_Callback = void (*)();
    using QMessageBox_Exec_Callback = int (*)();
    using QMessageBox_Done_Callback = void (*)(QMessageBox*, int);
    using QMessageBox_Accept_Callback = void (*)();
    using QMessageBox_Reject_Callback = void (*)();
    using QMessageBox_ContextMenuEvent_Callback = void (*)(QMessageBox*, QContextMenuEvent*);
    using QMessageBox_EventFilter_Callback = bool (*)(QMessageBox*, QObject*, QEvent*);
    using QMessageBox_DevType_Callback = int (*)();
    using QMessageBox_HeightForWidth_Callback = int (*)(const QMessageBox*, int);
    using QMessageBox_HasHeightForWidth_Callback = bool (*)();
    using QMessageBox_PaintEngine_Callback = QPaintEngine* (*)();
    using QMessageBox_MousePressEvent_Callback = void (*)(QMessageBox*, QMouseEvent*);
    using QMessageBox_MouseReleaseEvent_Callback = void (*)(QMessageBox*, QMouseEvent*);
    using QMessageBox_MouseDoubleClickEvent_Callback = void (*)(QMessageBox*, QMouseEvent*);
    using QMessageBox_MouseMoveEvent_Callback = void (*)(QMessageBox*, QMouseEvent*);
    using QMessageBox_WheelEvent_Callback = void (*)(QMessageBox*, QWheelEvent*);
    using QMessageBox_KeyReleaseEvent_Callback = void (*)(QMessageBox*, QKeyEvent*);
    using QMessageBox_FocusInEvent_Callback = void (*)(QMessageBox*, QFocusEvent*);
    using QMessageBox_FocusOutEvent_Callback = void (*)(QMessageBox*, QFocusEvent*);
    using QMessageBox_EnterEvent_Callback = void (*)(QMessageBox*, QEnterEvent*);
    using QMessageBox_LeaveEvent_Callback = void (*)(QMessageBox*, QEvent*);
    using QMessageBox_PaintEvent_Callback = void (*)(QMessageBox*, QPaintEvent*);
    using QMessageBox_MoveEvent_Callback = void (*)(QMessageBox*, QMoveEvent*);
    using QMessageBox_TabletEvent_Callback = void (*)(QMessageBox*, QTabletEvent*);
    using QMessageBox_ActionEvent_Callback = void (*)(QMessageBox*, QActionEvent*);
    using QMessageBox_DragEnterEvent_Callback = void (*)(QMessageBox*, QDragEnterEvent*);
    using QMessageBox_DragMoveEvent_Callback = void (*)(QMessageBox*, QDragMoveEvent*);
    using QMessageBox_DragLeaveEvent_Callback = void (*)(QMessageBox*, QDragLeaveEvent*);
    using QMessageBox_DropEvent_Callback = void (*)(QMessageBox*, QDropEvent*);
    using QMessageBox_HideEvent_Callback = void (*)(QMessageBox*, QHideEvent*);
    using QMessageBox_NativeEvent_Callback = bool (*)(QMessageBox*, const QByteArray&, void*, qintptr*);
    using QMessageBox_Metric_Callback = int (*)(const QMessageBox*, QPaintDevice::PaintDeviceMetric);
    using QMessageBox_InitPainter_Callback = void (*)(const QMessageBox*, QPainter*);
    using QMessageBox_Redirected_Callback = QPaintDevice* (*)(const QMessageBox*, QPoint*);
    using QMessageBox_SharedPainter_Callback = QPainter* (*)();
    using QMessageBox_InputMethodEvent_Callback = void (*)(QMessageBox*, QInputMethodEvent*);
    using QMessageBox_InputMethodQuery_Callback = QVariant (*)(const QMessageBox*, Qt::InputMethodQuery);
    using QMessageBox_FocusNextPrevChild_Callback = bool (*)(QMessageBox*, bool);
    using QMessageBox_TimerEvent_Callback = void (*)(QMessageBox*, QTimerEvent*);
    using QMessageBox_ChildEvent_Callback = void (*)(QMessageBox*, QChildEvent*);
    using QMessageBox_CustomEvent_Callback = void (*)(QMessageBox*, QEvent*);
    using QMessageBox_ConnectNotify_Callback = void (*)(QMessageBox*, const QMetaMethod&);
    using QMessageBox_DisconnectNotify_Callback = void (*)(QMessageBox*, const QMetaMethod&);
    using QMessageBox_AdjustPosition_Callback = void (*)(QMessageBox*, QWidget*);
    using QMessageBox_UpdateMicroFocus_Callback = void (*)();
    using QMessageBox_Create_Callback = void (*)();
    using QMessageBox_Destroy_Callback = void (*)();
    using QMessageBox_FocusNextChild_Callback = bool (*)();
    using QMessageBox_FocusPreviousChild_Callback = bool (*)();
    using QMessageBox_Sender_Callback = QObject* (*)();
    using QMessageBox_SenderSignalIndex_Callback = int (*)();
    using QMessageBox_Receivers_Callback = int (*)(const QMessageBox*, const char*);
    using QMessageBox_IsSignalConnected_Callback = bool (*)(const QMessageBox*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QMessageBox_Metacall_Callback qmessagebox_metacall_callback = nullptr;
    QMessageBox_Event_Callback qmessagebox_event_callback = nullptr;
    QMessageBox_ResizeEvent_Callback qmessagebox_resizeevent_callback = nullptr;
    QMessageBox_ShowEvent_Callback qmessagebox_showevent_callback = nullptr;
    QMessageBox_CloseEvent_Callback qmessagebox_closeevent_callback = nullptr;
    QMessageBox_KeyPressEvent_Callback qmessagebox_keypressevent_callback = nullptr;
    QMessageBox_ChangeEvent_Callback qmessagebox_changeevent_callback = nullptr;
    QMessageBox_SetVisible_Callback qmessagebox_setvisible_callback = nullptr;
    QMessageBox_SizeHint_Callback qmessagebox_sizehint_callback = nullptr;
    QMessageBox_MinimumSizeHint_Callback qmessagebox_minimumsizehint_callback = nullptr;
    QMessageBox_Open_Callback qmessagebox_open_callback = nullptr;
    QMessageBox_Exec_Callback qmessagebox_exec_callback = nullptr;
    QMessageBox_Done_Callback qmessagebox_done_callback = nullptr;
    QMessageBox_Accept_Callback qmessagebox_accept_callback = nullptr;
    QMessageBox_Reject_Callback qmessagebox_reject_callback = nullptr;
    QMessageBox_ContextMenuEvent_Callback qmessagebox_contextmenuevent_callback = nullptr;
    QMessageBox_EventFilter_Callback qmessagebox_eventfilter_callback = nullptr;
    QMessageBox_DevType_Callback qmessagebox_devtype_callback = nullptr;
    QMessageBox_HeightForWidth_Callback qmessagebox_heightforwidth_callback = nullptr;
    QMessageBox_HasHeightForWidth_Callback qmessagebox_hasheightforwidth_callback = nullptr;
    QMessageBox_PaintEngine_Callback qmessagebox_paintengine_callback = nullptr;
    QMessageBox_MousePressEvent_Callback qmessagebox_mousepressevent_callback = nullptr;
    QMessageBox_MouseReleaseEvent_Callback qmessagebox_mousereleaseevent_callback = nullptr;
    QMessageBox_MouseDoubleClickEvent_Callback qmessagebox_mousedoubleclickevent_callback = nullptr;
    QMessageBox_MouseMoveEvent_Callback qmessagebox_mousemoveevent_callback = nullptr;
    QMessageBox_WheelEvent_Callback qmessagebox_wheelevent_callback = nullptr;
    QMessageBox_KeyReleaseEvent_Callback qmessagebox_keyreleaseevent_callback = nullptr;
    QMessageBox_FocusInEvent_Callback qmessagebox_focusinevent_callback = nullptr;
    QMessageBox_FocusOutEvent_Callback qmessagebox_focusoutevent_callback = nullptr;
    QMessageBox_EnterEvent_Callback qmessagebox_enterevent_callback = nullptr;
    QMessageBox_LeaveEvent_Callback qmessagebox_leaveevent_callback = nullptr;
    QMessageBox_PaintEvent_Callback qmessagebox_paintevent_callback = nullptr;
    QMessageBox_MoveEvent_Callback qmessagebox_moveevent_callback = nullptr;
    QMessageBox_TabletEvent_Callback qmessagebox_tabletevent_callback = nullptr;
    QMessageBox_ActionEvent_Callback qmessagebox_actionevent_callback = nullptr;
    QMessageBox_DragEnterEvent_Callback qmessagebox_dragenterevent_callback = nullptr;
    QMessageBox_DragMoveEvent_Callback qmessagebox_dragmoveevent_callback = nullptr;
    QMessageBox_DragLeaveEvent_Callback qmessagebox_dragleaveevent_callback = nullptr;
    QMessageBox_DropEvent_Callback qmessagebox_dropevent_callback = nullptr;
    QMessageBox_HideEvent_Callback qmessagebox_hideevent_callback = nullptr;
    QMessageBox_NativeEvent_Callback qmessagebox_nativeevent_callback = nullptr;
    QMessageBox_Metric_Callback qmessagebox_metric_callback = nullptr;
    QMessageBox_InitPainter_Callback qmessagebox_initpainter_callback = nullptr;
    QMessageBox_Redirected_Callback qmessagebox_redirected_callback = nullptr;
    QMessageBox_SharedPainter_Callback qmessagebox_sharedpainter_callback = nullptr;
    QMessageBox_InputMethodEvent_Callback qmessagebox_inputmethodevent_callback = nullptr;
    QMessageBox_InputMethodQuery_Callback qmessagebox_inputmethodquery_callback = nullptr;
    QMessageBox_FocusNextPrevChild_Callback qmessagebox_focusnextprevchild_callback = nullptr;
    QMessageBox_TimerEvent_Callback qmessagebox_timerevent_callback = nullptr;
    QMessageBox_ChildEvent_Callback qmessagebox_childevent_callback = nullptr;
    QMessageBox_CustomEvent_Callback qmessagebox_customevent_callback = nullptr;
    QMessageBox_ConnectNotify_Callback qmessagebox_connectnotify_callback = nullptr;
    QMessageBox_DisconnectNotify_Callback qmessagebox_disconnectnotify_callback = nullptr;
    QMessageBox_AdjustPosition_Callback qmessagebox_adjustposition_callback = nullptr;
    QMessageBox_UpdateMicroFocus_Callback qmessagebox_updatemicrofocus_callback = nullptr;
    QMessageBox_Create_Callback qmessagebox_create_callback = nullptr;
    QMessageBox_Destroy_Callback qmessagebox_destroy_callback = nullptr;
    QMessageBox_FocusNextChild_Callback qmessagebox_focusnextchild_callback = nullptr;
    QMessageBox_FocusPreviousChild_Callback qmessagebox_focuspreviouschild_callback = nullptr;
    QMessageBox_Sender_Callback qmessagebox_sender_callback = nullptr;
    QMessageBox_SenderSignalIndex_Callback qmessagebox_sendersignalindex_callback = nullptr;
    QMessageBox_Receivers_Callback qmessagebox_receivers_callback = nullptr;
    QMessageBox_IsSignalConnected_Callback qmessagebox_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qmessagebox_metacall_isbase = false;
    mutable bool qmessagebox_event_isbase = false;
    mutable bool qmessagebox_resizeevent_isbase = false;
    mutable bool qmessagebox_showevent_isbase = false;
    mutable bool qmessagebox_closeevent_isbase = false;
    mutable bool qmessagebox_keypressevent_isbase = false;
    mutable bool qmessagebox_changeevent_isbase = false;
    mutable bool qmessagebox_setvisible_isbase = false;
    mutable bool qmessagebox_sizehint_isbase = false;
    mutable bool qmessagebox_minimumsizehint_isbase = false;
    mutable bool qmessagebox_open_isbase = false;
    mutable bool qmessagebox_exec_isbase = false;
    mutable bool qmessagebox_done_isbase = false;
    mutable bool qmessagebox_accept_isbase = false;
    mutable bool qmessagebox_reject_isbase = false;
    mutable bool qmessagebox_contextmenuevent_isbase = false;
    mutable bool qmessagebox_eventfilter_isbase = false;
    mutable bool qmessagebox_devtype_isbase = false;
    mutable bool qmessagebox_heightforwidth_isbase = false;
    mutable bool qmessagebox_hasheightforwidth_isbase = false;
    mutable bool qmessagebox_paintengine_isbase = false;
    mutable bool qmessagebox_mousepressevent_isbase = false;
    mutable bool qmessagebox_mousereleaseevent_isbase = false;
    mutable bool qmessagebox_mousedoubleclickevent_isbase = false;
    mutable bool qmessagebox_mousemoveevent_isbase = false;
    mutable bool qmessagebox_wheelevent_isbase = false;
    mutable bool qmessagebox_keyreleaseevent_isbase = false;
    mutable bool qmessagebox_focusinevent_isbase = false;
    mutable bool qmessagebox_focusoutevent_isbase = false;
    mutable bool qmessagebox_enterevent_isbase = false;
    mutable bool qmessagebox_leaveevent_isbase = false;
    mutable bool qmessagebox_paintevent_isbase = false;
    mutable bool qmessagebox_moveevent_isbase = false;
    mutable bool qmessagebox_tabletevent_isbase = false;
    mutable bool qmessagebox_actionevent_isbase = false;
    mutable bool qmessagebox_dragenterevent_isbase = false;
    mutable bool qmessagebox_dragmoveevent_isbase = false;
    mutable bool qmessagebox_dragleaveevent_isbase = false;
    mutable bool qmessagebox_dropevent_isbase = false;
    mutable bool qmessagebox_hideevent_isbase = false;
    mutable bool qmessagebox_nativeevent_isbase = false;
    mutable bool qmessagebox_metric_isbase = false;
    mutable bool qmessagebox_initpainter_isbase = false;
    mutable bool qmessagebox_redirected_isbase = false;
    mutable bool qmessagebox_sharedpainter_isbase = false;
    mutable bool qmessagebox_inputmethodevent_isbase = false;
    mutable bool qmessagebox_inputmethodquery_isbase = false;
    mutable bool qmessagebox_focusnextprevchild_isbase = false;
    mutable bool qmessagebox_timerevent_isbase = false;
    mutable bool qmessagebox_childevent_isbase = false;
    mutable bool qmessagebox_customevent_isbase = false;
    mutable bool qmessagebox_connectnotify_isbase = false;
    mutable bool qmessagebox_disconnectnotify_isbase = false;
    mutable bool qmessagebox_adjustposition_isbase = false;
    mutable bool qmessagebox_updatemicrofocus_isbase = false;
    mutable bool qmessagebox_create_isbase = false;
    mutable bool qmessagebox_destroy_isbase = false;
    mutable bool qmessagebox_focusnextchild_isbase = false;
    mutable bool qmessagebox_focuspreviouschild_isbase = false;
    mutable bool qmessagebox_sender_isbase = false;
    mutable bool qmessagebox_sendersignalindex_isbase = false;
    mutable bool qmessagebox_receivers_isbase = false;
    mutable bool qmessagebox_issignalconnected_isbase = false;

  public:
    VirtualQMessageBox(QWidget* parent) : QMessageBox(parent){};
    VirtualQMessageBox() : QMessageBox(){};
    VirtualQMessageBox(QMessageBox::Icon icon, const QString& title, const QString& text) : QMessageBox(icon, title, text){};
    VirtualQMessageBox(const QString& title, const QString& text, QMessageBox::Icon icon, int button0, int button1, int button2) : QMessageBox(title, text, icon, button0, button1, button2){};
    VirtualQMessageBox(QMessageBox::Icon icon, const QString& title, const QString& text, QMessageBox::StandardButtons buttons) : QMessageBox(icon, title, text, buttons){};
    VirtualQMessageBox(QMessageBox::Icon icon, const QString& title, const QString& text, QMessageBox::StandardButtons buttons, QWidget* parent) : QMessageBox(icon, title, text, buttons, parent){};
    VirtualQMessageBox(QMessageBox::Icon icon, const QString& title, const QString& text, QMessageBox::StandardButtons buttons, QWidget* parent, Qt::WindowFlags flags) : QMessageBox(icon, title, text, buttons, parent, flags){};
    VirtualQMessageBox(const QString& title, const QString& text, QMessageBox::Icon icon, int button0, int button1, int button2, QWidget* parent) : QMessageBox(title, text, icon, button0, button1, button2, parent){};
    VirtualQMessageBox(const QString& title, const QString& text, QMessageBox::Icon icon, int button0, int button1, int button2, QWidget* parent, Qt::WindowFlags f) : QMessageBox(title, text, icon, button0, button1, button2, parent, f){};

    ~VirtualQMessageBox() {
        qmessagebox_metacall_callback = nullptr;
        qmessagebox_event_callback = nullptr;
        qmessagebox_resizeevent_callback = nullptr;
        qmessagebox_showevent_callback = nullptr;
        qmessagebox_closeevent_callback = nullptr;
        qmessagebox_keypressevent_callback = nullptr;
        qmessagebox_changeevent_callback = nullptr;
        qmessagebox_setvisible_callback = nullptr;
        qmessagebox_sizehint_callback = nullptr;
        qmessagebox_minimumsizehint_callback = nullptr;
        qmessagebox_open_callback = nullptr;
        qmessagebox_exec_callback = nullptr;
        qmessagebox_done_callback = nullptr;
        qmessagebox_accept_callback = nullptr;
        qmessagebox_reject_callback = nullptr;
        qmessagebox_contextmenuevent_callback = nullptr;
        qmessagebox_eventfilter_callback = nullptr;
        qmessagebox_devtype_callback = nullptr;
        qmessagebox_heightforwidth_callback = nullptr;
        qmessagebox_hasheightforwidth_callback = nullptr;
        qmessagebox_paintengine_callback = nullptr;
        qmessagebox_mousepressevent_callback = nullptr;
        qmessagebox_mousereleaseevent_callback = nullptr;
        qmessagebox_mousedoubleclickevent_callback = nullptr;
        qmessagebox_mousemoveevent_callback = nullptr;
        qmessagebox_wheelevent_callback = nullptr;
        qmessagebox_keyreleaseevent_callback = nullptr;
        qmessagebox_focusinevent_callback = nullptr;
        qmessagebox_focusoutevent_callback = nullptr;
        qmessagebox_enterevent_callback = nullptr;
        qmessagebox_leaveevent_callback = nullptr;
        qmessagebox_paintevent_callback = nullptr;
        qmessagebox_moveevent_callback = nullptr;
        qmessagebox_tabletevent_callback = nullptr;
        qmessagebox_actionevent_callback = nullptr;
        qmessagebox_dragenterevent_callback = nullptr;
        qmessagebox_dragmoveevent_callback = nullptr;
        qmessagebox_dragleaveevent_callback = nullptr;
        qmessagebox_dropevent_callback = nullptr;
        qmessagebox_hideevent_callback = nullptr;
        qmessagebox_nativeevent_callback = nullptr;
        qmessagebox_metric_callback = nullptr;
        qmessagebox_initpainter_callback = nullptr;
        qmessagebox_redirected_callback = nullptr;
        qmessagebox_sharedpainter_callback = nullptr;
        qmessagebox_inputmethodevent_callback = nullptr;
        qmessagebox_inputmethodquery_callback = nullptr;
        qmessagebox_focusnextprevchild_callback = nullptr;
        qmessagebox_timerevent_callback = nullptr;
        qmessagebox_childevent_callback = nullptr;
        qmessagebox_customevent_callback = nullptr;
        qmessagebox_connectnotify_callback = nullptr;
        qmessagebox_disconnectnotify_callback = nullptr;
        qmessagebox_adjustposition_callback = nullptr;
        qmessagebox_updatemicrofocus_callback = nullptr;
        qmessagebox_create_callback = nullptr;
        qmessagebox_destroy_callback = nullptr;
        qmessagebox_focusnextchild_callback = nullptr;
        qmessagebox_focuspreviouschild_callback = nullptr;
        qmessagebox_sender_callback = nullptr;
        qmessagebox_sendersignalindex_callback = nullptr;
        qmessagebox_receivers_callback = nullptr;
        qmessagebox_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQMessageBox_Metacall_Callback(QMessageBox_Metacall_Callback cb) { qmessagebox_metacall_callback = cb; }
    void setQMessageBox_Event_Callback(QMessageBox_Event_Callback cb) { qmessagebox_event_callback = cb; }
    void setQMessageBox_ResizeEvent_Callback(QMessageBox_ResizeEvent_Callback cb) { qmessagebox_resizeevent_callback = cb; }
    void setQMessageBox_ShowEvent_Callback(QMessageBox_ShowEvent_Callback cb) { qmessagebox_showevent_callback = cb; }
    void setQMessageBox_CloseEvent_Callback(QMessageBox_CloseEvent_Callback cb) { qmessagebox_closeevent_callback = cb; }
    void setQMessageBox_KeyPressEvent_Callback(QMessageBox_KeyPressEvent_Callback cb) { qmessagebox_keypressevent_callback = cb; }
    void setQMessageBox_ChangeEvent_Callback(QMessageBox_ChangeEvent_Callback cb) { qmessagebox_changeevent_callback = cb; }
    void setQMessageBox_SetVisible_Callback(QMessageBox_SetVisible_Callback cb) { qmessagebox_setvisible_callback = cb; }
    void setQMessageBox_SizeHint_Callback(QMessageBox_SizeHint_Callback cb) { qmessagebox_sizehint_callback = cb; }
    void setQMessageBox_MinimumSizeHint_Callback(QMessageBox_MinimumSizeHint_Callback cb) { qmessagebox_minimumsizehint_callback = cb; }
    void setQMessageBox_Open_Callback(QMessageBox_Open_Callback cb) { qmessagebox_open_callback = cb; }
    void setQMessageBox_Exec_Callback(QMessageBox_Exec_Callback cb) { qmessagebox_exec_callback = cb; }
    void setQMessageBox_Done_Callback(QMessageBox_Done_Callback cb) { qmessagebox_done_callback = cb; }
    void setQMessageBox_Accept_Callback(QMessageBox_Accept_Callback cb) { qmessagebox_accept_callback = cb; }
    void setQMessageBox_Reject_Callback(QMessageBox_Reject_Callback cb) { qmessagebox_reject_callback = cb; }
    void setQMessageBox_ContextMenuEvent_Callback(QMessageBox_ContextMenuEvent_Callback cb) { qmessagebox_contextmenuevent_callback = cb; }
    void setQMessageBox_EventFilter_Callback(QMessageBox_EventFilter_Callback cb) { qmessagebox_eventfilter_callback = cb; }
    void setQMessageBox_DevType_Callback(QMessageBox_DevType_Callback cb) { qmessagebox_devtype_callback = cb; }
    void setQMessageBox_HeightForWidth_Callback(QMessageBox_HeightForWidth_Callback cb) { qmessagebox_heightforwidth_callback = cb; }
    void setQMessageBox_HasHeightForWidth_Callback(QMessageBox_HasHeightForWidth_Callback cb) { qmessagebox_hasheightforwidth_callback = cb; }
    void setQMessageBox_PaintEngine_Callback(QMessageBox_PaintEngine_Callback cb) { qmessagebox_paintengine_callback = cb; }
    void setQMessageBox_MousePressEvent_Callback(QMessageBox_MousePressEvent_Callback cb) { qmessagebox_mousepressevent_callback = cb; }
    void setQMessageBox_MouseReleaseEvent_Callback(QMessageBox_MouseReleaseEvent_Callback cb) { qmessagebox_mousereleaseevent_callback = cb; }
    void setQMessageBox_MouseDoubleClickEvent_Callback(QMessageBox_MouseDoubleClickEvent_Callback cb) { qmessagebox_mousedoubleclickevent_callback = cb; }
    void setQMessageBox_MouseMoveEvent_Callback(QMessageBox_MouseMoveEvent_Callback cb) { qmessagebox_mousemoveevent_callback = cb; }
    void setQMessageBox_WheelEvent_Callback(QMessageBox_WheelEvent_Callback cb) { qmessagebox_wheelevent_callback = cb; }
    void setQMessageBox_KeyReleaseEvent_Callback(QMessageBox_KeyReleaseEvent_Callback cb) { qmessagebox_keyreleaseevent_callback = cb; }
    void setQMessageBox_FocusInEvent_Callback(QMessageBox_FocusInEvent_Callback cb) { qmessagebox_focusinevent_callback = cb; }
    void setQMessageBox_FocusOutEvent_Callback(QMessageBox_FocusOutEvent_Callback cb) { qmessagebox_focusoutevent_callback = cb; }
    void setQMessageBox_EnterEvent_Callback(QMessageBox_EnterEvent_Callback cb) { qmessagebox_enterevent_callback = cb; }
    void setQMessageBox_LeaveEvent_Callback(QMessageBox_LeaveEvent_Callback cb) { qmessagebox_leaveevent_callback = cb; }
    void setQMessageBox_PaintEvent_Callback(QMessageBox_PaintEvent_Callback cb) { qmessagebox_paintevent_callback = cb; }
    void setQMessageBox_MoveEvent_Callback(QMessageBox_MoveEvent_Callback cb) { qmessagebox_moveevent_callback = cb; }
    void setQMessageBox_TabletEvent_Callback(QMessageBox_TabletEvent_Callback cb) { qmessagebox_tabletevent_callback = cb; }
    void setQMessageBox_ActionEvent_Callback(QMessageBox_ActionEvent_Callback cb) { qmessagebox_actionevent_callback = cb; }
    void setQMessageBox_DragEnterEvent_Callback(QMessageBox_DragEnterEvent_Callback cb) { qmessagebox_dragenterevent_callback = cb; }
    void setQMessageBox_DragMoveEvent_Callback(QMessageBox_DragMoveEvent_Callback cb) { qmessagebox_dragmoveevent_callback = cb; }
    void setQMessageBox_DragLeaveEvent_Callback(QMessageBox_DragLeaveEvent_Callback cb) { qmessagebox_dragleaveevent_callback = cb; }
    void setQMessageBox_DropEvent_Callback(QMessageBox_DropEvent_Callback cb) { qmessagebox_dropevent_callback = cb; }
    void setQMessageBox_HideEvent_Callback(QMessageBox_HideEvent_Callback cb) { qmessagebox_hideevent_callback = cb; }
    void setQMessageBox_NativeEvent_Callback(QMessageBox_NativeEvent_Callback cb) { qmessagebox_nativeevent_callback = cb; }
    void setQMessageBox_Metric_Callback(QMessageBox_Metric_Callback cb) { qmessagebox_metric_callback = cb; }
    void setQMessageBox_InitPainter_Callback(QMessageBox_InitPainter_Callback cb) { qmessagebox_initpainter_callback = cb; }
    void setQMessageBox_Redirected_Callback(QMessageBox_Redirected_Callback cb) { qmessagebox_redirected_callback = cb; }
    void setQMessageBox_SharedPainter_Callback(QMessageBox_SharedPainter_Callback cb) { qmessagebox_sharedpainter_callback = cb; }
    void setQMessageBox_InputMethodEvent_Callback(QMessageBox_InputMethodEvent_Callback cb) { qmessagebox_inputmethodevent_callback = cb; }
    void setQMessageBox_InputMethodQuery_Callback(QMessageBox_InputMethodQuery_Callback cb) { qmessagebox_inputmethodquery_callback = cb; }
    void setQMessageBox_FocusNextPrevChild_Callback(QMessageBox_FocusNextPrevChild_Callback cb) { qmessagebox_focusnextprevchild_callback = cb; }
    void setQMessageBox_TimerEvent_Callback(QMessageBox_TimerEvent_Callback cb) { qmessagebox_timerevent_callback = cb; }
    void setQMessageBox_ChildEvent_Callback(QMessageBox_ChildEvent_Callback cb) { qmessagebox_childevent_callback = cb; }
    void setQMessageBox_CustomEvent_Callback(QMessageBox_CustomEvent_Callback cb) { qmessagebox_customevent_callback = cb; }
    void setQMessageBox_ConnectNotify_Callback(QMessageBox_ConnectNotify_Callback cb) { qmessagebox_connectnotify_callback = cb; }
    void setQMessageBox_DisconnectNotify_Callback(QMessageBox_DisconnectNotify_Callback cb) { qmessagebox_disconnectnotify_callback = cb; }
    void setQMessageBox_AdjustPosition_Callback(QMessageBox_AdjustPosition_Callback cb) { qmessagebox_adjustposition_callback = cb; }
    void setQMessageBox_UpdateMicroFocus_Callback(QMessageBox_UpdateMicroFocus_Callback cb) { qmessagebox_updatemicrofocus_callback = cb; }
    void setQMessageBox_Create_Callback(QMessageBox_Create_Callback cb) { qmessagebox_create_callback = cb; }
    void setQMessageBox_Destroy_Callback(QMessageBox_Destroy_Callback cb) { qmessagebox_destroy_callback = cb; }
    void setQMessageBox_FocusNextChild_Callback(QMessageBox_FocusNextChild_Callback cb) { qmessagebox_focusnextchild_callback = cb; }
    void setQMessageBox_FocusPreviousChild_Callback(QMessageBox_FocusPreviousChild_Callback cb) { qmessagebox_focuspreviouschild_callback = cb; }
    void setQMessageBox_Sender_Callback(QMessageBox_Sender_Callback cb) { qmessagebox_sender_callback = cb; }
    void setQMessageBox_SenderSignalIndex_Callback(QMessageBox_SenderSignalIndex_Callback cb) { qmessagebox_sendersignalindex_callback = cb; }
    void setQMessageBox_Receivers_Callback(QMessageBox_Receivers_Callback cb) { qmessagebox_receivers_callback = cb; }
    void setQMessageBox_IsSignalConnected_Callback(QMessageBox_IsSignalConnected_Callback cb) { qmessagebox_issignalconnected_callback = cb; }

    // Base flag setters
    void setQMessageBox_Metacall_IsBase(bool value) const { qmessagebox_metacall_isbase = value; }
    void setQMessageBox_Event_IsBase(bool value) const { qmessagebox_event_isbase = value; }
    void setQMessageBox_ResizeEvent_IsBase(bool value) const { qmessagebox_resizeevent_isbase = value; }
    void setQMessageBox_ShowEvent_IsBase(bool value) const { qmessagebox_showevent_isbase = value; }
    void setQMessageBox_CloseEvent_IsBase(bool value) const { qmessagebox_closeevent_isbase = value; }
    void setQMessageBox_KeyPressEvent_IsBase(bool value) const { qmessagebox_keypressevent_isbase = value; }
    void setQMessageBox_ChangeEvent_IsBase(bool value) const { qmessagebox_changeevent_isbase = value; }
    void setQMessageBox_SetVisible_IsBase(bool value) const { qmessagebox_setvisible_isbase = value; }
    void setQMessageBox_SizeHint_IsBase(bool value) const { qmessagebox_sizehint_isbase = value; }
    void setQMessageBox_MinimumSizeHint_IsBase(bool value) const { qmessagebox_minimumsizehint_isbase = value; }
    void setQMessageBox_Open_IsBase(bool value) const { qmessagebox_open_isbase = value; }
    void setQMessageBox_Exec_IsBase(bool value) const { qmessagebox_exec_isbase = value; }
    void setQMessageBox_Done_IsBase(bool value) const { qmessagebox_done_isbase = value; }
    void setQMessageBox_Accept_IsBase(bool value) const { qmessagebox_accept_isbase = value; }
    void setQMessageBox_Reject_IsBase(bool value) const { qmessagebox_reject_isbase = value; }
    void setQMessageBox_ContextMenuEvent_IsBase(bool value) const { qmessagebox_contextmenuevent_isbase = value; }
    void setQMessageBox_EventFilter_IsBase(bool value) const { qmessagebox_eventfilter_isbase = value; }
    void setQMessageBox_DevType_IsBase(bool value) const { qmessagebox_devtype_isbase = value; }
    void setQMessageBox_HeightForWidth_IsBase(bool value) const { qmessagebox_heightforwidth_isbase = value; }
    void setQMessageBox_HasHeightForWidth_IsBase(bool value) const { qmessagebox_hasheightforwidth_isbase = value; }
    void setQMessageBox_PaintEngine_IsBase(bool value) const { qmessagebox_paintengine_isbase = value; }
    void setQMessageBox_MousePressEvent_IsBase(bool value) const { qmessagebox_mousepressevent_isbase = value; }
    void setQMessageBox_MouseReleaseEvent_IsBase(bool value) const { qmessagebox_mousereleaseevent_isbase = value; }
    void setQMessageBox_MouseDoubleClickEvent_IsBase(bool value) const { qmessagebox_mousedoubleclickevent_isbase = value; }
    void setQMessageBox_MouseMoveEvent_IsBase(bool value) const { qmessagebox_mousemoveevent_isbase = value; }
    void setQMessageBox_WheelEvent_IsBase(bool value) const { qmessagebox_wheelevent_isbase = value; }
    void setQMessageBox_KeyReleaseEvent_IsBase(bool value) const { qmessagebox_keyreleaseevent_isbase = value; }
    void setQMessageBox_FocusInEvent_IsBase(bool value) const { qmessagebox_focusinevent_isbase = value; }
    void setQMessageBox_FocusOutEvent_IsBase(bool value) const { qmessagebox_focusoutevent_isbase = value; }
    void setQMessageBox_EnterEvent_IsBase(bool value) const { qmessagebox_enterevent_isbase = value; }
    void setQMessageBox_LeaveEvent_IsBase(bool value) const { qmessagebox_leaveevent_isbase = value; }
    void setQMessageBox_PaintEvent_IsBase(bool value) const { qmessagebox_paintevent_isbase = value; }
    void setQMessageBox_MoveEvent_IsBase(bool value) const { qmessagebox_moveevent_isbase = value; }
    void setQMessageBox_TabletEvent_IsBase(bool value) const { qmessagebox_tabletevent_isbase = value; }
    void setQMessageBox_ActionEvent_IsBase(bool value) const { qmessagebox_actionevent_isbase = value; }
    void setQMessageBox_DragEnterEvent_IsBase(bool value) const { qmessagebox_dragenterevent_isbase = value; }
    void setQMessageBox_DragMoveEvent_IsBase(bool value) const { qmessagebox_dragmoveevent_isbase = value; }
    void setQMessageBox_DragLeaveEvent_IsBase(bool value) const { qmessagebox_dragleaveevent_isbase = value; }
    void setQMessageBox_DropEvent_IsBase(bool value) const { qmessagebox_dropevent_isbase = value; }
    void setQMessageBox_HideEvent_IsBase(bool value) const { qmessagebox_hideevent_isbase = value; }
    void setQMessageBox_NativeEvent_IsBase(bool value) const { qmessagebox_nativeevent_isbase = value; }
    void setQMessageBox_Metric_IsBase(bool value) const { qmessagebox_metric_isbase = value; }
    void setQMessageBox_InitPainter_IsBase(bool value) const { qmessagebox_initpainter_isbase = value; }
    void setQMessageBox_Redirected_IsBase(bool value) const { qmessagebox_redirected_isbase = value; }
    void setQMessageBox_SharedPainter_IsBase(bool value) const { qmessagebox_sharedpainter_isbase = value; }
    void setQMessageBox_InputMethodEvent_IsBase(bool value) const { qmessagebox_inputmethodevent_isbase = value; }
    void setQMessageBox_InputMethodQuery_IsBase(bool value) const { qmessagebox_inputmethodquery_isbase = value; }
    void setQMessageBox_FocusNextPrevChild_IsBase(bool value) const { qmessagebox_focusnextprevchild_isbase = value; }
    void setQMessageBox_TimerEvent_IsBase(bool value) const { qmessagebox_timerevent_isbase = value; }
    void setQMessageBox_ChildEvent_IsBase(bool value) const { qmessagebox_childevent_isbase = value; }
    void setQMessageBox_CustomEvent_IsBase(bool value) const { qmessagebox_customevent_isbase = value; }
    void setQMessageBox_ConnectNotify_IsBase(bool value) const { qmessagebox_connectnotify_isbase = value; }
    void setQMessageBox_DisconnectNotify_IsBase(bool value) const { qmessagebox_disconnectnotify_isbase = value; }
    void setQMessageBox_AdjustPosition_IsBase(bool value) const { qmessagebox_adjustposition_isbase = value; }
    void setQMessageBox_UpdateMicroFocus_IsBase(bool value) const { qmessagebox_updatemicrofocus_isbase = value; }
    void setQMessageBox_Create_IsBase(bool value) const { qmessagebox_create_isbase = value; }
    void setQMessageBox_Destroy_IsBase(bool value) const { qmessagebox_destroy_isbase = value; }
    void setQMessageBox_FocusNextChild_IsBase(bool value) const { qmessagebox_focusnextchild_isbase = value; }
    void setQMessageBox_FocusPreviousChild_IsBase(bool value) const { qmessagebox_focuspreviouschild_isbase = value; }
    void setQMessageBox_Sender_IsBase(bool value) const { qmessagebox_sender_isbase = value; }
    void setQMessageBox_SenderSignalIndex_IsBase(bool value) const { qmessagebox_sendersignalindex_isbase = value; }
    void setQMessageBox_Receivers_IsBase(bool value) const { qmessagebox_receivers_isbase = value; }
    void setQMessageBox_IsSignalConnected_IsBase(bool value) const { qmessagebox_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qmessagebox_metacall_isbase) {
            qmessagebox_metacall_isbase = false;
            return QMessageBox::qt_metacall(param1, param2, param3);
        } else if (qmessagebox_metacall_callback != nullptr) {
            return qmessagebox_metacall_callback(this, param1, param2, param3);
        } else {
            return QMessageBox::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qmessagebox_event_isbase) {
            qmessagebox_event_isbase = false;
            return QMessageBox::event(e);
        } else if (qmessagebox_event_callback != nullptr) {
            return qmessagebox_event_callback(this, e);
        } else {
            return QMessageBox::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qmessagebox_resizeevent_isbase) {
            qmessagebox_resizeevent_isbase = false;
            QMessageBox::resizeEvent(event);
        } else if (qmessagebox_resizeevent_callback != nullptr) {
            qmessagebox_resizeevent_callback(this, event);
        } else {
            QMessageBox::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qmessagebox_showevent_isbase) {
            qmessagebox_showevent_isbase = false;
            QMessageBox::showEvent(event);
        } else if (qmessagebox_showevent_callback != nullptr) {
            qmessagebox_showevent_callback(this, event);
        } else {
            QMessageBox::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qmessagebox_closeevent_isbase) {
            qmessagebox_closeevent_isbase = false;
            QMessageBox::closeEvent(event);
        } else if (qmessagebox_closeevent_callback != nullptr) {
            qmessagebox_closeevent_callback(this, event);
        } else {
            QMessageBox::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qmessagebox_keypressevent_isbase) {
            qmessagebox_keypressevent_isbase = false;
            QMessageBox::keyPressEvent(event);
        } else if (qmessagebox_keypressevent_callback != nullptr) {
            qmessagebox_keypressevent_callback(this, event);
        } else {
            QMessageBox::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (qmessagebox_changeevent_isbase) {
            qmessagebox_changeevent_isbase = false;
            QMessageBox::changeEvent(event);
        } else if (qmessagebox_changeevent_callback != nullptr) {
            qmessagebox_changeevent_callback(this, event);
        } else {
            QMessageBox::changeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qmessagebox_setvisible_isbase) {
            qmessagebox_setvisible_isbase = false;
            QMessageBox::setVisible(visible);
        } else if (qmessagebox_setvisible_callback != nullptr) {
            qmessagebox_setvisible_callback(this, visible);
        } else {
            QMessageBox::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qmessagebox_sizehint_isbase) {
            qmessagebox_sizehint_isbase = false;
            return QMessageBox::sizeHint();
        } else if (qmessagebox_sizehint_callback != nullptr) {
            return qmessagebox_sizehint_callback();
        } else {
            return QMessageBox::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qmessagebox_minimumsizehint_isbase) {
            qmessagebox_minimumsizehint_isbase = false;
            return QMessageBox::minimumSizeHint();
        } else if (qmessagebox_minimumsizehint_callback != nullptr) {
            return qmessagebox_minimumsizehint_callback();
        } else {
            return QMessageBox::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void open() override {
        if (qmessagebox_open_isbase) {
            qmessagebox_open_isbase = false;
            QMessageBox::open();
        } else if (qmessagebox_open_callback != nullptr) {
            qmessagebox_open_callback();
        } else {
            QMessageBox::open();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int exec() override {
        if (qmessagebox_exec_isbase) {
            qmessagebox_exec_isbase = false;
            return QMessageBox::exec();
        } else if (qmessagebox_exec_callback != nullptr) {
            return qmessagebox_exec_callback();
        } else {
            return QMessageBox::exec();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void done(int param1) override {
        if (qmessagebox_done_isbase) {
            qmessagebox_done_isbase = false;
            QMessageBox::done(param1);
        } else if (qmessagebox_done_callback != nullptr) {
            qmessagebox_done_callback(this, param1);
        } else {
            QMessageBox::done(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void accept() override {
        if (qmessagebox_accept_isbase) {
            qmessagebox_accept_isbase = false;
            QMessageBox::accept();
        } else if (qmessagebox_accept_callback != nullptr) {
            qmessagebox_accept_callback();
        } else {
            QMessageBox::accept();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reject() override {
        if (qmessagebox_reject_isbase) {
            qmessagebox_reject_isbase = false;
            QMessageBox::reject();
        } else if (qmessagebox_reject_callback != nullptr) {
            qmessagebox_reject_callback();
        } else {
            QMessageBox::reject();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qmessagebox_contextmenuevent_isbase) {
            qmessagebox_contextmenuevent_isbase = false;
            QMessageBox::contextMenuEvent(param1);
        } else if (qmessagebox_contextmenuevent_callback != nullptr) {
            qmessagebox_contextmenuevent_callback(this, param1);
        } else {
            QMessageBox::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qmessagebox_eventfilter_isbase) {
            qmessagebox_eventfilter_isbase = false;
            return QMessageBox::eventFilter(param1, param2);
        } else if (qmessagebox_eventfilter_callback != nullptr) {
            return qmessagebox_eventfilter_callback(this, param1, param2);
        } else {
            return QMessageBox::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qmessagebox_devtype_isbase) {
            qmessagebox_devtype_isbase = false;
            return QMessageBox::devType();
        } else if (qmessagebox_devtype_callback != nullptr) {
            return qmessagebox_devtype_callback();
        } else {
            return QMessageBox::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qmessagebox_heightforwidth_isbase) {
            qmessagebox_heightforwidth_isbase = false;
            return QMessageBox::heightForWidth(param1);
        } else if (qmessagebox_heightforwidth_callback != nullptr) {
            return qmessagebox_heightforwidth_callback(this, param1);
        } else {
            return QMessageBox::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qmessagebox_hasheightforwidth_isbase) {
            qmessagebox_hasheightforwidth_isbase = false;
            return QMessageBox::hasHeightForWidth();
        } else if (qmessagebox_hasheightforwidth_callback != nullptr) {
            return qmessagebox_hasheightforwidth_callback();
        } else {
            return QMessageBox::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qmessagebox_paintengine_isbase) {
            qmessagebox_paintengine_isbase = false;
            return QMessageBox::paintEngine();
        } else if (qmessagebox_paintengine_callback != nullptr) {
            return qmessagebox_paintengine_callback();
        } else {
            return QMessageBox::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qmessagebox_mousepressevent_isbase) {
            qmessagebox_mousepressevent_isbase = false;
            QMessageBox::mousePressEvent(event);
        } else if (qmessagebox_mousepressevent_callback != nullptr) {
            qmessagebox_mousepressevent_callback(this, event);
        } else {
            QMessageBox::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qmessagebox_mousereleaseevent_isbase) {
            qmessagebox_mousereleaseevent_isbase = false;
            QMessageBox::mouseReleaseEvent(event);
        } else if (qmessagebox_mousereleaseevent_callback != nullptr) {
            qmessagebox_mousereleaseevent_callback(this, event);
        } else {
            QMessageBox::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qmessagebox_mousedoubleclickevent_isbase) {
            qmessagebox_mousedoubleclickevent_isbase = false;
            QMessageBox::mouseDoubleClickEvent(event);
        } else if (qmessagebox_mousedoubleclickevent_callback != nullptr) {
            qmessagebox_mousedoubleclickevent_callback(this, event);
        } else {
            QMessageBox::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qmessagebox_mousemoveevent_isbase) {
            qmessagebox_mousemoveevent_isbase = false;
            QMessageBox::mouseMoveEvent(event);
        } else if (qmessagebox_mousemoveevent_callback != nullptr) {
            qmessagebox_mousemoveevent_callback(this, event);
        } else {
            QMessageBox::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qmessagebox_wheelevent_isbase) {
            qmessagebox_wheelevent_isbase = false;
            QMessageBox::wheelEvent(event);
        } else if (qmessagebox_wheelevent_callback != nullptr) {
            qmessagebox_wheelevent_callback(this, event);
        } else {
            QMessageBox::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qmessagebox_keyreleaseevent_isbase) {
            qmessagebox_keyreleaseevent_isbase = false;
            QMessageBox::keyReleaseEvent(event);
        } else if (qmessagebox_keyreleaseevent_callback != nullptr) {
            qmessagebox_keyreleaseevent_callback(this, event);
        } else {
            QMessageBox::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qmessagebox_focusinevent_isbase) {
            qmessagebox_focusinevent_isbase = false;
            QMessageBox::focusInEvent(event);
        } else if (qmessagebox_focusinevent_callback != nullptr) {
            qmessagebox_focusinevent_callback(this, event);
        } else {
            QMessageBox::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qmessagebox_focusoutevent_isbase) {
            qmessagebox_focusoutevent_isbase = false;
            QMessageBox::focusOutEvent(event);
        } else if (qmessagebox_focusoutevent_callback != nullptr) {
            qmessagebox_focusoutevent_callback(this, event);
        } else {
            QMessageBox::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qmessagebox_enterevent_isbase) {
            qmessagebox_enterevent_isbase = false;
            QMessageBox::enterEvent(event);
        } else if (qmessagebox_enterevent_callback != nullptr) {
            qmessagebox_enterevent_callback(this, event);
        } else {
            QMessageBox::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qmessagebox_leaveevent_isbase) {
            qmessagebox_leaveevent_isbase = false;
            QMessageBox::leaveEvent(event);
        } else if (qmessagebox_leaveevent_callback != nullptr) {
            qmessagebox_leaveevent_callback(this, event);
        } else {
            QMessageBox::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qmessagebox_paintevent_isbase) {
            qmessagebox_paintevent_isbase = false;
            QMessageBox::paintEvent(event);
        } else if (qmessagebox_paintevent_callback != nullptr) {
            qmessagebox_paintevent_callback(this, event);
        } else {
            QMessageBox::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qmessagebox_moveevent_isbase) {
            qmessagebox_moveevent_isbase = false;
            QMessageBox::moveEvent(event);
        } else if (qmessagebox_moveevent_callback != nullptr) {
            qmessagebox_moveevent_callback(this, event);
        } else {
            QMessageBox::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qmessagebox_tabletevent_isbase) {
            qmessagebox_tabletevent_isbase = false;
            QMessageBox::tabletEvent(event);
        } else if (qmessagebox_tabletevent_callback != nullptr) {
            qmessagebox_tabletevent_callback(this, event);
        } else {
            QMessageBox::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qmessagebox_actionevent_isbase) {
            qmessagebox_actionevent_isbase = false;
            QMessageBox::actionEvent(event);
        } else if (qmessagebox_actionevent_callback != nullptr) {
            qmessagebox_actionevent_callback(this, event);
        } else {
            QMessageBox::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qmessagebox_dragenterevent_isbase) {
            qmessagebox_dragenterevent_isbase = false;
            QMessageBox::dragEnterEvent(event);
        } else if (qmessagebox_dragenterevent_callback != nullptr) {
            qmessagebox_dragenterevent_callback(this, event);
        } else {
            QMessageBox::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qmessagebox_dragmoveevent_isbase) {
            qmessagebox_dragmoveevent_isbase = false;
            QMessageBox::dragMoveEvent(event);
        } else if (qmessagebox_dragmoveevent_callback != nullptr) {
            qmessagebox_dragmoveevent_callback(this, event);
        } else {
            QMessageBox::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qmessagebox_dragleaveevent_isbase) {
            qmessagebox_dragleaveevent_isbase = false;
            QMessageBox::dragLeaveEvent(event);
        } else if (qmessagebox_dragleaveevent_callback != nullptr) {
            qmessagebox_dragleaveevent_callback(this, event);
        } else {
            QMessageBox::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qmessagebox_dropevent_isbase) {
            qmessagebox_dropevent_isbase = false;
            QMessageBox::dropEvent(event);
        } else if (qmessagebox_dropevent_callback != nullptr) {
            qmessagebox_dropevent_callback(this, event);
        } else {
            QMessageBox::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qmessagebox_hideevent_isbase) {
            qmessagebox_hideevent_isbase = false;
            QMessageBox::hideEvent(event);
        } else if (qmessagebox_hideevent_callback != nullptr) {
            qmessagebox_hideevent_callback(this, event);
        } else {
            QMessageBox::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qmessagebox_nativeevent_isbase) {
            qmessagebox_nativeevent_isbase = false;
            return QMessageBox::nativeEvent(eventType, message, result);
        } else if (qmessagebox_nativeevent_callback != nullptr) {
            return qmessagebox_nativeevent_callback(this, eventType, message, result);
        } else {
            return QMessageBox::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qmessagebox_metric_isbase) {
            qmessagebox_metric_isbase = false;
            return QMessageBox::metric(param1);
        } else if (qmessagebox_metric_callback != nullptr) {
            return qmessagebox_metric_callback(this, param1);
        } else {
            return QMessageBox::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qmessagebox_initpainter_isbase) {
            qmessagebox_initpainter_isbase = false;
            QMessageBox::initPainter(painter);
        } else if (qmessagebox_initpainter_callback != nullptr) {
            qmessagebox_initpainter_callback(this, painter);
        } else {
            QMessageBox::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qmessagebox_redirected_isbase) {
            qmessagebox_redirected_isbase = false;
            return QMessageBox::redirected(offset);
        } else if (qmessagebox_redirected_callback != nullptr) {
            return qmessagebox_redirected_callback(this, offset);
        } else {
            return QMessageBox::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qmessagebox_sharedpainter_isbase) {
            qmessagebox_sharedpainter_isbase = false;
            return QMessageBox::sharedPainter();
        } else if (qmessagebox_sharedpainter_callback != nullptr) {
            return qmessagebox_sharedpainter_callback();
        } else {
            return QMessageBox::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qmessagebox_inputmethodevent_isbase) {
            qmessagebox_inputmethodevent_isbase = false;
            QMessageBox::inputMethodEvent(param1);
        } else if (qmessagebox_inputmethodevent_callback != nullptr) {
            qmessagebox_inputmethodevent_callback(this, param1);
        } else {
            QMessageBox::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qmessagebox_inputmethodquery_isbase) {
            qmessagebox_inputmethodquery_isbase = false;
            return QMessageBox::inputMethodQuery(param1);
        } else if (qmessagebox_inputmethodquery_callback != nullptr) {
            return qmessagebox_inputmethodquery_callback(this, param1);
        } else {
            return QMessageBox::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qmessagebox_focusnextprevchild_isbase) {
            qmessagebox_focusnextprevchild_isbase = false;
            return QMessageBox::focusNextPrevChild(next);
        } else if (qmessagebox_focusnextprevchild_callback != nullptr) {
            return qmessagebox_focusnextprevchild_callback(this, next);
        } else {
            return QMessageBox::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qmessagebox_timerevent_isbase) {
            qmessagebox_timerevent_isbase = false;
            QMessageBox::timerEvent(event);
        } else if (qmessagebox_timerevent_callback != nullptr) {
            qmessagebox_timerevent_callback(this, event);
        } else {
            QMessageBox::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qmessagebox_childevent_isbase) {
            qmessagebox_childevent_isbase = false;
            QMessageBox::childEvent(event);
        } else if (qmessagebox_childevent_callback != nullptr) {
            qmessagebox_childevent_callback(this, event);
        } else {
            QMessageBox::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qmessagebox_customevent_isbase) {
            qmessagebox_customevent_isbase = false;
            QMessageBox::customEvent(event);
        } else if (qmessagebox_customevent_callback != nullptr) {
            qmessagebox_customevent_callback(this, event);
        } else {
            QMessageBox::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qmessagebox_connectnotify_isbase) {
            qmessagebox_connectnotify_isbase = false;
            QMessageBox::connectNotify(signal);
        } else if (qmessagebox_connectnotify_callback != nullptr) {
            qmessagebox_connectnotify_callback(this, signal);
        } else {
            QMessageBox::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qmessagebox_disconnectnotify_isbase) {
            qmessagebox_disconnectnotify_isbase = false;
            QMessageBox::disconnectNotify(signal);
        } else if (qmessagebox_disconnectnotify_callback != nullptr) {
            qmessagebox_disconnectnotify_callback(this, signal);
        } else {
            QMessageBox::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void adjustPosition(QWidget* param1) {
        if (qmessagebox_adjustposition_isbase) {
            qmessagebox_adjustposition_isbase = false;
            QMessageBox::adjustPosition(param1);
        } else if (qmessagebox_adjustposition_callback != nullptr) {
            qmessagebox_adjustposition_callback(this, param1);
        } else {
            QMessageBox::adjustPosition(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qmessagebox_updatemicrofocus_isbase) {
            qmessagebox_updatemicrofocus_isbase = false;
            QMessageBox::updateMicroFocus();
        } else if (qmessagebox_updatemicrofocus_callback != nullptr) {
            qmessagebox_updatemicrofocus_callback();
        } else {
            QMessageBox::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qmessagebox_create_isbase) {
            qmessagebox_create_isbase = false;
            QMessageBox::create();
        } else if (qmessagebox_create_callback != nullptr) {
            qmessagebox_create_callback();
        } else {
            QMessageBox::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qmessagebox_destroy_isbase) {
            qmessagebox_destroy_isbase = false;
            QMessageBox::destroy();
        } else if (qmessagebox_destroy_callback != nullptr) {
            qmessagebox_destroy_callback();
        } else {
            QMessageBox::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qmessagebox_focusnextchild_isbase) {
            qmessagebox_focusnextchild_isbase = false;
            return QMessageBox::focusNextChild();
        } else if (qmessagebox_focusnextchild_callback != nullptr) {
            return qmessagebox_focusnextchild_callback();
        } else {
            return QMessageBox::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qmessagebox_focuspreviouschild_isbase) {
            qmessagebox_focuspreviouschild_isbase = false;
            return QMessageBox::focusPreviousChild();
        } else if (qmessagebox_focuspreviouschild_callback != nullptr) {
            return qmessagebox_focuspreviouschild_callback();
        } else {
            return QMessageBox::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qmessagebox_sender_isbase) {
            qmessagebox_sender_isbase = false;
            return QMessageBox::sender();
        } else if (qmessagebox_sender_callback != nullptr) {
            return qmessagebox_sender_callback();
        } else {
            return QMessageBox::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qmessagebox_sendersignalindex_isbase) {
            qmessagebox_sendersignalindex_isbase = false;
            return QMessageBox::senderSignalIndex();
        } else if (qmessagebox_sendersignalindex_callback != nullptr) {
            return qmessagebox_sendersignalindex_callback();
        } else {
            return QMessageBox::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qmessagebox_receivers_isbase) {
            qmessagebox_receivers_isbase = false;
            return QMessageBox::receivers(signal);
        } else if (qmessagebox_receivers_callback != nullptr) {
            return qmessagebox_receivers_callback(this, signal);
        } else {
            return QMessageBox::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qmessagebox_issignalconnected_isbase) {
            qmessagebox_issignalconnected_isbase = false;
            return QMessageBox::isSignalConnected(signal);
        } else if (qmessagebox_issignalconnected_callback != nullptr) {
            return qmessagebox_issignalconnected_callback(this, signal);
        } else {
            return QMessageBox::isSignalConnected(signal);
        }
    }
};

#endif
