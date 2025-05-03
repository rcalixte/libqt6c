#pragma once
#ifndef SRCQT6C_LIBQGRAPHICSPROXYWIDGET_H
#define SRCQT6C_LIBQGRAPHICSPROXYWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqaction.h"
#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqcursor.h"
#include "libqfont.h"
#include "libqgraphicseffect.h"
#include "libqgraphicsitem.h"
#include "libqgraphicslayout.h"
#include "libqgraphicslayoutitem.h"
#include "libqgraphicsscene.h"
#include "libqgraphicstransform.h"
#include "libqgraphicswidget.h"
#include "libqkeysequence.h"
#include "libqmargins.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqpainter.h"
#include "libqpainterpath.h"
#include "libqpalette.h"
#include "libqpoint.h"
#include "libqrect.h"
#include "libqregion.h"
#include "libqsize.h"
#include "libqsizepolicy.h"
#include <string.h>
#include "libqstyle.h"
#include "libqstyleoption.h"
#include "libqthread.h"
#include "libqtransform.h"
#include "libqvariant.h"
#include "libqwidget.h"

/// https://doc.qt.io/qt-6/qgraphicsproxywidget.html

/// q_graphicsproxywidget_new constructs a new QGraphicsProxyWidget object.
///
///
QGraphicsProxyWidget* q_graphicsproxywidget_new();

/// q_graphicsproxywidget_new2 constructs a new QGraphicsProxyWidget object.
///
/// ``` QGraphicsItem* parent ```
QGraphicsProxyWidget* q_graphicsproxywidget_new2(void* parent);

/// q_graphicsproxywidget_new3 constructs a new QGraphicsProxyWidget object.
///
/// ``` QGraphicsItem* parent, int wFlags ```
QGraphicsProxyWidget* q_graphicsproxywidget_new3(void* parent, int64_t wFlags);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QGraphicsProxyWidget* self ```
QMetaObject* q_graphicsproxywidget_meta_object(void* self);

/// ``` QGraphicsProxyWidget* self, const char* param1 ```
void* q_graphicsproxywidget_metacast(void* self, const char* param1);

/// ``` QGraphicsProxyWidget* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicsproxywidget_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, int32_t (*slot)(QGraphicsProxyWidget*, enum QMetaObject__Call, int, void*) ```
void q_graphicsproxywidget_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicsproxywidget_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_graphicsproxywidget_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#setWidget)
///
/// ``` QGraphicsProxyWidget* self, QWidget* widget ```
void q_graphicsproxywidget_set_widget(void* self, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#widget)
///
/// ``` QGraphicsProxyWidget* self ```
QWidget* q_graphicsproxywidget_widget(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#subWidgetRect)
///
/// ``` QGraphicsProxyWidget* self, QWidget* widget ```
QRectF* q_graphicsproxywidget_sub_widget_rect(void* self, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#setGeometry)
///
/// ``` QGraphicsProxyWidget* self, QRectF* rect ```
void q_graphicsproxywidget_set_geometry(void* self, void* rect);

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QRectF*) ```
void q_graphicsproxywidget_on_set_geometry(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QRectF* rect ```
void q_graphicsproxywidget_qbase_set_geometry(void* self, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#paint)
///
/// ``` QGraphicsProxyWidget* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_graphicsproxywidget_paint(void* self, void* painter, void* option, void* widget);

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QPainter*, QStyleOptionGraphicsItem*, QWidget*) ```
void q_graphicsproxywidget_on_paint(void* self, void (*slot)(void*, void*, void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_graphicsproxywidget_qbase_paint(void* self, void* painter, void* option, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#type)
///
/// ``` QGraphicsProxyWidget* self ```
int32_t q_graphicsproxywidget_type(void* self);

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, int32_t (*slot)() ```
void q_graphicsproxywidget_on_type(void* self, int32_t (*slot)());

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self ```
int32_t q_graphicsproxywidget_qbase_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#createProxyForChildWidget)
///
/// ``` QGraphicsProxyWidget* self, QWidget* child ```
QGraphicsProxyWidget* q_graphicsproxywidget_create_proxy_for_child_widget(void* self, void* child);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#itemChange)
///
/// ``` QGraphicsProxyWidget* self, enum QGraphicsItem__GraphicsItemChange change, QVariant* value ```
QVariant* q_graphicsproxywidget_item_change(void* self, int64_t change, void* value);

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, QVariant* (*slot)(QGraphicsProxyWidget*, enum QGraphicsItem__GraphicsItemChange, QVariant*) ```
void q_graphicsproxywidget_on_item_change(void* self, QVariant* (*slot)(void*, int64_t, void*));

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, enum QGraphicsItem__GraphicsItemChange change, QVariant* value ```
QVariant* q_graphicsproxywidget_qbase_item_change(void* self, int64_t change, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#event)
///
/// ``` QGraphicsProxyWidget* self, QEvent* event ```
bool q_graphicsproxywidget_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, bool (*slot)(QGraphicsProxyWidget*, QEvent*) ```
void q_graphicsproxywidget_on_event(void* self, bool (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QEvent* event ```
bool q_graphicsproxywidget_qbase_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#eventFilter)
///
/// ``` QGraphicsProxyWidget* self, QObject* object, QEvent* event ```
bool q_graphicsproxywidget_event_filter(void* self, void* object, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, bool (*slot)(QGraphicsProxyWidget*, QObject*, QEvent*) ```
void q_graphicsproxywidget_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QObject* object, QEvent* event ```
bool q_graphicsproxywidget_qbase_event_filter(void* self, void* object, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#showEvent)
///
/// ``` QGraphicsProxyWidget* self, QShowEvent* event ```
void q_graphicsproxywidget_show_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QShowEvent*) ```
void q_graphicsproxywidget_on_show_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QShowEvent* event ```
void q_graphicsproxywidget_qbase_show_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#hideEvent)
///
/// ``` QGraphicsProxyWidget* self, QHideEvent* event ```
void q_graphicsproxywidget_hide_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QHideEvent*) ```
void q_graphicsproxywidget_on_hide_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QHideEvent* event ```
void q_graphicsproxywidget_qbase_hide_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#contextMenuEvent)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneContextMenuEvent* event ```
void q_graphicsproxywidget_context_menu_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QGraphicsSceneContextMenuEvent*) ```
void q_graphicsproxywidget_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneContextMenuEvent* event ```
void q_graphicsproxywidget_qbase_context_menu_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#dragEnterEvent)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsproxywidget_drag_enter_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QGraphicsSceneDragDropEvent*) ```
void q_graphicsproxywidget_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsproxywidget_qbase_drag_enter_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#dragLeaveEvent)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsproxywidget_drag_leave_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QGraphicsSceneDragDropEvent*) ```
void q_graphicsproxywidget_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsproxywidget_qbase_drag_leave_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#dragMoveEvent)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsproxywidget_drag_move_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QGraphicsSceneDragDropEvent*) ```
void q_graphicsproxywidget_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsproxywidget_qbase_drag_move_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#dropEvent)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsproxywidget_drop_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QGraphicsSceneDragDropEvent*) ```
void q_graphicsproxywidget_on_drop_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsproxywidget_qbase_drop_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#hoverEnterEvent)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event ```
void q_graphicsproxywidget_hover_enter_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QGraphicsSceneHoverEvent*) ```
void q_graphicsproxywidget_on_hover_enter_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event ```
void q_graphicsproxywidget_qbase_hover_enter_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#hoverLeaveEvent)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event ```
void q_graphicsproxywidget_hover_leave_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QGraphicsSceneHoverEvent*) ```
void q_graphicsproxywidget_on_hover_leave_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event ```
void q_graphicsproxywidget_qbase_hover_leave_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#hoverMoveEvent)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event ```
void q_graphicsproxywidget_hover_move_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QGraphicsSceneHoverEvent*) ```
void q_graphicsproxywidget_on_hover_move_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneHoverEvent* event ```
void q_graphicsproxywidget_qbase_hover_move_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#grabMouseEvent)
///
/// ``` QGraphicsProxyWidget* self, QEvent* event ```
void q_graphicsproxywidget_grab_mouse_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QEvent*) ```
void q_graphicsproxywidget_on_grab_mouse_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QEvent* event ```
void q_graphicsproxywidget_qbase_grab_mouse_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#ungrabMouseEvent)
///
/// ``` QGraphicsProxyWidget* self, QEvent* event ```
void q_graphicsproxywidget_ungrab_mouse_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QEvent*) ```
void q_graphicsproxywidget_on_ungrab_mouse_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QEvent* event ```
void q_graphicsproxywidget_qbase_ungrab_mouse_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#mouseMoveEvent)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsproxywidget_mouse_move_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QGraphicsSceneMouseEvent*) ```
void q_graphicsproxywidget_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsproxywidget_qbase_mouse_move_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#mousePressEvent)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsproxywidget_mouse_press_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QGraphicsSceneMouseEvent*) ```
void q_graphicsproxywidget_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsproxywidget_qbase_mouse_press_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#mouseReleaseEvent)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsproxywidget_mouse_release_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QGraphicsSceneMouseEvent*) ```
void q_graphicsproxywidget_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsproxywidget_qbase_mouse_release_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#mouseDoubleClickEvent)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsproxywidget_mouse_double_click_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QGraphicsSceneMouseEvent*) ```
void q_graphicsproxywidget_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsproxywidget_qbase_mouse_double_click_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#wheelEvent)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneWheelEvent* event ```
void q_graphicsproxywidget_wheel_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QGraphicsSceneWheelEvent*) ```
void q_graphicsproxywidget_on_wheel_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneWheelEvent* event ```
void q_graphicsproxywidget_qbase_wheel_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#keyPressEvent)
///
/// ``` QGraphicsProxyWidget* self, QKeyEvent* event ```
void q_graphicsproxywidget_key_press_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QKeyEvent*) ```
void q_graphicsproxywidget_on_key_press_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QKeyEvent* event ```
void q_graphicsproxywidget_qbase_key_press_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#keyReleaseEvent)
///
/// ``` QGraphicsProxyWidget* self, QKeyEvent* event ```
void q_graphicsproxywidget_key_release_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QKeyEvent*) ```
void q_graphicsproxywidget_on_key_release_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QKeyEvent* event ```
void q_graphicsproxywidget_qbase_key_release_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#focusInEvent)
///
/// ``` QGraphicsProxyWidget* self, QFocusEvent* event ```
void q_graphicsproxywidget_focus_in_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QFocusEvent*) ```
void q_graphicsproxywidget_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QFocusEvent* event ```
void q_graphicsproxywidget_qbase_focus_in_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#focusOutEvent)
///
/// ``` QGraphicsProxyWidget* self, QFocusEvent* event ```
void q_graphicsproxywidget_focus_out_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QFocusEvent*) ```
void q_graphicsproxywidget_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QFocusEvent* event ```
void q_graphicsproxywidget_qbase_focus_out_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#focusNextPrevChild)
///
/// ``` QGraphicsProxyWidget* self, bool next ```
bool q_graphicsproxywidget_focus_next_prev_child(void* self, bool next);

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, bool (*slot)(QGraphicsProxyWidget*, bool) ```
void q_graphicsproxywidget_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, bool next ```
bool q_graphicsproxywidget_qbase_focus_next_prev_child(void* self, bool next);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#inputMethodQuery)
///
/// ``` QGraphicsProxyWidget* self, enum Qt__InputMethodQuery query ```
QVariant* q_graphicsproxywidget_input_method_query(void* self, int64_t query);

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, QVariant* (*slot)(QGraphicsProxyWidget*, enum Qt__InputMethodQuery) ```
void q_graphicsproxywidget_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, enum Qt__InputMethodQuery query ```
QVariant* q_graphicsproxywidget_qbase_input_method_query(void* self, int64_t query);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#inputMethodEvent)
///
/// ``` QGraphicsProxyWidget* self, QInputMethodEvent* event ```
void q_graphicsproxywidget_input_method_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QInputMethodEvent*) ```
void q_graphicsproxywidget_on_input_method_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QInputMethodEvent* event ```
void q_graphicsproxywidget_qbase_input_method_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#sizeHint)
///
/// ``` QGraphicsProxyWidget* self, enum Qt__SizeHint which, QSizeF* constraint ```
QSizeF* q_graphicsproxywidget_size_hint(void* self, int64_t which, void* constraint);

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, QSizeF* (*slot)(QGraphicsProxyWidget*, enum Qt__SizeHint, QSizeF*) ```
void q_graphicsproxywidget_on_size_hint(void* self, QSizeF* (*slot)(void*, int64_t, void*));

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, enum Qt__SizeHint which, QSizeF* constraint ```
QSizeF* q_graphicsproxywidget_qbase_size_hint(void* self, int64_t which, void* constraint);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#resizeEvent)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneResizeEvent* event ```
void q_graphicsproxywidget_resize_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QGraphicsSceneResizeEvent*) ```
void q_graphicsproxywidget_on_resize_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneResizeEvent* event ```
void q_graphicsproxywidget_qbase_resize_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsproxywidget.html#newProxyWidget)
///
/// ``` QGraphicsProxyWidget* self, QWidget* param1 ```
QGraphicsProxyWidget* q_graphicsproxywidget_new_proxy_widget(void* self, void* param1);

