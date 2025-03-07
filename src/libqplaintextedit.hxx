#pragma once
#ifndef SRCC_LIBVIRTUALQPLAINTEXTEDIT_H
#define SRCC_LIBVIRTUALQPLAINTEXTEDIT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QPlainTextEdit so that we can call protected methods
class VirtualQPlainTextEdit : public QPlainTextEdit {

  public:
    // Virtual class public types (including callbacks)
    using QPlainTextEdit_Metacall_Callback = int (*)(QPlainTextEdit*, QMetaObject::Call, int, void**);
    using QPlainTextEdit_LoadResource_Callback = QVariant (*)(QPlainTextEdit*, int, const QUrl&);
    using QPlainTextEdit_InputMethodQuery_Callback = QVariant (*)(const QPlainTextEdit*, Qt::InputMethodQuery);
    using QPlainTextEdit_Event_Callback = bool (*)(QPlainTextEdit*, QEvent*);
    using QPlainTextEdit_TimerEvent_Callback = void (*)(QPlainTextEdit*, QTimerEvent*);
    using QPlainTextEdit_KeyPressEvent_Callback = void (*)(QPlainTextEdit*, QKeyEvent*);
    using QPlainTextEdit_KeyReleaseEvent_Callback = void (*)(QPlainTextEdit*, QKeyEvent*);
    using QPlainTextEdit_ResizeEvent_Callback = void (*)(QPlainTextEdit*, QResizeEvent*);
    using QPlainTextEdit_PaintEvent_Callback = void (*)(QPlainTextEdit*, QPaintEvent*);
    using QPlainTextEdit_MousePressEvent_Callback = void (*)(QPlainTextEdit*, QMouseEvent*);
    using QPlainTextEdit_MouseMoveEvent_Callback = void (*)(QPlainTextEdit*, QMouseEvent*);
    using QPlainTextEdit_MouseReleaseEvent_Callback = void (*)(QPlainTextEdit*, QMouseEvent*);
    using QPlainTextEdit_MouseDoubleClickEvent_Callback = void (*)(QPlainTextEdit*, QMouseEvent*);
    using QPlainTextEdit_FocusNextPrevChild_Callback = bool (*)(QPlainTextEdit*, bool);
    using QPlainTextEdit_ContextMenuEvent_Callback = void (*)(QPlainTextEdit*, QContextMenuEvent*);
    using QPlainTextEdit_DragEnterEvent_Callback = void (*)(QPlainTextEdit*, QDragEnterEvent*);
    using QPlainTextEdit_DragLeaveEvent_Callback = void (*)(QPlainTextEdit*, QDragLeaveEvent*);
    using QPlainTextEdit_DragMoveEvent_Callback = void (*)(QPlainTextEdit*, QDragMoveEvent*);
    using QPlainTextEdit_DropEvent_Callback = void (*)(QPlainTextEdit*, QDropEvent*);
    using QPlainTextEdit_FocusInEvent_Callback = void (*)(QPlainTextEdit*, QFocusEvent*);
    using QPlainTextEdit_FocusOutEvent_Callback = void (*)(QPlainTextEdit*, QFocusEvent*);
    using QPlainTextEdit_ShowEvent_Callback = void (*)(QPlainTextEdit*, QShowEvent*);
    using QPlainTextEdit_ChangeEvent_Callback = void (*)(QPlainTextEdit*, QEvent*);
    using QPlainTextEdit_WheelEvent_Callback = void (*)(QPlainTextEdit*, QWheelEvent*);
    using QPlainTextEdit_CreateMimeDataFromSelection_Callback = QMimeData* (*)();
    using QPlainTextEdit_CanInsertFromMimeData_Callback = bool (*)(const QPlainTextEdit*, const QMimeData*);
    using QPlainTextEdit_InsertFromMimeData_Callback = void (*)(QPlainTextEdit*, const QMimeData*);
    using QPlainTextEdit_InputMethodEvent_Callback = void (*)(QPlainTextEdit*, QInputMethodEvent*);
    using QPlainTextEdit_ScrollContentsBy_Callback = void (*)(QPlainTextEdit*, int, int);
    using QPlainTextEdit_DoSetTextCursor_Callback = void (*)(QPlainTextEdit*, const QTextCursor&);
    using QPlainTextEdit_MinimumSizeHint_Callback = QSize (*)();
    using QPlainTextEdit_SizeHint_Callback = QSize (*)();
    using QPlainTextEdit_SetupViewport_Callback = void (*)(QPlainTextEdit*, QWidget*);
    using QPlainTextEdit_EventFilter_Callback = bool (*)(QPlainTextEdit*, QObject*, QEvent*);
    using QPlainTextEdit_ViewportEvent_Callback = bool (*)(QPlainTextEdit*, QEvent*);
    using QPlainTextEdit_ViewportSizeHint_Callback = QSize (*)();
    using QPlainTextEdit_InitStyleOption_Callback = void (*)(const QPlainTextEdit*, QStyleOptionFrame*);
    using QPlainTextEdit_DevType_Callback = int (*)();
    using QPlainTextEdit_SetVisible_Callback = void (*)(QPlainTextEdit*, bool);
    using QPlainTextEdit_HeightForWidth_Callback = int (*)(const QPlainTextEdit*, int);
    using QPlainTextEdit_HasHeightForWidth_Callback = bool (*)();
    using QPlainTextEdit_PaintEngine_Callback = QPaintEngine* (*)();
    using QPlainTextEdit_EnterEvent_Callback = void (*)(QPlainTextEdit*, QEnterEvent*);
    using QPlainTextEdit_LeaveEvent_Callback = void (*)(QPlainTextEdit*, QEvent*);
    using QPlainTextEdit_MoveEvent_Callback = void (*)(QPlainTextEdit*, QMoveEvent*);
    using QPlainTextEdit_CloseEvent_Callback = void (*)(QPlainTextEdit*, QCloseEvent*);
    using QPlainTextEdit_TabletEvent_Callback = void (*)(QPlainTextEdit*, QTabletEvent*);
    using QPlainTextEdit_ActionEvent_Callback = void (*)(QPlainTextEdit*, QActionEvent*);
    using QPlainTextEdit_HideEvent_Callback = void (*)(QPlainTextEdit*, QHideEvent*);
    using QPlainTextEdit_NativeEvent_Callback = bool (*)(QPlainTextEdit*, const QByteArray&, void*, qintptr*);
    using QPlainTextEdit_Metric_Callback = int (*)(const QPlainTextEdit*, QPaintDevice::PaintDeviceMetric);
    using QPlainTextEdit_InitPainter_Callback = void (*)(const QPlainTextEdit*, QPainter*);
    using QPlainTextEdit_Redirected_Callback = QPaintDevice* (*)(const QPlainTextEdit*, QPoint*);
    using QPlainTextEdit_SharedPainter_Callback = QPainter* (*)();
    using QPlainTextEdit_ChildEvent_Callback = void (*)(QPlainTextEdit*, QChildEvent*);
    using QPlainTextEdit_CustomEvent_Callback = void (*)(QPlainTextEdit*, QEvent*);
    using QPlainTextEdit_ConnectNotify_Callback = void (*)(QPlainTextEdit*, const QMetaMethod&);
    using QPlainTextEdit_DisconnectNotify_Callback = void (*)(QPlainTextEdit*, const QMetaMethod&);
    using QPlainTextEdit_FirstVisibleBlock_Callback = QTextBlock (*)();
    using QPlainTextEdit_ContentOffset_Callback = QPointF (*)();
    using QPlainTextEdit_BlockBoundingRect_Callback = QRectF (*)(const QPlainTextEdit*, const QTextBlock&);
    using QPlainTextEdit_BlockBoundingGeometry_Callback = QRectF (*)(const QPlainTextEdit*, const QTextBlock&);
    using QPlainTextEdit_GetPaintContext_Callback = QAbstractTextDocumentLayout::PaintContext (*)();
    using QPlainTextEdit_ZoomInF_Callback = void (*)(QPlainTextEdit*, float);
    using QPlainTextEdit_SetViewportMargins_Callback = void (*)(QPlainTextEdit*, int, int, int, int);
    using QPlainTextEdit_ViewportMargins_Callback = QMargins (*)();
    using QPlainTextEdit_DrawFrame_Callback = void (*)(QPlainTextEdit*, QPainter*);
    using QPlainTextEdit_UpdateMicroFocus_Callback = void (*)();
    using QPlainTextEdit_Create_Callback = void (*)();
    using QPlainTextEdit_Destroy_Callback = void (*)();
    using QPlainTextEdit_FocusNextChild_Callback = bool (*)();
    using QPlainTextEdit_FocusPreviousChild_Callback = bool (*)();
    using QPlainTextEdit_Sender_Callback = QObject* (*)();
    using QPlainTextEdit_SenderSignalIndex_Callback = int (*)();
    using QPlainTextEdit_Receivers_Callback = int (*)(const QPlainTextEdit*, const char*);
    using QPlainTextEdit_IsSignalConnected_Callback = bool (*)(const QPlainTextEdit*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QPlainTextEdit_Metacall_Callback qplaintextedit_metacall_callback = nullptr;
    QPlainTextEdit_LoadResource_Callback qplaintextedit_loadresource_callback = nullptr;
    QPlainTextEdit_InputMethodQuery_Callback qplaintextedit_inputmethodquery_callback = nullptr;
    QPlainTextEdit_Event_Callback qplaintextedit_event_callback = nullptr;
    QPlainTextEdit_TimerEvent_Callback qplaintextedit_timerevent_callback = nullptr;
    QPlainTextEdit_KeyPressEvent_Callback qplaintextedit_keypressevent_callback = nullptr;
    QPlainTextEdit_KeyReleaseEvent_Callback qplaintextedit_keyreleaseevent_callback = nullptr;
    QPlainTextEdit_ResizeEvent_Callback qplaintextedit_resizeevent_callback = nullptr;
    QPlainTextEdit_PaintEvent_Callback qplaintextedit_paintevent_callback = nullptr;
    QPlainTextEdit_MousePressEvent_Callback qplaintextedit_mousepressevent_callback = nullptr;
    QPlainTextEdit_MouseMoveEvent_Callback qplaintextedit_mousemoveevent_callback = nullptr;
    QPlainTextEdit_MouseReleaseEvent_Callback qplaintextedit_mousereleaseevent_callback = nullptr;
    QPlainTextEdit_MouseDoubleClickEvent_Callback qplaintextedit_mousedoubleclickevent_callback = nullptr;
    QPlainTextEdit_FocusNextPrevChild_Callback qplaintextedit_focusnextprevchild_callback = nullptr;
    QPlainTextEdit_ContextMenuEvent_Callback qplaintextedit_contextmenuevent_callback = nullptr;
    QPlainTextEdit_DragEnterEvent_Callback qplaintextedit_dragenterevent_callback = nullptr;
    QPlainTextEdit_DragLeaveEvent_Callback qplaintextedit_dragleaveevent_callback = nullptr;
    QPlainTextEdit_DragMoveEvent_Callback qplaintextedit_dragmoveevent_callback = nullptr;
    QPlainTextEdit_DropEvent_Callback qplaintextedit_dropevent_callback = nullptr;
    QPlainTextEdit_FocusInEvent_Callback qplaintextedit_focusinevent_callback = nullptr;
    QPlainTextEdit_FocusOutEvent_Callback qplaintextedit_focusoutevent_callback = nullptr;
    QPlainTextEdit_ShowEvent_Callback qplaintextedit_showevent_callback = nullptr;
    QPlainTextEdit_ChangeEvent_Callback qplaintextedit_changeevent_callback = nullptr;
    QPlainTextEdit_WheelEvent_Callback qplaintextedit_wheelevent_callback = nullptr;
    QPlainTextEdit_CreateMimeDataFromSelection_Callback qplaintextedit_createmimedatafromselection_callback = nullptr;
    QPlainTextEdit_CanInsertFromMimeData_Callback qplaintextedit_caninsertfrommimedata_callback = nullptr;
    QPlainTextEdit_InsertFromMimeData_Callback qplaintextedit_insertfrommimedata_callback = nullptr;
    QPlainTextEdit_InputMethodEvent_Callback qplaintextedit_inputmethodevent_callback = nullptr;
    QPlainTextEdit_ScrollContentsBy_Callback qplaintextedit_scrollcontentsby_callback = nullptr;
    QPlainTextEdit_DoSetTextCursor_Callback qplaintextedit_dosettextcursor_callback = nullptr;
    QPlainTextEdit_MinimumSizeHint_Callback qplaintextedit_minimumsizehint_callback = nullptr;
    QPlainTextEdit_SizeHint_Callback qplaintextedit_sizehint_callback = nullptr;
    QPlainTextEdit_SetupViewport_Callback qplaintextedit_setupviewport_callback = nullptr;
    QPlainTextEdit_EventFilter_Callback qplaintextedit_eventfilter_callback = nullptr;
    QPlainTextEdit_ViewportEvent_Callback qplaintextedit_viewportevent_callback = nullptr;
    QPlainTextEdit_ViewportSizeHint_Callback qplaintextedit_viewportsizehint_callback = nullptr;
    QPlainTextEdit_InitStyleOption_Callback qplaintextedit_initstyleoption_callback = nullptr;
    QPlainTextEdit_DevType_Callback qplaintextedit_devtype_callback = nullptr;
    QPlainTextEdit_SetVisible_Callback qplaintextedit_setvisible_callback = nullptr;
    QPlainTextEdit_HeightForWidth_Callback qplaintextedit_heightforwidth_callback = nullptr;
    QPlainTextEdit_HasHeightForWidth_Callback qplaintextedit_hasheightforwidth_callback = nullptr;
    QPlainTextEdit_PaintEngine_Callback qplaintextedit_paintengine_callback = nullptr;
    QPlainTextEdit_EnterEvent_Callback qplaintextedit_enterevent_callback = nullptr;
    QPlainTextEdit_LeaveEvent_Callback qplaintextedit_leaveevent_callback = nullptr;
    QPlainTextEdit_MoveEvent_Callback qplaintextedit_moveevent_callback = nullptr;
    QPlainTextEdit_CloseEvent_Callback qplaintextedit_closeevent_callback = nullptr;
    QPlainTextEdit_TabletEvent_Callback qplaintextedit_tabletevent_callback = nullptr;
    QPlainTextEdit_ActionEvent_Callback qplaintextedit_actionevent_callback = nullptr;
    QPlainTextEdit_HideEvent_Callback qplaintextedit_hideevent_callback = nullptr;
    QPlainTextEdit_NativeEvent_Callback qplaintextedit_nativeevent_callback = nullptr;
    QPlainTextEdit_Metric_Callback qplaintextedit_metric_callback = nullptr;
    QPlainTextEdit_InitPainter_Callback qplaintextedit_initpainter_callback = nullptr;
    QPlainTextEdit_Redirected_Callback qplaintextedit_redirected_callback = nullptr;
    QPlainTextEdit_SharedPainter_Callback qplaintextedit_sharedpainter_callback = nullptr;
    QPlainTextEdit_ChildEvent_Callback qplaintextedit_childevent_callback = nullptr;
    QPlainTextEdit_CustomEvent_Callback qplaintextedit_customevent_callback = nullptr;
    QPlainTextEdit_ConnectNotify_Callback qplaintextedit_connectnotify_callback = nullptr;
    QPlainTextEdit_DisconnectNotify_Callback qplaintextedit_disconnectnotify_callback = nullptr;
    QPlainTextEdit_FirstVisibleBlock_Callback qplaintextedit_firstvisibleblock_callback = nullptr;
    QPlainTextEdit_ContentOffset_Callback qplaintextedit_contentoffset_callback = nullptr;
    QPlainTextEdit_BlockBoundingRect_Callback qplaintextedit_blockboundingrect_callback = nullptr;
    QPlainTextEdit_BlockBoundingGeometry_Callback qplaintextedit_blockboundinggeometry_callback = nullptr;
    QPlainTextEdit_GetPaintContext_Callback qplaintextedit_getpaintcontext_callback = nullptr;
    QPlainTextEdit_ZoomInF_Callback qplaintextedit_zoominf_callback = nullptr;
    QPlainTextEdit_SetViewportMargins_Callback qplaintextedit_setviewportmargins_callback = nullptr;
    QPlainTextEdit_ViewportMargins_Callback qplaintextedit_viewportmargins_callback = nullptr;
    QPlainTextEdit_DrawFrame_Callback qplaintextedit_drawframe_callback = nullptr;
    QPlainTextEdit_UpdateMicroFocus_Callback qplaintextedit_updatemicrofocus_callback = nullptr;
    QPlainTextEdit_Create_Callback qplaintextedit_create_callback = nullptr;
    QPlainTextEdit_Destroy_Callback qplaintextedit_destroy_callback = nullptr;
    QPlainTextEdit_FocusNextChild_Callback qplaintextedit_focusnextchild_callback = nullptr;
    QPlainTextEdit_FocusPreviousChild_Callback qplaintextedit_focuspreviouschild_callback = nullptr;
    QPlainTextEdit_Sender_Callback qplaintextedit_sender_callback = nullptr;
    QPlainTextEdit_SenderSignalIndex_Callback qplaintextedit_sendersignalindex_callback = nullptr;
    QPlainTextEdit_Receivers_Callback qplaintextedit_receivers_callback = nullptr;
    QPlainTextEdit_IsSignalConnected_Callback qplaintextedit_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qplaintextedit_metacall_isbase = false;
    mutable bool qplaintextedit_loadresource_isbase = false;
    mutable bool qplaintextedit_inputmethodquery_isbase = false;
    mutable bool qplaintextedit_event_isbase = false;
    mutable bool qplaintextedit_timerevent_isbase = false;
    mutable bool qplaintextedit_keypressevent_isbase = false;
    mutable bool qplaintextedit_keyreleaseevent_isbase = false;
    mutable bool qplaintextedit_resizeevent_isbase = false;
    mutable bool qplaintextedit_paintevent_isbase = false;
    mutable bool qplaintextedit_mousepressevent_isbase = false;
    mutable bool qplaintextedit_mousemoveevent_isbase = false;
    mutable bool qplaintextedit_mousereleaseevent_isbase = false;
    mutable bool qplaintextedit_mousedoubleclickevent_isbase = false;
    mutable bool qplaintextedit_focusnextprevchild_isbase = false;
    mutable bool qplaintextedit_contextmenuevent_isbase = false;
    mutable bool qplaintextedit_dragenterevent_isbase = false;
    mutable bool qplaintextedit_dragleaveevent_isbase = false;
    mutable bool qplaintextedit_dragmoveevent_isbase = false;
    mutable bool qplaintextedit_dropevent_isbase = false;
    mutable bool qplaintextedit_focusinevent_isbase = false;
    mutable bool qplaintextedit_focusoutevent_isbase = false;
    mutable bool qplaintextedit_showevent_isbase = false;
    mutable bool qplaintextedit_changeevent_isbase = false;
    mutable bool qplaintextedit_wheelevent_isbase = false;
    mutable bool qplaintextedit_createmimedatafromselection_isbase = false;
    mutable bool qplaintextedit_caninsertfrommimedata_isbase = false;
    mutable bool qplaintextedit_insertfrommimedata_isbase = false;
    mutable bool qplaintextedit_inputmethodevent_isbase = false;
    mutable bool qplaintextedit_scrollcontentsby_isbase = false;
    mutable bool qplaintextedit_dosettextcursor_isbase = false;
    mutable bool qplaintextedit_minimumsizehint_isbase = false;
    mutable bool qplaintextedit_sizehint_isbase = false;
    mutable bool qplaintextedit_setupviewport_isbase = false;
    mutable bool qplaintextedit_eventfilter_isbase = false;
    mutable bool qplaintextedit_viewportevent_isbase = false;
    mutable bool qplaintextedit_viewportsizehint_isbase = false;
    mutable bool qplaintextedit_initstyleoption_isbase = false;
    mutable bool qplaintextedit_devtype_isbase = false;
    mutable bool qplaintextedit_setvisible_isbase = false;
    mutable bool qplaintextedit_heightforwidth_isbase = false;
    mutable bool qplaintextedit_hasheightforwidth_isbase = false;
    mutable bool qplaintextedit_paintengine_isbase = false;
    mutable bool qplaintextedit_enterevent_isbase = false;
    mutable bool qplaintextedit_leaveevent_isbase = false;
    mutable bool qplaintextedit_moveevent_isbase = false;
    mutable bool qplaintextedit_closeevent_isbase = false;
    mutable bool qplaintextedit_tabletevent_isbase = false;
    mutable bool qplaintextedit_actionevent_isbase = false;
    mutable bool qplaintextedit_hideevent_isbase = false;
    mutable bool qplaintextedit_nativeevent_isbase = false;
    mutable bool qplaintextedit_metric_isbase = false;
    mutable bool qplaintextedit_initpainter_isbase = false;
    mutable bool qplaintextedit_redirected_isbase = false;
    mutable bool qplaintextedit_sharedpainter_isbase = false;
    mutable bool qplaintextedit_childevent_isbase = false;
    mutable bool qplaintextedit_customevent_isbase = false;
    mutable bool qplaintextedit_connectnotify_isbase = false;
    mutable bool qplaintextedit_disconnectnotify_isbase = false;
    mutable bool qplaintextedit_firstvisibleblock_isbase = false;
    mutable bool qplaintextedit_contentoffset_isbase = false;
    mutable bool qplaintextedit_blockboundingrect_isbase = false;
    mutable bool qplaintextedit_blockboundinggeometry_isbase = false;
    mutable bool qplaintextedit_getpaintcontext_isbase = false;
    mutable bool qplaintextedit_zoominf_isbase = false;
    mutable bool qplaintextedit_setviewportmargins_isbase = false;
    mutable bool qplaintextedit_viewportmargins_isbase = false;
    mutable bool qplaintextedit_drawframe_isbase = false;
    mutable bool qplaintextedit_updatemicrofocus_isbase = false;
    mutable bool qplaintextedit_create_isbase = false;
    mutable bool qplaintextedit_destroy_isbase = false;
    mutable bool qplaintextedit_focusnextchild_isbase = false;
    mutable bool qplaintextedit_focuspreviouschild_isbase = false;
    mutable bool qplaintextedit_sender_isbase = false;
    mutable bool qplaintextedit_sendersignalindex_isbase = false;
    mutable bool qplaintextedit_receivers_isbase = false;
    mutable bool qplaintextedit_issignalconnected_isbase = false;

  public:
    VirtualQPlainTextEdit(QWidget* parent) : QPlainTextEdit(parent){};
    VirtualQPlainTextEdit() : QPlainTextEdit(){};
    VirtualQPlainTextEdit(const QString& text) : QPlainTextEdit(text){};
    VirtualQPlainTextEdit(const QString& text, QWidget* parent) : QPlainTextEdit(text, parent){};

    ~VirtualQPlainTextEdit() {
        qplaintextedit_metacall_callback = nullptr;
        qplaintextedit_loadresource_callback = nullptr;
        qplaintextedit_inputmethodquery_callback = nullptr;
        qplaintextedit_event_callback = nullptr;
        qplaintextedit_timerevent_callback = nullptr;
        qplaintextedit_keypressevent_callback = nullptr;
        qplaintextedit_keyreleaseevent_callback = nullptr;
        qplaintextedit_resizeevent_callback = nullptr;
        qplaintextedit_paintevent_callback = nullptr;
        qplaintextedit_mousepressevent_callback = nullptr;
        qplaintextedit_mousemoveevent_callback = nullptr;
        qplaintextedit_mousereleaseevent_callback = nullptr;
        qplaintextedit_mousedoubleclickevent_callback = nullptr;
        qplaintextedit_focusnextprevchild_callback = nullptr;
        qplaintextedit_contextmenuevent_callback = nullptr;
        qplaintextedit_dragenterevent_callback = nullptr;
        qplaintextedit_dragleaveevent_callback = nullptr;
        qplaintextedit_dragmoveevent_callback = nullptr;
        qplaintextedit_dropevent_callback = nullptr;
        qplaintextedit_focusinevent_callback = nullptr;
        qplaintextedit_focusoutevent_callback = nullptr;
        qplaintextedit_showevent_callback = nullptr;
        qplaintextedit_changeevent_callback = nullptr;
        qplaintextedit_wheelevent_callback = nullptr;
        qplaintextedit_createmimedatafromselection_callback = nullptr;
        qplaintextedit_caninsertfrommimedata_callback = nullptr;
        qplaintextedit_insertfrommimedata_callback = nullptr;
        qplaintextedit_inputmethodevent_callback = nullptr;
        qplaintextedit_scrollcontentsby_callback = nullptr;
        qplaintextedit_dosettextcursor_callback = nullptr;
        qplaintextedit_minimumsizehint_callback = nullptr;
        qplaintextedit_sizehint_callback = nullptr;
        qplaintextedit_setupviewport_callback = nullptr;
        qplaintextedit_eventfilter_callback = nullptr;
        qplaintextedit_viewportevent_callback = nullptr;
        qplaintextedit_viewportsizehint_callback = nullptr;
        qplaintextedit_initstyleoption_callback = nullptr;
        qplaintextedit_devtype_callback = nullptr;
        qplaintextedit_setvisible_callback = nullptr;
        qplaintextedit_heightforwidth_callback = nullptr;
        qplaintextedit_hasheightforwidth_callback = nullptr;
        qplaintextedit_paintengine_callback = nullptr;
        qplaintextedit_enterevent_callback = nullptr;
        qplaintextedit_leaveevent_callback = nullptr;
        qplaintextedit_moveevent_callback = nullptr;
        qplaintextedit_closeevent_callback = nullptr;
        qplaintextedit_tabletevent_callback = nullptr;
        qplaintextedit_actionevent_callback = nullptr;
        qplaintextedit_hideevent_callback = nullptr;
        qplaintextedit_nativeevent_callback = nullptr;
        qplaintextedit_metric_callback = nullptr;
        qplaintextedit_initpainter_callback = nullptr;
        qplaintextedit_redirected_callback = nullptr;
        qplaintextedit_sharedpainter_callback = nullptr;
        qplaintextedit_childevent_callback = nullptr;
        qplaintextedit_customevent_callback = nullptr;
        qplaintextedit_connectnotify_callback = nullptr;
        qplaintextedit_disconnectnotify_callback = nullptr;
        qplaintextedit_firstvisibleblock_callback = nullptr;
        qplaintextedit_contentoffset_callback = nullptr;
        qplaintextedit_blockboundingrect_callback = nullptr;
        qplaintextedit_blockboundinggeometry_callback = nullptr;
        qplaintextedit_getpaintcontext_callback = nullptr;
        qplaintextedit_zoominf_callback = nullptr;
        qplaintextedit_setviewportmargins_callback = nullptr;
        qplaintextedit_viewportmargins_callback = nullptr;
        qplaintextedit_drawframe_callback = nullptr;
        qplaintextedit_updatemicrofocus_callback = nullptr;
        qplaintextedit_create_callback = nullptr;
        qplaintextedit_destroy_callback = nullptr;
        qplaintextedit_focusnextchild_callback = nullptr;
        qplaintextedit_focuspreviouschild_callback = nullptr;
        qplaintextedit_sender_callback = nullptr;
        qplaintextedit_sendersignalindex_callback = nullptr;
        qplaintextedit_receivers_callback = nullptr;
        qplaintextedit_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQPlainTextEdit_Metacall_Callback(QPlainTextEdit_Metacall_Callback cb) { qplaintextedit_metacall_callback = cb; }
    void setQPlainTextEdit_LoadResource_Callback(QPlainTextEdit_LoadResource_Callback cb) { qplaintextedit_loadresource_callback = cb; }
    void setQPlainTextEdit_InputMethodQuery_Callback(QPlainTextEdit_InputMethodQuery_Callback cb) { qplaintextedit_inputmethodquery_callback = cb; }
    void setQPlainTextEdit_Event_Callback(QPlainTextEdit_Event_Callback cb) { qplaintextedit_event_callback = cb; }
    void setQPlainTextEdit_TimerEvent_Callback(QPlainTextEdit_TimerEvent_Callback cb) { qplaintextedit_timerevent_callback = cb; }
    void setQPlainTextEdit_KeyPressEvent_Callback(QPlainTextEdit_KeyPressEvent_Callback cb) { qplaintextedit_keypressevent_callback = cb; }
    void setQPlainTextEdit_KeyReleaseEvent_Callback(QPlainTextEdit_KeyReleaseEvent_Callback cb) { qplaintextedit_keyreleaseevent_callback = cb; }
    void setQPlainTextEdit_ResizeEvent_Callback(QPlainTextEdit_ResizeEvent_Callback cb) { qplaintextedit_resizeevent_callback = cb; }
    void setQPlainTextEdit_PaintEvent_Callback(QPlainTextEdit_PaintEvent_Callback cb) { qplaintextedit_paintevent_callback = cb; }
    void setQPlainTextEdit_MousePressEvent_Callback(QPlainTextEdit_MousePressEvent_Callback cb) { qplaintextedit_mousepressevent_callback = cb; }
    void setQPlainTextEdit_MouseMoveEvent_Callback(QPlainTextEdit_MouseMoveEvent_Callback cb) { qplaintextedit_mousemoveevent_callback = cb; }
    void setQPlainTextEdit_MouseReleaseEvent_Callback(QPlainTextEdit_MouseReleaseEvent_Callback cb) { qplaintextedit_mousereleaseevent_callback = cb; }
    void setQPlainTextEdit_MouseDoubleClickEvent_Callback(QPlainTextEdit_MouseDoubleClickEvent_Callback cb) { qplaintextedit_mousedoubleclickevent_callback = cb; }
    void setQPlainTextEdit_FocusNextPrevChild_Callback(QPlainTextEdit_FocusNextPrevChild_Callback cb) { qplaintextedit_focusnextprevchild_callback = cb; }
    void setQPlainTextEdit_ContextMenuEvent_Callback(QPlainTextEdit_ContextMenuEvent_Callback cb) { qplaintextedit_contextmenuevent_callback = cb; }
    void setQPlainTextEdit_DragEnterEvent_Callback(QPlainTextEdit_DragEnterEvent_Callback cb) { qplaintextedit_dragenterevent_callback = cb; }
    void setQPlainTextEdit_DragLeaveEvent_Callback(QPlainTextEdit_DragLeaveEvent_Callback cb) { qplaintextedit_dragleaveevent_callback = cb; }
    void setQPlainTextEdit_DragMoveEvent_Callback(QPlainTextEdit_DragMoveEvent_Callback cb) { qplaintextedit_dragmoveevent_callback = cb; }
    void setQPlainTextEdit_DropEvent_Callback(QPlainTextEdit_DropEvent_Callback cb) { qplaintextedit_dropevent_callback = cb; }
    void setQPlainTextEdit_FocusInEvent_Callback(QPlainTextEdit_FocusInEvent_Callback cb) { qplaintextedit_focusinevent_callback = cb; }
    void setQPlainTextEdit_FocusOutEvent_Callback(QPlainTextEdit_FocusOutEvent_Callback cb) { qplaintextedit_focusoutevent_callback = cb; }
    void setQPlainTextEdit_ShowEvent_Callback(QPlainTextEdit_ShowEvent_Callback cb) { qplaintextedit_showevent_callback = cb; }
    void setQPlainTextEdit_ChangeEvent_Callback(QPlainTextEdit_ChangeEvent_Callback cb) { qplaintextedit_changeevent_callback = cb; }
    void setQPlainTextEdit_WheelEvent_Callback(QPlainTextEdit_WheelEvent_Callback cb) { qplaintextedit_wheelevent_callback = cb; }
    void setQPlainTextEdit_CreateMimeDataFromSelection_Callback(QPlainTextEdit_CreateMimeDataFromSelection_Callback cb) { qplaintextedit_createmimedatafromselection_callback = cb; }
    void setQPlainTextEdit_CanInsertFromMimeData_Callback(QPlainTextEdit_CanInsertFromMimeData_Callback cb) { qplaintextedit_caninsertfrommimedata_callback = cb; }
    void setQPlainTextEdit_InsertFromMimeData_Callback(QPlainTextEdit_InsertFromMimeData_Callback cb) { qplaintextedit_insertfrommimedata_callback = cb; }
    void setQPlainTextEdit_InputMethodEvent_Callback(QPlainTextEdit_InputMethodEvent_Callback cb) { qplaintextedit_inputmethodevent_callback = cb; }
    void setQPlainTextEdit_ScrollContentsBy_Callback(QPlainTextEdit_ScrollContentsBy_Callback cb) { qplaintextedit_scrollcontentsby_callback = cb; }
    void setQPlainTextEdit_DoSetTextCursor_Callback(QPlainTextEdit_DoSetTextCursor_Callback cb) { qplaintextedit_dosettextcursor_callback = cb; }
    void setQPlainTextEdit_MinimumSizeHint_Callback(QPlainTextEdit_MinimumSizeHint_Callback cb) { qplaintextedit_minimumsizehint_callback = cb; }
    void setQPlainTextEdit_SizeHint_Callback(QPlainTextEdit_SizeHint_Callback cb) { qplaintextedit_sizehint_callback = cb; }
    void setQPlainTextEdit_SetupViewport_Callback(QPlainTextEdit_SetupViewport_Callback cb) { qplaintextedit_setupviewport_callback = cb; }
    void setQPlainTextEdit_EventFilter_Callback(QPlainTextEdit_EventFilter_Callback cb) { qplaintextedit_eventfilter_callback = cb; }
    void setQPlainTextEdit_ViewportEvent_Callback(QPlainTextEdit_ViewportEvent_Callback cb) { qplaintextedit_viewportevent_callback = cb; }
    void setQPlainTextEdit_ViewportSizeHint_Callback(QPlainTextEdit_ViewportSizeHint_Callback cb) { qplaintextedit_viewportsizehint_callback = cb; }
    void setQPlainTextEdit_InitStyleOption_Callback(QPlainTextEdit_InitStyleOption_Callback cb) { qplaintextedit_initstyleoption_callback = cb; }
    void setQPlainTextEdit_DevType_Callback(QPlainTextEdit_DevType_Callback cb) { qplaintextedit_devtype_callback = cb; }
    void setQPlainTextEdit_SetVisible_Callback(QPlainTextEdit_SetVisible_Callback cb) { qplaintextedit_setvisible_callback = cb; }
    void setQPlainTextEdit_HeightForWidth_Callback(QPlainTextEdit_HeightForWidth_Callback cb) { qplaintextedit_heightforwidth_callback = cb; }
    void setQPlainTextEdit_HasHeightForWidth_Callback(QPlainTextEdit_HasHeightForWidth_Callback cb) { qplaintextedit_hasheightforwidth_callback = cb; }
    void setQPlainTextEdit_PaintEngine_Callback(QPlainTextEdit_PaintEngine_Callback cb) { qplaintextedit_paintengine_callback = cb; }
    void setQPlainTextEdit_EnterEvent_Callback(QPlainTextEdit_EnterEvent_Callback cb) { qplaintextedit_enterevent_callback = cb; }
    void setQPlainTextEdit_LeaveEvent_Callback(QPlainTextEdit_LeaveEvent_Callback cb) { qplaintextedit_leaveevent_callback = cb; }
    void setQPlainTextEdit_MoveEvent_Callback(QPlainTextEdit_MoveEvent_Callback cb) { qplaintextedit_moveevent_callback = cb; }
    void setQPlainTextEdit_CloseEvent_Callback(QPlainTextEdit_CloseEvent_Callback cb) { qplaintextedit_closeevent_callback = cb; }
    void setQPlainTextEdit_TabletEvent_Callback(QPlainTextEdit_TabletEvent_Callback cb) { qplaintextedit_tabletevent_callback = cb; }
    void setQPlainTextEdit_ActionEvent_Callback(QPlainTextEdit_ActionEvent_Callback cb) { qplaintextedit_actionevent_callback = cb; }
    void setQPlainTextEdit_HideEvent_Callback(QPlainTextEdit_HideEvent_Callback cb) { qplaintextedit_hideevent_callback = cb; }
    void setQPlainTextEdit_NativeEvent_Callback(QPlainTextEdit_NativeEvent_Callback cb) { qplaintextedit_nativeevent_callback = cb; }
    void setQPlainTextEdit_Metric_Callback(QPlainTextEdit_Metric_Callback cb) { qplaintextedit_metric_callback = cb; }
    void setQPlainTextEdit_InitPainter_Callback(QPlainTextEdit_InitPainter_Callback cb) { qplaintextedit_initpainter_callback = cb; }
    void setQPlainTextEdit_Redirected_Callback(QPlainTextEdit_Redirected_Callback cb) { qplaintextedit_redirected_callback = cb; }
    void setQPlainTextEdit_SharedPainter_Callback(QPlainTextEdit_SharedPainter_Callback cb) { qplaintextedit_sharedpainter_callback = cb; }
    void setQPlainTextEdit_ChildEvent_Callback(QPlainTextEdit_ChildEvent_Callback cb) { qplaintextedit_childevent_callback = cb; }
    void setQPlainTextEdit_CustomEvent_Callback(QPlainTextEdit_CustomEvent_Callback cb) { qplaintextedit_customevent_callback = cb; }
    void setQPlainTextEdit_ConnectNotify_Callback(QPlainTextEdit_ConnectNotify_Callback cb) { qplaintextedit_connectnotify_callback = cb; }
    void setQPlainTextEdit_DisconnectNotify_Callback(QPlainTextEdit_DisconnectNotify_Callback cb) { qplaintextedit_disconnectnotify_callback = cb; }
    void setQPlainTextEdit_FirstVisibleBlock_Callback(QPlainTextEdit_FirstVisibleBlock_Callback cb) { qplaintextedit_firstvisibleblock_callback = cb; }
    void setQPlainTextEdit_ContentOffset_Callback(QPlainTextEdit_ContentOffset_Callback cb) { qplaintextedit_contentoffset_callback = cb; }
    void setQPlainTextEdit_BlockBoundingRect_Callback(QPlainTextEdit_BlockBoundingRect_Callback cb) { qplaintextedit_blockboundingrect_callback = cb; }
    void setQPlainTextEdit_BlockBoundingGeometry_Callback(QPlainTextEdit_BlockBoundingGeometry_Callback cb) { qplaintextedit_blockboundinggeometry_callback = cb; }
    void setQPlainTextEdit_GetPaintContext_Callback(QPlainTextEdit_GetPaintContext_Callback cb) { qplaintextedit_getpaintcontext_callback = cb; }
    void setQPlainTextEdit_ZoomInF_Callback(QPlainTextEdit_ZoomInF_Callback cb) { qplaintextedit_zoominf_callback = cb; }
    void setQPlainTextEdit_SetViewportMargins_Callback(QPlainTextEdit_SetViewportMargins_Callback cb) { qplaintextedit_setviewportmargins_callback = cb; }
    void setQPlainTextEdit_ViewportMargins_Callback(QPlainTextEdit_ViewportMargins_Callback cb) { qplaintextedit_viewportmargins_callback = cb; }
    void setQPlainTextEdit_DrawFrame_Callback(QPlainTextEdit_DrawFrame_Callback cb) { qplaintextedit_drawframe_callback = cb; }
    void setQPlainTextEdit_UpdateMicroFocus_Callback(QPlainTextEdit_UpdateMicroFocus_Callback cb) { qplaintextedit_updatemicrofocus_callback = cb; }
    void setQPlainTextEdit_Create_Callback(QPlainTextEdit_Create_Callback cb) { qplaintextedit_create_callback = cb; }
    void setQPlainTextEdit_Destroy_Callback(QPlainTextEdit_Destroy_Callback cb) { qplaintextedit_destroy_callback = cb; }
    void setQPlainTextEdit_FocusNextChild_Callback(QPlainTextEdit_FocusNextChild_Callback cb) { qplaintextedit_focusnextchild_callback = cb; }
    void setQPlainTextEdit_FocusPreviousChild_Callback(QPlainTextEdit_FocusPreviousChild_Callback cb) { qplaintextedit_focuspreviouschild_callback = cb; }
    void setQPlainTextEdit_Sender_Callback(QPlainTextEdit_Sender_Callback cb) { qplaintextedit_sender_callback = cb; }
    void setQPlainTextEdit_SenderSignalIndex_Callback(QPlainTextEdit_SenderSignalIndex_Callback cb) { qplaintextedit_sendersignalindex_callback = cb; }
    void setQPlainTextEdit_Receivers_Callback(QPlainTextEdit_Receivers_Callback cb) { qplaintextedit_receivers_callback = cb; }
    void setQPlainTextEdit_IsSignalConnected_Callback(QPlainTextEdit_IsSignalConnected_Callback cb) { qplaintextedit_issignalconnected_callback = cb; }

    // Base flag setters
    void setQPlainTextEdit_Metacall_IsBase(bool value) const { qplaintextedit_metacall_isbase = value; }
    void setQPlainTextEdit_LoadResource_IsBase(bool value) const { qplaintextedit_loadresource_isbase = value; }
    void setQPlainTextEdit_InputMethodQuery_IsBase(bool value) const { qplaintextedit_inputmethodquery_isbase = value; }
    void setQPlainTextEdit_Event_IsBase(bool value) const { qplaintextedit_event_isbase = value; }
    void setQPlainTextEdit_TimerEvent_IsBase(bool value) const { qplaintextedit_timerevent_isbase = value; }
    void setQPlainTextEdit_KeyPressEvent_IsBase(bool value) const { qplaintextedit_keypressevent_isbase = value; }
    void setQPlainTextEdit_KeyReleaseEvent_IsBase(bool value) const { qplaintextedit_keyreleaseevent_isbase = value; }
    void setQPlainTextEdit_ResizeEvent_IsBase(bool value) const { qplaintextedit_resizeevent_isbase = value; }
    void setQPlainTextEdit_PaintEvent_IsBase(bool value) const { qplaintextedit_paintevent_isbase = value; }
    void setQPlainTextEdit_MousePressEvent_IsBase(bool value) const { qplaintextedit_mousepressevent_isbase = value; }
    void setQPlainTextEdit_MouseMoveEvent_IsBase(bool value) const { qplaintextedit_mousemoveevent_isbase = value; }
    void setQPlainTextEdit_MouseReleaseEvent_IsBase(bool value) const { qplaintextedit_mousereleaseevent_isbase = value; }
    void setQPlainTextEdit_MouseDoubleClickEvent_IsBase(bool value) const { qplaintextedit_mousedoubleclickevent_isbase = value; }
    void setQPlainTextEdit_FocusNextPrevChild_IsBase(bool value) const { qplaintextedit_focusnextprevchild_isbase = value; }
    void setQPlainTextEdit_ContextMenuEvent_IsBase(bool value) const { qplaintextedit_contextmenuevent_isbase = value; }
    void setQPlainTextEdit_DragEnterEvent_IsBase(bool value) const { qplaintextedit_dragenterevent_isbase = value; }
    void setQPlainTextEdit_DragLeaveEvent_IsBase(bool value) const { qplaintextedit_dragleaveevent_isbase = value; }
    void setQPlainTextEdit_DragMoveEvent_IsBase(bool value) const { qplaintextedit_dragmoveevent_isbase = value; }
    void setQPlainTextEdit_DropEvent_IsBase(bool value) const { qplaintextedit_dropevent_isbase = value; }
    void setQPlainTextEdit_FocusInEvent_IsBase(bool value) const { qplaintextedit_focusinevent_isbase = value; }
    void setQPlainTextEdit_FocusOutEvent_IsBase(bool value) const { qplaintextedit_focusoutevent_isbase = value; }
    void setQPlainTextEdit_ShowEvent_IsBase(bool value) const { qplaintextedit_showevent_isbase = value; }
    void setQPlainTextEdit_ChangeEvent_IsBase(bool value) const { qplaintextedit_changeevent_isbase = value; }
    void setQPlainTextEdit_WheelEvent_IsBase(bool value) const { qplaintextedit_wheelevent_isbase = value; }
    void setQPlainTextEdit_CreateMimeDataFromSelection_IsBase(bool value) const { qplaintextedit_createmimedatafromselection_isbase = value; }
    void setQPlainTextEdit_CanInsertFromMimeData_IsBase(bool value) const { qplaintextedit_caninsertfrommimedata_isbase = value; }
    void setQPlainTextEdit_InsertFromMimeData_IsBase(bool value) const { qplaintextedit_insertfrommimedata_isbase = value; }
    void setQPlainTextEdit_InputMethodEvent_IsBase(bool value) const { qplaintextedit_inputmethodevent_isbase = value; }
    void setQPlainTextEdit_ScrollContentsBy_IsBase(bool value) const { qplaintextedit_scrollcontentsby_isbase = value; }
    void setQPlainTextEdit_DoSetTextCursor_IsBase(bool value) const { qplaintextedit_dosettextcursor_isbase = value; }
    void setQPlainTextEdit_MinimumSizeHint_IsBase(bool value) const { qplaintextedit_minimumsizehint_isbase = value; }
    void setQPlainTextEdit_SizeHint_IsBase(bool value) const { qplaintextedit_sizehint_isbase = value; }
    void setQPlainTextEdit_SetupViewport_IsBase(bool value) const { qplaintextedit_setupviewport_isbase = value; }
    void setQPlainTextEdit_EventFilter_IsBase(bool value) const { qplaintextedit_eventfilter_isbase = value; }
    void setQPlainTextEdit_ViewportEvent_IsBase(bool value) const { qplaintextedit_viewportevent_isbase = value; }
    void setQPlainTextEdit_ViewportSizeHint_IsBase(bool value) const { qplaintextedit_viewportsizehint_isbase = value; }
    void setQPlainTextEdit_InitStyleOption_IsBase(bool value) const { qplaintextedit_initstyleoption_isbase = value; }
    void setQPlainTextEdit_DevType_IsBase(bool value) const { qplaintextedit_devtype_isbase = value; }
    void setQPlainTextEdit_SetVisible_IsBase(bool value) const { qplaintextedit_setvisible_isbase = value; }
    void setQPlainTextEdit_HeightForWidth_IsBase(bool value) const { qplaintextedit_heightforwidth_isbase = value; }
    void setQPlainTextEdit_HasHeightForWidth_IsBase(bool value) const { qplaintextedit_hasheightforwidth_isbase = value; }
    void setQPlainTextEdit_PaintEngine_IsBase(bool value) const { qplaintextedit_paintengine_isbase = value; }
    void setQPlainTextEdit_EnterEvent_IsBase(bool value) const { qplaintextedit_enterevent_isbase = value; }
    void setQPlainTextEdit_LeaveEvent_IsBase(bool value) const { qplaintextedit_leaveevent_isbase = value; }
    void setQPlainTextEdit_MoveEvent_IsBase(bool value) const { qplaintextedit_moveevent_isbase = value; }
    void setQPlainTextEdit_CloseEvent_IsBase(bool value) const { qplaintextedit_closeevent_isbase = value; }
    void setQPlainTextEdit_TabletEvent_IsBase(bool value) const { qplaintextedit_tabletevent_isbase = value; }
    void setQPlainTextEdit_ActionEvent_IsBase(bool value) const { qplaintextedit_actionevent_isbase = value; }
    void setQPlainTextEdit_HideEvent_IsBase(bool value) const { qplaintextedit_hideevent_isbase = value; }
    void setQPlainTextEdit_NativeEvent_IsBase(bool value) const { qplaintextedit_nativeevent_isbase = value; }
    void setQPlainTextEdit_Metric_IsBase(bool value) const { qplaintextedit_metric_isbase = value; }
    void setQPlainTextEdit_InitPainter_IsBase(bool value) const { qplaintextedit_initpainter_isbase = value; }
    void setQPlainTextEdit_Redirected_IsBase(bool value) const { qplaintextedit_redirected_isbase = value; }
    void setQPlainTextEdit_SharedPainter_IsBase(bool value) const { qplaintextedit_sharedpainter_isbase = value; }
    void setQPlainTextEdit_ChildEvent_IsBase(bool value) const { qplaintextedit_childevent_isbase = value; }
    void setQPlainTextEdit_CustomEvent_IsBase(bool value) const { qplaintextedit_customevent_isbase = value; }
    void setQPlainTextEdit_ConnectNotify_IsBase(bool value) const { qplaintextedit_connectnotify_isbase = value; }
    void setQPlainTextEdit_DisconnectNotify_IsBase(bool value) const { qplaintextedit_disconnectnotify_isbase = value; }
    void setQPlainTextEdit_FirstVisibleBlock_IsBase(bool value) const { qplaintextedit_firstvisibleblock_isbase = value; }
    void setQPlainTextEdit_ContentOffset_IsBase(bool value) const { qplaintextedit_contentoffset_isbase = value; }
    void setQPlainTextEdit_BlockBoundingRect_IsBase(bool value) const { qplaintextedit_blockboundingrect_isbase = value; }
    void setQPlainTextEdit_BlockBoundingGeometry_IsBase(bool value) const { qplaintextedit_blockboundinggeometry_isbase = value; }
    void setQPlainTextEdit_GetPaintContext_IsBase(bool value) const { qplaintextedit_getpaintcontext_isbase = value; }
    void setQPlainTextEdit_ZoomInF_IsBase(bool value) const { qplaintextedit_zoominf_isbase = value; }
    void setQPlainTextEdit_SetViewportMargins_IsBase(bool value) const { qplaintextedit_setviewportmargins_isbase = value; }
    void setQPlainTextEdit_ViewportMargins_IsBase(bool value) const { qplaintextedit_viewportmargins_isbase = value; }
    void setQPlainTextEdit_DrawFrame_IsBase(bool value) const { qplaintextedit_drawframe_isbase = value; }
    void setQPlainTextEdit_UpdateMicroFocus_IsBase(bool value) const { qplaintextedit_updatemicrofocus_isbase = value; }
    void setQPlainTextEdit_Create_IsBase(bool value) const { qplaintextedit_create_isbase = value; }
    void setQPlainTextEdit_Destroy_IsBase(bool value) const { qplaintextedit_destroy_isbase = value; }
    void setQPlainTextEdit_FocusNextChild_IsBase(bool value) const { qplaintextedit_focusnextchild_isbase = value; }
    void setQPlainTextEdit_FocusPreviousChild_IsBase(bool value) const { qplaintextedit_focuspreviouschild_isbase = value; }
    void setQPlainTextEdit_Sender_IsBase(bool value) const { qplaintextedit_sender_isbase = value; }
    void setQPlainTextEdit_SenderSignalIndex_IsBase(bool value) const { qplaintextedit_sendersignalindex_isbase = value; }
    void setQPlainTextEdit_Receivers_IsBase(bool value) const { qplaintextedit_receivers_isbase = value; }
    void setQPlainTextEdit_IsSignalConnected_IsBase(bool value) const { qplaintextedit_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qplaintextedit_metacall_isbase) {
            qplaintextedit_metacall_isbase = false;
            return QPlainTextEdit::qt_metacall(param1, param2, param3);
        } else if (qplaintextedit_metacall_callback != nullptr) {
            return qplaintextedit_metacall_callback(this, param1, param2, param3);
        } else {
            return QPlainTextEdit::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant loadResource(int typeVal, const QUrl& name) override {
        if (qplaintextedit_loadresource_isbase) {
            qplaintextedit_loadresource_isbase = false;
            return QPlainTextEdit::loadResource(typeVal, name);
        } else if (qplaintextedit_loadresource_callback != nullptr) {
            return qplaintextedit_loadresource_callback(this, typeVal, name);
        } else {
            return QPlainTextEdit::loadResource(typeVal, name);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery property) const override {
        if (qplaintextedit_inputmethodquery_isbase) {
            qplaintextedit_inputmethodquery_isbase = false;
            return QPlainTextEdit::inputMethodQuery(property);
        } else if (qplaintextedit_inputmethodquery_callback != nullptr) {
            return qplaintextedit_inputmethodquery_callback(this, property);
        } else {
            return QPlainTextEdit::inputMethodQuery(property);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qplaintextedit_event_isbase) {
            qplaintextedit_event_isbase = false;
            return QPlainTextEdit::event(e);
        } else if (qplaintextedit_event_callback != nullptr) {
            return qplaintextedit_event_callback(this, e);
        } else {
            return QPlainTextEdit::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (qplaintextedit_timerevent_isbase) {
            qplaintextedit_timerevent_isbase = false;
            QPlainTextEdit::timerEvent(e);
        } else if (qplaintextedit_timerevent_callback != nullptr) {
            qplaintextedit_timerevent_callback(this, e);
        } else {
            QPlainTextEdit::timerEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* e) override {
        if (qplaintextedit_keypressevent_isbase) {
            qplaintextedit_keypressevent_isbase = false;
            QPlainTextEdit::keyPressEvent(e);
        } else if (qplaintextedit_keypressevent_callback != nullptr) {
            qplaintextedit_keypressevent_callback(this, e);
        } else {
            QPlainTextEdit::keyPressEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* e) override {
        if (qplaintextedit_keyreleaseevent_isbase) {
            qplaintextedit_keyreleaseevent_isbase = false;
            QPlainTextEdit::keyReleaseEvent(e);
        } else if (qplaintextedit_keyreleaseevent_callback != nullptr) {
            qplaintextedit_keyreleaseevent_callback(this, e);
        } else {
            QPlainTextEdit::keyReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (qplaintextedit_resizeevent_isbase) {
            qplaintextedit_resizeevent_isbase = false;
            QPlainTextEdit::resizeEvent(e);
        } else if (qplaintextedit_resizeevent_callback != nullptr) {
            qplaintextedit_resizeevent_callback(this, e);
        } else {
            QPlainTextEdit::resizeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (qplaintextedit_paintevent_isbase) {
            qplaintextedit_paintevent_isbase = false;
            QPlainTextEdit::paintEvent(e);
        } else if (qplaintextedit_paintevent_callback != nullptr) {
            qplaintextedit_paintevent_callback(this, e);
        } else {
            QPlainTextEdit::paintEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* e) override {
        if (qplaintextedit_mousepressevent_isbase) {
            qplaintextedit_mousepressevent_isbase = false;
            QPlainTextEdit::mousePressEvent(e);
        } else if (qplaintextedit_mousepressevent_callback != nullptr) {
            qplaintextedit_mousepressevent_callback(this, e);
        } else {
            QPlainTextEdit::mousePressEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (qplaintextedit_mousemoveevent_isbase) {
            qplaintextedit_mousemoveevent_isbase = false;
            QPlainTextEdit::mouseMoveEvent(e);
        } else if (qplaintextedit_mousemoveevent_callback != nullptr) {
            qplaintextedit_mousemoveevent_callback(this, e);
        } else {
            QPlainTextEdit::mouseMoveEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (qplaintextedit_mousereleaseevent_isbase) {
            qplaintextedit_mousereleaseevent_isbase = false;
            QPlainTextEdit::mouseReleaseEvent(e);
        } else if (qplaintextedit_mousereleaseevent_callback != nullptr) {
            qplaintextedit_mousereleaseevent_callback(this, e);
        } else {
            QPlainTextEdit::mouseReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* e) override {
        if (qplaintextedit_mousedoubleclickevent_isbase) {
            qplaintextedit_mousedoubleclickevent_isbase = false;
            QPlainTextEdit::mouseDoubleClickEvent(e);
        } else if (qplaintextedit_mousedoubleclickevent_callback != nullptr) {
            qplaintextedit_mousedoubleclickevent_callback(this, e);
        } else {
            QPlainTextEdit::mouseDoubleClickEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qplaintextedit_focusnextprevchild_isbase) {
            qplaintextedit_focusnextprevchild_isbase = false;
            return QPlainTextEdit::focusNextPrevChild(next);
        } else if (qplaintextedit_focusnextprevchild_callback != nullptr) {
            return qplaintextedit_focusnextprevchild_callback(this, next);
        } else {
            return QPlainTextEdit::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* e) override {
        if (qplaintextedit_contextmenuevent_isbase) {
            qplaintextedit_contextmenuevent_isbase = false;
            QPlainTextEdit::contextMenuEvent(e);
        } else if (qplaintextedit_contextmenuevent_callback != nullptr) {
            qplaintextedit_contextmenuevent_callback(this, e);
        } else {
            QPlainTextEdit::contextMenuEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* e) override {
        if (qplaintextedit_dragenterevent_isbase) {
            qplaintextedit_dragenterevent_isbase = false;
            QPlainTextEdit::dragEnterEvent(e);
        } else if (qplaintextedit_dragenterevent_callback != nullptr) {
            qplaintextedit_dragenterevent_callback(this, e);
        } else {
            QPlainTextEdit::dragEnterEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
        if (qplaintextedit_dragleaveevent_isbase) {
            qplaintextedit_dragleaveevent_isbase = false;
            QPlainTextEdit::dragLeaveEvent(e);
        } else if (qplaintextedit_dragleaveevent_callback != nullptr) {
            qplaintextedit_dragleaveevent_callback(this, e);
        } else {
            QPlainTextEdit::dragLeaveEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* e) override {
        if (qplaintextedit_dragmoveevent_isbase) {
            qplaintextedit_dragmoveevent_isbase = false;
            QPlainTextEdit::dragMoveEvent(e);
        } else if (qplaintextedit_dragmoveevent_callback != nullptr) {
            qplaintextedit_dragmoveevent_callback(this, e);
        } else {
            QPlainTextEdit::dragMoveEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* e) override {
        if (qplaintextedit_dropevent_isbase) {
            qplaintextedit_dropevent_isbase = false;
            QPlainTextEdit::dropEvent(e);
        } else if (qplaintextedit_dropevent_callback != nullptr) {
            qplaintextedit_dropevent_callback(this, e);
        } else {
            QPlainTextEdit::dropEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* e) override {
        if (qplaintextedit_focusinevent_isbase) {
            qplaintextedit_focusinevent_isbase = false;
            QPlainTextEdit::focusInEvent(e);
        } else if (qplaintextedit_focusinevent_callback != nullptr) {
            qplaintextedit_focusinevent_callback(this, e);
        } else {
            QPlainTextEdit::focusInEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* e) override {
        if (qplaintextedit_focusoutevent_isbase) {
            qplaintextedit_focusoutevent_isbase = false;
            QPlainTextEdit::focusOutEvent(e);
        } else if (qplaintextedit_focusoutevent_callback != nullptr) {
            qplaintextedit_focusoutevent_callback(this, e);
        } else {
            QPlainTextEdit::focusOutEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* param1) override {
        if (qplaintextedit_showevent_isbase) {
            qplaintextedit_showevent_isbase = false;
            QPlainTextEdit::showEvent(param1);
        } else if (qplaintextedit_showevent_callback != nullptr) {
            qplaintextedit_showevent_callback(this, param1);
        } else {
            QPlainTextEdit::showEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* e) override {
        if (qplaintextedit_changeevent_isbase) {
            qplaintextedit_changeevent_isbase = false;
            QPlainTextEdit::changeEvent(e);
        } else if (qplaintextedit_changeevent_callback != nullptr) {
            qplaintextedit_changeevent_callback(this, e);
        } else {
            QPlainTextEdit::changeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (qplaintextedit_wheelevent_isbase) {
            qplaintextedit_wheelevent_isbase = false;
            QPlainTextEdit::wheelEvent(e);
        } else if (qplaintextedit_wheelevent_callback != nullptr) {
            qplaintextedit_wheelevent_callback(this, e);
        } else {
            QPlainTextEdit::wheelEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* createMimeDataFromSelection() const override {
        if (qplaintextedit_createmimedatafromselection_isbase) {
            qplaintextedit_createmimedatafromselection_isbase = false;
            return QPlainTextEdit::createMimeDataFromSelection();
        } else if (qplaintextedit_createmimedatafromselection_callback != nullptr) {
            return qplaintextedit_createmimedatafromselection_callback();
        } else {
            return QPlainTextEdit::createMimeDataFromSelection();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canInsertFromMimeData(const QMimeData* source) const override {
        if (qplaintextedit_caninsertfrommimedata_isbase) {
            qplaintextedit_caninsertfrommimedata_isbase = false;
            return QPlainTextEdit::canInsertFromMimeData(source);
        } else if (qplaintextedit_caninsertfrommimedata_callback != nullptr) {
            return qplaintextedit_caninsertfrommimedata_callback(this, source);
        } else {
            return QPlainTextEdit::canInsertFromMimeData(source);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void insertFromMimeData(const QMimeData* source) override {
        if (qplaintextedit_insertfrommimedata_isbase) {
            qplaintextedit_insertfrommimedata_isbase = false;
            QPlainTextEdit::insertFromMimeData(source);
        } else if (qplaintextedit_insertfrommimedata_callback != nullptr) {
            qplaintextedit_insertfrommimedata_callback(this, source);
        } else {
            QPlainTextEdit::insertFromMimeData(source);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qplaintextedit_inputmethodevent_isbase) {
            qplaintextedit_inputmethodevent_isbase = false;
            QPlainTextEdit::inputMethodEvent(param1);
        } else if (qplaintextedit_inputmethodevent_callback != nullptr) {
            qplaintextedit_inputmethodevent_callback(this, param1);
        } else {
            QPlainTextEdit::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (qplaintextedit_scrollcontentsby_isbase) {
            qplaintextedit_scrollcontentsby_isbase = false;
            QPlainTextEdit::scrollContentsBy(dx, dy);
        } else if (qplaintextedit_scrollcontentsby_callback != nullptr) {
            qplaintextedit_scrollcontentsby_callback(this, dx, dy);
        } else {
            QPlainTextEdit::scrollContentsBy(dx, dy);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void doSetTextCursor(const QTextCursor& cursor) override {
        if (qplaintextedit_dosettextcursor_isbase) {
            qplaintextedit_dosettextcursor_isbase = false;
            QPlainTextEdit::doSetTextCursor(cursor);
        } else if (qplaintextedit_dosettextcursor_callback != nullptr) {
            qplaintextedit_dosettextcursor_callback(this, cursor);
        } else {
            QPlainTextEdit::doSetTextCursor(cursor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qplaintextedit_minimumsizehint_isbase) {
            qplaintextedit_minimumsizehint_isbase = false;
            return QPlainTextEdit::minimumSizeHint();
        } else if (qplaintextedit_minimumsizehint_callback != nullptr) {
            return qplaintextedit_minimumsizehint_callback();
        } else {
            return QPlainTextEdit::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qplaintextedit_sizehint_isbase) {
            qplaintextedit_sizehint_isbase = false;
            return QPlainTextEdit::sizeHint();
        } else if (qplaintextedit_sizehint_callback != nullptr) {
            return qplaintextedit_sizehint_callback();
        } else {
            return QPlainTextEdit::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (qplaintextedit_setupviewport_isbase) {
            qplaintextedit_setupviewport_isbase = false;
            QPlainTextEdit::setupViewport(viewport);
        } else if (qplaintextedit_setupviewport_callback != nullptr) {
            qplaintextedit_setupviewport_callback(this, viewport);
        } else {
            QPlainTextEdit::setupViewport(viewport);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* param1, QEvent* param2) override {
        if (qplaintextedit_eventfilter_isbase) {
            qplaintextedit_eventfilter_isbase = false;
            return QPlainTextEdit::eventFilter(param1, param2);
        } else if (qplaintextedit_eventfilter_callback != nullptr) {
            return qplaintextedit_eventfilter_callback(this, param1, param2);
        } else {
            return QPlainTextEdit::eventFilter(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* param1) override {
        if (qplaintextedit_viewportevent_isbase) {
            qplaintextedit_viewportevent_isbase = false;
            return QPlainTextEdit::viewportEvent(param1);
        } else if (qplaintextedit_viewportevent_callback != nullptr) {
            return qplaintextedit_viewportevent_callback(this, param1);
        } else {
            return QPlainTextEdit::viewportEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (qplaintextedit_viewportsizehint_isbase) {
            qplaintextedit_viewportsizehint_isbase = false;
            return QPlainTextEdit::viewportSizeHint();
        } else if (qplaintextedit_viewportsizehint_callback != nullptr) {
            return qplaintextedit_viewportsizehint_callback();
        } else {
            return QPlainTextEdit::viewportSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qplaintextedit_initstyleoption_isbase) {
            qplaintextedit_initstyleoption_isbase = false;
            QPlainTextEdit::initStyleOption(option);
        } else if (qplaintextedit_initstyleoption_callback != nullptr) {
            qplaintextedit_initstyleoption_callback(this, option);
        } else {
            QPlainTextEdit::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qplaintextedit_devtype_isbase) {
            qplaintextedit_devtype_isbase = false;
            return QPlainTextEdit::devType();
        } else if (qplaintextedit_devtype_callback != nullptr) {
            return qplaintextedit_devtype_callback();
        } else {
            return QPlainTextEdit::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qplaintextedit_setvisible_isbase) {
            qplaintextedit_setvisible_isbase = false;
            QPlainTextEdit::setVisible(visible);
        } else if (qplaintextedit_setvisible_callback != nullptr) {
            qplaintextedit_setvisible_callback(this, visible);
        } else {
            QPlainTextEdit::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qplaintextedit_heightforwidth_isbase) {
            qplaintextedit_heightforwidth_isbase = false;
            return QPlainTextEdit::heightForWidth(param1);
        } else if (qplaintextedit_heightforwidth_callback != nullptr) {
            return qplaintextedit_heightforwidth_callback(this, param1);
        } else {
            return QPlainTextEdit::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qplaintextedit_hasheightforwidth_isbase) {
            qplaintextedit_hasheightforwidth_isbase = false;
            return QPlainTextEdit::hasHeightForWidth();
        } else if (qplaintextedit_hasheightforwidth_callback != nullptr) {
            return qplaintextedit_hasheightforwidth_callback();
        } else {
            return QPlainTextEdit::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qplaintextedit_paintengine_isbase) {
            qplaintextedit_paintengine_isbase = false;
            return QPlainTextEdit::paintEngine();
        } else if (qplaintextedit_paintengine_callback != nullptr) {
            return qplaintextedit_paintengine_callback();
        } else {
            return QPlainTextEdit::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qplaintextedit_enterevent_isbase) {
            qplaintextedit_enterevent_isbase = false;
            QPlainTextEdit::enterEvent(event);
        } else if (qplaintextedit_enterevent_callback != nullptr) {
            qplaintextedit_enterevent_callback(this, event);
        } else {
            QPlainTextEdit::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qplaintextedit_leaveevent_isbase) {
            qplaintextedit_leaveevent_isbase = false;
            QPlainTextEdit::leaveEvent(event);
        } else if (qplaintextedit_leaveevent_callback != nullptr) {
            qplaintextedit_leaveevent_callback(this, event);
        } else {
            QPlainTextEdit::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qplaintextedit_moveevent_isbase) {
            qplaintextedit_moveevent_isbase = false;
            QPlainTextEdit::moveEvent(event);
        } else if (qplaintextedit_moveevent_callback != nullptr) {
            qplaintextedit_moveevent_callback(this, event);
        } else {
            QPlainTextEdit::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qplaintextedit_closeevent_isbase) {
            qplaintextedit_closeevent_isbase = false;
            QPlainTextEdit::closeEvent(event);
        } else if (qplaintextedit_closeevent_callback != nullptr) {
            qplaintextedit_closeevent_callback(this, event);
        } else {
            QPlainTextEdit::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qplaintextedit_tabletevent_isbase) {
            qplaintextedit_tabletevent_isbase = false;
            QPlainTextEdit::tabletEvent(event);
        } else if (qplaintextedit_tabletevent_callback != nullptr) {
            qplaintextedit_tabletevent_callback(this, event);
        } else {
            QPlainTextEdit::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qplaintextedit_actionevent_isbase) {
            qplaintextedit_actionevent_isbase = false;
            QPlainTextEdit::actionEvent(event);
        } else if (qplaintextedit_actionevent_callback != nullptr) {
            qplaintextedit_actionevent_callback(this, event);
        } else {
            QPlainTextEdit::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qplaintextedit_hideevent_isbase) {
            qplaintextedit_hideevent_isbase = false;
            QPlainTextEdit::hideEvent(event);
        } else if (qplaintextedit_hideevent_callback != nullptr) {
            qplaintextedit_hideevent_callback(this, event);
        } else {
            QPlainTextEdit::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qplaintextedit_nativeevent_isbase) {
            qplaintextedit_nativeevent_isbase = false;
            return QPlainTextEdit::nativeEvent(eventType, message, result);
        } else if (qplaintextedit_nativeevent_callback != nullptr) {
            return qplaintextedit_nativeevent_callback(this, eventType, message, result);
        } else {
            return QPlainTextEdit::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qplaintextedit_metric_isbase) {
            qplaintextedit_metric_isbase = false;
            return QPlainTextEdit::metric(param1);
        } else if (qplaintextedit_metric_callback != nullptr) {
            return qplaintextedit_metric_callback(this, param1);
        } else {
            return QPlainTextEdit::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qplaintextedit_initpainter_isbase) {
            qplaintextedit_initpainter_isbase = false;
            QPlainTextEdit::initPainter(painter);
        } else if (qplaintextedit_initpainter_callback != nullptr) {
            qplaintextedit_initpainter_callback(this, painter);
        } else {
            QPlainTextEdit::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qplaintextedit_redirected_isbase) {
            qplaintextedit_redirected_isbase = false;
            return QPlainTextEdit::redirected(offset);
        } else if (qplaintextedit_redirected_callback != nullptr) {
            return qplaintextedit_redirected_callback(this, offset);
        } else {
            return QPlainTextEdit::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qplaintextedit_sharedpainter_isbase) {
            qplaintextedit_sharedpainter_isbase = false;
            return QPlainTextEdit::sharedPainter();
        } else if (qplaintextedit_sharedpainter_callback != nullptr) {
            return qplaintextedit_sharedpainter_callback();
        } else {
            return QPlainTextEdit::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qplaintextedit_childevent_isbase) {
            qplaintextedit_childevent_isbase = false;
            QPlainTextEdit::childEvent(event);
        } else if (qplaintextedit_childevent_callback != nullptr) {
            qplaintextedit_childevent_callback(this, event);
        } else {
            QPlainTextEdit::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qplaintextedit_customevent_isbase) {
            qplaintextedit_customevent_isbase = false;
            QPlainTextEdit::customEvent(event);
        } else if (qplaintextedit_customevent_callback != nullptr) {
            qplaintextedit_customevent_callback(this, event);
        } else {
            QPlainTextEdit::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qplaintextedit_connectnotify_isbase) {
            qplaintextedit_connectnotify_isbase = false;
            QPlainTextEdit::connectNotify(signal);
        } else if (qplaintextedit_connectnotify_callback != nullptr) {
            qplaintextedit_connectnotify_callback(this, signal);
        } else {
            QPlainTextEdit::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qplaintextedit_disconnectnotify_isbase) {
            qplaintextedit_disconnectnotify_isbase = false;
            QPlainTextEdit::disconnectNotify(signal);
        } else if (qplaintextedit_disconnectnotify_callback != nullptr) {
            qplaintextedit_disconnectnotify_callback(this, signal);
        } else {
            QPlainTextEdit::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QTextBlock firstVisibleBlock() const {
        if (qplaintextedit_firstvisibleblock_isbase) {
            qplaintextedit_firstvisibleblock_isbase = false;
            return QPlainTextEdit::firstVisibleBlock();
        } else if (qplaintextedit_firstvisibleblock_callback != nullptr) {
            return qplaintextedit_firstvisibleblock_callback();
        } else {
            return QPlainTextEdit::firstVisibleBlock();
        }
    }

    // Virtual method for C ABI access and custom callback
    QPointF contentOffset() const {
        if (qplaintextedit_contentoffset_isbase) {
            qplaintextedit_contentoffset_isbase = false;
            return QPlainTextEdit::contentOffset();
        } else if (qplaintextedit_contentoffset_callback != nullptr) {
            return qplaintextedit_contentoffset_callback();
        } else {
            return QPlainTextEdit::contentOffset();
        }
    }

    // Virtual method for C ABI access and custom callback
    QRectF blockBoundingRect(const QTextBlock& block) const {
        if (qplaintextedit_blockboundingrect_isbase) {
            qplaintextedit_blockboundingrect_isbase = false;
            return QPlainTextEdit::blockBoundingRect(block);
        } else if (qplaintextedit_blockboundingrect_callback != nullptr) {
            return qplaintextedit_blockboundingrect_callback(this, block);
        } else {
            return QPlainTextEdit::blockBoundingRect(block);
        }
    }

    // Virtual method for C ABI access and custom callback
    QRectF blockBoundingGeometry(const QTextBlock& block) const {
        if (qplaintextedit_blockboundinggeometry_isbase) {
            qplaintextedit_blockboundinggeometry_isbase = false;
            return QPlainTextEdit::blockBoundingGeometry(block);
        } else if (qplaintextedit_blockboundinggeometry_callback != nullptr) {
            return qplaintextedit_blockboundinggeometry_callback(this, block);
        } else {
            return QPlainTextEdit::blockBoundingGeometry(block);
        }
    }

    // Virtual method for C ABI access and custom callback
    QAbstractTextDocumentLayout::PaintContext getPaintContext() const {
        if (qplaintextedit_getpaintcontext_isbase) {
            qplaintextedit_getpaintcontext_isbase = false;
            return QPlainTextEdit::getPaintContext();
        } else if (qplaintextedit_getpaintcontext_callback != nullptr) {
            return qplaintextedit_getpaintcontext_callback();
        } else {
            return QPlainTextEdit::getPaintContext();
        }
    }

    // Virtual method for C ABI access and custom callback
    void zoomInF(float range) {
        if (qplaintextedit_zoominf_isbase) {
            qplaintextedit_zoominf_isbase = false;
            QPlainTextEdit::zoomInF(range);
        } else if (qplaintextedit_zoominf_callback != nullptr) {
            qplaintextedit_zoominf_callback(this, range);
        } else {
            QPlainTextEdit::zoomInF(range);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setViewportMargins(int left, int top, int right, int bottom) {
        if (qplaintextedit_setviewportmargins_isbase) {
            qplaintextedit_setviewportmargins_isbase = false;
            QPlainTextEdit::setViewportMargins(left, top, right, bottom);
        } else if (qplaintextedit_setviewportmargins_callback != nullptr) {
            qplaintextedit_setviewportmargins_callback(this, left, top, right, bottom);
        } else {
            QPlainTextEdit::setViewportMargins(left, top, right, bottom);
        }
    }

    // Virtual method for C ABI access and custom callback
    QMargins viewportMargins() const {
        if (qplaintextedit_viewportmargins_isbase) {
            qplaintextedit_viewportmargins_isbase = false;
            return QPlainTextEdit::viewportMargins();
        } else if (qplaintextedit_viewportmargins_callback != nullptr) {
            return qplaintextedit_viewportmargins_callback();
        } else {
            return QPlainTextEdit::viewportMargins();
        }
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (qplaintextedit_drawframe_isbase) {
            qplaintextedit_drawframe_isbase = false;
            QPlainTextEdit::drawFrame(param1);
        } else if (qplaintextedit_drawframe_callback != nullptr) {
            qplaintextedit_drawframe_callback(this, param1);
        } else {
            QPlainTextEdit::drawFrame(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qplaintextedit_updatemicrofocus_isbase) {
            qplaintextedit_updatemicrofocus_isbase = false;
            QPlainTextEdit::updateMicroFocus();
        } else if (qplaintextedit_updatemicrofocus_callback != nullptr) {
            qplaintextedit_updatemicrofocus_callback();
        } else {
            QPlainTextEdit::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qplaintextedit_create_isbase) {
            qplaintextedit_create_isbase = false;
            QPlainTextEdit::create();
        } else if (qplaintextedit_create_callback != nullptr) {
            qplaintextedit_create_callback();
        } else {
            QPlainTextEdit::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qplaintextedit_destroy_isbase) {
            qplaintextedit_destroy_isbase = false;
            QPlainTextEdit::destroy();
        } else if (qplaintextedit_destroy_callback != nullptr) {
            qplaintextedit_destroy_callback();
        } else {
            QPlainTextEdit::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qplaintextedit_focusnextchild_isbase) {
            qplaintextedit_focusnextchild_isbase = false;
            return QPlainTextEdit::focusNextChild();
        } else if (qplaintextedit_focusnextchild_callback != nullptr) {
            return qplaintextedit_focusnextchild_callback();
        } else {
            return QPlainTextEdit::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qplaintextedit_focuspreviouschild_isbase) {
            qplaintextedit_focuspreviouschild_isbase = false;
            return QPlainTextEdit::focusPreviousChild();
        } else if (qplaintextedit_focuspreviouschild_callback != nullptr) {
            return qplaintextedit_focuspreviouschild_callback();
        } else {
            return QPlainTextEdit::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qplaintextedit_sender_isbase) {
            qplaintextedit_sender_isbase = false;
            return QPlainTextEdit::sender();
        } else if (qplaintextedit_sender_callback != nullptr) {
            return qplaintextedit_sender_callback();
        } else {
            return QPlainTextEdit::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qplaintextedit_sendersignalindex_isbase) {
            qplaintextedit_sendersignalindex_isbase = false;
            return QPlainTextEdit::senderSignalIndex();
        } else if (qplaintextedit_sendersignalindex_callback != nullptr) {
            return qplaintextedit_sendersignalindex_callback();
        } else {
            return QPlainTextEdit::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qplaintextedit_receivers_isbase) {
            qplaintextedit_receivers_isbase = false;
            return QPlainTextEdit::receivers(signal);
        } else if (qplaintextedit_receivers_callback != nullptr) {
            return qplaintextedit_receivers_callback(this, signal);
        } else {
            return QPlainTextEdit::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qplaintextedit_issignalconnected_isbase) {
            qplaintextedit_issignalconnected_isbase = false;
            return QPlainTextEdit::isSignalConnected(signal);
        } else if (qplaintextedit_issignalconnected_callback != nullptr) {
            return qplaintextedit_issignalconnected_callback(this, signal);
        } else {
            return QPlainTextEdit::isSignalConnected(signal);
        }
    }
};

// This class is a subclass of QPlainTextDocumentLayout so that we can call protected methods
class VirtualQPlainTextDocumentLayout : public QPlainTextDocumentLayout {

  public:
    // Virtual class public types (including callbacks)
    using QPlainTextDocumentLayout_Metacall_Callback = int (*)(QPlainTextDocumentLayout*, QMetaObject::Call, int, void**);
    using QPlainTextDocumentLayout_Draw_Callback = void (*)(QPlainTextDocumentLayout*, QPainter*, const QAbstractTextDocumentLayout::PaintContext&);
    using QPlainTextDocumentLayout_HitTest_Callback = int (*)(const QPlainTextDocumentLayout*, const QPointF&, Qt::HitTestAccuracy);
    using QPlainTextDocumentLayout_PageCount_Callback = int (*)();
    using QPlainTextDocumentLayout_DocumentSize_Callback = QSizeF (*)();
    using QPlainTextDocumentLayout_FrameBoundingRect_Callback = QRectF (*)(const QPlainTextDocumentLayout*, QTextFrame*);
    using QPlainTextDocumentLayout_BlockBoundingRect_Callback = QRectF (*)(const QPlainTextDocumentLayout*, const QTextBlock&);
    using QPlainTextDocumentLayout_DocumentChanged_Callback = void (*)(QPlainTextDocumentLayout*, int, int, int);
    using QPlainTextDocumentLayout_ResizeInlineObject_Callback = void (*)(QPlainTextDocumentLayout*, QTextInlineObject, int, const QTextFormat&);
    using QPlainTextDocumentLayout_PositionInlineObject_Callback = void (*)(QPlainTextDocumentLayout*, QTextInlineObject, int, const QTextFormat&);
    using QPlainTextDocumentLayout_DrawInlineObject_Callback = void (*)(QPlainTextDocumentLayout*, QPainter*, const QRectF&, QTextInlineObject, int, const QTextFormat&);
    using QPlainTextDocumentLayout_Event_Callback = bool (*)(QPlainTextDocumentLayout*, QEvent*);
    using QPlainTextDocumentLayout_EventFilter_Callback = bool (*)(QPlainTextDocumentLayout*, QObject*, QEvent*);
    using QPlainTextDocumentLayout_TimerEvent_Callback = void (*)(QPlainTextDocumentLayout*, QTimerEvent*);
    using QPlainTextDocumentLayout_ChildEvent_Callback = void (*)(QPlainTextDocumentLayout*, QChildEvent*);
    using QPlainTextDocumentLayout_CustomEvent_Callback = void (*)(QPlainTextDocumentLayout*, QEvent*);
    using QPlainTextDocumentLayout_ConnectNotify_Callback = void (*)(QPlainTextDocumentLayout*, const QMetaMethod&);
    using QPlainTextDocumentLayout_DisconnectNotify_Callback = void (*)(QPlainTextDocumentLayout*, const QMetaMethod&);
    using QPlainTextDocumentLayout_FormatIndex_Callback = int (*)(QPlainTextDocumentLayout*, int);
    using QPlainTextDocumentLayout_Format_Callback = QTextCharFormat (*)(QPlainTextDocumentLayout*, int);
    using QPlainTextDocumentLayout_Sender_Callback = QObject* (*)();
    using QPlainTextDocumentLayout_SenderSignalIndex_Callback = int (*)();
    using QPlainTextDocumentLayout_Receivers_Callback = int (*)(const QPlainTextDocumentLayout*, const char*);
    using QPlainTextDocumentLayout_IsSignalConnected_Callback = bool (*)(const QPlainTextDocumentLayout*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QPlainTextDocumentLayout_Metacall_Callback qplaintextdocumentlayout_metacall_callback = nullptr;
    QPlainTextDocumentLayout_Draw_Callback qplaintextdocumentlayout_draw_callback = nullptr;
    QPlainTextDocumentLayout_HitTest_Callback qplaintextdocumentlayout_hittest_callback = nullptr;
    QPlainTextDocumentLayout_PageCount_Callback qplaintextdocumentlayout_pagecount_callback = nullptr;
    QPlainTextDocumentLayout_DocumentSize_Callback qplaintextdocumentlayout_documentsize_callback = nullptr;
    QPlainTextDocumentLayout_FrameBoundingRect_Callback qplaintextdocumentlayout_frameboundingrect_callback = nullptr;
    QPlainTextDocumentLayout_BlockBoundingRect_Callback qplaintextdocumentlayout_blockboundingrect_callback = nullptr;
    QPlainTextDocumentLayout_DocumentChanged_Callback qplaintextdocumentlayout_documentchanged_callback = nullptr;
    QPlainTextDocumentLayout_ResizeInlineObject_Callback qplaintextdocumentlayout_resizeinlineobject_callback = nullptr;
    QPlainTextDocumentLayout_PositionInlineObject_Callback qplaintextdocumentlayout_positioninlineobject_callback = nullptr;
    QPlainTextDocumentLayout_DrawInlineObject_Callback qplaintextdocumentlayout_drawinlineobject_callback = nullptr;
    QPlainTextDocumentLayout_Event_Callback qplaintextdocumentlayout_event_callback = nullptr;
    QPlainTextDocumentLayout_EventFilter_Callback qplaintextdocumentlayout_eventfilter_callback = nullptr;
    QPlainTextDocumentLayout_TimerEvent_Callback qplaintextdocumentlayout_timerevent_callback = nullptr;
    QPlainTextDocumentLayout_ChildEvent_Callback qplaintextdocumentlayout_childevent_callback = nullptr;
    QPlainTextDocumentLayout_CustomEvent_Callback qplaintextdocumentlayout_customevent_callback = nullptr;
    QPlainTextDocumentLayout_ConnectNotify_Callback qplaintextdocumentlayout_connectnotify_callback = nullptr;
    QPlainTextDocumentLayout_DisconnectNotify_Callback qplaintextdocumentlayout_disconnectnotify_callback = nullptr;
    QPlainTextDocumentLayout_FormatIndex_Callback qplaintextdocumentlayout_formatindex_callback = nullptr;
    QPlainTextDocumentLayout_Format_Callback qplaintextdocumentlayout_format_callback = nullptr;
    QPlainTextDocumentLayout_Sender_Callback qplaintextdocumentlayout_sender_callback = nullptr;
    QPlainTextDocumentLayout_SenderSignalIndex_Callback qplaintextdocumentlayout_sendersignalindex_callback = nullptr;
    QPlainTextDocumentLayout_Receivers_Callback qplaintextdocumentlayout_receivers_callback = nullptr;
    QPlainTextDocumentLayout_IsSignalConnected_Callback qplaintextdocumentlayout_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qplaintextdocumentlayout_metacall_isbase = false;
    mutable bool qplaintextdocumentlayout_draw_isbase = false;
    mutable bool qplaintextdocumentlayout_hittest_isbase = false;
    mutable bool qplaintextdocumentlayout_pagecount_isbase = false;
    mutable bool qplaintextdocumentlayout_documentsize_isbase = false;
    mutable bool qplaintextdocumentlayout_frameboundingrect_isbase = false;
    mutable bool qplaintextdocumentlayout_blockboundingrect_isbase = false;
    mutable bool qplaintextdocumentlayout_documentchanged_isbase = false;
    mutable bool qplaintextdocumentlayout_resizeinlineobject_isbase = false;
    mutable bool qplaintextdocumentlayout_positioninlineobject_isbase = false;
    mutable bool qplaintextdocumentlayout_drawinlineobject_isbase = false;
    mutable bool qplaintextdocumentlayout_event_isbase = false;
    mutable bool qplaintextdocumentlayout_eventfilter_isbase = false;
    mutable bool qplaintextdocumentlayout_timerevent_isbase = false;
    mutable bool qplaintextdocumentlayout_childevent_isbase = false;
    mutable bool qplaintextdocumentlayout_customevent_isbase = false;
    mutable bool qplaintextdocumentlayout_connectnotify_isbase = false;
    mutable bool qplaintextdocumentlayout_disconnectnotify_isbase = false;
    mutable bool qplaintextdocumentlayout_formatindex_isbase = false;
    mutable bool qplaintextdocumentlayout_format_isbase = false;
    mutable bool qplaintextdocumentlayout_sender_isbase = false;
    mutable bool qplaintextdocumentlayout_sendersignalindex_isbase = false;
    mutable bool qplaintextdocumentlayout_receivers_isbase = false;
    mutable bool qplaintextdocumentlayout_issignalconnected_isbase = false;

  public:
    VirtualQPlainTextDocumentLayout(QTextDocument* document) : QPlainTextDocumentLayout(document){};

    ~VirtualQPlainTextDocumentLayout() {
        qplaintextdocumentlayout_metacall_callback = nullptr;
        qplaintextdocumentlayout_draw_callback = nullptr;
        qplaintextdocumentlayout_hittest_callback = nullptr;
        qplaintextdocumentlayout_pagecount_callback = nullptr;
        qplaintextdocumentlayout_documentsize_callback = nullptr;
        qplaintextdocumentlayout_frameboundingrect_callback = nullptr;
        qplaintextdocumentlayout_blockboundingrect_callback = nullptr;
        qplaintextdocumentlayout_documentchanged_callback = nullptr;
        qplaintextdocumentlayout_resizeinlineobject_callback = nullptr;
        qplaintextdocumentlayout_positioninlineobject_callback = nullptr;
        qplaintextdocumentlayout_drawinlineobject_callback = nullptr;
        qplaintextdocumentlayout_event_callback = nullptr;
        qplaintextdocumentlayout_eventfilter_callback = nullptr;
        qplaintextdocumentlayout_timerevent_callback = nullptr;
        qplaintextdocumentlayout_childevent_callback = nullptr;
        qplaintextdocumentlayout_customevent_callback = nullptr;
        qplaintextdocumentlayout_connectnotify_callback = nullptr;
        qplaintextdocumentlayout_disconnectnotify_callback = nullptr;
        qplaintextdocumentlayout_formatindex_callback = nullptr;
        qplaintextdocumentlayout_format_callback = nullptr;
        qplaintextdocumentlayout_sender_callback = nullptr;
        qplaintextdocumentlayout_sendersignalindex_callback = nullptr;
        qplaintextdocumentlayout_receivers_callback = nullptr;
        qplaintextdocumentlayout_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQPlainTextDocumentLayout_Metacall_Callback(QPlainTextDocumentLayout_Metacall_Callback cb) { qplaintextdocumentlayout_metacall_callback = cb; }
    void setQPlainTextDocumentLayout_Draw_Callback(QPlainTextDocumentLayout_Draw_Callback cb) { qplaintextdocumentlayout_draw_callback = cb; }
    void setQPlainTextDocumentLayout_HitTest_Callback(QPlainTextDocumentLayout_HitTest_Callback cb) { qplaintextdocumentlayout_hittest_callback = cb; }
    void setQPlainTextDocumentLayout_PageCount_Callback(QPlainTextDocumentLayout_PageCount_Callback cb) { qplaintextdocumentlayout_pagecount_callback = cb; }
    void setQPlainTextDocumentLayout_DocumentSize_Callback(QPlainTextDocumentLayout_DocumentSize_Callback cb) { qplaintextdocumentlayout_documentsize_callback = cb; }
    void setQPlainTextDocumentLayout_FrameBoundingRect_Callback(QPlainTextDocumentLayout_FrameBoundingRect_Callback cb) { qplaintextdocumentlayout_frameboundingrect_callback = cb; }
    void setQPlainTextDocumentLayout_BlockBoundingRect_Callback(QPlainTextDocumentLayout_BlockBoundingRect_Callback cb) { qplaintextdocumentlayout_blockboundingrect_callback = cb; }
    void setQPlainTextDocumentLayout_DocumentChanged_Callback(QPlainTextDocumentLayout_DocumentChanged_Callback cb) { qplaintextdocumentlayout_documentchanged_callback = cb; }
    void setQPlainTextDocumentLayout_ResizeInlineObject_Callback(QPlainTextDocumentLayout_ResizeInlineObject_Callback cb) { qplaintextdocumentlayout_resizeinlineobject_callback = cb; }
    void setQPlainTextDocumentLayout_PositionInlineObject_Callback(QPlainTextDocumentLayout_PositionInlineObject_Callback cb) { qplaintextdocumentlayout_positioninlineobject_callback = cb; }
    void setQPlainTextDocumentLayout_DrawInlineObject_Callback(QPlainTextDocumentLayout_DrawInlineObject_Callback cb) { qplaintextdocumentlayout_drawinlineobject_callback = cb; }
    void setQPlainTextDocumentLayout_Event_Callback(QPlainTextDocumentLayout_Event_Callback cb) { qplaintextdocumentlayout_event_callback = cb; }
    void setQPlainTextDocumentLayout_EventFilter_Callback(QPlainTextDocumentLayout_EventFilter_Callback cb) { qplaintextdocumentlayout_eventfilter_callback = cb; }
    void setQPlainTextDocumentLayout_TimerEvent_Callback(QPlainTextDocumentLayout_TimerEvent_Callback cb) { qplaintextdocumentlayout_timerevent_callback = cb; }
    void setQPlainTextDocumentLayout_ChildEvent_Callback(QPlainTextDocumentLayout_ChildEvent_Callback cb) { qplaintextdocumentlayout_childevent_callback = cb; }
    void setQPlainTextDocumentLayout_CustomEvent_Callback(QPlainTextDocumentLayout_CustomEvent_Callback cb) { qplaintextdocumentlayout_customevent_callback = cb; }
    void setQPlainTextDocumentLayout_ConnectNotify_Callback(QPlainTextDocumentLayout_ConnectNotify_Callback cb) { qplaintextdocumentlayout_connectnotify_callback = cb; }
    void setQPlainTextDocumentLayout_DisconnectNotify_Callback(QPlainTextDocumentLayout_DisconnectNotify_Callback cb) { qplaintextdocumentlayout_disconnectnotify_callback = cb; }
    void setQPlainTextDocumentLayout_FormatIndex_Callback(QPlainTextDocumentLayout_FormatIndex_Callback cb) { qplaintextdocumentlayout_formatindex_callback = cb; }
    void setQPlainTextDocumentLayout_Format_Callback(QPlainTextDocumentLayout_Format_Callback cb) { qplaintextdocumentlayout_format_callback = cb; }
    void setQPlainTextDocumentLayout_Sender_Callback(QPlainTextDocumentLayout_Sender_Callback cb) { qplaintextdocumentlayout_sender_callback = cb; }
    void setQPlainTextDocumentLayout_SenderSignalIndex_Callback(QPlainTextDocumentLayout_SenderSignalIndex_Callback cb) { qplaintextdocumentlayout_sendersignalindex_callback = cb; }
    void setQPlainTextDocumentLayout_Receivers_Callback(QPlainTextDocumentLayout_Receivers_Callback cb) { qplaintextdocumentlayout_receivers_callback = cb; }
    void setQPlainTextDocumentLayout_IsSignalConnected_Callback(QPlainTextDocumentLayout_IsSignalConnected_Callback cb) { qplaintextdocumentlayout_issignalconnected_callback = cb; }

    // Base flag setters
    void setQPlainTextDocumentLayout_Metacall_IsBase(bool value) const { qplaintextdocumentlayout_metacall_isbase = value; }
    void setQPlainTextDocumentLayout_Draw_IsBase(bool value) const { qplaintextdocumentlayout_draw_isbase = value; }
    void setQPlainTextDocumentLayout_HitTest_IsBase(bool value) const { qplaintextdocumentlayout_hittest_isbase = value; }
    void setQPlainTextDocumentLayout_PageCount_IsBase(bool value) const { qplaintextdocumentlayout_pagecount_isbase = value; }
    void setQPlainTextDocumentLayout_DocumentSize_IsBase(bool value) const { qplaintextdocumentlayout_documentsize_isbase = value; }
    void setQPlainTextDocumentLayout_FrameBoundingRect_IsBase(bool value) const { qplaintextdocumentlayout_frameboundingrect_isbase = value; }
    void setQPlainTextDocumentLayout_BlockBoundingRect_IsBase(bool value) const { qplaintextdocumentlayout_blockboundingrect_isbase = value; }
    void setQPlainTextDocumentLayout_DocumentChanged_IsBase(bool value) const { qplaintextdocumentlayout_documentchanged_isbase = value; }
    void setQPlainTextDocumentLayout_ResizeInlineObject_IsBase(bool value) const { qplaintextdocumentlayout_resizeinlineobject_isbase = value; }
    void setQPlainTextDocumentLayout_PositionInlineObject_IsBase(bool value) const { qplaintextdocumentlayout_positioninlineobject_isbase = value; }
    void setQPlainTextDocumentLayout_DrawInlineObject_IsBase(bool value) const { qplaintextdocumentlayout_drawinlineobject_isbase = value; }
    void setQPlainTextDocumentLayout_Event_IsBase(bool value) const { qplaintextdocumentlayout_event_isbase = value; }
    void setQPlainTextDocumentLayout_EventFilter_IsBase(bool value) const { qplaintextdocumentlayout_eventfilter_isbase = value; }
    void setQPlainTextDocumentLayout_TimerEvent_IsBase(bool value) const { qplaintextdocumentlayout_timerevent_isbase = value; }
    void setQPlainTextDocumentLayout_ChildEvent_IsBase(bool value) const { qplaintextdocumentlayout_childevent_isbase = value; }
    void setQPlainTextDocumentLayout_CustomEvent_IsBase(bool value) const { qplaintextdocumentlayout_customevent_isbase = value; }
    void setQPlainTextDocumentLayout_ConnectNotify_IsBase(bool value) const { qplaintextdocumentlayout_connectnotify_isbase = value; }
    void setQPlainTextDocumentLayout_DisconnectNotify_IsBase(bool value) const { qplaintextdocumentlayout_disconnectnotify_isbase = value; }
    void setQPlainTextDocumentLayout_FormatIndex_IsBase(bool value) const { qplaintextdocumentlayout_formatindex_isbase = value; }
    void setQPlainTextDocumentLayout_Format_IsBase(bool value) const { qplaintextdocumentlayout_format_isbase = value; }
    void setQPlainTextDocumentLayout_Sender_IsBase(bool value) const { qplaintextdocumentlayout_sender_isbase = value; }
    void setQPlainTextDocumentLayout_SenderSignalIndex_IsBase(bool value) const { qplaintextdocumentlayout_sendersignalindex_isbase = value; }
    void setQPlainTextDocumentLayout_Receivers_IsBase(bool value) const { qplaintextdocumentlayout_receivers_isbase = value; }
    void setQPlainTextDocumentLayout_IsSignalConnected_IsBase(bool value) const { qplaintextdocumentlayout_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qplaintextdocumentlayout_metacall_isbase) {
            qplaintextdocumentlayout_metacall_isbase = false;
            return QPlainTextDocumentLayout::qt_metacall(param1, param2, param3);
        } else if (qplaintextdocumentlayout_metacall_callback != nullptr) {
            return qplaintextdocumentlayout_metacall_callback(this, param1, param2, param3);
        } else {
            return QPlainTextDocumentLayout::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void draw(QPainter* param1, const QAbstractTextDocumentLayout::PaintContext& param2) override {
        if (qplaintextdocumentlayout_draw_isbase) {
            qplaintextdocumentlayout_draw_isbase = false;
            QPlainTextDocumentLayout::draw(param1, param2);
        } else if (qplaintextdocumentlayout_draw_callback != nullptr) {
            qplaintextdocumentlayout_draw_callback(this, param1, param2);
        } else {
            QPlainTextDocumentLayout::draw(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int hitTest(const QPointF& param1, Qt::HitTestAccuracy param2) const override {
        if (qplaintextdocumentlayout_hittest_isbase) {
            qplaintextdocumentlayout_hittest_isbase = false;
            return QPlainTextDocumentLayout::hitTest(param1, param2);
        } else if (qplaintextdocumentlayout_hittest_callback != nullptr) {
            return qplaintextdocumentlayout_hittest_callback(this, param1, param2);
        } else {
            return QPlainTextDocumentLayout::hitTest(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int pageCount() const override {
        if (qplaintextdocumentlayout_pagecount_isbase) {
            qplaintextdocumentlayout_pagecount_isbase = false;
            return QPlainTextDocumentLayout::pageCount();
        } else if (qplaintextdocumentlayout_pagecount_callback != nullptr) {
            return qplaintextdocumentlayout_pagecount_callback();
        } else {
            return QPlainTextDocumentLayout::pageCount();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSizeF documentSize() const override {
        if (qplaintextdocumentlayout_documentsize_isbase) {
            qplaintextdocumentlayout_documentsize_isbase = false;
            return QPlainTextDocumentLayout::documentSize();
        } else if (qplaintextdocumentlayout_documentsize_callback != nullptr) {
            return qplaintextdocumentlayout_documentsize_callback();
        } else {
            return QPlainTextDocumentLayout::documentSize();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF frameBoundingRect(QTextFrame* param1) const override {
        if (qplaintextdocumentlayout_frameboundingrect_isbase) {
            qplaintextdocumentlayout_frameboundingrect_isbase = false;
            return QPlainTextDocumentLayout::frameBoundingRect(param1);
        } else if (qplaintextdocumentlayout_frameboundingrect_callback != nullptr) {
            return qplaintextdocumentlayout_frameboundingrect_callback(this, param1);
        } else {
            return QPlainTextDocumentLayout::frameBoundingRect(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF blockBoundingRect(const QTextBlock& block) const override {
        if (qplaintextdocumentlayout_blockboundingrect_isbase) {
            qplaintextdocumentlayout_blockboundingrect_isbase = false;
            return QPlainTextDocumentLayout::blockBoundingRect(block);
        } else if (qplaintextdocumentlayout_blockboundingrect_callback != nullptr) {
            return qplaintextdocumentlayout_blockboundingrect_callback(this, block);
        } else {
            return QPlainTextDocumentLayout::blockBoundingRect(block);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void documentChanged(int from, int param2, int charsAdded) override {
        if (qplaintextdocumentlayout_documentchanged_isbase) {
            qplaintextdocumentlayout_documentchanged_isbase = false;
            QPlainTextDocumentLayout::documentChanged(from, param2, charsAdded);
        } else if (qplaintextdocumentlayout_documentchanged_callback != nullptr) {
            qplaintextdocumentlayout_documentchanged_callback(this, from, param2, charsAdded);
        } else {
            QPlainTextDocumentLayout::documentChanged(from, param2, charsAdded);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeInlineObject(QTextInlineObject item, int posInDocument, const QTextFormat& format) override {
        if (qplaintextdocumentlayout_resizeinlineobject_isbase) {
            qplaintextdocumentlayout_resizeinlineobject_isbase = false;
            QPlainTextDocumentLayout::resizeInlineObject(item, posInDocument, format);
        } else if (qplaintextdocumentlayout_resizeinlineobject_callback != nullptr) {
            qplaintextdocumentlayout_resizeinlineobject_callback(this, item, posInDocument, format);
        } else {
            QPlainTextDocumentLayout::resizeInlineObject(item, posInDocument, format);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void positionInlineObject(QTextInlineObject item, int posInDocument, const QTextFormat& format) override {
        if (qplaintextdocumentlayout_positioninlineobject_isbase) {
            qplaintextdocumentlayout_positioninlineobject_isbase = false;
            QPlainTextDocumentLayout::positionInlineObject(item, posInDocument, format);
        } else if (qplaintextdocumentlayout_positioninlineobject_callback != nullptr) {
            qplaintextdocumentlayout_positioninlineobject_callback(this, item, posInDocument, format);
        } else {
            QPlainTextDocumentLayout::positionInlineObject(item, posInDocument, format);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawInlineObject(QPainter* painter, const QRectF& rect, QTextInlineObject object, int posInDocument, const QTextFormat& format) override {
        if (qplaintextdocumentlayout_drawinlineobject_isbase) {
            qplaintextdocumentlayout_drawinlineobject_isbase = false;
            QPlainTextDocumentLayout::drawInlineObject(painter, rect, object, posInDocument, format);
        } else if (qplaintextdocumentlayout_drawinlineobject_callback != nullptr) {
            qplaintextdocumentlayout_drawinlineobject_callback(this, painter, rect, object, posInDocument, format);
        } else {
            QPlainTextDocumentLayout::drawInlineObject(painter, rect, object, posInDocument, format);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qplaintextdocumentlayout_event_isbase) {
            qplaintextdocumentlayout_event_isbase = false;
            return QPlainTextDocumentLayout::event(event);
        } else if (qplaintextdocumentlayout_event_callback != nullptr) {
            return qplaintextdocumentlayout_event_callback(this, event);
        } else {
            return QPlainTextDocumentLayout::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qplaintextdocumentlayout_eventfilter_isbase) {
            qplaintextdocumentlayout_eventfilter_isbase = false;
            return QPlainTextDocumentLayout::eventFilter(watched, event);
        } else if (qplaintextdocumentlayout_eventfilter_callback != nullptr) {
            return qplaintextdocumentlayout_eventfilter_callback(this, watched, event);
        } else {
            return QPlainTextDocumentLayout::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qplaintextdocumentlayout_timerevent_isbase) {
            qplaintextdocumentlayout_timerevent_isbase = false;
            QPlainTextDocumentLayout::timerEvent(event);
        } else if (qplaintextdocumentlayout_timerevent_callback != nullptr) {
            qplaintextdocumentlayout_timerevent_callback(this, event);
        } else {
            QPlainTextDocumentLayout::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qplaintextdocumentlayout_childevent_isbase) {
            qplaintextdocumentlayout_childevent_isbase = false;
            QPlainTextDocumentLayout::childEvent(event);
        } else if (qplaintextdocumentlayout_childevent_callback != nullptr) {
            qplaintextdocumentlayout_childevent_callback(this, event);
        } else {
            QPlainTextDocumentLayout::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qplaintextdocumentlayout_customevent_isbase) {
            qplaintextdocumentlayout_customevent_isbase = false;
            QPlainTextDocumentLayout::customEvent(event);
        } else if (qplaintextdocumentlayout_customevent_callback != nullptr) {
            qplaintextdocumentlayout_customevent_callback(this, event);
        } else {
            QPlainTextDocumentLayout::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qplaintextdocumentlayout_connectnotify_isbase) {
            qplaintextdocumentlayout_connectnotify_isbase = false;
            QPlainTextDocumentLayout::connectNotify(signal);
        } else if (qplaintextdocumentlayout_connectnotify_callback != nullptr) {
            qplaintextdocumentlayout_connectnotify_callback(this, signal);
        } else {
            QPlainTextDocumentLayout::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qplaintextdocumentlayout_disconnectnotify_isbase) {
            qplaintextdocumentlayout_disconnectnotify_isbase = false;
            QPlainTextDocumentLayout::disconnectNotify(signal);
        } else if (qplaintextdocumentlayout_disconnectnotify_callback != nullptr) {
            qplaintextdocumentlayout_disconnectnotify_callback(this, signal);
        } else {
            QPlainTextDocumentLayout::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    int formatIndex(int pos) {
        if (qplaintextdocumentlayout_formatindex_isbase) {
            qplaintextdocumentlayout_formatindex_isbase = false;
            return QPlainTextDocumentLayout::formatIndex(pos);
        } else if (qplaintextdocumentlayout_formatindex_callback != nullptr) {
            return qplaintextdocumentlayout_formatindex_callback(this, pos);
        } else {
            return QPlainTextDocumentLayout::formatIndex(pos);
        }
    }

    // Virtual method for C ABI access and custom callback
    QTextCharFormat format(int pos) {
        if (qplaintextdocumentlayout_format_isbase) {
            qplaintextdocumentlayout_format_isbase = false;
            return QPlainTextDocumentLayout::format(pos);
        } else if (qplaintextdocumentlayout_format_callback != nullptr) {
            return qplaintextdocumentlayout_format_callback(this, pos);
        } else {
            return QPlainTextDocumentLayout::format(pos);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qplaintextdocumentlayout_sender_isbase) {
            qplaintextdocumentlayout_sender_isbase = false;
            return QPlainTextDocumentLayout::sender();
        } else if (qplaintextdocumentlayout_sender_callback != nullptr) {
            return qplaintextdocumentlayout_sender_callback();
        } else {
            return QPlainTextDocumentLayout::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qplaintextdocumentlayout_sendersignalindex_isbase) {
            qplaintextdocumentlayout_sendersignalindex_isbase = false;
            return QPlainTextDocumentLayout::senderSignalIndex();
        } else if (qplaintextdocumentlayout_sendersignalindex_callback != nullptr) {
            return qplaintextdocumentlayout_sendersignalindex_callback();
        } else {
            return QPlainTextDocumentLayout::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qplaintextdocumentlayout_receivers_isbase) {
            qplaintextdocumentlayout_receivers_isbase = false;
            return QPlainTextDocumentLayout::receivers(signal);
        } else if (qplaintextdocumentlayout_receivers_callback != nullptr) {
            return qplaintextdocumentlayout_receivers_callback(this, signal);
        } else {
            return QPlainTextDocumentLayout::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qplaintextdocumentlayout_issignalconnected_isbase) {
            qplaintextdocumentlayout_issignalconnected_isbase = false;
            return QPlainTextDocumentLayout::isSignalConnected(signal);
        } else if (qplaintextdocumentlayout_issignalconnected_callback != nullptr) {
            return qplaintextdocumentlayout_issignalconnected_callback(this, signal);
        } else {
            return QPlainTextDocumentLayout::isSignalConnected(signal);
        }
    }
};

#endif
