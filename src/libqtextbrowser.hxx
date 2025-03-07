#pragma once
#ifndef SRCC_LIBVIRTUALQTEXTBROWSER_H
#define SRCC_LIBVIRTUALQTEXTBROWSER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QTextBrowser so that we can call protected methods
class VirtualQTextBrowser : public QTextBrowser {

  public:
    // Virtual class public types (including callbacks)
    using QTextBrowser_Metacall_Callback = int (*)(QTextBrowser*, QMetaObject::Call, int, void**);
    using QTextBrowser_LoadResource_Callback = QVariant (*)(QTextBrowser*, int, const QUrl&);
    using QTextBrowser_Backward_Callback = void (*)();
    using QTextBrowser_Forward_Callback = void (*)();
    using QTextBrowser_Home_Callback = void (*)();
    using QTextBrowser_Reload_Callback = void (*)();
    using QTextBrowser_Event_Callback = bool (*)(QTextBrowser*, QEvent*);
    using QTextBrowser_KeyPressEvent_Callback = void (*)(QTextBrowser*, QKeyEvent*);
    using QTextBrowser_MouseMoveEvent_Callback = void (*)(QTextBrowser*, QMouseEvent*);
    using QTextBrowser_MousePressEvent_Callback = void (*)(QTextBrowser*, QMouseEvent*);
    using QTextBrowser_MouseReleaseEvent_Callback = void (*)(QTextBrowser*, QMouseEvent*);
    using QTextBrowser_FocusOutEvent_Callback = void (*)(QTextBrowser*, QFocusEvent*);
    using QTextBrowser_FocusNextPrevChild_Callback = bool (*)(QTextBrowser*, bool);
    using QTextBrowser_PaintEvent_Callback = void (*)(QTextBrowser*, QPaintEvent*);
    using QTextBrowser_DoSetSource_Callback = void (*)(QTextBrowser*, const QUrl&, QTextDocument::ResourceType);
    using QTextBrowser_InputMethodQuery_Callback = QVariant (*)(const QTextBrowser*, Qt::InputMethodQuery);
    using QTextBrowser_TimerEvent_Callback = void (*)(QTextBrowser*, QTimerEvent*);
    using QTextBrowser_KeyReleaseEvent_Callback = void (*)(QTextBrowser*, QKeyEvent*);
    using QTextBrowser_ResizeEvent_Callback = void (*)(QTextBrowser*, QResizeEvent*);
    using QTextBrowser_MouseDoubleClickEvent_Callback = void (*)(QTextBrowser*, QMouseEvent*);
    using QTextBrowser_ContextMenuEvent_Callback = void (*)(QTextBrowser*, QContextMenuEvent*);
    using QTextBrowser_DragEnterEvent_Callback = void (*)(QTextBrowser*, QDragEnterEvent*);
    using QTextBrowser_DragLeaveEvent_Callback = void (*)(QTextBrowser*, QDragLeaveEvent*);
    using QTextBrowser_DragMoveEvent_Callback = void (*)(QTextBrowser*, QDragMoveEvent*);
    using QTextBrowser_DropEvent_Callback = void (*)(QTextBrowser*, QDropEvent*);
    using QTextBrowser_FocusInEvent_Callback = void (*)(QTextBrowser*, QFocusEvent*);
    using QTextBrowser_ShowEvent_Callback = void (*)(QTextBrowser*, QShowEvent*);
    using QTextBrowser_ChangeEvent_Callback = void (*)(QTextBrowser*, QEvent*);
    using QTextBrowser_WheelEvent_Callback = void (*)(QTextBrowser*, QWheelEvent*);
    using QTextBrowser_CreateMimeDataFromSelection_Callback = QMimeData* (*)();
    using QTextBrowser_CanInsertFromMimeData_Callback = bool (*)(const QTextBrowser*, const QMimeData*);
    using QTextBrowser_InsertFromMimeData_Callback = void (*)(QTextBrowser*, const QMimeData*);
    using QTextBrowser_InputMethodEvent_Callback = void (*)(QTextBrowser*, QInputMethodEvent*);
    using QTextBrowser_ScrollContentsBy_Callback = void (*)(QTextBrowser*, int, int);
    using QTextBrowser_DoSetTextCursor_Callback = void (*)(QTextBrowser*, const QTextCursor&);
    using QTextBrowser_MinimumSizeHint_Callback = QSize (*)();
    using QTextBrowser_SizeHint_Callback = QSize (*)();
    using QTextBrowser_SetupViewport_Callback = void (*)(QTextBrowser*, QWidget*);
    using QTextBrowser_EventFilter_Callback = bool (*)(QTextBrowser*, QObject*, QEvent*);
    using QTextBrowser_ViewportEvent_Callback = bool (*)(QTextBrowser*, QEvent*);
    using QTextBrowser_ViewportSizeHint_Callback = QSize (*)();
    using QTextBrowser_InitStyleOption_Callback = void (*)(const QTextBrowser*, QStyleOptionFrame*);
    using QTextBrowser_DevType_Callback = int (*)();
    using QTextBrowser_SetVisible_Callback = void (*)(QTextBrowser*, bool);
    using QTextBrowser_HeightForWidth_Callback = int (*)(const QTextBrowser*, int);
    using QTextBrowser_HasHeightForWidth_Callback = bool (*)();
    using QTextBrowser_PaintEngine_Callback = QPaintEngine* (*)();
    using QTextBrowser_EnterEvent_Callback = void (*)(QTextBrowser*, QEnterEvent*);
    using QTextBrowser_LeaveEvent_Callback = void (*)(QTextBrowser*, QEvent*);
    using QTextBrowser_MoveEvent_Callback = void (*)(QTextBrowser*, QMoveEvent*);
    using QTextBrowser_CloseEvent_Callback = void (*)(QTextBrowser*, QCloseEvent*);
    using QTextBrowser_TabletEvent_Callback = void (*)(QTextBrowser*, QTabletEvent*);
    using QTextBrowser_ActionEvent_Callback = void (*)(QTextBrowser*, QActionEvent*);
    using QTextBrowser_HideEvent_Callback = void (*)(QTextBrowser*, QHideEvent*);
    using QTextBrowser_NativeEvent_Callback = bool (*)(QTextBrowser*, const QByteArray&, void*, qintptr*);
    using QTextBrowser_Metric_Callback = int (*)(const QTextBrowser*, QPaintDevice::PaintDeviceMetric);
    using QTextBrowser_InitPainter_Callback = void (*)(const QTextBrowser*, QPainter*);
    using QTextBrowser_Redirected_Callback = QPaintDevice* (*)(const QTextBrowser*, QPoint*);
    using QTextBrowser_SharedPainter_Callback = QPainter* (*)();
    using QTextBrowser_ChildEvent_Callback = void (*)(QTextBrowser*, QChildEvent*);
    using QTextBrowser_CustomEvent_Callback = void (*)(QTextBrowser*, QEvent*);
    using QTextBrowser_ConnectNotify_Callback = void (*)(QTextBrowser*, const QMetaMethod&);
    using QTextBrowser_DisconnectNotify_Callback = void (*)(QTextBrowser*, const QMetaMethod&);
    using QTextBrowser_ZoomInF_Callback = void (*)(QTextBrowser*, float);
    using QTextBrowser_SetViewportMargins_Callback = void (*)(QTextBrowser*, int, int, int, int);
    using QTextBrowser_ViewportMargins_Callback = QMargins (*)();
    using QTextBrowser_DrawFrame_Callback = void (*)(QTextBrowser*, QPainter*);
    using QTextBrowser_UpdateMicroFocus_Callback = void (*)();
    using QTextBrowser_Create_Callback = void (*)();
    using QTextBrowser_Destroy_Callback = void (*)();
    using QTextBrowser_FocusNextChild_Callback = bool (*)();
    using QTextBrowser_FocusPreviousChild_Callback = bool (*)();
    using QTextBrowser_Sender_Callback = QObject* (*)();
    using QTextBrowser_SenderSignalIndex_Callback = int (*)();
    using QTextBrowser_Receivers_Callback = int (*)(const QTextBrowser*, const char*);
    using QTextBrowser_IsSignalConnected_Callback = bool (*)(const QTextBrowser*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QTextBrowser_Metacall_Callback qtextbrowser_metacall_callback = nullptr;
    QTextBrowser_LoadResource_Callback qtextbrowser_loadresource_callback = nullptr;
    QTextBrowser_Backward_Callback qtextbrowser_backward_callback = nullptr;
    QTextBrowser_Forward_Callback qtextbrowser_forward_callback = nullptr;
    QTextBrowser_Home_Callback qtextbrowser_home_callback = nullptr;
    QTextBrowser_Reload_Callback qtextbrowser_reload_callback = nullptr;
    QTextBrowser_Event_Callback qtextbrowser_event_callback = nullptr;
    QTextBrowser_KeyPressEvent_Callback qtextbrowser_keypressevent_callback = nullptr;
    QTextBrowser_MouseMoveEvent_Callback qtextbrowser_mousemoveevent_callback = nullptr;
    QTextBrowser_MousePressEvent_Callback qtextbrowser_mousepressevent_callback = nullptr;
    QTextBrowser_MouseReleaseEvent_Callback qtextbrowser_mousereleaseevent_callback = nullptr;
    QTextBrowser_FocusOutEvent_Callback qtextbrowser_focusoutevent_callback = nullptr;
    QTextBrowser_FocusNextPrevChild_Callback qtextbrowser_focusnextprevchild_callback = nullptr;
    QTextBrowser_PaintEvent_Callback qtextbrowser_paintevent_callback = nullptr;
    QTextBrowser_DoSetSource_Callback qtextbrowser_dosetsource_callback = nullptr;
    QTextBrowser_InputMethodQuery_Callback qtextbrowser_inputmethodquery_callback = nullptr;
    QTextBrowser_TimerEvent_Callback qtextbrowser_timerevent_callback = nullptr;
    QTextBrowser_KeyReleaseEvent_Callback qtextbrowser_keyreleaseevent_callback = nullptr;
    QTextBrowser_ResizeEvent_Callback qtextbrowser_resizeevent_callback = nullptr;
    QTextBrowser_MouseDoubleClickEvent_Callback qtextbrowser_mousedoubleclickevent_callback = nullptr;
    QTextBrowser_ContextMenuEvent_Callback qtextbrowser_contextmenuevent_callback = nullptr;
    QTextBrowser_DragEnterEvent_Callback qtextbrowser_dragenterevent_callback = nullptr;
    QTextBrowser_DragLeaveEvent_Callback qtextbrowser_dragleaveevent_callback = nullptr;
    QTextBrowser_DragMoveEvent_Callback qtextbrowser_dragmoveevent_callback = nullptr;
    QTextBrowser_DropEvent_Callback qtextbrowser_dropevent_callback = nullptr;
    QTextBrowser_FocusInEvent_Callback qtextbrowser_focusinevent_callback = nullptr;
    QTextBrowser_ShowEvent_Callback qtextbrowser_showevent_callback = nullptr;
    QTextBrowser_ChangeEvent_Callback qtextbrowser_changeevent_callback = nullptr;
    QTextBrowser_WheelEvent_Callback qtextbrowser_wheelevent_callback = nullptr;
    QTextBrowser_CreateMimeDataFromSelection_Callback qtextbrowser_createmimedatafromselection_callback = nullptr;
    QTextBrowser_CanInsertFromMimeData_Callback qtextbrowser_caninsertfrommimedata_callback = nullptr;
    QTextBrowser_InsertFromMimeData_Callback qtextbrowser_insertfrommimedata_callback = nullptr;
    QTextBrowser_InputMethodEvent_Callback qtextbrowser_inputmethodevent_callback = nullptr;
    QTextBrowser_ScrollContentsBy_Callback qtextbrowser_scrollcontentsby_callback = nullptr;
    QTextBrowser_DoSetTextCursor_Callback qtextbrowser_dosettextcursor_callback = nullptr;
    QTextBrowser_MinimumSizeHint_Callback qtextbrowser_minimumsizehint_callback = nullptr;
    QTextBrowser_SizeHint_Callback qtextbrowser_sizehint_callback = nullptr;
    QTextBrowser_SetupViewport_Callback qtextbrowser_setupviewport_callback = nullptr;
    QTextBrowser_EventFilter_Callback qtextbrowser_eventfilter_callback = nullptr;
    QTextBrowser_ViewportEvent_Callback qtextbrowser_viewportevent_callback = nullptr;
    QTextBrowser_ViewportSizeHint_Callback qtextbrowser_viewportsizehint_callback = nullptr;
    QTextBrowser_InitStyleOption_Callback qtextbrowser_initstyleoption_callback = nullptr;
    QTextBrowser_DevType_Callback qtextbrowser_devtype_callback = nullptr;
    QTextBrowser_SetVisible_Callback qtextbrowser_setvisible_callback = nullptr;
    QTextBrowser_HeightForWidth_Callback qtextbrowser_heightforwidth_callback = nullptr;
    QTextBrowser_HasHeightForWidth_Callback qtextbrowser_hasheightforwidth_callback = nullptr;
    QTextBrowser_PaintEngine_Callback qtextbrowser_paintengine_callback = nullptr;
    QTextBrowser_EnterEvent_Callback qtextbrowser_enterevent_callback = nullptr;
    QTextBrowser_LeaveEvent_Callback qtextbrowser_leaveevent_callback = nullptr;
    QTextBrowser_MoveEvent_Callback qtextbrowser_moveevent_callback = nullptr;
    QTextBrowser_CloseEvent_Callback qtextbrowser_closeevent_callback = nullptr;
    QTextBrowser_TabletEvent_Callback qtextbrowser_tabletevent_callback = nullptr;
    QTextBrowser_ActionEvent_Callback qtextbrowser_actionevent_callback = nullptr;
    QTextBrowser_HideEvent_Callback qtextbrowser_hideevent_callback = nullptr;
    QTextBrowser_NativeEvent_Callback qtextbrowser_nativeevent_callback = nullptr;
    QTextBrowser_Metric_Callback qtextbrowser_metric_callback = nullptr;
    QTextBrowser_InitPainter_Callback qtextbrowser_initpainter_callback = nullptr;
    QTextBrowser_Redirected_Callback qtextbrowser_redirected_callback = nullptr;
    QTextBrowser_SharedPainter_Callback qtextbrowser_sharedpainter_callback = nullptr;
    QTextBrowser_ChildEvent_Callback qtextbrowser_childevent_callback = nullptr;
    QTextBrowser_CustomEvent_Callback qtextbrowser_customevent_callback = nullptr;
    QTextBrowser_ConnectNotify_Callback qtextbrowser_connectnotify_callback = nullptr;
    QTextBrowser_DisconnectNotify_Callback qtextbrowser_disconnectnotify_callback = nullptr;
    QTextBrowser_ZoomInF_Callback qtextbrowser_zoominf_callback = nullptr;
    QTextBrowser_SetViewportMargins_Callback qtextbrowser_setviewportmargins_callback = nullptr;
    QTextBrowser_ViewportMargins_Callback qtextbrowser_viewportmargins_callback = nullptr;
    QTextBrowser_DrawFrame_Callback qtextbrowser_drawframe_callback = nullptr;
    QTextBrowser_UpdateMicroFocus_Callback qtextbrowser_updatemicrofocus_callback = nullptr;
    QTextBrowser_Create_Callback qtextbrowser_create_callback = nullptr;
    QTextBrowser_Destroy_Callback qtextbrowser_destroy_callback = nullptr;
    QTextBrowser_FocusNextChild_Callback qtextbrowser_focusnextchild_callback = nullptr;
    QTextBrowser_FocusPreviousChild_Callback qtextbrowser_focuspreviouschild_callback = nullptr;
    QTextBrowser_Sender_Callback qtextbrowser_sender_callback = nullptr;
    QTextBrowser_SenderSignalIndex_Callback qtextbrowser_sendersignalindex_callback = nullptr;
    QTextBrowser_Receivers_Callback qtextbrowser_receivers_callback = nullptr;
    QTextBrowser_IsSignalConnected_Callback qtextbrowser_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qtextbrowser_metacall_isbase = false;
    mutable bool qtextbrowser_loadresource_isbase = false;
    mutable bool qtextbrowser_backward_isbase = false;
    mutable bool qtextbrowser_forward_isbase = false;
    mutable bool qtextbrowser_home_isbase = false;
    mutable bool qtextbrowser_reload_isbase = false;
    mutable bool qtextbrowser_event_isbase = false;
    mutable bool qtextbrowser_keypressevent_isbase = false;
    mutable bool qtextbrowser_mousemoveevent_isbase = false;
    mutable bool qtextbrowser_mousepressevent_isbase = false;
    mutable bool qtextbrowser_mousereleaseevent_isbase = false;
    mutable bool qtextbrowser_focusoutevent_isbase = false;
    mutable bool qtextbrowser_focusnextprevchild_isbase = false;
    mutable bool qtextbrowser_paintevent_isbase = false;
    mutable bool qtextbrowser_dosetsource_isbase = false;
    mutable bool qtextbrowser_inputmethodquery_isbase = false;
    mutable bool qtextbrowser_timerevent_isbase = false;
    mutable bool qtextbrowser_keyreleaseevent_isbase = false;
    mutable bool qtextbrowser_resizeevent_isbase = false;
    mutable bool qtextbrowser_mousedoubleclickevent_isbase = false;
    mutable bool qtextbrowser_contextmenuevent_isbase = false;
    mutable bool qtextbrowser_dragenterevent_isbase = false;
    mutable bool qtextbrowser_dragleaveevent_isbase = false;
    mutable bool qtextbrowser_dragmoveevent_isbase = false;
    mutable bool qtextbrowser_dropevent_isbase = false;
    mutable bool qtextbrowser_focusinevent_isbase = false;
    mutable bool qtextbrowser_showevent_isbase = false;
    mutable bool qtextbrowser_changeevent_isbase = false;
    mutable bool qtextbrowser_wheelevent_isbase = false;
    mutable bool qtextbrowser_createmimedatafromselection_isbase = false;
    mutable bool qtextbrowser_caninsertfrommimedata_isbase = false;
    mutable bool qtextbrowser_insertfrommimedata_isbase = false;
    mutable bool qtextbrowser_inputmethodevent_isbase = false;
    mutable bool qtextbrowser_scrollcontentsby_isbase = false;
    mutable bool qtextbrowser_dosettextcursor_isbase = false;
    mutable bool qtextbrowser_minimumsizehint_isbase = false;
    mutable bool qtextbrowser_sizehint_isbase = false;
    mutable bool qtextbrowser_setupviewport_isbase = false;
    mutable bool qtextbrowser_eventfilter_isbase = false;
    mutable bool qtextbrowser_viewportevent_isbase = false;
    mutable bool qtextbrowser_viewportsizehint_isbase = false;
    mutable bool qtextbrowser_initstyleoption_isbase = false;
    mutable bool qtextbrowser_devtype_isbase = false;
    mutable bool qtextbrowser_setvisible_isbase = false;
    mutable bool qtextbrowser_heightforwidth_isbase = false;
    mutable bool qtextbrowser_hasheightforwidth_isbase = false;
    mutable bool qtextbrowser_paintengine_isbase = false;
    mutable bool qtextbrowser_enterevent_isbase = false;
    mutable bool qtextbrowser_leaveevent_isbase = false;
    mutable bool qtextbrowser_moveevent_isbase = false;
    mutable bool qtextbrowser_closeevent_isbase = false;
    mutable bool qtextbrowser_tabletevent_isbase = false;
    mutable bool qtextbrowser_actionevent_isbase = false;
    mutable bool qtextbrowser_hideevent_isbase = false;
    mutable bool qtextbrowser_nativeevent_isbase = false;
    mutable bool qtextbrowser_metric_isbase = false;
    mutable bool qtextbrowser_initpainter_isbase = false;
    mutable bool qtextbrowser_redirected_isbase = false;
    mutable bool qtextbrowser_sharedpainter_isbase = false;
    mutable bool qtextbrowser_childevent_isbase = false;
    mutable bool qtextbrowser_customevent_isbase = false;
    mutable bool qtextbrowser_connectnotify_isbase = false;
    mutable bool qtextbrowser_disconnectnotify_isbase = false;
    mutable bool qtextbrowser_zoominf_isbase = false;
    mutable bool qtextbrowser_setviewportmargins_isbase = false;
    mutable bool qtextbrowser_viewportmargins_isbase = false;
    mutable bool qtextbrowser_drawframe_isbase = false;
    mutable bool qtextbrowser_updatemicrofocus_isbase = false;
    mutable bool qtextbrowser_create_isbase = false;
    mutable bool qtextbrowser_destroy_isbase = false;
    mutable bool qtextbrowser_focusnextchild_isbase = false;
    mutable bool qtextbrowser_focuspreviouschild_isbase = false;
    mutable bool qtextbrowser_sender_isbase = false;
    mutable bool qtextbrowser_sendersignalindex_isbase = false;
    mutable bool qtextbrowser_receivers_isbase = false;
    mutable bool qtextbrowser_issignalconnected_isbase = false;

  public:
    VirtualQTextBrowser(QWidget* parent) : QTextBrowser(parent){};
    VirtualQTextBrowser() : QTextBrowser(){};

    ~VirtualQTextBrowser() {
        qtextbrowser_metacall_callback = nullptr;
        qtextbrowser_loadresource_callback = nullptr;
        qtextbrowser_backward_callback = nullptr;
        qtextbrowser_forward_callback = nullptr;
        qtextbrowser_home_callback = nullptr;
        qtextbrowser_reload_callback = nullptr;
        qtextbrowser_event_callback = nullptr;
        qtextbrowser_keypressevent_callback = nullptr;
        qtextbrowser_mousemoveevent_callback = nullptr;
        qtextbrowser_mousepressevent_callback = nullptr;
        qtextbrowser_mousereleaseevent_callback = nullptr;
        qtextbrowser_focusoutevent_callback = nullptr;
        qtextbrowser_focusnextprevchild_callback = nullptr;
        qtextbrowser_paintevent_callback = nullptr;
        qtextbrowser_dosetsource_callback = nullptr;
        qtextbrowser_inputmethodquery_callback = nullptr;
        qtextbrowser_timerevent_callback = nullptr;
        qtextbrowser_keyreleaseevent_callback = nullptr;
        qtextbrowser_resizeevent_callback = nullptr;
        qtextbrowser_mousedoubleclickevent_callback = nullptr;
        qtextbrowser_contextmenuevent_callback = nullptr;
        qtextbrowser_dragenterevent_callback = nullptr;
        qtextbrowser_dragleaveevent_callback = nullptr;
        qtextbrowser_dragmoveevent_callback = nullptr;
        qtextbrowser_dropevent_callback = nullptr;
        qtextbrowser_focusinevent_callback = nullptr;
        qtextbrowser_showevent_callback = nullptr;
        qtextbrowser_changeevent_callback = nullptr;
        qtextbrowser_wheelevent_callback = nullptr;
        qtextbrowser_createmimedatafromselection_callback = nullptr;
        qtextbrowser_caninsertfrommimedata_callback = nullptr;
        qtextbrowser_insertfrommimedata_callback = nullptr;
        qtextbrowser_inputmethodevent_callback = nullptr;
        qtextbrowser_scrollcontentsby_callback = nullptr;
        qtextbrowser_dosettextcursor_callback = nullptr;
        qtextbrowser_minimumsizehint_callback = nullptr;
        qtextbrowser_sizehint_callback = nullptr;
        qtextbrowser_setupviewport_callback = nullptr;
        qtextbrowser_eventfilter_callback = nullptr;
        qtextbrowser_viewportevent_callback = nullptr;
        qtextbrowser_viewportsizehint_callback = nullptr;
        qtextbrowser_initstyleoption_callback = nullptr;
        qtextbrowser_devtype_callback = nullptr;
        qtextbrowser_setvisible_callback = nullptr;
        qtextbrowser_heightforwidth_callback = nullptr;
        qtextbrowser_hasheightforwidth_callback = nullptr;
        qtextbrowser_paintengine_callback = nullptr;
        qtextbrowser_enterevent_callback = nullptr;
        qtextbrowser_leaveevent_callback = nullptr;
        qtextbrowser_moveevent_callback = nullptr;
        qtextbrowser_closeevent_callback = nullptr;
        qtextbrowser_tabletevent_callback = nullptr;
        qtextbrowser_actionevent_callback = nullptr;
        qtextbrowser_hideevent_callback = nullptr;
        qtextbrowser_nativeevent_callback = nullptr;
        qtextbrowser_metric_callback = nullptr;
        qtextbrowser_initpainter_callback = nullptr;
        qtextbrowser_redirected_callback = nullptr;
        qtextbrowser_sharedpainter_callback = nullptr;
        qtextbrowser_childevent_callback = nullptr;
        qtextbrowser_customevent_callback = nullptr;
        qtextbrowser_connectnotify_callback = nullptr;
        qtextbrowser_disconnectnotify_callback = nullptr;
        qtextbrowser_zoominf_callback = nullptr;
        qtextbrowser_setviewportmargins_callback = nullptr;
        qtextbrowser_viewportmargins_callback = nullptr;
        qtextbrowser_drawframe_callback = nullptr;
        qtextbrowser_updatemicrofocus_callback = nullptr;
        qtextbrowser_create_callback = nullptr;
        qtextbrowser_destroy_callback = nullptr;
        qtextbrowser_focusnextchild_callback = nullptr;
        qtextbrowser_focuspreviouschild_callback = nullptr;
        qtextbrowser_sender_callback = nullptr;
        qtextbrowser_sendersignalindex_callback = nullptr;
        qtextbrowser_receivers_callback = nullptr;
        qtextbrowser_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQTextBrowser_Metacall_Callback(QTextBrowser_Metacall_Callback cb) { qtextbrowser_metacall_callback = cb; }
    void setQTextBrowser_LoadResource_Callback(QTextBrowser_LoadResource_Callback cb) { qtextbrowser_loadresource_callback = cb; }
    void setQTextBrowser_Backward_Callback(QTextBrowser_Backward_Callback cb) { qtextbrowser_backward_callback = cb; }
    void setQTextBrowser_Forward_Callback(QTextBrowser_Forward_Callback cb) { qtextbrowser_forward_callback = cb; }
    void setQTextBrowser_Home_Callback(QTextBrowser_Home_Callback cb) { qtextbrowser_home_callback = cb; }
    void setQTextBrowser_Reload_Callback(QTextBrowser_Reload_Callback cb) { qtextbrowser_reload_callback = cb; }
    void setQTextBrowser_Event_Callback(QTextBrowser_Event_Callback cb) { qtextbrowser_event_callback = cb; }
    void setQTextBrowser_KeyPressEvent_Callback(QTextBrowser_KeyPressEvent_Callback cb) { qtextbrowser_keypressevent_callback = cb; }
    void setQTextBrowser_MouseMoveEvent_Callback(QTextBrowser_MouseMoveEvent_Callback cb) { qtextbrowser_mousemoveevent_callback = cb; }
    void setQTextBrowser_MousePressEvent_Callback(QTextBrowser_MousePressEvent_Callback cb) { qtextbrowser_mousepressevent_callback = cb; }
    void setQTextBrowser_MouseReleaseEvent_Callback(QTextBrowser_MouseReleaseEvent_Callback cb) { qtextbrowser_mousereleaseevent_callback = cb; }
    void setQTextBrowser_FocusOutEvent_Callback(QTextBrowser_FocusOutEvent_Callback cb) { qtextbrowser_focusoutevent_callback = cb; }
    void setQTextBrowser_FocusNextPrevChild_Callback(QTextBrowser_FocusNextPrevChild_Callback cb) { qtextbrowser_focusnextprevchild_callback = cb; }
    void setQTextBrowser_PaintEvent_Callback(QTextBrowser_PaintEvent_Callback cb) { qtextbrowser_paintevent_callback = cb; }
    void setQTextBrowser_DoSetSource_Callback(QTextBrowser_DoSetSource_Callback cb) { qtextbrowser_dosetsource_callback = cb; }
    void setQTextBrowser_InputMethodQuery_Callback(QTextBrowser_InputMethodQuery_Callback cb) { qtextbrowser_inputmethodquery_callback = cb; }
    void setQTextBrowser_TimerEvent_Callback(QTextBrowser_TimerEvent_Callback cb) { qtextbrowser_timerevent_callback = cb; }
    void setQTextBrowser_KeyReleaseEvent_Callback(QTextBrowser_KeyReleaseEvent_Callback cb) { qtextbrowser_keyreleaseevent_callback = cb; }
    void setQTextBrowser_ResizeEvent_Callback(QTextBrowser_ResizeEvent_Callback cb) { qtextbrowser_resizeevent_callback = cb; }
    void setQTextBrowser_MouseDoubleClickEvent_Callback(QTextBrowser_MouseDoubleClickEvent_Callback cb) { qtextbrowser_mousedoubleclickevent_callback = cb; }
    void setQTextBrowser_ContextMenuEvent_Callback(QTextBrowser_ContextMenuEvent_Callback cb) { qtextbrowser_contextmenuevent_callback = cb; }
    void setQTextBrowser_DragEnterEvent_Callback(QTextBrowser_DragEnterEvent_Callback cb) { qtextbrowser_dragenterevent_callback = cb; }
    void setQTextBrowser_DragLeaveEvent_Callback(QTextBrowser_DragLeaveEvent_Callback cb) { qtextbrowser_dragleaveevent_callback = cb; }
    void setQTextBrowser_DragMoveEvent_Callback(QTextBrowser_DragMoveEvent_Callback cb) { qtextbrowser_dragmoveevent_callback = cb; }
    void setQTextBrowser_DropEvent_Callback(QTextBrowser_DropEvent_Callback cb) { qtextbrowser_dropevent_callback = cb; }
    void setQTextBrowser_FocusInEvent_Callback(QTextBrowser_FocusInEvent_Callback cb) { qtextbrowser_focusinevent_callback = cb; }
    void setQTextBrowser_ShowEvent_Callback(QTextBrowser_ShowEvent_Callback cb) { qtextbrowser_showevent_callback = cb; }
    void setQTextBrowser_ChangeEvent_Callback(QTextBrowser_ChangeEvent_Callback cb) { qtextbrowser_changeevent_callback = cb; }
    void setQTextBrowser_WheelEvent_Callback(QTextBrowser_WheelEvent_Callback cb) { qtextbrowser_wheelevent_callback = cb; }
    void setQTextBrowser_CreateMimeDataFromSelection_Callback(QTextBrowser_CreateMimeDataFromSelection_Callback cb) { qtextbrowser_createmimedatafromselection_callback = cb; }
    void setQTextBrowser_CanInsertFromMimeData_Callback(QTextBrowser_CanInsertFromMimeData_Callback cb) { qtextbrowser_caninsertfrommimedata_callback = cb; }
    void setQTextBrowser_InsertFromMimeData_Callback(QTextBrowser_InsertFromMimeData_Callback cb) { qtextbrowser_insertfrommimedata_callback = cb; }
    void setQTextBrowser_InputMethodEvent_Callback(QTextBrowser_InputMethodEvent_Callback cb) { qtextbrowser_inputmethodevent_callback = cb; }
    void setQTextBrowser_ScrollContentsBy_Callback(QTextBrowser_ScrollContentsBy_Callback cb) { qtextbrowser_scrollcontentsby_callback = cb; }
    void setQTextBrowser_DoSetTextCursor_Callback(QTextBrowser_DoSetTextCursor_Callback cb) { qtextbrowser_dosettextcursor_callback = cb; }
    void setQTextBrowser_MinimumSizeHint_Callback(QTextBrowser_MinimumSizeHint_Callback cb) { qtextbrowser_minimumsizehint_callback = cb; }
    void setQTextBrowser_SizeHint_Callback(QTextBrowser_SizeHint_Callback cb) { qtextbrowser_sizehint_callback = cb; }
    void setQTextBrowser_SetupViewport_Callback(QTextBrowser_SetupViewport_Callback cb) { qtextbrowser_setupviewport_callback = cb; }
    void setQTextBrowser_EventFilter_Callback(QTextBrowser_EventFilter_Callback cb) { qtextbrowser_eventfilter_callback = cb; }
    void setQTextBrowser_ViewportEvent_Callback(QTextBrowser_ViewportEvent_Callback cb) { qtextbrowser_viewportevent_callback = cb; }
    void setQTextBrowser_ViewportSizeHint_Callback(QTextBrowser_ViewportSizeHint_Callback cb) { qtextbrowser_viewportsizehint_callback = cb; }
    void setQTextBrowser_InitStyleOption_Callback(QTextBrowser_InitStyleOption_Callback cb) { qtextbrowser_initstyleoption_callback = cb; }
    void setQTextBrowser_DevType_Callback(QTextBrowser_DevType_Callback cb) { qtextbrowser_devtype_callback = cb; }
    void setQTextBrowser_SetVisible_Callback(QTextBrowser_SetVisible_Callback cb) { qtextbrowser_setvisible_callback = cb; }
    void setQTextBrowser_HeightForWidth_Callback(QTextBrowser_HeightForWidth_Callback cb) { qtextbrowser_heightforwidth_callback = cb; }
    void setQTextBrowser_HasHeightForWidth_Callback(QTextBrowser_HasHeightForWidth_Callback cb) { qtextbrowser_hasheightforwidth_callback = cb; }
    void setQTextBrowser_PaintEngine_Callback(QTextBrowser_PaintEngine_Callback cb) { qtextbrowser_paintengine_callback = cb; }
    void setQTextBrowser_EnterEvent_Callback(QTextBrowser_EnterEvent_Callback cb) { qtextbrowser_enterevent_callback = cb; }
    void setQTextBrowser_LeaveEvent_Callback(QTextBrowser_LeaveEvent_Callback cb) { qtextbrowser_leaveevent_callback = cb; }
    void setQTextBrowser_MoveEvent_Callback(QTextBrowser_MoveEvent_Callback cb) { qtextbrowser_moveevent_callback = cb; }
    void setQTextBrowser_CloseEvent_Callback(QTextBrowser_CloseEvent_Callback cb) { qtextbrowser_closeevent_callback = cb; }
    void setQTextBrowser_TabletEvent_Callback(QTextBrowser_TabletEvent_Callback cb) { qtextbrowser_tabletevent_callback = cb; }
    void setQTextBrowser_ActionEvent_Callback(QTextBrowser_ActionEvent_Callback cb) { qtextbrowser_actionevent_callback = cb; }
    void setQTextBrowser_HideEvent_Callback(QTextBrowser_HideEvent_Callback cb) { qtextbrowser_hideevent_callback = cb; }
    void setQTextBrowser_NativeEvent_Callback(QTextBrowser_NativeEvent_Callback cb) { qtextbrowser_nativeevent_callback = cb; }
    void setQTextBrowser_Metric_Callback(QTextBrowser_Metric_Callback cb) { qtextbrowser_metric_callback = cb; }
    void setQTextBrowser_InitPainter_Callback(QTextBrowser_InitPainter_Callback cb) { qtextbrowser_initpainter_callback = cb; }
    void setQTextBrowser_Redirected_Callback(QTextBrowser_Redirected_Callback cb) { qtextbrowser_redirected_callback = cb; }
    void setQTextBrowser_SharedPainter_Callback(QTextBrowser_SharedPainter_Callback cb) { qtextbrowser_sharedpainter_callback = cb; }
    void setQTextBrowser_ChildEvent_Callback(QTextBrowser_ChildEvent_Callback cb) { qtextbrowser_childevent_callback = cb; }
    void setQTextBrowser_CustomEvent_Callback(QTextBrowser_CustomEvent_Callback cb) { qtextbrowser_customevent_callback = cb; }
    void setQTextBrowser_ConnectNotify_Callback(QTextBrowser_ConnectNotify_Callback cb) { qtextbrowser_connectnotify_callback = cb; }
    void setQTextBrowser_DisconnectNotify_Callback(QTextBrowser_DisconnectNotify_Callback cb) { qtextbrowser_disconnectnotify_callback = cb; }
    void setQTextBrowser_ZoomInF_Callback(QTextBrowser_ZoomInF_Callback cb) { qtextbrowser_zoominf_callback = cb; }
    void setQTextBrowser_SetViewportMargins_Callback(QTextBrowser_SetViewportMargins_Callback cb) { qtextbrowser_setviewportmargins_callback = cb; }
    void setQTextBrowser_ViewportMargins_Callback(QTextBrowser_ViewportMargins_Callback cb) { qtextbrowser_viewportmargins_callback = cb; }
    void setQTextBrowser_DrawFrame_Callback(QTextBrowser_DrawFrame_Callback cb) { qtextbrowser_drawframe_callback = cb; }
    void setQTextBrowser_UpdateMicroFocus_Callback(QTextBrowser_UpdateMicroFocus_Callback cb) { qtextbrowser_updatemicrofocus_callback = cb; }
    void setQTextBrowser_Create_Callback(QTextBrowser_Create_Callback cb) { qtextbrowser_create_callback = cb; }
    void setQTextBrowser_Destroy_Callback(QTextBrowser_Destroy_Callback cb) { qtextbrowser_destroy_callback = cb; }
    void setQTextBrowser_FocusNextChild_Callback(QTextBrowser_FocusNextChild_Callback cb) { qtextbrowser_focusnextchild_callback = cb; }
    void setQTextBrowser_FocusPreviousChild_Callback(QTextBrowser_FocusPreviousChild_Callback cb) { qtextbrowser_focuspreviouschild_callback = cb; }
    void setQTextBrowser_Sender_Callback(QTextBrowser_Sender_Callback cb) { qtextbrowser_sender_callback = cb; }
    void setQTextBrowser_SenderSignalIndex_Callback(QTextBrowser_SenderSignalIndex_Callback cb) { qtextbrowser_sendersignalindex_callback = cb; }
    void setQTextBrowser_Receivers_Callback(QTextBrowser_Receivers_Callback cb) { qtextbrowser_receivers_callback = cb; }
    void setQTextBrowser_IsSignalConnected_Callback(QTextBrowser_IsSignalConnected_Callback cb) { qtextbrowser_issignalconnected_callback = cb; }

    // Base flag setters
    void setQTextBrowser_Metacall_IsBase(bool value) const { qtextbrowser_metacall_isbase = value; }
    void setQTextBrowser_LoadResource_IsBase(bool value) const { qtextbrowser_loadresource_isbase = value; }
    void setQTextBrowser_Backward_IsBase(bool value) const { qtextbrowser_backward_isbase = value; }
    void setQTextBrowser_Forward_IsBase(bool value) const { qtextbrowser_forward_isbase = value; }
    void setQTextBrowser_Home_IsBase(bool value) const { qtextbrowser_home_isbase = value; }
    void setQTextBrowser_Reload_IsBase(bool value) const { qtextbrowser_reload_isbase = value; }
    void setQTextBrowser_Event_IsBase(bool value) const { qtextbrowser_event_isbase = value; }
    void setQTextBrowser_KeyPressEvent_IsBase(bool value) const { qtextbrowser_keypressevent_isbase = value; }
    void setQTextBrowser_MouseMoveEvent_IsBase(bool value) const { qtextbrowser_mousemoveevent_isbase = value; }
    void setQTextBrowser_MousePressEvent_IsBase(bool value) const { qtextbrowser_mousepressevent_isbase = value; }
    void setQTextBrowser_MouseReleaseEvent_IsBase(bool value) const { qtextbrowser_mousereleaseevent_isbase = value; }
    void setQTextBrowser_FocusOutEvent_IsBase(bool value) const { qtextbrowser_focusoutevent_isbase = value; }
    void setQTextBrowser_FocusNextPrevChild_IsBase(bool value) const { qtextbrowser_focusnextprevchild_isbase = value; }
    void setQTextBrowser_PaintEvent_IsBase(bool value) const { qtextbrowser_paintevent_isbase = value; }
    void setQTextBrowser_DoSetSource_IsBase(bool value) const { qtextbrowser_dosetsource_isbase = value; }
    void setQTextBrowser_InputMethodQuery_IsBase(bool value) const { qtextbrowser_inputmethodquery_isbase = value; }
    void setQTextBrowser_TimerEvent_IsBase(bool value) const { qtextbrowser_timerevent_isbase = value; }
    void setQTextBrowser_KeyReleaseEvent_IsBase(bool value) const { qtextbrowser_keyreleaseevent_isbase = value; }
    void setQTextBrowser_ResizeEvent_IsBase(bool value) const { qtextbrowser_resizeevent_isbase = value; }
    void setQTextBrowser_MouseDoubleClickEvent_IsBase(bool value) const { qtextbrowser_mousedoubleclickevent_isbase = value; }
    void setQTextBrowser_ContextMenuEvent_IsBase(bool value) const { qtextbrowser_contextmenuevent_isbase = value; }
    void setQTextBrowser_DragEnterEvent_IsBase(bool value) const { qtextbrowser_dragenterevent_isbase = value; }
    void setQTextBrowser_DragLeaveEvent_IsBase(bool value) const { qtextbrowser_dragleaveevent_isbase = value; }
    void setQTextBrowser_DragMoveEvent_IsBase(bool value) const { qtextbrowser_dragmoveevent_isbase = value; }
    void setQTextBrowser_DropEvent_IsBase(bool value) const { qtextbrowser_dropevent_isbase = value; }
    void setQTextBrowser_FocusInEvent_IsBase(bool value) const { qtextbrowser_focusinevent_isbase = value; }
    void setQTextBrowser_ShowEvent_IsBase(bool value) const { qtextbrowser_showevent_isbase = value; }
    void setQTextBrowser_ChangeEvent_IsBase(bool value) const { qtextbrowser_changeevent_isbase = value; }
    void setQTextBrowser_WheelEvent_IsBase(bool value) const { qtextbrowser_wheelevent_isbase = value; }
    void setQTextBrowser_CreateMimeDataFromSelection_IsBase(bool value) const { qtextbrowser_createmimedatafromselection_isbase = value; }
    void setQTextBrowser_CanInsertFromMimeData_IsBase(bool value) const { qtextbrowser_caninsertfrommimedata_isbase = value; }
    void setQTextBrowser_InsertFromMimeData_IsBase(bool value) const { qtextbrowser_insertfrommimedata_isbase = value; }
    void setQTextBrowser_InputMethodEvent_IsBase(bool value) const { qtextbrowser_inputmethodevent_isbase = value; }
    void setQTextBrowser_ScrollContentsBy_IsBase(bool value) const { qtextbrowser_scrollcontentsby_isbase = value; }
    void setQTextBrowser_DoSetTextCursor_IsBase(bool value) const { qtextbrowser_dosettextcursor_isbase = value; }
    void setQTextBrowser_MinimumSizeHint_IsBase(bool value) const { qtextbrowser_minimumsizehint_isbase = value; }
    void setQTextBrowser_SizeHint_IsBase(bool value) const { qtextbrowser_sizehint_isbase = value; }
    void setQTextBrowser_SetupViewport_IsBase(bool value) const { qtextbrowser_setupviewport_isbase = value; }
    void setQTextBrowser_EventFilter_IsBase(bool value) const { qtextbrowser_eventfilter_isbase = value; }
    void setQTextBrowser_ViewportEvent_IsBase(bool value) const { qtextbrowser_viewportevent_isbase = value; }
    void setQTextBrowser_ViewportSizeHint_IsBase(bool value) const { qtextbrowser_viewportsizehint_isbase = value; }
    void setQTextBrowser_InitStyleOption_IsBase(bool value) const { qtextbrowser_initstyleoption_isbase = value; }
    void setQTextBrowser_DevType_IsBase(bool value) const { qtextbrowser_devtype_isbase = value; }
    void setQTextBrowser_SetVisible_IsBase(bool value) const { qtextbrowser_setvisible_isbase = value; }
    void setQTextBrowser_HeightForWidth_IsBase(bool value) const { qtextbrowser_heightforwidth_isbase = value; }
    void setQTextBrowser_HasHeightForWidth_IsBase(bool value) const { qtextbrowser_hasheightforwidth_isbase = value; }
    void setQTextBrowser_PaintEngine_IsBase(bool value) const { qtextbrowser_paintengine_isbase = value; }
    void setQTextBrowser_EnterEvent_IsBase(bool value) const { qtextbrowser_enterevent_isbase = value; }
    void setQTextBrowser_LeaveEvent_IsBase(bool value) const { qtextbrowser_leaveevent_isbase = value; }
    void setQTextBrowser_MoveEvent_IsBase(bool value) const { qtextbrowser_moveevent_isbase = value; }
    void setQTextBrowser_CloseEvent_IsBase(bool value) const { qtextbrowser_closeevent_isbase = value; }
    void setQTextBrowser_TabletEvent_IsBase(bool value) const { qtextbrowser_tabletevent_isbase = value; }
    void setQTextBrowser_ActionEvent_IsBase(bool value) const { qtextbrowser_actionevent_isbase = value; }
    void setQTextBrowser_HideEvent_IsBase(bool value) const { qtextbrowser_hideevent_isbase = value; }
    void setQTextBrowser_NativeEvent_IsBase(bool value) const { qtextbrowser_nativeevent_isbase = value; }
    void setQTextBrowser_Metric_IsBase(bool value) const { qtextbrowser_metric_isbase = value; }
    void setQTextBrowser_InitPainter_IsBase(bool value) const { qtextbrowser_initpainter_isbase = value; }
    void setQTextBrowser_Redirected_IsBase(bool value) const { qtextbrowser_redirected_isbase = value; }
    void setQTextBrowser_SharedPainter_IsBase(bool value) const { qtextbrowser_sharedpainter_isbase = value; }
    void setQTextBrowser_ChildEvent_IsBase(bool value) const { qtextbrowser_childevent_isbase = value; }
    void setQTextBrowser_CustomEvent_IsBase(bool value) const { qtextbrowser_customevent_isbase = value; }
    void setQTextBrowser_ConnectNotify_IsBase(bool value) const { qtextbrowser_connectnotify_isbase = value; }
    void setQTextBrowser_DisconnectNotify_IsBase(bool value) const { qtextbrowser_disconnectnotify_isbase = value; }
    void setQTextBrowser_ZoomInF_IsBase(bool value) const { qtextbrowser_zoominf_isbase = value; }
    void setQTextBrowser_SetViewportMargins_IsBase(bool value) const { qtextbrowser_setviewportmargins_isbase = value; }
    void setQTextBrowser_ViewportMargins_IsBase(bool value) const { qtextbrowser_viewportmargins_isbase = value; }
    void setQTextBrowser_DrawFrame_IsBase(bool value) const { qtextbrowser_drawframe_isbase = value; }
    void setQTextBrowser_UpdateMicroFocus_IsBase(bool value) const { qtextbrowser_updatemicrofocus_isbase = value; }
    void setQTextBrowser_Create_IsBase(bool value) const { qtextbrowser_create_isbase = value; }
    void setQTextBrowser_Destroy_IsBase(bool value) const { qtextbrowser_destroy_isbase = value; }
    void setQTextBrowser_FocusNextChild_IsBase(bool value) const { qtextbrowser_focusnextchild_isbase = value; }
    void setQTextBrowser_FocusPreviousChild_IsBase(bool value) const { qtextbrowser_focuspreviouschild_isbase = value; }
    void setQTextBrowser_Sender_IsBase(bool value) const { qtextbrowser_sender_isbase = value; }
    void setQTextBrowser_SenderSignalIndex_IsBase(bool value) const { qtextbrowser_sendersignalindex_isbase = value; }
    void setQTextBrowser_Receivers_IsBase(bool value) const { qtextbrowser_receivers_isbase = value; }
    void setQTextBrowser_IsSignalConnected_IsBase(bool value) const { qtextbrowser_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtextbrowser_metacall_isbase) {
            qtextbrowser_metacall_isbase = false;
            return QTextBrowser::qt_metacall(param1, param2, param3);
        } else if (qtextbrowser_metacall_callback != nullptr) {
            return qtextbrowser_metacall_callback(this, param1, param2, param3);
        } else {
            return QTextBrowser::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant loadResource(int typeVal, const QUrl& name) override {
        if (qtextbrowser_loadresource_isbase) {
            qtextbrowser_loadresource_isbase = false;
            return QTextBrowser::loadResource(typeVal, name);
        } else if (qtextbrowser_loadresource_callback != nullptr) {
            return qtextbrowser_loadresource_callback(this, typeVal, name);
        } else {
            return QTextBrowser::loadResource(typeVal, name);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void backward() override {
        if (qtextbrowser_backward_isbase) {
            qtextbrowser_backward_isbase = false;
            QTextBrowser::backward();
        } else if (qtextbrowser_backward_callback != nullptr) {
            qtextbrowser_backward_callback();
        } else {
            QTextBrowser::backward();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void forward() override {
        if (qtextbrowser_forward_isbase) {
            qtextbrowser_forward_isbase = false;
            QTextBrowser::forward();
        } else if (qtextbrowser_forward_callback != nullptr) {
            qtextbrowser_forward_callback();
        } else {
            QTextBrowser::forward();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void home() override {
        if (qtextbrowser_home_isbase) {
            qtextbrowser_home_isbase = false;
            QTextBrowser::home();
        } else if (qtextbrowser_home_callback != nullptr) {
            qtextbrowser_home_callback();
        } else {
            QTextBrowser::home();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reload() override {
        if (qtextbrowser_reload_isbase) {
            qtextbrowser_reload_isbase = false;
            QTextBrowser::reload();
        } else if (qtextbrowser_reload_callback != nullptr) {
            qtextbrowser_reload_callback();
        } else {
            QTextBrowser::reload();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qtextbrowser_event_isbase) {
            qtextbrowser_event_isbase = false;
            return QTextBrowser::event(e);
        } else if (qtextbrowser_event_callback != nullptr) {
            return qtextbrowser_event_callback(this, e);
        } else {
            return QTextBrowser::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* ev) override {
        if (qtextbrowser_keypressevent_isbase) {
            qtextbrowser_keypressevent_isbase = false;
            QTextBrowser::keyPressEvent(ev);
        } else if (qtextbrowser_keypressevent_callback != nullptr) {
            qtextbrowser_keypressevent_callback(this, ev);
        } else {
            QTextBrowser::keyPressEvent(ev);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* ev) override {
        if (qtextbrowser_mousemoveevent_isbase) {
            qtextbrowser_mousemoveevent_isbase = false;
            QTextBrowser::mouseMoveEvent(ev);
        } else if (qtextbrowser_mousemoveevent_callback != nullptr) {
            qtextbrowser_mousemoveevent_callback(this, ev);
        } else {
            QTextBrowser::mouseMoveEvent(ev);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* ev) override {
        if (qtextbrowser_mousepressevent_isbase) {
            qtextbrowser_mousepressevent_isbase = false;
            QTextBrowser::mousePressEvent(ev);
        } else if (qtextbrowser_mousepressevent_callback != nullptr) {
            qtextbrowser_mousepressevent_callback(this, ev);
        } else {
            QTextBrowser::mousePressEvent(ev);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* ev) override {
        if (qtextbrowser_mousereleaseevent_isbase) {
            qtextbrowser_mousereleaseevent_isbase = false;
            QTextBrowser::mouseReleaseEvent(ev);
        } else if (qtextbrowser_mousereleaseevent_callback != nullptr) {
            qtextbrowser_mousereleaseevent_callback(this, ev);
        } else {
            QTextBrowser::mouseReleaseEvent(ev);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* ev) override {
        if (qtextbrowser_focusoutevent_isbase) {
            qtextbrowser_focusoutevent_isbase = false;
            QTextBrowser::focusOutEvent(ev);
        } else if (qtextbrowser_focusoutevent_callback != nullptr) {
            qtextbrowser_focusoutevent_callback(this, ev);
        } else {
            QTextBrowser::focusOutEvent(ev);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qtextbrowser_focusnextprevchild_isbase) {
            qtextbrowser_focusnextprevchild_isbase = false;
            return QTextBrowser::focusNextPrevChild(next);
        } else if (qtextbrowser_focusnextprevchild_callback != nullptr) {
            return qtextbrowser_focusnextprevchild_callback(this, next);
        } else {
            return QTextBrowser::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (qtextbrowser_paintevent_isbase) {
            qtextbrowser_paintevent_isbase = false;
            QTextBrowser::paintEvent(e);
        } else if (qtextbrowser_paintevent_callback != nullptr) {
            qtextbrowser_paintevent_callback(this, e);
        } else {
            QTextBrowser::paintEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void doSetSource(const QUrl& name, QTextDocument::ResourceType typeVal) override {
        if (qtextbrowser_dosetsource_isbase) {
            qtextbrowser_dosetsource_isbase = false;
            QTextBrowser::doSetSource(name, typeVal);
        } else if (qtextbrowser_dosetsource_callback != nullptr) {
            qtextbrowser_dosetsource_callback(this, name, typeVal);
        } else {
            QTextBrowser::doSetSource(name, typeVal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery property) const override {
        if (qtextbrowser_inputmethodquery_isbase) {
            qtextbrowser_inputmethodquery_isbase = false;
            return QTextBrowser::inputMethodQuery(property);
        } else if (qtextbrowser_inputmethodquery_callback != nullptr) {
            return qtextbrowser_inputmethodquery_callback(this, property);
        } else {
            return QTextBrowser::inputMethodQuery(property);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (qtextbrowser_timerevent_isbase) {
            qtextbrowser_timerevent_isbase = false;
            QTextBrowser::timerEvent(e);
        } else if (qtextbrowser_timerevent_callback != nullptr) {
            qtextbrowser_timerevent_callback(this, e);
        } else {
            QTextBrowser::timerEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (qtextbrowser_keyreleaseevent_isbase) {
            qtextbrowser_keyreleaseevent_isbase = false;
            QTextBrowser::keyReleaseEvent(e);
        } else if (qtextbrowser_keyreleaseevent_callback != nullptr) {
            qtextbrowser_keyreleaseevent_callback(this, e);
        } else {
            QTextBrowser::keyReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (qtextbrowser_resizeevent_isbase) {
            qtextbrowser_resizeevent_isbase = false;
            QTextBrowser::resizeEvent(e);
        } else if (qtextbrowser_resizeevent_callback != nullptr) {
            qtextbrowser_resizeevent_callback(this, e);
        } else {
            QTextBrowser::resizeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* e) override {
        if (qtextbrowser_mousedoubleclickevent_isbase) {
            qtextbrowser_mousedoubleclickevent_isbase = false;
            QTextBrowser::mouseDoubleClickEvent(e);
        } else if (qtextbrowser_mousedoubleclickevent_callback != nullptr) {
            qtextbrowser_mousedoubleclickevent_callback(this, e);
        } else {
            QTextBrowser::mouseDoubleClickEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* e) override {
        if (qtextbrowser_contextmenuevent_isbase) {
            qtextbrowser_contextmenuevent_isbase = false;
            QTextBrowser::contextMenuEvent(e);
        } else if (qtextbrowser_contextmenuevent_callback != nullptr) {
            qtextbrowser_contextmenuevent_callback(this, e);
        } else {
            QTextBrowser::contextMenuEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* e) override {
        if (qtextbrowser_dragenterevent_isbase) {
            qtextbrowser_dragenterevent_isbase = false;
            QTextBrowser::dragEnterEvent(e);
        } else if (qtextbrowser_dragenterevent_callback != nullptr) {
            qtextbrowser_dragenterevent_callback(this, e);
        } else {
            QTextBrowser::dragEnterEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
        if (qtextbrowser_dragleaveevent_isbase) {
            qtextbrowser_dragleaveevent_isbase = false;
            QTextBrowser::dragLeaveEvent(e);
        } else if (qtextbrowser_dragleaveevent_callback != nullptr) {
            qtextbrowser_dragleaveevent_callback(this, e);
        } else {
            QTextBrowser::dragLeaveEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* e) override {
        if (qtextbrowser_dragmoveevent_isbase) {
            qtextbrowser_dragmoveevent_isbase = false;
            QTextBrowser::dragMoveEvent(e);
        } else if (qtextbrowser_dragmoveevent_callback != nullptr) {
            qtextbrowser_dragmoveevent_callback(this, e);
        } else {
            QTextBrowser::dragMoveEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* e) override {
        if (qtextbrowser_dropevent_isbase) {
            qtextbrowser_dropevent_isbase = false;
            QTextBrowser::dropEvent(e);
        } else if (qtextbrowser_dropevent_callback != nullptr) {
            qtextbrowser_dropevent_callback(this, e);
        } else {
            QTextBrowser::dropEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (qtextbrowser_focusinevent_isbase) {
            qtextbrowser_focusinevent_isbase = false;
            QTextBrowser::focusInEvent(e);
        } else if (qtextbrowser_focusinevent_callback != nullptr) {
            qtextbrowser_focusinevent_callback(this, e);
        } else {
            QTextBrowser::focusInEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qtextbrowser_showevent_isbase) {
            qtextbrowser_showevent_isbase = false;
            QTextBrowser::showEvent(param1);
        } else if (qtextbrowser_showevent_callback != nullptr) {
            qtextbrowser_showevent_callback(this, param1);
        } else {
            QTextBrowser::showEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (qtextbrowser_changeevent_isbase) {
            qtextbrowser_changeevent_isbase = false;
            QTextBrowser::changeEvent(e);
        } else if (qtextbrowser_changeevent_callback != nullptr) {
            qtextbrowser_changeevent_callback(this, e);
        } else {
            QTextBrowser::changeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (qtextbrowser_wheelevent_isbase) {
            qtextbrowser_wheelevent_isbase = false;
            QTextBrowser::wheelEvent(e);
        } else if (qtextbrowser_wheelevent_callback != nullptr) {
            qtextbrowser_wheelevent_callback(this, e);
        } else {
            QTextBrowser::wheelEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* createMimeDataFromSelection() const override {
        if (qtextbrowser_createmimedatafromselection_isbase) {
            qtextbrowser_createmimedatafromselection_isbase = false;
            return QTextBrowser::createMimeDataFromSelection();
        } else if (qtextbrowser_createmimedatafromselection_callback != nullptr) {
            return qtextbrowser_createmimedatafromselection_callback();
        } else {
            return QTextBrowser::createMimeDataFromSelection();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canInsertFromMimeData(const QMimeData* source) const override {
        if (qtextbrowser_caninsertfrommimedata_isbase) {
            qtextbrowser_caninsertfrommimedata_isbase = false;
            return QTextBrowser::canInsertFromMimeData(source);
        } else if (qtextbrowser_caninsertfrommimedata_callback != nullptr) {
            return qtextbrowser_caninsertfrommimedata_callback(this, source);
        } else {
            return QTextBrowser::canInsertFromMimeData(source);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void insertFromMimeData(const QMimeData* source) override {
        if (qtextbrowser_insertfrommimedata_isbase) {
            qtextbrowser_insertfrommimedata_isbase = false;
            QTextBrowser::insertFromMimeData(source);
        } else if (qtextbrowser_insertfrommimedata_callback != nullptr) {
            qtextbrowser_insertfrommimedata_callback(this, source);
        } else {
            QTextBrowser::insertFromMimeData(source);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qtextbrowser_inputmethodevent_isbase) {
            qtextbrowser_inputmethodevent_isbase = false;
            QTextBrowser::inputMethodEvent(param1);
        } else if (qtextbrowser_inputmethodevent_callback != nullptr) {
            qtextbrowser_inputmethodevent_callback(this, param1);
        } else {
            QTextBrowser::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (qtextbrowser_scrollcontentsby_isbase) {
            qtextbrowser_scrollcontentsby_isbase = false;
            QTextBrowser::scrollContentsBy(dx, dy);
        } else if (qtextbrowser_scrollcontentsby_callback != nullptr) {
            qtextbrowser_scrollcontentsby_callback(this, dx, dy);
        } else {
            QTextBrowser::scrollContentsBy(dx, dy);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void doSetTextCursor(const QTextCursor& cursor) override {
        if (qtextbrowser_dosettextcursor_isbase) {
            qtextbrowser_dosettextcursor_isbase = false;
            QTextBrowser::doSetTextCursor(cursor);
        } else if (qtextbrowser_dosettextcursor_callback != nullptr) {
            qtextbrowser_dosettextcursor_callback(this, cursor);
        } else {
            QTextBrowser::doSetTextCursor(cursor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qtextbrowser_minimumsizehint_isbase) {
            qtextbrowser_minimumsizehint_isbase = false;
            return QTextBrowser::minimumSizeHint();
        } else if (qtextbrowser_minimumsizehint_callback != nullptr) {
            return qtextbrowser_minimumsizehint_callback();
        } else {
            return QTextBrowser::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qtextbrowser_sizehint_isbase) {
            qtextbrowser_sizehint_isbase = false;
            return QTextBrowser::sizeHint();
        } else if (qtextbrowser_sizehint_callback != nullptr) {
            return qtextbrowser_sizehint_callback();
        } else {
            return QTextBrowser::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (qtextbrowser_setupviewport_isbase) {
            qtextbrowser_setupviewport_isbase = false;
            QTextBrowser::setupViewport(viewport);
        } else if (qtextbrowser_setupviewport_callback != nullptr) {
            qtextbrowser_setupviewport_callback(this, viewport);
        } else {
            QTextBrowser::setupViewport(viewport);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qtextbrowser_eventfilter_isbase) {
            qtextbrowser_eventfilter_isbase = false;
            return QTextBrowser::eventFilter(param1, param2);
        } else if (qtextbrowser_eventfilter_callback != nullptr) {
            return qtextbrowser_eventfilter_callback(this, param1, param2);
        } else {
            return QTextBrowser::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* param1) override {
        if (qtextbrowser_viewportevent_isbase) {
            qtextbrowser_viewportevent_isbase = false;
            return QTextBrowser::viewportEvent(param1);
        } else if (qtextbrowser_viewportevent_callback != nullptr) {
            return qtextbrowser_viewportevent_callback(this, param1);
        } else {
            return QTextBrowser::viewportEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (qtextbrowser_viewportsizehint_isbase) {
            qtextbrowser_viewportsizehint_isbase = false;
            return QTextBrowser::viewportSizeHint();
        } else if (qtextbrowser_viewportsizehint_callback != nullptr) {
            return qtextbrowser_viewportsizehint_callback();
        } else {
            return QTextBrowser::viewportSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qtextbrowser_initstyleoption_isbase) {
            qtextbrowser_initstyleoption_isbase = false;
            QTextBrowser::initStyleOption(option);
        } else if (qtextbrowser_initstyleoption_callback != nullptr) {
            qtextbrowser_initstyleoption_callback(this, option);
        } else {
            QTextBrowser::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qtextbrowser_devtype_isbase) {
            qtextbrowser_devtype_isbase = false;
            return QTextBrowser::devType();
        } else if (qtextbrowser_devtype_callback != nullptr) {
            return qtextbrowser_devtype_callback();
        } else {
            return QTextBrowser::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qtextbrowser_setvisible_isbase) {
            qtextbrowser_setvisible_isbase = false;
            QTextBrowser::setVisible(visible);
        } else if (qtextbrowser_setvisible_callback != nullptr) {
            qtextbrowser_setvisible_callback(this, visible);
        } else {
            QTextBrowser::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qtextbrowser_heightforwidth_isbase) {
            qtextbrowser_heightforwidth_isbase = false;
            return QTextBrowser::heightForWidth(param1);
        } else if (qtextbrowser_heightforwidth_callback != nullptr) {
            return qtextbrowser_heightforwidth_callback(this, param1);
        } else {
            return QTextBrowser::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qtextbrowser_hasheightforwidth_isbase) {
            qtextbrowser_hasheightforwidth_isbase = false;
            return QTextBrowser::hasHeightForWidth();
        } else if (qtextbrowser_hasheightforwidth_callback != nullptr) {
            return qtextbrowser_hasheightforwidth_callback();
        } else {
            return QTextBrowser::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qtextbrowser_paintengine_isbase) {
            qtextbrowser_paintengine_isbase = false;
            return QTextBrowser::paintEngine();
        } else if (qtextbrowser_paintengine_callback != nullptr) {
            return qtextbrowser_paintengine_callback();
        } else {
            return QTextBrowser::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qtextbrowser_enterevent_isbase) {
            qtextbrowser_enterevent_isbase = false;
            QTextBrowser::enterEvent(event);
        } else if (qtextbrowser_enterevent_callback != nullptr) {
            qtextbrowser_enterevent_callback(this, event);
        } else {
            QTextBrowser::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qtextbrowser_leaveevent_isbase) {
            qtextbrowser_leaveevent_isbase = false;
            QTextBrowser::leaveEvent(event);
        } else if (qtextbrowser_leaveevent_callback != nullptr) {
            qtextbrowser_leaveevent_callback(this, event);
        } else {
            QTextBrowser::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qtextbrowser_moveevent_isbase) {
            qtextbrowser_moveevent_isbase = false;
            QTextBrowser::moveEvent(event);
        } else if (qtextbrowser_moveevent_callback != nullptr) {
            qtextbrowser_moveevent_callback(this, event);
        } else {
            QTextBrowser::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qtextbrowser_closeevent_isbase) {
            qtextbrowser_closeevent_isbase = false;
            QTextBrowser::closeEvent(event);
        } else if (qtextbrowser_closeevent_callback != nullptr) {
            qtextbrowser_closeevent_callback(this, event);
        } else {
            QTextBrowser::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qtextbrowser_tabletevent_isbase) {
            qtextbrowser_tabletevent_isbase = false;
            QTextBrowser::tabletEvent(event);
        } else if (qtextbrowser_tabletevent_callback != nullptr) {
            qtextbrowser_tabletevent_callback(this, event);
        } else {
            QTextBrowser::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qtextbrowser_actionevent_isbase) {
            qtextbrowser_actionevent_isbase = false;
            QTextBrowser::actionEvent(event);
        } else if (qtextbrowser_actionevent_callback != nullptr) {
            qtextbrowser_actionevent_callback(this, event);
        } else {
            QTextBrowser::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qtextbrowser_hideevent_isbase) {
            qtextbrowser_hideevent_isbase = false;
            QTextBrowser::hideEvent(event);
        } else if (qtextbrowser_hideevent_callback != nullptr) {
            qtextbrowser_hideevent_callback(this, event);
        } else {
            QTextBrowser::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qtextbrowser_nativeevent_isbase) {
            qtextbrowser_nativeevent_isbase = false;
            return QTextBrowser::nativeEvent(eventType, message, result);
        } else if (qtextbrowser_nativeevent_callback != nullptr) {
            return qtextbrowser_nativeevent_callback(this, eventType, message, result);
        } else {
            return QTextBrowser::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qtextbrowser_metric_isbase) {
            qtextbrowser_metric_isbase = false;
            return QTextBrowser::metric(param1);
        } else if (qtextbrowser_metric_callback != nullptr) {
            return qtextbrowser_metric_callback(this, param1);
        } else {
            return QTextBrowser::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qtextbrowser_initpainter_isbase) {
            qtextbrowser_initpainter_isbase = false;
            QTextBrowser::initPainter(painter);
        } else if (qtextbrowser_initpainter_callback != nullptr) {
            qtextbrowser_initpainter_callback(this, painter);
        } else {
            QTextBrowser::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qtextbrowser_redirected_isbase) {
            qtextbrowser_redirected_isbase = false;
            return QTextBrowser::redirected(offset);
        } else if (qtextbrowser_redirected_callback != nullptr) {
            return qtextbrowser_redirected_callback(this, offset);
        } else {
            return QTextBrowser::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qtextbrowser_sharedpainter_isbase) {
            qtextbrowser_sharedpainter_isbase = false;
            return QTextBrowser::sharedPainter();
        } else if (qtextbrowser_sharedpainter_callback != nullptr) {
            return qtextbrowser_sharedpainter_callback();
        } else {
            return QTextBrowser::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtextbrowser_childevent_isbase) {
            qtextbrowser_childevent_isbase = false;
            QTextBrowser::childEvent(event);
        } else if (qtextbrowser_childevent_callback != nullptr) {
            qtextbrowser_childevent_callback(this, event);
        } else {
            QTextBrowser::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtextbrowser_customevent_isbase) {
            qtextbrowser_customevent_isbase = false;
            QTextBrowser::customEvent(event);
        } else if (qtextbrowser_customevent_callback != nullptr) {
            qtextbrowser_customevent_callback(this, event);
        } else {
            QTextBrowser::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtextbrowser_connectnotify_isbase) {
            qtextbrowser_connectnotify_isbase = false;
            QTextBrowser::connectNotify(signal);
        } else if (qtextbrowser_connectnotify_callback != nullptr) {
            qtextbrowser_connectnotify_callback(this, signal);
        } else {
            QTextBrowser::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtextbrowser_disconnectnotify_isbase) {
            qtextbrowser_disconnectnotify_isbase = false;
            QTextBrowser::disconnectNotify(signal);
        } else if (qtextbrowser_disconnectnotify_callback != nullptr) {
            qtextbrowser_disconnectnotify_callback(this, signal);
        } else {
            QTextBrowser::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void zoomInF(float range) {
        if (qtextbrowser_zoominf_isbase) {
            qtextbrowser_zoominf_isbase = false;
            QTextBrowser::zoomInF(range);
        } else if (qtextbrowser_zoominf_callback != nullptr) {
            qtextbrowser_zoominf_callback(this, range);
        } else {
            QTextBrowser::zoomInF(range);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setViewportMargins(int left, int top, int right, int bottom) {
        if (qtextbrowser_setviewportmargins_isbase) {
            qtextbrowser_setviewportmargins_isbase = false;
            QTextBrowser::setViewportMargins(left, top, right, bottom);
        } else if (qtextbrowser_setviewportmargins_callback != nullptr) {
            qtextbrowser_setviewportmargins_callback(this, left, top, right, bottom);
        } else {
            QTextBrowser::setViewportMargins(left, top, right, bottom);
        }
    }

    // Virtual method for C ABI access and custom callback
    QMargins viewportMargins() const {
        if (qtextbrowser_viewportmargins_isbase) {
            qtextbrowser_viewportmargins_isbase = false;
            return QTextBrowser::viewportMargins();
        } else if (qtextbrowser_viewportmargins_callback != nullptr) {
            return qtextbrowser_viewportmargins_callback();
        } else {
            return QTextBrowser::viewportMargins();
        }
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (qtextbrowser_drawframe_isbase) {
            qtextbrowser_drawframe_isbase = false;
            QTextBrowser::drawFrame(param1);
        } else if (qtextbrowser_drawframe_callback != nullptr) {
            qtextbrowser_drawframe_callback(this, param1);
        } else {
            QTextBrowser::drawFrame(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qtextbrowser_updatemicrofocus_isbase) {
            qtextbrowser_updatemicrofocus_isbase = false;
            QTextBrowser::updateMicroFocus();
        } else if (qtextbrowser_updatemicrofocus_callback != nullptr) {
            qtextbrowser_updatemicrofocus_callback();
        } else {
            QTextBrowser::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qtextbrowser_create_isbase) {
            qtextbrowser_create_isbase = false;
            QTextBrowser::create();
        } else if (qtextbrowser_create_callback != nullptr) {
            qtextbrowser_create_callback();
        } else {
            QTextBrowser::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qtextbrowser_destroy_isbase) {
            qtextbrowser_destroy_isbase = false;
            QTextBrowser::destroy();
        } else if (qtextbrowser_destroy_callback != nullptr) {
            qtextbrowser_destroy_callback();
        } else {
            QTextBrowser::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qtextbrowser_focusnextchild_isbase) {
            qtextbrowser_focusnextchild_isbase = false;
            return QTextBrowser::focusNextChild();
        } else if (qtextbrowser_focusnextchild_callback != nullptr) {
            return qtextbrowser_focusnextchild_callback();
        } else {
            return QTextBrowser::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qtextbrowser_focuspreviouschild_isbase) {
            qtextbrowser_focuspreviouschild_isbase = false;
            return QTextBrowser::focusPreviousChild();
        } else if (qtextbrowser_focuspreviouschild_callback != nullptr) {
            return qtextbrowser_focuspreviouschild_callback();
        } else {
            return QTextBrowser::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qtextbrowser_sender_isbase) {
            qtextbrowser_sender_isbase = false;
            return QTextBrowser::sender();
        } else if (qtextbrowser_sender_callback != nullptr) {
            return qtextbrowser_sender_callback();
        } else {
            return QTextBrowser::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qtextbrowser_sendersignalindex_isbase) {
            qtextbrowser_sendersignalindex_isbase = false;
            return QTextBrowser::senderSignalIndex();
        } else if (qtextbrowser_sendersignalindex_callback != nullptr) {
            return qtextbrowser_sendersignalindex_callback();
        } else {
            return QTextBrowser::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qtextbrowser_receivers_isbase) {
            qtextbrowser_receivers_isbase = false;
            return QTextBrowser::receivers(signal);
        } else if (qtextbrowser_receivers_callback != nullptr) {
            return qtextbrowser_receivers_callback(this, signal);
        } else {
            return QTextBrowser::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qtextbrowser_issignalconnected_isbase) {
            qtextbrowser_issignalconnected_isbase = false;
            return QTextBrowser::isSignalConnected(signal);
        } else if (qtextbrowser_issignalconnected_callback != nullptr) {
            return qtextbrowser_issignalconnected_callback(this, signal);
        } else {
            return QTextBrowser::isSignalConnected(signal);
        }
    }
};

#endif
