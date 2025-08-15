#pragma once
#ifndef SRCQT6C_LIBQGRAPHICSPROXYWIDGET_H
#define SRCQT6C_LIBQGRAPHICSPROXYWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qgraphicsproxywidget.html

/// q_graphicsproxywidget_new constructs a new QGraphicsProxyWidget object.
///
QGraphicsProxyWidget* q_graphicsproxywidget_new();

/// q_graphicsproxywidget_new2 constructs a new QGraphicsProxyWidget object.
///
/// @param parent QGraphicsItem*
QGraphicsProxyWidget* q_graphicsproxywidget_new2(void* parent);

/// q_graphicsproxywidget_new3 constructs a new QGraphicsProxyWidget object.
///
/// @param parent QGraphicsItem*
/// @param wFlags flag of enum Qt__WindowType
QGraphicsProxyWidget* q_graphicsproxywidget_new3(void* parent, int64_t wFlags);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QGraphicsProxyWidget*
const QMetaObject* q_graphicsproxywidget_meta_object(void* self);

/// @param self QGraphicsProxyWidget*
/// @param param1 const char*
void* q_graphicsproxywidget_metacast(void* self, const char* param1);

/// @param self QGraphicsProxyWidget*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_graphicsproxywidget_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QGraphicsProxyWidget*
/// @param callback int32_t fn(QGraphicsProxyWidget*, enum QMetaObject__Call, int, void*)
void q_graphicsproxywidget_on_metacall(void* self, int32_t (*callback)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// @param self QGraphicsProxyWidget*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_graphicsproxywidget_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_graphicsproxywidget_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#setWidget)
///
/// @param self QGraphicsProxyWidget*
/// @param widget QWidget*
void q_graphicsproxywidget_set_widget(void* self, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#widget)
///
/// @param self QGraphicsProxyWidget*
QWidget* q_graphicsproxywidget_widget(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#subWidgetRect)
///
/// @param self QGraphicsProxyWidget*
/// @param widget QWidget*
QRectF* q_graphicsproxywidget_sub_widget_rect(void* self, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#setGeometry)
///
/// @param self QGraphicsProxyWidget*
/// @param rect QRectF*
void q_graphicsproxywidget_set_geometry(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#setGeometry)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*, QRectF*)
void q_graphicsproxywidget_on_set_geometry(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#setGeometry)
///
/// Base class method implementation
///
/// @param self QGraphicsProxyWidget*
/// @param rect QRectF*
void q_graphicsproxywidget_qbase_set_geometry(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#paint)
///
/// @param self QGraphicsProxyWidget*
/// @param painter QPainter*
/// @param option QStyleOptionGraphicsItem*
/// @param widget QWidget*
void q_graphicsproxywidget_paint(void* self, void* painter, void* option, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#paint)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*, QPainter*, QStyleOptionGraphicsItem*, QWidget*)
void q_graphicsproxywidget_on_paint(void* self, void (*callback)(void*, void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#paint)
///
/// Base class method implementation
///
/// @param self QGraphicsProxyWidget*
/// @param painter QPainter*
/// @param option QStyleOptionGraphicsItem*
/// @param widget QWidget*
void q_graphicsproxywidget_qbase_paint(void* self, void* painter, void* option, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#type)
///
/// @param self QGraphicsProxyWidget*
int32_t q_graphicsproxywidget_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#type)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsProxyWidget*
/// @param callback int32_t fn()
void q_graphicsproxywidget_on_type(void* self, int32_t (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#type)
///
/// Base class method implementation
///
/// @param self QGraphicsProxyWidget*
int32_t q_graphicsproxywidget_qbase_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#createProxyForChildWidget)
///
/// @param self QGraphicsProxyWidget*
/// @param child QWidget*
QGraphicsProxyWidget* q_graphicsproxywidget_create_proxy_for_child_widget(void* self, void* child);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#itemChange)
///
/// @param self QGraphicsProxyWidget*
/// @param change enum QGraphicsItem__GraphicsItemChange
/// @param value QVariant*
QVariant* q_graphicsproxywidget_item_change(void* self, int64_t change, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#itemChange)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsProxyWidget*
/// @param callback QVariant* fn(QGraphicsProxyWidget*, enum QGraphicsItem__GraphicsItemChange, QVariant*)
void q_graphicsproxywidget_on_item_change(void* self, QVariant* (*callback)(void*, int64_t, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#itemChange)
///
/// Base class method implementation
///
/// @param self QGraphicsProxyWidget*
/// @param change enum QGraphicsItem__GraphicsItemChange
/// @param value QVariant*
QVariant* q_graphicsproxywidget_qbase_item_change(void* self, int64_t change, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#event)
///
/// @param self QGraphicsProxyWidget*
/// @param event QEvent*
bool q_graphicsproxywidget_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsProxyWidget*
/// @param callback bool fn(QGraphicsProxyWidget*, QEvent*)
void q_graphicsproxywidget_on_event(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#event)
///
/// Base class method implementation
///
/// @param self QGraphicsProxyWidget*
/// @param event QEvent*
bool q_graphicsproxywidget_qbase_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#eventFilter)
///
/// @param self QGraphicsProxyWidget*
/// @param object QObject*
/// @param event QEvent*
bool q_graphicsproxywidget_event_filter(void* self, void* object, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#eventFilter)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsProxyWidget*
/// @param callback bool fn(QGraphicsProxyWidget*, QObject*, QEvent*)
void q_graphicsproxywidget_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#eventFilter)
///
/// Base class method implementation
///
/// @param self QGraphicsProxyWidget*
/// @param object QObject*
/// @param event QEvent*
bool q_graphicsproxywidget_qbase_event_filter(void* self, void* object, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#showEvent)
///
/// @param self QGraphicsProxyWidget*
/// @param event QShowEvent*
void q_graphicsproxywidget_show_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#showEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*, QShowEvent*)
void q_graphicsproxywidget_on_show_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#showEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsProxyWidget*
/// @param event QShowEvent*
void q_graphicsproxywidget_qbase_show_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#hideEvent)
///
/// @param self QGraphicsProxyWidget*
/// @param event QHideEvent*
void q_graphicsproxywidget_hide_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#hideEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*, QHideEvent*)
void q_graphicsproxywidget_on_hide_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#hideEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsProxyWidget*
/// @param event QHideEvent*
void q_graphicsproxywidget_qbase_hide_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#contextMenuEvent)
///
/// @param self QGraphicsProxyWidget*
/// @param event QGraphicsSceneContextMenuEvent*
void q_graphicsproxywidget_context_menu_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#contextMenuEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*, QGraphicsSceneContextMenuEvent*)
void q_graphicsproxywidget_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#contextMenuEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsProxyWidget*
/// @param event QGraphicsSceneContextMenuEvent*
void q_graphicsproxywidget_qbase_context_menu_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#dragEnterEvent)
///
/// @param self QGraphicsProxyWidget*
/// @param event QGraphicsSceneDragDropEvent*
void q_graphicsproxywidget_drag_enter_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#dragEnterEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*, QGraphicsSceneDragDropEvent*)
void q_graphicsproxywidget_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#dragEnterEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsProxyWidget*
/// @param event QGraphicsSceneDragDropEvent*
void q_graphicsproxywidget_qbase_drag_enter_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#dragLeaveEvent)
///
/// @param self QGraphicsProxyWidget*
/// @param event QGraphicsSceneDragDropEvent*
void q_graphicsproxywidget_drag_leave_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#dragLeaveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*, QGraphicsSceneDragDropEvent*)
void q_graphicsproxywidget_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#dragLeaveEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsProxyWidget*
/// @param event QGraphicsSceneDragDropEvent*
void q_graphicsproxywidget_qbase_drag_leave_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#dragMoveEvent)
///
/// @param self QGraphicsProxyWidget*
/// @param event QGraphicsSceneDragDropEvent*
void q_graphicsproxywidget_drag_move_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#dragMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*, QGraphicsSceneDragDropEvent*)
void q_graphicsproxywidget_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#dragMoveEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsProxyWidget*
/// @param event QGraphicsSceneDragDropEvent*
void q_graphicsproxywidget_qbase_drag_move_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#dropEvent)
///
/// @param self QGraphicsProxyWidget*
/// @param event QGraphicsSceneDragDropEvent*
void q_graphicsproxywidget_drop_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#dropEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*, QGraphicsSceneDragDropEvent*)
void q_graphicsproxywidget_on_drop_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#dropEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsProxyWidget*
/// @param event QGraphicsSceneDragDropEvent*
void q_graphicsproxywidget_qbase_drop_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#hoverEnterEvent)
///
/// @param self QGraphicsProxyWidget*
/// @param event QGraphicsSceneHoverEvent*
void q_graphicsproxywidget_hover_enter_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#hoverEnterEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*, QGraphicsSceneHoverEvent*)
void q_graphicsproxywidget_on_hover_enter_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#hoverEnterEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsProxyWidget*
/// @param event QGraphicsSceneHoverEvent*
void q_graphicsproxywidget_qbase_hover_enter_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#hoverLeaveEvent)
///
/// @param self QGraphicsProxyWidget*
/// @param event QGraphicsSceneHoverEvent*
void q_graphicsproxywidget_hover_leave_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#hoverLeaveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*, QGraphicsSceneHoverEvent*)
void q_graphicsproxywidget_on_hover_leave_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#hoverLeaveEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsProxyWidget*
/// @param event QGraphicsSceneHoverEvent*
void q_graphicsproxywidget_qbase_hover_leave_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#hoverMoveEvent)
///
/// @param self QGraphicsProxyWidget*
/// @param event QGraphicsSceneHoverEvent*
void q_graphicsproxywidget_hover_move_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#hoverMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*, QGraphicsSceneHoverEvent*)
void q_graphicsproxywidget_on_hover_move_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#hoverMoveEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsProxyWidget*
/// @param event QGraphicsSceneHoverEvent*
void q_graphicsproxywidget_qbase_hover_move_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#grabMouseEvent)
///
/// @param self QGraphicsProxyWidget*
/// @param event QEvent*
void q_graphicsproxywidget_grab_mouse_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#grabMouseEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*, QEvent*)
void q_graphicsproxywidget_on_grab_mouse_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#grabMouseEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsProxyWidget*
/// @param event QEvent*
void q_graphicsproxywidget_qbase_grab_mouse_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#ungrabMouseEvent)
///
/// @param self QGraphicsProxyWidget*
/// @param event QEvent*
void q_graphicsproxywidget_ungrab_mouse_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#ungrabMouseEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*, QEvent*)
void q_graphicsproxywidget_on_ungrab_mouse_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#ungrabMouseEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsProxyWidget*
/// @param event QEvent*
void q_graphicsproxywidget_qbase_ungrab_mouse_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#mouseMoveEvent)
///
/// @param self QGraphicsProxyWidget*
/// @param event QGraphicsSceneMouseEvent*
void q_graphicsproxywidget_mouse_move_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#mouseMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*, QGraphicsSceneMouseEvent*)
void q_graphicsproxywidget_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#mouseMoveEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsProxyWidget*
/// @param event QGraphicsSceneMouseEvent*
void q_graphicsproxywidget_qbase_mouse_move_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#mousePressEvent)
///
/// @param self QGraphicsProxyWidget*
/// @param event QGraphicsSceneMouseEvent*
void q_graphicsproxywidget_mouse_press_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*, QGraphicsSceneMouseEvent*)
void q_graphicsproxywidget_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#mousePressEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsProxyWidget*
/// @param event QGraphicsSceneMouseEvent*
void q_graphicsproxywidget_qbase_mouse_press_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#mouseReleaseEvent)
///
/// @param self QGraphicsProxyWidget*
/// @param event QGraphicsSceneMouseEvent*
void q_graphicsproxywidget_mouse_release_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*, QGraphicsSceneMouseEvent*)
void q_graphicsproxywidget_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsProxyWidget*
/// @param event QGraphicsSceneMouseEvent*
void q_graphicsproxywidget_qbase_mouse_release_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#mouseDoubleClickEvent)
///
/// @param self QGraphicsProxyWidget*
/// @param event QGraphicsSceneMouseEvent*
void q_graphicsproxywidget_mouse_double_click_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#mouseDoubleClickEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*, QGraphicsSceneMouseEvent*)
void q_graphicsproxywidget_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#mouseDoubleClickEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsProxyWidget*
/// @param event QGraphicsSceneMouseEvent*
void q_graphicsproxywidget_qbase_mouse_double_click_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#wheelEvent)
///
/// @param self QGraphicsProxyWidget*
/// @param event QGraphicsSceneWheelEvent*
void q_graphicsproxywidget_wheel_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#wheelEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*, QGraphicsSceneWheelEvent*)
void q_graphicsproxywidget_on_wheel_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#wheelEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsProxyWidget*
/// @param event QGraphicsSceneWheelEvent*
void q_graphicsproxywidget_qbase_wheel_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#keyPressEvent)
///
/// @param self QGraphicsProxyWidget*
/// @param event QKeyEvent*
void q_graphicsproxywidget_key_press_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#keyPressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*, QKeyEvent*)
void q_graphicsproxywidget_on_key_press_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#keyPressEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsProxyWidget*
/// @param event QKeyEvent*
void q_graphicsproxywidget_qbase_key_press_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#keyReleaseEvent)
///
/// @param self QGraphicsProxyWidget*
/// @param event QKeyEvent*
void q_graphicsproxywidget_key_release_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#keyReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*, QKeyEvent*)
void q_graphicsproxywidget_on_key_release_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#keyReleaseEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsProxyWidget*
/// @param event QKeyEvent*
void q_graphicsproxywidget_qbase_key_release_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#focusInEvent)
///
/// @param self QGraphicsProxyWidget*
/// @param event QFocusEvent*
void q_graphicsproxywidget_focus_in_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#focusInEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*, QFocusEvent*)
void q_graphicsproxywidget_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#focusInEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsProxyWidget*
/// @param event QFocusEvent*
void q_graphicsproxywidget_qbase_focus_in_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#focusOutEvent)
///
/// @param self QGraphicsProxyWidget*
/// @param event QFocusEvent*
void q_graphicsproxywidget_focus_out_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#focusOutEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*, QFocusEvent*)
void q_graphicsproxywidget_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#focusOutEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsProxyWidget*
/// @param event QFocusEvent*
void q_graphicsproxywidget_qbase_focus_out_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#focusNextPrevChild)
///
/// @param self QGraphicsProxyWidget*
/// @param next bool
bool q_graphicsproxywidget_focus_next_prev_child(void* self, bool next);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#focusNextPrevChild)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsProxyWidget*
/// @param callback bool fn(QGraphicsProxyWidget*, bool)
void q_graphicsproxywidget_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#focusNextPrevChild)
///
/// Base class method implementation
///
/// @param self QGraphicsProxyWidget*
/// @param next bool
bool q_graphicsproxywidget_qbase_focus_next_prev_child(void* self, bool next);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#inputMethodQuery)
///
/// @param self QGraphicsProxyWidget*
/// @param query enum Qt__InputMethodQuery
QVariant* q_graphicsproxywidget_input_method_query(void* self, int64_t query);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#inputMethodQuery)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsProxyWidget*
/// @param callback QVariant* fn(QGraphicsProxyWidget*, enum Qt__InputMethodQuery)
void q_graphicsproxywidget_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#inputMethodQuery)
///
/// Base class method implementation
///
/// @param self QGraphicsProxyWidget*
/// @param query enum Qt__InputMethodQuery
QVariant* q_graphicsproxywidget_qbase_input_method_query(void* self, int64_t query);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#inputMethodEvent)
///
/// @param self QGraphicsProxyWidget*
/// @param event QInputMethodEvent*
void q_graphicsproxywidget_input_method_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#inputMethodEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*, QInputMethodEvent*)
void q_graphicsproxywidget_on_input_method_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#inputMethodEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsProxyWidget*
/// @param event QInputMethodEvent*
void q_graphicsproxywidget_qbase_input_method_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#sizeHint)
///
/// @param self QGraphicsProxyWidget*
/// @param which enum Qt__SizeHint
/// @param constraint QSizeF*
QSizeF* q_graphicsproxywidget_size_hint(void* self, int64_t which, void* constraint);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsProxyWidget*
/// @param callback QSizeF* fn(QGraphicsProxyWidget*, enum Qt__SizeHint, QSizeF*)
void q_graphicsproxywidget_on_size_hint(void* self, QSizeF* (*callback)(void*, int64_t, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#sizeHint)
///
/// Base class method implementation
///
/// @param self QGraphicsProxyWidget*
/// @param which enum Qt__SizeHint
/// @param constraint QSizeF*
QSizeF* q_graphicsproxywidget_qbase_size_hint(void* self, int64_t which, void* constraint);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#resizeEvent)
///
/// @param self QGraphicsProxyWidget*
/// @param event QGraphicsSceneResizeEvent*
void q_graphicsproxywidget_resize_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*, QGraphicsSceneResizeEvent*)
void q_graphicsproxywidget_on_resize_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#resizeEvent)
///
/// Base class method implementation
///
/// @param self QGraphicsProxyWidget*
/// @param event QGraphicsSceneResizeEvent*
void q_graphicsproxywidget_qbase_resize_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#newProxyWidget)
///
/// @param self QGraphicsProxyWidget*
/// @param param1 QWidget*
QGraphicsProxyWidget* q_graphicsproxywidget_new_proxy_widget(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#newProxyWidget)
///
/// Allows for overriding the related default method
///
/// @param self QGraphicsProxyWidget*
/// @param callback QGraphicsProxyWidget* fn(QGraphicsProxyWidget*, QWidget*)
void q_graphicsproxywidget_on_new_proxy_widget(void* self, QGraphicsProxyWidget* (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#newProxyWidget)
///
/// Base class method implementation
///
/// @param self QGraphicsProxyWidget*
/// @param param1 QWidget*
QGraphicsProxyWidget* q_graphicsproxywidget_qbase_new_proxy_widget(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_graphicsproxywidget_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_graphicsproxywidget_tr3(const char* s, const char* c, int n);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#layout)
///
/// @param self QGraphicsProxyWidget*
QGraphicsLayout* q_graphicsproxywidget_layout(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setLayout)
///
/// @param self QGraphicsProxyWidget*
/// @param layout QGraphicsLayout*
void q_graphicsproxywidget_set_layout(void* self, void* layout);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#adjustSize)
///
/// @param self QGraphicsProxyWidget*
void q_graphicsproxywidget_adjust_size(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutDirection)
///
/// @param self QGraphicsProxyWidget*
///
/// @return enum Qt__LayoutDirection
int64_t q_graphicsproxywidget_layout_direction(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setLayoutDirection)
///
/// @param self QGraphicsProxyWidget*
/// @param direction enum Qt__LayoutDirection
void q_graphicsproxywidget_set_layout_direction(void* self, int64_t direction);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#unsetLayoutDirection)
///
/// @param self QGraphicsProxyWidget*
void q_graphicsproxywidget_unset_layout_direction(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#style)
///
/// @param self QGraphicsProxyWidget*
QStyle* q_graphicsproxywidget_style(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setStyle)
///
/// @param self QGraphicsProxyWidget*
/// @param style QStyle*
void q_graphicsproxywidget_set_style(void* self, void* style);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#font)
///
/// @param self QGraphicsProxyWidget*
QFont* q_graphicsproxywidget_font(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setFont)
///
/// @param self QGraphicsProxyWidget*
/// @param font QFont*
void q_graphicsproxywidget_set_font(void* self, void* font);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#palette)
///
/// @param self QGraphicsProxyWidget*
QPalette* q_graphicsproxywidget_palette(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setPalette)
///
/// @param self QGraphicsProxyWidget*
/// @param palette QPalette*
void q_graphicsproxywidget_set_palette(void* self, void* palette);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#autoFillBackground)
///
/// @param self QGraphicsProxyWidget*
bool q_graphicsproxywidget_auto_fill_background(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setAutoFillBackground)
///
/// @param self QGraphicsProxyWidget*
/// @param enabled bool
void q_graphicsproxywidget_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#resize)
///
/// @param self QGraphicsProxyWidget*
/// @param size QSizeF*
void q_graphicsproxywidget_resize(void* self, void* size);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#resize)
///
/// @param self QGraphicsProxyWidget*
/// @param w double
/// @param h double
void q_graphicsproxywidget_resize2(void* self, double w, double h);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#size)
///
/// @param self QGraphicsProxyWidget*
QSizeF* q_graphicsproxywidget_size(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
///
/// @param self QGraphicsProxyWidget*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
void q_graphicsproxywidget_set_geometry2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#rect)
///
/// @param self QGraphicsProxyWidget*
QRectF* q_graphicsproxywidget_rect(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setContentsMargins)
///
/// @param self QGraphicsProxyWidget*
/// @param left double
/// @param top double
/// @param right double
/// @param bottom double
void q_graphicsproxywidget_set_contents_margins(void* self, double left, double top, double right, double bottom);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setContentsMargins)
///
/// @param self QGraphicsProxyWidget*
/// @param margins QMarginsF*
void q_graphicsproxywidget_set_contents_margins2(void* self, void* margins);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFrameMargins)
///
/// @param self QGraphicsProxyWidget*
/// @param left double
/// @param top double
/// @param right double
/// @param bottom double
void q_graphicsproxywidget_set_window_frame_margins(void* self, double left, double top, double right, double bottom);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFrameMargins)
///
/// @param self QGraphicsProxyWidget*
/// @param margins QMarginsF*
void q_graphicsproxywidget_set_window_frame_margins2(void* self, void* margins);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#getWindowFrameMargins)
///
/// @param self QGraphicsProxyWidget*
/// @param left double*
/// @param top double*
/// @param right double*
/// @param bottom double*
void q_graphicsproxywidget_get_window_frame_margins(void* self, double* left, double* top, double* right, double* bottom);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#unsetWindowFrameMargins)
///
/// @param self QGraphicsProxyWidget*
void q_graphicsproxywidget_unset_window_frame_margins(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameGeometry)
///
/// @param self QGraphicsProxyWidget*
QRectF* q_graphicsproxywidget_window_frame_geometry(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameRect)
///
/// @param self QGraphicsProxyWidget*
QRectF* q_graphicsproxywidget_window_frame_rect(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFlags)
///
/// @param self QGraphicsProxyWidget*
///
/// @return flag of enum Qt__WindowType
int64_t q_graphicsproxywidget_window_flags(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowType)
///
/// @param self QGraphicsProxyWidget*
///
/// @return enum Qt__WindowType
int64_t q_graphicsproxywidget_window_type(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFlags)
///
/// @param self QGraphicsProxyWidget*
/// @param wFlags flag of enum Qt__WindowType
void q_graphicsproxywidget_set_window_flags(void* self, int64_t wFlags);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#isActiveWindow)
///
/// @param self QGraphicsProxyWidget*
bool q_graphicsproxywidget_is_active_window(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowTitle)
///
/// @param self QGraphicsProxyWidget*
/// @param title const char*
void q_graphicsproxywidget_set_window_title(void* self, const char* title);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowTitle)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QGraphicsProxyWidget*
const char* q_graphicsproxywidget_window_title(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusPolicy)
///
/// @param self QGraphicsProxyWidget*
///
/// @return enum Qt__FocusPolicy
int64_t q_graphicsproxywidget_focus_policy(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setFocusPolicy)
///
/// @param self QGraphicsProxyWidget*
/// @param policy enum Qt__FocusPolicy
void q_graphicsproxywidget_set_focus_policy(void* self, int64_t policy);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setTabOrder)
///
/// @param first QGraphicsWidget*
/// @param second QGraphicsWidget*
void q_graphicsproxywidget_set_tab_order(void* first, void* second);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusWidget)
///
/// @param self QGraphicsProxyWidget*
QGraphicsWidget* q_graphicsproxywidget_focus_widget(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabShortcut)
///
/// @param self QGraphicsProxyWidget*
/// @param sequence QKeySequence*
int32_t q_graphicsproxywidget_grab_shortcut(void* self, void* sequence);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#releaseShortcut)
///
/// @param self QGraphicsProxyWidget*
/// @param id int
void q_graphicsproxywidget_release_shortcut(void* self, int id);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutEnabled)
///
/// @param self QGraphicsProxyWidget*
/// @param id int
void q_graphicsproxywidget_set_shortcut_enabled(void* self, int id);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutAutoRepeat)
///
/// @param self QGraphicsProxyWidget*
/// @param id int
void q_graphicsproxywidget_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#addAction)
///
/// @param self QGraphicsProxyWidget*
/// @param action QAction*
void q_graphicsproxywidget_add_action(void* self, void* action);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#addActions)
///
/// @param self QGraphicsProxyWidget*
/// @param actions libqt_list /* of QAction* */
void q_graphicsproxywidget_add_actions(void* self, libqt_list actions);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#insertActions)
///
/// @param self QGraphicsProxyWidget*
/// @param before QAction*
/// @param actions libqt_list /* of QAction* */
void q_graphicsproxywidget_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#insertAction)
///
/// @param self QGraphicsProxyWidget*
/// @param before QAction*
/// @param action QAction*
void q_graphicsproxywidget_insert_action(void* self, void* before, void* action);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#removeAction)
///
/// @param self QGraphicsProxyWidget*
/// @param action QAction*
void q_graphicsproxywidget_remove_action(void* self, void* action);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#actions)
///
/// @param self QGraphicsProxyWidget*
libqt_list /* of QAction* */ q_graphicsproxywidget_actions(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setAttribute)
///
/// @param self QGraphicsProxyWidget*
/// @param attribute enum Qt__WidgetAttribute
void q_graphicsproxywidget_set_attribute(void* self, int64_t attribute);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#testAttribute)
///
/// @param self QGraphicsProxyWidget*
/// @param attribute enum Qt__WidgetAttribute
bool q_graphicsproxywidget_test_attribute(void* self, int64_t attribute);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#geometryChanged)
///
/// @param self QGraphicsProxyWidget*
void q_graphicsproxywidget_geometry_changed(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#geometryChanged)
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*)
void q_graphicsproxywidget_on_geometry_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutChanged)
///
/// @param self QGraphicsProxyWidget*
void q_graphicsproxywidget_layout_changed(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutChanged)
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*)
void q_graphicsproxywidget_on_layout_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#close)
///
/// @param self QGraphicsProxyWidget*
bool q_graphicsproxywidget_close(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabShortcut)
///
/// @param self QGraphicsProxyWidget*
/// @param sequence QKeySequence*
/// @param context enum Qt__ShortcutContext
int32_t q_graphicsproxywidget_grab_shortcut2(void* self, void* sequence, int64_t context);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutEnabled)
///
/// @param self QGraphicsProxyWidget*
/// @param id int
/// @param enabled bool
void q_graphicsproxywidget_set_shortcut_enabled2(void* self, int id, bool enabled);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutAutoRepeat)
///
/// @param self QGraphicsProxyWidget*
/// @param id int
/// @param enabled bool
void q_graphicsproxywidget_set_shortcut_auto_repeat2(void* self, int id, bool enabled);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setAttribute)
///
/// @param self QGraphicsProxyWidget*
/// @param attribute enum Qt__WidgetAttribute
/// @param on bool
void q_graphicsproxywidget_set_attribute2(void* self, int64_t attribute, bool on);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
///
/// @param self QGraphicsProxyWidget*
/// @param typeVal enum Qt__GestureType
void q_graphicsproxywidget_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#ungrabGesture)
///
/// @param self QGraphicsProxyWidget*
/// @param typeVal enum Qt__GestureType
void q_graphicsproxywidget_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
///
/// @param self QGraphicsProxyWidget*
void q_graphicsproxywidget_parent_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*)
void q_graphicsproxywidget_on_parent_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
///
/// @param self QGraphicsProxyWidget*
void q_graphicsproxywidget_opacity_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*)
void q_graphicsproxywidget_on_opacity_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
///
/// @param self QGraphicsProxyWidget*
void q_graphicsproxywidget_visible_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*)
void q_graphicsproxywidget_on_visible_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
///
/// @param self QGraphicsProxyWidget*
void q_graphicsproxywidget_enabled_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*)
void q_graphicsproxywidget_on_enabled_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
///
/// @param self QGraphicsProxyWidget*
void q_graphicsproxywidget_x_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*)
void q_graphicsproxywidget_on_x_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
///
/// @param self QGraphicsProxyWidget*
void q_graphicsproxywidget_y_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*)
void q_graphicsproxywidget_on_y_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
///
/// @param self QGraphicsProxyWidget*
void q_graphicsproxywidget_z_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*)
void q_graphicsproxywidget_on_z_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
///
/// @param self QGraphicsProxyWidget*
void q_graphicsproxywidget_rotation_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*)
void q_graphicsproxywidget_on_rotation_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
///
/// @param self QGraphicsProxyWidget*
void q_graphicsproxywidget_scale_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*)
void q_graphicsproxywidget_on_scale_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
///
/// @param self QGraphicsProxyWidget*
void q_graphicsproxywidget_children_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*)
void q_graphicsproxywidget_on_children_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
///
/// @param self QGraphicsProxyWidget*
void q_graphicsproxywidget_width_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*)
void q_graphicsproxywidget_on_width_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
///
/// @param self QGraphicsProxyWidget*
void q_graphicsproxywidget_height_changed(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*)
void q_graphicsproxywidget_on_height_changed(void* self, void (*callback)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
///
/// @param self QGraphicsProxyWidget*
/// @param typeVal enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
void q_graphicsproxywidget_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QGraphicsProxyWidget*
const char* q_graphicsproxywidget_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QGraphicsProxyWidget*
/// @param name char*
void q_graphicsproxywidget_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QGraphicsProxyWidget*
bool q_graphicsproxywidget_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QGraphicsProxyWidget*
bool q_graphicsproxywidget_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QGraphicsProxyWidget*
bool q_graphicsproxywidget_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QGraphicsProxyWidget*
bool q_graphicsproxywidget_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QGraphicsProxyWidget*
/// @param b bool
bool q_graphicsproxywidget_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QGraphicsProxyWidget*
QThread* q_graphicsproxywidget_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QGraphicsProxyWidget*
/// @param thread QThread*
bool q_graphicsproxywidget_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsProxyWidget*
/// @param interval int
int32_t q_graphicsproxywidget_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGraphicsProxyWidget*
/// @param id int
void q_graphicsproxywidget_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGraphicsProxyWidget*
/// @param id enum Qt__TimerId
void q_graphicsproxywidget_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QGraphicsProxyWidget*
libqt_list /* of QObject* */ q_graphicsproxywidget_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QGraphicsProxyWidget*
/// @param parent QObject*
void q_graphicsproxywidget_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QGraphicsProxyWidget*
/// @param filterObj QObject*
void q_graphicsproxywidget_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QGraphicsProxyWidget*
/// @param obj QObject*
void q_graphicsproxywidget_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_graphicsproxywidget_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGraphicsProxyWidget*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_graphicsproxywidget_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_graphicsproxywidget_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_graphicsproxywidget_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QGraphicsProxyWidget*
void q_graphicsproxywidget_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QGraphicsProxyWidget*
void q_graphicsproxywidget_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QGraphicsProxyWidget*
/// @param name const char*
/// @param value QVariant*
bool q_graphicsproxywidget_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QGraphicsProxyWidget*
/// @param name const char*
QVariant* q_graphicsproxywidget_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QGraphicsProxyWidget*
const char** q_graphicsproxywidget_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGraphicsProxyWidget*
QBindingStorage* q_graphicsproxywidget_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGraphicsProxyWidget*
const QBindingStorage* q_graphicsproxywidget_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsProxyWidget*
void q_graphicsproxywidget_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*)
void q_graphicsproxywidget_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QGraphicsProxyWidget*
QObject* q_graphicsproxywidget_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QGraphicsProxyWidget*
/// @param classname const char*
bool q_graphicsproxywidget_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QGraphicsProxyWidget*
void q_graphicsproxywidget_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QGraphicsProxyWidget*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_graphicsproxywidget_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGraphicsProxyWidget*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_graphicsproxywidget_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_graphicsproxywidget_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGraphicsProxyWidget*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_graphicsproxywidget_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsProxyWidget*
/// @param param1 QObject*
void q_graphicsproxywidget_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*, QObject*)
void q_graphicsproxywidget_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scene)
///
/// @param self QGraphicsProxyWidget*
QGraphicsScene* q_graphicsproxywidget_scene(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentItem)
///
/// @param self QGraphicsProxyWidget*
QGraphicsItem* q_graphicsproxywidget_parent_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelItem)
///
/// @param self QGraphicsProxyWidget*
QGraphicsItem* q_graphicsproxywidget_top_level_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentObject)
///
/// @param self QGraphicsProxyWidget*
QGraphicsObject* q_graphicsproxywidget_parent_object(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentWidget)
///
/// @param self QGraphicsProxyWidget*
QGraphicsWidget* q_graphicsproxywidget_parent_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelWidget)
///
/// @param self QGraphicsProxyWidget*
QGraphicsWidget* q_graphicsproxywidget_top_level_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#window)
///
/// @param self QGraphicsProxyWidget*
QGraphicsWidget* q_graphicsproxywidget_window(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panel)
///
/// @param self QGraphicsProxyWidget*
QGraphicsItem* q_graphicsproxywidget_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setParentItem)
///
/// @param self QGraphicsProxyWidget*
/// @param parent QGraphicsItem*
void q_graphicsproxywidget_set_parent_item(void* self, void* parent);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childItems)
///
/// @param self QGraphicsProxyWidget*
libqt_list /* of QGraphicsItem* */ q_graphicsproxywidget_child_items(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWidget)
///
/// @param self QGraphicsProxyWidget*
bool q_graphicsproxywidget_is_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWindow)
///
/// @param self QGraphicsProxyWidget*
bool q_graphicsproxywidget_is_window(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isPanel)
///
/// @param self QGraphicsProxyWidget*
bool q_graphicsproxywidget_is_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// @param self QGraphicsProxyWidget*
QGraphicsObject* q_graphicsproxywidget_to_graphics_object(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// @param self QGraphicsProxyWidget*
const QGraphicsObject* q_graphicsproxywidget_to_graphics_object2(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#group)
///
/// @param self QGraphicsProxyWidget*
QGraphicsItemGroup* q_graphicsproxywidget_group(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGroup)
///
/// @param self QGraphicsProxyWidget*
/// @param group QGraphicsItemGroup*
void q_graphicsproxywidget_set_group(void* self, void* group);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#flags)
///
/// @param self QGraphicsProxyWidget*
///
/// @return flag of enum QGraphicsItem__GraphicsItemFlag
int64_t q_graphicsproxywidget_flags(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// @param self QGraphicsProxyWidget*
/// @param flag enum QGraphicsItem__GraphicsItemFlag
void q_graphicsproxywidget_set_flag(void* self, int64_t flag);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlags)
///
/// @param self QGraphicsProxyWidget*
/// @param flags flag of enum QGraphicsItem__GraphicsItemFlag
void q_graphicsproxywidget_set_flags(void* self, int64_t flags);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cacheMode)
///
/// @param self QGraphicsProxyWidget*
///
/// @return enum QGraphicsItem__CacheMode
int64_t q_graphicsproxywidget_cache_mode(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// @param self QGraphicsProxyWidget*
/// @param mode enum QGraphicsItem__CacheMode
void q_graphicsproxywidget_set_cache_mode(void* self, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panelModality)
///
/// @param self QGraphicsProxyWidget*
///
/// @return enum QGraphicsItem__PanelModality
int64_t q_graphicsproxywidget_panel_modality(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPanelModality)
///
/// @param self QGraphicsProxyWidget*
/// @param panelModality enum QGraphicsItem__PanelModality
void q_graphicsproxywidget_set_panel_modality(void* self, int64_t panelModality);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
///
/// @param self QGraphicsProxyWidget*
bool q_graphicsproxywidget_is_blocked_by_modal_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QGraphicsProxyWidget*
const char* q_graphicsproxywidget_tool_tip(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setToolTip)
///
/// @param self QGraphicsProxyWidget*
/// @param toolTip const char*
void q_graphicsproxywidget_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cursor)
///
/// @param self QGraphicsProxyWidget*
QCursor* q_graphicsproxywidget_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCursor)
///
/// @param self QGraphicsProxyWidget*
/// @param cursor QCursor*
void q_graphicsproxywidget_set_cursor(void* self, void* cursor);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasCursor)
///
/// @param self QGraphicsProxyWidget*
bool q_graphicsproxywidget_has_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#unsetCursor)
///
/// @param self QGraphicsProxyWidget*
void q_graphicsproxywidget_unset_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisible)
///
/// @param self QGraphicsProxyWidget*
bool q_graphicsproxywidget_is_visible(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisibleTo)
///
/// @param self QGraphicsProxyWidget*
/// @param parent QGraphicsItem*
bool q_graphicsproxywidget_is_visible_to(void* self, void* parent);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setVisible)
///
/// @param self QGraphicsProxyWidget*
/// @param visible bool
void q_graphicsproxywidget_set_visible(void* self, bool visible);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hide)
///
/// @param self QGraphicsProxyWidget*
void q_graphicsproxywidget_hide(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#show)
///
/// @param self QGraphicsProxyWidget*
void q_graphicsproxywidget_show(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isEnabled)
///
/// @param self QGraphicsProxyWidget*
bool q_graphicsproxywidget_is_enabled(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setEnabled)
///
/// @param self QGraphicsProxyWidget*
/// @param enabled bool
void q_graphicsproxywidget_set_enabled(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isSelected)
///
/// @param self QGraphicsProxyWidget*
bool q_graphicsproxywidget_is_selected(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setSelected)
///
/// @param self QGraphicsProxyWidget*
/// @param selected bool
void q_graphicsproxywidget_set_selected(void* self, bool selected);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptDrops)
///
/// @param self QGraphicsProxyWidget*
bool q_graphicsproxywidget_accept_drops(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptDrops)
///
/// @param self QGraphicsProxyWidget*
/// @param on bool
void q_graphicsproxywidget_set_accept_drops(void* self, bool on);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opacity)
///
/// @param self QGraphicsProxyWidget*
double q_graphicsproxywidget_opacity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#effectiveOpacity)
///
/// @param self QGraphicsProxyWidget*
double q_graphicsproxywidget_effective_opacity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setOpacity)
///
/// @param self QGraphicsProxyWidget*
/// @param opacity double
void q_graphicsproxywidget_set_opacity(void* self, double opacity);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#graphicsEffect)
///
/// @param self QGraphicsProxyWidget*
QGraphicsEffect* q_graphicsproxywidget_graphics_effect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGraphicsEffect)
///
/// @param self QGraphicsProxyWidget*
/// @param effect QGraphicsEffect*
void q_graphicsproxywidget_set_graphics_effect(void* self, void* effect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptedMouseButtons)
///
/// @param self QGraphicsProxyWidget*
///
/// @return flag of enum Qt__MouseButton
int64_t q_graphicsproxywidget_accepted_mouse_buttons(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptedMouseButtons)
///
/// @param self QGraphicsProxyWidget*
/// @param buttons flag of enum Qt__MouseButton
void q_graphicsproxywidget_set_accepted_mouse_buttons(void* self, int64_t buttons);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptHoverEvents)
///
/// @param self QGraphicsProxyWidget*
bool q_graphicsproxywidget_accept_hover_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptHoverEvents)
///
/// @param self QGraphicsProxyWidget*
/// @param enabled bool
void q_graphicsproxywidget_set_accept_hover_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptTouchEvents)
///
/// @param self QGraphicsProxyWidget*
bool q_graphicsproxywidget_accept_touch_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptTouchEvents)
///
/// @param self QGraphicsProxyWidget*
/// @param enabled bool
void q_graphicsproxywidget_set_accept_touch_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#filtersChildEvents)
///
/// @param self QGraphicsProxyWidget*
bool q_graphicsproxywidget_filters_child_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFiltersChildEvents)
///
/// @param self QGraphicsProxyWidget*
/// @param enabled bool
void q_graphicsproxywidget_set_filters_child_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#handlesChildEvents)
///
/// @param self QGraphicsProxyWidget*
bool q_graphicsproxywidget_handles_child_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setHandlesChildEvents)
///
/// @param self QGraphicsProxyWidget*
/// @param enabled bool
void q_graphicsproxywidget_set_handles_child_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isActive)
///
/// @param self QGraphicsProxyWidget*
bool q_graphicsproxywidget_is_active(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setActive)
///
/// @param self QGraphicsProxyWidget*
/// @param active bool
void q_graphicsproxywidget_set_active(void* self, bool active);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasFocus)
///
/// @param self QGraphicsProxyWidget*
bool q_graphicsproxywidget_has_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// @param self QGraphicsProxyWidget*
void q_graphicsproxywidget_set_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clearFocus)
///
/// @param self QGraphicsProxyWidget*
void q_graphicsproxywidget_clear_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusProxy)
///
/// @param self QGraphicsProxyWidget*
QGraphicsItem* q_graphicsproxywidget_focus_proxy(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocusProxy)
///
/// @param self QGraphicsProxyWidget*
/// @param item QGraphicsItem*
void q_graphicsproxywidget_set_focus_proxy(void* self, void* item);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusItem)
///
/// @param self QGraphicsProxyWidget*
QGraphicsItem* q_graphicsproxywidget_focus_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusScopeItem)
///
/// @param self QGraphicsProxyWidget*
QGraphicsItem* q_graphicsproxywidget_focus_scope_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabMouse)
///
/// @param self QGraphicsProxyWidget*
void q_graphicsproxywidget_grab_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabMouse)
///
/// @param self QGraphicsProxyWidget*
void q_graphicsproxywidget_ungrab_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabKeyboard)
///
/// @param self QGraphicsProxyWidget*
void q_graphicsproxywidget_grab_keyboard(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabKeyboard)
///
/// @param self QGraphicsProxyWidget*
void q_graphicsproxywidget_ungrab_keyboard(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#pos)
///
/// @param self QGraphicsProxyWidget*
QPointF* q_graphicsproxywidget_pos(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#x)
///
/// @param self QGraphicsProxyWidget*
double q_graphicsproxywidget_x(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setX)
///
/// @param self QGraphicsProxyWidget*
/// @param x double
void q_graphicsproxywidget_set_x(void* self, double x);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#y)
///
/// @param self QGraphicsProxyWidget*
double q_graphicsproxywidget_y(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setY)
///
/// @param self QGraphicsProxyWidget*
/// @param y double
void q_graphicsproxywidget_set_y(void* self, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scenePos)
///
/// @param self QGraphicsProxyWidget*
QPointF* q_graphicsproxywidget_scene_pos(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// @param self QGraphicsProxyWidget*
/// @param pos QPointF*
void q_graphicsproxywidget_set_pos(void* self, void* pos);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// @param self QGraphicsProxyWidget*
/// @param x double
/// @param y double
void q_graphicsproxywidget_set_pos2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#moveBy)
///
/// @param self QGraphicsProxyWidget*
/// @param dx double
/// @param dy double
void q_graphicsproxywidget_move_by(void* self, double dx, double dy);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// @param self QGraphicsProxyWidget*
void q_graphicsproxywidget_ensure_visible(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// @param self QGraphicsProxyWidget*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
void q_graphicsproxywidget_ensure_visible2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transform)
///
/// @param self QGraphicsProxyWidget*
QTransform* q_graphicsproxywidget_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneTransform)
///
/// @param self QGraphicsProxyWidget*
QTransform* q_graphicsproxywidget_scene_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#deviceTransform)
///
/// @param self QGraphicsProxyWidget*
/// @param viewportTransform QTransform*
QTransform* q_graphicsproxywidget_device_transform(void* self, void* viewportTransform);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// @param self QGraphicsProxyWidget*
/// @param other QGraphicsItem*
QTransform* q_graphicsproxywidget_item_transform(void* self, void* other);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// @param self QGraphicsProxyWidget*
/// @param matrix QTransform*
void q_graphicsproxywidget_set_transform(void* self, void* matrix);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#resetTransform)
///
/// @param self QGraphicsProxyWidget*
void q_graphicsproxywidget_reset_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setRotation)
///
/// @param self QGraphicsProxyWidget*
/// @param angle double
void q_graphicsproxywidget_set_rotation(void* self, double angle);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#rotation)
///
/// @param self QGraphicsProxyWidget*
double q_graphicsproxywidget_rotation(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setScale)
///
/// @param self QGraphicsProxyWidget*
/// @param scale double
void q_graphicsproxywidget_set_scale(void* self, double scale);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scale)
///
/// @param self QGraphicsProxyWidget*
double q_graphicsproxywidget_scale(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformations)
///
/// @param self QGraphicsProxyWidget*
libqt_list /* of QGraphicsTransform* */ q_graphicsproxywidget_transformations(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformations)
///
/// @param self QGraphicsProxyWidget*
/// @param transformations libqt_list /* of QGraphicsTransform* */
void q_graphicsproxywidget_set_transformations(void* self, libqt_list transformations);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformOriginPoint)
///
/// @param self QGraphicsProxyWidget*
QPointF* q_graphicsproxywidget_transform_origin_point(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// @param self QGraphicsProxyWidget*
/// @param origin QPointF*
void q_graphicsproxywidget_set_transform_origin_point(void* self, void* origin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// @param self QGraphicsProxyWidget*
/// @param ax double
/// @param ay double
void q_graphicsproxywidget_set_transform_origin_point2(void* self, double ax, double ay);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#zValue)
///
/// @param self QGraphicsProxyWidget*
double q_graphicsproxywidget_z_value(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setZValue)
///
/// @param self QGraphicsProxyWidget*
/// @param z double
void q_graphicsproxywidget_set_z_value(void* self, double z);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#stackBefore)
///
/// @param self QGraphicsProxyWidget*
/// @param sibling QGraphicsItem*
void q_graphicsproxywidget_stack_before(void* self, void* sibling);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childrenBoundingRect)
///
/// @param self QGraphicsProxyWidget*
QRectF* q_graphicsproxywidget_children_bounding_rect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneBoundingRect)
///
/// @param self QGraphicsProxyWidget*
QRectF* q_graphicsproxywidget_scene_bounding_rect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isClipped)
///
/// @param self QGraphicsProxyWidget*
bool q_graphicsproxywidget_is_clipped(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clipPath)
///
/// @param self QGraphicsProxyWidget*
QPainterPath* q_graphicsproxywidget_clip_path(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// @param self QGraphicsProxyWidget*
libqt_list /* of QGraphicsItem* */ q_graphicsproxywidget_colliding_items(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// @param self QGraphicsProxyWidget*
bool q_graphicsproxywidget_is_obscured(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// @param self QGraphicsProxyWidget*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
bool q_graphicsproxywidget_is_obscured2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegion)
///
/// @param self QGraphicsProxyWidget*
/// @param itemToDeviceTransform QTransform*
QRegion* q_graphicsproxywidget_bounding_region(void* self, void* itemToDeviceTransform);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegionGranularity)
///
/// @param self QGraphicsProxyWidget*
double q_graphicsproxywidget_bounding_region_granularity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setBoundingRegionGranularity)
///
/// @param self QGraphicsProxyWidget*
/// @param granularity double
void q_graphicsproxywidget_set_bounding_region_granularity(void* self, double granularity);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// @param self QGraphicsProxyWidget*
void q_graphicsproxywidget_update(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// @param self QGraphicsProxyWidget*
/// @param x double
/// @param y double
/// @param width double
/// @param height double
void q_graphicsproxywidget_update2(void* self, double x, double y, double width, double height);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// @param self QGraphicsProxyWidget*
/// @param dx double
/// @param dy double
void q_graphicsproxywidget_scroll(void* self, double dx, double dy);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// @param self QGraphicsProxyWidget*
/// @param item QGraphicsItem*
/// @param point QPointF*
QPointF* q_graphicsproxywidget_map_to_item(void* self, void* item, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// @param self QGraphicsProxyWidget*
/// @param point QPointF*
QPointF* q_graphicsproxywidget_map_to_parent(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// @param self QGraphicsProxyWidget*
/// @param point QPointF*
QPointF* q_graphicsproxywidget_map_to_scene(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// @param self QGraphicsProxyWidget*
/// @param item QGraphicsItem*
/// @param rect QRectF*
QRectF* q_graphicsproxywidget_map_rect_to_item(void* self, void* item, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// @param self QGraphicsProxyWidget*
/// @param rect QRectF*
QRectF* q_graphicsproxywidget_map_rect_to_parent(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// @param self QGraphicsProxyWidget*
/// @param rect QRectF*
QRectF* q_graphicsproxywidget_map_rect_to_scene(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// @param self QGraphicsProxyWidget*
/// @param item QGraphicsItem*
/// @param path QPainterPath*
QPainterPath* q_graphicsproxywidget_map_to_item4(void* self, void* item, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// @param self QGraphicsProxyWidget*
/// @param path QPainterPath*
QPainterPath* q_graphicsproxywidget_map_to_parent4(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// @param self QGraphicsProxyWidget*
/// @param path QPainterPath*
QPainterPath* q_graphicsproxywidget_map_to_scene4(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// @param self QGraphicsProxyWidget*
/// @param item QGraphicsItem*
/// @param point QPointF*
QPointF* q_graphicsproxywidget_map_from_item(void* self, void* item, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// @param self QGraphicsProxyWidget*
/// @param point QPointF*
QPointF* q_graphicsproxywidget_map_from_parent(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// @param self QGraphicsProxyWidget*
/// @param point QPointF*
QPointF* q_graphicsproxywidget_map_from_scene(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// @param self QGraphicsProxyWidget*
/// @param item QGraphicsItem*
/// @param rect QRectF*
QRectF* q_graphicsproxywidget_map_rect_from_item(void* self, void* item, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// @param self QGraphicsProxyWidget*
/// @param rect QRectF*
QRectF* q_graphicsproxywidget_map_rect_from_parent(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// @param self QGraphicsProxyWidget*
/// @param rect QRectF*
QRectF* q_graphicsproxywidget_map_rect_from_scene(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// @param self QGraphicsProxyWidget*
/// @param item QGraphicsItem*
/// @param path QPainterPath*
QPainterPath* q_graphicsproxywidget_map_from_item4(void* self, void* item, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// @param self QGraphicsProxyWidget*
/// @param path QPainterPath*
QPainterPath* q_graphicsproxywidget_map_from_parent4(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// @param self QGraphicsProxyWidget*
/// @param path QPainterPath*
QPainterPath* q_graphicsproxywidget_map_from_scene4(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// @param self QGraphicsProxyWidget*
/// @param item QGraphicsItem*
/// @param x double
/// @param y double
QPointF* q_graphicsproxywidget_map_to_item5(void* self, void* item, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// @param self QGraphicsProxyWidget*
/// @param x double
/// @param y double
QPointF* q_graphicsproxywidget_map_to_parent5(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// @param self QGraphicsProxyWidget*
/// @param x double
/// @param y double
QPointF* q_graphicsproxywidget_map_to_scene5(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// @param self QGraphicsProxyWidget*
/// @param item QGraphicsItem*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
QRectF* q_graphicsproxywidget_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// @param self QGraphicsProxyWidget*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
QRectF* q_graphicsproxywidget_map_rect_to_parent2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// @param self QGraphicsProxyWidget*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
QRectF* q_graphicsproxywidget_map_rect_to_scene2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// @param self QGraphicsProxyWidget*
/// @param item QGraphicsItem*
/// @param x double
/// @param y double
QPointF* q_graphicsproxywidget_map_from_item5(void* self, void* item, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// @param self QGraphicsProxyWidget*
/// @param x double
/// @param y double
QPointF* q_graphicsproxywidget_map_from_parent5(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// @param self QGraphicsProxyWidget*
/// @param x double
/// @param y double
QPointF* q_graphicsproxywidget_map_from_scene5(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// @param self QGraphicsProxyWidget*
/// @param item QGraphicsItem*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
QRectF* q_graphicsproxywidget_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// @param self QGraphicsProxyWidget*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
QRectF* q_graphicsproxywidget_map_rect_from_parent2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// @param self QGraphicsProxyWidget*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
QRectF* q_graphicsproxywidget_map_rect_from_scene2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isAncestorOf)
///
/// @param self QGraphicsProxyWidget*
/// @param child QGraphicsItem*
bool q_graphicsproxywidget_is_ancestor_of(void* self, void* child);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#commonAncestorItem)
///
/// @param self QGraphicsProxyWidget*
/// @param other QGraphicsItem*
QGraphicsItem* q_graphicsproxywidget_common_ancestor_item(void* self, void* other);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isUnderMouse)
///
/// @param self QGraphicsProxyWidget*
bool q_graphicsproxywidget_is_under_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#data)
///
/// @param self QGraphicsProxyWidget*
/// @param key int
QVariant* q_graphicsproxywidget_data(void* self, int key);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setData)
///
/// @param self QGraphicsProxyWidget*
/// @param key int
/// @param value QVariant*
void q_graphicsproxywidget_set_data(void* self, int key, void* value);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodHints)
///
/// @param self QGraphicsProxyWidget*
///
/// @return flag of enum Qt__InputMethodHint
int64_t q_graphicsproxywidget_input_method_hints(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setInputMethodHints)
///
/// @param self QGraphicsProxyWidget*
/// @param hints flag of enum Qt__InputMethodHint
void q_graphicsproxywidget_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#installSceneEventFilter)
///
/// @param self QGraphicsProxyWidget*
/// @param filterItem QGraphicsItem*
void q_graphicsproxywidget_install_scene_event_filter(void* self, void* filterItem);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeSceneEventFilter)
///
/// @param self QGraphicsProxyWidget*
/// @param filterItem QGraphicsItem*
void q_graphicsproxywidget_remove_scene_event_filter(void* self, void* filterItem);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// @param self QGraphicsProxyWidget*
/// @param flag enum QGraphicsItem__GraphicsItemFlag
/// @param enabled bool
void q_graphicsproxywidget_set_flag2(void* self, int64_t flag, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// @param self QGraphicsProxyWidget*
/// @param mode enum QGraphicsItem__CacheMode
/// @param cacheSize QSize*
void q_graphicsproxywidget_set_cache_mode2(void* self, int64_t mode, void* cacheSize);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// @param self QGraphicsProxyWidget*
/// @param focusReason enum Qt__FocusReason
void q_graphicsproxywidget_set_focus1(void* self, int64_t focusReason);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// @param self QGraphicsProxyWidget*
/// @param rect QRectF*
void q_graphicsproxywidget_ensure_visible1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// @param self QGraphicsProxyWidget*
/// @param rect QRectF*
/// @param xmargin int
void q_graphicsproxywidget_ensure_visible22(void* self, void* rect, int xmargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// @param self QGraphicsProxyWidget*
/// @param rect QRectF*
/// @param xmargin int
/// @param ymargin int
void q_graphicsproxywidget_ensure_visible3(void* self, void* rect, int xmargin, int ymargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// @param self QGraphicsProxyWidget*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
/// @param xmargin int
void q_graphicsproxywidget_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// @param self QGraphicsProxyWidget*
/// @param x double
/// @param y double
/// @param w double
/// @param h double
/// @param xmargin int
/// @param ymargin int
void q_graphicsproxywidget_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// @param self QGraphicsProxyWidget*
/// @param other QGraphicsItem*
/// @param ok bool*
QTransform* q_graphicsproxywidget_item_transform2(void* self, void* other, bool* ok);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// @param self QGraphicsProxyWidget*
/// @param matrix QTransform*
/// @param combine bool
void q_graphicsproxywidget_set_transform2(void* self, void* matrix, bool combine);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// @param self QGraphicsProxyWidget*
/// @param mode enum Qt__ItemSelectionMode
libqt_list /* of QGraphicsItem* */ q_graphicsproxywidget_colliding_items1(void* self, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// @param self QGraphicsProxyWidget*
/// @param rect QRectF*
bool q_graphicsproxywidget_is_obscured1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// @param self QGraphicsProxyWidget*
/// @param rect QRectF*
void q_graphicsproxywidget_update1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// @param self QGraphicsProxyWidget*
/// @param dx double
/// @param dy double
/// @param rect QRectF*
void q_graphicsproxywidget_scroll3(void* self, double dx, double dy, void* rect);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// @param self QGraphicsProxyWidget*
/// @param policy QSizePolicy*
void q_graphicsproxywidget_set_size_policy(void* self, void* policy);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// @param self QGraphicsProxyWidget*
/// @param hPolicy enum QSizePolicy__Policy
/// @param vPolicy enum QSizePolicy__Policy
void q_graphicsproxywidget_set_size_policy2(void* self, int64_t hPolicy, int64_t vPolicy);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizePolicy)
///
/// @param self QGraphicsProxyWidget*
QSizePolicy* q_graphicsproxywidget_size_policy(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// @param self QGraphicsProxyWidget*
/// @param size QSizeF*
void q_graphicsproxywidget_set_minimum_size(void* self, void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// @param self QGraphicsProxyWidget*
/// @param w double
/// @param h double
void q_graphicsproxywidget_set_minimum_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumSize)
///
/// @param self QGraphicsProxyWidget*
QSizeF* q_graphicsproxywidget_minimum_size(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumWidth)
///
/// @param self QGraphicsProxyWidget*
/// @param width double
void q_graphicsproxywidget_set_minimum_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumWidth)
///
/// @param self QGraphicsProxyWidget*
double q_graphicsproxywidget_minimum_width(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumHeight)
///
/// @param self QGraphicsProxyWidget*
/// @param height double
void q_graphicsproxywidget_set_minimum_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumHeight)
///
/// @param self QGraphicsProxyWidget*
double q_graphicsproxywidget_minimum_height(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// @param self QGraphicsProxyWidget*
/// @param size QSizeF*
void q_graphicsproxywidget_set_preferred_size(void* self, void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// @param self QGraphicsProxyWidget*
/// @param w double
/// @param h double
void q_graphicsproxywidget_set_preferred_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredSize)
///
/// @param self QGraphicsProxyWidget*
QSizeF* q_graphicsproxywidget_preferred_size(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredWidth)
///
/// @param self QGraphicsProxyWidget*
/// @param width double
void q_graphicsproxywidget_set_preferred_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredWidth)
///
/// @param self QGraphicsProxyWidget*
double q_graphicsproxywidget_preferred_width(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredHeight)
///
/// @param self QGraphicsProxyWidget*
/// @param height double
void q_graphicsproxywidget_set_preferred_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredHeight)
///
/// @param self QGraphicsProxyWidget*
double q_graphicsproxywidget_preferred_height(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// @param self QGraphicsProxyWidget*
/// @param size QSizeF*
void q_graphicsproxywidget_set_maximum_size(void* self, void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// @param self QGraphicsProxyWidget*
/// @param w double
/// @param h double
void q_graphicsproxywidget_set_maximum_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumSize)
///
/// @param self QGraphicsProxyWidget*
QSizeF* q_graphicsproxywidget_maximum_size(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumWidth)
///
/// @param self QGraphicsProxyWidget*
/// @param width double
void q_graphicsproxywidget_set_maximum_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumWidth)
///
/// @param self QGraphicsProxyWidget*
double q_graphicsproxywidget_maximum_width(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumHeight)
///
/// @param self QGraphicsProxyWidget*
/// @param height double
void q_graphicsproxywidget_set_maximum_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumHeight)
///
/// @param self QGraphicsProxyWidget*
double q_graphicsproxywidget_maximum_height(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#geometry)
///
/// @param self QGraphicsProxyWidget*
QRectF* q_graphicsproxywidget_geometry(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#contentsRect)
///
/// @param self QGraphicsProxyWidget*
QRectF* q_graphicsproxywidget_contents_rect(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// @param self QGraphicsProxyWidget*
/// @param which enum Qt__SizeHint
QSizeF* q_graphicsproxywidget_effective_size_hint(void* self, int64_t which);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#parentLayoutItem)
///
/// @param self QGraphicsProxyWidget*
QGraphicsLayoutItem* q_graphicsproxywidget_parent_layout_item(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setParentLayoutItem)
///
/// @param self QGraphicsProxyWidget*
/// @param parent QGraphicsLayoutItem*
void q_graphicsproxywidget_set_parent_layout_item(void* self, void* parent);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isLayout)
///
/// @param self QGraphicsProxyWidget*
bool q_graphicsproxywidget_is_layout(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#graphicsItem)
///
/// @param self QGraphicsProxyWidget*
QGraphicsItem* q_graphicsproxywidget_graphics_item(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#ownedByLayout)
///
/// @param self QGraphicsProxyWidget*
bool q_graphicsproxywidget_owned_by_layout(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// @param self QGraphicsProxyWidget*
/// @param hPolicy enum QSizePolicy__Policy
/// @param vPolicy enum QSizePolicy__Policy
/// @param controlType enum QSizePolicy__ControlType
void q_graphicsproxywidget_set_size_policy3(void* self, int64_t hPolicy, int64_t vPolicy, int64_t controlType);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// @param self QGraphicsProxyWidget*
/// @param which enum Qt__SizeHint
/// @param constraint QSizeF*
QSizeF* q_graphicsproxywidget_effective_size_hint2(void* self, int64_t which, void* constraint);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#getContentsMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param left double*
/// @param top double*
/// @param right double*
/// @param bottom double*
void q_graphicsproxywidget_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#getContentsMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param left double*
/// @param top double*
/// @param right double*
/// @param bottom double*
void q_graphicsproxywidget_qbase_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#getContentsMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*, double*, double*, double*, double*)
void q_graphicsproxywidget_on_get_contents_margins(void* self, void (*callback)(void*, double*, double*, double*, double*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#paintWindowFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param painter QPainter*
/// @param option QStyleOptionGraphicsItem*
/// @param widget QWidget*
void q_graphicsproxywidget_paint_window_frame(void* self, void* painter, void* option, void* widget);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#paintWindowFrame)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param painter QPainter*
/// @param option QStyleOptionGraphicsItem*
/// @param widget QWidget*
void q_graphicsproxywidget_qbase_paint_window_frame(void* self, void* painter, void* option, void* widget);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#paintWindowFrame)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*, QPainter*, QStyleOptionGraphicsItem*, QWidget*)
void q_graphicsproxywidget_on_paint_window_frame(void* self, void (*callback)(void*, void*, void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#boundingRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsProxyWidget*
QRectF* q_graphicsproxywidget_bounding_rect(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#boundingRect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
QRectF* q_graphicsproxywidget_qbase_bounding_rect(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#boundingRect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param callback QRectF* fn()
void q_graphicsproxywidget_on_bounding_rect(void* self, QRectF* (*callback)());

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#shape)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsProxyWidget*
QPainterPath* q_graphicsproxywidget_shape(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#shape)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
QPainterPath* q_graphicsproxywidget_qbase_shape(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#shape)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param callback QPainterPath* fn()
void q_graphicsproxywidget_on_shape(void* self, QPainterPath* (*callback)());

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param option QStyleOption*
void q_graphicsproxywidget_init_style_option(void* self, void* option);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param option QStyleOption*
void q_graphicsproxywidget_qbase_init_style_option(void* self, void* option);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*, QStyleOption*)
void q_graphicsproxywidget_on_init_style_option(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#updateGeometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsProxyWidget*
void q_graphicsproxywidget_update_geometry(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#updateGeometry)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
void q_graphicsproxywidget_qbase_update_geometry(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#updateGeometry)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn()
void q_graphicsproxywidget_on_update_geometry(void* self, void (*callback)());

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#propertyChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param propertyName const char*
/// @param value QVariant*
QVariant* q_graphicsproxywidget_property_change(void* self, const char* propertyName, void* value);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#propertyChange)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param propertyName const char*
/// @param value QVariant*
QVariant* q_graphicsproxywidget_qbase_property_change(void* self, const char* propertyName, void* value);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#propertyChange)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param callback QVariant* fn(QGraphicsProxyWidget*, const char*, QVariant*)
void q_graphicsproxywidget_on_property_change(void* self, QVariant* (*callback)(void*, const char*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#sceneEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param event QEvent*
bool q_graphicsproxywidget_scene_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#sceneEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param event QEvent*
bool q_graphicsproxywidget_qbase_scene_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#sceneEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param callback bool fn(QGraphicsProxyWidget*, QEvent*)
void q_graphicsproxywidget_on_scene_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param e QEvent*
bool q_graphicsproxywidget_window_frame_event(void* self, void* e);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param e QEvent*
bool q_graphicsproxywidget_qbase_window_frame_event(void* self, void* e);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param callback bool fn(QGraphicsProxyWidget*, QEvent*)
void q_graphicsproxywidget_on_window_frame_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameSectionAt)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param pos QPointF*
///
/// @return enum Qt__WindowFrameSection
int64_t q_graphicsproxywidget_window_frame_section_at(void* self, void* pos);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameSectionAt)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param pos QPointF*
///
/// @return enum Qt__WindowFrameSection
int64_t q_graphicsproxywidget_qbase_window_frame_section_at(void* self, void* pos);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameSectionAt)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param callback int64_t fn(QGraphicsProxyWidget*, QPointF*)
void q_graphicsproxywidget_on_window_frame_section_at(void* self, int64_t (*callback)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param event QEvent*
void q_graphicsproxywidget_change_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param event QEvent*
void q_graphicsproxywidget_qbase_change_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*, QEvent*)
void q_graphicsproxywidget_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param event QCloseEvent*
void q_graphicsproxywidget_close_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param event QCloseEvent*
void q_graphicsproxywidget_qbase_close_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*, QCloseEvent*)
void q_graphicsproxywidget_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param event QGraphicsSceneMoveEvent*
void q_graphicsproxywidget_move_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param event QGraphicsSceneMoveEvent*
void q_graphicsproxywidget_qbase_move_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*, QGraphicsSceneMoveEvent*)
void q_graphicsproxywidget_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#polishEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsProxyWidget*
void q_graphicsproxywidget_polish_event(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#polishEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
void q_graphicsproxywidget_qbase_polish_event(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#polishEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn()
void q_graphicsproxywidget_on_polish_event(void* self, void (*callback)());

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabKeyboardEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param event QEvent*
void q_graphicsproxywidget_grab_keyboard_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabKeyboardEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param event QEvent*
void q_graphicsproxywidget_qbase_grab_keyboard_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabKeyboardEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*, QEvent*)
void q_graphicsproxywidget_on_grab_keyboard_event(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabKeyboardEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param event QEvent*
void q_graphicsproxywidget_ungrab_keyboard_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabKeyboardEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param event QEvent*
void q_graphicsproxywidget_qbase_ungrab_keyboard_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabKeyboardEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*, QEvent*)
void q_graphicsproxywidget_on_ungrab_keyboard_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param event QTimerEvent*
void q_graphicsproxywidget_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param event QTimerEvent*
void q_graphicsproxywidget_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*, QTimerEvent*)
void q_graphicsproxywidget_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param event QChildEvent*
void q_graphicsproxywidget_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param event QChildEvent*
void q_graphicsproxywidget_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*, QChildEvent*)
void q_graphicsproxywidget_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param event QEvent*
void q_graphicsproxywidget_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param event QEvent*
void q_graphicsproxywidget_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*, QEvent*)
void q_graphicsproxywidget_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param signal QMetaMethod*
void q_graphicsproxywidget_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param signal QMetaMethod*
void q_graphicsproxywidget_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*, QMetaMethod*)
void q_graphicsproxywidget_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param signal QMetaMethod*
void q_graphicsproxywidget_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param signal QMetaMethod*
void q_graphicsproxywidget_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*, QMetaMethod*)
void q_graphicsproxywidget_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param phase int
void q_graphicsproxywidget_advance(void* self, int phase);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param phase int
void q_graphicsproxywidget_qbase_advance(void* self, int phase);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*, int)
void q_graphicsproxywidget_on_advance(void* self, void (*callback)(void*, int));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param point QPointF*
bool q_graphicsproxywidget_contains(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param point QPointF*
bool q_graphicsproxywidget_qbase_contains(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param callback bool fn(QGraphicsProxyWidget*, QPointF*)
void q_graphicsproxywidget_on_contains(void* self, bool (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param other QGraphicsItem*
/// @param mode enum Qt__ItemSelectionMode
bool q_graphicsproxywidget_collides_with_item(void* self, void* other, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param other QGraphicsItem*
/// @param mode enum Qt__ItemSelectionMode
bool q_graphicsproxywidget_qbase_collides_with_item(void* self, void* other, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param callback bool fn(QGraphicsProxyWidget*, QGraphicsItem*, enum Qt__ItemSelectionMode)
void q_graphicsproxywidget_on_collides_with_item(void* self, bool (*callback)(void*, void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param path QPainterPath*
/// @param mode enum Qt__ItemSelectionMode
bool q_graphicsproxywidget_collides_with_path(void* self, void* path, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param path QPainterPath*
/// @param mode enum Qt__ItemSelectionMode
bool q_graphicsproxywidget_qbase_collides_with_path(void* self, void* path, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param callback bool fn(QGraphicsProxyWidget*, QPainterPath*, enum Qt__ItemSelectionMode)
void q_graphicsproxywidget_on_collides_with_path(void* self, bool (*callback)(void*, void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param item QGraphicsItem*
bool q_graphicsproxywidget_is_obscured_by(void* self, void* item);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param item QGraphicsItem*
bool q_graphicsproxywidget_qbase_is_obscured_by(void* self, void* item);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param callback bool fn(QGraphicsProxyWidget*, QGraphicsItem*)
void q_graphicsproxywidget_on_is_obscured_by(void* self, bool (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsProxyWidget*
QPainterPath* q_graphicsproxywidget_opaque_area(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
QPainterPath* q_graphicsproxywidget_qbase_opaque_area(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param callback QPainterPath* fn()
void q_graphicsproxywidget_on_opaque_area(void* self, QPainterPath* (*callback)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param watched QGraphicsItem*
/// @param event QEvent*
bool q_graphicsproxywidget_scene_event_filter(void* self, void* watched, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param watched QGraphicsItem*
/// @param event QEvent*
bool q_graphicsproxywidget_qbase_scene_event_filter(void* self, void* watched, void* event);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param callback bool fn(QGraphicsProxyWidget*, QGraphicsItem*, QEvent*)
void q_graphicsproxywidget_on_scene_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param extension enum QGraphicsItem__Extension
bool q_graphicsproxywidget_supports_extension(void* self, int64_t extension);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param extension enum QGraphicsItem__Extension
bool q_graphicsproxywidget_qbase_supports_extension(void* self, int64_t extension);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param callback bool fn(QGraphicsProxyWidget*, enum QGraphicsItem__Extension)
void q_graphicsproxywidget_on_supports_extension(void* self, bool (*callback)(void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param extension enum QGraphicsItem__Extension
/// @param variant QVariant*
void q_graphicsproxywidget_set_extension(void* self, int64_t extension, void* variant);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param extension enum QGraphicsItem__Extension
/// @param variant QVariant*
void q_graphicsproxywidget_qbase_set_extension(void* self, int64_t extension, void* variant);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*, enum QGraphicsItem__Extension, QVariant*)
void q_graphicsproxywidget_on_set_extension(void* self, void (*callback)(void*, int64_t, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param variant QVariant*
QVariant* q_graphicsproxywidget_extension(void* self, void* variant);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param variant QVariant*
QVariant* q_graphicsproxywidget_qbase_extension(void* self, void* variant);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param callback QVariant* fn(QGraphicsProxyWidget*, QVariant*)
void q_graphicsproxywidget_on_extension(void* self, QVariant* (*callback)(void*, void*));

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsProxyWidget*
bool q_graphicsproxywidget_is_empty(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
bool q_graphicsproxywidget_qbase_is_empty(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param callback bool fn()
void q_graphicsproxywidget_on_is_empty(void* self, bool (*callback)());

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsProxyWidget*
void q_graphicsproxywidget_update_micro_focus(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
void q_graphicsproxywidget_qbase_update_micro_focus(void* self);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn()
void q_graphicsproxywidget_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsProxyWidget*
QObject* q_graphicsproxywidget_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
QObject* q_graphicsproxywidget_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param callback QObject* fn()
void q_graphicsproxywidget_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsProxyWidget*
int32_t q_graphicsproxywidget_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
int32_t q_graphicsproxywidget_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param callback int32_t fn()
void q_graphicsproxywidget_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param signal const char*
int32_t q_graphicsproxywidget_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param signal const char*
int32_t q_graphicsproxywidget_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param callback int32_t fn(QGraphicsProxyWidget*, const char*)
void q_graphicsproxywidget_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param signal QMetaMethod*
bool q_graphicsproxywidget_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param signal QMetaMethod*
bool q_graphicsproxywidget_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param callback bool fn(QGraphicsProxyWidget*, QMetaMethod*)
void q_graphicsproxywidget_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsProxyWidget*
void q_graphicsproxywidget_add_to_index(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
void q_graphicsproxywidget_qbase_add_to_index(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn()
void q_graphicsproxywidget_on_add_to_index(void* self, void (*callback)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsProxyWidget*
void q_graphicsproxywidget_remove_from_index(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
void q_graphicsproxywidget_qbase_remove_from_index(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn()
void q_graphicsproxywidget_on_remove_from_index(void* self, void (*callback)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsProxyWidget*
void q_graphicsproxywidget_prepare_geometry_change(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
void q_graphicsproxywidget_qbase_prepare_geometry_change(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn()
void q_graphicsproxywidget_on_prepare_geometry_change(void* self, void (*callback)());

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param item QGraphicsItem*
void q_graphicsproxywidget_set_graphics_item(void* self, void* item);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param item QGraphicsItem*
void q_graphicsproxywidget_qbase_set_graphics_item(void* self, void* item);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*, QGraphicsItem*)
void q_graphicsproxywidget_on_set_graphics_item(void* self, void (*callback)(void*, void*));

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param ownedByLayout bool
void q_graphicsproxywidget_set_owned_by_layout(void* self, bool ownedByLayout);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param ownedByLayout bool
void q_graphicsproxywidget_qbase_set_owned_by_layout(void* self, bool ownedByLayout);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*, bool)
void q_graphicsproxywidget_on_set_owned_by_layout(void* self, void (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QGraphicsProxyWidget*
/// @param callback void fn(QGraphicsProxyWidget*, const char*)
void q_graphicsproxywidget_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#dtor.QGraphicsProxyWidget)
///
/// Delete this object from C++ memory.
///
/// @param self QGraphicsProxyWidget*
void q_graphicsproxywidget_delete(void* self);

/// https://doc.qt.io/qt-6/qgraphicsproxywidget.html#types

typedef enum {
    QGRAPHICSPROXYWIDGET__TYPE = 12
} QGraphicsProxyWidget__;

#endif
