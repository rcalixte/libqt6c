#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCISCINTILLABASE_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCISCINTILLABASE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciScintillaBase so that we can call protected methods
class VirtualQsciScintillaBase : public QsciScintillaBase {

  public:
    // Virtual class public types (including callbacks)
    using QsciScintillaBase_Metacall_Callback = int (*)(QsciScintillaBase*, QMetaObject::Call, int, void**);
    using QsciScintillaBase_CanInsertFromMimeData_Callback = bool (*)(const QsciScintillaBase*, const QMimeData*);
    using QsciScintillaBase_FromMimeData_Callback = QByteArray (*)(const QsciScintillaBase*, const QMimeData*, bool&);
    using QsciScintillaBase_ToMimeData_Callback = QMimeData* (*)(const QsciScintillaBase*, const QByteArray&, bool);
    using QsciScintillaBase_ChangeEvent_Callback = void (*)(QsciScintillaBase*, QEvent*);
    using QsciScintillaBase_ContextMenuEvent_Callback = void (*)(QsciScintillaBase*, QContextMenuEvent*);
    using QsciScintillaBase_DragEnterEvent_Callback = void (*)(QsciScintillaBase*, QDragEnterEvent*);
    using QsciScintillaBase_DragLeaveEvent_Callback = void (*)(QsciScintillaBase*, QDragLeaveEvent*);
    using QsciScintillaBase_DragMoveEvent_Callback = void (*)(QsciScintillaBase*, QDragMoveEvent*);
    using QsciScintillaBase_DropEvent_Callback = void (*)(QsciScintillaBase*, QDropEvent*);
    using QsciScintillaBase_FocusInEvent_Callback = void (*)(QsciScintillaBase*, QFocusEvent*);
    using QsciScintillaBase_FocusOutEvent_Callback = void (*)(QsciScintillaBase*, QFocusEvent*);
    using QsciScintillaBase_FocusNextPrevChild_Callback = bool (*)(QsciScintillaBase*, bool);
    using QsciScintillaBase_KeyPressEvent_Callback = void (*)(QsciScintillaBase*, QKeyEvent*);
    using QsciScintillaBase_InputMethodEvent_Callback = void (*)(QsciScintillaBase*, QInputMethodEvent*);
    using QsciScintillaBase_MouseDoubleClickEvent_Callback = void (*)(QsciScintillaBase*, QMouseEvent*);
    using QsciScintillaBase_MouseMoveEvent_Callback = void (*)(QsciScintillaBase*, QMouseEvent*);
    using QsciScintillaBase_MousePressEvent_Callback = void (*)(QsciScintillaBase*, QMouseEvent*);
    using QsciScintillaBase_MouseReleaseEvent_Callback = void (*)(QsciScintillaBase*, QMouseEvent*);
    using QsciScintillaBase_PaintEvent_Callback = void (*)(QsciScintillaBase*, QPaintEvent*);
    using QsciScintillaBase_ResizeEvent_Callback = void (*)(QsciScintillaBase*, QResizeEvent*);
    using QsciScintillaBase_ScrollContentsBy_Callback = void (*)(QsciScintillaBase*, int, int);
    using QsciScintillaBase_MinimumSizeHint_Callback = QSize (*)();
    using QsciScintillaBase_SizeHint_Callback = QSize (*)();
    using QsciScintillaBase_SetupViewport_Callback = void (*)(QsciScintillaBase*, QWidget*);
    using QsciScintillaBase_EventFilter_Callback = bool (*)(QsciScintillaBase*, QObject*, QEvent*);
    using QsciScintillaBase_Event_Callback = bool (*)(QsciScintillaBase*, QEvent*);
    using QsciScintillaBase_ViewportEvent_Callback = bool (*)(QsciScintillaBase*, QEvent*);
    using QsciScintillaBase_WheelEvent_Callback = void (*)(QsciScintillaBase*, QWheelEvent*);
    using QsciScintillaBase_ViewportSizeHint_Callback = QSize (*)();
    using QsciScintillaBase_InitStyleOption_Callback = void (*)(const QsciScintillaBase*, QStyleOptionFrame*);
    using QsciScintillaBase_DevType_Callback = int (*)();
    using QsciScintillaBase_SetVisible_Callback = void (*)(QsciScintillaBase*, bool);
    using QsciScintillaBase_HeightForWidth_Callback = int (*)(const QsciScintillaBase*, int);
    using QsciScintillaBase_HasHeightForWidth_Callback = bool (*)();
    using QsciScintillaBase_PaintEngine_Callback = QPaintEngine* (*)();
    using QsciScintillaBase_KeyReleaseEvent_Callback = void (*)(QsciScintillaBase*, QKeyEvent*);
    using QsciScintillaBase_EnterEvent_Callback = void (*)(QsciScintillaBase*, QEnterEvent*);
    using QsciScintillaBase_LeaveEvent_Callback = void (*)(QsciScintillaBase*, QEvent*);
    using QsciScintillaBase_MoveEvent_Callback = void (*)(QsciScintillaBase*, QMoveEvent*);
    using QsciScintillaBase_CloseEvent_Callback = void (*)(QsciScintillaBase*, QCloseEvent*);
    using QsciScintillaBase_TabletEvent_Callback = void (*)(QsciScintillaBase*, QTabletEvent*);
    using QsciScintillaBase_ActionEvent_Callback = void (*)(QsciScintillaBase*, QActionEvent*);
    using QsciScintillaBase_ShowEvent_Callback = void (*)(QsciScintillaBase*, QShowEvent*);
    using QsciScintillaBase_HideEvent_Callback = void (*)(QsciScintillaBase*, QHideEvent*);
    using QsciScintillaBase_NativeEvent_Callback = bool (*)(QsciScintillaBase*, const QByteArray&, void*, qintptr*);
    using QsciScintillaBase_Metric_Callback = int (*)(const QsciScintillaBase*, QPaintDevice::PaintDeviceMetric);
    using QsciScintillaBase_InitPainter_Callback = void (*)(const QsciScintillaBase*, QPainter*);
    using QsciScintillaBase_Redirected_Callback = QPaintDevice* (*)(const QsciScintillaBase*, QPoint*);
    using QsciScintillaBase_SharedPainter_Callback = QPainter* (*)();
    using QsciScintillaBase_TimerEvent_Callback = void (*)(QsciScintillaBase*, QTimerEvent*);
    using QsciScintillaBase_ChildEvent_Callback = void (*)(QsciScintillaBase*, QChildEvent*);
    using QsciScintillaBase_CustomEvent_Callback = void (*)(QsciScintillaBase*, QEvent*);
    using QsciScintillaBase_ConnectNotify_Callback = void (*)(QsciScintillaBase*, const QMetaMethod&);
    using QsciScintillaBase_DisconnectNotify_Callback = void (*)(QsciScintillaBase*, const QMetaMethod&);
    using QsciScintillaBase_SetScrollBars_Callback = void (*)();
    using QsciScintillaBase_ContextMenuNeeded_Callback = bool (*)(const QsciScintillaBase*, int, int);
    using QsciScintillaBase_SetViewportMargins_Callback = void (*)(QsciScintillaBase*, int, int, int, int);
    using QsciScintillaBase_ViewportMargins_Callback = QMargins (*)();
    using QsciScintillaBase_DrawFrame_Callback = void (*)(QsciScintillaBase*, QPainter*);
    using QsciScintillaBase_UpdateMicroFocus_Callback = void (*)();
    using QsciScintillaBase_Create_Callback = void (*)();
    using QsciScintillaBase_Destroy_Callback = void (*)();
    using QsciScintillaBase_FocusNextChild_Callback = bool (*)();
    using QsciScintillaBase_FocusPreviousChild_Callback = bool (*)();
    using QsciScintillaBase_Sender_Callback = QObject* (*)();
    using QsciScintillaBase_SenderSignalIndex_Callback = int (*)();
    using QsciScintillaBase_Receivers_Callback = int (*)(const QsciScintillaBase*, const char*);
    using QsciScintillaBase_IsSignalConnected_Callback = bool (*)(const QsciScintillaBase*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QsciScintillaBase_Metacall_Callback qsciscintillabase_metacall_callback = nullptr;
    QsciScintillaBase_CanInsertFromMimeData_Callback qsciscintillabase_caninsertfrommimedata_callback = nullptr;
    QsciScintillaBase_FromMimeData_Callback qsciscintillabase_frommimedata_callback = nullptr;
    QsciScintillaBase_ToMimeData_Callback qsciscintillabase_tomimedata_callback = nullptr;
    QsciScintillaBase_ChangeEvent_Callback qsciscintillabase_changeevent_callback = nullptr;
    QsciScintillaBase_ContextMenuEvent_Callback qsciscintillabase_contextmenuevent_callback = nullptr;
    QsciScintillaBase_DragEnterEvent_Callback qsciscintillabase_dragenterevent_callback = nullptr;
    QsciScintillaBase_DragLeaveEvent_Callback qsciscintillabase_dragleaveevent_callback = nullptr;
    QsciScintillaBase_DragMoveEvent_Callback qsciscintillabase_dragmoveevent_callback = nullptr;
    QsciScintillaBase_DropEvent_Callback qsciscintillabase_dropevent_callback = nullptr;
    QsciScintillaBase_FocusInEvent_Callback qsciscintillabase_focusinevent_callback = nullptr;
    QsciScintillaBase_FocusOutEvent_Callback qsciscintillabase_focusoutevent_callback = nullptr;
    QsciScintillaBase_FocusNextPrevChild_Callback qsciscintillabase_focusnextprevchild_callback = nullptr;
    QsciScintillaBase_KeyPressEvent_Callback qsciscintillabase_keypressevent_callback = nullptr;
    QsciScintillaBase_InputMethodEvent_Callback qsciscintillabase_inputmethodevent_callback = nullptr;
    QsciScintillaBase_MouseDoubleClickEvent_Callback qsciscintillabase_mousedoubleclickevent_callback = nullptr;
    QsciScintillaBase_MouseMoveEvent_Callback qsciscintillabase_mousemoveevent_callback = nullptr;
    QsciScintillaBase_MousePressEvent_Callback qsciscintillabase_mousepressevent_callback = nullptr;
    QsciScintillaBase_MouseReleaseEvent_Callback qsciscintillabase_mousereleaseevent_callback = nullptr;
    QsciScintillaBase_PaintEvent_Callback qsciscintillabase_paintevent_callback = nullptr;
    QsciScintillaBase_ResizeEvent_Callback qsciscintillabase_resizeevent_callback = nullptr;
    QsciScintillaBase_ScrollContentsBy_Callback qsciscintillabase_scrollcontentsby_callback = nullptr;
    QsciScintillaBase_MinimumSizeHint_Callback qsciscintillabase_minimumsizehint_callback = nullptr;
    QsciScintillaBase_SizeHint_Callback qsciscintillabase_sizehint_callback = nullptr;
    QsciScintillaBase_SetupViewport_Callback qsciscintillabase_setupviewport_callback = nullptr;
    QsciScintillaBase_EventFilter_Callback qsciscintillabase_eventfilter_callback = nullptr;
    QsciScintillaBase_Event_Callback qsciscintillabase_event_callback = nullptr;
    QsciScintillaBase_ViewportEvent_Callback qsciscintillabase_viewportevent_callback = nullptr;
    QsciScintillaBase_WheelEvent_Callback qsciscintillabase_wheelevent_callback = nullptr;
    QsciScintillaBase_ViewportSizeHint_Callback qsciscintillabase_viewportsizehint_callback = nullptr;
    QsciScintillaBase_InitStyleOption_Callback qsciscintillabase_initstyleoption_callback = nullptr;
    QsciScintillaBase_DevType_Callback qsciscintillabase_devtype_callback = nullptr;
    QsciScintillaBase_SetVisible_Callback qsciscintillabase_setvisible_callback = nullptr;
    QsciScintillaBase_HeightForWidth_Callback qsciscintillabase_heightforwidth_callback = nullptr;
    QsciScintillaBase_HasHeightForWidth_Callback qsciscintillabase_hasheightforwidth_callback = nullptr;
    QsciScintillaBase_PaintEngine_Callback qsciscintillabase_paintengine_callback = nullptr;
    QsciScintillaBase_KeyReleaseEvent_Callback qsciscintillabase_keyreleaseevent_callback = nullptr;
    QsciScintillaBase_EnterEvent_Callback qsciscintillabase_enterevent_callback = nullptr;
    QsciScintillaBase_LeaveEvent_Callback qsciscintillabase_leaveevent_callback = nullptr;
    QsciScintillaBase_MoveEvent_Callback qsciscintillabase_moveevent_callback = nullptr;
    QsciScintillaBase_CloseEvent_Callback qsciscintillabase_closeevent_callback = nullptr;
    QsciScintillaBase_TabletEvent_Callback qsciscintillabase_tabletevent_callback = nullptr;
    QsciScintillaBase_ActionEvent_Callback qsciscintillabase_actionevent_callback = nullptr;
    QsciScintillaBase_ShowEvent_Callback qsciscintillabase_showevent_callback = nullptr;
    QsciScintillaBase_HideEvent_Callback qsciscintillabase_hideevent_callback = nullptr;
    QsciScintillaBase_NativeEvent_Callback qsciscintillabase_nativeevent_callback = nullptr;
    QsciScintillaBase_Metric_Callback qsciscintillabase_metric_callback = nullptr;
    QsciScintillaBase_InitPainter_Callback qsciscintillabase_initpainter_callback = nullptr;
    QsciScintillaBase_Redirected_Callback qsciscintillabase_redirected_callback = nullptr;
    QsciScintillaBase_SharedPainter_Callback qsciscintillabase_sharedpainter_callback = nullptr;
    QsciScintillaBase_TimerEvent_Callback qsciscintillabase_timerevent_callback = nullptr;
    QsciScintillaBase_ChildEvent_Callback qsciscintillabase_childevent_callback = nullptr;
    QsciScintillaBase_CustomEvent_Callback qsciscintillabase_customevent_callback = nullptr;
    QsciScintillaBase_ConnectNotify_Callback qsciscintillabase_connectnotify_callback = nullptr;
    QsciScintillaBase_DisconnectNotify_Callback qsciscintillabase_disconnectnotify_callback = nullptr;
    QsciScintillaBase_SetScrollBars_Callback qsciscintillabase_setscrollbars_callback = nullptr;
    QsciScintillaBase_ContextMenuNeeded_Callback qsciscintillabase_contextmenuneeded_callback = nullptr;
    QsciScintillaBase_SetViewportMargins_Callback qsciscintillabase_setviewportmargins_callback = nullptr;
    QsciScintillaBase_ViewportMargins_Callback qsciscintillabase_viewportmargins_callback = nullptr;
    QsciScintillaBase_DrawFrame_Callback qsciscintillabase_drawframe_callback = nullptr;
    QsciScintillaBase_UpdateMicroFocus_Callback qsciscintillabase_updatemicrofocus_callback = nullptr;
    QsciScintillaBase_Create_Callback qsciscintillabase_create_callback = nullptr;
    QsciScintillaBase_Destroy_Callback qsciscintillabase_destroy_callback = nullptr;
    QsciScintillaBase_FocusNextChild_Callback qsciscintillabase_focusnextchild_callback = nullptr;
    QsciScintillaBase_FocusPreviousChild_Callback qsciscintillabase_focuspreviouschild_callback = nullptr;
    QsciScintillaBase_Sender_Callback qsciscintillabase_sender_callback = nullptr;
    QsciScintillaBase_SenderSignalIndex_Callback qsciscintillabase_sendersignalindex_callback = nullptr;
    QsciScintillaBase_Receivers_Callback qsciscintillabase_receivers_callback = nullptr;
    QsciScintillaBase_IsSignalConnected_Callback qsciscintillabase_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qsciscintillabase_metacall_isbase = false;
    mutable bool qsciscintillabase_caninsertfrommimedata_isbase = false;
    mutable bool qsciscintillabase_frommimedata_isbase = false;
    mutable bool qsciscintillabase_tomimedata_isbase = false;
    mutable bool qsciscintillabase_changeevent_isbase = false;
    mutable bool qsciscintillabase_contextmenuevent_isbase = false;
    mutable bool qsciscintillabase_dragenterevent_isbase = false;
    mutable bool qsciscintillabase_dragleaveevent_isbase = false;
    mutable bool qsciscintillabase_dragmoveevent_isbase = false;
    mutable bool qsciscintillabase_dropevent_isbase = false;
    mutable bool qsciscintillabase_focusinevent_isbase = false;
    mutable bool qsciscintillabase_focusoutevent_isbase = false;
    mutable bool qsciscintillabase_focusnextprevchild_isbase = false;
    mutable bool qsciscintillabase_keypressevent_isbase = false;
    mutable bool qsciscintillabase_inputmethodevent_isbase = false;
    mutable bool qsciscintillabase_mousedoubleclickevent_isbase = false;
    mutable bool qsciscintillabase_mousemoveevent_isbase = false;
    mutable bool qsciscintillabase_mousepressevent_isbase = false;
    mutable bool qsciscintillabase_mousereleaseevent_isbase = false;
    mutable bool qsciscintillabase_paintevent_isbase = false;
    mutable bool qsciscintillabase_resizeevent_isbase = false;
    mutable bool qsciscintillabase_scrollcontentsby_isbase = false;
    mutable bool qsciscintillabase_minimumsizehint_isbase = false;
    mutable bool qsciscintillabase_sizehint_isbase = false;
    mutable bool qsciscintillabase_setupviewport_isbase = false;
    mutable bool qsciscintillabase_eventfilter_isbase = false;
    mutable bool qsciscintillabase_event_isbase = false;
    mutable bool qsciscintillabase_viewportevent_isbase = false;
    mutable bool qsciscintillabase_wheelevent_isbase = false;
    mutable bool qsciscintillabase_viewportsizehint_isbase = false;
    mutable bool qsciscintillabase_initstyleoption_isbase = false;
    mutable bool qsciscintillabase_devtype_isbase = false;
    mutable bool qsciscintillabase_setvisible_isbase = false;
    mutable bool qsciscintillabase_heightforwidth_isbase = false;
    mutable bool qsciscintillabase_hasheightforwidth_isbase = false;
    mutable bool qsciscintillabase_paintengine_isbase = false;
    mutable bool qsciscintillabase_keyreleaseevent_isbase = false;
    mutable bool qsciscintillabase_enterevent_isbase = false;
    mutable bool qsciscintillabase_leaveevent_isbase = false;
    mutable bool qsciscintillabase_moveevent_isbase = false;
    mutable bool qsciscintillabase_closeevent_isbase = false;
    mutable bool qsciscintillabase_tabletevent_isbase = false;
    mutable bool qsciscintillabase_actionevent_isbase = false;
    mutable bool qsciscintillabase_showevent_isbase = false;
    mutable bool qsciscintillabase_hideevent_isbase = false;
    mutable bool qsciscintillabase_nativeevent_isbase = false;
    mutable bool qsciscintillabase_metric_isbase = false;
    mutable bool qsciscintillabase_initpainter_isbase = false;
    mutable bool qsciscintillabase_redirected_isbase = false;
    mutable bool qsciscintillabase_sharedpainter_isbase = false;
    mutable bool qsciscintillabase_timerevent_isbase = false;
    mutable bool qsciscintillabase_childevent_isbase = false;
    mutable bool qsciscintillabase_customevent_isbase = false;
    mutable bool qsciscintillabase_connectnotify_isbase = false;
    mutable bool qsciscintillabase_disconnectnotify_isbase = false;
    mutable bool qsciscintillabase_setscrollbars_isbase = false;
    mutable bool qsciscintillabase_contextmenuneeded_isbase = false;
    mutable bool qsciscintillabase_setviewportmargins_isbase = false;
    mutable bool qsciscintillabase_viewportmargins_isbase = false;
    mutable bool qsciscintillabase_drawframe_isbase = false;
    mutable bool qsciscintillabase_updatemicrofocus_isbase = false;
    mutable bool qsciscintillabase_create_isbase = false;
    mutable bool qsciscintillabase_destroy_isbase = false;
    mutable bool qsciscintillabase_focusnextchild_isbase = false;
    mutable bool qsciscintillabase_focuspreviouschild_isbase = false;
    mutable bool qsciscintillabase_sender_isbase = false;
    mutable bool qsciscintillabase_sendersignalindex_isbase = false;
    mutable bool qsciscintillabase_receivers_isbase = false;
    mutable bool qsciscintillabase_issignalconnected_isbase = false;

  public:
    VirtualQsciScintillaBase(QWidget* parent) : QsciScintillaBase(parent){};
    VirtualQsciScintillaBase() : QsciScintillaBase(){};

    ~VirtualQsciScintillaBase() {
        qsciscintillabase_metacall_callback = nullptr;
        qsciscintillabase_caninsertfrommimedata_callback = nullptr;
        qsciscintillabase_frommimedata_callback = nullptr;
        qsciscintillabase_tomimedata_callback = nullptr;
        qsciscintillabase_changeevent_callback = nullptr;
        qsciscintillabase_contextmenuevent_callback = nullptr;
        qsciscintillabase_dragenterevent_callback = nullptr;
        qsciscintillabase_dragleaveevent_callback = nullptr;
        qsciscintillabase_dragmoveevent_callback = nullptr;
        qsciscintillabase_dropevent_callback = nullptr;
        qsciscintillabase_focusinevent_callback = nullptr;
        qsciscintillabase_focusoutevent_callback = nullptr;
        qsciscintillabase_focusnextprevchild_callback = nullptr;
        qsciscintillabase_keypressevent_callback = nullptr;
        qsciscintillabase_inputmethodevent_callback = nullptr;
        qsciscintillabase_mousedoubleclickevent_callback = nullptr;
        qsciscintillabase_mousemoveevent_callback = nullptr;
        qsciscintillabase_mousepressevent_callback = nullptr;
        qsciscintillabase_mousereleaseevent_callback = nullptr;
        qsciscintillabase_paintevent_callback = nullptr;
        qsciscintillabase_resizeevent_callback = nullptr;
        qsciscintillabase_scrollcontentsby_callback = nullptr;
        qsciscintillabase_minimumsizehint_callback = nullptr;
        qsciscintillabase_sizehint_callback = nullptr;
        qsciscintillabase_setupviewport_callback = nullptr;
        qsciscintillabase_eventfilter_callback = nullptr;
        qsciscintillabase_event_callback = nullptr;
        qsciscintillabase_viewportevent_callback = nullptr;
        qsciscintillabase_wheelevent_callback = nullptr;
        qsciscintillabase_viewportsizehint_callback = nullptr;
        qsciscintillabase_initstyleoption_callback = nullptr;
        qsciscintillabase_devtype_callback = nullptr;
        qsciscintillabase_setvisible_callback = nullptr;
        qsciscintillabase_heightforwidth_callback = nullptr;
        qsciscintillabase_hasheightforwidth_callback = nullptr;
        qsciscintillabase_paintengine_callback = nullptr;
        qsciscintillabase_keyreleaseevent_callback = nullptr;
        qsciscintillabase_enterevent_callback = nullptr;
        qsciscintillabase_leaveevent_callback = nullptr;
        qsciscintillabase_moveevent_callback = nullptr;
        qsciscintillabase_closeevent_callback = nullptr;
        qsciscintillabase_tabletevent_callback = nullptr;
        qsciscintillabase_actionevent_callback = nullptr;
        qsciscintillabase_showevent_callback = nullptr;
        qsciscintillabase_hideevent_callback = nullptr;
        qsciscintillabase_nativeevent_callback = nullptr;
        qsciscintillabase_metric_callback = nullptr;
        qsciscintillabase_initpainter_callback = nullptr;
        qsciscintillabase_redirected_callback = nullptr;
        qsciscintillabase_sharedpainter_callback = nullptr;
        qsciscintillabase_timerevent_callback = nullptr;
        qsciscintillabase_childevent_callback = nullptr;
        qsciscintillabase_customevent_callback = nullptr;
        qsciscintillabase_connectnotify_callback = nullptr;
        qsciscintillabase_disconnectnotify_callback = nullptr;
        qsciscintillabase_setscrollbars_callback = nullptr;
        qsciscintillabase_contextmenuneeded_callback = nullptr;
        qsciscintillabase_setviewportmargins_callback = nullptr;
        qsciscintillabase_viewportmargins_callback = nullptr;
        qsciscintillabase_drawframe_callback = nullptr;
        qsciscintillabase_updatemicrofocus_callback = nullptr;
        qsciscintillabase_create_callback = nullptr;
        qsciscintillabase_destroy_callback = nullptr;
        qsciscintillabase_focusnextchild_callback = nullptr;
        qsciscintillabase_focuspreviouschild_callback = nullptr;
        qsciscintillabase_sender_callback = nullptr;
        qsciscintillabase_sendersignalindex_callback = nullptr;
        qsciscintillabase_receivers_callback = nullptr;
        qsciscintillabase_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQsciScintillaBase_Metacall_Callback(QsciScintillaBase_Metacall_Callback cb) { qsciscintillabase_metacall_callback = cb; }
    void setQsciScintillaBase_CanInsertFromMimeData_Callback(QsciScintillaBase_CanInsertFromMimeData_Callback cb) { qsciscintillabase_caninsertfrommimedata_callback = cb; }
    void setQsciScintillaBase_FromMimeData_Callback(QsciScintillaBase_FromMimeData_Callback cb) { qsciscintillabase_frommimedata_callback = cb; }
    void setQsciScintillaBase_ToMimeData_Callback(QsciScintillaBase_ToMimeData_Callback cb) { qsciscintillabase_tomimedata_callback = cb; }
    void setQsciScintillaBase_ChangeEvent_Callback(QsciScintillaBase_ChangeEvent_Callback cb) { qsciscintillabase_changeevent_callback = cb; }
    void setQsciScintillaBase_ContextMenuEvent_Callback(QsciScintillaBase_ContextMenuEvent_Callback cb) { qsciscintillabase_contextmenuevent_callback = cb; }
    void setQsciScintillaBase_DragEnterEvent_Callback(QsciScintillaBase_DragEnterEvent_Callback cb) { qsciscintillabase_dragenterevent_callback = cb; }
    void setQsciScintillaBase_DragLeaveEvent_Callback(QsciScintillaBase_DragLeaveEvent_Callback cb) { qsciscintillabase_dragleaveevent_callback = cb; }
    void setQsciScintillaBase_DragMoveEvent_Callback(QsciScintillaBase_DragMoveEvent_Callback cb) { qsciscintillabase_dragmoveevent_callback = cb; }
    void setQsciScintillaBase_DropEvent_Callback(QsciScintillaBase_DropEvent_Callback cb) { qsciscintillabase_dropevent_callback = cb; }
    void setQsciScintillaBase_FocusInEvent_Callback(QsciScintillaBase_FocusInEvent_Callback cb) { qsciscintillabase_focusinevent_callback = cb; }
    void setQsciScintillaBase_FocusOutEvent_Callback(QsciScintillaBase_FocusOutEvent_Callback cb) { qsciscintillabase_focusoutevent_callback = cb; }
    void setQsciScintillaBase_FocusNextPrevChild_Callback(QsciScintillaBase_FocusNextPrevChild_Callback cb) { qsciscintillabase_focusnextprevchild_callback = cb; }
    void setQsciScintillaBase_KeyPressEvent_Callback(QsciScintillaBase_KeyPressEvent_Callback cb) { qsciscintillabase_keypressevent_callback = cb; }
    void setQsciScintillaBase_InputMethodEvent_Callback(QsciScintillaBase_InputMethodEvent_Callback cb) { qsciscintillabase_inputmethodevent_callback = cb; }
    void setQsciScintillaBase_MouseDoubleClickEvent_Callback(QsciScintillaBase_MouseDoubleClickEvent_Callback cb) { qsciscintillabase_mousedoubleclickevent_callback = cb; }
    void setQsciScintillaBase_MouseMoveEvent_Callback(QsciScintillaBase_MouseMoveEvent_Callback cb) { qsciscintillabase_mousemoveevent_callback = cb; }
    void setQsciScintillaBase_MousePressEvent_Callback(QsciScintillaBase_MousePressEvent_Callback cb) { qsciscintillabase_mousepressevent_callback = cb; }
    void setQsciScintillaBase_MouseReleaseEvent_Callback(QsciScintillaBase_MouseReleaseEvent_Callback cb) { qsciscintillabase_mousereleaseevent_callback = cb; }
    void setQsciScintillaBase_PaintEvent_Callback(QsciScintillaBase_PaintEvent_Callback cb) { qsciscintillabase_paintevent_callback = cb; }
    void setQsciScintillaBase_ResizeEvent_Callback(QsciScintillaBase_ResizeEvent_Callback cb) { qsciscintillabase_resizeevent_callback = cb; }
    void setQsciScintillaBase_ScrollContentsBy_Callback(QsciScintillaBase_ScrollContentsBy_Callback cb) { qsciscintillabase_scrollcontentsby_callback = cb; }
    void setQsciScintillaBase_MinimumSizeHint_Callback(QsciScintillaBase_MinimumSizeHint_Callback cb) { qsciscintillabase_minimumsizehint_callback = cb; }
    void setQsciScintillaBase_SizeHint_Callback(QsciScintillaBase_SizeHint_Callback cb) { qsciscintillabase_sizehint_callback = cb; }
    void setQsciScintillaBase_SetupViewport_Callback(QsciScintillaBase_SetupViewport_Callback cb) { qsciscintillabase_setupviewport_callback = cb; }
    void setQsciScintillaBase_EventFilter_Callback(QsciScintillaBase_EventFilter_Callback cb) { qsciscintillabase_eventfilter_callback = cb; }
    void setQsciScintillaBase_Event_Callback(QsciScintillaBase_Event_Callback cb) { qsciscintillabase_event_callback = cb; }
    void setQsciScintillaBase_ViewportEvent_Callback(QsciScintillaBase_ViewportEvent_Callback cb) { qsciscintillabase_viewportevent_callback = cb; }
    void setQsciScintillaBase_WheelEvent_Callback(QsciScintillaBase_WheelEvent_Callback cb) { qsciscintillabase_wheelevent_callback = cb; }
    void setQsciScintillaBase_ViewportSizeHint_Callback(QsciScintillaBase_ViewportSizeHint_Callback cb) { qsciscintillabase_viewportsizehint_callback = cb; }
    void setQsciScintillaBase_InitStyleOption_Callback(QsciScintillaBase_InitStyleOption_Callback cb) { qsciscintillabase_initstyleoption_callback = cb; }
    void setQsciScintillaBase_DevType_Callback(QsciScintillaBase_DevType_Callback cb) { qsciscintillabase_devtype_callback = cb; }
    void setQsciScintillaBase_SetVisible_Callback(QsciScintillaBase_SetVisible_Callback cb) { qsciscintillabase_setvisible_callback = cb; }
    void setQsciScintillaBase_HeightForWidth_Callback(QsciScintillaBase_HeightForWidth_Callback cb) { qsciscintillabase_heightforwidth_callback = cb; }
    void setQsciScintillaBase_HasHeightForWidth_Callback(QsciScintillaBase_HasHeightForWidth_Callback cb) { qsciscintillabase_hasheightforwidth_callback = cb; }
    void setQsciScintillaBase_PaintEngine_Callback(QsciScintillaBase_PaintEngine_Callback cb) { qsciscintillabase_paintengine_callback = cb; }
    void setQsciScintillaBase_KeyReleaseEvent_Callback(QsciScintillaBase_KeyReleaseEvent_Callback cb) { qsciscintillabase_keyreleaseevent_callback = cb; }
    void setQsciScintillaBase_EnterEvent_Callback(QsciScintillaBase_EnterEvent_Callback cb) { qsciscintillabase_enterevent_callback = cb; }
    void setQsciScintillaBase_LeaveEvent_Callback(QsciScintillaBase_LeaveEvent_Callback cb) { qsciscintillabase_leaveevent_callback = cb; }
    void setQsciScintillaBase_MoveEvent_Callback(QsciScintillaBase_MoveEvent_Callback cb) { qsciscintillabase_moveevent_callback = cb; }
    void setQsciScintillaBase_CloseEvent_Callback(QsciScintillaBase_CloseEvent_Callback cb) { qsciscintillabase_closeevent_callback = cb; }
    void setQsciScintillaBase_TabletEvent_Callback(QsciScintillaBase_TabletEvent_Callback cb) { qsciscintillabase_tabletevent_callback = cb; }
    void setQsciScintillaBase_ActionEvent_Callback(QsciScintillaBase_ActionEvent_Callback cb) { qsciscintillabase_actionevent_callback = cb; }
    void setQsciScintillaBase_ShowEvent_Callback(QsciScintillaBase_ShowEvent_Callback cb) { qsciscintillabase_showevent_callback = cb; }
    void setQsciScintillaBase_HideEvent_Callback(QsciScintillaBase_HideEvent_Callback cb) { qsciscintillabase_hideevent_callback = cb; }
    void setQsciScintillaBase_NativeEvent_Callback(QsciScintillaBase_NativeEvent_Callback cb) { qsciscintillabase_nativeevent_callback = cb; }
    void setQsciScintillaBase_Metric_Callback(QsciScintillaBase_Metric_Callback cb) { qsciscintillabase_metric_callback = cb; }
    void setQsciScintillaBase_InitPainter_Callback(QsciScintillaBase_InitPainter_Callback cb) { qsciscintillabase_initpainter_callback = cb; }
    void setQsciScintillaBase_Redirected_Callback(QsciScintillaBase_Redirected_Callback cb) { qsciscintillabase_redirected_callback = cb; }
    void setQsciScintillaBase_SharedPainter_Callback(QsciScintillaBase_SharedPainter_Callback cb) { qsciscintillabase_sharedpainter_callback = cb; }
    void setQsciScintillaBase_TimerEvent_Callback(QsciScintillaBase_TimerEvent_Callback cb) { qsciscintillabase_timerevent_callback = cb; }
    void setQsciScintillaBase_ChildEvent_Callback(QsciScintillaBase_ChildEvent_Callback cb) { qsciscintillabase_childevent_callback = cb; }
    void setQsciScintillaBase_CustomEvent_Callback(QsciScintillaBase_CustomEvent_Callback cb) { qsciscintillabase_customevent_callback = cb; }
    void setQsciScintillaBase_ConnectNotify_Callback(QsciScintillaBase_ConnectNotify_Callback cb) { qsciscintillabase_connectnotify_callback = cb; }
    void setQsciScintillaBase_DisconnectNotify_Callback(QsciScintillaBase_DisconnectNotify_Callback cb) { qsciscintillabase_disconnectnotify_callback = cb; }
    void setQsciScintillaBase_SetScrollBars_Callback(QsciScintillaBase_SetScrollBars_Callback cb) { qsciscintillabase_setscrollbars_callback = cb; }
    void setQsciScintillaBase_ContextMenuNeeded_Callback(QsciScintillaBase_ContextMenuNeeded_Callback cb) { qsciscintillabase_contextmenuneeded_callback = cb; }
    void setQsciScintillaBase_SetViewportMargins_Callback(QsciScintillaBase_SetViewportMargins_Callback cb) { qsciscintillabase_setviewportmargins_callback = cb; }
    void setQsciScintillaBase_ViewportMargins_Callback(QsciScintillaBase_ViewportMargins_Callback cb) { qsciscintillabase_viewportmargins_callback = cb; }
    void setQsciScintillaBase_DrawFrame_Callback(QsciScintillaBase_DrawFrame_Callback cb) { qsciscintillabase_drawframe_callback = cb; }
    void setQsciScintillaBase_UpdateMicroFocus_Callback(QsciScintillaBase_UpdateMicroFocus_Callback cb) { qsciscintillabase_updatemicrofocus_callback = cb; }
    void setQsciScintillaBase_Create_Callback(QsciScintillaBase_Create_Callback cb) { qsciscintillabase_create_callback = cb; }
    void setQsciScintillaBase_Destroy_Callback(QsciScintillaBase_Destroy_Callback cb) { qsciscintillabase_destroy_callback = cb; }
    void setQsciScintillaBase_FocusNextChild_Callback(QsciScintillaBase_FocusNextChild_Callback cb) { qsciscintillabase_focusnextchild_callback = cb; }
    void setQsciScintillaBase_FocusPreviousChild_Callback(QsciScintillaBase_FocusPreviousChild_Callback cb) { qsciscintillabase_focuspreviouschild_callback = cb; }
    void setQsciScintillaBase_Sender_Callback(QsciScintillaBase_Sender_Callback cb) { qsciscintillabase_sender_callback = cb; }
    void setQsciScintillaBase_SenderSignalIndex_Callback(QsciScintillaBase_SenderSignalIndex_Callback cb) { qsciscintillabase_sendersignalindex_callback = cb; }
    void setQsciScintillaBase_Receivers_Callback(QsciScintillaBase_Receivers_Callback cb) { qsciscintillabase_receivers_callback = cb; }
    void setQsciScintillaBase_IsSignalConnected_Callback(QsciScintillaBase_IsSignalConnected_Callback cb) { qsciscintillabase_issignalconnected_callback = cb; }

    // Base flag setters
    void setQsciScintillaBase_Metacall_IsBase(bool value) const { qsciscintillabase_metacall_isbase = value; }
    void setQsciScintillaBase_CanInsertFromMimeData_IsBase(bool value) const { qsciscintillabase_caninsertfrommimedata_isbase = value; }
    void setQsciScintillaBase_FromMimeData_IsBase(bool value) const { qsciscintillabase_frommimedata_isbase = value; }
    void setQsciScintillaBase_ToMimeData_IsBase(bool value) const { qsciscintillabase_tomimedata_isbase = value; }
    void setQsciScintillaBase_ChangeEvent_IsBase(bool value) const { qsciscintillabase_changeevent_isbase = value; }
    void setQsciScintillaBase_ContextMenuEvent_IsBase(bool value) const { qsciscintillabase_contextmenuevent_isbase = value; }
    void setQsciScintillaBase_DragEnterEvent_IsBase(bool value) const { qsciscintillabase_dragenterevent_isbase = value; }
    void setQsciScintillaBase_DragLeaveEvent_IsBase(bool value) const { qsciscintillabase_dragleaveevent_isbase = value; }
    void setQsciScintillaBase_DragMoveEvent_IsBase(bool value) const { qsciscintillabase_dragmoveevent_isbase = value; }
    void setQsciScintillaBase_DropEvent_IsBase(bool value) const { qsciscintillabase_dropevent_isbase = value; }
    void setQsciScintillaBase_FocusInEvent_IsBase(bool value) const { qsciscintillabase_focusinevent_isbase = value; }
    void setQsciScintillaBase_FocusOutEvent_IsBase(bool value) const { qsciscintillabase_focusoutevent_isbase = value; }
    void setQsciScintillaBase_FocusNextPrevChild_IsBase(bool value) const { qsciscintillabase_focusnextprevchild_isbase = value; }
    void setQsciScintillaBase_KeyPressEvent_IsBase(bool value) const { qsciscintillabase_keypressevent_isbase = value; }
    void setQsciScintillaBase_InputMethodEvent_IsBase(bool value) const { qsciscintillabase_inputmethodevent_isbase = value; }
    void setQsciScintillaBase_MouseDoubleClickEvent_IsBase(bool value) const { qsciscintillabase_mousedoubleclickevent_isbase = value; }
    void setQsciScintillaBase_MouseMoveEvent_IsBase(bool value) const { qsciscintillabase_mousemoveevent_isbase = value; }
    void setQsciScintillaBase_MousePressEvent_IsBase(bool value) const { qsciscintillabase_mousepressevent_isbase = value; }
    void setQsciScintillaBase_MouseReleaseEvent_IsBase(bool value) const { qsciscintillabase_mousereleaseevent_isbase = value; }
    void setQsciScintillaBase_PaintEvent_IsBase(bool value) const { qsciscintillabase_paintevent_isbase = value; }
    void setQsciScintillaBase_ResizeEvent_IsBase(bool value) const { qsciscintillabase_resizeevent_isbase = value; }
    void setQsciScintillaBase_ScrollContentsBy_IsBase(bool value) const { qsciscintillabase_scrollcontentsby_isbase = value; }
    void setQsciScintillaBase_MinimumSizeHint_IsBase(bool value) const { qsciscintillabase_minimumsizehint_isbase = value; }
    void setQsciScintillaBase_SizeHint_IsBase(bool value) const { qsciscintillabase_sizehint_isbase = value; }
    void setQsciScintillaBase_SetupViewport_IsBase(bool value) const { qsciscintillabase_setupviewport_isbase = value; }
    void setQsciScintillaBase_EventFilter_IsBase(bool value) const { qsciscintillabase_eventfilter_isbase = value; }
    void setQsciScintillaBase_Event_IsBase(bool value) const { qsciscintillabase_event_isbase = value; }
    void setQsciScintillaBase_ViewportEvent_IsBase(bool value) const { qsciscintillabase_viewportevent_isbase = value; }
    void setQsciScintillaBase_WheelEvent_IsBase(bool value) const { qsciscintillabase_wheelevent_isbase = value; }
    void setQsciScintillaBase_ViewportSizeHint_IsBase(bool value) const { qsciscintillabase_viewportsizehint_isbase = value; }
    void setQsciScintillaBase_InitStyleOption_IsBase(bool value) const { qsciscintillabase_initstyleoption_isbase = value; }
    void setQsciScintillaBase_DevType_IsBase(bool value) const { qsciscintillabase_devtype_isbase = value; }
    void setQsciScintillaBase_SetVisible_IsBase(bool value) const { qsciscintillabase_setvisible_isbase = value; }
    void setQsciScintillaBase_HeightForWidth_IsBase(bool value) const { qsciscintillabase_heightforwidth_isbase = value; }
    void setQsciScintillaBase_HasHeightForWidth_IsBase(bool value) const { qsciscintillabase_hasheightforwidth_isbase = value; }
    void setQsciScintillaBase_PaintEngine_IsBase(bool value) const { qsciscintillabase_paintengine_isbase = value; }
    void setQsciScintillaBase_KeyReleaseEvent_IsBase(bool value) const { qsciscintillabase_keyreleaseevent_isbase = value; }
    void setQsciScintillaBase_EnterEvent_IsBase(bool value) const { qsciscintillabase_enterevent_isbase = value; }
    void setQsciScintillaBase_LeaveEvent_IsBase(bool value) const { qsciscintillabase_leaveevent_isbase = value; }
    void setQsciScintillaBase_MoveEvent_IsBase(bool value) const { qsciscintillabase_moveevent_isbase = value; }
    void setQsciScintillaBase_CloseEvent_IsBase(bool value) const { qsciscintillabase_closeevent_isbase = value; }
    void setQsciScintillaBase_TabletEvent_IsBase(bool value) const { qsciscintillabase_tabletevent_isbase = value; }
    void setQsciScintillaBase_ActionEvent_IsBase(bool value) const { qsciscintillabase_actionevent_isbase = value; }
    void setQsciScintillaBase_ShowEvent_IsBase(bool value) const { qsciscintillabase_showevent_isbase = value; }
    void setQsciScintillaBase_HideEvent_IsBase(bool value) const { qsciscintillabase_hideevent_isbase = value; }
    void setQsciScintillaBase_NativeEvent_IsBase(bool value) const { qsciscintillabase_nativeevent_isbase = value; }
    void setQsciScintillaBase_Metric_IsBase(bool value) const { qsciscintillabase_metric_isbase = value; }
    void setQsciScintillaBase_InitPainter_IsBase(bool value) const { qsciscintillabase_initpainter_isbase = value; }
    void setQsciScintillaBase_Redirected_IsBase(bool value) const { qsciscintillabase_redirected_isbase = value; }
    void setQsciScintillaBase_SharedPainter_IsBase(bool value) const { qsciscintillabase_sharedpainter_isbase = value; }
    void setQsciScintillaBase_TimerEvent_IsBase(bool value) const { qsciscintillabase_timerevent_isbase = value; }
    void setQsciScintillaBase_ChildEvent_IsBase(bool value) const { qsciscintillabase_childevent_isbase = value; }
    void setQsciScintillaBase_CustomEvent_IsBase(bool value) const { qsciscintillabase_customevent_isbase = value; }
    void setQsciScintillaBase_ConnectNotify_IsBase(bool value) const { qsciscintillabase_connectnotify_isbase = value; }
    void setQsciScintillaBase_DisconnectNotify_IsBase(bool value) const { qsciscintillabase_disconnectnotify_isbase = value; }
    void setQsciScintillaBase_SetScrollBars_IsBase(bool value) const { qsciscintillabase_setscrollbars_isbase = value; }
    void setQsciScintillaBase_ContextMenuNeeded_IsBase(bool value) const { qsciscintillabase_contextmenuneeded_isbase = value; }
    void setQsciScintillaBase_SetViewportMargins_IsBase(bool value) const { qsciscintillabase_setviewportmargins_isbase = value; }
    void setQsciScintillaBase_ViewportMargins_IsBase(bool value) const { qsciscintillabase_viewportmargins_isbase = value; }
    void setQsciScintillaBase_DrawFrame_IsBase(bool value) const { qsciscintillabase_drawframe_isbase = value; }
    void setQsciScintillaBase_UpdateMicroFocus_IsBase(bool value) const { qsciscintillabase_updatemicrofocus_isbase = value; }
    void setQsciScintillaBase_Create_IsBase(bool value) const { qsciscintillabase_create_isbase = value; }
    void setQsciScintillaBase_Destroy_IsBase(bool value) const { qsciscintillabase_destroy_isbase = value; }
    void setQsciScintillaBase_FocusNextChild_IsBase(bool value) const { qsciscintillabase_focusnextchild_isbase = value; }
    void setQsciScintillaBase_FocusPreviousChild_IsBase(bool value) const { qsciscintillabase_focuspreviouschild_isbase = value; }
    void setQsciScintillaBase_Sender_IsBase(bool value) const { qsciscintillabase_sender_isbase = value; }
    void setQsciScintillaBase_SenderSignalIndex_IsBase(bool value) const { qsciscintillabase_sendersignalindex_isbase = value; }
    void setQsciScintillaBase_Receivers_IsBase(bool value) const { qsciscintillabase_receivers_isbase = value; }
    void setQsciScintillaBase_IsSignalConnected_IsBase(bool value) const { qsciscintillabase_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qsciscintillabase_metacall_isbase) {
            qsciscintillabase_metacall_isbase = false;
            return QsciScintillaBase::qt_metacall(param1, param2, param3);
        } else if (qsciscintillabase_metacall_callback != nullptr) {
            return qsciscintillabase_metacall_callback(this, param1, param2, param3);
        } else {
            return QsciScintillaBase::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canInsertFromMimeData(const QMimeData* source) const override {
        if (qsciscintillabase_caninsertfrommimedata_isbase) {
            qsciscintillabase_caninsertfrommimedata_isbase = false;
            return QsciScintillaBase::canInsertFromMimeData(source);
        } else if (qsciscintillabase_caninsertfrommimedata_callback != nullptr) {
            return qsciscintillabase_caninsertfrommimedata_callback(this, source);
        } else {
            return QsciScintillaBase::canInsertFromMimeData(source);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QByteArray fromMimeData(const QMimeData* source, bool& rectangular) const override {
        if (qsciscintillabase_frommimedata_isbase) {
            qsciscintillabase_frommimedata_isbase = false;
            return QsciScintillaBase::fromMimeData(source, rectangular);
        } else if (qsciscintillabase_frommimedata_callback != nullptr) {
            return qsciscintillabase_frommimedata_callback(this, source, rectangular);
        } else {
            return QsciScintillaBase::fromMimeData(source, rectangular);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* toMimeData(const QByteArray& text, bool rectangular) const override {
        if (qsciscintillabase_tomimedata_isbase) {
            qsciscintillabase_tomimedata_isbase = false;
            return QsciScintillaBase::toMimeData(text, rectangular);
        } else if (qsciscintillabase_tomimedata_callback != nullptr) {
            return qsciscintillabase_tomimedata_callback(this, text, rectangular);
        } else {
            return QsciScintillaBase::toMimeData(text, rectangular);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (qsciscintillabase_changeevent_isbase) {
            qsciscintillabase_changeevent_isbase = false;
            QsciScintillaBase::changeEvent(e);
        } else if (qsciscintillabase_changeevent_callback != nullptr) {
            qsciscintillabase_changeevent_callback(this, e);
        } else {
            QsciScintillaBase::changeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* e) override {
        if (qsciscintillabase_contextmenuevent_isbase) {
            qsciscintillabase_contextmenuevent_isbase = false;
            QsciScintillaBase::contextMenuEvent(e);
        } else if (qsciscintillabase_contextmenuevent_callback != nullptr) {
            qsciscintillabase_contextmenuevent_callback(this, e);
        } else {
            QsciScintillaBase::contextMenuEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* e) override {
        if (qsciscintillabase_dragenterevent_isbase) {
            qsciscintillabase_dragenterevent_isbase = false;
            QsciScintillaBase::dragEnterEvent(e);
        } else if (qsciscintillabase_dragenterevent_callback != nullptr) {
            qsciscintillabase_dragenterevent_callback(this, e);
        } else {
            QsciScintillaBase::dragEnterEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
        if (qsciscintillabase_dragleaveevent_isbase) {
            qsciscintillabase_dragleaveevent_isbase = false;
            QsciScintillaBase::dragLeaveEvent(e);
        } else if (qsciscintillabase_dragleaveevent_callback != nullptr) {
            qsciscintillabase_dragleaveevent_callback(this, e);
        } else {
            QsciScintillaBase::dragLeaveEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* e) override {
        if (qsciscintillabase_dragmoveevent_isbase) {
            qsciscintillabase_dragmoveevent_isbase = false;
            QsciScintillaBase::dragMoveEvent(e);
        } else if (qsciscintillabase_dragmoveevent_callback != nullptr) {
            qsciscintillabase_dragmoveevent_callback(this, e);
        } else {
            QsciScintillaBase::dragMoveEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* e) override {
        if (qsciscintillabase_dropevent_isbase) {
            qsciscintillabase_dropevent_isbase = false;
            QsciScintillaBase::dropEvent(e);
        } else if (qsciscintillabase_dropevent_callback != nullptr) {
            qsciscintillabase_dropevent_callback(this, e);
        } else {
            QsciScintillaBase::dropEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (qsciscintillabase_focusinevent_isbase) {
            qsciscintillabase_focusinevent_isbase = false;
            QsciScintillaBase::focusInEvent(e);
        } else if (qsciscintillabase_focusinevent_callback != nullptr) {
            qsciscintillabase_focusinevent_callback(this, e);
        } else {
            QsciScintillaBase::focusInEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (qsciscintillabase_focusoutevent_isbase) {
            qsciscintillabase_focusoutevent_isbase = false;
            QsciScintillaBase::focusOutEvent(e);
        } else if (qsciscintillabase_focusoutevent_callback != nullptr) {
            qsciscintillabase_focusoutevent_callback(this, e);
        } else {
            QsciScintillaBase::focusOutEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qsciscintillabase_focusnextprevchild_isbase) {
            qsciscintillabase_focusnextprevchild_isbase = false;
            return QsciScintillaBase::focusNextPrevChild(next);
        } else if (qsciscintillabase_focusnextprevchild_callback != nullptr) {
            return qsciscintillabase_focusnextprevchild_callback(this, next);
        } else {
            return QsciScintillaBase::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (qsciscintillabase_keypressevent_isbase) {
            qsciscintillabase_keypressevent_isbase = false;
            QsciScintillaBase::keyPressEvent(e);
        } else if (qsciscintillabase_keypressevent_callback != nullptr) {
            qsciscintillabase_keypressevent_callback(this, e);
        } else {
            QsciScintillaBase::keyPressEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qsciscintillabase_inputmethodevent_isbase) {
            qsciscintillabase_inputmethodevent_isbase = false;
            QsciScintillaBase::inputMethodEvent(event);
        } else if (qsciscintillabase_inputmethodevent_callback != nullptr) {
            qsciscintillabase_inputmethodevent_callback(this, event);
        } else {
            QsciScintillaBase::inputMethodEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* e) override {
        if (qsciscintillabase_mousedoubleclickevent_isbase) {
            qsciscintillabase_mousedoubleclickevent_isbase = false;
            QsciScintillaBase::mouseDoubleClickEvent(e);
        } else if (qsciscintillabase_mousedoubleclickevent_callback != nullptr) {
            qsciscintillabase_mousedoubleclickevent_callback(this, e);
        } else {
            QsciScintillaBase::mouseDoubleClickEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (qsciscintillabase_mousemoveevent_isbase) {
            qsciscintillabase_mousemoveevent_isbase = false;
            QsciScintillaBase::mouseMoveEvent(e);
        } else if (qsciscintillabase_mousemoveevent_callback != nullptr) {
            qsciscintillabase_mousemoveevent_callback(this, e);
        } else {
            QsciScintillaBase::mouseMoveEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (qsciscintillabase_mousepressevent_isbase) {
            qsciscintillabase_mousepressevent_isbase = false;
            QsciScintillaBase::mousePressEvent(e);
        } else if (qsciscintillabase_mousepressevent_callback != nullptr) {
            qsciscintillabase_mousepressevent_callback(this, e);
        } else {
            QsciScintillaBase::mousePressEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (qsciscintillabase_mousereleaseevent_isbase) {
            qsciscintillabase_mousereleaseevent_isbase = false;
            QsciScintillaBase::mouseReleaseEvent(e);
        } else if (qsciscintillabase_mousereleaseevent_callback != nullptr) {
            qsciscintillabase_mousereleaseevent_callback(this, e);
        } else {
            QsciScintillaBase::mouseReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (qsciscintillabase_paintevent_isbase) {
            qsciscintillabase_paintevent_isbase = false;
            QsciScintillaBase::paintEvent(e);
        } else if (qsciscintillabase_paintevent_callback != nullptr) {
            qsciscintillabase_paintevent_callback(this, e);
        } else {
            QsciScintillaBase::paintEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (qsciscintillabase_resizeevent_isbase) {
            qsciscintillabase_resizeevent_isbase = false;
            QsciScintillaBase::resizeEvent(e);
        } else if (qsciscintillabase_resizeevent_callback != nullptr) {
            qsciscintillabase_resizeevent_callback(this, e);
        } else {
            QsciScintillaBase::resizeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (qsciscintillabase_scrollcontentsby_isbase) {
            qsciscintillabase_scrollcontentsby_isbase = false;
            QsciScintillaBase::scrollContentsBy(dx, dy);
        } else if (qsciscintillabase_scrollcontentsby_callback != nullptr) {
            qsciscintillabase_scrollcontentsby_callback(this, dx, dy);
        } else {
            QsciScintillaBase::scrollContentsBy(dx, dy);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qsciscintillabase_minimumsizehint_isbase) {
            qsciscintillabase_minimumsizehint_isbase = false;
            return QsciScintillaBase::minimumSizeHint();
        } else if (qsciscintillabase_minimumsizehint_callback != nullptr) {
            return qsciscintillabase_minimumsizehint_callback();
        } else {
            return QsciScintillaBase::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qsciscintillabase_sizehint_isbase) {
            qsciscintillabase_sizehint_isbase = false;
            return QsciScintillaBase::sizeHint();
        } else if (qsciscintillabase_sizehint_callback != nullptr) {
            return qsciscintillabase_sizehint_callback();
        } else {
            return QsciScintillaBase::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (qsciscintillabase_setupviewport_isbase) {
            qsciscintillabase_setupviewport_isbase = false;
            QsciScintillaBase::setupViewport(viewport);
        } else if (qsciscintillabase_setupviewport_callback != nullptr) {
            qsciscintillabase_setupviewport_callback(this, viewport);
        } else {
            QsciScintillaBase::setupViewport(viewport);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qsciscintillabase_eventfilter_isbase) {
            qsciscintillabase_eventfilter_isbase = false;
            return QsciScintillaBase::eventFilter(param1, param2);
        } else if (qsciscintillabase_eventfilter_callback != nullptr) {
            return qsciscintillabase_eventfilter_callback(this, param1, param2);
        } else {
            return QsciScintillaBase::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qsciscintillabase_event_isbase) {
            qsciscintillabase_event_isbase = false;
            return QsciScintillaBase::event(param1);
        } else if (qsciscintillabase_event_callback != nullptr) {
            return qsciscintillabase_event_callback(this, param1);
        } else {
            return QsciScintillaBase::event(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* param1) override {
        if (qsciscintillabase_viewportevent_isbase) {
            qsciscintillabase_viewportevent_isbase = false;
            return QsciScintillaBase::viewportEvent(param1);
        } else if (qsciscintillabase_viewportevent_callback != nullptr) {
            return qsciscintillabase_viewportevent_callback(this, param1);
        } else {
            return QsciScintillaBase::viewportEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (qsciscintillabase_wheelevent_isbase) {
            qsciscintillabase_wheelevent_isbase = false;
            QsciScintillaBase::wheelEvent(param1);
        } else if (qsciscintillabase_wheelevent_callback != nullptr) {
            qsciscintillabase_wheelevent_callback(this, param1);
        } else {
            QsciScintillaBase::wheelEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (qsciscintillabase_viewportsizehint_isbase) {
            qsciscintillabase_viewportsizehint_isbase = false;
            return QsciScintillaBase::viewportSizeHint();
        } else if (qsciscintillabase_viewportsizehint_callback != nullptr) {
            return qsciscintillabase_viewportsizehint_callback();
        } else {
            return QsciScintillaBase::viewportSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qsciscintillabase_initstyleoption_isbase) {
            qsciscintillabase_initstyleoption_isbase = false;
            QsciScintillaBase::initStyleOption(option);
        } else if (qsciscintillabase_initstyleoption_callback != nullptr) {
            qsciscintillabase_initstyleoption_callback(this, option);
        } else {
            QsciScintillaBase::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qsciscintillabase_devtype_isbase) {
            qsciscintillabase_devtype_isbase = false;
            return QsciScintillaBase::devType();
        } else if (qsciscintillabase_devtype_callback != nullptr) {
            return qsciscintillabase_devtype_callback();
        } else {
            return QsciScintillaBase::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qsciscintillabase_setvisible_isbase) {
            qsciscintillabase_setvisible_isbase = false;
            QsciScintillaBase::setVisible(visible);
        } else if (qsciscintillabase_setvisible_callback != nullptr) {
            qsciscintillabase_setvisible_callback(this, visible);
        } else {
            QsciScintillaBase::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qsciscintillabase_heightforwidth_isbase) {
            qsciscintillabase_heightforwidth_isbase = false;
            return QsciScintillaBase::heightForWidth(param1);
        } else if (qsciscintillabase_heightforwidth_callback != nullptr) {
            return qsciscintillabase_heightforwidth_callback(this, param1);
        } else {
            return QsciScintillaBase::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qsciscintillabase_hasheightforwidth_isbase) {
            qsciscintillabase_hasheightforwidth_isbase = false;
            return QsciScintillaBase::hasHeightForWidth();
        } else if (qsciscintillabase_hasheightforwidth_callback != nullptr) {
            return qsciscintillabase_hasheightforwidth_callback();
        } else {
            return QsciScintillaBase::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qsciscintillabase_paintengine_isbase) {
            qsciscintillabase_paintengine_isbase = false;
            return QsciScintillaBase::paintEngine();
        } else if (qsciscintillabase_paintengine_callback != nullptr) {
            return qsciscintillabase_paintengine_callback();
        } else {
            return QsciScintillaBase::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qsciscintillabase_keyreleaseevent_isbase) {
            qsciscintillabase_keyreleaseevent_isbase = false;
            QsciScintillaBase::keyReleaseEvent(event);
        } else if (qsciscintillabase_keyreleaseevent_callback != nullptr) {
            qsciscintillabase_keyreleaseevent_callback(this, event);
        } else {
            QsciScintillaBase::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qsciscintillabase_enterevent_isbase) {
            qsciscintillabase_enterevent_isbase = false;
            QsciScintillaBase::enterEvent(event);
        } else if (qsciscintillabase_enterevent_callback != nullptr) {
            qsciscintillabase_enterevent_callback(this, event);
        } else {
            QsciScintillaBase::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qsciscintillabase_leaveevent_isbase) {
            qsciscintillabase_leaveevent_isbase = false;
            QsciScintillaBase::leaveEvent(event);
        } else if (qsciscintillabase_leaveevent_callback != nullptr) {
            qsciscintillabase_leaveevent_callback(this, event);
        } else {
            QsciScintillaBase::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qsciscintillabase_moveevent_isbase) {
            qsciscintillabase_moveevent_isbase = false;
            QsciScintillaBase::moveEvent(event);
        } else if (qsciscintillabase_moveevent_callback != nullptr) {
            qsciscintillabase_moveevent_callback(this, event);
        } else {
            QsciScintillaBase::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qsciscintillabase_closeevent_isbase) {
            qsciscintillabase_closeevent_isbase = false;
            QsciScintillaBase::closeEvent(event);
        } else if (qsciscintillabase_closeevent_callback != nullptr) {
            qsciscintillabase_closeevent_callback(this, event);
        } else {
            QsciScintillaBase::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qsciscintillabase_tabletevent_isbase) {
            qsciscintillabase_tabletevent_isbase = false;
            QsciScintillaBase::tabletEvent(event);
        } else if (qsciscintillabase_tabletevent_callback != nullptr) {
            qsciscintillabase_tabletevent_callback(this, event);
        } else {
            QsciScintillaBase::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qsciscintillabase_actionevent_isbase) {
            qsciscintillabase_actionevent_isbase = false;
            QsciScintillaBase::actionEvent(event);
        } else if (qsciscintillabase_actionevent_callback != nullptr) {
            qsciscintillabase_actionevent_callback(this, event);
        } else {
            QsciScintillaBase::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qsciscintillabase_showevent_isbase) {
            qsciscintillabase_showevent_isbase = false;
            QsciScintillaBase::showEvent(event);
        } else if (qsciscintillabase_showevent_callback != nullptr) {
            qsciscintillabase_showevent_callback(this, event);
        } else {
            QsciScintillaBase::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qsciscintillabase_hideevent_isbase) {
            qsciscintillabase_hideevent_isbase = false;
            QsciScintillaBase::hideEvent(event);
        } else if (qsciscintillabase_hideevent_callback != nullptr) {
            qsciscintillabase_hideevent_callback(this, event);
        } else {
            QsciScintillaBase::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qsciscintillabase_nativeevent_isbase) {
            qsciscintillabase_nativeevent_isbase = false;
            return QsciScintillaBase::nativeEvent(eventType, message, result);
        } else if (qsciscintillabase_nativeevent_callback != nullptr) {
            return qsciscintillabase_nativeevent_callback(this, eventType, message, result);
        } else {
            return QsciScintillaBase::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qsciscintillabase_metric_isbase) {
            qsciscintillabase_metric_isbase = false;
            return QsciScintillaBase::metric(param1);
        } else if (qsciscintillabase_metric_callback != nullptr) {
            return qsciscintillabase_metric_callback(this, param1);
        } else {
            return QsciScintillaBase::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qsciscintillabase_initpainter_isbase) {
            qsciscintillabase_initpainter_isbase = false;
            QsciScintillaBase::initPainter(painter);
        } else if (qsciscintillabase_initpainter_callback != nullptr) {
            qsciscintillabase_initpainter_callback(this, painter);
        } else {
            QsciScintillaBase::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qsciscintillabase_redirected_isbase) {
            qsciscintillabase_redirected_isbase = false;
            return QsciScintillaBase::redirected(offset);
        } else if (qsciscintillabase_redirected_callback != nullptr) {
            return qsciscintillabase_redirected_callback(this, offset);
        } else {
            return QsciScintillaBase::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qsciscintillabase_sharedpainter_isbase) {
            qsciscintillabase_sharedpainter_isbase = false;
            return QsciScintillaBase::sharedPainter();
        } else if (qsciscintillabase_sharedpainter_callback != nullptr) {
            return qsciscintillabase_sharedpainter_callback();
        } else {
            return QsciScintillaBase::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qsciscintillabase_timerevent_isbase) {
            qsciscintillabase_timerevent_isbase = false;
            QsciScintillaBase::timerEvent(event);
        } else if (qsciscintillabase_timerevent_callback != nullptr) {
            qsciscintillabase_timerevent_callback(this, event);
        } else {
            QsciScintillaBase::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qsciscintillabase_childevent_isbase) {
            qsciscintillabase_childevent_isbase = false;
            QsciScintillaBase::childEvent(event);
        } else if (qsciscintillabase_childevent_callback != nullptr) {
            qsciscintillabase_childevent_callback(this, event);
        } else {
            QsciScintillaBase::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qsciscintillabase_customevent_isbase) {
            qsciscintillabase_customevent_isbase = false;
            QsciScintillaBase::customEvent(event);
        } else if (qsciscintillabase_customevent_callback != nullptr) {
            qsciscintillabase_customevent_callback(this, event);
        } else {
            QsciScintillaBase::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qsciscintillabase_connectnotify_isbase) {
            qsciscintillabase_connectnotify_isbase = false;
            QsciScintillaBase::connectNotify(signal);
        } else if (qsciscintillabase_connectnotify_callback != nullptr) {
            qsciscintillabase_connectnotify_callback(this, signal);
        } else {
            QsciScintillaBase::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qsciscintillabase_disconnectnotify_isbase) {
            qsciscintillabase_disconnectnotify_isbase = false;
            QsciScintillaBase::disconnectNotify(signal);
        } else if (qsciscintillabase_disconnectnotify_callback != nullptr) {
            qsciscintillabase_disconnectnotify_callback(this, signal);
        } else {
            QsciScintillaBase::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setScrollBars() {
        if (qsciscintillabase_setscrollbars_isbase) {
            qsciscintillabase_setscrollbars_isbase = false;
            QsciScintillaBase::setScrollBars();
        } else if (qsciscintillabase_setscrollbars_callback != nullptr) {
            qsciscintillabase_setscrollbars_callback();
        } else {
            QsciScintillaBase::setScrollBars();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool contextMenuNeeded(int x, int y) const {
        if (qsciscintillabase_contextmenuneeded_isbase) {
            qsciscintillabase_contextmenuneeded_isbase = false;
            return QsciScintillaBase::contextMenuNeeded(x, y);
        } else if (qsciscintillabase_contextmenuneeded_callback != nullptr) {
            return qsciscintillabase_contextmenuneeded_callback(this, x, y);
        } else {
            return QsciScintillaBase::contextMenuNeeded(x, y);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setViewportMargins(int left, int top, int right, int bottom) {
        if (qsciscintillabase_setviewportmargins_isbase) {
            qsciscintillabase_setviewportmargins_isbase = false;
            QsciScintillaBase::setViewportMargins(left, top, right, bottom);
        } else if (qsciscintillabase_setviewportmargins_callback != nullptr) {
            qsciscintillabase_setviewportmargins_callback(this, left, top, right, bottom);
        } else {
            QsciScintillaBase::setViewportMargins(left, top, right, bottom);
        }
    }

    // Virtual method for C ABI access and custom callback
    QMargins viewportMargins() const {
        if (qsciscintillabase_viewportmargins_isbase) {
            qsciscintillabase_viewportmargins_isbase = false;
            return QsciScintillaBase::viewportMargins();
        } else if (qsciscintillabase_viewportmargins_callback != nullptr) {
            return qsciscintillabase_viewportmargins_callback();
        } else {
            return QsciScintillaBase::viewportMargins();
        }
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (qsciscintillabase_drawframe_isbase) {
            qsciscintillabase_drawframe_isbase = false;
            QsciScintillaBase::drawFrame(param1);
        } else if (qsciscintillabase_drawframe_callback != nullptr) {
            qsciscintillabase_drawframe_callback(this, param1);
        } else {
            QsciScintillaBase::drawFrame(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qsciscintillabase_updatemicrofocus_isbase) {
            qsciscintillabase_updatemicrofocus_isbase = false;
            QsciScintillaBase::updateMicroFocus();
        } else if (qsciscintillabase_updatemicrofocus_callback != nullptr) {
            qsciscintillabase_updatemicrofocus_callback();
        } else {
            QsciScintillaBase::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qsciscintillabase_create_isbase) {
            qsciscintillabase_create_isbase = false;
            QsciScintillaBase::create();
        } else if (qsciscintillabase_create_callback != nullptr) {
            qsciscintillabase_create_callback();
        } else {
            QsciScintillaBase::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qsciscintillabase_destroy_isbase) {
            qsciscintillabase_destroy_isbase = false;
            QsciScintillaBase::destroy();
        } else if (qsciscintillabase_destroy_callback != nullptr) {
            qsciscintillabase_destroy_callback();
        } else {
            QsciScintillaBase::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qsciscintillabase_focusnextchild_isbase) {
            qsciscintillabase_focusnextchild_isbase = false;
            return QsciScintillaBase::focusNextChild();
        } else if (qsciscintillabase_focusnextchild_callback != nullptr) {
            return qsciscintillabase_focusnextchild_callback();
        } else {
            return QsciScintillaBase::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qsciscintillabase_focuspreviouschild_isbase) {
            qsciscintillabase_focuspreviouschild_isbase = false;
            return QsciScintillaBase::focusPreviousChild();
        } else if (qsciscintillabase_focuspreviouschild_callback != nullptr) {
            return qsciscintillabase_focuspreviouschild_callback();
        } else {
            return QsciScintillaBase::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qsciscintillabase_sender_isbase) {
            qsciscintillabase_sender_isbase = false;
            return QsciScintillaBase::sender();
        } else if (qsciscintillabase_sender_callback != nullptr) {
            return qsciscintillabase_sender_callback();
        } else {
            return QsciScintillaBase::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qsciscintillabase_sendersignalindex_isbase) {
            qsciscintillabase_sendersignalindex_isbase = false;
            return QsciScintillaBase::senderSignalIndex();
        } else if (qsciscintillabase_sendersignalindex_callback != nullptr) {
            return qsciscintillabase_sendersignalindex_callback();
        } else {
            return QsciScintillaBase::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qsciscintillabase_receivers_isbase) {
            qsciscintillabase_receivers_isbase = false;
            return QsciScintillaBase::receivers(signal);
        } else if (qsciscintillabase_receivers_callback != nullptr) {
            return qsciscintillabase_receivers_callback(this, signal);
        } else {
            return QsciScintillaBase::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qsciscintillabase_issignalconnected_isbase) {
            qsciscintillabase_issignalconnected_isbase = false;
            return QsciScintillaBase::isSignalConnected(signal);
        } else if (qsciscintillabase_issignalconnected_callback != nullptr) {
            return qsciscintillabase_issignalconnected_callback(this, signal);
        } else {
            return QsciScintillaBase::isSignalConnected(signal);
        }
    }
};

#endif
