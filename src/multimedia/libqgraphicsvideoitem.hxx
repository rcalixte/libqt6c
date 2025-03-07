#pragma once
#ifndef SRC_MULTIMEDIAC_LIBVIRTUALQGRAPHICSVIDEOITEM_H
#define SRC_MULTIMEDIAC_LIBVIRTUALQGRAPHICSVIDEOITEM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QGraphicsVideoItem so that we can call protected methods
class VirtualQGraphicsVideoItem : public QGraphicsVideoItem {

  public:
    // Virtual class public types (including callbacks)
    using QGraphicsItem::Extension;
    using QGraphicsVideoItem_Metacall_Callback = int (*)(QGraphicsVideoItem*, QMetaObject::Call, int, void**);
    using QGraphicsVideoItem_BoundingRect_Callback = QRectF (*)();
    using QGraphicsVideoItem_Paint_Callback = void (*)(QGraphicsVideoItem*, QPainter*, const QStyleOptionGraphicsItem*, QWidget*);
    using QGraphicsVideoItem_Type_Callback = int (*)();
    using QGraphicsVideoItem_TimerEvent_Callback = void (*)(QGraphicsVideoItem*, QTimerEvent*);
    using QGraphicsVideoItem_ItemChange_Callback = QVariant (*)(QGraphicsVideoItem*, QGraphicsItem::GraphicsItemChange, const QVariant&);
    using QGraphicsVideoItem_Event_Callback = bool (*)(QGraphicsVideoItem*, QEvent*);
    using QGraphicsVideoItem_EventFilter_Callback = bool (*)(QGraphicsVideoItem*, QObject*, QEvent*);
    using QGraphicsVideoItem_ChildEvent_Callback = void (*)(QGraphicsVideoItem*, QChildEvent*);
    using QGraphicsVideoItem_CustomEvent_Callback = void (*)(QGraphicsVideoItem*, QEvent*);
    using QGraphicsVideoItem_ConnectNotify_Callback = void (*)(QGraphicsVideoItem*, const QMetaMethod&);
    using QGraphicsVideoItem_DisconnectNotify_Callback = void (*)(QGraphicsVideoItem*, const QMetaMethod&);
    using QGraphicsVideoItem_Advance_Callback = void (*)(QGraphicsVideoItem*, int);
    using QGraphicsVideoItem_Shape_Callback = QPainterPath (*)();
    using QGraphicsVideoItem_Contains_Callback = bool (*)(const QGraphicsVideoItem*, const QPointF&);
    using QGraphicsVideoItem_CollidesWithItem_Callback = bool (*)(const QGraphicsVideoItem*, const QGraphicsItem*, Qt::ItemSelectionMode);
    using QGraphicsVideoItem_CollidesWithPath_Callback = bool (*)(const QGraphicsVideoItem*, const QPainterPath&, Qt::ItemSelectionMode);
    using QGraphicsVideoItem_IsObscuredBy_Callback = bool (*)(const QGraphicsVideoItem*, const QGraphicsItem*);
    using QGraphicsVideoItem_OpaqueArea_Callback = QPainterPath (*)();
    using QGraphicsVideoItem_SceneEventFilter_Callback = bool (*)(QGraphicsVideoItem*, QGraphicsItem*, QEvent*);
    using QGraphicsVideoItem_SceneEvent_Callback = bool (*)(QGraphicsVideoItem*, QEvent*);
    using QGraphicsVideoItem_ContextMenuEvent_Callback = void (*)(QGraphicsVideoItem*, QGraphicsSceneContextMenuEvent*);
    using QGraphicsVideoItem_DragEnterEvent_Callback = void (*)(QGraphicsVideoItem*, QGraphicsSceneDragDropEvent*);
    using QGraphicsVideoItem_DragLeaveEvent_Callback = void (*)(QGraphicsVideoItem*, QGraphicsSceneDragDropEvent*);
    using QGraphicsVideoItem_DragMoveEvent_Callback = void (*)(QGraphicsVideoItem*, QGraphicsSceneDragDropEvent*);
    using QGraphicsVideoItem_DropEvent_Callback = void (*)(QGraphicsVideoItem*, QGraphicsSceneDragDropEvent*);
    using QGraphicsVideoItem_FocusInEvent_Callback = void (*)(QGraphicsVideoItem*, QFocusEvent*);
    using QGraphicsVideoItem_FocusOutEvent_Callback = void (*)(QGraphicsVideoItem*, QFocusEvent*);
    using QGraphicsVideoItem_HoverEnterEvent_Callback = void (*)(QGraphicsVideoItem*, QGraphicsSceneHoverEvent*);
    using QGraphicsVideoItem_HoverMoveEvent_Callback = void (*)(QGraphicsVideoItem*, QGraphicsSceneHoverEvent*);
    using QGraphicsVideoItem_HoverLeaveEvent_Callback = void (*)(QGraphicsVideoItem*, QGraphicsSceneHoverEvent*);
    using QGraphicsVideoItem_KeyPressEvent_Callback = void (*)(QGraphicsVideoItem*, QKeyEvent*);
    using QGraphicsVideoItem_KeyReleaseEvent_Callback = void (*)(QGraphicsVideoItem*, QKeyEvent*);
    using QGraphicsVideoItem_MousePressEvent_Callback = void (*)(QGraphicsVideoItem*, QGraphicsSceneMouseEvent*);
    using QGraphicsVideoItem_MouseMoveEvent_Callback = void (*)(QGraphicsVideoItem*, QGraphicsSceneMouseEvent*);
    using QGraphicsVideoItem_MouseReleaseEvent_Callback = void (*)(QGraphicsVideoItem*, QGraphicsSceneMouseEvent*);
    using QGraphicsVideoItem_MouseDoubleClickEvent_Callback = void (*)(QGraphicsVideoItem*, QGraphicsSceneMouseEvent*);
    using QGraphicsVideoItem_WheelEvent_Callback = void (*)(QGraphicsVideoItem*, QGraphicsSceneWheelEvent*);
    using QGraphicsVideoItem_InputMethodEvent_Callback = void (*)(QGraphicsVideoItem*, QInputMethodEvent*);
    using QGraphicsVideoItem_InputMethodQuery_Callback = QVariant (*)(const QGraphicsVideoItem*, Qt::InputMethodQuery);
    using QGraphicsVideoItem_SupportsExtension_Callback = bool (*)(const QGraphicsVideoItem*, int);
    using QGraphicsVideoItem_SetExtension_Callback = void (*)(QGraphicsVideoItem*, int, const QVariant&);
    using QGraphicsVideoItem_Extension_Callback = QVariant (*)(const QGraphicsVideoItem*, const QVariant&);
    using QGraphicsVideoItem_UpdateMicroFocus_Callback = void (*)();
    using QGraphicsVideoItem_Sender_Callback = QObject* (*)();
    using QGraphicsVideoItem_SenderSignalIndex_Callback = int (*)();
    using QGraphicsVideoItem_Receivers_Callback = int (*)(const QGraphicsVideoItem*, const char*);
    using QGraphicsVideoItem_IsSignalConnected_Callback = bool (*)(const QGraphicsVideoItem*, const QMetaMethod&);
    using QGraphicsVideoItem_AddToIndex_Callback = void (*)();
    using QGraphicsVideoItem_RemoveFromIndex_Callback = void (*)();
    using QGraphicsVideoItem_PrepareGeometryChange_Callback = void (*)();