/// Allows for overriding the related default method
///
/// ``` QGraphicsProxyWidget* self, QGraphicsProxyWidget* (*slot)(QGraphicsProxyWidget*, QWidget*) ```
void q_graphicsproxywidget_on_new_proxy_widget(void* self, QGraphicsProxyWidget* (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QGraphicsProxyWidget* self, QWidget* param1 ```
QGraphicsProxyWidget* q_graphicsproxywidget_qbase_new_proxy_widget(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_graphicsproxywidget_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_graphicsproxywidget_tr3(const char* s, const char* c, int n);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#layout)
///
/// ``` QGraphicsProxyWidget* self ```
QGraphicsLayout* q_graphicsproxywidget_layout(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setLayout)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsLayout* layout ```
void q_graphicsproxywidget_set_layout(void* self, void* layout);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#adjustSize)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_adjust_size(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutDirection)
///
/// ``` QGraphicsProxyWidget* self ```
int64_t q_graphicsproxywidget_layout_direction(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setLayoutDirection)
///
/// ``` QGraphicsProxyWidget* self, enum Qt__LayoutDirection direction ```
void q_graphicsproxywidget_set_layout_direction(void* self, int64_t direction);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#unsetLayoutDirection)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_unset_layout_direction(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#style)
///
/// ``` QGraphicsProxyWidget* self ```
QStyle* q_graphicsproxywidget_style(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setStyle)
///
/// ``` QGraphicsProxyWidget* self, QStyle* style ```
void q_graphicsproxywidget_set_style(void* self, void* style);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#font)
///
/// ``` QGraphicsProxyWidget* self ```
QFont* q_graphicsproxywidget_font(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setFont)
///
/// ``` QGraphicsProxyWidget* self, QFont* font ```
void q_graphicsproxywidget_set_font(void* self, void* font);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#palette)
///
/// ``` QGraphicsProxyWidget* self ```
QPalette* q_graphicsproxywidget_palette(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setPalette)
///
/// ``` QGraphicsProxyWidget* self, QPalette* palette ```
void q_graphicsproxywidget_set_palette(void* self, void* palette);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#autoFillBackground)
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_auto_fill_background(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setAutoFillBackground)
///
/// ``` QGraphicsProxyWidget* self, bool enabled ```
void q_graphicsproxywidget_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#resize)
///
/// ``` QGraphicsProxyWidget* self, QSizeF* size ```
void q_graphicsproxywidget_resize(void* self, void* size);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#resize)
///
/// ``` QGraphicsProxyWidget* self, double w, double h ```
void q_graphicsproxywidget_resize2(void* self, double w, double h);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#size)
///
/// ``` QGraphicsProxyWidget* self ```
QSizeF* q_graphicsproxywidget_size(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setGeometry)
///
/// ``` QGraphicsProxyWidget* self, double x, double y, double w, double h ```
void q_graphicsproxywidget_set_geometry2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#rect)
///
/// ``` QGraphicsProxyWidget* self ```
QRectF* q_graphicsproxywidget_rect(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setContentsMargins)
///
/// ``` QGraphicsProxyWidget* self, double left, double top, double right, double bottom ```
void q_graphicsproxywidget_set_contents_margins(void* self, double left, double top, double right, double bottom);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setContentsMargins)
///
/// ``` QGraphicsProxyWidget* self, QMarginsF* margins ```
void q_graphicsproxywidget_set_contents_margins_with_margins(void* self, void* margins);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFrameMargins)
///
/// ``` QGraphicsProxyWidget* self, double left, double top, double right, double bottom ```
void q_graphicsproxywidget_set_window_frame_margins(void* self, double left, double top, double right, double bottom);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFrameMargins)
///
/// ``` QGraphicsProxyWidget* self, QMarginsF* margins ```
void q_graphicsproxywidget_set_window_frame_margins_with_margins(void* self, void* margins);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#getWindowFrameMargins)
///
/// ``` QGraphicsProxyWidget* self, double* left, double* top, double* right, double* bottom ```
void q_graphicsproxywidget_get_window_frame_margins(void* self, double* left, double* top, double* right, double* bottom);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#unsetWindowFrameMargins)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_unset_window_frame_margins(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameGeometry)
///
/// ``` QGraphicsProxyWidget* self ```
QRectF* q_graphicsproxywidget_window_frame_geometry(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameRect)
///
/// ``` QGraphicsProxyWidget* self ```
QRectF* q_graphicsproxywidget_window_frame_rect(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFlags)
///
/// ``` QGraphicsProxyWidget* self ```
int64_t q_graphicsproxywidget_window_flags(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowType)
///
/// ``` QGraphicsProxyWidget* self ```
int64_t q_graphicsproxywidget_window_type(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowFlags)
///
/// ``` QGraphicsProxyWidget* self, int wFlags ```
void q_graphicsproxywidget_set_window_flags(void* self, int64_t wFlags);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#isActiveWindow)
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_is_active_window(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setWindowTitle)
///
/// ``` QGraphicsProxyWidget* self, const char* title ```
void q_graphicsproxywidget_set_window_title(void* self, const char* title);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowTitle)
///
/// ``` QGraphicsProxyWidget* self ```
const char* q_graphicsproxywidget_window_title(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusPolicy)
///
/// ``` QGraphicsProxyWidget* self ```
int64_t q_graphicsproxywidget_focus_policy(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setFocusPolicy)
///
/// ``` QGraphicsProxyWidget* self, enum Qt__FocusPolicy policy ```
void q_graphicsproxywidget_set_focus_policy(void* self, int64_t policy);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setTabOrder)
///
/// ``` QGraphicsWidget* first, QGraphicsWidget* second ```
void q_graphicsproxywidget_set_tab_order(void* first, void* second);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#focusWidget)
///
/// ``` QGraphicsProxyWidget* self ```
QGraphicsWidget* q_graphicsproxywidget_focus_widget(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabShortcut)
///
/// ``` QGraphicsProxyWidget* self, QKeySequence* sequence ```
int32_t q_graphicsproxywidget_grab_shortcut(void* self, void* sequence);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#releaseShortcut)
///
/// ``` QGraphicsProxyWidget* self, int id ```
void q_graphicsproxywidget_release_shortcut(void* self, int id);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutEnabled)
///
/// ``` QGraphicsProxyWidget* self, int id ```
void q_graphicsproxywidget_set_shortcut_enabled(void* self, int id);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutAutoRepeat)
///
/// ``` QGraphicsProxyWidget* self, int id ```
void q_graphicsproxywidget_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#addAction)
///
/// ``` QGraphicsProxyWidget* self, QAction* action ```
void q_graphicsproxywidget_add_action(void* self, void* action);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#addActions)
///
/// ``` QGraphicsProxyWidget* self, QAction* actions[] ```
void q_graphicsproxywidget_add_actions(void* self, void* actions[]);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#insertActions)
///
/// ``` QGraphicsProxyWidget* self, QAction* before, QAction* actions[] ```
void q_graphicsproxywidget_insert_actions(void* self, void* before, void* actions[]);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#insertAction)
///
/// ``` QGraphicsProxyWidget* self, QAction* before, QAction* action ```
void q_graphicsproxywidget_insert_action(void* self, void* before, void* action);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#removeAction)
///
/// ``` QGraphicsProxyWidget* self, QAction* action ```
void q_graphicsproxywidget_remove_action(void* self, void* action);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#actions)
///
/// ``` QGraphicsProxyWidget* self ```
libqt_list /* of QAction* */ q_graphicsproxywidget_actions(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setAttribute)
///
/// ``` QGraphicsProxyWidget* self, enum Qt__WidgetAttribute attribute ```
void q_graphicsproxywidget_set_attribute(void* self, int64_t attribute);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#testAttribute)
///
/// ``` QGraphicsProxyWidget* self, enum Qt__WidgetAttribute attribute ```
bool q_graphicsproxywidget_test_attribute(void* self, int64_t attribute);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#geometryChanged)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_geometry_changed(void* self);

