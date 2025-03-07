#pragma once
#ifndef SRCC_LIBVIRTUALQGRAPHICSVIEW_H
#define SRCC_LIBVIRTUALQGRAPHICSVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QGraphicsView so that we can call protected methods
class VirtualQGraphicsView : public QGraphicsView {

  public:
    // Virtual class public types (including callbacks)
    using QGraphicsView_Metacall_Callback = int (*)(QGraphicsView*, QMetaObject::Call, int, void**);
    using QGraphicsView_SizeHint_Callback = QSize (*)();
    using QGraphicsView_InputMethodQuery_Callback = QVariant (*)(const QGraphicsView*, Qt::InputMethodQuery);
    using QGraphicsView_SetupViewport_Callback = void (*)(QGraphicsView*, QWidget*);
    using QGraphicsView_Event_Callback = bool (*)(QGraphicsView*, QEvent*);
    using QGraphicsView_ViewportEvent_Callback = bool (*)(QGraphicsView*, QEvent*);
    using QGraphicsView_ContextMenuEvent_Callback = void (*)(QGraphicsView*, QContextMenuEvent*);
    using QGraphicsView_DragEnterEvent_Callback = void (*)(QGraphicsView*, QDragEnterEvent*);
    using QGraphicsView_DragLeaveEvent_Callback = void (*)(QGraphicsView*, QDragLeaveEvent*);
    using QGraphicsView_DragMoveEvent_Callback = void (*)(QGraphicsView*, QDragMoveEvent*);
    using QGraphicsView_DropEvent_Callback = void (*)(QGraphicsView*, QDropEvent*);
    using QGraphicsView_FocusInEvent_Callback = void (*)(QGraphicsView*, QFocusEvent*);
    using QGraphicsView_FocusNextPrevChild_Callback = bool (*)(QGraphicsView*, bool);
    using QGraphicsView_FocusOutEvent_Callback = void (*)(QGraphicsView*, QFocusEvent*);
    using QGraphicsView_KeyPressEvent_Callback = void (*)(QGraphicsView*, QKeyEvent*);
    using QGraphicsView_KeyReleaseEvent_Callback = void (*)(QGraphicsView*, QKeyEvent*);
    using QGraphicsView_MouseDoubleClickEvent_Callback = void (*)(QGraphicsView*, QMouseEvent*);
    using QGraphicsView_MousePressEvent_Callback = void (*)(QGraphicsView*, QMouseEvent*);
    using QGraphicsView_MouseMoveEvent_Callback = void (*)(QGraphicsView*, QMouseEvent*);
    using QGraphicsView_MouseReleaseEvent_Callback = void (*)(QGraphicsView*, QMouseEvent*);
    using QGraphicsView_WheelEvent_Callback = void (*)(QGraphicsView*, QWheelEvent*);
    using QGraphicsView_PaintEvent_Callback = void (*)(QGraphicsView*, QPaintEvent*);
    using QGraphicsView_ResizeEvent_Callback = void (*)(QGraphicsView*, QResizeEvent*);
    using QGraphicsView_ScrollContentsBy_Callback = void (*)(QGraphicsView*, int, int);
    using QGraphicsView_ShowEvent_Callback = void (*)(QGraphicsView*, QShowEvent*);
    using QGraphicsView_InputMethodEvent_Callback = void (*)(QGraphicsView*, QInputMethodEvent*);
    using QGraphicsView_DrawBackground_Callback = void (*)(QGraphicsView*, QPainter*, const QRectF&);
    using QGraphicsView_DrawForeground_Callback = void (*)(QGraphicsView*, QPainter*, const QRectF&);
    using QGraphicsView_MinimumSizeHint_Callback = QSize (*)();
    using QGraphicsView_EventFilter_Callback = bool (*)(QGraphicsView*, QObject*, QEvent*);
    using QGraphicsView_ViewportSizeHint_Callback = QSize (*)();
    using QGraphicsView_ChangeEvent_Callback = void (*)(QGraphicsView*, QEvent*);
    using QGraphicsView_InitStyleOption_Callback = void (*)(const QGraphicsView*, QStyleOptionFrame*);
    using QGraphicsView_DevType_Callback = int (*)();
    using QGraphicsView_SetVisible_Callback = void (*)(QGraphicsView*, bool);
    using QGraphicsView_HeightForWidth_Callback = int (*)(const QGraphicsView*, int);
    using QGraphicsView_HasHeightForWidth_Callback = bool (*)();
    using QGraphicsView_PaintEngine_Callback = QPaintEngine* (*)();
    using QGraphicsView_EnterEvent_Callback = void (*)(QGraphicsView*, QEnterEvent*);
    using QGraphicsView_LeaveEvent_Callback = void (*)(QGraphicsView*, QEvent*);
    using QGraphicsView_MoveEvent_Callback = void (*)(QGraphicsView*, QMoveEvent*);
    using QGraphicsView_CloseEvent_Callback = void (*)(QGraphicsView*, QCloseEvent*);
    using QGraphicsView_TabletEvent_Callback = void (*)(QGraphicsView*, QTabletEvent*);
    using QGraphicsView_ActionEvent_Callback = void (*)(QGraphicsView*, QActionEvent*);
    using QGraphicsView_HideEvent_Callback = void (*)(QGraphicsView*, QHideEvent*);
    using QGraphicsView_NativeEvent_Callback = bool (*)(QGraphicsView*, const QByteArray&, void*, qintptr*);
    using QGraphicsView_Metric_Callback = int (*)(const QGraphicsView*, QPaintDevice::PaintDeviceMetric);
    using QGraphicsView_InitPainter_Callback = void (*)(const QGraphicsView*, QPainter*);
    using QGraphicsView_Redirected_Callback = QPaintDevice* (*)(const QGraphicsView*, QPoint*);
    using QGraphicsView_SharedPainter_Callback = QPainter* (*)();
    using QGraphicsView_TimerEvent_Callback = void (*)(QGraphicsView*, QTimerEvent*);
    using QGraphicsView_ChildEvent_Callback = void (*)(QGraphicsView*, QChildEvent*);
    using QGraphicsView_CustomEvent_Callback = void (*)(QGraphicsView*, QEvent*);
    using QGraphicsView_ConnectNotify_Callback = void (*)(QGraphicsView*, const QMetaMethod&);
    using QGraphicsView_DisconnectNotify_Callback = void (*)(QGraphicsView*, const QMetaMethod&);
    using QGraphicsView_SetViewportMargins_Callback = void (*)(QGraphicsView*, int, int, int, int);
    using QGraphicsView_ViewportMargins_Callback = QMargins (*)();
    using QGraphicsView_DrawFrame_Callback = void (*)(QGraphicsView*, QPainter*);
    using QGraphicsView_UpdateMicroFocus_Callback = void (*)();
    using QGraphicsView_Create_Callback = void (*)();
    using QGraphicsView_Destroy_Callback = void (*)();
    using QGraphicsView_FocusNextChild_Callback = bool (*)();
    using QGraphicsView_FocusPreviousChild_Callback = bool (*)();
    using QGraphicsView_Sender_Callback = QObject* (*)();
    using QGraphicsView_SenderSignalIndex_Callback = int (*)();
    using QGraphicsView_Receivers_Callback = int (*)(const QGraphicsView*, const char*);
    using QGraphicsView_IsSignalConnected_Callback = bool (*)(const QGraphicsView*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QGraphicsView_Metacall_Callback qgraphicsview_metacall_callback = nullptr;
    QGraphicsView_SizeHint_Callback qgraphicsview_sizehint_callback = nullptr;
    QGraphicsView_InputMethodQuery_Callback qgraphicsview_inputmethodquery_callback = nullptr;
    QGraphicsView_SetupViewport_Callback qgraphicsview_setupviewport_callback = nullptr;
    QGraphicsView_Event_Callback qgraphicsview_event_callback = nullptr;
    QGraphicsView_ViewportEvent_Callback qgraphicsview_viewportevent_callback = nullptr;
    QGraphicsView_ContextMenuEvent_Callback qgraphicsview_contextmenuevent_callback = nullptr;
    QGraphicsView_DragEnterEvent_Callback qgraphicsview_dragenterevent_callback = nullptr;
    QGraphicsView_DragLeaveEvent_Callback qgraphicsview_dragleaveevent_callback = nullptr;
    QGraphicsView_DragMoveEvent_Callback qgraphicsview_dragmoveevent_callback = nullptr;
    QGraphicsView_DropEvent_Callback qgraphicsview_dropevent_callback = nullptr;
    QGraphicsView_FocusInEvent_Callback qgraphicsview_focusinevent_callback = nullptr;
    QGraphicsView_FocusNextPrevChild_Callback qgraphicsview_focusnextprevchild_callback = nullptr;
    QGraphicsView_FocusOutEvent_Callback qgraphicsview_focusoutevent_callback = nullptr;
    QGraphicsView_KeyPressEvent_Callback qgraphicsview_keypressevent_callback = nullptr;
    QGraphicsView_KeyReleaseEvent_Callback qgraphicsview_keyreleaseevent_callback = nullptr;
    QGraphicsView_MouseDoubleClickEvent_Callback qgraphicsview_mousedoubleclickevent_callback = nullptr;
    QGraphicsView_MousePressEvent_Callback qgraphicsview_mousepressevent_callback = nullptr;
    QGraphicsView_MouseMoveEvent_Callback qgraphicsview_mousemoveevent_callback = nullptr;
    QGraphicsView_MouseReleaseEvent_Callback qgraphicsview_mousereleaseevent_callback = nullptr;
    QGraphicsView_WheelEvent_Callback qgraphicsview_wheelevent_callback = nullptr;
    QGraphicsView_PaintEvent_Callback qgraphicsview_paintevent_callback = nullptr;
    QGraphicsView_ResizeEvent_Callback qgraphicsview_resizeevent_callback = nullptr;
    QGraphicsView_ScrollContentsBy_Callback qgraphicsview_scrollcontentsby_callback = nullptr;
    QGraphicsView_ShowEvent_Callback qgraphicsview_showevent_callback = nullptr;
    QGraphicsView_InputMethodEvent_Callback qgraphicsview_inputmethodevent_callback = nullptr;
    QGraphicsView_DrawBackground_Callback qgraphicsview_drawbackground_callback = nullptr;
    QGraphicsView_DrawForeground_Callback qgraphicsview_drawforeground_callback = nullptr;
    QGraphicsView_MinimumSizeHint_Callback qgraphicsview_minimumsizehint_callback = nullptr;
    QGraphicsView_EventFilter_Callback qgraphicsview_eventfilter_callback = nullptr;
    QGraphicsView_ViewportSizeHint_Callback qgraphicsview_viewportsizehint_callback = nullptr;
    QGraphicsView_ChangeEvent_Callback qgraphicsview_changeevent_callback = nullptr;
    QGraphicsView_InitStyleOption_Callback qgraphicsview_initstyleoption_callback = nullptr;
    QGraphicsView_DevType_Callback qgraphicsview_devtype_callback = nullptr;
    QGraphicsView_SetVisible_Callback qgraphicsview_setvisible_callback = nullptr;
    QGraphicsView_HeightForWidth_Callback qgraphicsview_heightforwidth_callback = nullptr;
    QGraphicsView_HasHeightForWidth_Callback qgraphicsview_hasheightforwidth_callback = nullptr;
    QGraphicsView_PaintEngine_Callback qgraphicsview_paintengine_callback = nullptr;
    QGraphicsView_EnterEvent_Callback qgraphicsview_enterevent_callback = nullptr;
    QGraphicsView_LeaveEvent_Callback qgraphicsview_leaveevent_callback = nullptr;
    QGraphicsView_MoveEvent_Callback qgraphicsview_moveevent_callback = nullptr;
    QGraphicsView_CloseEvent_Callback qgraphicsview_closeevent_callback = nullptr;
    QGraphicsView_TabletEvent_Callback qgraphicsview_tabletevent_callback = nullptr;
    QGraphicsView_ActionEvent_Callback qgraphicsview_actionevent_callback = nullptr;
    QGraphicsView_HideEvent_Callback qgraphicsview_hideevent_callback = nullptr;
    QGraphicsView_NativeEvent_Callback qgraphicsview_nativeevent_callback = nullptr;
    QGraphicsView_Metric_Callback qgraphicsview_metric_callback = nullptr;
    QGraphicsView_InitPainter_Callback qgraphicsview_initpainter_callback = nullptr;
    QGraphicsView_Redirected_Callback qgraphicsview_redirected_callback = nullptr;
    QGraphicsView_SharedPainter_Callback qgraphicsview_sharedpainter_callback = nullptr;
    QGraphicsView_TimerEvent_Callback qgraphicsview_timerevent_callback = nullptr;
    QGraphicsView_ChildEvent_Callback qgraphicsview_childevent_callback = nullptr;
    QGraphicsView_CustomEvent_Callback qgraphicsview_customevent_callback = nullptr;
    QGraphicsView_ConnectNotify_Callback qgraphicsview_connectnotify_callback = nullptr;
    QGraphicsView_DisconnectNotify_Callback qgraphicsview_disconnectnotify_callback = nullptr;
    QGraphicsView_SetViewportMargins_Callback qgraphicsview_setviewportmargins_callback = nullptr;
    QGraphicsView_ViewportMargins_Callback qgraphicsview_viewportmargins_callback = nullptr;
    QGraphicsView_DrawFrame_Callback qgraphicsview_drawframe_callback = nullptr;
    QGraphicsView_UpdateMicroFocus_Callback qgraphicsview_updatemicrofocus_callback = nullptr;
    QGraphicsView_Create_Callback qgraphicsview_create_callback = nullptr;
    QGraphicsView_Destroy_Callback qgraphicsview_destroy_callback = nullptr;
    QGraphicsView_FocusNextChild_Callback qgraphicsview_focusnextchild_callback = nullptr;
    QGraphicsView_FocusPreviousChild_Callback qgraphicsview_focuspreviouschild_callback = nullptr;
    QGraphicsView_Sender_Callback qgraphicsview_sender_callback = nullptr;
    QGraphicsView_SenderSignalIndex_Callback qgraphicsview_sendersignalindex_callback = nullptr;
    QGraphicsView_Receivers_Callback qgraphicsview_receivers_callback = nullptr;
    QGraphicsView_IsSignalConnected_Callback qgraphicsview_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicsview_metacall_isbase = false;
    mutable bool qgraphicsview_sizehint_isbase = false;
    mutable bool qgraphicsview_inputmethodquery_isbase = false;
    mutable bool qgraphicsview_setupviewport_isbase = false;
    mutable bool qgraphicsview_event_isbase = false;
    mutable bool qgraphicsview_viewportevent_isbase = false;
    mutable bool qgraphicsview_contextmenuevent_isbase = false;
    mutable bool qgraphicsview_dragenterevent_isbase = false;
    mutable bool qgraphicsview_dragleaveevent_isbase = false;
    mutable bool qgraphicsview_dragmoveevent_isbase = false;
    mutable bool qgraphicsview_dropevent_isbase = false;
    mutable bool qgraphicsview_focusinevent_isbase = false;
    mutable bool qgraphicsview_focusnextprevchild_isbase = false;
    mutable bool qgraphicsview_focusoutevent_isbase = false;
    mutable bool qgraphicsview_keypressevent_isbase = false;
    mutable bool qgraphicsview_keyreleaseevent_isbase = false;
    mutable bool qgraphicsview_mousedoubleclickevent_isbase = false;
    mutable bool qgraphicsview_mousepressevent_isbase = false;
    mutable bool qgraphicsview_mousemoveevent_isbase = false;
    mutable bool qgraphicsview_mousereleaseevent_isbase = false;
    mutable bool qgraphicsview_wheelevent_isbase = false;
    mutable bool qgraphicsview_paintevent_isbase = false;
    mutable bool qgraphicsview_resizeevent_isbase = false;
    mutable bool qgraphicsview_scrollcontentsby_isbase = false;
    mutable bool qgraphicsview_showevent_isbase = false;
    mutable bool qgraphicsview_inputmethodevent_isbase = false;
    mutable bool qgraphicsview_drawbackground_isbase = false;
    mutable bool qgraphicsview_drawforeground_isbase = false;
    mutable bool qgraphicsview_minimumsizehint_isbase = false;
    mutable bool qgraphicsview_eventfilter_isbase = false;
    mutable bool qgraphicsview_viewportsizehint_isbase = false;
    mutable bool qgraphicsview_changeevent_isbase = false;
    mutable bool qgraphicsview_initstyleoption_isbase = false;
    mutable bool qgraphicsview_devtype_isbase = false;
    mutable bool qgraphicsview_setvisible_isbase = false;
    mutable bool qgraphicsview_heightforwidth_isbase = false;
    mutable bool qgraphicsview_hasheightforwidth_isbase = false;
    mutable bool qgraphicsview_paintengine_isbase = false;
    mutable bool qgraphicsview_enterevent_isbase = false;
    mutable bool qgraphicsview_leaveevent_isbase = false;
    mutable bool qgraphicsview_moveevent_isbase = false;
    mutable bool qgraphicsview_closeevent_isbase = false;
    mutable bool qgraphicsview_tabletevent_isbase = false;
    mutable bool qgraphicsview_actionevent_isbase = false;
    mutable bool qgraphicsview_hideevent_isbase = false;
    mutable bool qgraphicsview_nativeevent_isbase = false;
    mutable bool qgraphicsview_metric_isbase = false;
    mutable bool qgraphicsview_initpainter_isbase = false;
    mutable bool qgraphicsview_redirected_isbase = false;
    mutable bool qgraphicsview_sharedpainter_isbase = false;
    mutable bool qgraphicsview_timerevent_isbase = false;
    mutable bool qgraphicsview_childevent_isbase = false;
    mutable bool qgraphicsview_customevent_isbase = false;
    mutable bool qgraphicsview_connectnotify_isbase = false;
    mutable bool qgraphicsview_disconnectnotify_isbase = false;
    mutable bool qgraphicsview_setviewportmargins_isbase = false;
    mutable bool qgraphicsview_viewportmargins_isbase = false;
    mutable bool qgraphicsview_drawframe_isbase = false;
    mutable bool qgraphicsview_updatemicrofocus_isbase = false;
    mutable bool qgraphicsview_create_isbase = false;
    mutable bool qgraphicsview_destroy_isbase = false;
    mutable bool qgraphicsview_focusnextchild_isbase = false;
    mutable bool qgraphicsview_focuspreviouschild_isbase = false;
    mutable bool qgraphicsview_sender_isbase = false;
    mutable bool qgraphicsview_sendersignalindex_isbase = false;
    mutable bool qgraphicsview_receivers_isbase = false;
    mutable bool qgraphicsview_issignalconnected_isbase = false;

  public:
    VirtualQGraphicsView(QWidget* parent) : QGraphicsView(parent){};
    VirtualQGraphicsView() : QGraphicsView(){};
    VirtualQGraphicsView(QGraphicsScene* scene) : QGraphicsView(scene){};
    VirtualQGraphicsView(QGraphicsScene* scene, QWidget* parent) : QGraphicsView(scene, parent){};

    ~VirtualQGraphicsView() {
        qgraphicsview_metacall_callback = nullptr;
        qgraphicsview_sizehint_callback = nullptr;
        qgraphicsview_inputmethodquery_callback = nullptr;
        qgraphicsview_setupviewport_callback = nullptr;
        qgraphicsview_event_callback = nullptr;
        qgraphicsview_viewportevent_callback = nullptr;
        qgraphicsview_contextmenuevent_callback = nullptr;
        qgraphicsview_dragenterevent_callback = nullptr;
        qgraphicsview_dragleaveevent_callback = nullptr;
        qgraphicsview_dragmoveevent_callback = nullptr;
        qgraphicsview_dropevent_callback = nullptr;
        qgraphicsview_focusinevent_callback = nullptr;
        qgraphicsview_focusnextprevchild_callback = nullptr;
        qgraphicsview_focusoutevent_callback = nullptr;
        qgraphicsview_keypressevent_callback = nullptr;
        qgraphicsview_keyreleaseevent_callback = nullptr;
        qgraphicsview_mousedoubleclickevent_callback = nullptr;
        qgraphicsview_mousepressevent_callback = nullptr;
        qgraphicsview_mousemoveevent_callback = nullptr;
        qgraphicsview_mousereleaseevent_callback = nullptr;
        qgraphicsview_wheelevent_callback = nullptr;
        qgraphicsview_paintevent_callback = nullptr;
        qgraphicsview_resizeevent_callback = nullptr;
        qgraphicsview_scrollcontentsby_callback = nullptr;
        qgraphicsview_showevent_callback = nullptr;
        qgraphicsview_inputmethodevent_callback = nullptr;
        qgraphicsview_drawbackground_callback = nullptr;
        qgraphicsview_drawforeground_callback = nullptr;
        qgraphicsview_minimumsizehint_callback = nullptr;
        qgraphicsview_eventfilter_callback = nullptr;
        qgraphicsview_viewportsizehint_callback = nullptr;
        qgraphicsview_changeevent_callback = nullptr;
        qgraphicsview_initstyleoption_callback = nullptr;
        qgraphicsview_devtype_callback = nullptr;
        qgraphicsview_setvisible_callback = nullptr;
        qgraphicsview_heightforwidth_callback = nullptr;
        qgraphicsview_hasheightforwidth_callback = nullptr;
        qgraphicsview_paintengine_callback = nullptr;
        qgraphicsview_enterevent_callback = nullptr;
        qgraphicsview_leaveevent_callback = nullptr;
        qgraphicsview_moveevent_callback = nullptr;
        qgraphicsview_closeevent_callback = nullptr;
        qgraphicsview_tabletevent_callback = nullptr;
        qgraphicsview_actionevent_callback = nullptr;
        qgraphicsview_hideevent_callback = nullptr;
        qgraphicsview_nativeevent_callback = nullptr;
        qgraphicsview_metric_callback = nullptr;
        qgraphicsview_initpainter_callback = nullptr;
        qgraphicsview_redirected_callback = nullptr;
        qgraphicsview_sharedpainter_callback = nullptr;
        qgraphicsview_timerevent_callback = nullptr;
        qgraphicsview_childevent_callback = nullptr;
        qgraphicsview_customevent_callback = nullptr;
        qgraphicsview_connectnotify_callback = nullptr;
        qgraphicsview_disconnectnotify_callback = nullptr;
        qgraphicsview_setviewportmargins_callback = nullptr;
        qgraphicsview_viewportmargins_callback = nullptr;
        qgraphicsview_drawframe_callback = nullptr;
        qgraphicsview_updatemicrofocus_callback = nullptr;
        qgraphicsview_create_callback = nullptr;
        qgraphicsview_destroy_callback = nullptr;
        qgraphicsview_focusnextchild_callback = nullptr;
        qgraphicsview_focuspreviouschild_callback = nullptr;
        qgraphicsview_sender_callback = nullptr;
        qgraphicsview_sendersignalindex_callback = nullptr;
        qgraphicsview_receivers_callback = nullptr;
        qgraphicsview_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQGraphicsView_Metacall_Callback(QGraphicsView_Metacall_Callback cb) { qgraphicsview_metacall_callback = cb; }
    void setQGraphicsView_SizeHint_Callback(QGraphicsView_SizeHint_Callback cb) { qgraphicsview_sizehint_callback = cb; }
    void setQGraphicsView_InputMethodQuery_Callback(QGraphicsView_InputMethodQuery_Callback cb) { qgraphicsview_inputmethodquery_callback = cb; }
    void setQGraphicsView_SetupViewport_Callback(QGraphicsView_SetupViewport_Callback cb) { qgraphicsview_setupviewport_callback = cb; }
    void setQGraphicsView_Event_Callback(QGraphicsView_Event_Callback cb) { qgraphicsview_event_callback = cb; }
    void setQGraphicsView_ViewportEvent_Callback(QGraphicsView_ViewportEvent_Callback cb) { qgraphicsview_viewportevent_callback = cb; }
    void setQGraphicsView_ContextMenuEvent_Callback(QGraphicsView_ContextMenuEvent_Callback cb) { qgraphicsview_contextmenuevent_callback = cb; }
    void setQGraphicsView_DragEnterEvent_Callback(QGraphicsView_DragEnterEvent_Callback cb) { qgraphicsview_dragenterevent_callback = cb; }
    void setQGraphicsView_DragLeaveEvent_Callback(QGraphicsView_DragLeaveEvent_Callback cb) { qgraphicsview_dragleaveevent_callback = cb; }
    void setQGraphicsView_DragMoveEvent_Callback(QGraphicsView_DragMoveEvent_Callback cb) { qgraphicsview_dragmoveevent_callback = cb; }
    void setQGraphicsView_DropEvent_Callback(QGraphicsView_DropEvent_Callback cb) { qgraphicsview_dropevent_callback = cb; }
    void setQGraphicsView_FocusInEvent_Callback(QGraphicsView_FocusInEvent_Callback cb) { qgraphicsview_focusinevent_callback = cb; }
    void setQGraphicsView_FocusNextPrevChild_Callback(QGraphicsView_FocusNextPrevChild_Callback cb) { qgraphicsview_focusnextprevchild_callback = cb; }
    void setQGraphicsView_FocusOutEvent_Callback(QGraphicsView_FocusOutEvent_Callback cb) { qgraphicsview_focusoutevent_callback = cb; }
    void setQGraphicsView_KeyPressEvent_Callback(QGraphicsView_KeyPressEvent_Callback cb) { qgraphicsview_keypressevent_callback = cb; }
    void setQGraphicsView_KeyReleaseEvent_Callback(QGraphicsView_KeyReleaseEvent_Callback cb) { qgraphicsview_keyreleaseevent_callback = cb; }
    void setQGraphicsView_MouseDoubleClickEvent_Callback(QGraphicsView_MouseDoubleClickEvent_Callback cb) { qgraphicsview_mousedoubleclickevent_callback = cb; }
    void setQGraphicsView_MousePressEvent_Callback(QGraphicsView_MousePressEvent_Callback cb) { qgraphicsview_mousepressevent_callback = cb; }
    void setQGraphicsView_MouseMoveEvent_Callback(QGraphicsView_MouseMoveEvent_Callback cb) { qgraphicsview_mousemoveevent_callback = cb; }
    void setQGraphicsView_MouseReleaseEvent_Callback(QGraphicsView_MouseReleaseEvent_Callback cb) { qgraphicsview_mousereleaseevent_callback = cb; }
    void setQGraphicsView_WheelEvent_Callback(QGraphicsView_WheelEvent_Callback cb) { qgraphicsview_wheelevent_callback = cb; }
    void setQGraphicsView_PaintEvent_Callback(QGraphicsView_PaintEvent_Callback cb) { qgraphicsview_paintevent_callback = cb; }
    void setQGraphicsView_ResizeEvent_Callback(QGraphicsView_ResizeEvent_Callback cb) { qgraphicsview_resizeevent_callback = cb; }
    void setQGraphicsView_ScrollContentsBy_Callback(QGraphicsView_ScrollContentsBy_Callback cb) { qgraphicsview_scrollcontentsby_callback = cb; }
    void setQGraphicsView_ShowEvent_Callback(QGraphicsView_ShowEvent_Callback cb) { qgraphicsview_showevent_callback = cb; }
    void setQGraphicsView_InputMethodEvent_Callback(QGraphicsView_InputMethodEvent_Callback cb) { qgraphicsview_inputmethodevent_callback = cb; }
    void setQGraphicsView_DrawBackground_Callback(QGraphicsView_DrawBackground_Callback cb) { qgraphicsview_drawbackground_callback = cb; }
    void setQGraphicsView_DrawForeground_Callback(QGraphicsView_DrawForeground_Callback cb) { qgraphicsview_drawforeground_callback = cb; }
    void setQGraphicsView_MinimumSizeHint_Callback(QGraphicsView_MinimumSizeHint_Callback cb) { qgraphicsview_minimumsizehint_callback = cb; }
    void setQGraphicsView_EventFilter_Callback(QGraphicsView_EventFilter_Callback cb) { qgraphicsview_eventfilter_callback = cb; }
    void setQGraphicsView_ViewportSizeHint_Callback(QGraphicsView_ViewportSizeHint_Callback cb) { qgraphicsview_viewportsizehint_callback = cb; }
    void setQGraphicsView_ChangeEvent_Callback(QGraphicsView_ChangeEvent_Callback cb) { qgraphicsview_changeevent_callback = cb; }
    void setQGraphicsView_InitStyleOption_Callback(QGraphicsView_InitStyleOption_Callback cb) { qgraphicsview_initstyleoption_callback = cb; }
    void setQGraphicsView_DevType_Callback(QGraphicsView_DevType_Callback cb) { qgraphicsview_devtype_callback = cb; }
    void setQGraphicsView_SetVisible_Callback(QGraphicsView_SetVisible_Callback cb) { qgraphicsview_setvisible_callback = cb; }
    void setQGraphicsView_HeightForWidth_Callback(QGraphicsView_HeightForWidth_Callback cb) { qgraphicsview_heightforwidth_callback = cb; }
    void setQGraphicsView_HasHeightForWidth_Callback(QGraphicsView_HasHeightForWidth_Callback cb) { qgraphicsview_hasheightforwidth_callback = cb; }
    void setQGraphicsView_PaintEngine_Callback(QGraphicsView_PaintEngine_Callback cb) { qgraphicsview_paintengine_callback = cb; }
    void setQGraphicsView_EnterEvent_Callback(QGraphicsView_EnterEvent_Callback cb) { qgraphicsview_enterevent_callback = cb; }
    void setQGraphicsView_LeaveEvent_Callback(QGraphicsView_LeaveEvent_Callback cb) { qgraphicsview_leaveevent_callback = cb; }
    void setQGraphicsView_MoveEvent_Callback(QGraphicsView_MoveEvent_Callback cb) { qgraphicsview_moveevent_callback = cb; }
    void setQGraphicsView_CloseEvent_Callback(QGraphicsView_CloseEvent_Callback cb) { qgraphicsview_closeevent_callback = cb; }
    void setQGraphicsView_TabletEvent_Callback(QGraphicsView_TabletEvent_Callback cb) { qgraphicsview_tabletevent_callback = cb; }
    void setQGraphicsView_ActionEvent_Callback(QGraphicsView_ActionEvent_Callback cb) { qgraphicsview_actionevent_callback = cb; }
    void setQGraphicsView_HideEvent_Callback(QGraphicsView_HideEvent_Callback cb) { qgraphicsview_hideevent_callback = cb; }
    void setQGraphicsView_NativeEvent_Callback(QGraphicsView_NativeEvent_Callback cb) { qgraphicsview_nativeevent_callback = cb; }
    void setQGraphicsView_Metric_Callback(QGraphicsView_Metric_Callback cb) { qgraphicsview_metric_callback = cb; }
    void setQGraphicsView_InitPainter_Callback(QGraphicsView_InitPainter_Callback cb) { qgraphicsview_initpainter_callback = cb; }
    void setQGraphicsView_Redirected_Callback(QGraphicsView_Redirected_Callback cb) { qgraphicsview_redirected_callback = cb; }
    void setQGraphicsView_SharedPainter_Callback(QGraphicsView_SharedPainter_Callback cb) { qgraphicsview_sharedpainter_callback = cb; }
    void setQGraphicsView_TimerEvent_Callback(QGraphicsView_TimerEvent_Callback cb) { qgraphicsview_timerevent_callback = cb; }
    void setQGraphicsView_ChildEvent_Callback(QGraphicsView_ChildEvent_Callback cb) { qgraphicsview_childevent_callback = cb; }
    void setQGraphicsView_CustomEvent_Callback(QGraphicsView_CustomEvent_Callback cb) { qgraphicsview_customevent_callback = cb; }
    void setQGraphicsView_ConnectNotify_Callback(QGraphicsView_ConnectNotify_Callback cb) { qgraphicsview_connectnotify_callback = cb; }
    void setQGraphicsView_DisconnectNotify_Callback(QGraphicsView_DisconnectNotify_Callback cb) { qgraphicsview_disconnectnotify_callback = cb; }
    void setQGraphicsView_SetViewportMargins_Callback(QGraphicsView_SetViewportMargins_Callback cb) { qgraphicsview_setviewportmargins_callback = cb; }
    void setQGraphicsView_ViewportMargins_Callback(QGraphicsView_ViewportMargins_Callback cb) { qgraphicsview_viewportmargins_callback = cb; }
    void setQGraphicsView_DrawFrame_Callback(QGraphicsView_DrawFrame_Callback cb) { qgraphicsview_drawframe_callback = cb; }
    void setQGraphicsView_UpdateMicroFocus_Callback(QGraphicsView_UpdateMicroFocus_Callback cb) { qgraphicsview_updatemicrofocus_callback = cb; }
    void setQGraphicsView_Create_Callback(QGraphicsView_Create_Callback cb) { qgraphicsview_create_callback = cb; }
    void setQGraphicsView_Destroy_Callback(QGraphicsView_Destroy_Callback cb) { qgraphicsview_destroy_callback = cb; }
    void setQGraphicsView_FocusNextChild_Callback(QGraphicsView_FocusNextChild_Callback cb) { qgraphicsview_focusnextchild_callback = cb; }
    void setQGraphicsView_FocusPreviousChild_Callback(QGraphicsView_FocusPreviousChild_Callback cb) { qgraphicsview_focuspreviouschild_callback = cb; }
    void setQGraphicsView_Sender_Callback(QGraphicsView_Sender_Callback cb) { qgraphicsview_sender_callback = cb; }
    void setQGraphicsView_SenderSignalIndex_Callback(QGraphicsView_SenderSignalIndex_Callback cb) { qgraphicsview_sendersignalindex_callback = cb; }
    void setQGraphicsView_Receivers_Callback(QGraphicsView_Receivers_Callback cb) { qgraphicsview_receivers_callback = cb; }
    void setQGraphicsView_IsSignalConnected_Callback(QGraphicsView_IsSignalConnected_Callback cb) { qgraphicsview_issignalconnected_callback = cb; }

    // Base flag setters
    void setQGraphicsView_Metacall_IsBase(bool value) const { qgraphicsview_metacall_isbase = value; }
    void setQGraphicsView_SizeHint_IsBase(bool value) const { qgraphicsview_sizehint_isbase = value; }
    void setQGraphicsView_InputMethodQuery_IsBase(bool value) const { qgraphicsview_inputmethodquery_isbase = value; }
    void setQGraphicsView_SetupViewport_IsBase(bool value) const { qgraphicsview_setupviewport_isbase = value; }
    void setQGraphicsView_Event_IsBase(bool value) const { qgraphicsview_event_isbase = value; }
    void setQGraphicsView_ViewportEvent_IsBase(bool value) const { qgraphicsview_viewportevent_isbase = value; }
    void setQGraphicsView_ContextMenuEvent_IsBase(bool value) const { qgraphicsview_contextmenuevent_isbase = value; }
    void setQGraphicsView_DragEnterEvent_IsBase(bool value) const { qgraphicsview_dragenterevent_isbase = value; }
    void setQGraphicsView_DragLeaveEvent_IsBase(bool value) const { qgraphicsview_dragleaveevent_isbase = value; }
    void setQGraphicsView_DragMoveEvent_IsBase(bool value) const { qgraphicsview_dragmoveevent_isbase = value; }
    void setQGraphicsView_DropEvent_IsBase(bool value) const { qgraphicsview_dropevent_isbase = value; }
    void setQGraphicsView_FocusInEvent_IsBase(bool value) const { qgraphicsview_focusinevent_isbase = value; }
    void setQGraphicsView_FocusNextPrevChild_IsBase(bool value) const { qgraphicsview_focusnextprevchild_isbase = value; }
    void setQGraphicsView_FocusOutEvent_IsBase(bool value) const { qgraphicsview_focusoutevent_isbase = value; }
    void setQGraphicsView_KeyPressEvent_IsBase(bool value) const { qgraphicsview_keypressevent_isbase = value; }
    void setQGraphicsView_KeyReleaseEvent_IsBase(bool value) const { qgraphicsview_keyreleaseevent_isbase = value; }
    void setQGraphicsView_MouseDoubleClickEvent_IsBase(bool value) const { qgraphicsview_mousedoubleclickevent_isbase = value; }
    void setQGraphicsView_MousePressEvent_IsBase(bool value) const { qgraphicsview_mousepressevent_isbase = value; }
    void setQGraphicsView_MouseMoveEvent_IsBase(bool value) const { qgraphicsview_mousemoveevent_isbase = value; }
    void setQGraphicsView_MouseReleaseEvent_IsBase(bool value) const { qgraphicsview_mousereleaseevent_isbase = value; }
    void setQGraphicsView_WheelEvent_IsBase(bool value) const { qgraphicsview_wheelevent_isbase = value; }
    void setQGraphicsView_PaintEvent_IsBase(bool value) const { qgraphicsview_paintevent_isbase = value; }
    void setQGraphicsView_ResizeEvent_IsBase(bool value) const { qgraphicsview_resizeevent_isbase = value; }
    void setQGraphicsView_ScrollContentsBy_IsBase(bool value) const { qgraphicsview_scrollcontentsby_isbase = value; }
    void setQGraphicsView_ShowEvent_IsBase(bool value) const { qgraphicsview_showevent_isbase = value; }
    void setQGraphicsView_InputMethodEvent_IsBase(bool value) const { qgraphicsview_inputmethodevent_isbase = value; }
    void setQGraphicsView_DrawBackground_IsBase(bool value) const { qgraphicsview_drawbackground_isbase = value; }
    void setQGraphicsView_DrawForeground_IsBase(bool value) const { qgraphicsview_drawforeground_isbase = value; }
    void setQGraphicsView_MinimumSizeHint_IsBase(bool value) const { qgraphicsview_minimumsizehint_isbase = value; }
    void setQGraphicsView_EventFilter_IsBase(bool value) const { qgraphicsview_eventfilter_isbase = value; }
    void setQGraphicsView_ViewportSizeHint_IsBase(bool value) const { qgraphicsview_viewportsizehint_isbase = value; }
    void setQGraphicsView_ChangeEvent_IsBase(bool value) const { qgraphicsview_changeevent_isbase = value; }
    void setQGraphicsView_InitStyleOption_IsBase(bool value) const { qgraphicsview_initstyleoption_isbase = value; }
    void setQGraphicsView_DevType_IsBase(bool value) const { qgraphicsview_devtype_isbase = value; }
    void setQGraphicsView_SetVisible_IsBase(bool value) const { qgraphicsview_setvisible_isbase = value; }
    void setQGraphicsView_HeightForWidth_IsBase(bool value) const { qgraphicsview_heightforwidth_isbase = value; }
    void setQGraphicsView_HasHeightForWidth_IsBase(bool value) const { qgraphicsview_hasheightforwidth_isbase = value; }
    void setQGraphicsView_PaintEngine_IsBase(bool value) const { qgraphicsview_paintengine_isbase = value; }
    void setQGraphicsView_EnterEvent_IsBase(bool value) const { qgraphicsview_enterevent_isbase = value; }
    void setQGraphicsView_LeaveEvent_IsBase(bool value) const { qgraphicsview_leaveevent_isbase = value; }
    void setQGraphicsView_MoveEvent_IsBase(bool value) const { qgraphicsview_moveevent_isbase = value; }
    void setQGraphicsView_CloseEvent_IsBase(bool value) const { qgraphicsview_closeevent_isbase = value; }
    void setQGraphicsView_TabletEvent_IsBase(bool value) const { qgraphicsview_tabletevent_isbase = value; }
    void setQGraphicsView_ActionEvent_IsBase(bool value) const { qgraphicsview_actionevent_isbase = value; }
    void setQGraphicsView_HideEvent_IsBase(bool value) const { qgraphicsview_hideevent_isbase = value; }
    void setQGraphicsView_NativeEvent_IsBase(bool value) const { qgraphicsview_nativeevent_isbase = value; }
    void setQGraphicsView_Metric_IsBase(bool value) const { qgraphicsview_metric_isbase = value; }
    void setQGraphicsView_InitPainter_IsBase(bool value) const { qgraphicsview_initpainter_isbase = value; }
    void setQGraphicsView_Redirected_IsBase(bool value) const { qgraphicsview_redirected_isbase = value; }
    void setQGraphicsView_SharedPainter_IsBase(bool value) const { qgraphicsview_sharedpainter_isbase = value; }
    void setQGraphicsView_TimerEvent_IsBase(bool value) const { qgraphicsview_timerevent_isbase = value; }
    void setQGraphicsView_ChildEvent_IsBase(bool value) const { qgraphicsview_childevent_isbase = value; }
    void setQGraphicsView_CustomEvent_IsBase(bool value) const { qgraphicsview_customevent_isbase = value; }
    void setQGraphicsView_ConnectNotify_IsBase(bool value) const { qgraphicsview_connectnotify_isbase = value; }
    void setQGraphicsView_DisconnectNotify_IsBase(bool value) const { qgraphicsview_disconnectnotify_isbase = value; }
    void setQGraphicsView_SetViewportMargins_IsBase(bool value) const { qgraphicsview_setviewportmargins_isbase = value; }
    void setQGraphicsView_ViewportMargins_IsBase(bool value) const { qgraphicsview_viewportmargins_isbase = value; }
    void setQGraphicsView_DrawFrame_IsBase(bool value) const { qgraphicsview_drawframe_isbase = value; }
    void setQGraphicsView_UpdateMicroFocus_IsBase(bool value) const { qgraphicsview_updatemicrofocus_isbase = value; }
    void setQGraphicsView_Create_IsBase(bool value) const { qgraphicsview_create_isbase = value; }
    void setQGraphicsView_Destroy_IsBase(bool value) const { qgraphicsview_destroy_isbase = value; }
    void setQGraphicsView_FocusNextChild_IsBase(bool value) const { qgraphicsview_focusnextchild_isbase = value; }
    void setQGraphicsView_FocusPreviousChild_IsBase(bool value) const { qgraphicsview_focuspreviouschild_isbase = value; }
    void setQGraphicsView_Sender_IsBase(bool value) const { qgraphicsview_sender_isbase = value; }
    void setQGraphicsView_SenderSignalIndex_IsBase(bool value) const { qgraphicsview_sendersignalindex_isbase = value; }
    void setQGraphicsView_Receivers_IsBase(bool value) const { qgraphicsview_receivers_isbase = value; }
    void setQGraphicsView_IsSignalConnected_IsBase(bool value) const { qgraphicsview_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgraphicsview_metacall_isbase) {
            qgraphicsview_metacall_isbase = false;
            return QGraphicsView::qt_metacall(param1, param2, param3);
        } else if (qgraphicsview_metacall_callback != nullptr) {
            return qgraphicsview_metacall_callback(this, param1, param2, param3);
        } else {
            return QGraphicsView::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qgraphicsview_sizehint_isbase) {
            qgraphicsview_sizehint_isbase = false;
            return QGraphicsView::sizeHint();
        } else if (qgraphicsview_sizehint_callback != nullptr) {
            return qgraphicsview_sizehint_callback();
        } else {
            return QGraphicsView::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qgraphicsview_inputmethodquery_isbase) {
            qgraphicsview_inputmethodquery_isbase = false;
            return QGraphicsView::inputMethodQuery(query);
        } else if (qgraphicsview_inputmethodquery_callback != nullptr) {
            return qgraphicsview_inputmethodquery_callback(this, query);
        } else {
            return QGraphicsView::inputMethodQuery(query);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* widget) override {
        if (qgraphicsview_setupviewport_isbase) {
            qgraphicsview_setupviewport_isbase = false;
            QGraphicsView::setupViewport(widget);
        } else if (qgraphicsview_setupviewport_callback != nullptr) {
            qgraphicsview_setupviewport_callback(this, widget);
        } else {
            QGraphicsView::setupViewport(widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgraphicsview_event_isbase) {
            qgraphicsview_event_isbase = false;
            return QGraphicsView::event(event);
        } else if (qgraphicsview_event_callback != nullptr) {
            return qgraphicsview_event_callback(this, event);
        } else {
            return QGraphicsView::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* event) override {
        if (qgraphicsview_viewportevent_isbase) {
            qgraphicsview_viewportevent_isbase = false;
            return QGraphicsView::viewportEvent(event);
        } else if (qgraphicsview_viewportevent_callback != nullptr) {
            return qgraphicsview_viewportevent_callback(this, event);
        } else {
            return QGraphicsView::viewportEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qgraphicsview_contextmenuevent_isbase) {
            qgraphicsview_contextmenuevent_isbase = false;
            QGraphicsView::contextMenuEvent(event);
        } else if (qgraphicsview_contextmenuevent_callback != nullptr) {
            qgraphicsview_contextmenuevent_callback(this, event);
        } else {
            QGraphicsView::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qgraphicsview_dragenterevent_isbase) {
            qgraphicsview_dragenterevent_isbase = false;
            QGraphicsView::dragEnterEvent(event);
        } else if (qgraphicsview_dragenterevent_callback != nullptr) {
            qgraphicsview_dragenterevent_callback(this, event);
        } else {
            QGraphicsView::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qgraphicsview_dragleaveevent_isbase) {
            qgraphicsview_dragleaveevent_isbase = false;
            QGraphicsView::dragLeaveEvent(event);
        } else if (qgraphicsview_dragleaveevent_callback != nullptr) {
            qgraphicsview_dragleaveevent_callback(this, event);
        } else {
            QGraphicsView::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qgraphicsview_dragmoveevent_isbase) {
            qgraphicsview_dragmoveevent_isbase = false;
            QGraphicsView::dragMoveEvent(event);
        } else if (qgraphicsview_dragmoveevent_callback != nullptr) {
            qgraphicsview_dragmoveevent_callback(this, event);
        } else {
            QGraphicsView::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qgraphicsview_dropevent_isbase) {
            qgraphicsview_dropevent_isbase = false;
            QGraphicsView::dropEvent(event);
        } else if (qgraphicsview_dropevent_callback != nullptr) {
            qgraphicsview_dropevent_callback(this, event);
        } else {
            QGraphicsView::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qgraphicsview_focusinevent_isbase) {
            qgraphicsview_focusinevent_isbase = false;
            QGraphicsView::focusInEvent(event);
        } else if (qgraphicsview_focusinevent_callback != nullptr) {
            qgraphicsview_focusinevent_callback(this, event);
        } else {
            QGraphicsView::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qgraphicsview_focusnextprevchild_isbase) {
            qgraphicsview_focusnextprevchild_isbase = false;
            return QGraphicsView::focusNextPrevChild(next);
        } else if (qgraphicsview_focusnextprevchild_callback != nullptr) {
            return qgraphicsview_focusnextprevchild_callback(this, next);
        } else {
            return QGraphicsView::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qgraphicsview_focusoutevent_isbase) {
            qgraphicsview_focusoutevent_isbase = false;
            QGraphicsView::focusOutEvent(event);
        } else if (qgraphicsview_focusoutevent_callback != nullptr) {
            qgraphicsview_focusoutevent_callback(this, event);
        } else {
            QGraphicsView::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qgraphicsview_keypressevent_isbase) {
            qgraphicsview_keypressevent_isbase = false;
            QGraphicsView::keyPressEvent(event);
        } else if (qgraphicsview_keypressevent_callback != nullptr) {
            qgraphicsview_keypressevent_callback(this, event);
        } else {
            QGraphicsView::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qgraphicsview_keyreleaseevent_isbase) {
            qgraphicsview_keyreleaseevent_isbase = false;
            QGraphicsView::keyReleaseEvent(event);
        } else if (qgraphicsview_keyreleaseevent_callback != nullptr) {
            qgraphicsview_keyreleaseevent_callback(this, event);
        } else {
            QGraphicsView::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qgraphicsview_mousedoubleclickevent_isbase) {
            qgraphicsview_mousedoubleclickevent_isbase = false;
            QGraphicsView::mouseDoubleClickEvent(event);
        } else if (qgraphicsview_mousedoubleclickevent_callback != nullptr) {
            qgraphicsview_mousedoubleclickevent_callback(this, event);
        } else {
            QGraphicsView::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qgraphicsview_mousepressevent_isbase) {
            qgraphicsview_mousepressevent_isbase = false;
            QGraphicsView::mousePressEvent(event);
        } else if (qgraphicsview_mousepressevent_callback != nullptr) {
            qgraphicsview_mousepressevent_callback(this, event);
        } else {
            QGraphicsView::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* event) override {
        if (qgraphicsview_mousemoveevent_isbase) {
            qgraphicsview_mousemoveevent_isbase = false;
            QGraphicsView::mouseMoveEvent(event);
        } else if (qgraphicsview_mousemoveevent_callback != nullptr) {
            qgraphicsview_mousemoveevent_callback(this, event);
        } else {
            QGraphicsView::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* event) override {
        if (qgraphicsview_mousereleaseevent_isbase) {
            qgraphicsview_mousereleaseevent_isbase = false;
            QGraphicsView::mouseReleaseEvent(event);
        } else if (qgraphicsview_mousereleaseevent_callback != nullptr) {
            qgraphicsview_mousereleaseevent_callback(this, event);
        } else {
            QGraphicsView::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qgraphicsview_wheelevent_isbase) {
            qgraphicsview_wheelevent_isbase = false;
            QGraphicsView::wheelEvent(event);
        } else if (qgraphicsview_wheelevent_callback != nullptr) {
            qgraphicsview_wheelevent_callback(this, event);
        } else {
            QGraphicsView::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* event) override {
        if (qgraphicsview_paintevent_isbase) {
            qgraphicsview_paintevent_isbase = false;
            QGraphicsView::paintEvent(event);
        } else if (qgraphicsview_paintevent_callback != nullptr) {
            qgraphicsview_paintevent_callback(this, event);
        } else {
            QGraphicsView::paintEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qgraphicsview_resizeevent_isbase) {
            qgraphicsview_resizeevent_isbase = false;
            QGraphicsView::resizeEvent(event);
        } else if (qgraphicsview_resizeevent_callback != nullptr) {
            qgraphicsview_resizeevent_callback(this, event);
        } else {
            QGraphicsView::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (qgraphicsview_scrollcontentsby_isbase) {
            qgraphicsview_scrollcontentsby_isbase = false;
            QGraphicsView::scrollContentsBy(dx, dy);
        } else if (qgraphicsview_scrollcontentsby_callback != nullptr) {
            qgraphicsview_scrollcontentsby_callback(this, dx, dy);
        } else {
            QGraphicsView::scrollContentsBy(dx, dy);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qgraphicsview_showevent_isbase) {
            qgraphicsview_showevent_isbase = false;
            QGraphicsView::showEvent(event);
        } else if (qgraphicsview_showevent_callback != nullptr) {
            qgraphicsview_showevent_callback(this, event);
        } else {
            QGraphicsView::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qgraphicsview_inputmethodevent_isbase) {
            qgraphicsview_inputmethodevent_isbase = false;
            QGraphicsView::inputMethodEvent(event);
        } else if (qgraphicsview_inputmethodevent_callback != nullptr) {
            qgraphicsview_inputmethodevent_callback(this, event);
        } else {
            QGraphicsView::inputMethodEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawBackground(QPainter* painter, const QRectF& rect) override {
        if (qgraphicsview_drawbackground_isbase) {
            qgraphicsview_drawbackground_isbase = false;
            QGraphicsView::drawBackground(painter, rect);
        } else if (qgraphicsview_drawbackground_callback != nullptr) {
            qgraphicsview_drawbackground_callback(this, painter, rect);
        } else {
            QGraphicsView::drawBackground(painter, rect);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawForeground(QPainter* painter, const QRectF& rect) override {
        if (qgraphicsview_drawforeground_isbase) {
            qgraphicsview_drawforeground_isbase = false;
            QGraphicsView::drawForeground(painter, rect);
        } else if (qgraphicsview_drawforeground_callback != nullptr) {
            qgraphicsview_drawforeground_callback(this, painter, rect);
        } else {
            QGraphicsView::drawForeground(painter, rect);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qgraphicsview_minimumsizehint_isbase) {
            qgraphicsview_minimumsizehint_isbase = false;
            return QGraphicsView::minimumSizeHint();
        } else if (qgraphicsview_minimumsizehint_callback != nullptr) {
            return qgraphicsview_minimumsizehint_callback();
        } else {
            return QGraphicsView::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qgraphicsview_eventfilter_isbase) {
            qgraphicsview_eventfilter_isbase = false;
            return QGraphicsView::eventFilter(param1, param2);
        } else if (qgraphicsview_eventfilter_callback != nullptr) {
            return qgraphicsview_eventfilter_callback(this, param1, param2);
        } else {
            return QGraphicsView::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (qgraphicsview_viewportsizehint_isbase) {
            qgraphicsview_viewportsizehint_isbase = false;
            return QGraphicsView::viewportSizeHint();
        } else if (qgraphicsview_viewportsizehint_callback != nullptr) {
            return qgraphicsview_viewportsizehint_callback();
        } else {
            return QGraphicsView::viewportSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qgraphicsview_changeevent_isbase) {
            qgraphicsview_changeevent_isbase = false;
            QGraphicsView::changeEvent(param1);
        } else if (qgraphicsview_changeevent_callback != nullptr) {
            qgraphicsview_changeevent_callback(this, param1);
        } else {
            QGraphicsView::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qgraphicsview_initstyleoption_isbase) {
            qgraphicsview_initstyleoption_isbase = false;
            QGraphicsView::initStyleOption(option);
        } else if (qgraphicsview_initstyleoption_callback != nullptr) {
            qgraphicsview_initstyleoption_callback(this, option);
        } else {
            QGraphicsView::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qgraphicsview_devtype_isbase) {
            qgraphicsview_devtype_isbase = false;
            return QGraphicsView::devType();
        } else if (qgraphicsview_devtype_callback != nullptr) {
            return qgraphicsview_devtype_callback();
        } else {
            return QGraphicsView::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qgraphicsview_setvisible_isbase) {
            qgraphicsview_setvisible_isbase = false;
            QGraphicsView::setVisible(visible);
        } else if (qgraphicsview_setvisible_callback != nullptr) {
            qgraphicsview_setvisible_callback(this, visible);
        } else {
            QGraphicsView::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qgraphicsview_heightforwidth_isbase) {
            qgraphicsview_heightforwidth_isbase = false;
            return QGraphicsView::heightForWidth(param1);
        } else if (qgraphicsview_heightforwidth_callback != nullptr) {
            return qgraphicsview_heightforwidth_callback(this, param1);
        } else {
            return QGraphicsView::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qgraphicsview_hasheightforwidth_isbase) {
            qgraphicsview_hasheightforwidth_isbase = false;
            return QGraphicsView::hasHeightForWidth();
        } else if (qgraphicsview_hasheightforwidth_callback != nullptr) {
            return qgraphicsview_hasheightforwidth_callback();
        } else {
            return QGraphicsView::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qgraphicsview_paintengine_isbase) {
            qgraphicsview_paintengine_isbase = false;
            return QGraphicsView::paintEngine();
        } else if (qgraphicsview_paintengine_callback != nullptr) {
            return qgraphicsview_paintengine_callback();
        } else {
            return QGraphicsView::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qgraphicsview_enterevent_isbase) {
            qgraphicsview_enterevent_isbase = false;
            QGraphicsView::enterEvent(event);
        } else if (qgraphicsview_enterevent_callback != nullptr) {
            qgraphicsview_enterevent_callback(this, event);
        } else {
            QGraphicsView::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qgraphicsview_leaveevent_isbase) {
            qgraphicsview_leaveevent_isbase = false;
            QGraphicsView::leaveEvent(event);
        } else if (qgraphicsview_leaveevent_callback != nullptr) {
            qgraphicsview_leaveevent_callback(this, event);
        } else {
            QGraphicsView::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qgraphicsview_moveevent_isbase) {
            qgraphicsview_moveevent_isbase = false;
            QGraphicsView::moveEvent(event);
        } else if (qgraphicsview_moveevent_callback != nullptr) {
            qgraphicsview_moveevent_callback(this, event);
        } else {
            QGraphicsView::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qgraphicsview_closeevent_isbase) {
            qgraphicsview_closeevent_isbase = false;
            QGraphicsView::closeEvent(event);
        } else if (qgraphicsview_closeevent_callback != nullptr) {
            qgraphicsview_closeevent_callback(this, event);
        } else {
            QGraphicsView::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qgraphicsview_tabletevent_isbase) {
            qgraphicsview_tabletevent_isbase = false;
            QGraphicsView::tabletEvent(event);
        } else if (qgraphicsview_tabletevent_callback != nullptr) {
            qgraphicsview_tabletevent_callback(this, event);
        } else {
            QGraphicsView::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qgraphicsview_actionevent_isbase) {
            qgraphicsview_actionevent_isbase = false;
            QGraphicsView::actionEvent(event);
        } else if (qgraphicsview_actionevent_callback != nullptr) {
            qgraphicsview_actionevent_callback(this, event);
        } else {
            QGraphicsView::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qgraphicsview_hideevent_isbase) {
            qgraphicsview_hideevent_isbase = false;
            QGraphicsView::hideEvent(event);
        } else if (qgraphicsview_hideevent_callback != nullptr) {
            qgraphicsview_hideevent_callback(this, event);
        } else {
            QGraphicsView::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qgraphicsview_nativeevent_isbase) {
            qgraphicsview_nativeevent_isbase = false;
            return QGraphicsView::nativeEvent(eventType, message, result);
        } else if (qgraphicsview_nativeevent_callback != nullptr) {
            return qgraphicsview_nativeevent_callback(this, eventType, message, result);
        } else {
            return QGraphicsView::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qgraphicsview_metric_isbase) {
            qgraphicsview_metric_isbase = false;
            return QGraphicsView::metric(param1);
        } else if (qgraphicsview_metric_callback != nullptr) {
            return qgraphicsview_metric_callback(this, param1);
        } else {
            return QGraphicsView::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qgraphicsview_initpainter_isbase) {
            qgraphicsview_initpainter_isbase = false;
            QGraphicsView::initPainter(painter);
        } else if (qgraphicsview_initpainter_callback != nullptr) {
            qgraphicsview_initpainter_callback(this, painter);
        } else {
            QGraphicsView::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qgraphicsview_redirected_isbase) {
            qgraphicsview_redirected_isbase = false;
            return QGraphicsView::redirected(offset);
        } else if (qgraphicsview_redirected_callback != nullptr) {
            return qgraphicsview_redirected_callback(this, offset);
        } else {
            return QGraphicsView::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qgraphicsview_sharedpainter_isbase) {
            qgraphicsview_sharedpainter_isbase = false;
            return QGraphicsView::sharedPainter();
        } else if (qgraphicsview_sharedpainter_callback != nullptr) {
            return qgraphicsview_sharedpainter_callback();
        } else {
            return QGraphicsView::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgraphicsview_timerevent_isbase) {
            qgraphicsview_timerevent_isbase = false;
            QGraphicsView::timerEvent(event);
        } else if (qgraphicsview_timerevent_callback != nullptr) {
            qgraphicsview_timerevent_callback(this, event);
        } else {
            QGraphicsView::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgraphicsview_childevent_isbase) {
            qgraphicsview_childevent_isbase = false;
            QGraphicsView::childEvent(event);
        } else if (qgraphicsview_childevent_callback != nullptr) {
            qgraphicsview_childevent_callback(this, event);
        } else {
            QGraphicsView::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgraphicsview_customevent_isbase) {
            qgraphicsview_customevent_isbase = false;
            QGraphicsView::customEvent(event);
        } else if (qgraphicsview_customevent_callback != nullptr) {
            qgraphicsview_customevent_callback(this, event);
        } else {
            QGraphicsView::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgraphicsview_connectnotify_isbase) {
            qgraphicsview_connectnotify_isbase = false;
            QGraphicsView::connectNotify(signal);
        } else if (qgraphicsview_connectnotify_callback != nullptr) {
            qgraphicsview_connectnotify_callback(this, signal);
        } else {
            QGraphicsView::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgraphicsview_disconnectnotify_isbase) {
            qgraphicsview_disconnectnotify_isbase = false;
            QGraphicsView::disconnectNotify(signal);
        } else if (qgraphicsview_disconnectnotify_callback != nullptr) {
            qgraphicsview_disconnectnotify_callback(this, signal);
        } else {
            QGraphicsView::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setViewportMargins(int left, int top, int right, int bottom) {
        if (qgraphicsview_setviewportmargins_isbase) {
            qgraphicsview_setviewportmargins_isbase = false;
            QGraphicsView::setViewportMargins(left, top, right, bottom);
        } else if (qgraphicsview_setviewportmargins_callback != nullptr) {
            qgraphicsview_setviewportmargins_callback(this, left, top, right, bottom);
        } else {
            QGraphicsView::setViewportMargins(left, top, right, bottom);
        }
    }

    // Virtual method for C ABI access and custom callback
    QMargins viewportMargins() const {
        if (qgraphicsview_viewportmargins_isbase) {
            qgraphicsview_viewportmargins_isbase = false;
            return QGraphicsView::viewportMargins();
        } else if (qgraphicsview_viewportmargins_callback != nullptr) {
            return qgraphicsview_viewportmargins_callback();
        } else {
            return QGraphicsView::viewportMargins();
        }
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (qgraphicsview_drawframe_isbase) {
            qgraphicsview_drawframe_isbase = false;
            QGraphicsView::drawFrame(param1);
        } else if (qgraphicsview_drawframe_callback != nullptr) {
            qgraphicsview_drawframe_callback(this, param1);
        } else {
            QGraphicsView::drawFrame(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qgraphicsview_updatemicrofocus_isbase) {
            qgraphicsview_updatemicrofocus_isbase = false;
            QGraphicsView::updateMicroFocus();
        } else if (qgraphicsview_updatemicrofocus_callback != nullptr) {
            qgraphicsview_updatemicrofocus_callback();
        } else {
            QGraphicsView::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qgraphicsview_create_isbase) {
            qgraphicsview_create_isbase = false;
            QGraphicsView::create();
        } else if (qgraphicsview_create_callback != nullptr) {
            qgraphicsview_create_callback();
        } else {
            QGraphicsView::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qgraphicsview_destroy_isbase) {
            qgraphicsview_destroy_isbase = false;
            QGraphicsView::destroy();
        } else if (qgraphicsview_destroy_callback != nullptr) {
            qgraphicsview_destroy_callback();
        } else {
            QGraphicsView::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qgraphicsview_focusnextchild_isbase) {
            qgraphicsview_focusnextchild_isbase = false;
            return QGraphicsView::focusNextChild();
        } else if (qgraphicsview_focusnextchild_callback != nullptr) {
            return qgraphicsview_focusnextchild_callback();
        } else {
            return QGraphicsView::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qgraphicsview_focuspreviouschild_isbase) {
            qgraphicsview_focuspreviouschild_isbase = false;
            return QGraphicsView::focusPreviousChild();
        } else if (qgraphicsview_focuspreviouschild_callback != nullptr) {
            return qgraphicsview_focuspreviouschild_callback();
        } else {
            return QGraphicsView::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qgraphicsview_sender_isbase) {
            qgraphicsview_sender_isbase = false;
            return QGraphicsView::sender();
        } else if (qgraphicsview_sender_callback != nullptr) {
            return qgraphicsview_sender_callback();
        } else {
            return QGraphicsView::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qgraphicsview_sendersignalindex_isbase) {
            qgraphicsview_sendersignalindex_isbase = false;
            return QGraphicsView::senderSignalIndex();
        } else if (qgraphicsview_sendersignalindex_callback != nullptr) {
            return qgraphicsview_sendersignalindex_callback();
        } else {
            return QGraphicsView::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qgraphicsview_receivers_isbase) {
            qgraphicsview_receivers_isbase = false;
            return QGraphicsView::receivers(signal);
        } else if (qgraphicsview_receivers_callback != nullptr) {
            return qgraphicsview_receivers_callback(this, signal);
        } else {
            return QGraphicsView::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qgraphicsview_issignalconnected_isbase) {
            qgraphicsview_issignalconnected_isbase = false;
            return QGraphicsView::isSignalConnected(signal);
        } else if (qgraphicsview_issignalconnected_callback != nullptr) {
            return qgraphicsview_issignalconnected_callback(this, signal);
        } else {
            return QGraphicsView::isSignalConnected(signal);
        }
    }
};

#endif