  protected:
    // Instance callback storage
    QGraphicsVideoItem_Metacall_Callback qgraphicsvideoitem_metacall_callback = nullptr;
    QGraphicsVideoItem_BoundingRect_Callback qgraphicsvideoitem_boundingrect_callback = nullptr;
    QGraphicsVideoItem_Paint_Callback qgraphicsvideoitem_paint_callback = nullptr;
    QGraphicsVideoItem_Type_Callback qgraphicsvideoitem_type_callback = nullptr;
    QGraphicsVideoItem_TimerEvent_Callback qgraphicsvideoitem_timerevent_callback = nullptr;
    QGraphicsVideoItem_ItemChange_Callback qgraphicsvideoitem_itemchange_callback = nullptr;
    QGraphicsVideoItem_Event_Callback qgraphicsvideoitem_event_callback = nullptr;
    QGraphicsVideoItem_EventFilter_Callback qgraphicsvideoitem_eventfilter_callback = nullptr;
    QGraphicsVideoItem_ChildEvent_Callback qgraphicsvideoitem_childevent_callback = nullptr;
    QGraphicsVideoItem_CustomEvent_Callback qgraphicsvideoitem_customevent_callback = nullptr;
    QGraphicsVideoItem_ConnectNotify_Callback qgraphicsvideoitem_connectnotify_callback = nullptr;
    QGraphicsVideoItem_DisconnectNotify_Callback qgraphicsvideoitem_disconnectnotify_callback = nullptr;
    QGraphicsVideoItem_Advance_Callback qgraphicsvideoitem_advance_callback = nullptr;
    QGraphicsVideoItem_Shape_Callback qgraphicsvideoitem_shape_callback = nullptr;
    QGraphicsVideoItem_Contains_Callback qgraphicsvideoitem_contains_callback = nullptr;
    QGraphicsVideoItem_CollidesWithItem_Callback qgraphicsvideoitem_collideswithitem_callback = nullptr;
    QGraphicsVideoItem_CollidesWithPath_Callback qgraphicsvideoitem_collideswithpath_callback = nullptr;
    QGraphicsVideoItem_IsObscuredBy_Callback qgraphicsvideoitem_isobscuredby_callback = nullptr;
    QGraphicsVideoItem_OpaqueArea_Callback qgraphicsvideoitem_opaquearea_callback = nullptr;
    QGraphicsVideoItem_SceneEventFilter_Callback qgraphicsvideoitem_sceneeventfilter_callback = nullptr;
    QGraphicsVideoItem_SceneEvent_Callback qgraphicsvideoitem_sceneevent_callback = nullptr;
    QGraphicsVideoItem_ContextMenuEvent_Callback qgraphicsvideoitem_contextmenuevent_callback = nullptr;
    QGraphicsVideoItem_DragEnterEvent_Callback qgraphicsvideoitem_dragenterevent_callback = nullptr;
    QGraphicsVideoItem_DragLeaveEvent_Callback qgraphicsvideoitem_dragleaveevent_callback = nullptr;
    QGraphicsVideoItem_DragMoveEvent_Callback qgraphicsvideoitem_dragmoveevent_callback = nullptr;
    QGraphicsVideoItem_DropEvent_Callback qgraphicsvideoitem_dropevent_callback = nullptr;
    QGraphicsVideoItem_FocusInEvent_Callback qgraphicsvideoitem_focusinevent_callback = nullptr;
    QGraphicsVideoItem_FocusOutEvent_Callback qgraphicsvideoitem_focusoutevent_callback = nullptr;
    QGraphicsVideoItem_HoverEnterEvent_Callback qgraphicsvideoitem_hoverenterevent_callback = nullptr;
    QGraphicsVideoItem_HoverMoveEvent_Callback qgraphicsvideoitem_hovermoveevent_callback = nullptr;
    QGraphicsVideoItem_HoverLeaveEvent_Callback qgraphicsvideoitem_hoverleaveevent_callback = nullptr;
    QGraphicsVideoItem_KeyPressEvent_Callback qgraphicsvideoitem_keypressevent_callback = nullptr;
    QGraphicsVideoItem_KeyReleaseEvent_Callback qgraphicsvideoitem_keyreleaseevent_callback = nullptr;
    QGraphicsVideoItem_MousePressEvent_Callback qgraphicsvideoitem_mousepressevent_callback = nullptr;
    QGraphicsVideoItem_MouseMoveEvent_Callback qgraphicsvideoitem_mousemoveevent_callback = nullptr;
    QGraphicsVideoItem_MouseReleaseEvent_Callback qgraphicsvideoitem_mousereleaseevent_callback = nullptr;
    QGraphicsVideoItem_MouseDoubleClickEvent_Callback qgraphicsvideoitem_mousedoubleclickevent_callback = nullptr;
    QGraphicsVideoItem_WheelEvent_Callback qgraphicsvideoitem_wheelevent_callback = nullptr;
    QGraphicsVideoItem_InputMethodEvent_Callback qgraphicsvideoitem_inputmethodevent_callback = nullptr;
    QGraphicsVideoItem_InputMethodQuery_Callback qgraphicsvideoitem_inputmethodquery_callback = nullptr;
    QGraphicsVideoItem_SupportsExtension_Callback qgraphicsvideoitem_supportsextension_callback = nullptr;
    QGraphicsVideoItem_SetExtension_Callback qgraphicsvideoitem_setextension_callback = nullptr;
    QGraphicsVideoItem_Extension_Callback qgraphicsvideoitem_extension_callback = nullptr;
    QGraphicsVideoItem_UpdateMicroFocus_Callback qgraphicsvideoitem_updatemicrofocus_callback = nullptr;
    QGraphicsVideoItem_Sender_Callback qgraphicsvideoitem_sender_callback = nullptr;
    QGraphicsVideoItem_SenderSignalIndex_Callback qgraphicsvideoitem_sendersignalindex_callback = nullptr;
    QGraphicsVideoItem_Receivers_Callback qgraphicsvideoitem_receivers_callback = nullptr;
    QGraphicsVideoItem_IsSignalConnected_Callback qgraphicsvideoitem_issignalconnected_callback = nullptr;
    QGraphicsVideoItem_AddToIndex_Callback qgraphicsvideoitem_addtoindex_callback = nullptr;
    QGraphicsVideoItem_RemoveFromIndex_Callback qgraphicsvideoitem_removefromindex_callback = nullptr;
    QGraphicsVideoItem_PrepareGeometryChange_Callback qgraphicsvideoitem_preparegeometrychange_callback = nullptr;

