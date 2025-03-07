#pragma once
#ifndef SRCC_LIBVIRTUALQSPLASHSCREEN_H
#define SRCC_LIBVIRTUALQSPLASHSCREEN_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QSplashScreen so that we can call protected methods
class VirtualQSplashScreen : public QSplashScreen {

  public:
    // Virtual class public types (including callbacks)
    using QSplashScreen_Metacall_Callback = int (*)(QSplashScreen*, QMetaObject::Call, int, void**);
    using QSplashScreen_Event_Callback = bool (*)(QSplashScreen*, QEvent*);
    using QSplashScreen_DrawContents_Callback = void (*)(QSplashScreen*, QPainter*);
    using QSplashScreen_MousePressEvent_Callback = void (*)(QSplashScreen*, QMouseEvent*);
    using QSplashScreen_DevType_Callback = int (*)();
    using QSplashScreen_SetVisible_Callback = void (*)(QSplashScreen*, bool);
    using QSplashScreen_SizeHint_Callback = QSize (*)();
    using QSplashScreen_MinimumSizeHint_Callback = QSize (*)();
    using QSplashScreen_HeightForWidth_Callback = int (*)(const QSplashScreen*, int);
    using QSplashScreen_HasHeightForWidth_Callback = bool (*)();
    using QSplashScreen_PaintEngine_Callback = QPaintEngine* (*)();
    using QSplashScreen_MouseReleaseEvent_Callback = void (*)(QSplashScreen*, QMouseEvent*);
    using QSplashScreen_MouseDoubleClickEvent_Callback = void (*)(QSplashScreen*, QMouseEvent*);
    using QSplashScreen_MouseMoveEvent_Callback = void (*)(QSplashScreen*, QMouseEvent*);
    using QSplashScreen_WheelEvent_Callback = void (*)(QSplashScreen*, QWheelEvent*);
    using QSplashScreen_KeyPressEvent_Callback = void (*)(QSplashScreen*, QKeyEvent*);
    using QSplashScreen_KeyReleaseEvent_Callback = void (*)(QSplashScreen*, QKeyEvent*);
    using QSplashScreen_FocusInEvent_Callback = void (*)(QSplashScreen*, QFocusEvent*);
    using QSplashScreen_FocusOutEvent_Callback = void (*)(QSplashScreen*, QFocusEvent*);
    using QSplashScreen_EnterEvent_Callback = void (*)(QSplashScreen*, QEnterEvent*);
    using QSplashScreen_LeaveEvent_Callback = void (*)(QSplashScreen*, QEvent*);
    using QSplashScreen_PaintEvent_Callback = void (*)(QSplashScreen*, QPaintEvent*);
    using QSplashScreen_MoveEvent_Callback = void (*)(QSplashScreen*, QMoveEvent*);
    using QSplashScreen_ResizeEvent_Callback = void (*)(QSplashScreen*, QResizeEvent*);
    using QSplashScreen_CloseEvent_Callback = void (*)(QSplashScreen*, QCloseEvent*);
    using QSplashScreen_ContextMenuEvent_Callback = void (*)(QSplashScreen*, QContextMenuEvent*);
    using QSplashScreen_TabletEvent_Callback = void (*)(QSplashScreen*, QTabletEvent*);
    using QSplashScreen_ActionEvent_Callback = void (*)(QSplashScreen*, QActionEvent*);
    using QSplashScreen_DragEnterEvent_Callback = void (*)(QSplashScreen*, QDragEnterEvent*);
    using QSplashScreen_DragMoveEvent_Callback = void (*)(QSplashScreen*, QDragMoveEvent*);
    using QSplashScreen_DragLeaveEvent_Callback = void (*)(QSplashScreen*, QDragLeaveEvent*);
    using QSplashScreen_DropEvent_Callback = void (*)(QSplashScreen*, QDropEvent*);
    using QSplashScreen_ShowEvent_Callback = void (*)(QSplashScreen*, QShowEvent*);
    using QSplashScreen_HideEvent_Callback = void (*)(QSplashScreen*, QHideEvent*);
    using QSplashScreen_NativeEvent_Callback = bool (*)(QSplashScreen*, const QByteArray&, void*, qintptr*);
    using QSplashScreen_ChangeEvent_Callback = void (*)(QSplashScreen*, QEvent*);
    using QSplashScreen_Metric_Callback = int (*)(const QSplashScreen*, QPaintDevice::PaintDeviceMetric);
    using QSplashScreen_InitPainter_Callback = void (*)(const QSplashScreen*, QPainter*);
    using QSplashScreen_Redirected_Callback = QPaintDevice* (*)(const QSplashScreen*, QPoint*);
    using QSplashScreen_SharedPainter_Callback = QPainter* (*)();
    using QSplashScreen_InputMethodEvent_Callback = void (*)(QSplashScreen*, QInputMethodEvent*);
    using QSplashScreen_InputMethodQuery_Callback = QVariant (*)(const QSplashScreen*, Qt::InputMethodQuery);
    using QSplashScreen_FocusNextPrevChild_Callback = bool (*)(QSplashScreen*, bool);
    using QSplashScreen_EventFilter_Callback = bool (*)(QSplashScreen*, QObject*, QEvent*);
    using QSplashScreen_TimerEvent_Callback = void (*)(QSplashScreen*, QTimerEvent*);
    using QSplashScreen_ChildEvent_Callback = void (*)(QSplashScreen*, QChildEvent*);
    using QSplashScreen_CustomEvent_Callback = void (*)(QSplashScreen*, QEvent*);
    using QSplashScreen_ConnectNotify_Callback = void (*)(QSplashScreen*, const QMetaMethod&);
    using QSplashScreen_DisconnectNotify_Callback = void (*)(QSplashScreen*, const QMetaMethod&);
    using QSplashScreen_UpdateMicroFocus_Callback = void (*)();
    using QSplashScreen_Create_Callback = void (*)();
    using QSplashScreen_Destroy_Callback = void (*)();
    using QSplashScreen_FocusNextChild_Callback = bool (*)();
    using QSplashScreen_FocusPreviousChild_Callback = bool (*)();
    using QSplashScreen_Sender_Callback = QObject* (*)();
    using QSplashScreen_SenderSignalIndex_Callback = int (*)();
    using QSplashScreen_Receivers_Callback = int (*)(const QSplashScreen*, const char*);
    using QSplashScreen_IsSignalConnected_Callback = bool (*)(const QSplashScreen*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QSplashScreen_Metacall_Callback qsplashscreen_metacall_callback = nullptr;
    QSplashScreen_Event_Callback qsplashscreen_event_callback = nullptr;
    QSplashScreen_DrawContents_Callback qsplashscreen_drawcontents_callback = nullptr;
    QSplashScreen_MousePressEvent_Callback qsplashscreen_mousepressevent_callback = nullptr;
    QSplashScreen_DevType_Callback qsplashscreen_devtype_callback = nullptr;
    QSplashScreen_SetVisible_Callback qsplashscreen_setvisible_callback = nullptr;
    QSplashScreen_SizeHint_Callback qsplashscreen_sizehint_callback = nullptr;
    QSplashScreen_MinimumSizeHint_Callback qsplashscreen_minimumsizehint_callback = nullptr;
    QSplashScreen_HeightForWidth_Callback qsplashscreen_heightforwidth_callback = nullptr;
    QSplashScreen_HasHeightForWidth_Callback qsplashscreen_hasheightforwidth_callback = nullptr;
    QSplashScreen_PaintEngine_Callback qsplashscreen_paintengine_callback = nullptr;
    QSplashScreen_MouseReleaseEvent_Callback qsplashscreen_mousereleaseevent_callback = nullptr;
    QSplashScreen_MouseDoubleClickEvent_Callback qsplashscreen_mousedoubleclickevent_callback = nullptr;
    QSplashScreen_MouseMoveEvent_Callback qsplashscreen_mousemoveevent_callback = nullptr;
    QSplashScreen_WheelEvent_Callback qsplashscreen_wheelevent_callback = nullptr;
    QSplashScreen_KeyPressEvent_Callback qsplashscreen_keypressevent_callback = nullptr;
    QSplashScreen_KeyReleaseEvent_Callback qsplashscreen_keyreleaseevent_callback = nullptr;
    QSplashScreen_FocusInEvent_Callback qsplashscreen_focusinevent_callback = nullptr;
    QSplashScreen_FocusOutEvent_Callback qsplashscreen_focusoutevent_callback = nullptr;
    QSplashScreen_EnterEvent_Callback qsplashscreen_enterevent_callback = nullptr;
    QSplashScreen_LeaveEvent_Callback qsplashscreen_leaveevent_callback = nullptr;
    QSplashScreen_PaintEvent_Callback qsplashscreen_paintevent_callback = nullptr;
    QSplashScreen_MoveEvent_Callback qsplashscreen_moveevent_callback = nullptr;
    QSplashScreen_ResizeEvent_Callback qsplashscreen_resizeevent_callback = nullptr;
    QSplashScreen_CloseEvent_Callback qsplashscreen_closeevent_callback = nullptr;
    QSplashScreen_ContextMenuEvent_Callback qsplashscreen_contextmenuevent_callback = nullptr;
    QSplashScreen_TabletEvent_Callback qsplashscreen_tabletevent_callback = nullptr;
    QSplashScreen_ActionEvent_Callback qsplashscreen_actionevent_callback = nullptr;
    QSplashScreen_DragEnterEvent_Callback qsplashscreen_dragenterevent_callback = nullptr;
    QSplashScreen_DragMoveEvent_Callback qsplashscreen_dragmoveevent_callback = nullptr;
    QSplashScreen_DragLeaveEvent_Callback qsplashscreen_dragleaveevent_callback = nullptr;
    QSplashScreen_DropEvent_Callback qsplashscreen_dropevent_callback = nullptr;
    QSplashScreen_ShowEvent_Callback qsplashscreen_showevent_callback = nullptr;
    QSplashScreen_HideEvent_Callback qsplashscreen_hideevent_callback = nullptr;
    QSplashScreen_NativeEvent_Callback qsplashscreen_nativeevent_callback = nullptr;
    QSplashScreen_ChangeEvent_Callback qsplashscreen_changeevent_callback = nullptr;
    QSplashScreen_Metric_Callback qsplashscreen_metric_callback = nullptr;
    QSplashScreen_InitPainter_Callback qsplashscreen_initpainter_callback = nullptr;
    QSplashScreen_Redirected_Callback qsplashscreen_redirected_callback = nullptr;
    QSplashScreen_SharedPainter_Callback qsplashscreen_sharedpainter_callback = nullptr;
    QSplashScreen_InputMethodEvent_Callback qsplashscreen_inputmethodevent_callback = nullptr;
    QSplashScreen_InputMethodQuery_Callback qsplashscreen_inputmethodquery_callback = nullptr;
    QSplashScreen_FocusNextPrevChild_Callback qsplashscreen_focusnextprevchild_callback = nullptr;
    QSplashScreen_EventFilter_Callback qsplashscreen_eventfilter_callback = nullptr;
    QSplashScreen_TimerEvent_Callback qsplashscreen_timerevent_callback = nullptr;
    QSplashScreen_ChildEvent_Callback qsplashscreen_childevent_callback = nullptr;
    QSplashScreen_CustomEvent_Callback qsplashscreen_customevent_callback = nullptr;
    QSplashScreen_ConnectNotify_Callback qsplashscreen_connectnotify_callback = nullptr;
    QSplashScreen_DisconnectNotify_Callback qsplashscreen_disconnectnotify_callback = nullptr;
    QSplashScreen_UpdateMicroFocus_Callback qsplashscreen_updatemicrofocus_callback = nullptr;
    QSplashScreen_Create_Callback qsplashscreen_create_callback = nullptr;
    QSplashScreen_Destroy_Callback qsplashscreen_destroy_callback = nullptr;
    QSplashScreen_FocusNextChild_Callback qsplashscreen_focusnextchild_callback = nullptr;
    QSplashScreen_FocusPreviousChild_Callback qsplashscreen_focuspreviouschild_callback = nullptr;
    QSplashScreen_Sender_Callback qsplashscreen_sender_callback = nullptr;
    QSplashScreen_SenderSignalIndex_Callback qsplashscreen_sendersignalindex_callback = nullptr;
    QSplashScreen_Receivers_Callback qsplashscreen_receivers_callback = nullptr;
    QSplashScreen_IsSignalConnected_Callback qsplashscreen_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qsplashscreen_metacall_isbase = false;
    mutable bool qsplashscreen_event_isbase = false;
    mutable bool qsplashscreen_drawcontents_isbase = false;
    mutable bool qsplashscreen_mousepressevent_isbase = false;
    mutable bool qsplashscreen_devtype_isbase = false;
    mutable bool qsplashscreen_setvisible_isbase = false;
    mutable bool qsplashscreen_sizehint_isbase = false;
    mutable bool qsplashscreen_minimumsizehint_isbase = false;
    mutable bool qsplashscreen_heightforwidth_isbase = false;
    mutable bool qsplashscreen_hasheightforwidth_isbase = false;
    mutable bool qsplashscreen_paintengine_isbase = false;
    mutable bool qsplashscreen_mousereleaseevent_isbase = false;
    mutable bool qsplashscreen_mousedoubleclickevent_isbase = false;
    mutable bool qsplashscreen_mousemoveevent_isbase = false;
    mutable bool qsplashscreen_wheelevent_isbase = false;
    mutable bool qsplashscreen_keypressevent_isbase = false;
    mutable bool qsplashscreen_keyreleaseevent_isbase = false;
    mutable bool qsplashscreen_focusinevent_isbase = false;
    mutable bool qsplashscreen_focusoutevent_isbase = false;
    mutable bool qsplashscreen_enterevent_isbase = false;
    mutable bool qsplashscreen_leaveevent_isbase = false;
    mutable bool qsplashscreen_paintevent_isbase = false;
    mutable bool qsplashscreen_moveevent_isbase = false;
    mutable bool qsplashscreen_resizeevent_isbase = false;
    mutable bool qsplashscreen_closeevent_isbase = false;
    mutable bool qsplashscreen_contextmenuevent_isbase = false;
    mutable bool qsplashscreen_tabletevent_isbase = false;
    mutable bool qsplashscreen_actionevent_isbase = false;
    mutable bool qsplashscreen_dragenterevent_isbase = false;
    mutable bool qsplashscreen_dragmoveevent_isbase = false;
    mutable bool qsplashscreen_dragleaveevent_isbase = false;
    mutable bool qsplashscreen_dropevent_isbase = false;
    mutable bool qsplashscreen_showevent_isbase = false;
    mutable bool qsplashscreen_hideevent_isbase = false;
    mutable bool qsplashscreen_nativeevent_isbase = false;
    mutable bool qsplashscreen_changeevent_isbase = false;
    mutable bool qsplashscreen_metric_isbase = false;
    mutable bool qsplashscreen_initpainter_isbase = false;
    mutable bool qsplashscreen_redirected_isbase = false;
    mutable bool qsplashscreen_sharedpainter_isbase = false;
    mutable bool qsplashscreen_inputmethodevent_isbase = false;
    mutable bool qsplashscreen_inputmethodquery_isbase = false;
    mutable bool qsplashscreen_focusnextprevchild_isbase = false;
    mutable bool qsplashscreen_eventfilter_isbase = false;
    mutable bool qsplashscreen_timerevent_isbase = false;
    mutable bool qsplashscreen_childevent_isbase = false;
    mutable bool qsplashscreen_customevent_isbase = false;
    mutable bool qsplashscreen_connectnotify_isbase = false;
    mutable bool qsplashscreen_disconnectnotify_isbase = false;
    mutable bool qsplashscreen_updatemicrofocus_isbase = false;
    mutable bool qsplashscreen_create_isbase = false;
    mutable bool qsplashscreen_destroy_isbase = false;
    mutable bool qsplashscreen_focusnextchild_isbase = false;
    mutable bool qsplashscreen_focuspreviouschild_isbase = false;
    mutable bool qsplashscreen_sender_isbase = false;
    mutable bool qsplashscreen_sendersignalindex_isbase = false;
    mutable bool qsplashscreen_receivers_isbase = false;
    mutable bool qsplashscreen_issignalconnected_isbase = false;

  public:
    VirtualQSplashScreen() : QSplashScreen(){};
    VirtualQSplashScreen(QScreen* screen) : QSplashScreen(screen){};
    VirtualQSplashScreen(const QPixmap& pixmap) : QSplashScreen(pixmap){};
    VirtualQSplashScreen(const QPixmap& pixmap, Qt::WindowFlags f) : QSplashScreen(pixmap, f){};
    VirtualQSplashScreen(QScreen* screen, const QPixmap& pixmap) : QSplashScreen(screen, pixmap){};
    VirtualQSplashScreen(QScreen* screen, const QPixmap& pixmap, Qt::WindowFlags f) : QSplashScreen(screen, pixmap, f){};

    ~VirtualQSplashScreen() {
        qsplashscreen_metacall_callback = nullptr;
        qsplashscreen_event_callback = nullptr;
        qsplashscreen_drawcontents_callback = nullptr;
        qsplashscreen_mousepressevent_callback = nullptr;
        qsplashscreen_devtype_callback = nullptr;
        qsplashscreen_setvisible_callback = nullptr;
        qsplashscreen_sizehint_callback = nullptr;
        qsplashscreen_minimumsizehint_callback = nullptr;
        qsplashscreen_heightforwidth_callback = nullptr;
        qsplashscreen_hasheightforwidth_callback = nullptr;
        qsplashscreen_paintengine_callback = nullptr;
        qsplashscreen_mousereleaseevent_callback = nullptr;
        qsplashscreen_mousedoubleclickevent_callback = nullptr;
        qsplashscreen_mousemoveevent_callback = nullptr;
        qsplashscreen_wheelevent_callback = nullptr;
        qsplashscreen_keypressevent_callback = nullptr;
        qsplashscreen_keyreleaseevent_callback = nullptr;
        qsplashscreen_focusinevent_callback = nullptr;
        qsplashscreen_focusoutevent_callback = nullptr;
        qsplashscreen_enterevent_callback = nullptr;
        qsplashscreen_leaveevent_callback = nullptr;
        qsplashscreen_paintevent_callback = nullptr;
        qsplashscreen_moveevent_callback = nullptr;
        qsplashscreen_resizeevent_callback = nullptr;
        qsplashscreen_closeevent_callback = nullptr;
        qsplashscreen_contextmenuevent_callback = nullptr;
        qsplashscreen_tabletevent_callback = nullptr;
        qsplashscreen_actionevent_callback = nullptr;
        qsplashscreen_dragenterevent_callback = nullptr;
        qsplashscreen_dragmoveevent_callback = nullptr;
        qsplashscreen_dragleaveevent_callback = nullptr;
        qsplashscreen_dropevent_callback = nullptr;
        qsplashscreen_showevent_callback = nullptr;
        qsplashscreen_hideevent_callback = nullptr;
        qsplashscreen_nativeevent_callback = nullptr;
        qsplashscreen_changeevent_callback = nullptr;
        qsplashscreen_metric_callback = nullptr;
        qsplashscreen_initpainter_callback = nullptr;
        qsplashscreen_redirected_callback = nullptr;
        qsplashscreen_sharedpainter_callback = nullptr;
        qsplashscreen_inputmethodevent_callback = nullptr;
        qsplashscreen_inputmethodquery_callback = nullptr;
        qsplashscreen_focusnextprevchild_callback = nullptr;
        qsplashscreen_eventfilter_callback = nullptr;
        qsplashscreen_timerevent_callback = nullptr;
        qsplashscreen_childevent_callback = nullptr;
        qsplashscreen_customevent_callback = nullptr;
        qsplashscreen_connectnotify_callback = nullptr;
        qsplashscreen_disconnectnotify_callback = nullptr;
        qsplashscreen_updatemicrofocus_callback = nullptr;
        qsplashscreen_create_callback = nullptr;
        qsplashscreen_destroy_callback = nullptr;
        qsplashscreen_focusnextchild_callback = nullptr;
        qsplashscreen_focuspreviouschild_callback = nullptr;
        qsplashscreen_sender_callback = nullptr;
        qsplashscreen_sendersignalindex_callback = nullptr;
        qsplashscreen_receivers_callback = nullptr;
        qsplashscreen_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQSplashScreen_Metacall_Callback(QSplashScreen_Metacall_Callback cb) { qsplashscreen_metacall_callback = cb; }
    void setQSplashScreen_Event_Callback(QSplashScreen_Event_Callback cb) { qsplashscreen_event_callback = cb; }
    void setQSplashScreen_DrawContents_Callback(QSplashScreen_DrawContents_Callback cb) { qsplashscreen_drawcontents_callback = cb; }
    void setQSplashScreen_MousePressEvent_Callback(QSplashScreen_MousePressEvent_Callback cb) { qsplashscreen_mousepressevent_callback = cb; }
    void setQSplashScreen_DevType_Callback(QSplashScreen_DevType_Callback cb) { qsplashscreen_devtype_callback = cb; }
    void setQSplashScreen_SetVisible_Callback(QSplashScreen_SetVisible_Callback cb) { qsplashscreen_setvisible_callback = cb; }
    void setQSplashScreen_SizeHint_Callback(QSplashScreen_SizeHint_Callback cb) { qsplashscreen_sizehint_callback = cb; }
    void setQSplashScreen_MinimumSizeHint_Callback(QSplashScreen_MinimumSizeHint_Callback cb) { qsplashscreen_minimumsizehint_callback = cb; }
    void setQSplashScreen_HeightForWidth_Callback(QSplashScreen_HeightForWidth_Callback cb) { qsplashscreen_heightforwidth_callback = cb; }
    void setQSplashScreen_HasHeightForWidth_Callback(QSplashScreen_HasHeightForWidth_Callback cb) { qsplashscreen_hasheightforwidth_callback = cb; }
    void setQSplashScreen_PaintEngine_Callback(QSplashScreen_PaintEngine_Callback cb) { qsplashscreen_paintengine_callback = cb; }
    void setQSplashScreen_MouseReleaseEvent_Callback(QSplashScreen_MouseReleaseEvent_Callback cb) { qsplashscreen_mousereleaseevent_callback = cb; }
    void setQSplashScreen_MouseDoubleClickEvent_Callback(QSplashScreen_MouseDoubleClickEvent_Callback cb) { qsplashscreen_mousedoubleclickevent_callback = cb; }
    void setQSplashScreen_MouseMoveEvent_Callback(QSplashScreen_MouseMoveEvent_Callback cb) { qsplashscreen_mousemoveevent_callback = cb; }
    void setQSplashScreen_WheelEvent_Callback(QSplashScreen_WheelEvent_Callback cb) { qsplashscreen_wheelevent_callback = cb; }
    void setQSplashScreen_KeyPressEvent_Callback(QSplashScreen_KeyPressEvent_Callback cb) { qsplashscreen_keypressevent_callback = cb; }
    void setQSplashScreen_KeyReleaseEvent_Callback(QSplashScreen_KeyReleaseEvent_Callback cb) { qsplashscreen_keyreleaseevent_callback = cb; }
    void setQSplashScreen_FocusInEvent_Callback(QSplashScreen_FocusInEvent_Callback cb) { qsplashscreen_focusinevent_callback = cb; }
    void setQSplashScreen_FocusOutEvent_Callback(QSplashScreen_FocusOutEvent_Callback cb) { qsplashscreen_focusoutevent_callback = cb; }
    void setQSplashScreen_EnterEvent_Callback(QSplashScreen_EnterEvent_Callback cb) { qsplashscreen_enterevent_callback = cb; }
    void setQSplashScreen_LeaveEvent_Callback(QSplashScreen_LeaveEvent_Callback cb) { qsplashscreen_leaveevent_callback = cb; }
    void setQSplashScreen_PaintEvent_Callback(QSplashScreen_PaintEvent_Callback cb) { qsplashscreen_paintevent_callback = cb; }
    void setQSplashScreen_MoveEvent_Callback(QSplashScreen_MoveEvent_Callback cb) { qsplashscreen_moveevent_callback = cb; }
    void setQSplashScreen_ResizeEvent_Callback(QSplashScreen_ResizeEvent_Callback cb) { qsplashscreen_resizeevent_callback = cb; }
    void setQSplashScreen_CloseEvent_Callback(QSplashScreen_CloseEvent_Callback cb) { qsplashscreen_closeevent_callback = cb; }
    void setQSplashScreen_ContextMenuEvent_Callback(QSplashScreen_ContextMenuEvent_Callback cb) { qsplashscreen_contextmenuevent_callback = cb; }
    void setQSplashScreen_TabletEvent_Callback(QSplashScreen_TabletEvent_Callback cb) { qsplashscreen_tabletevent_callback = cb; }
    void setQSplashScreen_ActionEvent_Callback(QSplashScreen_ActionEvent_Callback cb) { qsplashscreen_actionevent_callback = cb; }
    void setQSplashScreen_DragEnterEvent_Callback(QSplashScreen_DragEnterEvent_Callback cb) { qsplashscreen_dragenterevent_callback = cb; }
    void setQSplashScreen_DragMoveEvent_Callback(QSplashScreen_DragMoveEvent_Callback cb) { qsplashscreen_dragmoveevent_callback = cb; }
    void setQSplashScreen_DragLeaveEvent_Callback(QSplashScreen_DragLeaveEvent_Callback cb) { qsplashscreen_dragleaveevent_callback = cb; }
    void setQSplashScreen_DropEvent_Callback(QSplashScreen_DropEvent_Callback cb) { qsplashscreen_dropevent_callback = cb; }
    void setQSplashScreen_ShowEvent_Callback(QSplashScreen_ShowEvent_Callback cb) { qsplashscreen_showevent_callback = cb; }
    void setQSplashScreen_HideEvent_Callback(QSplashScreen_HideEvent_Callback cb) { qsplashscreen_hideevent_callback = cb; }
    void setQSplashScreen_NativeEvent_Callback(QSplashScreen_NativeEvent_Callback cb) { qsplashscreen_nativeevent_callback = cb; }
    void setQSplashScreen_ChangeEvent_Callback(QSplashScreen_ChangeEvent_Callback cb) { qsplashscreen_changeevent_callback = cb; }
    void setQSplashScreen_Metric_Callback(QSplashScreen_Metric_Callback cb) { qsplashscreen_metric_callback = cb; }
    void setQSplashScreen_InitPainter_Callback(QSplashScreen_InitPainter_Callback cb) { qsplashscreen_initpainter_callback = cb; }
    void setQSplashScreen_Redirected_Callback(QSplashScreen_Redirected_Callback cb) { qsplashscreen_redirected_callback = cb; }
    void setQSplashScreen_SharedPainter_Callback(QSplashScreen_SharedPainter_Callback cb) { qsplashscreen_sharedpainter_callback = cb; }
    void setQSplashScreen_InputMethodEvent_Callback(QSplashScreen_InputMethodEvent_Callback cb) { qsplashscreen_inputmethodevent_callback = cb; }
    void setQSplashScreen_InputMethodQuery_Callback(QSplashScreen_InputMethodQuery_Callback cb) { qsplashscreen_inputmethodquery_callback = cb; }
    void setQSplashScreen_FocusNextPrevChild_Callback(QSplashScreen_FocusNextPrevChild_Callback cb) { qsplashscreen_focusnextprevchild_callback = cb; }
    void setQSplashScreen_EventFilter_Callback(QSplashScreen_EventFilter_Callback cb) { qsplashscreen_eventfilter_callback = cb; }
    void setQSplashScreen_TimerEvent_Callback(QSplashScreen_TimerEvent_Callback cb) { qsplashscreen_timerevent_callback = cb; }
    void setQSplashScreen_ChildEvent_Callback(QSplashScreen_ChildEvent_Callback cb) { qsplashscreen_childevent_callback = cb; }
    void setQSplashScreen_CustomEvent_Callback(QSplashScreen_CustomEvent_Callback cb) { qsplashscreen_customevent_callback = cb; }
    void setQSplashScreen_ConnectNotify_Callback(QSplashScreen_ConnectNotify_Callback cb) { qsplashscreen_connectnotify_callback = cb; }
    void setQSplashScreen_DisconnectNotify_Callback(QSplashScreen_DisconnectNotify_Callback cb) { qsplashscreen_disconnectnotify_callback = cb; }
    void setQSplashScreen_UpdateMicroFocus_Callback(QSplashScreen_UpdateMicroFocus_Callback cb) { qsplashscreen_updatemicrofocus_callback = cb; }
    void setQSplashScreen_Create_Callback(QSplashScreen_Create_Callback cb) { qsplashscreen_create_callback = cb; }
    void setQSplashScreen_Destroy_Callback(QSplashScreen_Destroy_Callback cb) { qsplashscreen_destroy_callback = cb; }
    void setQSplashScreen_FocusNextChild_Callback(QSplashScreen_FocusNextChild_Callback cb) { qsplashscreen_focusnextchild_callback = cb; }
    void setQSplashScreen_FocusPreviousChild_Callback(QSplashScreen_FocusPreviousChild_Callback cb) { qsplashscreen_focuspreviouschild_callback = cb; }
    void setQSplashScreen_Sender_Callback(QSplashScreen_Sender_Callback cb) { qsplashscreen_sender_callback = cb; }
    void setQSplashScreen_SenderSignalIndex_Callback(QSplashScreen_SenderSignalIndex_Callback cb) { qsplashscreen_sendersignalindex_callback = cb; }
    void setQSplashScreen_Receivers_Callback(QSplashScreen_Receivers_Callback cb) { qsplashscreen_receivers_callback = cb; }
    void setQSplashScreen_IsSignalConnected_Callback(QSplashScreen_IsSignalConnected_Callback cb) { qsplashscreen_issignalconnected_callback = cb; }

    // Base flag setters
    void setQSplashScreen_Metacall_IsBase(bool value) const { qsplashscreen_metacall_isbase = value; }
    void setQSplashScreen_Event_IsBase(bool value) const { qsplashscreen_event_isbase = value; }
    void setQSplashScreen_DrawContents_IsBase(bool value) const { qsplashscreen_drawcontents_isbase = value; }
    void setQSplashScreen_MousePressEvent_IsBase(bool value) const { qsplashscreen_mousepressevent_isbase = value; }
    void setQSplashScreen_DevType_IsBase(bool value) const { qsplashscreen_devtype_isbase = value; }
    void setQSplashScreen_SetVisible_IsBase(bool value) const { qsplashscreen_setvisible_isbase = value; }
    void setQSplashScreen_SizeHint_IsBase(bool value) const { qsplashscreen_sizehint_isbase = value; }
    void setQSplashScreen_MinimumSizeHint_IsBase(bool value) const { qsplashscreen_minimumsizehint_isbase = value; }
    void setQSplashScreen_HeightForWidth_IsBase(bool value) const { qsplashscreen_heightforwidth_isbase = value; }
    void setQSplashScreen_HasHeightForWidth_IsBase(bool value) const { qsplashscreen_hasheightforwidth_isbase = value; }
    void setQSplashScreen_PaintEngine_IsBase(bool value) const { qsplashscreen_paintengine_isbase = value; }
    void setQSplashScreen_MouseReleaseEvent_IsBase(bool value) const { qsplashscreen_mousereleaseevent_isbase = value; }
    void setQSplashScreen_MouseDoubleClickEvent_IsBase(bool value) const { qsplashscreen_mousedoubleclickevent_isbase = value; }
    void setQSplashScreen_MouseMoveEvent_IsBase(bool value) const { qsplashscreen_mousemoveevent_isbase = value; }
    void setQSplashScreen_WheelEvent_IsBase(bool value) const { qsplashscreen_wheelevent_isbase = value; }
    void setQSplashScreen_KeyPressEvent_IsBase(bool value) const { qsplashscreen_keypressevent_isbase = value; }
    void setQSplashScreen_KeyReleaseEvent_IsBase(bool value) const { qsplashscreen_keyreleaseevent_isbase = value; }
    void setQSplashScreen_FocusInEvent_IsBase(bool value) const { qsplashscreen_focusinevent_isbase = value; }
    void setQSplashScreen_FocusOutEvent_IsBase(bool value) const { qsplashscreen_focusoutevent_isbase = value; }
    void setQSplashScreen_EnterEvent_IsBase(bool value) const { qsplashscreen_enterevent_isbase = value; }
    void setQSplashScreen_LeaveEvent_IsBase(bool value) const { qsplashscreen_leaveevent_isbase = value; }
    void setQSplashScreen_PaintEvent_IsBase(bool value) const { qsplashscreen_paintevent_isbase = value; }
    void setQSplashScreen_MoveEvent_IsBase(bool value) const { qsplashscreen_moveevent_isbase = value; }
    void setQSplashScreen_ResizeEvent_IsBase(bool value) const { qsplashscreen_resizeevent_isbase = value; }
    void setQSplashScreen_CloseEvent_IsBase(bool value) const { qsplashscreen_closeevent_isbase = value; }
    void setQSplashScreen_ContextMenuEvent_IsBase(bool value) const { qsplashscreen_contextmenuevent_isbase = value; }
    void setQSplashScreen_TabletEvent_IsBase(bool value) const { qsplashscreen_tabletevent_isbase = value; }
    void setQSplashScreen_ActionEvent_IsBase(bool value) const { qsplashscreen_actionevent_isbase = value; }
    void setQSplashScreen_DragEnterEvent_IsBase(bool value) const { qsplashscreen_dragenterevent_isbase = value; }
    void setQSplashScreen_DragMoveEvent_IsBase(bool value) const { qsplashscreen_dragmoveevent_isbase = value; }
    void setQSplashScreen_DragLeaveEvent_IsBase(bool value) const { qsplashscreen_dragleaveevent_isbase = value; }
    void setQSplashScreen_DropEvent_IsBase(bool value) const { qsplashscreen_dropevent_isbase = value; }
    void setQSplashScreen_ShowEvent_IsBase(bool value) const { qsplashscreen_showevent_isbase = value; }
    void setQSplashScreen_HideEvent_IsBase(bool value) const { qsplashscreen_hideevent_isbase = value; }
    void setQSplashScreen_NativeEvent_IsBase(bool value) const { qsplashscreen_nativeevent_isbase = value; }
    void setQSplashScreen_ChangeEvent_IsBase(bool value) const { qsplashscreen_changeevent_isbase = value; }
    void setQSplashScreen_Metric_IsBase(bool value) const { qsplashscreen_metric_isbase = value; }
    void setQSplashScreen_InitPainter_IsBase(bool value) const { qsplashscreen_initpainter_isbase = value; }
    void setQSplashScreen_Redirected_IsBase(bool value) const { qsplashscreen_redirected_isbase = value; }
    void setQSplashScreen_SharedPainter_IsBase(bool value) const { qsplashscreen_sharedpainter_isbase = value; }
    void setQSplashScreen_InputMethodEvent_IsBase(bool value) const { qsplashscreen_inputmethodevent_isbase = value; }
    void setQSplashScreen_InputMethodQuery_IsBase(bool value) const { qsplashscreen_inputmethodquery_isbase = value; }
    void setQSplashScreen_FocusNextPrevChild_IsBase(bool value) const { qsplashscreen_focusnextprevchild_isbase = value; }
    void setQSplashScreen_EventFilter_IsBase(bool value) const { qsplashscreen_eventfilter_isbase = value; }
    void setQSplashScreen_TimerEvent_IsBase(bool value) const { qsplashscreen_timerevent_isbase = value; }
    void setQSplashScreen_ChildEvent_IsBase(bool value) const { qsplashscreen_childevent_isbase = value; }
    void setQSplashScreen_CustomEvent_IsBase(bool value) const { qsplashscreen_customevent_isbase = value; }
    void setQSplashScreen_ConnectNotify_IsBase(bool value) const { qsplashscreen_connectnotify_isbase = value; }
    void setQSplashScreen_DisconnectNotify_IsBase(bool value) const { qsplashscreen_disconnectnotify_isbase = value; }
    void setQSplashScreen_UpdateMicroFocus_IsBase(bool value) const { qsplashscreen_updatemicrofocus_isbase = value; }
    void setQSplashScreen_Create_IsBase(bool value) const { qsplashscreen_create_isbase = value; }
    void setQSplashScreen_Destroy_IsBase(bool value) const { qsplashscreen_destroy_isbase = value; }
    void setQSplashScreen_FocusNextChild_IsBase(bool value) const { qsplashscreen_focusnextchild_isbase = value; }
    void setQSplashScreen_FocusPreviousChild_IsBase(bool value) const { qsplashscreen_focuspreviouschild_isbase = value; }
    void setQSplashScreen_Sender_IsBase(bool value) const { qsplashscreen_sender_isbase = value; }
    void setQSplashScreen_SenderSignalIndex_IsBase(bool value) const { qsplashscreen_sendersignalindex_isbase = value; }
    void setQSplashScreen_Receivers_IsBase(bool value) const { qsplashscreen_receivers_isbase = value; }
    void setQSplashScreen_IsSignalConnected_IsBase(bool value) const { qsplashscreen_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsplashscreen_metacall_isbase) {
            qsplashscreen_metacall_isbase = false;
            return QSplashScreen::qt_metacall(param1, param2, param3);
        } else if (qsplashscreen_metacall_callback != nullptr) {
            return qsplashscreen_metacall_callback(this, param1, param2, param3);
        } else {
            return QSplashScreen::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qsplashscreen_event_isbase) {
            qsplashscreen_event_isbase = false;
            return QSplashScreen::event(e);
        } else if (qsplashscreen_event_callback != nullptr) {
            return qsplashscreen_event_callback(this, e);
        } else {
            return QSplashScreen::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawContents(QPainter* painter) override {
        if (qsplashscreen_drawcontents_isbase) {
            qsplashscreen_drawcontents_isbase = false;
            QSplashScreen::drawContents(painter);
        } else if (qsplashscreen_drawcontents_callback != nullptr) {
            qsplashscreen_drawcontents_callback(this, painter);
        } else {
            QSplashScreen::drawContents(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (qsplashscreen_mousepressevent_isbase) {
            qsplashscreen_mousepressevent_isbase = false;
            QSplashScreen::mousePressEvent(param1);
        } else if (qsplashscreen_mousepressevent_callback != nullptr) {
            qsplashscreen_mousepressevent_callback(this, param1);
        } else {
            QSplashScreen::mousePressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qsplashscreen_devtype_isbase) {
            qsplashscreen_devtype_isbase = false;
            return QSplashScreen::devType();
        } else if (qsplashscreen_devtype_callback != nullptr) {
            return qsplashscreen_devtype_callback();
        } else {
            return QSplashScreen::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qsplashscreen_setvisible_isbase) {
            qsplashscreen_setvisible_isbase = false;
            QSplashScreen::setVisible(visible);
        } else if (qsplashscreen_setvisible_callback != nullptr) {
            qsplashscreen_setvisible_callback(this, visible);
        } else {
            QSplashScreen::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qsplashscreen_sizehint_isbase) {
            qsplashscreen_sizehint_isbase = false;
            return QSplashScreen::sizeHint();
        } else if (qsplashscreen_sizehint_callback != nullptr) {
            return qsplashscreen_sizehint_callback();
        } else {
            return QSplashScreen::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qsplashscreen_minimumsizehint_isbase) {
            qsplashscreen_minimumsizehint_isbase = false;
            return QSplashScreen::minimumSizeHint();
        } else if (qsplashscreen_minimumsizehint_callback != nullptr) {
            return qsplashscreen_minimumsizehint_callback();
        } else {
            return QSplashScreen::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qsplashscreen_heightforwidth_isbase) {
            qsplashscreen_heightforwidth_isbase = false;
            return QSplashScreen::heightForWidth(param1);
        } else if (qsplashscreen_heightforwidth_callback != nullptr) {
            return qsplashscreen_heightforwidth_callback(this, param1);
        } else {
            return QSplashScreen::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qsplashscreen_hasheightforwidth_isbase) {
            qsplashscreen_hasheightforwidth_isbase = false;
            return QSplashScreen::hasHeightForWidth();
        } else if (qsplashscreen_hasheightforwidth_callback != nullptr) {
            return qsplashscreen_hasheightforwidth_callback();
        } else {
            return QSplashScreen::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qsplashscreen_paintengine_isbase) {
            qsplashscreen_paintengine_isbase = false;
            return QSplashScreen::paintEngine();
        } else if (qsplashscreen_paintengine_callback != nullptr) {
            return qsplashscreen_paintengine_callback();
        } else {
            return QSplashScreen::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qsplashscreen_mousereleaseevent_isbase) {
            qsplashscreen_mousereleaseevent_isbase = false;
            QSplashScreen::mouseReleaseEvent(event);
        } else if (qsplashscreen_mousereleaseevent_callback != nullptr) {
            qsplashscreen_mousereleaseevent_callback(this, event);
        } else {
            QSplashScreen::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qsplashscreen_mousedoubleclickevent_isbase) {
            qsplashscreen_mousedoubleclickevent_isbase = false;
            QSplashScreen::mouseDoubleClickEvent(event);
        } else if (qsplashscreen_mousedoubleclickevent_callback != nullptr) {
            qsplashscreen_mousedoubleclickevent_callback(this, event);
        } else {
            QSplashScreen::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qsplashscreen_mousemoveevent_isbase) {
            qsplashscreen_mousemoveevent_isbase = false;
            QSplashScreen::mouseMoveEvent(event);
        } else if (qsplashscreen_mousemoveevent_callback != nullptr) {
            qsplashscreen_mousemoveevent_callback(this, event);
        } else {
            QSplashScreen::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qsplashscreen_wheelevent_isbase) {
            qsplashscreen_wheelevent_isbase = false;
            QSplashScreen::wheelEvent(event);
        } else if (qsplashscreen_wheelevent_callback != nullptr) {
            qsplashscreen_wheelevent_callback(this, event);
        } else {
            QSplashScreen::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qsplashscreen_keypressevent_isbase) {
            qsplashscreen_keypressevent_isbase = false;
            QSplashScreen::keyPressEvent(event);
        } else if (qsplashscreen_keypressevent_callback != nullptr) {
            qsplashscreen_keypressevent_callback(this, event);
        } else {
            QSplashScreen::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qsplashscreen_keyreleaseevent_isbase) {
            qsplashscreen_keyreleaseevent_isbase = false;
            QSplashScreen::keyReleaseEvent(event);
        } else if (qsplashscreen_keyreleaseevent_callback != nullptr) {
            qsplashscreen_keyreleaseevent_callback(this, event);
        } else {
            QSplashScreen::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qsplashscreen_focusinevent_isbase) {
            qsplashscreen_focusinevent_isbase = false;
            QSplashScreen::focusInEvent(event);
        } else if (qsplashscreen_focusinevent_callback != nullptr) {
            qsplashscreen_focusinevent_callback(this, event);
        } else {
            QSplashScreen::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qsplashscreen_focusoutevent_isbase) {
            qsplashscreen_focusoutevent_isbase = false;
            QSplashScreen::focusOutEvent(event);
        } else if (qsplashscreen_focusoutevent_callback != nullptr) {
            qsplashscreen_focusoutevent_callback(this, event);
        } else {
            QSplashScreen::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qsplashscreen_enterevent_isbase) {
            qsplashscreen_enterevent_isbase = false;
            QSplashScreen::enterEvent(event);
        } else if (qsplashscreen_enterevent_callback != nullptr) {
            qsplashscreen_enterevent_callback(this, event);
        } else {
            QSplashScreen::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qsplashscreen_leaveevent_isbase) {
            qsplashscreen_leaveevent_isbase = false;
            QSplashScreen::leaveEvent(event);
        } else if (qsplashscreen_leaveevent_callback != nullptr) {
            qsplashscreen_leaveevent_callback(this, event);
        } else {
            QSplashScreen::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qsplashscreen_paintevent_isbase) {
            qsplashscreen_paintevent_isbase = false;
            QSplashScreen::paintEvent(event);
        } else if (qsplashscreen_paintevent_callback != nullptr) {
            qsplashscreen_paintevent_callback(this, event);
        } else {
            QSplashScreen::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qsplashscreen_moveevent_isbase) {
            qsplashscreen_moveevent_isbase = false;
            QSplashScreen::moveEvent(event);
        } else if (qsplashscreen_moveevent_callback != nullptr) {
            qsplashscreen_moveevent_callback(this, event);
        } else {
            QSplashScreen::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qsplashscreen_resizeevent_isbase) {
            qsplashscreen_resizeevent_isbase = false;
            QSplashScreen::resizeEvent(event);
        } else if (qsplashscreen_resizeevent_callback != nullptr) {
            qsplashscreen_resizeevent_callback(this, event);
        } else {
            QSplashScreen::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qsplashscreen_closeevent_isbase) {
            qsplashscreen_closeevent_isbase = false;
            QSplashScreen::closeEvent(event);
        } else if (qsplashscreen_closeevent_callback != nullptr) {
            qsplashscreen_closeevent_callback(this, event);
        } else {
            QSplashScreen::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qsplashscreen_contextmenuevent_isbase) {
            qsplashscreen_contextmenuevent_isbase = false;
            QSplashScreen::contextMenuEvent(event);
        } else if (qsplashscreen_contextmenuevent_callback != nullptr) {
            qsplashscreen_contextmenuevent_callback(this, event);
        } else {
            QSplashScreen::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qsplashscreen_tabletevent_isbase) {
            qsplashscreen_tabletevent_isbase = false;
            QSplashScreen::tabletEvent(event);
        } else if (qsplashscreen_tabletevent_callback != nullptr) {
            qsplashscreen_tabletevent_callback(this, event);
        } else {
            QSplashScreen::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qsplashscreen_actionevent_isbase) {
            qsplashscreen_actionevent_isbase = false;
            QSplashScreen::actionEvent(event);
        } else if (qsplashscreen_actionevent_callback != nullptr) {
            qsplashscreen_actionevent_callback(this, event);
        } else {
            QSplashScreen::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qsplashscreen_dragenterevent_isbase) {
            qsplashscreen_dragenterevent_isbase = false;
            QSplashScreen::dragEnterEvent(event);
        } else if (qsplashscreen_dragenterevent_callback != nullptr) {
            qsplashscreen_dragenterevent_callback(this, event);
        } else {
            QSplashScreen::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qsplashscreen_dragmoveevent_isbase) {
            qsplashscreen_dragmoveevent_isbase = false;
            QSplashScreen::dragMoveEvent(event);
        } else if (qsplashscreen_dragmoveevent_callback != nullptr) {
            qsplashscreen_dragmoveevent_callback(this, event);
        } else {
            QSplashScreen::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qsplashscreen_dragleaveevent_isbase) {
            qsplashscreen_dragleaveevent_isbase = false;
            QSplashScreen::dragLeaveEvent(event);
        } else if (qsplashscreen_dragleaveevent_callback != nullptr) {
            qsplashscreen_dragleaveevent_callback(this, event);
        } else {
            QSplashScreen::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qsplashscreen_dropevent_isbase) {
            qsplashscreen_dropevent_isbase = false;
            QSplashScreen::dropEvent(event);
        } else if (qsplashscreen_dropevent_callback != nullptr) {
            qsplashscreen_dropevent_callback(this, event);
        } else {
            QSplashScreen::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qsplashscreen_showevent_isbase) {
            qsplashscreen_showevent_isbase = false;
            QSplashScreen::showEvent(event);
        } else if (qsplashscreen_showevent_callback != nullptr) {
            qsplashscreen_showevent_callback(this, event);
        } else {
            QSplashScreen::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qsplashscreen_hideevent_isbase) {
            qsplashscreen_hideevent_isbase = false;
            QSplashScreen::hideEvent(event);
        } else if (qsplashscreen_hideevent_callback != nullptr) {
            qsplashscreen_hideevent_callback(this, event);
        } else {
            QSplashScreen::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qsplashscreen_nativeevent_isbase) {
            qsplashscreen_nativeevent_isbase = false;
            return QSplashScreen::nativeEvent(eventType, message, result);
        } else if (qsplashscreen_nativeevent_callback != nullptr) {
            return qsplashscreen_nativeevent_callback(this, eventType, message, result);
        } else {
            return QSplashScreen::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qsplashscreen_changeevent_isbase) {
            qsplashscreen_changeevent_isbase = false;
            QSplashScreen::changeEvent(param1);
        } else if (qsplashscreen_changeevent_callback != nullptr) {
            qsplashscreen_changeevent_callback(this, param1);
        } else {
            QSplashScreen::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qsplashscreen_metric_isbase) {
            qsplashscreen_metric_isbase = false;
            return QSplashScreen::metric(param1);
        } else if (qsplashscreen_metric_callback != nullptr) {
            return qsplashscreen_metric_callback(this, param1);
        } else {
            return QSplashScreen::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qsplashscreen_initpainter_isbase) {
            qsplashscreen_initpainter_isbase = false;
            QSplashScreen::initPainter(painter);
        } else if (qsplashscreen_initpainter_callback != nullptr) {
            qsplashscreen_initpainter_callback(this, painter);
        } else {
            QSplashScreen::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qsplashscreen_redirected_isbase) {
            qsplashscreen_redirected_isbase = false;
            return QSplashScreen::redirected(offset);
        } else if (qsplashscreen_redirected_callback != nullptr) {
            return qsplashscreen_redirected_callback(this, offset);
        } else {
            return QSplashScreen::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qsplashscreen_sharedpainter_isbase) {
            qsplashscreen_sharedpainter_isbase = false;
            return QSplashScreen::sharedPainter();
        } else if (qsplashscreen_sharedpainter_callback != nullptr) {
            return qsplashscreen_sharedpainter_callback();
        } else {
            return QSplashScreen::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qsplashscreen_inputmethodevent_isbase) {
            qsplashscreen_inputmethodevent_isbase = false;
            QSplashScreen::inputMethodEvent(param1);
        } else if (qsplashscreen_inputmethodevent_callback != nullptr) {
            qsplashscreen_inputmethodevent_callback(this, param1);
        } else {
            QSplashScreen::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qsplashscreen_inputmethodquery_isbase) {
            qsplashscreen_inputmethodquery_isbase = false;
            return QSplashScreen::inputMethodQuery(param1);
        } else if (qsplashscreen_inputmethodquery_callback != nullptr) {
            return qsplashscreen_inputmethodquery_callback(this, param1);
        } else {
            return QSplashScreen::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qsplashscreen_focusnextprevchild_isbase) {
            qsplashscreen_focusnextprevchild_isbase = false;
            return QSplashScreen::focusNextPrevChild(next);
        } else if (qsplashscreen_focusnextprevchild_callback != nullptr) {
            return qsplashscreen_focusnextprevchild_callback(this, next);
        } else {
            return QSplashScreen::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qsplashscreen_eventfilter_isbase) {
            qsplashscreen_eventfilter_isbase = false;
            return QSplashScreen::eventFilter(watched, event);
        } else if (qsplashscreen_eventfilter_callback != nullptr) {
            return qsplashscreen_eventfilter_callback(this, watched, event);
        } else {
            return QSplashScreen::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsplashscreen_timerevent_isbase) {
            qsplashscreen_timerevent_isbase = false;
            QSplashScreen::timerEvent(event);
        } else if (qsplashscreen_timerevent_callback != nullptr) {
            qsplashscreen_timerevent_callback(this, event);
        } else {
            QSplashScreen::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsplashscreen_childevent_isbase) {
            qsplashscreen_childevent_isbase = false;
            QSplashScreen::childEvent(event);
        } else if (qsplashscreen_childevent_callback != nullptr) {
            qsplashscreen_childevent_callback(this, event);
        } else {
            QSplashScreen::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsplashscreen_customevent_isbase) {
            qsplashscreen_customevent_isbase = false;
            QSplashScreen::customEvent(event);
        } else if (qsplashscreen_customevent_callback != nullptr) {
            qsplashscreen_customevent_callback(this, event);
        } else {
            QSplashScreen::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsplashscreen_connectnotify_isbase) {
            qsplashscreen_connectnotify_isbase = false;
            QSplashScreen::connectNotify(signal);
        } else if (qsplashscreen_connectnotify_callback != nullptr) {
            qsplashscreen_connectnotify_callback(this, signal);
        } else {
            QSplashScreen::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsplashscreen_disconnectnotify_isbase) {
            qsplashscreen_disconnectnotify_isbase = false;
            QSplashScreen::disconnectNotify(signal);
        } else if (qsplashscreen_disconnectnotify_callback != nullptr) {
            qsplashscreen_disconnectnotify_callback(this, signal);
        } else {
            QSplashScreen::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qsplashscreen_updatemicrofocus_isbase) {
            qsplashscreen_updatemicrofocus_isbase = false;
            QSplashScreen::updateMicroFocus();
        } else if (qsplashscreen_updatemicrofocus_callback != nullptr) {
            qsplashscreen_updatemicrofocus_callback();
        } else {
            QSplashScreen::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qsplashscreen_create_isbase) {
            qsplashscreen_create_isbase = false;
            QSplashScreen::create();
        } else if (qsplashscreen_create_callback != nullptr) {
            qsplashscreen_create_callback();
        } else {
            QSplashScreen::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qsplashscreen_destroy_isbase) {
            qsplashscreen_destroy_isbase = false;
            QSplashScreen::destroy();
        } else if (qsplashscreen_destroy_callback != nullptr) {
            qsplashscreen_destroy_callback();
        } else {
            QSplashScreen::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qsplashscreen_focusnextchild_isbase) {
            qsplashscreen_focusnextchild_isbase = false;
            return QSplashScreen::focusNextChild();
        } else if (qsplashscreen_focusnextchild_callback != nullptr) {
            return qsplashscreen_focusnextchild_callback();
        } else {
            return QSplashScreen::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qsplashscreen_focuspreviouschild_isbase) {
            qsplashscreen_focuspreviouschild_isbase = false;
            return QSplashScreen::focusPreviousChild();
        } else if (qsplashscreen_focuspreviouschild_callback != nullptr) {
            return qsplashscreen_focuspreviouschild_callback();
        } else {
            return QSplashScreen::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qsplashscreen_sender_isbase) {
            qsplashscreen_sender_isbase = false;
            return QSplashScreen::sender();
        } else if (qsplashscreen_sender_callback != nullptr) {
            return qsplashscreen_sender_callback();
        } else {
            return QSplashScreen::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qsplashscreen_sendersignalindex_isbase) {
            qsplashscreen_sendersignalindex_isbase = false;
            return QSplashScreen::senderSignalIndex();
        } else if (qsplashscreen_sendersignalindex_callback != nullptr) {
            return qsplashscreen_sendersignalindex_callback();
        } else {
            return QSplashScreen::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qsplashscreen_receivers_isbase) {
            qsplashscreen_receivers_isbase = false;
            return QSplashScreen::receivers(signal);
        } else if (qsplashscreen_receivers_callback != nullptr) {
            return qsplashscreen_receivers_callback(this, signal);
        } else {
            return QSplashScreen::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qsplashscreen_issignalconnected_isbase) {
            qsplashscreen_issignalconnected_isbase = false;
            return QSplashScreen::isSignalConnected(signal);
        } else if (qsplashscreen_issignalconnected_callback != nullptr) {
            return qsplashscreen_issignalconnected_callback(this, signal);
        } else {
            return QSplashScreen::isSignalConnected(signal);
        }
    }
};

#endif
