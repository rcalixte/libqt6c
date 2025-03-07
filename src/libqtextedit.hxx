#pragma once
#ifndef SRCC_LIBVIRTUALQTEXTEDIT_H
#define SRCC_LIBVIRTUALQTEXTEDIT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QTextEdit so that we can call protected methods
class VirtualQTextEdit : public QTextEdit {

  public:
    // Virtual class public types (including callbacks)
    using QTextEdit_Metacall_Callback = int (*)(QTextEdit*, QMetaObject::Call, int, void**);
    using QTextEdit_LoadResource_Callback = QVariant (*)(QTextEdit*, int, const QUrl&);
    using QTextEdit_InputMethodQuery_Callback = QVariant (*)(const QTextEdit*, Qt::InputMethodQuery);
    using QTextEdit_Event_Callback = bool (*)(QTextEdit*, QEvent*);
    using QTextEdit_TimerEvent_Callback = void (*)(QTextEdit*, QTimerEvent*);
    using QTextEdit_KeyPressEvent_Callback = void (*)(QTextEdit*, QKeyEvent*);
    using QTextEdit_KeyReleaseEvent_Callback = void (*)(QTextEdit*, QKeyEvent*);
    using QTextEdit_ResizeEvent_Callback = void (*)(QTextEdit*, QResizeEvent*);
    using QTextEdit_PaintEvent_Callback = void (*)(QTextEdit*, QPaintEvent*);
    using QTextEdit_MousePressEvent_Callback = void (*)(QTextEdit*, QMouseEvent*);
    using QTextEdit_MouseMoveEvent_Callback = void (*)(QTextEdit*, QMouseEvent*);
    using QTextEdit_MouseReleaseEvent_Callback = void (*)(QTextEdit*, QMouseEvent*);
    using QTextEdit_MouseDoubleClickEvent_Callback = void (*)(QTextEdit*, QMouseEvent*);
    using QTextEdit_FocusNextPrevChild_Callback = bool (*)(QTextEdit*, bool);
    using QTextEdit_ContextMenuEvent_Callback = void (*)(QTextEdit*, QContextMenuEvent*);
    using QTextEdit_DragEnterEvent_Callback = void (*)(QTextEdit*, QDragEnterEvent*);
    using QTextEdit_DragLeaveEvent_Callback = void (*)(QTextEdit*, QDragLeaveEvent*);
    using QTextEdit_DragMoveEvent_Callback = void (*)(QTextEdit*, QDragMoveEvent*);
    using QTextEdit_DropEvent_Callback = void (*)(QTextEdit*, QDropEvent*);
    using QTextEdit_FocusInEvent_Callback = void (*)(QTextEdit*, QFocusEvent*);
    using QTextEdit_FocusOutEvent_Callback = void (*)(QTextEdit*, QFocusEvent*);
    using QTextEdit_ShowEvent_Callback = void (*)(QTextEdit*, QShowEvent*);
    using QTextEdit_ChangeEvent_Callback = void (*)(QTextEdit*, QEvent*);
    using QTextEdit_WheelEvent_Callback = void (*)(QTextEdit*, QWheelEvent*);
    using QTextEdit_CreateMimeDataFromSelection_Callback = QMimeData* (*)();
    using QTextEdit_CanInsertFromMimeData_Callback = bool (*)(const QTextEdit*, const QMimeData*);
    using QTextEdit_InsertFromMimeData_Callback = void (*)(QTextEdit*, const QMimeData*);
    using QTextEdit_InputMethodEvent_Callback = void (*)(QTextEdit*, QInputMethodEvent*);
    using QTextEdit_ScrollContentsBy_Callback = void (*)(QTextEdit*, int, int);
    using QTextEdit_DoSetTextCursor_Callback = void (*)(QTextEdit*, const QTextCursor&);
    using QTextEdit_MinimumSizeHint_Callback = QSize (*)();
    using QTextEdit_SizeHint_Callback = QSize (*)();
    using QTextEdit_SetupViewport_Callback = void (*)(QTextEdit*, QWidget*);
    using QTextEdit_EventFilter_Callback = bool (*)(QTextEdit*, QObject*, QEvent*);
    using QTextEdit_ViewportEvent_Callback = bool (*)(QTextEdit*, QEvent*);
    using QTextEdit_ViewportSizeHint_Callback = QSize (*)();
    using QTextEdit_InitStyleOption_Callback = void (*)(const QTextEdit*, QStyleOptionFrame*);
    using QTextEdit_DevType_Callback = int (*)();
    using QTextEdit_SetVisible_Callback = void (*)(QTextEdit*, bool);
    using QTextEdit_HeightForWidth_Callback = int (*)(const QTextEdit*, int);
    using QTextEdit_HasHeightForWidth_Callback = bool (*)();
    using QTextEdit_PaintEngine_Callback = QPaintEngine* (*)();
    using QTextEdit_EnterEvent_Callback = void (*)(QTextEdit*, QEnterEvent*);
    using QTextEdit_LeaveEvent_Callback = void (*)(QTextEdit*, QEvent*);
    using QTextEdit_MoveEvent_Callback = void (*)(QTextEdit*, QMoveEvent*);
    using QTextEdit_CloseEvent_Callback = void (*)(QTextEdit*, QCloseEvent*);
    using QTextEdit_TabletEvent_Callback = void (*)(QTextEdit*, QTabletEvent*);
    using QTextEdit_ActionEvent_Callback = void (*)(QTextEdit*, QActionEvent*);
    using QTextEdit_HideEvent_Callback = void (*)(QTextEdit*, QHideEvent*);
    using QTextEdit_NativeEvent_Callback = bool (*)(QTextEdit*, const QByteArray&, void*, qintptr*);
    using QTextEdit_Metric_Callback = int (*)(const QTextEdit*, QPaintDevice::PaintDeviceMetric);
    using QTextEdit_InitPainter_Callback = void (*)(const QTextEdit*, QPainter*);
    using QTextEdit_Redirected_Callback = QPaintDevice* (*)(const QTextEdit*, QPoint*);
    using QTextEdit_SharedPainter_Callback = QPainter* (*)();
    using QTextEdit_ChildEvent_Callback = void (*)(QTextEdit*, QChildEvent*);
    using QTextEdit_CustomEvent_Callback = void (*)(QTextEdit*, QEvent*);
    using QTextEdit_ConnectNotify_Callback = void (*)(QTextEdit*, const QMetaMethod&);
    using QTextEdit_DisconnectNotify_Callback = void (*)(QTextEdit*, const QMetaMethod&);
    using QTextEdit_ZoomInF_Callback = void (*)(QTextEdit*, float);
    using QTextEdit_SetViewportMargins_Callback = void (*)(QTextEdit*, int, int, int, int);
    using QTextEdit_ViewportMargins_Callback = QMargins (*)();
    using QTextEdit_DrawFrame_Callback = void (*)(QTextEdit*, QPainter*);
    using QTextEdit_UpdateMicroFocus_Callback = void (*)();
    using QTextEdit_Create_Callback = void (*)();
    using QTextEdit_Destroy_Callback = void (*)();
    using QTextEdit_FocusNextChild_Callback = bool (*)();
    using QTextEdit_FocusPreviousChild_Callback = bool (*)();
    using QTextEdit_Sender_Callback = QObject* (*)();
    using QTextEdit_SenderSignalIndex_Callback = int (*)();
    using QTextEdit_Receivers_Callback = int (*)(const QTextEdit*, const char*);
    using QTextEdit_IsSignalConnected_Callback = bool (*)(const QTextEdit*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QTextEdit_Metacall_Callback qtextedit_metacall_callback = nullptr;
    QTextEdit_LoadResource_Callback qtextedit_loadresource_callback = nullptr;
    QTextEdit_InputMethodQuery_Callback qtextedit_inputmethodquery_callback = nullptr;
    QTextEdit_Event_Callback qtextedit_event_callback = nullptr;
    QTextEdit_TimerEvent_Callback qtextedit_timerevent_callback = nullptr;
    QTextEdit_KeyPressEvent_Callback qtextedit_keypressevent_callback = nullptr;
    QTextEdit_KeyReleaseEvent_Callback qtextedit_keyreleaseevent_callback = nullptr;
    QTextEdit_ResizeEvent_Callback qtextedit_resizeevent_callback = nullptr;
    QTextEdit_PaintEvent_Callback qtextedit_paintevent_callback = nullptr;
    QTextEdit_MousePressEvent_Callback qtextedit_mousepressevent_callback = nullptr;
    QTextEdit_MouseMoveEvent_Callback qtextedit_mousemoveevent_callback = nullptr;
    QTextEdit_MouseReleaseEvent_Callback qtextedit_mousereleaseevent_callback = nullptr;
    QTextEdit_MouseDoubleClickEvent_Callback qtextedit_mousedoubleclickevent_callback = nullptr;
    QTextEdit_FocusNextPrevChild_Callback qtextedit_focusnextprevchild_callback = nullptr;
    QTextEdit_ContextMenuEvent_Callback qtextedit_contextmenuevent_callback = nullptr;
    QTextEdit_DragEnterEvent_Callback qtextedit_dragenterevent_callback = nullptr;
    QTextEdit_DragLeaveEvent_Callback qtextedit_dragleaveevent_callback = nullptr;
    QTextEdit_DragMoveEvent_Callback qtextedit_dragmoveevent_callback = nullptr;
    QTextEdit_DropEvent_Callback qtextedit_dropevent_callback = nullptr;
    QTextEdit_FocusInEvent_Callback qtextedit_focusinevent_callback = nullptr;
    QTextEdit_FocusOutEvent_Callback qtextedit_focusoutevent_callback = nullptr;
    QTextEdit_ShowEvent_Callback qtextedit_showevent_callback = nullptr;
    QTextEdit_ChangeEvent_Callback qtextedit_changeevent_callback = nullptr;
    QTextEdit_WheelEvent_Callback qtextedit_wheelevent_callback = nullptr;
    QTextEdit_CreateMimeDataFromSelection_Callback qtextedit_createmimedatafromselection_callback = nullptr;
    QTextEdit_CanInsertFromMimeData_Callback qtextedit_caninsertfrommimedata_callback = nullptr;
    QTextEdit_InsertFromMimeData_Callback qtextedit_insertfrommimedata_callback = nullptr;
    QTextEdit_InputMethodEvent_Callback qtextedit_inputmethodevent_callback = nullptr;
    QTextEdit_ScrollContentsBy_Callback qtextedit_scrollcontentsby_callback = nullptr;
    QTextEdit_DoSetTextCursor_Callback qtextedit_dosettextcursor_callback = nullptr;
    QTextEdit_MinimumSizeHint_Callback qtextedit_minimumsizehint_callback = nullptr;
    QTextEdit_SizeHint_Callback qtextedit_sizehint_callback = nullptr;
    QTextEdit_SetupViewport_Callback qtextedit_setupviewport_callback = nullptr;
    QTextEdit_EventFilter_Callback qtextedit_eventfilter_callback = nullptr;
    QTextEdit_ViewportEvent_Callback qtextedit_viewportevent_callback = nullptr;
    QTextEdit_ViewportSizeHint_Callback qtextedit_viewportsizehint_callback = nullptr;
    QTextEdit_InitStyleOption_Callback qtextedit_initstyleoption_callback = nullptr;
    QTextEdit_DevType_Callback qtextedit_devtype_callback = nullptr;
    QTextEdit_SetVisible_Callback qtextedit_setvisible_callback = nullptr;
    QTextEdit_HeightForWidth_Callback qtextedit_heightforwidth_callback = nullptr;
    QTextEdit_HasHeightForWidth_Callback qtextedit_hasheightforwidth_callback = nullptr;
    QTextEdit_PaintEngine_Callback qtextedit_paintengine_callback = nullptr;
    QTextEdit_EnterEvent_Callback qtextedit_enterevent_callback = nullptr;
    QTextEdit_LeaveEvent_Callback qtextedit_leaveevent_callback = nullptr;
    QTextEdit_MoveEvent_Callback qtextedit_moveevent_callback = nullptr;
    QTextEdit_CloseEvent_Callback qtextedit_closeevent_callback = nullptr;
    QTextEdit_TabletEvent_Callback qtextedit_tabletevent_callback = nullptr;
    QTextEdit_ActionEvent_Callback qtextedit_actionevent_callback = nullptr;
    QTextEdit_HideEvent_Callback qtextedit_hideevent_callback = nullptr;
    QTextEdit_NativeEvent_Callback qtextedit_nativeevent_callback = nullptr;
    QTextEdit_Metric_Callback qtextedit_metric_callback = nullptr;
    QTextEdit_InitPainter_Callback qtextedit_initpainter_callback = nullptr;
    QTextEdit_Redirected_Callback qtextedit_redirected_callback = nullptr;
    QTextEdit_SharedPainter_Callback qtextedit_sharedpainter_callback = nullptr;
    QTextEdit_ChildEvent_Callback qtextedit_childevent_callback = nullptr;
    QTextEdit_CustomEvent_Callback qtextedit_customevent_callback = nullptr;
    QTextEdit_ConnectNotify_Callback qtextedit_connectnotify_callback = nullptr;
    QTextEdit_DisconnectNotify_Callback qtextedit_disconnectnotify_callback = nullptr;
    QTextEdit_ZoomInF_Callback qtextedit_zoominf_callback = nullptr;
    QTextEdit_SetViewportMargins_Callback qtextedit_setviewportmargins_callback = nullptr;
    QTextEdit_ViewportMargins_Callback qtextedit_viewportmargins_callback = nullptr;
    QTextEdit_DrawFrame_Callback qtextedit_drawframe_callback = nullptr;
    QTextEdit_UpdateMicroFocus_Callback qtextedit_updatemicrofocus_callback = nullptr;
    QTextEdit_Create_Callback qtextedit_create_callback = nullptr;
    QTextEdit_Destroy_Callback qtextedit_destroy_callback = nullptr;
    QTextEdit_FocusNextChild_Callback qtextedit_focusnextchild_callback = nullptr;
    QTextEdit_FocusPreviousChild_Callback qtextedit_focuspreviouschild_callback = nullptr;
    QTextEdit_Sender_Callback qtextedit_sender_callback = nullptr;
    QTextEdit_SenderSignalIndex_Callback qtextedit_sendersignalindex_callback = nullptr;
    QTextEdit_Receivers_Callback qtextedit_receivers_callback = nullptr;
    QTextEdit_IsSignalConnected_Callback qtextedit_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qtextedit_metacall_isbase = false;
    mutable bool qtextedit_loadresource_isbase = false;
    mutable bool qtextedit_inputmethodquery_isbase = false;
    mutable bool qtextedit_event_isbase = false;
    mutable bool qtextedit_timerevent_isbase = false;
    mutable bool qtextedit_keypressevent_isbase = false;
    mutable bool qtextedit_keyreleaseevent_isbase = false;
    mutable bool qtextedit_resizeevent_isbase = false;
    mutable bool qtextedit_paintevent_isbase = false;
    mutable bool qtextedit_mousepressevent_isbase = false;
    mutable bool qtextedit_mousemoveevent_isbase = false;
    mutable bool qtextedit_mousereleaseevent_isbase = false;
    mutable bool qtextedit_mousedoubleclickevent_isbase = false;
    mutable bool qtextedit_focusnextprevchild_isbase = false;
    mutable bool qtextedit_contextmenuevent_isbase = false;
    mutable bool qtextedit_dragenterevent_isbase = false;
    mutable bool qtextedit_dragleaveevent_isbase = false;
    mutable bool qtextedit_dragmoveevent_isbase = false;
    mutable bool qtextedit_dropevent_isbase = false;
    mutable bool qtextedit_focusinevent_isbase = false;
    mutable bool qtextedit_focusoutevent_isbase = false;
    mutable bool qtextedit_showevent_isbase = false;
    mutable bool qtextedit_changeevent_isbase = false;
    mutable bool qtextedit_wheelevent_isbase = false;
    mutable bool qtextedit_createmimedatafromselection_isbase = false;
    mutable bool qtextedit_caninsertfrommimedata_isbase = false;
    mutable bool qtextedit_insertfrommimedata_isbase = false;
    mutable bool qtextedit_inputmethodevent_isbase = false;
    mutable bool qtextedit_scrollcontentsby_isbase = false;
    mutable bool qtextedit_dosettextcursor_isbase = false;
    mutable bool qtextedit_minimumsizehint_isbase = false;
    mutable bool qtextedit_sizehint_isbase = false;
    mutable bool qtextedit_setupviewport_isbase = false;
    mutable bool qtextedit_eventfilter_isbase = false;
    mutable bool qtextedit_viewportevent_isbase = false;
    mutable bool qtextedit_viewportsizehint_isbase = false;
    mutable bool qtextedit_initstyleoption_isbase = false;
    mutable bool qtextedit_devtype_isbase = false;
    mutable bool qtextedit_setvisible_isbase = false;
    mutable bool qtextedit_heightforwidth_isbase = false;
    mutable bool qtextedit_hasheightforwidth_isbase = false;
    mutable bool qtextedit_paintengine_isbase = false;
    mutable bool qtextedit_enterevent_isbase = false;
    mutable bool qtextedit_leaveevent_isbase = false;
    mutable bool qtextedit_moveevent_isbase = false;
    mutable bool qtextedit_closeevent_isbase = false;
    mutable bool qtextedit_tabletevent_isbase = false;
    mutable bool qtextedit_actionevent_isbase = false;
    mutable bool qtextedit_hideevent_isbase = false;
    mutable bool qtextedit_nativeevent_isbase = false;
    mutable bool qtextedit_metric_isbase = false;
    mutable bool qtextedit_initpainter_isbase = false;
    mutable bool qtextedit_redirected_isbase = false;
    mutable bool qtextedit_sharedpainter_isbase = false;
    mutable bool qtextedit_childevent_isbase = false;
    mutable bool qtextedit_customevent_isbase = false;
    mutable bool qtextedit_connectnotify_isbase = false;
    mutable bool qtextedit_disconnectnotify_isbase = false;
    mutable bool qtextedit_zoominf_isbase = false;
    mutable bool qtextedit_setviewportmargins_isbase = false;
    mutable bool qtextedit_viewportmargins_isbase = false;
    mutable bool qtextedit_drawframe_isbase = false;
    mutable bool qtextedit_updatemicrofocus_isbase = false;
    mutable bool qtextedit_create_isbase = false;
    mutable bool qtextedit_destroy_isbase = false;
    mutable bool qtextedit_focusnextchild_isbase = false;
    mutable bool qtextedit_focuspreviouschild_isbase = false;
    mutable bool qtextedit_sender_isbase = false;
    mutable bool qtextedit_sendersignalindex_isbase = false;
    mutable bool qtextedit_receivers_isbase = false;
    mutable bool qtextedit_issignalconnected_isbase = false;

  public:
    VirtualQTextEdit(QWidget* parent) : QTextEdit(parent){};
    VirtualQTextEdit() : QTextEdit(){};
    VirtualQTextEdit(const QString& text) : QTextEdit(text){};
    VirtualQTextEdit(const QString& text, QWidget* parent) : QTextEdit(text, parent){};

    ~VirtualQTextEdit() {
        qtextedit_metacall_callback = nullptr;
        qtextedit_loadresource_callback = nullptr;
        qtextedit_inputmethodquery_callback = nullptr;
        qtextedit_event_callback = nullptr;
        qtextedit_timerevent_callback = nullptr;
        qtextedit_keypressevent_callback = nullptr;
        qtextedit_keyreleaseevent_callback = nullptr;
        qtextedit_resizeevent_callback = nullptr;
        qtextedit_paintevent_callback = nullptr;
        qtextedit_mousepressevent_callback = nullptr;
        qtextedit_mousemoveevent_callback = nullptr;
        qtextedit_mousereleaseevent_callback = nullptr;
        qtextedit_mousedoubleclickevent_callback = nullptr;
        qtextedit_focusnextprevchild_callback = nullptr;
        qtextedit_contextmenuevent_callback = nullptr;
        qtextedit_dragenterevent_callback = nullptr;
        qtextedit_dragleaveevent_callback = nullptr;
        qtextedit_dragmoveevent_callback = nullptr;
        qtextedit_dropevent_callback = nullptr;
        qtextedit_focusinevent_callback = nullptr;
        qtextedit_focusoutevent_callback = nullptr;
        qtextedit_showevent_callback = nullptr;
        qtextedit_changeevent_callback = nullptr;
        qtextedit_wheelevent_callback = nullptr;
        qtextedit_createmimedatafromselection_callback = nullptr;
        qtextedit_caninsertfrommimedata_callback = nullptr;
        qtextedit_insertfrommimedata_callback = nullptr;
        qtextedit_inputmethodevent_callback = nullptr;
        qtextedit_scrollcontentsby_callback = nullptr;
        qtextedit_dosettextcursor_callback = nullptr;
        qtextedit_minimumsizehint_callback = nullptr;
        qtextedit_sizehint_callback = nullptr;
        qtextedit_setupviewport_callback = nullptr;
        qtextedit_eventfilter_callback = nullptr;
        qtextedit_viewportevent_callback = nullptr;
        qtextedit_viewportsizehint_callback = nullptr;
        qtextedit_initstyleoption_callback = nullptr;
        qtextedit_devtype_callback = nullptr;
        qtextedit_setvisible_callback = nullptr;
        qtextedit_heightforwidth_callback = nullptr;
        qtextedit_hasheightforwidth_callback = nullptr;
        qtextedit_paintengine_callback = nullptr;
        qtextedit_enterevent_callback = nullptr;
        qtextedit_leaveevent_callback = nullptr;
        qtextedit_moveevent_callback = nullptr;
        qtextedit_closeevent_callback = nullptr;
        qtextedit_tabletevent_callback = nullptr;
        qtextedit_actionevent_callback = nullptr;
        qtextedit_hideevent_callback = nullptr;
        qtextedit_nativeevent_callback = nullptr;
        qtextedit_metric_callback = nullptr;
        qtextedit_initpainter_callback = nullptr;
        qtextedit_redirected_callback = nullptr;
        qtextedit_sharedpainter_callback = nullptr;
        qtextedit_childevent_callback = nullptr;
        qtextedit_customevent_callback = nullptr;
        qtextedit_connectnotify_callback = nullptr;
        qtextedit_disconnectnotify_callback = nullptr;
        qtextedit_zoominf_callback = nullptr;
        qtextedit_setviewportmargins_callback = nullptr;
        qtextedit_viewportmargins_callback = nullptr;
        qtextedit_drawframe_callback = nullptr;
        qtextedit_updatemicrofocus_callback = nullptr;
        qtextedit_create_callback = nullptr;
        qtextedit_destroy_callback = nullptr;
        qtextedit_focusnextchild_callback = nullptr;
        qtextedit_focuspreviouschild_callback = nullptr;
        qtextedit_sender_callback = nullptr;
        qtextedit_sendersignalindex_callback = nullptr;
        qtextedit_receivers_callback = nullptr;
        qtextedit_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQTextEdit_Metacall_Callback(QTextEdit_Metacall_Callback cb) { qtextedit_metacall_callback = cb; }
    void setQTextEdit_LoadResource_Callback(QTextEdit_LoadResource_Callback cb) { qtextedit_loadresource_callback = cb; }
    void setQTextEdit_InputMethodQuery_Callback(QTextEdit_InputMethodQuery_Callback cb) { qtextedit_inputmethodquery_callback = cb; }
    void setQTextEdit_Event_Callback(QTextEdit_Event_Callback cb) { qtextedit_event_callback = cb; }
    void setQTextEdit_TimerEvent_Callback(QTextEdit_TimerEvent_Callback cb) { qtextedit_timerevent_callback = cb; }
    void setQTextEdit_KeyPressEvent_Callback(QTextEdit_KeyPressEvent_Callback cb) { qtextedit_keypressevent_callback = cb; }
    void setQTextEdit_KeyReleaseEvent_Callback(QTextEdit_KeyReleaseEvent_Callback cb) { qtextedit_keyreleaseevent_callback = cb; }
    void setQTextEdit_ResizeEvent_Callback(QTextEdit_ResizeEvent_Callback cb) { qtextedit_resizeevent_callback = cb; }
    void setQTextEdit_PaintEvent_Callback(QTextEdit_PaintEvent_Callback cb) { qtextedit_paintevent_callback = cb; }
    void setQTextEdit_MousePressEvent_Callback(QTextEdit_MousePressEvent_Callback cb) { qtextedit_mousepressevent_callback = cb; }
    void setQTextEdit_MouseMoveEvent_Callback(QTextEdit_MouseMoveEvent_Callback cb) { qtextedit_mousemoveevent_callback = cb; }
    void setQTextEdit_MouseReleaseEvent_Callback(QTextEdit_MouseReleaseEvent_Callback cb) { qtextedit_mousereleaseevent_callback = cb; }
    void setQTextEdit_MouseDoubleClickEvent_Callback(QTextEdit_MouseDoubleClickEvent_Callback cb) { qtextedit_mousedoubleclickevent_callback = cb; }
    void setQTextEdit_FocusNextPrevChild_Callback(QTextEdit_FocusNextPrevChild_Callback cb) { qtextedit_focusnextprevchild_callback = cb; }
    void setQTextEdit_ContextMenuEvent_Callback(QTextEdit_ContextMenuEvent_Callback cb) { qtextedit_contextmenuevent_callback = cb; }
    void setQTextEdit_DragEnterEvent_Callback(QTextEdit_DragEnterEvent_Callback cb) { qtextedit_dragenterevent_callback = cb; }
    void setQTextEdit_DragLeaveEvent_Callback(QTextEdit_DragLeaveEvent_Callback cb) { qtextedit_dragleaveevent_callback = cb; }
    void setQTextEdit_DragMoveEvent_Callback(QTextEdit_DragMoveEvent_Callback cb) { qtextedit_dragmoveevent_callback = cb; }
    void setQTextEdit_DropEvent_Callback(QTextEdit_DropEvent_Callback cb) { qtextedit_dropevent_callback = cb; }
    void setQTextEdit_FocusInEvent_Callback(QTextEdit_FocusInEvent_Callback cb) { qtextedit_focusinevent_callback = cb; }
    void setQTextEdit_FocusOutEvent_Callback(QTextEdit_FocusOutEvent_Callback cb) { qtextedit_focusoutevent_callback = cb; }
    void setQTextEdit_ShowEvent_Callback(QTextEdit_ShowEvent_Callback cb) { qtextedit_showevent_callback = cb; }
    void setQTextEdit_ChangeEvent_Callback(QTextEdit_ChangeEvent_Callback cb) { qtextedit_changeevent_callback = cb; }
    void setQTextEdit_WheelEvent_Callback(QTextEdit_WheelEvent_Callback cb) { qtextedit_wheelevent_callback = cb; }
    void setQTextEdit_CreateMimeDataFromSelection_Callback(QTextEdit_CreateMimeDataFromSelection_Callback cb) { qtextedit_createmimedatafromselection_callback = cb; }
    void setQTextEdit_CanInsertFromMimeData_Callback(QTextEdit_CanInsertFromMimeData_Callback cb) { qtextedit_caninsertfrommimedata_callback = cb; }
    void setQTextEdit_InsertFromMimeData_Callback(QTextEdit_InsertFromMimeData_Callback cb) { qtextedit_insertfrommimedata_callback = cb; }
    void setQTextEdit_InputMethodEvent_Callback(QTextEdit_InputMethodEvent_Callback cb) { qtextedit_inputmethodevent_callback = cb; }
    void setQTextEdit_ScrollContentsBy_Callback(QTextEdit_ScrollContentsBy_Callback cb) { qtextedit_scrollcontentsby_callback = cb; }
    void setQTextEdit_DoSetTextCursor_Callback(QTextEdit_DoSetTextCursor_Callback cb) { qtextedit_dosettextcursor_callback = cb; }
    void setQTextEdit_MinimumSizeHint_Callback(QTextEdit_MinimumSizeHint_Callback cb) { qtextedit_minimumsizehint_callback = cb; }
    void setQTextEdit_SizeHint_Callback(QTextEdit_SizeHint_Callback cb) { qtextedit_sizehint_callback = cb; }
    void setQTextEdit_SetupViewport_Callback(QTextEdit_SetupViewport_Callback cb) { qtextedit_setupviewport_callback = cb; }
    void setQTextEdit_EventFilter_Callback(QTextEdit_EventFilter_Callback cb) { qtextedit_eventfilter_callback = cb; }
    void setQTextEdit_ViewportEvent_Callback(QTextEdit_ViewportEvent_Callback cb) { qtextedit_viewportevent_callback = cb; }
    void setQTextEdit_ViewportSizeHint_Callback(QTextEdit_ViewportSizeHint_Callback cb) { qtextedit_viewportsizehint_callback = cb; }
    void setQTextEdit_InitStyleOption_Callback(QTextEdit_InitStyleOption_Callback cb) { qtextedit_initstyleoption_callback = cb; }
    void setQTextEdit_DevType_Callback(QTextEdit_DevType_Callback cb) { qtextedit_devtype_callback = cb; }
    void setQTextEdit_SetVisible_Callback(QTextEdit_SetVisible_Callback cb) { qtextedit_setvisible_callback = cb; }
    void setQTextEdit_HeightForWidth_Callback(QTextEdit_HeightForWidth_Callback cb) { qtextedit_heightforwidth_callback = cb; }
    void setQTextEdit_HasHeightForWidth_Callback(QTextEdit_HasHeightForWidth_Callback cb) { qtextedit_hasheightforwidth_callback = cb; }
    void setQTextEdit_PaintEngine_Callback(QTextEdit_PaintEngine_Callback cb) { qtextedit_paintengine_callback = cb; }
    void setQTextEdit_EnterEvent_Callback(QTextEdit_EnterEvent_Callback cb) { qtextedit_enterevent_callback = cb; }
    void setQTextEdit_LeaveEvent_Callback(QTextEdit_LeaveEvent_Callback cb) { qtextedit_leaveevent_callback = cb; }
    void setQTextEdit_MoveEvent_Callback(QTextEdit_MoveEvent_Callback cb) { qtextedit_moveevent_callback = cb; }
    void setQTextEdit_CloseEvent_Callback(QTextEdit_CloseEvent_Callback cb) { qtextedit_closeevent_callback = cb; }
    void setQTextEdit_TabletEvent_Callback(QTextEdit_TabletEvent_Callback cb) { qtextedit_tabletevent_callback = cb; }
    void setQTextEdit_ActionEvent_Callback(QTextEdit_ActionEvent_Callback cb) { qtextedit_actionevent_callback = cb; }
    void setQTextEdit_HideEvent_Callback(QTextEdit_HideEvent_Callback cb) { qtextedit_hideevent_callback = cb; }
    void setQTextEdit_NativeEvent_Callback(QTextEdit_NativeEvent_Callback cb) { qtextedit_nativeevent_callback = cb; }
    void setQTextEdit_Metric_Callback(QTextEdit_Metric_Callback cb) { qtextedit_metric_callback = cb; }
    void setQTextEdit_InitPainter_Callback(QTextEdit_InitPainter_Callback cb) { qtextedit_initpainter_callback = cb; }
    void setQTextEdit_Redirected_Callback(QTextEdit_Redirected_Callback cb) { qtextedit_redirected_callback = cb; }
    void setQTextEdit_SharedPainter_Callback(QTextEdit_SharedPainter_Callback cb) { qtextedit_sharedpainter_callback = cb; }
    void setQTextEdit_ChildEvent_Callback(QTextEdit_ChildEvent_Callback cb) { qtextedit_childevent_callback = cb; }
    void setQTextEdit_CustomEvent_Callback(QTextEdit_CustomEvent_Callback cb) { qtextedit_customevent_callback = cb; }
    void setQTextEdit_ConnectNotify_Callback(QTextEdit_ConnectNotify_Callback cb) { qtextedit_connectnotify_callback = cb; }
    void setQTextEdit_DisconnectNotify_Callback(QTextEdit_DisconnectNotify_Callback cb) { qtextedit_disconnectnotify_callback = cb; }
    void setQTextEdit_ZoomInF_Callback(QTextEdit_ZoomInF_Callback cb) { qtextedit_zoominf_callback = cb; }
    void setQTextEdit_SetViewportMargins_Callback(QTextEdit_SetViewportMargins_Callback cb) { qtextedit_setviewportmargins_callback = cb; }
    void setQTextEdit_ViewportMargins_Callback(QTextEdit_ViewportMargins_Callback cb) { qtextedit_viewportmargins_callback = cb; }
    void setQTextEdit_DrawFrame_Callback(QTextEdit_DrawFrame_Callback cb) { qtextedit_drawframe_callback = cb; }
    void setQTextEdit_UpdateMicroFocus_Callback(QTextEdit_UpdateMicroFocus_Callback cb) { qtextedit_updatemicrofocus_callback = cb; }
    void setQTextEdit_Create_Callback(QTextEdit_Create_Callback cb) { qtextedit_create_callback = cb; }
    void setQTextEdit_Destroy_Callback(QTextEdit_Destroy_Callback cb) { qtextedit_destroy_callback = cb; }
    void setQTextEdit_FocusNextChild_Callback(QTextEdit_FocusNextChild_Callback cb) { qtextedit_focusnextchild_callback = cb; }
    void setQTextEdit_FocusPreviousChild_Callback(QTextEdit_FocusPreviousChild_Callback cb) { qtextedit_focuspreviouschild_callback = cb; }
    void setQTextEdit_Sender_Callback(QTextEdit_Sender_Callback cb) { qtextedit_sender_callback = cb; }
    void setQTextEdit_SenderSignalIndex_Callback(QTextEdit_SenderSignalIndex_Callback cb) { qtextedit_sendersignalindex_callback = cb; }
    void setQTextEdit_Receivers_Callback(QTextEdit_Receivers_Callback cb) { qtextedit_receivers_callback = cb; }
    void setQTextEdit_IsSignalConnected_Callback(QTextEdit_IsSignalConnected_Callback cb) { qtextedit_issignalconnected_callback = cb; }

    // Base flag setters
    void setQTextEdit_Metacall_IsBase(bool value) const { qtextedit_metacall_isbase = value; }
    void setQTextEdit_LoadResource_IsBase(bool value) const { qtextedit_loadresource_isbase = value; }
    void setQTextEdit_InputMethodQuery_IsBase(bool value) const { qtextedit_inputmethodquery_isbase = value; }
    void setQTextEdit_Event_IsBase(bool value) const { qtextedit_event_isbase = value; }
    void setQTextEdit_TimerEvent_IsBase(bool value) const { qtextedit_timerevent_isbase = value; }
    void setQTextEdit_KeyPressEvent_IsBase(bool value) const { qtextedit_keypressevent_isbase = value; }
    void setQTextEdit_KeyReleaseEvent_IsBase(bool value) const { qtextedit_keyreleaseevent_isbase = value; }
    void setQTextEdit_ResizeEvent_IsBase(bool value) const { qtextedit_resizeevent_isbase = value; }
    void setQTextEdit_PaintEvent_IsBase(bool value) const { qtextedit_paintevent_isbase = value; }
    void setQTextEdit_MousePressEvent_IsBase(bool value) const { qtextedit_mousepressevent_isbase = value; }
    void setQTextEdit_MouseMoveEvent_IsBase(bool value) const { qtextedit_mousemoveevent_isbase = value; }
    void setQTextEdit_MouseReleaseEvent_IsBase(bool value) const { qtextedit_mousereleaseevent_isbase = value; }
    void setQTextEdit_MouseDoubleClickEvent_IsBase(bool value) const { qtextedit_mousedoubleclickevent_isbase = value; }
    void setQTextEdit_FocusNextPrevChild_IsBase(bool value) const { qtextedit_focusnextprevchild_isbase = value; }
    void setQTextEdit_ContextMenuEvent_IsBase(bool value) const { qtextedit_contextmenuevent_isbase = value; }
    void setQTextEdit_DragEnterEvent_IsBase(bool value) const { qtextedit_dragenterevent_isbase = value; }
    void setQTextEdit_DragLeaveEvent_IsBase(bool value) const { qtextedit_dragleaveevent_isbase = value; }
    void setQTextEdit_DragMoveEvent_IsBase(bool value) const { qtextedit_dragmoveevent_isbase = value; }
    void setQTextEdit_DropEvent_IsBase(bool value) const { qtextedit_dropevent_isbase = value; }
    void setQTextEdit_FocusInEvent_IsBase(bool value) const { qtextedit_focusinevent_isbase = value; }
    void setQTextEdit_FocusOutEvent_IsBase(bool value) const { qtextedit_focusoutevent_isbase = value; }
    void setQTextEdit_ShowEvent_IsBase(bool value) const { qtextedit_showevent_isbase = value; }
    void setQTextEdit_ChangeEvent_IsBase(bool value) const { qtextedit_changeevent_isbase = value; }
    void setQTextEdit_WheelEvent_IsBase(bool value) const { qtextedit_wheelevent_isbase = value; }
    void setQTextEdit_CreateMimeDataFromSelection_IsBase(bool value) const { qtextedit_createmimedatafromselection_isbase = value; }
    void setQTextEdit_CanInsertFromMimeData_IsBase(bool value) const { qtextedit_caninsertfrommimedata_isbase = value; }
    void setQTextEdit_InsertFromMimeData_IsBase(bool value) const { qtextedit_insertfrommimedata_isbase = value; }
    void setQTextEdit_InputMethodEvent_IsBase(bool value) const { qtextedit_inputmethodevent_isbase = value; }
    void setQTextEdit_ScrollContentsBy_IsBase(bool value) const { qtextedit_scrollcontentsby_isbase = value; }
    void setQTextEdit_DoSetTextCursor_IsBase(bool value) const { qtextedit_dosettextcursor_isbase = value; }
    void setQTextEdit_MinimumSizeHint_IsBase(bool value) const { qtextedit_minimumsizehint_isbase = value; }
    void setQTextEdit_SizeHint_IsBase(bool value) const { qtextedit_sizehint_isbase = value; }
    void setQTextEdit_SetupViewport_IsBase(bool value) const { qtextedit_setupviewport_isbase = value; }
    void setQTextEdit_EventFilter_IsBase(bool value) const { qtextedit_eventfilter_isbase = value; }
    void setQTextEdit_ViewportEvent_IsBase(bool value) const { qtextedit_viewportevent_isbase = value; }
    void setQTextEdit_ViewportSizeHint_IsBase(bool value) const { qtextedit_viewportsizehint_isbase = value; }
    void setQTextEdit_InitStyleOption_IsBase(bool value) const { qtextedit_initstyleoption_isbase = value; }
    void setQTextEdit_DevType_IsBase(bool value) const { qtextedit_devtype_isbase = value; }
    void setQTextEdit_SetVisible_IsBase(bool value) const { qtextedit_setvisible_isbase = value; }
    void setQTextEdit_HeightForWidth_IsBase(bool value) const { qtextedit_heightforwidth_isbase = value; }
    void setQTextEdit_HasHeightForWidth_IsBase(bool value) const { qtextedit_hasheightforwidth_isbase = value; }
    void setQTextEdit_PaintEngine_IsBase(bool value) const { qtextedit_paintengine_isbase = value; }
    void setQTextEdit_EnterEvent_IsBase(bool value) const { qtextedit_enterevent_isbase = value; }
    void setQTextEdit_LeaveEvent_IsBase(bool value) const { qtextedit_leaveevent_isbase = value; }
    void setQTextEdit_MoveEvent_IsBase(bool value) const { qtextedit_moveevent_isbase = value; }
    void setQTextEdit_CloseEvent_IsBase(bool value) const { qtextedit_closeevent_isbase = value; }
    void setQTextEdit_TabletEvent_IsBase(bool value) const { qtextedit_tabletevent_isbase = value; }
    void setQTextEdit_ActionEvent_IsBase(bool value) const { qtextedit_actionevent_isbase = value; }
    void setQTextEdit_HideEvent_IsBase(bool value) const { qtextedit_hideevent_isbase = value; }
    void setQTextEdit_NativeEvent_IsBase(bool value) const { qtextedit_nativeevent_isbase = value; }
    void setQTextEdit_Metric_IsBase(bool value) const { qtextedit_metric_isbase = value; }
    void setQTextEdit_InitPainter_IsBase(bool value) const { qtextedit_initpainter_isbase = value; }
    void setQTextEdit_Redirected_IsBase(bool value) const { qtextedit_redirected_isbase = value; }
    void setQTextEdit_SharedPainter_IsBase(bool value) const { qtextedit_sharedpainter_isbase = value; }
    void setQTextEdit_ChildEvent_IsBase(bool value) const { qtextedit_childevent_isbase = value; }
    void setQTextEdit_CustomEvent_IsBase(bool value) const { qtextedit_customevent_isbase = value; }
    void setQTextEdit_ConnectNotify_IsBase(bool value) const { qtextedit_connectnotify_isbase = value; }
    void setQTextEdit_DisconnectNotify_IsBase(bool value) const { qtextedit_disconnectnotify_isbase = value; }
    void setQTextEdit_ZoomInF_IsBase(bool value) const { qtextedit_zoominf_isbase = value; }
    void setQTextEdit_SetViewportMargins_IsBase(bool value) const { qtextedit_setviewportmargins_isbase = value; }
    void setQTextEdit_ViewportMargins_IsBase(bool value) const { qtextedit_viewportmargins_isbase = value; }
    void setQTextEdit_DrawFrame_IsBase(bool value) const { qtextedit_drawframe_isbase = value; }
    void setQTextEdit_UpdateMicroFocus_IsBase(bool value) const { qtextedit_updatemicrofocus_isbase = value; }
    void setQTextEdit_Create_IsBase(bool value) const { qtextedit_create_isbase = value; }
    void setQTextEdit_Destroy_IsBase(bool value) const { qtextedit_destroy_isbase = value; }
    void setQTextEdit_FocusNextChild_IsBase(bool value) const { qtextedit_focusnextchild_isbase = value; }
    void setQTextEdit_FocusPreviousChild_IsBase(bool value) const { qtextedit_focuspreviouschild_isbase = value; }
    void setQTextEdit_Sender_IsBase(bool value) const { qtextedit_sender_isbase = value; }
    void setQTextEdit_SenderSignalIndex_IsBase(bool value) const { qtextedit_sendersignalindex_isbase = value; }
    void setQTextEdit_Receivers_IsBase(bool value) const { qtextedit_receivers_isbase = value; }
    void setQTextEdit_IsSignalConnected_IsBase(bool value) const { qtextedit_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qtextedit_metacall_isbase) {
            qtextedit_metacall_isbase = false;
            return QTextEdit::qt_metacall(param1, param2, param3);
        } else if (qtextedit_metacall_callback != nullptr) {
            return qtextedit_metacall_callback(this, param1, param2, param3);
        } else {
            return QTextEdit::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant loadResource(int typeVal, const QUrl& name) override {
        if (qtextedit_loadresource_isbase) {
            qtextedit_loadresource_isbase = false;
            return QTextEdit::loadResource(typeVal, name);
        } else if (qtextedit_loadresource_callback != nullptr) {
            return qtextedit_loadresource_callback(this, typeVal, name);
        } else {
            return QTextEdit::loadResource(typeVal, name);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery property) const override {
        if (qtextedit_inputmethodquery_isbase) {
            qtextedit_inputmethodquery_isbase = false;
            return QTextEdit::inputMethodQuery(property);
        } else if (qtextedit_inputmethodquery_callback != nullptr) {
            return qtextedit_inputmethodquery_callback(this, property);
        } else {
            return QTextEdit::inputMethodQuery(property);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qtextedit_event_isbase) {
            qtextedit_event_isbase = false;
            return QTextEdit::event(e);
        } else if (qtextedit_event_callback != nullptr) {
            return qtextedit_event_callback(this, e);
        } else {
            return QTextEdit::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (qtextedit_timerevent_isbase) {
            qtextedit_timerevent_isbase = false;
            QTextEdit::timerEvent(e);
        } else if (qtextedit_timerevent_callback != nullptr) {
            qtextedit_timerevent_callback(this, e);
        } else {
            QTextEdit::timerEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (qtextedit_keypressevent_isbase) {
            qtextedit_keypressevent_isbase = false;
            QTextEdit::keyPressEvent(e);
        } else if (qtextedit_keypressevent_callback != nullptr) {
            qtextedit_keypressevent_callback(this, e);
        } else {
            QTextEdit::keyPressEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (qtextedit_keyreleaseevent_isbase) {
            qtextedit_keyreleaseevent_isbase = false;
            QTextEdit::keyReleaseEvent(e);
        } else if (qtextedit_keyreleaseevent_callback != nullptr) {
            qtextedit_keyreleaseevent_callback(this, e);
        } else {
            QTextEdit::keyReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (qtextedit_resizeevent_isbase) {
            qtextedit_resizeevent_isbase = false;
            QTextEdit::resizeEvent(e);
        } else if (qtextedit_resizeevent_callback != nullptr) {
            qtextedit_resizeevent_callback(this, e);
        } else {
            QTextEdit::resizeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (qtextedit_paintevent_isbase) {
            qtextedit_paintevent_isbase = false;
            QTextEdit::paintEvent(e);
        } else if (qtextedit_paintevent_callback != nullptr) {
            qtextedit_paintevent_callback(this, e);
        } else {
            QTextEdit::paintEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (qtextedit_mousepressevent_isbase) {
            qtextedit_mousepressevent_isbase = false;
            QTextEdit::mousePressEvent(e);
        } else if (qtextedit_mousepressevent_callback != nullptr) {
            qtextedit_mousepressevent_callback(this, e);
        } else {
            QTextEdit::mousePressEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (qtextedit_mousemoveevent_isbase) {
            qtextedit_mousemoveevent_isbase = false;
            QTextEdit::mouseMoveEvent(e);
        } else if (qtextedit_mousemoveevent_callback != nullptr) {
            qtextedit_mousemoveevent_callback(this, e);
        } else {
            QTextEdit::mouseMoveEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (qtextedit_mousereleaseevent_isbase) {
            qtextedit_mousereleaseevent_isbase = false;
            QTextEdit::mouseReleaseEvent(e);
        } else if (qtextedit_mousereleaseevent_callback != nullptr) {
            qtextedit_mousereleaseevent_callback(this, e);
        } else {
            QTextEdit::mouseReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* e) override {
        if (qtextedit_mousedoubleclickevent_isbase) {
            qtextedit_mousedoubleclickevent_isbase = false;
            QTextEdit::mouseDoubleClickEvent(e);
        } else if (qtextedit_mousedoubleclickevent_callback != nullptr) {
            qtextedit_mousedoubleclickevent_callback(this, e);
        } else {
            QTextEdit::mouseDoubleClickEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qtextedit_focusnextprevchild_isbase) {
            qtextedit_focusnextprevchild_isbase = false;
            return QTextEdit::focusNextPrevChild(next);
        } else if (qtextedit_focusnextprevchild_callback != nullptr) {
            return qtextedit_focusnextprevchild_callback(this, next);
        } else {
            return QTextEdit::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* e) override {
        if (qtextedit_contextmenuevent_isbase) {
            qtextedit_contextmenuevent_isbase = false;
            QTextEdit::contextMenuEvent(e);
        } else if (qtextedit_contextmenuevent_callback != nullptr) {
            qtextedit_contextmenuevent_callback(this, e);
        } else {
            QTextEdit::contextMenuEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* e) override {
        if (qtextedit_dragenterevent_isbase) {
            qtextedit_dragenterevent_isbase = false;
            QTextEdit::dragEnterEvent(e);
        } else if (qtextedit_dragenterevent_callback != nullptr) {
            qtextedit_dragenterevent_callback(this, e);
        } else {
            QTextEdit::dragEnterEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
        if (qtextedit_dragleaveevent_isbase) {
            qtextedit_dragleaveevent_isbase = false;
            QTextEdit::dragLeaveEvent(e);
        } else if (qtextedit_dragleaveevent_callback != nullptr) {
            qtextedit_dragleaveevent_callback(this, e);
        } else {
            QTextEdit::dragLeaveEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* e) override {
        if (qtextedit_dragmoveevent_isbase) {
            qtextedit_dragmoveevent_isbase = false;
            QTextEdit::dragMoveEvent(e);
        } else if (qtextedit_dragmoveevent_callback != nullptr) {
            qtextedit_dragmoveevent_callback(this, e);
        } else {
            QTextEdit::dragMoveEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* e) override {
        if (qtextedit_dropevent_isbase) {
            qtextedit_dropevent_isbase = false;
            QTextEdit::dropEvent(e);
        } else if (qtextedit_dropevent_callback != nullptr) {
            qtextedit_dropevent_callback(this, e);
        } else {
            QTextEdit::dropEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (qtextedit_focusinevent_isbase) {
            qtextedit_focusinevent_isbase = false;
            QTextEdit::focusInEvent(e);
        } else if (qtextedit_focusinevent_callback != nullptr) {
            qtextedit_focusinevent_callback(this, e);
        } else {
            QTextEdit::focusInEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (qtextedit_focusoutevent_isbase) {
            qtextedit_focusoutevent_isbase = false;
            QTextEdit::focusOutEvent(e);
        } else if (qtextedit_focusoutevent_callback != nullptr) {
            qtextedit_focusoutevent_callback(this, e);
        } else {
            QTextEdit::focusOutEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qtextedit_showevent_isbase) {
            qtextedit_showevent_isbase = false;
            QTextEdit::showEvent(param1);
        } else if (qtextedit_showevent_callback != nullptr) {
            qtextedit_showevent_callback(this, param1);
        } else {
            QTextEdit::showEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (qtextedit_changeevent_isbase) {
            qtextedit_changeevent_isbase = false;
            QTextEdit::changeEvent(e);
        } else if (qtextedit_changeevent_callback != nullptr) {
            qtextedit_changeevent_callback(this, e);
        } else {
            QTextEdit::changeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (qtextedit_wheelevent_isbase) {
            qtextedit_wheelevent_isbase = false;
            QTextEdit::wheelEvent(e);
        } else if (qtextedit_wheelevent_callback != nullptr) {
            qtextedit_wheelevent_callback(this, e);
        } else {
            QTextEdit::wheelEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* createMimeDataFromSelection() const override {
        if (qtextedit_createmimedatafromselection_isbase) {
            qtextedit_createmimedatafromselection_isbase = false;
            return QTextEdit::createMimeDataFromSelection();
        } else if (qtextedit_createmimedatafromselection_callback != nullptr) {
            return qtextedit_createmimedatafromselection_callback();
        } else {
            return QTextEdit::createMimeDataFromSelection();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canInsertFromMimeData(const QMimeData* source) const override {
        if (qtextedit_caninsertfrommimedata_isbase) {
            qtextedit_caninsertfrommimedata_isbase = false;
            return QTextEdit::canInsertFromMimeData(source);
        } else if (qtextedit_caninsertfrommimedata_callback != nullptr) {
            return qtextedit_caninsertfrommimedata_callback(this, source);
        } else {
            return QTextEdit::canInsertFromMimeData(source);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void insertFromMimeData(const QMimeData* source) override {
        if (qtextedit_insertfrommimedata_isbase) {
            qtextedit_insertfrommimedata_isbase = false;
            QTextEdit::insertFromMimeData(source);
        } else if (qtextedit_insertfrommimedata_callback != nullptr) {
            qtextedit_insertfrommimedata_callback(this, source);
        } else {
            QTextEdit::insertFromMimeData(source);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qtextedit_inputmethodevent_isbase) {
            qtextedit_inputmethodevent_isbase = false;
            QTextEdit::inputMethodEvent(param1);
        } else if (qtextedit_inputmethodevent_callback != nullptr) {
            qtextedit_inputmethodevent_callback(this, param1);
        } else {
            QTextEdit::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (qtextedit_scrollcontentsby_isbase) {
            qtextedit_scrollcontentsby_isbase = false;
            QTextEdit::scrollContentsBy(dx, dy);
        } else if (qtextedit_scrollcontentsby_callback != nullptr) {
            qtextedit_scrollcontentsby_callback(this, dx, dy);
        } else {
            QTextEdit::scrollContentsBy(dx, dy);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void doSetTextCursor(const QTextCursor& cursor) override {
        if (qtextedit_dosettextcursor_isbase) {
            qtextedit_dosettextcursor_isbase = false;
            QTextEdit::doSetTextCursor(cursor);
        } else if (qtextedit_dosettextcursor_callback != nullptr) {
            qtextedit_dosettextcursor_callback(this, cursor);
        } else {
            QTextEdit::doSetTextCursor(cursor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qtextedit_minimumsizehint_isbase) {
            qtextedit_minimumsizehint_isbase = false;
            return QTextEdit::minimumSizeHint();
        } else if (qtextedit_minimumsizehint_callback != nullptr) {
            return qtextedit_minimumsizehint_callback();
        } else {
            return QTextEdit::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qtextedit_sizehint_isbase) {
            qtextedit_sizehint_isbase = false;
            return QTextEdit::sizeHint();
        } else if (qtextedit_sizehint_callback != nullptr) {
            return qtextedit_sizehint_callback();
        } else {
            return QTextEdit::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (qtextedit_setupviewport_isbase) {
            qtextedit_setupviewport_isbase = false;
            QTextEdit::setupViewport(viewport);
        } else if (qtextedit_setupviewport_callback != nullptr) {
            qtextedit_setupviewport_callback(this, viewport);
        } else {
            QTextEdit::setupViewport(viewport);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qtextedit_eventfilter_isbase) {
            qtextedit_eventfilter_isbase = false;
            return QTextEdit::eventFilter(param1, param2);
        } else if (qtextedit_eventfilter_callback != nullptr) {
            return qtextedit_eventfilter_callback(this, param1, param2);
        } else {
            return QTextEdit::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* param1) override {
        if (qtextedit_viewportevent_isbase) {
            qtextedit_viewportevent_isbase = false;
            return QTextEdit::viewportEvent(param1);
        } else if (qtextedit_viewportevent_callback != nullptr) {
            return qtextedit_viewportevent_callback(this, param1);
        } else {
            return QTextEdit::viewportEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (qtextedit_viewportsizehint_isbase) {
            qtextedit_viewportsizehint_isbase = false;
            return QTextEdit::viewportSizeHint();
        } else if (qtextedit_viewportsizehint_callback != nullptr) {
            return qtextedit_viewportsizehint_callback();
        } else {
            return QTextEdit::viewportSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qtextedit_initstyleoption_isbase) {
            qtextedit_initstyleoption_isbase = false;
            QTextEdit::initStyleOption(option);
        } else if (qtextedit_initstyleoption_callback != nullptr) {
            qtextedit_initstyleoption_callback(this, option);
        } else {
            QTextEdit::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qtextedit_devtype_isbase) {
            qtextedit_devtype_isbase = false;
            return QTextEdit::devType();
        } else if (qtextedit_devtype_callback != nullptr) {
            return qtextedit_devtype_callback();
        } else {
            return QTextEdit::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qtextedit_setvisible_isbase) {
            qtextedit_setvisible_isbase = false;
            QTextEdit::setVisible(visible);
        } else if (qtextedit_setvisible_callback != nullptr) {
            qtextedit_setvisible_callback(this, visible);
        } else {
            QTextEdit::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qtextedit_heightforwidth_isbase) {
            qtextedit_heightforwidth_isbase = false;
            return QTextEdit::heightForWidth(param1);
        } else if (qtextedit_heightforwidth_callback != nullptr) {
            return qtextedit_heightforwidth_callback(this, param1);
        } else {
            return QTextEdit::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qtextedit_hasheightforwidth_isbase) {
            qtextedit_hasheightforwidth_isbase = false;
            return QTextEdit::hasHeightForWidth();
        } else if (qtextedit_hasheightforwidth_callback != nullptr) {
            return qtextedit_hasheightforwidth_callback();
        } else {
            return QTextEdit::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qtextedit_paintengine_isbase) {
            qtextedit_paintengine_isbase = false;
            return QTextEdit::paintEngine();
        } else if (qtextedit_paintengine_callback != nullptr) {
            return qtextedit_paintengine_callback();
        } else {
            return QTextEdit::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qtextedit_enterevent_isbase) {
            qtextedit_enterevent_isbase = false;
            QTextEdit::enterEvent(event);
        } else if (qtextedit_enterevent_callback != nullptr) {
            qtextedit_enterevent_callback(this, event);
        } else {
            QTextEdit::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qtextedit_leaveevent_isbase) {
            qtextedit_leaveevent_isbase = false;
            QTextEdit::leaveEvent(event);
        } else if (qtextedit_leaveevent_callback != nullptr) {
            qtextedit_leaveevent_callback(this, event);
        } else {
            QTextEdit::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qtextedit_moveevent_isbase) {
            qtextedit_moveevent_isbase = false;
            QTextEdit::moveEvent(event);
        } else if (qtextedit_moveevent_callback != nullptr) {
            qtextedit_moveevent_callback(this, event);
        } else {
            QTextEdit::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qtextedit_closeevent_isbase) {
            qtextedit_closeevent_isbase = false;
            QTextEdit::closeEvent(event);
        } else if (qtextedit_closeevent_callback != nullptr) {
            qtextedit_closeevent_callback(this, event);
        } else {
            QTextEdit::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qtextedit_tabletevent_isbase) {
            qtextedit_tabletevent_isbase = false;
            QTextEdit::tabletEvent(event);
        } else if (qtextedit_tabletevent_callback != nullptr) {
            qtextedit_tabletevent_callback(this, event);
        } else {
            QTextEdit::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qtextedit_actionevent_isbase) {
            qtextedit_actionevent_isbase = false;
            QTextEdit::actionEvent(event);
        } else if (qtextedit_actionevent_callback != nullptr) {
            qtextedit_actionevent_callback(this, event);
        } else {
            QTextEdit::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qtextedit_hideevent_isbase) {
            qtextedit_hideevent_isbase = false;
            QTextEdit::hideEvent(event);
        } else if (qtextedit_hideevent_callback != nullptr) {
            qtextedit_hideevent_callback(this, event);
        } else {
            QTextEdit::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qtextedit_nativeevent_isbase) {
            qtextedit_nativeevent_isbase = false;
            return QTextEdit::nativeEvent(eventType, message, result);
        } else if (qtextedit_nativeevent_callback != nullptr) {
            return qtextedit_nativeevent_callback(this, eventType, message, result);
        } else {
            return QTextEdit::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qtextedit_metric_isbase) {
            qtextedit_metric_isbase = false;
            return QTextEdit::metric(param1);
        } else if (qtextedit_metric_callback != nullptr) {
            return qtextedit_metric_callback(this, param1);
        } else {
            return QTextEdit::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qtextedit_initpainter_isbase) {
            qtextedit_initpainter_isbase = false;
            QTextEdit::initPainter(painter);
        } else if (qtextedit_initpainter_callback != nullptr) {
            qtextedit_initpainter_callback(this, painter);
        } else {
            QTextEdit::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qtextedit_redirected_isbase) {
            qtextedit_redirected_isbase = false;
            return QTextEdit::redirected(offset);
        } else if (qtextedit_redirected_callback != nullptr) {
            return qtextedit_redirected_callback(this, offset);
        } else {
            return QTextEdit::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qtextedit_sharedpainter_isbase) {
            qtextedit_sharedpainter_isbase = false;
            return QTextEdit::sharedPainter();
        } else if (qtextedit_sharedpainter_callback != nullptr) {
            return qtextedit_sharedpainter_callback();
        } else {
            return QTextEdit::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qtextedit_childevent_isbase) {
            qtextedit_childevent_isbase = false;
            QTextEdit::childEvent(event);
        } else if (qtextedit_childevent_callback != nullptr) {
            qtextedit_childevent_callback(this, event);
        } else {
            QTextEdit::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qtextedit_customevent_isbase) {
            qtextedit_customevent_isbase = false;
            QTextEdit::customEvent(event);
        } else if (qtextedit_customevent_callback != nullptr) {
            qtextedit_customevent_callback(this, event);
        } else {
            QTextEdit::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qtextedit_connectnotify_isbase) {
            qtextedit_connectnotify_isbase = false;
            QTextEdit::connectNotify(signal);
        } else if (qtextedit_connectnotify_callback != nullptr) {
            qtextedit_connectnotify_callback(this, signal);
        } else {
            QTextEdit::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qtextedit_disconnectnotify_isbase) {
            qtextedit_disconnectnotify_isbase = false;
            QTextEdit::disconnectNotify(signal);
        } else if (qtextedit_disconnectnotify_callback != nullptr) {
            qtextedit_disconnectnotify_callback(this, signal);
        } else {
            QTextEdit::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void zoomInF(float range) {
        if (qtextedit_zoominf_isbase) {
            qtextedit_zoominf_isbase = false;
            QTextEdit::zoomInF(range);
        } else if (qtextedit_zoominf_callback != nullptr) {
            qtextedit_zoominf_callback(this, range);
        } else {
            QTextEdit::zoomInF(range);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setViewportMargins(int left, int top, int right, int bottom) {
        if (qtextedit_setviewportmargins_isbase) {
            qtextedit_setviewportmargins_isbase = false;
            QTextEdit::setViewportMargins(left, top, right, bottom);
        } else if (qtextedit_setviewportmargins_callback != nullptr) {
            qtextedit_setviewportmargins_callback(this, left, top, right, bottom);
        } else {
            QTextEdit::setViewportMargins(left, top, right, bottom);
        }
    }

    // Virtual method for C ABI access and custom callback
    QMargins viewportMargins() const {
        if (qtextedit_viewportmargins_isbase) {
            qtextedit_viewportmargins_isbase = false;
            return QTextEdit::viewportMargins();
        } else if (qtextedit_viewportmargins_callback != nullptr) {
            return qtextedit_viewportmargins_callback();
        } else {
            return QTextEdit::viewportMargins();
        }
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (qtextedit_drawframe_isbase) {
            qtextedit_drawframe_isbase = false;
            QTextEdit::drawFrame(param1);
        } else if (qtextedit_drawframe_callback != nullptr) {
            qtextedit_drawframe_callback(this, param1);
        } else {
            QTextEdit::drawFrame(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qtextedit_updatemicrofocus_isbase) {
            qtextedit_updatemicrofocus_isbase = false;
            QTextEdit::updateMicroFocus();
        } else if (qtextedit_updatemicrofocus_callback != nullptr) {
            qtextedit_updatemicrofocus_callback();
        } else {
            QTextEdit::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qtextedit_create_isbase) {
            qtextedit_create_isbase = false;
            QTextEdit::create();
        } else if (qtextedit_create_callback != nullptr) {
            qtextedit_create_callback();
        } else {
            QTextEdit::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qtextedit_destroy_isbase) {
            qtextedit_destroy_isbase = false;
            QTextEdit::destroy();
        } else if (qtextedit_destroy_callback != nullptr) {
            qtextedit_destroy_callback();
        } else {
            QTextEdit::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qtextedit_focusnextchild_isbase) {
            qtextedit_focusnextchild_isbase = false;
            return QTextEdit::focusNextChild();
        } else if (qtextedit_focusnextchild_callback != nullptr) {
            return qtextedit_focusnextchild_callback();
        } else {
            return QTextEdit::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qtextedit_focuspreviouschild_isbase) {
            qtextedit_focuspreviouschild_isbase = false;
            return QTextEdit::focusPreviousChild();
        } else if (qtextedit_focuspreviouschild_callback != nullptr) {
            return qtextedit_focuspreviouschild_callback();
        } else {
            return QTextEdit::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qtextedit_sender_isbase) {
            qtextedit_sender_isbase = false;
            return QTextEdit::sender();
        } else if (qtextedit_sender_callback != nullptr) {
            return qtextedit_sender_callback();
        } else {
            return QTextEdit::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qtextedit_sendersignalindex_isbase) {
            qtextedit_sendersignalindex_isbase = false;
            return QTextEdit::senderSignalIndex();
        } else if (qtextedit_sendersignalindex_callback != nullptr) {
            return qtextedit_sendersignalindex_callback();
        } else {
            return QTextEdit::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qtextedit_receivers_isbase) {
            qtextedit_receivers_isbase = false;
            return QTextEdit::receivers(signal);
        } else if (qtextedit_receivers_callback != nullptr) {
            return qtextedit_receivers_callback(this, signal);
        } else {
            return QTextEdit::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qtextedit_issignalconnected_isbase) {
            qtextedit_issignalconnected_isbase = false;
            return QTextEdit::isSignalConnected(signal);
        } else if (qtextedit_issignalconnected_callback != nullptr) {
            return qtextedit_issignalconnected_callback(this, signal);
        } else {
            return QTextEdit::isSignalConnected(signal);
        }
    }
};

#endif