/// Inherited from QGraphicsWidget
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsWidget*) ```
void q_graphicsproxywidget_on_geometry_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#layoutChanged)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_layout_changed(void* self);

/// Inherited from QGraphicsWidget
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsWidget*) ```
void q_graphicsproxywidget_on_layout_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#close)
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_close(void* self);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabShortcut)
///
/// ``` QGraphicsProxyWidget* self, QKeySequence* sequence, enum Qt__ShortcutContext context ```
int32_t q_graphicsproxywidget_grab_shortcut2(void* self, void* sequence, int64_t context);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutEnabled)
///
/// ``` QGraphicsProxyWidget* self, int id, bool enabled ```
void q_graphicsproxywidget_set_shortcut_enabled2(void* self, int id, bool enabled);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setShortcutAutoRepeat)
///
/// ``` QGraphicsProxyWidget* self, int id, bool enabled ```
void q_graphicsproxywidget_set_shortcut_auto_repeat2(void* self, int id, bool enabled);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#setAttribute)
///
/// ``` QGraphicsProxyWidget* self, enum Qt__WidgetAttribute attribute, bool on ```
void q_graphicsproxywidget_set_attribute2(void* self, int64_t attribute, bool on);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
///
/// ``` QGraphicsProxyWidget* self, enum Qt__GestureType typeVal ```
void q_graphicsproxywidget_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#ungrabGesture)
///
/// ``` QGraphicsProxyWidget* self, enum Qt__GestureType typeVal ```
void q_graphicsproxywidget_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_parent_changed(void* self);

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsproxywidget_on_parent_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_opacity_changed(void* self);

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsproxywidget_on_opacity_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_visible_changed(void* self);

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsproxywidget_on_visible_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_enabled_changed(void* self);

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsproxywidget_on_enabled_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_x_changed(void* self);

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsproxywidget_on_x_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_y_changed(void* self);

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsproxywidget_on_y_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_z_changed(void* self);

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsproxywidget_on_z_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_rotation_changed(void* self);

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsproxywidget_on_rotation_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_scale_changed(void* self);

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsproxywidget_on_scale_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_children_changed(void* self);

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsproxywidget_on_children_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_width_changed(void* self);

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsproxywidget_on_width_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_height_changed(void* self);

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsproxywidget_on_height_changed(void* self, void (*slot)(void*));

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
///
/// ``` QGraphicsProxyWidget* self, enum Qt__GestureType typeVal, int flags ```
void q_graphicsproxywidget_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QGraphicsProxyWidget* self ```
const char* q_graphicsproxywidget_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QGraphicsProxyWidget* self, char* name ```
void q_graphicsproxywidget_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QGraphicsProxyWidget* self, bool b ```
bool q_graphicsproxywidget_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QGraphicsProxyWidget* self ```
QThread* q_graphicsproxywidget_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QGraphicsProxyWidget* self, QThread* thread ```
void q_graphicsproxywidget_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsProxyWidget* self, int interval ```
int32_t q_graphicsproxywidget_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QGraphicsProxyWidget* self, int id ```
void q_graphicsproxywidget_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QGraphicsProxyWidget* self ```
libqt_list /* of QObject* */ q_graphicsproxywidget_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QGraphicsProxyWidget* self, QObject* parent ```
void q_graphicsproxywidget_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QGraphicsProxyWidget* self, QObject* filterObj ```
void q_graphicsproxywidget_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QGraphicsProxyWidget* self, QObject* obj ```
void q_graphicsproxywidget_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_graphicsproxywidget_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsProxyWidget* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_graphicsproxywidget_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_graphicsproxywidget_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_graphicsproxywidget_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QGraphicsProxyWidget* self, const char* name, QVariant* value ```
bool q_graphicsproxywidget_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QGraphicsProxyWidget* self, const char* name ```
QVariant* q_graphicsproxywidget_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QGraphicsProxyWidget* self ```
const char** q_graphicsproxywidget_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGraphicsProxyWidget* self ```
QBindingStorage* q_graphicsproxywidget_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGraphicsProxyWidget* self ```
QBindingStorage* q_graphicsproxywidget_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QObject*) ```
void q_graphicsproxywidget_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QGraphicsProxyWidget* self ```
QObject* q_graphicsproxywidget_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QGraphicsProxyWidget* self, const char* classname ```
bool q_graphicsproxywidget_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsProxyWidget* self, int interval, enum Qt__TimerType timerType ```
int32_t q_graphicsproxywidget_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicsproxywidget_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsProxyWidget* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicsproxywidget_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsProxyWidget* self, QObject* param1 ```
void q_graphicsproxywidget_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QObject*, QObject*) ```
void q_graphicsproxywidget_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scene)
///
/// ``` QGraphicsProxyWidget* self ```
QGraphicsScene* q_graphicsproxywidget_scene(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentItem)
///
/// ``` QGraphicsProxyWidget* self ```
QGraphicsItem* q_graphicsproxywidget_parent_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelItem)
///
/// ``` QGraphicsProxyWidget* self ```
QGraphicsItem* q_graphicsproxywidget_top_level_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentObject)
///
/// ``` QGraphicsProxyWidget* self ```
QGraphicsObject* q_graphicsproxywidget_parent_object(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentWidget)
///
/// ``` QGraphicsProxyWidget* self ```
QGraphicsWidget* q_graphicsproxywidget_parent_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelWidget)
///
/// ``` QGraphicsProxyWidget* self ```
QGraphicsWidget* q_graphicsproxywidget_top_level_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#window)
///
/// ``` QGraphicsProxyWidget* self ```
QGraphicsWidget* q_graphicsproxywidget_window(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panel)
///
/// ``` QGraphicsProxyWidget* self ```
QGraphicsItem* q_graphicsproxywidget_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setParentItem)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* parent ```
void q_graphicsproxywidget_set_parent_item(void* self, void* parent);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childItems)
///
/// ``` QGraphicsProxyWidget* self ```
libqt_list /* of QGraphicsItem* */ q_graphicsproxywidget_child_items(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWidget)
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_is_widget(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWindow)
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_is_window(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isPanel)
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_is_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// ``` QGraphicsProxyWidget* self ```
QGraphicsObject* q_graphicsproxywidget_to_graphics_object(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// ``` QGraphicsProxyWidget* self ```
QGraphicsObject* q_graphicsproxywidget_to_graphics_object2(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#group)
///
/// ``` QGraphicsProxyWidget* self ```
QGraphicsItemGroup* q_graphicsproxywidget_group(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGroup)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItemGroup* group ```
void q_graphicsproxywidget_set_group(void* self, void* group);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#flags)
///
/// ``` QGraphicsProxyWidget* self ```
int64_t q_graphicsproxywidget_flags(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// ``` QGraphicsProxyWidget* self, enum QGraphicsItem__GraphicsItemFlag flag ```
void q_graphicsproxywidget_set_flag(void* self, int64_t flag);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlags)
///
/// ``` QGraphicsProxyWidget* self, int flags ```
void q_graphicsproxywidget_set_flags(void* self, int64_t flags);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cacheMode)
///
/// ``` QGraphicsProxyWidget* self ```
int64_t q_graphicsproxywidget_cache_mode(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// ``` QGraphicsProxyWidget* self, enum QGraphicsItem__CacheMode mode ```
void q_graphicsproxywidget_set_cache_mode(void* self, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panelModality)
///
/// ``` QGraphicsProxyWidget* self ```
int64_t q_graphicsproxywidget_panel_modality(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPanelModality)
///
/// ``` QGraphicsProxyWidget* self, enum QGraphicsItem__PanelModality panelModality ```
void q_graphicsproxywidget_set_panel_modality(void* self, int64_t panelModality);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_is_blocked_by_modal_panel(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toolTip)
///
/// ``` QGraphicsProxyWidget* self ```
const char* q_graphicsproxywidget_tool_tip(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setToolTip)
///
/// ``` QGraphicsProxyWidget* self, const char* toolTip ```
void q_graphicsproxywidget_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cursor)
///
/// ``` QGraphicsProxyWidget* self ```
QCursor* q_graphicsproxywidget_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCursor)
///
/// ``` QGraphicsProxyWidget* self, QCursor* cursor ```
void q_graphicsproxywidget_set_cursor(void* self, void* cursor);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasCursor)
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_has_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#unsetCursor)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_unset_cursor(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisible)
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_is_visible(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisibleTo)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* parent ```
bool q_graphicsproxywidget_is_visible_to(void* self, void* parent);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setVisible)
///
/// ``` QGraphicsProxyWidget* self, bool visible ```
void q_graphicsproxywidget_set_visible(void* self, bool visible);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hide)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_hide(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#show)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_show(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isEnabled)
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_is_enabled(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setEnabled)
///
/// ``` QGraphicsProxyWidget* self, bool enabled ```
void q_graphicsproxywidget_set_enabled(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isSelected)
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_is_selected(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setSelected)
///
/// ``` QGraphicsProxyWidget* self, bool selected ```
void q_graphicsproxywidget_set_selected(void* self, bool selected);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptDrops)
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_accept_drops(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptDrops)
///
/// ``` QGraphicsProxyWidget* self, bool on ```
void q_graphicsproxywidget_set_accept_drops(void* self, bool on);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opacity)
///
/// ``` QGraphicsProxyWidget* self ```
double q_graphicsproxywidget_opacity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#effectiveOpacity)
///
/// ``` QGraphicsProxyWidget* self ```
double q_graphicsproxywidget_effective_opacity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setOpacity)
///
/// ``` QGraphicsProxyWidget* self, double opacity ```
void q_graphicsproxywidget_set_opacity(void* self, double opacity);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#graphicsEffect)
///
/// ``` QGraphicsProxyWidget* self ```
QGraphicsEffect* q_graphicsproxywidget_graphics_effect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGraphicsEffect)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsEffect* effect ```
void q_graphicsproxywidget_set_graphics_effect(void* self, void* effect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptedMouseButtons)
///
/// ``` QGraphicsProxyWidget* self ```
int64_t q_graphicsproxywidget_accepted_mouse_buttons(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptedMouseButtons)
///
/// ``` QGraphicsProxyWidget* self, int buttons ```
void q_graphicsproxywidget_set_accepted_mouse_buttons(void* self, int64_t buttons);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptHoverEvents)
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_accept_hover_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptHoverEvents)
///
/// ``` QGraphicsProxyWidget* self, bool enabled ```
void q_graphicsproxywidget_set_accept_hover_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptTouchEvents)
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_accept_touch_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptTouchEvents)
///
/// ``` QGraphicsProxyWidget* self, bool enabled ```
void q_graphicsproxywidget_set_accept_touch_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#filtersChildEvents)
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_filters_child_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFiltersChildEvents)
///
/// ``` QGraphicsProxyWidget* self, bool enabled ```
void q_graphicsproxywidget_set_filters_child_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#handlesChildEvents)
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_handles_child_events(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setHandlesChildEvents)
///
/// ``` QGraphicsProxyWidget* self, bool enabled ```
void q_graphicsproxywidget_set_handles_child_events(void* self, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isActive)
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_is_active(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setActive)
///
/// ``` QGraphicsProxyWidget* self, bool active ```
void q_graphicsproxywidget_set_active(void* self, bool active);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasFocus)
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_has_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_set_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clearFocus)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_clear_focus(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusProxy)
///
/// ``` QGraphicsProxyWidget* self ```
QGraphicsItem* q_graphicsproxywidget_focus_proxy(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocusProxy)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* item ```
void q_graphicsproxywidget_set_focus_proxy(void* self, void* item);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusItem)
///
/// ``` QGraphicsProxyWidget* self ```
QGraphicsItem* q_graphicsproxywidget_focus_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusScopeItem)
///
/// ``` QGraphicsProxyWidget* self ```
QGraphicsItem* q_graphicsproxywidget_focus_scope_item(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabMouse)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_grab_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabMouse)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_ungrab_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabKeyboard)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_grab_keyboard(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabKeyboard)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_ungrab_keyboard(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#pos)
///
/// ``` QGraphicsProxyWidget* self ```
QPointF* q_graphicsproxywidget_pos(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#x)
///
/// ``` QGraphicsProxyWidget* self ```
double q_graphicsproxywidget_x(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setX)
///
/// ``` QGraphicsProxyWidget* self, double x ```
void q_graphicsproxywidget_set_x(void* self, double x);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#y)
///
/// ``` QGraphicsProxyWidget* self ```
double q_graphicsproxywidget_y(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setY)
///
/// ``` QGraphicsProxyWidget* self, double y ```
void q_graphicsproxywidget_set_y(void* self, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scenePos)
///
/// ``` QGraphicsProxyWidget* self ```
QPointF* q_graphicsproxywidget_scene_pos(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// ``` QGraphicsProxyWidget* self, QPointF* pos ```
void q_graphicsproxywidget_set_pos(void* self, void* pos);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// ``` QGraphicsProxyWidget* self, double x, double y ```
void q_graphicsproxywidget_set_pos2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#moveBy)
///
/// ``` QGraphicsProxyWidget* self, double dx, double dy ```
void q_graphicsproxywidget_move_by(void* self, double dx, double dy);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_ensure_visible(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsProxyWidget* self, double x, double y, double w, double h ```
void q_graphicsproxywidget_ensure_visible2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transform)
///
/// ``` QGraphicsProxyWidget* self ```
QTransform* q_graphicsproxywidget_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneTransform)
///
/// ``` QGraphicsProxyWidget* self ```
QTransform* q_graphicsproxywidget_scene_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#deviceTransform)
///
/// ``` QGraphicsProxyWidget* self, QTransform* viewportTransform ```
QTransform* q_graphicsproxywidget_device_transform(void* self, void* viewportTransform);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* other ```
QTransform* q_graphicsproxywidget_item_transform(void* self, void* other);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// ``` QGraphicsProxyWidget* self, QTransform* matrix ```
void q_graphicsproxywidget_set_transform(void* self, void* matrix);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#resetTransform)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_reset_transform(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setRotation)
///
/// ``` QGraphicsProxyWidget* self, double angle ```
void q_graphicsproxywidget_set_rotation(void* self, double angle);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#rotation)
///
/// ``` QGraphicsProxyWidget* self ```
double q_graphicsproxywidget_rotation(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setScale)
///
/// ``` QGraphicsProxyWidget* self, double scale ```
void q_graphicsproxywidget_set_scale(void* self, double scale);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scale)
///
/// ``` QGraphicsProxyWidget* self ```
double q_graphicsproxywidget_scale(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformations)
///
/// ``` QGraphicsProxyWidget* self ```
libqt_list /* of QGraphicsTransform* */ q_graphicsproxywidget_transformations(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformations)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsTransform* transformations[] ```
void q_graphicsproxywidget_set_transformations(void* self, void* transformations[]);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformOriginPoint)
///
/// ``` QGraphicsProxyWidget* self ```
QPointF* q_graphicsproxywidget_transform_origin_point(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// ``` QGraphicsProxyWidget* self, QPointF* origin ```
void q_graphicsproxywidget_set_transform_origin_point(void* self, void* origin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// ``` QGraphicsProxyWidget* self, double ax, double ay ```
void q_graphicsproxywidget_set_transform_origin_point2(void* self, double ax, double ay);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#zValue)
///
/// ``` QGraphicsProxyWidget* self ```
double q_graphicsproxywidget_z_value(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setZValue)
///
/// ``` QGraphicsProxyWidget* self, double z ```
void q_graphicsproxywidget_set_z_value(void* self, double z);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#stackBefore)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* sibling ```
void q_graphicsproxywidget_stack_before(void* self, void* sibling);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childrenBoundingRect)
///
/// ``` QGraphicsProxyWidget* self ```
QRectF* q_graphicsproxywidget_children_bounding_rect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneBoundingRect)
///
/// ``` QGraphicsProxyWidget* self ```
QRectF* q_graphicsproxywidget_scene_bounding_rect(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isClipped)
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_is_clipped(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clipPath)
///
/// ``` QGraphicsProxyWidget* self ```
QPainterPath* q_graphicsproxywidget_clip_path(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// ``` QGraphicsProxyWidget* self ```
libqt_list /* of QGraphicsItem* */ q_graphicsproxywidget_colliding_items(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_is_obscured(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsProxyWidget* self, double x, double y, double w, double h ```
bool q_graphicsproxywidget_is_obscured2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegion)
///
/// ``` QGraphicsProxyWidget* self, QTransform* itemToDeviceTransform ```
QRegion* q_graphicsproxywidget_bounding_region(void* self, void* itemToDeviceTransform);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegionGranularity)
///
/// ``` QGraphicsProxyWidget* self ```
double q_graphicsproxywidget_bounding_region_granularity(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setBoundingRegionGranularity)
///
/// ``` QGraphicsProxyWidget* self, double granularity ```
void q_graphicsproxywidget_set_bounding_region_granularity(void* self, double granularity);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_update(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsProxyWidget* self, double x, double y, double width, double height ```
void q_graphicsproxywidget_update2(void* self, double x, double y, double width, double height);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// ``` QGraphicsProxyWidget* self, double dx, double dy ```
void q_graphicsproxywidget_scroll(void* self, double dx, double dy);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* item, QPointF* point ```
QPointF* q_graphicsproxywidget_map_to_item(void* self, void* item, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsProxyWidget* self, QPointF* point ```
QPointF* q_graphicsproxywidget_map_to_parent(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsProxyWidget* self, QPointF* point ```
QPointF* q_graphicsproxywidget_map_to_scene(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* item, QRectF* rect ```
QRectF* q_graphicsproxywidget_map_rect_to_item(void* self, void* item, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// ``` QGraphicsProxyWidget* self, QRectF* rect ```
QRectF* q_graphicsproxywidget_map_rect_to_parent(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// ``` QGraphicsProxyWidget* self, QRectF* rect ```
QRectF* q_graphicsproxywidget_map_rect_to_scene(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* item, QPainterPath* path ```
QPainterPath* q_graphicsproxywidget_map_to_item4(void* self, void* item, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsProxyWidget* self, QPainterPath* path ```
QPainterPath* q_graphicsproxywidget_map_to_parent_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsProxyWidget* self, QPainterPath* path ```
QPainterPath* q_graphicsproxywidget_map_to_scene_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* item, QPointF* point ```
QPointF* q_graphicsproxywidget_map_from_item(void* self, void* item, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsProxyWidget* self, QPointF* point ```
QPointF* q_graphicsproxywidget_map_from_parent(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsProxyWidget* self, QPointF* point ```
QPointF* q_graphicsproxywidget_map_from_scene(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* item, QRectF* rect ```
QRectF* q_graphicsproxywidget_map_rect_from_item(void* self, void* item, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// ``` QGraphicsProxyWidget* self, QRectF* rect ```
QRectF* q_graphicsproxywidget_map_rect_from_parent(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// ``` QGraphicsProxyWidget* self, QRectF* rect ```
QRectF* q_graphicsproxywidget_map_rect_from_scene(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* item, QPainterPath* path ```
QPainterPath* q_graphicsproxywidget_map_from_item4(void* self, void* item, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsProxyWidget* self, QPainterPath* path ```
QPainterPath* q_graphicsproxywidget_map_from_parent_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsProxyWidget* self, QPainterPath* path ```
QPainterPath* q_graphicsproxywidget_map_from_scene_with_path(void* self, void* path);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* item, double x, double y ```
QPointF* q_graphicsproxywidget_map_to_item5(void* self, void* item, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsProxyWidget* self, double x, double y ```
QPointF* q_graphicsproxywidget_map_to_parent2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsProxyWidget* self, double x, double y ```
QPointF* q_graphicsproxywidget_map_to_scene2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* item, double x, double y, double w, double h ```
QRectF* q_graphicsproxywidget_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// ``` QGraphicsProxyWidget* self, double x, double y, double w, double h ```
QRectF* q_graphicsproxywidget_map_rect_to_parent2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// ``` QGraphicsProxyWidget* self, double x, double y, double w, double h ```
QRectF* q_graphicsproxywidget_map_rect_to_scene2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* item, double x, double y ```
QPointF* q_graphicsproxywidget_map_from_item5(void* self, void* item, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsProxyWidget* self, double x, double y ```
QPointF* q_graphicsproxywidget_map_from_parent2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsProxyWidget* self, double x, double y ```
QPointF* q_graphicsproxywidget_map_from_scene2(void* self, double x, double y);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* item, double x, double y, double w, double h ```
QRectF* q_graphicsproxywidget_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// ``` QGraphicsProxyWidget* self, double x, double y, double w, double h ```
QRectF* q_graphicsproxywidget_map_rect_from_parent2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// ``` QGraphicsProxyWidget* self, double x, double y, double w, double h ```
QRectF* q_graphicsproxywidget_map_rect_from_scene2(void* self, double x, double y, double w, double h);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isAncestorOf)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* child ```
bool q_graphicsproxywidget_is_ancestor_of(void* self, void* child);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#commonAncestorItem)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* other ```
QGraphicsItem* q_graphicsproxywidget_common_ancestor_item(void* self, void* other);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isUnderMouse)
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_is_under_mouse(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#data)
///
/// ``` QGraphicsProxyWidget* self, int key ```
QVariant* q_graphicsproxywidget_data(void* self, int key);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setData)
///
/// ``` QGraphicsProxyWidget* self, int key, QVariant* value ```
void q_graphicsproxywidget_set_data(void* self, int key, void* value);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodHints)
///
/// ``` QGraphicsProxyWidget* self ```
int64_t q_graphicsproxywidget_input_method_hints(void* self);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setInputMethodHints)
///
/// ``` QGraphicsProxyWidget* self, int hints ```
void q_graphicsproxywidget_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#installSceneEventFilter)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* filterItem ```
void q_graphicsproxywidget_install_scene_event_filter(void* self, void* filterItem);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeSceneEventFilter)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* filterItem ```
void q_graphicsproxywidget_remove_scene_event_filter(void* self, void* filterItem);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// ``` QGraphicsProxyWidget* self, enum QGraphicsItem__GraphicsItemFlag flag, bool enabled ```
void q_graphicsproxywidget_set_flag2(void* self, int64_t flag, bool enabled);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// ``` QGraphicsProxyWidget* self, enum QGraphicsItem__CacheMode mode, QSize* cacheSize ```
void q_graphicsproxywidget_set_cache_mode2(void* self, int64_t mode, void* cacheSize);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// ``` QGraphicsProxyWidget* self, enum Qt__FocusReason focusReason ```
void q_graphicsproxywidget_set_focus1(void* self, int64_t focusReason);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsProxyWidget* self, QRectF* rect ```
void q_graphicsproxywidget_ensure_visible1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsProxyWidget* self, QRectF* rect, int xmargin ```
void q_graphicsproxywidget_ensure_visible22(void* self, void* rect, int xmargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsProxyWidget* self, QRectF* rect, int xmargin, int ymargin ```
void q_graphicsproxywidget_ensure_visible3(void* self, void* rect, int xmargin, int ymargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsProxyWidget* self, double x, double y, double w, double h, int xmargin ```
void q_graphicsproxywidget_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsProxyWidget* self, double x, double y, double w, double h, int xmargin, int ymargin ```
void q_graphicsproxywidget_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* other, bool* ok ```
QTransform* q_graphicsproxywidget_item_transform2(void* self, void* other, bool* ok);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// ``` QGraphicsProxyWidget* self, QTransform* matrix, bool combine ```
void q_graphicsproxywidget_set_transform2(void* self, void* matrix, bool combine);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// ``` QGraphicsProxyWidget* self, enum Qt__ItemSelectionMode mode ```
libqt_list /* of QGraphicsItem* */ q_graphicsproxywidget_colliding_items1(void* self, int64_t mode);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsProxyWidget* self, QRectF* rect ```
bool q_graphicsproxywidget_is_obscured1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsProxyWidget* self, QRectF* rect ```
void q_graphicsproxywidget_update1(void* self, void* rect);

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// ``` QGraphicsProxyWidget* self, double dx, double dy, QRectF* rect ```
void q_graphicsproxywidget_scroll3(void* self, double dx, double dy, void* rect);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// ``` QGraphicsProxyWidget* self, QSizePolicy* policy ```
void q_graphicsproxywidget_set_size_policy(void* self, void* policy);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// ``` QGraphicsProxyWidget* self, enum QSizePolicy__Policy hPolicy, enum QSizePolicy__Policy vPolicy ```
void q_graphicsproxywidget_set_size_policy2(void* self, int64_t hPolicy, int64_t vPolicy);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#sizePolicy)
///
/// ``` QGraphicsProxyWidget* self ```
QSizePolicy* q_graphicsproxywidget_size_policy(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// ``` QGraphicsProxyWidget* self, QSizeF* size ```
void q_graphicsproxywidget_set_minimum_size(void* self, void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumSize)
///
/// ``` QGraphicsProxyWidget* self, double w, double h ```
void q_graphicsproxywidget_set_minimum_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumSize)
///
/// ``` QGraphicsProxyWidget* self ```
QSizeF* q_graphicsproxywidget_minimum_size(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumWidth)
///
/// ``` QGraphicsProxyWidget* self, double width ```
void q_graphicsproxywidget_set_minimum_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumWidth)
///
/// ``` QGraphicsProxyWidget* self ```
double q_graphicsproxywidget_minimum_width(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMinimumHeight)
///
/// ``` QGraphicsProxyWidget* self, double height ```
void q_graphicsproxywidget_set_minimum_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#minimumHeight)
///
/// ``` QGraphicsProxyWidget* self ```
double q_graphicsproxywidget_minimum_height(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// ``` QGraphicsProxyWidget* self, QSizeF* size ```
void q_graphicsproxywidget_set_preferred_size(void* self, void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredSize)
///
/// ``` QGraphicsProxyWidget* self, double w, double h ```
void q_graphicsproxywidget_set_preferred_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredSize)
///
/// ``` QGraphicsProxyWidget* self ```
QSizeF* q_graphicsproxywidget_preferred_size(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredWidth)
///
/// ``` QGraphicsProxyWidget* self, double width ```
void q_graphicsproxywidget_set_preferred_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredWidth)
///
/// ``` QGraphicsProxyWidget* self ```
double q_graphicsproxywidget_preferred_width(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setPreferredHeight)
///
/// ``` QGraphicsProxyWidget* self, double height ```
void q_graphicsproxywidget_set_preferred_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#preferredHeight)
///
/// ``` QGraphicsProxyWidget* self ```
double q_graphicsproxywidget_preferred_height(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// ``` QGraphicsProxyWidget* self, QSizeF* size ```
void q_graphicsproxywidget_set_maximum_size(void* self, void* size);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumSize)
///
/// ``` QGraphicsProxyWidget* self, double w, double h ```
void q_graphicsproxywidget_set_maximum_size2(void* self, double w, double h);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumSize)
///
/// ``` QGraphicsProxyWidget* self ```
QSizeF* q_graphicsproxywidget_maximum_size(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumWidth)
///
/// ``` QGraphicsProxyWidget* self, double width ```
void q_graphicsproxywidget_set_maximum_width(void* self, double width);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumWidth)
///
/// ``` QGraphicsProxyWidget* self ```
double q_graphicsproxywidget_maximum_width(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setMaximumHeight)
///
/// ``` QGraphicsProxyWidget* self, double height ```
void q_graphicsproxywidget_set_maximum_height(void* self, double height);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#maximumHeight)
///
/// ``` QGraphicsProxyWidget* self ```
double q_graphicsproxywidget_maximum_height(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#geometry)
///
/// ``` QGraphicsProxyWidget* self ```
QRectF* q_graphicsproxywidget_geometry(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#contentsRect)
///
/// ``` QGraphicsProxyWidget* self ```
QRectF* q_graphicsproxywidget_contents_rect(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// ``` QGraphicsProxyWidget* self, enum Qt__SizeHint which ```
QSizeF* q_graphicsproxywidget_effective_size_hint(void* self, int64_t which);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#parentLayoutItem)
///
/// ``` QGraphicsProxyWidget* self ```
QGraphicsLayoutItem* q_graphicsproxywidget_parent_layout_item(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setParentLayoutItem)
///
/// ``` QGraphicsProxyWidget* self, QGraphicsLayoutItem* parent ```
void q_graphicsproxywidget_set_parent_layout_item(void* self, void* parent);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isLayout)
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_is_layout(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#graphicsItem)
///
/// ``` QGraphicsProxyWidget* self ```
QGraphicsItem* q_graphicsproxywidget_graphics_item(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#ownedByLayout)
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_owned_by_layout(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setSizePolicy)
///
/// ``` QGraphicsProxyWidget* self, enum QSizePolicy__Policy hPolicy, enum QSizePolicy__Policy vPolicy, enum QSizePolicy__ControlType controlType ```
void q_graphicsproxywidget_set_size_policy3(void* self, int64_t hPolicy, int64_t vPolicy, int64_t controlType);

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#effectiveSizeHint)
///
/// ``` QGraphicsProxyWidget* self, enum Qt__SizeHint which, QSizeF* constraint ```
QSizeF* q_graphicsproxywidget_effective_size_hint2(void* self, int64_t which, void* constraint);

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#getContentsMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, double* left, double* top, double* right, double* bottom ```
void q_graphicsproxywidget_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, double* left, double* top, double* right, double* bottom ```
void q_graphicsproxywidget_qbase_get_contents_margins(void* self, double* left, double* top, double* right, double* bottom);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, double*, double*, double*, double*) ```
void q_graphicsproxywidget_on_get_contents_margins(void* self, void (*slot)(void*, double*, double*, double*, double*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#paintWindowFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_graphicsproxywidget_paint_window_frame(void* self, void* painter, void* option, void* widget);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_graphicsproxywidget_qbase_paint_window_frame(void* self, void* painter, void* option, void* widget);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QPainter*, QStyleOptionGraphicsItem*, QWidget*) ```
void q_graphicsproxywidget_on_paint_window_frame(void* self, void (*slot)(void*, void*, void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#boundingRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self ```
QRectF* q_graphicsproxywidget_bounding_rect(void* self);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self ```
QRectF* q_graphicsproxywidget_qbase_bounding_rect(void* self);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QRectF* (*slot)() ```
void q_graphicsproxywidget_on_bounding_rect(void* self, QRectF* (*slot)());

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#shape)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self ```
QPainterPath* q_graphicsproxywidget_shape(void* self);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self ```
QPainterPath* q_graphicsproxywidget_qbase_shape(void* self);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QPainterPath* (*slot)() ```
void q_graphicsproxywidget_on_shape(void* self, QPainterPath* (*slot)());

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QStyleOption* option ```
void q_graphicsproxywidget_init_style_option(void* self, void* option);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QStyleOption* option ```
void q_graphicsproxywidget_qbase_init_style_option(void* self, void* option);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QStyleOption*) ```
void q_graphicsproxywidget_on_init_style_option(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#updateGeometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_update_geometry(void* self);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_qbase_update_geometry(void* self);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)() ```
void q_graphicsproxywidget_on_update_geometry(void* self, void (*slot)());

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#propertyChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, const char* propertyName, QVariant* value ```
QVariant* q_graphicsproxywidget_property_change(void* self, const char* propertyName, void* value);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, const char* propertyName, QVariant* value ```
QVariant* q_graphicsproxywidget_qbase_property_change(void* self, const char* propertyName, void* value);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QVariant* (*slot)(QGraphicsProxyWidget*, const char*, QVariant*) ```
void q_graphicsproxywidget_on_property_change(void* self, QVariant* (*slot)(void*, const char*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#sceneEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QEvent* event ```
bool q_graphicsproxywidget_scene_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QEvent* event ```
bool q_graphicsproxywidget_qbase_scene_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, bool (*slot)(QGraphicsProxyWidget*, QEvent*) ```
void q_graphicsproxywidget_on_scene_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QEvent* e ```
bool q_graphicsproxywidget_window_frame_event(void* self, void* e);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QEvent* e ```
bool q_graphicsproxywidget_qbase_window_frame_event(void* self, void* e);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, bool (*slot)(QGraphicsProxyWidget*, QEvent*) ```
void q_graphicsproxywidget_on_window_frame_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#windowFrameSectionAt)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QPointF* pos ```
int64_t q_graphicsproxywidget_window_frame_section_at(void* self, void* pos);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QPointF* pos ```
int64_t q_graphicsproxywidget_qbase_window_frame_section_at(void* self, void* pos);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, int64_t (*slot)(QGraphicsProxyWidget*, QPointF*) ```
void q_graphicsproxywidget_on_window_frame_section_at(void* self, int64_t (*slot)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QEvent* event ```
void q_graphicsproxywidget_change_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QEvent* event ```
void q_graphicsproxywidget_qbase_change_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QEvent*) ```
void q_graphicsproxywidget_on_change_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QCloseEvent* event ```
void q_graphicsproxywidget_close_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QCloseEvent* event ```
void q_graphicsproxywidget_qbase_close_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QCloseEvent*) ```
void q_graphicsproxywidget_on_close_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneMoveEvent* event ```
void q_graphicsproxywidget_move_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QGraphicsSceneMoveEvent* event ```
void q_graphicsproxywidget_qbase_move_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QGraphicsSceneMoveEvent*) ```
void q_graphicsproxywidget_on_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#polishEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_polish_event(void* self);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_qbase_polish_event(void* self);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)() ```
void q_graphicsproxywidget_on_polish_event(void* self, void (*slot)());

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#grabKeyboardEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QEvent* event ```
void q_graphicsproxywidget_grab_keyboard_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QEvent* event ```
void q_graphicsproxywidget_qbase_grab_keyboard_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QEvent*) ```
void q_graphicsproxywidget_on_grab_keyboard_event(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicswidget.html#ungrabKeyboardEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QEvent* event ```
void q_graphicsproxywidget_ungrab_keyboard_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QEvent* event ```
void q_graphicsproxywidget_qbase_ungrab_keyboard_event(void* self, void* event);

/// Inherited from QGraphicsWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QEvent*) ```
void q_graphicsproxywidget_on_ungrab_keyboard_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QTimerEvent* event ```
void q_graphicsproxywidget_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QTimerEvent* event ```
void q_graphicsproxywidget_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QTimerEvent*) ```
void q_graphicsproxywidget_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QChildEvent* event ```
void q_graphicsproxywidget_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QChildEvent* event ```
void q_graphicsproxywidget_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QChildEvent*) ```
void q_graphicsproxywidget_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QEvent* event ```
void q_graphicsproxywidget_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QEvent* event ```
void q_graphicsproxywidget_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QEvent*) ```
void q_graphicsproxywidget_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QMetaMethod* signal ```
void q_graphicsproxywidget_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QMetaMethod* signal ```
void q_graphicsproxywidget_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QMetaMethod*) ```
void q_graphicsproxywidget_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QMetaMethod* signal ```
void q_graphicsproxywidget_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QMetaMethod* signal ```
void q_graphicsproxywidget_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QMetaMethod*) ```
void q_graphicsproxywidget_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, int phase ```
void q_graphicsproxywidget_advance(void* self, int phase);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, int phase ```
void q_graphicsproxywidget_qbase_advance(void* self, int phase);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, int) ```
void q_graphicsproxywidget_on_advance(void* self, void (*slot)(void*, int));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QPointF* point ```
bool q_graphicsproxywidget_contains(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QPointF* point ```
bool q_graphicsproxywidget_qbase_contains(void* self, void* point);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, bool (*slot)(QGraphicsProxyWidget*, QPointF*) ```
void q_graphicsproxywidget_on_contains(void* self, bool (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode ```
bool q_graphicsproxywidget_collides_with_item(void* self, void* other, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode ```
bool q_graphicsproxywidget_qbase_collides_with_item(void* self, void* other, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, bool (*slot)(QGraphicsProxyWidget*, QGraphicsItem*, enum Qt__ItemSelectionMode) ```
void q_graphicsproxywidget_on_collides_with_item(void* self, bool (*slot)(void*, void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
bool q_graphicsproxywidget_collides_with_path(void* self, void* path, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
bool q_graphicsproxywidget_qbase_collides_with_path(void* self, void* path, int64_t mode);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, bool (*slot)(QGraphicsProxyWidget*, QPainterPath*, enum Qt__ItemSelectionMode) ```
void q_graphicsproxywidget_on_collides_with_path(void* self, bool (*slot)(void*, void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* item ```
bool q_graphicsproxywidget_is_obscured_by(void* self, void* item);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* item ```
bool q_graphicsproxywidget_qbase_is_obscured_by(void* self, void* item);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, bool (*slot)(QGraphicsProxyWidget*, QGraphicsItem*) ```
void q_graphicsproxywidget_on_is_obscured_by(void* self, bool (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self ```
QPainterPath* q_graphicsproxywidget_opaque_area(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self ```
QPainterPath* q_graphicsproxywidget_qbase_opaque_area(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QPainterPath* (*slot)() ```
void q_graphicsproxywidget_on_opaque_area(void* self, QPainterPath* (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* watched, QEvent* event ```
bool q_graphicsproxywidget_scene_event_filter(void* self, void* watched, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* watched, QEvent* event ```
bool q_graphicsproxywidget_qbase_scene_event_filter(void* self, void* watched, void* event);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, bool (*slot)(QGraphicsProxyWidget*, QGraphicsItem*, QEvent*) ```
void q_graphicsproxywidget_on_scene_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, enum QGraphicsItem__Extension extension ```
bool q_graphicsproxywidget_supports_extension(void* self, int64_t extension);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, enum QGraphicsItem__Extension extension ```
bool q_graphicsproxywidget_qbase_supports_extension(void* self, int64_t extension);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, bool (*slot)(QGraphicsProxyWidget*, enum QGraphicsItem__Extension) ```
void q_graphicsproxywidget_on_supports_extension(void* self, bool (*slot)(void*, int64_t));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, enum QGraphicsItem__Extension extension, QVariant* variant ```
void q_graphicsproxywidget_set_extension(void* self, int64_t extension, void* variant);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, enum QGraphicsItem__Extension extension, QVariant* variant ```
void q_graphicsproxywidget_qbase_set_extension(void* self, int64_t extension, void* variant);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, enum QGraphicsItem__Extension, QVariant*) ```
void q_graphicsproxywidget_on_set_extension(void* self, void (*slot)(void*, int64_t, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QVariant* variant ```
QVariant* q_graphicsproxywidget_extension(void* self, void* variant);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QVariant* variant ```
QVariant* q_graphicsproxywidget_qbase_extension(void* self, void* variant);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QVariant* (*slot)(QGraphicsProxyWidget*, QVariant*) ```
void q_graphicsproxywidget_on_extension(void* self, QVariant* (*slot)(void*, void*));

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#isEmpty)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_is_empty(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self ```
bool q_graphicsproxywidget_qbase_is_empty(void* self);

/// Inherited from QGraphicsLayoutItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, bool (*slot)() ```
void q_graphicsproxywidget_on_is_empty(void* self, bool (*slot)());

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_update_micro_focus(void* self);

/// Inherited from QGraphicsObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_qbase_update_micro_focus(void* self);

/// Inherited from QGraphicsObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)() ```
void q_graphicsproxywidget_on_update_micro_focus(void* self, void (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self ```
QObject* q_graphicsproxywidget_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self ```
QObject* q_graphicsproxywidget_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QObject* (*slot)() ```
void q_graphicsproxywidget_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self ```
int32_t q_graphicsproxywidget_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self ```
int32_t q_graphicsproxywidget_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, int32_t (*slot)() ```
void q_graphicsproxywidget_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, const char* signal ```
int32_t q_graphicsproxywidget_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, const char* signal ```
int32_t q_graphicsproxywidget_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, int32_t (*slot)(QGraphicsProxyWidget*, const char*) ```
void q_graphicsproxywidget_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QMetaMethod* signal ```
bool q_graphicsproxywidget_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QMetaMethod* signal ```
bool q_graphicsproxywidget_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, bool (*slot)(QGraphicsProxyWidget*, QMetaMethod*) ```
void q_graphicsproxywidget_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_add_to_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_qbase_add_to_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)() ```
void q_graphicsproxywidget_on_add_to_index(void* self, void (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_remove_from_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_qbase_remove_from_index(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)() ```
void q_graphicsproxywidget_on_remove_from_index(void* self, void (*slot)());

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_prepare_geometry_change(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_qbase_prepare_geometry_change(void* self);

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)() ```
void q_graphicsproxywidget_on_prepare_geometry_change(void* self, void (*slot)());

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setGraphicsItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* item ```
void q_graphicsproxywidget_set_graphics_item(void* self, void* item);

/// Inherited from QGraphicsLayoutItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, QGraphicsItem* item ```
void q_graphicsproxywidget_qbase_set_graphics_item(void* self, void* item);

/// Inherited from QGraphicsLayoutItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, QGraphicsItem*) ```
void q_graphicsproxywidget_on_set_graphics_item(void* self, void (*slot)(void*, void*));

/// Inherited from QGraphicsLayoutItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicslayoutitem.html#setOwnedByLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, bool ownedByLayout ```
void q_graphicsproxywidget_set_owned_by_layout(void* self, bool ownedByLayout);

/// Inherited from QGraphicsLayoutItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, bool ownedByLayout ```
void q_graphicsproxywidget_qbase_set_owned_by_layout(void* self, bool ownedByLayout);

/// Inherited from QGraphicsLayoutItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsProxyWidget* self, void (*slot)(QGraphicsProxyWidget*, bool) ```
void q_graphicsproxywidget_on_set_owned_by_layout(void* self, void (*slot)(void*, bool));

/// Delete this object from C++ memory.
///
/// ``` QGraphicsProxyWidget* self ```
void q_graphicsproxywidget_delete(void* self);

/// https://doc.qt.io/qt-6/qgraphicsproxywidget.html#types

typedef enum {
    QGRAPHICSPROXYWIDGET__TYPE = 12
} QGraphicsProxyWidget__;

#endif
