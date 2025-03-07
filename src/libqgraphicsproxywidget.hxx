#pragma once
#ifndef SRCC_LIBVIRTUALQGRAPHICSPROXYWIDGET_H
#define SRCC_LIBVIRTUALQGRAPHICSPROXYWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QGraphicsProxyWidget so that we can call protected methods
class VirtualQGraphicsProxyWidget : public QGraphicsProxyWidget {

  public:
    // Virtual class public types (including callbacks)
    using QGraphicsItem::Extension;
    using QGraphicsProxyWidget_Metacall_Callback = int (*)(QGraphicsProxyWidget*, QMetaObject::Call, int, void**);
    using QGraphicsProxyWidget_SetGeometry_Callback = void (*)(QGraphicsProxyWidget*, const QRectF&);
    using QGraphicsProxyWidget_Paint_Callback = void (*)(QGraphicsProxyWidget*, QPainter*, const QStyleOptionGraphicsItem*, QWidget*);
    using QGraphicsProxyWidget_Type_Callback = int (*)();
    using QGraphicsProxyWidget_ItemChange_Callback = QVariant (*)(QGraphicsProxyWidget*, QGraphicsItem::GraphicsItemChange, const QVariant&);
    using QGraphicsProxyWidget_Event_Callback = bool (*)(QGraphicsProxyWidget*, QEvent*);
    using QGraphicsProxyWidget_EventFilter_Callback = bool (*)(QGraphicsProxyWidget*, QObject*, QEvent*);
    using QGraphicsProxyWidget_ShowEvent_Callback = void (*)(QGraphicsProxyWidget*, QShowEvent*);
    using QGraphicsProxyWidget_HideEvent_Callback = void (*)(QGraphicsProxyWidget*, QHideEvent*);
    using QGraphicsProxyWidget_ContextMenuEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneContextMenuEvent*);
    using QGraphicsProxyWidget_DragEnterEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneDragDropEvent*);
    using QGraphicsProxyWidget_DragLeaveEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneDragDropEvent*);
    using QGraphicsProxyWidget_DragMoveEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneDragDropEvent*);
    using QGraphicsProxyWidget_DropEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneDragDropEvent*);
    using QGraphicsProxyWidget_HoverEnterEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneHoverEvent*);
    using QGraphicsProxyWidget_HoverLeaveEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneHoverEvent*);
    using QGraphicsProxyWidget_HoverMoveEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneHoverEvent*);
    using QGraphicsProxyWidget_GrabMouseEvent_Callback = void (*)(QGraphicsProxyWidget*, QEvent*);
    using QGraphicsProxyWidget_UngrabMouseEvent_Callback = void (*)(QGraphicsProxyWidget*, QEvent*);
    using QGraphicsProxyWidget_MouseMoveEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneMouseEvent*);
    using QGraphicsProxyWidget_MousePressEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneMouseEvent*);
    using QGraphicsProxyWidget_MouseReleaseEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneMouseEvent*);
    using QGraphicsProxyWidget_MouseDoubleClickEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneMouseEvent*);
    using QGraphicsProxyWidget_WheelEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneWheelEvent*);
    using QGraphicsProxyWidget_KeyPressEvent_Callback = void (*)(QGraphicsProxyWidget*, QKeyEvent*);
    using QGraphicsProxyWidget_KeyReleaseEvent_Callback = void (*)(QGraphicsProxyWidget*, QKeyEvent*);
    using QGraphicsProxyWidget_FocusInEvent_Callback = void (*)(QGraphicsProxyWidget*, QFocusEvent*);
    using QGraphicsProxyWidget_FocusOutEvent_Callback = void (*)(QGraphicsProxyWidget*, QFocusEvent*);
    using QGraphicsProxyWidget_FocusNextPrevChild_Callback = bool (*)(QGraphicsProxyWidget*, bool);
    using QGraphicsProxyWidget_InputMethodQuery_Callback = QVariant (*)(const QGraphicsProxyWidget*, Qt::InputMethodQuery);
    using QGraphicsProxyWidget_InputMethodEvent_Callback = void (*)(QGraphicsProxyWidget*, QInputMethodEvent*);
    using QGraphicsProxyWidget_SizeHint_Callback = QSizeF (*)(const QGraphicsProxyWidget*, Qt::SizeHint, const QSizeF&);
    using QGraphicsProxyWidget_ResizeEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneResizeEvent*);
    using QGraphicsProxyWidget_GetContentsMargins_Callback = void (*)(const QGraphicsProxyWidget*, qreal*, qreal*, qreal*, qreal*);
    using QGraphicsProxyWidget_PaintWindowFrame_Callback = void (*)(QGraphicsProxyWidget*, QPainter*, const QStyleOptionGraphicsItem*, QWidget*);
    using QGraphicsProxyWidget_BoundingRect_Callback = QRectF (*)();
    using QGraphicsProxyWidget_Shape_Callback = QPainterPath (*)();
    using QGraphicsProxyWidget_InitStyleOption_Callback = void (*)(const QGraphicsProxyWidget*, QStyleOption*);
    using QGraphicsProxyWidget_UpdateGeometry_Callback = void (*)();
    using QGraphicsProxyWidget_PropertyChange_Callback = QVariant (*)(QGraphicsProxyWidget*, const QString&, const QVariant&);
    using QGraphicsProxyWidget_SceneEvent_Callback = bool (*)(QGraphicsProxyWidget*, QEvent*);
    using QGraphicsProxyWidget_WindowFrameEvent_Callback = bool (*)(QGraphicsProxyWidget*, QEvent*);
    using QGraphicsProxyWidget_WindowFrameSectionAt_Callback = Qt::WindowFrameSection (*)(const QGraphicsProxyWidget*, const QPointF&);
    using QGraphicsProxyWidget_ChangeEvent_Callback = void (*)(QGraphicsProxyWidget*, QEvent*);
    using QGraphicsProxyWidget_CloseEvent_Callback = void (*)(QGraphicsProxyWidget*, QCloseEvent*);
    using QGraphicsProxyWidget_MoveEvent_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsSceneMoveEvent*);
    using QGraphicsProxyWidget_PolishEvent_Callback = void (*)();
    using QGraphicsProxyWidget_GrabKeyboardEvent_Callback = void (*)(QGraphicsProxyWidget*, QEvent*);
    using QGraphicsProxyWidget_UngrabKeyboardEvent_Callback = void (*)(QGraphicsProxyWidget*, QEvent*);
    using QGraphicsProxyWidget_TimerEvent_Callback = void (*)(QGraphicsProxyWidget*, QTimerEvent*);
    using QGraphicsProxyWidget_ChildEvent_Callback = void (*)(QGraphicsProxyWidget*, QChildEvent*);
    using QGraphicsProxyWidget_CustomEvent_Callback = void (*)(QGraphicsProxyWidget*, QEvent*);
    using QGraphicsProxyWidget_ConnectNotify_Callback = void (*)(QGraphicsProxyWidget*, const QMetaMethod&);
    using QGraphicsProxyWidget_DisconnectNotify_Callback = void (*)(QGraphicsProxyWidget*, const QMetaMethod&);
    using QGraphicsProxyWidget_Advance_Callback = void (*)(QGraphicsProxyWidget*, int);
    using QGraphicsProxyWidget_Contains_Callback = bool (*)(const QGraphicsProxyWidget*, const QPointF&);
    using QGraphicsProxyWidget_CollidesWithItem_Callback = bool (*)(const QGraphicsProxyWidget*, const QGraphicsItem*, Qt::ItemSelectionMode);
    using QGraphicsProxyWidget_CollidesWithPath_Callback = bool (*)(const QGraphicsProxyWidget*, const QPainterPath&, Qt::ItemSelectionMode);
    using QGraphicsProxyWidget_IsObscuredBy_Callback = bool (*)(const QGraphicsProxyWidget*, const QGraphicsItem*);
    using QGraphicsProxyWidget_OpaqueArea_Callback = QPainterPath (*)();
    using QGraphicsProxyWidget_SceneEventFilter_Callback = bool (*)(QGraphicsProxyWidget*, QGraphicsItem*, QEvent*);
    using QGraphicsProxyWidget_SupportsExtension_Callback = bool (*)(const QGraphicsProxyWidget*, int);
    using QGraphicsProxyWidget_SetExtension_Callback = void (*)(QGraphicsProxyWidget*, int, const QVariant&);
    using QGraphicsProxyWidget_Extension_Callback = QVariant (*)(const QGraphicsProxyWidget*, const QVariant&);
    using QGraphicsProxyWidget_IsEmpty_Callback = bool (*)();
    using QGraphicsProxyWidget_NewProxyWidget_Callback = QGraphicsProxyWidget* (*)(QGraphicsProxyWidget*, const QWidget*);
    using QGraphicsProxyWidget_UpdateMicroFocus_Callback = void (*)();
    using QGraphicsProxyWidget_Sender_Callback = QObject* (*)();
    using QGraphicsProxyWidget_SenderSignalIndex_Callback = int (*)();
    using QGraphicsProxyWidget_Receivers_Callback = int (*)(const QGraphicsProxyWidget*, const char*);
    using QGraphicsProxyWidget_IsSignalConnected_Callback = bool (*)(const QGraphicsProxyWidget*, const QMetaMethod&);
    using QGraphicsProxyWidget_AddToIndex_Callback = void (*)();
    using QGraphicsProxyWidget_RemoveFromIndex_Callback = void (*)();
    using QGraphicsProxyWidget_PrepareGeometryChange_Callback = void (*)();
    using QGraphicsProxyWidget_SetGraphicsItem_Callback = void (*)(QGraphicsProxyWidget*, QGraphicsItem*);
    using QGraphicsProxyWidget_SetOwnedByLayout_Callback = void (*)(QGraphicsProxyWidget*, bool);

  protected:
    // Instance callback storage
    QGraphicsProxyWidget_Metacall_Callback qgraphicsproxywidget_metacall_callback = nullptr;
    QGraphicsProxyWidget_SetGeometry_Callback qgraphicsproxywidget_setgeometry_callback = nullptr;
    QGraphicsProxyWidget_Paint_Callback qgraphicsproxywidget_paint_callback = nullptr;
    QGraphicsProxyWidget_Type_Callback qgraphicsproxywidget_type_callback = nullptr;
    QGraphicsProxyWidget_ItemChange_Callback qgraphicsproxywidget_itemchange_callback = nullptr;
    QGraphicsProxyWidget_Event_Callback qgraphicsproxywidget_event_callback = nullptr;
    QGraphicsProxyWidget_EventFilter_Callback qgraphicsproxywidget_eventfilter_callback = nullptr;
    QGraphicsProxyWidget_ShowEvent_Callback qgraphicsproxywidget_showevent_callback = nullptr;
    QGraphicsProxyWidget_HideEvent_Callback qgraphicsproxywidget_hideevent_callback = nullptr;
    QGraphicsProxyWidget_ContextMenuEvent_Callback qgraphicsproxywidget_contextmenuevent_callback = nullptr;
    QGraphicsProxyWidget_DragEnterEvent_Callback qgraphicsproxywidget_dragenterevent_callback = nullptr;
    QGraphicsProxyWidget_DragLeaveEvent_Callback qgraphicsproxywidget_dragleaveevent_callback = nullptr;
    QGraphicsProxyWidget_DragMoveEvent_Callback qgraphicsproxywidget_dragmoveevent_callback = nullptr;
    QGraphicsProxyWidget_DropEvent_Callback qgraphicsproxywidget_dropevent_callback = nullptr;
    QGraphicsProxyWidget_HoverEnterEvent_Callback qgraphicsproxywidget_hoverenterevent_callback = nullptr;
    QGraphicsProxyWidget_HoverLeaveEvent_Callback qgraphicsproxywidget_hoverleaveevent_callback = nullptr;
    QGraphicsProxyWidget_HoverMoveEvent_Callback qgraphicsproxywidget_hovermoveevent_callback = nullptr;
    QGraphicsProxyWidget_GrabMouseEvent_Callback qgraphicsproxywidget_grabmouseevent_callback = nullptr;
    QGraphicsProxyWidget_UngrabMouseEvent_Callback qgraphicsproxywidget_ungrabmouseevent_callback = nullptr;
    QGraphicsProxyWidget_MouseMoveEvent_Callback qgraphicsproxywidget_mousemoveevent_callback = nullptr;
    QGraphicsProxyWidget_MousePressEvent_Callback qgraphicsproxywidget_mousepressevent_callback = nullptr;
    QGraphicsProxyWidget_MouseReleaseEvent_Callback qgraphicsproxywidget_mousereleaseevent_callback = nullptr;
    QGraphicsProxyWidget_MouseDoubleClickEvent_Callback qgraphicsproxywidget_mousedoubleclickevent_callback = nullptr;
    QGraphicsProxyWidget_WheelEvent_Callback qgraphicsproxywidget_wheelevent_callback = nullptr;
    QGraphicsProxyWidget_KeyPressEvent_Callback qgraphicsproxywidget_keypressevent_callback = nullptr;
    QGraphicsProxyWidget_KeyReleaseEvent_Callback qgraphicsproxywidget_keyreleaseevent_callback = nullptr;
    QGraphicsProxyWidget_FocusInEvent_Callback qgraphicsproxywidget_focusinevent_callback = nullptr;
    QGraphicsProxyWidget_FocusOutEvent_Callback qgraphicsproxywidget_focusoutevent_callback = nullptr;
    QGraphicsProxyWidget_FocusNextPrevChild_Callback qgraphicsproxywidget_focusnextprevchild_callback = nullptr;
    QGraphicsProxyWidget_InputMethodQuery_Callback qgraphicsproxywidget_inputmethodquery_callback = nullptr;
    QGraphicsProxyWidget_InputMethodEvent_Callback qgraphicsproxywidget_inputmethodevent_callback = nullptr;
    QGraphicsProxyWidget_SizeHint_Callback qgraphicsproxywidget_sizehint_callback = nullptr;
    QGraphicsProxyWidget_ResizeEvent_Callback qgraphicsproxywidget_resizeevent_callback = nullptr;
    QGraphicsProxyWidget_GetContentsMargins_Callback qgraphicsproxywidget_getcontentsmargins_callback = nullptr;
    QGraphicsProxyWidget_PaintWindowFrame_Callback qgraphicsproxywidget_paintwindowframe_callback = nullptr;
    QGraphicsProxyWidget_BoundingRect_Callback qgraphicsproxywidget_boundingrect_callback = nullptr;
    QGraphicsProxyWidget_Shape_Callback qgraphicsproxywidget_shape_callback = nullptr;
    QGraphicsProxyWidget_InitStyleOption_Callback qgraphicsproxywidget_initstyleoption_callback = nullptr;
    QGraphicsProxyWidget_UpdateGeometry_Callback qgraphicsproxywidget_updategeometry_callback = nullptr;
    QGraphicsProxyWidget_PropertyChange_Callback qgraphicsproxywidget_propertychange_callback = nullptr;
    QGraphicsProxyWidget_SceneEvent_Callback qgraphicsproxywidget_sceneevent_callback = nullptr;
    QGraphicsProxyWidget_WindowFrameEvent_Callback qgraphicsproxywidget_windowframeevent_callback = nullptr;
    QGraphicsProxyWidget_WindowFrameSectionAt_Callback qgraphicsproxywidget_windowframesectionat_callback = nullptr;
    QGraphicsProxyWidget_ChangeEvent_Callback qgraphicsproxywidget_changeevent_callback = nullptr;
    QGraphicsProxyWidget_CloseEvent_Callback qgraphicsproxywidget_closeevent_callback = nullptr;
    QGraphicsProxyWidget_MoveEvent_Callback qgraphicsproxywidget_moveevent_callback = nullptr;
    QGraphicsProxyWidget_PolishEvent_Callback qgraphicsproxywidget_polishevent_callback = nullptr;
    QGraphicsProxyWidget_GrabKeyboardEvent_Callback qgraphicsproxywidget_grabkeyboardevent_callback = nullptr;
    QGraphicsProxyWidget_UngrabKeyboardEvent_Callback qgraphicsproxywidget_ungrabkeyboardevent_callback = nullptr;
    QGraphicsProxyWidget_TimerEvent_Callback qgraphicsproxywidget_timerevent_callback = nullptr;
    QGraphicsProxyWidget_ChildEvent_Callback qgraphicsproxywidget_childevent_callback = nullptr;
    QGraphicsProxyWidget_CustomEvent_Callback qgraphicsproxywidget_customevent_callback = nullptr;
    QGraphicsProxyWidget_ConnectNotify_Callback qgraphicsproxywidget_connectnotify_callback = nullptr;
    QGraphicsProxyWidget_DisconnectNotify_Callback qgraphicsproxywidget_disconnectnotify_callback = nullptr;
    QGraphicsProxyWidget_Advance_Callback qgraphicsproxywidget_advance_callback = nullptr;
    QGraphicsProxyWidget_Contains_Callback qgraphicsproxywidget_contains_callback = nullptr;
    QGraphicsProxyWidget_CollidesWithItem_Callback qgraphicsproxywidget_collideswithitem_callback = nullptr;
    QGraphicsProxyWidget_CollidesWithPath_Callback qgraphicsproxywidget_collideswithpath_callback = nullptr;
    QGraphicsProxyWidget_IsObscuredBy_Callback qgraphicsproxywidget_isobscuredby_callback = nullptr;
    QGraphicsProxyWidget_OpaqueArea_Callback qgraphicsproxywidget_opaquearea_callback = nullptr;
    QGraphicsProxyWidget_SceneEventFilter_Callback qgraphicsproxywidget_sceneeventfilter_callback = nullptr;
    QGraphicsProxyWidget_SupportsExtension_Callback qgraphicsproxywidget_supportsextension_callback = nullptr;
    QGraphicsProxyWidget_SetExtension_Callback qgraphicsproxywidget_setextension_callback = nullptr;
    QGraphicsProxyWidget_Extension_Callback qgraphicsproxywidget_extension_callback = nullptr;
    QGraphicsProxyWidget_IsEmpty_Callback qgraphicsproxywidget_isempty_callback = nullptr;
    QGraphicsProxyWidget_NewProxyWidget_Callback qgraphicsproxywidget_newproxywidget_callback = nullptr;
    QGraphicsProxyWidget_UpdateMicroFocus_Callback qgraphicsproxywidget_updatemicrofocus_callback = nullptr;
    QGraphicsProxyWidget_Sender_Callback qgraphicsproxywidget_sender_callback = nullptr;
    QGraphicsProxyWidget_SenderSignalIndex_Callback qgraphicsproxywidget_sendersignalindex_callback = nullptr;
    QGraphicsProxyWidget_Receivers_Callback qgraphicsproxywidget_receivers_callback = nullptr;
    QGraphicsProxyWidget_IsSignalConnected_Callback qgraphicsproxywidget_issignalconnected_callback = nullptr;
    QGraphicsProxyWidget_AddToIndex_Callback qgraphicsproxywidget_addtoindex_callback = nullptr;
    QGraphicsProxyWidget_RemoveFromIndex_Callback qgraphicsproxywidget_removefromindex_callback = nullptr;
    QGraphicsProxyWidget_PrepareGeometryChange_Callback qgraphicsproxywidget_preparegeometrychange_callback = nullptr;
    QGraphicsProxyWidget_SetGraphicsItem_Callback qgraphicsproxywidget_setgraphicsitem_callback = nullptr;
    QGraphicsProxyWidget_SetOwnedByLayout_Callback qgraphicsproxywidget_setownedbylayout_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicsproxywidget_metacall_isbase = false;
    mutable bool qgraphicsproxywidget_setgeometry_isbase = false;
    mutable bool qgraphicsproxywidget_paint_isbase = false;
    mutable bool qgraphicsproxywidget_type_isbase = false;
    mutable bool qgraphicsproxywidget_itemchange_isbase = false;
    mutable bool qgraphicsproxywidget_event_isbase = false;
    mutable bool qgraphicsproxywidget_eventfilter_isbase = false;
    mutable bool qgraphicsproxywidget_showevent_isbase = false;
    mutable bool qgraphicsproxywidget_hideevent_isbase = false;
    mutable bool qgraphicsproxywidget_contextmenuevent_isbase = false;
    mutable bool qgraphicsproxywidget_dragenterevent_isbase = false;
    mutable bool qgraphicsproxywidget_dragleaveevent_isbase = false;
    mutable bool qgraphicsproxywidget_dragmoveevent_isbase = false;
    mutable bool qgraphicsproxywidget_dropevent_isbase = false;
    mutable bool qgraphicsproxywidget_hoverenterevent_isbase = false;
    mutable bool qgraphicsproxywidget_hoverleaveevent_isbase = false;
    mutable bool qgraphicsproxywidget_hovermoveevent_isbase = false;
    mutable bool qgraphicsproxywidget_grabmouseevent_isbase = false;
    mutable bool qgraphicsproxywidget_ungrabmouseevent_isbase = false;
    mutable bool qgraphicsproxywidget_mousemoveevent_isbase = false;
    mutable bool qgraphicsproxywidget_mousepressevent_isbase = false;
    mutable bool qgraphicsproxywidget_mousereleaseevent_isbase = false;
    mutable bool qgraphicsproxywidget_mousedoubleclickevent_isbase = false;
    mutable bool qgraphicsproxywidget_wheelevent_isbase = false;
    mutable bool qgraphicsproxywidget_keypressevent_isbase = false;
    mutable bool qgraphicsproxywidget_keyreleaseevent_isbase = false;
    mutable bool qgraphicsproxywidget_focusinevent_isbase = false;
    mutable bool qgraphicsproxywidget_focusoutevent_isbase = false;
    mutable bool qgraphicsproxywidget_focusnextprevchild_isbase = false;
    mutable bool qgraphicsproxywidget_inputmethodquery_isbase = false;
    mutable bool qgraphicsproxywidget_inputmethodevent_isbase = false;
    mutable bool qgraphicsproxywidget_sizehint_isbase = false;
    mutable bool qgraphicsproxywidget_resizeevent_isbase = false;
    mutable bool qgraphicsproxywidget_getcontentsmargins_isbase = false;
    mutable bool qgraphicsproxywidget_paintwindowframe_isbase = false;
    mutable bool qgraphicsproxywidget_boundingrect_isbase = false;
    mutable bool qgraphicsproxywidget_shape_isbase = false;
    mutable bool qgraphicsproxywidget_initstyleoption_isbase = false;
    mutable bool qgraphicsproxywidget_updategeometry_isbase = false;
    mutable bool qgraphicsproxywidget_propertychange_isbase = false;
    mutable bool qgraphicsproxywidget_sceneevent_isbase = false;
    mutable bool qgraphicsproxywidget_windowframeevent_isbase = false;
    mutable bool qgraphicsproxywidget_windowframesectionat_isbase = false;
    mutable bool qgraphicsproxywidget_changeevent_isbase = false;
    mutable bool qgraphicsproxywidget_closeevent_isbase = false;
    mutable bool qgraphicsproxywidget_moveevent_isbase = false;
    mutable bool qgraphicsproxywidget_polishevent_isbase = false;
    mutable bool qgraphicsproxywidget_grabkeyboardevent_isbase = false;
    mutable bool qgraphicsproxywidget_ungrabkeyboardevent_isbase = false;
    mutable bool qgraphicsproxywidget_timerevent_isbase = false;
    mutable bool qgraphicsproxywidget_childevent_isbase = false;
    mutable bool qgraphicsproxywidget_customevent_isbase = false;
    mutable bool qgraphicsproxywidget_connectnotify_isbase = false;
    mutable bool qgraphicsproxywidget_disconnectnotify_isbase = false;
    mutable bool qgraphicsproxywidget_advance_isbase = false;
    mutable bool qgraphicsproxywidget_contains_isbase = false;
    mutable bool qgraphicsproxywidget_collideswithitem_isbase = false;
    mutable bool qgraphicsproxywidget_collideswithpath_isbase = false;
    mutable bool qgraphicsproxywidget_isobscuredby_isbase = false;
    mutable bool qgraphicsproxywidget_opaquearea_isbase = false;
    mutable bool qgraphicsproxywidget_sceneeventfilter_isbase = false;
    mutable bool qgraphicsproxywidget_supportsextension_isbase = false;
    mutable bool qgraphicsproxywidget_setextension_isbase = false;
    mutable bool qgraphicsproxywidget_extension_isbase = false;
    mutable bool qgraphicsproxywidget_isempty_isbase = false;
    mutable bool qgraphicsproxywidget_newproxywidget_isbase = false;
    mutable bool qgraphicsproxywidget_updatemicrofocus_isbase = false;
    mutable bool qgraphicsproxywidget_sender_isbase = false;
    mutable bool qgraphicsproxywidget_sendersignalindex_isbase = false;
    mutable bool qgraphicsproxywidget_receivers_isbase = false;
    mutable bool qgraphicsproxywidget_issignalconnected_isbase = false;
    mutable bool qgraphicsproxywidget_addtoindex_isbase = false;
    mutable bool qgraphicsproxywidget_removefromindex_isbase = false;
    mutable bool qgraphicsproxywidget_preparegeometrychange_isbase = false;
    mutable bool qgraphicsproxywidget_setgraphicsitem_isbase = false;
    mutable bool qgraphicsproxywidget_setownedbylayout_isbase = false;

  public:
    VirtualQGraphicsProxyWidget() : QGraphicsProxyWidget(){};
    VirtualQGraphicsProxyWidget(QGraphicsItem* parent) : QGraphicsProxyWidget(parent){};
    VirtualQGraphicsProxyWidget(QGraphicsItem* parent, Qt::WindowFlags wFlags) : QGraphicsProxyWidget(parent, wFlags){};

    ~VirtualQGraphicsProxyWidget() {
        qgraphicsproxywidget_metacall_callback = nullptr;
        qgraphicsproxywidget_setgeometry_callback = nullptr;
        qgraphicsproxywidget_paint_callback = nullptr;
        qgraphicsproxywidget_type_callback = nullptr;
        qgraphicsproxywidget_itemchange_callback = nullptr;
        qgraphicsproxywidget_event_callback = nullptr;
        qgraphicsproxywidget_eventfilter_callback = nullptr;
        qgraphicsproxywidget_showevent_callback = nullptr;
        qgraphicsproxywidget_hideevent_callback = nullptr;
        qgraphicsproxywidget_contextmenuevent_callback = nullptr;
        qgraphicsproxywidget_dragenterevent_callback = nullptr;
        qgraphicsproxywidget_dragleaveevent_callback = nullptr;
        qgraphicsproxywidget_dragmoveevent_callback = nullptr;
        qgraphicsproxywidget_dropevent_callback = nullptr;
        qgraphicsproxywidget_hoverenterevent_callback = nullptr;
        qgraphicsproxywidget_hoverleaveevent_callback = nullptr;
        qgraphicsproxywidget_hovermoveevent_callback = nullptr;
        qgraphicsproxywidget_grabmouseevent_callback = nullptr;
        qgraphicsproxywidget_ungrabmouseevent_callback = nullptr;
        qgraphicsproxywidget_mousemoveevent_callback = nullptr;
        qgraphicsproxywidget_mousepressevent_callback = nullptr;
        qgraphicsproxywidget_mousereleaseevent_callback = nullptr;
        qgraphicsproxywidget_mousedoubleclickevent_callback = nullptr;
        qgraphicsproxywidget_wheelevent_callback = nullptr;
        qgraphicsproxywidget_keypressevent_callback = nullptr;
        qgraphicsproxywidget_keyreleaseevent_callback = nullptr;
        qgraphicsproxywidget_focusinevent_callback = nullptr;
        qgraphicsproxywidget_focusoutevent_callback = nullptr;
        qgraphicsproxywidget_focusnextprevchild_callback = nullptr;
        qgraphicsproxywidget_inputmethodquery_callback = nullptr;
        qgraphicsproxywidget_inputmethodevent_callback = nullptr;
        qgraphicsproxywidget_sizehint_callback = nullptr;
        qgraphicsproxywidget_resizeevent_callback = nullptr;
        qgraphicsproxywidget_getcontentsmargins_callback = nullptr;
        qgraphicsproxywidget_paintwindowframe_callback = nullptr;
        qgraphicsproxywidget_boundingrect_callback = nullptr;
        qgraphicsproxywidget_shape_callback = nullptr;
        qgraphicsproxywidget_initstyleoption_callback = nullptr;
        qgraphicsproxywidget_updategeometry_callback = nullptr;
        qgraphicsproxywidget_propertychange_callback = nullptr;
        qgraphicsproxywidget_sceneevent_callback = nullptr;
        qgraphicsproxywidget_windowframeevent_callback = nullptr;
        qgraphicsproxywidget_windowframesectionat_callback = nullptr;
        qgraphicsproxywidget_changeevent_callback = nullptr;
        qgraphicsproxywidget_closeevent_callback = nullptr;
        qgraphicsproxywidget_moveevent_callback = nullptr;
        qgraphicsproxywidget_polishevent_callback = nullptr;
        qgraphicsproxywidget_grabkeyboardevent_callback = nullptr;
        qgraphicsproxywidget_ungrabkeyboardevent_callback = nullptr;
        qgraphicsproxywidget_timerevent_callback = nullptr;
        qgraphicsproxywidget_childevent_callback = nullptr;
        qgraphicsproxywidget_customevent_callback = nullptr;
        qgraphicsproxywidget_connectnotify_callback = nullptr;
        qgraphicsproxywidget_disconnectnotify_callback = nullptr;
        qgraphicsproxywidget_advance_callback = nullptr;
        qgraphicsproxywidget_contains_callback = nullptr;
        qgraphicsproxywidget_collideswithitem_callback = nullptr;
        qgraphicsproxywidget_collideswithpath_callback = nullptr;
        qgraphicsproxywidget_isobscuredby_callback = nullptr;
        qgraphicsproxywidget_opaquearea_callback = nullptr;
        qgraphicsproxywidget_sceneeventfilter_callback = nullptr;
        qgraphicsproxywidget_supportsextension_callback = nullptr;
        qgraphicsproxywidget_setextension_callback = nullptr;
        qgraphicsproxywidget_extension_callback = nullptr;
        qgraphicsproxywidget_isempty_callback = nullptr;
        qgraphicsproxywidget_newproxywidget_callback = nullptr;
        qgraphicsproxywidget_updatemicrofocus_callback = nullptr;
        qgraphicsproxywidget_sender_callback = nullptr;
        qgraphicsproxywidget_sendersignalindex_callback = nullptr;
        qgraphicsproxywidget_receivers_callback = nullptr;
        qgraphicsproxywidget_issignalconnected_callback = nullptr;
        qgraphicsproxywidget_addtoindex_callback = nullptr;
        qgraphicsproxywidget_removefromindex_callback = nullptr;
        qgraphicsproxywidget_preparegeometrychange_callback = nullptr;
        qgraphicsproxywidget_setgraphicsitem_callback = nullptr;
        qgraphicsproxywidget_setownedbylayout_callback = nullptr;
    }

    // Callback setters
    void setQGraphicsProxyWidget_Metacall_Callback(QGraphicsProxyWidget_Metacall_Callback cb) { qgraphicsproxywidget_metacall_callback = cb; }
    void setQGraphicsProxyWidget_SetGeometry_Callback(QGraphicsProxyWidget_SetGeometry_Callback cb) { qgraphicsproxywidget_setgeometry_callback = cb; }
    void setQGraphicsProxyWidget_Paint_Callback(QGraphicsProxyWidget_Paint_Callback cb) { qgraphicsproxywidget_paint_callback = cb; }
    void setQGraphicsProxyWidget_Type_Callback(QGraphicsProxyWidget_Type_Callback cb) { qgraphicsproxywidget_type_callback = cb; }
    void setQGraphicsProxyWidget_ItemChange_Callback(QGraphicsProxyWidget_ItemChange_Callback cb) { qgraphicsproxywidget_itemchange_callback = cb; }
    void setQGraphicsProxyWidget_Event_Callback(QGraphicsProxyWidget_Event_Callback cb) { qgraphicsproxywidget_event_callback = cb; }
    void setQGraphicsProxyWidget_EventFilter_Callback(QGraphicsProxyWidget_EventFilter_Callback cb) { qgraphicsproxywidget_eventfilter_callback = cb; }
    void setQGraphicsProxyWidget_ShowEvent_Callback(QGraphicsProxyWidget_ShowEvent_Callback cb) { qgraphicsproxywidget_showevent_callback = cb; }
    void setQGraphicsProxyWidget_HideEvent_Callback(QGraphicsProxyWidget_HideEvent_Callback cb) { qgraphicsproxywidget_hideevent_callback = cb; }
    void setQGraphicsProxyWidget_ContextMenuEvent_Callback(QGraphicsProxyWidget_ContextMenuEvent_Callback cb) { qgraphicsproxywidget_contextmenuevent_callback = cb; }
    void setQGraphicsProxyWidget_DragEnterEvent_Callback(QGraphicsProxyWidget_DragEnterEvent_Callback cb) { qgraphicsproxywidget_dragenterevent_callback = cb; }
    void setQGraphicsProxyWidget_DragLeaveEvent_Callback(QGraphicsProxyWidget_DragLeaveEvent_Callback cb) { qgraphicsproxywidget_dragleaveevent_callback = cb; }
    void setQGraphicsProxyWidget_DragMoveEvent_Callback(QGraphicsProxyWidget_DragMoveEvent_Callback cb) { qgraphicsproxywidget_dragmoveevent_callback = cb; }
    void setQGraphicsProxyWidget_DropEvent_Callback(QGraphicsProxyWidget_DropEvent_Callback cb) { qgraphicsproxywidget_dropevent_callback = cb; }
    void setQGraphicsProxyWidget_HoverEnterEvent_Callback(QGraphicsProxyWidget_HoverEnterEvent_Callback cb) { qgraphicsproxywidget_hoverenterevent_callback = cb; }
    void setQGraphicsProxyWidget_HoverLeaveEvent_Callback(QGraphicsProxyWidget_HoverLeaveEvent_Callback cb) { qgraphicsproxywidget_hoverleaveevent_callback = cb; }
    void setQGraphicsProxyWidget_HoverMoveEvent_Callback(QGraphicsProxyWidget_HoverMoveEvent_Callback cb) { qgraphicsproxywidget_hovermoveevent_callback = cb; }
    void setQGraphicsProxyWidget_GrabMouseEvent_Callback(QGraphicsProxyWidget_GrabMouseEvent_Callback cb) { qgraphicsproxywidget_grabmouseevent_callback = cb; }
    void setQGraphicsProxyWidget_UngrabMouseEvent_Callback(QGraphicsProxyWidget_UngrabMouseEvent_Callback cb) { qgraphicsproxywidget_ungrabmouseevent_callback = cb; }
    void setQGraphicsProxyWidget_MouseMoveEvent_Callback(QGraphicsProxyWidget_MouseMoveEvent_Callback cb) { qgraphicsproxywidget_mousemoveevent_callback = cb; }
    void setQGraphicsProxyWidget_MousePressEvent_Callback(QGraphicsProxyWidget_MousePressEvent_Callback cb) { qgraphicsproxywidget_mousepressevent_callback = cb; }
    void setQGraphicsProxyWidget_MouseReleaseEvent_Callback(QGraphicsProxyWidget_MouseReleaseEvent_Callback cb) { qgraphicsproxywidget_mousereleaseevent_callback = cb; }
    void setQGraphicsProxyWidget_MouseDoubleClickEvent_Callback(QGraphicsProxyWidget_MouseDoubleClickEvent_Callback cb) { qgraphicsproxywidget_mousedoubleclickevent_callback = cb; }
    void setQGraphicsProxyWidget_WheelEvent_Callback(QGraphicsProxyWidget_WheelEvent_Callback cb) { qgraphicsproxywidget_wheelevent_callback = cb; }
    void setQGraphicsProxyWidget_KeyPressEvent_Callback(QGraphicsProxyWidget_KeyPressEvent_Callback cb) { qgraphicsproxywidget_keypressevent_callback = cb; }
    void setQGraphicsProxyWidget_KeyReleaseEvent_Callback(QGraphicsProxyWidget_KeyReleaseEvent_Callback cb) { qgraphicsproxywidget_keyreleaseevent_callback = cb; }
    void setQGraphicsProxyWidget_FocusInEvent_Callback(QGraphicsProxyWidget_FocusInEvent_Callback cb) { qgraphicsproxywidget_focusinevent_callback = cb; }
    void setQGraphicsProxyWidget_FocusOutEvent_Callback(QGraphicsProxyWidget_FocusOutEvent_Callback cb) { qgraphicsproxywidget_focusoutevent_callback = cb; }
    void setQGraphicsProxyWidget_FocusNextPrevChild_Callback(QGraphicsProxyWidget_FocusNextPrevChild_Callback cb) { qgraphicsproxywidget_focusnextprevchild_callback = cb; }
    void setQGraphicsProxyWidget_InputMethodQuery_Callback(QGraphicsProxyWidget_InputMethodQuery_Callback cb) { qgraphicsproxywidget_inputmethodquery_callback = cb; }
    void setQGraphicsProxyWidget_InputMethodEvent_Callback(QGraphicsProxyWidget_InputMethodEvent_Callback cb) { qgraphicsproxywidget_inputmethodevent_callback = cb; }
    void setQGraphicsProxyWidget_SizeHint_Callback(QGraphicsProxyWidget_SizeHint_Callback cb) { qgraphicsproxywidget_sizehint_callback = cb; }
    void setQGraphicsProxyWidget_ResizeEvent_Callback(QGraphicsProxyWidget_ResizeEvent_Callback cb) { qgraphicsproxywidget_resizeevent_callback = cb; }
    void setQGraphicsProxyWidget_GetContentsMargins_Callback(QGraphicsProxyWidget_GetContentsMargins_Callback cb) { qgraphicsproxywidget_getcontentsmargins_callback = cb; }
    void setQGraphicsProxyWidget_PaintWindowFrame_Callback(QGraphicsProxyWidget_PaintWindowFrame_Callback cb) { qgraphicsproxywidget_paintwindowframe_callback = cb; }
    void setQGraphicsProxyWidget_BoundingRect_Callback(QGraphicsProxyWidget_BoundingRect_Callback cb) { qgraphicsproxywidget_boundingrect_callback = cb; }
    void setQGraphicsProxyWidget_Shape_Callback(QGraphicsProxyWidget_Shape_Callback cb) { qgraphicsproxywidget_shape_callback = cb; }
    void setQGraphicsProxyWidget_InitStyleOption_Callback(QGraphicsProxyWidget_InitStyleOption_Callback cb) { qgraphicsproxywidget_initstyleoption_callback = cb; }
    void setQGraphicsProxyWidget_UpdateGeometry_Callback(QGraphicsProxyWidget_UpdateGeometry_Callback cb) { qgraphicsproxywidget_updategeometry_callback = cb; }
    void setQGraphicsProxyWidget_PropertyChange_Callback(QGraphicsProxyWidget_PropertyChange_Callback cb) { qgraphicsproxywidget_propertychange_callback = cb; }
    void setQGraphicsProxyWidget_SceneEvent_Callback(QGraphicsProxyWidget_SceneEvent_Callback cb) { qgraphicsproxywidget_sceneevent_callback = cb; }
    void setQGraphicsProxyWidget_WindowFrameEvent_Callback(QGraphicsProxyWidget_WindowFrameEvent_Callback cb) { qgraphicsproxywidget_windowframeevent_callback = cb; }
    void setQGraphicsProxyWidget_WindowFrameSectionAt_Callback(QGraphicsProxyWidget_WindowFrameSectionAt_Callback cb) { qgraphicsproxywidget_windowframesectionat_callback = cb; }
    void setQGraphicsProxyWidget_ChangeEvent_Callback(QGraphicsProxyWidget_ChangeEvent_Callback cb) { qgraphicsproxywidget_changeevent_callback = cb; }
    void setQGraphicsProxyWidget_CloseEvent_Callback(QGraphicsProxyWidget_CloseEvent_Callback cb) { qgraphicsproxywidget_closeevent_callback = cb; }
    void setQGraphicsProxyWidget_MoveEvent_Callback(QGraphicsProxyWidget_MoveEvent_Callback cb) { qgraphicsproxywidget_moveevent_callback = cb; }
    void setQGraphicsProxyWidget_PolishEvent_Callback(QGraphicsProxyWidget_PolishEvent_Callback cb) { qgraphicsproxywidget_polishevent_callback = cb; }
    void setQGraphicsProxyWidget_GrabKeyboardEvent_Callback(QGraphicsProxyWidget_GrabKeyboardEvent_Callback cb) { qgraphicsproxywidget_grabkeyboardevent_callback = cb; }
    void setQGraphicsProxyWidget_UngrabKeyboardEvent_Callback(QGraphicsProxyWidget_UngrabKeyboardEvent_Callback cb) { qgraphicsproxywidget_ungrabkeyboardevent_callback = cb; }
    void setQGraphicsProxyWidget_TimerEvent_Callback(QGraphicsProxyWidget_TimerEvent_Callback cb) { qgraphicsproxywidget_timerevent_callback = cb; }
    void setQGraphicsProxyWidget_ChildEvent_Callback(QGraphicsProxyWidget_ChildEvent_Callback cb) { qgraphicsproxywidget_childevent_callback = cb; }
    void setQGraphicsProxyWidget_CustomEvent_Callback(QGraphicsProxyWidget_CustomEvent_Callback cb) { qgraphicsproxywidget_customevent_callback = cb; }
    void setQGraphicsProxyWidget_ConnectNotify_Callback(QGraphicsProxyWidget_ConnectNotify_Callback cb) { qgraphicsproxywidget_connectnotify_callback = cb; }
    void setQGraphicsProxyWidget_DisconnectNotify_Callback(QGraphicsProxyWidget_DisconnectNotify_Callback cb) { qgraphicsproxywidget_disconnectnotify_callback = cb; }
    void setQGraphicsProxyWidget_Advance_Callback(QGraphicsProxyWidget_Advance_Callback cb) { qgraphicsproxywidget_advance_callback = cb; }
    void setQGraphicsProxyWidget_Contains_Callback(QGraphicsProxyWidget_Contains_Callback cb) { qgraphicsproxywidget_contains_callback = cb; }
    void setQGraphicsProxyWidget_CollidesWithItem_Callback(QGraphicsProxyWidget_CollidesWithItem_Callback cb) { qgraphicsproxywidget_collideswithitem_callback = cb; }
    void setQGraphicsProxyWidget_CollidesWithPath_Callback(QGraphicsProxyWidget_CollidesWithPath_Callback cb) { qgraphicsproxywidget_collideswithpath_callback = cb; }
    void setQGraphicsProxyWidget_IsObscuredBy_Callback(QGraphicsProxyWidget_IsObscuredBy_Callback cb) { qgraphicsproxywidget_isobscuredby_callback = cb; }
    void setQGraphicsProxyWidget_OpaqueArea_Callback(QGraphicsProxyWidget_OpaqueArea_Callback cb) { qgraphicsproxywidget_opaquearea_callback = cb; }
    void setQGraphicsProxyWidget_SceneEventFilter_Callback(QGraphicsProxyWidget_SceneEventFilter_Callback cb) { qgraphicsproxywidget_sceneeventfilter_callback = cb; }
    void setQGraphicsProxyWidget_SupportsExtension_Callback(QGraphicsProxyWidget_SupportsExtension_Callback cb) { qgraphicsproxywidget_supportsextension_callback = cb; }
    void setQGraphicsProxyWidget_SetExtension_Callback(QGraphicsProxyWidget_SetExtension_Callback cb) { qgraphicsproxywidget_setextension_callback = cb; }
    void setQGraphicsProxyWidget_Extension_Callback(QGraphicsProxyWidget_Extension_Callback cb) { qgraphicsproxywidget_extension_callback = cb; }
    void setQGraphicsProxyWidget_IsEmpty_Callback(QGraphicsProxyWidget_IsEmpty_Callback cb) { qgraphicsproxywidget_isempty_callback = cb; }
    void setQGraphicsProxyWidget_NewProxyWidget_Callback(QGraphicsProxyWidget_NewProxyWidget_Callback cb) { qgraphicsproxywidget_newproxywidget_callback = cb; }
    void setQGraphicsProxyWidget_UpdateMicroFocus_Callback(QGraphicsProxyWidget_UpdateMicroFocus_Callback cb) { qgraphicsproxywidget_updatemicrofocus_callback = cb; }
    void setQGraphicsProxyWidget_Sender_Callback(QGraphicsProxyWidget_Sender_Callback cb) { qgraphicsproxywidget_sender_callback = cb; }
    void setQGraphicsProxyWidget_SenderSignalIndex_Callback(QGraphicsProxyWidget_SenderSignalIndex_Callback cb) { qgraphicsproxywidget_sendersignalindex_callback = cb; }
    void setQGraphicsProxyWidget_Receivers_Callback(QGraphicsProxyWidget_Receivers_Callback cb) { qgraphicsproxywidget_receivers_callback = cb; }
    void setQGraphicsProxyWidget_IsSignalConnected_Callback(QGraphicsProxyWidget_IsSignalConnected_Callback cb) { qgraphicsproxywidget_issignalconnected_callback = cb; }
    void setQGraphicsProxyWidget_AddToIndex_Callback(QGraphicsProxyWidget_AddToIndex_Callback cb) { qgraphicsproxywidget_addtoindex_callback = cb; }
    void setQGraphicsProxyWidget_RemoveFromIndex_Callback(QGraphicsProxyWidget_RemoveFromIndex_Callback cb) { qgraphicsproxywidget_removefromindex_callback = cb; }
    void setQGraphicsProxyWidget_PrepareGeometryChange_Callback(QGraphicsProxyWidget_PrepareGeometryChange_Callback cb) { qgraphicsproxywidget_preparegeometrychange_callback = cb; }
    void setQGraphicsProxyWidget_SetGraphicsItem_Callback(QGraphicsProxyWidget_SetGraphicsItem_Callback cb) { qgraphicsproxywidget_setgraphicsitem_callback = cb; }
    void setQGraphicsProxyWidget_SetOwnedByLayout_Callback(QGraphicsProxyWidget_SetOwnedByLayout_Callback cb) { qgraphicsproxywidget_setownedbylayout_callback = cb; }

    // Base flag setters
    void setQGraphicsProxyWidget_Metacall_IsBase(bool value) const { qgraphicsproxywidget_metacall_isbase = value; }
    void setQGraphicsProxyWidget_SetGeometry_IsBase(bool value) const { qgraphicsproxywidget_setgeometry_isbase = value; }
    void setQGraphicsProxyWidget_Paint_IsBase(bool value) const { qgraphicsproxywidget_paint_isbase = value; }
    void setQGraphicsProxyWidget_Type_IsBase(bool value) const { qgraphicsproxywidget_type_isbase = value; }
    void setQGraphicsProxyWidget_ItemChange_IsBase(bool value) const { qgraphicsproxywidget_itemchange_isbase = value; }
    void setQGraphicsProxyWidget_Event_IsBase(bool value) const { qgraphicsproxywidget_event_isbase = value; }
    void setQGraphicsProxyWidget_EventFilter_IsBase(bool value) const { qgraphicsproxywidget_eventfilter_isbase = value; }
    void setQGraphicsProxyWidget_ShowEvent_IsBase(bool value) const { qgraphicsproxywidget_showevent_isbase = value; }
    void setQGraphicsProxyWidget_HideEvent_IsBase(bool value) const { qgraphicsproxywidget_hideevent_isbase = value; }
    void setQGraphicsProxyWidget_ContextMenuEvent_IsBase(bool value) const { qgraphicsproxywidget_contextmenuevent_isbase = value; }
    void setQGraphicsProxyWidget_DragEnterEvent_IsBase(bool value) const { qgraphicsproxywidget_dragenterevent_isbase = value; }
    void setQGraphicsProxyWidget_DragLeaveEvent_IsBase(bool value) const { qgraphicsproxywidget_dragleaveevent_isbase = value; }
    void setQGraphicsProxyWidget_DragMoveEvent_IsBase(bool value) const { qgraphicsproxywidget_dragmoveevent_isbase = value; }
    void setQGraphicsProxyWidget_DropEvent_IsBase(bool value) const { qgraphicsproxywidget_dropevent_isbase = value; }
    void setQGraphicsProxyWidget_HoverEnterEvent_IsBase(bool value) const { qgraphicsproxywidget_hoverenterevent_isbase = value; }
    void setQGraphicsProxyWidget_HoverLeaveEvent_IsBase(bool value) const { qgraphicsproxywidget_hoverleaveevent_isbase = value; }
    void setQGraphicsProxyWidget_HoverMoveEvent_IsBase(bool value) const { qgraphicsproxywidget_hovermoveevent_isbase = value; }
    void setQGraphicsProxyWidget_GrabMouseEvent_IsBase(bool value) const { qgraphicsproxywidget_grabmouseevent_isbase = value; }
    void setQGraphicsProxyWidget_UngrabMouseEvent_IsBase(bool value) const { qgraphicsproxywidget_ungrabmouseevent_isbase = value; }
    void setQGraphicsProxyWidget_MouseMoveEvent_IsBase(bool value) const { qgraphicsproxywidget_mousemoveevent_isbase = value; }
    void setQGraphicsProxyWidget_MousePressEvent_IsBase(bool value) const { qgraphicsproxywidget_mousepressevent_isbase = value; }
    void setQGraphicsProxyWidget_MouseReleaseEvent_IsBase(bool value) const { qgraphicsproxywidget_mousereleaseevent_isbase = value; }
    void setQGraphicsProxyWidget_MouseDoubleClickEvent_IsBase(bool value) const { qgraphicsproxywidget_mousedoubleclickevent_isbase = value; }
    void setQGraphicsProxyWidget_WheelEvent_IsBase(bool value) const { qgraphicsproxywidget_wheelevent_isbase = value; }
    void setQGraphicsProxyWidget_KeyPressEvent_IsBase(bool value) const { qgraphicsproxywidget_keypressevent_isbase = value; }
    void setQGraphicsProxyWidget_KeyReleaseEvent_IsBase(bool value) const { qgraphicsproxywidget_keyreleaseevent_isbase = value; }
    void setQGraphicsProxyWidget_FocusInEvent_IsBase(bool value) const { qgraphicsproxywidget_focusinevent_isbase = value; }
    void setQGraphicsProxyWidget_FocusOutEvent_IsBase(bool value) const { qgraphicsproxywidget_focusoutevent_isbase = value; }
    void setQGraphicsProxyWidget_FocusNextPrevChild_IsBase(bool value) const { qgraphicsproxywidget_focusnextprevchild_isbase = value; }
    void setQGraphicsProxyWidget_InputMethodQuery_IsBase(bool value) const { qgraphicsproxywidget_inputmethodquery_isbase = value; }
    void setQGraphicsProxyWidget_InputMethodEvent_IsBase(bool value) const { qgraphicsproxywidget_inputmethodevent_isbase = value; }
    void setQGraphicsProxyWidget_SizeHint_IsBase(bool value) const { qgraphicsproxywidget_sizehint_isbase = value; }
    void setQGraphicsProxyWidget_ResizeEvent_IsBase(bool value) const { qgraphicsproxywidget_resizeevent_isbase = value; }
    void setQGraphicsProxyWidget_GetContentsMargins_IsBase(bool value) const { qgraphicsproxywidget_getcontentsmargins_isbase = value; }
    void setQGraphicsProxyWidget_PaintWindowFrame_IsBase(bool value) const { qgraphicsproxywidget_paintwindowframe_isbase = value; }
    void setQGraphicsProxyWidget_BoundingRect_IsBase(bool value) const { qgraphicsproxywidget_boundingrect_isbase = value; }
    void setQGraphicsProxyWidget_Shape_IsBase(bool value) const { qgraphicsproxywidget_shape_isbase = value; }
    void setQGraphicsProxyWidget_InitStyleOption_IsBase(bool value) const { qgraphicsproxywidget_initstyleoption_isbase = value; }
    void setQGraphicsProxyWidget_UpdateGeometry_IsBase(bool value) const { qgraphicsproxywidget_updategeometry_isbase = value; }
    void setQGraphicsProxyWidget_PropertyChange_IsBase(bool value) const { qgraphicsproxywidget_propertychange_isbase = value; }
    void setQGraphicsProxyWidget_SceneEvent_IsBase(bool value) const { qgraphicsproxywidget_sceneevent_isbase = value; }
    void setQGraphicsProxyWidget_WindowFrameEvent_IsBase(bool value) const { qgraphicsproxywidget_windowframeevent_isbase = value; }
    void setQGraphicsProxyWidget_WindowFrameSectionAt_IsBase(bool value) const { qgraphicsproxywidget_windowframesectionat_isbase = value; }
    void setQGraphicsProxyWidget_ChangeEvent_IsBase(bool value) const { qgraphicsproxywidget_changeevent_isbase = value; }
    void setQGraphicsProxyWidget_CloseEvent_IsBase(bool value) const { qgraphicsproxywidget_closeevent_isbase = value; }
    void setQGraphicsProxyWidget_MoveEvent_IsBase(bool value) const { qgraphicsproxywidget_moveevent_isbase = value; }
    void setQGraphicsProxyWidget_PolishEvent_IsBase(bool value) const { qgraphicsproxywidget_polishevent_isbase = value; }
    void setQGraphicsProxyWidget_GrabKeyboardEvent_IsBase(bool value) const { qgraphicsproxywidget_grabkeyboardevent_isbase = value; }
    void setQGraphicsProxyWidget_UngrabKeyboardEvent_IsBase(bool value) const { qgraphicsproxywidget_ungrabkeyboardevent_isbase = value; }
    void setQGraphicsProxyWidget_TimerEvent_IsBase(bool value) const { qgraphicsproxywidget_timerevent_isbase = value; }
    void setQGraphicsProxyWidget_ChildEvent_IsBase(bool value) const { qgraphicsproxywidget_childevent_isbase = value; }
    void setQGraphicsProxyWidget_CustomEvent_IsBase(bool value) const { qgraphicsproxywidget_customevent_isbase = value; }
    void setQGraphicsProxyWidget_ConnectNotify_IsBase(bool value) const { qgraphicsproxywidget_connectnotify_isbase = value; }
    void setQGraphicsProxyWidget_DisconnectNotify_IsBase(bool value) const { qgraphicsproxywidget_disconnectnotify_isbase = value; }
    void setQGraphicsProxyWidget_Advance_IsBase(bool value) const { qgraphicsproxywidget_advance_isbase = value; }
    void setQGraphicsProxyWidget_Contains_IsBase(bool value) const { qgraphicsproxywidget_contains_isbase = value; }
    void setQGraphicsProxyWidget_CollidesWithItem_IsBase(bool value) const { qgraphicsproxywidget_collideswithitem_isbase = value; }
    void setQGraphicsProxyWidget_CollidesWithPath_IsBase(bool value) const { qgraphicsproxywidget_collideswithpath_isbase = value; }
    void setQGraphicsProxyWidget_IsObscuredBy_IsBase(bool value) const { qgraphicsproxywidget_isobscuredby_isbase = value; }
    void setQGraphicsProxyWidget_OpaqueArea_IsBase(bool value) const { qgraphicsproxywidget_opaquearea_isbase = value; }
    void setQGraphicsProxyWidget_SceneEventFilter_IsBase(bool value) const { qgraphicsproxywidget_sceneeventfilter_isbase = value; }
    void setQGraphicsProxyWidget_SupportsExtension_IsBase(bool value) const { qgraphicsproxywidget_supportsextension_isbase = value; }
    void setQGraphicsProxyWidget_SetExtension_IsBase(bool value) const { qgraphicsproxywidget_setextension_isbase = value; }
    void setQGraphicsProxyWidget_Extension_IsBase(bool value) const { qgraphicsproxywidget_extension_isbase = value; }
    void setQGraphicsProxyWidget_IsEmpty_IsBase(bool value) const { qgraphicsproxywidget_isempty_isbase = value; }
    void setQGraphicsProxyWidget_NewProxyWidget_IsBase(bool value) const { qgraphicsproxywidget_newproxywidget_isbase = value; }
    void setQGraphicsProxyWidget_UpdateMicroFocus_IsBase(bool value) const { qgraphicsproxywidget_updatemicrofocus_isbase = value; }
    void setQGraphicsProxyWidget_Sender_IsBase(bool value) const { qgraphicsproxywidget_sender_isbase = value; }
    void setQGraphicsProxyWidget_SenderSignalIndex_IsBase(bool value) const { qgraphicsproxywidget_sendersignalindex_isbase = value; }
    void setQGraphicsProxyWidget_Receivers_IsBase(bool value) const { qgraphicsproxywidget_receivers_isbase = value; }
    void setQGraphicsProxyWidget_IsSignalConnected_IsBase(bool value) const { qgraphicsproxywidget_issignalconnected_isbase = value; }
    void setQGraphicsProxyWidget_AddToIndex_IsBase(bool value) const { qgraphicsproxywidget_addtoindex_isbase = value; }
    void setQGraphicsProxyWidget_RemoveFromIndex_IsBase(bool value) const { qgraphicsproxywidget_removefromindex_isbase = value; }
    void setQGraphicsProxyWidget_PrepareGeometryChange_IsBase(bool value) const { qgraphicsproxywidget_preparegeometrychange_isbase = value; }
    void setQGraphicsProxyWidget_SetGraphicsItem_IsBase(bool value) const { qgraphicsproxywidget_setgraphicsitem_isbase = value; }
    void setQGraphicsProxyWidget_SetOwnedByLayout_IsBase(bool value) const { qgraphicsproxywidget_setownedbylayout_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgraphicsproxywidget_metacall_isbase) {
            qgraphicsproxywidget_metacall_isbase = false;
            return QGraphicsProxyWidget::qt_metacall(param1, param2, param3);
        } else if (qgraphicsproxywidget_metacall_callback != nullptr) {
            return qgraphicsproxywidget_metacall_callback(this, param1, param2, param3);
        } else {
            return QGraphicsProxyWidget::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setGeometry(const QRectF& rect) override {
        if (qgraphicsproxywidget_setgeometry_isbase) {
            qgraphicsproxywidget_setgeometry_isbase = false;
            QGraphicsProxyWidget::setGeometry(rect);
        } else if (qgraphicsproxywidget_setgeometry_callback != nullptr) {
            qgraphicsproxywidget_setgeometry_callback(this, rect);
        } else {
            QGraphicsProxyWidget::setGeometry(rect);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
        if (qgraphicsproxywidget_paint_isbase) {
            qgraphicsproxywidget_paint_isbase = false;
            QGraphicsProxyWidget::paint(painter, option, widget);
        } else if (qgraphicsproxywidget_paint_callback != nullptr) {
            qgraphicsproxywidget_paint_callback(this, painter, option, widget);
        } else {
            QGraphicsProxyWidget::paint(painter, option, widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int type() const override {
        if (qgraphicsproxywidget_type_isbase) {
            qgraphicsproxywidget_type_isbase = false;
            return QGraphicsProxyWidget::type();
        } else if (qgraphicsproxywidget_type_callback != nullptr) {
            return qgraphicsproxywidget_type_callback();
        } else {
            return QGraphicsProxyWidget::type();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
        if (qgraphicsproxywidget_itemchange_isbase) {
            qgraphicsproxywidget_itemchange_isbase = false;
            return QGraphicsProxyWidget::itemChange(change, value);
        } else if (qgraphicsproxywidget_itemchange_callback != nullptr) {
            return qgraphicsproxywidget_itemchange_callback(this, change, value);
        } else {
            return QGraphicsProxyWidget::itemChange(change, value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qgraphicsproxywidget_event_isbase) {
            qgraphicsproxywidget_event_isbase = false;
            return QGraphicsProxyWidget::event(event);
        } else if (qgraphicsproxywidget_event_callback != nullptr) {
            return qgraphicsproxywidget_event_callback(this, event);
        } else {
            return QGraphicsProxyWidget::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (qgraphicsproxywidget_eventfilter_isbase) {
            qgraphicsproxywidget_eventfilter_isbase = false;
            return QGraphicsProxyWidget::eventFilter(object, event);
        } else if (qgraphicsproxywidget_eventfilter_callback != nullptr) {
            return qgraphicsproxywidget_eventfilter_callback(this, object, event);
        } else {
            return QGraphicsProxyWidget::eventFilter(object, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qgraphicsproxywidget_showevent_isbase) {
            qgraphicsproxywidget_showevent_isbase = false;
            QGraphicsProxyWidget::showEvent(event);
        } else if (qgraphicsproxywidget_showevent_callback != nullptr) {
            qgraphicsproxywidget_showevent_callback(this, event);
        } else {
            QGraphicsProxyWidget::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qgraphicsproxywidget_hideevent_isbase) {
            qgraphicsproxywidget_hideevent_isbase = false;
            QGraphicsProxyWidget::hideEvent(event);
        } else if (qgraphicsproxywidget_hideevent_callback != nullptr) {
            qgraphicsproxywidget_hideevent_callback(this, event);
        } else {
            QGraphicsProxyWidget::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
        if (qgraphicsproxywidget_contextmenuevent_isbase) {
            qgraphicsproxywidget_contextmenuevent_isbase = false;
            QGraphicsProxyWidget::contextMenuEvent(event);
        } else if (qgraphicsproxywidget_contextmenuevent_callback != nullptr) {
            qgraphicsproxywidget_contextmenuevent_callback(this, event);
        } else {
            QGraphicsProxyWidget::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsproxywidget_dragenterevent_isbase) {
            qgraphicsproxywidget_dragenterevent_isbase = false;
            QGraphicsProxyWidget::dragEnterEvent(event);
        } else if (qgraphicsproxywidget_dragenterevent_callback != nullptr) {
            qgraphicsproxywidget_dragenterevent_callback(this, event);
        } else {
            QGraphicsProxyWidget::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsproxywidget_dragleaveevent_isbase) {
            qgraphicsproxywidget_dragleaveevent_isbase = false;
            QGraphicsProxyWidget::dragLeaveEvent(event);
        } else if (qgraphicsproxywidget_dragleaveevent_callback != nullptr) {
            qgraphicsproxywidget_dragleaveevent_callback(this, event);
        } else {
            QGraphicsProxyWidget::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsproxywidget_dragmoveevent_isbase) {
            qgraphicsproxywidget_dragmoveevent_isbase = false;
            QGraphicsProxyWidget::dragMoveEvent(event);
        } else if (qgraphicsproxywidget_dragmoveevent_callback != nullptr) {
            qgraphicsproxywidget_dragmoveevent_callback(this, event);
        } else {
            QGraphicsProxyWidget::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsproxywidget_dropevent_isbase) {
            qgraphicsproxywidget_dropevent_isbase = false;
            QGraphicsProxyWidget::dropEvent(event);
        } else if (qgraphicsproxywidget_dropevent_callback != nullptr) {
            qgraphicsproxywidget_dropevent_callback(this, event);
        } else {
            QGraphicsProxyWidget::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicsproxywidget_hoverenterevent_isbase) {
            qgraphicsproxywidget_hoverenterevent_isbase = false;
            QGraphicsProxyWidget::hoverEnterEvent(event);
        } else if (qgraphicsproxywidget_hoverenterevent_callback != nullptr) {
            qgraphicsproxywidget_hoverenterevent_callback(this, event);
        } else {
            QGraphicsProxyWidget::hoverEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicsproxywidget_hoverleaveevent_isbase) {
            qgraphicsproxywidget_hoverleaveevent_isbase = false;
            QGraphicsProxyWidget::hoverLeaveEvent(event);
        } else if (qgraphicsproxywidget_hoverleaveevent_callback != nullptr) {
            qgraphicsproxywidget_hoverleaveevent_callback(this, event);
        } else {
            QGraphicsProxyWidget::hoverLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicsproxywidget_hovermoveevent_isbase) {
            qgraphicsproxywidget_hovermoveevent_isbase = false;
            QGraphicsProxyWidget::hoverMoveEvent(event);
        } else if (qgraphicsproxywidget_hovermoveevent_callback != nullptr) {
            qgraphicsproxywidget_hovermoveevent_callback(this, event);
        } else {
            QGraphicsProxyWidget::hoverMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void grabMouseEvent(QEvent* event) override {
        if (qgraphicsproxywidget_grabmouseevent_isbase) {
            qgraphicsproxywidget_grabmouseevent_isbase = false;
            QGraphicsProxyWidget::grabMouseEvent(event);
        } else if (qgraphicsproxywidget_grabmouseevent_callback != nullptr) {
            qgraphicsproxywidget_grabmouseevent_callback(this, event);
        } else {
            QGraphicsProxyWidget::grabMouseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void ungrabMouseEvent(QEvent* event) override {
        if (qgraphicsproxywidget_ungrabmouseevent_isbase) {
            qgraphicsproxywidget_ungrabmouseevent_isbase = false;
            QGraphicsProxyWidget::ungrabMouseEvent(event);
        } else if (qgraphicsproxywidget_ungrabmouseevent_callback != nullptr) {
            qgraphicsproxywidget_ungrabmouseevent_callback(this, event);
        } else {
            QGraphicsProxyWidget::ungrabMouseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsproxywidget_mousemoveevent_isbase) {
            qgraphicsproxywidget_mousemoveevent_isbase = false;
            QGraphicsProxyWidget::mouseMoveEvent(event);
        } else if (qgraphicsproxywidget_mousemoveevent_callback != nullptr) {
            qgraphicsproxywidget_mousemoveevent_callback(this, event);
        } else {
            QGraphicsProxyWidget::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsproxywidget_mousepressevent_isbase) {
            qgraphicsproxywidget_mousepressevent_isbase = false;
            QGraphicsProxyWidget::mousePressEvent(event);
        } else if (qgraphicsproxywidget_mousepressevent_callback != nullptr) {
            qgraphicsproxywidget_mousepressevent_callback(this, event);
        } else {
            QGraphicsProxyWidget::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsproxywidget_mousereleaseevent_isbase) {
            qgraphicsproxywidget_mousereleaseevent_isbase = false;
            QGraphicsProxyWidget::mouseReleaseEvent(event);
        } else if (qgraphicsproxywidget_mousereleaseevent_callback != nullptr) {
            qgraphicsproxywidget_mousereleaseevent_callback(this, event);
        } else {
            QGraphicsProxyWidget::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsproxywidget_mousedoubleclickevent_isbase) {
            qgraphicsproxywidget_mousedoubleclickevent_isbase = false;
            QGraphicsProxyWidget::mouseDoubleClickEvent(event);
        } else if (qgraphicsproxywidget_mousedoubleclickevent_callback != nullptr) {
            qgraphicsproxywidget_mousedoubleclickevent_callback(this, event);
        } else {
            QGraphicsProxyWidget::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
        if (qgraphicsproxywidget_wheelevent_isbase) {
            qgraphicsproxywidget_wheelevent_isbase = false;
            QGraphicsProxyWidget::wheelEvent(event);
        } else if (qgraphicsproxywidget_wheelevent_callback != nullptr) {
            qgraphicsproxywidget_wheelevent_callback(this, event);
        } else {
            QGraphicsProxyWidget::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qgraphicsproxywidget_keypressevent_isbase) {
            qgraphicsproxywidget_keypressevent_isbase = false;
            QGraphicsProxyWidget::keyPressEvent(event);
        } else if (qgraphicsproxywidget_keypressevent_callback != nullptr) {
            qgraphicsproxywidget_keypressevent_callback(this, event);
        } else {
            QGraphicsProxyWidget::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qgraphicsproxywidget_keyreleaseevent_isbase) {
            qgraphicsproxywidget_keyreleaseevent_isbase = false;
            QGraphicsProxyWidget::keyReleaseEvent(event);
        } else if (qgraphicsproxywidget_keyreleaseevent_callback != nullptr) {
            qgraphicsproxywidget_keyreleaseevent_callback(this, event);
        } else {
            QGraphicsProxyWidget::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qgraphicsproxywidget_focusinevent_isbase) {
            qgraphicsproxywidget_focusinevent_isbase = false;
            QGraphicsProxyWidget::focusInEvent(event);
        } else if (qgraphicsproxywidget_focusinevent_callback != nullptr) {
            qgraphicsproxywidget_focusinevent_callback(this, event);
        } else {
            QGraphicsProxyWidget::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qgraphicsproxywidget_focusoutevent_isbase) {
            qgraphicsproxywidget_focusoutevent_isbase = false;
            QGraphicsProxyWidget::focusOutEvent(event);
        } else if (qgraphicsproxywidget_focusoutevent_callback != nullptr) {
            qgraphicsproxywidget_focusoutevent_callback(this, event);
        } else {
            QGraphicsProxyWidget::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qgraphicsproxywidget_focusnextprevchild_isbase) {
            qgraphicsproxywidget_focusnextprevchild_isbase = false;
            return QGraphicsProxyWidget::focusNextPrevChild(next);
        } else if (qgraphicsproxywidget_focusnextprevchild_callback != nullptr) {
            return qgraphicsproxywidget_focusnextprevchild_callback(this, next);
        } else {
            return QGraphicsProxyWidget::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qgraphicsproxywidget_inputmethodquery_isbase) {
            qgraphicsproxywidget_inputmethodquery_isbase = false;
            return QGraphicsProxyWidget::inputMethodQuery(query);
        } else if (qgraphicsproxywidget_inputmethodquery_callback != nullptr) {
            return qgraphicsproxywidget_inputmethodquery_callback(this, query);
        } else {
            return QGraphicsProxyWidget::inputMethodQuery(query);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qgraphicsproxywidget_inputmethodevent_isbase) {
            qgraphicsproxywidget_inputmethodevent_isbase = false;
            QGraphicsProxyWidget::inputMethodEvent(event);
        } else if (qgraphicsproxywidget_inputmethodevent_callback != nullptr) {
            qgraphicsproxywidget_inputmethodevent_callback(this, event);
        } else {
            QGraphicsProxyWidget::inputMethodEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF& constraint) const override {
        if (qgraphicsproxywidget_sizehint_isbase) {
            qgraphicsproxywidget_sizehint_isbase = false;
            return QGraphicsProxyWidget::sizeHint(which, constraint);
        } else if (qgraphicsproxywidget_sizehint_callback != nullptr) {
            return qgraphicsproxywidget_sizehint_callback(this, which, constraint);
        } else {
            return QGraphicsProxyWidget::sizeHint(which, constraint);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QGraphicsSceneResizeEvent* event) override {
        if (qgraphicsproxywidget_resizeevent_isbase) {
            qgraphicsproxywidget_resizeevent_isbase = false;
            QGraphicsProxyWidget::resizeEvent(event);
        } else if (qgraphicsproxywidget_resizeevent_callback != nullptr) {
            qgraphicsproxywidget_resizeevent_callback(this, event);
        } else {
            QGraphicsProxyWidget::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void getContentsMargins(qreal* left, qreal* top, qreal* right, qreal* bottom) const override {
        if (qgraphicsproxywidget_getcontentsmargins_isbase) {
            qgraphicsproxywidget_getcontentsmargins_isbase = false;
            QGraphicsProxyWidget::getContentsMargins(left, top, right, bottom);
        } else if (qgraphicsproxywidget_getcontentsmargins_callback != nullptr) {
            qgraphicsproxywidget_getcontentsmargins_callback(this, left, top, right, bottom);
        } else {
            QGraphicsProxyWidget::getContentsMargins(left, top, right, bottom);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintWindowFrame(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
        if (qgraphicsproxywidget_paintwindowframe_isbase) {
            qgraphicsproxywidget_paintwindowframe_isbase = false;
            QGraphicsProxyWidget::paintWindowFrame(painter, option, widget);
        } else if (qgraphicsproxywidget_paintwindowframe_callback != nullptr) {
            qgraphicsproxywidget_paintwindowframe_callback(this, painter, option, widget);
        } else {
            QGraphicsProxyWidget::paintWindowFrame(painter, option, widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRect() const override {
        if (qgraphicsproxywidget_boundingrect_isbase) {
            qgraphicsproxywidget_boundingrect_isbase = false;
            return QGraphicsProxyWidget::boundingRect();
        } else if (qgraphicsproxywidget_boundingrect_callback != nullptr) {
            return qgraphicsproxywidget_boundingrect_callback();
        } else {
            return QGraphicsProxyWidget::boundingRect();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath shape() const override {
        if (qgraphicsproxywidget_shape_isbase) {
            qgraphicsproxywidget_shape_isbase = false;
            return QGraphicsProxyWidget::shape();
        } else if (qgraphicsproxywidget_shape_callback != nullptr) {
            return qgraphicsproxywidget_shape_callback();
        } else {
            return QGraphicsProxyWidget::shape();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOption* option) const override {
        if (qgraphicsproxywidget_initstyleoption_isbase) {
            qgraphicsproxywidget_initstyleoption_isbase = false;
            QGraphicsProxyWidget::initStyleOption(option);
        } else if (qgraphicsproxywidget_initstyleoption_callback != nullptr) {
            qgraphicsproxywidget_initstyleoption_callback(this, option);
        } else {
            QGraphicsProxyWidget::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometry() override {
        if (qgraphicsproxywidget_updategeometry_isbase) {
            qgraphicsproxywidget_updategeometry_isbase = false;
            QGraphicsProxyWidget::updateGeometry();
        } else if (qgraphicsproxywidget_updategeometry_callback != nullptr) {
            qgraphicsproxywidget_updategeometry_callback();
        } else {
            QGraphicsProxyWidget::updateGeometry();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant propertyChange(const QString& propertyName, const QVariant& value) override {
        if (qgraphicsproxywidget_propertychange_isbase) {
            qgraphicsproxywidget_propertychange_isbase = false;
            return QGraphicsProxyWidget::propertyChange(propertyName, value);
        } else if (qgraphicsproxywidget_propertychange_callback != nullptr) {
            return qgraphicsproxywidget_propertychange_callback(this, propertyName, value);
        } else {
            return QGraphicsProxyWidget::propertyChange(propertyName, value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEvent(QEvent* event) override {
        if (qgraphicsproxywidget_sceneevent_isbase) {
            qgraphicsproxywidget_sceneevent_isbase = false;
            return QGraphicsProxyWidget::sceneEvent(event);
        } else if (qgraphicsproxywidget_sceneevent_callback != nullptr) {
            return qgraphicsproxywidget_sceneevent_callback(this, event);
        } else {
            return QGraphicsProxyWidget::sceneEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool windowFrameEvent(QEvent* e) override {
        if (qgraphicsproxywidget_windowframeevent_isbase) {
            qgraphicsproxywidget_windowframeevent_isbase = false;
            return QGraphicsProxyWidget::windowFrameEvent(e);
        } else if (qgraphicsproxywidget_windowframeevent_callback != nullptr) {
            return qgraphicsproxywidget_windowframeevent_callback(this, e);
        } else {
            return QGraphicsProxyWidget::windowFrameEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::WindowFrameSection windowFrameSectionAt(const QPointF& pos) const override {
        if (qgraphicsproxywidget_windowframesectionat_isbase) {
            qgraphicsproxywidget_windowframesectionat_isbase = false;
            return QGraphicsProxyWidget::windowFrameSectionAt(pos);
        } else if (qgraphicsproxywidget_windowframesectionat_callback != nullptr) {
            return qgraphicsproxywidget_windowframesectionat_callback(this, pos);
        } else {
            return QGraphicsProxyWidget::windowFrameSectionAt(pos);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* event) override {
        if (qgraphicsproxywidget_changeevent_isbase) {
            qgraphicsproxywidget_changeevent_isbase = false;
            QGraphicsProxyWidget::changeEvent(event);
        } else if (qgraphicsproxywidget_changeevent_callback != nullptr) {
            qgraphicsproxywidget_changeevent_callback(this, event);
        } else {
            QGraphicsProxyWidget::changeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qgraphicsproxywidget_closeevent_isbase) {
            qgraphicsproxywidget_closeevent_isbase = false;
            QGraphicsProxyWidget::closeEvent(event);
        } else if (qgraphicsproxywidget_closeevent_callback != nullptr) {
            qgraphicsproxywidget_closeevent_callback(this, event);
        } else {
            QGraphicsProxyWidget::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QGraphicsSceneMoveEvent* event) override {
        if (qgraphicsproxywidget_moveevent_isbase) {
            qgraphicsproxywidget_moveevent_isbase = false;
            QGraphicsProxyWidget::moveEvent(event);
        } else if (qgraphicsproxywidget_moveevent_callback != nullptr) {
            qgraphicsproxywidget_moveevent_callback(this, event);
        } else {
            QGraphicsProxyWidget::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void polishEvent() override {
        if (qgraphicsproxywidget_polishevent_isbase) {
            qgraphicsproxywidget_polishevent_isbase = false;
            QGraphicsProxyWidget::polishEvent();
        } else if (qgraphicsproxywidget_polishevent_callback != nullptr) {
            qgraphicsproxywidget_polishevent_callback();
        } else {
            QGraphicsProxyWidget::polishEvent();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void grabKeyboardEvent(QEvent* event) override {
        if (qgraphicsproxywidget_grabkeyboardevent_isbase) {
            qgraphicsproxywidget_grabkeyboardevent_isbase = false;
            QGraphicsProxyWidget::grabKeyboardEvent(event);
        } else if (qgraphicsproxywidget_grabkeyboardevent_callback != nullptr) {
            qgraphicsproxywidget_grabkeyboardevent_callback(this, event);
        } else {
            QGraphicsProxyWidget::grabKeyboardEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void ungrabKeyboardEvent(QEvent* event) override {
        if (qgraphicsproxywidget_ungrabkeyboardevent_isbase) {
            qgraphicsproxywidget_ungrabkeyboardevent_isbase = false;
            QGraphicsProxyWidget::ungrabKeyboardEvent(event);
        } else if (qgraphicsproxywidget_ungrabkeyboardevent_callback != nullptr) {
            qgraphicsproxywidget_ungrabkeyboardevent_callback(this, event);
        } else {
            QGraphicsProxyWidget::ungrabKeyboardEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgraphicsproxywidget_timerevent_isbase) {
            qgraphicsproxywidget_timerevent_isbase = false;
            QGraphicsProxyWidget::timerEvent(event);
        } else if (qgraphicsproxywidget_timerevent_callback != nullptr) {
            qgraphicsproxywidget_timerevent_callback(this, event);
        } else {
            QGraphicsProxyWidget::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgraphicsproxywidget_childevent_isbase) {
            qgraphicsproxywidget_childevent_isbase = false;
            QGraphicsProxyWidget::childEvent(event);
        } else if (qgraphicsproxywidget_childevent_callback != nullptr) {
            qgraphicsproxywidget_childevent_callback(this, event);
        } else {
            QGraphicsProxyWidget::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgraphicsproxywidget_customevent_isbase) {
            qgraphicsproxywidget_customevent_isbase = false;
            QGraphicsProxyWidget::customEvent(event);
        } else if (qgraphicsproxywidget_customevent_callback != nullptr) {
            qgraphicsproxywidget_customevent_callback(this, event);
        } else {
            QGraphicsProxyWidget::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgraphicsproxywidget_connectnotify_isbase) {
            qgraphicsproxywidget_connectnotify_isbase = false;
            QGraphicsProxyWidget::connectNotify(signal);
        } else if (qgraphicsproxywidget_connectnotify_callback != nullptr) {
            qgraphicsproxywidget_connectnotify_callback(this, signal);
        } else {
            QGraphicsProxyWidget::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgraphicsproxywidget_disconnectnotify_isbase) {
            qgraphicsproxywidget_disconnectnotify_isbase = false;
            QGraphicsProxyWidget::disconnectNotify(signal);
        } else if (qgraphicsproxywidget_disconnectnotify_callback != nullptr) {
            qgraphicsproxywidget_disconnectnotify_callback(this, signal);
        } else {
            QGraphicsProxyWidget::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void advance(int phase) override {
        if (qgraphicsproxywidget_advance_isbase) {
            qgraphicsproxywidget_advance_isbase = false;
            QGraphicsProxyWidget::advance(phase);
        } else if (qgraphicsproxywidget_advance_callback != nullptr) {
            qgraphicsproxywidget_advance_callback(this, phase);
        } else {
            QGraphicsProxyWidget::advance(phase);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool contains(const QPointF& point) const override {
        if (qgraphicsproxywidget_contains_isbase) {
            qgraphicsproxywidget_contains_isbase = false;
            return QGraphicsProxyWidget::contains(point);
        } else if (qgraphicsproxywidget_contains_callback != nullptr) {
            return qgraphicsproxywidget_contains_callback(this, point);
        } else {
            return QGraphicsProxyWidget::contains(point);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
        if (qgraphicsproxywidget_collideswithitem_isbase) {
            qgraphicsproxywidget_collideswithitem_isbase = false;
            return QGraphicsProxyWidget::collidesWithItem(other, mode);
        } else if (qgraphicsproxywidget_collideswithitem_callback != nullptr) {
            return qgraphicsproxywidget_collideswithitem_callback(this, other, mode);
        } else {
            return QGraphicsProxyWidget::collidesWithItem(other, mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
        if (qgraphicsproxywidget_collideswithpath_isbase) {
            qgraphicsproxywidget_collideswithpath_isbase = false;
            return QGraphicsProxyWidget::collidesWithPath(path, mode);
        } else if (qgraphicsproxywidget_collideswithpath_callback != nullptr) {
            return qgraphicsproxywidget_collideswithpath_callback(this, path, mode);
        } else {
            return QGraphicsProxyWidget::collidesWithPath(path, mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isObscuredBy(const QGraphicsItem* item) const override {
        if (qgraphicsproxywidget_isobscuredby_isbase) {
            qgraphicsproxywidget_isobscuredby_isbase = false;
            return QGraphicsProxyWidget::isObscuredBy(item);
        } else if (qgraphicsproxywidget_isobscuredby_callback != nullptr) {
            return qgraphicsproxywidget_isobscuredby_callback(this, item);
        } else {
            return QGraphicsProxyWidget::isObscuredBy(item);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath opaqueArea() const override {
        if (qgraphicsproxywidget_opaquearea_isbase) {
            qgraphicsproxywidget_opaquearea_isbase = false;
            return QGraphicsProxyWidget::opaqueArea();
        } else if (qgraphicsproxywidget_opaquearea_callback != nullptr) {
            return qgraphicsproxywidget_opaquearea_callback();
        } else {
            return QGraphicsProxyWidget::opaqueArea();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
        if (qgraphicsproxywidget_sceneeventfilter_isbase) {
            qgraphicsproxywidget_sceneeventfilter_isbase = false;
            return QGraphicsProxyWidget::sceneEventFilter(watched, event);
        } else if (qgraphicsproxywidget_sceneeventfilter_callback != nullptr) {
            return qgraphicsproxywidget_sceneeventfilter_callback(this, watched, event);
        } else {
            return QGraphicsProxyWidget::sceneEventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
        if (qgraphicsproxywidget_supportsextension_isbase) {
            qgraphicsproxywidget_supportsextension_isbase = false;
            return QGraphicsProxyWidget::supportsExtension(extension);
        } else if (qgraphicsproxywidget_supportsextension_callback != nullptr) {
            return qgraphicsproxywidget_supportsextension_callback(this, extension);
        } else {
            return QGraphicsProxyWidget::supportsExtension(extension);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
        if (qgraphicsproxywidget_setextension_isbase) {
            qgraphicsproxywidget_setextension_isbase = false;
            QGraphicsProxyWidget::setExtension(extension, variant);
        } else if (qgraphicsproxywidget_setextension_callback != nullptr) {
            qgraphicsproxywidget_setextension_callback(this, extension, variant);
        } else {
            QGraphicsProxyWidget::setExtension(extension, variant);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant extension(const QVariant& variant) const override {
        if (qgraphicsproxywidget_extension_isbase) {
            qgraphicsproxywidget_extension_isbase = false;
            return QGraphicsProxyWidget::extension(variant);
        } else if (qgraphicsproxywidget_extension_callback != nullptr) {
            return qgraphicsproxywidget_extension_callback(this, variant);
        } else {
            return QGraphicsProxyWidget::extension(variant);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEmpty() const override {
        if (qgraphicsproxywidget_isempty_isbase) {
            qgraphicsproxywidget_isempty_isbase = false;
            return QGraphicsProxyWidget::isEmpty();
        } else if (qgraphicsproxywidget_isempty_callback != nullptr) {
            return qgraphicsproxywidget_isempty_callback();
        } else {
            return QGraphicsProxyWidget::isEmpty();
        }
    }

    // Virtual method for C ABI access and custom callback
    QGraphicsProxyWidget* newProxyWidget(const QWidget* param1) {
        if (qgraphicsproxywidget_newproxywidget_isbase) {
            qgraphicsproxywidget_newproxywidget_isbase = false;
            return QGraphicsProxyWidget::newProxyWidget(param1);
        } else if (qgraphicsproxywidget_newproxywidget_callback != nullptr) {
            return qgraphicsproxywidget_newproxywidget_callback(this, param1);
        } else {
            return QGraphicsProxyWidget::newProxyWidget(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qgraphicsproxywidget_updatemicrofocus_isbase) {
            qgraphicsproxywidget_updatemicrofocus_isbase = false;
            QGraphicsProxyWidget::updateMicroFocus();
        } else if (qgraphicsproxywidget_updatemicrofocus_callback != nullptr) {
            qgraphicsproxywidget_updatemicrofocus_callback();
        } else {
            QGraphicsProxyWidget::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qgraphicsproxywidget_sender_isbase) {
            qgraphicsproxywidget_sender_isbase = false;
            return QGraphicsProxyWidget::sender();
        } else if (qgraphicsproxywidget_sender_callback != nullptr) {
            return qgraphicsproxywidget_sender_callback();
        } else {
            return QGraphicsProxyWidget::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qgraphicsproxywidget_sendersignalindex_isbase) {
            qgraphicsproxywidget_sendersignalindex_isbase = false;
            return QGraphicsProxyWidget::senderSignalIndex();
        } else if (qgraphicsproxywidget_sendersignalindex_callback != nullptr) {
            return qgraphicsproxywidget_sendersignalindex_callback();
        } else {
            return QGraphicsProxyWidget::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qgraphicsproxywidget_receivers_isbase) {
            qgraphicsproxywidget_receivers_isbase = false;
            return QGraphicsProxyWidget::receivers(signal);
        } else if (qgraphicsproxywidget_receivers_callback != nullptr) {
            return qgraphicsproxywidget_receivers_callback(this, signal);
        } else {
            return QGraphicsProxyWidget::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qgraphicsproxywidget_issignalconnected_isbase) {
            qgraphicsproxywidget_issignalconnected_isbase = false;
            return QGraphicsProxyWidget::isSignalConnected(signal);
        } else if (qgraphicsproxywidget_issignalconnected_callback != nullptr) {
            return qgraphicsproxywidget_issignalconnected_callback(this, signal);
        } else {
            return QGraphicsProxyWidget::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void addToIndex() {
        if (qgraphicsproxywidget_addtoindex_isbase) {
            qgraphicsproxywidget_addtoindex_isbase = false;
            QGraphicsProxyWidget::addToIndex();
        } else if (qgraphicsproxywidget_addtoindex_callback != nullptr) {
            qgraphicsproxywidget_addtoindex_callback();
        } else {
            QGraphicsProxyWidget::addToIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    void removeFromIndex() {
        if (qgraphicsproxywidget_removefromindex_isbase) {
            qgraphicsproxywidget_removefromindex_isbase = false;
            QGraphicsProxyWidget::removeFromIndex();
        } else if (qgraphicsproxywidget_removefromindex_callback != nullptr) {
            qgraphicsproxywidget_removefromindex_callback();
        } else {
            QGraphicsProxyWidget::removeFromIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    void prepareGeometryChange() {
        if (qgraphicsproxywidget_preparegeometrychange_isbase) {
            qgraphicsproxywidget_preparegeometrychange_isbase = false;
            QGraphicsProxyWidget::prepareGeometryChange();
        } else if (qgraphicsproxywidget_preparegeometrychange_callback != nullptr) {
            qgraphicsproxywidget_preparegeometrychange_callback();
        } else {
            QGraphicsProxyWidget::prepareGeometryChange();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setGraphicsItem(QGraphicsItem* item) {
        if (qgraphicsproxywidget_setgraphicsitem_isbase) {
            qgraphicsproxywidget_setgraphicsitem_isbase = false;
            QGraphicsProxyWidget::setGraphicsItem(item);
        } else if (qgraphicsproxywidget_setgraphicsitem_callback != nullptr) {
            qgraphicsproxywidget_setgraphicsitem_callback(this, item);
        } else {
            QGraphicsProxyWidget::setGraphicsItem(item);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setOwnedByLayout(bool ownedByLayout) {
        if (qgraphicsproxywidget_setownedbylayout_isbase) {
            qgraphicsproxywidget_setownedbylayout_isbase = false;
            QGraphicsProxyWidget::setOwnedByLayout(ownedByLayout);
        } else if (qgraphicsproxywidget_setownedbylayout_callback != nullptr) {
            qgraphicsproxywidget_setownedbylayout_callback(this, ownedByLayout);
        } else {
            QGraphicsProxyWidget::setOwnedByLayout(ownedByLayout);
        }
    }
};

#endif