    // Instance base flags
    mutable bool qgraphicsvideoitem_metacall_isbase = false;
    mutable bool qgraphicsvideoitem_boundingrect_isbase = false;
    mutable bool qgraphicsvideoitem_paint_isbase = false;
    mutable bool qgraphicsvideoitem_type_isbase = false;
    mutable bool qgraphicsvideoitem_timerevent_isbase = false;
    mutable bool qgraphicsvideoitem_itemchange_isbase = false;
    mutable bool qgraphicsvideoitem_event_isbase = false;
    mutable bool qgraphicsvideoitem_eventfilter_isbase = false;
    mutable bool qgraphicsvideoitem_childevent_isbase = false;
    mutable bool qgraphicsvideoitem_customevent_isbase = false;
    mutable bool qgraphicsvideoitem_connectnotify_isbase = false;
    mutable bool qgraphicsvideoitem_disconnectnotify_isbase = false;
    mutable bool qgraphicsvideoitem_advance_isbase = false;
    mutable bool qgraphicsvideoitem_shape_isbase = false;
    mutable bool qgraphicsvideoitem_contains_isbase = false;
    mutable bool qgraphicsvideoitem_collideswithitem_isbase = false;
    mutable bool qgraphicsvideoitem_collideswithpath_isbase = false;
    mutable bool qgraphicsvideoitem_isobscuredby_isbase = false;
    mutable bool qgraphicsvideoitem_opaquearea_isbase = false;
    mutable bool qgraphicsvideoitem_sceneeventfilter_isbase = false;
    mutable bool qgraphicsvideoitem_sceneevent_isbase = false;
    mutable bool qgraphicsvideoitem_contextmenuevent_isbase = false;
    mutable bool qgraphicsvideoitem_dragenterevent_isbase = false;
    mutable bool qgraphicsvideoitem_dragleaveevent_isbase = false;
    mutable bool qgraphicsvideoitem_dragmoveevent_isbase = false;
    mutable bool qgraphicsvideoitem_dropevent_isbase = false;
    mutable bool qgraphicsvideoitem_focusinevent_isbase = false;
    mutable bool qgraphicsvideoitem_focusoutevent_isbase = false;
    mutable bool qgraphicsvideoitem_hoverenterevent_isbase = false;
    mutable bool qgraphicsvideoitem_hovermoveevent_isbase = false;
    mutable bool qgraphicsvideoitem_hoverleaveevent_isbase = false;
    mutable bool qgraphicsvideoitem_keypressevent_isbase = false;
    mutable bool qgraphicsvideoitem_keyreleaseevent_isbase = false;
    mutable bool qgraphicsvideoitem_mousepressevent_isbase = false;
    mutable bool qgraphicsvideoitem_mousemoveevent_isbase = false;
    mutable bool qgraphicsvideoitem_mousereleaseevent_isbase = false;
    mutable bool qgraphicsvideoitem_mousedoubleclickevent_isbase = false;
    mutable bool qgraphicsvideoitem_wheelevent_isbase = false;
    mutable bool qgraphicsvideoitem_inputmethodevent_isbase = false;
    mutable bool qgraphicsvideoitem_inputmethodquery_isbase = false;
    mutable bool qgraphicsvideoitem_supportsextension_isbase = false;
    mutable bool qgraphicsvideoitem_setextension_isbase = false;
    mutable bool qgraphicsvideoitem_extension_isbase = false;
    mutable bool qgraphicsvideoitem_updatemicrofocus_isbase = false;
    mutable bool qgraphicsvideoitem_sender_isbase = false;
    mutable bool qgraphicsvideoitem_sendersignalindex_isbase = false;
    mutable bool qgraphicsvideoitem_receivers_isbase = false;
    mutable bool qgraphicsvideoitem_issignalconnected_isbase = false;
    mutable bool qgraphicsvideoitem_addtoindex_isbase = false;
    mutable bool qgraphicsvideoitem_removefromindex_isbase = false;
    mutable bool qgraphicsvideoitem_preparegeometrychange_isbase = false;

  public:
    VirtualQGraphicsVideoItem() : QGraphicsVideoItem(){};
    VirtualQGraphicsVideoItem(QGraphicsItem* parent) : QGraphicsVideoItem(parent){};

    ~VirtualQGraphicsVideoItem() {
        qgraphicsvideoitem_metacall_callback = nullptr;
        qgraphicsvideoitem_boundingrect_callback = nullptr;
        qgraphicsvideoitem_paint_callback = nullptr;
        qgraphicsvideoitem_type_callback = nullptr;
        qgraphicsvideoitem_timerevent_callback = nullptr;
        qgraphicsvideoitem_itemchange_callback = nullptr;
        qgraphicsvideoitem_event_callback = nullptr;
        qgraphicsvideoitem_eventfilter_callback = nullptr;
        qgraphicsvideoitem_childevent_callback = nullptr;
        qgraphicsvideoitem_customevent_callback = nullptr;
        qgraphicsvideoitem_connectnotify_callback = nullptr;
        qgraphicsvideoitem_disconnectnotify_callback = nullptr;
        qgraphicsvideoitem_advance_callback = nullptr;
        qgraphicsvideoitem_shape_callback = nullptr;
        qgraphicsvideoitem_contains_callback = nullptr;
        qgraphicsvideoitem_collideswithitem_callback = nullptr;
        qgraphicsvideoitem_collideswithpath_callback = nullptr;
        qgraphicsvideoitem_isobscuredby_callback = nullptr;
        qgraphicsvideoitem_opaquearea_callback = nullptr;
        qgraphicsvideoitem_sceneeventfilter_callback = nullptr;
        qgraphicsvideoitem_sceneevent_callback = nullptr;
        qgraphicsvideoitem_contextmenuevent_callback = nullptr;
        qgraphicsvideoitem_dragenterevent_callback = nullptr;
        qgraphicsvideoitem_dragleaveevent_callback = nullptr;
        qgraphicsvideoitem_dragmoveevent_callback = nullptr;
        qgraphicsvideoitem_dropevent_callback = nullptr;
        qgraphicsvideoitem_focusinevent_callback = nullptr;
        qgraphicsvideoitem_focusoutevent_callback = nullptr;
        qgraphicsvideoitem_hoverenterevent_callback = nullptr;
        qgraphicsvideoitem_hovermoveevent_callback = nullptr;
        qgraphicsvideoitem_hoverleaveevent_callback = nullptr;
        qgraphicsvideoitem_keypressevent_callback = nullptr;
        qgraphicsvideoitem_keyreleaseevent_callback = nullptr;
        qgraphicsvideoitem_mousepressevent_callback = nullptr;
        qgraphicsvideoitem_mousemoveevent_callback = nullptr;
        qgraphicsvideoitem_mousereleaseevent_callback = nullptr;
        qgraphicsvideoitem_mousedoubleclickevent_callback = nullptr;
        qgraphicsvideoitem_wheelevent_callback = nullptr;
        qgraphicsvideoitem_inputmethodevent_callback = nullptr;
        qgraphicsvideoitem_inputmethodquery_callback = nullptr;
        qgraphicsvideoitem_supportsextension_callback = nullptr;
        qgraphicsvideoitem_setextension_callback = nullptr;
        qgraphicsvideoitem_extension_callback = nullptr;
        qgraphicsvideoitem_updatemicrofocus_callback = nullptr;
        qgraphicsvideoitem_sender_callback = nullptr;
        qgraphicsvideoitem_sendersignalindex_callback = nullptr;
        qgraphicsvideoitem_receivers_callback = nullptr;
        qgraphicsvideoitem_issignalconnected_callback = nullptr;
        qgraphicsvideoitem_addtoindex_callback = nullptr;
        qgraphicsvideoitem_removefromindex_callback = nullptr;
        qgraphicsvideoitem_preparegeometrychange_callback = nullptr;
    }

    // Callback setters
    void setQGraphicsVideoItem_Metacall_Callback(QGraphicsVideoItem_Metacall_Callback cb) { qgraphicsvideoitem_metacall_callback = cb; }
    void setQGraphicsVideoItem_BoundingRect_Callback(QGraphicsVideoItem_BoundingRect_Callback cb) { qgraphicsvideoitem_boundingrect_callback = cb; }
    void setQGraphicsVideoItem_Paint_Callback(QGraphicsVideoItem_Paint_Callback cb) { qgraphicsvideoitem_paint_callback = cb; }
    void setQGraphicsVideoItem_Type_Callback(QGraphicsVideoItem_Type_Callback cb) { qgraphicsvideoitem_type_callback = cb; }
    void setQGraphicsVideoItem_TimerEvent_Callback(QGraphicsVideoItem_TimerEvent_Callback cb) { qgraphicsvideoitem_timerevent_callback = cb; }
    void setQGraphicsVideoItem_ItemChange_Callback(QGraphicsVideoItem_ItemChange_Callback cb) { qgraphicsvideoitem_itemchange_callback = cb; }
    void setQGraphicsVideoItem_Event_Callback(QGraphicsVideoItem_Event_Callback cb) { qgraphicsvideoitem_event_callback = cb; }
    void setQGraphicsVideoItem_EventFilter_Callback(QGraphicsVideoItem_EventFilter_Callback cb) { qgraphicsvideoitem_eventfilter_callback = cb; }
    void setQGraphicsVideoItem_ChildEvent_Callback(QGraphicsVideoItem_ChildEvent_Callback cb) { qgraphicsvideoitem_childevent_callback = cb; }
    void setQGraphicsVideoItem_CustomEvent_Callback(QGraphicsVideoItem_CustomEvent_Callback cb) { qgraphicsvideoitem_customevent_callback = cb; }
    void setQGraphicsVideoItem_ConnectNotify_Callback(QGraphicsVideoItem_ConnectNotify_Callback cb) { qgraphicsvideoitem_connectnotify_callback = cb; }
    void setQGraphicsVideoItem_DisconnectNotify_Callback(QGraphicsVideoItem_DisconnectNotify_Callback cb) { qgraphicsvideoitem_disconnectnotify_callback = cb; }
    void setQGraphicsVideoItem_Advance_Callback(QGraphicsVideoItem_Advance_Callback cb) { qgraphicsvideoitem_advance_callback = cb; }
    void setQGraphicsVideoItem_Shape_Callback(QGraphicsVideoItem_Shape_Callback cb) { qgraphicsvideoitem_shape_callback = cb; }
    void setQGraphicsVideoItem_Contains_Callback(QGraphicsVideoItem_Contains_Callback cb) { qgraphicsvideoitem_contains_callback = cb; }
    void setQGraphicsVideoItem_CollidesWithItem_Callback(QGraphicsVideoItem_CollidesWithItem_Callback cb) { qgraphicsvideoitem_collideswithitem_callback = cb; }
    void setQGraphicsVideoItem_CollidesWithPath_Callback(QGraphicsVideoItem_CollidesWithPath_Callback cb) { qgraphicsvideoitem_collideswithpath_callback = cb; }
    void setQGraphicsVideoItem_IsObscuredBy_Callback(QGraphicsVideoItem_IsObscuredBy_Callback cb) { qgraphicsvideoitem_isobscuredby_callback = cb; }
    void setQGraphicsVideoItem_OpaqueArea_Callback(QGraphicsVideoItem_OpaqueArea_Callback cb) { qgraphicsvideoitem_opaquearea_callback = cb; }
    void setQGraphicsVideoItem_SceneEventFilter_Callback(QGraphicsVideoItem_SceneEventFilter_Callback cb) { qgraphicsvideoitem_sceneeventfilter_callback = cb; }
    void setQGraphicsVideoItem_SceneEvent_Callback(QGraphicsVideoItem_SceneEvent_Callback cb) { qgraphicsvideoitem_sceneevent_callback = cb; }
    void setQGraphicsVideoItem_ContextMenuEvent_Callback(QGraphicsVideoItem_ContextMenuEvent_Callback cb) { qgraphicsvideoitem_contextmenuevent_callback = cb; }
    void setQGraphicsVideoItem_DragEnterEvent_Callback(QGraphicsVideoItem_DragEnterEvent_Callback cb) { qgraphicsvideoitem_dragenterevent_callback = cb; }
    void setQGraphicsVideoItem_DragLeaveEvent_Callback(QGraphicsVideoItem_DragLeaveEvent_Callback cb) { qgraphicsvideoitem_dragleaveevent_callback = cb; }
    void setQGraphicsVideoItem_DragMoveEvent_Callback(QGraphicsVideoItem_DragMoveEvent_Callback cb) { qgraphicsvideoitem_dragmoveevent_callback = cb; }
    void setQGraphicsVideoItem_DropEvent_Callback(QGraphicsVideoItem_DropEvent_Callback cb) { qgraphicsvideoitem_dropevent_callback = cb; }
    void setQGraphicsVideoItem_FocusInEvent_Callback(QGraphicsVideoItem_FocusInEvent_Callback cb) { qgraphicsvideoitem_focusinevent_callback = cb; }
    void setQGraphicsVideoItem_FocusOutEvent_Callback(QGraphicsVideoItem_FocusOutEvent_Callback cb) { qgraphicsvideoitem_focusoutevent_callback = cb; }
    void setQGraphicsVideoItem_HoverEnterEvent_Callback(QGraphicsVideoItem_HoverEnterEvent_Callback cb) { qgraphicsvideoitem_hoverenterevent_callback = cb; }
    void setQGraphicsVideoItem_HoverMoveEvent_Callback(QGraphicsVideoItem_HoverMoveEvent_Callback cb) { qgraphicsvideoitem_hovermoveevent_callback = cb; }
    void setQGraphicsVideoItem_HoverLeaveEvent_Callback(QGraphicsVideoItem_HoverLeaveEvent_Callback cb) { qgraphicsvideoitem_hoverleaveevent_callback = cb; }
    void setQGraphicsVideoItem_KeyPressEvent_Callback(QGraphicsVideoItem_KeyPressEvent_Callback cb) { qgraphicsvideoitem_keypressevent_callback = cb; }
    void setQGraphicsVideoItem_KeyReleaseEvent_Callback(QGraphicsVideoItem_KeyReleaseEvent_Callback cb) { qgraphicsvideoitem_keyreleaseevent_callback = cb; }
    void setQGraphicsVideoItem_MousePressEvent_Callback(QGraphicsVideoItem_MousePressEvent_Callback cb) { qgraphicsvideoitem_mousepressevent_callback = cb; }
    void setQGraphicsVideoItem_MouseMoveEvent_Callback(QGraphicsVideoItem_MouseMoveEvent_Callback cb) { qgraphicsvideoitem_mousemoveevent_callback = cb; }
    void setQGraphicsVideoItem_MouseReleaseEvent_Callback(QGraphicsVideoItem_MouseReleaseEvent_Callback cb) { qgraphicsvideoitem_mousereleaseevent_callback = cb; }
    void setQGraphicsVideoItem_MouseDoubleClickEvent_Callback(QGraphicsVideoItem_MouseDoubleClickEvent_Callback cb) { qgraphicsvideoitem_mousedoubleclickevent_callback = cb; }
    void setQGraphicsVideoItem_WheelEvent_Callback(QGraphicsVideoItem_WheelEvent_Callback cb) { qgraphicsvideoitem_wheelevent_callback = cb; }
    void setQGraphicsVideoItem_InputMethodEvent_Callback(QGraphicsVideoItem_InputMethodEvent_Callback cb) { qgraphicsvideoitem_inputmethodevent_callback = cb; }
    void setQGraphicsVideoItem_InputMethodQuery_Callback(QGraphicsVideoItem_InputMethodQuery_Callback cb) { qgraphicsvideoitem_inputmethodquery_callback = cb; }
    void setQGraphicsVideoItem_SupportsExtension_Callback(QGraphicsVideoItem_SupportsExtension_Callback cb) { qgraphicsvideoitem_supportsextension_callback = cb; }
    void setQGraphicsVideoItem_SetExtension_Callback(QGraphicsVideoItem_SetExtension_Callback cb) { qgraphicsvideoitem_setextension_callback = cb; }
    void setQGraphicsVideoItem_Extension_Callback(QGraphicsVideoItem_Extension_Callback cb) { qgraphicsvideoitem_extension_callback = cb; }
    void setQGraphicsVideoItem_UpdateMicroFocus_Callback(QGraphicsVideoItem_UpdateMicroFocus_Callback cb) { qgraphicsvideoitem_updatemicrofocus_callback = cb; }
    void setQGraphicsVideoItem_Sender_Callback(QGraphicsVideoItem_Sender_Callback cb) { qgraphicsvideoitem_sender_callback = cb; }
    void setQGraphicsVideoItem_SenderSignalIndex_Callback(QGraphicsVideoItem_SenderSignalIndex_Callback cb) { qgraphicsvideoitem_sendersignalindex_callback = cb; }
    void setQGraphicsVideoItem_Receivers_Callback(QGraphicsVideoItem_Receivers_Callback cb) { qgraphicsvideoitem_receivers_callback = cb; }
    void setQGraphicsVideoItem_IsSignalConnected_Callback(QGraphicsVideoItem_IsSignalConnected_Callback cb) { qgraphicsvideoitem_issignalconnected_callback = cb; }
    void setQGraphicsVideoItem_AddToIndex_Callback(QGraphicsVideoItem_AddToIndex_Callback cb) { qgraphicsvideoitem_addtoindex_callback = cb; }
    void setQGraphicsVideoItem_RemoveFromIndex_Callback(QGraphicsVideoItem_RemoveFromIndex_Callback cb) { qgraphicsvideoitem_removefromindex_callback = cb; }
    void setQGraphicsVideoItem_PrepareGeometryChange_Callback(QGraphicsVideoItem_PrepareGeometryChange_Callback cb) { qgraphicsvideoitem_preparegeometrychange_callback = cb; }

    // Base flag setters
    void setQGraphicsVideoItem_Metacall_IsBase(bool value) const { qgraphicsvideoitem_metacall_isbase = value; }
    void setQGraphicsVideoItem_BoundingRect_IsBase(bool value) const { qgraphicsvideoitem_boundingrect_isbase = value; }
    void setQGraphicsVideoItem_Paint_IsBase(bool value) const { qgraphicsvideoitem_paint_isbase = value; }
    void setQGraphicsVideoItem_Type_IsBase(bool value) const { qgraphicsvideoitem_type_isbase = value; }
    void setQGraphicsVideoItem_TimerEvent_IsBase(bool value) const { qgraphicsvideoitem_timerevent_isbase = value; }
    void setQGraphicsVideoItem_ItemChange_IsBase(bool value) const { qgraphicsvideoitem_itemchange_isbase = value; }
    void setQGraphicsVideoItem_Event_IsBase(bool value) const { qgraphicsvideoitem_event_isbase = value; }
    void setQGraphicsVideoItem_EventFilter_IsBase(bool value) const { qgraphicsvideoitem_eventfilter_isbase = value; }
    void setQGraphicsVideoItem_ChildEvent_IsBase(bool value) const { qgraphicsvideoitem_childevent_isbase = value; }
    void setQGraphicsVideoItem_CustomEvent_IsBase(bool value) const { qgraphicsvideoitem_customevent_isbase = value; }
    void setQGraphicsVideoItem_ConnectNotify_IsBase(bool value) const { qgraphicsvideoitem_connectnotify_isbase = value; }
    void setQGraphicsVideoItem_DisconnectNotify_IsBase(bool value) const { qgraphicsvideoitem_disconnectnotify_isbase = value; }
    void setQGraphicsVideoItem_Advance_IsBase(bool value) const { qgraphicsvideoitem_advance_isbase = value; }
    void setQGraphicsVideoItem_Shape_IsBase(bool value) const { qgraphicsvideoitem_shape_isbase = value; }
    void setQGraphicsVideoItem_Contains_IsBase(bool value) const { qgraphicsvideoitem_contains_isbase = value; }
    void setQGraphicsVideoItem_CollidesWithItem_IsBase(bool value) const { qgraphicsvideoitem_collideswithitem_isbase = value; }
    void setQGraphicsVideoItem_CollidesWithPath_IsBase(bool value) const { qgraphicsvideoitem_collideswithpath_isbase = value; }
    void setQGraphicsVideoItem_IsObscuredBy_IsBase(bool value) const { qgraphicsvideoitem_isobscuredby_isbase = value; }
    void setQGraphicsVideoItem_OpaqueArea_IsBase(bool value) const { qgraphicsvideoitem_opaquearea_isbase = value; }
    void setQGraphicsVideoItem_SceneEventFilter_IsBase(bool value) const { qgraphicsvideoitem_sceneeventfilter_isbase = value; }
    void setQGraphicsVideoItem_SceneEvent_IsBase(bool value) const { qgraphicsvideoitem_sceneevent_isbase = value; }
    void setQGraphicsVideoItem_ContextMenuEvent_IsBase(bool value) const { qgraphicsvideoitem_contextmenuevent_isbase = value; }
    void setQGraphicsVideoItem_DragEnterEvent_IsBase(bool value) const { qgraphicsvideoitem_dragenterevent_isbase = value; }
    void setQGraphicsVideoItem_DragLeaveEvent_IsBase(bool value) const { qgraphicsvideoitem_dragleaveevent_isbase = value; }
    void setQGraphicsVideoItem_DragMoveEvent_IsBase(bool value) const { qgraphicsvideoitem_dragmoveevent_isbase = value; }
    void setQGraphicsVideoItem_DropEvent_IsBase(bool value) const { qgraphicsvideoitem_dropevent_isbase = value; }
    void setQGraphicsVideoItem_FocusInEvent_IsBase(bool value) const { qgraphicsvideoitem_focusinevent_isbase = value; }
    void setQGraphicsVideoItem_FocusOutEvent_IsBase(bool value) const { qgraphicsvideoitem_focusoutevent_isbase = value; }
    void setQGraphicsVideoItem_HoverEnterEvent_IsBase(bool value) const { qgraphicsvideoitem_hoverenterevent_isbase = value; }
    void setQGraphicsVideoItem_HoverMoveEvent_IsBase(bool value) const { qgraphicsvideoitem_hovermoveevent_isbase = value; }
    void setQGraphicsVideoItem_HoverLeaveEvent_IsBase(bool value) const { qgraphicsvideoitem_hoverleaveevent_isbase = value; }
    void setQGraphicsVideoItem_KeyPressEvent_IsBase(bool value) const { qgraphicsvideoitem_keypressevent_isbase = value; }
    void setQGraphicsVideoItem_KeyReleaseEvent_IsBase(bool value) const { qgraphicsvideoitem_keyreleaseevent_isbase = value; }
    void setQGraphicsVideoItem_MousePressEvent_IsBase(bool value) const { qgraphicsvideoitem_mousepressevent_isbase = value; }
    void setQGraphicsVideoItem_MouseMoveEvent_IsBase(bool value) const { qgraphicsvideoitem_mousemoveevent_isbase = value; }
    void setQGraphicsVideoItem_MouseReleaseEvent_IsBase(bool value) const { qgraphicsvideoitem_mousereleaseevent_isbase = value; }
    void setQGraphicsVideoItem_MouseDoubleClickEvent_IsBase(bool value) const { qgraphicsvideoitem_mousedoubleclickevent_isbase = value; }
    void setQGraphicsVideoItem_WheelEvent_IsBase(bool value) const { qgraphicsvideoitem_wheelevent_isbase = value; }
    void setQGraphicsVideoItem_InputMethodEvent_IsBase(bool value) const { qgraphicsvideoitem_inputmethodevent_isbase = value; }
    void setQGraphicsVideoItem_InputMethodQuery_IsBase(bool value) const { qgraphicsvideoitem_inputmethodquery_isbase = value; }
    void setQGraphicsVideoItem_SupportsExtension_IsBase(bool value) const { qgraphicsvideoitem_supportsextension_isbase = value; }
    void setQGraphicsVideoItem_SetExtension_IsBase(bool value) const { qgraphicsvideoitem_setextension_isbase = value; }
    void setQGraphicsVideoItem_Extension_IsBase(bool value) const { qgraphicsvideoitem_extension_isbase = value; }
    void setQGraphicsVideoItem_UpdateMicroFocus_IsBase(bool value) const { qgraphicsvideoitem_updatemicrofocus_isbase = value; }
    void setQGraphicsVideoItem_Sender_IsBase(bool value) const { qgraphicsvideoitem_sender_isbase = value; }
    void setQGraphicsVideoItem_SenderSignalIndex_IsBase(bool value) const { qgraphicsvideoitem_sendersignalindex_isbase = value; }
    void setQGraphicsVideoItem_Receivers_IsBase(bool value) const { qgraphicsvideoitem_receivers_isbase = value; }
    void setQGraphicsVideoItem_IsSignalConnected_IsBase(bool value) const { qgraphicsvideoitem_issignalconnected_isbase = value; }
    void setQGraphicsVideoItem_AddToIndex_IsBase(bool value) const { qgraphicsvideoitem_addtoindex_isbase = value; }
    void setQGraphicsVideoItem_RemoveFromIndex_IsBase(bool value) const { qgraphicsvideoitem_removefromindex_isbase = value; }
    void setQGraphicsVideoItem_PrepareGeometryChange_IsBase(bool value) const { qgraphicsvideoitem_preparegeometrychange_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qgraphicsvideoitem_metacall_isbase) {
            qgraphicsvideoitem_metacall_isbase = false;
            return QGraphicsVideoItem::qt_metacall(param1, param2, param3);
        } else if (qgraphicsvideoitem_metacall_callback != nullptr) {
            return qgraphicsvideoitem_metacall_callback(this, param1, param2, param3);
        } else {
            return QGraphicsVideoItem::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRectF boundingRect() const override {
        if (qgraphicsvideoitem_boundingrect_isbase) {
            qgraphicsvideoitem_boundingrect_isbase = false;
            return QGraphicsVideoItem::boundingRect();
        } else if (qgraphicsvideoitem_boundingrect_callback != nullptr) {
            return qgraphicsvideoitem_boundingrect_callback();
        } else {
            return QGraphicsVideoItem::boundingRect();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
        if (qgraphicsvideoitem_paint_isbase) {
            qgraphicsvideoitem_paint_isbase = false;
            QGraphicsVideoItem::paint(painter, option, widget);
        } else if (qgraphicsvideoitem_paint_callback != nullptr) {
            qgraphicsvideoitem_paint_callback(this, painter, option, widget);
        } else {
            QGraphicsVideoItem::paint(painter, option, widget);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int type() const override {
        if (qgraphicsvideoitem_type_isbase) {
            qgraphicsvideoitem_type_isbase = false;
            return QGraphicsVideoItem::type();
        } else if (qgraphicsvideoitem_type_callback != nullptr) {
            return qgraphicsvideoitem_type_callback();
        } else {
            return QGraphicsVideoItem::type();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qgraphicsvideoitem_timerevent_isbase) {
            qgraphicsvideoitem_timerevent_isbase = false;
            QGraphicsVideoItem::timerEvent(event);
        } else if (qgraphicsvideoitem_timerevent_callback != nullptr) {
            qgraphicsvideoitem_timerevent_callback(this, event);
        } else {
            QGraphicsVideoItem::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
        if (qgraphicsvideoitem_itemchange_isbase) {
            qgraphicsvideoitem_itemchange_isbase = false;
            return QGraphicsVideoItem::itemChange(change, value);
        } else if (qgraphicsvideoitem_itemchange_callback != nullptr) {
            return qgraphicsvideoitem_itemchange_callback(this, change, value);
        } else {
            return QGraphicsVideoItem::itemChange(change, value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* ev) override {
        if (qgraphicsvideoitem_event_isbase) {
            qgraphicsvideoitem_event_isbase = false;
            return QGraphicsVideoItem::event(ev);
        } else if (qgraphicsvideoitem_event_callback != nullptr) {
            return qgraphicsvideoitem_event_callback(this, ev);
        } else {
            return QGraphicsVideoItem::event(ev);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qgraphicsvideoitem_eventfilter_isbase) {
            qgraphicsvideoitem_eventfilter_isbase = false;
            return QGraphicsVideoItem::eventFilter(watched, event);
        } else if (qgraphicsvideoitem_eventfilter_callback != nullptr) {
            return qgraphicsvideoitem_eventfilter_callback(this, watched, event);
        } else {
            return QGraphicsVideoItem::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qgraphicsvideoitem_childevent_isbase) {
            qgraphicsvideoitem_childevent_isbase = false;
            QGraphicsVideoItem::childEvent(event);
        } else if (qgraphicsvideoitem_childevent_callback != nullptr) {
            qgraphicsvideoitem_childevent_callback(this, event);
        } else {
            QGraphicsVideoItem::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qgraphicsvideoitem_customevent_isbase) {
            qgraphicsvideoitem_customevent_isbase = false;
            QGraphicsVideoItem::customEvent(event);
        } else if (qgraphicsvideoitem_customevent_callback != nullptr) {
            qgraphicsvideoitem_customevent_callback(this, event);
        } else {
            QGraphicsVideoItem::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qgraphicsvideoitem_connectnotify_isbase) {
            qgraphicsvideoitem_connectnotify_isbase = false;
            QGraphicsVideoItem::connectNotify(signal);
        } else if (qgraphicsvideoitem_connectnotify_callback != nullptr) {
            qgraphicsvideoitem_connectnotify_callback(this, signal);
        } else {
            QGraphicsVideoItem::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qgraphicsvideoitem_disconnectnotify_isbase) {
            qgraphicsvideoitem_disconnectnotify_isbase = false;
            QGraphicsVideoItem::disconnectNotify(signal);
        } else if (qgraphicsvideoitem_disconnectnotify_callback != nullptr) {
            qgraphicsvideoitem_disconnectnotify_callback(this, signal);
        } else {
            QGraphicsVideoItem::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void advance(int phase) override {
        if (qgraphicsvideoitem_advance_isbase) {
            qgraphicsvideoitem_advance_isbase = false;
            QGraphicsVideoItem::advance(phase);
        } else if (qgraphicsvideoitem_advance_callback != nullptr) {
            qgraphicsvideoitem_advance_callback(this, phase);
        } else {
            QGraphicsVideoItem::advance(phase);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath shape() const override {
        if (qgraphicsvideoitem_shape_isbase) {
            qgraphicsvideoitem_shape_isbase = false;
            return QGraphicsVideoItem::shape();
        } else if (qgraphicsvideoitem_shape_callback != nullptr) {
            return qgraphicsvideoitem_shape_callback();
        } else {
            return QGraphicsVideoItem::shape();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool contains(const QPointF& point) const override {
        if (qgraphicsvideoitem_contains_isbase) {
            qgraphicsvideoitem_contains_isbase = false;
            return QGraphicsVideoItem::contains(point);
        } else if (qgraphicsvideoitem_contains_callback != nullptr) {
            return qgraphicsvideoitem_contains_callback(this, point);
        } else {
            return QGraphicsVideoItem::contains(point);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
        if (qgraphicsvideoitem_collideswithitem_isbase) {
            qgraphicsvideoitem_collideswithitem_isbase = false;
            return QGraphicsVideoItem::collidesWithItem(other, mode);
        } else if (qgraphicsvideoitem_collideswithitem_callback != nullptr) {
            return qgraphicsvideoitem_collideswithitem_callback(this, other, mode);
        } else {
            return QGraphicsVideoItem::collidesWithItem(other, mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
        if (qgraphicsvideoitem_collideswithpath_isbase) {
            qgraphicsvideoitem_collideswithpath_isbase = false;
            return QGraphicsVideoItem::collidesWithPath(path, mode);
        } else if (qgraphicsvideoitem_collideswithpath_callback != nullptr) {
            return qgraphicsvideoitem_collideswithpath_callback(this, path, mode);
        } else {
            return QGraphicsVideoItem::collidesWithPath(path, mode);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isObscuredBy(const QGraphicsItem* item) const override {
        if (qgraphicsvideoitem_isobscuredby_isbase) {
            qgraphicsvideoitem_isobscuredby_isbase = false;
            return QGraphicsVideoItem::isObscuredBy(item);
        } else if (qgraphicsvideoitem_isobscuredby_callback != nullptr) {
            return qgraphicsvideoitem_isobscuredby_callback(this, item);
        } else {
            return QGraphicsVideoItem::isObscuredBy(item);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainterPath opaqueArea() const override {
        if (qgraphicsvideoitem_opaquearea_isbase) {
            qgraphicsvideoitem_opaquearea_isbase = false;
            return QGraphicsVideoItem::opaqueArea();
        } else if (qgraphicsvideoitem_opaquearea_callback != nullptr) {
            return qgraphicsvideoitem_opaquearea_callback();
        } else {
            return QGraphicsVideoItem::opaqueArea();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
        if (qgraphicsvideoitem_sceneeventfilter_isbase) {
            qgraphicsvideoitem_sceneeventfilter_isbase = false;
            return QGraphicsVideoItem::sceneEventFilter(watched, event);
        } else if (qgraphicsvideoitem_sceneeventfilter_callback != nullptr) {
            return qgraphicsvideoitem_sceneeventfilter_callback(this, watched, event);
        } else {
            return QGraphicsVideoItem::sceneEventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool sceneEvent(QEvent* event) override {
        if (qgraphicsvideoitem_sceneevent_isbase) {
            qgraphicsvideoitem_sceneevent_isbase = false;
            return QGraphicsVideoItem::sceneEvent(event);
        } else if (qgraphicsvideoitem_sceneevent_callback != nullptr) {
            return qgraphicsvideoitem_sceneevent_callback(this, event);
        } else {
            return QGraphicsVideoItem::sceneEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
        if (qgraphicsvideoitem_contextmenuevent_isbase) {
            qgraphicsvideoitem_contextmenuevent_isbase = false;
            QGraphicsVideoItem::contextMenuEvent(event);
        } else if (qgraphicsvideoitem_contextmenuevent_callback != nullptr) {
            qgraphicsvideoitem_contextmenuevent_callback(this, event);
        } else {
            QGraphicsVideoItem::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsvideoitem_dragenterevent_isbase) {
            qgraphicsvideoitem_dragenterevent_isbase = false;
            QGraphicsVideoItem::dragEnterEvent(event);
        } else if (qgraphicsvideoitem_dragenterevent_callback != nullptr) {
            qgraphicsvideoitem_dragenterevent_callback(this, event);
        } else {
            QGraphicsVideoItem::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsvideoitem_dragleaveevent_isbase) {
            qgraphicsvideoitem_dragleaveevent_isbase = false;
            QGraphicsVideoItem::dragLeaveEvent(event);
        } else if (qgraphicsvideoitem_dragleaveevent_callback != nullptr) {
            qgraphicsvideoitem_dragleaveevent_callback(this, event);
        } else {
            QGraphicsVideoItem::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsvideoitem_dragmoveevent_isbase) {
            qgraphicsvideoitem_dragmoveevent_isbase = false;
            QGraphicsVideoItem::dragMoveEvent(event);
        } else if (qgraphicsvideoitem_dragmoveevent_callback != nullptr) {
            qgraphicsvideoitem_dragmoveevent_callback(this, event);
        } else {
            QGraphicsVideoItem::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
        if (qgraphicsvideoitem_dropevent_isbase) {
            qgraphicsvideoitem_dropevent_isbase = false;
            QGraphicsVideoItem::dropEvent(event);
        } else if (qgraphicsvideoitem_dropevent_callback != nullptr) {
            qgraphicsvideoitem_dropevent_callback(this, event);
        } else {
            QGraphicsVideoItem::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qgraphicsvideoitem_focusinevent_isbase) {
            qgraphicsvideoitem_focusinevent_isbase = false;
            QGraphicsVideoItem::focusInEvent(event);
        } else if (qgraphicsvideoitem_focusinevent_callback != nullptr) {
            qgraphicsvideoitem_focusinevent_callback(this, event);
        } else {
            QGraphicsVideoItem::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qgraphicsvideoitem_focusoutevent_isbase) {
            qgraphicsvideoitem_focusoutevent_isbase = false;
            QGraphicsVideoItem::focusOutEvent(event);
        } else if (qgraphicsvideoitem_focusoutevent_callback != nullptr) {
            qgraphicsvideoitem_focusoutevent_callback(this, event);
        } else {
            QGraphicsVideoItem::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicsvideoitem_hoverenterevent_isbase) {
            qgraphicsvideoitem_hoverenterevent_isbase = false;
            QGraphicsVideoItem::hoverEnterEvent(event);
        } else if (qgraphicsvideoitem_hoverenterevent_callback != nullptr) {
            qgraphicsvideoitem_hoverenterevent_callback(this, event);
        } else {
            QGraphicsVideoItem::hoverEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicsvideoitem_hovermoveevent_isbase) {
            qgraphicsvideoitem_hovermoveevent_isbase = false;
            QGraphicsVideoItem::hoverMoveEvent(event);
        } else if (qgraphicsvideoitem_hovermoveevent_callback != nullptr) {
            qgraphicsvideoitem_hovermoveevent_callback(this, event);
        } else {
            QGraphicsVideoItem::hoverMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
        if (qgraphicsvideoitem_hoverleaveevent_isbase) {
            qgraphicsvideoitem_hoverleaveevent_isbase = false;
            QGraphicsVideoItem::hoverLeaveEvent(event);
        } else if (qgraphicsvideoitem_hoverleaveevent_callback != nullptr) {
            qgraphicsvideoitem_hoverleaveevent_callback(this, event);
        } else {
            QGraphicsVideoItem::hoverLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qgraphicsvideoitem_keypressevent_isbase) {
            qgraphicsvideoitem_keypressevent_isbase = false;
            QGraphicsVideoItem::keyPressEvent(event);
        } else if (qgraphicsvideoitem_keypressevent_callback != nullptr) {
            qgraphicsvideoitem_keypressevent_callback(this, event);
        } else {
            QGraphicsVideoItem::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qgraphicsvideoitem_keyreleaseevent_isbase) {
            qgraphicsvideoitem_keyreleaseevent_isbase = false;
            QGraphicsVideoItem::keyReleaseEvent(event);
        } else if (qgraphicsvideoitem_keyreleaseevent_callback != nullptr) {
            qgraphicsvideoitem_keyreleaseevent_callback(this, event);
        } else {
            QGraphicsVideoItem::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsvideoitem_mousepressevent_isbase) {
            qgraphicsvideoitem_mousepressevent_isbase = false;
            QGraphicsVideoItem::mousePressEvent(event);
        } else if (qgraphicsvideoitem_mousepressevent_callback != nullptr) {
            qgraphicsvideoitem_mousepressevent_callback(this, event);
        } else {
            QGraphicsVideoItem::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsvideoitem_mousemoveevent_isbase) {
            qgraphicsvideoitem_mousemoveevent_isbase = false;
            QGraphicsVideoItem::mouseMoveEvent(event);
        } else if (qgraphicsvideoitem_mousemoveevent_callback != nullptr) {
            qgraphicsvideoitem_mousemoveevent_callback(this, event);
        } else {
            QGraphicsVideoItem::mouseMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsvideoitem_mousereleaseevent_isbase) {
            qgraphicsvideoitem_mousereleaseevent_isbase = false;
            QGraphicsVideoItem::mouseReleaseEvent(event);
        } else if (qgraphicsvideoitem_mousereleaseevent_callback != nullptr) {
            qgraphicsvideoitem_mousereleaseevent_callback(this, event);
        } else {
            QGraphicsVideoItem::mouseReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
        if (qgraphicsvideoitem_mousedoubleclickevent_isbase) {
            qgraphicsvideoitem_mousedoubleclickevent_isbase = false;
            QGraphicsVideoItem::mouseDoubleClickEvent(event);
        } else if (qgraphicsvideoitem_mousedoubleclickevent_callback != nullptr) {
            qgraphicsvideoitem_mousedoubleclickevent_callback(this, event);
        } else {
            QGraphicsVideoItem::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
        if (qgraphicsvideoitem_wheelevent_isbase) {
            qgraphicsvideoitem_wheelevent_isbase = false;
            QGraphicsVideoItem::wheelEvent(event);
        } else if (qgraphicsvideoitem_wheelevent_callback != nullptr) {
            qgraphicsvideoitem_wheelevent_callback(this, event);
        } else {
            QGraphicsVideoItem::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qgraphicsvideoitem_inputmethodevent_isbase) {
            qgraphicsvideoitem_inputmethodevent_isbase = false;
            QGraphicsVideoItem::inputMethodEvent(event);
        } else if (qgraphicsvideoitem_inputmethodevent_callback != nullptr) {
            qgraphicsvideoitem_inputmethodevent_callback(this, event);
        } else {
            QGraphicsVideoItem::inputMethodEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qgraphicsvideoitem_inputmethodquery_isbase) {
            qgraphicsvideoitem_inputmethodquery_isbase = false;
            return QGraphicsVideoItem::inputMethodQuery(query);
        } else if (qgraphicsvideoitem_inputmethodquery_callback != nullptr) {
            return qgraphicsvideoitem_inputmethodquery_callback(this, query);
        } else {
            return QGraphicsVideoItem::inputMethodQuery(query);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
        if (qgraphicsvideoitem_supportsextension_isbase) {
            qgraphicsvideoitem_supportsextension_isbase = false;
            return QGraphicsVideoItem::supportsExtension(extension);
        } else if (qgraphicsvideoitem_supportsextension_callback != nullptr) {
            return qgraphicsvideoitem_supportsextension_callback(this, extension);
        } else {
            return QGraphicsVideoItem::supportsExtension(extension);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
        if (qgraphicsvideoitem_setextension_isbase) {
            qgraphicsvideoitem_setextension_isbase = false;
            QGraphicsVideoItem::setExtension(extension, variant);
        } else if (qgraphicsvideoitem_setextension_callback != nullptr) {
            qgraphicsvideoitem_setextension_callback(this, extension, variant);
        } else {
            QGraphicsVideoItem::setExtension(extension, variant);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant extension(const QVariant& variant) const override {
        if (qgraphicsvideoitem_extension_isbase) {
            qgraphicsvideoitem_extension_isbase = false;
            return QGraphicsVideoItem::extension(variant);
        } else if (qgraphicsvideoitem_extension_callback != nullptr) {
            return qgraphicsvideoitem_extension_callback(this, variant);
        } else {
            return QGraphicsVideoItem::extension(variant);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qgraphicsvideoitem_updatemicrofocus_isbase) {
            qgraphicsvideoitem_updatemicrofocus_isbase = false;
            QGraphicsVideoItem::updateMicroFocus();
        } else if (qgraphicsvideoitem_updatemicrofocus_callback != nullptr) {
            qgraphicsvideoitem_updatemicrofocus_callback();
        } else {
            QGraphicsVideoItem::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qgraphicsvideoitem_sender_isbase) {
            qgraphicsvideoitem_sender_isbase = false;
            return QGraphicsVideoItem::sender();
        } else if (qgraphicsvideoitem_sender_callback != nullptr) {
            return qgraphicsvideoitem_sender_callback();
        } else {
            return QGraphicsVideoItem::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qgraphicsvideoitem_sendersignalindex_isbase) {
            qgraphicsvideoitem_sendersignalindex_isbase = false;
            return QGraphicsVideoItem::senderSignalIndex();
        } else if (qgraphicsvideoitem_sendersignalindex_callback != nullptr) {
            return qgraphicsvideoitem_sendersignalindex_callback();
        } else {
            return QGraphicsVideoItem::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qgraphicsvideoitem_receivers_isbase) {
            qgraphicsvideoitem_receivers_isbase = false;
            return QGraphicsVideoItem::receivers(signal);
        } else if (qgraphicsvideoitem_receivers_callback != nullptr) {
            return qgraphicsvideoitem_receivers_callback(this, signal);
        } else {
            return QGraphicsVideoItem::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qgraphicsvideoitem_issignalconnected_isbase) {
            qgraphicsvideoitem_issignalconnected_isbase = false;
            return QGraphicsVideoItem::isSignalConnected(signal);
        } else if (qgraphicsvideoitem_issignalconnected_callback != nullptr) {
            return qgraphicsvideoitem_issignalconnected_callback(this, signal);
        } else {
            return QGraphicsVideoItem::isSignalConnected(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void addToIndex() {
        if (qgraphicsvideoitem_addtoindex_isbase) {
            qgraphicsvideoitem_addtoindex_isbase = false;
            QGraphicsVideoItem::addToIndex();
        } else if (qgraphicsvideoitem_addtoindex_callback != nullptr) {
            qgraphicsvideoitem_addtoindex_callback();
        } else {
            QGraphicsVideoItem::addToIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    void removeFromIndex() {
        if (qgraphicsvideoitem_removefromindex_isbase) {
            qgraphicsvideoitem_removefromindex_isbase = false;
            QGraphicsVideoItem::removeFromIndex();
        } else if (qgraphicsvideoitem_removefromindex_callback != nullptr) {
            qgraphicsvideoitem_removefromindex_callback();
        } else {
            QGraphicsVideoItem::removeFromIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    void prepareGeometryChange() {
        if (qgraphicsvideoitem_preparegeometrychange_isbase) {
            qgraphicsvideoitem_preparegeometrychange_isbase = false;
            QGraphicsVideoItem::prepareGeometryChange();
        } else if (qgraphicsvideoitem_preparegeometrychange_callback != nullptr) {
            qgraphicsvideoitem_preparegeometrychange_callback();
        } else {
            QGraphicsVideoItem::prepareGeometryChange();
        }
    }
};

#endif
